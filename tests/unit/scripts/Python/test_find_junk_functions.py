# Imports
import json
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from repo_paths import SCRIPTS_DIR
import find_junk_functions as fj

BASE = 0x1000
SIZE = 0x400

RET = b"\xc3"
NOP = b"\x90"
INT3 = b"\xcc"
MOV_EAX_EAX = b"\x89\xc0"
PUSH_EBX = b"\x53"
INC_EAX = b"\x40"
JMP_SELF = b"\xeb\xfe"
BAD = b"\xff\xff"                                 # decodes to nothing


def push_imm(value):
    return b"\x68" + value.to_bytes(4, "little")


def load_eax(value):
    """mov eax, dword ptr [value]"""
    return b"\xa1" + value.to_bytes(4, "little")


def store(slot, value):
    """mov dword ptr [slot], value"""
    return b"\xc7\x05" + slot.to_bytes(4, "little") + value.to_bytes(4, "little")


def call_base(at):
    """call BASE, from an instruction at `at`"""
    return b"\xe8" + ((BASE - (at + 5)) & 0xffffffff).to_bytes(4, "little")


class Image:
    """SIZE bytes at BASE, the functions laid out in them, and the code caves."""

    def __init__(self):
        self.data = bytearray(INT3 * SIZE)
        self.functions = []
        self.xrefs = []
        self.caves = []

    def place(self, addr, code, name = None, **extra):
        self.data[addr - BASE:addr - BASE + len(code)] = code
        func = {"addr": f"{addr:08x}", "name": name or f"FUN_{addr:08x}",
                "body": [{"start": f"{addr:08x}", "end": f"{addr + len(code) - 1:08x}"}], **extra}
        self.functions.append(func)
        return func

    def va2off(self, va):
        off = va - BASE
        return off if 0 <= off < len(self.data) else None

    def is_mapped_va(self, va):
        return BASE <= va < BASE + SIZE

    def in_cave(self, va):
        return any(lo <= va < hi for lo, hi in self.caves)


def decoded(code, at = BASE):
    return list(fj._MD.disasm(code, at))


@pytest.mark.parametrize("code, noop", [
    (NOP, True), (INT3, True), (MOV_EAX_EAX, True), (b"\x87\xdb", True),          # xchg ebx, ebx
    (b"\x8d\x00", True), (b"\x8d\x40\x00", True),                                   # lea eax, [eax(+0)]
    (b"\x89\xd8", False), (b"\x8d\x03", False), (b"\x01\xc0", False), (PUSH_EBX, False),
])
def test_each_padding_idiom_is_a_noop(code, noop):
    assert fj.is_noop(decoded(code)[0]) is noop


def test_a_body_skips_its_cave_fragments_and_reads_in_address_order():
    img = Image()
    func = img.place(0x1010, PUSH_EBX + RET)
    func["body"] = [{"start": "00001020", "end": "00001020"}, *func["body"], {"start": "00001030", "end": "00001031"}]
    img.data[0x20:0x21] = INC_EAX
    img.caves = [(0x1030, 0x1040)]
    assert [i.mnemonic for i in fj.decode(img, func)] == ["push", "ret", "inc"]
    assert fj.decode(img, {"body": [{"start": "00009000", "end": "00009001"}]}) is None
    assert fj.decode(img, {}) == []


def test_an_assert_stub_stores_file_and_line_then_calls():
    stub = decoded(store(0x1100, 1) + store(0x1104, 2) + call_base(0x1014), at = 0x1000)
    assert fj.is_assert_stub(stub)
    assert not fj.is_assert_stub(stub[:2])                                      # no call
    assert not fj.is_assert_stub(stub[1:])                                      # one store only


def test_a_function_may_run_on_into_its_neighbours_ret():
    img = Image()
    tail = img.place(0x1000, INC_EAX)
    img.data[0x01:0x04] = NOP + MOV_EAX_EAX                                     # padding between
    img.place(0x1004, RET)
    inc_fn = img.place(0x1010, INC_EAX + RET)
    entries = {int(f["addr"], 16): f for f in img.functions}
    ins = fj.decode(img, tail)
    assert fj.falls_into_ret(img, ins, entries)
    assert not fj.falls_into_ret(img, ins, {0x1004: inc_fn})                    # neighbour is not a RET
    assert not fj.falls_into_ret(img, ins, {0x1004: {"body": []}})               # neighbour decodes to nothing
    assert not fj.falls_into_ret(img, decoded(INC_EAX, at = BASE + SIZE - 1), entries)   # runs off the image
    img.data[0x31:0x33] = BAD
    assert not fj.falls_into_ret(img, decoded(INC_EAX, at = 0x1030), entries)   # undecodable next
    img.data[0x41:0x42] = PUSH_EBX
    assert not fj.falls_into_ret(img, decoded(INC_EAX, at = 0x1040), entries)   # real code next
    img.data[0x51:0x51 + 20] = NOP * 20
    assert not fj.falls_into_ret(img, decoded(INC_EAX, at = 0x1050), entries)   # padding too long


