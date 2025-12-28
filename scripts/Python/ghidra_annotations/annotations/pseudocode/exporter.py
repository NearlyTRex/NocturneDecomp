# Main pseudocode export function
# Entry point for pseudocode export functionality
#
# Architecture: Workers do Java-heavy decompilation in parallel (GIL released),
# main thread does Python-heavy processing sequentially (no GIL contention).

import os
import json
import time
from java.util import ArrayList
from concurrent.futures import ThreadPoolExecutor, as_completed
from ghidra.app.decompiler import DecompileCallback
from ghidra_annotations.util import make_dirs
from ghidra_annotations.util.log import log_info
from ghidra_annotations.annotations import is_function_external

from ghidra_annotations.annotations.pseudocode.parallel import (
    DecompilerThreadLocal, DecompileWorker, DEFAULT_NUM_THREADS, PROCESS_BATCH_SIZE
)
from ghidra_annotations.annotations.pseudocode.output import write_batched_files
from ghidra_annotations.annotations.pseudocode.strings import build_string_map
from ghidra_annotations.annotations.pseudocode.decompiler import (
    build_constants_map, replace_constants_in_code
)
from ghidra_annotations.annotations.pseudocode.assembly import build_global_symbols_map
from ghidra_annotations.annotations.pseudocode.globals import (
    extract_globals_and_constants, generate_constants_file,
    generate_globals_file, split_data_by_address_range, generate_globals_cpp_file
)
from ghidra_annotations.annotations.pseudocode.headers import (
    export_header_files, write_header_file
)
from ghidra_annotations.annotations.pseudocode.output import (
    export_function_prototypes, generate_function_file_contents
)
from ghidra_annotations.annotations.pseudocode.analysis import generate_analysis_report
from ghidra_annotations.annotations.pseudocode.cleanup import delete_pseudocode

# Python-heavy processing imports (for main thread)
from ghidra_annotations.annotations.pseudocode.functions import (
    extract_virtual_filename, generate_source_filename, load_vtable_data
)
from ghidra_annotations.annotations.pseudocode.transforms import (
    apply_all_transforms, load_custom_replacements, apply_custom_replacements,
    preload_custom_replacements, set_pcode_overrides_cache, load_pcode_overrides
)
from ghidra_annotations.annotations.pseudocode.suspects import (
    identify_suspect_lines, calculate_complexity_metrics, identify_pcode_suspects,
    identify_param_count_mismatch, identify_variadic_calls
)
from ghidra_annotations.annotations.pseudocode.stack_patterns import (
    summarize_stack_patterns
)
from ghidra_annotations.annotations.pseudocode.vtable_calls import (
    update_function_json_files as update_vtable_indirect_callers
)
from ghidra_annotations.annotations.pseudocode.pcode import (
    load_switch_table_data, load_noreturn_functions
)


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

def register_pcode_overrides(src_dir):
    """Load pcode overrides from JSON files and register them with DecompileCallback.

    Scans JSON files in src_dir for 'pcode_overrides' key which should be a dict
    mapping instruction addresses (as hex strings) to lists of pcode operation strings.

    Also populates the Python cache for preserving overrides in output JSON.

    Returns the count of overrides registered.
    """

    # Check source dir
    if not os.path.isdir(src_dir):
        return 0

    # Find json file
    override_count = 0
    for root, dirs, files in os.walk(src_dir):
        for filename in files:
            if not filename.endswith('.json'):
                continue

            # Load json
            filepath = os.path.join(root, filename)
            try:

                # Get overrides
                with open(filepath, 'r') as f:
                    data = json.load(f)
                overrides = data.get('pcode_overrides')
                if not overrides or not isinstance(overrides, dict):
                    continue

                # Cache for preservation in output JSON
                set_pcode_overrides_cache(filepath, overrides)

                # Get function address from the JSON data (nested in function object)
                func_addr_str = data.get('function', {}).get('address', '')
                if not func_addr_str:
                    continue

                # Parse function address
                func_addr = int(func_addr_str.replace('0x', ''), 16)

                # Register each override with decompiler
                for instr_addr_str, pcode_lines in overrides.items():
                    instr_addr = int(instr_addr_str.replace('0x', ''), 16)
                    java_list = ArrayList()
                    for line in pcode_lines:
                        java_list.add(line)
                    log_info("Registering pcode override: func=0x%x instr=0x%x (%d ops)" % (func_addr, instr_addr, len(pcode_lines)))
                    DecompileCallback.registerPcodeOverride(func_addr, instr_addr, java_list)
                    override_count += 1
            except (json.JSONDecodeError, ValueError, IOError):
                continue
    return override_count

