// Name: shape_meshlod.cpp_FUN_0051e830
// Address: 0051e830
// Address Range: [[0051e830, 0051e983]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_0051e830()
// Cross-references:
//   shape_meshlod.cpp_FUN_0051d520 (0051d520) at 0051d603 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
//   int g_ActiveRenderColor
// Function calls:
//   engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   engine_prim.c_calculateTriangleWindingOrder_FUN_00552150

#include "nocturne.h"

/* Signature: undefined1 shape_meshlod.cpp_FUN_0051e830(undefined4 param_1, undefined4 param_2) */

void shape_meshlod_cpp_FUN_0051e830(void)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  int *piVar3;
  int *piVar4;
  SRenderVertex *pSVar5;
  SRenderVertex *pSVar6;
  byte bVar7;
  int in_stack_00000004;
  int in_stack_00000008;
  SRenderVertex *in_stack_ffffff88;
  SRenderVertex *in_stack_ffffff8c;
  int aiStack_48 [7];
  undefined4 uStack_2c;
  int local_18;
  int local_14;
  
  bVar7 = 0;
  local_14 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x44)) {
    local_18 = 0;
    do {
      piVar3 = (int *)(*(int *)(in_stack_00000004 + 0x48) + local_18);
      if (piVar3[5] == 0) {
        if (in_stack_00000008 != 0) {
          iVar2 = 0;
          piVar4 = piVar3;
          if (0 < piVar3[9]) {
            do {
              iVar1 = *(int *)(in_stack_00000004 + 0xc) + piVar4[10] * 0x8c;
              pSVar6 = g_CDemonRendererPtr->vertex_buffer_ptr;
              uStack_2c = 0x51e8ca;
              iVar1 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                                (pSVar6 + *(int *)(iVar1 + 0x10),pSVar6 + *(int *)(iVar1 + 0x14),
                                 pSVar6 + *(int *)(iVar1 + 0x18));
              if (iVar1 == 0) break;
              iVar2 = iVar2 + 1;
              piVar4 = piVar4 + 1;
            } while (iVar2 < piVar3[9]);
          }
          if (piVar3[9] <= iVar2) goto LAB_0051e85d;
        }
        if (piVar3[6] == 0) {
          if (piVar3[7] == 0) {
            g_ActiveRenderColor = 2;
          }
          else {
            g_ActiveRenderColor = 0xfa;
          }
        }
        else if (piVar3[6] == 1) {
          if (piVar3[7] == 0) {
            g_ActiveRenderColor = 3;
          }
          else {
            g_ActiveRenderColor = 0xfb;
          }
        }
        else if (piVar3[7] == 0) {
          g_ActiveRenderColor = 1;
        }
        else {
          g_ActiveRenderColor = 0xf9;
        }
        pSVar6 = g_CDemonRendererPtr->vertex_buffer_ptr;
        pSVar5 = pSVar6 + piVar3[1];
        piVar4 = aiStack_48;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar4 = (pSVar5->projected_vertex).transformed_x;
          pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar7 * -2 + 1) * 4);
          piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
        }
        pSVar6 = pSVar6 + *piVar3;
        piVar3 = (int *)&stack0xffffff88;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar3 = (pSVar6->projected_vertex).transformed_x;
          pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar7 * -2 + 1) * 4);
          piVar3 = piVar3 + (uint)bVar7 * -2 + 1;
        }
        engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff88,in_stack_ffffff8c);
      }
LAB_0051e85d:
      local_18 = local_18 + 0xf0;
      local_14 = local_14 + 1;
    } while (local_14 < *(int *)(in_stack_00000004 + 0x44));
  }
  return;
}


