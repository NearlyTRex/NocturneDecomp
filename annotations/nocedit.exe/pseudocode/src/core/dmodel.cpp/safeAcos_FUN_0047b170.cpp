// Name: core_dmodel.cpp_safeAcos_FUN_0047b170
// Address: 0047b170
// Address Range: [[0047b170, 0047b1dd]]
// Convention: __cdecl
// Signature: double core_dmodel.cpp_safeAcos_FUN_0047b170(float value)
// Globals:
//   double DOUBLE_0062044b = -1
// Function calls:
//   crt_math.c_acos_FUN_00600162

#include "nocturne.h"

double __cdecl core_dmodel_cpp_safeAcos_FUN_0047b170(float value)

{
  double dVar1;
  float in_stack_00000004;
  undefined4 local_10;
  undefined4 local_c;
  
  dVar1 = (double)in_stack_00000004;
  if (1.0 <= dVar1) {
    local_10 = 0;
    local_c = 0;
  }
  else {
    if (DOUBLE_0062044b < dVar1) {
      dVar1 = crt_math_c_acos_FUN_00600162(dVar1);
      return dVar1;
    }
    local_10 = 0x54411744;
    local_c = 0x400921fb;
  }
  return (double)CONCAT44(local_c,local_10);
}


// Assembly code:
// 0047b170: PUSH EBX
//   Label: core_dmodel.cpp_safeAcos_FUN_0047b170
// 0047b171: PUSH EBP
// 0047b172: MOV EBP,ESP
// 0047b174: SUB ESP,0x10
// 0047b177: AND ESP,0xfffffff8
// 0047b17a: FLD float ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0047b17d: FLD1
// 0047b17f: FXCH
// 0047b181: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0047b184: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0047b187: FNSTSW AX
// 0047b189: SAHF
// 0047b18a: JBE 0x0047b1b9
//   XREF to: 0047b1b9 (CONDITIONAL_JUMP)
// 0047b18c: FLD double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0047b18f: FCOMP double ptr [0x0062044b]
//   XREF to: 0062044b (READ)
// 0047b195: FNSTSW AX
// 0047b197: SAHF
// 0047b198: JA 0x0047b1c5
//   XREF to: 0047b1c5 (CONDITIONAL_JUMP)
// 0047b19a: MOV EDX,0x54411744
// 0047b19f: MOV ECX,0x400921fb
// 0047b1a4: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x10] (WRITE)
// 0047b1a8: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0xc] (WRITE)
// 0047b1ac: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_0047b1ac
//   XREF to: Stack[-0x10] (READ)
// 0047b1b0: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0xc] (READ)
// 0047b1b4: MOV ESP,EBP
// 0047b1b6: POP EBP
// 0047b1b7: POP EBX
// 0047b1b8: RET
// 0047b1b9: XOR EBX,EBX
//   Label: LAB_0047b1b9
// 0047b1bb: MOV dword ptr [ESP + 0x8],EBX
//   XREF to: Stack[-0x10] (WRITE)
// 0047b1bf: MOV dword ptr [ESP + 0xc],EBX
//   XREF to: Stack[-0xc] (WRITE)
// 0047b1c3: JMP 0x0047b1ac
//   XREF to: 0047b1ac (UNCONDITIONAL_JUMP)
// 0047b1c5: FLD double ptr [ESP]
//   Label: LAB_0047b1c5
//   XREF to: Stack[-0x18] (DATA)
// 0047b1c8: CALL crt_math.c_acos_FUN_00600162
//   XREF to: 00600162 (UNCONDITIONAL_CALL)
// 0047b1cd: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (WRITE)
// 0047b1d1: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 0047b1d5: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x10] (READ)
// 0047b1d9: MOV ESP,EBP
// 0047b1db: POP EBP
// 0047b1dc: POP EBX
// 0047b1dd: RET
