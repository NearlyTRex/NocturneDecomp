// Name: shape_superopt.cpp_FUN_005d66e0
// Address: 005d66e0
// Address Range: [[005d66e0, 005d6c04]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d66e0()
// Cross-references:
//   shape_superopt.cpp_FUN_005c7fb0 (005c7fb0) at 005c8146 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_FUN_005d6c10 (005d6c10) at 005d6f72 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0065455a

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 shape_superopt.cpp_FUN_005d66e0(undefined4 param_1, undefined4 param_2) */

undefined4 shape_superopt_cpp_FUN_005d66e0(void)

{
  double dVar1;
  double dVar2;
  double *in_stack_00000004;
  double *in_stack_00000008;
  double local_158;
  double local_150;
  double local_148;
  double local_c0;
  double local_a0;
  double local_98;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  
  local_50 = *in_stack_00000004;
  local_48 = in_stack_00000004[1];
  local_40 = in_stack_00000004[2];
  local_68 = *in_stack_00000008;
  local_60 = in_stack_00000008[1];
  local_58 = in_stack_00000008[2];
  dVar1 = SQRT(local_50 * local_50 + local_48 * local_48 + local_40 * local_40);
  dVar2 = SQRT(local_68 * local_68 + local_60 * local_60 + local_58 * local_58);
  if (dVar1 < dVar2) {
    dVar1 = dVar1 / dVar2;
    local_68 = local_68 * dVar1;
    local_60 = local_60 * dVar1;
    local_58 = local_58 * dVar1;
  }
  else {
    dVar2 = dVar2 / dVar1;
    local_50 = local_50 * dVar2;
    local_48 = local_48 * dVar2;
    local_40 = local_40 * dVar2;
  }
  local_c0 = local_48 - local_60;
  local_148 = local_40 - local_58;
  local_98 = local_50 - local_68;
  if (local_c0 < 0.0) {
    local_c0 = -local_c0;
  }
  if (local_98 < 0.0) {
    local_98 = -local_98;
  }
  if (local_148 < 0.0) {
    local_148 = -local_148;
  }
  local_a0 = local_48 + local_60;
  local_158 = local_40 + local_58;
  local_150 = local_50 + local_68;
  if (local_a0 < 0.0) {
    local_a0 = -local_a0;
  }
  if (local_150 < 0.0) {
    local_150 = -local_150;
  }
  if (local_158 < 0.0) {
    local_158 = -local_158;
  }
  if ((_DAT_0065455a <= local_98 + local_c0 + local_148) &&
     (_DAT_0065455a <= local_150 + local_a0 + local_158)) {
    return 0;
  }
  return 1;
}


