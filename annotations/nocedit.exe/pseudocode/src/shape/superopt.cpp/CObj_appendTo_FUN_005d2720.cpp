// Name: shape_superopt.cpp_CObj_appendTo_FUN_005d2720
// Address: 005d2720
// Address Range: [[005d2720, 005d2871]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_CObj_appendTo_FUN_005d2720(CObj * this_ptr, CObj * dest_obj)
// Cross-references:
//   shape_superopt.cpp_COptimize_FUN_005d71e0 (005d71e0) at 005d722a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Unable_to_add_vertices_t_006543e6
//   TerminatedCString s_Unable_to_add_polygons_t_00654407
// Function calls:
//   shape_superopt.cpp_logToFile_FUN_005c7910

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_appendTo_FUN_005d2720(CObj *this_ptr,CObj *dest_obj)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint unaff_EBP;
  undefined4 *puVar5;
  CVert *pCVar6;
  byte bVar7;
  int *in_stack_00000010;
  
  bVar7 = 0;
  iVar2 = this_ptr->vertex_count;
  if ((dest_obj->vertex_count != 0) &&
     (iVar3 = (*this_ptr->vtable->addVertices)(this_ptr,dest_obj->vertex_count), iVar3 == 0)) {
    shape_superopt_cpp_logToFile_FUN_005c7910("Unable to add vertices to object");
    return 0;
  }
  if ((in_stack_00000010[2] != 0) &&
     (iVar3 = (*this_ptr->vtable->addPolygons)(this_ptr,in_stack_00000010[2]), iVar3 == 0)) {
    shape_superopt_cpp_logToFile_FUN_005c7910("Unable to add polygons to object");
    return 0;
  }
  puVar5 = (undefined4 *)in_stack_00000010[1];
  pCVar6 = this_ptr->vertex_data + iVar2;
  for (uVar4 = (uint)(*in_stack_00000010 * 0x38) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)&(pCVar6->position).x = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    pCVar6 = (CVert *)((int)pCVar6 + (uint)bVar7 * -8 + 4);
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)&(pCVar6->position).x = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + (uint)bVar7 * -2 + 1);
    pCVar6 = (CVert *)((int)pCVar6 + (uint)bVar7 * -2 + 1);
  }
  if (unaff_EBP < (uint)this_ptr->poly_count) {
    iVar3 = unaff_EBP * 0x68;
    do {
      (**(code **)(*(int *)((int)(this_ptr->poly_array->uv_coords + 5) + iVar3 + 4) + 4))();
      piVar1 = (int *)((int)this_ptr->poly_array->uv_coords + iVar3 + -0xc);
      *piVar1 = *piVar1 + iVar2;
      piVar1 = (int *)((int)this_ptr->poly_array->uv_coords + iVar3 + -8);
      *piVar1 = *piVar1 + iVar2;
      *(int *)((int)this_ptr->poly_array->uv_coords + iVar3 + -4) =
           *(int *)((int)this_ptr->poly_array->uv_coords + iVar3 + -4) + iVar2;
      unaff_EBP = unaff_EBP + 1;
      iVar3 = iVar3 + 0x68;
    } while (unaff_EBP < (uint)this_ptr->poly_count);
  }
  return 1;
}


