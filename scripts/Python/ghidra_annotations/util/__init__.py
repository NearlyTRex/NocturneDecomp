# The helpers the annotation exporters share, gathered so `from
# ghidra_annotations.util import name` reaches any of them. Only the helpers
# themselves are exported, never what the helper modules import for their own
# use; a module that needs os or a Ghidra class imports it itself.

from ghidra_annotations.util.annotations import (
    GENERATED_HEADER_NOTICE,
    clean_data,
    cleanup_stale_files,
    load_json,
    load_json_file,
    load_json_files,
    make_dirs,
    save_json,
    save_json_file,
    save_json_files,
    with_generated_notice,
    write_if_changed,
)
from ghidra_annotations.util.data_type import (
    collect_type_dependencies_with_context,
    collect_typedef_deps,
    get_ghidra_primitive_types,
    get_primitive_data_types,
    is_standard_ghidra_category,
    normalize_data_type_name,
    resolve_circular_dependencies,
    resolve_data_type_name,
    resolve_data_type_obj,
    should_track_as_dependency,
)
from ghidra_annotations.util.functions import (
    get_function_name,
    is_function_address,
    is_likely_function_prologue,
)
from ghidra_annotations.util.label import (
    create_label_at_address,
    create_label_for_data,
    create_labels_in_range,
    get_data_label_address_suffix,
    get_data_label_name,
    get_data_label_type_name,
    has_user_label,
)
from ghidra_annotations.util.log import (
    get_logger,
    log_error,
    log_info,
    log_warning,
    setup_logging,
)
from ghidra_annotations.util.memory import (
    disassemble_at_addr,
    get_addr_obj,
    get_pointer_size,
    is_addr_disassembled,
    parse_address,
    read_pointer_at_address,
)
from ghidra_annotations.util.namespace import get_or_create_namespace
from ghidra_annotations.util.parallel import (
    DEFAULT_NUM_THREADS,
    create_address_set,
    get_memory_ranges,
    parallel_scan_ranges,
)
from ghidra_annotations.util.string import (
    CPP_KEYWORDS,
    apply_string_charset,
    create_or_replace_string,
    detect_string_charset,
    extract_string_value,
    get_string_data_type_classes,
    get_string_data_type_names,
    get_string_data_type_obj,
    get_string_types,
    is_string_data_type_obj,
    normalize_string_name,
    read_ascii_string,
    read_likely_string,
    read_utf16le_string,
    sanitize_c_identifier,
)

__all__ = [
    "CPP_KEYWORDS", "DEFAULT_NUM_THREADS", "GENERATED_HEADER_NOTICE",
    "apply_string_charset", "clean_data", "cleanup_stale_files", "collect_type_dependencies_with_context",
    "collect_typedef_deps", "create_address_set", "create_label_at_address", "create_label_for_data",
    "create_labels_in_range", "create_or_replace_string", "detect_string_charset", "disassemble_at_addr",
    "extract_string_value", "get_addr_obj", "get_data_label_address_suffix", "get_data_label_name",
    "get_data_label_type_name", "get_function_name", "get_ghidra_primitive_types", "get_logger",
    "get_memory_ranges", "get_or_create_namespace", "get_pointer_size", "get_primitive_data_types",
    "get_string_data_type_classes", "get_string_data_type_names", "get_string_data_type_obj",
    "get_string_types", "has_user_label", "is_addr_disassembled", "is_function_address",
    "is_likely_function_prologue", "is_standard_ghidra_category", "is_string_data_type_obj", "load_json",
    "load_json_file", "load_json_files", "log_error", "log_info", "log_warning", "make_dirs",
    "normalize_data_type_name", "normalize_string_name", "parallel_scan_ranges", "parse_address",
    "read_ascii_string", "read_likely_string", "read_pointer_at_address", "read_utf16le_string",
    "resolve_circular_dependencies", "resolve_data_type_name", "resolve_data_type_obj",
    "sanitize_c_identifier", "save_json", "save_json_file", "save_json_files", "setup_logging",
    "should_track_as_dependency", "with_generated_notice", "write_if_changed",
]
