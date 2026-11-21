#!/usr/bin/env python3
"""Where the four games' actor archive formats part.

Every actor class registers a version (registerActorClass), and a mission or save
file records the version it saved each class's fields at. Its archive() reads
fields in order, each gated on that version. Each build moved its own versions
on, so a version number can mean different fields in different games. That's a
fork: the file's version alone doesn't say how to read it, and the game's
manifest has to say which history it follows.

For each class, this parses each build's <Class>_archive pseudocode and runs it
at every saved version from 0 to MAX_VERSION, reading. That gives the fields
read at each version: their kind (Integer, Float, Actor, ...) and their
description. Then it compares the builds at each version they all save at or
above:

  same      every build has the class at one version with one format
  linear    the versions differ, but each one reads the same in every build
            that has it: one history, some builds further along it
  renamed   the same kinds at every version, but a description differs; the
            description is only a comment in the file
  fork      at some version two builds read different kinds of field
  no-archive  registered, with no archive() of its own (it reads its base's)

Fields read through a raw _fscanf count as `Raw:<format>`. A test this can't
evaluate (not the version, not the reading mode) runs both branches and never
ends the function.

    python3 scripts/Python/archive_version_forks.py              # the summary
    python3 scripts/Python/archive_version_forks.py --class CHero
    python3 scripts/Python/archive_version_forks.py --json out.json
"""

import argparse
import json
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
ANNOTATIONS = os.path.join(ROOT, "annotations")
BUILDS = {"nocedit": "nocedit.exe", "bw1": "bw1.exe", "bw2": "blairwitch2.exe", "bw3": "bw3.exe"}
MAX_VERSION = 20
# What g_ActorReadingMode holds while a file is read.
READING = 1
NUM = r"(?:0x[0-9a-fA-F]+|\d+)"
# A class name shown as `"?333?CTrigger" + 5` is a string Ghidra started too early; fix it
# in the program with split_offcut_strings.py, which this doesn't paper over.
REGISTER = re.compile(
    r'registerActorClass_FUN_\w+\s*\(\s*&?\w+\s*,\s*"(\w+)"\s*,[^,]*,\s*&?(\w+)\s*,\s*(' + NUM + r")")
ARCHIVE_FILE = re.compile(r"^(\w+?)_archive_FUN_[0-9a-fA-F]{8}\.cpp$")
FIELD = re.compile(r'archive(\w*?)_FUN_\w+\s*\((?:[^;"]*?)"((?:[^"\\]|\\.)*)"')
RAW = re.compile(r'_fscanf\s*\([^,]*,\s*"((?:[^"\\]|\\.)*)"')
COMPARE = re.compile(r"(\w+)\s*(<=|>=|==|!=|<|>)\s*(\w+)")
MODE = re.compile(r"g_ActorReadingMode\s*([!=]=)\s*(\d+)")
COPY = re.compile(r"\s*(\w+)\s*=\s*(\w+)\s*;\s*$")
KINDS = ("same", "linear", "renamed", "fork", "no-archive")


def number(text):
    return int(text, 16) if text.lower().startswith("0x") else int(text)


def function_body(text):
    """The text from the function's opening brace, comments dropped."""
    text = re.sub(r"//[^\n]*", "", text)
    start = text.find("\n{")
    return text[start + 1:] if start >= 0 else text


class Parser:
    """Ghidra's C, as a tree of blocks, ifs, returns and statements."""

    def __init__(self, text):
        self.s = text
        self.i = 0

    def skip_space(self):
        while self.i < len(self.s) and self.s[self.i].isspace():
            self.i += 1

    def word(self):
        self.skip_space()
        m = re.match(r"[A-Za-z_]\w*", self.s[self.i:])
        return m.group(0) if m else None

    def skip_string(self):
        """From an opening quote to just past its closing one."""
        quote = self.s[self.i]
        self.i += 1
        while self.s[self.i] != quote:
            self.i += 2 if self.s[self.i] == "\\" else 1
        self.i += 1

    def parenthesised(self):
        """The text inside the next ( ... )."""
        self.skip_space()
        depth, start = 0, self.i + 1
        while True:
            c = self.s[self.i]
            if c in "\"'":
                self.skip_string()
                continue
            depth += (c == "(") - (c == ")")
            self.i += 1
            if depth == 0:
                return self.s[start:self.i - 1]

    def statement_text(self):
        """Up to and including the next ; outside brackets, or up to a closing brace."""
        start, depth = self.i, 0
        while self.i < len(self.s):
            c = self.s[self.i]
            if c in "\"'":
                self.skip_string()
                continue
            if c == "}" and depth == 0:
                break
            depth += (c in "([") - (c in ")]")
            self.i += 1
            if c == ";" and depth == 0:
                break
        return self.s[start:self.i]

    def statement(self):
        self.skip_space()
        if self.s[self.i] == "{":
            self.i += 1
            items = []
            while True:
                self.skip_space()
                if self.i >= len(self.s) or self.s[self.i] == "}":
                    self.i += 1
                    return ("block", items)
                items.append(self.statement())
        w = self.word()
        if w == "if":
            self.i += 2
            cond = self.parenthesised()
            then = self.statement()
            other = None
            if self.word() == "else":
                self.i += 4
                other = self.statement()
            return ("if", cond, then, other)
        if w == "do":
            self.i += 2
            loop = self.statement()
            self.word()
            self.i += len("while")
            self.parenthesised()
            self.statement_text()
            return ("block", [loop])
        if w in ("while", "for", "switch"):
            self.i += len(w)
            self.parenthesised()
            return ("block", [self.statement()])
        text = self.statement_text()
        if w == "return":
            return ("return",)
        return ("expr", text)

    def parse(self):
        return self.statement()


