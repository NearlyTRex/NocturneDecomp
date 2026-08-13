#!/usr/bin/env python3
"""
fix_import_thunks.py

Rebuild the linker-emitted DLL import-thunk table at the tail of a Watcom PE,
to one standard, in every program that has one.

THE TABLE
---------
Both game binaries end in a contiguous array of 6-byte stubs, exactly one per
PE import, with no padding and no gaps:

    FF 25 <imm32>        JMP dword ptr [IAT_slot]

  nocturne.exe   00574818..00574c14   171 stubs / 171 imports
  nocedit.exe    00610ad8..00610f40   189 stubs / 189 imports

Watcom calls KERNEL32/USER32/GDI32/WINMM/ADVAPI32 imports DIRECTLY through the
IAT (`CALL dword ptr CS:[slot]`), so most of these thunks are never reached.
Only the DDRAW+WSOCK32+DSOUND block at the very end is actually called, from
support/trisock.cpp, sound/snddx.cpp and wincore/wddvmem.cpp. Dead or not, the
whole table is defined here: leaving 150+ undefined stub addresses is what let
Ghidra hallucinate functions into them in the first place (see below).

WHY A DEDICATED TOOL
--------------------
The table is STRUCTURALLY KNOWN - the PE import directory says exactly how many
functions there are and exactly where each one starts. No heuristic is needed or
wanted. That is what separates this from the boundary-repair family:

  fix_misaligned_functions.py  removes a phase-shifted entry only when it can
                               find an OWNER function that the block flows back
                               into. Stub-table hallucinations have no owner -
                               the real stubs are not defined as functions at
                               all - so they are reported ORPHAN and left.
  fix_function_boundaries.py   slides an entry back to an orphaned prologue.
                               A 6-byte JMP thunk has no prologue.
  find_missing_functions.py    finds CALL targets and post-padding gaps. These
                               stubs are called by nothing, and the table has no
                               padding to gap-scan.

THE HALLUCINATION CLASS THIS CLEANS UP
--------------------------------------
nocturne.exe carried 73 `crt_unknown.c_FUN_*` functions inside the table, each
phase-shifted off the 6-byte grid (69 by one byte, 4 by three) and each 11 or 15
bytes long, straddling two real stubs. They decode as pure fiction, because the
imm32 operand of one JMP is being read as an opcode:

    real     0057492c:  FF 25 B0 53 57 00     JMP dword ptr [PTR_GetStockObject]
             00574932:  FF 25 44 54 57 00     JMP dword ptr [PTR_LoadCursorA]

    Ghidra   0057492d:  25 B0 53 57 00        AND EAX,0x5753b0      <- operand!
             00574932:  FF 25 44 54 57 00     JMP dword ptr [0x575444]

All 73 had zero incoming references. nocedit.exe had none of these; its table was
simply undefined.

THE STANDARD THIS ENFORCES
--------------------------
Three layers, each owning a different name. Getting these confused is what
produced the mess being cleaned up.

  EXTERNAL symbol   the official API name, undecorated, with the official
                    prototype:  int __stdcall htons(ushort hostshort)
                    Never carries a TU prefix and never a _FUN_<addr> suffix -
                    an external has no address in this program, so a suffix
                    naming one is meaningless. Renaming the external also
                    renames its IAT label and every call site, which is how
                    nocturne ended up with an external literally called
                    `support_trisock.cpp_cleanupWinsock_FUN_005492a0`.

  thunk function    its own primary label, `crt_<dll>.c_<Api>`:
                    crt_wsock32.c_htons, crt_kernel32.c_CreateFileA
                    No _FUN_<addr> suffix, so the name is IDENTICAL in both
                    binaries - the addresses differ but the symbol does not.
                    export_annotations.py already exempts import thunks from
                    the name/address check.

  IAT slot          left to each program's existing convention. nocedit uses
                    g_<Api>Func, which is load-bearing for the compiling
                    decompilation (the Linux port substitutes implementations
                    through those pointers); nocturne uses Ghidra's default
                    PTR_<Api>_<addr>. This tool only repairs slots whose label
                    was collateral damage from a bad external rename.

Two thunks into one external CAN hold independent labels - nocedit proves it:
005e1ee0 = support_trisock.cpp_cleanupWinsock_FUN_005e1ee0 and 00610ed4 =
crt_wsock32.c_WSACleanup both target EXTERNAL:000000ab. When neither thunk has
its own primary symbol they merely both display the inherited one, which reads
like a Ghidra restriction but is not.

ORDINAL IMPORTS
---------------
WSOCK32 and DSOUND are imported by ordinal, so the PE carries no name. The map
below is not guesswork: every entry is corroborated three ways - nocedit's
independently-derived thunk names, the canonical Winsock 1.1 / DSOUND ordinal
tables, and the argument count at nocturne's own call sites.

SOURCE OF TRUTH
---------------
The PE import directory on disk, parsed here, not Ghidra's view of it. The two
programs model imports differently (nocturne's IAT slots reference Ghidra
EXTERNAL space; nocedit's point at fabricated 0x80000000|ordinal addresses), so
resolving through Ghidra would need two code paths and would inherit whatever is
already wrong. The PE is checked against program memory before it is trusted.

Report-first. --apply mutates and saves; it takes a .gar snapshot first unless
--no-snapshot. Headless mutations persist only via DomainFile.save().

Usage:
    GHIDRA_INSTALL_DIR=$HOME/Tools/Ghidra/lib \
    python3 -u fix_import_thunks.py <ABS_project_path> <project_name> \
            [program ...] [--pe-dir DIR] [--show N] [--apply] [--no-snapshot]
"""

