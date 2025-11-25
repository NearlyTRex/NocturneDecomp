// Name: shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
// Address: 004a1330
// Address Range: [[004a1330, 004a1377]]
// Convention: __cdecl
// Signature: uchar shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(CEditorTools * this_ptr)
// Cross-references:
//   core_cloth.cpp_BoneAndClothEditor_FUN_0043c880 (0043c880) at 0043cb57 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043b7e0 (0043b7e0) at 0043b9c4 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_LockVerticesMaybe_FUN_0043d590 (0043d590) at 0043d9f5 [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a8860 (004a8860) at 004a8a4b [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_00509c60 (00509c60) at 00509d42 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_00509d50 (00509d50) at 00509dcd [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052bcb0 (0052bcb0) at 0052c301 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 005396e0 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00581aa0 (00581aa0) at 00581d63 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00583170 (00583170) at 00583523 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 (005968b0) at 0059759f [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380 (004a1380) at 004a1390 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990 (0051d990) at 0051dec6 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_previewLodGeneration_FUN_0051d520 (0051d520) at 0051d641 [UNCONDITIONAL_CALL]
// Globals:
//   uchar[32768] g_ColorCubeLookup
//   undefined4 UCHAR_ARRAY_02cf9400
//   undefined4 UCHAR_ARRAY_02d00c3f
//   undefined4 UCHAR_ARRAY_02d0101f
// Function calls:
//   wincore_winrun.cpp_getTime_FUN_005f2dc0

#include "nocturne.h"

uchar __cdecl
shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(CEditorTools *this_ptr)

{
  uint uVar1;
  
  uVar1 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  uVar1 = uVar1 & 0x30000;
  if (uVar1 < 0x10000) {
    if (uVar1 == 0) {
      return g_ColorCubeLookup[0];
    }
  }
  else {
    if (uVar1 < 0x10001) {
      return g_ColorCubeLookup[0x7fff];
    }
    if (0x1ffff < uVar1) {
      if (uVar1 < 0x20001) {
        return g_ColorCubeLookup[0x3e0];
      }
      if (uVar1 == 0x30000) {
        return g_ColorCubeLookup[0x7c1f];
      }
    }
  }
  return '\0';
}


// Assembly code:
// 004a1330: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   Label: shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 004a1335: AND EAX,0x30000
// 004a133a: CMP EAX,0x10000
// 004a133f: JNC 0x004a1363
//   XREF to: 004a1363 (CONDITIONAL_JUMP)
// 004a1341: TEST EAX,EAX
// 004a1343: JNZ 0x004a1375
//   XREF to: 004a1375 (CONDITIONAL_JUMP)
// 004a1345: MOV AL,[0x02cf9020]
//   XREF to: 02cf9020 (READ)
// 004a134a: RET
// 004a134b: XOR EAX,EAX
//   Label: LAB_004a134b
// 004a134d: MOV AL,[0x02d0101f]
//   XREF to: 02d0101f (READ)
// 004a1352: RET
// 004a1353: XOR EAX,EAX
//   Label: LAB_004a1353
// 004a1355: MOV AL,[0x02cf9400]
//   XREF to: 02cf9400 (READ)
// 004a135a: RET
// 004a135b: XOR EAX,EAX
//   Label: LAB_004a135b
// 004a135d: MOV AL,[0x02d00c3f]
//   XREF to: 02d00c3f (READ)
// 004a1362: RET
// 004a1363: JBE 0x004a134b
//   Label: LAB_004a1363
//   XREF to: 004a134b (CONDITIONAL_JUMP)
// 004a1365: CMP EAX,0x20000
// 004a136a: JC 0x004a1375
//   XREF to: 004a1375 (CONDITIONAL_JUMP)
// 004a136c: JBE 0x004a1353
//   XREF to: 004a1353 (CONDITIONAL_JUMP)
// 004a136e: CMP EAX,0x30000
// 004a1373: JZ 0x004a135b
//   XREF to: 004a135b (CONDITIONAL_JUMP)
// 004a1375: XOR EAX,EAX
//   Label: LAB_004a1375
// 004a1377: RET
