// Name: core_skeleton.cpp_CDeformableModel_FUN_0059b800
// Address: 0059b800
// Address Range: [[0059b800, 0059b8cf]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_CDeformableModel_FUN_0059b800()
// Cross-references:
//   core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndDoSomething2_FUN_005a17e0 (005a17e0) at 005a17f5 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_00662e98
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   core_skeleton.cpp_CDeformableModel_SkeletonPtrNotSet_FUN_0059a810
//   core_xform.cpp_getTranslation_FUN_005f6110
//   engine_2d.c_drawText_FUN_00401fd0
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_skeleton.cpp_CDeformableModel_FUN_0059b800(undefined4 param_1,
   undefined4 param_2) */

void core_skeleton_cpp_CDeformableModel_FUN_0059b800(void)

{
  SRenderVertex *pSVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *text;
  int iVar3;
  CVector3f *in_stack_0000000c;
  
  iVar3 = 0;
  iVar2 = core_skeleton_cpp_CDeformableModel_SkeletonPtrNotSet_FUN_0059a810();
  if (0 < *(int *)(iVar2 + 0x28558)) {
    text = (char *)(iVar2 + 0x2855c);
    do {
      core_xform_cpp_getTranslation_FUN_005f6110(in_stack_0000000c,(CMatrix3x4f *)&stack0xffffffe4);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[19999].projected_vertex,
                 (CVector3i *)&stack0xffffffdc);
      pSVar1 = g_CDemonRendererPtr->vertex_buffer_ptr;
      if ((int)(pSVar1[19999].projected_vertex.screen_x & -0x80000000) == 0) {
        engine_2d_c_drawText_FUN_00401fd0
                  (text,pSVar1[19999].projected_vertex.screen_x >> 0x10,
                   pSVar1[19999].projected_vertex.screen_y >> 0x10);
      }
      in_stack_0000000c = in_stack_0000000c + 4;
      iVar3 = iVar3 + 1;
      text = text + 0x24;
    } while (iVar3 < *(int *)(iVar2 + 0x28558));
  }
  return;
}


// Assembly code:
// 0059b800: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModel_FUN_0059b800
// 0059b801: PUSH ESI
// 0059b802: PUSH EDI
// 0059b803: PUSH EBP
// 0059b804: SUB ESP,0x1c
// 0059b807: MOV EDX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 0059b80b: PUSH EDX
// 0059b80c: XOR EDI,EDI
// 0059b80e: CALL core_skeleton.cpp_CDeformableModel_SkeletonPtrNotSet_FUN_0059a810
//   XREF to: 0059a810 (UNCONDITIONAL_CALL)
// 0059b813: ADD ESP,0x4
// 0059b816: MOV ECX,dword ptr [EAX + 0x28558]
// 0059b81c: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0059b820: TEST ECX,ECX
// 0059b822: JLE 0x0059b8af
//   XREF to: 0059b8af (CONDITIONAL_JUMP)
// 0059b828: MOV EBP,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x8] (READ)
// 0059b82c: LEA ESI,[EAX + 0x2855c]
// 0059b832: LEA EAX,[ESP + 0xc]
//   Label: LAB_0059b832
//   XREF to: Stack[-0x20] (DATA)
// 0059b836: PUSH EAX
// 0059b837: PUSH EBP
// 0059b838: LEA EBX,[ESP + 0x8]
//   XREF to: Stack[-0x2c] (DATA)
// 0059b83c: CALL core_xform.cpp_getTranslation_FUN_005f6110
//   XREF to: 005f6110 (UNCONDITIONAL_CALL)
// 0059b841: ADD ESP,0x8
// 0059b844: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x20] (DATA)
// 0059b848: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0059b84e: FLD float ptr [EAX]
//   XREF to: Stack[-0x20] (DATA)
// 0059b850: FMUL float ptr [0x00662e98]
//   XREF to: 00662e98 (READ)
// 0059b856: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x2c] (DATA)
// 0059b858: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x1c] (READ)
// 0059b85b: FMUL float ptr [0x00662e98]
//   XREF to: 00662e98 (READ)
// 0059b861: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x28] (WRITE)
// 0059b864: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 0059b867: FMUL float ptr [0x00662e98]
//   XREF to: 00662e98 (READ)
// 0059b86d: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x24] (WRITE)
// 0059b870: MOV EAX,ESP
// 0059b872: PUSH EAX
// 0059b873: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0059b875: ADD EAX,0xea5d0
// 0059b87a: PUSH EAX
// 0059b87b: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0059b880: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 0059b885: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0059b887: ADD ESP,0x8
// 0059b88a: MOV DL,byte ptr [EAX + 0xea5e3]
// 0059b890: ADD EAX,0xea5d0
// 0059b895: TEST DL,0x80
// 0059b898: JZ 0x0059b8b7
//   XREF to: 0059b8b7 (CONDITIONAL_JUMP)
// 0059b89a: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_0059b89a
//   XREF to: Stack[-0x14] (READ)
// 0059b89e: ADD EBP,0x30
// 0059b8a1: INC EDI
// 0059b8a2: MOV EBX,dword ptr [EAX + 0x28558]
// 0059b8a8: ADD ESI,0x24
// 0059b8ab: CMP EDI,EBX
// 0059b8ad: JL 0x0059b832
//   XREF to: 0059b832 (CONDITIONAL_JUMP)
// 0059b8af: ADD ESP,0x1c
//   Label: LAB_0059b8af
// 0059b8b2: POP EBP
// 0059b8b3: POP EDI
// 0059b8b4: POP ESI
// 0059b8b5: POP EBX
// 0059b8b6: RET
// 0059b8b7: MOV EDX,dword ptr [EAX + 0x14]
//   Label: LAB_0059b8b7
// 0059b8ba: SAR EDX,0x10
// 0059b8bd: MOV EAX,dword ptr [EAX + 0x10]
// 0059b8c0: PUSH EDX
// 0059b8c1: SAR EAX,0x10
// 0059b8c4: PUSH EAX
// 0059b8c5: PUSH ESI
// 0059b8c6: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0059b8cb: ADD ESP,0xc
// 0059b8ce: JMP 0x0059b89a
//   XREF to: 0059b89a (UNCONDITIONAL_JUMP)
