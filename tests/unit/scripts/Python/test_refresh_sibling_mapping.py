# Imports
import json
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from repo_paths import SCRIPTS_DIR
from sibling_images import write_json as write
import refresh_sibling_mapping as rsm


def pair(a, b, name = "n", **extra):
    return {"a": a, "b": b, "name": name, **extra}


def test_the_canonical_mapping_lives_in_the_targets_reports(monkeypatch):
    monkeypatch.setattr(rsm, "REPO", "/repo")
    assert rsm.canonical_path("b.exe") == "/repo/annotations/b.exe/reports/sibling_verified_mapping.json"


# -- running a stage --------------------------------------------------------------

@pytest.fixture(name = "stages")
def fixture_stages(monkeypatch, tmp_path):
    (tmp_path / "ok.py").write_text("import os, sys\nprint('ran', sys.argv[1:], os.environ['PYTHONHASHSEED'])\n")
    (tmp_path / "finding.py").write_text("import sys\nprint('found it')\nsys.exit(2)\n")
    monkeypatch.setattr(rsm, "THIS_DIR", str(tmp_path))
    return tmp_path


def test_a_stage_streams_its_output_with_the_hash_seed_pinned(stages, capfd):
    assert rsm.run("ok.py", ["x"], quiet = False) == 0
    out = capfd.readouterr().out
    assert "=== ok.py ===" in out and "ran ['x'] 0" in out


def test_a_quiet_stage_shows_its_output_only_when_it_fails(stages, capfd):
    assert rsm.run("ok.py", [], quiet = True) == 0
    assert capfd.readouterr().out == ""
    assert rsm.run("finding.py", [], quiet = True, allow_fail = True) == 2
    assert "found it" in capfd.readouterr().err


def test_a_failing_stage_stops_the_refresh(stages):
    with pytest.raises(SystemExit, match = "finding.py failed"):
        rsm.run("finding.py", [], quiet = True)


# -- merging the extra stages ------------------------------------------------------

def test_extra_pairs_only_add_and_matched_functions_leave_the_worklists(tmp_path):
    base = write(tmp_path / "base.json", {
        "pairs": [pair("00401000", "00501000")], "unmatched_a": ["00401010", "00401020"],
        "unmatched_b": ["00501010"], "editor_only": [{"a": "00401010"}, {"a": "00401030"}]})
    extra = write(tmp_path / "extra.json", {"pairs": [
        pair("00401010", "00501010"), pair("00401000", "00509999"), pair("00409999", "00501000"),
        {"a": "", "b": "00501111"}]})
    out = tmp_path / "out.json"
    assert rsm.merge_extra_pairs(base, extra, str(out)) == 1
    merged = json.loads(out.read_text())
    assert [(p["a"], p["b"]) for p in merged["pairs"]] == [("00401000", "00501000"), ("00401010", "00501010")]
    assert merged["unmatched_a"] == ["00401020"]
    assert merged["unmatched_b"] == []
    assert merged["editor_only"] == [{"a": "00401030"}]


def test_a_mapping_without_worklists_merges_too(tmp_path):
    base = write(tmp_path / "base.json", {"pairs": []})
    extra = write(tmp_path / "extra.json", {})
    assert rsm.merge_extra_pairs(base, extra, str(tmp_path / "out.json")) == 0


# -- the gap report ----------------------------------------------------------------

REPORT = """import sys
args = sys.argv[1:]
if "fail" in args[args.index("--to") + 1]:
    sys.stderr.write("broken\\n")
    sys.exit(3)
print("mapping", args[args.index("--mapping") + 1], "from", args[args.index("--from") + 1])
print("  candidate pairs: 4")
print("  12 pairable brackets covering 30 functions")
"""


def test_the_gap_report_describes_the_mapping_just_written(stages, tmp_path, capsys):
    (stages / "report_sibling_gaps.py").write_text(REPORT)
    out = tmp_path / "gaps.txt"
    rsm.write_gap_report("a.exe", "b.exe", "/m.json", str(out), quiet = True)
    assert out.read_text().splitlines()[0] == "mapping /m.json from a.exe"
    printed = capsys.readouterr().out
    assert f"[gap-report] wrote {out}" in printed
    assert "  candidate pairs: 4" in printed and "12 pairable brackets covering 30 functions" in printed


@pytest.mark.parametrize("quiet, shows_stderr", [(True, False), (False, True)])
def test_a_failed_gap_report_leaves_the_old_one(stages, tmp_path, capsys, quiet, shows_stderr):
    (stages / "report_sibling_gaps.py").write_text(REPORT)
    out = tmp_path / "gaps.txt"
    out.write_text("old")
    rsm.write_gap_report("a.exe", "fail.exe", "/m.json", str(out), quiet = quiet)
    captured = capsys.readouterr()
    assert out.read_text() == "old"
    assert "report_sibling_gaps.py exited 3" in captured.out
    assert ("broken" in captured.err) == shows_stderr


