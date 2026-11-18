# Local imports
import sibling_match as sm

# What the sibling matchers read from a sibling_match.Image, set directly
# rather than derived from a PE, so a test states the evidence it means.


class FakeImage:
    """An Image whose functions, shapes, calls, callers, vtables and strings are given."""

    def __init__(self, program, names, shapes = None, callsites = None, callers = None, vtables = None,
                 strings = None, records = None):
        self.program = program
        records = records or {}
        self.functions = [{"addr": a, "name": n, **records.get(a, {})} for a, n in names.items()]
        self.by_addr = {f["addr"]: f for f in self.functions}
        self.shapes = shapes or {}
        self.callsites = callsites or {}
        self._callers = callers or {}
        self.vtables = vtables or []
        self._strings = strings or {}

    @property
    def addrs_sorted(self):
        return sorted(int(a, 16) for a in self.by_addr)

    @property
    def callgraph(self):
        return {caller: set(callees) for caller, callees in self.callsites.items()}

    def tu_groups(self):
        out = {}
        for addr in sorted(self.by_addr, key = lambda a: int(a, 16)):
            unit = sm.tu_of(self.by_addr[addr]["name"])
            if unit:
                out.setdefault(unit, []).append(addr)
        return out

    def callers_of(self):
        return self._callers

    def string_refs(self):
        return self._strings


def shape(strict, relaxed = None, ninsn = 10, mnemonics = (), consts = ()):
    """A Shape of `ninsn` instructions; `relaxed` defaults to the strict hash."""
    return sm.Shape(strict, relaxed or strict, consts, ninsn * 2, ninsn, mnemonics)
