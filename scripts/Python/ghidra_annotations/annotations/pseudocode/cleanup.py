# Cleanup utilities for pseudocode export
# Provides file deletion and directory cleanup

import os
from ghidra_annotations.util.log import log_info


def delete_pseudocode(currentProgram, path):
    """Delete all pseudocode files in the output directory.

    Args:
        currentProgram: The Ghidra program (unused but kept for API consistency)
        path: Base directory containing the pseudocode folder
    """
    # Get pseudocode dir
    pseudocode_dir = os.path.join(path, "pseudocode")
    if not os.path.exists(pseudocode_dir):
        log_info("No pseudocode directory found - nothing to delete")
        return

    # Delete all pseudocode files
    deleted_count = 0
    log_info("Deleting all pseudocode files")
    for root, dirs, files in os.walk(pseudocode_dir):
        for file in files:
            if file.lower().endswith(('.c', '.cpp', '.h', '.asm', '.json', '.pcode')):
                file_path = os.path.join(root, file)
                try:
                    os.remove(file_path)
                    log_info("Deleted file: %s" % os.path.relpath(file_path, pseudocode_dir))
                    deleted_count += 1
                except Exception as e:
                    log_info("Failed to delete file %s: %s" % (file, str(e)))

    # Remove empty directories
    for root, dirs, files in os.walk(pseudocode_dir, topdown=False):
        for dir_name in dirs:
            dir_path = os.path.join(root, dir_name)
            try:
                if not os.listdir(dir_path):
                    os.rmdir(dir_path)
                    log_info("Removed empty directory: %s" % os.path.relpath(dir_path, pseudocode_dir))
            except Exception as e:
                pass
    log_info("Deleted %d files" % deleted_count)
