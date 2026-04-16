# Output file generation for pseudocode export
# Provides file writing for .cpp, .asm, and .json files

import os
import re
import json
from ghidra_annotations.util import make_dirs, write_if_changed
from ghidra_annotations.util.log import log_info
from ghidra_annotations.annotations.pseudocode.strings import sanitize_string
from ghidra_annotations.annotations.pseudocode.functions import (
    extract_virtual_filename, extract_cpp_function_name, generate_function_prototype
)
from ghidra_annotations.annotations.pseudocode.pcode import (
    generate_pcode_file_content, create_pcode_summary
)


def create_pseudocode_file_content(
    func_name, func_addr, func_addr_range, func_convention,
    func_signature, decompiled_code, assembly_code,
    func_xrefs, func_globals, func_calls):
    """Create the content for a combined pseudocode file (legacy format).

    Args:
        func_name: Function name
        func_addr: Function address
        func_addr_range: Function address range
        func_convention: Calling convention
        func_signature: Function signature
        decompiled_code: Decompiled C code
        assembly_code: Assembly code
        func_xrefs: Cross-references
        func_globals: Referenced globals
        func_calls: Called functions

    Returns:
        File content as string
    """
    # Build XREFS section
    xrefs_section = ""
    if func_xrefs:
        xrefs_section = "// Cross-references:\n"
        for xref in func_xrefs:
            xref_line = "//   %s (%s) at %s [%s]\n" % (
                sanitize_string(xref['name']),
                xref['addr'],
                xref['from_addr'],
                xref['type'])
            xrefs_section += xref_line

    # Build GLOBALS section
    globals_section = ""
    if func_globals:
        globals_section = "// Globals:\n"
        for global_ref in func_globals:
            if global_ref.get('value') is not None:
                global_line = "//   %s %s = %s\n" % (
                    sanitize_string(global_ref['type']),
                    sanitize_string(global_ref['name']),
                    sanitize_string(global_ref['value']))
            else:
                global_line = "//   %s %s\n" % (
                    sanitize_string(global_ref['type']),
                    sanitize_string(global_ref['name']))
            globals_section += global_line

    # Build FUNCTION CALLS section
    calls_section = ""
    if func_calls:
        calls_section = "// Function calls:\n"
        for call in func_calls:
            call_line = "//   %s\n" % sanitize_string(call['name'])
            calls_section += call_line

    # Function template - only include sections that have content
    template_parts = [
        "// Name: {func_name}",
        "// Address: {func_addr}",
        "// Address Range: {func_addr_range}",
        "// Convention: {func_convention}",
        "// Signature: {func_signature}"
    ]

    # Add sections only if they have content
    if xrefs_section:
        template_parts.append("{xrefs_section}")
    if globals_section:
        template_parts.append("{globals_section}")
    if calls_section:
        template_parts.append("{calls_section}")

    # Add the rest of the template
    template_parts.extend([
        "",
        "#include \"nocturne.h\"",
        "{func_decomp_code}",
        "// Assembly code:",
        "{func_asm_code}"
    ])
    template = "\n".join(template_parts)

    # Format from template
    # Use sanitize_string with preserve_newlines=True for multi-line code blocks
    safe_decompiled = sanitize_string(decompiled_code, preserve_newlines=True)
    safe_assembly = sanitize_string(assembly_code, preserve_newlines=True)
    # Use sanitize_string (default) for single-line metadata (escapes special chars)
    safe_signature = sanitize_string(func_signature)
    safe_func_name = sanitize_string(func_name)
    safe_convention = sanitize_string(func_convention or "unknown")
    safe_addr_range = sanitize_string(str(func_addr_range))
    return template.format(
        func_name=safe_func_name,
        func_addr=func_addr,
        func_addr_range=safe_addr_range,
        func_convention=safe_convention,
        func_signature=safe_signature,
        xrefs_section=xrefs_section.rstrip(),
        globals_section=globals_section.rstrip(),
        calls_section=calls_section.rstrip(),
        func_decomp_code=safe_decompiled,
        func_asm_code=safe_assembly).strip()


