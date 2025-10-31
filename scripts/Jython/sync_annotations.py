# Sync saved Ghidra annotations from and to JSON files with the current program.
#@author NearlyTRex
#@category Annotations
#@keybinding
#@menupath File.Annotations.Sync from and to JSON
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

# Sync files
setup_logging(name="ghidra_sync", filename="ghidra_sync.log")
folder = ask_folder(state, "Select Sync Folder", "Sync From Here")
delete_annotations(currentProgram, folder)
import_annotations(currentProgram, folder)
export_annotations(currentProgram, folder)
show_message_dialogue("Sync Complete", "All annotations synced to: %s" % folder)
