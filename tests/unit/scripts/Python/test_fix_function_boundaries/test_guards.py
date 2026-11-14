# Imports
import json

# Local imports
from boundary_program import BASE, BoundaryProgram, at, finding, function
import fix_function_boundaries as ffb


# --- vtables, guards and manual fixes -----------------------------------------------------------

def test_vtable_targets_come_from_every_exported_slot(repo, capsys):
    vtables = repo / "annotations" / "bw1.exe" / "vtables"
    vtables.mkdir(parents = True)
    (vtables / "a.json").write_text(json.dumps([{"func_addr": "00401000"}, {"func_addr": "0040A0f0"}]),
                                    encoding = "utf-8")
    (vtables / "notes.txt").write_text('"func_addr": "00409999"', encoding = "utf-8")
    (vtables / "broken.json").mkdir()
    assert ffb.load_vtable_targets("bw1.exe") == {0x401000, 0x40a0f0}
    assert "WARN: could not read broken.json" in capsys.readouterr().out


def test_without_a_vtables_export_the_veto_warns(repo, capsys):
    assert ffb.load_vtable_targets("bw1.exe") == set()
    assert "vtable veto unavailable!" in capsys.readouterr().out


def test_guards_come_from_the_code_caves_and_byte_patches(repo):
    caves = repo / "annotations" / "bw1.exe" / "code_caves.json"
    caves.parent.mkdir(parents = True)
    caves.write_text(json.dumps({"caves": [{"start": "00402000", "total_size": 16}, {"start": "403000"}]}),
                     encoding = "utf-8")
    (repo / "scripts" / "Python" / "byte_patches.json").write_text(
        json.dumps({"groups": [{"patches": [{"address": "00404000"}]}, {}]}), encoding = "utf-8")
    assert ffb.load_guard_ranges("bw1.exe") == ([(0x402000, 0x402010), (0x403000, 0x403000)], [0x404000])


def test_missing_guard_files_guard_nothing_and_broken_ones_warn(repo, capsys):
    assert ffb.load_guard_ranges("bw1.exe") == ([], [])
    caves = repo / "annotations" / "bw1.exe" / "code_caves.json"
    caves.parent.mkdir(parents = True)
    caves.write_text("{", encoding = "utf-8")
    (repo / "scripts" / "Python" / "byte_patches.json").write_text('{"groups": [{"patches": [{}]}]}',
                                                                  encoding = "utf-8")
    assert ffb.load_guard_ranges("bw1.exe") == ([], [])
    printed = capsys.readouterr().out
    assert "code_caves.json" in printed and "byte_patches.json" in printed


def test_a_body_is_patched_when_it_touches_a_cave_or_a_patched_byte():
    program = BoundaryProgram()
    func = function(program, 0, size = 0x10)
    assert ffb._body_is_patched(None, [(0, 1)], [0]) is None
    assert ffb._body_is_patched(func, [(BASE + 0x0f, BASE + 0x20)], []) == "code cave @00100f"
    assert ffb._body_is_patched(func, [], [BASE + 4]) == "byte patch @001004"
    assert ffb._body_is_patched(func, [(BASE + 0x10, BASE + 0x20)], [BASE + 0x10]) is None


def test_manual_fixes_are_splits_onto_a_function_and_late_entries_otherwise():
    program = BoundaryProgram()
    function(program, 0, name = "Thing_FUN_00001000")
    function(program, 0x10)
    fixes = ffb.parse_manual(program, ["1010=1000", "1020=1018", "1000=1000"])
    assert [(f["kind"], f["entry"].getOffset(), f["correct"].getOffset(), f["name"]) for f in fixes] == [
        ("SPLIT(manual)", 0x1010, 0x1000, "FUN_00001010"),
        ("ENTRY_LATE(manual)", 0x1020, 0x1018, "<none>"),
        ("ENTRY_LATE(manual)", 0x1000, 0x1000, "Thing_FUN_00001000")]
    assert fixes[0]["other"] is program.getFunctionManager().getFunctionAt(at(BASE))
    assert fixes[1]["other"] is None and ffb.parse_manual(program, None) == []


# --- skips and the report -----------------------------------------------------------------------

def test_skips_name_why_each_finding_is_left():
    program = BoundaryProgram()
    patched = function(program, 0, size = 4)
    findings = [
        finding("OVERLAP"),
        finding("ENTRY_EARLY", joins = True),
        finding("SPLIT", spans = False),
        finding("SPLIT", spans = True),
        finding("ENTRY_LATE", name = "crt_thing"),
        finding("ENTRY_LATE", name = "Named_FUN_00001000"),
        finding("ENTRY_LATE", func = patched),
        finding("ENTRY_LATE", other = patched),
        finding("ENTRY_LATE"),
        finding("SPLIT(manual)"),
    ]
    ffb.annotate_skips(findings, False, ["^crt_", "^zzz"], False, ffb.DEFAULT_KINDS, [], [BASE + 1],
                       split_strong_only = True)
    strong_only, patched_skip = "--split-strong-only (A not fragmented around B)", "patched (byte patch @001001)"
    assert [f["skip"] for f in findings] == [
        "--kind", ffb.JOIN_SKIP, strong_only, None, "--exclude /^crt_/", None, patched_skip, patched_skip, None,
        strong_only]
    ffb.annotate_skips(findings, True, [], True, ffb.ALL_KINDS, [], [BASE + 1])
    assert [f["skip"] for f in findings][4:] == ["--only-fun", "--only-fun", None, None, None, None]


def test_the_report_marks_alignment_names_notes_and_skips(capsys):
    findings = [finding("ENTRY_EARLY", name = "Thing_FUN_00001002", note = "1 ref(s)", skip = "--kind"),
                {**finding("ENTRY_LATE"), "correct": at(BASE + 1)}]
    assert ffb.report(findings) is findings
    printed = capsys.readouterr().out
    assert "=== boundary findings: 2 (1 actionable, 1 skipped) ===" in printed
    assert ("  ENTRY_EARLY        entry 00001002 -> 00001010 [16-aligned]  <<NAMED: Thing_FUN_00001002>>"
            "  {1 ref(s)}  (skipped: --kind)") in printed
    assert "  ENTRY_LATE         entry 00001002 -> 00001001\n" in printed
