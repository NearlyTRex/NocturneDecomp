# Function compilation verification module
# Compiles individual function .cpp files to verify syntax correctness
# and categorizes compilation errors for analysis

import os
import re
import json
import hashlib
import subprocess
from concurrent.futures import ThreadPoolExecutor, as_completed
from ghidra_annotations.util.log import log_info
from ghidra_annotations.annotations.pseudocode.analysis import (
    create_compilation_overview_svg,
    create_all_files_compilation_svg
)
from ghidra_annotations.annotations.pseudocode.compiler_config import (
    DEFAULT_COMPILER, DEFAULT_COMPILE_FLAGS
)


# =============================================================================
# Precompiled Header
# =============================================================================
#
# `nocturne.h` is ~6 MB / 142K lines once expanded; re-parsing it for each of
# 4000+ per-function compiles dominates wall time. Build a PCH once, pass
# `-include-pch` on every per-function clang invocation. Empirical speedup
# on this codebase: ~35x sequential, errors still surface correctly.

def build_nocturne_pch(include_dir, compiler=DEFAULT_COMPILER, timeout=180):
    """Precompile `nocturne.h` into a PCH alongside the header.

    Returns the PCH path on success, or None on failure (caller falls back
    to per-file header parsing). Logs the failure but does not raise — a
    bad PCH should never block the rest of the compile pipeline.
    """
    nocturne_h = os.path.join(include_dir, "nocturne.h")
    if not os.path.exists(nocturne_h):
        return None
    pch_path = nocturne_h + ".pch"
    shims_dir = os.path.join(os.path.dirname(include_dir), "shims")
    # Drop `-fsyntax-only` — it suppresses output emission, which would
    # mean no PCH file ever gets written.
    pch_flags = [f for f in DEFAULT_COMPILE_FLAGS if f != '-fsyntax-only']
    cmd = [compiler] + pch_flags + [
        '-x', 'c++-header',
        '-fno-diagnostics-color',
        '-I', include_dir,
        '-I', shims_dir,
        '-o', pch_path,
        nocturne_h,
    ]
    try:
        proc = subprocess.run(
            cmd, capture_output=True, text=True, timeout=timeout)
        if proc.returncode == 0 and os.path.exists(pch_path):
            return pch_path
        log_info("PCH build failed (%s); falling back to per-file headers."
                 % os.path.basename(nocturne_h))
        if proc.stderr.strip():
            for line in proc.stderr.strip().split('\n')[:5]:
                log_info("  " + line)
        return None
    except (subprocess.TimeoutExpired, FileNotFoundError, OSError) as e:
        log_info("PCH build error: %s" % str(e))
        return None


def _hash_file_bytes(path, chunk=65536):
    """sha256 hash of a file's bytes (truncated to 16 hex chars). Empty
    string if the file doesn't exist or can't be read."""
    if not path or not os.path.exists(path):
        return ''
    h = hashlib.sha256()
    try:
        with open(path, 'rb') as f:
            while True:
                buf = f.read(chunk)
                if not buf:
                    break
                h.update(buf)
        return h.hexdigest()[:16]
    except OSError:
        return ''


def _flags_signature():
    """Stable hash of the active compile flags."""
    return hashlib.sha256(
        '\x00'.join(DEFAULT_COMPILE_FLAGS).encode('utf-8')
    ).hexdigest()[:16]


def _compile_cache_key(cpp_path, pch_sig, flags_sig):
    """Hash that captures source bytes + flags + PCH content signature."""
    h = hashlib.sha256()
    try:
        with open(cpp_path, 'rb') as f:
            h.update(f.read())
    except OSError:
        return ''
    h.update(b'|')
    h.update(pch_sig.encode('ascii'))
    h.update(b'|')
    h.update(flags_sig.encode('ascii'))
    return h.hexdigest()[:16]


def _cache_path_for(src_dir):
    """Sidecar path for the compile cache. Lives next to `src/` rather than
    inside it, and is gitignored — its contents are machine-specific (PCH
    bytes vary by clang version/sysroot/etc.) so they must not influence
    git-tracked JSONs."""
    return os.path.join(os.path.dirname(src_dir), '.compile_cache.json')


