// Name: core_skeledit.cpp_CBoneStructure_readBONheader_FUN_0058a4a0
// Address: 0058a4a0
// Address Range: [[0058a4a0, 0058aa01]]
// Convention: __cdecl
// Signature: void core_skeledit.cpp_CBoneStructure_readBONheader_FUN_0058a4a0(CBoneStructure * this_ptr, FILE * file, int * frame_count_out)

#include "nocturne.h"

void __cdecl
core_skeledit_cpp_CBoneStructure_readBONheader_FUN_0058a4a0
          (CBoneStructure *this_ptr,FILE *file,int *frame_count_out)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  uint *puVar8;
  int *piVar9;
  int *piVar10;
  char *pcVar11;
  int *piVar12;
  int *piVar13;
  byte bVar14;
  int *in_stack_00000004;
  int local_248 [100];
  int local_b8 [8];
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  int local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  
  bVar14 = 0;
  crt_stack_c_stack_probe_FUN_005ff9f3(0x25c);
  iVar5 = 1;
  do {
    iVar4 = crt_stdio_c_fgetc_FUN_005fe840((FILE *)this_ptr);
    if (iVar4 < 0) break;
  } while ((iVar4 != 10) || (iVar5 = iVar5 + -1, 0 < iVar5));
  crt_stdio_c_fscanf_FUN_005fe7c0((FILE *)this_ptr,"%d,%d\n",in_stack_00000004,file);
  if (100 < *in_stack_00000004) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x2a6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Too bony!");
  }
  iVar5 = 1;
  do {
    iVar4 = crt_stdio_c_fgetc_FUN_005fe840((FILE *)this_ptr);
    if (iVar4 < 0) break;
  } while ((iVar4 != 10) || (iVar5 = iVar5 + -1, 0 < iVar5));
  iVar5 = 0;
  if (0 < *in_stack_00000004) {
    local_34 = in_stack_00000004 + 1;
    local_2c = in_stack_00000004 + 9;
    pcVar11 = g_BoneNameBuffer[0];
    do {
      piVar9 = local_34 + iVar5 * 0x21;
      crt_stdio_c_fscanf_FUN_005fe7c0((FILE *)this_ptr,"\"%[^\"]\",%d\n",piVar9,local_2c);
      pcVar6 = pcVar11 + 0x1e;
      do {
        iVar4 = *piVar9;
        *pcVar11 = (char)iVar4;
        if ((char)iVar4 == '\0') break;
        cVar1 = *(char *)((int)piVar9 + 1);
        piVar9 = (int *)((int)piVar9 + 2);
        pcVar11[1] = cVar1;
        pcVar11 = pcVar11 + 2;
      } while (cVar1 != '\0');
      iVar5 = iVar5 + 1;
      local_2c = local_2c + 0x21;
      pcVar11 = pcVar6;
    } while (iVar5 < *in_stack_00000004);
  }
  iVar5 = 1;
  do {
    iVar4 = crt_stdio_c_fgetc_FUN_005fe840((FILE *)this_ptr);
    if (iVar4 < 0) break;
  } while ((iVar4 != 10) || (iVar5 = iVar5 + -1, 0 < iVar5));
  if ((this_ptr->bones[0].name[8] & 0x20U) != 0) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 699;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CBoneStructure::readBONheader - error reading file!");
  }
  iVar5 = 0;
  if (0 < *in_stack_00000004) {
    iVar4 = 0;
    do {
      *(uint *)((int)local_248 + iVar4) = 0;
      for (iVar2 = iVar5; -1 < iVar2; iVar2 = in_stack_00000004[iVar2 * 0x21 + 9]) {
        *(int *)((int)local_248 + iVar4) = *(int *)((int)local_248 + iVar4) + 1;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar5 < *in_stack_00000004);
  }
  local_24 = *in_stack_00000004 + -1;
  if (-1 < *in_stack_00000004 + -1) {
    local_30 = in_stack_00000004 + 1;
    local_28 = in_stack_00000004 + 1;
    do {
      local_14 = 0;
      if (0 < local_24) {
        local_20 = local_30;
        local_1c = local_30 + 0x21;
        piVar7 = local_28 + 9;
        local_18 = local_28 + 0x21;
        piVar9 = local_248;
        do {
          puVar8 = piVar9 + 1;
          iVar5 = local_248[local_14] - local_248[local_14 + 1];
          if (iVar5 == 0) {
            iVar5 = crt_string_c_stricmp_FUN_005fe7f0((char *)local_20,(char *)local_1c);
          }
          if (0 < iVar5) {
            piVar13 = local_28 + local_14 * 0x21;
            piVar10 = piVar13;
            piVar12 = local_b8;
            for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
              *piVar12 = *piVar10;
              piVar10 = piVar10 + (uint)bVar14 * -2 + 1;
              piVar12 = piVar12 + (uint)bVar14 * -2 + 1;
            }
            *(short *)piVar12 = (short)*piVar10;
            local_98 = piVar13[8];
            local_94 = *piVar7;
            local_90 = piVar7[1];
            local_8c = piVar7[2];
            local_88 = piVar7[3];
            local_84 = piVar7[4];
            local_80 = piVar7[5];
            local_7c = piVar7[6];
            local_78 = piVar7[7];
            local_74 = piVar7[8];
            local_70 = piVar7[9];
            local_6c = piVar7[10];
            local_68 = piVar7[0xb];
            local_64 = piVar7[0xc];
            local_60 = piVar7[0xd];
            local_5c = piVar7[0xe];
            local_58 = piVar7[0xf];
            local_54 = piVar7[0x10];
            local_50 = piVar7[0x11];
            local_4c = piVar7[0x12];
            local_48 = piVar7[0x13];
            local_44 = piVar7[0x14];
            local_40 = piVar7[0x15];
            local_3c = piVar7[0x16];
            local_38 = piVar7[0x17];
            piVar10 = local_18;
            for (iVar5 = 0x21; iVar5 != 0; iVar5 = iVar5 + -1) {
              *piVar13 = *piVar10;
              piVar10 = piVar10 + (uint)bVar14 * -2 + 1;
              piVar13 = piVar13 + (uint)bVar14 * -2 + 1;
            }
            piVar10 = local_b8;
            piVar13 = local_18;
            for (iVar5 = 0x21; iVar5 != 0; iVar5 = iVar5 + -1) {
              *piVar13 = *piVar10;
              piVar10 = piVar10 + (uint)bVar14 * -2 + 1;
              piVar13 = piVar13 + (uint)bVar14 * -2 + 1;
            }
            uVar3 = *piVar9;
            *piVar9 = *puVar8;
            *puVar8 = uVar3;
          }
          piVar7 = piVar7 + 0x21;
          local_14 = local_14 + 1;
          local_20 = local_20 + 0x21;
          local_1c = local_1c + 0x21;
          local_18 = local_18 + 0x21;
          piVar9 = puVar8;
        } while (local_14 < local_24);
      }
      local_24 = local_24 + -1;
    } while (-1 < local_24);
  }
  iVar5 = 0;
  piVar9 = in_stack_00000004;
  if (0 < *in_stack_00000004) {
    do {
      iVar4 = core_skeledit_cpp_FUN_0058ac30();
      piVar9[0xce5] = iVar4;
      if (iVar4 < 0) {
        g_CurrentFilename = "..\\core\\skeledit.cpp";
        g_CurrentLineNumber = 0x2e8;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze while shuffling bones...");
      }
      iVar5 = iVar5 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar5 < *in_stack_00000004);
  }
  iVar5 = 0;
  piVar9 = in_stack_00000004;
  if (0 < *in_stack_00000004) {
    do {
      if ((-1 < piVar9[9]) &&
         (iVar4 = in_stack_00000004[piVar9[9] + 0xce5], piVar9[9] = iVar4, iVar5 <= iVar4)) {
        g_CurrentFilename = "..\\core\\skeledit.cpp";
        g_CurrentLineNumber = 0x2f0;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze while shuffling parent bones...");
      }
      iVar5 = iVar5 + 1;
      piVar9 = piVar9 + 0x21;
    } while (iVar5 < *in_stack_00000004);
  }
  return;
}
