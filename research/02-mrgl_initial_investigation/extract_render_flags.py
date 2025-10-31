#!/usr/bin/env python3
"""
Nocturne Render Function Flag Extractor
Systematically analyzes all known render functions and extracts flag patterns
for creating proper Ghidra equates and better function names.
"""

import os
import re
import json

# Known render function addresses from engine_3d.c
RENDER_FUNCTIONS = [
    # Basic polygon rendering
    {"address": "00403ad0", "current_name": "renderLitPolygonBasic_FUN_00403ad0", "flags": None, "flag2": None},
    {"address": "00403cc0", "current_name": "renderPolygonBasic_FUN_00403cc0", "flags": None, "flag2": None},
    {"address": "00403d60", "current_name": "renderPrimitiveBasic_FUN_00403d60", "flags": None, "flag2": None},
    {"address": "00403f20", "current_name": "renderPolygonSimple_FUN_00403f20", "flags": None, "flag2": None},
    {"address": "00404020", "current_name": "renderOverlayBasic_FUN_00404020", "flags": None, "flag2": None},
    {"address": "00404120", "current_name": "renderPolygonEnhanced_FUN_00404120", "flags": None, "flag2": None},
    {"address": "00404220", "current_name": "renderPolygonLitDetailed_FUN_00404220", "flags": None, "flag2": None},

    # Advanced/adaptive rendering
    {"address": "004044a0", "current_name": "renderPolygonBasicEnhanced_FUN_004044a0", "flags": None, "flag2": None},
    {"address": "004046c0", "current_name": "renderPrimitiveFullFeatured_FUN_004046c0", "flags": None, "flag2": None},
    {"address": "00404840", "current_name": "renderPrimitiveAdaptive_FUN_00404840", "flags": None, "flag2": None},
    {"address": "00404a40", "current_name": "renderPolygon_FUN_00404a40", "flags": None, "flag2": None},
    {"address": "00404ae0", "current_name": "renderPolygonAdaptive_FUN_00404ae0", "flags": None, "flag2": None},
    {"address": "00404c60", "current_name": "renderPolygonFullFeatured_FUN_00404c60", "flags": None, "flag2": None},
    {"address": "00404d50", "current_name": "renderPolygonUVMappedComplex_FUN_00404d50", "flags": None, "flag2": None},
    {"address": "00404e40", "current_name": "renderPolygonAdvancedPrimitive_FUN_00404e40", "flags": None, "flag2": None},
    {"address": "00404ee0", "current_name": "renderPolygonBasicAdvanced_FUN_00404ee0", "flags": None, "flag2": None},
    {"address": "00404f80", "current_name": "renderPolygonAdvancedEnhanced_FUN_00404f80", "flags": None, "flag2": None},
    {"address": "00405020", "current_name": "renderPolygonAdvancedStandard_FUN_00405020", "flags": None, "flag2": None},

    # UV mapping functions
    {"address": "00405170", "current_name": "renderPolygonUVBasic_FUN_00405170", "flags": None, "flag2": None},
    {"address": "004052b0", "current_name": "renderPolygonLitComplex_FUN_004052b0", "flags": None, "flag2": None},
    {"address": "00405350", "current_name": "renderPolygonUVSimple_FUN_00405350", "flags": None, "flag2": None},
    {"address": "00405430", "current_name": "renderPolygonUVEnhanced_FUN_00405430", "flags": None, "flag2": None},
    {"address": "00405510", "current_name": "renderPolygonUVAdvanced_FUN_00405510", "flags": None, "flag2": None},
    {"address": "004055b0", "current_name": "renderPolygonPerspectiveBasic_FUN_004055b0", "flags": None, "flag2": None},
    {"address": "00405690", "current_name": "renderPolygonPerspectiveEffect_FUN_00405690", "flags": None, "flag2": None},
    {"address": "004057b0", "current_name": "renderPolygonPerspectiveAdvanced_FUN_004057b0", "flags": None, "flag2": None},
    {"address": "004058d0", "current_name": "renderPolygonPerspectiveSpecial_FUN_004058d0", "flags": None, "flag2": None},
    {"address": "00405960", "current_name": "renderPolygonTexturedBasic_FUN_00405960", "flags": None, "flag2": None},
    {"address": "00405a00", "current_name": "renderPolygonUVHighQuality_FUN_00405a00", "flags": None, "flag2": None},
    {"address": "00405aa0", "current_name": "renderPolygonUVEnhancedQuality_FUN_00405aa0", "flags": None, "flag2": None},
    {"address": "00405b50", "current_name": "renderPolygonUVMapped_FUN_00405b50", "flags": None, "flag2": None},
    {"address": "00405ce0", "current_name": "renderPolygonUVMappedStandard_FUN_00405ce0", "flags": None, "flag2": None},
    {"address": "00405d80", "current_name": "renderPolygonTexturedLit_FUN_00405d80", "flags": None, "flag2": None},
    {"address": "00405e20", "current_name": "renderPolygonTexturedAdvanced_FUN_00405e20", "flags": None, "flag2": None},
    {"address": "00405ec0", "current_name": "renderPolygonTexturedSimple_FUN_00405ec0", "flags": None, "flag2": None},
    {"address": "00405f60", "current_name": "renderPolygonTexturedOverlay_FUN_00405f60", "flags": None, "flag2": None},
    {"address": "00406000", "current_name": "renderPolygonTexturedLitBasic_FUN_00406000", "flags": None, "flag2": None},
    {"address": "004060a0", "current_name": "renderPolygonUVPerspectiveCorrect_FUN_004060a0", "flags": None, "flag2": None},
    {"address": "00406150", "current_name": "renderPolygonUVMappedLit_FUN_00406150", "flags": None, "flag2": None},
    {"address": "004061f0", "current_name": "renderPolygonUVMappedEnhanced_FUN_004061f0", "flags": None, "flag2": None},
    {"address": "00406290", "current_name": "renderPolygonUVPerspective_FUN_00406290", "flags": None, "flag2": None},
    {"address": "00406430", "current_name": "renderPolygonUVAdaptive_FUN_00406430", "flags": None, "flag2": None},

    # High-end rendering
    {"address": "004066d0", "current_name": "renderPolygonLitStandard_FUN_004066d0", "flags": None, "flag2": None},
    {"address": "004067a0", "current_name": "renderPolygonUVPerspectiveSpecial_FUN_004067a0", "flags": None, "flag2": None},
    {"address": "00406860", "current_name": "renderPolygonDetailedComplex_FUN_00406860", "flags": None, "flag2": None},
    {"address": "00406a20", "current_name": "renderPolygonLitDetailedBasic_FUN_00406a20", "flags": None, "flag2": None},
    {"address": "00406b40", "current_name": "renderPolygonDynamicQuality_FUN_00406b40", "flags": None, "flag2": None},
    {"address": "00406be0", "current_name": "renderPolygonHighQuality_FUN_00406be0", "flags": None, "flag2": None},
    {"address": "00406c80", "current_name": "renderPolygonUltraDetail_FUN_00406c80", "flags": None, "flag2": None},
    {"address": "00406de0", "current_name": "renderPolygonComplexEffect_FUN_00406de0", "flags": None, "flag2": None},
    {"address": "00406f20", "current_name": "renderPolygonAdvancedEffect_FUN_00406f20", "flags": None, "flag2": None},
    {"address": "004070c0", "current_name": "renderPolygonPremium_FUN_004070c0", "flags": None, "flag2": None},
    {"address": "00407290", "current_name": "renderPolygonPremiumQuality_FUN_00407290", "flags": None, "flag2": None},
    {"address": "00407470", "current_name": "renderPolygon_FUN_00407470", "flags": None, "flag2": None},
    {"address": "00407620", "current_name": "renderPolygon_FUN_00407620", "flags": None, "flag2": None},
    {"address": "00407720", "current_name": "renderPolygon_FUN_00407720", "flags": None, "flag2": None},

    # Utility/support functions
    {"address": "00407920", "current_name": "renderPrim_FUN_00407920", "flags": None, "flag2": None},
]

