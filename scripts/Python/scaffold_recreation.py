#!/usr/bin/env python3
"""Scaffold the pass-1 public API of the source recreation.

Reads the `recreation` export of nocedit.exe and the verified sibling mapping,
and writes into recreation/:

  <module>/fwd.h                         forward declarations and opaque enums
  <module>/<tu>/<class>.h                one header per class, public API only
  <module>/<tu>/<tu>.h                   the TU's public free functions
  tests/<module>/<tu>/<header>_test.cpp  interface tests for each header

Scope is game code: a function is included when its TU exists in nocturne.exe
and the function itself is paired with a nocturne.exe function. A method is
public when something outside its class calls it, takes its address, or
dispatches it through a vtable; a free function when something outside its TU
does.

Existing files are never overwritten unless --force is given; everything the
scaffold could not express (platform types, slot-name disagreements, foreign
vtable slots) is printed as a report for correction in Ghidra.

Run from anywhere:
    python3 scripts/Python/scaffold_recreation.py --report-only
    python3 scripts/Python/scaffold_recreation.py
"""

import argparse
import collections
import glob
import json
import os
import re
import shutil
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
ANNOTATIONS = os.path.join(ROOT, "annotations")
OUTPUT = os.path.join(ROOT, "recreation")

SKIPPED_MODULES = {"crt", "globals", "entry"}
ARTIFACT_METHOD = re.compile(r"^arr(c|d)tor\d*$")
SPECIAL_METHOD = re.compile(r"^(ctor|dtor|copy)\d*$")

BUILTIN_TYPES = {
    "void": ("void", None), "bool": ("bool", None), "char": ("char", None),
    "float": ("float", None), "double": ("double", None), "int": ("int", None),
    "short": ("std::int16_t", "<cstdint>"), "long": ("std::int32_t", "<cstdint>"),
    "longlong": ("std::int64_t", "<cstdint>"), "sbyte": ("std::int8_t", "<cstdint>"),
    "schar": ("std::int8_t", "<cstdint>"),
    "uint": ("std::uint32_t", "<cstdint>"), "ulong": ("std::uint32_t", "<cstdint>"),
    "dword": ("std::uint32_t", "<cstdint>"), "ushort": ("std::uint16_t", "<cstdint>"),
    "word": ("std::uint16_t", "<cstdint>"), "uchar": ("std::uint8_t", "<cstdint>"),
    "byte": ("std::uint8_t", "<cstdint>"), "ulonglong": ("std::uint64_t", "<cstdint>"),
    "qword": ("std::uint64_t", "<cstdint>"),
    "int8_t": ("std::int8_t", "<cstdint>"), "int16_t": ("std::int16_t", "<cstdint>"),
    "int32_t": ("std::int32_t", "<cstdint>"), "int64_t": ("std::int64_t", "<cstdint>"),
    "uint8_t": ("std::uint8_t", "<cstdint>"), "uint16_t": ("std::uint16_t", "<cstdint>"),
    "uint32_t": ("std::uint32_t", "<cstdint>"), "uint64_t": ("std::uint64_t", "<cstdint>"),
}

# Platform-header types with a portable standard equivalent. Anything else
# from a System header is an OS handle or a Watcom internal and keeps its
# function out of pass 1.
SYSTEM_TYPES = {
    "_FILE": ("std::FILE", "<cstdio>"), "FILE": ("std::FILE", "<cstdio>"),
    "SIZE_T": ("std::size_t", "<cstddef>"), "size_t": ("std::size_t", "<cstddef>"),
    "_ostream": ("std::ostream", "<ostream>"), "_istream": ("std::istream", "<istream>"),
    "ifstream": ("std::ifstream", "<fstream>"), "streambuf": ("std::streambuf", "<streambuf>"),
    "ios": ("std::ios", "<ios>"), "filebuf": ("std::filebuf", "<fstream>"),
    "time_t": ("std::time_t", "<ctime>"), "_tm": ("std::tm", "<ctime>"),
    "va_list_t": ("std::va_list", "<cstdarg>"),
    "DWORD": ("std::uint32_t", "<cstdint>"), "UINT": ("std::uint32_t", "<cstdint>"),
    "BOOL": ("int", None), "LPVOID": ("void *", None),
    "LPSTR": ("char *", None), "LPCSTR": ("const char *", None),
}

