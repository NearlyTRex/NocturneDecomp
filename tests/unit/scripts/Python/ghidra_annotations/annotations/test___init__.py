# Local imports
from ghidra_annotations import annotations
import export_annotations
import import_annotations


def test_every_export_category_has_its_export_function():
    assert all(callable(getattr(annotations, "export_" + c)) for c in export_annotations.CATEGORY_NAMES)


def test_every_import_category_has_its_import_and_delete_functions():
    missing = [verb + c for c in import_annotations.IMPORT_CATEGORIES for verb in ("import_", "delete_")
               if not callable(getattr(annotations, verb + c, None))]
    assert missing == []


def test_the_package_exports_exactly_what_it_imports():
    names = {n for n in dir(annotations) if n.startswith(("export_", "import_", "delete_"))}
    assert names == set(annotations.__all__)
