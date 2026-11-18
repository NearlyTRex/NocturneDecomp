# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode.render_flags_transform import (
    decompose_render_flags_value, transform_render_state_flags)


@pytest.mark.parametrize("value, out", [
    (0, "0"), (0x40, "RENDER_DEPTH_TEST"), (0x41, "(RENDER_TEX_ENABLE | RENDER_DEPTH_TEST)"),
    (0x400, "0x400"), (0x401, "(RENDER_TEX_ENABLE | 0x400)"),
])
def test_a_value_decomposes_into_its_bit_names_low_bit_first(value, out):
    assert decompose_render_flags_value(value) == out


@pytest.mark.parametrize("code, out", [
    ("g_RenderStateFlags.dword = 0x81;", "g_RenderStateFlags.dword = (RENDER_TEX_ENABLE | RENDER_DEPTH_WRITE);"),
    ("(g_RenderStateFlags.dword & 0x40) == 0", "(g_RenderStateFlags.dword & RENDER_DEPTH_TEST) == 0"),
    ("g_RenderStateFlags.dword == 128", "g_RenderStateFlags.dword == RENDER_DEPTH_WRITE"),
    ("g_RenderStateFlags.dword |= 0x20;", "g_RenderStateFlags.dword |= RENDER_BLEND_READ_DEST;"),
    ("x = 0x40 & g_RenderStateFlags.dword;", "x = RENDER_DEPTH_TEST & g_RenderStateFlags.dword;"),
    ("g_RenderStateFlags.dword = g_INT_01d76c38 | 0x205;",
     "g_RenderStateFlags.dword = g_INT_01d76c38 | (RENDER_TEX_ENABLE | RENDER_FOG_COLOR | RENDER_COLOR_FROM_VERTEX);"),
    ("g_RenderStateFlags.dword = p->saved | 0x20;", "g_RenderStateFlags.dword = p->saved | RENDER_BLEND_READ_DEST;"),
    ("(g_RenderStateFlags.bytes[0] & 0x40) != 0", "(g_RenderStateFlags.dword & RENDER_DEPTH_TEST) != 0"),
    ("(g_RenderStateFlags.bytes[1] & 2) == 2", "(((g_RenderStateFlags.dword & RENDER_COLOR_FROM_VERTEX) >> 8)) == 2"),
    # a zero test only asks whether the bit is set, so it needs no shift
    ("((g_RenderStateFlags.bytes[1] & 2) != 0)", "((g_RenderStateFlags.dword & RENDER_COLOR_FROM_VERTEX) != 0)"),
    ("( g_RenderStateFlags.bytes[1] & 2 ) == 0", "( g_RenderStateFlags.dword & RENDER_COLOR_FROM_VERTEX ) == 0"),
    ("(g_RenderStateFlags.bytes[1] & 2) == 0x10", "(((g_RenderStateFlags.dword & RENDER_COLOR_FROM_VERTEX) >> 8)) == 0x10"),
    ("x = g_RenderStateFlags.bytes[1] & 2) == 0", "x = ((g_RenderStateFlags.dword & RENDER_COLOR_FROM_VERTEX) >> 8)) == 0"),
])
def test_literals_used_with_the_flags_get_their_names(code, out):
    assert transform_render_state_flags(code) == out


@pytest.mark.parametrize("code", [
    "x = g_RenderStateFlags.bytes[0] | 2;",          # | and ^ would pull in the other bytes
    "x = g_RenderStateFlags.bytes[1] ^ 2;",
    "x = g_RenderStateFlags.bytes[4] & 2;",          # past the dword
    "x = g_RenderStateFlags.bytes[0] & 0x1ff;",      # wider than the byte
    "g_RenderStateFlags.bytes[0] = 3;",
    "x = pg_RenderStateFlags.dword & 0x40;",         # another name
    "x = p->g_RenderStateFlags.dword & 0x40;",
    "g_RenderStateFlags.dword = 1.5;",
    "g_RenderStateFlags.dword && 5",
    "g_RenderStateFlags.dword = 0x40U;",             # a suffixed literal is not ours to split
])
def test_other_uses_are_left_alone(code):
    assert transform_render_state_flags(code) == code
