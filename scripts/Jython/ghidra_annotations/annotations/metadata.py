import os
from ghidra_annotations.util import *

def export_metadata(currentProgram, path):

    # Gather metadata
    log_info("Gather metadata")
    md = {
        "program": currentProgram.getName(),
        "language": str(currentProgram.getLanguageID()),
        "compiler": str(currentProgram.getCompilerSpec().getCompilerSpecID()),
        "format": currentProgram.getExecutableFormat(),
        "md5": currentProgram.getExecutableMD5(),
        "sha256": currentProgram.getExecutableSHA256()
    }

    # Export metadata
    log_info("Exporting metadata")
    save_json_file(path, "metadata", clean_data(md))
    log_info("Export complete")
