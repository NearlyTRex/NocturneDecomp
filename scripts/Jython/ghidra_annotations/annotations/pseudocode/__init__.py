# Pseudocode export submodules
# This package contains modularized components for pseudocode export functionality

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
    escape_for_c_string,
    sanitize_for_ascii,
    sanitize_file_content,
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
    calculate_complexity_metrics
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
    get_export_category_path,
    export_individual_game_files,
    format_field_declaration,
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
from ghidra_annotations.annotations.pseudocode.analysis import (
    generate_analysis_report
)
from ghidra_annotations.annotations.pseudocode.cleanup import (
    delete_pseudocode
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
    get_remaining_suspects_after_transforms
)
from ghidra_annotations.annotations.pseudocode.exporter import (
    export_pseudocode
)
