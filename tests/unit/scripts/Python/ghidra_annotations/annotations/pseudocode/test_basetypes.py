# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode import basetypes as bt


def test_the_basetype_sets_agree():
    everything = bt.get_all_basetypes()
    assert bt.get_types_needing_basetypes() == everything
    assert bt.get_primitive_types() < everything
    assert everything - bt.get_primitive_types() == {
        "IconResource", "MenuResource", "GroupIconResource", "ImageBaseOffset32"}
    assert not everything & bt.get_libc_provided_types()


@pytest.mark.parametrize("name, primitive", [
    ("uint", True), ("DWORD[4]", True), ("dword *", True), ("Dword", True),
    ("size_t", True),     # matched without case, as SIZE_T
    ("CHero", False), ("IconResource", False), ("intptr_t", False),
])
def test_a_primitive_is_judged_by_its_base_type(name, primitive):
    assert bt.is_primitive_type(name) is primitive


def test_bytes_read_little_endian():
    assert bt.bytes_to_int_le([0x78, 0x56, 0x34, 0x12]) == 0x12345678
    assert bt.bytes_to_int_le([]) == 0


@pytest.mark.parametrize("value, size, out", [
    (0x1ff, 1, "0xFF"), (-1, 2, "0xFFFF"), (5, 4, "0x00000005"), (-2, 8, "0xFFFFFFFFFFFFFFFE"),
    (0x1234567, 3, "0x234567"), (0x1F, 0, "0x1F"),
])
def test_an_integer_is_written_at_its_width(value, size, out):
    assert bt.format_int_by_size(value, size) == out
