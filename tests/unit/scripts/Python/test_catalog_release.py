# Imports
import builtins
import importlib
import os
import runpy
import sys
import tomllib

# Third-party imports
import pytest

# Local imports
from repo_paths import SCRIPTS_DIR
import catalog_release

# XXH3-128 of the test PODs' contents, from xxhash.xxh3_128().hexdigest()
HASH_OF_POD_ONE = "fed9db5d545bd067ad07fcbefa9ebc16"
HASH_OF_POD_TWO = "8c28a73ffb0dadc1028ba4c38e6ca219"


def install(tmp_path, files):
    for name, contents in files.items():
        (tmp_path / name).write_bytes(contents)
    return tmp_path


def run_main(capsys, *args):
    catalog_release.main(list(args))
    return capsys.readouterr().out


def test_prints_each_pod_by_name_ignoring_case_as_the_catalogue_reads_it(tmp_path, capsys):
    folder = install(tmp_path, {"b.pod": b"POD two", "STARTUP.POD": b"POD one",
                                "A.POD": b"POD one", "readme.txt": b"not a pod"})
    (tmp_path / "dir.pod").mkdir()
    text = run_main(capsys, "--id", "1999-de", "--name", 'Nocturne (1999, "German")', str(folder))
    catalogue = tomllib.loads(text)
    assert catalogue == {"release": [{
        "id": "1999-de",
        "name": 'Nocturne (1999, "German")',
        "required": ["STARTUP.POD"],
        "pod": [{"name": "A.POD", "size": 7, "xxh3": HASH_OF_POD_ONE},
                {"name": "b.pod", "size": 7, "xxh3": HASH_OF_POD_TWO},
                {"name": "STARTUP.POD", "size": 7, "xxh3": HASH_OF_POD_ONE}]}]}


def test_the_entry_is_laid_out_as_the_catalogues_are(tmp_path, capsys):
    folder = install(tmp_path, {"A.POD": b"POD one"})
    assert run_main(capsys, "--id", "x", "--name", "X", str(folder)) == (
        '[[release]]\nid = "x"\nname = "X"\nrequired = []\n\n'
        f'[[release.pod]]\nname = "A.POD"\nsize = 7\nxxh3 = "{HASH_OF_POD_ONE}"\n')


def test_a_pod_longer_than_a_block_is_hashed_whole(tmp_path):
    path = tmp_path / "long.pod"
    path.write_bytes(b"x" * ((1 << 20) + 5))
    assert catalog_release.hash_file(str(path)) == "b01f2fd1173860d2d077d9973862a107"


def test_the_folder_defaults_to_where_it_runs(tmp_path, capsys, monkeypatch):
    install(tmp_path, {"A.POD": b"POD one"})
    monkeypatch.chdir(tmp_path)
    assert 'name = "A.POD"' in run_main(capsys, "--id", "x", "--name", "X")


def test_a_folder_without_pods_is_refused(tmp_path):
    with pytest.raises(SystemExit, match = "no .pod files here"):
        catalog_release.main(["--id", "x", "--name", "X", str(tmp_path)])


def test_a_folder_that_cant_be_read_is_refused(tmp_path):
    with pytest.raises(SystemExit, match = "catalog_release.py: .*gone"):
        catalog_release.main(["--id", "x", "--name", "X", str(tmp_path / "gone")])


@pytest.mark.parametrize("release_id", ["1999 de", "1999/de", ""])
def test_an_id_must_be_plain(tmp_path, release_id):
    install(tmp_path, {"A.POD": b"POD one"})
    with pytest.raises(SystemExit, match = "an id is only letters"):
        catalog_release.main(["--id", release_id, "--name", "X", str(tmp_path)])


def test_without_xxhash_it_says_how_to_get_it(tmp_path, monkeypatch):
    real_import = builtins.__import__

    def no_xxhash(name, *args, **kwargs):
        if name == "xxhash":
            raise ImportError(name)
        return real_import(name, *args, **kwargs)

    monkeypatch.setattr(builtins, "__import__", no_xxhash)
    module = importlib.reload(catalog_release)
    try:
        assert module.xxhash is None
        with pytest.raises(SystemExit, match = "pip install xxhash"):
            module.main(["--id", "x", "--name", "X", str(tmp_path)])
    finally:
        monkeypatch.undo()
        importlib.reload(catalog_release)


def test_runs_as_a_script(tmp_path, capsys, monkeypatch):
    install(tmp_path, {"A.POD": b"POD one"})
    monkeypatch.setattr(sys, "argv", ["catalog_release.py", "--id", "x", "--name", "X",
                                      str(tmp_path)])
    runpy.run_path(os.path.join(SCRIPTS_DIR, "catalog_release.py"), run_name = "__main__")
    assert HASH_OF_POD_ONE in capsys.readouterr().out
