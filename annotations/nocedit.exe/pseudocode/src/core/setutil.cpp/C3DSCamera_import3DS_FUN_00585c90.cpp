// Name: core_setutil.cpp_C3DSCamera_import3DS_FUN_00585c90
// Address: 00585c90
// Address Range: [[00585c90, 00585d2b]]
// Convention: __cdecl
// Signature: void core_setutil.cpp_C3DSCamera_import3DS_FUN_00585c90(C3DSCamera * this_ptr, FILE * file_handle)
// Function calls:
//   crt_stdio.c_fgets_FUN_005fefd0

#include "nocturne.h"

void __cdecl
core_setutil_cpp_C3DSCamera_import3DS_FUN_00585c90(C3DSCamera *this_ptr,FILE *file_handle)

{
  char cVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_EDX;
  BADSPACEBASE *in_ESP;
  char *pcVar5;
  byte bVar6;
  float10 fVar7;
  float10 x;
  float in_stack_0000000c;
  undefined4 in_stack_00000018;
  undefined8 in_stack_fffffdd4;
  float fVar8;
  char acStack_120 [8];
  char acStack_118 [240];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  C3DSCamera *local_20;
  char *pcStack_1c;
  
  fVar8 = (float)((ulonglong)in_stack_fffffdd4 >> 0x20);
  bVar6 = 0;
  local_20 = this_ptr;
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffdc4,0xff,file_handle);
  uVar3 = 0xffffffff;
  pcVar5 = &stack0xfffffdc8;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
  } while (cVar1 != '\0');
  if (0 < (int)(~uVar3 - 1)) {
    (&stack0xfffffdc6)[~uVar3] = 0;
  }
  iVar4 = -1;
  pcVar5 = &stack0xfffffdc8;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
  } while (cVar1 != '\0');
  pcVar5 = &stack0xfffffdc8;
  do {
    cVar1 = *pcVar5;
    *pcStack_1c = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcStack_1c[1] = cVar1;
    pcStack_1c = pcStack_1c + 2;
  } while (cVar1 != '\0');
  crt_stdio_c_fscanf_FUN_005fe7c0
            (file_handle,"%f,%f,%f\n",&this_ptr->position,&(this_ptr->position).y,
             &(this_ptr->position).z);
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f,%f,%f\n",auStack_28,auStack_24);
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f\n");
  iVar4 = crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f\n");
  fVar7 = (float10)fVar8;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,iVar4));
  fVar8 = (float)(int)ROUND(fVar7);
  if ((uint)fVar8 < 0x2e) {
    if ((uint)fVar8 < 0x17) {
      if (9 < (uint)fVar8) {
        if ((uint)fVar8 < 0xb) {
          *(undefined4 *)((int)fVar8 + 0x144) = 0x43480000;
          goto LAB_00585deb;
        }
        if (fVar8 == 2.10195e-44) {
          uRam00000153 = 0x43070000;
          goto LAB_00585deb;
        }
      }
    }
    else {
      if ((uint)fVar8 < 0x18) {
        *(undefined4 *)((int)fVar8 + 0x144) = 0x42aa0000;
        goto LAB_00585deb;
      }
      if (0x26 < (uint)fVar8) {
        if ((uint)fVar8 < 0x28) {
          *(undefined4 *)((int)fVar8 + 0x144) = 0x42480000;
          goto LAB_00585deb;
        }
        if (fVar8 == 6.30584e-44) {
          uRam00000171 = 0x422dd2f2;
          goto LAB_00585deb;
        }
      }
    }
  }
  else {
    if ((uint)fVar8 < 0x2f) {
      *(undefined4 *)((int)fVar8 + 0x144) = 0x4228a0c5;
      goto LAB_00585deb;
    }
    if ((uint)fVar8 < 0x49) {
      if (0x35 < (uint)fVar8) {
        if ((uint)fVar8 < 0x37) {
          *(undefined4 *)((int)fVar8 + 0x144) = 0x420c0000;
          goto LAB_00585deb;
        }
        if (fVar8 == 9.10844e-44) {
          uRam00000185 = 0x41e00000;
          goto LAB_00585deb;
        }
      }
    }
    else {
      if ((uint)fVar8 < 0x4a) {
        *(undefined4 *)((int)fVar8 + 0x144) = 0x41c00000;
        goto LAB_00585deb;
      }
      if (0x52 < (uint)fVar8) {
        if ((uint)fVar8 < 0x54) {
          *(undefined4 *)((int)fVar8 + 0x144) = 0x41a00000;
          goto LAB_00585deb;
        }
        if (fVar8 == 1.4013e-43) {
          uRam000001a8 = 0x41700000;
          goto LAB_00585deb;
        }
      }
    }
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_120,"Warning! Camera %s has unknown lens : %f");
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_drawText_FUN_00401fd0(acStack_118,0,0);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  engine_keys_cpp_CKeys_getInputKey_FUN_00502460(g_CKeysPtr);
LAB_00585deb:
  fVar2 = fVar8 - *(float *)((int)fVar8 + 0x100);
  *(undefined4 *)((int)fVar8 + 0x114) = in_stack_00000018;
  fVar7 = crt_math_c_atan2_FUN_006013b1
                    ((float10)fVar2,(float10)(in_stack_0000000c - *(float *)((int)fVar8 + 0x108)));
  *(float *)(extraout_ECX + 0x110) = (float)fVar7;
  fVar7 = crt_math_c_atan2_FUN_006013b1((float10)fVar2,x);
  *(float *)(extraout_ECX_00 + 0x10c) = (float)-fVar7;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)(extraout_ECX_00 + 0x118),(CVector3f *)(extraout_ECX_00 + 0x10c));
  return;
}


