# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode import globals as gl


def const(name, initializer, type_name = "void*"):
    return {"name": name, "type": type_name, "initializer": initializer, "is_initialized": True}


def test_a_range_depends_on_the_other_ranges_its_initializers_name():
    ranges = {
        "0x630000": [const("s_anon_00639d28", '"\\\\"', "TerminatedCString"),
                     const("s_hi_00639d30", '"s_anon_00639d28 and PTR_x"', "TerminatedCString")],
        "0x670000": [const("DAT_0067d6f8", "(void*)s_anon_00639d28"), const("DAT_0067d6fc", "(void*)DAT_0067d6f8"),
                     const("DAT_0067d700", None)],
        "0x680000": [const("PTR_x", "(void*)0x1")],
    }
    # A name inside a string literal is text, not a reference
    assert gl.constant_range_dependencies(ranges) == {"0x630000": set(), "0x670000": {"0x630000"}, "0x680000": set()}


def test_a_range_header_includes_the_ranges_it_needs_and_never_the_master_header():
    text = gl.generate_constants_file([const("DAT_0067d6f8", "(void*)s_anon_00639d28")],
                                      needed_constant_ranges = {"0x640000", "0x630000"})
    assert '#include "constants.h"' not in text
    assert text.index('"constants/constants_630000.h"') < text.index('"constants/constants_640000.h"')


def test_a_strings_text_pulls_in_no_header():
    text = gl.generate_constants_file([const("s_x_00630000", '"is_on & g_off"', "TerminatedCString")])
    assert "#include" not in text.replace('#include "system/basetypes.h"', "")


@pytest.mark.parametrize("init", ["(void*)&INT_00685038", "&INT_00685038", "(void*)g_Thing"])
def test_a_globals_address_anywhere_in_the_initializer_includes_globals(init):
    assert '#include "globals.h"' in gl.generate_constants_file([const("DAT_00665fa4", init)])