def _load_compile_cache(cache_path, function_files, src_dir):
    """Load the sidecar cache, or migrate from per-JSON `compile_hash`
    fields written by older exports. Migration keeps the first run after
    this change warm instead of forcing a full cold rebuild.

    Returns a dict keyed by `os.path.relpath(json_path, src_dir)`.
    """
    if os.path.exists(cache_path):
        try:
            with open(cache_path, 'r') as f:
                return json.load(f) or {}
        except (OSError, ValueError):
            return {}
    cache = {}
    for func_info in function_files:
        try:
            with open(func_info['json_path'], 'r') as f:
                data = json.load(f)
        except (OSError, ValueError):
            continue
        cs = data.get('compilation_status') or {}
        h = cs.get('compile_hash')
        if h and cs.get('success'):
            key = os.path.relpath(func_info['json_path'], src_dir)
            cache[key] = {
                'compile_hash': h,
                'errors': cs.get('errors', []),
                'warnings': cs.get('warnings', []),
            }
    return cache


def _save_compile_cache(cache_path, cache):
    """Atomically write the sidecar cache."""
    tmp = cache_path + '.tmp'
    try:
        with open(tmp, 'w') as f:
            json.dump(cache, f, indent=2, sort_keys=True)
        os.replace(tmp, cache_path)
        return True
    except OSError as e:
        log_info("Failed to write compile cache: %s" % e)
        try:
            os.unlink(tmp)
        except OSError:
            pass
        return False


def _lookup_cached_compile_result(cache, key, cache_key):
    """Return the cached compilation_status if its stored hash matches
    `cache_key`. Only successful entries are stored, so a hit always means
    success."""
    if not cache_key:
        return None
    entry = cache.get(key)
    if not entry:
        return None
    if entry.get('compile_hash') != cache_key:
        return None
    return {
        'success': True,
        'errors': entry.get('errors', []),
        'warnings': entry.get('warnings', []),
    }


# =============================================================================
# Path Normalization
# =============================================================================

def strip_ansi_codes(text):
    """Remove ANSI color/escape codes from text."""
    if not text:
        return text
    ansi_pattern = re.compile(r'\x1b\[[0-9;]*m')
    return ansi_pattern.sub('', text)


def normalize_quotes(text):
    """Replace Unicode fancy quotes with ASCII quotes."""
    if not text:
        return text
    # Replace left/right single quotes with ASCII single quote
    text = text.replace('\u2018', "'").replace('\u2019', "'")
    # Replace left/right double quotes with ASCII double quote
    text = text.replace('\u201c', '"').replace('\u201d', '"')
    return text


def normalize_path_in_message(message, repo_dir):
    """Replace absolute paths in message with paths relative to repo_dir."""
    if not message or not repo_dir:
        return message
    # Handle both with and without trailing slash
    repo_with_slash = repo_dir.rstrip('/') + '/'
    result = message.replace(repo_with_slash, '')
    return result.replace(repo_dir, '')


# =============================================================================
# Error Categorization
# =============================================================================

