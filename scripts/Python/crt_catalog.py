#!/usr/bin/env python3
# Shared loader for the tridx7 CRT identification catalog.
#
# The human-editable source is research/10-tridx7_crt_identification/crt_functions.md
# (markdown tables). extract_crt_catalog.py flattens it into a canonical, greppable
# TSV data file (crt_functions.tsv) that the apply tools consume:
#
#   name_crt_functions.py    -> uses addr, conf, name
#   apply_crt_signatures.py  -> uses addr, conf, name, ret, conv, params
#
# TSV columns (tab-separated, one header line):
#   addr   conf   name   ret   conv   params   note
#
# A signature "int __cdecl(char* lc, const char* locale)" is stored split as
#   ret="int"  conv="__cdecl"  params="char* lc, const char* locale"
# params="void" or "" means no parameters. A trailing "..." param means varargs.

import os
import re

THIS_DIR = os.path.dirname(os.path.abspath(__file__))
REPO_ROOT = os.path.dirname(os.path.dirname(THIS_DIR))
CATALOG_MD = os.path.join(
    REPO_ROOT, "research", "10-tridx7_crt_identification", "crt_functions.md")
CATALOG_TSV = os.path.join(
    REPO_ROOT, "research", "10-tridx7_crt_identification", "crt_functions.tsv")

CONF_RANK = {"H": 3, "M": 2, "L": 1}

# column-2 name: starts with crt_, ends with _FUN_<hex>
NAME_RE = re.compile(r"^crt_[A-Za-z0-9_.]+_FUN_([0-9a-fA-F]{6,8})$")
ADDR_RE = re.compile(r"^[0-9a-fA-F]{6,8}$")
CONVENTIONS = ("__cdecl", "__stdcall", "__fastcall", "__thiscall", "__watcall")
SIG_RE = re.compile(
    r"^\s*(?P<ret>.+?)\s+(?P<conv>%s)\s*\((?P<params>.*)\)\s*$"
    % "|".join(CONVENTIONS))
TSV_COLUMNS = ["addr", "conf", "name", "ret", "conv", "params", "note"]


def parse_signature(sig):
    """Split a C prototype into (ret, conv, params_str).

    'int __cdecl(char* a, int b)' -> ('int', '__cdecl', 'char* a, int b')
    Falls back to conv='' and best-effort ret/params if no convention keyword.
    """
    sig = sig.strip().strip("`").strip()
    m = SIG_RE.match(sig)
    if m:
        return m.group("ret").strip(), m.group("conv"), m.group("params").strip()
    # no recognised convention keyword: split on the first top-level '('
    paren = sig.find("(")
    if paren == -1:
        return sig.strip(), "", ""
    return sig[:paren].strip(), "", sig[paren + 1:sig.rfind(")")].strip()


def split_params(params_str):
    """Split a parameter list into [(type, name, is_vararg), ...].

    Respects nested parens (function-pointer params). 'void'/'' -> [].
    """
    s = params_str.strip()
    if s == "" or s == "void":
        return []
    parts, depth, cur = [], 0, ""
    for ch in s:
        if ch == "(":
            depth += 1
        elif ch == ")":
            depth -= 1
        if ch == "," and depth == 0:
            parts.append(cur)
            cur = ""
        else:
            cur += ch
    if cur.strip():
        parts.append(cur)

    out = []
    for p in parts:
        p = p.strip()
        if p == "...":
            out.append(("...", "", True))
            continue
        # trailing identifier is the name only if preceded by whitespace or '*'
        m = re.match(r"^(.*[\s\*])([A-Za-z_]\w*)$", p)
        if m:
            out.append((m.group(1).strip(), m.group(2), False))
        else:
            out.append((p, "", False))
    return out


def has_varargs(params_str):
    return any(v[2] for v in split_params(params_str))


def parse_catalog_md(path=CATALOG_MD):
    """Parse the markdown catalog into entries + warnings.

    Each entry: {addr, conf, name, ret, conv, params, note, line}.
    De-duplicated by address (first wins; conflicting names warned).
    """
    entries, warnings = {}, []
    with open(path) as fh:
        lines = fh.readlines()

    for lineno, raw in enumerate(lines, 1):
        s = raw.strip()
        if not s.startswith("|"):
            continue
        cells = [c.strip() for c in s.strip("|").split("|")]
        if len(cells) < 4:
            continue

        addr = cells[0].lower()
        name = cells[1].strip("`").strip()
        sig = cells[2]
        conf = cells[3].strip("`").strip().upper()
        note = cells[4].strip() if len(cells) > 4 else ""

        if not ADDR_RE.match(addr):
            continue
        m = NAME_RE.match(name)
        if not m or conf not in CONF_RANK:
            continue
        if m.group(1).lower() != addr:
            warnings.append("line %d: addr %s != name suffix _FUN_%s -- skipped"
                            % (lineno, addr, m.group(1).lower()))
            continue
        if addr in entries:
            if entries[addr]["name"] != name:
                warnings.append("line %d: addr %s already mapped to %s; ignoring %s"
                                % (lineno, addr, entries[addr]["name"], name))
            continue

        ret, conv, params = parse_signature(sig)
        entries[addr] = {"addr": addr, "conf": conf, "name": name, "ret": ret,
                         "conv": conv, "params": params, "note": note, "line": lineno}

    return list(entries.values()), warnings


def _tsv_escape(v):
    return v.replace("\t", " ").replace("\n", " ").strip()


def write_tsv(entries, path=CATALOG_TSV):
    rows = sorted(entries, key=lambda e: int(e["addr"], 16))
    with open(path, "w") as fh:
        fh.write("\t".join(TSV_COLUMNS) + "\n")
        for e in rows:
            fh.write("\t".join(_tsv_escape(str(e.get(c, ""))) for c in TSV_COLUMNS) + "\n")
    return len(rows)


def load_tsv(path=CATALOG_TSV):
    """Load the canonical TSV data file into a list of entry dicts."""
    entries = []
    with open(path) as fh:
        header = fh.readline().rstrip("\n").split("\t")
        for line in fh:
            if not line.strip():
                continue
            cells = line.rstrip("\n").split("\t")
            row = dict(zip(header, cells))
            entries.append(row)
    return entries
