# Main pseudocode export function
# Entry point for pseudocode export functionality

import os
from java.util.concurrent import Executors
from java.util.concurrent import TimeUnit

from ghidra_annotations.util import make_dirs
from ghidra_annotations.util.log import log_info
from ghidra_annotations.annotations import is_function_external

from ghidra_annotations.annotations.pseudocode.parallel import (
    DecompilerThreadLocal, FunctionProcessor, DEFAULT_NUM_THREADS
)
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


def export_pseudocode(currentProgram, path):
    """Export pseudocode for all functions in the program.

    Args:
        currentProgram: The Ghidra program
        path: Base directory for output files
    """
    # Clean up existing pseudocode files first to handle renamed functions
    log_info("Cleaning up existing pseudocode files before export")
    delete_pseudocode(currentProgram, path)

    # Create output directory
    pseudocode_dir = os.path.join(path, "pseudocode")
    pseudocode_include_dir = os.path.join(pseudocode_dir, "include")
    pseudocode_src_dir = os.path.join(pseudocode_dir, "src")
    make_dirs(pseudocode_dir)

    # Export header files first
    export_header_files(currentProgram, pseudocode_include_dir)

    # Extract and export globals and constants
    log_info("Extracting globals and constants")
    globals_list, constants_list = extract_globals_and_constants(currentProgram)

    # Generate constants files (split by address range)
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

    # Generate globals files (split by address range)
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

    # Get program managers
    function_manager = currentProgram.getFunctionManager()
    program_listing = currentProgram.getListing()
    reference_manager = currentProgram.getReferenceManager()
    symbol_table = currentProgram.getSymbolTable()

    # Build string map for inline replacement
    log_info("Building string map for symbol replacement")
    defined_data = program_listing.getDefinedData(True)
    string_map = build_string_map(defined_data)

    # Build constants map for inline replacement of constant values
    log_info("Building constants map for inline replacement")
    constants_map = build_constants_map(constants_list)
    log_info("Built constants map with %d inline-able constants" % len(constants_map))

    # Build global symbols map once (expensive operation - don't do per-function)
    log_info("Building global symbols map for assembly annotations")
    global_symbols = build_global_symbols_map(symbol_table)
    log_info("Built global symbols map with %d symbols" % len(global_symbols))

    # Collect all non-external functions first
    log_info("Collecting functions for parallel processing")
    functions_to_process = []
    for func in function_manager.getFunctions(True):
        if not is_function_external(currentProgram, func):
            functions_to_process.append(func)
    log_info("Found %d functions to process" % len(functions_to_process))

    # Determine number of threads
    num_threads = min(DEFAULT_NUM_THREADS, max(1, len(functions_to_process)))
    log_info("Using %d worker threads for parallel processing" % num_threads)

    # Create thread-local decompiler storage
    decompiler_tls = DecompilerThreadLocal(currentProgram)

    # Create thread pool executor
    executor = Executors.newFixedThreadPool(num_threads)

    # Submit all function processing tasks
    log_info("Submitting %d function processing tasks" % len(functions_to_process))
    futures = []
    for func in functions_to_process:
        processor = FunctionProcessor(
            func, currentProgram, decompiler_tls, pseudocode_src_dir,
            symbol_table, reference_manager, program_listing,
            string_map, constants_map, global_symbols)
        futures.append(executor.submit(processor))

    # Collect results
    files_created = 0
    function_groups = {}
    total_suspects = 0
    zero_suspect_count = 0
    errors = []
    log_info("Waiting for %d tasks to complete..." % len(futures))
    processed_count = 0
    for future in futures:
        try:
            result = future.get(300, TimeUnit.SECONDS)  # 5 minute timeout per function
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
            else:
                if result.error:
                    errors.append("Failed %s: %s" % (result.func_name, result.error))
                else:
                    log_info("Failed to write files for function: %s" % result.func_name)

            # Progress logging every 100 functions
            if processed_count % 100 == 0:
                log_info("Progress: %d/%d functions processed" % (processed_count, len(futures)))
        except Exception as e:
            errors.append("Task exception: %s" % str(e))

    # Shutdown executor
    executor.shutdown()

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
    log_info("Generating function prototype headers")
    log_info("Found %d function groups: %s" % (len(function_groups), list(function_groups.keys())))
    export_function_prototypes(currentProgram, pseudocode_dir, function_groups)

    # Generate analysis report
    log_info("Generating analysis report...")
    generate_analysis_report(pseudocode_src_dir, path)
    log_info("Export complete - created %d pseudocode files" % files_created)