# Error category patterns (regex patterns for clang++/g++ error messages)
# Categories are checked in order - more specific patterns should come before general ones
ERROR_CATEGORIES = {
    # Pointer precision issues (32-bit to 64-bit portability)
    'pointer_precision': [
        r"loses precision",
        r"cast from '.*\*' to '.*int",
        r"cast from pointer to integer of different size",
    ],
    # Pointer arithmetic on void* or function pointers
    'pointer_arithmetic': [
        r"pointer.*used in arithmetic",
        r"arithmetic on.*pointer",
        r"pointer of type 'void \*'.*arithmetic",
    ],
    # Private/protected member access
    'private_member': [
        r"is private",
        r"is protected",
        r"within this context",
        r"private member",
        r"protected member",
    ],
    # Lvalue requirement errors
    'lvalue_required': [
        r"lvalue required",
        r"cannot take the address",
        r"non-lvalue",
        r"not an lvalue",
    ],
    # Const-related errors
    'const_error': [
        r"discards.*const",
        r"invalid conversion from 'const",
        r"assignment of read-only",
        r"binding.*to.*const",
    ],
    # Undeclared identifiers and scope issues
    'undeclared_identifier': [
        r"use of undeclared identifier",
        r"'[^']+' was not declared",
        r"undeclared \(first use",
        r"'[^']+' undeclared",
    ],
    # Type name errors
    'type_error': [
        r"unknown type name",
        r"does not name a type",
        r"invalid use of incomplete type",
        r"expected class-name",
    ],
    # Incomplete type usage
    'incomplete_type': [
        r"incomplete type",
        r"forward declaration of",
        r"has incomplete type",
    ],
    # Missing header files
    'missing_header': [
        r"file not found",
        r"No such file or directory",
        r"cannot open source file",
    ],
    # Syntax errors
    'syntax_error': [
        r"expected ';'",
        r"expected '\)'",
        r"expected '\}'",
        r"expected '\{'",
        r"expected expression",
        r"expected primary-expression",
        r"expected unqualified-id",
        r"expected declaration",
        r"stray '",
        r"missing terminating",
    ],
    # Undefined references (linker-style errors)
    'undefined_reference': [
        r"undefined reference to",
        r"unresolved external",
    ],
    # Type incompatibility and conversion issues
    'incompatible_types': [
        r"incompatible",
        r"cannot convert",
        r"invalid conversion",
        r"no matching function",
        r"could not convert",
        r"invalid operands",
    ],
    # Missing struct/class members
    'missing_member': [
        r"no member named",
        r"has no member",
        r"is not a member",
        r"class has no member",
    ],
    # Redefinition errors
    'redefinition': [
        r"redefinition of",
        r"redeclared",
        r"previous definition",
        r"conflicting declaration",
    ],
    # Function overload resolution failures
    'overload_error': [
        r"ambiguous",
        r"call of overloaded.*is ambiguous",
        r"no matching function for call",
    ],
    # Template-related errors
    'template_error': [
        r"template argument",
        r"no type named.*in.*template",
        r"dependent name",
    ],
    # Narrowing conversion (C++11)
    'narrowing_conversion': [
        r"narrowing conversion",
        r"narrowing",
    ],
    # Initialization errors
    'initialization_error': [
        r"cannot be initialized",
        r"no matching constructor",
        r"invalid initialization",
        r"initializer",
    ],
    # Array-related errors
    'array_error': [
        r"array.*bounds",
        r"past the end of the array",
        r"subscript.*is.*out of range",
        r"size of array",
        r"variable length array",
    ],
    # Format string type mismatches (wrong Ghidra type annotations)
    'format_error': [
        r"format.*expects.*argument of type",
        r"format specifies type",
        r"format.*expects.*but.*has type",
        r"more '%' conversions than data arguments",
        r"data argument not used by format string",
        r"-Wformat",
    ],
    # Return type mismatches (wrong return type annotation in Ghidra)
    'return_type_error': [
        r"non-void function does not return",
        r"control reaches end of non-void",
        r"return-type",
    ],
    # Cast errors (pointer/float/type cast failures)
    'cast_error': [
        r"C-style cast from .* is not allowed",
        r"cannot cast from type",
        r"no matching conversion for C-style cast",
        r"cast from pointer to smaller type",
    ],
    # Member access on non-struct type (wrong local/field type in Ghidra)
    'type_error': [
        r"member reference base type .* is not a structure or union",
        r"is not a structure or union",
        r"called object type .* is not a function",
        r"invalid suffix '\._\d+_\d+_'",
        r"statement requires expression of integer type",
    ],
    # Argument count mismatches (wrong function signature in Ghidra)
    'argument_error': [
        r"too few arguments to function call",
        r"too many arguments to function call",
    ],
    # Pointer type mismatches
    'pointer_type': [
        r"cannot initialize a parameter of type",
        r"cannot initialize return object of type",
        r"comparison of distinct pointer types",
        r"converts between pointers to integer types with different sign",
        r"discards qualifiers",
    ],
}


def categorize_error(error_msg):
    """Categorize an error message into a known type.

    Args:
        error_msg: Error message string from compiler

    Returns:
        Category string (one of the ERROR_CATEGORIES keys, or 'other')
    """
    if not error_msg:
        return 'other'

    error_lower = error_msg.lower()

    for category, patterns in ERROR_CATEGORIES.items():
        for pattern in patterns:
            if re.search(pattern, error_msg, re.IGNORECASE):
                return category

    return 'other'


# =============================================================================
# Error Parsing
# =============================================================================

