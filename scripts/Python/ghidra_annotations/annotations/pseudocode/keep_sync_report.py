# Keep-sync report
# Runs scripts/Python/check_keep_signatures.py over the freshly exported tree and
# writes reports/keep_sync.txt: every .keep that an export has left out of step
# with the .cpp/.c beside it - stranded by a rename, a definition that no longer
# matches the export's signature, or a header line the export has changed.
#
# The checker is loaded from its file rather than imported, so it stays a plain
# command-line script with no dependency on this package, and the report and the
# command line can never disagree.

import importlib.util
import os

from ghidra_annotations.util.log import log_info, log_warning


REPORT_NAME = "keep_sync.txt"

# scripts/Python/ghidra_annotations/annotations/pseudocode -> scripts/Python
_SCRIPTS_DIR = os.path.dirname(os.path.dirname(os.path.dirname(
    os.path.dirname(os.path.abspath(__file__)))))
_CHECKER_PATH = os.path.join(_SCRIPTS_DIR, "check_keep_signatures.py")


def _load_checker():
    spec = importlib.util.spec_from_file_location("check_keep_signatures", _CHECKER_PATH)
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


def generate_keep_sync_report(pseudocode_src_dir, reports_dir):
    """Write reports/keep_sync.txt. Returns the number of .keep files listed."""
    if not os.path.isfile(_CHECKER_PATH):
        log_warning("Keep-sync report skipped: %s not found" % _CHECKER_PATH)
        return 0

    checker = _load_checker()
    results, keeps_seen = checker.collect(pseudocode_src_dir)
    report = checker.format_report(results, keeps_seen, relative_to=pseudocode_src_dir)

    report_path = os.path.join(reports_dir, REPORT_NAME)
    with open(report_path, "w") as f:
        f.write("# .keep files out of step with the export beside them.\n")
        f.write("# Regenerated on every export; re-check by hand with\n")
        f.write("#   python3 scripts/Python/check_keep_signatures.py\n\n")
        f.write(report)

    if results:
        log_warning("%d .keep file(s) out of sync with the export; see reports/%s"
                    % (len(results), REPORT_NAME))
    else:
        log_info("All %d .keep files match the export" % keeps_seen)
    return len(results)
