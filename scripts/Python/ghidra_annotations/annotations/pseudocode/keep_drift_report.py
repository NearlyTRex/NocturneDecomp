# Keep-drift report
# Runs scripts/Python/check_keep_drift.py over the freshly exported tree and writes
# reports/keep_drift.txt: how far each .keep is from the .cpp/.c beside it, with
# the ones Ghidra's output has caught up with listed as redundant.
#
# The checker is loaded from its file rather than imported, so it stays a plain
# command-line script with no dependency on this package, and the report and the
# command line can never disagree.

import importlib.util
import os

from ghidra_annotations.util.log import log_info, log_warning


REPORT_NAME = "keep_drift.txt"

# scripts/Python/ghidra_annotations/annotations/pseudocode -> scripts/Python
_SCRIPTS_DIR = os.path.dirname(os.path.dirname(os.path.dirname(
    os.path.dirname(os.path.abspath(__file__)))))
CHECKER_PATH = os.path.join(_SCRIPTS_DIR, "check_keep_drift.py")


def _load_checker(path):
    spec = importlib.util.spec_from_file_location("check_keep_drift", path)
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


def generate_keep_drift_report(pseudocode_src_dir, reports_dir, checker_path=CHECKER_PATH):
    """Write reports/keep_drift.txt. Returns the number of redundant .keep files."""
    if not os.path.isfile(checker_path):
        log_warning("Keep-drift report skipped: %s not found" % checker_path)
        return 0
    checker = _load_checker(checker_path)
    rows = checker.collect(pseudocode_src_dir)
    with open(os.path.join(reports_dir, REPORT_NAME), "w", encoding="utf-8") as f:
        f.write("# How far each .keep is from the export beside it.\n")
        f.write("# Regenerated on every export; re-check by hand with\n")
        f.write("#   python3 scripts/Python/check_keep_drift.py\n\n")
        f.write(checker.format_report(rows, relative_to=pseudocode_src_dir))
    redundant = sum(1 for r in rows if r["kind"] == "identical" and not r["shim"])
    log_info("%d of %d .keep files are now identical to the export; see reports/%s"
             % (redundant, len(rows), REPORT_NAME))
    return redundant
