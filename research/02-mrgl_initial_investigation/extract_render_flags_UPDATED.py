#!/usr/bin/env python3
"""
UPDATED Nocturne Render Function Flag Extractor
Now includes ALL 97 render functions discovered across the entire codebase.

MAJOR UPDATE: Includes the core CDemonRenderer functions (the actual engine)
and all other render functions from wincore, prim.c, and clipper.c
"""

import os
import re
import json

# COMPLETE LIST: All 97 render functions from entire codebase
# Organized by architectural tier for clarity
RENDER_FUNCTIONS = [
    # TIER 1: High-Level API Layer (engine_3d.c - 56 functions)
    {"address": "00403ad0", "current_name": "renderLitPolygonBasic_FUN_00403ad0", "tier": "API", "module": "engine_3d.c"},
    {"address": "00403cc0", "current_name": "renderPolygonBasic_FUN_00403cc0", "tier": "API", "module": "engine_3d.c"},
    {"address": "00403d60", "current_name": "renderPrimitiveBasic_FUN_00403d60", "tier": "API", "module": "engine_3d.c"},
    {"address": "00403f20", "current_name": "renderPolygonSimple_FUN_00403f20", "tier": "API", "module": "engine_3d.c"},
    {"address": "00404020", "current_name": "renderOverlayBasic_FUN_00404020", "tier": "API", "module": "engine_3d.c"},
    {"address": "00404120", "current_name": "renderPolygonEnhanced_FUN_00404120", "tier": "API", "module": "engine_3d.c"},
    {"address": "00404220", "current_name": "renderPolygonLitDetailed_FUN_00404220", "tier": "API", "module": "engine_3d.c"},
    {"address": "004044a0", "current_name": "renderPolygonBasicEnhanced_FUN_004044a0", "tier": "API", "module": "engine_3d.c"},
    {"address": "004046c0", "current_name": "renderPrimitiveFullFeatured_FUN_004046c0", "tier": "API", "module": "engine_3d.c"},
    {"address": "00404840", "current_name": "renderPrimitiveAdaptive_FUN_00404840", "tier": "API", "module": "engine_3d.c"},
    {"address": "00404a40", "current_name": "renderPolygon_FUN_00404a40", "tier": "API", "module": "engine_3d.c"},
    {"address": "00404ae0", "current_name": "renderPolygonAdaptive_FUN_00404ae0", "tier": "API", "module": "engine_3d.c"},
    {"address": "00404c60", "current_name": "renderPolygonFullFeatured_FUN_00404c60", "tier": "API", "module": "engine_3d.c"},
    {"address": "00404d50", "current_name": "renderPolygonUVMappedComplex_FUN_00404d50", "tier": "API", "module": "engine_3d.c"},
    {"address": "00404e40", "current_name": "renderPolygonAdvancedPrimitive_FUN_00404e40", "tier": "API", "module": "engine_3d.c"},
    {"address": "00404ee0", "current_name": "renderPolygonBasicAdvanced_FUN_00404ee0", "tier": "API", "module": "engine_3d.c"},
    {"address": "00404f80", "current_name": "renderPolygonAdvancedEnhanced_FUN_00404f80", "tier": "API", "module": "engine_3d.c"},
    {"address": "00405020", "current_name": "renderPolygonAdvancedStandard_FUN_00405020", "tier": "API", "module": "engine_3d.c"},
    {"address": "00405170", "current_name": "renderPolygonUVBasic_FUN_00405170", "tier": "API", "module": "engine_3d.c"},
    {"address": "004052b0", "current_name": "renderPolygonLitComplex_FUN_004052b0", "tier": "API", "module": "engine_3d.c"},
    {"address": "00405350", "current_name": "renderPolygonUVSimple_FUN_00405350", "tier": "API", "module": "engine_3d.c"},
    {"address": "00405430", "current_name": "renderPolygonUVEnhanced_FUN_00405430", "tier": "API", "module": "engine_3d.c"},
    {"address": "00405510", "current_name": "renderPolygonUVAdvanced_FUN_00405510", "tier": "API", "module": "engine_3d.c"},
    {"address": "004055b0", "current_name": "renderPolygonPerspectiveBasic_FUN_004055b0", "tier": "API", "module": "engine_3d.c"},
    {"address": "00405690", "current_name": "renderPolygonPerspectiveEffect_FUN_00405690", "tier": "API", "module": "engine_3d.c"},
    {"address": "004057b0", "current_name": "renderPolygonPerspectiveAdvanced_FUN_004057b0", "tier": "API", "module": "engine_3d.c"},
    {"address": "004058d0", "current_name": "renderPolygonPerspectiveSpecial_FUN_004058d0", "tier": "API", "module": "engine_3d.c"},
    {"address": "00405960", "current_name": "renderPolygonTexturedBasic_FUN_00405960", "tier": "API", "module": "engine_3d.c"},
    {"address": "00405a00", "current_name": "renderPolygonUVHighQuality_FUN_00405a00", "tier": "API", "module": "engine_3d.c"},
    {"address": "00405aa0", "current_name": "renderPolygonUVEnhancedQuality_FUN_00405aa0", "tier": "API", "module": "engine_3d.c"},
    {"address": "00405b50", "current_name": "renderPolygonUVMapped_FUN_00405b50", "tier": "API", "module": "engine_3d.c"},
    {"address": "00405ce0", "current_name": "renderPolygonUVMappedStandard_FUN_00405ce0", "tier": "API", "module": "engine_3d.c"},
    {"address": "00405d80", "current_name": "renderPolygonTexturedLit_FUN_00405d80", "tier": "API", "module": "engine_3d.c"},
    {"address": "00405e20", "current_name": "renderPolygonTexturedAdvanced_FUN_00405e20", "tier": "API", "module": "engine_3d.c"},
    {"address": "00405ec0", "current_name": "renderPolygonTexturedSimple_FUN_00405ec0", "tier": "API", "module": "engine_3d.c"},
    {"address": "00405f60", "current_name": "renderPolygonTexturedOverlay_FUN_00405f60", "tier": "API", "module": "engine_3d.c"},
    {"address": "00406000", "current_name": "renderPolygonTexturedLitBasic_FUN_00406000", "tier": "API", "module": "engine_3d.c"},
    {"address": "004060a0", "current_name": "renderPolygonUVPerspectiveCorrect_FUN_004060a0", "tier": "API", "module": "engine_3d.c"},
    {"address": "00406150", "current_name": "renderPolygonUVMappedLit_FUN_00406150", "tier": "API", "module": "engine_3d.c"},
    {"address": "004061f0", "current_name": "renderPolygonUVMappedEnhanced_FUN_004061f0", "tier": "API", "module": "engine_3d.c"},
    {"address": "00406290", "current_name": "renderPolygonUVPerspective_FUN_00406290", "tier": "API", "module": "engine_3d.c"},
    {"address": "00406430", "current_name": "renderPolygonUVAdaptive_FUN_00406430", "tier": "API", "module": "engine_3d.c"},
    {"address": "004066d0", "current_name": "renderPolygonLitStandard_FUN_004066d0", "tier": "API", "module": "engine_3d.c"},
    {"address": "004067a0", "current_name": "renderPolygonUVPerspectiveSpecial_FUN_004067a0", "tier": "API", "module": "engine_3d.c"},
    {"address": "00406860", "current_name": "renderPolygonDetailedComplex_FUN_00406860", "tier": "API", "module": "engine_3d.c"},
    {"address": "00406a20", "current_name": "renderPolygonLitDetailedBasic_FUN_00406a20", "tier": "API", "module": "engine_3d.c"},
    {"address": "00406b40", "current_name": "renderPolygonDynamicQuality_FUN_00406b40", "tier": "API", "module": "engine_3d.c"},
    {"address": "00406be0", "current_name": "renderPolygonHighQuality_FUN_00406be0", "tier": "API", "module": "engine_3d.c"},
    {"address": "00406c80", "current_name": "renderPolygonUltraDetail_FUN_00406c80", "tier": "API", "module": "engine_3d.c"},
    {"address": "00406de0", "current_name": "renderPolygonComplexEffect_FUN_00406de0", "tier": "API", "module": "engine_3d.c"},
    {"address": "00406f20", "current_name": "renderPolygonAdvancedEffect_FUN_00406f20", "tier": "API", "module": "engine_3d.c"},
    {"address": "004070c0", "current_name": "renderPolygonPremium_FUN_004070c0", "tier": "API", "module": "engine_3d.c"},
    {"address": "00407290", "current_name": "renderPolygonPremiumQuality_FUN_00407290", "tier": "API", "module": "engine_3d.c"},
    {"address": "00407470", "current_name": "renderPolygon_FUN_00407470", "tier": "API", "module": "engine_3d.c"},
    {"address": "00407620", "current_name": "renderPolygon_FUN_00407620", "tier": "API", "module": "engine_3d.c"},
    {"address": "00407720", "current_name": "renderPolygon_FUN_00407720", "tier": "API", "module": "engine_3d.c"},
    {"address": "00407920", "current_name": "renderPrim_FUN_00407920", "tier": "API", "module": "engine_3d.c"},

    # TIER 2: CORE DEMON ENGINE (CDemonRenderer - 26 functions) - THE ACTUAL ENGINE!
    {"address": "0048a740", "current_name": "CDemonRenderer_clipAndFillPolygon_FUN_0048a740", "tier": "CORE", "module": "drender.cpp"},
    {"address": "0048a820", "current_name": "CDemonRenderer_renderPrim_FUN_0048a820", "tier": "CORE", "module": "drender.cpp"},
    {"address": "0048a8a0", "current_name": "CDemonRenderer_renderPrim_FUN_0048a8a0", "tier": "CORE", "module": "drender.cpp"},
    {"address": "0048a950", "current_name": "CDemonRenderer_renderPrim_FUN_0048a950", "tier": "CORE", "module": "drender.cpp"},
    {"address": "0048aa50", "current_name": "CDemonRenderer_renderPrim_FUN_0048aa50", "tier": "CORE", "module": "drender.cpp"},
    {"address": "0048ab50", "current_name": "CDemonRenderer_renderPrim_FUN_0048ab50", "tier": "CORE", "module": "drender.cpp"},
    {"address": "0048ac40", "current_name": "CDemonRenderer_renderPrim_FUN_0048ac40", "tier": "CORE", "module": "drender.cpp"},
    {"address": "0048ae10", "current_name": "CDemonRenderer_renderPrim_FUN_0048ae10", "tier": "CORE", "module": "drender.cpp"},
    {"address": "0048aeb0", "current_name": "CDemonRenderer_renderPrim_FUN_0048aeb0", "tier": "CORE", "module": "drender.cpp"},
    {"address": "0048b030", "current_name": "CDemonRenderer_renderPrim_FUN_0048b030", "tier": "CORE", "module": "drender.cpp"},
    {"address": "0048b1e0", "current_name": "CDemonRenderer_renderPrim_FUN_0048b1e0", "tier": "CORE", "module": "drender.cpp"},
    {"address": "0048b320", "current_name": "CDemonRenderer_renderPrim_FUN_0048b320", "tier": "CORE", "module": "drender.cpp"},
    {"address": "0048b420", "current_name": "CDemonRenderer_renderPrim_FUN_0048b420", "tier": "CORE", "module": "drender.cpp"},
    {"address": "0048b550", "current_name": "CDemonRenderer_renderPrim_FUN_0048b550", "tier": "CORE", "module": "drender.cpp"},
    {"address": "0048b970", "current_name": "CDemonRenderer_renderPrim_FUN_0048b970", "tier": "CORE", "module": "drender.cpp"},
    {"address": "0048bad0", "current_name": "CDemonRenderer_renderPrim_FUN_0048bad0", "tier": "CORE", "module": "drender.cpp"},
    {"address": "0048bba0", "current_name": "CDemonRenderer_renderPrim_FUN_0048bba0", "tier": "CORE", "module": "drender.cpp"},
    {"address": "0048bcf0", "current_name": "CDemonRenderer_renderPrim_FUN_0048bcf0", "tier": "CORE", "module": "drender.cpp"},
    {"address": "0048bdc0", "current_name": "CDemonRenderer_renderPrim_FUN_0048bdc0", "tier": "CORE", "module": "drender.cpp"},
    {"address": "0048bf10", "current_name": "CDemonRenderer_renderPrim_FUN_0048bf10", "tier": "CORE", "module": "drender.cpp"},
    {"address": "0048c8d0", "current_name": "CDemonRenderer_renderLitObject_FUN_0048c8d0", "tier": "CORE", "module": "drender.cpp"},
    {"address": "0048cf00", "current_name": "CDemonRenderer_demonGZFacetList1_FUN_0048cf00", "tier": "CORE", "module": "drender.cpp"},
    {"address": "0048d170", "current_name": "CDemonRenderer_demonGZFacetList2_FUN_0048d170", "tier": "CORE", "module": "drender.cpp"},
    {"address": "0048d410", "current_name": "CDemonRenderer_FUN_0048d410", "tier": "CORE", "module": "drender.cpp"},
    {"address": "005fcfc0", "current_name": "unkVertProcessing_FUN_005fcfc0", "tier": "CORE", "module": "drender.cpp"},
    {"address": "005fd4e0", "current_name": "renderClippedPolygons_FUN_005fd4e0", "tier": "CORE", "module": "drender.cpp"},

    # TIER 3: Low-Level Rasterization Backend (wincore - 6 functions)
    {"address": "005b4031", "current_name": "renderMMXPerspectiveScanline32_FUN_005b4031", "tier": "RASTER", "module": "windll.cpp"},
    {"address": "005b4823", "current_name": "renderMMXPerspectiveScanline16_FUN_005b4823", "tier": "RASTER", "module": "windll.cpp"},
    {"address": "005b50ec", "current_name": "renderPerspectiveCorrectScanline32_FUN_005b50ec", "tier": "RASTER", "module": "windll.cpp"},
    {"address": "005b5322", "current_name": "renderPerspectiveCorrectScanline16_FUN_005b5322", "tier": "RASTER", "module": "windll.cpp"},
    {"address": "005b5710", "current_name": "renderScanline_FUN_005b5710", "tier": "RASTER", "module": "windll.cpp"},
    {"address": "005b5716", "current_name": "renderScanline_FUN_005b5716", "tier": "RASTER", "module": "windll.cpp"},

    # TIER 4: Primitive Infrastructure (prim.c - 6 functions)
    {"address": "00551d60", "current_name": "setupSoftwareEdgeWithZMode_FUN_00551d60", "tier": "INFRA", "module": "prim.c"},
    {"address": "00552510", "current_name": "renderPolygonSoftware_FUN_00552510", "tier": "INFRA", "module": "prim.c"},
    {"address": "00552a40", "current_name": "renderIndexedPolygonSoftware_FUN_00552a40", "tier": "INFRA", "module": "prim.c"},
    {"address": "00553190", "current_name": "setupColoredSoftwareEdge_FUN_00553190", "tier": "INFRA", "module": "prim.c"},
    {"address": "00553470", "current_name": "renderScanlinePolygon_FUN_00553470", "tier": "INFRA", "module": "prim.c"},
    {"address": "00553b10", "current_name": "renderIndexedPolygonAdvanced_FUN_00553b10", "tier": "INFRA", "module": "prim.c"},

    # SUPPORT: Clipping Functions (clipper.c - 3 functions)
    {"address": "004366e0", "current_name": "clipPolygonToViewFrustum_FUN_004366e0", "tier": "SUPPORT", "module": "clipper.c"},
    {"address": "00437ca0", "current_name": "clipPolygonToViewFrustumAdvanced_FUN_00437ca0", "tier": "SUPPORT", "module": "clipper.c"},
    {"address": "00438420", "current_name": "clipPolygonToViewport_FUN_00438420", "tier": "SUPPORT", "module": "clipper.c"},
]