// Assembly code:
// 005d66e0: PUSH EBP
//   Label: shape_superopt.cpp_FUN_005d66e0
// 005d66e1: MOV EBP,ESP
// 005d66e3: SUB ESP,0x150
// 005d66e9: AND ESP,0xfffffff8
// 005d66ec: MOV EDX,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005d66ef: MOV ECX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005d66f2: MOV EAX,dword ptr [EDX]
// 005d66f4: MOV dword ptr [ESP + 0x108],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 005d66fb: MOV EAX,dword ptr [EDX + 0x4]
// 005d66fe: MOV dword ptr [ESP + 0x10c],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 005d6705: MOV EAX,dword ptr [EDX + 0x8]
// 005d6708: FLD double ptr [ESP + 0x108]
//   XREF to: Stack[-0x50] (READ)
// 005d670f: MOV dword ptr [ESP + 0x110],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 005d6716: FMUL double ptr [ESP + 0x108]
//   XREF to: Stack[-0x50] (READ)
// 005d671d: MOV EAX,dword ptr [EDX + 0xc]
// 005d6720: MOV dword ptr [ESP + 0x114],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 005d6727: MOV EAX,dword ptr [EDX + 0x10]
// 005d672a: FLD double ptr [ESP + 0x110]
//   XREF to: Stack[-0x48] (READ)
// 005d6731: MOV dword ptr [ESP + 0x118],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 005d6738: FMUL double ptr [ESP + 0x110]
//   XREF to: Stack[-0x48] (READ)
// 005d673f: MOV EAX,dword ptr [EDX + 0x14]
// 005d6742: MOV dword ptr [ESP + 0x11c],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 005d6749: FLD double ptr [ESP + 0x118]
//   XREF to: Stack[-0x40] (READ)
// 005d6750: MOV EAX,dword ptr [ECX]
// 005d6752: FMUL double ptr [ESP + 0x118]
//   XREF to: Stack[-0x40] (READ)
// 005d6759: MOV dword ptr [ESP + 0xf0],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 005d6760: FXCH ST2
// 005d6762: FSTP double ptr [ESP + 0x58]
//   XREF to: Stack[-0x100] (WRITE)
// 005d6766: MOV EAX,dword ptr [ECX + 0x4]
// 005d6769: FLD double ptr [ESP + 0x58]
//   XREF to: Stack[-0x100] (READ)
// 005d676d: MOV dword ptr [ESP + 0xf4],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 005d6774: FXCH
// 005d6776: FSTP double ptr [ESP + 0x90]
//   XREF to: Stack[-0xc8] (WRITE)
// 005d677d: MOV EAX,dword ptr [ECX + 0x8]
// 005d6780: FADD double ptr [ESP + 0x90]
//   XREF to: Stack[-0xc8] (READ)
// 005d6787: MOV dword ptr [ESP + 0xf8],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 005d678e: FSTP double ptr [ESP + 0x68]
//   XREF to: Stack[-0xf0] (WRITE)
// 005d6792: MOV EAX,dword ptr [ECX + 0xc]
// 005d6795: FLD double ptr [ESP + 0x68]
//   XREF to: Stack[-0xf0] (READ)
// 005d6799: MOV dword ptr [ESP + 0xfc],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 005d67a0: FXCH
// 005d67a2: FSTP double ptr [ESP + 0x88]
//   XREF to: Stack[-0xd0] (WRITE)
// 005d67a9: MOV EAX,dword ptr [ECX + 0x10]
// 005d67ac: FADD double ptr [ESP + 0x88]
//   XREF to: Stack[-0xd0] (READ)
// 005d67b3: MOV dword ptr [ESP + 0x100],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 005d67ba: FSTP double ptr [ESP + 0x70]
//   XREF to: Stack[-0xe8] (WRITE)
// 005d67be: MOV EAX,dword ptr [ECX + 0x14]
// 005d67c1: FLD double ptr [ESP + 0x70]
//   XREF to: Stack[-0xe8] (READ)
// 005d67c5: MOV dword ptr [ESP + 0x104],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 005d67cc: FSQRT
// 005d67ce: FLD double ptr [ESP + 0xf0]
//   XREF to: Stack[-0x68] (READ)
// 005d67d5: FMUL ST0
// 005d67d7: FLD double ptr [ESP + 0xf8]
//   XREF to: Stack[-0x60] (READ)
// 005d67de: FMUL ST0
// 005d67e0: FXCH
// 005d67e2: FXCH
// 005d67e4: FSTP double ptr [ESP + 0x60]
//   XREF to: Stack[-0xf8] (WRITE)
// 005d67e8: FADD double ptr [ESP + 0x60]
//   XREF to: Stack[-0xf8] (READ)
// 005d67ec: FLD double ptr [ESP + 0x100]
//   XREF to: Stack[-0x58] (READ)
// 005d67f3: FMUL ST0
// 005d67f5: FXCH
// 005d67f7: FXCH
// 005d67f9: FSTP double ptr [ESP + 0x20]
//   XREF to: Stack[-0x138] (WRITE)
// 005d67fd: FADD double ptr [ESP + 0x20]
//   XREF to: Stack[-0x138] (READ)
// 005d6801: FSQRT
// 005d6803: FXCH
// 005d6805: FST double ptr [ESP + 0xd0]
//   XREF to: Stack[-0x88] (WRITE)
// 005d680c: FXCH
// 005d680e: FSTP double ptr [ESP + 0xc8]
//   XREF to: Stack[-0x90] (WRITE)
// 005d6815: FCOMP double ptr [ESP + 0xc8]
//   XREF to: Stack[-0x90] (READ)
// 005d681c: FNSTSW AX
// 005d681e: SAHF
// 005d681f: JC 0x005d6b47
//   XREF to: 005d6b47 (CONDITIONAL_JUMP)
// 005d6825: FLD double ptr [ESP + 0x108]
//   XREF to: Stack[-0x50] (READ)
// 005d682c: FLD double ptr [ESP + 0xc8]
//   XREF to: Stack[-0x90] (READ)
// 005d6833: FDIV double ptr [ESP + 0xd0]
//   XREF to: Stack[-0x88] (READ)
// 005d683a: FXCH
// 005d683c: FMUL ST1
// 005d683e: FLD double ptr [ESP + 0x110]
//   XREF to: Stack[-0x48] (READ)
// 005d6845: FMUL ST2
// 005d6847: FLD double ptr [ESP + 0x118]
//   XREF to: Stack[-0x40] (READ)
// 005d684e: FMULP ST3
// 005d6850: FXCH
// 005d6852: FSTP double ptr [ESP + 0x108]
//   XREF to: Stack[-0x50] (WRITE)
// 005d6859: FSTP double ptr [ESP + 0x110]
//   XREF to: Stack[-0x48] (WRITE)
// 005d6860: FSTP double ptr [ESP + 0x118]
//   XREF to: Stack[-0x40] (WRITE)
// 005d6867: MOV EAX,dword ptr [ESP + 0x108]
//   Label: LAB_005d6867
//   XREF to: Stack[-0x50] (READ)
// 005d686e: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0xe0] (WRITE)
// 005d6872: MOV EAX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x4c] (READ)
// 005d6879: MOV dword ptr [ESP + 0x7c],EAX
//   XREF to: Stack[-0xdc] (WRITE)
// 005d687d: MOV EAX,dword ptr [ESP + 0x110]
//   XREF to: Stack[-0x48] (READ)
// 005d6884: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0xd8] (WRITE)
// 005d688b: MOV EAX,dword ptr [ESP + 0x114]
//   XREF to: Stack[-0x44] (READ)
// 005d6892: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0xd4] (WRITE)
// 005d6899: MOV EAX,dword ptr [ESP + 0x118]
//   XREF to: Stack[-0x40] (READ)
// 005d68a0: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x108] (WRITE)
// 005d68a4: MOV EAX,dword ptr [ESP + 0x11c]
//   XREF to: Stack[-0x3c] (READ)
// 005d68ab: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x104] (WRITE)
// 005d68af: MOV EAX,dword ptr [ESP + 0xf0]
//   XREF to: Stack[-0x68] (READ)
// 005d68b6: FLD double ptr [ESP + 0x118]
//   XREF to: Stack[-0x40] (READ)
// 005d68bd: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x128] (WRITE)
// 005d68c1: MOV EAX,dword ptr [ESP + 0xf4]
//   XREF to: Stack[-0x64] (READ)
// 005d68c8: FLD double ptr [ESP + 0x110]
//   XREF to: Stack[-0x48] (READ)
// 005d68cf: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x124] (WRITE)
// 005d68d3: MOV EAX,dword ptr [ESP + 0xf8]
//   XREF to: Stack[-0x60] (READ)
// 005d68da: FLD double ptr [ESP + 0x108]
//   XREF to: Stack[-0x50] (READ)
// 005d68e1: MOV dword ptr [ESP + 0xa8],EAX
//   XREF to: Stack[-0xb0] (WRITE)
// 005d68e8: MOV EAX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x5c] (READ)
// 005d68ef: FLDZ
// 005d68f1: MOV dword ptr [ESP + 0xac],EAX
//   XREF to: Stack[-0xac] (WRITE)
// 005d68f8: MOV EAX,dword ptr [ESP + 0x100]
//   XREF to: Stack[-0x58] (READ)
// 005d68ff: FXCH ST2
// 005d6901: FSUB double ptr [ESP + 0xf8]
//   XREF to: Stack[-0x60] (READ)
// 005d6908: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x120] (WRITE)
// 005d690c: MOV EAX,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x54] (READ)
// 005d6913: FSTP double ptr [ESP + 0xb0]
//   XREF to: Stack[-0xa8] (WRITE)
// 005d691a: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x11c] (WRITE)
// 005d691e: MOV EAX,dword ptr [ESP + 0xb0]
//   XREF to: Stack[-0xa8] (READ)
// 005d6925: FXCH ST2
// 005d6927: FSUB double ptr [ESP + 0x100]
//   XREF to: Stack[-0x58] (READ)
// 005d692e: MOV dword ptr [ESP + 0xe0],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 005d6935: MOV EAX,dword ptr [ESP + 0xb4]
//   XREF to: Stack[-0xa4] (READ)
// 005d693c: FSTP double ptr [ESP + 0x148]
//   XREF to: Stack[-0x10] (WRITE)
// 005d6943: MOV dword ptr [ESP + 0xe4],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 005d694a: MOV EAX,dword ptr [ESP + 0x148]
//   XREF to: Stack[-0x10] (READ)
// 005d6951: FXCH
// 005d6953: FSUB double ptr [ESP + 0xf0]
//   XREF to: Stack[-0x68] (READ)
// 005d695a: MOV dword ptr [ESP + 0xe8],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 005d6961: MOV EAX,dword ptr [ESP + 0x14c]
//   XREF to: Stack[-0xc] (READ)
// 005d6968: FSTP double ptr [ESP + 0xd8]
//   XREF to: Stack[-0x80] (WRITE)
// 005d696f: MOV dword ptr [ESP + 0xec],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 005d6976: FCOMP double ptr [ESP + 0xb0]
//   XREF to: Stack[-0xa8] (READ)
// 005d697d: FNSTSW AX
// 005d697f: SAHF
// 005d6980: JA 0x005d6b8e
//   XREF to: 005d6b8e (CONDITIONAL_JUMP)
// 005d6986: MOV EAX,dword ptr [ESP + 0xb0]
//   XREF to: Stack[-0xa8] (READ)
// 005d698d: MOV dword ptr [ESP + 0x98],EAX
//   XREF to: Stack[-0xc0] (WRITE)
// 005d6994: MOV EAX,dword ptr [ESP + 0xb4]
//   XREF to: Stack[-0xa4] (READ)
// 005d699b: MOV dword ptr [ESP + 0x9c],EAX
//   XREF to: Stack[-0xbc] (WRITE)
// 005d69a2: FLDZ
//   Label: LAB_005d69a2
// 005d69a4: FCOMP double ptr [ESP + 0xd8]
//   XREF to: Stack[-0x80] (READ)
// 005d69ab: FNSTSW AX
// 005d69ad: SAHF
// 005d69ae: JA 0x005d6ba3
//   XREF to: 005d6ba3 (CONDITIONAL_JUMP)
// 005d69b4: MOV EAX,dword ptr [ESP + 0xd8]
//   XREF to: Stack[-0x80] (READ)
// 005d69bb: MOV dword ptr [ESP + 0xc0],EAX
//   XREF to: Stack[-0x98] (WRITE)
// 005d69c2: MOV EAX,dword ptr [ESP + 0xdc]
//   XREF to: Stack[-0x7c] (READ)
// 005d69c9: MOV dword ptr [ESP + 0xc4],EAX
//   XREF to: Stack[-0x94] (WRITE)
// 005d69d0: FLD double ptr [ESP + 0xc0]
//   Label: LAB_005d69d0
//   XREF to: Stack[-0x98] (READ)
// 005d69d7: FADD double ptr [ESP + 0x98]
//   XREF to: Stack[-0xc0] (READ)
// 005d69de: FLDZ
// 005d69e0: FXCH
// 005d69e2: FSTP double ptr [ESP + 0x40]
//   XREF to: Stack[-0x118] (WRITE)
// 005d69e6: FCOMP double ptr [ESP + 0xe8]
//   XREF to: Stack[-0x70] (READ)
// 005d69ed: FNSTSW AX
// 005d69ef: SAHF
// 005d69f0: JA 0x005d6bb8
//   XREF to: 005d6bb8 (CONDITIONAL_JUMP)
// 005d69f6: MOV EAX,dword ptr [ESP + 0xe8]
//   XREF to: Stack[-0x70] (READ)
// 005d69fd: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x148] (WRITE)
// 005d6a01: MOV EAX,dword ptr [ESP + 0xec]
//   XREF to: Stack[-0x6c] (READ)
// 005d6a08: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x144] (WRITE)
// 005d6a0c: FLD double ptr [ESP + 0x40]
//   Label: LAB_005d6a0c
//   XREF to: Stack[-0x118] (READ)
// 005d6a10: FLD double ptr [ESP + 0x50]
//   XREF to: Stack[-0x108] (READ)
// 005d6a14: FLD double ptr [ESP + 0x80]
//   XREF to: Stack[-0xd8] (READ)
// 005d6a1b: FLD double ptr [ESP + 0x78]
//   XREF to: Stack[-0xe0] (READ)
// 005d6a1f: FLDZ
// 005d6a21: FXCH ST4
// 005d6a23: FADD double ptr [ESP + 0x10]
//   XREF to: Stack[-0x148] (READ)
// 005d6a27: FXCH ST2
// 005d6a29: FADD double ptr [ESP + 0xa8]
//   XREF to: Stack[-0xb0] (READ)
// 005d6a30: FXCH ST3
// 005d6a32: FADD double ptr [ESP + 0x38]
//   XREF to: Stack[-0x120] (READ)
// 005d6a36: FXCH ST3
// 005d6a38: FSTP double ptr [ESP + 0x18]
//   XREF to: Stack[-0x140] (WRITE)
// 005d6a3c: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x140] (READ)
// 005d6a40: FADD double ptr [ESP + 0x30]
//   XREF to: Stack[-0x128] (READ)
// 005d6a44: MOV dword ptr [ESP + 0x128],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 005d6a4b: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x13c] (READ)
// 005d6a4f: FXCH ST2
// 005d6a51: FSTP double ptr [ESP + 0x148]
//   XREF to: Stack[-0x10] (WRITE)
// 005d6a58: MOV dword ptr [ESP + 0x12c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005d6a5f: MOV EAX,dword ptr [ESP + 0x148]
//   XREF to: Stack[-0x10] (READ)
// 005d6a66: FSTP double ptr [ESP + 0x48]
//   XREF to: Stack[-0x110] (WRITE)
// 005d6a6a: MOV dword ptr [ESP + 0x130],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005d6a71: MOV EAX,dword ptr [ESP + 0x14c]
//   XREF to: Stack[-0xc] (READ)
// 005d6a78: FSTP double ptr [ESP + 0x120]
//   XREF to: Stack[-0x38] (WRITE)
// 005d6a7f: MOV dword ptr [ESP + 0x134],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005d6a86: FCOMP double ptr [ESP + 0x18]
//   XREF to: Stack[-0x140] (READ)
// 005d6a8a: FNSTSW AX
// 005d6a8c: SAHF
// 005d6a8d: JA 0x005d6bca
//   XREF to: 005d6bca (CONDITIONAL_JUMP)
// 005d6a93: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x140] (READ)
// 005d6a97: MOV dword ptr [ESP + 0xb8],EAX
//   XREF to: Stack[-0xa0] (WRITE)
// 005d6a9e: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x13c] (READ)
// 005d6aa2: MOV dword ptr [ESP + 0xbc],EAX
//   XREF to: Stack[-0x9c] (WRITE)
// 005d6aa9: FLDZ
//   Label: LAB_005d6aa9
// 005d6aab: FCOMP double ptr [ESP + 0x120]
//   XREF to: Stack[-0x38] (READ)
// 005d6ab2: FNSTSW AX
// 005d6ab4: SAHF
// 005d6ab5: JA 0x005d6bdc
//   XREF to: 005d6bdc (CONDITIONAL_JUMP)
// 005d6abb: MOV EAX,dword ptr [ESP + 0x120]
//   XREF to: Stack[-0x38] (READ)
// 005d6ac2: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x150] (WRITE)
// 005d6ac6: MOV EAX,dword ptr [ESP + 0x124]
//   XREF to: Stack[-0x34] (READ)
// 005d6acd: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x14c] (WRITE)
// 005d6ad1: FLD double ptr [ESP + 0x8]
//   Label: LAB_005d6ad1
//   XREF to: Stack[-0x150] (READ)
// 005d6ad5: FADD double ptr [ESP + 0xb8]
//   XREF to: Stack[-0xa0] (READ)
// 005d6adc: FLDZ
// 005d6ade: FXCH
// 005d6ae0: FSTP double ptr [ESP + 0xa0]
//   XREF to: Stack[-0xb8] (WRITE)
// 005d6ae7: FCOMP double ptr [ESP + 0x130]
//   XREF to: Stack[-0x28] (READ)
// 005d6aee: FNSTSW AX
// 005d6af0: SAHF
// 005d6af1: JA 0x005d6bee
//   XREF to: 005d6bee (CONDITIONAL_JUMP)
// 005d6af7: MOV EAX,dword ptr [ESP + 0x130]
//   XREF to: Stack[-0x28] (READ)
// 005d6afe: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x158] (DATA)
// 005d6b01: MOV EAX,dword ptr [ESP + 0x134]
//   XREF to: Stack[-0x24] (READ)
// 005d6b08: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x154] (WRITE)
// 005d6b0c: FLD double ptr [ESP + 0xa0]
//   Label: LAB_005d6b0c
//   XREF to: Stack[-0xb8] (READ)
// 005d6b13: FADD double ptr [ESP]
//   XREF to: Stack[-0x158] (DATA)
// 005d6b16: FLD double ptr [ESP + 0x48]
//   XREF to: Stack[-0x110] (READ)
// 005d6b1a: FXCH
// 005d6b1c: FSTP double ptr [ESP + 0x28]
//   XREF to: Stack[-0x130] (WRITE)
// 005d6b20: FCOMP double ptr [0x0065455a]
//   XREF to: 0065455a (READ)
// 005d6b26: FNSTSW AX
// 005d6b28: SAHF
// 005d6b29: JC 0x005d6b3e
//   XREF to: 005d6b3e (CONDITIONAL_JUMP)
// 005d6b2b: FLD double ptr [ESP + 0x28]
//   XREF to: Stack[-0x130] (READ)
// 005d6b2f: FCOMP double ptr [0x0065455a]
//   XREF to: 0065455a (READ)
// 005d6b35: FNSTSW AX
// 005d6b37: SAHF
// 005d6b38: JNC 0x005d6bff
//   XREF to: 005d6bff (CONDITIONAL_JUMP)
// 005d6b3e: MOV EAX,0x1
//   Label: LAB_005d6b3e
// 005d6b43: MOV ESP,EBP
// 005d6b45: POP EBP
// 005d6b46: RET
// 005d6b47: FLD double ptr [ESP + 0xf0]
//   Label: LAB_005d6b47
//   XREF to: Stack[-0x68] (READ)
// 005d6b4e: FLD double ptr [ESP + 0xd0]
//   XREF to: Stack[-0x88] (READ)
// 005d6b55: FDIV double ptr [ESP + 0xc8]
//   XREF to: Stack[-0x90] (READ)
// 005d6b5c: FXCH
// 005d6b5e: FMUL ST1
// 005d6b60: FLD double ptr [ESP + 0xf8]
//   XREF to: Stack[-0x60] (READ)
// 005d6b67: FMUL ST2
// 005d6b69: FLD double ptr [ESP + 0x100]
//   XREF to: Stack[-0x58] (READ)
// 005d6b70: FMULP ST3
// 005d6b72: FXCH
// 005d6b74: FSTP double ptr [ESP + 0xf0]
//   XREF to: Stack[-0x68] (WRITE)
// 005d6b7b: FSTP double ptr [ESP + 0xf8]
//   XREF to: Stack[-0x60] (WRITE)
// 005d6b82: FSTP double ptr [ESP + 0x100]
//   XREF to: Stack[-0x58] (WRITE)
// 005d6b89: JMP 0x005d6867
//   XREF to: 005d6867 (UNCONDITIONAL_JUMP)
// 005d6b8e: FLD double ptr [ESP + 0xb0]
//   Label: LAB_005d6b8e
//   XREF to: Stack[-0xa8] (READ)
// 005d6b95: FCHS
// 005d6b97: FSTP double ptr [ESP + 0x98]
//   XREF to: Stack[-0xc0] (WRITE)
// 005d6b9e: JMP 0x005d69a2
//   XREF to: 005d69a2 (UNCONDITIONAL_JUMP)
// 005d6ba3: FLD double ptr [ESP + 0xd8]
//   Label: LAB_005d6ba3
//   XREF to: Stack[-0x80] (READ)
// 005d6baa: FCHS
// 005d6bac: FSTP double ptr [ESP + 0xc0]
//   XREF to: Stack[-0x98] (WRITE)
// 005d6bb3: JMP 0x005d69d0
//   XREF to: 005d69d0 (UNCONDITIONAL_JUMP)
// 005d6bb8: FLD double ptr [ESP + 0xe8]
//   Label: LAB_005d6bb8
//   XREF to: Stack[-0x70] (READ)
// 005d6bbf: FCHS
// 005d6bc1: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x148] (WRITE)
// 005d6bc5: JMP 0x005d6a0c
//   XREF to: 005d6a0c (UNCONDITIONAL_JUMP)
// 005d6bca: FLD double ptr [ESP + 0x18]
//   Label: LAB_005d6bca
//   XREF to: Stack[-0x140] (READ)
// 005d6bce: FCHS
// 005d6bd0: FSTP double ptr [ESP + 0xb8]
//   XREF to: Stack[-0xa0] (WRITE)
// 005d6bd7: JMP 0x005d6aa9
//   XREF to: 005d6aa9 (UNCONDITIONAL_JUMP)
// 005d6bdc: FLD double ptr [ESP + 0x120]
//   Label: LAB_005d6bdc
//   XREF to: Stack[-0x38] (READ)
// 005d6be3: FCHS
// 005d6be5: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x150] (WRITE)
// 005d6be9: JMP 0x005d6ad1
//   XREF to: 005d6ad1 (UNCONDITIONAL_JUMP)
// 005d6bee: FLD double ptr [ESP + 0x130]
//   Label: LAB_005d6bee
//   XREF to: Stack[-0x28] (READ)
// 005d6bf5: FCHS
// 005d6bf7: FSTP double ptr [ESP]
//   XREF to: Stack[-0x158] (DATA)
// 005d6bfa: JMP 0x005d6b0c
//   XREF to: 005d6b0c (UNCONDITIONAL_JUMP)
// 005d6bff: XOR EAX,EAX
//   Label: LAB_005d6bff
// 005d6c01: MOV ESP,EBP
// 005d6c03: POP EBP
// 005d6c04: RET
