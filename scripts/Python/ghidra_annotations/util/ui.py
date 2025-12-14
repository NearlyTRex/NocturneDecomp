import os
import sys
from ghidra_annotations.util.log import *
from javax.swing import JOptionPane
from docking.widgets.filechooser import GhidraFileChooser

def show_message_dialogue(title, message):
    JOptionPane.showMessageDialog(
        None,
        message,
        title,
        JOptionPane.INFORMATION_MESSAGE)

def ask_folder(state, title, prompt):
    chooser = GhidraFileChooser(state.getTool().getActiveWindow())
    chooser.setTitle(title)
    chooser.setFileSelectionMode(GhidraFileChooser.DIRECTORIES_ONLY)
    chooser.setApproveButtonText(prompt)
    file = chooser.getSelectedFile()
    if file is None:
        log_error("User cancelled.")
    return file.getAbsolutePath()