# Base directory for pseudocode annotations
BASE_DIR = "annotations/nocedit.exe/pseudocode"

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

    return flags, flag2_values

def analyze_function_file(address, function_name, module):
    """Analyze a single function file and extract flag data."""
    # Construct file path based on module
    if module == "engine_3d.c":
        filepath = os.path.join(BASE_DIR, "src/engine/3d.c", f"{function_name}.c")
    elif module == "drender.cpp":
        filepath = os.path.join(BASE_DIR, "src/engine/drender.cpp", f"{function_name}.cpp")
    elif module == "windll.cpp":
        filepath = os.path.join(BASE_DIR, "src/wincore/windll.cpp", f"{function_name}.cpp")
    elif module == "prim.c":
        filepath = os.path.join(BASE_DIR, "src/engine/prim.c", f"{function_name}.c")
    elif module == "clipper.c":
        filepath = os.path.join(BASE_DIR, "src/engine/clipper.c", f"{function_name}.c")
    else:
        return None, None, f"Unknown module: {module}"

    if not os.path.exists(filepath):
        return None, None, f"File not found: {filepath}"

    try:
        with open(filepath, 'r', encoding='utf-8') as f:
            content = f.read()

        flags, flag2_values = extract_flag_assignments(content)
        return flags, flag2_values, None

    except Exception as e:
        return None, None, f"Error reading file: {str(e)}"

