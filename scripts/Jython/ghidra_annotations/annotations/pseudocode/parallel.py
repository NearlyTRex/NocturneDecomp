# Parallel processing classes for pseudocode export
# Provides thread-local decompiler interfaces and function processing workers

from java.util.concurrent import Executors
from java.util.concurrent import Callable
from java.util.concurrent import TimeUnit
from java.util.concurrent.atomic import AtomicInteger
from java.lang import Runtime
from java.lang import ThreadLocal
from ghidra.app.decompiler import DecompInterface
from ghidra.app.decompiler import DecompileOptions

# Default number of worker threads for parallel processing
DEFAULT_NUM_THREADS = 4


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


class FunctionProcessor(Callable):
    """Worker class to process a single function for pseudocode export.

    Implements java.util.concurrent.Callable for use with ExecutorService.
    Each instance processes one function and returns a FunctionProcessorResult.
    """

    def __init__(self, func, currentProgram, decompiler_tls, pseudocode_src_dir,
                 symbol_table, reference_manager, program_listing,
                 string_map, constants_map, global_symbols):
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
            write_function_files
        )
        from ghidra_annotations.annotations.pseudocode.transforms import (
            apply_all_transforms, get_remaining_suspects_after_transforms
        )

        result = FunctionProcessorResult()
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

            # Generate decompiled code
            decompiled_code = generate_decompilation_code(
                interface, func, self.symbol_table, self.string_map, timeout=60)

            # Replace constant references with their actual values
            decompiled_code = replace_constants_in_code(decompiled_code, self.constants_map)

            # Apply post-processing transforms to fix auto-fixable suspect patterns
            decompiled_code = apply_all_transforms(decompiled_code)

            # Generate richly annotated assembly code with context
            assembly_code = generate_assembly_code_rich(
                self.currentProgram, func, self.symbol_table, self.reference_manager,
                self.program_listing, self.string_map, self.global_symbols)

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

            # Determine source file name
            source_filename = generate_source_filename(result.func_name, decompiled_code)

            # Write all three files (.cpp, .asm, .json)
            files_written = write_function_files(
                self.pseudocode_src_dir, source_filename, result.func_name, result.func_addr,
                func_addr_range, func_convention, func_signature,
                decompiled_code, assembly_code, func_xrefs, func_globals,
                func_calls, stack_frame, suspects, complexity)
            result.success = files_written
        except Exception as e:
            result.error = str(e)
            result.success = False
        return result
