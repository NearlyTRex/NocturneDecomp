// Name: core_set.cpp_CDemonSet_FUN_00570870
// Address: 00570870
// Address Range: [[00570870, 005708df]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_FUN_00570870(CDemonSet * this_ptr)
// Cross-references:
//   core_skeleton.cpp_CDeformableModel_FUN_0059abf0 (0059abf0) at 0059ad25 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CGame* g_CGamePtr = 02d81a9c
//   CDemonRenderer g_CDemonRendererInstance
//   CGame g_CGameInstance
//   undefined4 DAT_02d81c8c
//   undefined4 DAT_02d81c90
// Function calls:
//   core_set.cpp_FUN_005702b0
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0048d170

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_00570870(CDemonSet *this_ptr)

{
  int iVar1;
  SInputFace *in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  
  if (g_CGamePtr->scripted_sequence_active == 0) {
    if (g_CGamePtr->field62_0x1f4 != 0) {
      iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
      if (iVar1 == 0) {
        core_set_cpp_FUN_005702b0();
        return;
      }
    }
    engine_drender_cpp_CDemonRenderer_renderFaceList_FUN_0048d170
              (g_CDemonRendererPtr,in_stack_0000000c,in_stack_00000010,in_stack_00000014);
  }
  return;
}


// Assembly code:
// 00570870: PUSH EBX
//   Label: core_set.cpp_CDemonSet_FUN_00570870
// 00570871: PUSH EBP
// 00570872: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 00570877: CMP dword ptr [EAX + 0x1f0],0x0
//   XREF to: 02d81c8c (READ)
// 0057087e: JNZ 0x005708ba
//   XREF to: 005708ba (CONDITIONAL_JUMP)
// 00570880: CMP dword ptr [EAX + 0x1f4],0x0
//   XREF to: 02d81c90 (READ)
// 00570887: JZ 0x0057089c
//   XREF to: 0057089c (CONDITIONAL_JUMP)
// 00570889: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0057088f: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 00570890: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 00570895: ADD ESP,0x4
// 00570898: TEST EAX,EAX
// 0057089a: JZ 0x005708bd
//   XREF to: 005708bd (CONDITIONAL_JUMP)
// 0057089c: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_0057089c
//   XREF to: Stack[0x10] (READ)
// 005708a0: PUSH EAX
// 005708a1: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 005708a5: PUSH EDX
// 005708a6: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005708aa: PUSH ECX
// 005708ab: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005708b1: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 005708b2: CALL engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0048d170
//   XREF to: 0048d170 (UNCONDITIONAL_CALL)
// 005708b7: ADD ESP,0x10
// 005708ba: POP EBP
//   Label: LAB_005708ba
// 005708bb: POP EBX
// 005708bc: RET
// 005708bd: PUSH EDI
//   Label: LAB_005708bd
// 005708be: PUSH ESI
// 005708bf: PUSH 0xffff
// 005708c4: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 005708c8: PUSH ESI
// 005708c9: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 005708cd: PUSH EDI
// 005708ce: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 005708d2: PUSH EBP
// 005708d3: CALL core_set.cpp_FUN_005702b0
//   XREF to: 005702b0 (UNCONDITIONAL_CALL)
// 005708d8: ADD ESP,0x10
// 005708db: POP ESI
// 005708dc: POP EDI
// 005708dd: POP EBP
// 005708de: POP EBX
// 005708df: RET
