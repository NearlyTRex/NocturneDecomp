// Name: sound_mp3.cpp_calculateIntensityStereoRatio_FUN_00532540
// Address: 00532540
// Address Range: [[00532540, 005325d2]]
// Convention: __cdecl
// Signature: void sound_mp3.cpp_calculateIntensityStereoRatio_FUN_00532540(int intensity_position, double ratio, int unused_param3, int sample_index, float * output_buffer)
// Cross-references:
//   sound_mp3.cpp_mpegLayer3StereoProcess_FUN_005325e0 (005325e0) at 0053320f [UNCONDITIONAL_CALL]
// Function calls:
//   crt_math.c_pow_FUN_005ffd76

#include "nocturne.h"

void __cdecl
sound_mp3_cpp_calculateIntensityStereoRatio_FUN_00532540
          (int intensity_position,double ratio,int unused_param3,int sample_index,
          float *output_buffer)

{
  float *pfVar1;
  float10 fVar2;
  
  pfVar1 = (float *)(unused_param3 * 4 + sample_index);
  if (intensity_position == 0) {
    pfVar1[0x240] = 1.0;
    *pfVar1 = 1.0;
  }
  else {
    if (intensity_position % 2 != 1) {
      fVar2 = crt_math_c_pow_FUN_005ffd76((float10)ratio,(float10)(intensity_position / 2));
      *pfVar1 = 1.0;
      pfVar1[0x240] = (float)fVar2;
      return;
    }
    fVar2 = crt_math_c_pow_FUN_005ffd76((float10)ratio,(float10)((intensity_position + 1) / 2));
    pfVar1[0x240] = 1.0;
    *pfVar1 = (float)fVar2;
  }
  return;
}


// Assembly code:
// 00532540: PUSH EBX
//   Label: sound_mp3.cpp_calculateIntensityStereoRatio_FUN_00532540
// 00532541: PUSH ESI
// 00532542: SUB ESP,0x4
// 00532545: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00532549: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x10] (READ)
// 0053254d: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x14] (READ)
// 00532551: SHL EBX,0x2
// 00532554: ADD EBX,EDX
// 00532556: TEST ECX,ECX
// 00532558: JZ 0x00532597
//   XREF to: 00532597 (CONDITIONAL_JUMP)
// 0053255a: MOV ESI,0x2
// 0053255f: MOV EDX,ECX
// 00532561: MOV EAX,ECX
// 00532563: SAR EDX,0x1f
// 00532566: IDIV ESI
// 00532568: CMP EDX,0x1
// 0053256b: JNZ 0x005325a9
//   XREF to: 005325a9 (CONDITIONAL_JUMP)
// 0053256d: ADD EDX,ECX
// 0053256f: MOV EAX,EDX
// 00532571: SAR EDX,0x1f
// 00532574: IDIV ESI
// 00532576: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0xc] (DATA)
// 00532579: FILD dword ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 0053257c: FLD double ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00532580: CALL crt_math.c_pow_FUN_005ffd76
//   XREF to: 005ffd76 (UNCONDITIONAL_CALL)
// 00532585: MOV dword ptr [EBX + 0x900],0x3f800000
// 0053258f: FSTP float ptr [EBX]
// 00532591: ADD ESP,0x4
//   Label: LAB_00532591
// 00532594: POP ESI
// 00532595: POP EBX
// 00532596: RET
// 00532597: MOV dword ptr [EBX + 0x900],0x3f800000
//   Label: LAB_00532597
// 005325a1: MOV dword ptr [EBX],0x3f800000
// 005325a7: JMP 0x00532591
//   XREF to: 00532591 (UNCONDITIONAL_JUMP)
// 005325a9: MOV EDX,ECX
//   Label: LAB_005325a9
// 005325ab: MOV EAX,ECX
// 005325ad: SAR EDX,0x1f
// 005325b0: IDIV ESI
// 005325b2: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0xc] (DATA)
// 005325b5: FILD dword ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 005325b8: FLD double ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005325bc: CALL crt_math.c_pow_FUN_005ffd76
//   XREF to: 005ffd76 (UNCONDITIONAL_CALL)
// 005325c1: MOV dword ptr [EBX],0x3f800000
// 005325c7: FSTP float ptr [EBX + 0x900]
// 005325cd: ADD ESP,0x4
// 005325d0: POP ESI
// 005325d1: POP EBX
// 005325d2: RET