# Base directory for pseudocode annotations
BASE_DIR = "annotations/nocedit.exe/pseudocode/src/engine/3d.c"

def extract_flag_assignments(file_content):
    """Extract g_RenderStateFlags and g_RenderStateFlag2 assignments from file content."""
    flags = []
    flag2_values = []

    # Pattern for g_RenderStateFlags = 0xXXX;
    flag_pattern = r'g_RenderStateFlags\s*=\s*(0x[0-9a-fA-F]+|[0-9]+)'
    flag_matches = re.findall(flag_pattern, file_content)
    flags.extend(flag_matches)

    # Pattern for g_RenderStateFlag2 = X;
    flag2_pattern = r'g_RenderStateFlag2\s*=\s*([0-9]+)'
    flag2_matches = re.findall(flag2_pattern, file_content)
    flag2_values.extend(flag2_matches)

    # Also look for conditional assignments
    conditional_pattern = r'g_RenderStateFlags\s*=\s*.*?(0x[0-9a-fA-F]+|[0-9]+)'
    conditional_matches = re.findall(conditional_pattern, file_content)
    flags.extend(conditional_matches)

    return flags, flag2_values

def analyze_function_file(address, function_name):
    """Analyze a single function file and extract flag data."""
    filename = f"{function_name}.c"
    filepath = os.path.join(BASE_DIR, filename)

    if not os.path.exists(filepath):
        return None, None, f"File not found: {filepath}"

    try:
        with open(filepath, 'r', encoding='utf-8') as f:
            content = f.read()

        flags, flag2_values = extract_flag_assignments(content)

        return flags, flag2_values, None

    except Exception as e:
        return None, None, f"Error reading file: {str(e)}"