// Assembly code:
// 00585c90: PUSH EBX
//   Label: core_setutil.cpp_C3DSCamera_import3DS_FUN_00585c90
// 00585c91: PUSH ESI
// 00585c92: PUSH EDI
// 00585c93: PUSH EBP
// 00585c94: MOV EBP,ESP
// 00585c96: SUB ESP,0x22c
// 00585c9c: AND ESP,0xfffffff8
// 00585c9f: MOV EBX,dword ptr [EBP + 0x18]
// 00585ca2: PUSH EBX
// 00585ca3: MOV ESI,0xff
// 00585ca8: MOV EAX,dword ptr [EBP + 0x14]
// 00585cab: PUSH ESI
// 00585cac: MOV dword ptr [ESP + 0x228],EAX
// 00585cb3: LEA EAX,[ESP + 0xc]
// 00585cb7: PUSH EAX
// 00585cb8: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 00585cbd: ADD ESP,0xc
// 00585cc0: LEA EDI,[ESP + 0x4]
// 00585cc4: SUB ECX,ECX
// 00585cc6: DEC ECX
// 00585cc7: XOR EAX,EAX
// 00585cc9: SCASB.REPNE ES:EDI
// 00585ccb: NOT ECX
// 00585ccd: DEC ECX
// 00585cce: TEST ECX,ECX
// 00585cd0: JLE 0x00585cd8
//   XREF to: 00585cd8 (CONDITIONAL_JUMP)
// 00585cd2: XOR AH,AH
// 00585cd4: MOV byte ptr [ESP + ECX*0x1 + 0x3],AH
// 00585cd8: LEA EDI,[ESP + 0x4]
//   Label: LAB_00585cd8
// 00585cdc: SUB ECX,ECX
// 00585cde: DEC ECX
// 00585cdf: XOR EAX,EAX
// 00585ce1: SCASB.REPNE ES:EDI
// 00585ce3: NOT ECX
// 00585ce5: DEC ECX
// 00585ce6: XOR DL,DL
// 00585ce8: MOV EDI,dword ptr [ESP + 0x220]
// 00585cef: MOV byte ptr [ESP + ESI*0x1 + 0x4],DL
// 00585cf3: LEA ESI,[ESP + 0x4]
// 00585cf7: PUSH EDI
// 00585cf8: MOV AL,byte ptr [ESI]
//   Label: LAB_00585cf8
// 00585cfa: MOV byte ptr [EDI],AL
// 00585cfc: CMP AL,0x0
// 00585cfe: JZ 0x00585d10
//   XREF to: 00585d10 (CONDITIONAL_JUMP)
// 00585d00: MOV AL,byte ptr [ESI + 0x1]
// 00585d03: ADD ESI,0x2
// 00585d06: MOV byte ptr [EDI + 0x1],AL
// 00585d09: ADD EDI,0x2
// 00585d0c: CMP AL,0x0
// 00585d0e: JNZ 0x00585cf8
//   XREF to: 00585cf8 (CONDITIONAL_JUMP)
// 00585d10: POP EDI
//   Label: LAB_00585d10
// 00585d11: MOV EAX,dword ptr [EBP + 0x14]
// 00585d14: ADD EAX,0x108
// 00585d19: PUSH EAX
// 00585d1a: MOV EAX,dword ptr [EBP + 0x14]
// 00585d1d: ADD EAX,0x104
// 00585d22: PUSH EAX
// 00585d23: MOV EAX,dword ptr [EBP + 0x14]
// 00585d26: ADD EAX,0x100
// 00585d2b: PUSH EAX
