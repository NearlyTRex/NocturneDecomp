// Name: shape_superopt.cpp_CObj_copyFrom_FUN_005d2650
// Address: 005d2650
// Address Range: [[005d2650, 005d2715]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_CObj_copyFrom_FUN_005d2650(CObj * this_ptr, CObj * source)
// Cross-references:
//   shape_superopt.cpp_COptimize_FUN_005d71e0 (005d71e0) at 005d71fa [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Unable_to_allocate_RAM_f_006543bf
// Function calls:
//   shape_superopt.cpp_logToFile_FUN_005c7910

#include "nocturne.h"

/* WARNING: Variable defined which should be unmapped: this_ptr */
/* WARNING: Variable defined which should be unmapped: source */

int __cdecl shape_superopt_cpp_CObj_copyFrom_FUN_005d2650(CObj *this_ptr,CObj *source)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  CVert *pCVar5;
  byte bVar6;
  int *in_stack_00000010;
  int in_stack_0000001c;
  
  bVar6 = 0;
  (*this_ptr->vtable->free)(this_ptr);
  (*this_ptr->vtable->reset)(this_ptr);
  iVar2 = (*this_ptr->vtable->init)(this_ptr,in_stack_00000010[2],*in_stack_00000010);
  if (iVar2 == 0) {
    shape_superopt_cpp_logToFile_FUN_005c7910("Unable to allocate RAM for object copy");
    return 0;
  }
  puVar4 = *(undefined4 **)(in_stack_0000001c + 4);
  pCVar5 = this_ptr->vertex_data;
  for (uVar3 = (uint)(this_ptr->vertex_count * 0x38) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)&(pCVar5->position).impl.x = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    pCVar5 = (CVert *)((int)pCVar5 + (uint)bVar6 * -8 + 4);
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)&(pCVar5->position).impl.x = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + (uint)bVar6 * -2 + 1);
    pCVar5 = (CVert *)((int)pCVar5 + (uint)bVar6 * -2 + 1);
  }
  uVar3 = 0;
  if (this_ptr->poly_count != 0) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 + 4;
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x68;
      (**(code **)(*(int *)((int)(this_ptr->poly_array->uv_coords + 5) + iVar1) + 4))();
    } while (uVar3 < (uint)this_ptr->poly_count);
  }
  this_ptr->field4_0x10 = *(int *)(in_stack_0000001c + 0x10);
  return 1;
}


// Assembly code:
// 005d2650: PUSH EBX
//   Label: shape_superopt.cpp_CObj_copyFrom_FUN_005d2650
// 005d2651: PUSH EBP
// 005d2652: MOV EBP,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005d2656: PUSH EBP
// 005d2657: MOV EAX,dword ptr [EBP + 0x18]
// 005d265a: CALL dword ptr [EAX + 0x1c]
// 005d265d: ADD ESP,0x4
// 005d2660: MOV EAX,dword ptr [EBP + 0x18]
// 005d2663: PUSH EBP
// 005d2664: CALL dword ptr [EAX]
// 005d2666: ADD ESP,0x4
// 005d2669: MOV EDX,dword ptr [ESP + 0x10]
// 005d266d: MOV ECX,dword ptr [EDX]
// 005d266f: PUSH ECX
// 005d2670: MOV EBX,dword ptr [EDX + 0x8]
// 005d2673: PUSH EBX
// 005d2674: MOV EAX,dword ptr [EBP + 0x18]
// 005d2677: PUSH EBP
// 005d2678: CALL dword ptr [EAX + 0x8]
// 005d267b: ADD ESP,0xc
// 005d267e: TEST EAX,EAX
// 005d2680: JZ 0x005d2704
//   XREF to: 005d2704 (CONDITIONAL_JUMP)
// 005d2686: PUSH EDI
// 005d2687: PUSH ESI
// 005d2688: MOV EAX,dword ptr [EBP]
// 005d268b: MOV ESI,dword ptr [ESP + 0x18]
// 005d268f: SHL EAX,0x3
// 005d2692: MOV EDI,dword ptr [EBP + 0x4]
// 005d2695: LEA ECX,[EAX*0x8 + 0x0]
// 005d269c: MOV ESI,dword ptr [ESI + 0x4]
// 005d269f: SUB ECX,EAX
// 005d26a1: PUSH EDI
// 005d26a2: MOV EAX,ECX
// 005d26a4: SHR ECX,0x2
// 005d26a7: MOVSD.REP ES:EDI,ESI
// 005d26a9: MOV CL,AL
// 005d26ab: AND CL,0x3
// 005d26ae: MOVSB.REP ES:EDI,ESI
// 005d26b0: POP EDI
// 005d26b1: MOV EDI,dword ptr [EBP + 0x8]
// 005d26b4: XOR ESI,ESI
// 005d26b6: TEST EDI,EDI
// 005d26b8: JBE 0x005d26f0
//   XREF to: 005d26f0 (CONDITIONAL_JUMP)
// 005d26ba: XOR EBX,EBX
// 005d26bc: MOV ECX,dword ptr [ESP + 0x18]
//   Label: LAB_005d26bc
// 005d26c0: PUSH EBP
// 005d26c1: MOV ECX,dword ptr [ECX + 0xc]
// 005d26c4: MOV EAX,dword ptr [EBP + 0xc]
// 005d26c7: ADD ECX,EBX
// 005d26c9: ADD EAX,EBX
// 005d26cb: PUSH ECX
// 005d26cc: MOV EDX,dword ptr [EAX + 0x64]
// 005d26cf: PUSH EAX
// 005d26d0: INC ESI
// 005d26d1: ADD EBX,0x68
// 005d26d4: CALL dword ptr [EDX + 0x4]
// 005d26d7: MOV EAX,dword ptr [EBP + 0x8]
// 005d26da: ADD ESP,0xc
// 005d26dd: CMP ESI,EAX
// 005d26df: JC 0x005d26bc
//   XREF to: 005d26bc (CONDITIONAL_JUMP)
// 005d26e1: LEA EAX,[EAX]
// 005d26e7: LEA EDX,[EDX]
// 005d26ed: LEA EAX,[EAX]
// 005d26f0: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_005d26f0
// 005d26f4: MOV EAX,dword ptr [EAX + 0x10]
// 005d26f7: MOV dword ptr [EBP + 0x10],EAX
// 005d26fa: MOV EAX,0x1
// 005d26ff: POP ESI
// 005d2700: POP EDI
// 005d2701: POP EBP
// 005d2702: POP EBX
// 005d2703: RET
// 005d2704: PUSH 0x6543bf
//   Label: LAB_005d2704
//   XREF to: 006543bf (DATA)
// 005d2709: CALL shape_superopt.cpp_logToFile_FUN_005c7910
//   XREF to: 005c7910 (UNCONDITIONAL_CALL)
// 005d270e: ADD ESP,0x4
// 005d2711: XOR EAX,EAX
// 005d2713: POP EBP
// 005d2714: POP EBX
// 005d2715: RET
