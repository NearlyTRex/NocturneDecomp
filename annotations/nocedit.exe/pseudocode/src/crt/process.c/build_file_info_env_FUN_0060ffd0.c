// Name: crt_process.c_build_file_info_env_FUN_0060ffd0
// Address: 0060ffd0
// Address Range: [[0060ffd0, 006101ed]]
// Convention: __cdecl
// Signature: char * __cdecl crt_process_c_build_file_info_env_FUN_0060ffd0(void)

#include "nocturne.h"

char * __cdecl crt_process_c_build_file_info_env_FUN_0060ffd0(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint file_handle_index;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  char local_44 [28];
  char local_28 [12];
  int local_1c;
  char *local_18;
  
  bVar7 = 0;
  uVar2 = 0xffffffff;
  pcVar5 = "C_FILE_INFO=";
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  local_18 = crt_memory_c_malloc_FUN_00601bb0(g_MaxHandleCount * 0x1b + ~uVar2);
  uVar2 = g_MaxHandleCount;
  if (local_18 == (char *)0x0) {
    local_18 = (char *)0x0;
  }
  else {
    file_handle_index = 0;
    pcVar5 = local_18 + (uint)bVar7 * -8 + 4;
    *(uint *)local_18 = "C_FILE_INFO="._0_4_;
    *(uint *)pcVar5 = *(uint *)("C_FILE_INFO=" + (uint)bVar7 * -8 + 4);
    *(uint *)(pcVar5 + (uint)bVar7 * -8 + 4) =
         *(uint *)("C_FILE_INFO=" + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    (pcVar5 + (uint)bVar7 * -8 + 4)[(uint)bVar7 * -8 + 4] =
         ("C_FILE_INFO=" + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8)
         [((uint)bVar7 * -2 + 1) * 4];
    if (uVar2 != 0) {
      do {
        uVar2 = crt_io_c_getFileTypeFlags_FUN_006088b0(file_handle_index);
        if ((uVar2 & 0x4000) != 0) {
          local_1c = crt_io_c_get_handle_FUN_006109f0(file_handle_index);
          local_44[0] = '\0';
          crt_stdio_c_IntegerToString_FUN_00607d18(file_handle_index,local_28,0x10);
          pcVar5 = local_28;
          iVar3 = -1;
          pcVar4 = local_44;
          do {
            pcVar6 = pcVar4;
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            pcVar6 = pcVar4 + (uint)bVar7 * -2 + 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar6;
          } while (cVar1 != '\0');
          pcVar6 = pcVar6 + -1;
          do {
            cVar1 = *pcVar5;
            *pcVar6 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar5[1];
            pcVar5 = pcVar5 + 2;
            pcVar6[1] = cVar1;
            pcVar6 = pcVar6 + 2;
          } while (cVar1 != '\0');
          pcVar4 = &g_ColonChar;
          iVar3 = -1;
          pcVar5 = local_44;
          do {
            pcVar6 = pcVar5;
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            pcVar6 = pcVar5 + (uint)bVar7 * -2 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar6;
          } while (cVar1 != '\0');
          pcVar6 = pcVar6 + -1;
          do {
            cVar1 = *pcVar4;
            *pcVar6 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar4[1];
            pcVar4 = pcVar4 + 2;
            pcVar6[1] = cVar1;
            pcVar6 = pcVar6 + 2;
          } while (cVar1 != '\0');
          crt_stdio_c_IntegerToString_FUN_00607d18(local_1c,local_28,0x10);
          pcVar5 = local_28;
          iVar3 = -1;
          pcVar4 = local_44;
          do {
            pcVar6 = pcVar4;
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            pcVar6 = pcVar4 + (uint)bVar7 * -2 + 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar6;
          } while (cVar1 != '\0');
          pcVar6 = pcVar6 + -1;
          do {
            cVar1 = *pcVar5;
            *pcVar6 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar5[1];
            pcVar5 = pcVar5 + 2;
            pcVar6[1] = cVar1;
            pcVar6 = pcVar6 + 2;
          } while (cVar1 != '\0');
          pcVar4 = &g_ColonChar;
          iVar3 = -1;
          pcVar5 = local_44;
          do {
            pcVar6 = pcVar5;
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            pcVar6 = pcVar5 + (uint)bVar7 * -2 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar6;
          } while (cVar1 != '\0');
          pcVar6 = pcVar6 + -1;
          do {
            cVar1 = *pcVar4;
            *pcVar6 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar4[1];
            pcVar4 = pcVar4 + 2;
            pcVar6[1] = cVar1;
            pcVar6 = pcVar6 + 2;
          } while (cVar1 != '\0');
          crt_stdio_c_IntegerToString_FUN_00607d18(uVar2,local_28,0x10);
          pcVar5 = local_28;
          iVar3 = -1;
          pcVar4 = local_44;
          do {
            pcVar6 = pcVar4;
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            pcVar6 = pcVar4 + (uint)bVar7 * -2 + 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar6;
          } while (cVar1 != '\0');
          pcVar6 = pcVar6 + -1;
          do {
            cVar1 = *pcVar5;
            *pcVar6 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar5[1];
            pcVar5 = pcVar5 + 2;
            pcVar6[1] = cVar1;
            pcVar6 = pcVar6 + 2;
          } while (cVar1 != '\0');
          pcVar4 = &g_AsteriskChar;
          iVar3 = -1;
          pcVar5 = local_44;
          do {
            pcVar6 = pcVar5;
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            pcVar6 = pcVar5 + (uint)bVar7 * -2 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar6;
          } while (cVar1 != '\0');
          pcVar6 = pcVar6 + -1;
          do {
            cVar1 = *pcVar4;
            *pcVar6 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar4[1];
            pcVar4 = pcVar4 + 2;
            pcVar6[1] = cVar1;
            pcVar6 = pcVar6 + 2;
          } while (cVar1 != '\0');
          iVar3 = -1;
          pcVar5 = local_18;
          do {
            pcVar4 = pcVar5;
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            pcVar4 = pcVar5 + (uint)bVar7 * -2 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar4;
          } while (cVar1 != '\0');
          pcVar4 = pcVar4 + -1;
          pcVar5 = local_44;
          do {
            cVar1 = *pcVar5;
            *pcVar4 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar5[1];
            pcVar5 = pcVar5 + 2;
            pcVar4[1] = cVar1;
            pcVar4 = pcVar4 + 2;
          } while (cVar1 != '\0');
        }
        file_handle_index = file_handle_index + 1;
      } while (file_handle_index < g_MaxHandleCount);
    }
  }
  return local_18;
}