import argparse
import os
import struct
import sys

# --------------------------------------------------------------------------
# Ordinal maps. See ORDINAL IMPORTS above for how these were corroborated.
# --------------------------------------------------------------------------
WSOCK32_ORDINALS = {
    1: "accept",       2: "bind",         3: "closesocket",  4: "connect",
    5: "getpeername",  6: "getsockname",  7: "getsockopt",   8: "htonl",
    9: "htons",       10: "inet_addr",   11: "inet_ntoa",   12: "ioctlsocket",
    13: "listen",     14: "ntohl",       15: "ntohs",       16: "recv",
    17: "recvfrom",   18: "select",      19: "send",        20: "sendto",
    21: "setsockopt", 22: "shutdown",    23: "socket",
    115: "WSAStartup", 116: "WSACleanup",
}

DSOUND_ORDINALS = {
    1: "DirectSoundCreate",
    2: "DirectSoundEnumerateA",
    3: "DirectSoundEnumerateW",
    6: "DirectSoundCaptureCreate",
}

ORDINAL_MAPS = {
    "WSOCK32.DLL": WSOCK32_ORDINALS,
    "DSOUND.DLL": DSOUND_ORDINALS,
}

# Official prototypes for the imports Ghidra could not type itself, because an
# ordinal import carries no name to look up. Transferred from nocedit.exe, where
# they were derived from the call sites. Ghidra-compatible types only.
ORDINAL_PROTOTYPES = {
    "accept":                ("_SOCKET", [("_SOCKET", "s"), ("SOCKADDR *", "addr"), ("int *", "addrlen")]),
    "bind":                  ("int",     [("_SOCKET", "s"), ("SOCKADDR *", "addr"), ("int", "namelen")]),
    "closesocket":           ("int",     [("_SOCKET", "s")]),
    "connect":               ("int",     [("_SOCKET", "s"), ("SOCKADDR *", "name"), ("int", "namelen")]),
    "getsockname":           ("int",     [("_SOCKET", "s"), ("SOCKADDR *", "name"), ("int *", "namelen")]),
    "htons":                 ("ushort",  [("ushort", "hostshort")]),
    "ioctlsocket":           ("int",     [("_SOCKET", "s"), ("long", "cmd"), ("uint *", "argp")]),
    "listen":                ("int",     [("_SOCKET", "s"), ("int", "backlog")]),
    "ntohs":                 ("ushort",  [("ushort", "netshort")]),
    "recv":                  ("int",     [("_SOCKET", "s"), ("char *", "buf"), ("int", "len"), ("int", "flags")]),
    "recvfrom":              ("int",     [("_SOCKET", "s"), ("char *", "buf"), ("int", "len"), ("int", "flags"),
                                          ("SOCKADDR *", "from"), ("int *", "fromlen")]),
    "send":                  ("int",     [("_SOCKET", "s"), ("char *", "buf"), ("int", "len"), ("int", "flags")]),
    "sendto":                ("int",     [("_SOCKET", "s"), ("char *", "buf"), ("int", "len"), ("int", "flags"),
                                          ("SOCKADDR *", "to"), ("int", "tolen")]),
    "setsockopt":            ("int",     [("_SOCKET", "s"), ("int", "level"), ("int", "optname"),
                                          ("char *", "optval"), ("int", "optlen")]),
    "socket":                ("int",     [("int", "af"), ("int", "type"), ("int", "protocol")]),
    "WSAStartup":            ("int",     [("WORD", "w_version_requested"), ("LPWSADATA", "lp_wsa_data")]),
    "WSACleanup":            ("int",     []),
    "DirectSoundCreate":     ("HRESULT", [("LPGUID", "lp_guid"), ("LPDIRECTSOUND *", "pp_ds"),
                                          ("LPUNKNOWN", "p_unk_outer")]),
    "DirectSoundEnumerateA": ("HRESULT", [("LPDSENUMCALLBACKA", "lp_ds_enum_callback"), ("LPVOID", "lp_context")]),
    "DirectDrawCreate":      ("HRESULT", [("GUID *", "lp_guid"), ("LPDIRECTDRAW *", "lplp_dd"),
                                          ("IUnknown *", "p_unk_outer")]),
}


