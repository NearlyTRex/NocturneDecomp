# Post-processing transforms for auto-fixable suspect patterns
# Applies automatic fixes to decompiled code before output

import re


# Type replacement mappings for undefined types
UNDEFINED_TYPE_REPLACEMENTS = {
    'undefined1': 'byte',
    'undefined2': 'ushort',
    'undefined4': 'uint',
    'undefined8': 'ulonglong',
    'undefined': 'byte',
}

# Pointer cast replacements
UNDEFINED_PTR_CAST_REPLACEMENTS = {
    '(undefined1 *)': '(byte *)',
    '(undefined2 *)': '(ushort *)',
    '(undefined4 *)': '(uint *)',
    '(undefined8 *)': '(ulonglong *)',
    '(undefined *)': '(byte *)',
    '(undefined1*)': '(byte*)',
    '(undefined2*)': '(ushort*)',
    '(undefined4*)': '(uint*)',
    '(undefined8*)': '(ulonglong*)',
    '(undefined*)': '(byte*)',
}


def transform_undefined_pointer_casts(code):
    """Replace undefined pointer casts with proper typed casts.

    Args:
        code: Decompiled code string

    Returns:
        Transformed code with undefined casts replaced
    """
    result = code
    for old, new in UNDEFINED_PTR_CAST_REPLACEMENTS.items():
        result = result.replace(old, new)
    return result


def transform_undefined_types(code):
    """Replace undefined type declarations with proper types.

    This transforms patterns like:
        undefined4 local_var;
    To:
        uint local_var;

    Args:
        code: Decompiled code string

    Returns:
        Transformed code with undefined types replaced
    """
    result = code
    # Use word boundary to avoid partial replacements
    for old, new in UNDEFINED_TYPE_REPLACEMENTS.items():
        # Replace type declarations (undefined4 varname)
        pattern = r'\b' + re.escape(old) + r'\b'
        result = re.sub(pattern, new, result)
    return result


def transform_concat_artifacts(code):
    """Add clarifying comments to CONCAT artifacts.

    CONCAT44, CONCAT22, etc. are Ghidra artifacts where the decompiler
    is combining two values into a larger type (like making a double from
    two ints, or a longlong from two ints).

    Args:
        code: Decompiled code string

    Returns:
        Transformed code with CONCAT artifacts annotated
    """
    # Pattern matches CONCAT followed by digits (e.g., CONCAT44, CONCAT22)
    pattern = r'\bCONCAT(\d+)\b'

    def replace_concat(match):
        full_match = match.group(0)
        digits = match.group(1)
        # Add inline comment explaining what this is
        return '%s /* combine %d-byte values */' % (full_match, len(digits))

    result = re.sub(pattern, replace_concat, code)
    return result


def transform_sub_artifacts(code):
    """Add clarifying comments to SUB artifacts.

    SUB84, SUB42, etc. are Ghidra artifacts where the decompiler
    is extracting a smaller value from a larger type.

    Args:
        code: Decompiled code string

    Returns:
        Transformed code with SUB artifacts annotated
    """
    # Pattern matches SUB followed by digits (e.g., SUB84, SUB42)
    pattern = r'\bSUB(\d+)\b'

    def replace_sub(match):
        full_match = match.group(0)
        digits = match.group(1)
        # Add inline comment explaining what this is
        return '%s /* extract %d-byte value */' % (full_match, len(digits))

    result = re.sub(pattern, replace_sub, code)
    return result


def transform_sborrow_artifacts(code):
    """Add clarifying comments to SBORROW artifacts.

    SBORROW is a Ghidra artifact for signed borrow detection in subtraction.

    Args:
        code: Decompiled code string

    Returns:
        Transformed code with SBORROW artifacts annotated
    """
    result = code.replace('SBORROW', 'SBORROW /* signed borrow */')
    return result


def transform_register_params(code):
    """Add clarifying comments to inferred register parameters.

    Patterns like in_EAX, in_ECX indicate Ghidra inferred register parameters
    that aren't part of the standard calling convention.

    Args:
        code: Decompiled code string

    Returns:
        Transformed code with register param comments
    """
    # Pattern matches in_XX or in_XXX where XX/XXX is 2-3 uppercase letters
    pattern = r'\b(in_[A-Z]{2,3})\b'

    def replace_reg(match):
        reg_name = match.group(1)
        # Only add comment on first occurrence per line to avoid clutter
        return reg_name

    # We'll just leave these as-is for now since adding comments everywhere
    # would be too noisy. The detection still marks them as suspects.
    return code


def apply_all_transforms(code, transforms=None):
    """Apply all or specified transforms to decompiled code.

    Args:
        code: Decompiled code string
        transforms: Optional list of transform names to apply.
                   If None, applies all safe transforms.

    Returns:
        Transformed code
    """
    # Default transforms that are safe to apply automatically
    default_transforms = [
        ('undefined_ptr_cast', transform_undefined_pointer_casts),
        ('undefined_type', transform_undefined_types),
        ('concat_artifact', transform_concat_artifacts),
        ('sub_artifact', transform_sub_artifacts),
        ('sborrow_artifact', transform_sborrow_artifacts),
    ]

    if transforms is None:
        transforms_to_apply = default_transforms
    else:
        transforms_to_apply = [
            (name, func) for name, func in default_transforms
            if name in transforms
        ]

    result = code
    for name, transform_func in transforms_to_apply:
        result = transform_func(result)

    return result


def count_auto_fixable_suspects(suspects):
    """Count how many suspects can be auto-fixed by transforms.

    Args:
        suspects: List of suspect dictionaries

    Returns:
        Tuple of (auto_fixable_count, total_count)
    """
    auto_fixable_types = {
        'undefined_ptr_cast',
        'undefined_type',
        'concat_artifact',
        'sub_artifact',
        'sborrow_artifact',
    }

    auto_fixable = sum(1 for s in suspects if s.get('type') in auto_fixable_types)
    return (auto_fixable, len(suspects))


def get_remaining_suspects_after_transforms(suspects):
    """Get suspects that will remain after auto-transforms.

    Args:
        suspects: List of suspect dictionaries

    Returns:
        List of suspects that cannot be auto-fixed
    """
    auto_fixable_types = {
        'undefined_ptr_cast',
        'undefined_type',
        'concat_artifact',
        'sub_artifact',
        'sborrow_artifact',
    }

    return [s for s in suspects if s.get('type') not in auto_fixable_types]
