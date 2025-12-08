# Parallel processing classes for pseudocode export
# Provides thread-local decompiler interfaces and function processing workers

import os
import time
from java.util.concurrent import Executors
from java.util.concurrent import Callable
from java.util.concurrent import TimeUnit
from java.util.concurrent.atomic import AtomicInteger
from java.lang import Runtime
from java.lang import ThreadLocal
from ghidra.app.decompiler import DecompInterface
from ghidra.app.decompiler import DecompileOptions

# Default number of worker threads for parallel processing
# For 16-core systems, 10-12 is optimal; beyond that, JVM memory pressure causes issues
DEFAULT_NUM_THREADS = 10

# Use batched I/O mode - workers return content, main thread writes files
# This reduces disk contention from parallel writes
USE_BATCHED_IO = True

# Batch size for writing files (number of functions worth of files to write at once)
IO_BATCH_SIZE = 50


class DecompilerThreadLocal(ThreadLocal):
    """Thread-local storage for DecompInterface instances.

    Each worker thread gets its own decompiler interface to avoid
    thread-safety issues with the Ghidra decompiler.
    """

    def __init__(self, currentProgram):
        self.currentProgram = currentProgram

    def initialValue(self):
        interface = DecompInterface()
        interface.setOptions(DecompileOptions())
        interface.openProgram(self.currentProgram)
        return interface


class FunctionProcessorResult:
    """Container for results from processing a single function."""

    def __init__(self):
        self.success = False
        self.func_name = ""
        self.func_addr = ""
        self.suspect_count = 0
        self.virtual_filename = None
        self.function_group_entry = None
        self.error = None
        # File content for batched I/O (None means write was done inline)
        self.cpp_path = None
        self.cpp_content = None
        self.asm_path = None
        self.asm_content = None
        self.json_path = None
        self.json_content = None
        # Per-function timing (in seconds)
        self.total_time = 0.0
        self.decompile_time = 0.0
        self.assembly_time = 0.0
        self.transform_time = 0.0
        self.output_time = 0.0