# --------------------------------------------------------------------------
# PE import directory
# --------------------------------------------------------------------------
def parse_pe_imports(path):
    """-> (image_base, {stub_target_va: (dll, name, ordinal_or_None)}, raw_bytes, va_to_off)."""
    data = open(path, "rb").read()
    pe = struct.unpack_from("<I", data, 0x3C)[0]
    if data[pe:pe + 4] != b"PE\0\0":
        raise ValueError("%s: not a PE" % path)
    nsec = struct.unpack_from("<H", data, pe + 6)[0]
    optsz = struct.unpack_from("<H", data, pe + 20)[0]
    magic = struct.unpack_from("<H", data, pe + 24)[0]
    base = struct.unpack_from("<I", data, pe + 24 + 28)[0]
    ddstart = pe + 24 + (96 if magic == 0x10B else 112)
    imp_rva = struct.unpack_from("<II", data, ddstart + 8)[0]

    secs = []
    off = pe + 24 + optsz
    for _ in range(nsec):
        name = data[off:off + 8].rstrip(b"\0").decode("latin-1")
        vsz, va, rsz, ra = struct.unpack_from("<IIII", data, off + 8)
        secs.append((name, va, max(vsz, rsz), ra))
        off += 40

    def r2f(rva):
        for _n, va, sz, ra in secs:
            if va <= rva < va + sz:
                return ra + (rva - va)
        return None

    iat = {}
    off = r2f(imp_rva)
    while True:
        oft, _ts, _fc, namerva, ft = struct.unpack_from("<IIIII", data, off)
        if oft == 0 and namerva == 0 and ft == 0:
            break
        dll = data[r2f(namerva):].split(b"\0")[0].decode("latin-1").upper()
        t, slot = r2f(oft or ft), ft
        while True:
            v = struct.unpack_from("<I", data, t)[0]
            if v == 0:
                break
            if v & 0x80000000:
                ordinal = v & 0xFFFF
                name = ORDINAL_MAPS.get(dll, {}).get(ordinal)
                iat[base + slot] = (dll, name, ordinal)
            else:
                iat[base + slot] = (dll, data[r2f(v) + 2:].split(b"\0")[0].decode("latin-1"), None)
            t += 4
            slot += 4
        off += 20
    return base, iat, data, r2f


