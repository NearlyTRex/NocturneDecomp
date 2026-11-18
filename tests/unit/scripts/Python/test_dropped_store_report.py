# Imports
import json
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from repo_paths import SCRIPTS_DIR
import dropped_store_report as dsr

SOURCE = """void netgame_send(void)

{
  int packet;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_10;
  uint local_50;
  uint local_4c;
  uint local_34;
  uint local_3c;
  char buf [4];

  send(&packet, buf);
  return;
}
"""

# Frame offset = ESP delta + displacement; most lines sit at delta -100.
PCODE = """not an instruction
@00401000 [ESP:-100]  # MOV dword ptr [ESP + 0x40], EAX
@00401004 [ESP:-100]  # MOV dword ptr [ESP + 68], ECX
@00401008 [ESP:-100]  # MOV EDX, dword ptr [ESP + 0x44]
@0040100c [ESP:-100]  # MOV dword ptr [ESP + 0x48], EBX
@00401010 [ESP:-100]  # LEA ESI, [ESP + 0x48]
@00401014 [ESP:-100]  # MOV EDI, ESI
@00401018 [ESP:-100]  # MOV EAX, dword ptr [EDI]
@0040101c [ESP:-100]  # CMP [ESI + 0x4], 0
@00401020 [ESP:-100]  # LEA EBX, [EDI + 4]
@00401024 [ESP:-100]  # LEA ECX, [EBP - 0x8]
@00401028 [ESP:-100]  # MOV EDX, ECX
@0040102c [ESP:-100]  # MOV dword ptr [ESP + 0x54], EAX
@00401030 [ESP:-100]  # MOV dword ptr [ESP + 0x14], EAX
@00401034 [ESP:-100]  # MOV dword ptr [ESP + 0x18], EAX
@00401038 [ESP:-100]  # MOV dword ptr [ESP + 0x30], EAX
@0040103c [ESP:-100]  # FLD qword ptr [ESP + 0x2c]
@00401040 [ESP:-100]  # MOV dword ptr [ESP - 0x4], EAX
@00401044 [ESP:-100]  # LEA EAX, [ESP + 0x24]
@00401048 [ESP:-100]  # PUSH EAX
@0040104c [ESP:-100]  # PUSH 0x5
@00401050 [ESP:-100]  # MOV dword ptr [ESP], EAX
@00401054 [ESP:-100]  # CALL 0x00402000
@00401058 [ESP:-96]   # MOV dword ptr [ESP + 0x24], EAX
@0040105c [ESP:-100]  # MOV EAX, ESP
@00401060 [ESP:-100]  # LEA EDX, [ESP + 0x3c]
@00401064 [ESP:-100]  # ADD EDX, 4
@00401068 [ESP:-100]  # LEA EAX, [ESP + 0x3c]
@0040106c [ESP:-100]  # PUSH EAX
@00401070 [ESP:-100]  # CALL 0x00402000
"""

VARIABLES = [
    {"name": "param_1", "offset": 4, "size": 4, "is_param": True},
    {"name": "packet", "offset": -40, "size": 4, "type": "int"},
    {"name": "local_24", "offset": -36, "size": 4, "type": "uint"},
    {"name": "local_20", "offset": -32, "type": "uint"},
    {"name": "local_1c", "offset": -28, "size": 4},
    {"name": "local_18", "offset": -24, "size": 4},
    {"name": "local_10", "offset": -16, "size": 4},
    {"name": "local_50", "offset": -80, "size": 4},
    {"name": "local_4c", "offset": -76, "size": 4},
    {"name": "local_34", "offset": -52, "size": 4},
    {"name": "local_3c", "offset": -60, "size": 4},
    {"name": "buf", "offset": -64, "size": 4},
]


def write_function(directory, name, source = SOURCE, pcode = PCODE, data = None, ext = ".cpp"):
    directory.mkdir(parents = True, exist_ok = True)
    base = directory / name
    if source is not None:
        base.with_suffix(ext).write_text(source, encoding = "utf-8")
    if pcode is not None:
        base.with_suffix(".pcode").write_text(pcode, encoding = "utf-8")
    payload = data if isinstance(data, str) else json.dumps(data or {"stack_frame": {"variables": VARIABLES}})
    base.with_suffix(".json").write_text(payload, encoding = "utf-8")
    return str(base.with_suffix(".json"))


