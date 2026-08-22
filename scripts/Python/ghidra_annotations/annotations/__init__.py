from ghidra_annotations.annotations.applied_arrays import *
from ghidra_annotations.annotations.applied_basic_types import *
from ghidra_annotations.annotations.applied_enums import *
from ghidra_annotations.annotations.applied_pointers import *
from ghidra_annotations.annotations.applied_strings import *
from ghidra_annotations.annotations.applied_structs import *
from ghidra_annotations.annotations.applied_unions import *
from ghidra_annotations.annotations.bookmarks import *
from ghidra_annotations.annotations.call_overrides import *
from ghidra_annotations.annotations.comments import *
from ghidra_annotations.annotations.cross_references import *
from ghidra_annotations.annotations.data_types import *
from ghidra_annotations.annotations.entry_points import *
from ghidra_annotations.annotations.equates import *
from ghidra_annotations.annotations.memory_layout import *
from ghidra_annotations.annotations.external_imports import *
from ghidra_annotations.annotations.functions import *
from ghidra_annotations.annotations.metadata import *
from ghidra_annotations.annotations.pseudocode import *
from ghidra_annotations.annotations.symbols_class import *
from ghidra_annotations.annotations.symbols_label import *
from ghidra_annotations.annotations.symbols_namespace import *
from ghidra_annotations.annotations.type_info import *
from ghidra_annotations.annotations.vtables import *
from ghidra_annotations.annotations.switch_tables import *
from ghidra_annotations.annotations.code_caves import *

def delete_annotations(currentProgram, path):
    delete_data_types(currentProgram, path)
    delete_functions(currentProgram, path)
    delete_call_overrides(currentProgram, path)
    delete_comments(currentProgram, path)
    delete_bookmarks(currentProgram, path)
    delete_applied_arrays(currentProgram, path)
    delete_applied_basic_types(currentProgram, path)
    delete_applied_enums(currentProgram, path)
    delete_applied_pointers(currentProgram, path)
    delete_applied_strings(currentProgram, path)
    delete_applied_structs(currentProgram, path)
    delete_applied_unions(currentProgram, path)
    delete_symbols_class(currentProgram, path)
    delete_symbols_label(currentProgram, path)
    delete_symbols_namespace(currentProgram, path)
    delete_equates(currentProgram, path)
    delete_external_imports(currentProgram, path)
    delete_cross_references(currentProgram, path)
    delete_memory_layout(currentProgram, path)
    delete_pseudocode(currentProgram, path)

def export_annotations(currentProgram, folder, strict=False, deep_analysis=False,
                       allow_size_mismatch=False, allow_name_address_mismatch=False,
                       allow_this_ptr_mismatch=False, allow_duplicate_data_types=False):
    export_data_types(currentProgram, folder, allow_duplicates=allow_duplicate_data_types)
    export_functions(currentProgram, folder,
                     allow_name_address_mismatch=allow_name_address_mismatch,
                     allow_this_ptr_mismatch=allow_this_ptr_mismatch)
    export_call_overrides(currentProgram, folder)
    export_comments(currentProgram, folder)
    export_bookmarks(currentProgram, folder)
    export_applied_arrays(currentProgram, folder)
    export_applied_basic_types(currentProgram, folder)
    export_applied_enums(currentProgram, folder)
    export_applied_pointers(currentProgram, folder)
    export_applied_strings(currentProgram, folder)
    export_applied_structs(currentProgram, folder)
    export_applied_unions(currentProgram, folder)
    export_symbols_class(currentProgram, folder)
    export_symbols_label(currentProgram, folder)
    export_symbols_namespace(currentProgram, folder)
    export_equates(currentProgram, folder)
    export_external_imports(currentProgram, folder)
    export_cross_references(currentProgram, folder)
    export_entry_points(currentProgram, folder)
    export_memory_layout(currentProgram, folder)
    export_metadata(currentProgram, folder)
    export_type_info(currentProgram, folder, strict=strict,
                     allow_size_mismatch=allow_size_mismatch)
    export_vtables(currentProgram, folder)
    export_switch_tables(currentProgram, folder)
    export_code_caves(currentProgram, folder)
    export_pseudocode(currentProgram, folder, strict=strict, deep_analysis=deep_analysis)

def import_annotations(currentProgram, folder):
    import_memory_layout(currentProgram, folder)
    import_data_types(currentProgram, folder)
    import_symbols_namespace(currentProgram, folder)
    import_external_imports(currentProgram, folder)
    import_functions(currentProgram, folder)
    import_call_overrides(currentProgram, folder)
    import_applied_enums(currentProgram, folder)
    import_applied_unions(currentProgram, folder)
    import_applied_structs(currentProgram, folder)
    import_applied_arrays(currentProgram, folder)
    import_applied_basic_types(currentProgram, folder)
    import_applied_pointers(currentProgram, folder)
    import_applied_strings(currentProgram, folder)
    import_symbols_class(currentProgram, folder)
    import_symbols_label(currentProgram, folder)
    import_equates(currentProgram, folder)
    import_comments(currentProgram, folder)
    import_bookmarks(currentProgram, folder)
    import_cross_references(currentProgram, folder)
