// Name: core_charactr.cpp_CCharacter_FUN_00429aa0
// Address: 00429aa0
// Address Range: [[00429aa0, 00429b3b]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_00429aa0(CCharacter * this_ptr)
// Cross-references:
//   core_batman.cpp_CBatman_FUN_004173b0 (004173b0) at 00417456 [UNCONDITIONAL_CALL]
//   core_biggs.cpp_FUN_004189b0 (004189b0) at 00418ab3 [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041d1b0 (0041d1b0) at 0041d22b [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042a2c0 (0042a2c0) at 0042a324 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042a390 (0042a390) at 0042a3cd [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00485be0 (00485be0) at 00485cda [UNCONDITIONAL_CALL]
//   core_moloch.cpp_FUN_00529750 (00529750) at 0052986a [UNCONDITIONAL_CALL]
//   core_passngr.cpp_FUN_005460c0 (005460c0) at 00546120 [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_FUN_005c7590 (005c7590) at 005c76fd [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CGame* g_CGamePtr = 02d81a9c
//   CDemonRenderer g_CDemonRendererInstance
//   CGame g_CGameInstance
//   undefined4 DAT_02d81cb8
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_00429b40
//   core_charactr.cpp_CCharacter_FUN_0042a420
//   core_charactr.cpp_CCharacter_FUN_0042ad00
//   core_charactr.cpp_CCharacter_FUN_0042af60
//   core_cloth.cpp_MultipleCallSaveJoinedLight_FUN_0043c320
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0150
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_00429aa0(CCharacter *this_ptr)

{
  int iVar1;
  
  if (*(int *)(this_ptr->cloth_data + 0x8d40) == 0) {
    core_skeleton_cpp_CDeformableModelInstance_FUN_005a0150(&this_ptr->model);
    core_cloth_cpp_MultipleCallSaveJoinedLight_FUN_0043c320();
  }
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (iVar1 == 0) {
    if (*(int *)(this_ptr->field11_0x25a0 + 0x74) == 0) {
      core_charactr_cpp_CCharacter_FUN_0042ad00(this_ptr);
    }
    if (0.0 < *(float *)(this_ptr->cloth_data + 0x8d48)) {
      core_charactr_cpp_CCharacter_FUN_0042af60(this_ptr);
    }
  }
  core_charactr_cpp_CCharacter_FUN_0042a420(this_ptr);
  if (g_CGamePtr->field72_0x21c == 0) {
    return;
  }
  core_charactr_cpp_CCharacter_FUN_00429b40(this_ptr);
  return;
}


// Assembly code:
// 00429aa0: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_00429aa0
// 00429aa1: PUSH EDI
// 00429aa2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00429aa6: MOV EDX,dword ptr [EBX + 0xb7d8]
// 00429aac: TEST EDX,EDX
// 00429aae: JZ 0x00429b06
//   XREF to: 00429b06 (CONDITIONAL_JUMP)
// 00429ab0: MOV ECX,dword ptr [0x006703ec]
//   Label: LAB_00429ab0
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00429ab6: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00429ab7: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 00429abc: ADD ESP,0x4
// 00429abf: TEST EAX,EAX
// 00429ac1: JNZ 0x00429aeb
//   XREF to: 00429aeb (CONDITIONAL_JUMP)
// 00429ac3: CMP dword ptr [EBX + 0x2614],0x0
// 00429aca: JNZ 0x00429ad5
//   XREF to: 00429ad5 (CONDITIONAL_JUMP)
// 00429acc: PUSH EBX
// 00429acd: CALL core_charactr.cpp_CCharacter_FUN_0042ad00
//   XREF to: 0042ad00 (UNCONDITIONAL_CALL)
// 00429ad2: ADD ESP,0x4
// 00429ad5: FLDZ
//   Label: LAB_00429ad5
// 00429ad7: FCOMP float ptr [EBX + 0xb7e0]
// 00429add: FNSTSW AX
// 00429adf: SAHF
// 00429ae0: JNC 0x00429aeb
//   XREF to: 00429aeb (CONDITIONAL_JUMP)
// 00429ae2: PUSH EBX
// 00429ae3: CALL core_charactr.cpp_CCharacter_FUN_0042af60
//   XREF to: 0042af60 (UNCONDITIONAL_CALL)
// 00429ae8: ADD ESP,0x4
// 00429aeb: PUSH EBX
//   Label: LAB_00429aeb
// 00429aec: CALL core_charactr.cpp_CCharacter_FUN_0042a420
//   XREF to: 0042a420 (UNCONDITIONAL_CALL)
// 00429af1: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (DATA)
//   XREF to: 0067b654 (READ)
// 00429af6: MOV EDI,dword ptr [EAX + 0x21c]
//   XREF to: 02d81cb8 (READ)
// 00429afc: ADD ESP,0x4
// 00429aff: TEST EDI,EDI
// 00429b01: JNZ 0x00429b30
//   XREF to: 00429b30 (CONDITIONAL_JUMP)
// 00429b03: POP EDI
// 00429b04: POP EBX
// 00429b05: RET
// 00429b06: PUSH ESI
//   Label: LAB_00429b06
// 00429b07: PUSH EDX
// 00429b08: PUSH 0x1
// 00429b0a: PUSH -0x1
// 00429b0c: PUSH -0x1
// 00429b0e: LEA ESI,[EBX + 0x158]
// 00429b14: PUSH ESI
// 00429b15: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0150
//   XREF to: 005a0150 (UNCONDITIONAL_CALL)
// 00429b1a: ADD ESP,0x14
// 00429b1d: PUSH ESI
// 00429b1e: LEA EAX,[EBX + 0x2a94]
// 00429b24: PUSH EAX
// 00429b25: CALL core_cloth.cpp_MultipleCallSaveJoinedLight_FUN_0043c320
//   XREF to: 0043c320 (UNCONDITIONAL_CALL)
// 00429b2a: ADD ESP,0x8
// 00429b2d: POP ESI
// 00429b2e: JMP 0x00429ab0
//   XREF to: 00429ab0 (UNCONDITIONAL_JUMP)
// 00429b30: PUSH EBX
//   Label: LAB_00429b30
// 00429b31: CALL core_charactr.cpp_CCharacter_FUN_00429b40
//   XREF to: 00429b40 (UNCONDITIONAL_CALL)
// 00429b36: ADD ESP,0x4
// 00429b39: POP EDI
// 00429b3a: POP EBX
// 00429b3b: RET