def test_the_dead_locals_are_the_declarations_named_only_once(tmp_path):
    path = tmp_path / "f.cpp"
    path.write_text(SOURCE, encoding = "utf-8")
    assert dsr.unreferenced_locals(str(path)) == {
        "local_24", "local_20", "local_1c", "local_18", "local_10", "local_50", "local_4c", "local_34", "local_3c"}


@pytest.mark.parametrize("source", ["int x;\n", "void f(void)\n{\n  int local_4;"])
def test_a_source_without_a_body_or_a_decl_block_end_has_no_dead_locals(tmp_path, source):
    path = tmp_path / "f.cpp"
    path.write_text(source, encoding = "utf-8")
    assert dsr.unreferenced_locals(str(path)) == set()


def test_the_scan_places_stores_reads_and_escapes_in_frame_offsets(tmp_path):
    path = tmp_path / "f.pcode"
    path.write_text(PCODE, encoding = "utf-8")
    writes, reads, escapes = dsr.scan(str(path))
    assert [w[0] for w in writes] == [-36, -32, -28, -16, -80, -76, -52, -104, -100, -60]
    assert writes[0] == (-36, 4, "00401000", "MOV dword ptr [ESP + 0x40], EAX", 0)
    # the ESP read, the reads through the LEA'd and copied registers, and the x87 qword
    assert reads == [(-32, 4), (-28, 4), (-24, 4), (-56, 8)]
    # buf goes to the first call twice (pushed and staged), packet to the second
    assert escapes == [(-64, 21), (-64, 21), (-40, 28)]


def test_only_a_written_unread_field_of_an_object_escaping_afterwards_is_a_hit(tmp_path):
    json_path = write_function(tmp_path / "netgame.cpp", "send")
    hits = dsr.analyse(json_path)
    assert hits == [(str(tmp_path / "netgame.cpp" / "send.cpp"), "local_24", "uint", -36, 4,
                     [("00401000", "MOV dword ptr [ESP + 0x40], EAX")], "packet")]


def test_a_c_source_is_read_too(tmp_path):
    assert len(dsr.analyse(write_function(tmp_path, "send", ext = ".c"))) == 1


@pytest.mark.parametrize("kwargs", [
    {"source": None},                                            # no decompile
    {"pcode": None},                                             # no pcode
    {"data": "{not json"},                                       # unreadable json
    {"data": {"stack_frame": None}},                             # no frame
    {"data": {"stack_frame": {"variables": [{"name": "param_1", "offset": 4, "is_param": True}]}}},
    {"source": "void f(void)\n{\n  int a;\n\n  a = 1;\n}\n"},     # nothing dead
])
def test_a_function_missing_any_input_has_no_hits(tmp_path, kwargs):
    assert dsr.analyse(write_function(tmp_path, "f", **kwargs)) == []


def test_main_lists_each_hit_and_the_count_per_unit(tmp_path, capsys):
    write_function(tmp_path / "core" / "netgame.cpp", "send")
    write_function(tmp_path / "core" / "netgame.cpp", "send2")
    write_function(tmp_path / "core" / "turret.cpp", "aim")
    dsr.main([str(tmp_path)])
    out = capsys.readouterr().out
    assert "    local_24 (uint, 4b @ -36) in the object based at packet; declared" in out
    assert "        00401000  MOV dword ptr [ESP + 0x40], EAX" in out
    assert "=== 3 hits in 3 functions ===" in out
    assert out.index("     2  netgame.cpp") < out.index("     1  turret.cpp")


def test_the_script_runs_as_main_and_needs_a_root(tmp_path, monkeypatch, capsys):
    monkeypatch.setattr(sys, "argv", ["dropped_store_report.py"])
    with pytest.raises(SystemExit) as exc:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "dropped_store_report.py"), run_name = "__main__")
    assert exc.value.code == 2
    monkeypatch.setattr(sys, "argv", ["dropped_store_report.py", str(tmp_path)])
    with pytest.raises(SystemExit) as exc:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "dropped_store_report.py"), run_name = "__main__")
    assert exc.value.code is None
    assert "=== 0 hits in 0 functions ===" in capsys.readouterr().out