def classify_world():
    img = Image()
    img.place(0x1000, b"", name = "crt_user32.c_MoveWindow", thunk = True)
    img.functions[-1]["body"] = [{"start": "00001000", "end": "00001000"}]
    img.place(0x1010, NOP + INT3, name = "pad")
    img.place(0x1020, NOP + MOV_EAX_EAX + RET, name = "noop")
    img.place(0x1030, push_imm(0x1100), name = "misaligned_imm")
    img.place(0x1040, load_eax(0x1100), name = "misaligned_mem")
    img.place(0x1050, push_imm(0x9000), name = "stub")
    img.place(0x1060, INC_EAX + PUSH_EBX + NOP, name = "falls")
    img.place(0x1070, INC_EAX + RET, name = "ok")
    img.place(0x1080, INC_EAX + JMP_SELF + NOP, name = "jumps")
    img.place(0x1090, store(0x1100, 1) + store(0x1104, 2) + call_base(0x10a4), name = "assert")
    img.place(0x10b0, INC_EAX + INC_EAX, name = "runs_on")
    img.place(0x10b2, RET, name = "next")
    img.functions.append({"addr": "000010c0", "name": "unreadable", "body": [{"start": "00009000", "end": "00009001"}]})
    img.functions.append({"addr": "000010d0", "name": "empty", "body": []})
    return img


def test_each_body_gets_its_verdict():
    img = classify_world()
    entries = {int(f["addr"], 16): f for f in img.functions}
    refs = {0x1030: 3}
    verdicts = {f["name"]: fj.classify(img, f, refs, entries) for f in img.functions}
    assert {n: v[0] for n, v in verdicts.items()} == {
        "crt_user32.c_MoveWindow": "THUNK", "pad": "PADDING", "noop": "NOOP",
        "misaligned_imm": "MISALIGNED", "misaligned_mem": "MISALIGNED", "stub": "STUB",
        "falls": "FALLS_THROUGH", "ok": "OK", "jumps": "OK", "assert": "OK", "runs_on": "OK", "next": "OK",
        "unreadable": "UNREADABLE", "empty": "EMPTY"}
    assert verdicts["misaligned_imm"] == ("MISALIGNED", 3, "push 0x1100")
    assert verdicts["falls"][2] == "inc eax ; push ebx"
    assert verdicts["empty"][2] == "no decodable instruction"


@pytest.fixture(name = "run")
def fixture_run(monkeypatch, capsys):
    img = classify_world()
    img.xrefs = [{"to": "00001030"}, {"to": "Stack[0x4]"}, {"to": "00001060"}]
    monkeypatch.setattr(fj.sm, "Image", lambda program: img)

    def go(*argv):
        fj.main(list(argv))
        return capsys.readouterr().out
    return go


def test_addresses_only_lists_the_unreferenced_unmatched_junk(run, tmp_path):
    mapping = tmp_path / "mapping.json"
    mapping.write_text(json.dumps({"pairs": [{"a": "x", "b": "00001050"}]}), encoding = "utf-8")
    assert run("--addresses-only").split() == ["00001010", "00001020", "00001040", "00001050", "000010c0",
                                               "000010d0"]
    assert "00001050" not in run("--addresses-only", "--mapping", str(mapping)).split()


def test_the_report_counts_every_verdict_and_lists_the_junk(run):
    out = run()
    assert out.startswith("nocturne.exe: 14 functions\n\nbody classification:\n  OK               5\n")
    assert "===== MISALIGNED (2, showing 1) =====" in out                      # 1030 is referenced
    assert "  00001040  refs=0    matched=False misaligned_mem\n        mov eax, dword ptr [0x1100]\n" in out
    assert "===== UNREADABLE (1, showing 1) =====\n  000010c0  refs=0    matched=False unreadable\n\n" in out
    assert "===== FALLS_THROUGH (1, showing 1) =====\n  00001060  refs=1" in out   # shown though referenced
    assert "THUNK (" not in out
    assert out.endswith("6 junk-shaped functions have no references and no sibling match.\n"
                        "Those are the deletion candidates; re-run with --addresses-only to feed "
                        "delete_function.py.\n")


def test_a_referenced_junk_function_is_listed_only_when_asked(run):
    img = fj.sm.Image("x")
    img.functions = [f for f in img.functions if f["name"] in ("misaligned_imm", "ok")]
    out = run()
    assert "MISALIGNED" in out.split("body classification:")[1].split("\n\n")[0]
    assert "=====" not in out and out.endswith("0 junk-shaped functions have no references and no sibling match.\n")
    assert "===== MISALIGNED (1, showing 1) =====\n  00001030  refs=1" in run("--include-referenced")


def test_the_script_runs_as_main(monkeypatch, capsys):
    monkeypatch.setattr(sys, "argv", ["find_junk_functions.py", "--help"])
    with pytest.raises(SystemExit) as stop:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "find_junk_functions.py"), run_name = "__main__")
    assert stop.value.code == 0
    assert "Find functions that are not real code" in capsys.readouterr().out
