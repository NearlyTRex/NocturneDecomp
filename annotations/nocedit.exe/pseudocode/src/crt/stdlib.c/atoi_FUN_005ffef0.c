// Name: crt_stdlib.c_atoi_FUN_005ffef0
// Address: 005ffef0
// Address Range: [[005ffef0, 005fff46]]
// Convention: __cdecl
// Signature: int crt_stdlib.c_atoi_FUN_005ffef0(char * string_ptr)
// Cross-references:
//   core_dcube.cpp_CDemonCube_buildGeometryFromPolygonData (00456ed0) at 00456fc9 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 (0057e7c0) at 0057eec3 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_00576950 (00576950) at 00576982 [UNCONDITIONAL_CALL]
//   core_texlist.cpp_CTextureList_load_FUN_005dbe00 (005dbe00) at 005dbf54 [UNCONDITIONAL_CALL]
//   engine_ini.cpp_getProfileInteger_FUN_004fb9a0 (004fb9a0) at 004fba04 [UNCONDITIONAL_CALL]
//   shape_design.c_centerKeyframeModels_FUN_004681a0 (004681a0) at 004681e3 [UNCONDITIONAL_CALL]
//   shape_design.c_centerVerticesAroundPoint_FUN_0045ea90 (0045ea90) at 0045ead3 [UNCONDITIONAL_CALL]
//   shape_design.c_configureSpatialSplittingPlane_FUN_004617c0 (004617c0) at 0046195a [UNCONDITIONAL_CALL]
//   shape_design.c_cramTextureList_FUN_0046bb80 (0046bb80) at 0046c489 [UNCONDITIONAL_CALL]
//   shape_design.c_createCenterVertex_FUN_00469690 (00469690) at 0046976c [UNCONDITIONAL_CALL]
//   shape_design.c_createKeyframeModel_FUN_00468320 (00468320) at 004683ad [UNCONDITIONAL_CALL]
//   shape_design.c_createRotationalSweepGeometry_FUN_0045e070 (0045e070) at 0045e123 [UNCONDITIONAL_CALL]
//   shape_design.c_deleteSinglePolygon_FUN_0045dcc0 (0045dcc0) at 0045dcfe [UNCONDITIONAL_CALL]
//   shape_design.c_generateGlobe_FUN_00468910 (00468910) at 00468962 [UNCONDITIONAL_CALL]
//   shape_design.c_generateOctant_FUN_00469420 (00469420) at 00469472 [UNCONDITIONAL_CALL]
//   shape_design.c_generateShell_FUN_00468f20 (00468f20) at 00468f72 [UNCONDITIONAL_CALL]
//   shape_design.c_interactiveGlobalWeld_FUN_00466040 (00466040) at 00466083 [UNCONDITIONAL_CALL]
//   shape_design.c_loadModelFile_FUN_00458ac0 (00458ac0) at 00458f2d [UNCONDITIONAL_CALL]
//   shape_design.c_loadPalette_FUN_0046e810 (0046e810) at 0046e8a3 [UNCONDITIONAL_CALL]
//   shape_design.c_polygonReducer_FUN_004654e0 (004654e0) at 0046552c [UNCONDITIONAL_CALL]
//   shape_design.c_selectVertexToDelete_FUN_0045c5b0 (0045c5b0) at 0045c5f0 [UNCONDITIONAL_CALL]
//   shape_design.c_selectVertexToMove_FUN_0045c530 (0045c530) at 0045c570 [UNCONDITIONAL_CALL]
//   shape_design.c_sizeForStadium_FUN_00469c70 (00469c70) at 00469d02 [UNCONDITIONAL_CALL]
//   shape_design.c_translateAllVerticesAlongAxis_FUN_0045ec90 (0045ec90) at 0045ed1e [UNCONDITIONAL_CALL]
//   wincore_winvideo.cpp_openMovie_FUN_005f4700 (005f4700) at 005f4781 [UNCONDITIONAL_CALL]
//   wincore_winvideo.cpp_playMovie_FUN_005f4a00 (005f4a00) at 005f4af6 [UNCONDITIONAL_CALL]
// Globals:
//   char[256] g_CharacterClassificationTable

#include "nocturne.h"

int __cdecl crt_stdlib_c_atoi_FUN_005ffef0(char *string_ptr)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  
  while ((g_CharacterClassificationTable[(byte)(*string_ptr + 1)] & 2U) != 0) {
    string_ptr = (char *)((byte *)string_ptr + 1);
  }
  bVar1 = *string_ptr;
  if ((bVar1 == 0x2b) || (bVar1 == 0x2d)) {
    string_ptr = (char *)((byte *)string_ptr + 1);
  }
  iVar3 = 0;
  while ((g_CharacterClassificationTable[(byte)(*string_ptr + 1)] & 0x20U) != 0) {
    bVar2 = *string_ptr;
    string_ptr = (char *)((byte *)string_ptr + 1);
    iVar3 = iVar3 * 10 + (uint)bVar2 + -0x30;
  }
  if (bVar1 == 0x2d) {
    iVar3 = -iVar3;
  }
  return iVar3;
}


// Assembly code:
// 005ffef0: PUSH EBX
//   Label: crt_stdlib.c_atoi_FUN_005ffef0
// 005ffef1: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005ffef5: MOV DL,byte ptr [EAX]
//   Label: LAB_005ffef5
// 005ffef7: INC DL
// 005ffef9: AND EDX,0xff
// 005ffeff: TEST byte ptr [EDX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 005fff06: JZ 0x005fff0b
//   XREF to: 005fff0b (CONDITIONAL_JUMP)
// 005fff08: INC EAX
// 005fff09: JMP 0x005ffef5
//   XREF to: 005ffef5 (UNCONDITIONAL_JUMP)
// 005fff0b: MOV CL,byte ptr [EAX]
//   Label: LAB_005fff0b
// 005fff0d: CMP CL,0x2b
// 005fff10: JZ 0x005fff17
//   XREF to: 005fff17 (CONDITIONAL_JUMP)
// 005fff12: CMP CL,0x2d
// 005fff15: JNZ 0x005fff18
//   XREF to: 005fff18 (CONDITIONAL_JUMP)
// 005fff17: INC EAX
//   Label: LAB_005fff17
// 005fff18: XOR EDX,EDX
//   Label: LAB_005fff18
// 005fff1a: MOV BL,byte ptr [EAX]
//   Label: LAB_005fff1a
// 005fff1c: INC BL
// 005fff1e: AND EBX,0xff
// 005fff24: TEST byte ptr [EBX + 0x6849c4],0x20
//   XREF to: 006849c4 (DATA)
// 005fff2b: JZ 0x005fff3c
//   XREF to: 005fff3c (CONDITIONAL_JUMP)
// 005fff2d: IMUL EDX,EDX,0xa
// 005fff30: XOR EBX,EBX
// 005fff32: MOV BL,byte ptr [EAX]
// 005fff34: ADD EDX,EBX
// 005fff36: INC EAX
// 005fff37: SUB EDX,0x30
// 005fff3a: JMP 0x005fff1a
//   XREF to: 005fff1a (UNCONDITIONAL_JUMP)
// 005fff3c: CMP CL,0x2d
//   Label: LAB_005fff3c
// 005fff3f: JNZ 0x005fff43
//   XREF to: 005fff43 (CONDITIONAL_JUMP)
// 005fff41: NEG EDX
// 005fff43: MOV EAX,EDX
//   Label: LAB_005fff43
// 005fff45: POP EBX
// 005fff46: RET
