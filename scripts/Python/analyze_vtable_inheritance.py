#!/usr/bin/env python3
"""
Analyze CDemonActor child classes for vtable method signature mismatches.

This script identifies child classes that need function updates to match
the parent CDemonActor class, including:
- Missing class name in function names
- Incorrect calling convention (should be __cdecl)
- Mismatched parameter counts
- Generic FUN_ names instead of proper method names
"""

import json
import glob
import re
import os
import sys
from collections import defaultdict

# Determine repo root from script location
SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
REPO_ROOT = os.path.dirname(os.path.dirname(SCRIPT_DIR))
ANNOTATIONS_DIR = os.path.join(REPO_ROOT, 'annotations', 'nocedit.exe')

VTABLES_DIR = os.path.join(ANNOTATIONS_DIR, 'vtables')
FUNCTIONS_DIR = os.path.join(ANNOTATIONS_DIR, 'functions')
REPORTS_DIR = os.path.join(ANNOTATIONS_DIR, 'reports')

BASE_VTABLE_ADDR = "006597d4"  # Pure CDemonActor vtable

# Class hierarchy - maps class to its parent class
# Used to determine vtable inheritance chain
CLASS_HIERARCHY = {
    'CDemonActor': None,  # Base class
    'CCharacter': 'CDemonActor',
    'CEnemy': 'CCharacter',
    'CHero': 'CCharacter',
    'CNPC': 'CCharacter',
    'CWeapon': 'CDemonActor',
    'CGun': 'CWeapon',
    'CMelee': 'CWeapon',
    'CBoxActor': 'CDemonActor',
    'CLightActor': 'CBoxActor',
}

# Intermediate classes that define their own vtable extensions
# These are classes whose source files can define new vtable slots
INTERMEDIATE_CLASSES = {'CDemonActor', 'CCharacter', 'CEnemy', 'CHero', 'CNPC', 'CWeapon', 'CBoxActor'}

# Source files that define intermediate class vtable methods
INTERMEDIATE_SOURCE_FILES = {
    'actor': 'CDemonActor',
    'charactr': 'CCharacter',
    'enemy': 'CEnemy',
    'hero': 'CHero',
    'npc': 'CNPC',
    'weapon': 'CWeapon',
    'boxactor': 'CBoxActor',
}

# Mapping from source file to expected class name
# (only needed for non-trivial mappings where lowercase class != file)
FILE_TO_CLASS = {
    'actor': 'CDemonActor',
    'charactr': 'CCharacter',
    'enemy': 'CEnemy',
    'dest': 'CActorDestination',
    'filmreel': 'CFilmReel',
    'dog': 'CZombieDog',
    'batcreat': 'CBatCreature',
    'dracbrid': 'CDraculaBride',
    'health': 'CHealthItem',
    'platfrm': 'CPlatform',
    'waypoint': 'CWayPoint',
    'flamecan': 'CFlameCan',
    'vampboss': 'CVampireBoss',
    'gabriela': 'CGabriella',
    'boxactor': 'CBoxActor',
    'liteactr': 'CLightActor',
    'backgnd': 'CBackgroundActor',
    'ammo': 'CAmmo',
    'tbplayer': 'CBassPlayer',  # Also has CDrummer
    'bodypart': 'CBodyPart',
    'msnedit': 'CMissionEdit',
    'setedit': 'CDemonSet',
    'manpuz': 'CMansionPuzzleCircle',
    'frankgen': 'CFrankenstienMachine',
    'zcow': 'CZombieCow',
    'boneguy': 'CBoneGuy',
    'tvbat': 'CTVBat',
    'lightgun': 'CLightGun',
    'elephgun': 'CElephantGun',
    'barwep': 'CBaronWeapon',
    'flmrthr': 'CFlameThrower',
    'teldest': 'CTeleportDest',
    'cryptves': 'CCryptVessel',
    'mirrhack': 'CMirrorHack',
    'heroplce': 'CHeroPlaceholder',
    'keyactor': 'CKeyActor',
    'hpgardth': 'CHighPriestOfGardath',
    'icepick': 'CIcePick',
}


def load_all_vtables():
    """Load all vtables from bucket files."""
    vtables = []
    pattern = os.path.join(VTABLES_DIR, "vtables_bucket_*.json")
    for f in sorted(glob.glob(pattern)):
        with open(f) as fp:
            vtables.extend(json.load(fp))
    return vtables