def parse_error_output(stderr, cpp_path):
    """Parse compiler error output into structured format.

    Args:
        stderr: Standard error output from compiler
        cpp_path: Path to the compiled file (for path normalization)

    Returns:
        Tuple of (errors: list[dict], warnings: list[dict])
    """
    errors = []
    warnings = []

    if not stderr:
        return (errors, warnings)

    # Get basename for matching
    cpp_basename = os.path.basename(cpp_path)
    cpp_dir = os.path.dirname(cpp_path)

    # Regex to match clang++/g++ error/warning format:
    # file:line:col: error: message
    # file:line:col: warning: message
    # file:line: error: message
    pattern = re.compile(
        r'^([^:]+):(\d+):(?:(\d+):)?\s*(error|warning|note):\s*(.*)$',
        re.MULTILINE
    )

    for match in pattern.finditer(stderr):
        file_path = match.group(1)
        line = int(match.group(2))
        column = int(match.group(3)) if match.group(3) else 0
        msg_type = match.group(4).lower()
        message = match.group(5).strip()

        # Skip notes (they're context for errors/warnings)
        if msg_type == 'note':
            continue

        entry = {
            'line': line,
            'column': column,
            'message': message,
            'category': categorize_error(message),
        }

        if msg_type == 'error':
            errors.append(entry)
        elif msg_type == 'warning':
            warnings.append(entry)

    # If no structured errors found but stderr has content, create a generic error
    if not errors and stderr.strip():
        # Look for any line containing 'error'
        for line in stderr.split('\n'):
            if 'error:' in line.lower():
                errors.append({
                    'line': 0,
                    'column': 0,
                    'message': line.strip(),
                    'category': categorize_error(line),
                })
                break

        # If still no errors, use first non-empty line
        if not errors:
            first_line = stderr.strip().split('\n')[0]
            errors.append({
                'line': 0,
                'column': 0,
                'message': first_line[:500],  # Limit length
                'category': 'other',
            })

    return (errors, warnings)


# =============================================================================
# Single File Compilation
# =============================================================================

def compile_function_cpp(cpp_path, include_dir, compiler=DEFAULT_COMPILER,
                         timeout=60, repo_dir=None, pch_path=None):
    """Compile a single function .cpp file for syntax verification.

    Uses the default compiler targeting 32-bit x86 to match the original binary.
    This gives us array bounds warnings that help verify struct and array sizes
    in Ghidra annotations, while suppressing all other warnings since the code
    is decompiler output, not hand-written.

    Args:
        cpp_path: Path to the .cpp file
        include_dir: Path to include directory for -I flag
        compiler: Compiler to use (from compiler_config.DEFAULT_COMPILER)
        timeout: Compilation timeout in seconds
        repo_dir: Optional repo root for normalizing paths in error messages
        pch_path: Optional path to a precompiled `nocturne.h.pch`. When set,
            clang skips re-parsing the 6MB header tree on each invocation.

    Returns:
        Dict with:
            success: bool
            errors: list[dict] with line, column, message, category
            warnings: list[dict] with line, column, message, category
    """
    result = {
        'success': False,
        'errors': [],
        'warnings': [],
    }

    try:
        # Include both the types/globals headers AND the shims directory
        # (for debug_log.h and other shim headers used by .keep files).
        shims_dir = os.path.join(os.path.dirname(include_dir), "shims")
        cmd = [compiler] + DEFAULT_COMPILE_FLAGS + [
            '-fno-diagnostics-color',  # Prevent ANSI color codes in output
            '-I', include_dir,
            '-I', shims_dir,
        ]
        if pch_path:
            cmd += ['-include-pch', pch_path]
        cmd.append(cpp_path)

        proc_result = subprocess.run(
            cmd,
            capture_output=True,
            text=True,
            timeout=timeout
        )

        # Clean up stderr: strip ANSI codes, normalize quotes and paths
        stderr = strip_ansi_codes(proc_result.stderr)
        stderr = normalize_quotes(stderr)
        if repo_dir:
            stderr = normalize_path_in_message(stderr, repo_dir)

        if proc_result.returncode == 0:
            result['success'] = True
            # Still parse warnings
            _, warnings = parse_error_output(stderr, cpp_path)
            result['warnings'] = warnings
        else:
            errors, warnings = parse_error_output(stderr, cpp_path)
            result['errors'] = errors
            result['warnings'] = warnings

    except subprocess.TimeoutExpired:
        result['errors'] = [{
            'line': 0,
            'column': 0,
            'message': 'Compilation timed out after %ds' % timeout,
            'category': 'other',
        }]
    except FileNotFoundError:
        result['errors'] = [{
            'line': 0,
            'column': 0,
            'message': "Compiler '%s' not found" % compiler,
            'category': 'other',
        }]
    except Exception as e:
        result['errors'] = [{
            'line': 0,
            'column': 0,
            'message': 'Compilation error: %s' % str(e),
            'category': 'other',
        }]

    return result


