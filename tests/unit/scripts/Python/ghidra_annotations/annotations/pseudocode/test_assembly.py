# Local imports
from ghidra_annotations.annotations.pseudocode import assembly as asm


class Addr:
    def __init__(self, offset):
        self.offset = offset

    def getOffset(self):
        return self.offset

    def __str__(self):
        return f"{self.offset:08X}"


class Named:
    def __init__(self, name, data_type = None):
        self.name, self.data_type = name, data_type

    def getName(self):
        return self.name

    def getDataType(self):
        return self.data_type


class SymType:
    def __init__(self, text):
        self.text = text

    def toString(self):
        return self.text


class Sym(Named):
    def __init__(self, name, address, kind = "Label"):
        super().__init__(name)
        self.address, self.kind = address, kind

    def getAddress(self):
        return self.address

    def getSymbolType(self):
        return SymType(self.kind) if self.kind else None


class Symbols:
    def __init__(self, *symbols):
        self.symbols = symbols

    def getAllSymbols(self, _dynamic):
        return list(self.symbols)

    def getPrimarySymbol(self, address):
        return next((s for s in self.symbols if s.address is address), None)


class Callee(Named):
    def __init__(self, name, nparams):
        super().__init__(name)
        self.params = [Named(f"p{i}", Named("int")) for i in range(nparams)]

    def getParameters(self):
        return self.params

    def getReturnType(self):
        return Named("void")


class Ins:
    def __init__(self, address, text, operands = ()):
        self.address, self.text, self.operands = address, text, list(operands)

    def getAddress(self, index = None):
        return self.address if index is None else self.operands[index]

    def getMnemonicString(self):
        return self.text.split()[0]

    def getNumOperands(self):
        return len(self.operands)

    def __str__(self):
        return self.text


class Ref:
    def __init__(self, to, kind = "DATA"):
        self.to, self.kind = to, kind

    def getToAddress(self):
        return self.to

    def getReferenceType(self):
        return self.kind


class World:
    def __init__(self, functions, refs):
        self.functions, self.refs = functions, refs

    def getFunctionManager(self):
        return self

    def getFunctionAt(self, address):
        return self.functions.get(address.offset)

    def getReferencesFrom(self, address):
        return self.refs.get(address.offset, [])


class Body:
    def __init__(self, instructions):
        self.instructions = instructions

    def getBody(self):
        return None

    def getInstructions(self, _body, _forward):
        return iter(self.instructions)


def test_the_global_map_holds_labels_only():
    a, b = Addr(0x10), Addr(0x20)
    table = Symbols(Sym("g_Thing", a), Sym("Fn", b, "Function"), Sym("odd", b, None))
    assert asm.build_global_symbols_map(table) == {"00000010": {"name": "g_Thing", "address": a}}


def test_each_instruction_gets_its_names_strings_globals_xrefs_and_label():
    entry, call, call2, push, target, other, text, glob = (Addr(o) for o in (
        0x100, 0x101, 0x102, 0x103, 0x200, 0x300, 0x400, 0x500))
    world = World({0x200: Callee("draw", 5), 0x300: Callee("tick", 1)}, {
        0x101: [Ref(target, "UNCONDITIONAL_CALL")],
        0x103: [Ref(text), Ref(Addr(0x401)), Ref(glob), Ref(glob), Ref(Addr(0x999))],
    })
    instructions = [
        Ins(entry, "RET"),
        Ins(call, "CALL 0x00000200", [None, target]),
        Ins(call2, "CALL EAX", [Addr(0x777)]),
        Ins(push, "PUSH 0x00000400"),
        Ins(Addr(0x104), "CALL 0x00000300", [other]),
        Ins(Addr(0x105), "PUSH 0x00000401"),
    ]
    world.refs[0x105] = [Ref(Addr(0x401))]
    strings = {"00000400": "x" * 41, "00000401": "short"}
    globals_map = {"00000500": {"name": "g_Thing"}}
    out = asm.generate_assembly_code_rich(world, Body(instructions), Symbols(Sym("start", entry)), world,
                                          Body(instructions), strings, globals_map).split("\n")
    assert out == [
        "// 00000100: RET",
        "//   Label: start",
        "// 00000101: CALL draw",
        "//   XREF to: 00000200 (UNCONDITIONAL_CALL)  ; void draw(int p0, int p1, int p2, int p3, ...)",
        "// 00000102: CALL EAX",
        '// 00000103: PUSH 0x00000400  ; = "' + "x" * 37 + '..." | g_Thing',
        "// 00000104: CALL tick  ; void tick(int p0)",
        '// 00000105: PUSH 0x00000401  ; = "short"',
        "",
    ]


def test_a_full_comment_list_skips_further_globals():
    a = Addr(0x103)
    world = World({}, {0x103: [Ref(Addr(n)) for n in (1, 2, 3, 4)]})
    globals_map = {f"{n:08x}": {"name": f"g{n}"} for n in (1, 2, 3, 4)}
    out = asm.generate_assembly_code_rich(world, Body([Ins(a, "NOP")]), Symbols(), world,
                                          Body([Ins(a, "NOP")]), {}, globals_map)
    assert out == "// 00000103: NOP  ; g1 | g2 | g3\n"
