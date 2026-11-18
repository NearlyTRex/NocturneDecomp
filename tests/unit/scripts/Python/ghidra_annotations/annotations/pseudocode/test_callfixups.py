# Imports
import importlib
import json

# Third-party imports
import pytest

# Local imports
from ghidra_annotations.annotations.pseudocode import callfixups as cf
from ghidra_annotations.annotations.pseudocode.json_cache import JsonCacheManager

STACK_PROBE = {"name": "stack_probe", "targets": ["_chkstk", "__alloca_probe"],
               "pcode": {"body": ["ESP = ESP - EAX;"]}}
SHIFTED = {"name": "shifted", "targets": ["f"], "pcode": {"body": ["EAX = 0;"], "paramshift": 1}}


class Callback:
    """Records what the export registers with Ghidra's decompiler."""
    registered = []
    cleared = 0

    @classmethod
    def clearCallFixups(cls):
        cls.cleared += 1

    @classmethod
    def registerCallFixupTargets(cls, name, targets, body, paramshift):
        cls.registered.append((name, list(targets), list(body), paramshift))


class Arrays:
    @staticmethod
    def asList(items):
        return list(items)


@pytest.fixture(name = "callback")
def fixture_callback(monkeypatch):
    monkeypatch.setattr(importlib.import_module("ghidra.app.decompiler"), "DecompileCallback", Callback)
    monkeypatch.setattr(importlib.import_module("java.util"), "Arrays", Arrays, raising = False)
    monkeypatch.setattr(Callback, "registered", [])
    monkeypatch.setattr(Callback, "cleared", 0)
    return Callback


@pytest.fixture(name = "logs")
def fixture_logs(monkeypatch):
    seen = {"info": [], "warning": []}
    monkeypatch.setattr(cf, "log_info", seen["info"].append)
    monkeypatch.setattr(cf, "log_warning", seen["warning"].append)
    return seen


def test_the_file_is_written_from_the_cache_kept_through_cleanup(tmp_path, monkeypatch, logs):
    monkeypatch.setattr(cf, "callfixups_cache", JsonCacheManager("callfixups"))
    (tmp_path / cf.CALLFIXUPS_FILENAME).write_text(json.dumps([STACK_PROBE]))
    cf.callfixups_cache.preload_global(str(tmp_path), cf.CALLFIXUPS_FILENAME)
    (tmp_path / cf.CALLFIXUPS_FILENAME).unlink()
    path = cf.generate_callfixups_file(str(tmp_path))
    assert json.loads((tmp_path / cf.CALLFIXUPS_FILENAME).read_text()) == [STACK_PROBE]
    assert logs["info"][-1] == f"Generated {path} with 1 callfixups"


def test_a_write_failure_is_not_swallowed(tmp_path):
    with pytest.raises(OSError):
        cf.generate_callfixups_file(str(tmp_path / "missing"))


def test_loading_warns_about_a_bad_file(tmp_path, logs):
    path = tmp_path / "c.json"
    assert cf.load_callfixups_json(None) == [] and cf.load_callfixups_json(str(path)) == []
    path.write_text("[")
    assert cf.load_callfixups_json(str(path)) == []
    path.write_text("{}")
    assert cf.load_callfixups_json(str(path)) == []
    assert logs["warning"][0].startswith(f"Could not read callfixups from {path}: ")
    assert logs["warning"][1] == f"{path} is not a list of callfixups; ignored"
    path.write_text(json.dumps([SHIFTED]))
    assert cf.load_callfixups_json(str(path)) == [SHIFTED]


def test_each_complete_fixup_is_registered_for_its_targets(tmp_path, callback, logs):
    path = tmp_path / "c.json"
    path.write_text(json.dumps([STACK_PROBE, SHIFTED, {"name": "empty", "targets": ["g"]}, {}]))
    assert cf.register_callfixups(str(path)) == 3
    assert callback.cleared == 1
    assert callback.registered == [("stack_probe", ["_chkstk", "__alloca_probe"], ["ESP = ESP - EAX;"], 0),
                                   ("shifted", ["f"], ["EAX = 0;"], 1)]
    assert "Registered callfixup 'shifted': ['f'] (paramshift=1)" in logs["info"]
    assert "Skipping callfixup 'empty': missing targets or body" in logs["info"]
    assert "Skipping callfixup 'unnamed': missing targets or body" in logs["info"]


def test_nothing_to_register_without_a_file_or_fixups(tmp_path, callback, logs):
    assert cf.register_callfixups(None) == 0
    assert logs["info"] == ["No callfixups.json found", "No callfixups to register"]
    (tmp_path / "c.json").write_text("[]")
    assert cf.register_callfixups(str(tmp_path / "c.json")) == 0
    assert callback.cleared == 2 and callback.registered == []