def load_all_functions():
    """Load all functions from bucket files, indexed by address."""
    functions = {}
    pattern = os.path.join(FUNCTIONS_DIR, "functions_bucket_*.json")
    for f in sorted(glob.glob(pattern)):
        with open(f) as fp:
            for func in json.load(fp):
                functions[func['addr']] = func
    return functions


def extract_file_info(func_name):
    """Extract folder and file from function name."""
    match = re.match(r'(\w+)_(\w+)\.(cpp|c)_', func_name)
    if match:
        return match.group(1), match.group(2)
    return None, None


def extract_class_name(func_name):
    """Extract class name from function name.

    Format: folder_file.extension_ClassName_functionName_FUN_XXXX
    """
    # False positive class names (labels, markers, etc.)
    FALSE_POSITIVES = {'FUN', 'DAT', 'LAB', 'ClassStart', 'StartOfAnotherClass'}

    match = re.search(r'\.(cpp|c)_([A-Z][A-Za-z0-9]+)_', func_name)
    if match:
        class_name = match.group(2)
        if class_name not in FALSE_POSITIVES:
            return class_name
    return None


def extract_method_name(func_name):
    """Extract method name from function name."""
    match = re.search(r'_[A-Z][A-Za-z0-9]+_([a-z][A-Za-z0-9]*)_FUN_', func_name)
    if match:
        return match.group(1)
    return None


def file_to_class(file_name):
    """Convert source file name to expected class name."""
    if file_name in FILE_TO_CLASS:
        return FILE_TO_CLASS[file_name]
    # Default: CFilename (capitalize first letter)
    return 'C' + file_name.capitalize()


def get_slot_owner_class(file_name):
    """Determine which class owns this vtable slot based on source file.

    If the function is defined in an intermediate class's source file,
    the slot belongs to that intermediate class's vtable extension.

    Returns the intermediate class name, or None if it's a leaf class override.
    """
    if file_name in INTERMEDIATE_SOURCE_FILES:
        return INTERMEDIATE_SOURCE_FILES[file_name]
    return None


def get_inheritance_chain(class_name):
    """Get the inheritance chain from base to the given class.

    Returns list like ['CDemonActor', 'CCharacter', 'CEnemy'] for CEnemy.
    """
    chain = []
    current = class_name
    while current:
        chain.insert(0, current)
        current = CLASS_HIERARCHY.get(current)
    return chain


def is_intermediate_class(class_name):
    """Check if a class is an intermediate class that defines vtable extensions."""
    return class_name in INTERMEDIATE_CLASSES


def build_expected_signature(folder, file, expected_class, method_name, func_addr, base_func_info):
    """Build the expected Ghidra function signature.

    Format: return_type full_func_name(params)
    Uses actual parameter types from base CDemonActor function.
    """
    full_name = f"{folder}_{file}.cpp_{expected_class}_{method_name}_FUN_{func_addr}"

    # Get return type from base function
    return_type = base_func_info.get('ret', 'void')

    # Build parameter list from base function params
    params = []
    base_params = base_func_info.get('vars', {}).get('params', [])

    for i, param in enumerate(base_params):
        param_name = param.get('name', f'param_{i}')
        param_type = param.get('type', 'undefined4')

        # Replace CDemonActor* with the child class for this_ptr
        if i == 0 and 'CDemonActor' in param_type:
            param_type = param_type.replace('CDemonActor', expected_class)

        params.append(f"{param_type} {param_name}")

    param_str = ", ".join(params) if params else "void"
    return f"{return_type} {full_name}({param_str})"


def get_vtable_class(vtable):
    """Determine the class that owns this vtable.

    Look at functions that already have class names to determine the vtable's class.
    Excludes parent/abstract classes to find the concrete child class.
    """
    # Parent/abstract classes that shouldn't be used as vtable owners
    PARENT_CLASSES = {
        'CDemonActor', 'CCharacter', 'CEnemy', 'CHero', 'CNPC',
        'CWeapon', 'CBoxActor', 'CPlatform', 'CTrigger'
    }

    # False positive class names (labels, markers, etc.)
    FALSE_POSITIVES = {
        'ClassStart', 'StartOfAnotherClass', 'FUN', 'DAT', 'LAB'
    }

    class_counts = defaultdict(int)

    for func in vtable['functions']:
        func_name = func['func_name']

        # Skip inherited CDemonActor methods
        if 'CDemonActor_' in func_name:
            continue

        # Extract class name if present
        cls = extract_class_name(func_name)
        if cls and cls not in PARENT_CLASSES and cls not in FALSE_POSITIVES:
            class_counts[cls] += 1

    if not class_counts:
        return None

    # Return most common class name
    return max(class_counts, key=class_counts.get)


