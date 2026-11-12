# Imports
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from repo_paths import SCRIPTS_DIR
import decrypt_cheats

HEADER = ">" + "f" * 20                     # offsets 2..0x16: '>' then filler


def encrypt(plain, key = 0x5A, header = HEADER):
    """The inverse of decryptMessage: XOR each byte from offset 2 with the rolling key."""
    buf = [key, 0x00]
    for ch in (header + plain).encode("latin-1") + b"\0":
        buf.append(ch ^ key)
        key = (key * 0xBD + 1) & 0xFF
    return buf


def declaration(name, buf):
    body = ", ".join(f"(char)0x{b:02X}" for b in buf)
    return f"static char {name}[{len(buf)}] = {{ {body} }};\n"


def test_a_cheat_decrypts_to_its_cleartext_after_the_filler():
    cleartext, header, decoded = decrypt_cheats.decrypt(encrypt("AUTO"))
    assert (cleartext, header) == ("AUTO", HEADER)
    assert decoded.endswith(b"AUTO\0")


@pytest.mark.parametrize("buf, message", [
    ([0] * 10, "too short"),
    (encrypt("AUTO", header = "<" + "f" * 20), "header check failed"),
    (encrypt("AUTO")[:-1], "no null terminator"),
    # the terminator falls at offset 5, inside the filler
    (encrypt("", header = ">ff") + [0] * 0x20, "premature null"),
])
def test_a_damaged_cheat_is_rejected(buf, message):
    with pytest.raises(ValueError, match = message):
        decrypt_cheats.decrypt(buf)


def test_declarations_are_found_with_their_bytes():
    text = declaration("g_CheatStr_A", [1, 2]) + "static char other[2] = { (char)0x01 };"
    assert list(decrypt_cheats.parse_cheats(text)) == [("g_CheatStr_A", [1, 2])]


def run(tmp_path, capsys, text):
    path = tmp_path / "constants.h"
    path.write_text(text)
    code = decrypt_cheats.main([str(path)])
    return code, capsys.readouterr().out


def test_every_cheat_is_tabled_with_the_shared_filler(tmp_path, capsys):
    code, out = run(tmp_path, capsys, declaration("g_CheatStr_AutoAim", encrypt("AUTO"))
                    + declaration("g_CheatStr_Time", encrypt("TIME", key = 0x11)))
    assert code == 0
    assert "Decrypted 2 cheat strings" in out
    assert "g_CheatStr_AutoAim  'AUTO'" in out
    assert f"All cheats share filler header (offsets 2..0x16): '{HEADER}'" in out


def test_a_bad_cheat_and_varying_filler_are_reported(tmp_path, capsys):
    other = ">" + "g" * 20
    code, out = run(tmp_path, capsys, declaration("g_CheatStr_A", encrypt("AUTO"))
                    + declaration("g_CheatStr_B", encrypt("TIME", header = other))
                    + declaration("g_CheatStr_C", [1, 2]))
    assert code == 2
    assert "g_CheatStr_C  ERROR: buffer too short" in out
    assert "Filler headers (offsets 2..0x16) varied across cheats:" in out


def test_only_bad_cheats_report_no_filler(tmp_path, capsys):
    code, out = run(tmp_path, capsys, declaration("g_CheatStr_C", [1, 2]))
    assert code == 2 and "Filler" not in out and "share" not in out


def test_cheats_made_globals_are_read_from_their_source_too(tmp_path, capsys):
    header = tmp_path / "constants.h"
    header.write_text(declaration("g_CheatStr_A", encrypt("AUTO")))
    source = tmp_path / "globals.cpp"
    source.write_text(declaration("g_CheatStr_B", encrypt("TIME")).removeprefix("static "))
    assert decrypt_cheats.main([str(header), str(source)]) == 0
    out = capsys.readouterr().out
    assert "Decrypted 2 cheat strings" in out and "g_CheatStr_B  'TIME'" in out


def test_the_default_paths_are_the_projects():
    assert [os.path.basename(p) for p in decrypt_cheats.DEFAULT_PATHS] == [
        "constants_620000.h", "globals_620000.cpp"]


def test_a_missing_or_empty_header_fails(tmp_path, capsys):
    assert decrypt_cheats.main([str(tmp_path / "none.h")]) == 1
    assert "not found" in capsys.readouterr().err
    code, out = run(tmp_path, capsys, "int x;")
    assert code == 1 and "No g_CheatStr_* declarations" in out


def test_runs_as_a_script(tmp_path, monkeypatch):
    path = tmp_path / "constants.h"
    path.write_text(declaration("g_CheatStr_A", encrypt("AUTO")))
    monkeypatch.setattr(sys, "argv", ["decrypt_cheats.py", str(path)])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "decrypt_cheats.py"), run_name = "__main__")
    assert exit_info.value.code == 0
