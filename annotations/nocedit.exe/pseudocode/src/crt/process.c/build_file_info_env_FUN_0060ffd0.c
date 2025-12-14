// Name: crt_process.c_build_file_info_env_FUN_0060ffd0
// Address: 0060ffd0
// Address Range: [[0060ffd0, 006101ed]]
// Convention: __cdecl
// Signature: undefined crt_process.c_build_file_info_env_FUN_0060ffd0()

#include "nocturne.h"

char * __cdecl crt_process_c_build_file_info_env_FUN_0060ffd0(void)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint file_handle_index;
  BADSPACEBASE *in_ESP;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  char acStack_40 [16];
  char acStack_30 [4];
  char acStack_2c [8];
  uint uStack_24;
  int iStack_20;
  
  bVar8 = 0;
  uVar3 = 0xffffffff;
  pcVar2 = "C_FILE_INFO=";
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = crt_memory_c_malloc_FUN_00601bb0(g_MaxHandleCount * 0x1b + ~uVar3);
  uVar3 = g_MaxHandleCount;
  if (pcVar2 == (char *)0x0) {
    pcVar2 = (char *)0x0;
  }
  else {
    file_handle_index = 0;
    pcVar6 = pcVar2 + (uint)bVar8 * -8 + 4;
    *(uint *)pcVar2 = "C_FILE_INFO="._0_4_;
    *(uint *)pcVar6 = *(uint *)("C_FILE_INFO=" + (uint)bVar8 * -8 + 4);
    *(uint *)(pcVar6 + (uint)bVar8 * -8 + 4) =
         *(uint *)("C_FILE_INFO=" + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    (pcVar6 + (uint)bVar8 * -8 + 4)[(uint)bVar8 * -8 + 4] =
         ("C_FILE_INFO=" + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8)
         [((uint)bVar8 * -2 + 1) * 4];
    if (uVar3 != 0) {
      do {
        uVar3 = crt_io_c_getFileTypeFlags_FUN_006088b0(file_handle_index);
        if ((uVar3 & 0x4000) != 0) {
          uStack_24 = crt_io_c_get_handle_FUN_006109f0(file_handle_index);
          crt_stdio_c_IntegerToString_FUN_00607d18(file_handle_index,acStack_30,0x10);
          pcVar6 = acStack_2c;
          iVar4 = -1;
          pcVar5 = &stack0xffffffb8;
          do {
            pcVar7 = pcVar5;
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            pcVar7 = pcVar5 + (uint)bVar8 * -2 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar7;
          } while (cVar1 != '\0');
          pcVar7 = pcVar7 + -1;
          do {
            cVar1 = *pcVar6;
            *pcVar7 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar6[1];
            pcVar6 = pcVar6 + 2;
            pcVar7[1] = cVar1;
            pcVar7 = pcVar7 + 2;
          } while (cVar1 != '\0');
          pcVar5 = &g_ColonChar;
          iVar4 = -1;
          pcVar6 = &stack0xffffffb8;
          do {
            pcVar7 = pcVar6;
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            pcVar7 = pcVar6 + (uint)bVar8 * -2 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar7;
          } while (cVar1 != '\0');
          pcVar7 = pcVar7 + -1;
          do {
            cVar1 = *pcVar5;
            *pcVar7 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar5[1];
            pcVar5 = pcVar5 + 2;
            pcVar7[1] = cVar1;
            pcVar7 = pcVar7 + 2;
          } while (cVar1 != '\0');
          crt_stdio_c_IntegerToString_FUN_00607d18(iStack_20,acStack_2c,0x10);
          pcVar6 = acStack_2c + 4;
          iVar4 = -1;
          pcVar5 = &stack0xffffffbc;
          do {
            pcVar7 = pcVar5;
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            pcVar7 = pcVar5 + (uint)bVar8 * -2 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar7;
          } while (cVar1 != '\0');
          pcVar7 = pcVar7 + -1;
          do {
            cVar1 = *pcVar6;
            *pcVar7 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar6[1];
            pcVar6 = pcVar6 + 2;
            pcVar7[1] = cVar1;
            pcVar7 = pcVar7 + 2;
          } while (cVar1 != '\0');
          pcVar5 = &g_ColonChar;
          iVar4 = -1;
          pcVar6 = &stack0xffffffbc;
          do {
            pcVar7 = pcVar6;
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            pcVar7 = pcVar6 + (uint)bVar8 * -2 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar7;
          } while (cVar1 != '\0');
          pcVar7 = pcVar7 + -1;
          do {
            cVar1 = *pcVar5;
            *pcVar7 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar5[1];
            pcVar5 = pcVar5 + 2;
            pcVar7[1] = cVar1;
            pcVar7 = pcVar7 + 2;
          } while (cVar1 != '\0');
          crt_stdio_c_IntegerToString_FUN_00607d18(uVar3,acStack_2c + 4,0x10);
          pcVar6 = (char *)&uStack_24;
          iVar4 = -1;
          pcVar5 = acStack_40;
          do {
            pcVar7 = pcVar5;
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            pcVar7 = pcVar5 + (uint)bVar8 * -2 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar7;
          } while (cVar1 != '\0');
          pcVar7 = pcVar7 + -1;
          do {
            cVar1 = *pcVar6;
            *pcVar7 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar6[1];
            pcVar6 = pcVar6 + 2;
            pcVar7[1] = cVar1;
            pcVar7 = pcVar7 + 2;
          } while (cVar1 != '\0');
          pcVar5 = &g_AsteriskChar;
          iVar4 = -1;
          pcVar6 = acStack_40;
          do {
            pcVar7 = pcVar6;
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            pcVar7 = pcVar6 + (uint)bVar8 * -2 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar7;
          } while (cVar1 != '\0');
          pcVar7 = pcVar7 + -1;
          do {
            cVar1 = *pcVar5;
            *pcVar7 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar5[1];
            pcVar5 = pcVar5 + 2;
            pcVar7[1] = cVar1;
            pcVar7 = pcVar7 + 2;
          } while (cVar1 != '\0');
          pcVar5 = acStack_40;
          iVar4 = -1;
          pcVar6 = pcVar2;
          do {
            pcVar7 = pcVar6;
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            pcVar7 = pcVar6 + (uint)bVar8 * -2 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar7;
          } while (cVar1 != '\0');
          pcVar7 = pcVar7 + -1;
          do {
            cVar1 = *pcVar5;
            *pcVar7 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar5[1];
            pcVar5 = pcVar5 + 2;
            pcVar7[1] = cVar1;
            pcVar7 = pcVar7 + 2;
          } while (cVar1 != '\0');
        }
        file_handle_index = file_handle_index + 1;
      } while (file_handle_index < g_MaxHandleCount);
    }
  }
  return pcVar2;
}
