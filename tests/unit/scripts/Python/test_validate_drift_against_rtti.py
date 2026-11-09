# Imports
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from repo_paths import SCRIPTS_DIR
from sibling_images import write_json
from struct_types import install_struct_types
import validate_drift_against_rtti as vdr


def drifting(delta, support = 20):
    return {"segments": [{"from_lo": 0, "delta": delta, "support": support, "boundary_before": None}]}


# CBase matches its RTTI; CDerived does not; CSfxSample was never measured; CFree has no RTTI;
# CWeak's only segment is too thin to be its layout.
DRIFT = {"drift": {"CBase": drifting(-4), "CDerived": drifting(-8), "CFree": drifting(-4), "CWeak": drifting(-4, 1)}}


@pytest.fixture(name = "drift")
def fixture_drift(monkeypatch, tmp_path):
    install_struct_types(monkeypatch, tmp_path)
    return write_json(tmp_path / "drift.json", DRIFT)


def rows(output):
    return {line.split()[1]: line.split()[0] for line in output.splitlines()[3:] if line.strip()}


def test_each_measured_shift_is_checked_against_the_size_each_build_records(drift, capsys):
    assert vdr.main([drift, "--from-program", "from.exe", "--to-program", "to.exe"]) == 0
    out = capsys.readouterr().out
    # unmeasured: CSfxSample, CNoLayout, CHolderSub, CHolder2Sub
    assert out.splitlines()[0] == "CONFIRMED=1  CONTRADICTED=1  NO-RTTI=1  UNMEASURED=4"
    verdicts = rows(out)
    assert (verdicts["CBase"], verdicts["CDerived"], verdicts["CSfxSample"], verdicts["CFree"]) == (
        "CONFIRMED", "CONTRADICTED", "UNMEASURED", "NO-RTTI")
    assert "CSame" not in verdicts and "CWeak" not in verdicts
    assert out.splitlines()[3].split()[0] == "CONTRADICTED"
    assert "  CONFIRMED     CBase                            +4         +4       +4" in out
    assert "  NO-RTTI       CFree                             -         +4         " in out


def test_only_roots_leaves_out_what_members_explain(drift, capsys):
    vdr.main([drift, "--from-program", "from.exe", "--to-program", "to.exe", "--only-roots"])
    verdicts = rows(capsys.readouterr().out)
    assert "CBase" in verdicts and "CDerived" not in verdicts and "CFree" not in verdicts


def test_runs_as_a_script(monkeypatch):
    monkeypatch.setattr(sys, "argv", ["validate_drift_against_rtti.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "validate_drift_against_rtti.py"), run_name = "__main__")
    assert exit_info.value.code == 0