def create_lean_cpp_content(func_name, func_addr, func_addr_range, func_convention,
                            func_signature, decompiled_code):
    """Create lean .cpp file content with just the pseudocode.

    Args:
        func_name: Function name
        func_addr: Function address
        func_addr_range: Function address range
        func_convention: Calling convention
        func_signature: Function signature
        decompiled_code: Decompiled C code

    Returns:
        File content as string
    """
    # Use sanitize_string with preserve_newlines=True for multi-line code blocks
    safe_decompiled = sanitize_string(decompiled_code, preserve_newlines=True)
    # Use sanitize_string (default) for single-line metadata
    safe_signature = sanitize_string(func_signature)
    safe_func_name = sanitize_string(func_name)
    safe_convention = sanitize_string(func_convention or "unknown")
    safe_addr_range = sanitize_string(str(func_addr_range))
    template_parts = [
        "// Name: {func_name}",
        "// Address: {func_addr}",
        "// Address Range: {func_addr_range}",
        "// Convention: {func_convention}",
        "// Signature: {func_signature}",
        "",
        "#include \"nocturne.h\"",
        "{func_decomp_code}"
    ]
    template = "\n".join(template_parts)
    return template.format(
        func_name=safe_func_name,
        func_addr=func_addr,
        func_addr_range=safe_addr_range,
        func_convention=safe_convention,
        func_signature=safe_signature,
        func_decomp_code=safe_decompiled).strip()


