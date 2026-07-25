# Cleanup utilities for pseudocode export
# Provides file deletion and directory cleanup

import os
from ghidra_annotations.util.log import log_info


def _is_exporter_output(file_path):
    """True if the file carries the exporter's "// Name: <func>" header.

    Used to identify extension-less files as ours before deleting them, so an
    unrelated file that happens to have no extension is left alone.
    """
    try:
        with open(file_path, 'r') as f:
            return f.readline().startswith('// Name: ')
    except Exception:
        return False


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

    # Paths (relative to pseudocode/) to skip during cleanup — hand-written
    # or generated outside the exporter pipeline. May be nested.
    protected_paths = {'shims', 'main', 'checks'}

    def _is_protected(rel):
        rel = rel.replace(os.sep, '/')
        if rel == '.':
            return False
        for p in protected_paths:
            if rel == p or rel.startswith(p + '/'):
                return True
        return False

    # Delete all pseudocode files
    deleted_count = 0
    log_info("Deleting all pseudocode files")
    for root, dirs, files in os.walk(pseudocode_dir):
        rel_root = os.path.relpath(root, pseudocode_dir)
        if _is_protected(rel_root):
            dirs[:] = []
            continue

        # Prevent os.walk from descending into protected children
        rel_norm = '' if rel_root == '.' else rel_root.replace(os.sep, '/')
        dirs[:] = [
            d for d in dirs
            if not _is_protected(d if not rel_norm else rel_norm + '/' + d)
        ]

        for file in files:
            file_path = os.path.join(root, file)
            if file.lower().endswith(('.c', '.cpp', '.h', '.asm', '.json', '.pcode')):
                # Protect manual override files (.keep.cpp, .keep.h, etc.)
                if '.keep.' in file.lower():
                    continue
            elif '.' not in file:
                # Extension-less leftovers from older exporter runs that dropped
                # the file extension. Without this they can never be swept, so
                # they linger as orphans long after the function was renamed.
                if not _is_exporter_output(file_path):
                    continue
            else:
                continue

            try:
                os.remove(file_path)
                log_info("Deleted file: %s" % os.path.relpath(file_path, pseudocode_dir))
                deleted_count += 1
            except Exception as e:
                log_info("Failed to delete file %s: %s" % (file, str(e)))

    # Remove empty directories (skip protected paths)
    for root, dirs, files in os.walk(pseudocode_dir, topdown=False):
        for dir_name in dirs:
            dir_path = os.path.join(root, dir_name)
            rel_dir = os.path.relpath(dir_path, pseudocode_dir)
            if _is_protected(rel_dir):
                continue
            try:
                if not os.listdir(dir_path):
                    os.rmdir(dir_path)
                    log_info("Removed empty directory: %s" % rel_dir)
            except Exception as e:
                pass
    log_info("Deleted %d files" % deleted_count)
