// Name: crt_unknown.c_FUN_00603bf5
// Address: 00603bf5
// Address Range: [[00603bf5, 00603c73]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00603bf5()
// Cross-references:
//   crt_unknown.c_staticInit_FUN_005fde60 (005fde60) at 005fde67 [DATA]
// Globals:
//   undefined4 s_5p_G_c_00658fdc
//   undefined4 s_c_00658fe4
//   undefined4 s_5p_c_00658fec
//   undefined4 s_c_00658ff4

#include "nocturne.h"

undefined4 crt_unknown_c_FUN_00603bf5(void)

{
  double *in_stack_00000004;
  float *in_stack_00000008;
  
  if ((((((ulonglong)*in_stack_00000004 & 0x7fffffff00000000) != 0) ||
       (*(int *)in_stack_00000004 != 0)) &&
      ((*in_stack_00000004 <= 0.0 ||
       (((double)g_EmptyStringBuffer._4_8_ < *in_stack_00000004 ||
        (*in_stack_00000004 < (double)g_EmptyStringBuffer._12_8_)))))) &&
     ((*in_stack_00000004 < (double)g_EmptyStringBuffer._20_8_ ||
      ((double)g_EmptyStringBuffer._28_8_ < *in_stack_00000004)))) {
    return 1;
  }
  *in_stack_00000008 = (float)*in_stack_00000004;
  return 0;
}


// Assembly code:
// 00603bf5: SUB ESP,0x8
//   Label: crt_unknown.c_FUN_00603bf5
// 00603bf8: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00603bfc: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00603c00: MOV EAX,dword ptr [EAX]
// 00603c02: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x8] (DATA)
// 00603c05: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00603c09: MOV EAX,dword ptr [EAX + 0x4]
// 00603c0c: MOV ECX,dword ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 00603c0f: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x4] (WRITE)
// 00603c13: TEST EAX,0x7fffffff
// 00603c18: JNZ 0x00603c29
//   XREF to: 00603c29 (CONDITIONAL_JUMP)
// 00603c1a: TEST ECX,ECX
// 00603c1c: JNZ 0x00603c29
//   XREF to: 00603c29 (CONDITIONAL_JUMP)
// 00603c1e: FLD double ptr [ESP]
//   Label: LAB_00603c1e
//   XREF to: Stack[-0x8] (DATA)
// 00603c21: XOR EAX,EAX
// 00603c23: FSTP float ptr [EDX]
// 00603c25: ADD ESP,0x8
// 00603c28: RET
// 00603c29: FLDZ
//   Label: LAB_00603c29
// 00603c2b: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 00603c2e: FNSTSW AX
// 00603c30: SAHF
// 00603c31: JNC 0x00603c4f
//   XREF to: 00603c4f (CONDITIONAL_JUMP)
// 00603c33: FLD double ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 00603c36: FCOMP double ptr [0x00658fdc]
//   XREF to: 00658fdc (READ)
// 00603c3c: FNSTSW AX
// 00603c3e: SAHF
// 00603c3f: JA 0x00603c4f
//   XREF to: 00603c4f (CONDITIONAL_JUMP)
// 00603c41: FLD double ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 00603c44: FCOMP double ptr [0x00658fe4]
//   XREF to: 00658fe4 (READ)
// 00603c4a: FNSTSW AX
// 00603c4c: SAHF
// 00603c4d: JNC 0x00603c1e
//   XREF to: 00603c1e (CONDITIONAL_JUMP)
// 00603c4f: FLD double ptr [ESP]
//   Label: LAB_00603c4f
//   XREF to: Stack[-0x8] (DATA)
// 00603c52: FCOMP double ptr [0x00658fec]
//   XREF to: 00658fec (READ)
// 00603c58: FNSTSW AX
// 00603c5a: SAHF
// 00603c5b: JC 0x00603c6b
//   XREF to: 00603c6b (CONDITIONAL_JUMP)
// 00603c5d: FLD double ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 00603c60: FCOMP double ptr [0x00658ff4]
//   XREF to: 00658ff4 (READ)
// 00603c66: FNSTSW AX
// 00603c68: SAHF
// 00603c69: JBE 0x00603c1e
//   XREF to: 00603c1e (CONDITIONAL_JUMP)
// 00603c6b: MOV EAX,0x1
//   Label: LAB_00603c6b
// 00603c70: ADD ESP,0x8
// 00603c73: RET
