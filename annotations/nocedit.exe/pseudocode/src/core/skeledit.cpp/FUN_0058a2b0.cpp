// Name: core_skeledit.cpp_FUN_0058a2b0
// Address: 0058a2b0
// Address Range: [[0058a2b0, 0058a3c8]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058a2b0()

#include "nocturne.h"

void core_skeledit_cpp_FUN_0058a2b0(void)

{
  char cVar1;
  char *pcVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int in_stack_0000000c;
  FILE *in_stack_00000010;
  FILE *in_stack_00000014;
  FILE *in_stack_00000018;
  uint uStack_20;
  byte auStack_1c [16];
  int iStack_c;
  ushort *puVar7;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x3c);
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000010,"DATA\\%s\n",in_stack_0000000c + 0x8f5c);
  iStack_c = 0;
  if (0 < in_stack_00000010[6]._handle) {
    puVar7 = &in_stack_00000010[6]._ungotten;
    do {
      iVar3 = 0;
      if (0 < (int)in_stack_00000010[6]._bufsize) {
        pcVar2 = (char *)(puVar7 + 4);
        do {
          pcVar6 = (char *)&uStack_20;
          pcVar4 = pcVar2;
          do {
            cVar1 = *pcVar4;
            *pcVar6 = cVar1;
            pcVar5 = (char *)&uStack_20;
            if (cVar1 == '\0') break;
            cVar1 = pcVar4[1];
            pcVar4 = pcVar4 + 2;
            pcVar6[1] = cVar1;
            pcVar6 = pcVar6 + 2;
            pcVar5 = (char *)&uStack_20;
          } while (cVar1 != '\0');
          do {
            pcVar4 = pcVar5;
            if (*pcVar5 == '.') goto LAB_0058a355;
            if (*pcVar5 == '\0') break;
            pcVar4 = pcVar5 + 1;
            if (*pcVar4 == '.') goto LAB_0058a355;
            pcVar5 = pcVar5 + 2;
          } while (*pcVar4 != '\0');
          pcVar4 = (char *)0x0;
LAB_0058a355:
          if (pcVar4 != (char *)0x0) {
            *pcVar4 = '\0';
          }
          crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000014,"ART\\%s.RAW\n",&uStack_20);
          uStack_20 = auStack_1c;
          crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000018,"ART\\%s.ACT\n");
          iVar3 = iVar3 + 1;
          pcVar2 = pcVar2 + 0x48;
        } while (iVar3 < (int)in_stack_00000018[6]._bufsize);
      }
      puVar7 = puVar7 + 0xb40;
      iStack_c = iStack_c + 1;
    } while (iStack_c < in_stack_00000010[6]._handle);
  }
  return;
}