CPP_KEYWORDS = set("""
alignas alignof and and_eq asm auto bitand bitor bool break case catch char char8_t
char16_t char32_t class compl concept const consteval constexpr constinit const_cast
continue co_await co_return co_yield decltype default delete do double dynamic_cast else
enum explicit export extern false float for friend goto if inline int long mutable
namespace new noexcept not not_eq nullptr operator or or_eq private protected public
register reinterpret_cast requires return short signed sizeof static static_assert
static_cast struct switch template this thread_local throw true try typedef typeid
typename union unsigned using virtual void volatile wchar_t while xor xor_eq
""".split())


class Unmappable(Exception):
    """A type with no portable spelling; its function stays out of pass 1."""


def load_buckets(program, part):
    items = []
    for path in sorted(glob.glob(os.path.join(ANNOTATIONS, program, "recreation", part,
                                              "%s_bucket_*.json" % part))):
        with open(path) as f:
            items.extend(json.load(f))
    return items


def module_of(tu):
    return tu.split("/")[0]


def tu_stem(tu):
    return os.path.splitext(os.path.basename(tu))[0]


def header_stem(name):
    """`CDemonActor` -> `demonactor`, `SDamageInfo` -> `damageinfo`."""
    return (name[1:] if re.match(r"^[CSUE][A-Z0-9]", name) else name).lower()


class Model:
    def __init__(self):
        self.types = {t["name"]: t for t in load_buckets("nocedit.exe", "types")}
        self.functions = {f["addr"]: f for f in load_buckets("nocedit.exe", "functions")}
        self.vtables = load_buckets("nocedit.exe", "vtables")
        self.descriptors = load_buckets("nocedit.exe", "descriptors")
        game_tus = {f["tu"] for f in load_buckets("nocturne.exe", "functions")}
        mapping_path = os.path.join(ANNOTATIONS, "nocturne.exe", "reports",
                                    "sibling_verified_mapping.json")
        with open(mapping_path) as f:
            paired = {p["a"] for p in json.load(f)["pairs"]}

        self.report = collections.defaultdict(list)
        self.in_scope = {}
        for addr, f in self.functions.items():
            if module_of(f["tu"]) in SKIPPED_MODULES or f["tu"] not in game_tus:
                continue
            if addr not in paired:
                continue
            if ARTIFACT_METHOD.match(f["method"]) and f.get("cls"):
                continue
            cls = f.get("cls")
            if cls and self.types.get(cls, {}).get("kind") == "struct" and SPECIAL_METHOD.match(f["method"]):
                continue  # compiler-generated member-wise specials
            self.in_scope[addr] = f

        # Table entries are data references too; they are not address-taken uses.
        self.slot_addrs = set()
        for table in self.vtables:
            for slot in table["slots"]:
                self.slot_addrs.add("%08x" % (int(table["addr"], 16) + slot["offset"]))
        for table in self.descriptors:
            for i in range(3):
                self.slot_addrs.add("%08x" % (int(table["addr"], 16) + 4 * i))
        self.copy_ctors = {d["slots"]["copy"] for d in self.descriptors if "copy" in d["slots"]}

    def parent(self, name):
        return self.types.get(name, {}).get("parent")

    def ancestors(self, name):
        chain, p = [], self.parent(name)
        while p and p not in chain:
            chain.insert(0, p)
            p = self.parent(p)
        return chain

    def is_external_caller(self, caller_addr, f):
        caller = self.functions.get(caller_addr)
        if caller is None:
            return False
        if module_of(caller["tu"]) not in SKIPPED_MODULES and caller_addr not in self.in_scope:
            return False
        if f.get("cls"):
            return caller.get("cls") != f["cls"]
        return caller["tu"] != f["tu"]

    def is_public(self, f):
        if any(self.is_external_caller(c, f) for c in f.get("callers", [])):
            return True
        return any(ref not in self.slot_addrs for ref in f.get("data_refs", []))


