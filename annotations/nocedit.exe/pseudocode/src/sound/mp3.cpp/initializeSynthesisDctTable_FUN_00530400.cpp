// Name: sound_mp3.cpp_initializeSynthesisDctTable_FUN_00530400
// Address: 00530400
// Address Range: [[00530400, 005304e8]]
// Convention: __cdecl
// Signature: void sound_mp3.cpp_initializeSynthesisDctTable_FUN_00530400(float * output_dct_table)
// Globals:
//   double DOUBLE_0063ae2a = 0.0490873852120000
//   double DOUBLE_0063ae32 = 1000000000
//   double DOUBLE_0063ae3a = 1.00000000000000E-9
//   double DOUBLE_0063ae42 = 0.785398163397000
//   double DOUBLE_0063ae4a = -0.5
//   double DOUBLE_0063ae52 = 0.5
// Function calls:
//   crt_math.c_modf_FUN_00602102

#include "nocturne.h"

void __cdecl sound_mp3_cpp_initializeSynthesisDctTable_FUN_00530400(float *output_dct_table)

{
  double dVar1;
  float *pfVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  float *pfVar4;
  float10 fVar5;
  undefined8 local_38;
  undefined8 local_30;
  int local_28;
  float *local_1c;
  int local_18;
  
  local_28 = 0;
  local_1c = output_dct_table;
  do {
    iVar3 = 1;
    pfVar2 = local_1c;
    pfVar4 = local_1c;
    do {
      fVar5 = (float10)fcos((float10)iVar3 *
                            ((float10)local_28 * (float10)DOUBLE_0063ae2a + (float10)DOUBLE_0063ae42
                            ));
      *pfVar2 = (float)(fVar5 * (float10)DOUBLE_0063ae32);
      local_18 = iVar3;
      if (0.0 <= *pfVar2) {
        local_30 = (double)*pfVar2;
        crt_math_c_modf_FUN_00602102((double)(*pfVar2 + (float)DOUBLE_0063ae52),(double *)&local_30)
        ;
        dVar1 = (double)CONCAT44(local_28,local_30._4_4_);
      }
      else {
        local_38 = (double)*pfVar2;
        crt_math_c_modf_FUN_00602102((double)(*pfVar2 + (float)DOUBLE_0063ae4a),(double *)&local_38)
        ;
        dVar1 = (double)CONCAT44((undefined4)local_30,local_38._4_4_);
      }
      *pfVar2 = (float)dVar1;
      pfVar2 = pfVar2 + 1;
      iVar3 = iVar3 + 2;
      *pfVar4 = *pfVar4 * (float)DOUBLE_0063ae3a;
      pfVar4 = pfVar4 + 1;
    } while (iVar3 != 0x41);
    local_28 = local_28 + 1;
    local_1c = local_1c + 0x20;
  } while (local_28 < 0x40);
  return;
}


// Assembly code:
// 00530400: PUSH EBX
//   Label: sound_mp3.cpp_initializeSynthesisDctTable_FUN_00530400
// 00530401: PUSH ESI
// 00530402: PUSH EDI
// 00530403: PUSH EBP
// 00530404: MOV EBP,ESP
// 00530406: SUB ESP,0x24
// 00530409: AND ESP,0xfffffff8
// 0053040c: XOR EDX,EDX
// 0053040e: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00530411: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 00530415: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00530419: MOV EBX,dword ptr [ESP + 0x1c]
//   Label: LAB_00530419
//   XREF to: Stack[-0x1c] (READ)
// 0053041d: MOV ESI,0x1
// 00530422: MOV EDI,EBX
// 00530424: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_00530424
//   XREF to: Stack[-0x28] (READ)
// 00530428: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0053042c: FILD dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x18] (READ)
// 00530430: FMUL double ptr [0x0063ae2a]
//   XREF to: 0063ae2a (READ)
// 00530436: FADD double ptr [0x0063ae42]
//   XREF to: 0063ae42 (READ)
// 0053043c: MOV dword ptr [ESP + 0x20],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 00530440: FILD dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x18] (READ)
// 00530444: FMULP
// 00530446: FCOS
// 00530448: FMUL double ptr [0x0063ae32]
//   XREF to: 0063ae32 (READ)
// 0053044e: FLDZ
// 00530450: FXCH
// 00530452: FSTP float ptr [EBX]
// 00530454: FCOMP float ptr [EBX]
// 00530456: FNSTSW AX
// 00530458: SAHF
// 00530459: JBE 0x005304c2
//   XREF to: 005304c2 (CONDITIONAL_JUMP)
// 0053045b: FLD float ptr [EBX]
// 0053045d: MOV EAX,ESP
// 0053045f: FSTP double ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 00530462: FLD float ptr [EBX]
// 00530464: PUSH EAX
// 00530465: FADD double ptr [0x0063ae4a]
//   XREF to: 0063ae4a (READ)
// 0053046b: SUB ESP,0x8
// 0053046e: FSTP double ptr [ESP]
//   XREF to: Stack[-0x44] (DATA)
// 00530471: CALL crt_math.c_modf_FUN_00602102
//   XREF to: 00602102 (UNCONDITIONAL_CALL)
// 00530476: ADD ESP,0xc
// 00530479: FLD double ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 0053047c: FSTP float ptr [EBX]
//   Label: LAB_0053047c
// 0053047e: FLD float ptr [EDI]
// 00530480: FLD ST0
// 00530482: FMUL double ptr [0x0063ae3a]
//   XREF to: 0063ae3a (READ)
// 00530488: ADD EBX,0x4
// 0053048b: ADD ESI,0x2
// 0053048e: ADD EDI,0x4
// 00530491: FSTP ST1
// 00530493: FSTP float ptr [EDI + -0x4]
// 00530496: CMP ESI,0x41
// 00530499: JNZ 0x00530424
//   XREF to: 00530424 (CONDITIONAL_JUMP)
// 0053049b: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x28] (READ)
// 0053049f: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (READ)
// 005304a3: INC EBX
// 005304a4: ADD ECX,0x80
// 005304aa: MOV dword ptr [ESP + 0x10],EBX
//   XREF to: Stack[-0x28] (WRITE)
// 005304ae: MOV dword ptr [ESP + 0x1c],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 005304b2: CMP EBX,0x40
// 005304b5: JL 0x00530419
//   XREF to: 00530419 (CONDITIONAL_JUMP)
// 005304bb: MOV ESP,EBP
// 005304bd: POP EBP
// 005304be: POP EDI
// 005304bf: POP ESI
// 005304c0: POP EBX
// 005304c1: RET
// 005304c2: FLD float ptr [EBX]
//   Label: LAB_005304c2
// 005304c4: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x30] (DATA)
// 005304c8: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x30] (WRITE)
// 005304cc: FLD float ptr [EBX]
// 005304ce: PUSH EAX
// 005304cf: FADD double ptr [0x0063ae52]
//   XREF to: 0063ae52 (READ)
// 005304d5: SUB ESP,0x8
// 005304d8: FSTP double ptr [ESP]
//   XREF to: Stack[-0x44] (DATA)
// 005304db: CALL crt_math.c_modf_FUN_00602102
//   XREF to: 00602102 (UNCONDITIONAL_CALL)
// 005304e0: ADD ESP,0xc
// 005304e3: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x30] (READ)
// 005304e7: JMP 0x0053047c
//   XREF to: 0053047c (UNCONDITIONAL_JUMP)