def test_a_gap_report_that_cannot_run_is_skipped(stages, tmp_path, monkeypatch, capsys):
    out = tmp_path / "gaps.txt"
    rsm.write_gap_report("a.exe", "b.exe", "/m.json", str(out), quiet = True)
    assert not out.exists()
    (stages / "report_sibling_gaps.py").write_text(REPORT)

    def no_launch(*args, **kwargs):
        raise OSError("no python")

    monkeypatch.setattr(rsm.subprocess, "run", no_launch)
    rsm.write_gap_report("a.exe", "b.exe", "/m.json", str(out), quiet = True)
    assert "could not launch report_sibling_gaps.py: no python" in capsys.readouterr().out


# -- the diff ----------------------------------------------------------------------

def test_load_gives_none_for_a_missing_file(tmp_path):
    assert rsm.load(str(tmp_path / "none.json")) is None
    assert rsm.load(write(tmp_path / "x.json", {"pairs": []})) == {"pairs": []}


def test_a_first_refresh_says_how_many_pairs_it_wrote(capsys):
    rsm.diff(None, {"pairs": [pair("a", "b")]}, 10)
    assert "no previous mapping -- 1 pairs written" in capsys.readouterr().out


def test_a_refresh_reports_every_kind_of_change(capsys):
    old = {"pairs": [pair("1", "B1", "old"), pair("2", "B2", sig_verdict = "ok"), pair("3", "B3"),
                     pair("4", "B4", "gone")]}
    new = {"pairs": [pair("1", "b1", "new"), pair("9", "b2", sig_verdict = "bad"), pair("3", "b3"),
                     pair("5", "b5", "fresh"), pair("6", "b6", "fresh2")]}
    rsm.diff(old, new, 1)
    out = capsys.readouterr().out
    assert "pairs      4 -> 5   (+2 new, -1 dropped)" in out
    assert "renamed    1" in out and "retargeted 1" in out and "verdicts   1 changed" in out
    assert "b1  old\n              -> new" in out
    assert "b2  a: 2 -> 9" in out
    assert "DROPPED (1):\n    b4  gone" in out
    assert "NEW (2):\n    b5  fresh\n    ... and 1 more (raise --show)" in out


def test_an_unchanged_refresh_lists_no_sections(capsys):
    doc = {"pairs": [pair("1", "b1")]}
    rsm.diff(doc, doc, 10)
    out = capsys.readouterr().out
    assert "pairs      1 -> 1   (+0 new, -0 dropped)" in out and "RENAMED" not in out


# -- the whole pipeline ------------------------------------------------------------

class Pipeline:
    """Stands in for run(): each stage writes what the real one would."""

    def __init__(self, dtor_rc = 0, factory_rc = 0, pairs = True):
        self.calls, self.dtor_rc, self.factory_rc, self.pairs = [], dtor_rc, factory_rc, pairs

    def __call__(self, stage, argv, quiet, allow_fail = False):
        self.calls.append((stage, argv))
        if stage == "map_sibling_functions.py":
            write_doc(after(argv, "-o"), {"pairs": [pair("00401000", "00501000")] if self.pairs else []})
        elif stage == "map_vtable_slots.py":
            write_doc(after(argv, "--out-pairs"), {"pairs": [pair("00401010", "00501010")]})
        elif stage == "map_destructor_pairs.py":
            write_doc(after(argv, "--out-pairs"), {"pairs": [pair("00401020", "00501020")]})
            return self.dtor_rc
        elif stage == "map_factory_pairs.py":
            write_doc(after(argv, "--out-pairs"), {"pairs": [pair("00401030", "00501030")]})
            return self.factory_rc
        else:
            with open(argv[0], encoding = "utf-8") as fh:
                write_doc(after(argv, "--out"), json.load(fh))
        return 0


# The value given after `flag` in argv
def after(argv, flag):
    return argv[argv.index(flag) + 1]


def write_doc(path, doc):
    with open(path, "w", encoding = "utf-8") as fh:
        json.dump(doc, fh)


@pytest.fixture(name = "repo")
def fixture_repo(monkeypatch, tmp_path):
    monkeypatch.setattr(rsm, "REPO", str(tmp_path))
    monkeypatch.setattr(rsm, "THIS_DIR", str(tmp_path / "scripts"))
    return tmp_path


def canonical(repo):
    return repo / "annotations" / "b.exe" / "reports" / "sibling_verified_mapping.json"


