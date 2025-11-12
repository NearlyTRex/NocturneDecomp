// Name: sound_sndmain.cpp_CSampleInfo_normalizePlaybackPos_FUN_005a86f0
// Address: 005a86f0
// Address Range: [[005a86f0, 005a87c6]]
// Convention: __cdecl
// Signature: double sound_sndmain.cpp_CSampleInfo_normalizePlaybackPos_FUN_005a86f0(CSampleInfo * this_ptr, double position, uint input_type, uint output_type)
// Cross-references:
//   sound_sndmain.cpp_CSfxSample_seek_FUN_005a65a0 (005a65a0) at 005a65d1 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_CSfxSlot_seek_FUN_005a8390 (005a8390) at 005a8404 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_math.c_floor_FUN_005feb90
//   sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_005a8580
//   sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_005a87d0

#include "nocturne.h"

double __cdecl
sound_sndmain_cpp_CSampleInfo_normalizePlaybackPos_FUN_005a86f0
          (CSampleInfo *this_ptr,double position,uint input_type,uint output_type)

{
  int iVar1;
  undefined4 extraout_EAX;
  undefined4 extraout_EDX;
  float10 in_ST0;
  double dVar2;
  CSfxSample *in_stack_00000004;
  uint in_stack_ffffffe0;
  uint in_stack_ffffffe4;
  
  dVar2 = sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_005a8580
                    (this_ptr,position,2,in_stack_ffffffe0);
  position._4_4_ = (undefined4)((ulonglong)dVar2 >> 0x20);
  iVar1 = sound_sndmain_cpp_CSfxSample_getLoopMode_FUN_005a87d0(in_stack_00000004);
  if (iVar1 == 0) {
    if ((double)CONCAT44(input_type,position._4_4_) < 0.0) {
      dVar2 = (double)((ulonglong)dVar2 & 0xffffffff);
      input_type = 0;
    }
    else if (1.0 < (double)CONCAT44(input_type,position._4_4_)) {
      dVar2 = (double)((ulonglong)dVar2 & 0xffffffff);
      input_type = 0x3ff00000;
    }
  }
  else {
    in_stack_ffffffe4 = input_type;
    crt_math_c_floor_FUN_005feb90((double)in_ST0);
    dVar2 = dVar2 - (double)CONCAT44(extraout_EDX,extraout_EAX);
  }
  position._4_4_ = (undefined4)((ulonglong)dVar2 >> 0x20);
  position._0_4_ = SUB84(dVar2,0);
  dVar2 = sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_005a8580
                    (position._0_4_,(double)CONCAT44(2,position._4_4_),input_type,in_stack_ffffffe4)
  ;
  return dVar2;
}


// Assembly code:
// 005a86f0: PUSH EBX
//   Label: sound_sndmain.cpp_CSampleInfo_normalizePlaybackPos_FUN_005a86f0
// 005a86f1: PUSH ESI
// 005a86f2: PUSH EDI
// 005a86f3: PUSH EBP
// 005a86f4: SUB ESP,0x10
// 005a86f7: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 005a86fb: PUSH 0x2
// 005a86fd: MOV EDX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x10] (READ)
// 005a8701: PUSH EDX
// 005a8702: MOV ECX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0xc] (READ)
// 005a8706: PUSH ECX
// 005a8707: MOV ESI,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x8] (READ)
// 005a870b: PUSH ESI
// 005a870c: PUSH EBX
// 005a870d: CALL sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_005a8580
//   XREF to: 005a8580 (UNCONDITIONAL_CALL)
// 005a8712: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005a8716: MOV dword ptr [ESP + 0x20],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005a871a: FLD double ptr [ESP + 0x1c]
//   XREF to: Stack[-0x18] (READ)
// 005a871e: ADD ESP,0x14
// 005a8721: PUSH EBX
// 005a8722: FSTP double ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (WRITE)
// 005a8726: CALL sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_005a87d0
//   XREF to: 005a87d0 (UNCONDITIONAL_CALL)
// 005a872b: ADD ESP,0x4
// 005a872e: TEST EAX,EAX
// 005a8730: JNZ 0x005a8793
//   XREF to: 005a8793 (CONDITIONAL_JUMP)
// 005a8732: FLDZ
// 005a8734: FCOMP double ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 005a8738: FNSTSW AX
// 005a873a: SAHF
// 005a873b: JA 0x005a87bb
//   XREF to: 005a87bb (CONDITIONAL_JUMP)
// 005a8741: FLD1
// 005a8743: FCOMP double ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 005a8747: FNSTSW AX
// 005a8749: SAHF
// 005a874a: JNC 0x005a875b
//   XREF to: 005a875b (CONDITIONAL_JUMP)
// 005a874c: XOR EDI,EDI
// 005a874e: MOV EBP,0x3ff00000
// 005a8753: MOV dword ptr [ESP + 0x28],EDI
//   XREF to: Stack[0x8] (WRITE)
// 005a8757: MOV dword ptr [ESP + 0x2c],EBP
//   XREF to: Stack[0xc] (WRITE)
// 005a875b: MOV EDI,dword ptr [ESP + 0x30]
//   Label: LAB_005a875b
//   XREF to: Stack[0x10] (READ)
// 005a875f: PUSH EDI
// 005a8760: PUSH 0x2
// 005a8762: MOV EBP,dword ptr [ESP + 0x34]
//   XREF to: Stack[0xc] (READ)
// 005a8766: PUSH EBP
// 005a8767: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x8] (READ)
// 005a876b: PUSH EAX
// 005a876c: PUSH EBX
// 005a876d: CALL sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_005a8580
//   XREF to: 005a8580 (UNCONDITIONAL_CALL)
// 005a8772: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005a8776: MOV dword ptr [ESP + 0x20],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005a877a: FLD double ptr [ESP + 0x1c]
//   XREF to: Stack[-0x18] (READ)
// 005a877e: ADD ESP,0x14
// 005a8781: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 005a8784: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 005a8787: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (READ)
// 005a878b: ADD ESP,0x10
// 005a878e: POP EBP
// 005a878f: POP EDI
// 005a8790: POP ESI
// 005a8791: POP EBX
// 005a8792: RET
// 005a8793: MOV ECX,dword ptr [ESP + 0x2c]
//   Label: LAB_005a8793
//   XREF to: Stack[0xc] (READ)
// 005a8797: PUSH ECX
// 005a8798: MOV ESI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 005a879c: PUSH ESI
// 005a879d: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 005a87a2: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005a87a6: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005a87aa: FLD double ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 005a87ae: ADD ESP,0x8
// 005a87b1: FSUBR double ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 005a87b5: FSTP double ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (WRITE)
// 005a87b9: JMP 0x005a875b
//   XREF to: 005a875b (UNCONDITIONAL_JUMP)
// 005a87bb: XOR EAX,EAX
//   Label: LAB_005a87bb
// 005a87bd: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[0x8] (WRITE)
// 005a87c1: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[0xc] (WRITE)
// 005a87c5: JMP 0x005a875b
//   XREF to: 005a875b (UNCONDITIONAL_JUMP)