def process_decompile_result(result, pseudocode_src_dir, constants_map):
    """Process a decompilation result in the main thread.

    This function does Python-only processing (transforms, suspect detection,
    file generation). All Java-heavy operations were done in the worker.

    Args:
        result: DecompileResult from worker (contains all Java-computed data)
        pseudocode_src_dir: Output directory for source files
        constants_map: Map of constant names to values

    Returns:
        Dictionary with processed result data
    """
    process_start = time.time()

    func_name = result.func_name
    func_addr = result.func_addr

    # === PYTHON-ONLY: Transforms and constant replacement ===
    transform_start = time.time()
    decompiled_code = result.raw_decompiled_code

    # Replace constant references with their actual values
    decompiled_code = replace_constants_in_code(decompiled_code, constants_map)

    # Apply post-processing transforms
    decompiled_code = apply_all_transforms(decompiled_code)

    # Load and apply custom replacements from existing JSON
    source_filename = generate_source_filename(func_name, decompiled_code)
    if source_filename.endswith('.cpp'):
        json_base = source_filename[:-4]
    elif source_filename.endswith('.c'):
        json_base = source_filename[:-2]
    else:
        json_base = source_filename
    existing_json_path = os.path.join(pseudocode_src_dir, json_base + '.json')
    custom_replacements = load_custom_replacements(existing_json_path)
    if custom_replacements:
        decompiled_code = apply_custom_replacements(decompiled_code, custom_replacements)

    # Load pcode overrides to preserve them in output
    pcode_overrides = load_pcode_overrides(existing_json_path)
    transform_time = time.time() - transform_start

    # === PYTHON-ONLY: Analysis using pre-computed data from worker ===
    # Summarize stack patterns (Python-only processing of worker data)
    stack_patterns = summarize_stack_patterns(result.stack_patterns_raw)

    # Identify suspect patterns (Python regex matching on decompiled code)
    suspects = identify_suspect_lines(decompiled_code)

    # Identify P-code based suspects (fixable patterns like CALLIND+ESP)
    # Pass existing overrides to separate unfixed from resolved suspects
    pcode_suspects, resolved_suspects = identify_pcode_suspects(
        result.pcode_data, result.assembly_code, pcode_overrides)
    suspects.extend(pcode_suspects)

    # Identify parameter count mismatch (non-vtable functions only)
    param_mismatch = identify_param_count_mismatch(
        result.param_estimates, result.vtable_info)
    if param_mismatch:
        suspects.append(param_mismatch)

    # Identify variadic function calls that may need ESP stabilization
    # Check if this function has stack issues (badspacebase or stack_param)
    has_stack_issues = any(s.get('type') in ('badspacebase', 'stack_param') for s in suspects)
    variadic_suspects, variadic_resolved = identify_variadic_calls(
        result.pcode_data, result.func_calls, has_stack_issues, pcode_overrides)
    suspects.extend(variadic_suspects)
    resolved_suspects.extend(variadic_resolved)

    # Calculate complexity metrics (Python-only)
    complexity = calculate_complexity_metrics(
        decompiled_code, result.assembly_code, suspects,
        result.func_xrefs, result.func_globals, result.func_calls)

    # Group function for prototype generation
    virtual_filename = extract_virtual_filename(func_name)
    function_group_entry = None
    if virtual_filename:
        function_group_entry = {
            'name': func_name,
            'address': func_addr,
            'signature': result.func_signature
        }

    # === PYTHON-ONLY: Output generation ===
    output_start = time.time()
    contents = generate_function_file_contents(
        pseudocode_src_dir, source_filename, func_name, func_addr,
        result.func_addr_range, result.func_convention, result.func_signature,
        decompiled_code, result.assembly_code, result.func_xrefs, result.func_globals,
        result.func_calls, result.stack_frame, suspects, complexity, custom_replacements,
        stack_patterns, result.param_estimates, result.vtable_info, result.pcode_data,
        pcode_overrides, resolved_suspects)
    output_time = time.time() - output_start

    total_process_time = time.time() - process_start

    return {
        'success': contents is not None,
        'func_name': func_name,
        'func_addr': func_addr,
        'suspect_count': len(suspects),
        'virtual_filename': virtual_filename,
        'function_group_entry': function_group_entry,
        'contents': contents,
        'decompile_time': result.decompile_time,
        'assembly_time': result.assembly_time,
        'metadata_time': result.metadata_time,
        'transform_time': transform_time,
        'output_time': output_time,
        'total_time': result.decompile_time + result.assembly_time + result.metadata_time + total_process_time
    }