def generate_technical_name(address, current_name, flags, flag2_values):
    """Generate a technical function name based on flag analysis."""

    if not flags:
        return f"render_NoFlags_{address}"

    # Convert hex strings to integers for analysis
    flag_ints = []
    for flag in flags:
        try:
            if flag.startswith('0x'):
                flag_ints.append(int(flag, 16))
            else:
                flag_ints.append(int(flag))
        except ValueError:
            continue

    if not flag_ints:
        return f"render_UnknownFlags_{address}"

    # Analyze most common or highest flag value
    primary_flag = max(flag_ints)

    # Generate name based on flag patterns
    name_parts = ["render"]

    # Engine layer detection
    if primary_flag & 0x300:
        name_parts.append("EnginePremium")
    elif primary_flag & 0x200:
        name_parts.append("EngineEnhanced")
    elif primary_flag & 0x100:
        name_parts.append("EngineBase")

    # Texture operation detection
    if primary_flag & 0xC0:
        if primary_flag & 0x05:
            name_parts.append("TextureWrapped")
        elif primary_flag & 0x03:
            name_parts.append("TexturePerspective")
        elif primary_flag & 0x01:
            name_parts.append("TextureLit")
        else:
            name_parts.append("TextureBase")

    # Depth buffer operations
    if primary_flag & 0x80:
        if primary_flag & 0x40:
            name_parts.append("DepthTestWrite")
        else:
            name_parts.append("DepthWrite")
    elif primary_flag & 0x40:
        name_parts.append("DepthTest")

    # Special effects
    if primary_flag & 0x0D:
        name_parts.append("PlaneMasked")

    # Alpha processing
    if primary_flag & 0x20:
        name_parts.append("Alpha")

    # Add flag2 preprocessing info
    if flag2_values:
        flag2_int = int(flag2_values[0])
        if flag2_int == 1:
            name_parts.append("DepthPrep")
        elif flag2_int == 2:
            name_parts.append("TexNormalize")
        elif flag2_int == 3:
            name_parts.append("NearPlaneCorrect")
        elif flag2_int == 4:
            name_parts.append("PrimSpecial")
        elif flag2_int == 5:
            name_parts.append("TexNormalizeAlt")
        elif flag2_int == 6:
            name_parts.append("WDepthReplace")

    technical_name = "_".join(name_parts) + f"_FUN_{address}"
    return technical_name

