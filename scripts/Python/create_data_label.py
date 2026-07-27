# Create a label for applied data that has no label yet, named after its data type
#@author NearlyTRex
#@category Annotations
#@keybinding shift K
#@menupath File.Annotations.Create Data Label
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

# Create labels for applied data
setup_logging(name="ghidra_label", filename="ghidra_label.log")
if currentSelection is not None:
    created_count = create_labels_in_range(currentProgram, currentSelection)
else:
    created_count = create_label_at_address(currentProgram, currentAddress)
print("Created %d data label(s)" % created_count)
