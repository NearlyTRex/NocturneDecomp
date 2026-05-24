#!/usr/bin/env python3
"""
rename_3d_render_handlers.py

Renames the engine/3d.c MRGL block-handler (renderPolygon*) functions in the
Ghidra database to descriptor-based names that mirror the CDemonRenderer render
methods, with the MRGL dispatch opcode (g_MRGLBlockHandlerTable index) appended
for uniqueness.

Only the inner descriptive segment of each function's name is changed. The
"engine_3d.c_" folder prefix and the "_FUN_<addr>" address suffix are preserved
exactly -- the address is load-bearing (it is how the exporter names files and
how .keep files are matched back to their function).

Workflow:
  1. python3 rename_3d_render_handlers.py <proj_dir> <proj_name> <prog> --apply
  2. re-export annotations from Ghidra
  3. python3 sync_keep_names.py annotations/nocedit.exe/pseudocode/src/engine/3d.c
     (updates the existing .keep files to the new names; only touches .keep.*)

Usage:
    python3 rename_3d_render_handlers.py <project_dir> <project_name> <program_name> --preview
    python3 rename_3d_render_handlers.py <project_dir> <project_name> <program_name> --apply
    python3 rename_3d_render_handlers.py <project_dir> <project_name> <program_name> --test

Examples:
    python3 rename_3d_render_handlers.py ./projects NocturneEdit nocedit.exe --preview
    python3 rename_3d_render_handlers.py ./projects NocturneEdit nocedit.exe --apply
"""

import os
import sys
import argparse
import re

