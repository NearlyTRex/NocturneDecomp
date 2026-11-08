#!/usr/bin/env python3
"""Print a release's PODs as an entry for recreation/data/releases.toml.

Run it on an untouched install of a release the game doesn't know yet, with
nothing added to the folder, and send the output to be added to the catalogue:
each POD's name, size and XXH3-128, which is how the recreation recognises the
install.

    python3 scripts/Python/catalog_release.py --id 1999-de --name "Nocturne (1999, German)" --game nocturne /path/to/Nocturne

The id is the release's year and language, with anything more after them
(2000-en-budget). The game names the recreation/data/games/ file whose content
the release's manifest is written with. It needs the xxhash module: pip install
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


def quote(text):
    return '"' + text.replace("\\", "\\\\").replace('"', '\\"') + '"'


def format_release(release_id, name, game, required, pods):
    """pods is (name, size, hash) for each."""
    lines = ["[[release]]", f"id = {quote(release_id)}", f"name = {quote(name)}",
             f"game = {quote(game)}",
             "required = [" + ", ".join(quote(pod) for pod in required) + "]"]
    for pod_name, size, digest in pods:
        lines += ["", "[[release.pod]]", f"name = {quote(pod_name)}", f"size = {size}",
                  f"xxh3 = {quote(digest)}"]
    return "\n".join(lines) + "\n"


def catalog(folder, release_id, name, game):
    pods = find_pods(folder)
    if not pods:
        raise ValueError(f"{folder}: no .pod files here")
    required = [pod for pod in pods if pod.upper() == STARTUP_POD]
    described = [(pod, os.path.getsize(os.path.join(folder, pod)),
                  hash_file(os.path.join(folder, pod))) for pod in pods]
    return format_release(release_id, name, game, required, described)


def main(argv=None):
    parser = argparse.ArgumentParser(description=__doc__,
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("folder", nargs="?", default=".", help="the install folder")
    parser.add_argument("--id", required=True, help="the release's id, as 1999-de")
    parser.add_argument("--name", required=True, help='as "Nocturne (1999, German)"')
    parser.add_argument("--game", required=True,
                        help="the game it is a release of, by its data/games/ file, as nocturne")
    args = parser.parse_args(argv)
    if xxhash is None:
        sys.exit("catalog_release.py: needs the xxhash module: pip install xxhash")
    if not ID_PATTERN.fullmatch(args.id) or not ID_PATTERN.fullmatch(args.game):
        sys.exit("catalog_release.py: an id or game is only letters, digits, '.', '_' and '-'")
    try:
        sys.stdout.write(catalog(args.folder, args.id, args.name, args.game))
    except (OSError, ValueError) as error:
        sys.exit(f"catalog_release.py: {error}")


if __name__ == "__main__":
    main()