def generate_ghidra_equates(flags, flag2_values):
    """Generate Ghidra equate suggestions for the flag values."""
    equates = []

    for flag in flags:
        try:
            if flag.startswith('0x'):
                flag_int = int(flag, 16)
            else:
                flag_int = int(flag)

            # Generate meaningful equate name
            equate_name = f"RENDER_FLAGS_{flag.upper().replace('0X', '')}"
            equates.append(f"{equate_name} = {flag}")

        except ValueError:
            continue

    for flag2 in flag2_values:
        equate_name = f"PREPROCESS_MODE_{flag2}"
        equates.append(f"{equate_name} = {flag2}")

    return equates

def main():
    """Main analysis function."""
    print("Nocturne Render Function Flag Extractor")
    print("=" * 50)

    results = []

    for func_info in RENDER_FUNCTIONS:
        address = func_info["address"]
        current_name = func_info["current_name"]

        print(f"\nAnalyzing {current_name}...")

        flags, flag2_values, error = analyze_function_file(address, current_name)

        if error:
            print(f"  ERROR: {error}")
            results.append({
                "address": address,
                "current_name": current_name,
                "error": error,
                "flags": [],
                "flag2_values": [],
                "technical_name": "ERROR_ANALYSIS_FAILED",
                "ghidra_equates": []
            })
            continue

        # Generate technical name and equates
        technical_name = generate_technical_name(address, current_name, flags, flag2_values)
        ghidra_equates = generate_ghidra_equates(flags, flag2_values)

        print(f"  Flags: {flags}")
        print(f"  Flag2: {flag2_values}")
        print(f"  Technical Name: {technical_name}")

        results.append({
            "address": address,
            "current_name": current_name,
            "flags": flags,
            "flag2_values": flag2_values,
            "technical_name": technical_name,
            "ghidra_equates": ghidra_equates
        })

    # Generate comprehensive report
    generate_report(results)

def generate_report(results):
    """Generate comprehensive analysis report."""

    # JSON output for programmatic use
    with open("render_function_analysis.json", "w") as f:
        json.dump(results, f, indent=2)

    # Human-readable report
    with open("render_function_analysis.txt", "w") as f:
        f.write("# Nocturne Render Function Flag Analysis Report\n")
        f.write("# Generated by extract_render_flags.py\n\n")

        # Summary statistics
        total_functions = len(results)
        functions_with_flags = sum(1 for r in results if r["flags"])
        functions_with_errors = sum(1 for r in results if "error" in r)

        f.write(f"SUMMARY:\n")
        f.write(f"- Total functions analyzed: {total_functions}\n")
        f.write(f"- Functions with flags: {functions_with_flags}\n")
        f.write(f"- Functions with errors: {functions_with_errors}\n\n")

        # Detailed function analysis
        f.write("FUNCTION ANALYSIS:\n")
        f.write("Format: Address | Current_Name | Flags | Flag2 | Technical_Name | Ghidra_Equates\n\n")

        for result in results:
            f.write(f"{result['address']} | {result['current_name']}\n")
            f.write(f"  Flags: {', '.join(result['flags']) if result['flags'] else 'None'}\n")
            f.write(f"  Flag2: {', '.join(result['flag2_values']) if result['flag2_values'] else 'None'}\n")
            f.write(f"  Technical Name: {result['technical_name']}\n")
            f.write(f"  Ghidra Equates: {', '.join(result['ghidra_equates']) if result['ghidra_equates'] else 'None'}\n")
            if "error" in result:
                f.write(f"  ERROR: {result['error']}\n")
            f.write("\n")

        # Unique flag values summary
        all_flags = set()
        all_flag2s = set()

        for result in results:
            all_flags.update(result["flags"])
            all_flag2s.update(result["flag2_values"])

        f.write("UNIQUE FLAG VALUES:\n")
        f.write("g_RenderStateFlags values found:\n")
        for flag in sorted(all_flags):
            f.write(f"  {flag}\n")

        f.write("\ng_RenderStateFlag2 values found:\n")
        for flag2 in sorted(all_flag2s):
            f.write(f"  {flag2}\n")

    print(f"\nAnalysis complete!")
    print(f"Results saved to:")
    print(f"  - render_function_analysis.json (machine-readable)")
    print(f"  - render_function_analysis.txt (human-readable)")

if __name__ == "__main__":
    main()