class FunctionProcessor(Callable):
    """Worker class to process a single function for pseudocode export.

    Implements java.util.concurrent.Callable for use with ExecutorService.
    Each instance processes one function and returns a FunctionProcessorResult.
    """

    def __init__(self, func, currentProgram, decompiler_tls, pseudocode_src_dir,
                 symbol_table, reference_manager, program_listing,
                 string_map, constants_map, global_symbols, batched_io=False):
        self.func = func
        self.currentProgram = currentProgram
        self.decompiler_tls = decompiler_tls
        self.pseudocode_src_dir = pseudocode_src_dir
        self.symbol_table = symbol_table
        self.reference_manager = reference_manager
        self.program_listing = program_listing
        self.string_map = string_map
        self.constants_map = constants_map
        self.global_symbols = global_symbols
        self.batched_io = batched_io  # If True, return content instead of writing files

    def call(self):
        # Import here to avoid circular imports
        from ghidra_annotations.annotations.pseudocode.functions import (
            extract_virtual_filename, get_function_xrefs, get_function_globals,
            get_function_calls, generate_source_filename
        )
        from ghidra_annotations.annotations.pseudocode.decompiler import (
            generate_decompilation_code, replace_constants_in_code, export_stack_frame
        )
        from ghidra_annotations.annotations.pseudocode.assembly import (
            generate_assembly_code_rich
        )
        from ghidra_annotations.annotations.pseudocode.suspects import (
            identify_suspect_lines, calculate_complexity_metrics
        )
        from ghidra_annotations.annotations.pseudocode.output import (
            write_function_files, generate_function_file_contents
        )
        from ghidra_annotations.annotations.pseudocode.transforms import (
            apply_all_transforms, get_remaining_suspects_after_transforms
        )

        result = FunctionProcessorResult()
        func_start_time = time.time()
        try:
            func = self.func
            result.func_name = func.getName()
            result.func_addr = str(func.getEntryPoint())

            # Get thread-local decompiler interface
            interface = self.decompiler_tls.get()

            # Get function info
            func_signature = func.getPrototypeString(True, False)
            func_addr_range = func.getBody()
            func_convention = func.getCallingConventionName()

            # Group function for prototype generation
            virtual_filename = extract_virtual_filename(result.func_name)
            if virtual_filename:
                result.virtual_filename = virtual_filename
                result.function_group_entry = {
                    'name': result.func_name,
                    'address': result.func_addr,
                    'signature': func_signature
                }

            # Get function cross-references
            func_xrefs = get_function_xrefs(self.currentProgram, func)

            # Get function globals
            func_globals = get_function_globals(self.currentProgram, func)

            # Get function calls
            func_calls = get_function_calls(self.currentProgram, func)

            # Generate decompiled code (TIMED - main bottleneck)
            decompile_start = time.time()
            decompiled_code = generate_decompilation_code(
                interface, func, self.symbol_table, self.string_map, timeout=60)
            result.decompile_time = time.time() - decompile_start

            # Replace constant references with their actual values
            transform_start = time.time()
            decompiled_code = replace_constants_in_code(decompiled_code, self.constants_map)

            # Apply post-processing transforms to fix auto-fixable suspect patterns
            decompiled_code = apply_all_transforms(decompiled_code)

            # Load and apply custom replacements from existing JSON (if any)
            # This allows manual fixes to be preserved across re-exports
            source_filename = generate_source_filename(result.func_name, decompiled_code)
            if source_filename.endswith('.cpp'):
                json_base = source_filename[:-4]
            elif source_filename.endswith('.c'):
                json_base = source_filename[:-2]
            else:
                json_base = source_filename
            existing_json_path = os.path.join(self.pseudocode_src_dir, json_base + '.json')
            custom_replacements = load_custom_replacements(existing_json_path)
            if custom_replacements:
                decompiled_code = apply_custom_replacements(decompiled_code, custom_replacements)
            result.transform_time = time.time() - transform_start

            # Generate richly annotated assembly code with context (TIMED)
            assembly_start = time.time()
            assembly_code = generate_assembly_code_rich(
                self.currentProgram, func, self.symbol_table, self.reference_manager,
                self.program_listing, self.string_map, self.global_symbols)
            result.assembly_time = time.time() - assembly_start

            # Identify suspect patterns in the transformed code
            # (some suspects will have been auto-fixed by transforms)
            suspects = identify_suspect_lines(decompiled_code)
            result.suspect_count = len(suspects)

            # Export stack frame information
            stack_frame = export_stack_frame(func)

            # Calculate complexity metrics
            complexity = calculate_complexity_metrics(
                decompiled_code, assembly_code, suspects,
                func_xrefs, func_globals, func_calls)

            # Output generation (TIMED)
            # Note: source_filename was computed earlier for loading custom replacements
            output_start = time.time()
            if self.batched_io:
                # Generate content for batched writing later
                # Pass through custom_replacements to preserve them in the JSON
                contents = generate_function_file_contents(
                    self.pseudocode_src_dir, source_filename, result.func_name, result.func_addr,
                    func_addr_range, func_convention, func_signature,
                    decompiled_code, assembly_code, func_xrefs, func_globals,
                    func_calls, stack_frame, suspects, complexity, custom_replacements)
                if contents:
                    result.cpp_path = contents['cpp_path']
                    result.cpp_content = contents['cpp_content']
                    result.asm_path = contents['asm_path']
                    result.asm_content = contents['asm_content']
                    result.json_path = contents['json_path']
                    result.json_content = contents['json_content']
                    result.success = True
                else:
                    result.success = False
            else:
                # Write files directly (original behavior)
                files_written = write_function_files(
                    self.pseudocode_src_dir, source_filename, result.func_name, result.func_addr,
                    func_addr_range, func_convention, func_signature,
                    decompiled_code, assembly_code, func_xrefs, func_globals,
                    func_calls, stack_frame, suspects, complexity)
                result.success = files_written
            result.output_time = time.time() - output_start
        except Exception as e:
            result.error = str(e)
            result.success = False
        result.total_time = time.time() - func_start_time
        return result
