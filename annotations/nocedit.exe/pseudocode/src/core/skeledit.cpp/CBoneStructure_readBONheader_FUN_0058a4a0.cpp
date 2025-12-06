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
  int *piVar8;
  BADSPACEBASE *in_ESP;
  uint *puVar9;
  char *pcVar10;
  streambuf **ppsVar11;
  int *piVar12;
  char (*pacVar13) [30];
  char *pcVar14;
  streambuf **ppsVar15;
  byte bVar16;
  streambuf **str2;
  streambuf **ppsVar17;
  FILE *in_stack_00000014;
  int *in_stack_00000018;
  FILE *in_stack_0000001c;
  int *in_stack_00000020;
  char (*pacVar18) [30];
  int aiStack_22c [100];
  int aiStack_9c [8];
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
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int *local_1c;
  int local_18;
  streambuf **local_14;
  streambuf **ppsStack_c;
  streambuf **str1;
  
  bVar16 = 0;
  crt_stack_c_stack_probe_FUN_005ff9f3(0x25c);
  iVar5 = 1;
  do {
    iVar4 = crt_stdio_c_fgetc_FUN_005fe840((FILE *)frame_count_out);
    if (iVar4 < 0) break;
  } while ((iVar4 != 10) || (iVar5 = iVar5 + -1, 0 < iVar5));
  crt_stdio_c_fscanf_FUN_005fe7c0
            (in_stack_00000014,"%d,%d\n",frame_count_out,in_stack_00000018);
  if (100 < (int)in_stack_00000014->_ptr) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x2a6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Too bony!");
  }
  iVar5 = 1;
  do {
    iVar4 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_0000001c);
    if (iVar4 < 0) break;
  } while ((iVar4 != 10) || (iVar5 = iVar5 + -1, 0 < iVar5));
  iVar5 = 0;
  if (0 < (int)in_stack_0000001c->_ptr) {
    local_1c = &in_stack_0000001c->_cnt;
    local_14 = &in_stack_0000001c[1]._link;
    pcVar14 = g_BoneNameBuffer[0];
    do {
      pcVar10 = (char *)(iVar5 * 0x84 + local_20);
      crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_0000001c,"\"%[^\"]\",%d\n","\"%[^\"]\",%d\n",pcVar10,local_18);
      pcVar6 = pcVar14 + 0x1e;
      do {
        cVar1 = *pcVar10;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar10[1];
        pcVar10 = pcVar10 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      iVar5 = iVar5 + 1;
      local_18 = local_18 + 0x84;
      pcVar14 = pcVar6;
    } while (iVar5 < *in_stack_00000018);
  }
  iVar5 = 1;
  do {
    iVar4 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_0000001c);
    if (iVar4 < 0) break;
  } while ((iVar4 != 10) || (iVar5 = iVar5 + -1, 0 < iVar5));
  if ((*(byte *)(in_stack_00000020 + 3) & 0x20) != 0) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 699;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CBoneStructure::readBONheader - error reading file!");
  }
  iVar5 = 0;
  if (0 < *in_stack_00000020) {
    iVar4 = 0;
    do {
      *(uint *)((int)aiStack_22c + iVar4) = 0;
      for (iVar2 = iVar5; -1 < iVar2; iVar2 = in_stack_00000020[iVar2 * 0x21 + 9]) {
        *(int *)((int)aiStack_22c + iVar4) = *(int *)((int)aiStack_22c + iVar4) + 1;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar5 < *in_stack_00000020);
  }
  iVar5 = *in_stack_00000020 + -1;
  if (-1 < iVar5) {
    local_14 = (streambuf **)(in_stack_00000020 + 1);
    ppsStack_c = (streambuf **)(in_stack_00000020 + 1);
    do {
      this_ptr = (CBoneStructure *)0x0;
      if (0 < iVar5) {
        piVar7 = (int *)(ppsStack_c + 9);
        piVar8 = aiStack_22c;
        str1 = local_14;
        str2 = local_14;
        ppsVar17 = ppsStack_c;
        do {
          ppsVar17 = ppsVar17 + 0x21;
          str2 = str2 + 0x21;
          puVar9 = piVar8 + 1;
          iVar4 = aiStack_22c[(int)this_ptr] - aiStack_22c[(int)((int)&this_ptr->bone_count + 1)];
          if (iVar4 == 0) {
            iVar4 = crt_string_c_stricmp_FUN_005fe7f0((char *)str1,(char *)str2);
          }
          if (0 < iVar4) {
            ppsVar15 = ppsStack_c + (int)this_ptr * 0x21;
            ppsVar11 = ppsVar15;
            piVar12 = aiStack_9c;
            for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
              *piVar12 = (int)*ppsVar11;
              ppsVar11 = ppsVar11 + (uint)bVar16 * -2 + 1;
              piVar12 = piVar12 + (uint)bVar16 * -2 + 1;
            }
            *(ushort *)piVar12 = *(ushort *)ppsVar11;
            local_7c = (int)ppsVar15[8];
            local_78 = *piVar7;
            local_74 = piVar7[1];
            local_70 = piVar7[2];
            local_6c = piVar7[3];
            local_68 = piVar7[4];
            local_64 = piVar7[5];
            local_60 = piVar7[6];
            local_5c = piVar7[7];
            local_58 = piVar7[8];
            local_54 = piVar7[9];
            local_50 = piVar7[10];
            local_4c = piVar7[0xb];
            local_48 = piVar7[0xc];
            local_44 = piVar7[0xd];
            local_40 = piVar7[0xe];
            local_3c = piVar7[0xf];
            local_38 = piVar7[0x10];
            local_34 = piVar7[0x11];
            local_30 = piVar7[0x12];
            local_2c = piVar7[0x13];
            local_28 = piVar7[0x14];
            local_24 = piVar7[0x15];
            local_20 = piVar7[0x16];
            local_1c = (int *)piVar7[0x17];
            ppsVar11 = ppsVar17;
            for (iVar4 = 0x21; iVar4 != 0; iVar4 = iVar4 + -1) {
              *ppsVar15 = *ppsVar11;
              ppsVar11 = ppsVar11 + (uint)bVar16 * -2 + 1;
              ppsVar15 = ppsVar15 + (uint)bVar16 * -2 + 1;
            }
            piVar12 = aiStack_9c;
            ppsVar11 = ppsVar17;
            for (iVar4 = 0x21; iVar4 != 0; iVar4 = iVar4 + -1) {
              *ppsVar11 = (streambuf *)*piVar12;
              piVar12 = piVar12 + (uint)bVar16 * -2 + 1;
              ppsVar11 = ppsVar11 + (uint)bVar16 * -2 + 1;
            }
            uVar3 = *piVar8;
            *piVar8 = *puVar9;
            *puVar9 = uVar3;
          }
          piVar7 = piVar7 + 0x21;
          str1 = str1 + 0x21;
          this_ptr = (CBoneStructure *)((int)&this_ptr->bone_count + 1);
          piVar8 = puVar9;
        } while ((int)this_ptr < iVar5);
      }
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  iVar5 = 0;
  if (0 < *in_stack_00000020) {
    pacVar13 = g_BoneNameBuffer;
    piVar8 = in_stack_00000020;
    do {
      pacVar18 = pacVar13;
      iVar4 = core_skeledit_cpp_FUN_0058ac30();
      piVar8[0xce5] = iVar4;
      if (iVar4 < 0) {
        g_CurrentFilename = "..\\core\\skeledit.cpp";
        g_CurrentLineNumber = 0x2e8;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze while shuffling bones...",pacVar18);
      }
      piVar8 = piVar8 + 1;
      iVar5 = iVar5 + 1;
      pacVar13 = pacVar13 + 1;
    } while (iVar5 < *in_stack_00000020);
  }
  iVar5 = 0;
  piVar8 = in_stack_00000020;
  if (0 < *in_stack_00000020) {
    do {
      if ((-1 < piVar8[9]) &&
         (iVar4 = in_stack_00000020[piVar8[9] + 0xce5], piVar8[9] = iVar4, iVar5 <= iVar4)) {
        g_CurrentFilename = "..\\core\\skeledit.cpp";
        g_CurrentLineNumber = 0x2f0;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze while shuffling parent bones...");
      }
      iVar5 = iVar5 + 1;
      piVar8 = piVar8 + 0x21;
    } while (iVar5 < *in_stack_00000020);
  }
  return;
}