def find_stub_table(data, r2f, base, iat, text_start_rva=0x1000):
    """Locate every `FF 25 <iat slot>` stub. -> sorted [(va, dll, name, ordinal)]."""
    lo_slot = min(iat)
    start_off = r2f(text_start_rva)
    end_off = r2f(lo_slot - base)
    blob = data[start_off:end_off]
    out = []
    for i in range(len(blob) - 6):
        if blob[i] == 0xFF and blob[i + 1] == 0x25:
            tgt = struct.unpack_from("<I", blob, i + 2)[0]
            if tgt in iat:
                dll, name, ordinal = iat[tgt]
                out.append((base + text_start_rva + i, dll, name, ordinal, tgt))
    out.sort()
    return out


def contiguous_run(stubs):
    """Largest run of stubs on an exact 6-byte stride."""
    best = cur = [stubs[0]]
    for s in stubs[1:]:
        if s[0] == cur[-1][0] + 6:
            cur.append(s)
        else:
            if len(cur) > len(best):
                best = cur
            cur = [s]
    return cur if len(cur) > len(best) else best


# --------------------------------------------------------------------------
# naming
# --------------------------------------------------------------------------
def tu_for(dll):
    return "crt_%s.c" % dll.lower().replace(".dll", "")


def thunk_name(dll, api):
    return "%s_%s" % (tu_for(dll), api)


def is_decorated(name, api):
    """True if an EXTERNAL got a thunk-style name pushed onto it."""
    if name == api:
        return False
    return ("_FUN_" in name) or name.startswith("crt_") or ("." in name)


# --------------------------------------------------------------------------
# Ghidra side
# --------------------------------------------------------------------------
def verify_pe_matches(program, base, data, r2f, sample_va):
    """Cheap guard: the on-disk PE must agree with program memory."""
    space = program.getAddressFactory().getDefaultAddressSpace()
    mem = program.getMemory()
    off = r2f(sample_va - base)
    for i in range(16):
        if (mem.getByte(space.getAddress(sample_va + i)) & 0xFF) != data[off + i]:
            return False
    return True


def external_for(program, dll, api, ordinal):
    """Find the ExternalLocation for one import. Match on the ORIGINAL imported
    name (Ordinal_N / the ASCII name), never on the current label - the label is
    exactly what may be wrong."""
    em = program.getExternalManager()
    want_original = "Ordinal_%d" % ordinal if ordinal is not None else api
    for lib in em.getExternalLibraryNames():
        if lib.upper() != dll:
            continue
        it = em.getExternalLocations(lib)
        while it.hasNext():
            loc = it.next()
            orig = loc.getOriginalImportedName()
            if orig == want_original or (orig is None and loc.getLabel() == want_original):
                return loc
            # already-renamed ordinal externals keep their original name; a
            # renamed NAME import loses it, so fall back to the label.
            if ordinal is None and orig is None and loc.getLabel() == api:
                return loc
    return None


# --------------------------------------------------------------------------
# prototype sources
# --------------------------------------------------------------------------
# Ghidra ships Microsoft's own Win32 prototypes. nocturne's imports were typed
# from this archive at import time; nocedit's were not, which is why 168 of its
# 189 imports sat at `undefined f(undefined a, undefined b)` - parameter NAMES
# applied, no types. The archive is the authoritative source for both, and it
# also carries the typedefs (LPTOP_LEVEL_EXCEPTION_FILTER, SIZE_T, ...) that a
# straight sibling copy of the type *names* would not resolve.
_ARCHIVE_CACHE = {}


