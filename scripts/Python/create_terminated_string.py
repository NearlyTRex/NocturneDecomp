# Create or replace string at the given memory location
#@author NearlyTRex
#@category Annotations
#@keybinding shift L
#@menupath File.Annotations.Create or Replace String
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
from ghidra_annotations.util import *

# Create or replace string
setup_logging(name="ghidra_string", filename="ghidra_string.log")
string_addr = currentAddress if currentSelection is None else currentSelection.getMinAddress()
create_or_replace_string(currentProgram, string_addr)