def generate_technical_name(address, current_name, flags, flag2_values, tier):
    """Generate a technical function name based on flag analysis and tier."""

    # For CORE engine functions, use different naming convention
    if tier == "CORE":
        if not flags:
            return f"coreEngine_NoFlags_{address}"

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
            return f"coreEngine_UnknownFlags_{address}"

        primary_flag = max(flag_ints)

        # Core engine specific naming
        name_parts = ["coreEngine"]

        # Core engine quality modes
        if primary_flag == 0x367:
            name_parts.append("MaximumQuality")
        elif primary_flag == 0x327:
            name_parts.append("ComplexMultiFeature")
        elif primary_flag == 0x2E7:
            name_parts.append("UltraPremium")
        elif primary_flag == 0x2CD:
            name_parts.append("Premium")
        elif primary_flag == 0x267:
            name_parts.append("Enhanced")
        elif primary_flag & 0xC0:
            name_parts.append("Textured")
        elif primary_flag == 0x90:
            name_parts.append("AlternativeDepth")
        elif primary_flag == 0x41:
            name_parts.append("SpecialDepth")
        elif primary_flag == 0:
            name_parts.append("Wireframe")
        else:
            name_parts.append(f"Mode{primary_flag:X}")

        technical_name = "_".join(name_parts) + f"_FUN_{address}"
        return technical_name

    # For API layer functions, use existing logic but with API prefix
    elif tier == "API":
        if not flags:
            return f"apiRender_NoFlags_{address}"

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
            return f"apiRender_UnknownFlags_{address}"

        primary_flag = max(flag_ints)
        name_parts = ["apiRender"]

        # API layer analysis (existing logic)
        if primary_flag & 0x300:
            name_parts.append("EnginePremium")
        elif primary_flag & 0x200:
            name_parts.append("EngineEnhanced")
        elif primary_flag & 0x100:
            name_parts.append("EngineBase")

        if primary_flag & 0xC0:
            if primary_flag & 0x05:
                name_parts.append("TextureWrapped")
            elif primary_flag & 0x03:
                name_parts.append("TexturePerspective")
            elif primary_flag & 0x01:
                name_parts.append("TextureLit")
            else:
                name_parts.append("TextureBase")

        technical_name = "_".join(name_parts) + f"_FUN_{address}"
        return technical_name

    # For other tiers
    else:
        return f"{tier.lower()}_{address}"