def analyze_vtable(child_vt, base_methods):
    """Analyze a child vtable for issues.

    For each function, check if it matches the expected signature from the base class.
    Returns issues grouped by (class_name, source_file) tuple.
    """
    issues_by_class = defaultdict(list)  # Group issues by class

    # Determine the class this vtable belongs to from its functions
    vtable_class = get_vtable_class(child_vt)

    # Build list of parent classes for this vtable's class
    parent_classes = set()
    if vtable_class and vtable_class in CLASS_HIERARCHY:
        current = CLASS_HIERARCHY.get(vtable_class)
        while current:
            parent_classes.add(current)
            current = CLASS_HIERARCHY.get(current)

    for func in child_vt['functions']:
        offset = func['offset']
        func_name = func['func_name']
        convention = func['convention']
        param_count = func['param_count']

        if offset not in base_methods:
            continue

        base = base_methods[offset]
        base_method_name = base['name']

        # Skip if this is using a parent class's method (not overridden)
        # Check for CDemonActor or any other parent class in the inheritance chain
        func_class = extract_class_name(func_name)
        if func_class and (func_class == 'CDemonActor' or func_class in parent_classes):
            continue

        # Skip destructor functions - they have special calling conventions
        if '_dtor_' in func_name or base_method_name == 'dtor':
            continue

        # Get source file for this function
        folder, file = extract_file_info(func_name)
        if not file:
            continue

        # This function is from a child class - check for issues
        func_class = extract_class_name(func_name)
        func_method = extract_method_name(func_name)

        # Use vtable class if detected, otherwise fall back to file-based guess
        expected_class = vtable_class if vtable_class else file_to_class(file)

        issue = {
            'offset': offset,
            'func_name': func_name,
            'func_addr': func['func_addr'],
            'base_method': base_method_name,
            'expected_class': expected_class,
            'source_file': file,
            'problems': []
        }

        # Check 1: Missing class name (e.g., core_chain.cpp_FUN_xxx)
        if not func_class:
            issue['problems'].append(f"Missing class name (expected {expected_class})")

        # Check 2: Missing method name (e.g., core_anvil.cpp_CAnvil_FUN_xxx)
        if not func_method and base_method_name:
            issue['problems'].append(f"Missing method name (expected {base_method_name})")

        # Check 3: Wrong calling convention
        if convention != '__cdecl':
            issue['problems'].append(f"Wrong convention: {convention} (expected __cdecl)")

        # Check 4: Parameter count mismatch
        if param_count != base['param_count']:
            issue['problems'].append(f"Param count: {param_count} (expected {base['param_count']})")

        if issue['problems']:
            # Add expected function signature
            if base_method_name and base.get('func_info'):
                issue['expected_signature'] = build_expected_signature(
                    folder, file, expected_class, base_method_name,
                    func['func_addr'], base['func_info']
                )
            # Group by class name
            issues_by_class[expected_class].append(issue)

    return issues_by_class


def analyze_vtable_slot_ownership(vtables, functions):
    """Analyze all vtables to determine which slots belong to which intermediate class.

    Scans vtables looking for functions defined in intermediate source files.
    If a slot has a function from charactr.cpp, that slot belongs to CCharacter_vtable.

    Returns:
        dict mapping offset -> {'owner': class_name, 'method': method_name, 'evidence': [...]}
    """
    slot_ownership = {}  # offset -> {owner, method, evidence}

    # Track all evidence for each slot
    slot_evidence = defaultdict(lambda: defaultdict(list))  # offset -> class -> [func_names]

    for vt in vtables:
        for func in vt['functions']:
            offset = func['offset']
            func_name = func['func_name']

            # Get source file for this function
            folder, file = extract_file_info(func_name)
            if not file:
                continue

            # Check if this function is in an intermediate class source file
            owner_class = get_slot_owner_class(file)
            if owner_class:
                slot_evidence[offset][owner_class].append(func_name)

    # Determine ownership based on evidence
    # Use the most specific (deepest in hierarchy) intermediate class
    for offset, class_evidence in slot_evidence.items():
        # Find the deepest class in the hierarchy that has evidence
        best_class = None
        best_depth = -1

        for cls in class_evidence:
            chain = get_inheritance_chain(cls)
            depth = len(chain)
            if depth > best_depth:
                best_depth = depth
                best_class = cls

        if best_class:
            # Extract method name from one of the functions
            evidence_funcs = class_evidence[best_class]
            method_name = None
            for fn in evidence_funcs:
                method = extract_method_name(fn)
                if method:
                    method_name = method
                    break

            slot_ownership[offset] = {
                'owner': best_class,
                'method': method_name,
                'evidence': evidence_funcs[:3],  # Keep up to 3 examples
                'all_classes': list(class_evidence.keys())
            }

    return slot_ownership


