// Name: shape_meshlod.cpp_FUN_0051e770
// Address: 0051e770
// Address Range: [[0051e770, 0051e826]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_0051e770()
// Cross-references:
//   shape_meshlod.cpp_FUN_0051d520 (0051d520) at 0051d69e [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   engine_3d.c_clipAndDrawLine2D_FUN_00407d70

#include "nocturne.h"

/* Signature: undefined1 shape_meshlod.cpp_FUN_0051e770(undefined4 param_1) */

void shape_meshlod_cpp_FUN_0051e770(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  SRenderVertex *pSVar4;
  SRenderVertex *pSVar5;
  int iVar6;
  int *piVar7;
  byte bVar8;
  int in_stack_00000004;
  SRenderVertex *in_stack_ffffff84;
  SRenderVertex *in_stack_ffffff88;
  int aiStack_4c [12];
  int local_1c;
  int local_18;
  int local_14;
  
  bVar8 = 0;
  local_18 = 0;
  if (0 < *(int *)(in_stack_00000004 + 8)) {
    local_1c = 0;
    do {
      iVar2 = local_1c + *(int *)(in_stack_00000004 + 0xc);
      if (*(int *)(iVar2 + 0x40) == 0) {
        iVar3 = 0;
        local_14 = iVar2;
        do {
          iVar6 = iVar3 + 1;
          if (2 < iVar6) {
            iVar6 = 0;
          }
          pSVar5 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar4 = pSVar5 + *(int *)(iVar6 * 4 + local_14 + 0x10);
          piVar7 = aiStack_4c;
          for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
            *piVar7 = (pSVar4->projected_vertex).transformed_x;
            pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar8 * -2 + 1) * 4);
            piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
          }
          piVar7 = (int *)(iVar2 + 0x10);
          iVar2 = iVar2 + 4;
          iVar3 = iVar3 + 1;
          pSVar5 = pSVar5 + *piVar7;
          piVar7 = (int *)&stack0xffffff84;
          for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
            *piVar7 = (pSVar5->projected_vertex).transformed_x;
            pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar8 * -2 + 1) * 4);
            piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff84,in_stack_ffffff88);
        } while (iVar3 < 3);
      }
      local_1c = local_1c + 0x8c;
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(in_stack_00000004 + 8));
  }
  return;
}


// Assembly code:
// 0051e770: PUSH EBX
//   Label: shape_meshlod.cpp_FUN_0051e770
// 0051e771: PUSH ESI
// 0051e772: PUSH EDI
// 0051e773: PUSH EBP
// 0051e774: SUB ESP,0xc
// 0051e777: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0051e77b: XOR EDX,EDX
// 0051e77d: MOV ECX,dword ptr [EAX + 0x8]
// 0051e780: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0051e784: TEST ECX,ECX
// 0051e786: JLE 0x0051e81f
//   XREF to: 0051e81f (CONDITIONAL_JUMP)
// 0051e78c: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x1c] (DATA)
// 0051e78f: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_0051e78f
//   XREF to: Stack[0x4] (READ)
// 0051e793: MOV EBX,dword ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 0051e796: MOV EAX,dword ptr [EAX + 0xc]
// 0051e799: ADD EBX,EAX
// 0051e79b: MOV EDX,dword ptr [EBX + 0x40]
// 0051e79e: MOV dword ptr [ESP + 0x8],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 0051e7a2: TEST EDX,EDX
// 0051e7a4: JNZ 0x0051e7fb
//   XREF to: 0051e7fb (CONDITIONAL_JUMP)
// 0051e7a6: MOV EBP,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 0051e7aa: XOR EBX,EBX
// 0051e7ac: LEA EDI,[EBX + 0x1]
//   Label: LAB_0051e7ac
// 0051e7af: CMP EDI,0x3
// 0051e7b2: JL 0x0051e7b6
//   XREF to: 0051e7b6 (CONDITIONAL_JUMP)
// 0051e7b4: XOR EDI,EDI
// 0051e7b6: MOV ECX,dword ptr [ESP + 0x8]
//   Label: LAB_0051e7b6
//   XREF to: Stack[-0x14] (READ)
// 0051e7ba: SHL EDI,0x2
// 0051e7bd: ADD EDI,ECX
// 0051e7bf: IMUL ESI,dword ptr [EDI + 0x10],0x30
// 0051e7c3: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 0051e7c8: SUB ESP,0x30
// 0051e7cb: MOV ECX,0xc
// 0051e7d0: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0051e7d2: MOV EDI,ESP
// 0051e7d4: ADD ESI,EAX
// 0051e7d6: MOVSD.REP ES:EDI,ESI
// 0051e7d8: IMUL ESI,dword ptr [EBP + 0x10],0x30
// 0051e7dc: SUB ESP,0x30
// 0051e7df: MOV ECX,0xc
// 0051e7e4: MOV EDI,ESP
// 0051e7e6: ADD ESI,EAX
// 0051e7e8: ADD EBP,0x4
// 0051e7eb: INC EBX
// 0051e7ec: MOVSD.REP ES:EDI,ESI
// 0051e7ee: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 0051e7f3: ADD ESP,0x60
// 0051e7f6: CMP EBX,0x3
// 0051e7f9: JL 0x0051e7ac
//   XREF to: 0051e7ac (CONDITIONAL_JUMP)
// 0051e7fb: MOV EBX,dword ptr [ESP]
//   Label: LAB_0051e7fb
//   XREF to: Stack[-0x1c] (DATA)
// 0051e7fe: ADD EBX,0x8c
// 0051e804: MOV ESI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (READ)
// 0051e808: MOV dword ptr [ESP],EBX
//   XREF to: Stack[-0x1c] (DATA)
// 0051e80b: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0051e80f: INC ESI
// 0051e810: MOV EDI,dword ptr [EBX + 0x8]
// 0051e813: MOV dword ptr [ESP + 0x4],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 0051e817: CMP ESI,EDI
// 0051e819: JL 0x0051e78f
//   XREF to: 0051e78f (CONDITIONAL_JUMP)
// 0051e81f: ADD ESP,0xc
//   Label: LAB_0051e81f
// 0051e822: POP EBP
// 0051e823: POP EDI
// 0051e824: POP ESI
// 0051e825: POP EBX
// 0051e826: RET
