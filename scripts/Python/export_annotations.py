# Exports Ghidra annotations from the current program to JSON files.
#@author NearlyTRex
#@category Annotations
#@keybinding
#@menupath File.Annotations.Export to JSON
#@toolbar

# Imports
import os
import sys

# Add library path
this_dir = os.path.dirname(getSourceFile().getAbsolutePath())
pkg_root = os.path.join(this_dir, "ghidra_annotations")
if pkg_root not in sys.path:
    sys.path.insert(0, this_dir)

# Imports
from ghidra_annotations.annotations import *
from ghidra_annotations.util import *

# Export files
setup_logging(name="ghidra_export", filename="ghidra_export.log")
folder = ask_folder(state, "Select Export Folder", "Export Here")
export_annotations(currentProgram, folder)
show_message_dialogue("Export Complete", "All annotations exported to: %s" % folder)