def build_intermediate_vtables(slot_ownership, base_methods):
    """Build vtable definitions for intermediate classes based on slot ownership.

    Returns:
        dict mapping class_name -> {
            'slots': [{offset, method, ...}],
            'extends': parent_class,
            'start_offset': first new slot offset,
            'end_offset': last slot offset
        }
    """
    intermediate_vtables = defaultdict(lambda: {'slots': [], 'extends': None})

    for offset, info in sorted(slot_ownership.items()):
        owner = info['owner']
        method = info['method']

        # Get base method info if available
        base_info = base_methods.get(offset, {})
        base_method = base_info.get('name')

        slot_info = {
            'offset': offset,
            'method': method or base_method,
            'evidence': info['evidence'],
        }

        intermediate_vtables[owner]['slots'].append(slot_info)

    # Set hierarchy info and calculate offset ranges
    for cls, vtable_info in intermediate_vtables.items():
        vtable_info['extends'] = CLASS_HIERARCHY.get(cls)
        if vtable_info['slots']:
            offsets = [s['offset'] for s in vtable_info['slots']]
            vtable_info['start_offset'] = min(offsets)
            vtable_info['end_offset'] = max(offsets)
            vtable_info['slot_count'] = len(vtable_info['slots'])

    return dict(intermediate_vtables)


