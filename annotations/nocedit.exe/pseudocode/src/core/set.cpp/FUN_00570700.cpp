// Name: core_set.cpp_FUN_00570700
// Address: 00570700
// Address Range: [[00570700, 0057076f]]
// Convention: unknown
// Signature: undefined core_set.cpp_FUN_00570700()
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CGame* g_CGamePtr = 02d81a9c
//   CDemonRenderer g_CDemonRendererInstance
//   CGame g_CGameInstance
//   undefined4 DAT_02d81c8c
//   undefined4 DAT_02d81c90
// Function calls:
//   core_set.cpp_CDemonSet_FUN_0056ffe0
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   engine_drender.cpp_CDemonRenderer_renderFaceBatch_FUN_0048ce20

#include "nocturne.h"

void core_set_cpp_FUN_00570700(void)

{
  int iVar1;
  CDemonSet *in_stack_00000008;
  SMRGLHeaderPrimitive *in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  
  if (g_CGamePtr->scripted_sequence_active == 0) {
    if (g_CGamePtr->field62_0x1f4 != 0) {
      iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
      if (iVar1 == 0) {
        core_set_cpp_CDemonSet_FUN_0056ffe0(in_stack_00000008);
        return;
      }
    }
    engine_drender_cpp_CDemonRenderer_renderFaceBatch_FUN_0048ce20
              (g_CDemonRendererPtr,in_stack_0000000c,in_stack_00000010,in_stack_00000014);
  }
  return;
}


// Assembly code:
// 00570700: PUSH EBX
//   Label: core_set.cpp_FUN_00570700
// 00570701: PUSH EBP
// 00570702: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
//   XREF to: 02d81a9c (DATA)
// 00570707: CMP dword ptr [EAX + 0x1f0],0x0
//   XREF to: 02d81c8c (READ)
// 0057070e: JNZ 0x0057074a
//   XREF to: 0057074a (CONDITIONAL_JUMP)
// 00570710: CMP dword ptr [EAX + 0x1f4],0x0
//   XREF to: 02d81c90 (READ)
// 00570717: JZ 0x0057072c
//   XREF to: 0057072c (CONDITIONAL_JUMP)
// 00570719: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
//   XREF to: 02c6d578 (PARAM)
// 0057071f: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 00570720: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 00570725: ADD ESP,0x4
// 00570728: TEST EAX,EAX
// 0057072a: JZ 0x0057074d
//   XREF to: 0057074d (CONDITIONAL_JUMP)
// 0057072c: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_0057072c
//   XREF to: Stack[0x10] (READ)
// 00570730: PUSH EAX
// 00570731: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 00570735: PUSH EDX
// 00570736: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0057073a: PUSH ECX
// 0057073b: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00570741: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 00570742: CALL engine_drender.cpp_CDemonRenderer_renderFaceBatch_FUN_0048ce20
//   XREF to: 0048ce20 (UNCONDITIONAL_CALL)
// 00570747: ADD ESP,0x10
// 0057074a: POP EBP
//   Label: LAB_0057074a
// 0057074b: POP EBX
// 0057074c: RET
// 0057074d: PUSH EDI
//   Label: LAB_0057074d
// 0057074e: PUSH ESI
// 0057074f: PUSH 0xffff
// 00570754: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 00570758: PUSH ESI
// 00570759: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 0057075d: PUSH EDI
// 0057075e: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 00570762: PUSH EBP
// 00570763: CALL core_set.cpp_CDemonSet_FUN_0056ffe0
//   XREF to: 0056ffe0 (UNCONDITIONAL_CALL)
// 00570768: ADD ESP,0x10
// 0057076b: POP ESI
// 0057076c: POP EDI
// 0057076d: POP EBP
// 0057076e: POP EBX
// 0057076f: RET