# =============================================================================
# Parallel Compilation
# =============================================================================

def load_function_info_from_json(json_path):
    """Load function name and metadata from a JSON file.

    Args:
        json_path: Path to the function JSON file

    Returns:
        Dict with 'name', 'address', 'json_path', 'cpp_path' or None on error
    """
    try:
        with open(json_path, 'r') as f:
            data = json.load(f)

        func_info = data.get('function', {})
        func_name = func_info.get('name', '')
        func_addr = func_info.get('address', '')

        if not func_name:
            return None

        # Derive source path from json path - prefer .keep > .cpp/.c
        # .mmx/.byval/.chunked variants are generated but not compiled
        base_path = json_path[:-5]  # Remove '.json'
        _SRC_EXTENSIONS = (
            '.keep.cpp', '.keep.c',
            '.cpp', '.c',
        )
        src_path = base_path + '.cpp'  # Default fallback
        for ext in _SRC_EXTENSIONS:
            if os.path.exists(base_path + ext):
                src_path = base_path + ext
                break

        return {
            'name': func_name,
            'address': func_addr,
            'json_path': json_path,
            'cpp_path': src_path,
        }
    except Exception:
        return None


def compile_all_functions(src_dir, include_dir, compiler=DEFAULT_COMPILER, num_threads=8,
                          skip_dirs=None, progress_callback=None, repo_dir=None):
    """Compile all function .cpp files in parallel.

    Reads JSON files to get actual function names for skip detection,
    then compiles the corresponding cpp files and updates JSON with results.

    Args:
        src_dir: Directory containing function .json/.cpp files
        include_dir: Include directory for -I flag
        compiler: Compiler to use
        num_threads: Number of parallel compilation threads
        skip_dirs: List of directory names to skip (e.g., ['globals', 'crt', 'entry'])
        progress_callback: Optional callback(completed, total) for progress
        repo_dir: Optional repo root for normalizing paths in error messages

    Returns:
        Dict mapping func_name -> compilation_result dict
    """
    if skip_dirs is None:
        skip_dirs = ['globals', 'crt', 'entry']  # Skip globals, CRT, and entry by default

    results = {}

    # Find all .json files (which represent functions)
    function_files = []
    for root, dirs, files in os.walk(src_dir):
        # Skip specified directories
        rel_root = os.path.relpath(root, src_dir)
        skip_this = False
        for skip_dir in skip_dirs:
            if rel_root == skip_dir or rel_root.startswith(skip_dir + os.sep):
                skip_this = True
                break
        if skip_this:
            continue

        for f in files:
            if f.endswith('.json'):
                json_path = os.path.join(root, f)
                func_info = load_function_info_from_json(json_path)
                if func_info and os.path.exists(func_info['cpp_path']):
                    function_files.append(func_info)

    if not function_files:
        return results

    total = len(function_files)

    # Check if compiler is available
    try:
        check_result = subprocess.run([compiler, '--version'],
                                      capture_output=True, timeout=5)
        if check_result.returncode != 0:
            log_info("Compiler '%s' not available, skipping function compilation" % compiler)
            return results
    except (FileNotFoundError, subprocess.TimeoutExpired):
        log_info("Compiler '%s' not available, skipping function compilation" % compiler)
        return results

    # Build the PCH once (~6MB nocturne.h tree) so per-function clang
    # invocations don't re-parse it. Falls back to per-file headers if the
    # build fails. Hash the PCH once so we can use it as a cache-invalidation
    # signal in the per-file compile-result hash.
    pch_path = build_nocturne_pch(include_dir, compiler=compiler)
    if pch_path:
        log_info("Using precompiled header: %s" %
                 os.path.relpath(pch_path, include_dir))
    pch_sig = _hash_file_bytes(pch_path)
    flags_sig = _flags_signature()

    log_info("Compiling %d function files with %d threads..." % (total, num_threads))
    log_info("  (skipping directories: %s)" % ', '.join(skip_dirs))

    # Hash-based incremental skip: if a function's source bytes + flags + PCH
    # are unchanged since the last successful compile, reuse the cached
    # result and skip the clang invocation entirely. Failed results are not
    # cached, so any keep edit re-runs the compiler.
    #
    # Cache lives in a sidecar file (gitignored), keyed by JSON path relative
    # to src_dir. Keeping it out of the JSONs preserves their determinism
    # across machines — PCH bytes embed clang version/sysroot/build stamps,
    # so the hash itself is per-machine.
    cache_path = _cache_path_for(src_dir)
    compile_cache = _load_compile_cache(cache_path, function_files, src_dir)
    pending_compile = []  # (func_info, cache_key, cache_key_path) tuples to actually compile
    cache_hits = 0
    for func_info in function_files:
        cache_key = _compile_cache_key(func_info['cpp_path'], pch_sig, flags_sig)
        cache_key_path = os.path.relpath(func_info['json_path'], src_dir)
        cached = _lookup_cached_compile_result(compile_cache, cache_key_path, cache_key)
        if cached is not None:
            results[func_info['name']] = {
                'success': True,
                'errors': cached.get('errors', []),
                'warnings': cached.get('warnings', []),
                'cpp_path': func_info['cpp_path'],
                'json_path': func_info['json_path'],
                'cached': True,
            }
            cache_hits += 1
        else:
            pending_compile.append((func_info, cache_key, cache_key_path))

    if cache_hits:
        log_info("  Cache hits: %d/%d (skipping clang invocation)" %
                 (cache_hits, total))

    completed = cache_hits

    pending_json_updates = []
    if pending_compile:
        with ThreadPoolExecutor(max_workers=num_threads) as executor:
            # Submit compilation tasks
            future_to_func = {}
            for func_info, cache_key, cache_key_path in pending_compile:
                future = executor.submit(
                    compile_function_cpp, func_info['cpp_path'], include_dir,
                    compiler, 60, repo_dir, pch_path)
                future_to_func[future] = (func_info, cache_key, cache_key_path)

            for future in as_completed(future_to_func):
                func_info, cache_key, cache_key_path = future_to_func[future]
                func_name = func_info['name']

                try:
                    compile_result = future.result()
                    compilation_status = {
                        'success': compile_result['success'],
                        'errors': compile_result['errors'],
                        'warnings': compile_result['warnings'],
                    }
                except Exception as e:
                    compilation_status = {
                        'success': False,
                        'errors': [{
                            'line': 0,
                            'column': 0,
                            'message': 'Exception: %s' % str(e),
                            'category': 'other',
                        }],
                        'warnings': [],
                    }

                # Update sidecar cache on success so the next export can skip
                # this function if the source/flags/PCH are unchanged. Drop
                # any prior entry on failure to force a re-run after fixes.
                if compilation_status['success'] and cache_key:
                    compile_cache[cache_key_path] = {
                        'compile_hash': cache_key,
                        'errors': compilation_status['errors'],
                        'warnings': compilation_status['warnings'],
                    }
                else:
                    compile_cache.pop(cache_key_path, None)

                results[func_name] = {
                    'success': compilation_status['success'],
                    'errors': compilation_status['errors'],
                    'warnings': compilation_status['warnings'],
                    'cpp_path': func_info['cpp_path'],
                    'json_path': func_info['json_path'],
                }

                # Queue JSON update for later (avoid I/O bottleneck in completion loop)
                pending_json_updates.append((func_info['json_path'], compilation_status))

                completed += 1
                if progress_callback:
                    progress_callback(completed, total)

                # Progress logging
                if completed % 100 == 0:
                    log_info("  Compiled %d/%d functions..." % (completed, total))

    # Batch update JSON files in parallel after all compilations complete
    if pending_json_updates:
        log_info("  Updating %d JSON files with compilation status..." % len(pending_json_updates))
        with ThreadPoolExecutor(max_workers=num_threads) as json_executor:
            json_futures = [
                json_executor.submit(update_function_json_with_compilation, json_path, status)
                for json_path, status in pending_json_updates
            ]
            # Wait for all JSON updates to complete
            for future in as_completed(json_futures):
                try:
                    future.result()
                except Exception:
                    pass  # Errors already logged in update function

    # Persist the sidecar cache so the next export can short-circuit
    # unchanged functions. Best-effort — failures don't block the export.
    _save_compile_cache(cache_path, compile_cache)

    return results