def split_top(text, op):
    """text split on op outside parentheses."""
    parts, depth, start, i = [], 0, 0, 0
    while i < len(text):
        depth += (text[i] == "(") - (text[i] == ")")
        if depth == 0 and text.startswith(op, i):
            parts.append(text[start:i])
            i += len(op)
            start = i
        else:
            i += 1
    parts.append(text[start:])
    return parts


def strip_parens(text):
    """text without parentheses that wrap all of it."""
    text = text.strip()
    while text.startswith("(") and text.endswith(")"):
        inner = text[1:-1]
        depth = 0
        for c in inner:
            depth += (c == "(") - (c == ")")
            if depth < 0:
                return text
        text = inner.strip()
    return text


def compare(x, op, y):
    return {"<": x < y, "<=": x <= y, ">": x > y, ">=": x >= y, "==": x == y, "!=": x != y}[op]


class Run:
    """archive() at one saved version, reading: the fields it reads, in order."""

    def __init__(self, version_names, version):
        self.names = set(version_names)
        self.version = version
        self.fields = []

    def condition(self, text):
        """True or False when it tests the version or the reading mode, else None."""
        t = strip_parens(text)
        for op in ("||", "&&"):
            parts = split_top(t, op)
            if len(parts) > 1:
                values = [self.condition(p) for p in parts]
                decided, other = (True, False) if op == "||" else (False, True)
                if decided in values:
                    return decided
                return other if all(v is other for v in values) else None
        m = MODE.fullmatch(t)
        if m:
            return compare(READING, m.group(1), int(m.group(2)))
        m = COMPARE.fullmatch(t)
        if not m:
            return None
        a, op, b = m.groups()
        if a in self.names and re.fullmatch(NUM, b):
            return compare(self.version, op, number(b))
        if b in self.names and re.fullmatch(NUM, a):
            return compare(number(a), op, self.version)
        return None

    def run(self, node):
        """False once a return ends the function."""
        if node is None:
            return True
        kind = node[0]
        if kind == "block":
            return all(self.run(item) for item in node[1])
        if kind == "return":
            return False
        if kind == "expr":
            self.statement(node[1])
            return True
        _, cond, then, other = node
        known = self.condition(cond)
        if known is None:
            # Not a version or mode test: both branches read, and neither ends the function.
            self.run(then)
            self.run(other)
            return True
        return self.run(then if known else other)

    def statement(self, text):
        m = COPY.match(text)
        if m and m.group(2) in self.names:
            self.names.add(m.group(1))
        found = [(m.start(), f"{m.group(1)}:{m.group(2)}") for m in FIELD.finditer(text)]
        found += [(m.start(), f"Raw:{m.group(1)}") for m in RAW.finditer(text)]
        self.fields += [f for _, f in sorted(found)]


def reads_by_version(text, version_names):
    """{version: [fields]} for archive() source text."""
    tree = Parser(function_body(text)).parse()
    out = {}
    for v in range(MAX_VERSION + 1):
        run = Run(version_names, v)
        run.run(tree)
        out[v] = run.fields
    return out


def collect(annotations, program):
    """({class: version}, {class: version variable}, {class: archive path}) for one program."""
    versions, names, archives = {}, {}, {}
    src = os.path.join(annotations, program, "pseudocode", "src")
    for directory, _, files in sorted(os.walk(src)):
        for name in sorted(files):
            if not name.endswith(".cpp") or name.endswith((".keep.cpp", ".chunked.cpp")):
                continue
            path = os.path.join(directory, name)
            m = ARCHIVE_FILE.match(name)
            if m:
                archives.setdefault(m.group(1), path)
            if "staticInit" in name:
                with open(path, encoding="utf-8", errors="replace") as fh:
                    for r in REGISTER.finditer(fh.read()):
                        versions[r.group(1)] = number(r.group(3))
                        names[r.group(1)] = r.group(2)
    return versions, names, archives


