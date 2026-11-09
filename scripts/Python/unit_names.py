#!/usr/bin/env python3
"""8.3 file stems from class names.

The builds' file names are 8.3 (bw3 asserts two exceptions), so a unit named
from a class is too.
"""

import re

STEM_LIMIT = 8
VOWELS = frozenset("aeiou")
# A class named for what it serves lives in that thing's file: CClothList in
# cloth.cpp, CLevelLoader in level.cpp, CBaronWeapon in baron.cpp.
HELPER_WORDS = frozenset((
    "list", "item", "loader", "model", "decoder", "cache", "dest", "weapon", "property",
    "set", "controller", "manager", "effect", "placeholder", "instance", "entry", "info"))


def name_words(cls):
    """`CHighPriestOfGardath` -> ['high', 'priest', 'of', 'gardath']."""
    bare = re.sub(r"^C(?=[A-Z])", "", cls)
    return [w.lower() for w in re.findall(r"[A-Z]+(?![a-z])|[A-Z][a-z0-9]*|[a-z0-9]+", bare)]


def drop_vowels(word, limit=STEM_LIMIT):
    """Vowels out from the end, the first letter kept, until it fits: character -> charactr."""
    chars, i = list(word), len(word) - 1
    while len(chars) > limit and i > 0:
        if chars[i] in VOWELS:
            del chars[i]
        i -= 1
    return "".join(chars)[:limit]


def era_stem(cls):
    """The 8.3 file stem for class `cls`.

    Rules taken from nocedit's own files: `Demon` becomes `d` (dlight), a
    helper suffix is dropped (cloth), one long word loses late vowels
    (charactr), a short first word keeps the rest cut at 8 (batcreat), else
    the first word is cut to make room (dracbrid). Matches nocedit for 31 of
    the 51 class names over 8 characters, and for every shorter one.
    """
    ws = name_words(cls) or ["class"]
    if ws[0] == "demon" and len(ws) > 1:
        ws = ["d"] + ws[1:]
    while len(ws) > 1 and ws[-1] in HELPER_WORDS:
        ws = ws[:-1]
    joined = "".join(ws)
    if len(joined) <= STEM_LIMIT:
        return joined
    if len(ws) == 1:
        return drop_vowels(ws[0])
    if len(ws[0]) + 3 <= STEM_LIMIT:
        return joined[:STEM_LIMIT]
    rest = "".join(ws[1:])
    keep = min(len(ws[0]), max(4, STEM_LIMIT - len(rest)))
    return (ws[0][:keep] + rest)[:STEM_LIMIT]
