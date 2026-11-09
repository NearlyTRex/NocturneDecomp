#!/usr/bin/env python3
"""Remove the data type categories that no longer hold anything.

Moving types between categories leaves the categories they came from behind:
normalize_type_categories.py empties `/WinDef.h` and `/winnt.h/functions`,
and Ghidra keeps showing them as folders in the Data Type Manager. A category
is empty when it holds no data type and every category under it is empty too,
so they go bottom-up, and the root is never touched.

Removal goes through Category.removeEmptyCategory, which refuses anything that
still holds a type, so a category that gained a type between the plan and the
removal is kept rather than taken with its contents.

Usage:
    remove_empty_categories.py <ABS_project_path> <project_name> bw1.exe [more.exe ...]
    remove_empty_categories.py ... bw1.exe --apply
"""

import argparse
import os


def empty_categories(category):
    """Paths of the empty categories under `category`, deepest first.

    `category` itself is included when it is empty; the caller drops the root.
    """
    out, empty = [], not category.getDataTypes()
    for sub in category.getCategories():
        found = empty_categories(sub)
        out.extend(found)
        if not found or found[-1] != sub.getCategoryPath().getPath():
            empty = False
    if empty:
        out.append(category.getCategoryPath().getPath())
    return out


def remove(dtm, paths, monitor):
    """Remove each path's category from its parent; returns the paths removed."""
    from ghidra.program.model.data import CategoryPath
    removed = []
    for path in paths:
        category_path = CategoryPath(path)
        parent = dtm.getCategory(category_path.getParent())
        if parent is not None and parent.removeEmptyCategory(category_path.getName(), monitor):
            removed.append(path)
    return removed


def run(program, apply_changes):
    """Report, and with apply_changes remove, one program's empty categories."""
    dtm = program.getDataTypeManager()
    paths = [p for p in empty_categories(dtm.getRootCategory()) if p != "/"]
    print("%s: %d empty categor%s" % (program.getDomainFile().getName(), len(paths),
                                      "y" if len(paths) == 1 else "ies"))
    for path in paths:
        print("    %s" % path)
    if not (apply_changes and paths):
        return paths, []
    from ghidra.util.task import ConsoleTaskMonitor
    tx = program.startTransaction("Remove empty categories")
    ok = False
    try:
        removed = remove(dtm, paths, ConsoleTaskMonitor())
        ok = True
    finally:
        program.endTransaction(tx, ok)
    print("removed %d" % len(removed))
    program.getDomainFile().save(ConsoleTaskMonitor())
    return paths, removed


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("project_path")
    ap.add_argument("project_name")
    ap.add_argument("programs", nargs="+")
    ap.add_argument("--apply", action="store_true")
    args = ap.parse_args()

    import pyghidra
    pyghidra.start()
    project = pyghidra.open_project(os.path.abspath(args.project_path), args.project_name)
    for name in args.programs:
        with pyghidra.program_context(project, "/" + name) as program:
            run(program, args.apply)
    project.close()


if __name__ == "__main__":
    main()
