// Name: wincore_windll.cpp_clearZBuffer_FUN_005b3ed4
// Address: 005b3ed4
// Address Range: [[005b3ed4, 005b3f36]]
// Convention: __cdecl
// Signature: void wincore_windll.cpp_clearZBuffer_FUN_005b3ed4(void)
// Cross-references:
//   core_cloth.cpp_BoneAndClothEditor_FUN_0043c880 (0043c880) at 0043ca9f [UNCONDITIONAL_CALL]
//   core_cloth.cpp_LockVerticesMaybe_FUN_0043d590 (0043d590) at 0043d6d9 [UNCONDITIONAL_CALL]
//   core_course.cpp_FUN_00443bc0 (00443bc0) at 00443ccf [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430 (0044c430) at 0044c658 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047ccab [UNCONDITIONAL_CALL]
//   core_moon.cpp_CMoon_FUN_00529ed0 (00529ed0) at 00529ee6 [UNCONDITIONAL_CALL]
//   core_moon.cpp_FUN_0052a2c0 (0052a2c0) at 0052a2cc [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052ca90 (0052ca90) at 0052cb07 [UNCONDITIONAL_CALL]
//   core_morph.cpp_Select1stModel_Select2ndModel_Loading_FUN_0052bcb0 (0052bcb0) at 0052bfb7 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053a316 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056c990 (0056c990) at 0056cce7 [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CZThumb_saveZBufferTable_FUN_00574910 (00574910) at 00574a56 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00581aa0 (00581aa0) at 00581b86 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00583170 (00583170) at 00583287 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_WriteActBackdrop_FUN_0057ce80 (0057ce80) at 0057d068 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_DefinitelyRelatedToEditorMode_FUN_005968b0 (005968b0) at 00596ba6 [UNCONDITIONAL_CALL]
//   shape_design.c_showFacetPartEditor_FUN_0045f1d0 (0045f1d0) at 0045f338 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051d520 (0051d520) at 0051d590 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051d990 (0051d990) at 0051dbaa [UNCONDITIONAL_CALL]
// Globals:
//   int g_WindowWidth = 0x140
//   double g_SelectedClearColor = 0.0
//   double g_ClearColor = 0.0
//   uint*[1024] g_ZBufferScanlineArray
//   int g_ClipTop
//   int g_ClipBottom

#include "nocturne.h"

void __cdecl wincore_windll_cpp_clearZBuffer_FUN_005b3ed4(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  double *pdVar4;
  
  g_ClearColor = g_SelectedClearColor;
  pdVar4 = (double *)(g_ZBufferScanlineArray[0] + g_ClipTop * g_WindowWidth);
  iVar2 = ((g_ClipBottom - g_ClipTop) + 1) * g_WindowWidth;
  do {
    *pdVar4 = g_ClearColor;
    pdVar4[1] = g_ClearColor;
    pdVar4[2] = g_ClearColor;
    pdVar4[3] = g_ClearColor;
    pdVar4[4] = g_ClearColor;
    pdVar4[5] = g_ClearColor;
    pdVar4[6] = g_ClearColor;
    pdVar4[7] = g_ClearColor;
    pdVar4 = pdVar4 + 8;
    iVar3 = iVar2 + -0x10;
    bVar1 = 0xf < iVar2;
    iVar2 = iVar3;
  } while (iVar3 != 0 && bVar1);
  return;
}


// Assembly code:
// 005b3ed4: PUSH ESI
//   Label: wincore_windll.cpp_clearZBuffer_FUN_005b3ed4
// 005b3ed5: PUSH EDI
// 005b3ed6: PUSHAD
// 005b3ed7: CLD
// 005b3ed8: PUSH DS
// 005b3ed9: POP ES
// 005b3eda: MOV EDI,dword ptr [0x02cf7d5c]
//   XREF to: 02cf7d5c (READ)
// 005b3ee0: MOV EAX,[0x02d0255c]
//   XREF to: 02d0255c (READ)
// 005b3ee5: MOV ECX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 005b3eeb: MUL ECX
// 005b3eed: SHL EAX,0x2
// 005b3ef0: ADD EDI,EAX
// 005b3ef2: MOV EAX,[0x02d02564]
//   XREF to: 02d02564 (READ)
// 005b3ef7: SUB EAX,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 005b3efd: INC EAX
// 005b3efe: MOV ECX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 005b3f04: MUL ECX
// 005b3f06: MOV ECX,EAX
// 005b3f08: FLD double ptr [0x0068261c]
//   XREF to: 0068261c (READ)
// 005b3f0e: FST double ptr [EDI]
//   Label: LAB_005b3f0e
// 005b3f10: FST double ptr [EDI + 0x8]
// 005b3f13: FST double ptr [EDI + 0x10]
// 005b3f16: FST double ptr [EDI + 0x18]
// 005b3f19: FST double ptr [EDI + 0x20]
// 005b3f1c: FST double ptr [EDI + 0x28]
// 005b3f1f: FST double ptr [EDI + 0x30]
// 005b3f22: FST double ptr [EDI + 0x38]
// 005b3f25: ADD EDI,0x40
// 005b3f28: SUB ECX,0x10
// 005b3f2b: JG 0x005b3f0e
//   XREF to: 005b3f0e (CONDITIONAL_JUMP)
// 005b3f2d: FSTP double ptr [0x00682624]
//   XREF to: 00682624 (WRITE)
// 005b3f33: POPAD
// 005b3f34: POP EDI
// 005b3f35: POP ESI
// 005b3f36: RET
