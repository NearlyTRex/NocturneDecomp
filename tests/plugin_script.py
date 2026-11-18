# Runs a Ghidra menu script (#@menupath) the way the Script Manager does: as a
# top-level module whose globals hold getSourceFile, currentProgram and the
# current location or selection.

# Imports
import os
import runpy

# Local imports
from repo_paths import SCRIPTS_DIR


class SourceFile:
    def __init__(self, path):
        self.path = path

    def getAbsolutePath(self):
        return self.path


def run_plugin(name, **ghidra_globals):
    """Run scripts/Python/<name> with the Script Manager's globals; returns its namespace."""
    path = os.path.join(SCRIPTS_DIR, name)
    init = {"getSourceFile": lambda: SourceFile(path)}
    init.update(ghidra_globals)
    return runpy.run_path(path, init_globals = init)