def open_prototype_archive(path):
    """-> {api_name: FunctionDefinitionDataType} from a .gdt, or {} if absent."""
    if path in _ARCHIVE_CACHE:
        return _ARCHIVE_CACHE[path]
    defs = {}
    if path and os.path.exists(path):
        from ghidra.program.model.data import FileDataTypeManager, FunctionDefinition
        from java.io import File
        dtm = FileDataTypeManager.openFileArchive(File(path), False)
        it = dtm.getAllDataTypes()
        while it.hasNext():
            dt = it.next()
            if isinstance(dt, FunctionDefinition):
                defs.setdefault(dt.getName(), dt)
        print("  prototype archive: %d function definition(s) from %s"
              % (len(defs), os.path.basename(path)))
    _ARCHIVE_CACHE[path] = defs
    return defs


def is_untyped(sig):
    """A signature that tells a caller nothing."""
    if sig is None:
        return True
    return ("undefined" in sig) or (sig.startswith("void ") and "(void)" in sig)


def build_signature(program, api, ext_func, archive=None):
    """Return (FunctionDefinitionDataType, source) for `api`, or (None, None).

    Order: the curated ordinal table first (ordinal imports carry no name, so
    the archive cannot find them), then Ghidra's Win32 archive.
    """
    if api in ORDINAL_PROTOTYPES:
        fd = _build_from_table(program, api)
        if fd is not None:
            return fd, "ordinal-table"
    if archive and api in archive:
        return archive[api], "win32-archive"
    return None, None


def _build_from_table(program, api):
    from ghidra.program.model.data import (FunctionDefinitionDataType,
                                           ParameterDefinitionImpl, PointerDataType)

    ret_s, params = ORDINAL_PROTOTYPES[api]
    dtm = program.getDataTypeManager()

    def resolve(type_str):
        s = type_str.strip()
        nptr = 0
        while s.endswith("*"):
            nptr += 1
            s = s[:-1].strip()
        found = dtm.getDataType("/" + s)
        if found is None:
            for cand in dtm.getAllDataTypes():
                if cand.getName() == s:
                    found = cand
                    break
        if found is None:
            return None
        for _ in range(nptr):
            found = PointerDataType(found)
        return found

    ret = resolve(ret_s)
    if ret is None:
        return None
    fd = FunctionDefinitionDataType(api)
    fd.setReturnType(ret)
    pds = []
    for ptype, pname in params:
        pdt = resolve(ptype)
        if pdt is None:
            return None
        pds.append(ParameterDefinitionImpl(pname, pdt, None))
    fd.setArguments(pds)
    return fd


