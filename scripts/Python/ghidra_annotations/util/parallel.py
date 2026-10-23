# Parallel processing utilities for Ghidra annotation exports
# Provides reusable patterns for parallelizing address-range-based operations

from concurrent.futures import ThreadPoolExecutor, as_completed
from ghidra_annotations.util.log import log_info
from ghidra.program.model.address import AddressSet

# Default number of worker threads
DEFAULT_NUM_THREADS = 8


def get_memory_ranges(currentProgram):
    """Get list of (start_addr, end_addr) tuples for all initialized memory ranges."""
    memory = currentProgram.getMemory()
    address_set = memory.getAllInitializedAddressSet()
    ranges = []
    for addr_range in address_set.getAddressRanges():
        ranges.append((addr_range.getMinAddress(), addr_range.getMaxAddress()))
    return ranges


def parallel_scan_ranges(currentProgram, worker_func, extra_args=None, num_threads=DEFAULT_NUM_THREADS):
    """Scan memory ranges in parallel using the provided worker function.

    Args:
        currentProgram: The Ghidra program
        worker_func: Function that takes (start_addr, end_addr, *extra_args) and returns results
        extra_args: Additional arguments to pass to worker_func (tuple or list)
        num_threads: Number of worker threads

    Returns:
        List of all results from workers (flattened if workers return lists)

    The worker_func signature should be:
        def my_worker(start_addr, end_addr, arg1, arg2, ...):
            # Process addresses in range
            return results  # Can be a list or single value
    """
    ranges = get_memory_ranges(currentProgram)
    log_info("Scanning %d memory ranges in parallel (%d threads)" % (len(ranges), num_threads))

    if extra_args is None:
        extra_args = ()

    # Prepare worker arguments
    worker_args = [(start, end) + tuple(extra_args) for start, end in ranges]

    # Execute in parallel
    all_results = []
    with ThreadPoolExecutor(max_workers=num_threads) as executor:
        futures = [executor.submit(worker_func, *args) for args in worker_args]

        for future in as_completed(futures):
            try:
                result = future.result()
                # Flatten if result is a list
                if isinstance(result, list):
                    all_results.extend(result)
                else:
                    all_results.append(result)
            except Exception as e:
                log_info("Worker error: %s" % str(e))

    return all_results


def create_address_set(start_addr, end_addr):
    """Create an AddressSet for the given range. Import helper for workers."""
    return AddressSet(start_addr, end_addr)