def create_asm_content(func_name, func_addr, func_addr_range, func_signature, func_convention,
                       assembly_code, stack_frame, func_xrefs, func_globals, func_calls):
    """Create richly annotated .asm file content.

    Args:
        func_name: Function name
        func_addr: Function address
        func_addr_range: Function address range
        func_signature: Function signature
        func_convention: Calling convention
        assembly_code: Assembly code
        stack_frame: Stack frame info
        func_xrefs: Cross-references
        func_globals: Referenced globals
        func_calls: Called functions

    Returns:
        File content as string
    """
    safe_func_name = sanitize_string(func_name)
    # Use sanitize_string with preserve_newlines=True for multi-line assembly
    safe_assembly = sanitize_string(assembly_code, preserve_newlines=True)
    safe_addr_range = sanitize_string(str(func_addr_range))
    safe_signature = sanitize_string(func_signature) if func_signature else "unknown"
    asm_lines = []

    # Function Header Block
    asm_lines.append("; " + "*" * 77)
    asm_lines.append("; " + " " * 30 + "FUNCTION")
    asm_lines.append("; " + "*" * 77)
    asm_lines.append("; %s" % safe_signature)
    asm_lines.append(";")

    # Parameters and locals from stack frame
    if stack_frame:
        params = []
        locals_list = []
        for var in stack_frame.get('variables', []):
            var_type = var.get('type', 'undefined4')
            var_name = var.get('name', 'unknown')
            var_offset = var.get('offset', 0)
            var_size = var.get('size', 4)

            if var_offset >= 0:
                params.append("; %-16s Stack[0x%x]:%d   %s" % (var_type, var_offset, var_size, var_name))
            else:
                locals_list.append("; %-16s Stack[-0x%x]:%d  %s" % (var_type, abs(var_offset), var_size, var_name))

        if params:
            asm_lines.append("; Parameters:")
            asm_lines.extend(params)
        if locals_list:
            asm_lines.append("; Local Variables:")
            asm_lines.extend(locals_list)
        asm_lines.append(";")

    # Cross-references to this function
    if func_xrefs:
        xref_count = len(func_xrefs)
        asm_lines.append("; XREF[%d]:" % xref_count)
        for xref in func_xrefs[:10]:
            asm_lines.append(";   %s at %s" % (sanitize_string(xref.get('name', 'unknown')), xref.get('from_addr', '?')))
        if xref_count > 10:
            asm_lines.append(";   ... and %d more" % (xref_count - 10))
        asm_lines.append(";")

    # Globals referenced
    if func_globals:
        asm_lines.append("; Referenced Globals:")
        for glob in func_globals[:15]:
            glob_type = sanitize_string(glob.get('type', 'undefined'))
            glob_name = sanitize_string(glob.get('name', 'unknown'))
            glob_value = glob.get('value')
            if glob_value:
                asm_lines.append(";   %s %s = %s" % (glob_type, glob_name, sanitize_string(str(glob_value))))
            else:
                asm_lines.append(";   %s %s" % (glob_type, glob_name))
        if len(func_globals) > 15:
            asm_lines.append(";   ... and %d more" % (len(func_globals) - 15))
        asm_lines.append(";")

    # Functions called
    if func_calls:
        asm_lines.append("; Called Functions:")
        for call in func_calls[:15]:
            asm_lines.append(";   %s" % sanitize_string(call.get('name', 'unknown')))
        if len(func_calls) > 15:
            asm_lines.append(";   ... and %d more" % (len(func_calls) - 15))
        asm_lines.append(";")

    asm_lines.append("; " + "*" * 77)
    asm_lines.append("")
    asm_lines.append("section .text")
    asm_lines.append("")

    # Assembly Instructions
    for line in safe_assembly.split('\n'):
        line = line.strip()
        if not line:
            asm_lines.append("")
            continue

        # Remove the leading // from assembly lines
        if line.startswith('// '):
            line = line[3:]
        elif line.startswith('//'):
            line = line[2:]

        # Parse the line
        if line.startswith('Label: '):
            label_name = line[7:]
            asm_lines.append("")
            asm_lines.append("%s:" % label_name)
        elif line.startswith('XREF to: '):
            asm_lines.append("        ; %s" % line)
        elif ':' in line and not line.startswith(' '):
            colon_pos = line.find(': ')
            if colon_pos > 0:
                addr_part = line[:colon_pos].strip()
                rest = line[colon_pos + 2:]

                if '  ; ' in rest:
                    instr_part, comment_part = rest.split('  ; ', 1)
                    asm_lines.append("    %-35s ; %s | %s" % (instr_part.strip(), addr_part, comment_part))
                else:
                    asm_lines.append("    %-35s ; %s" % (rest.strip(), addr_part))
            else:
                asm_lines.append("    %s" % line)
        else:
            if line.strip():
                asm_lines.append("        ; %s" % line)

    return "\n".join(asm_lines)


