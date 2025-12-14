# Parallel processing classes for pseudocode export
# Provides thread-local decompiler interfaces and function processing workers
#
# Architecture: Workers do ALL Java-heavy operations (runs in parallel),
# main thread handles Python-only processing (avoids GIL contention).

import time
import threading
from ghidra.app.decompiler import DecompInterface
from ghidra.app.decompiler import DecompileOptions

# Import Java-heavy functions for workers
from ghidra_annotations.annotations.pseudocode.decompiler import (
    decompile_function_raw, export_stack_frame
)
from ghidra_annotations.annotations.pseudocode.assembly import (
    generate_assembly_code_rich
)
from ghidra_annotations.annotations.pseudocode.functions import (
    get_function_xrefs, get_function_globals, get_function_calls
)
from ghidra_annotations.annotations.pseudocode.stack_patterns import (
    detect_stack_patterns_from_listing
)

# Default number of worker threads for parallel processing
# With the restructured approach (Java in workers, Python in main thread),
# we can use more threads since the GIL contention is minimized.
# Java operations via jpype/pyghidra release the GIL, so 10-12 threads
# work well on modern multi-core systems.
DEFAULT_NUM_THREADS = 12

# Batch size for processing results in main thread
# Larger batches reduce I/O overhead but use more memory
PROCESS_BATCH_SIZE = 100


class DecompilerThreadLocal:
    """Thread-local storage for DecompInterface instances.

    Each worker thread gets its own decompiler interface to avoid
    thread-safety issues with the Ghidra decompiler.
    """

    def __init__(self, currentProgram):
        self.currentProgram = currentProgram
        self._local = threading.local()
        self._init_lock = threading.Lock()

    def get(self):
        """Get the thread-local DecompInterface, creating one if needed."""
        if hasattr(self._local, 'interface'):
            return self._local.interface
        with self._init_lock:
            if not hasattr(self._local, 'interface'):
                interface = DecompInterface()
                interface.setOptions(DecompileOptions())
                interface.openProgram(self.currentProgram)
                self._local.interface = interface
        return self._local.interface


class DecompileResult:
    """Container for all Java-heavy operation results.

    Contains data from all Java-heavy operations (decompilation, assembly,
    xrefs, globals, calls, stack analysis). Python-only processing
    (transforms, JSON, file generation) is done in the main thread.
    """
    __slots__ = [
        'success', 'error',
        'func', 'func_name', 'func_addr',
        'func_signature', 'func_addr_range', 'func_convention',
        'raw_decompiled_code', 'assembly_code',
        'func_xrefs', 'func_globals', 'func_calls',
        'stack_frame', 'stack_patterns_raw',
        'decompile_time', 'assembly_time', 'metadata_time'
    ]

    def __init__(self):
        self.success = False
        self.error = None
        self.func = None
        self.func_name = ""
        self.func_addr = ""
        self.func_signature = ""
        self.func_addr_range = None
        self.func_convention = ""
        self.raw_decompiled_code = ""
        self.assembly_code = ""
        self.func_xrefs = []
        self.func_globals = []
        self.func_calls = []
        self.stack_frame = None
        self.stack_patterns_raw = []
        self.decompile_time = 0.0
        self.assembly_time = 0.0
        self.metadata_time = 0.0


class DecompileWorker:
    """Worker that does ALL Java-heavy operations.

    This worker performs all operations that involve Java/Ghidra API calls,
    allowing them to run truly in parallel (GIL released during JVM calls).
    The main thread only does Python-only string processing.
    """

    def __init__(self, func, currentProgram, decompiler_tls,
                 symbol_table, reference_manager, program_listing,
                 string_map, global_symbols):
        self.func = func
        self.currentProgram = currentProgram
        self.decompiler_tls = decompiler_tls
        self.symbol_table = symbol_table
        self.reference_manager = reference_manager
        self.program_listing = program_listing
        self.string_map = string_map
        self.global_symbols = global_symbols

    def __call__(self):
        """Execute all Java-heavy operations and return results."""
        result = DecompileResult()
        try:
            func = self.func
            result.func = func
            result.func_name = func.getName()
            result.func_addr = str(func.getEntryPoint())
            result.func_signature = func.getPrototypeString(True, False)
            result.func_addr_range = func.getBody()
            result.func_convention = func.getCallingConventionName()

            # Get thread-local decompiler interface
            interface = self.decompiler_tls.get()

            # === JAVA-HEAVY: Decompilation (GIL released during JVM call) ===
            decompile_start = time.time()
            result.raw_decompiled_code = decompile_function_raw(
                interface, func, self.symbol_table, self.string_map, timeout=60)
            result.decompile_time = time.time() - decompile_start

            # === JAVA-HEAVY: Assembly generation (GIL released during JVM calls) ===
            assembly_start = time.time()
            result.assembly_code = generate_assembly_code_rich(
                self.currentProgram, func, self.symbol_table, self.reference_manager,
                self.program_listing, self.string_map, self.global_symbols)
            result.assembly_time = time.time() - assembly_start

            # === JAVA-HEAVY: Function metadata (xrefs, globals, calls) ===
            metadata_start = time.time()
            result.func_xrefs = get_function_xrefs(self.currentProgram, func)
            result.func_globals = get_function_globals(self.currentProgram, func)
            result.func_calls = get_function_calls(self.currentProgram, func)
            result.stack_frame = export_stack_frame(func)
            result.stack_patterns_raw = detect_stack_patterns_from_listing(
                self.program_listing, func)
            result.metadata_time = time.time() - metadata_start

            result.success = True
        except Exception as e:
            result.error = str(e)
            result.success = False
        return result
