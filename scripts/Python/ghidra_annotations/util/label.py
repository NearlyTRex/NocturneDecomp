import os
import re
from ghidra_annotations.util.log import *
from ghidra_annotations.util.namespace import *
from ghidra_annotations.util.string import is_string_data_type_obj
from ghidra_annotations.util.string import normalize_string_name
from ghidra_annotations.util.string import sanitize_c_identifier
from ghidra.program.model.data import Array
from ghidra.program.model.data import BuiltInDataType
from ghidra.program.model.data import DefaultDataType
from ghidra.program.model.data import Pointer
from ghidra.program.model.data import TypeDef
from ghidra.program.model.symbol import SourceType

def get_data_label_address_suffix(data_addr):
    addr_text = data_addr.toString().replace("0x", "")
    addr_text = addr_text.replace(":", "_")
    return addr_text.lower()

def get_data_label_type_name(type_obj, max_length = 40):

    # Peel off array and pointer wrappers, collecting a suffix for each level
    suffixes = []
    while True:

        # Typedefs are named deliberately, so keep the typedef name as-is
        if isinstance(type_obj, TypeDef):
            break
        elif isinstance(type_obj, Array):
            suffixes.append("ARRAY")
            type_obj = type_obj.getDataType()
        elif isinstance(type_obj, Pointer):
            suffixes.append("PTR")
            type_obj = type_obj.getDataType()
        else:
            break

        # A pointer with no target type (plain "pointer") has nothing left to peel
        if type_obj is None:
            return "_".join(suffixes)[:max_length]

    # Build the base name from the type's display name
    base_name = type_obj.getDisplayName()
    base_name = re.sub(r'\[[^\]]*\]', '', base_name)
    base_name = re.sub(r'[^0-9a-zA-Z]', '_', base_name)
    base_name = re.sub(r'_+', '_', base_name).strip('_')

    # Primitives are uppercased, custom types keep the casing they were named with
    if isinstance(type_obj, BuiltInDataType):
        base_name = base_name.upper()

    # Join base and suffixes, innermost qualifier first
    parts = [base_name] + list(reversed(suffixes))
    return "_".join([part for part in parts if part])[:max_length]

def get_data_label_name(data, addr_suffix):

    # Get applied data type
    type_obj = data.getDataType()
    if type_obj is None:
        return None

    # Strings get the same naming as the create/replace string script
    if is_string_data_type_obj(type_obj):
        string_value = data.getValue()
        if string_value:
            string_name = normalize_string_name(str(string_value), max_length = 24)
            return sanitize_c_identifier("s_%s_%s" % (string_name, addr_suffix))

    # Everything else is named after its type
    type_name = get_data_label_type_name(type_obj)
    if not type_name:
        return None
    return sanitize_c_identifier("g_%s_%s" % (type_name, addr_suffix))

def has_user_label(symbol_table, data_addr):
    symbol = symbol_table.getPrimarySymbol(data_addr)
    if symbol is None:
        return False
    if symbol.isDynamic():
        return False
    if symbol.getSource() == SourceType.DEFAULT:
        return False
    return True

def create_label_for_data(currentProgram, data, label_namespace = None):
    try:

        # Get current program data
        symbol_table = currentProgram.getSymbolTable()
        data_addr = data.getMinAddress()

        # Only applied types get a label, undefined bytes have nothing to name
        if not data.isDefined() or isinstance(data.getDataType(), DefaultDataType):
            log_info("Skipping %s, no data type applied" % data_addr)
            return False

        # Never clobber an existing label
        if has_user_label(symbol_table, data_addr):
            log_info("Skipping %s, already labeled '%s'" % (data_addr, symbol_table.getPrimarySymbol(data_addr).getName()))
            return False

        # Build the label from the data type and address
        data_label = get_data_label_name(data, get_data_label_address_suffix(data_addr))
        if not data_label:
            log_error("Failed to derive a label for data at %s" % data_addr)
            return False

        # Create new data label
        if label_namespace is None:
            label_namespace = get_or_create_namespace(currentProgram, "Global")
        log_info("Creating label '%s' at %s (%s)" % (data_label, data_addr, data.getDataType().getDisplayName()))
        symbol_table.createLabel(data_addr, data_label, label_namespace, SourceType.USER_DEFINED)
        return True
    except Exception as e:
        log_error("Failed to create label at %s: %s" % (data.getMinAddress(), e))
        return False

def create_label_at_address(currentProgram, data_addr):

    # Get the defined data covering the address, so a cursor inside an array or
    # struct still labels the containing item
    listing = currentProgram.getListing()
    data = listing.getDataContaining(data_addr)
    if data is None:
        log_info("No data found at %s" % data_addr)
        return 0
    return 1 if create_label_for_data(currentProgram, data) else 0

def create_labels_in_range(currentProgram, address_set):

    # Label every defined item in the selection
    listing = currentProgram.getListing()
    label_namespace = get_or_create_namespace(currentProgram, "Global")
    created_count = 0
    for data in listing.getDefinedData(address_set, True):
        if create_label_for_data(currentProgram, data, label_namespace):
            created_count += 1
    return created_count