def main():
    """Main analysis function for ALL 97 render functions."""
    print("Nocturne COMPLETE Render Function Flag Extractor")
    print("Analyzing ALL 97 render functions across entire codebase")
    print("=" * 60)

    results = []
    stats = {"API": 0, "CORE": 0, "RASTER": 0, "INFRA": 0, "SUPPORT": 0}

    for func_info in RENDER_FUNCTIONS:
        address = func_info["address"]
        current_name = func_info["current_name"]
        tier = func_info["tier"]
        module = func_info["module"]

        print(f"\nAnalyzing {tier} - {current_name}...")
        stats[tier] += 1

        flags, flag2_values, error = analyze_function_file(address, current_name, module)

        if error:
            print(f"  WARNING: {error}")
            results.append({
                "address": address,
                "current_name": current_name,
                "tier": tier,
                "module": module,
                "error": error,
                "flags": [],
                "flag2_values": [],
                "technical_name": "ERROR_ANALYSIS_FAILED",
                "ghidra_equates": []
            })
            continue

        # Generate technical name and equates
        technical_name = generate_technical_name(address, current_name, flags, flag2_values, tier)

        print(f"  Tier: {tier}")
        print(f"  Flags: {flags if flags else 'None'}")
        print(f"  Flag2: {flag2_values if flag2_values else 'None'}")
        print(f"  Technical Name: {technical_name}")

        results.append({
            "address": address,
            "current_name": current_name,
            "tier": tier,
            "module": module,
            "flags": flags,
            "flag2_values": flag2_values,
            "technical_name": technical_name,
            "ghidra_equates": []
        })

    # Generate comprehensive report
    generate_comprehensive_report(results, stats)