def plan(program, prog_name, stubs, args, archive=None):
    """Build the change list. Pure analysis - no mutation."""
    from ghidra.program.model.symbol import SymbolType

    fm = program.getFunctionManager()
    rm = program.getReferenceManager()
    space = program.getAddressFactory().getDefaultAddressSpace()

    lo, hi = stubs[0][0], stubs[-1][0] + 5
    stub_at = {va: (dll, api, ordinal, slot) for va, dll, api, ordinal, slot in stubs}

    rows = {"delete": [], "create": [], "rename_thunk": [], "ok_thunk": [],
            "ext_rename": [], "ext_sig": [], "unnamed_ordinal": [], "blocked": [],
            "no_prototype": []}

    # --- functions squatting inside the table that are not on the grid ---
    it = fm.getFunctions(True)
    while it.hasNext():
        f = it.next()
        ea = f.getEntryPoint()
        off = ea.getOffset()
        if not (lo <= off <= hi) or off in stub_at:
            continue
        nrefs = sum(1 for _ in rm.getReferencesTo(ea))
        row = {"addr": "%08x" % off, "name": f.getName(),
               "size": f.getBody().getNumAddresses(), "refs": nrefs,
               "phase": off - max(s for s in stub_at if s <= off)}
        (rows["blocked"] if nrefs and not args.force else rows["delete"]).append(row)

    # --- one thunk per stub ---
    for va, dll, api, ordinal, slot in stubs:
        a = space.getAddress(va)
        if api is None:
            rows["unnamed_ordinal"].append({"addr": "%08x" % va, "dll": dll, "ordinal": ordinal})
            continue
        want = thunk_name(dll, api)
        f = fm.getFunctionAt(a)
        loc = external_for(program, dll, api, ordinal)
        ext_name = loc.getLabel() if loc else None

        if loc is not None and is_decorated(ext_name, api):
            row = {"addr": str(loc.getExternalSpaceAddress()), "dll": dll,
                   "current": ext_name, "want": api}
            if row not in rows["ext_rename"]:
                rows["ext_rename"].append(row)

        if loc is not None:
            ef = loc.getFunction()
            proto = ef.getSignature().getPrototypeString() if ef else None
            if ef is not None and is_untyped(proto):
                have = (api in ORDINAL_PROTOTYPES) or (archive and api in archive)
                row = {"addr": str(loc.getExternalSpaceAddress()), "api": api,
                       "current": proto,
                       "source": "ordinal-table" if api in ORDINAL_PROTOTYPES else "win32-archive"}
                if have:
                    if row not in rows["ext_sig"]:
                        rows["ext_sig"].append(row)
                else:
                    r = {"addr": row["addr"], "api": api, "current": proto}
                    if r not in rows["no_prototype"]:
                        rows["no_prototype"].append(r)

        entry = {"addr": "%08x" % va, "want": want, "dll": dll, "api": api,
                 "ordinal": ordinal, "have": f.getName() if f else None}
        if f is None:
            rows["create"].append(entry)
        elif f.getName() != want:
            rows["rename_thunk"].append(entry)
        else:
            rows["ok_thunk"].append(entry)

    return rows, (lo, hi)


def report(prog_name, rows, span, stubs, args):
    lo, hi = span
    print("\n" + "=" * 78)
    print("%s   import-thunk table %08x..%08x   %d stub(s)" % (prog_name, lo, hi, len(stubs)))
    print("=" * 78)

    def show(key, title, fmt):
        r = rows[key]
        print("\n  %-38s %4d" % (title, len(r)))
        for x in r[:args.show]:
            print("      " + fmt(x))
        if len(r) > args.show:
            print("      ... +%d more" % (len(r) - args.show))

    show("delete", "DELETE misaligned squatters",
         lambda x: "%s  %-34s %2dB  phase+%d  refs=%d" % (x["addr"], x["name"], x["size"], x["phase"], x["refs"]))
    show("blocked", "BLOCKED (has refs; needs --force)",
         lambda x: "%s  %-34s refs=%d" % (x["addr"], x["name"], x["refs"]))
    show("create", "CREATE thunk",
         lambda x: "%s  %s" % (x["addr"], x["want"]))
    show("rename_thunk", "RENAME thunk",
         lambda x: "%s  %-42s -> %s" % (x["addr"], x["have"], x["want"]))
    show("ext_rename", "EXTERNAL rename (undecorate)",
         lambda x: "%-20s %-46s -> %s" % (x["addr"], x["current"], x["want"]))
    show("ext_sig", "EXTERNAL prototype",
         lambda x: "%-20s %-26s [%s]  was: %s" % (x["addr"], x["api"], x["source"], x["current"]))
    show("no_prototype", "NO prototype source (left as-is)",
         lambda x: "%-20s %-26s %s" % (x["addr"], x["api"], x["current"]))
    show("unnamed_ordinal", "UNMAPPED ordinal (no name; skipped)",
         lambda x: "%s  %s ordinal %d" % (x["addr"], x["dll"], x["ordinal"]))
    print("\n  already correct                        %4d" % len(rows["ok_thunk"]))


