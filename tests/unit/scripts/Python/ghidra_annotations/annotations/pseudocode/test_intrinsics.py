# Imports
import os

# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode import intrinsics as it
from ghidra_annotations.util import with_generated_notice


@pytest.mark.parametrize("sizes, types, macro", [
    # A 2-byte result is cast back down: hi is promoted to int, and a sign-extended one would spill past 16 bits
    ((1, 1), ("uint16_t", "uint8_t"), "#define CONCAT11(hi, lo) ((uint16_t)(((uint16_t)(hi) << 8) | (uint8_t)(lo)))"),
    # 3-byte lo and a 4-byte result: lo is masked to its 3 bytes
    ((1, 3), ("uint32_t", "uint32_t"),
     "#define CONCAT13(hi, lo) ((uint32_t)(((uint32_t)(hi) << 24) | ((uint32_t)(lo) & 0xFFFFFFULL)))"),
    # a 3-byte result is masked to its 3 bytes
    ((1, 2), ("uint32_t", "uint16_t"),
     "#define CONCAT12(hi, lo) ((uint32_t)((((uint32_t)(hi) << 16) | (uint16_t)(lo)) & 0xFFFFFFULL))"),
    ((4, 4), ("uint64_t", "uint32_t"), "#define CONCAT44(hi, lo) ((uint64_t)(((uint64_t)(hi) << 32) | (uint32_t)(lo)))"),
    # past 8 bytes only lo's low 8 are left: hi lies wholly above them
    ((1, 8), ("uint64_t", "uint64_t"), "#define CONCAT18(hi, lo) ((uint64_t)(uint64_t)(lo))"),
])
def test_each_concat_is_exactly_its_bytes_wide(sizes, types, macro):
    assert it.concat_macro(*sizes, *types) == macro


@pytest.mark.parametrize("sizes, result_type, first", [
    ((8, 6), "uint64_t", "#define _SUB86_1(x) ((uint64_t)(x) & 0xFFFFFFFFFFFFULL)"),
    ((4, 1), "uint8_t", "#define _SUB41_1(x) ((uint8_t)(x))"),
])
def test_a_subpiece_narrower_than_its_type_is_masked(sizes, result_type, first):
    one, two, dispatch = it.subpiece_macros(*sizes, result_type)
    name = f"SUB{sizes[0]}{sizes[1]}"
    assert one == first and two.startswith(f"#define _{name}_2(x, off) (({result_type})((x) >> ((off) * 8))")
    assert dispatch == f"#define {name}(...) _SUB_GET_MACRO(__VA_ARGS__, _{name}_2, _{name}_1)(__VA_ARGS__)"


@pytest.mark.parametrize("line", [
    # the sums are cast back to the type, or a narrow one never wraps
    "#define CARRY1(a, b) ((uint8_t)((uint8_t)(a) + (uint8_t)(b)) < (uint8_t)(a))",
    "#define CARRY8(a, b) ((uint64_t)((uint64_t)(a) + (uint64_t)(b)) < (uint64_t)(a))",
    "     (((int8_t)(a) ^ (int8_t)((uint8_t)(a) + (uint8_t)(b))) < 0))",
    "     (((int32_t)(a) ^ (int32_t)((uint32_t)(a) - (uint32_t)(b))) < 0))",
    "#define BORROW2(a, b) ((uint16_t)(a) < (uint16_t)(b))",
    "#define _SUB86_2(x, off) ((uint64_t)((x) >> ((off) * 8)) & 0xFFFFFFFFFFFFULL)",
    "#define ZEXT14(x) ((uint32_t)(uint8_t)(x))",
    "#define f2xm1(x) (pow(2.0, (x)) - 1.0)", "#define fsin(x) sin(x)", "#define fpatan(y, x) atan2(y, x)",
    "#define paddb(a, b) (uint64_t)_mm_add_pi8((__m64)(a), (__m64)(b))",
    "#define psllw(a, count) (uint64_t)_mm_slli_pi16((__m64)(a), (count))",
    "#define paddb(a, b) nocturne_mmx_paddb((uint64_t)(a), (uint64_t)(b))",
    "#define psrad(a, count) nocturne_mmx_psrad((uint64_t)(a), (int)(count))",
    "NOCTURNE_MMX_LANEWISE(paddsb, 8, 1, NOCTURNE_MMX_SAT(x + y))",
    "NOCTURNE_MMX_PACK(packuswb, 16, 0)", "NOCTURNE_MMX_UNPACK(punpckhdq, 32, 1)",
    "NOCTURNE_MMX_SHIFT(psraw, 16, >>, 1)", "#undef NOCTURNE_MMX_SHIFT",
    "#define cpuid_basic_info(x) _cpuid_intrinsic(x)",
    "inline typename T::base_type* ADJ(const T& ptr) { return ptr.adj(); }",
])
def test_the_header_defines_each_intrinsic(line):
    assert line in it.generate_intrinsics_header().split("\n")


def test_the_header_is_written_once_and_left_alone_after(tmp_path):
    path = it.write_intrinsics_header(str(tmp_path))
    assert path == str(tmp_path / "system" / "intrinsics.h")
    with open(path, encoding = "utf-8") as f:
        assert f.read() == with_generated_notice(it.generate_intrinsics_header())
    os.utime(path, (1, 1))
    assert it.write_intrinsics_header(str(tmp_path)) == path and os.stat(path).st_mtime == 1


def test_a_header_that_cannot_be_written_is_logged(tmp_path, monkeypatch):
    logged = []
    monkeypatch.setattr(it, "log_info", logged.append)
    (tmp_path / "system" / "intrinsics.h").mkdir(parents = True)       # a directory where the file goes
    assert it.write_intrinsics_header(str(tmp_path)) is None
    assert logged[0].startswith("Failed to write intrinsics header:")