def main():
    import argparse
    parser = argparse.ArgumentParser(description='Analyze CDemonActor child vtable inheritance')
    parser.add_argument('--output', '-o', default='vtable_analysis.json', help='Output JSON filename')
    parser.add_argument('--verbose', '-v', action='store_true', help='Verbose output')
    parser.add_argument('--file', '-f', help='Only analyze functions from this source file')
    args = parser.parse_args()

    # Ensure reports directory exists
    os.makedirs(REPORTS_DIR, exist_ok=True)

    vtables = load_all_vtables()
    print(f"Loaded {len(vtables)} vtables")

    functions = load_all_functions()
    print(f"Loaded {len(functions)} functions")

    # Find the base CDemonActor vtable
    base_vt = None
    for vt in vtables:
        if vt['addr'] == BASE_VTABLE_ADDR:
            base_vt = vt
            break

    if not base_vt:
        print(f"ERROR: Base CDemonActor vtable not found at {BASE_VTABLE_ADDR}")
        return

    print(f"Base CDemonActor vtable: {base_vt['addr']} with {base_vt['count']} methods")

    # Build base method reference with full function info
    base_methods = {}
    for func in base_vt['functions']:
        offset = func['offset']
        match = re.search(r'CDemonActor_(\w+)_FUN', func['func_name'])
        method_name = match.group(1) if match else None
        func_addr = func['func_addr']

        base_methods[offset] = {
            'name': method_name,
            'param_count': func['param_count'],
            'convention': func['convention'],
            'func_name': func['func_name'],
            'func_info': functions.get(func_addr, {})  # Full function info
        }

    # Analyze slot ownership by intermediate classes
    print("\nAnalyzing vtable slot ownership by intermediate classes...")
    slot_ownership = analyze_vtable_slot_ownership(vtables, functions)
    intermediate_vtables = build_intermediate_vtables(slot_ownership, base_methods)

    # Print intermediate vtable summary
    print(f"\n{'='*60}")
    print("INTERMEDIATE VTABLE ANALYSIS")
    print(f"{'='*60}")

    # Sort by inheritance depth (base classes first)
    def get_depth(cls):
        return len(get_inheritance_chain(cls))

    for cls in sorted(intermediate_vtables.keys(), key=get_depth):
        vt_info = intermediate_vtables[cls]
        parent = vt_info.get('extends', 'None')
        slot_count = vt_info.get('slot_count', 0)
        start = vt_info.get('start_offset', 0)
        end = vt_info.get('end_offset', 0)

        print(f"\n{cls}_vtable (extends {parent}):")
        print(f"  Offset range: 0x{start:x} - 0x{end:x} ({slot_count} slots)")

        if args.verbose:
            print("  Slots:")
            for slot in vt_info['slots'][:20]:  # Show first 20
                method = slot.get('method', 'unknown')
                offset = slot['offset']
                print(f"    0x{offset:02x}: {method}")
            if len(vt_info['slots']) > 20:
                print(f"    ... and {len(vt_info['slots']) - 20} more slots")

    # Analyze all vtables and collect issues by class
    all_issues_by_class = defaultdict(list)

    for vt in vtables:
        if vt['addr'] == BASE_VTABLE_ADDR:
            continue

        # Only analyze vtables that have CDemonActor methods (inheritance)
        funcs = vt['functions']
        has_demon_method = any('CDemonActor_' in f.get('func_name', '') for f in funcs)
        if not has_demon_method:
            continue

        if vt['count'] < 50:
            continue

        issues_by_class = analyze_vtable(vt, base_methods)

        for cls, issues in issues_by_class.items():
            # Filter by file if specified
            if args.file:
                issues = [i for i in issues if i['source_file'] == args.file]
            all_issues_by_class[cls].extend(issues)

    # Deduplicate issues (same function may appear in multiple vtables)
    for cls in all_issues_by_class:
        seen = set()
        unique_issues = []
        for issue in all_issues_by_class[cls]:
            key = issue['func_addr']
            if key not in seen:
                seen.add(key)
                unique_issues.append(issue)
        all_issues_by_class[cls] = unique_issues

    # Summary
    print(f"\n{'='*60}")
    total_classes = len(all_issues_by_class)
    total_issues = sum(len(issues) for issues in all_issues_by_class.values())
    print(f"Summary: Found issues in {total_classes} classes ({total_issues} total functions)")
    print()

    # Categorize issues
    issue_types = defaultdict(int)
    for cls, issues in all_issues_by_class.items():
        for issue in issues:
            for problem in issue['problems']:
                if 'Missing class name' in problem:
                    issue_types['missing_class_name'] += 1
                elif 'Missing method name' in problem:
                    issue_types['missing_method_name'] += 1
                elif 'Wrong convention' in problem:
                    issue_types['wrong_convention'] += 1
                elif 'Param count' in problem:
                    issue_types['param_mismatch'] += 1

    print("Issue breakdown:")
    for issue_type, count in sorted(issue_types.items(), key=lambda x: -x[1]):
        print(f"  {issue_type}: {count}")
    print()

    # Sort classes by issue count
    sorted_classes = sorted(all_issues_by_class.items(), key=lambda x: -len(x[1]))

    print("Top 15 classes with most issues:")
    for cls, issues in sorted_classes[:15]:
        source_file = issues[0]['source_file'] if issues else 'unknown'
        print(f"  {cls} ({source_file}.cpp): {len(issues)} functions need fixes")

    if args.verbose:
        print("\n" + "="*60)
        print("Detailed issues by class:")
        for cls, issues in sorted_classes:
            source_file = issues[0]['source_file'] if issues else 'unknown'
            print(f"\n=== {cls} ({source_file}.cpp) - {len(issues)} issues ===")
            for issue in issues[:10]:
                print(f"  {issue['func_addr']}: {issue['func_name']}")
                if 'expected_signature' in issue:
                    print(f"    => {issue['expected_signature']}")
                for p in issue['problems']:
                    print(f"    - {p}")
            if len(issues) > 10:
                print(f"  ... and {len(issues) - 10} more")

    # Write detailed output
    output_data = {
        'summary': {
            'total_classes': total_classes,
            'total_issues': total_issues,
            'issue_breakdown': dict(issue_types)
        },
        'base_vtable': BASE_VTABLE_ADDR,
        'base_methods': {str(k): v for k, v in base_methods.items()},
        'intermediate_vtables': {
            cls: {
                'extends': info.get('extends'),
                'start_offset': info.get('start_offset'),
                'end_offset': info.get('end_offset'),
                'slot_count': info.get('slot_count'),
                'slots': [
                    {
                        'offset': f"0x{s['offset']:x}",
                        'offset_dec': s['offset'],
                        'method': s.get('method'),
                        'evidence': s.get('evidence', [])
                    }
                    for s in info.get('slots', [])
                ]
            }
            for cls, info in intermediate_vtables.items()
        },
        'slot_ownership': {
            f"0x{offset:x}": {
                'owner': info['owner'],
                'method': info['method'],
                'evidence': info['evidence']
            }
            for offset, info in sorted(slot_ownership.items())
        },
        'issues_by_class': {
            cls: {
                'source_file': issues[0]['source_file'] if issues else 'unknown',
                'issue_count': len(issues),
                'issues': issues
            }
            for cls, issues in sorted_classes
        }
    }

    output_path = os.path.join(REPORTS_DIR, args.output)
    with open(output_path, 'w') as f:
        json.dump(output_data, f, indent=2)

    print(f"\nDetailed results written to: {output_path}")


if __name__ == '__main__':
    main()
