# Imports
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from repo_paths import SCRIPTS_DIR
from pe_helpers import build_pe, write_pe
import check_pe_imports


@pytest.mark.parametrize("pe32_plus", [True, False])
def test_reads_named_imports_and_skips_ordinals(tmp_path, pe32_plus):
    path = write_pe(tmp_path / "a.exe", pe32_plus = pe32_plus,
                    imports = {"SDL2.dll": ["SDL_Init", 7, "SDL_Quit"], "KERNEL32.dll": ["ExitProcess"]})
    image = check_pe_imports.PeImage(str(path))
    assert image.pe32_plus is pe32_plus
    assert image.imports() == {"SDL2.dll": ["SDL_Init", "SDL_Quit"], "KERNEL32.dll": ["ExitProcess"]}


def test_reads_imports_from_the_address_table_without_a_lookup_table(tmp_path):
    path = write_pe(tmp_path / "a.exe", imports = {"x.dll": ["f"]}, lookup = False)
    assert check_pe_imports.PeImage(str(path)).imports() == {"x.dll": ["f"]}


def test_an_image_without_tables_imports_and_exports_nothing(tmp_path):
    image = check_pe_imports.PeImage(str(write_pe(tmp_path / "a.exe")))
    assert image.imports() == {}
    assert image.exports() == set()


def test_reads_exported_names(tmp_path):
    path = write_pe(tmp_path / "x.dll", exports = ["alpha", "beta"])
    assert check_pe_imports.PeImage(str(path)).exports() == {"alpha", "beta"}


def test_refuses_a_file_that_is_not_a_pe(tmp_path):
    path = tmp_path / "a.exe"
    path.write_bytes(bytes(0x80))
    with pytest.raises(ValueError, match = "not a PE image"):
        check_pe_imports.PeImage(str(path))


def test_an_rva_outside_every_section_is_an_error(tmp_path):
    image = check_pe_imports.PeImage(str(write_pe(tmp_path / "a.exe")))
    with pytest.raises(ValueError, match = "RVA 0x50 is in no section"):
        image.offset(0x50)


def run_main(monkeypatch, executable):
    monkeypatch.setattr(sys, "argv", ["check_pe_imports.py", str(executable)])
    return check_pe_imports.main()


def test_passes_when_every_staged_dll_exports_what_is_imported(tmp_path, monkeypatch, capsys):
    exe = write_pe(tmp_path / "game.exe", imports = {"SDL2.DLL": ["SDL_Init"], "KERNEL32.dll": ["Sleep"]})
    write_pe(tmp_path / "SDL2.dll", exports = ["SDL_Init", "SDL_Quit"])
    assert run_main(monkeypatch, exe) == 0
    assert capsys.readouterr().err == ""


def test_follows_staged_dlls_and_reports_each_missing_export_once(tmp_path, monkeypatch, capsys):
    exe = write_pe(tmp_path / "game.exe", imports = {"a.dll": ["fa"], "b.dll": ["fb"]})
    (tmp_path / "a.dll").write_bytes(build_pe(imports = {"b.dll": ["gone"]}, exports = ["fa"]))
    write_pe(tmp_path / "b.dll", exports = ["fb"])
    (tmp_path / "notes.txt").write_text("not a dll", encoding = "utf-8")
    assert run_main(monkeypatch, exe) == 1
    assert capsys.readouterr().err.splitlines() == [
        "a.dll: imports gone from b.dll, which does not export it"]


def test_runs_as_a_script(tmp_path, monkeypatch):
    exe = write_pe(tmp_path / "game.exe", imports = {"a.dll": ["missing"]})
    write_pe(tmp_path / "a.dll", exports = ["other"])
    monkeypatch.setattr(sys, "argv", ["check_pe_imports.py", str(exe)])
    with pytest.raises(SystemExit) as exit_info:
        runpy.run_path(os.path.join(SCRIPTS_DIR, "check_pe_imports.py"), run_name = "__main__")
    assert exit_info.value.code == 1
