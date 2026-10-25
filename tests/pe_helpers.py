# Imports
import struct

# Builds small PE images in memory: one section holding the import, export and
# resource tables, laid out the way a linker would, so the scripts that read PEs
# can be tested without a toolchain.

SECTION_RVA = 0x1000
SECTION_RAW = 0x200
PE_OFFSET = 0x40
OPTIONAL_OFFSET = PE_OFFSET + 24


# One section's bytes, handing back the RVA of everything placed in it
class Section:
    def __init__(self):
        self.data = bytearray()

    def align(self, alignment):
        while len(self.data) % alignment:
            self.data.append(0)
        return SECTION_RVA + len(self.data)

    def place(self, blob, align = 4):
        rva = self.align(align)
        self.data += blob
        return rva

    def string(self, text):
        return self.place(text.encode("ascii") + b"\0", align = 1)


# A function the image imports: by name (a str), or by ordinal (an int)
def import_entry(section, function, pe32_plus):
    if isinstance(function, int):
        return (1 << 63 if pe32_plus else 1 << 31) | function
    return section.place(struct.pack("<H", 0) + function.encode("ascii") + b"\0", align = 2)


# `imports` is {dll: [function, ...]}; `lookup` False leaves the lookup table
# out, so the loader reads names from the address table instead
def place_imports(section, imports, pe32_plus, lookup):
    thunk_format = "<Q" if pe32_plus else "<I"
    descriptors = []
    for dll, functions in imports.items():
        entries = [import_entry(section, function, pe32_plus) for function in functions]
        table = b"".join(struct.pack(thunk_format, entry) for entry in entries + [0])
        address_rva = section.place(table, align = 8)
        lookup_rva = section.place(table, align = 8) if lookup else 0
        descriptors.append(struct.pack("<IIIII", lookup_rva, 0, 0, section.string(dll), address_rva))
    return section.place(b"".join(descriptors) + b"\0" * 20)


def place_exports(section, exports):
    name_rvas = [section.string(name) for name in exports]
    names_rva = section.place(b"".join(struct.pack("<I", rva) for rva in name_rvas))
    directory = bytearray(40)
    struct.pack_into("<I", directory, 24, len(exports))
    struct.pack_into("<I", directory, 32, names_rva)
    return section.place(bytes(directory))


# A resource data entry naming its own RVA and size, for data that is not there
class DataEntry:
    def __init__(self, rva, size):
        self.rva = rva
        self.size = size


# A directory entry whose offset field is written as given, for a broken tree
class RawEntry:
    def __init__(self, offset):
        self.offset = offset


def directory_nodes(tree):
    nodes, queue = [], [tree]
    while queue:
        node = queue.pop(0)
        nodes.append(node)
        queue += [child for child in node.values() if isinstance(child, dict)]
    return nodes


def leaf_nodes(nodes):
    return [child for node in nodes for child in node.values()
            if isinstance(child, (bytes, DataEntry))]


# The resource tree, from `tree` = {id: subtree, bytes, DataEntry or RawEntry}.
# Directories come first in breadth-first order, then data entries, then the data.
def place_resources(section, tree):
    root_rva = section.align(4)
    nodes = directory_nodes(tree)
    leaves = leaf_nodes(nodes)
    offsets, cursor = {}, 0
    for node in nodes:
        offsets[id(node)] = cursor
        cursor += 16 + 8 * len(node)
    for leaf in leaves:
        offsets[id(leaf)] = cursor
        cursor += 16
    blob_offsets = {}
    for leaf in leaves:
        if isinstance(leaf, bytes):
            blob_offsets[id(leaf)] = cursor
            cursor += len(leaf)
    data = bytearray(cursor)
    for node in nodes:
        base = offsets[id(node)]
        struct.pack_into("<HH", data, base + 12, 0, len(node))
        for i, (key, child) in enumerate(node.items()):
            if isinstance(child, RawEntry):
                value = child.offset
            elif isinstance(child, dict):
                value = 0x80000000 | offsets[id(child)]
            else:
                value = offsets[id(child)]
            struct.pack_into("<II", data, base + 16 + 8 * i, key, value)
    for leaf in leaves:
        if isinstance(leaf, DataEntry):
            rva, size = leaf.rva, leaf.size
        else:
            rva, size = root_rva + blob_offsets[id(leaf)], len(leaf)
            data[blob_offsets[id(leaf)]:blob_offsets[id(leaf)] + size] = leaf
        struct.pack_into("<II", data, offsets[id(leaf)], rva, size)
    section.place(bytes(data))
    return root_rva


# The PE's bytes. Without `imports`, `exports` or `resources` the matching
# directory is empty; `rva_count` is the optional header's NumberOfRvaAndSizes.
def build_pe(imports = None, exports = None, resources = None, pe32_plus = True, lookup = True, rva_count = 16):
    section = Section()
    import_rva = place_imports(section, imports, pe32_plus, lookup) if imports else 0
    export_rva = place_exports(section, exports) if exports else 0
    resource_rva = place_resources(section, resources) if resources else 0
    directories = bytearray(16 * 8)
    for index, rva in enumerate((export_rva, import_rva, resource_rva)):
        struct.pack_into("<I", directories, 8 * index, rva)
    optional = bytearray(112 if pe32_plus else 96)
    struct.pack_into("<H", optional, 0, 0x20b if pe32_plus else 0x10b)
    struct.pack_into("<I", optional, len(optional) - 4, rva_count)
    optional += directories
    coff = struct.pack("<HHIIIHH", 0x8664 if pe32_plus else 0x14c, 1, 0, 0, 0, len(optional), 0x22)
    raw = bytes(section.data) or b"\0"
    header = struct.pack("<8sIIIIIIHHI", b".data", len(raw), SECTION_RVA, len(raw), SECTION_RAW, 0, 0, 0, 0, 0)
    image = bytearray(SECTION_RAW)
    image[0:2] = b"MZ"
    struct.pack_into("<I", image, 0x3c, PE_OFFSET)
    headers = b"PE\0\0" + coff + optional + header
    image[PE_OFFSET:PE_OFFSET + len(headers)] = headers
    return bytes(image) + raw


def write_pe(path, **kwargs):
    path.write_bytes(build_pe(**kwargs))
    return path
