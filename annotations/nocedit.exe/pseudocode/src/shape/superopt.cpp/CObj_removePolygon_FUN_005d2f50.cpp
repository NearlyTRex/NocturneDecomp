// Name: shape_superopt.cpp_CObj_removePolygon_FUN_005d2f50
// Address: 005d2f50
// Address Range: [[005d2f50, 005d3013]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_CObj_removePolygon_FUN_005d2f50(CObj * this_ptr, uint index)
// Function calls:
//   crt_memory.c_free_FUN_00601cd0
//   crt_memory.c_realloc_FUN_00601df0
//   crt_string.c_memmove_FUN_005fe5e0

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_removePolygon_FUN_005d2f50(CObj *this_ptr,uint index)

{
  uint uVar1;
  CPoly *pCVar2;
  
  if ((uint)this_ptr->poly_count <= index) {
    return 0;
  }
  uVar1 = this_ptr->poly_count - 1;
  this_ptr->poly_count = uVar1;
  if (index < uVar1) {
    crt_string_c_memmove_FUN_005fe5e0
              (this_ptr->poly_array + index,this_ptr->poly_array + index + 1,(uVar1 - index) * 0x68)
    ;
  }
  if (this_ptr->poly_count != 0) {
    pCVar2 = (CPoly *)crt_memory_c_realloc_FUN_00601df0
                                (this_ptr->poly_array,this_ptr->poly_count * 0x68);
    if (pCVar2 != (CPoly *)0x0) {
      this_ptr->poly_array = pCVar2;
      pCVar2 = (CPoly *)&DAT_00000001;
    }
    return (int)pCVar2;
  }
  crt_memory_c_free_FUN_00601cd0(this_ptr->poly_array);
  this_ptr->poly_array = (CPoly *)0x0;
  return 1;
}


// Assembly code:
// 005d2f50: PUSH EBX
//   Label: shape_superopt.cpp_CObj_removePolygon_FUN_005d2f50
// 005d2f51: PUSH ESI
// 005d2f52: PUSH EBP
// 005d2f53: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005d2f57: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005d2f5b: MOV EDX,dword ptr [EBX + 0x8]
// 005d2f5e: CMP ECX,EDX
// 005d2f60: JNC 0x005d2fa5
//   XREF to: 005d2fa5 (CONDITIONAL_JUMP)
// 005d2f62: LEA ESI,[EDX + -0x1]
// 005d2f65: MOV dword ptr [EBX + 0x8],ESI
// 005d2f68: CMP ECX,ESI
// 005d2f6a: JC 0x005d2fab
//   XREF to: 005d2fab (CONDITIONAL_JUMP)
// 005d2f6c: MOV EBP,dword ptr [EBX + 0x8]
//   Label: LAB_005d2f6c
// 005d2f6f: TEST EBP,EBP
// 005d2f71: JZ 0x005d2ffc
//   XREF to: 005d2ffc (CONDITIONAL_JUMP)
// 005d2f77: LEA EAX,[EBP*0x4 + 0x0]
// 005d2f7e: SUB EAX,EBP
// 005d2f80: SHL EAX,0x2
// 005d2f83: ADD EAX,EBP
// 005d2f85: SHL EAX,0x3
// 005d2f88: PUSH EAX
// 005d2f89: MOV EDX,dword ptr [EBX + 0xc]
// 005d2f8c: PUSH EDX
// 005d2f8d: CALL crt_memory.c_realloc_FUN_00601df0
//   XREF to: 00601df0 (UNCONDITIONAL_CALL)
// 005d2f92: ADD ESP,0x8
// 005d2f95: TEST EAX,EAX
// 005d2f97: JZ 0x005d2fa1
//   XREF to: 005d2fa1 (CONDITIONAL_JUMP)
// 005d2f99: MOV dword ptr [EBX + 0xc],EAX
// 005d2f9c: MOV EAX,0x1
// 005d2fa1: POP EBP
//   Label: LAB_005d2fa1
// 005d2fa2: POP ESI
// 005d2fa3: POP EBX
// 005d2fa4: RET
// 005d2fa5: XOR EAX,EAX
//   Label: LAB_005d2fa5
// 005d2fa7: POP EBP
// 005d2fa8: POP ESI
// 005d2fa9: POP EBX
// 005d2faa: RET
// 005d2fab: MOV EDX,ESI
//   Label: LAB_005d2fab
// 005d2fad: SUB EDX,ECX
// 005d2faf: LEA EAX,[EDX*0x4 + 0x0]
// 005d2fb6: SUB EAX,EDX
// 005d2fb8: SHL EAX,0x2
// 005d2fbb: ADD EAX,EDX
// 005d2fbd: SHL EAX,0x3
// 005d2fc0: LEA EDX,[ECX + 0x1]
// 005d2fc3: PUSH EAX
// 005d2fc4: LEA EAX,[EDX*0x4 + 0x0]
// 005d2fcb: SUB EAX,EDX
// 005d2fcd: SHL EAX,0x2
// 005d2fd0: ADD EAX,EDX
// 005d2fd2: MOV ESI,dword ptr [EBX + 0xc]
// 005d2fd5: SHL EAX,0x3
// 005d2fd8: ADD EAX,ESI
// 005d2fda: PUSH EAX
// 005d2fdb: LEA EAX,[ECX*0x4 + 0x0]
// 005d2fe2: SUB EAX,ECX
// 005d2fe4: SHL EAX,0x2
// 005d2fe7: ADD EAX,ECX
// 005d2fe9: SHL EAX,0x3
// 005d2fec: ADD EAX,ESI
// 005d2fee: PUSH EAX
// 005d2fef: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 005d2ff4: ADD ESP,0xc
// 005d2ff7: JMP 0x005d2f6c
//   XREF to: 005d2f6c (UNCONDITIONAL_JUMP)
// 005d2ffc: MOV EAX,dword ptr [EBX + 0xc]
//   Label: LAB_005d2ffc
// 005d2fff: PUSH EAX
// 005d3000: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 005d3005: MOV EAX,0x1
// 005d300a: ADD ESP,0x4
// 005d300d: MOV dword ptr [EBX + 0xc],EBP
// 005d3010: POP EBP
// 005d3011: POP ESI
// 005d3012: POP EBX
// 005d3013: RET
