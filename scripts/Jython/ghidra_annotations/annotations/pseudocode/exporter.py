# Main pseudocode export function
# Entry point for pseudocode export functionality

import os
import time
from java.util.concurrent import Executors
from java.util.concurrent import ExecutorCompletionService
from java.util.concurrent import TimeUnit

from ghidra_annotations.util import make_dirs
from ghidra_annotations.util.log import log_info
from ghidra_annotations.annotations import is_function_external

from ghidra_annotations.annotations.pseudocode.parallel import (
    DecompilerThreadLocal, FunctionProcessor, DEFAULT_NUM_THREADS,
    USE_BATCHED_IO, IO_BATCH_SIZE
)
from ghidra_annotations.annotations.pseudocode.output import write_batched_files
from ghidra_annotations.annotations.pseudocode.strings import build_string_map
from ghidra_annotations.annotations.pseudocode.decompiler import build_constants_map
from ghidra_annotations.annotations.pseudocode.assembly import build_global_symbols_map
from ghidra_annotations.annotations.pseudocode.globals import (
    extract_globals_and_constants, generate_constants_file,
    generate_globals_file, split_data_by_address_range, generate_globals_cpp_file
)
from ghidra_annotations.annotations.pseudocode.headers import (
    export_header_files, write_header_file
)
from ghidra_annotations.annotations.pseudocode.output import export_function_prototypes
from ghidra_annotations.annotations.pseudocode.analysis import generate_analysis_report
from ghidra_annotations.annotations.pseudocode.cleanup import delete_pseudocode


