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

    # Directories to skip during cleanup (hand-written, not auto-generated)
    protected_dirs = {'shims'}

    # Delete all pseudocode files
    deleted_count = 0
    log_info("Deleting all pseudocode files")
    for root, dirs, files in os.walk(pseudocode_dir):
        # Skip protected directories
        rel_root = os.path.relpath(root, pseudocode_dir)
        root_parts = rel_root.split(os.sep)
        if root_parts[0] in protected_dirs:
            continue

        # Prevent os.walk from descending into protected dirs
        dirs[:] = [d for d in dirs if d not in protected_dirs]

        for file in files:
            if file.lower().endswith(('.c', '.cpp', '.h', '.asm', '.json', '.pcode')):
                # Protect manual override files (.keep.cpp, .keep.h, etc.)
                if '.keep.' in file.lower():
                    continue
                file_path = os.path.join(root, file)
                try:
                    os.remove(file_path)
                    log_info("Deleted file: %s" % os.path.relpath(file_path, pseudocode_dir))
                    deleted_count += 1
                except Exception as e:
                    log_info("Failed to delete file %s: %s" % (file, str(e)))

    # Remove empty directories (skip protected dirs)
    for root, dirs, files in os.walk(pseudocode_dir, topdown=False):
        for dir_name in dirs:
            if dir_name in protected_dirs:
                continue
            dir_path = os.path.join(root, dir_name)
            try:
                if not os.listdir(dir_path):
                    os.rmdir(dir_path)
                    log_info("Removed empty directory: %s" % os.path.relpath(dir_path, pseudocode_dir))
            except Exception as e:
                pass
    log_info("Deleted %d files" % deleted_count)
