#!/usr/bin/env python3
"""Print a release's files as an entry for recreation/data/releases.toml.

Run it on a fresh install of a release the game doesn't know yet, before it is
played, and send the output to be added to the catalogue: each POD's name, size
and XXH3-128, which is how the recreation recognises the install, then every
other file it shipped (executable, DLLs, loose data) by its path. --exclude
leaves out what the installer wrote, such as Uninst.isu.

    python3 scripts/Python/catalog_release.py --id 1999-de-nocturne --name "Nocturne (1999, German)" --game nocturne /path/to/Nocturne

The id is the release's year, language and game, with anything more after them
(2000-en-nocturne-budget). The game names the recreation/data/games/ file whose content
the release's manifest is written with. STARTUP.POD is required where there is
one; --required names others in its place. It needs the xxhash module: pip install
xxhash
"""

import argparse
import os
import re
import sys

# Missing, main says how to get it.
try:
    import xxhash
except ImportError:
    xxhash = None

# The POD the game can't start without, where the release has it.
STARTUP_POD = "STARTUP.POD"
BLOCK_SIZE = 1 << 20
ID_PATTERN = re.compile(r"[A-Za-z0-9._-]+")


def hash_file(path):
    digest = xxhash.xxh3_128()
    with open(path, "rb") as handle:
        while block := handle.read(BLOCK_SIZE):
            digest.update(block)
    return digest.hexdigest()


def find_pods(folder):
    """The folder's PODs, by name ignoring case, as the game mounts them."""
    names = [name for name in os.listdir(folder)
             if name.lower().endswith(".pod") and os.path.isfile(os.path.join(folder, name))]
    return sorted(names, key=str.lower)


def find_loose_files(folder, pods, excluded):
    """Every other file in the install, by '/'-separated path, hidden ones and excluded paths left out."""
    pod_set = set(pods)
    excluded_upper = {path.replace("\\", "/").upper() for path in excluded}
    found = []
    for root, dirs, files in os.walk(folder):
        dirs[:] = [d for d in dirs if not d.startswith(".")]
        for file_name in files:
            path = os.path.relpath(os.path.join(root, file_name), folder).replace(os.sep, "/")
            if file_name.startswith(".") or path in pod_set or path.upper() in excluded_upper:
                continue
            found.append(path)
    return sorted(found, key=str.lower)


def quote(text):
    return '"' + text.replace("\\", "\\\\").replace('"', '\\"') + '"'


def format_release(release_id, name, game, required, pods, files=()):
    """pods and files are (name or path, size, hash) for each."""
    lines = ["[[release]]", f"id = {quote(release_id)}", f"name = {quote(name)}",
             f"game = {quote(game)}",
             "required = [" + ", ".join(quote(pod) for pod in required) + "]"]
    for pod_name, size, digest in pods:
        lines += ["", "[[release.pod]]", f"name = {quote(pod_name)}", f"size = {size}",
                  f"xxh3 = {quote(digest)}"]
    for path, size, digest in files:
        lines += ["", "[[release.file]]", f"path = {quote(path)}", f"size = {size}",
                  f"xxh3 = {quote(digest)}"]
    return "\n".join(lines) + "\n"


def describe(folder, paths):
    return [(path, os.path.getsize(os.path.join(folder, path)), hash_file(os.path.join(folder, path)))
            for path in paths]


def catalog(folder, release_id, name, game, required_names=None, excluded=()):
    pods = find_pods(folder)
    if not pods:
        raise ValueError(f"{folder}: no .pod files here")
    wanted = [STARTUP_POD] if required_names is None else required_names
    by_upper = {pod.upper(): pod for pod in pods}
    if required_names is not None:
        missing = [n for n in required_names if n.upper() not in by_upper]
        if missing:
            raise ValueError(f"{folder}: no {', '.join(missing)} here")
    required = [by_upper[n.upper()] for n in wanted if n.upper() in by_upper]
    files = find_loose_files(folder, pods, excluded)
    return format_release(release_id, name, game, required, describe(folder, pods), describe(folder, files))


def main(argv=None):
    parser = argparse.ArgumentParser(description=__doc__,
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("folder", nargs="?", default=".", help="the install folder")
    parser.add_argument("--id", required=True, help="the release's id, as 1999-de-nocturne")
    parser.add_argument("--name", required=True, help='as "Nocturne (1999, German)"')
    parser.add_argument("--game", required=True,
                        help="the game it is a release of, by its data/games/ file, as nocturne")
    parser.add_argument("--required", action="append", metavar="POD",
                        help="a POD the game can't start without, in place of STARTUP.POD; repeatable")
    parser.add_argument("--exclude", action="append", default=[], metavar="PATH",
                        help="a file the installer wrote rather than shipped, as Uninst.isu; repeatable")
    args = parser.parse_args(argv)
    if xxhash is None:
        sys.exit("catalog_release.py: needs the xxhash module: pip install xxhash")
    if not ID_PATTERN.fullmatch(args.id) or not ID_PATTERN.fullmatch(args.game):
        sys.exit("catalog_release.py: an id or game is only letters, digits, '.', '_' and '-'")
    try:
        sys.stdout.write(catalog(args.folder, args.id, args.name, args.game, args.required, args.exclude))
    except (OSError, ValueError) as error:
        sys.exit(f"catalog_release.py: {error}")


if __name__ == "__main__":
    main()
