# Imports
import json

# Local imports
from ghidra_annotations.annotations.pseudocode import json_cache as jc


def logs(monkeypatch):
    seen = {"info": [], "warning": []}
    monkeypatch.setattr(jc, "log_info", seen["info"].append)
    monkeypatch.setattr(jc, "log_warning", seen["warning"].append)
    return seen


def test_the_global_file_is_kept_when_it_has_the_right_type(tmp_path, monkeypatch):
    seen = logs(monkeypatch)
    cache = jc.JsonCacheManager("fixups")
    assert cache.get_global_cache() == []
    assert cache.preload_global(str(tmp_path), "none.json") == []
    (tmp_path / "g.json").write_text(json.dumps([{"a": 1}, {"b": 2}]))
    assert cache.preload_global(str(tmp_path), "g.json") == [{"a": 1}, {"b": 2}]
    assert cache.get_global_cache() == [{"a": 1}, {"b": 2}]
    assert seen["info"] == [f"Preloaded 2 fixups from {tmp_path / 'g.json'}"]
    (tmp_path / "g.json").write_text(json.dumps({"not": "a list"}))
    assert cache.preload_global(str(tmp_path), "g.json") == []
    cache.clear()
    assert cache.get_global_cache() == []


def test_an_unreadable_file_is_warned_about(tmp_path, monkeypatch):
    seen = logs(monkeypatch)
    (tmp_path / "bad.json").write_text("[1, 2,")
    cache = jc.JsonCacheManager("fixups")
    assert cache.preload_global(str(tmp_path), "bad.json") == []
    assert seen["warning"][0].startswith(f"Could not read fixups from {tmp_path / 'bad.json'}: ")


def test_the_directory_preload_keeps_each_functions_data_under_its_key(tmp_path, monkeypatch):
    seen = logs(monkeypatch)
    unit = tmp_path / "src" / "core"
    unit.mkdir(parents = True)
    (unit / "a.json").write_text(json.dumps({"overrides": {"0x1": "f"}}))
    (unit / "b.json").write_text(json.dumps({"overrides": {}}))          # empty: not kept
    (unit / "c.json").write_text(json.dumps({"overrides": ["wrong type"]}))
    (unit / "d.json").write_text(json.dumps(["a list root"]))
    (unit / "e.json").write_text("{")
    (unit / "f.cpp").write_text("")
    cache = jc.JsonCacheManager("overrides", json_key = "overrides", default_factory = dict)
    cache.preload_directory(str(tmp_path / "src"))
    a = str(unit / "a.json")
    assert cache.load_for_function(a) == {"0x1": "f"}
    assert seen["info"] == [f"Preloaded 1 overrides from {a}"]
    assert len(seen["warning"]) == 1 and str(unit / "e.json") in seen["warning"][0]
    cache.preload_directory(None)
    cache.preload_directory(str(tmp_path / "missing"))
    assert cache.load_for_function(str(unit / "c.json")) == {}


def test_a_function_load_falls_back_to_the_file_then_the_default(tmp_path, monkeypatch):
    logs(monkeypatch)
    cache = jc.JsonCacheManager("proto", json_key = "proto")
    path = tmp_path / "f.json"
    assert cache.load_for_function("") == [] and cache.load_for_function(str(path)) == []
    path.write_text(json.dumps({"proto": ["int f(void)"]}))
    assert cache.load_for_function(str(path)) == ["int f(void)"]
    path.write_text(json.dumps({"proto": []}))
    assert cache.load_for_function(str(path)) == []
    cache.set_cache(str(path), ["set"])
    assert cache.load_for_function(str(path)) == ["set"]