def create_function_json(func_name, func_addr, func_addr_range, func_convention,
                         func_signature, decompiled_code, assembly_code,
                         func_xrefs, func_globals, func_calls, stack_frame, suspects, complexity,
                         existing_replacements=None, stack_patterns=None, param_estimates=None,
                         vtable_info=None, existing_pcode_overrides=None, resolved_suspects=None,
                         is_ebp_frame=False, existing_proto_overrides=None,
                         existing_decompiler_fixes=None, compilation_status=None,
                         chunked=False):
    """Create function metadata JSON.

    Args:
        func_name: Function name
        func_addr: Function address
        func_addr_range: Function address range
        func_convention: Calling convention
        func_signature: Function signature
        decompiled_code: Decompiled C code
        assembly_code: Assembly code
        func_xrefs: Cross-references
        func_globals: Referenced globals
        func_calls: Called functions
        stack_frame: Stack frame info
        suspects: Suspect patterns found
        complexity: Complexity metrics
        existing_replacements: Optional list of custom replacements to preserve
        stack_patterns: Optional stack manipulation patterns that affect decompilation
        param_estimates: Optional parameter estimation from call site analysis
        vtable_info: Optional vtable membership info (class, offset, etc.)
        existing_pcode_overrides: Optional dict of pcode overrides to preserve
        resolved_suspects: Optional list of suspects fixed by pcode overrides
        is_ebp_frame: Whether function uses standard EBP frame prologue
        existing_proto_overrides: Optional list of proto overrides to preserve
        existing_decompiler_fixes: Optional list of decompiler fixes to preserve
        compilation_status: Optional compilation verification status dict
        chunked: Whether chunk transform is enabled for this function

    Returns:
        Dictionary for JSON serialization
    """
    addr_range_str = str(func_addr_range)

    # Extract ranges from format like "[[0055a810, 0055c9e6] [0055ca7e, 0055fef3]]"
    ranges = []
    range_matches = re.findall(r'\[([0-9a-fA-F]+),\s*([0-9a-fA-F]+)\]', addr_range_str)
    for start, end in range_matches:
        ranges.append([start.strip(), end.strip()])

    # Build JSON
    function_obj = {
        "name": func_name,
        "address": func_addr,
        "address_range": ranges if ranges else [[func_addr, func_addr]],
        "convention": func_convention or "unknown",
        "signature": func_signature
    }
    # Only include is_ebp_frame if true (avoid cluttering JSON with false values)
    if is_ebp_frame:
        function_obj["is_ebp_frame"] = True
    function_json = {
        "function": function_obj,
        "stack_frame": stack_frame,
        "suspects": suspects,
        "complexity": complexity,
        "cross_references": func_xrefs if func_xrefs else [],
        "globals": func_globals if func_globals else [],
        "function_calls": func_calls if func_calls else []
    }
    # Preserve pcode overrides if they exist (must come early for loader)
    if existing_pcode_overrides:
        function_json["pcode_overrides"] = existing_pcode_overrides
    # Preserve proto_overrides if they exist
    if existing_proto_overrides:
        function_json["proto_overrides"] = existing_proto_overrides
    # Preserve decompiler_fixes if they exist
    if existing_decompiler_fixes:
        function_json["decompiler_fixes"] = existing_decompiler_fixes
    # Preserve custom replacements if they exist
    if existing_replacements:
        function_json["replacements"] = existing_replacements
    # Include stack manipulation patterns that affect decompilation quality
    if stack_patterns:
        function_json["stack_patterns"] = stack_patterns
    # Include parameter estimation from call site analysis
    if param_estimates:
        function_json["param_estimates"] = param_estimates
    # Include vtable membership info (class hierarchy metadata)
    if vtable_info:
        function_json["vtable_info"] = vtable_info
    # Include resolved suspects (p-code suspects fixed by overrides)
    if resolved_suspects:
        function_json["resolved_suspects"] = resolved_suspects
    # Include compilation verification status if available
    if compilation_status:
        function_json["compilation_status"] = compilation_status
    # Preserve chunked flag if enabled
    if chunked:
        function_json["chunked"] = True
    return function_json