class Declarations:
    """Collects what one header needs while rendering its signatures."""

    def __init__(self, scaffold, module):
        self.scaffold = scaffold
        self.module = module
        self.system_includes = set()
        self.fwd_modules = set()
        self.headers = set()

    def qualify(self, name):
        home = self.scaffold.type_home.get(name)
        if home is None:
            raise Unmappable("%s has no home" % name)
        module = module_of(home)
        self.fwd_modules.add(module)
        return name if module == self.module else "%s::%s" % (module, name)

    def type_ref(self, ref, extra_ptr=0):
        ptr = ref.get("ptr", 0) + len(ref.get("array", [])) + extra_ptr
        kind, name = ref.get("kind"), ref["name"]
        if kind == "builtin":
            if name not in BUILTIN_TYPES:
                raise Unmappable("builtin %s" % name)
            spelled, include = BUILTIN_TYPES[name]
        elif kind == "system" and name in BUILTIN_TYPES:
            spelled, include = BUILTIN_TYPES[name]
        elif kind == "system":
            if name not in SYSTEM_TYPES:
                raise Unmappable("platform type %s (%s.h)" % (name, ref.get("header", "?")))
            spelled, include = SYSTEM_TYPES[name]
        elif kind == "typedef":
            target = self.scaffold.model.types.get(name, {}).get("target")
            if not target:
                raise Unmappable("typedef %s" % name)
            return self.type_ref(target, ptr)
        elif kind in ("class", "struct", "union", "enum"):
            # A declaration needs only the forward declaration, even by value.
            spelled, include = self.qualify(name), None
        elif kind == "funcdef":
            alias = self.scaffold.funcdef_alias.get(name)
            if alias is None:
                raise Unmappable("funcdef %s" % name)
            spelled, include = alias[0], None
            self.headers.add(alias[1])
        else:
            raise Unmappable("%s type %s" % (kind, name))
        if include:
            self.system_includes.add(include)
        if ptr and spelled.endswith("*"):
            return spelled + "*" * ptr
        return spelled + (" " + "*" * ptr if ptr else "")

    def parameters(self, params, variadic):
        used, out = set(), []
        for p in params:
            name = p["name"]
            if name in CPP_KEYWORDS:
                name += "_"
            while name in used:
                name += "_"
            used.add(name)
            spelled = self.type_ref(p["type"])
            out.append(spelled + name if spelled.endswith("*") else "%s %s" % (spelled, name))
        if variadic:
            out.append("...")
        return out

    def types_only(self, params):
        return [self.type_ref(p["type"]) for p in params]


def void_pointer_count(f):
    return sum(1 for p in f.get("params", [])
               if p["type"]["name"] == "void" and p["type"].get("ptr", 0) > 0)


def parameter_key(f):
    refs = [p["type"] for p in f.get("params", [])]
    return json.dumps(refs, sort_keys=True) + str(bool(f.get("variadic")))


def signature_key(f):
    return json.dumps(f["ret"], sort_keys=True) + parameter_key(f)


def pointer_join(spelled):
    return spelled if spelled.endswith("*") else spelled + " "