def first_fork(reads, versions, key):
    """The lowest version two builds both save at or above and read differently by key."""
    for v in range(MAX_VERSION + 1):
        seen = {tuple(key(f) for f in by_version[v])
                for build, by_version in reads.items() if versions.get(build, 0) >= v}
        if len(seen) > 1:
            return v
    return None


def kind_of(row):
    if not row["steps"]:
        return "no-archive"
    if row["fork"] is not None:
        return "fork"
    if row["fork_by_description"] is not None:
        return "renamed"
    if len(set(row["versions"].values())) > 1:
        return "linear"
    return "same"


def class_row(cls, data):
    """One class's versions, the steps of each build's history, and where they part."""
    versions = {b: d[0][cls] for b, d in data.items() if cls in d[0]}
    reads = {}
    for build, (_, names, archives) in data.items():
        if cls in archives:
            with open(archives[cls], encoding="utf-8", errors="replace") as fh:
                text = fh.read()
            variable = {names[cls]} if cls in names else set()
            reads[build] = reads_by_version(text, variable | {f"g_{cls}ClassVersion", f"g_{cls}Version"})
    steps = {b: {str(v): r[v] for v in range(MAX_VERSION + 1) if v == 0 or r[v] != r[v - 1]}
             for b, r in reads.items()}
    # A build reads files up to its last gate even when it saves at an older version (BW2's
    # CShadow saves v1 and reads up to v6), and its shipped data may hold any of them.
    reach = {b: max(versions.get(b, 0), *map(int, steps.get(b, {"0": []}))) for b in reads}
    row = {
        "class": cls,
        "versions": versions,
        "reads_up_to": {b: v for b, v in reach.items() if v > versions.get(b, 0)},
        "fork": first_fork(reads, reach, lambda f: f.split(":", 1)[0]),
        "fork_by_description": first_fork(reads, reach, lambda f: f),
        # Each version where a build's fields change, with the fields it reads from there.
        "steps": steps,
    }
    row["kind"] = kind_of(row)
    return row


def scan(annotations=ANNOTATIONS, builds=None):
    builds = builds or BUILDS
    data = {b: collect(annotations, p) for b, p in builds.items()}
    classes = set()
    for versions, _, archives in data.values():
        classes |= set(versions) | set(archives)
    return [class_row(cls, data) for cls in sorted(classes)]


def summary_lines(rows):
    counts = {k: sum(1 for r in rows if r["kind"] == k) for k in KINDS}
    lines = ["%d classes: " % len(rows) + ", ".join("%d %s" % (counts[k], k) for k in KINDS)]
    for kind in ("fork", "renamed"):
        for r in rows:
            if r["kind"] == kind:
                at = r["fork"] if kind == "fork" else r["fork_by_description"]
                lines.append("  %-8s %-24s at v%d  %s" % (kind, r["class"], at, " ".join(
                    "%s=%d" % kv for kv in r["versions"].items())))
    return lines


def class_lines(row):
    lines = ["%s: %s %s" % (row["class"], row["kind"], " ".join("%s=%d" % kv for kv in row["versions"].items()))]
    for build, steps in row["steps"].items():
        previous = []
        for v, fields in steps.items():
            if fields[:len(previous)] == previous:
                lines.append("  %s v%s: +%s" % (build, v, ", ".join(fields[len(previous):]) or "-"))
            else:
                lines.append("  %s v%s: %s" % (build, v, ", ".join(fields) or "-"))
            previous = fields
    return lines


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--annotations", default=ANNOTATIONS)
    ap.add_argument("--class", dest="cls", help="print one class's history in every build")
    ap.add_argument("--json", help="write every class's row here")
    args = ap.parse_args(argv)
    rows = scan(args.annotations)
    if args.json:
        with open(args.json, "w", encoding="utf-8") as fh:
            json.dump(rows, fh, indent=1)
            fh.write("\n")
    if args.cls:
        row = next((r for r in rows if r["class"] == args.cls), None)
        if row is None:
            print("%s: no build registers or archives it" % args.cls)
            return 1
        print("\n".join(class_lines(row)))
        return 0
    print("\n".join(summary_lines(rows)))
    return 0


if __name__ == "__main__":
    sys.exit(main())
