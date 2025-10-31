// Name: core_box.cpp_CBoundingBox3D_normalize_FUN_00420d70
// Address: 00420d70
// Address Range: [[00420d70, 00420dbf]]
// Convention: __cdecl
// Signature: void core_box.cpp_CBoundingBox3D_normalize_FUN_00420d70(CBoundingBox3D * this_ptr)

#include "nocturne.h"

void __cdecl core_box_cpp_CBoundingBox3D_normalize_FUN_00420d70(CBoundingBox3D *this_ptr)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  
  if ((this_ptr->max).x < (this_ptr->min).x) {
    fVar3 = (this_ptr->min).x;
    (this_ptr->min).x = (this_ptr->max).x;
    (this_ptr->max).x = fVar3;
  }
  if ((this_ptr->max).y < (this_ptr->min).y) {
    pfVar1 = &(this_ptr->min).y;
    pfVar2 = &(this_ptr->max).y;
    fVar3 = *pfVar1;
    *pfVar1 = *pfVar2;
    *pfVar2 = fVar3;
  }
  if ((this_ptr->min).z <= (this_ptr->max).z) {
    return;
  }
  pfVar1 = &(this_ptr->min).z;
  fVar3 = *pfVar1;
  *pfVar1 = (this_ptr->max).z;
  (this_ptr->max).z = fVar3;
  return;
}


// Assembly code:
// 00420d70: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_box.cpp_CBoundingBox3D_normalize_FUN_00420d70
//   XREF to: Stack[0x4] (READ)
// 00420d74: FLD float ptr [EDX]
// 00420d76: FCOMP float ptr [EDX + 0xc]
// 00420d79: FNSTSW AX
// 00420d7b: SAHF
// 00420d7c: JA 0x00420da5
//   XREF to: 00420da5 (CONDITIONAL_JUMP)
// 00420d7e: FLD float ptr [EDX + 0x4]
//   Label: LAB_00420d7e
// 00420d81: FCOMP float ptr [EDX + 0x10]
// 00420d84: FNSTSW AX
// 00420d86: SAHF
// 00420d87: JBE 0x00420d99
//   XREF to: 00420d99 (CONDITIONAL_JUMP)
// 00420d89: PUSH EBX
// 00420d8a: LEA ECX,[EDX + 0x4]
// 00420d8d: LEA EAX,[EDX + 0x10]
// 00420d90: MOV EBX,dword ptr [ECX]
// 00420d92: FLD float ptr [EAX]
// 00420d94: FSTP float ptr [ECX]
// 00420d96: MOV dword ptr [EAX],EBX
// 00420d98: POP EBX
// 00420d99: FLD float ptr [EDX + 0x8]
//   Label: LAB_00420d99
// 00420d9c: FCOMP float ptr [EDX + 0x14]
// 00420d9f: FNSTSW AX
// 00420da1: SAHF
// 00420da2: JA 0x00420db2
//   XREF to: 00420db2 (CONDITIONAL_JUMP)
// 00420da4: RET
// 00420da5: LEA EAX,[EDX + 0xc]
//   Label: LAB_00420da5
// 00420da8: MOV ECX,dword ptr [EDX]
// 00420daa: FLD float ptr [EAX]
// 00420dac: FSTP float ptr [EDX]
// 00420dae: MOV dword ptr [EAX],ECX
// 00420db0: JMP 0x00420d7e
//   XREF to: 00420d7e (UNCONDITIONAL_JUMP)
// 00420db2: LEA EAX,[EDX + 0x8]
//   Label: LAB_00420db2
// 00420db5: FLD float ptr [EDX + 0x14]
// 00420db8: MOV ECX,dword ptr [EAX]
// 00420dba: FSTP float ptr [EAX]
// 00420dbc: MOV dword ptr [EDX + 0x14],ECX
// 00420dbf: RET
