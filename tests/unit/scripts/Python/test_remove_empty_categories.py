# Imports
import os
import runpy
import sys

# Third-party imports
import pytest

# Local imports
from fake_pyghidra import FakePyghidra
from ghidra_fake import CategoryPath, StructureDataType
from ghidra_program import Program
from repo_paths import SCRIPTS_DIR
import remove_empty_categories as rec


# A data type category as Ghidra's: its types, its subcategories, and the
# removal that refuses one still holding anything
class Category:
    def __init__(self, path, types = (), subs = ()):
        self.path = path
        self.types = list(types)
        self.subs = list(subs)

    def getCategoryPath(self):
        return CategoryPath(self.path)

    def getDataTypes(self):
        return list(self.types)

    def getCategories(self):
        return list(self.subs)

    def removeEmptyCategory(self, name, _monitor):
        sub = next(s for s in self.subs if s.getCategoryPath().getName() == name)
        if sub.types or sub.subs:
            return False
        self.subs.remove(sub)
        return True


class CategoryManager:
    def __init__(self, root):
        self.root = root

    def getRootCategory(self):
        return self.root

    def getCategory(self, path):
        def find(category):
            if category.path == path.getPath():
                return category
            return next((hit for sub in category.subs if (hit := find(sub))), None)
        return find(self.root)


def tree():
    return Category("/", subs = [
        Category("/WinDef.h", subs = [Category("/WinDef.h/functions")]),
        Category("/Nocturne", subs = [
            Category("/Nocturne/Class", subs = [Category("/Nocturne/Class/Game", [StructureDataType("CBox")])]),
            Category("/Nocturne/Struct", subs = [Category("/Nocturne/Struct/stat.h")])]),
        Category("/PE", [StructureDataType("IMAGE_NT_HEADERS32")])])


def program_with(root):
    program = Program()
    program.data_type_manager = CategoryManager(root)
    return program


def test_empty_categories_are_found_deepest_first_and_full_ones_kept():
    assert rec.empty_categories(tree()) == [
        "/WinDef.h/functions", "/WinDef.h", "/Nocturne/Struct/stat.h", "/Nocturne/Struct"]
    assert rec.empty_categories(Category("/")) == ["/"]


def test_applying_removes_them_and_saves(capsys):
    root = tree()
    program = program_with(root)
    paths, removed = rec.run(program, True)
    assert removed == paths
    assert [s.path for s in root.subs] == ["/Nocturne", "/PE"]
    assert [s.path for s in root.subs[0].subs] == ["/Nocturne/Class"]
    assert (program.transactions, program.getDomainFile().saves) == ([["Remove empty categories", True]], 1)
    assert "program.exe: 4 empty categories" in capsys.readouterr().out


def test_a_category_that_filled_up_meanwhile_is_kept():
    root = tree()
    paths = rec.empty_categories(root)
    root.subs[0].subs[0].types.append(StructureDataType("FARPROC_FUNC"))
    assert rec.remove(CategoryManager(root), paths, None) == ["/Nocturne/Struct/stat.h", "/Nocturne/Struct"]


def test_a_category_whose_parent_is_gone_is_skipped():
    assert rec.remove(CategoryManager(Category("/")), ["/Gone/x"], None) == []


def test_without_apply_or_anything_empty_nothing_is_written(capsys):
    program = program_with(tree())
    assert rec.run(program, False)[1] == []
    full = program_with(Category("/", subs = [Category("/PE", [StructureDataType("X")])]))
    assert rec.run(full, True) == ([], [])
    assert (program.transactions, full.transactions) == ([], [])
    assert "program.exe: 0 empty categories" in capsys.readouterr().out


def test_a_failed_removal_rolls_back():
    program = program_with(tree())
    program.data_type_manager.getCategory = None
    with pytest.raises(TypeError):
        rec.run(program, True)
    assert program.transactions == [["Remove empty categories", False]]


def test_the_report_names_one_category_in_the_singular(capsys):
    rec.run(program_with(Category("/", subs = [Category("/WinDef.h")])), False)
    assert "program.exe: 1 empty category\n    /WinDef.h" in capsys.readouterr().out


def test_main_runs_each_program_and_closes_the_project(monkeypatch, capsys):
    module = FakePyghidra(program_with(tree()))
    monkeypatch.setitem(sys.modules, "pyghidra", module)
    monkeypatch.setattr(sys, "argv", ["remove_empty_categories.py", "/p", "P", "a.exe", "b.exe"])
    rec.main()
    assert module.opened == [("/p", "P"), "/a.exe", "/b.exe"]
    assert module.closed == 1
    assert capsys.readouterr().out.count("4 empty categories") == 2


def test_runs_as_a_script(monkeypatch, capsys):
    monkeypatch.setitem(sys.modules, "pyghidra", FakePyghidra(program_with(Category("/"))))
    monkeypatch.setattr(sys, "argv", ["remove_empty_categories.py", "/p", "P", "a.exe"])
    runpy.run_path(os.path.join(SCRIPTS_DIR, "remove_empty_categories.py"), run_name = "__main__")
    assert "0 empty categories" in capsys.readouterr().out