// Assembly code:
// 005d2720: PUSH EBX
//   Label: shape_superopt.cpp_CObj_appendTo_FUN_005d2720
// 005d2721: PUSH EDI
// 005d2722: PUSH EBP
// 005d2723: SUB ESP,0x8
// 005d2726: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 005d272a: MOV EAX,dword ptr [EBX + 0x8]
// 005d272d: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 005d2730: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 005d2734: MOV EDX,dword ptr [EAX]
// 005d2736: MOV EBP,dword ptr [EBX]
// 005d2738: TEST EDX,EDX
// 005d273a: JNZ 0x005d282d
//   XREF to: 005d282d (CONDITIONAL_JUMP)
// 005d2740: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_005d2740
//   XREF to: Stack[0x8] (READ)
// 005d2744: CMP dword ptr [EAX + 0x8],0x0
// 005d2748: JZ 0x005d2764
//   XREF to: 005d2764 (CONDITIONAL_JUMP)
// 005d274a: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 005d274e: MOV EDI,dword ptr [EDX + 0x8]
// 005d2751: PUSH EDI
// 005d2752: MOV EAX,dword ptr [EBX + 0x18]
// 005d2755: PUSH EBX
// 005d2756: CALL dword ptr [EAX + 0x10]
// 005d2759: ADD ESP,0x8
// 005d275c: TEST EAX,EAX
// 005d275e: JZ 0x005d285c
//   XREF to: 005d285c (CONDITIONAL_JUMP)
// 005d2764: PUSH ESI
//   Label: LAB_005d2764
// 005d2765: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 005d2769: MOV EAX,dword ptr [EAX]
// 005d276b: SHL EAX,0x3
// 005d276e: LEA ECX,[EAX*0x8 + 0x0]
// 005d2775: SUB ECX,EAX
// 005d2777: LEA EAX,[EBP*0x8 + 0x0]
// 005d277e: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 005d2782: MOV EDX,EAX
// 005d2784: SHL EAX,0x3
// 005d2787: MOV EDI,dword ptr [EBX + 0x4]
// 005d278a: SUB EAX,EDX
// 005d278c: MOV ESI,dword ptr [ESI + 0x4]
// 005d278f: ADD EDI,EAX
// 005d2791: PUSH EDI
// 005d2792: MOV EAX,ECX
// 005d2794: SHR ECX,0x2
// 005d2797: MOVSD.REP ES:EDI,ESI
// 005d2799: MOV CL,AL
// 005d279b: AND CL,0x3
// 005d279e: MOVSB.REP ES:EDI,ESI
// 005d27a0: POP EDI
// 005d27a1: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 005d27a5: MOV EDX,dword ptr [EBX + 0x8]
// 005d27a8: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 005d27ac: CMP EAX,EDX
// 005d27ae: JNC 0x005d2820
//   XREF to: 005d2820 (CONDITIONAL_JUMP)
// 005d27b0: MOV EDX,EAX
// 005d27b2: SHL EAX,0x2
// 005d27b5: SUB EAX,EDX
// 005d27b7: SHL EAX,0x2
// 005d27ba: ADD EAX,EDX
// 005d27bc: SHL EAX,0x3
// 005d27bf: MOV EDX,EAX
// 005d27c1: NEG EDX
// 005d27c3: LEA EDI,[EAX + EDX*0x1]
// 005d27c6: MOV ESI,EAX
// 005d27c8: MOV EDX,dword ptr [ESP + 0x20]
//   Label: LAB_005d27c8
// 005d27cc: PUSH EBX
// 005d27cd: MOV EDX,dword ptr [EDX + 0xc]
// 005d27d0: MOV EAX,dword ptr [EBX + 0xc]
// 005d27d3: ADD EDX,EDI
// 005d27d5: ADD EAX,ESI
// 005d27d7: PUSH EDX
// 005d27d8: MOV ECX,dword ptr [EAX + 0x64]
// 005d27db: PUSH EAX
// 005d27dc: CALL dword ptr [ECX + 0x4]
// 005d27df: MOV EAX,dword ptr [EBX + 0xc]
// 005d27e2: ADD dword ptr [ESI + EAX*0x1 + 0x4],EBP
// 005d27e6: MOV EAX,dword ptr [EBX + 0xc]
// 005d27e9: ADD dword ptr [ESI + EAX*0x1 + 0x8],EBP
// 005d27ed: MOV EAX,dword ptr [EBX + 0xc]
// 005d27f0: MOV ECX,dword ptr [ESI + EAX*0x1 + 0xc]
// 005d27f4: ADD ESI,0x68
// 005d27f7: ADD ECX,EBP
// 005d27f9: ADD ESP,0xc
// 005d27fc: MOV dword ptr [ESI + EAX*0x1 + -0x5c],ECX
// 005d2800: MOV EAX,dword ptr [ESP + 0x8]
// 005d2804: ADD EDI,0x68
// 005d2807: INC EAX
// 005d2808: MOV EDX,dword ptr [EBX + 0x8]
// 005d280b: MOV dword ptr [ESP + 0x8],EAX
// 005d280f: CMP EAX,EDX
// 005d2811: JC 0x005d27c8
//   XREF to: 005d27c8 (CONDITIONAL_JUMP)
// 005d2813: LEA EAX,[EAX]
// 005d2819: LEA EDX,[EDX]
// 005d281f: NOP
// 005d2820: MOV EAX,0x1
//   Label: LAB_005d2820
// 005d2825: POP ESI
// 005d2826: ADD ESP,0x8
// 005d2829: POP EBP
// 005d282a: POP EDI
// 005d282b: POP EBX
// 005d282c: RET
// 005d282d: MOV EDX,dword ptr [ESP + 0x1c]
//   Label: LAB_005d282d
//   XREF to: Stack[0x8] (READ)
// 005d2831: MOV ECX,dword ptr [EDX]
// 005d2833: PUSH ECX
// 005d2834: MOV EAX,dword ptr [EBX + 0x18]
// 005d2837: PUSH EBX
// 005d2838: CALL dword ptr [EAX + 0x18]
// 005d283b: ADD ESP,0x8
// 005d283e: TEST EAX,EAX
// 005d2840: JNZ 0x005d2740
//   XREF to: 005d2740 (CONDITIONAL_JUMP)
// 005d2846: PUSH 0x6543e6
//   XREF to: 006543e6 (DATA)
// 005d284b: CALL shape_superopt.cpp_logToFile_FUN_005c7910
//   XREF to: 005c7910 (UNCONDITIONAL_CALL)
// 005d2850: ADD ESP,0x4
// 005d2853: XOR EAX,EAX
// 005d2855: ADD ESP,0x8
// 005d2858: POP EBP
// 005d2859: POP EDI
// 005d285a: POP EBX
// 005d285b: RET
// 005d285c: PUSH 0x654407
//   Label: LAB_005d285c
//   XREF to: 00654407 (DATA)
// 005d2861: CALL shape_superopt.cpp_logToFile_FUN_005c7910
//   XREF to: 005c7910 (UNCONDITIONAL_CALL)
// 005d2866: ADD ESP,0x4
// 005d2869: XOR EAX,EAX
// 005d286b: ADD ESP,0x8
// 005d286e: POP EBP
// 005d286f: POP EDI
// 005d2870: POP EBX
// 005d2871: RET
