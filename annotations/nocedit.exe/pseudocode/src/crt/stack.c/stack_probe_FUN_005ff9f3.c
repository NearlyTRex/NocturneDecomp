// Name: crt_stack.c_stack_probe_FUN_005ff9f3
// Address: 005ff9f3
// Address Range: [[005ff9f3, 005ffa02]]
// Convention: __stdcall
// Signature: uint crt_stack.c_stack_probe_FUN_005ff9f3(uint stack_size)
// Cross-references:
//   core_skeledit.cpp_CBoneStructure_fixupMatrices_FUN_0058adb0 (0058adb0) at 0058adb5 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CBoneStructure_importBON_FUN_0058a3d0 (0058a3d0) at 0058a3d5 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CBoneStructure_readBONframe_FUN_0058aa10 (0058aa10) at 0058aa15 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CBoneStructure_readBONheader_FUN_0058a4a0 (0058a4a0) at 0058a4a5 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CBoneStructure_skipBONframe_FUN_0058abb0 (0058abb0) at 0058abb5 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_exportModelToS3D_FUN_00598ee0 (00598ee0) at 00598ee5 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 (005968b0) at 005968b5 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModel_calcRootOffsetScale_FUN_0058e690 (0058e690) at 0058e695 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModel_determinePartsFromS3D_FUN_0058f810 (0058f810) at 0058f815 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModel_exportModelToS3D_FUN_00595fc0 (00595fc0) at 00595fc5 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModel_removeUnusedTextures_FUN_0058ec60 (0058ec60) at 0058ec65 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModel_saveStream_FUN_0058f120 (0058f120) at 0058f125 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModel_save_FUN_0058f040 (0058f040) at 0058f045 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformable_groundBias_FUN_0058e4e0 (0058e4e0) at 0058e4e5 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CSkeleton_saveStream_FUN_0058b3a0 (0058b3a0) at 0058b3a5 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CSkeleton_save_FUN_0058b2c0 (0058b2c0) at 0058b2c5 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00589450 (00589450) at 00589455 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_005894c0 (005894c0) at 005894c5 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00589500 (00589500) at 00589505 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00589530 (00589530) at 00589535 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_005896b0 (005896b0) at 005896b5 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00589740 (00589740) at 00589745 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_005897b0 (005897b0) at 005897b5 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00589a40 (00589a40) at 00589a45 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00589b10 (00589b10) at 00589b15 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00589bb0 (00589bb0) at 00589bb5 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00589c20 (00589c20) at 00589c25 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00589f40 (00589f40) at 00589f45 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00589fa0 (00589fa0) at 00589fa5 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00589fc0 (00589fc0) at 00589fc5 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00589fe0 (00589fe0) at 00589fe5 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058a0f0 (0058a0f0) at 0058a0f5 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058a1b0 (0058a1b0) at 0058a1b5 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058a2b0 (0058a2b0) at 0058a2b5 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058ac30 (0058ac30) at 0058ac35 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058ac80 (0058ac80) at 0058ac85 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058ad30 (0058ad30) at 0058ad35 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058aeb0 (0058aeb0) at 0058aeb5 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058af40 (0058af40) at 0058af45 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058afe0 (0058afe0) at 0058afe5 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058b160 (0058b160) at 0058b165 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058b200 (0058b200) at 0058b205 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058b260 (0058b260) at 0058b265 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058b660 (0058b660) at 0058b665 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058b8e0 (0058b8e0) at 0058b8e5 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058b9b0 (0058b9b0) at 0058b9b5 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058bc40 (0058bc40) at 0058bc45 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058bd00 (0058bd00) at 0058bd05 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058c195 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058d790 (0058d790) at 0058d795 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058dde0 (0058dde0) at 0058dde5 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058de70 (0058de70) at 0058de75 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058e0b0 (0058e0b0) at 0058e0b5 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058e240 (0058e240) at 0058e245 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058e3e0 (0058e3e0) at 0058e3e5 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058e600 (0058e600) at 0058e605 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058eaa0 (0058eaa0) at 0058eaa5 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058ede0 (0058ede0) at 0058ede5 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058f790 (0058f790) at 0058f795 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00592520 (00592520) at 00592525 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_005925c0 (005925c0) at 005925c5 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00592690 (00592690) at 00592695 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00595f30 (00595f30) at 00595f35 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00596860 (00596860) at 00596865 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00598f10 (00598f10) at 00598f15 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00599480 (00599480) at 00599485 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_005995d0 (005995d0) at 005995d5 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00599630 (00599630) at 00599635 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00599650 (00599650) at 00599655 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260 (0058a260) at 0058a265 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_LodVert_copy_FUN_00599550 (00599550) at 00599555 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_LodVert_dtor_FUN_005995c0 (005995c0) at 005995c5 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_readNonEmptyLine_FUN_005895f0 (005895f0) at 005895f5 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_viewModel_FUN_00598fc0 (00598fc0) at 00598fc5 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CSkeleton_ctor_FUN_00599880 (00599880) at 00599885 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CSkeleton_dtor_FUN_005998e0 (005998e0) at 005998e5 [UNCONDITIONAL_CALL]
//   crt_process.c_spawnvp_FUN_0060f39c (0060f39c) at 0060f3a1 [UNCONDITIONAL_CALL]
//   crt_process.c_spawnvp_with_path_search_FUN_0060e6a0 (0060e6a0) at 0060e6a5 [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_addTextureEntry_FUN_00446100 (00446100) at 00446105 [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_calculateAtlasEfficiency_FUN_00447e80 (00447e80) at 00447e85 [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_findHighestOverlappingY_FUN_004478c0 (004478c0) at 004478c5 [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_findLeftmostOverlappingX_FUN_00447a10 (00447a10) at 00447a15 [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_findLowestOverlappingY_FUN_00447930 (00447930) at 00447935 [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_findRightmostOverlappingX_FUN_004479a0 (004479a0) at 004479a5 [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_mapCoordinateToAtlas_FUN_00447a80 (00447a80) at 00447a85 [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_maxInt_FUN_00448440 (00448440) at 00448445 [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_performGapFillingOptimization_FUN_00447590 (00447590) at 00447595 [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_printAtlasLayoutReport_FUN_004481d0 (004481d0) at 004481d5 [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_qsortRectanglesByActiveFlag_FUN_00446140 (00446140) at 00446145 [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_renderAllTexturesAndRectangles_FUN_00447ab0 (00447ab0) at 00447ab5 [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_renderTextureEntry_FUN_00447c20 (00447c20) at 00447c25 [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_runInteractiveAtlasGeneration_FUN_00446160 (00446160) at 00446165 [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_visualizeTextureAtlas_FUN_00447f20 (00447f20) at 00447f25 [UNCONDITIONAL_CALL]
//   shape_quantize.cpp_FUN_00554900 (00554900) at 00554905 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stack.c_check_stack_target_FUN_005ffa03

#include "nocturne.h"

uint __stdcall crt_stack_c_stack_probe_FUN_005ff9f3(uint stack_size)

{
  uint in_stack_00000008;
  
  LOCK();
  UNLOCK();
  crt_stack_c_check_stack_target_FUN_005ffa03((void *)stack_size);
  return in_stack_00000008;
}


// Assembly code:
// 005ff9f3: XCHG dword ptr [ESP + 0x4],EAX
//   Label: crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: Stack[0x4] (READ_WRITE)
// 005ff9f7: CALL crt_stack.c_check_stack_target_FUN_005ffa03
//   XREF to: 005ffa03 (UNCONDITIONAL_CALL)
// 005ff9fc: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005ffa00: RET 0x4