def test_a_refresh_runs_every_stage_and_writes_the_canonical_mapping(repo, monkeypatch, capsys):
    pipeline = Pipeline()
    monkeypatch.setattr(rsm, "run", pipeline)
    assert rsm.main(["--from", "a.exe", "--to", "b.exe"]) == 0
    assert [stage for stage, _ in pipeline.calls] == [
        "map_sibling_functions.py", "map_vtable_slots.py", "map_destructor_pairs.py",
        "map_factory_pairs.py", "verify_sibling_signatures.py"]
    assert pipeline.calls[0][1][-2:] == ["--min-confidence", "0.0"]
    written = json.loads(canonical(repo).read_text())
    assert [p["b"] for p in written["pairs"]] == ["00501000", "00501010", "00501020", "00501030"]
    out = capsys.readouterr().out
    assert "merged 1 drifted-vtable pair(s)" in out and "merged 1 deterministic factory pair(s)" in out


def test_a_second_refresh_keeps_the_previous_mapping_unless_told_not_to(repo, monkeypatch, capsys):
    monkeypatch.setattr(rsm, "run", Pipeline())
    rsm.main(["--to", "b.exe"])
    rsm.main(["--to", "b.exe"])
    assert (canonical(repo).parent / "sibling_verified_mapping.json.prev.json").exists()
    assert "previous kept at" in capsys.readouterr().out
    (canonical(repo).parent / "sibling_verified_mapping.json.prev.json").unlink()
    rsm.main(["--to", "b.exe", "--no-backup"])
    assert not (canonical(repo).parent / "sibling_verified_mapping.json.prev.json").exists()


def test_check_and_skipped_stages_leave_the_mapping_alone(repo, monkeypatch, tmp_path, capsys):
    pipeline = Pipeline()
    monkeypatch.setattr(rsm, "run", pipeline)
    out = tmp_path / "elsewhere" / "m.json"
    assert rsm.main(["--to", "b.exe", "--out", str(out), "--check", "--no-vtable-slots", "--no-dtor-pairs",
                     "--no-factory-pairs", "--no-ledger", "-q"]) == 0
    assert not out.exists()
    assert [stage for stage, _ in pipeline.calls] == ["map_sibling_functions.py", "verify_sibling_signatures.py"]
    assert pipeline.calls[0][1][-2:] == ["--no-ledger", "-q"]
    printed = capsys.readouterr().out
    assert "[--no-vtable-slots] skipping" in printed and "[--check]" in printed


def test_a_named_ledger_is_handed_to_the_matcher(repo, monkeypatch):
    pipeline = Pipeline()
    monkeypatch.setattr(rsm, "run", pipeline)
    rsm.main(["--to", "b.exe", "--ledger", "pairs.json", "--no-gap-report"])
    assert pipeline.calls[0][1][-2:] == ["--ledger", "pairs.json"]


def test_the_gap_report_is_regenerated_beside_the_written_mapping(repo, monkeypatch):
    calls = []
    monkeypatch.setattr(rsm, "run", Pipeline())
    monkeypatch.setattr(rsm, "write_gap_report", lambda *args: calls.append(args))
    rsm.main(["--from", "a.exe", "--to", "b.exe", "-q"])
    assert calls == [("a.exe", "b.exe", str(canonical(repo)), str(canonical(repo).parent / "sibling_gaps.txt"),
                      True)]


@pytest.mark.parametrize("stage, message", [
    ("dtor", "the destructor registry contradicts"), ("factory", "the static-init registry contradicts")])
def test_a_registry_that_contradicts_the_mapping_blocks_the_write(repo, monkeypatch, stage, message):
    monkeypatch.setattr(rsm, "run", Pipeline(**{f"{stage}_rc": 2}))
    with pytest.raises(SystemExit, match = message):
        rsm.main(["--to", "b.exe"])
    assert not canonical(repo).exists()
    rsm.main(["--to", "b.exe", "--allow-dtor-conflicts", "--no-gap-report"])
    assert canonical(repo).exists()


@pytest.mark.parametrize("stage", ["dtor", "factory"])
def test_a_registry_stage_that_crashes_stops_the_refresh(repo, monkeypatch, stage):
    monkeypatch.setattr(rsm, "run", Pipeline(**{f"{stage}_rc": 1}))
    with pytest.raises(SystemExit, match = "failed \\(exit 1\\)"):
        rsm.main(["--to", "b.exe"])


def test_a_pipeline_that_pairs_nothing_never_overwrites(repo, monkeypatch):
    monkeypatch.setattr(rsm, "run", Pipeline(pairs = False))
    monkeypatch.setattr(rsm, "merge_extra_pairs", lambda *args: 0)
    with pytest.raises(SystemExit, match = "produced no pairs"):
        rsm.main(["--to", "b.exe", "--no-vtable-slots", "--no-dtor-pairs", "--no-factory-pairs"])


def test_runs_as_a_script(repo, monkeypatch):
    monkeypatch.setattr(sys, "argv", ["refresh_sibling_mapping.py", "--help"])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "refresh_sibling_mapping.py"), run_name = "__main__")
    assert exit_info.value.code == 0