# (entry_address, expected_old_inner, new_inner)
# new_inner mirrors the CDemonRenderer descriptor vocabulary + the MRGL opcode
# (g_MRGLBlockHandlerTable index) as the disambiguating suffix.
RENAMES = [
    (0x00403ad0, "renderPolygonLastPixelMode",                    "renderPolygonGrayscaleLitOp5"),
    (0x00403ba0, "renderPolygon",                                 "renderPolygonFogColorOp6"),
    (0x00403cc0, "renderPolygonTextureEnable",                    "renderPolygonTexturedLitOp7"),
    (0x00403d60, "renderPrimitiveUVWrappedSpecial",               "renderPolygonFogTexturedWrappedOp8"),
    (0x00403f20, "renderPolygonTextureNormalizedLit",             "renderPolygonTexturedNormalizedUVLitOp14"),
    (0x00404120, "renderPolygonVertexLit",                        "renderPolygonSolidTexturedOp15"),
    (0x00404220, "renderPolygonLitDetailedClamped",               "renderPolygonSolidLitClampedOp17"),
    (0x004044a0, "renderPolygonTextureNormalized",                "renderPolygonTexturedNormalizedOp21"),
    (0x004046c0, "renderPrimitivePlaneMaskedComplex",             "renderPolygonLitAlphaPlaneMaskedUVOp24"),
    (0x00404ae0, "renderPolygonAdaptiveDepthMode",                "renderPolygonAdaptiveDepthOp25"),
    (0x00404c60, "renderPolygonPlaneMaskedComplex",               "renderPolygonLitAlphaPlaneMaskedOp26"),
    (0x00404d50, "renderPolygonUVMappedComplex",                  "renderPolygonFogColorDepthOp27"),
    (0x00405170, "renderPolygonUVTextureEnableVertexLit",         "renderPolygonTexturedUVLitOp30"),
    (0x004052b0, "renderPolygonLitComplexAlpha",                  "renderPolygonDestReadBlendOp33"),
    (0x00404840, "renderPrimitiveAdaptivePlaneMasked",            "renderPolygonAdaptivePlaneMaskedUVOp34"),
    (0x00404a40, "renderPolygonPlaneMaskedNearPlane",             "renderPolygonLitNearPlaneOp35"),
    (0x00405690, "renderPolygonEnginePlaneMaskedEffect",          "renderPolygonAlphaBlendedPlaneMaskedOp36"),
    (0x004057b0, "renderPolygonEnginePlaneMaskedAdvanced",        "renderPolygonAlphaBlendedPlaneMaskedPerspOp37"),
    (0x004058d0, "renderPolygonUVWrappedAdvanced",                "renderPolygonFogTexturedPerspOp39"),
    (0x00405a00, "renderPolygonUVTextureEnableHardware",          "renderPolygonTexturedHardwareOp40"),
    (0x00405b50, "renderPolygonTextureWrappedPlaneMasked",        "renderPolygonFogTexturedPlaneMaskedOp41"),
    (0x00405ce0, "renderPolygonTextureWrappedStandard",           "renderPolygonFogTexturedDepthOp42"),
    (0x00405d80, "renderPolygonDepthWriteTexturedLit",            "renderPolygonTexturedDepthWriteOp43"),
    (0x00405e20, "renderPolygonDepthWriteTexturedAdvanced",       "renderPolygonFogTexturedDepthWriteOp44"),
    (0x00405ec0, "renderPolygonTexturedBasic",                    "renderPolygonTexturedOp45"),
    (0x00405f60, "renderPolygonOverlayTextured",                  "renderPolygonTexturedOp46"),
    (0x00406000, "renderPolygonDepthWriteTexturedLit2",           "renderPolygonTexturedDepthWriteOp47"),
    (0x004060a0, "renderPolygonTexturePerspectiveCorrect",        "renderPolygonSolidTexturedLitOp48"),
    (0x00406150, "renderPolygonTextureWrappedLit",                "renderPolygonTexturedDepthLitOp49"),
    (0x004061f0, "renderPolygonUVTextureNormalized",              "renderPolygonTexturedNormalizedOp50"),
    (0x00406290, "renderPolygonTexturePerspectiveCorrectClamped", "renderPolygonSolidTexturedClampedOp51"),
    (0x00406430, "renderPolygonTextureAdaptiveWrapped",           "renderPolygonAdaptiveFogTexturedOp52"),
    (0x00405aa0, "renderPolygonUVVertexLit",                      "renderPolygonSolidTexturedHardwareOp53"),
    (0x004066d0, "renderPolygonLastPixelMode2",                   "renderPolygonGrayscaleLitOp54"),
    (0x004067a0, "renderPolygonPerspectiveAlphaSpecial",          "renderPolygonDestReadBlendDepthLitOp55"),
    (0x00406860, "renderPolygonPlaneMaskedDetailedComplex",       "renderPolygonLitAlphaPlaneMaskedUVOp56"),
    (0x00406b40, "renderPolygonExtremeQualityMode",               "renderPolygonFullEffectsLitOp57"),
    (0x00406de0, "renderPolygonSpecialEffectsPlaneMasked",        "renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58"),
    (0x00406f20, "renderPolygonSpecialEffectsAdvanced",           "renderPolygonAlphaBlendedDepthWritePerspOp59"),
    (0x00406be0, "renderPolygonEngineDepthLit",                   "renderPolygonVertexAlphaLitOp60"),
    (0x00406a20, "renderPolygonLitDetailedAmbient",               "renderPolygonSolidLitOp62"),
    (0x00406c80, "renderPolygonEngineEnhancedDepthLit",           "renderPolygonBlendedLitOp63"),
    (0x00407290, "renderPolygonEngineAPIPremiumMultiState",       "renderPolygonFullEffectsBufferedOp65"),
    (0x00407470, "renderPolygonEngineAPIPremiumDirect",           "renderPolygonFullEffectsDirectOp66"),

    # --- Not in g_MRGLBlockHandlerTable (no dispatch opcode -> no OpNN suffix). ---
    # LIVE (real callers):
    (0x00407620, "renderPolygonAPIAdaptivePreprocessing",         "renderPolygonWithRenderFlags"),    # called by CBitFont::render3DCharacter (font glyphs); parameterized by render_flags
    (0x00405960, "renderPolygonDepthWriteTextured",               "renderPolygonDepthWritePass"),     # helper called by op58/op59 SpecialEffects handlers
    # DEAD (zero callers anywhere, not dispatched) -- rename for consistency OR delete in Ghidra:
    (0x00407720, "renderPolygonAPIAdaptivePreprocessingWithUV",   "renderPolygonWithRenderFlagsUV"),
    (0x00404020, "renderOverlayTextureEnable",                    "renderPolygonTexturedUVLitPlaneMasked"),
    (0x004055b0, "renderPolygonPerspectiveNormalized",            "renderPolygonTexturedNormalizedUVLit"),
    (0x00405430, "renderPolygonUVTextureNormalizedLit",           "renderPolygonTexturedNormalizedUVLit2"),  # byte-identical dup of 0x004055b0
    (0x00404ee0, "renderPolygonTextureNearPlane",                 "renderPolygonTexturedNearPlane"),
    (0x00405350, "renderPolygonUVTextureEnableNormalized",        "renderPolygonTexturedUVLit"),
    (0x00405510, "renderPolygonUVVertexLitNormalized",            "renderPolygonAlphaTexturedNormalizedLit"),
    (0x00404e40, "renderPolygonVertexLitNearPlane",               "renderPolygonAlphaTexturedNearPlane"),
    (0x00404f80, "renderPolygonVertexLitNormalized",              "renderPolygonAlphaTexturedNormalized"),
    (0x00405020, "renderPolygonVertexLitNormalized2",             "renderPolygonAlphaTexturedNormalized2"),  # byte-identical dup of 0x00404f80
]