def generate_function_file_contents(output_base_path, source_filename, func_name, func_addr,
                                     func_addr_range, func_convention, func_signature,
                                     decompiled_code, assembly_code, func_xrefs, func_globals,
                                     func_calls, stack_frame, suspects, complexity,
                                     existing_replacements=None, stack_patterns=None,
                                     param_estimates=None, vtable_info=None, pcode_data=None,
                                     existing_pcode_overrides=None, resolved_suspects=None,
                                     is_ebp_frame=False, existing_proto_overrides=None,
                                     existing_decompiler_fixes=None, compilation_status=None,
                                     mmx_decompiled_code=None,
                                     byval_decompiled_code=None,
                                     chunked_decompiled_code=None,
                                     chunked=False):
    """Generate file contents for a function without writing to disk.

    Args:
        output_base_path: Base directory for output
        source_filename: Source file name
        func_name: Function name
        func_addr: Function address
        func_addr_range: Function address range
        func_convention: Calling convention
        func_signature: Function signature
        decompiled_code: Decompiled C code
        assembly_code: Assembly code
        func_xrefs: Cross-references
        func_globals: Referenced globals
        func_calls: Called functions
        stack_frame: Stack frame info
        suspects: Suspect patterns found
        complexity: Complexity metrics
        existing_replacements: Optional list of custom replacements to preserve in JSON
        stack_patterns: Optional stack manipulation patterns that affect decompilation
        param_estimates: Optional parameter estimation from call site analysis
        vtable_info: Optional vtable membership info (class, offset, etc.)
        pcode_data: Optional P-code data for the function (list of instruction P-code)
        existing_pcode_overrides: Optional dict of pcode overrides to preserve in JSON
        resolved_suspects: Optional list of suspects that were fixed by pcode overrides
        is_ebp_frame: Whether function uses standard EBP frame prologue
        existing_proto_overrides: Optional list of proto overrides to preserve in JSON
        existing_decompiler_fixes: Optional list of decompiler fixes to preserve in JSON
        compilation_status: Optional compilation verification status dict
        mmx_decompiled_code: Optional MMX inline asm version of the decompiled code.
            When provided, generates an additional .mmx.cpp/.mmx.c file alongside
            the regular .cpp (which keeps the original pseudocode).
        byval_decompiled_code: Optional by-value struct passing inline asm version.
            When provided, generates an additional .byval.cpp/.byval.c file alongside
            the regular .cpp.
        chunked_decompiled_code: Optional chunked version that splits the function
            into a context struct + static helper functions. When provided, generates
            an additional .chunked.cpp/.chunked.c file alongside the regular .cpp.
        chunked: Whether chunk transform is enabled (preserved in JSON).

    Returns:
        Dictionary with paths and contents: {cpp_path, cpp_content, asm_path, asm_content,
                                            json_path, json_content, pcode_path, pcode_content,
                                            mmx_cpp_path, mmx_cpp_content,
                                            byval_cpp_path, byval_cpp_content}
    """
    # Determine base path without extension
    if source_filename.endswith('.cpp'):
        base_name = source_filename[:-4]
    elif source_filename.endswith('.c'):
        base_name = source_filename[:-2]
    else:
        base_name = source_filename

    # Determine output path
    cpp_path = os.path.join(output_base_path, source_filename)
    asm_path = os.path.join(output_base_path, base_name + '.asm')
    json_path = os.path.join(output_base_path, base_name + '.json')
    pcode_path = os.path.join(output_base_path, base_name + '.pcode')
    # Determine .mmx path if MMX content is provided
    mmx_ext = '.mmx.cpp' if source_filename.endswith('.cpp') else '.mmx.c'
    mmx_cpp_path = os.path.join(output_base_path, base_name + mmx_ext) if mmx_decompiled_code else None
    # Determine .byval path if by-value struct passing content is provided
    byval_ext = '.byval.cpp' if source_filename.endswith('.cpp') else '.byval.c'
    byval_cpp_path = os.path.join(output_base_path, base_name + byval_ext) if byval_decompiled_code else None
    # Determine .chunked path if chunked content is provided
    chunked_ext = '.chunked.cpp' if source_filename.endswith('.cpp') else '.chunked.c'
    chunked_cpp_path = os.path.join(output_base_path, base_name + chunked_ext) if chunked_decompiled_code else None
    result = {
        'cpp_path': cpp_path,
        'cpp_content': None,
        'asm_path': asm_path,
        'asm_content': None,
        'json_path': json_path,
        'json_content': None,
        'pcode_path': pcode_path,
        'pcode_content': None,
        'mmx_cpp_path': mmx_cpp_path,
        'mmx_cpp_content': None,
        'byval_cpp_path': byval_cpp_path,
        'byval_cpp_content': None,
        'chunked_cpp_path': chunked_cpp_path,
        'chunked_cpp_content': None
    }

    # Generate lean .cpp content
    try:
        cpp_content = create_lean_cpp_content(
            func_name, func_addr, func_addr_range, func_convention,
            func_signature, decompiled_code)
        result['cpp_content'] = cpp_content + "\n"
    except Exception as e:
        log_info("Failed to generate .cpp content for %s: %s" % (source_filename, str(e)))
        return None

    # Generate .mmx.cpp content if MMX inline asm version is provided
    if mmx_decompiled_code:
        try:
            mmx_cpp_content = create_lean_cpp_content(
                func_name, func_addr, func_addr_range, func_convention,
                func_signature, mmx_decompiled_code)
            result['mmx_cpp_content'] = mmx_cpp_content + "\n"
        except Exception as e:
            log_info("Failed to generate .mmx.cpp content for %s: %s" % (source_filename, str(e)))

    # Generate .byval.cpp content if by-value struct passing inline asm version is provided
    if byval_decompiled_code:
        try:
            byval_cpp_content = create_lean_cpp_content(
                func_name, func_addr, func_addr_range, func_convention,
                func_signature, byval_decompiled_code)
            result['byval_cpp_content'] = byval_cpp_content + "\n"
        except Exception as e:
            log_info("Failed to generate .byval.cpp content for %s: %s" % (source_filename, str(e)))

    # Generate .chunked.cpp content if chunked version is provided
    if chunked_decompiled_code:
        try:
            chunked_cpp_content = create_lean_cpp_content(
                func_name, func_addr, func_addr_range, func_convention,
                func_signature, chunked_decompiled_code)
            result['chunked_cpp_content'] = chunked_cpp_content + "\n"
        except Exception as e:
            log_info("Failed to generate .chunked.cpp content for %s: %s" % (source_filename, str(e)))

    # Generate .asm content
    try:
        asm_content = create_asm_content(
            func_name, func_addr, func_addr_range, func_signature, func_convention,
            assembly_code, stack_frame, func_xrefs, func_globals, func_calls)
        result['asm_content'] = asm_content + "\n"
    except Exception as e:
        log_info("Failed to generate .asm content for %s: %s" % (base_name + '.asm', str(e)))

    # Generate .json content
    try:
        function_json = create_function_json(
            func_name, func_addr, func_addr_range, func_convention,
            func_signature, decompiled_code, assembly_code,
            func_xrefs, func_globals, func_calls, stack_frame, suspects, complexity,
            existing_replacements, stack_patterns, param_estimates, vtable_info,
            existing_pcode_overrides, resolved_suspects, is_ebp_frame,
            existing_proto_overrides, existing_decompiler_fixes, compilation_status,
            chunked=chunked)
        # Add P-code summary to JSON if available
        if pcode_data:
            function_json['pcode_summary'] = create_pcode_summary(pcode_data)
        result['json_content'] = json.dumps(function_json, indent=2, sort_keys=True)
    except Exception as e:
        log_info("Failed to generate .json content for %s: %s" % (base_name + '.json', str(e)))

    # Generate .pcode content
    if pcode_data:
        try:
            # Check if function has BADSPACEBASE (look in suspects)
            has_badspacebase = any('BADSPACEBASE' in s.get('pattern', '') for s in suspects) if suspects else False
            pcode_content = generate_pcode_file_content(
                func_name, func_addr, func_signature, pcode_data, has_badspacebase)
            result['pcode_content'] = pcode_content + "\n"
        except Exception as e:
            log_info("Failed to generate .pcode content for %s: %s" % (base_name + '.pcode', str(e)))

    return result


