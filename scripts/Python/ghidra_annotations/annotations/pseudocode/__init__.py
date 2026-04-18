# Pseudocode export submodules
# This package contains modularized components for pseudocode export functionality

from ghidra_annotations.annotations.pseudocode.json_cache import JsonCacheManager
from ghidra_annotations.annotations.pseudocode.parallel import (
    DecompilerThreadLocal,
    DecompileResult,
    DecompileWorker,
    DEFAULT_NUM_THREADS,
    PROCESS_BATCH_SIZE
)
from ghidra_annotations.annotations.pseudocode.strings import (
    get_safe_str,
    escape_c_string,
    sanitize_string,
    format_char_array_as_c_strings,
    format_single_char_pointer,
    detect_char_array_pattern,
    format_2d_char_array,
    build_string_map,
    replace_symbol
)
from ghidra_annotations.annotations.pseudocode.suspects import (
    SUSPECT_PATTERNS,
    identify_suspect_lines,
    identify_assembly_suspects,
    calculate_complexity_metrics,
    identify_format_string_mismatch,
    identify_raw_address_constant_suspects,
    identify_unrolled_strcpy_loops,
    identify_unrolled_memcpy_loops
)
from ghidra_annotations.annotations.pseudocode.decompiler import (
    decompile_function_raw,
    generate_decompilation_code,
    build_constants_map,
    replace_constants_in_code,
    export_stack_frame
)
from ghidra_annotations.annotations.pseudocode.assembly import (
    generate_assembly_code,
    generate_assembly_code_rich,
    build_global_symbols_map
)
from ghidra_annotations.annotations.pseudocode.functions import (
    get_function_xrefs,
    get_function_globals,
    get_function_calls,
    estimate_call_site_params,
    extract_virtual_filename,
    extract_cpp_function_name,
    generate_function_prototype,
    generate_source_filename
)
from ghidra_annotations.annotations.pseudocode.globals import (
    extract_globals_and_constants,
    generate_constants_file,
    generate_globals_file,
    split_data_by_address_range,
    generate_globals_cpp_file
)
from ghidra_annotations.annotations.pseudocode.headers import (
    export_header_files,
    is_function_definition_type,
    get_new_export_path,
    export_individual_game_files,
    export_system_grouped_files,
    export_equates_file,
    generate_master_include,
    is_valid_define_name,
    format_field_declaration,
    collect_type_dependencies,
    generate_dependency_includes,
    generate_individual_struct_header,
    generate_function_definitions_header,
    generate_individual_function_definition_header,
    generate_individual_union_header,
    generate_individual_enum_header,
    generate_individual_typedef_header,
    generate_structs_header,
    generate_unions_header,
    generate_enums_header,
    generate_typedefs_header,
    generate_equates_header,
    organize_equates_by_category,
    categorize_equate,
    format_equate_value,
    write_header_file
)
from ghidra_annotations.annotations.pseudocode.output import (
    create_pseudocode_file_content,
    create_lean_cpp_content,
    create_asm_content,
    create_function_json,
    write_function_files,
    export_function_prototypes
)
from ghidra_annotations.annotations.pseudocode.actor_cast_report import (
    generate_actor_cast_report
)
from ghidra_annotations.annotations.pseudocode.analysis import (
    generate_analysis_report,
    create_pie_chart_svg,
    create_progress_bar_svg,
    create_overall_progress_svg,
    create_compilation_overview_svg,
    create_all_files_decompilation_svg,
    create_all_files_compilation_svg
)
from ghidra_annotations.annotations.pseudocode.cleanup import (
    delete_pseudocode
)
from ghidra_annotations.annotations.pseudocode.header_compile import (
    verify_headers,
    verify_headers_after_export,
    get_failed_headers_report,
    verify_cpp_files,
    verify_globals_after_export
)
from ghidra_annotations.annotations.pseudocode.function_compile import (
    compile_function_cpp,
    categorize_error,
    parse_error_output,
    load_function_info_from_json,
    compile_all_functions,
    compile_functions_after_export
)
from ghidra_annotations.annotations.pseudocode.static_analysis import (
    run_static_analysis_after_export,
    analyze_all_functions as analyze_all_functions_static,
    run_clang_analyzer,
    run_cppcheck,
    run_clang_tidy,
)
from ghidra_annotations.annotations.pseudocode.transforms import (
    UNDEFINED_TYPE_REPLACEMENTS,
    UNDEFINED_PTR_CAST_REPLACEMENTS,
    transform_undefined_pointer_casts,
    transform_undefined_types,
    transform_concat_artifacts,
    transform_sub_artifacts,
    transform_sborrow_artifacts,
    apply_all_transforms,
    count_auto_fixable_suspects,
    get_remaining_suspects_after_transforms,
    replacements_cache,
    pcode_overrides_cache
)
from ghidra_annotations.annotations.pseudocode.proto import proto_cache
from ghidra_annotations.annotations.pseudocode.callfixups import callfixups_cache
from ghidra_annotations.annotations.pseudocode.decompiler_fixes import per_function_fixes_cache
from ghidra_annotations.annotations.pseudocode.exporter import (
    export_pseudocode
)
from ghidra_annotations.annotations.pseudocode.vtable_calls import (
    update_function_json_files as update_vtable_indirect_callers
)