# =============================================================================
# JSON Update Functions
# =============================================================================

def update_function_json_with_compilation(json_path, compilation_status):
    """Update a function's JSON file with compilation status.

    Args:
        json_path: Path to the function's .json file
        compilation_status: Dict with success, errors, warnings

    Returns:
        True if successful, False otherwise
    """
    try:
        # Load existing JSON
        with open(json_path, 'r') as f:
            data = json.load(f)

        # The compile_hash lives in the sidecar cache (gitignored), not here —
        # PCH bytes are machine-specific, so embedding the hash would create
        # constant churn on these git-tracked JSONs across machines.
        data['compilation_status'] = {
            'success': compilation_status.get('success', False),
            'errors': compilation_status.get('errors', []),
            'warnings': compilation_status.get('warnings', []),
        }

        # Write back
        with open(json_path, 'w') as f:
            json.dump(data, f, indent=2, sort_keys=True)

        return True

    except Exception as e:
        log_info("Failed to update %s with compilation status: %s" % (json_path, str(e)))
        return False


def update_all_function_jsons(src_dir, compilation_results):
    """Update all function JSON files with compilation status.

    Args:
        src_dir: Source directory containing function files
        compilation_results: Dict from compile_all_functions()

    Returns:
        Tuple of (updated_count, failed_count)
    """
    updated = 0
    failed = 0

    for func_name, result in compilation_results.items():
        cpp_path = result.get('cpp_path')
        if not cpp_path:
            continue

        # Derive JSON path from cpp path (strip variant suffix, then extension)
        json_path = re.sub(r'\.(keep|mmx|byval)\.(cpp|c)$', '.json', cpp_path)
        if not json_path.endswith('.json'):
            json_path = re.sub(r'\.(cpp|c)$', '.json', json_path)
        if not os.path.exists(json_path):
            continue

        if update_function_json_with_compilation(json_path, result):
            updated += 1
        else:
            failed += 1

    log_info("Updated %d function JSON files with compilation status (%d failed)" % (updated, failed))
    return (updated, failed)