class Scaffold:
    def __init__(self, model):
        self.model = model
        self.report = model.report
        self.methods = collections.defaultdict(list)   # cls -> [function]
        self.free = collections.defaultdict(list)      # tu -> [function]
        for f in model.in_scope.values():
            if f.get("cls"):
                self.methods[f["cls"]].append(f)
            else:
                self.free[f["tu"]].append(f)
        self.vtable_of = self.primary_vtables()
        self.classes = self.select_classes()
        self.type_home = self.assign_homes()
        self.header_files = self.assign_header_files()
        self.funcdef_alias = {}

    # -- vtables ----------------------------------------------------------

    def primary_vtables(self):
        tables = collections.defaultdict(list)
        for table in self.model.vtables:
            tables[table["owner"]].append(table)
        primary = {}
        for owner, owned in tables.items():
            owned.sort(key=lambda t: -len(t["slots"]))
            primary[owner] = owned[0]
            for extra in owned[1:]:
                self.report["secondary vtable ignored"].append(
                    "%s: %s (%d slots) besides %s" % (owner, extra["addr"], len(extra["slots"]), owned[0]["addr"]))
        return primary

    def slot_method(self, slot):
        f = self.model.functions.get(slot["addr"])
        return f

    def introducer(self, cls, offset):
        for c in self.model.ancestors(cls) + [cls]:
            table = self.vtable_of.get(c)
            if table and any(s["offset"] == offset for s in table["slots"]):
                return c
        return cls

    def struct_slot_name(self, intro, offset):
        """The slot's field name in Ghidra's <intro>_vtable struct, if it has one.

        A class's struct covers only the slots it introduces, so its offsets
        start where the tables of the ancestors' structs end.
        """
        table = self.model.types.get(intro + "_vtable", {}).get("vtable_slots")
        if not table:
            return None
        start = sum(4 * len(self.model.types.get(a + "_vtable", {}).get("vtable_slots", []))
                    for a in self.model.ancestors(intro))
        return next((s["name"] for s in table if s["offset"] == offset - start), None)

    def plan_virtuals(self):
        """One name and one signature per (introducing class, slot).

        The name is the field name in Ghidra's vtable struct for the
        introducing class. Without one, every implementation votes once and
        names already used higher in the hierarchy are skipped, so two slots
        never collapse into one declaration. The signature is taken from an
        implementation bearing that name: the one with the fewest void *
        parameters, then the introducer's own. A body that fills several slots carries only one of their
        names, so it is not counted as a disagreement.
        """
        votes = collections.defaultdict(collections.Counter)
        impls = collections.defaultdict(list)
        for owner in sorted(self.classes):
            table = self.vtable_of.get(owner)
            if not table:
                continue
            filled = collections.Counter(s["addr"] for s in table["slots"])
            for slot in table["slots"]:
                f = self.slot_method(slot)
                if slot.get("pure") or f is None or re.match(r"^dtor\d*$", f["method"]):
                    continue
                if f.get("cls") != owner and not slot.get("foreign"):
                    continue
                key = (self.introducer(owner, slot["offset"]), slot["offset"])
                impls[key].append(f)
                if filled[slot["addr"]] == 1 and not slot.get("foreign"):
                    votes[key][f["method"]] += 1

        self.virtual_decl = {}
        taken = collections.defaultdict(set)
        order = sorted(impls, key=lambda k: (len(self.model.ancestors(k[0])), k[0], k[1]))
        for key in order:
            intro, offset = key
            struct_name = self.struct_slot_name(intro, offset)
            if struct_name:
                name = struct_name
                for method, count in sorted(votes[key].items()):
                    if method != name:
                        renamed = sorted(f["name"] for f in impls[key] if f["method"] == method)
                        self.report["slot implementation named differently from its vtable field (rename in Ghidra)"].append(
                            "%s+%d field %s: %s" % (intro, offset, name, ", ".join(renamed)))
            else:
                used = set(taken[intro])
                for a in self.model.ancestors(intro):
                    used |= taken[a]
                ranked = [n for n, _ in votes[key].most_common()] or [f["method"] for f in impls[key]]
                name = next((n for n in ranked if n not in used), None)
                if len(votes[key]) > 1 or name != ranked[0]:
                    self.report["virtual slot named inconsistently, no vtable struct (rename in Ghidra)"].append(
                        "%s+%d: %s -> %s" % (intro, offset,
                                             ", ".join("%s x%d" % kv for kv in votes[key].most_common()), name))
            if name is None:
                continue
            taken[intro].add(name)
            # A body shared by several slots carries one slot's prototype, so the
            # signature comes from an implementation that bears the slot's name.
            # Ghidra types some parameters void * where the decompiled output reads
            # better that way; the most specific prototype wins, then the introducer's.
            named = [f for f in impls[key] if f["method"] == name] or impls[key]
            source = min(named, key=lambda f: (void_pointer_count(f), f["cls"] != intro))
            self.virtual_decl[key] = (name, source)

    def virtuals_above(self, cls):
        """Base virtual name -> parameter keys, for the classes above `cls`."""
        above = collections.defaultdict(set)
        for (intro, _), (name, source) in self.virtual_decl.items():
            if intro in self.model.ancestors(cls):
                above[name].add(parameter_key(source))
        return above

    # -- classes and homes ------------------------------------------------

    def select_classes(self):
        classes = set(self.methods)
        for owner in self.vtable_of:
            if owner in classes or any(c in classes for c in self.descendants(owner)):
                classes.add(owner)
        for cls in list(classes):
            classes.update(self.model.ancestors(cls))
        return {c for c in classes if self.model.types.get(c, {}).get("kind") in ("class", "struct")}

    def descendants(self, cls):
        return [c for c in self.model.types if cls in self.model.ancestors(c)]

    def assign_homes(self):
        homes = {}
        for cls in self.classes:
            counts = collections.Counter(f["tu"] for f in self.methods.get(cls, []))
            rtti = self.model.types[cls].get("rtti_file")
            if counts:
                ctor_tus = {f["tu"] for f in self.methods[cls] if f["method"].startswith("ctor")}
                homes[cls] = max(sorted(counts), key=lambda tu: (counts[tu], tu in ctor_tus))
            elif rtti and rtti in {f["tu"] for f in self.model.in_scope.values()}:
                homes[cls] = rtti
        # Remaining types home where the in-scope signatures use them most.
        usage = collections.defaultdict(collections.Counter)
        for f in self.model.in_scope.values():
            for ref in [f["ret"]] + [p["type"] for p in f.get("params", [])]:
                usage[ref["name"]][f["tu"]] += 1
        for name, t in self.model.types.items():
            if name in homes or t["kind"] not in ("class", "struct", "union", "enum", "funcdef"):
                continue
            if usage.get(name):
                homes[name] = max(sorted(usage[name]), key=lambda tu: usage[name][tu])
        for cls in self.classes:
            if cls not in homes:
                fallback = next((homes[d] for d in self.descendants(cls) if d in homes), None)
                if fallback:
                    homes[cls] = fallback
                else:
                    self.report["class without a home TU"].append(cls)
        return homes

    def assign_header_files(self):
        files = {}
        by_dir = collections.defaultdict(list)
        for cls in sorted(self.classes):
            if cls in self.type_home:
                by_dir[os.path.splitext(self.type_home[cls])[0]].append(cls)
        for directory, classes in by_dir.items():
            stems = collections.Counter(header_stem(c) for c in classes)
            for cls in classes:
                stem = header_stem(cls) if stems[header_stem(cls)] == 1 else cls.lower()
                files[cls] = os.path.join(directory, stem + ".h")
        return files

    def tu_header(self, tu):
        directory = os.path.splitext(tu)[0]
        stem = tu_stem(tu)
        taken = {os.path.basename(p) for c, p in self.header_files.items()
                 if os.path.dirname(p) == directory}
        name = stem + ".h" if stem + ".h" not in taken else stem + "_functions.h"
        return os.path.join(directory, name)

    # -- rendering --------------------------------------------------------

    def render(self, emit):
        self.plan_virtuals()
        self.plan_funcdefs()
        polymorphic = {c for c in self.classes
                       if c in self.vtable_of or any(a in self.vtable_of for a in self.model.ancestors(c))}
        for cls in sorted(self.classes):
            if cls in self.header_files:
                self.render_class(cls, polymorphic, emit)
        for tu in sorted(self.free):
            self.render_tu(tu, emit)
        self.render_fwd(emit)

    def plan_funcdefs(self):
        for name, t in self.model.types.items():
            if t["kind"] != "funcdef" or name not in self.type_home:
                continue
            owner, _, rest = name.partition("_")
            if rest and owner in self.header_files:
                self.funcdef_alias[name] = ("%s::%s" % (owner, rest), self.header_files[owner])
            else:
                self.funcdef_alias[name] = (name, self.tu_header(self.type_home[name]))

    def funcdef_using(self, decls, name, alias):
        t = self.model.types[name]
        params = decls.types_only(t.get("params", []))
        if t.get("variadic"):
            params.append("...")
        return "using %s = %s(%s);" % (alias, decls.type_ref(t["ret"]), ", ".join(params))

    def method_entry(self, decls, cls, f, name=None, virtual=None):
        name = name or f["method"]
        ret = decls.type_ref(f["ret"])
        params = decls.parameters(f.get("params", []), f.get("variadic"))
        types = decls.types_only(f.get("params", [])) + (["..."] if f.get("variadic") else [])
        static = not f.get("receiver")
        return {"name": name, "ret": ret, "params": params, "types": types,
                "static": static, "virtual": virtual, "addr": f["addr"]}

    def render_class(self, cls, polymorphic, emit):
        path = self.header_files[cls]
        module = module_of(path)
        decls = Declarations(self, module)
        parent = self.model.parent(cls)
        if parent and parent not in self.header_files:
            self.report["parent outside the scaffold"].append("%s : %s" % (cls, parent))
            parent = None
        if parent:
            decls.headers.add(self.header_files[parent])
            base_spelled = decls.qualify(parent)

        ctors, dtor, copy_ctor, resolved, plain = [], None, False, [], []
        seen, handled = set(), set()

        # Virtuals: every slot this class introduces or overrides, named and
        # typed once per hierarchy by plan_virtuals.
        own_table = self.vtable_of.get(cls)
        for slot in (own_table or {}).get("slots", []):
            intro = self.introducer(cls, slot["offset"])
            decl = self.virtual_decl.get((intro, slot["offset"]))
            f = self.slot_method(slot)
            # A foreign slot is a body shared with a sibling class; it is still
            # this class's override.
            own = f is not None and (f.get("cls") == cls or slot.get("foreign"))
            if slot.get("pure"):
                if intro != cls:
                    continue
                kind = "pure"
            elif not own or re.match(r"^dtor\d*$", f["method"]):
                continue
            elif intro == cls:
                kind = "virtual"
            elif f["addr"] in self.model.in_scope:
                kind = "override"
            else:
                continue
            if decl is None:
                self.report["virtual slot with no usable signature"].append("%s+%d" % (cls, slot["offset"]))
                continue
            name, source = decl
            if f is not None:
                handled.add(f["addr"])
                if kind == "override" and f["method"] == name and signature_key(f) != signature_key(source):
                    self.report["override typed differently from its base (Ghidra signature)"].append(
                        "%s vs %s" % (f["name"], source["name"]))
            try:
                entry = self.method_entry(decls, cls, source, name=name, virtual=kind)
            except Unmappable as exc:
                self.report["left out: unmappable type"].append("%s (%s)" % (source["name"], exc))
                continue
            seen.add((entry["name"], tuple(entry["types"])))
            resolved.append(entry)

        above = self.virtuals_above(cls)
        for f in sorted(self.methods.get(cls, []), key=lambda f: f["addr"]):
            method = f["method"]
            if f["addr"] in handled:
                continue
            if parameter_key(f) in above.get(method, ()):
                # Outside the vtable in the binary, but C++ would make it an override.
                self.report["non-virtual with a base virtual's signature, left out (rename in Ghidra)"].append(
                    f["name"])
                continue
            try:
                if re.match(r"^ctor\d*$", method):
                    entry = self.method_entry(decls, cls, f)
                    key = ("ctor", tuple(entry["types"]))
                    if key not in seen:
                        seen.add(key)
                        ctors.append(entry)
                elif re.match(r"^dtor\d*$", method):
                    dtor = True
                elif f["addr"] in self.model.copy_ctors:
                    copy_ctor = True
                elif self.model.is_public(f):
                    entry = self.method_entry(decls, cls, f)
                    key = (entry["name"], tuple(entry["types"]))
                    if key not in seen:
                        seen.add(key)
                        plain.append(entry)
            except Unmappable as exc:
                self.report["left out: unmappable type"].append("%s (%s)" % (f["name"], exc))

        # A non-virtual that shares a base virtual's name would hide it.
        unhidden = sorted({e["name"] for e in plain} & set(above) - {e["name"] for e in resolved})
        for name in unhidden:
            self.report["method shares a base virtual's name (check in Ghidra)"].append("%s::%s" % (cls, name))

        # Names brought in by `using` are overloaded too, so tests must pick one.
        names = collections.Counter(e["name"] for e in resolved + plain) + collections.Counter(unhidden)
        lines = []
        if parent:
            lines += ["    using %s::%s;" % (base_spelled, name) for name in unhidden]
            if unhidden:
                lines.append("")
        for alias_name, (alias, header) in sorted(self.funcdef_alias.items()):
            if header == path and alias.startswith(cls + "::"):
                try:
                    lines.append("    " + self.funcdef_using(decls, alias_name, alias.split("::", 1)[1]))
                except Unmappable as exc:
                    self.report["left out: unmappable type"].append("funcdef %s (%s)" % (alias_name, exc))
        if lines:
            lines.append("")
        for e in ctors:
            explicit = "explicit " if len(e["params"]) == 1 and e["params"][0] != "..." else ""
            lines.append("    %s%s(%s);" % (explicit, cls, ", ".join(e["params"])))
        if copy_ctor:
            lines.append("    %s(const %s &other);" % (cls, cls))
        is_poly = cls in polymorphic
        if dtor or is_poly:
            parent_poly = parent in polymorphic if parent else False
            if is_poly and parent_poly:
                lines.append("    ~%s() override;" % cls)
            elif is_poly:
                lines.append("    virtual ~%s();" % cls)
            else:
                lines.append("    ~%s();" % cls)
        if lines and (resolved or plain):
            lines.append("")
        for e in resolved:
            head = "virtual " if e["virtual"] in ("virtual", "pure") else ""
            tail = {"override": " override", "pure": " = 0"}.get(e["virtual"], "")
            lines.append("    %s%s%s(%s)%s;" % (head, pointer_join(e["ret"]), e["name"], ", ".join(e["params"]), tail))
        if resolved and plain:
            lines.append("")
        for e in plain:
            head = "static " if e["static"] else ""
            lines.append("    %s%s%s(%s);" % (head, pointer_join(e["ret"]), e["name"], ", ".join(e["params"])))

        keyword = "struct" if self.model.types[cls]["kind"] == "struct" else "class"
        inheritance = " : public %s" % base_spelled if parent else ""
        body = ["%s %s%s {" % (keyword, cls, inheritance)]
        if lines:
            if keyword == "class":
                body.append("public:")
            body.extend(lines)
        body.append("};")
        emit(path, self.header_text(decls, path, module, body))

        abstract = any(e["virtual"] == "pure" for e in resolved)
        self.emit_class_test(emit, cls, path, module, parent, base_spelled if parent else None,
                             is_poly, abstract, ctors, resolved + plain, names)

    def render_tu(self, tu, emit):
        path = self.tu_header(tu)
        module = module_of(tu)
        decls = Declarations(self, module)
        lines, seen, entries = [], set(), []
        for alias_name, (alias, header) in sorted(self.funcdef_alias.items()):
            if header == path and "::" not in alias:
                try:
                    lines.append(self.funcdef_using(decls, alias_name, alias))
                except Unmappable as exc:
                    self.report["left out: unmappable type"].append("funcdef %s (%s)" % (alias_name, exc))
        if lines:
            lines.append("")
        for f in sorted(self.free[tu], key=lambda f: f["addr"]):
            if not self.model.is_public(f):
                continue
            try:
                ret = decls.type_ref(f["ret"])
                params = decls.parameters(f.get("params", []), f.get("variadic"))
                types = decls.types_only(f.get("params", [])) + (["..."] if f.get("variadic") else [])
            except Unmappable as exc:
                self.report["left out: unmappable type"].append("%s (%s)" % (f["name"], exc))
                continue
            name = f["method"]
            if name in CPP_KEYWORDS:
                self.report["name is a C++ keyword (rename in Ghidra)"].append(f["name"])
                continue
            key = (name, tuple(types))
            if key in seen:
                continue
            seen.add(key)
            entries.append({"name": name, "ret": ret, "types": types, "static": True})
            lines.append("%s%s(%s);" % (pointer_join(ret), name, ", ".join(params)))
        if not entries and not lines:
            return
        emit(path, self.header_text(decls, path, module, lines))
        self.emit_tu_test(emit, tu, path, module, entries)

    def header_text(self, decls, path, module, body):
        includes = sorted(h for h in decls.headers if h != path)
        fwd = sorted("%s/fwd.h" % m for m in decls.fwd_modules)
        project = sorted(set(includes + fwd))
        out = ["#pragma once", ""]
        if project:
            out += ['#include "%s"' % h for h in project] + [""]
        if decls.system_includes:
            out += ["#include %s" % h for h in sorted(decls.system_includes)] + [""]
        out += ["namespace nocturne::%s {" % module, ""] + body + ["", "} // namespace nocturne::%s" % module]
        return "\n".join(out) + "\n"

    def render_fwd(self, emit):
        by_module = collections.defaultdict(list)
        for name, home in self.type_home.items():
            kind = self.model.types[name]["kind"]
            if kind in ("class", "struct", "union", "enum"):
                by_module[module_of(home)].append(name)
        for module, names in sorted(by_module.items()):
            lines, needs_cstdint = [], False
            for name in sorted(names):
                t = self.model.types[name]
                if t["kind"] == "enum":
                    width = {1: "std::int8_t", 2: "std::int16_t"}.get(t.get("size"), "std::int32_t")
                    lines.append("enum class %s : %s;" % (name, width))
                    needs_cstdint = True
                else:
                    keyword = {"class": "class", "struct": "struct", "union": "union"}[t["kind"]]
                    if name in self.classes:
                        keyword = "struct" if t["kind"] == "struct" else "class"
                    lines.append("%s %s;" % (keyword, name))
            out = ["#pragma once", ""]
            if needs_cstdint:
                out += ["#include <cstdint>", ""]
            out += ["namespace nocturne::%s {" % module, ""] + lines + ["", "} // namespace nocturne::%s" % module]
            emit(os.path.join(module, "fwd.h"), "\n".join(out) + "\n")

    # -- tests ------------------------------------------------------------

    def signature_check(self, owner, e, overloaded):
        params = ", ".join(e["types"])
        if e.get("static"):
            pointer = "%s(*)(%s)" % (pointer_join(e["ret"]), params)
            target = "&%s%s" % (owner + "::" if owner else "", e["name"])
        else:
            pointer = "%s(%s::*)(%s)" % (pointer_join(e["ret"]), owner, params)
            target = "&%s::%s" % (owner, e["name"])
        if overloaded:
            return "static_assert(std::is_same_v<decltype(static_cast<%s>(%s)), %s>);" % (pointer, target, pointer)
        return "static_assert(std::is_same_v<decltype(%s), %s>);" % (target, pointer)

    def emit_class_test(self, emit, cls, path, module, parent, base_spelled, is_poly, abstract, ctors, members, names):
        cases = []
        if parent:
            cases.append(("DerivesFrom%s" % parent, ["static_assert(std::is_base_of_v<%s, %s>);" % (base_spelled, cls)]))
        if is_poly:
            cases.append(("HasVirtualDestructor", ["static_assert(std::has_virtual_destructor_v<%s>);" % cls]))
        cases.append(("IsAbstract" if abstract else "IsConcrete",
                      ["static_assert(%sstd::is_abstract_v<%s>);" % ("" if abstract else "!", cls)]))
        if ctors and not abstract:
            checks = []
            for e in ctors:
                if "..." in e["types"] or any(not t.endswith("*") and "::" not in t and t[:1].isupper() for t in e["types"]):
                    continue
                checks.append("static_assert(std::is_constructible_v<%s>);" % ", ".join([cls] + e["types"]))
            if checks:
                cases.append(("Constructors", checks))
        if members:
            cases.append(("PublicInterface", [self.signature_check(cls, e, names[e["name"]] > 1) for e in members]))
        self.emit_test(emit, path, module, cls, cases)

    def emit_tu_test(self, emit, tu, path, module, entries):
        names = collections.Counter(e["name"] for e in entries)
        checks = [self.signature_check(None, e, names[e["name"]] > 1) for e in entries]
        # Module-prefixed so a stem such as `3d` still makes a valid identifier.
        parts = [module] + re.split(r"[^A-Za-z0-9]", tu_stem(tu))
        suite = "".join(part[:1].upper() + part[1:] for part in parts if part) + "Functions"
        self.emit_test(emit, path, module, suite, [("PublicInterface", checks)])

    def emit_test(self, emit, path, module, suite, cases):
        out = ['#include "%s"' % path, "", "#include <gtest/gtest.h>", "", "#include <type_traits>", "",
               "namespace nocturne::%s {" % module, "namespace {", ""]
        for name, checks in cases:
            out.append("TEST(%s, %s) {" % (suite, name))
            out += ["    " + c for c in checks]
            out += ["}", ""]
        out += ["} // namespace", "} // namespace nocturne::%s" % module]
        test_path = os.path.join("tests", os.path.splitext(path)[0] + "_test.cpp")
        emit(test_path, "\n".join(out) + "\n")