def generate_comprehensive_report(results, stats):
    """Generate comprehensive analysis report for all 97 functions."""

    # JSON output for programmatic use
    with open("complete_render_function_analysis.json", "w") as f:
        json.dump(results, f, indent=2)

    # Human-readable report
    with open("complete_render_function_analysis.txt", "w") as f:
        f.write("# Complete Nocturne Render Function Analysis - ALL 97 Functions\n")
        f.write("# Generated by extract_render_flags_UPDATED.py\n")
        f.write("# Includes 4-tier architecture analysis\n\n")

        # Summary statistics
        total_functions = len(results)
        functions_with_flags = sum(1 for r in results if r["flags"])
        functions_with_errors = sum(1 for r in results if "error" in r)

        f.write(f"ARCHITECTURE SUMMARY:\n")
        f.write(f"- Total functions analyzed: {total_functions}\n")
        f.write(f"- API Layer (engine_3d.c): {stats['API']} functions\n")
        f.write(f"- CORE ENGINE (CDemonRenderer): {stats['CORE']} functions\n")
        f.write(f"- Rasterization Backend: {stats['RASTER']} functions\n")
        f.write(f"- Infrastructure: {stats['INFRA']} functions\n")
        f.write(f"- Support: {stats['SUPPORT']} functions\n")
        f.write(f"- Functions with flags: {functions_with_flags}\n")
        f.write(f"- Functions with errors: {functions_with_errors}\n\n")

        # Detailed function analysis by tier
        f.write("DETAILED ANALYSIS BY TIER:\n\n")

        for tier in ["CORE", "API", "RASTER", "INFRA", "SUPPORT"]:
            tier_functions = [r for r in results if r["tier"] == tier]
            if tier_functions:
                f.write(f"{tier} TIER ({len(tier_functions)} functions):\n")
                for result in tier_functions:
                    f.write(f"  {result['address']} | {result['current_name']}\n")
                    f.write(f"    Module: {result['module']}\n")
                    f.write(f"    Flags: {', '.join(result['flags']) if result['flags'] else 'None'}\n")
                    f.write(f"    Flag2: {', '.join(result['flag2_values']) if result['flag2_values'] else 'None'}\n")
                    f.write(f"    Technical Name: {result['technical_name']}\n")
                    if "error" in result:
                        f.write(f"    ERROR: {result['error']}\n")
                    f.write(f"\n")
                f.write(f"\n")

        # Unique flag values summary
        all_flags = set()
        all_flag2s = set()

        for result in results:
            all_flags.update(result["flags"])
            all_flag2s.update(result["flag2_values"])

        f.write("COMPLETE FLAG VALUES ANALYSIS:\n")
        f.write("g_RenderStateFlags values found across all 97 functions:\n")
        for flag in sorted(all_flags, key=lambda x: int(x, 16) if x.startswith('0x') else int(x) if x.isdigit() else 0):
            f.write(f"  {flag}\n")

        f.write("\ng_RenderStateFlag2 values found:\n")
        for flag2 in sorted(all_flag2s, key=lambda x: int(x) if x.isdigit() else 0):
            f.write(f"  {flag2}\n")

    print(f"\nCOMPLETE ANALYSIS FINISHED!")
    print(f"Results saved to:")
    print(f"  - complete_render_function_analysis.json (machine-readable)")
    print(f"  - complete_render_function_analysis.txt (human-readable)")
    print(f"\nArchitecture Summary:")
    for tier, count in stats.items():
        print(f"  {tier}: {count} functions")

if __name__ == "__main__":
    main()