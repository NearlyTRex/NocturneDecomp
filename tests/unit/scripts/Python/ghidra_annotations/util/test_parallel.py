# Third-party imports
import pytest

# Local imports
from ghidra_program import Address, Program
from ghidra_annotations.util import parallel


def program_with_two_blocks():
    program = Program()
    program.getMemory().add_block(".text", 0x401000, bytes(0x10))
    program.getMemory().add_block(".data", 0x500000, bytes(0x20))
    return program


def test_get_memory_ranges_lists_each_initialized_range():
    assert parallel.get_memory_ranges(program_with_two_blocks()) == [
        (Address(0x401000), Address(0x40100f)), (Address(0x500000), Address(0x50001f))]


def test_results_are_gathered_and_lists_flattened(capsys):
    def worker(start, end, tag):
        return [f"{tag}{start}", f"{tag}{end}"] if start.getOffset() < 0x500000 else f"{tag}{start}"

    results = parallel.parallel_scan_ranges(program_with_two_blocks(), worker, extra_args = ["@"], num_threads = 2)
    assert sorted(results) == ["@00401000", "@0040100f", "@00500000"]
    assert "Scanning 2 memory ranges in parallel (2 threads)" in capsys.readouterr().out


def test_a_failing_worker_fails_the_scan_after_the_rest_finish():
    scanned = []

    def worker(start, end):
        scanned.append(start.getOffset())
        if start.getOffset() == 0x401000:
            raise ValueError("bad range")
        return start.getOffset()

    with pytest.raises(ValueError, match = "bad range"):
        parallel.parallel_scan_ranges(program_with_two_blocks(), worker, num_threads = 1)
    assert sorted(scanned) == [0x401000, 0x500000]


def test_create_address_set_covers_the_range():
    address_set = parallel.create_address_set(Address(1), Address(2))
    assert isinstance(address_set, parallel.AddressSet)
    assert address_set.args == (Address(1), Address(2))
