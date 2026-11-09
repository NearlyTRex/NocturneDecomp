# Local imports
from ghidra_program import DomainFile, Program
from ghidra_annotations.annotations.metadata import export_metadata
from ghidra_annotations.util import load_json_file


def test_exports_what_the_program_records_about_its_file(tmp_path):
    program = Program()
    program.domain_file = DomainFile("bw1.exe")
    program.md5 = "ab" * 16
    export_metadata(program, str(tmp_path))
    assert load_json_file(str(tmp_path), "metadata") == {
        "program": "bw1.exe", "language": "x86:LE:32:default", "compiler": "windows",
        "format": "Portable Executable (PE)", "md5": "ab" * 16, "sha256": "0" * 64}