def export_pseudocode(currentProgram, path):
    """Export pseudocode for all functions in the program.

    Args:
        currentProgram: The Ghidra program
        path: Base directory for output files
    """
    # Initialize profiling timer
    timer = PhaseTimer()
    timer.start_total()

    # Register pcode overrides from existing JSON files before decompilation
    # This allows manual fixes to pcode (e.g., for BADSPACEBASE issues) to be applied
    abs_path = os.path.abspath(path)
    pcode_override_count = register_pcode_overrides(os.path.join(abs_path, "pseudocode", "src"))
    if pcode_override_count > 0:
        log_info("Loaded %d P-code overrides from JSON files" % pcode_override_count)
        # Verify Java side received the overrides
        has_overrides = DecompileCallback.hasPcodeOverrides()
        log_info("Java hasPcodeOverrides() returns: %s" % has_overrides)

    # Define output directories first (needed for preloading)
    # Use abs_path to match paths cached by register_pcode_overrides
    pseudocode_dir = os.path.join(abs_path, "pseudocode")
    pseudocode_include_dir = os.path.join(pseudocode_dir, "include")
    pseudocode_src_dir = os.path.join(pseudocode_dir, "src")

    # Pre-load custom replacements BEFORE cleanup to preserve user modifications
    # (pcode overrides are already cached by register_pcode_overrides above)
    timer.start_phase("Preload custom replacements")
    log_info("Pre-loading custom replacements from existing JSON files...")
    preload_custom_replacements(pseudocode_src_dir)
    timer.end_phase()

    # Clean up existing pseudocode files (now safe - replacements are cached)
    timer.start_phase("Cleanup existing files")
    log_info("Cleaning up existing pseudocode files before export")
    delete_pseudocode(currentProgram, path)

    # Create output directory
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

    # Load vtable data
    timer.start_phase("Load vtable data")
    vtables_dir = os.path.join(path, "vtables")
    vtable_data = None
    if os.path.isdir(vtables_dir):
        vtable_data = load_vtable_data(vtables_dir)
        vtable_func_count = len(vtable_data.get('func_to_vtables', {}))
        log_info("Loaded vtable data: %d vtable addresses, %d functions in vtables" % (
            len(vtable_data.get('vtable_addrs', set())), vtable_func_count))
    else:
        log_info("No vtables directory found at %s - skipping vtable analysis" % vtables_dir)
    timer.end_phase()

    # Load switch table data for CFG-aware ESP tracking
    timer.start_phase("Load switch table data")
    switch_tables_json_path = os.path.join(path, "switch_tables", "switch_tables.json")
    switch_targets = None
    if os.path.exists(switch_tables_json_path):
        switch_targets = load_switch_table_data(switch_tables_json_path)
        log_info("Loaded switch table data: %d switch statements" % len(switch_targets))
    else:
        log_info("No switch_tables.json found at %s - switch target tracking disabled" % switch_tables_json_path)
    timer.end_phase()

    # Load noreturn function data for CFG-aware ESP tracking
    timer.start_phase("Load noreturn function data")
    functions_dir = os.path.join(path, "functions")
    noreturn_addrs = None
    if os.path.exists(functions_dir):
        noreturn_addrs = load_noreturn_functions(functions_dir)
        log_info("Loaded noreturn function data: %d noreturn functions" % len(noreturn_addrs))
    else:
        log_info("No functions directory found at %s - noreturn tracking disabled" % functions_dir)
    timer.end_phase()

    # Load function conventions for CALLIND stdcall handling
    timer.start_phase("Load function conventions")
    func_conventions_path = os.path.join(path, "func_conventions", "func_conventions.json")
    func_conventions = None
    if os.path.exists(func_conventions_path):
        try:
            with open(func_conventions_path, 'r') as f:
                func_conventions = json.load(f)
            log_info("Loaded function conventions: %d function definitions" % len(func_conventions))
        except Exception as e:
            log_info("Failed to load func_conventions.json: %s" % str(e))
    else:
        log_info("No func_conventions.json found at %s - CALLIND convention tracking disabled" % func_conventions_path)
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
    log_info("Using %d worker threads for parallel decompilation" % num_threads)

    # Create thread-local decompiler storage
    decompiler_tls = DecompilerThreadLocal(currentProgram)

    # Create Python thread pool executor
    executor = ThreadPoolExecutor(max_workers=num_threads)

    # =========================================================================
    # PHASE 1: Parallel decompilation (Java-heavy, GIL released)
    # =========================================================================
    timer.start_phase("Parallel decompilation (%d threads)" % num_threads)
    log_info("Submitting %d decompilation tasks" % len(functions_to_process))
    total_tasks = len(functions_to_process)
    futures = []
    for func in functions_to_process:
        worker = DecompileWorker(
            func, currentProgram, decompiler_tls,
            symbol_table, reference_manager, program_listing,
            string_map, global_symbols, vtable_data, switch_targets, noreturn_addrs,
            func_conventions)
        futures.append(executor.submit(worker))

    # Collect raw decompilation results
    decompile_results = []
    decompile_errors = []
    log_info("Waiting for %d decompilation tasks..." % total_tasks)
    decompile_start = time.time()
    decompiled_count = 0
    total_decompile_time = 0.0
    total_assembly_time = 0.0
    total_pcode_time = 0.0

    for future in as_completed(futures):
        try:
            result = future.result()
            decompiled_count += 1
            total_decompile_time += result.decompile_time
            total_assembly_time += result.assembly_time
            total_pcode_time += result.pcode_time

            if result.success:
                decompile_results.append(result)
            else:
                decompile_errors.append("Decompile failed %s: %s" % (result.func_name, result.error))

            # Progress logging
            if decompiled_count % 100 == 0:
                elapsed = time.time() - decompile_start
                rate = decompiled_count / elapsed if elapsed > 0 else 0
                remaining = total_tasks - decompiled_count
                eta = remaining / rate if rate > 0 else 0
                log_info("Decompiled: %d/%d (%.1f/sec, ETA: %.0fs)" % (
                    decompiled_count, total_tasks, rate, eta))
        except Exception as e:
            decompile_errors.append("Decompile exception: %s" % str(e))

    executor.shutdown(wait=True)
    timer.end_phase()

    log_info("Decompilation complete: %d succeeded, %d failed" % (
        len(decompile_results), len(decompile_errors)))

    # =========================================================================
    # PHASE 2: Sequential Python processing (main thread, no GIL contention)
    # =========================================================================
    timer.start_phase("Python processing (main thread)")
    log_info("Processing %d decompiled functions..." % len(decompile_results))

    files_created = 0
    function_groups = {}
    total_suspects = 0
    zero_suspect_count = 0
    process_errors = []
    pending_writes = []
    function_timings = []
    total_transform_time = 0.0
    total_output_time = 0.0

    process_start = time.time()
    for i, result in enumerate(decompile_results):
        try:
            processed = process_decompile_result(
                result, pseudocode_src_dir, constants_map)

            # Collect timing data
            function_timings.append((
                processed['func_name'],
                processed['func_addr'],
                processed['total_time'],
                processed['decompile_time'],
                processed['assembly_time'],
                processed['transform_time'],
                processed['output_time']
            ))
            total_transform_time += processed['transform_time']
            total_output_time += processed['output_time']

            if processed['success']:
                files_created += 1
                total_suspects += processed['suspect_count']
                if processed['suspect_count'] == 0:
                    zero_suspect_count += 1
                elif processed['suspect_count'] > 0:
                    log_info("  Found %d suspect patterns in %s" % (
                        processed['suspect_count'], processed['func_name']))

                # Collect function groups for prototype generation
                if processed['virtual_filename'] and processed['function_group_entry']:
                    vf = processed['virtual_filename']
                    if vf not in function_groups:
                        function_groups[vf] = []
                    function_groups[vf].append(processed['function_group_entry'])

                # Collect file contents for batched writing
                contents = processed['contents']
                if contents:
                    pending_writes.append((contents['cpp_path'], contents['cpp_content']))
                    if contents.get('asm_content'):
                        pending_writes.append((contents['asm_path'], contents['asm_content']))
                    if contents.get('json_content'):
                        pending_writes.append((contents['json_path'], contents['json_content']))
                    if contents.get('pcode_content'):
                        pending_writes.append((contents['pcode_path'], contents['pcode_content']))

                    # Write batch when buffer is full (4 files per function now)
                    if len(pending_writes) >= PROCESS_BATCH_SIZE * 4:
                        write_batched_files(pending_writes)
                        pending_writes = []
            else:
                process_errors.append("Process failed: %s" % processed['func_name'])

            # Progress logging
            if (i + 1) % 100 == 0:
                elapsed = time.time() - process_start
                rate = (i + 1) / elapsed if elapsed > 0 else 0
                remaining = len(decompile_results) - (i + 1)
                eta = remaining / rate if rate > 0 else 0
                log_info("Processed: %d/%d (%.1f/sec, ETA: %.0fs)" % (
                    i + 1, len(decompile_results), rate, eta))

        except Exception as e:
            process_errors.append("Process exception %s: %s" % (result.func_name, str(e)))

    # Write any remaining batched files
    if pending_writes:
        log_info("Writing final batch of %d files" % len(pending_writes))
        write_batched_files(pending_writes)

    timer.end_phase()

    # Combine all errors
    all_errors = decompile_errors + process_errors
    if all_errors:
        log_info("Encountered %d errors during processing:" % len(all_errors))
        for err in all_errors[:10]:
            log_info("  %s" % err)
        if len(all_errors) > 10:
            log_info("  ... and %d more errors" % (len(all_errors) - 10))

    # Log per-phase timing breakdown
    log_info("")
    log_info("=" * 65)
    log_info("PER-FUNCTION TIMING BREAKDOWN (cumulative across all functions)")
    log_info("=" * 65)
    total_func_time = total_decompile_time + total_assembly_time + total_pcode_time + total_transform_time + total_output_time
    if total_func_time > 0:
        log_info("  %-30s %12s  (%5.1f%%)" % ("Decompilation", timer.format_duration(total_decompile_time),
            total_decompile_time / total_func_time * 100))
        log_info("  %-30s %12s  (%5.1f%%)" % ("Assembly generation", timer.format_duration(total_assembly_time),
            total_assembly_time / total_func_time * 100))
        log_info("  %-30s %12s  (%5.1f%%)" % ("P-code extraction", timer.format_duration(total_pcode_time),
            total_pcode_time / total_func_time * 100))
        log_info("  %-30s %12s  (%5.1f%%)" % ("Transforms", timer.format_duration(total_transform_time),
            total_transform_time / total_func_time * 100))
        log_info("  %-30s %12s  (%5.1f%%)" % ("Output generation", timer.format_duration(total_output_time),
            total_output_time / total_func_time * 100))
    log_info("-" * 65)

    # Log slowest functions
    log_info("")
    log_info("=" * 65)
    log_info("TOP 20 SLOWEST FUNCTIONS")
    log_info("=" * 65)
    slowest = sorted(function_timings, key=lambda x: x[2], reverse=True)[:20]
    for name, addr, total, decomp, asm, trans, out in slowest:
        display_name = name if len(name) <= 45 else name[:42] + "..."
        log_info("  %6.2fs  %-45s (decomp: %.2fs, asm: %.2fs)" % (
            total, display_name, decomp, asm))
    log_info("=" * 65)

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
    reports_dir = os.path.join(abs_path, "reports")
    make_dirs(reports_dir)
    generate_analysis_report(pseudocode_src_dir, reports_dir)
    timer.end_phase()

    # Second pass: Update JSON files with vtable indirect caller analysis
    timer.start_phase("Vtable indirect caller analysis")
    if os.path.isdir(vtables_dir):
        log_info("Running second pass: analyzing vtable indirect callers...")
        update_vtable_indirect_callers(pseudocode_src_dir, vtables_dir)
    else:
        log_info("Skipping vtable indirect caller analysis (no vtables directory)")
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
        log_info("=" * 60)

    # Clear pcode overrides to free memory
    DecompileCallback.clearPcodeOverrides()

    log_info("Export complete - created %d pseudocode files" % files_created)
