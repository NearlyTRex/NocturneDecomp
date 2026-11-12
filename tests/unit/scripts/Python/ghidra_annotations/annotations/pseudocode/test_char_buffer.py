# Local imports
from ghidra_annotations.annotations.pseudocode.char_buffer import is_char_buffer


def _text(text, size):
    data = list(text.encode("latin-1"))
    return data + [0] * (size - len(data))


def test_a_string_with_room_past_its_padding_is_a_buffer():
    assert is_char_buffer("char[128]", _text("Arial", 128))
    assert is_char_buffer("char [104]", _text("gore", 104))


def test_a_literal_padded_to_four_bytes_is_not():
    assert not is_char_buffer("char[17]", _text("0123456789abcdef", 17))
    assert not is_char_buffer("char[8]", _text("gore", 8))
    assert not is_char_buffer("char[4]", _text("abc", 4))


def test_a_table_is_not():
    # No terminator, text after the first, or more than one dimension.
    assert not is_char_buffer("char[12]", list(b"JFMAMJJASOND"))
    assert not is_char_buffer("char[32]", _text("a", 4) + _text("b", 28))
    assert not is_char_buffer("char[5][32]", _text("a", 160))


def test_only_char_arrays_with_data_are_judged():
    assert not is_char_buffer("uchar[64]", _text("a", 64))
    assert not is_char_buffer("char*[4]", _text("a", 16))
    assert not is_char_buffer("char[64]", None)
    assert not is_char_buffer("char[64]", [])