class PhaseTimer:
    """Simple timer for profiling export phases."""

    def __init__(self):
        self.phases = []
        self.current_phase = None
        self.current_start = None
        self.total_start = None

    def start_total(self):
        """Start the total export timer."""
        self.total_start = time.time()

    def start_phase(self, name):
        """Start timing a new phase."""
        if self.current_phase is not None:
            self.end_phase()
        self.current_phase = name
        self.current_start = time.time()

    def end_phase(self):
        """End the current phase and record its duration."""
        if self.current_phase is not None and self.current_start is not None:
            elapsed = time.time() - self.current_start
            self.phases.append((self.current_phase, elapsed))
            self.current_phase = None
            self.current_start = None

    def get_total_time(self):
        """Get total elapsed time since start_total()."""
        if self.total_start is None:
            return 0.0
        return time.time() - self.total_start

    def format_duration(self, seconds):
        """Format duration in human-readable form."""
        if seconds < 60:
            return "%.2fs" % seconds
        elif seconds < 3600:
            mins = int(seconds // 60)
            secs = seconds % 60
            return "%dm %.1fs" % (mins, secs)
        else:
            hours = int(seconds // 3600)
            mins = int((seconds % 3600) // 60)
            secs = seconds % 60
            return "%dh %dm %.1fs" % (hours, mins, secs)

    def log_summary(self):
        """Log a summary of all phase timings."""
        total_time = self.get_total_time()
        log_info("=" * 65)
        log_info("TIMING PROFILE")
        log_info("=" * 65)

        # Calculate total tracked time
        tracked_time = sum(duration for _, duration in self.phases)

        # Log each phase
        for phase_name, duration in self.phases:
            percentage = (duration / total_time * 100) if total_time > 0 else 0
            formatted = self.format_duration(duration)
            log_info("  %-40s %12s  (%5.1f%%)" % (phase_name, formatted, percentage))

        # Log untracked time (overhead)
        untracked = total_time - tracked_time
        if untracked > 0.1:  # Only show if significant
            percentage = (untracked / total_time * 100) if total_time > 0 else 0
            formatted = self.format_duration(untracked)
            log_info("  %-40s %12s  (%5.1f%%)" % ("(overhead/untracked)", formatted, percentage))

        log_info("-" * 65)
        log_info("  %-40s %12s" % ("TOTAL", self.format_duration(total_time)))
        log_info("=" * 65)

        # Log throughput stats if we have function processing info
        return total_time


def export_pseudocode(currentProgram, path):
    """Export pseudocode for all functions in the program.

    Args:
        currentProgram: The Ghidra program
        path: Base directory for output files
    """
    # Initialize profiling timer
    timer = PhaseTimer()
    timer.start_total()

    # Clean up existing pseudocode files first to handle renamed functions
    timer.start_phase("Cleanup existing files")
    log_info("Cleaning up existing pseudocode files before export")
    delete_pseudocode(currentProgram, path)

    # Create output directory
    pseudocode_dir = os.path.join(path, "pseudocode")
    pseudocode_include_dir = os.path.join(pseudocode_dir, "include")
    pseudocode_src_dir = os.path.join(pseudocode_dir, "src")
    make_dirs(pseudocode_dir)
    timer.end_phase()

    # Export header files first
    timer.start_phase("Export header files")
    export_header_files(currentProgram, pseudocode_include_dir)
    timer.end_phase()

    # Extract and export globals and constants
    timer.start_phase("Extract globals and constants")
    log_info("Extracting globals and constants")
    globals_list, constants_list = extract_globals_and_constants(currentProgram)
    timer.end_phase()

    # Generate constants files (split by address range)
    timer.start_phase("Generate constants files")
    if constants_list:
        log_info("Generating constants files with %d constants" % len(constants_list))
        const_ranges = split_data_by_address_range(constants_list)

        # Generate main constants.h that includes all ranges
        main_constants_content = []
        main_constants_content.append("#pragma once")
        main_constants_content.append("")
        main_constants_content.append("// =============================================================================")
        main_constants_content.append("// CONSTANTS - Master Include")
        main_constants_content.append("// =============================================================================")
        main_constants_content.append("")
        for range_key in sorted(const_ranges.keys()):
            range_filename = "constants_%s.h" % range_key.replace("0x", "")
            main_constants_content.append("#include \"%s\"" % range_filename)

            # Generate individual range file
            range_content = generate_constants_file(const_ranges[range_key])
            range_path = os.path.join(pseudocode_include_dir, range_filename)
            write_header_file(range_path, range_content)
            log_info("Created constants range file: %s with %d constants" % (range_filename, len(const_ranges[range_key])))

        # Write constants
        main_constants_content.append("")
        constants_path = os.path.join(pseudocode_include_dir, "constants.h")
        write_header_file(constants_path, "\n".join(main_constants_content))
        log_info("Created master constants file: %s" % constants_path)
    timer.end_phase()

    # Generate globals files (split by address range)
    timer.start_phase("Generate globals files")
    if globals_list:
        log_info("Generating globals files with %d globals" % len(globals_list))
        global_ranges = split_data_by_address_range(globals_list)

        # Generate main globals.h with all extern declarations
        globals_h_content = generate_globals_file(globals_list)
        globals_h_path = os.path.join(pseudocode_include_dir, "globals.h")
        write_header_file(globals_h_path, globals_h_content)

        # Generate separate .cpp files for each range
        make_dirs(pseudocode_src_dir)
        for range_key in sorted(global_ranges.keys()):
            range_filename = "globals_%s.cpp" % range_key.replace("0x", "")
            globals_cpp_content = generate_globals_cpp_file(global_ranges[range_key], range_key)
            globals_cpp_path = os.path.join(pseudocode_src_dir, range_filename)
            try:
                with open(globals_cpp_path, 'w') as f:
                    f.write(globals_cpp_content + "\n")
                log_info("Created globals range file: %s with %d globals" % (range_filename, len(global_ranges[range_key])))
            except Exception as e:
                log_info("Failed to write %s: %s" % (range_filename, str(e)))
        log_info("Created globals header: %s" % globals_h_path)
    timer.end_phase()

    # Get program managers
    function_manager = currentProgram.getFunctionManager()
    program_listing = currentProgram.getListing()
    reference_manager = currentProgram.getReferenceManager()
    symbol_table = currentProgram.getSymbolTable()

    # Build string map for inline replacement
    timer.start_phase("Build string map")
    log_info("Building string map for symbol replacement")
    defined_data = program_listing.getDefinedData(True)
    string_map = build_string_map(defined_data)
    log_info("Built string map with %d entries" % len(string_map))
    timer.end_phase()

    # Build constants map for inline replacement of constant values
    timer.start_phase("Build constants map")
    log_info("Building constants map for inline replacement")
    constants_map = build_constants_map(constants_list)
    log_info("Built constants map with %d inline-able constants" % len(constants_map))
    timer.end_phase()

    # Build global symbols map once (expensive operation - don't do per-function)
    timer.start_phase("Build global symbols map")
    log_info("Building global symbols map for assembly annotations")
    global_symbols = build_global_symbols_map(symbol_table)
    log_info("Built global symbols map with %d symbols" % len(global_symbols))
    timer.end_phase()

    # Collect all non-external functions first
    timer.start_phase("Collect functions")
    log_info("Collecting functions for parallel processing")
    functions_to_process = []
    for func in function_manager.getFunctions(True):
        if not is_function_external(currentProgram, func):
            functions_to_process.append(func)
    log_info("Found %d functions to process" % len(functions_to_process))
    timer.end_phase()

    # Determine number of threads
    num_threads = min(DEFAULT_NUM_THREADS, max(1, len(functions_to_process)))
    log_info("Using %d worker threads for parallel processing" % num_threads)

    # Create thread-local decompiler storage
    decompiler_tls = DecompilerThreadLocal(currentProgram)

    # Create thread pool executor with completion service for better parallelism
    executor = Executors.newFixedThreadPool(num_threads)
    completion_service = ExecutorCompletionService(executor)

    # Submit all function processing tasks
    timer.start_phase("Parallel decompilation (%d threads)" % num_threads)
    log_info("Submitting %d function processing tasks" % len(functions_to_process))
    log_info("Using batched I/O: %s (batch size: %d)" % (USE_BATCHED_IO, IO_BATCH_SIZE))
    total_tasks = len(functions_to_process)
    for func in functions_to_process:
        processor = FunctionProcessor(
            func, currentProgram, decompiler_tls, pseudocode_src_dir,
            symbol_table, reference_manager, program_listing,
            string_map, constants_map, global_symbols,
            batched_io=USE_BATCHED_IO)
        completion_service.submit(processor)

    # Collect results as they complete (not in submission order)
    # This avoids blocking on slow functions while fast ones are ready
    files_created = 0
    function_groups = {}
    total_suspects = 0
    zero_suspect_count = 0
    errors = []
    pending_writes = []  # Buffer for batched I/O
    log_info("Waiting for %d tasks to complete..." % total_tasks)
    processed_count = 0
    decompile_start = time.time()

    for _ in range(total_tasks):
        try:
            # Take completed futures as they finish (with timeout)
            future = completion_service.poll(300, TimeUnit.SECONDS)
            if future is None:
                errors.append("Timeout waiting for task completion")
                continue

            result = future.get()  # Should not block since task is complete
            processed_count += 1
            if result.success:
                files_created += 1
                total_suspects += result.suspect_count
                if result.suspect_count == 0:
                    zero_suspect_count += 1
                elif result.suspect_count > 0:
                    log_info("  Found %d suspect patterns in %s" % (result.suspect_count, result.func_name))

                # Collect function groups for prototype generation
                if result.virtual_filename and result.function_group_entry:
                    if result.virtual_filename not in function_groups:
                        function_groups[result.virtual_filename] = []
                    function_groups[result.virtual_filename].append(result.function_group_entry)

                # Collect file contents for batched writing
                if USE_BATCHED_IO and result.cpp_content:
                    pending_writes.append((result.cpp_path, result.cpp_content))
                    if result.asm_content:
                        pending_writes.append((result.asm_path, result.asm_content))
                    if result.json_content:
                        pending_writes.append((result.json_path, result.json_content))

                    # Write batch when buffer is full
                    if len(pending_writes) >= IO_BATCH_SIZE * 3:  # 3 files per function
                        write_batched_files(pending_writes)
                        pending_writes = []
            else:
                if result.error:
                    errors.append("Failed %s: %s" % (result.func_name, result.error))
                else:
                    log_info("Failed to write files for function: %s" % result.func_name)

            # Progress logging every 100 functions with rate info
            if processed_count % 100 == 0:
                current_time = time.time()
                elapsed = current_time - decompile_start
                rate = processed_count / elapsed if elapsed > 0 else 0
                remaining = total_tasks - processed_count
                eta = remaining / rate if rate > 0 else 0
                log_info("Progress: %d/%d functions (%.1f/sec, ETA: %.0fs)" % (
                    processed_count, total_tasks, rate, eta))
        except Exception as e:
            errors.append("Task exception: %s" % str(e))

    # Write any remaining batched files
    if pending_writes:
        log_info("Writing final batch of %d files" % len(pending_writes))
        write_batched_files(pending_writes)

    # Shutdown executor
    executor.shutdown()
    timer.end_phase()

    # Log any errors
    if errors:
        log_info("Encountered %d errors during processing:" % len(errors))
        for err in errors[:10]:  # Show first 10 errors
            log_info("  %s" % err)
        if len(errors) > 10:
            log_info("  ... and %d more errors" % (len(errors) - 10))

    # Log summary statistics
    log_info("=" * 60)
    log_info("EXPORT SUMMARY")
    log_info("=" * 60)
    log_info("Total functions processed: %d" % files_created)
    log_info("Total suspect patterns found: %d" % total_suspects)
    log_info("Functions with zero suspects: %d (%.1f%%)" % (
        zero_suspect_count,
        (zero_suspect_count * 100.0 / files_created) if files_created > 0 else 0))

    # Generate function prototype headers
    timer.start_phase("Generate function prototypes")
    log_info("Generating function prototype headers")
    log_info("Found %d function groups: %s" % (len(function_groups), list(function_groups.keys())))
    export_function_prototypes(currentProgram, pseudocode_dir, function_groups)
    timer.end_phase()

    # Generate analysis report
    timer.start_phase("Generate analysis report")
    log_info("Generating analysis report...")
    generate_analysis_report(pseudocode_src_dir, path)
    timer.end_phase()

    # Log timing profile
    total_time = timer.log_summary()

    # Log throughput statistics
    if files_created > 0 and total_time > 0:
        log_info("")
        log_info("THROUGHPUT STATISTICS")
        log_info("=" * 60)
        log_info("  Functions per second:     %.2f" % (files_created / total_time))
        log_info("  Avg time per function:    %.3fs" % (total_time / files_created))
        log_info("  Thread count:             %d" % num_threads)
        log_info("  Effective parallelism:    %.1fx" % (
            (files_created / total_time) / (1.0 / (total_time / files_created / num_threads))
            if total_time > 0 else 0))
        log_info("=" * 60)

    log_info("Export complete - created %d pseudocode files" % files_created)