def write_function_files(output_base_path, source_filename, func_name, func_addr,
                         func_addr_range, func_convention, func_signature,
                         decompiled_code, assembly_code, func_xrefs, func_globals,
                         func_calls, stack_frame, suspects, complexity, stack_patterns=None):
    """Write all three output files for a function (.cpp, .asm, .json).

    Args:
        output_base_path: Base directory for output
        source_filename: Source file name
        func_name: Function name
        func_addr: Function address
        func_addr_range: Function address range
        func_convention: Calling convention
        func_signature: Function signature
        decompiled_code: Decompiled C code
        assembly_code: Assembly code
        func_xrefs: Cross-references
        func_globals: Referenced globals
        func_calls: Called functions
        stack_frame: Stack frame info
        suspects: Suspect patterns found
        complexity: Complexity metrics
        stack_patterns: Optional stack manipulation patterns that affect decompilation

    Returns:
        True on success, False on failure
    """
    # Generate contents
    contents = generate_function_file_contents(
        output_base_path, source_filename, func_name, func_addr,
        func_addr_range, func_convention, func_signature,
        decompiled_code, assembly_code, func_xrefs, func_globals,
        func_calls, stack_frame, suspects, complexity, None, stack_patterns)

    if not contents or not contents.get('cpp_content'):
        return False

    # Ensure directory exists
    make_dirs(os.path.dirname(contents['cpp_path']))

    # Write files — skip the write when bytes are unchanged so Ninja/ccache
    # don't invalidate TUs after a no-op re-export.
    try:
        write_if_changed(contents['cpp_path'], contents['cpp_content'])
    except Exception as e:
        log_info("Failed to write .cpp file: %s" % str(e))
        return False

    if contents.get('asm_content'):
        try:
            write_if_changed(contents['asm_path'], contents['asm_content'])
        except Exception as e:
            log_info("Failed to write .asm file: %s" % str(e))

    if contents.get('json_content'):
        try:
            write_if_changed(contents['json_path'], contents['json_content'])
        except Exception as e:
            log_info("Failed to write .json file: %s" % str(e))

    return True


