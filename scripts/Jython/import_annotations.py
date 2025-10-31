# Imports saved Ghidra annotations from JSON files into the current program.
#@author NearlyTRex
#@category Annotations
#@keybinding
#@menupath File.Annotations.Import from JSON
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

# Import files
setup_logging(name="ghidra_import", filename="ghidra_import.log")
folder = ask_folder(state, "Select Import Folder", "Import From Here")
delete_annotations(currentProgram, folder)
import_annotations(currentProgram, folder)
show_message_dialogue("Import Complete", "All annotations imported from: %s" % folder)
