# Local imports
from ghidra_program import Program
from ghidra_annotations.annotations.entry_points import export_entry_points
from ghidra_annotations.util import load_json_files


def test_exports_the_entry_points_ghidra_records_not_the_image_base(tmp_path):
    program = Program()
    table = program.getSymbolTable()
    entry, export, unnamed = (program.space.getAddress(a) for a in (0x60239a, 0x401000, 0x402000))
    table.createLabel(program.getImageBase(), "IMAGE_DOS_HEADER_00400000", "IMPORTED")
    table.createLabel(entry, "entry", "IMPORTED")
    table.createLabel(export, "APIDLLInformation", "IMPORTED")
    table.entry_points = [entry, export, unnamed]
    export_entry_points(program, str(tmp_path))
    assert load_json_files(str(tmp_path), "entry_points") == [
        {"addr": "00401000", "name": "APIDLLInformation"},
        {"addr": "00402000", "name": "entry_00402000"},
        {"addr": "0060239a", "name": "entry"}]
