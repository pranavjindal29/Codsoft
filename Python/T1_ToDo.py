import tkinter as tk
from tkinter import *
from tkinter import messagebox

tasks = []

def add_task():
    task = task_entry.get()
    if task:
        tasks.append(task)
        task_listbox.insert(tk.END, task)
        task_entry.delete(0, tk.END)
    else:
        messagebox.showwarning("Empty Task", "Please enter a task.")

def update_task():
    selected_task = task_listbox.curselection()
    if selected_task:
        new_task = task_entry.get()
        tasks[selected_task[0]] = new_task
        task_listbox.delete(selected_task)
        task_listbox.insert(selected_task, new_task)
        task_entry.delete(0, tk.END)
    else:
        messagebox.showwarning("No Task Selected", "Please select a task to update.")

def delete_task():
    selected_task = task_listbox.curselection()
    if selected_task:
        tasks.pop(selected_task[0])
        task_listbox.delete(selected_task)
    else:
        messagebox.showwarning("No Task Selected", "Please select a task to delete.")

root = tk.Tk()
root.title("To-Do List")
root.geometry('600x300')

heading = tk.Label(
    root, text="ToDo List", bg="#24E54A", font=("Arial", 15, "bold")
)
heading.pack(fill=tk.X)

lbl = Label(root, text='Enter Task:')
lbl.place(x=7, y=40)

task_entry = tk.Entry(root, width=40)
task_entry.place(x=75, y=40)

add_button = tk.Button(root, text="Add", bg="#24E54A", fg="#FFFFFF", width = 10, command=add_task)
add_button.place(x=370, y=40)

update_button = tk.Button(root, text="Update ",bg="blue", fg="#FFFFFF", width = 10, command=update_task)
update_button.place(x=440,y=40)

delete_button = tk.Button(root, text="Delete ",bg="red", fg="#FFFFFF", width = 10, command=delete_task)
delete_button.place(x=515, y=40)

lbl = Label(root, text='List:')
lbl.place(x=5, y=75)

task_listbox = tk.Listbox(root, width=97, selectbackground= "#24E54A", selectforeground="#FFFFFF")
task_listbox.place(x=5, y=100)

root.mainloop()