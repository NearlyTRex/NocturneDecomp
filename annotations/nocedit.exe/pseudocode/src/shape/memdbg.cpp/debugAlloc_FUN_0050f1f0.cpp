// Name: shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
// Address: 0050f1f0
// Address Range: [[0050f1f0, 0050f209]]
// Convention: __cdecl
// Signature: void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
// Cross-references:
//   cockpit_ckptutil.c_generateScrollHeightMap_FUN_00432df0 (00432df0) at 00432e35 [UNCONDITIONAL_CALL]
//   cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_0054b190 (0054b190) at 0054b1e5 [UNCONDITIONAL_CALL]
//   cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_0054b690 (0054b690) at 0054b7a5 [UNCONDITIONAL_CALL]
//   cockpit_pkbitmap.cpp_parsePBGFile_FUN_0054b9b0 (0054b9b0) at 0054ba8a [UNCONDITIONAL_CALL]
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_0054bdb0 (0054bdb0) at 0054bdf9 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_CCloth_allocMemory_FUN_00438c50 (00438c50) at 00438c6f [UNCONDITIONAL_CALL]
//   core_course.cpp_CCourse_allocMemory_FUN_00442500 (00442500) at 0044252c [UNCONDITIONAL_CALL]
//   core_dcube.cpp_CDemonCube_allocGeometryMemory_FUN_00456840 (00456840) at 00456864 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_allocate_FUN_00477bf0 (00477bf0) at 00477cc1 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00478830 (00478830) at 004788e6 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330 (00479330) at 00479ddf [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_00477110 (00477110) at 004775d0 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30 (0047aa30) at 0047aa88 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_weldAndRemoveUnusedVertices_FUN_0047ada0 (0047ada0) at 0047aded [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_00494380 (00494380) at 004943b7 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_allocTriList_FUN_00494600 (00494600) at 00494643 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_crunch_FUN_00495310 (00495310) at 00495409 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0 (004947a0) at 00494993 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_ViewerVisitSet_FUN_0057a940 (0057a940) at 0057a9bc [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 (00578d80) at 00579af1 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_Something2MemoryConstructorMaybe_FUN_0057fd00 (0057fd00) at 0057fd55 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_SomethingMemoryConstructorMaybe_FUN_00580310 (00580310) at 00580344 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_UserInputCreate_FUN_0057d660 (0057d660) at 0057d971 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModel_determinePartsFromS3D_FUN_0058f810 (0058f810) at 0058fef0 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModel_exportModelToS3D_FUN_00595fc0 (00595fc0) at 00596026 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058d790 (0058d790) at 0058dc9f [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_allocPointList_FUN_0059deb0 (0059deb0) at 0059dee2 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_allocLOD_FUN_0059a510 (0059a510) at 0059a662 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CSkeleton_allocMemory_FUN_00599910 (00599910) at 00599986 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40 (004b9f40) at 004ba046 [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_loadBitmap_FUN_004ccff0 (004ccff0) at 004cd0c6 [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_parseCharacterMetrics_FUN_004cd550 (004cd550) at 004cd584 [UNCONDITIONAL_CALL]
//   engine_palette.cpp_CPaletteManager_ctor_FUN_00544f10 (00544f10) at 00544f2e [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_copyToClipboard_FUN_004a3270 (004a3270) at 004a32bc [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0 (0049e9d0) at 0049ea63 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_createOrigSamplePoints_FUN_00517000 (00517000) at 00517045 [UNCONDITIONAL_CALL]
//   shape_quantize.cpp_CBitmap_ctor_FUN_00556a00 (00556a00) at 00556aa4 [UNCONDITIONAL_CALL]
//   shape_quantize.cpp_CColorQuantizer_errorDiffusionBuffers_FUN_00555500 (00555500) at 0055566c [UNCONDITIONAL_CALL]
// Function calls:
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250

#include "nocturne.h"

void * __cdecl shape_memdbg_cpp_debugAlloc_FUN_0050f1f0(int size,char *filename,int line_number)

{
  void *pvVar1;
  
  pvVar1 = shape_memdbg_cpp_debugMalloc_FUN_0050f250(size,filename,line_number);
  return pvVar1;
}


// Assembly code:
// 0050f1f0: PUSH EBX
//   Label: shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
// 0050f1f1: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0050f1f5: PUSH EDX
// 0050f1f6: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0050f1fa: PUSH ECX
// 0050f1fb: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0050f1ff: PUSH EBX
// 0050f200: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 0050f205: ADD ESP,0xc
// 0050f208: POP EBX
// 0050f209: RET