// Assembly code:
// 0051e830: PUSH EBX
//   Label: shape_meshlod.cpp_FUN_0051e830
// 0051e831: PUSH ESI
// 0051e832: PUSH EDI
// 0051e833: PUSH EBP
// 0051e834: SUB ESP,0x8
// 0051e837: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0051e83b: XOR EDX,EDX
// 0051e83d: MOV ECX,dword ptr [EAX + 0x44]
// 0051e840: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0051e844: TEST ECX,ECX
// 0051e846: JLE 0x0051e87d
//   XREF to: 0051e87d (CONDITIONAL_JUMP)
// 0051e848: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x18] (DATA)
// 0051e84b: MOV EBP,dword ptr [ESP + 0x1c]
//   Label: LAB_0051e84b
//   XREF to: Stack[0x4] (READ)
// 0051e84f: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0051e852: MOV EBP,dword ptr [EBP + 0x48]
// 0051e855: ADD EBP,EAX
// 0051e857: CMP dword ptr [EBP + 0x14],0x0
// 0051e85b: JZ 0x0051e885
//   XREF to: 0051e885 (CONDITIONAL_JUMP)
// 0051e85d: MOV EBX,dword ptr [ESP]
//   Label: LAB_0051e85d
//   XREF to: Stack[-0x18] (DATA)
// 0051e860: MOV ESI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 0051e864: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0051e868: ADD EBX,0xf0
// 0051e86e: INC ESI
// 0051e86f: MOV EDI,dword ptr [EDX + 0x44]
// 0051e872: MOV dword ptr [ESP],EBX
//   XREF to: Stack[-0x18] (DATA)
// 0051e875: MOV dword ptr [ESP + 0x4],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 0051e879: CMP ESI,EDI
// 0051e87b: JL 0x0051e84b
//   XREF to: 0051e84b (CONDITIONAL_JUMP)
// 0051e87d: ADD ESP,0x8
//   Label: LAB_0051e87d
// 0051e880: POP EBP
// 0051e881: POP EDI
// 0051e882: POP ESI
// 0051e883: POP EBX
// 0051e884: RET
// 0051e885: CMP dword ptr [ESP + 0x20],0x0
//   Label: LAB_0051e885
//   XREF to: Stack[0x8] (READ)
// 0051e88a: JZ 0x0051e8e5
//   XREF to: 0051e8e5 (CONDITIONAL_JUMP)
// 0051e88c: MOV ESI,dword ptr [EBP + 0x24]
// 0051e88f: XOR EBX,EBX
// 0051e891: TEST ESI,ESI
// 0051e893: JLE 0x0051e8dc
//   XREF to: 0051e8dc (CONDITIONAL_JUMP)
// 0051e895: MOV ESI,EBP
// 0051e897: IMUL EAX,dword ptr [ESI + 0x28],0x8c
//   Label: LAB_0051e897
// 0051e89e: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0051e8a2: MOV EDX,dword ptr [EDX + 0xc]
// 0051e8a5: ADD EDX,EAX
// 0051e8a7: IMUL ECX,dword ptr [EDX + 0x18],0x30
// 0051e8ab: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 0051e8b0: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0051e8b2: ADD ECX,EAX
// 0051e8b4: MOV EDI,dword ptr [EDX + 0x14]
// 0051e8b7: PUSH ECX
// 0051e8b8: IMUL ECX,EDI,0x30
// 0051e8bb: ADD ECX,EAX
// 0051e8bd: PUSH ECX
// 0051e8be: IMUL EDX,dword ptr [EDX + 0x10],0x30
// 0051e8c2: ADD EAX,EDX
// 0051e8c4: PUSH EAX
// 0051e8c5: CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00552150
//   XREF to: 00552150 (UNCONDITIONAL_CALL)
// 0051e8ca: ADD ESP,0xc
// 0051e8cd: TEST EAX,EAX
// 0051e8cf: JZ 0x0051e8dc
//   XREF to: 0051e8dc (CONDITIONAL_JUMP)
// 0051e8d1: INC EBX
// 0051e8d2: MOV EDI,dword ptr [EBP + 0x24]
// 0051e8d5: ADD ESI,0x4
// 0051e8d8: CMP EBX,EDI
// 0051e8da: JL 0x0051e897
//   XREF to: 0051e897 (CONDITIONAL_JUMP)
// 0051e8dc: CMP EBX,dword ptr [EBP + 0x24]
//   Label: LAB_0051e8dc
// 0051e8df: JGE 0x0051e85d
//   XREF to: 0051e85d (CONDITIONAL_JUMP)
// 0051e8e5: MOV EDI,dword ptr [EBP + 0x18]
//   Label: LAB_0051e8e5
// 0051e8e8: TEST EDI,EDI
// 0051e8ea: JNZ 0x0051e940
//   XREF to: 0051e940 (CONDITIONAL_JUMP)
// 0051e8ec: CMP dword ptr [EBP + 0x1c],0x0
// 0051e8f0: JZ 0x0051e934
//   XREF to: 0051e934 (CONDITIONAL_JUMP)
// 0051e8f2: MOV dword ptr [0x02d02570],0xfa
//   XREF to: 02d02570 (WRITE)
// 0051e8fc: IMUL ESI,dword ptr [EBP + 0x4],0x30
//   Label: LAB_0051e8fc
// 0051e900: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 0051e905: MOV ECX,0xc
// 0051e90a: SUB ESP,0x30
// 0051e90d: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0051e90f: MOV EDI,ESP
// 0051e911: ADD ESI,EAX
// 0051e913: MOVSD.REP ES:EDI,ESI
// 0051e915: IMUL ESI,dword ptr [EBP],0x30
// 0051e919: SUB ESP,0x30
// 0051e91c: MOV ECX,0xc
// 0051e921: MOV EDI,ESP
// 0051e923: ADD ESI,EAX
// 0051e925: MOVSD.REP ES:EDI,ESI
// 0051e927: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 0051e92c: ADD ESP,0x60
// 0051e92f: JMP 0x0051e85d
//   XREF to: 0051e85d (UNCONDITIONAL_JUMP)
// 0051e934: MOV dword ptr [0x02d02570],0x2
//   Label: LAB_0051e934
//   XREF to: 02d02570 (WRITE)
// 0051e93e: JMP 0x0051e8fc
//   XREF to: 0051e8fc (UNCONDITIONAL_JUMP)
// 0051e940: CMP EDI,0x1
//   Label: LAB_0051e940
// 0051e943: JNZ 0x0051e963
//   XREF to: 0051e963 (CONDITIONAL_JUMP)
// 0051e945: CMP dword ptr [EBP + 0x1c],0x0
// 0051e949: JZ 0x0051e957
//   XREF to: 0051e957 (CONDITIONAL_JUMP)
// 0051e94b: MOV dword ptr [0x02d02570],0xfb
//   XREF to: 02d02570 (WRITE)
// 0051e955: JMP 0x0051e8fc
//   XREF to: 0051e8fc (UNCONDITIONAL_JUMP)
// 0051e957: MOV dword ptr [0x02d02570],0x3
//   Label: LAB_0051e957
//   XREF to: 02d02570 (WRITE)
// 0051e961: JMP 0x0051e8fc
//   XREF to: 0051e8fc (UNCONDITIONAL_JUMP)
// 0051e963: CMP dword ptr [EBP + 0x1c],0x0
//   Label: LAB_0051e963
// 0051e967: JZ 0x0051e975
//   XREF to: 0051e975 (CONDITIONAL_JUMP)
// 0051e969: MOV dword ptr [0x02d02570],0xf9
//   XREF to: 02d02570 (WRITE)
// 0051e973: JMP 0x0051e8fc
//   XREF to: 0051e8fc (UNCONDITIONAL_JUMP)
// 0051e975: MOV dword ptr [0x02d02570],0x1
//   Label: LAB_0051e975
//   XREF to: 02d02570 (WRITE)
// 0051e97f: JMP 0x0051e8fc
//   XREF to: 0051e8fc (UNCONDITIONAL_JUMP)
