// Name: shape_superopt.cpp_CObj_removePolygonsByFlag_FUN_005d30f0
// Address: 005d30f0
// Address Range: [[005d30f0, 005d3136]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_CObj_removePolygonsByFlag_FUN_005d30f0(CObj * this_ptr, uint flag_mask)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_removePolygonsByFlag_FUN_005d30f0(CObj *this_ptr,uint flag_mask)

{
  int iVar1;
  uint index;
  uint uVar2;
  
  index = 0;
  if (this_ptr->poly_count != 0) {
    do {
      uVar2 = index;
      if ((this_ptr->poly_array[index].flags & flag_mask) == flag_mask) {
        uVar2 = index - 1;
        iVar1 = (*this_ptr->vtable->removePolygon)(this_ptr,index);
        if (iVar1 == 0) {
          return 0;
        }
      }
      index = uVar2 + 1;
    } while (index < (uint)this_ptr->poly_count);
  }
  return 1;
}


// Assembly code:
// 005d30f0: PUSH EBX
//   Label: shape_superopt.cpp_CObj_removePolygonsByFlag_FUN_005d30f0
// 005d30f1: PUSH ESI
// 005d30f2: PUSH EDI
// 005d30f3: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005d30f7: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005d30fb: MOV EDX,dword ptr [ESI + 0x8]
// 005d30fe: XOR EBX,EBX
// 005d3100: TEST EDX,EDX
// 005d3102: JBE 0x005d311a
//   XREF to: 005d311a (CONDITIONAL_JUMP)
// 005d3104: IMUL EAX,EBX,0x68
//   Label: LAB_005d3104
// 005d3107: MOV EDX,dword ptr [ESI + 0xc]
// 005d310a: MOV EAX,dword ptr [EDX + EAX*0x1 + 0x60]
// 005d310e: AND EAX,EDI
// 005d3110: CMP EAX,EDI
// 005d3112: JZ 0x005d3123
//   XREF to: 005d3123 (CONDITIONAL_JUMP)
// 005d3114: INC EBX
//   Label: LAB_005d3114
// 005d3115: CMP EBX,dword ptr [ESI + 0x8]
// 005d3118: JC 0x005d3104
//   XREF to: 005d3104 (CONDITIONAL_JUMP)
// 005d311a: MOV EAX,0x1
//   Label: LAB_005d311a
// 005d311f: POP EDI
// 005d3120: POP ESI
// 005d3121: POP EBX
// 005d3122: RET
// 005d3123: PUSH EBX
//   Label: LAB_005d3123
// 005d3124: MOV EAX,dword ptr [ESI + 0x18]
// 005d3127: PUSH ESI
// 005d3128: DEC EBX
// 005d3129: CALL dword ptr [EAX + 0x40]
// 005d312c: ADD ESP,0x8
// 005d312f: TEST EAX,EAX
// 005d3131: JNZ 0x005d3114
//   XREF to: 005d3114 (CONDITIONAL_JUMP)
// 005d3133: POP EDI
// 005d3134: POP ESI
// 005d3135: POP EBX
// 005d3136: RET