def write_batched_files(file_list):
    """Write multiple files in a batch.

    Args:
        file_list: List of (path, content) tuples

    Returns:
        Number of files successfully written
    """
    written = 0
    dirs_created = set()

    for path, content in file_list:
        if not path or not content:
            continue

        # Ensure directory exists (cache to avoid repeated checks)
        dir_path = os.path.dirname(path)
        if dir_path and dir_path not in dirs_created:
            make_dirs(dir_path)
            dirs_created.add(dir_path)

        try:
            write_if_changed(path, content)
            written += 1
        except Exception as e:
            log_info("Batch write failed for %s: %s" % (path, str(e)))

    return written


def export_function_prototypes(currentProgram, pseudocode_dir, function_groups):
    """Export function prototype header files.

    Args:
        currentProgram: The Ghidra program
        pseudocode_dir: Base directory for prototypes
        function_groups: Dictionary mapping virtual filenames to function lists
    """
    prototypes_dir = os.path.join(pseudocode_dir, "prototypes")
    make_dirs(prototypes_dir)

    headers_created = 0
    for virtual_filename, functions in function_groups.items():
        if not virtual_filename:
            continue

        # Create the directory structure
        header_path = os.path.join(prototypes_dir, virtual_filename)
        header_dir = os.path.dirname(header_path)
        make_dirs(header_dir)

        # Generate header content
        content = []
        content.append("#pragma once")
        content.append("")
        content.append("// Function prototypes for %s" % virtual_filename.replace(".h", ".cpp"))
        content.append("// Generated from Ghidra function signatures")
        content.append("")

        # Sort functions by address for consistent output
        sorted_functions = sorted(functions, key=lambda f: f['address'])
        for func_info in sorted_functions:
            original_name = func_info['name']
            cpp_name = extract_cpp_function_name(original_name)
            content.append("// Original: %s" % original_name)
            content.append("// Address: %s" % func_info['address'])
            prototype = generate_function_prototype(func_info['signature'], original_name, cpp_name)
            content.append(prototype)
            content.append("")

        # Write the header file
        try:
            if write_if_changed(header_path, "\n".join(content)):
                log_info("Created prototype header: %s with %d functions" % (virtual_filename, len(functions)))
            headers_created += 1
        except Exception as e:
            log_info("Failed to write prototype header %s: %s" % (virtual_filename, str(e)))
    log_info("Created %d function prototype headers" % headers_created)
