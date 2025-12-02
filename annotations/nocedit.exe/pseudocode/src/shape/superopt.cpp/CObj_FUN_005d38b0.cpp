// Name: shape_superopt.cpp_CObj_FUN_005d38b0
// Address: 005d38b0
// Address Range: [[005d38b0, 005d395c]]
// Convention: __cdecl
// Signature: void * shape_superopt.cpp_CObj_FUN_005d38b0(CObj * this_ptr)

#include "nocturne.h"

void * __cdecl shape_superopt_cpp_CObj_FUN_005d38b0(CObj *this_ptr)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  undefined4 *in_stack_00000008;
  
  puVar2 = (undefined4 *)(this_ptr->field4_0x10 & (uint)in_stack_00000008);
  if (puVar2 == in_stack_00000008) {
    pvVar3 = (void *)(*(code *)this_ptr->vtable->field38_0x98)();
    return pvVar3;
  }
  uVar4 = 0;
  if (this_ptr->poly_count != 0) {
    iVar5 = 0;
    do {
      iVar1 = iVar5 + 4;
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0x68;
      puVar2 = (undefined4 *)
               (**(code **)(*(int *)((int)(this_ptr->poly_array->uv_coords + 5) + iVar1) + 0x40))();
    } while (uVar4 < (uint)this_ptr->poly_count);
  }
  uVar4 = 0;
  if (this_ptr->vertex_count != 0) {
    iVar5 = 0;
    do {
      while (puVar2 = (undefined4 *)((int)&(this_ptr->vertex_data->position).impl.x + iVar5),
            (undefined4 *)(puVar2[0xd] & (uint)in_stack_00000008) == in_stack_00000008) {
        *puVar2 = puVar2[6];
        puVar2[1] = puVar2[7];
        puVar2[2] = puVar2[8];
        puVar2[3] = puVar2[9];
        puVar2[4] = puVar2[10];
        puVar2[5] = puVar2[0xb];
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 0x38;
        if ((uint)this_ptr->vertex_count <= uVar4) {
          return puVar2;
        }
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0x38;
    } while (uVar4 < (uint)this_ptr->vertex_count);
  }
  return puVar2;
}


// Assembly code:
// 005d38b0: PUSH EBX
//   Label: shape_superopt.cpp_CObj_FUN_005d38b0
// 005d38b1: PUSH ESI
// 005d38b2: PUSH EDI
// 005d38b3: PUSH EBP
// 005d38b4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d38b8: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d38bc: MOV EAX,dword ptr [EBX + 0x10]
// 005d38bf: AND EAX,ESI
// 005d38c1: CMP EAX,ESI
// 005d38c3: JZ 0x005d3917
//   XREF to: 005d3917 (CONDITIONAL_JUMP)
// 005d38c5: MOV EDX,dword ptr [EBX + 0x8]
// 005d38c8: XOR EBP,EBP
// 005d38ca: TEST EDX,EDX
// 005d38cc: JBE 0x005d38f0
//   XREF to: 005d38f0 (CONDITIONAL_JUMP)
// 005d38ce: XOR EDI,EDI
// 005d38d0: MOV EAX,dword ptr [EBX + 0xc]
//   Label: LAB_005d38d0
// 005d38d3: PUSH ESI
// 005d38d4: ADD EAX,EDI
// 005d38d6: PUSH EAX
// 005d38d7: MOV EDX,dword ptr [EAX + 0x64]
// 005d38da: INC EBP
// 005d38db: ADD EDI,0x68
// 005d38de: CALL dword ptr [EDX + 0x40]
// 005d38e1: MOV ECX,dword ptr [EBX + 0x8]
// 005d38e4: ADD ESP,0x8
// 005d38e7: CMP EBP,ECX
// 005d38e9: JC 0x005d38d0
//   XREF to: 005d38d0 (CONDITIONAL_JUMP)
// 005d38eb: LEA EAX,[EAX]
// 005d38ee: MOV ECX,ECX
// 005d38f0: MOV EDI,dword ptr [EBX]
//   Label: LAB_005d38f0
// 005d38f2: XOR ECX,ECX
// 005d38f4: TEST EDI,EDI
// 005d38f6: JBE 0x005d3912
//   XREF to: 005d3912 (CONDITIONAL_JUMP)
// 005d38f8: XOR EDI,EDI
// 005d38fa: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_005d38fa
// 005d38fd: ADD EAX,EDI
// 005d38ff: MOV EDX,dword ptr [EAX + 0x34]
// 005d3902: AND EDX,ESI
// 005d3904: CMP EDX,ESI
// 005d3906: JZ 0x005d3929
//   XREF to: 005d3929 (CONDITIONAL_JUMP)
// 005d3908: INC ECX
// 005d3909: MOV EBP,dword ptr [EBX]
// 005d390b: ADD EDI,0x38
// 005d390e: CMP ECX,EBP
// 005d3910: JC 0x005d38fa
//   XREF to: 005d38fa (CONDITIONAL_JUMP)
// 005d3912: POP EBP
//   Label: LAB_005d3912
// 005d3913: POP EDI
// 005d3914: POP ESI
// 005d3915: POP EBX
// 005d3916: RET
// 005d3917: PUSH EBX
//   Label: LAB_005d3917
// 005d3918: MOV EAX,dword ptr [EBX + 0x18]
// 005d391b: CALL dword ptr [EAX + 0x98]
// 005d3921: ADD ESP,0x4
// 005d3924: POP EBP
// 005d3925: POP EDI
// 005d3926: POP ESI
// 005d3927: POP EBX
// 005d3928: RET
// 005d3929: LEA EDX,[EAX + 0x18]
//   Label: LAB_005d3929
// 005d392c: MOV EBP,dword ptr [EDX]
// 005d392e: MOV dword ptr [EAX],EBP
// 005d3930: MOV EBP,dword ptr [EDX + 0x4]
// 005d3933: MOV dword ptr [EAX + 0x4],EBP
// 005d3936: MOV EBP,dword ptr [EDX + 0x8]
// 005d3939: MOV dword ptr [EAX + 0x8],EBP
// 005d393c: MOV EBP,dword ptr [EDX + 0xc]
// 005d393f: MOV dword ptr [EAX + 0xc],EBP
// 005d3942: MOV EBP,dword ptr [EDX + 0x10]
// 005d3945: MOV dword ptr [EAX + 0x10],EBP
// 005d3948: MOV EBP,dword ptr [EDX + 0x14]
// 005d394b: MOV dword ptr [EAX + 0x14],EBP
// 005d394e: INC ECX
// 005d394f: MOV EBP,dword ptr [EBX]
// 005d3951: ADD EDI,0x38
// 005d3954: CMP ECX,EBP
// 005d3956: JC 0x005d38fa
//   XREF to: 005d38fa (CONDITIONAL_JUMP)
// 005d3958: POP EBP
// 005d3959: POP EDI
// 005d395a: POP ESI
// 005d395b: POP EBX
// 005d395c: RET
