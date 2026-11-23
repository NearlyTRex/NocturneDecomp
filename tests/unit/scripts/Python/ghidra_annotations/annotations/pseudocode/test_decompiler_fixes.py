# Imports
import json

# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode import decompiler_fixes as df
from ghidra_annotations.annotations.pseudocode.json_cache import JsonCacheManager


@pytest.fixture(name = "warnings", autouse = True)
def fixture_warnings(monkeypatch):
    # Each test starts with empty caches, and collects the module's warnings
    monkeypatch.setattr(df, "_fixes_cache", {})
    monkeypatch.setattr(df, "_per_function_flags", {})
    monkeypatch.setattr(df, "per_function_fixes_cache", JsonCacheManager(
        "decompiler_fixes", json_key = "decompiler_fixes", default_factory = list, type_check = list))
    seen = []
    monkeypatch.setattr(df, "log_warning", seen.append)
    return seen


class Interface:
    """A DecompInterface built with the fixes registry; refuse makes it decline flag sets."""

    def __init__(self, refuse = (), raises = False, clears = True):
        self.registered = {}
        self.refuse = refuse
        self.raises = raises
        self.clears = clears
        self.cleared = False

    def setDecompilerFixes(self, flags, addresses):
        if self.raises:
            raise AttributeError("setDecompilerFixes")
        if flags in self.refuse:
            return False
        self.registered[flags] = sorted(addresses)
        return True

    def clearDecompilerFixes(self):
        if self.raises:
            raise AttributeError("clearDecompilerFixes")
        self.cleared = self.clears
        return self.clears


def write_global(tmp_path, data):
    (tmp_path / "decompiler_fixes.json").write_text(data if isinstance(data, str) else json.dumps(data))


def test_the_global_file_loads_each_fix_and_round_trips(tmp_path, warnings):
    write_global(tmp_path, {"multiequal_stack_trace": ["0x401000", "0X402500"],
                            "force_spacebase": ["0x401000", "4198400"],
                            "made_up": ["0x1"], "alias_recovery": ["0xZZ", 7]})
    df.preload_decompiler_fixes(str(tmp_path))
    # 4198400 is 0x401000; a bad address is left out, the rest of its fix still loads
    assert df._fixes_cache == {0x401000: df.DFIX_MULTIEQUAL_STACK_TRACE | df.DFIX_FORCE_SPACEBASE,
                               0x402500: df.DFIX_MULTIEQUAL_STACK_TRACE}
    assert len(warnings) == 3 and "made_up" in warnings[0] and "'0xZZ'" in warnings[1] and "7" in warnings[2]
    assert df.generate_decompiler_fixes_file(str(tmp_path)) == str(tmp_path / "decompiler_fixes.json")
    assert json.loads((tmp_path / "decompiler_fixes.json").read_text()) == {
        "multiequal_stack_trace": ["0x401000", "0x402500"], "force_spacebase": ["0x401000"]}


@pytest.mark.parametrize("text, warning", [("{", "Could not read"), ("[1]", "is not an object")])
def test_an_unreadable_global_file_loads_nothing_and_says_so(tmp_path, warnings, text, warning):
    write_global(tmp_path, text)
    df.preload_decompiler_fixes(str(tmp_path))
    assert df._fixes_cache == {} and warning in warnings[0]


def test_no_global_file_loads_nothing(tmp_path):
    df._fixes_cache[1] = 1
    df.preload_decompiler_fixes(str(tmp_path))
    assert df._fixes_cache == {}


def test_an_empty_global_file_loads_nothing_quietly(tmp_path, warnings):
    # What every program's export holds today
    write_global(tmp_path, {})
    df.preload_decompiler_fixes(str(tmp_path))
    assert df._fixes_cache == {} and warnings == []


def test_a_failed_write_of_the_global_file_raises(tmp_path):
    with pytest.raises(OSError):
        df.generate_decompiler_fixes_file(str(tmp_path / "missing"))


def write_function_json(directory, name, data):
    directory.mkdir(parents = True, exist_ok = True)
    path = directory / name
    path.write_text(data if isinstance(data, str) else json.dumps(data))
    return str(path)


def test_per_function_fixes_are_cached_and_registered_but_not_written_to_the_global_file(tmp_path, warnings):
    src = tmp_path / "src"
    tu = src / "core" / "a.cpp"
    kept = write_function_json(tu, "f.json", {"function": {"address": "00401000"},
                                              "decompiler_fixes": ["alias_recovery", "made_up"]})
    write_function_json(tu, "g.json", {"function": {"address": "00402000"}})
    write_function_json(tu, "h.json", {"function": {"address": "00403000"}, "decompiler_fixes": "alias_recovery"})
    write_function_json(tu, "broken.json", "{")
    (tu / "f.cpp").write_text("")
    df._fixes_cache[0x401000] = df.DFIX_FORCE_SPACEBASE
    df.preload_per_function_decompiler_fixes(str(src))
    assert df.per_function_fixes_cache.load_for_function(kept) == ["alias_recovery", "made_up"]
    assert df._per_function_flags == {0x401000: df.DFIX_ALIAS_RECOVERY}
    assert len(warnings) == 2 and "broken.json" in warnings[0] and "made_up" in warnings[1]
    interface = Interface()
    assert df.register_decompiler_fixes(interface) == 1
    assert interface.registered == {df.DFIX_FORCE_SPACEBASE | df.DFIX_ALIAS_RECOVERY: [0x401000]}
    # The global file keeps only its own fixes, so removing one from the function's JSON removes it
    df.generate_decompiler_fixes_file(str(tmp_path))
    assert json.loads((tmp_path / "decompiler_fixes.json").read_text()) == {"force_spacebase": ["0x401000"]}


@pytest.mark.parametrize("base_dir", [None, "missing", "src"])
def test_no_function_with_fixes_loads_no_per_function_fixes(tmp_path, base_dir):
    write_function_json(tmp_path / "src", "f.json", {"function": {"address": "00401000"}})
    df._per_function_flags[1] = 1
    df.preload_per_function_decompiler_fixes(base_dir and str(tmp_path / base_dir))
    assert df._per_function_flags == {}


def test_registration_groups_addresses_by_their_flags(tmp_path):
    df._fixes_cache.update({1: df.DFIX_FORCE_SPACEBASE, 2: df.DFIX_FORCE_SPACEBASE, 3: df.DFIX_ALIAS_RECOVERY})
    interface = Interface(refuse = (df.DFIX_ALIAS_RECOVERY,))
    # The refused group is not counted
    assert df.register_decompiler_fixes(interface) == 2
    assert interface.registered == {df.DFIX_FORCE_SPACEBASE: [1, 2]}


def test_nothing_to_register_or_a_decompiler_without_the_registry_registers_nothing():
    assert df.register_decompiler_fixes(Interface()) == 0
    df._fixes_cache[1] = df.DFIX_FORCE_SPACEBASE
    assert df.register_decompiler_fixes(Interface(raises = True)) == 0


def test_clearing_reports_whether_the_registry_cleared():
    interface = Interface()
    assert df.clear_decompiler_fixes(interface) is True and interface.cleared
    assert df.clear_decompiler_fixes(Interface(clears = False)) is False
    assert df.clear_decompiler_fixes(Interface(raises = True)) is False
