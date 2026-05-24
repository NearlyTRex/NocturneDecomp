#!/usr/bin/env python3
"""
sync_keep_names.py

After the engine/3d.c render handlers are renamed in Ghidra
(rename_3d_render_handlers.py) and annotations are re-exported, this brings the
existing .keep.c/.keep.cpp files in line with the new names -- and touches ONLY
.keep files.

The shared rename table is imported from rename_3d_render_handlers.py so the two
scripts can never drift. For each (addr, old_inner, new_inner) it forms the
token  "<inner>_FUN_<addr8>"  (identical in both the "engine_3d.c_" // Name:
comment form and the "engine_3d_c_" C-identifier form, since the folder prefix is
left untouched) and:

  * replaces every "<old_inner>_FUN_<addr8>" with "<new_inner>_FUN_<addr8>"
    inside each .keep file -- this fixes the keep's own // Name:/// Signature:/
    definition AND any cross-references to other renamed handlers (e.g.
    dispatchMRGLToRenderer.keep.c calls three of the renamed functions);
  * renames the .keep file itself when its basename carries an old token.

Re-exported .c/.cpp files are read only for a sanity check and are never written.

Usage:
    python3 sync_keep_names.py [root_dir] --apply
    python3 sync_keep_names.py [root_dir]            # dry-run (default)

    root_dir defaults to annotations/nocedit.exe/pseudocode/src (relative to CWD),
    scanning the whole tree so cross-references in keeps outside engine/3d.c are
    caught too.
"""

import os
import sys
import glob
import argparse

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from rename_3d_render_handlers import RENAMES  # shared source of truth

DEFAULT_ROOT = os.path.join("annotations", "nocedit.exe", "pseudocode", "src")


def build_token_pairs():
    """[(old_token, new_token)] e.g.
    ('renderPolygonTexturedBasic_FUN_00405ec0',
     'renderPolygonTexturedOp45_FUN_00405ec0')."""
    pairs = []
    for addr, old_inner, new_inner in RENAMES:
        suffix = "_FUN_%08x" % addr
        pairs.append((old_inner + suffix, new_inner + suffix))
    return pairs


def reexport_sanity_check(root, pairs):
    """Warn if none of the new-named .c/.cpp files exist yet (i.e. the Ghidra
    rename + re-export probably hasn't happened, so syncing keeps now would point
    them at functions that don't exist)."""
    present = 0
    for _old, new_tok in pairs:
        for ext in (".c", ".cpp"):
            if glob.glob(os.path.join(root, "**", new_tok + ext), recursive=True):
                present += 1
                break
    if present == 0:
        print("WARNING: found 0 re-exported files with the new names under %s.\n"
              "         Did you run rename_3d_render_handlers.py --apply and re-export?\n"
              "         Proceeding anyway (dry-run recommended first)." % root)
    else:
        print("Sanity: %d/%d renamed functions have re-exported .c/.cpp present."
              % (present, len(pairs)))


def main():
    parser = argparse.ArgumentParser(
        description="Sync .keep file names/contents to renamed 3d.c handlers")
    parser.add_argument("root_dir", nargs="?", default=DEFAULT_ROOT,
                        help="Tree to scan for .keep files (default: %s)" % DEFAULT_ROOT)
    parser.add_argument("--apply", action="store_true",
                        help="Write changes (default is dry-run)")
    args = parser.parse_args()

    root = os.path.abspath(args.root_dir)
    if not os.path.isdir(root):
        print("ERROR: not a directory: %s" % root)
        sys.exit(1)

    pairs = build_token_pairs()
    reexport_sanity_check(root, pairs)

    keeps = sorted(glob.glob(os.path.join(root, "**", "*.keep.c"), recursive=True) +
                   glob.glob(os.path.join(root, "**", "*.keep.cpp"), recursive=True))

    n_content = n_renamed = 0
    for path in keeps:
        with open(path, "r", encoding="utf-8", errors="replace") as f:
            content = f.read()

        new_content = content
        hit_tokens = []
        for old_tok, new_tok in pairs:
            if old_tok in new_content:
                new_content = new_content.replace(old_tok, new_tok)
                hit_tokens.append((old_tok, new_tok))

        directory = os.path.dirname(path)
        base = os.path.basename(path)
        new_base = base
        for old_tok, new_tok in pairs:
            if old_tok in base:        # at most one (the keep's own function)
                new_base = base.replace(old_tok, new_tok)
                break
        new_path = os.path.join(directory, new_base)

        if new_content == content and new_base == base:
            continue

        rel = os.path.relpath(path, root)
        if new_base != base:
            print("  rename  %s -> %s" % (rel, new_base))
            n_renamed += 1
        if new_content != content:
            xrefs = [o for o, _ in hit_tokens if not base.startswith(o)]
            note = (" (+%d cross-ref(s))" % len(xrefs)) if xrefs else ""
            print("  edit    %s  [%d token(s)]%s" % (rel, len(hit_tokens), note))
            n_content += 1

        if args.apply:
            with open(new_path, "w", encoding="utf-8") as f:
                f.write(new_content)
            if new_path != path:
                os.remove(path)

    mode = "APPLIED" if args.apply else "DRY-RUN (use --apply to write)"
    print("\n%s: %d file(s) renamed, %d file(s) content-updated, %d keep(s) scanned"
          % (mode, n_renamed, n_content, len(keeps)))


if __name__ == "__main__":
    main()