def main():
    parser = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    parser.add_argument("--report-only", action="store_true", help="print the report, write nothing")
    parser.add_argument("--force", action="store_true", help="overwrite files that already exist")
    parser.add_argument("--output", default=OUTPUT, help="recreation root (default: %(default)s)")
    args = parser.parse_args()

    model = Model()
    scaffold = Scaffold(model)
    written, skipped, planned = [], [], []

    def emit(relpath, text):
        planned.append(relpath)
        if args.report_only:
            return
        path = os.path.join(args.output, relpath)
        if os.path.exists(path) and not args.force:
            skipped.append(relpath)
            return
        os.makedirs(os.path.dirname(path), exist_ok=True)
        with open(path, "w") as f:
            f.write(text)
        written.append(relpath)

    scaffold.render(emit)
    if written:
        clang_format = shutil.which("clang-format")
        if clang_format is None:
            print("WARNING: clang-format not found; written files are unformatted")
        else:
            paths = [os.path.join(args.output, p) for p in written]
            for i in range(0, len(paths), 200):
                subprocess.run([clang_format, "-i", "--style=file"] + paths[i:i + 200], check=True)

    headers = [p for p in planned if p.endswith(".h")]
    tests = [p for p in planned if p.endswith("_test.cpp")]
    print("in scope: %d functions, %d classes" % (len(model.in_scope), len(scaffold.classes)))
    print("files: %d headers, %d tests" % (len(headers), len(tests)))
    if not args.report_only:
        print("written: %d, skipped (exists): %d" % (len(written), len(skipped)))
    for section, items in sorted(model.report.items()):
        print("\n## %s (%d)" % (section, len(items)))
        for item in sorted(items):
            print("  " + item)
    return 0


if __name__ == "__main__":
    sys.exit(main())
