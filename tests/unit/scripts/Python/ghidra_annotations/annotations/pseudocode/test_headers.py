# Local imports
from ghidra_annotations.annotations.pseudocode import headers as hd


def test_an_overridden_equate_the_program_lacks_is_still_defined():
    have = [{"name": "GAME_SCREEN_MAX_HEIGHT", "value": 2160}]
    added = hd.missing_override_equates(have)
    assert [e["name"] for e in added] == ["GAME_RECIPROCAL_TABLE_SIZE"]
    assert added[0]["value"] == added[0]["binary_value"] == 3842 and added[0]["refs"] == []
    assert hd.missing_override_equates(have + added) == []


def test_qword_is_a_base_type(tmp_path):
    hd.generate_basetypes_header(str(tmp_path))
    assert "typedef unsigned long long qword;" in (tmp_path / "system" / "basetypes.h").read_text()


def test_wsastartup_needs_no_lpwsadata_typedef():
    lines = hd.generate_winsock_runtime_inlines()
    at = lines.index("extern int WSAStartup(WORD wVersionRequested, struct WSADATA* lpWSAData);")
    assert lines[at - 1] == "struct WSADATA;"
