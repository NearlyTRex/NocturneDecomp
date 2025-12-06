// Name: core_setutil.cpp_C3DSCamera_import3DS_FUN_00585c90
// Address: 00585c90
// Address Range: [[00585c90, 00585d2b]]
// Convention: __cdecl
// Signature: void core_setutil.cpp_C3DSCamera_import3DS_FUN_00585c90(C3DSCamera * this_ptr, FILE * file_handle)

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
  uint extraout_EDX;
  BADSPACEBASE *in_ESP;
  char *pcVar5;
  byte bVar6;
  float10 fVar7;
  float10 x;
  float in_stack_0000000c;
  uint in_stack_00000018;
  ulonglong in_stack_fffffdd4;
  float fVar8;
  char acStack_120 [8];
  char acStack_118 [240];
  byte auStack_28 [4];
  byte auStack_24 [4];
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
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,iVar4));
  fVar8 = (float)(int)ROUND(fVar7);
  if ((uint)fVar8 < 0x2e) {
    if ((uint)fVar8 < 0x17) {
      if (9 < (uint)fVar8) {
        if ((uint)fVar8 < 0xb) {
          *(uint *)((int)fVar8 + 0x144) = 0x43480000;
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
        *(uint *)((int)fVar8 + 0x144) = 0x42aa0000;
        goto LAB_00585deb;
      }
      if (0x26 < (uint)fVar8) {
        if ((uint)fVar8 < 0x28) {
          *(uint *)((int)fVar8 + 0x144) = 0x42480000;
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
      *(uint *)((int)fVar8 + 0x144) = 0x4228a0c5;
      goto LAB_00585deb;
    }
    if ((uint)fVar8 < 0x49) {
      if (0x35 < (uint)fVar8) {
        if ((uint)fVar8 < 0x37) {
          *(uint *)((int)fVar8 + 0x144) = 0x420c0000;
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
        *(uint *)((int)fVar8 + 0x144) = 0x41c00000;
        goto LAB_00585deb;
      }
      if (0x52 < (uint)fVar8) {
        if ((uint)fVar8 < 0x54) {
          *(uint *)((int)fVar8 + 0x144) = 0x41a00000;
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
  *(uint *)((int)fVar8 + 0x114) = in_stack_00000018;
  fVar7 = crt_math_c_atan2_FUN_006013b1
                    ((float10)fVar2,(float10)(in_stack_0000000c - *(float *)((int)fVar8 + 0x108)));
  *(float *)(extraout_ECX + 0x110) = (float)fVar7;
  fVar7 = crt_math_c_atan2_FUN_006013b1((float10)fVar2,x);
  *(float *)(extraout_ECX_00 + 0x10c) = (float)-fVar7;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)(extraout_ECX_00 + 0x118),(CVector3f *)(extraout_ECX_00 + 0x10c));
  return;
}