def apply_plan(program, rows, span, stubs, args, archive=None):
    from ghidra.app.cmd.disassemble import DisassembleCommand
    from ghidra.app.cmd.function import CreateFunctionCmd
    from ghidra.program.model.symbol import SourceType
    from ghidra.util.task import ConsoleTaskMonitor

    monitor = ConsoleTaskMonitor()
    fm = program.getFunctionManager()
    listing = program.getListing()
    space = program.getAddressFactory().getDefaultAddressSpace()
    lo, hi = span

    stats = dict.fromkeys(("deleted", "created", "renamed", "ext_renamed", "ext_typed", "failed"), 0)
    tx = program.startTransaction("Rebuild import-thunk table")
    ok = True
    try:
        # 1. externals first - the thunk inherits from them
        for x in rows["ext_rename"]:
            loc = None
            em = program.getExternalManager()
            for lib in em.getExternalLibraryNames():
                if lib.upper() != x["dll"]:
                    continue
                it = em.getExternalLocations(lib)
                while it.hasNext():
                    c = it.next()
                    if str(c.getExternalSpaceAddress()) == x["addr"]:
                        loc = c
                        break
            if loc is None:
                stats["failed"] += 1
                continue
            loc.setName(loc.getParentNameSpace(), x["want"], SourceType.USER_DEFINED)
            stats["ext_renamed"] += 1

        for x in rows["ext_sig"]:
            em = program.getExternalManager()
            target = None
            for lib in em.getExternalLibraryNames():
                it = em.getExternalLocations(lib)
                while it.hasNext():
                    c = it.next()
                    if str(c.getExternalSpaceAddress()) == x["addr"]:
                        target = c
                        break
            if target is None or target.getFunction() is None:
                stats["failed"] += 1
                continue
            fd, _src = build_signature(program, x["api"], target.getFunction(), archive)
            if fd is None:
                stats["failed"] += 1
                continue
            from ghidra.app.cmd.function import ApplyFunctionSignatureCmd
            cmd = ApplyFunctionSignatureCmd(
                target.getFunction().getEntryPoint(), fd, SourceType.USER_DEFINED)
            if cmd.applyTo(program, monitor):
                stats["ext_typed"] += 1
            else:
                stats["failed"] += 1

        # 2. remove squatters and clear the whole table so the phase is right
        for x in rows["delete"]:
            a = space.getAddress(int(x["addr"], 16))
            f = fm.getFunctionAt(a)
            if f is None:
                continue
            name = f.getName()
            if fm.removeFunction(a):
                for sym in program.getSymbolTable().getSymbols(a):
                    if sym.getName() == name and str(sym.getSymbolType()) != "Function":
                        sym.delete()
                stats["deleted"] += 1

        if rows["delete"]:
            listing.clearCodeUnits(space.getAddress(lo), space.getAddress(hi), False)

        # 3. one 6-byte thunk per stub, on the grid
        for x in rows["create"] + rows["rename_thunk"]:
            a = space.getAddress(int(x["addr"], 16))
            f = fm.getFunctionAt(a)
            if f is None:
                DisassembleCommand(a, None, True).applyTo(program, monitor)
                CreateFunctionCmd(a).applyTo(program, monitor)
                f = fm.getFunctionAt(a)
            if f is None:
                stats["failed"] += 1
                continue
            if f.getThunkedFunction(False) is None:
                loc = external_for(program, x["dll"], x["api"], x["ordinal"])
                if loc is not None and loc.getFunction() is not None:
                    f.setThunkedFunction(loc.getFunction())
            f.setName(x["want"], SourceType.USER_DEFINED)
            stats["created" if x in rows["create"] else "renamed"] += 1
    except Exception as e:
        ok = False
        print("ERROR during apply: %s" % e)
        import traceback
        traceback.print_exc()
    finally:
        program.endTransaction(tx, ok)

    print("\n  applied: %s" % ", ".join("%s=%d" % kv for kv in sorted(stats.items())))
    return ok and any(v for k, v in stats.items() if k != "failed")


def snapshot(args):
    import subprocess
    here = os.path.dirname(os.path.abspath(__file__))
    tool = os.path.join(here, "snapshot_project.py")
    cmd = [sys.executable, tool, os.path.abspath(args.project_path),
           args.project_name, "--tag", "pre-import-thunks"]
    print("Snapshot: %s" % " ".join(cmd))
    return subprocess.call(cmd) == 0