# =============================================================================
# Main Entry Point for Exporter Integration
# =============================================================================

def compile_functions_after_export(pseudocode_dir, compiler=DEFAULT_COMPILER, num_threads=8, reports_dir=None, repo_dir=None):
    """Main entry point for function compilation after export.

    This function should be called from export_pseudocode() after all
    function files have been written.

    Args:
        pseudocode_dir: Base pseudocode directory (contains src/ and include/)
        compiler: Compiler to use
        num_threads: Number of parallel compilation threads
        reports_dir: Directory to write reports (defaults to pseudocode_dir)
        repo_dir: Optional repo root for normalizing paths in error messages

    Returns:
        Dict with summary statistics:
            total, successful, failed, success_rate
    """
    src_dir = os.path.join(pseudocode_dir, "src")
    include_dir = os.path.join(pseudocode_dir, "include")

    if not os.path.isdir(src_dir):
        log_info("Function compilation: src directory not found at %s" % src_dir)
        return None

    if not os.path.isdir(include_dir):
        log_info("Function compilation: include directory not found at %s" % include_dir)
        return None

    # Compile all functions (this also updates JSON files with compilation status)
    log_info("Starting function compilation verification...")
    results = compile_all_functions(
        src_dir, include_dir,
        compiler=compiler,
        num_threads=num_threads,
        skip_dirs=['globals', 'crt', 'entry'],  # Skip globals, CRT, and entry directories
        repo_dir=repo_dir
    )

    if not results:
        log_info("No functions compiled")
        return None

    # Calculate summary
    total = len(results)
    successful = sum(1 for r in results.values() if r.get('success', False))
    failed = total - successful
    success_rate = (successful * 100.0 / total) if total > 0 else 0

    log_info("Function compilation complete:")
    log_info("  Total compiled: %d" % total)
    log_info("  Successful: %d (%.1f%%)" % (successful, success_rate))
    log_info("  Failed: %d" % failed)

    # Generate progress visualizations
    if reports_dir is None:
        reports_dir = pseudocode_dir

    svg_path = os.path.join(reports_dir, "compilation_progress.svg")
    create_compilation_overview_svg(results, svg_path)

    all_files_svg_path = os.path.join(reports_dir, "all_files_compilation.svg")
    create_all_files_compilation_svg(results, src_dir, all_files_svg_path)

    return {
        'total': total,
        'successful': successful,
        'failed': failed,
        'success_rate': success_rate,
    }