# Matches "<prefix>_FUN_<hex>" and captures the part before "_FUN_" and the addr.
_NAME_RE = re.compile(r'^(?P<pre>.*)_FUN_(?P<addr>[0-9a-fA-F]+)$')


def get_address(program, offset):
    return program.getAddressFactory().getDefaultAddressSpace().getAddress(offset)


def compute_new_name(current_name, old_inner, new_inner):
    """Return (new_name, status). Preserves the folder prefix and _FUN_<addr>
    suffix; swaps only the inner descriptive segment. status is one of
    'rename', 'already', 'mismatch'."""
    m = _NAME_RE.match(current_name)
    if not m:
        return None, "mismatch"
    pre, addr = m.group("pre"), m.group("addr")
    if pre.endswith(new_inner):
        return None, "already"
    if not pre.endswith(old_inner):
        return None, "mismatch"
    folder_prefix = pre[:len(pre) - len(old_inner)]   # e.g. "engine_3d.c_"
    return "%s%s_FUN_%s" % (folder_prefix, new_inner, addr), "rename"


def apply_renames(program, dry_run):
    from ghidra.program.model.symbol import SourceType

    fm = program.getFunctionManager()
    n_ren = n_already = n_miss = n_nofunc = 0
    for offset, old_inner, new_inner in RENAMES:
        addr = get_address(program, offset)
        func = fm.getFunctionAt(addr)
        if func is None:
            print("  NO FUNCTION at 0x%08x (expected %s)" % (offset, old_inner))
            n_nofunc += 1
            continue
        current = func.getName()
        new_name, status = compute_new_name(current, old_inner, new_inner)
        if status == "already":
            print("  already   0x%08x  %s" % (offset, current))
            n_already += 1
        elif status == "mismatch":
            print("  MISMATCH  0x%08x  has '%s' (expected inner '%s') -- SKIPPED"
                  % (offset, current, old_inner))
            n_miss += 1
        else:
            print("  rename    0x%08x  %s\n                     -> %s"
                  % (offset, current, new_name))
            if not dry_run:
                func.setName(new_name, SourceType.USER_DEFINED)
            n_ren += 1
    print("\n%s: %d renamed, %d already done, %d mismatched, %d missing"
          % ("DRY-RUN" if dry_run else "APPLIED", n_ren, n_already, n_miss, n_nofunc))
    return n_miss == 0 and n_nofunc == 0


def main():
    parser = argparse.ArgumentParser(
        description="Rename engine/3d.c MRGL render handlers in the Ghidra DB",
        formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("project_path", help="Path to Ghidra project directory")
    parser.add_argument("project_name", help="Ghidra project name")
    parser.add_argument("program_name", help="Program name within the project")
    group = parser.add_mutually_exclusive_group(required=True)
    group.add_argument("--preview", action="store_true",
                       help="Show planned renames only (no DB changes)")
    group.add_argument("--apply", action="store_true",
                       help="Apply renames and save the program")
    group.add_argument("--test", action="store_true",
                       help="Apply in a transaction, then roll back (no save)")
    args = parser.parse_args()

    try:
        import pyghidra
    except ImportError:
        print("ERROR: pyghidra is not installed.")
        sys.exit(1)

    print("Starting PyGhidra...")
    pyghidra.start()
    project_path = os.path.abspath(args.project_path)
    print("Opening project: %s/%s" % (project_path, args.project_name))

    exit_code = 0
    project = pyghidra.open_project(project_path, args.project_name)
    with pyghidra.program_context(project, "/" + args.program_name) as prog:
        if args.preview:
            apply_renames(prog, dry_run=True)
        elif args.test:
            tx = prog.startTransaction("Test rename 3d.c render handlers")
            try:
                apply_renames(prog, dry_run=False)
            finally:
                prog.endTransaction(tx, False)  # roll back
            print("(rolled back -- no changes saved)")
        else:  # --apply
            tx = prog.startTransaction("Rename 3d.c render handlers")
            ok = False
            try:
                ok = apply_renames(prog, dry_run=False)
            finally:
                prog.endTransaction(tx, True)
            if ok:
                prog.save("Rename 3d.c render handlers", None)
                print("Saved.")
            else:
                print("WARNING: mismatches/missing functions -- review output above. "
                      "Changes are committed to the transaction; re-run --preview to verify.")
                exit_code = 1
    sys.exit(exit_code)


if __name__ == "__main__":
    main()
