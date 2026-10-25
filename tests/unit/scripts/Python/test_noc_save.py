# Imports
import os
import random
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from repo_paths import SCRIPTS_DIR
import noc_save


# Every bit a code takes, top first, as the reader would see them
def code_bits(code, entries, bits):
    seen = []

    class Recorder:
        def bit(self, b):
            seen.append(b)

    noc_save.write_code(Recorder(), code, entries, bits)
    return seen


def test_two_bytes_compress_to_two_whole_codes_packed_low_bit_first():
    # 'A' then 'B', each a full 8-bit code against the 256 single bytes:
    # 01000001 01000010, written top bit first and packed low bit first.
    assert noc_save.compress(b"AB") == b"EFD\0\x82\x42"
    assert noc_save.decompress(b"EFD\0\x82\x42") == b"AB"


def test_nothing_compresses_to_the_magic_alone():
    assert noc_save.compress(b"") == b"EFD\0"
    assert noc_save.decompress(b"EFD\0") == b""


def test_a_code_is_truncated_binary_against_the_entry_count():
    # 257 entries in 9 bits: the largest code is 1 0000 0000, so the code 256
    # takes its one set bit and the zeros below it are implied.
    assert code_bits(256, 257, 9) == [1]
    # Below it, the first place the code falls short of the largest is where
    # every remaining bit is written.
    assert code_bits(5, 257, 9) == [0, 0, 0, 0, 0, 0, 1, 0, 1]
    # At a full 9-bit range nothing is implied.
    assert code_bits(300, 512, 9) == [1, 0, 0, 1, 0, 1, 1, 0, 0]


@pytest.mark.parametrize("code, entries, bits", [(256, 257, 9), (5, 257, 9), (300, 512, 9),
                                                 (0, 256, 8), (511, 512, 9), (700, 1000, 10)])
def test_a_code_reads_back_as_it_was_written(code, entries, bits):
    writer = noc_save.BitWriter()
    noc_save.write_code(writer, code, entries, bits)
    reader = noc_save.BitReader(writer.flush())
    assert noc_save.read_code(reader, entries, bits) == code


def test_a_code_cut_short_reads_as_the_end():
    # Out of data before the first bit, and part way through the rest.
    assert noc_save.read_code(noc_save.BitReader(b""), 257, 9) == -1
    assert noc_save.read_code(noc_save.BitReader(b""), 256, 8) == -1
    assert noc_save.read_code(noc_save.BitReader(b"\x00"), 257, 9) == -1


def test_the_bit_writer_pads_the_last_byte_with_zeros():
    writer = noc_save.BitWriter()
    for b in (1, 0, 1):
        writer.bit(b)
    assert writer.flush() == b"\x05"
    assert writer.flush() == b"\x05"


@pytest.mark.parametrize("text", [b"A", b"ABABABABABAB", b"TOBEORNOTTOBEORTOBEORNOT",
                                  b"// .NOC file version\n9\n" * 50, bytes(range(256)) * 4])
def test_text_round_trips(text):
    assert noc_save.decompress(noc_save.compress(text)) == text


def test_a_dictionary_that_fills_starts_over_on_both_sides():
    # Noise, so nearly every code is a new string and the 0x8000 fill comes
    # round more than once.
    text = random.Random(7).randbytes(120000)
    d = noc_save.Dictionary()
    while not d.add(0, 0):
        pass
    assert len(d) == 256 and d.bits == 8
    assert noc_save.decompress(noc_save.compress(text)) == text


def test_a_string_is_its_parents_plus_one_byte():
    d = noc_save.Dictionary()
    assert d.add(ord("B"), ord("A")) is False
    assert d.bits == 9
    assert d.find(ord("B"), ord("A")) == 256
    assert d.find(ord("C"), ord("A")) == -1
    assert d.find(ord("C"), -1) == ord("C")
    assert d.string(256) == b"AB"


def test_decompress_refuses_what_is_not_a_compressed_save():
    with pytest.raises(ValueError, match = "does not start with EFD"):
        noc_save.decompress(b"// .NOC file version\n")


def test_main_decompresses_to_a_file_and_to_stdout(tmp_path, capsysbinary):
    save = tmp_path / "SLOT01.NOC"
    save.write_bytes(noc_save.compress(b"Automap\nHQ.geo\n"))
    out = tmp_path / "slot01.txt"
    assert noc_save.main(["decompress", str(save), "-o", str(out)]) == 0
    assert out.read_bytes() == b"Automap\nHQ.geo\n"
    assert noc_save.main(["decompress", str(save)]) == 0
    assert capsysbinary.readouterr().out == b"Automap\nHQ.geo\n"


def test_main_compresses_to_the_file_it_is_given(tmp_path):
    text = tmp_path / "slot01.txt"
    text.write_bytes(b"Game stats\n")
    out = tmp_path / "SLOT01.NOC"
    assert noc_save.main(["compress", str(text), "--out", str(out)]) == 0
    assert out.read_bytes() == noc_save.compress(b"Game stats\n")


def test_main_will_not_compress_to_stdout(tmp_path, capsys):
    text = tmp_path / "slot01.txt"
    text.write_bytes(b"x")
    with pytest.raises(SystemExit) as exit_info:
        noc_save.main(["compress", str(text)])
    assert exit_info.value.code == 2
    assert "compress needs --out" in capsys.readouterr().err


def test_main_names_a_file_that_is_not_a_save(tmp_path):
    text = tmp_path / "slot01.txt"
    text.write_bytes(b"plain text")
    with pytest.raises(SystemExit, match = "slot01.txt: not a compressed save"):
        noc_save.main(["decompress", str(text)])


def test_runs_as_a_script(tmp_path, monkeypatch):
    text = tmp_path / "slot01.txt"
    text.write_bytes(b"Light state\n")
    out = tmp_path / "SLOT01.NOC"
    monkeypatch.setattr(sys, "argv", ["noc_save.py", "compress", str(text), "-o", str(out)])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "noc_save.py"), run_name = "__main__")
    assert exit_info.value.code == 0
    assert noc_save.decompress(out.read_bytes()) == b"Light state\n"