def main():
    ap = argparse.ArgumentParser(
        description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("project_path")
    ap.add_argument("project_name")
    ap.add_argument("programs", nargs="*", default=["nocturne.exe", "nocedit.exe"])
    ap.add_argument("--proto-archive", default=None,
                    help="Ghidra .gdt carrying official Win32 prototypes "
                         "(default: $GHIDRA_INSTALL_DIR/.../win32/windows_vs12_32.gdt)")
    ap.add_argument("--pe-dir", default=None,
                    help="directory holding the PE files (default: repo root)")
    ap.add_argument("--show", type=int, default=12)
    ap.add_argument("--max-passes", type=int, default=4,
                    help="iterate --apply to a fixpoint (an EXTERNAL rename can "
                         "change what an unlabelled thunk displays)")
    ap.add_argument("--apply", action="store_true")
    ap.add_argument("--force", action="store_true",
                    help="delete squatters even when they have incoming refs (DANGEROUS)")
    ap.add_argument("--no-snapshot", action="store_true")
    args = ap.parse_args()

    pe_dir = args.pe_dir or os.path.abspath(
        os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", ".."))

    if args.apply and not args.no_snapshot and not snapshot(args):
        print("Snapshot failed - refusing to mutate.")
        os._exit(1)

    import pyghidra
    pyghidra.start()

    gdt = args.proto_archive
    if gdt is None:
        gi = os.environ.get("GHIDRA_INSTALL_DIR", "")
        gdt = os.path.join(gi, "Ghidra", "Features", "Base", "data", "typeinfo",
                           "win32", "windows_vs12_32.gdt")
    archive = open_prototype_archive(gdt)
    if not archive:
        print("  NOTE: no Win32 prototype archive at %s - only ordinal-table "
              "prototypes will be applied" % gdt)

    project = pyghidra.open_project(os.path.abspath(args.project_path), args.project_name)
    code = 0
    try:
        for prog_name in args.programs:
            pe_path = os.path.join(pe_dir, prog_name)
            if not os.path.exists(pe_path):
                print("!! no PE for %s at %s - skipped" % (prog_name, pe_path))
                continue
            base, iat, data, r2f = parse_pe_imports(pe_path)
            stubs = contiguous_run(find_stub_table(data, r2f, base, iat))

            with pyghidra.program_context(project, "/" + prog_name) as program:
                if not verify_pe_matches(program, base, data, r2f, stubs[0][0]):
                    print("!! %s: on-disk PE does not match program memory - skipped" % prog_name)
                    code = 1
                    continue
                rows, span = plan(program, prog_name, stubs, args, archive)
                report(prog_name, rows, span, stubs, args)
                if args.apply:
                    wrote = apply_plan(program, rows, span, stubs, args, archive)
                    # Renaming an EXTERNAL changes the name displayed by every
                    # thunk that has no primary symbol of its own, so a pass can
                    # create work for the next one. Iterate to a fixpoint.
                    for extra in range(2, args.max_passes + 1):
                        rows, span = plan(program, prog_name, stubs, args, archive)
                        pending = sum(len(rows[k]) for k in
                                      ("delete", "create", "rename_thunk", "ext_rename", "ext_sig"))
                        if not pending:
                            break
                        print("\n  -- pass %d: %d row(s) still pending --" % (extra, pending))
                        wrote = apply_plan(program, rows, span, stubs, args, archive) or wrote
                    if wrote:
                        from ghidra.util.task import ConsoleTaskMonitor
                        print("  saving %s ..." % prog_name)
                        program.getDomainFile().save(ConsoleTaskMonitor())
                        print("  saved.")
                    else:
                        print("  nothing written for %s" % prog_name)
                else:
                    print("\n  [dry-run] re-run with --apply to execute.")
        project.close()
    except Exception as e:
        print("ERROR: %s" % e)
        import traceback
        traceback.print_exc()
        code = 1
    os._exit(code)


if __name__ == "__main__":
    main()
