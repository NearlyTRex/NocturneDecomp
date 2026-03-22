// Name: crt_process.c_build_file_info_env_FUN_0060ffd0
// Address: 0060ffd0
// Address Range: [[0060ffd0, 006101ed]]
// Convention: __cdecl
// Signature: char * __cdecl crt_process_c_build_file_info_env_FUN_0060ffd0(void)

#include "nocturne.h"

char * __cdecl build_file_info_env(void)

{
  char cVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  uint uVar2;
  int iVar3;
  int iVar6;
  uint file_handle_index;
  char *pcVar7;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar8;
  char *pcVar9;
  byte bVar7;
  char local_44 [28];
  char local_28 [12];
  int local_1c;
  char *local_18;
  char cVar1;
  
  bVar7 = 0;
  uVar2 = 0xffffffff;
  pcVar3 = "C_FILE_INFO=";
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar3 = malloc(g_MaxHandleCount * 0x1b + ~uVar2);
  uVar4 = g_MaxHandleCount;
  if (pcVar3 == (char *)0x0) {
    pcVar3 = (char *)0x0;
  }
  else {
    file_handle_index = 0;
    pcVar5 = pcVar3 + (uint)bVar7 * -8 + 4;
    *(uint *)pcVar3 = "C_FILE_INFO="._0_4_;
    *(uint *)pcVar5 = *(uint *)("C_FILE_INFO=" + (uint)bVar7 * -8 + 4);
    *(uint *)(pcVar5 + (uint)bVar7 * -8 + 4) =
         *(uint *)("C_FILE_INFO=" + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    (pcVar5 + (uint)bVar7 * -8 + 4)[(uint)bVar7 * -8 + 4] =
         ("C_FILE_INFO=" + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8)
         [((uint)bVar7 * -2 + 1) * 4];
    if (uVar4 != 0) {
      do {
        uVar4 = func_0x006088b0(file_handle_index);
        if ((uVar4 & 0x4000) != 0) {
          iVar5 = get_handle(file_handle_index);
          local_44[0] = '\0';
          IntegerToString(file_handle_index,local_28,0x10);
          pcVar7 = local_28;
          iVar3 = -1;
          pcVar6 = local_44;
          do {
            pcVar6 = pcVar6;
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar6;
          } while (cVar2 != '\0');
          pcVar8 = pcVar6 + -1;
          do {
            cVar2 = *pcVar7;
            *pcVar8 = cVar2;
            if (cVar2 == '\0') break;
            cVar2 = pcVar7[1];
            pcVar7 = pcVar7 + 2;
            pcVar8[1] = cVar2;
            pcVar8 = pcVar8 + 2;
          } while (cVar2 != '\0');
          pcVar4 = g_ProcessFileInfoStr;
          iVar6 = -1;
          pcVar7 = local_44;
          do {
            pcVar8 = pcVar7;
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            pcVar8 = pcVar7 + (uint)bVar7 * -2 + 1;
            cVar2 = *pcVar7;
            pcVar7 = pcVar8;
          } while (cVar2 != '\0');
          pcVar8 = pcVar8 + -1;
          do {
            cVar2 = *pcVar4;
            *pcVar8 = cVar2;
            if (cVar2 == '\0') break;
            cVar2 = pcVar4[1];
            pcVar4 = pcVar4 + 2;
            pcVar8[1] = cVar2;
            pcVar8 = pcVar8 + 2;
          } while (cVar2 != '\0');
          IntegerToString(iVar5,local_28,0x10);
          pcVar7 = local_28;
          iVar5 = -1;
          pcVar8 = local_44;
          do {
            pcVar9 = pcVar8;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            pcVar9 = pcVar8 + (uint)bVar7 * -2 + 1;
            cVar2 = *pcVar8;
            pcVar8 = pcVar9;
          } while (cVar2 != '\0');
          pcVar9 = pcVar9 + -1;
          do {
            cVar2 = *pcVar7;
            *pcVar9 = cVar2;
            if (cVar2 == '\0') break;
            cVar2 = pcVar7[1];
            pcVar7 = pcVar7 + 2;
            pcVar9[1] = cVar2;
            pcVar9 = pcVar9 + 2;
          } while (cVar2 != '\0');
          pcVar8 = g_ProcessFileInfoStr;
          iVar5 = -1;
          pcVar7 = local_44;
          do {
            pcVar9 = pcVar7;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            pcVar9 = pcVar7 + (uint)bVar7 * -2 + 1;
            cVar2 = *pcVar7;
            pcVar7 = pcVar9;
          } while (cVar2 != '\0');
          pcVar9 = pcVar9 + -1;
          do {
            cVar2 = *pcVar8;
            *pcVar9 = cVar2;
            if (cVar2 == '\0') break;
            cVar2 = pcVar8[1];
            pcVar8 = pcVar8 + 2;
            pcVar9[1] = cVar2;
            pcVar9 = pcVar9 + 2;
          } while (cVar2 != '\0');
          IntegerToString(uVar4,local_28,0x10);
          pcVar7 = local_28;
          iVar5 = -1;
          pcVar8 = local_44;
          do {
            pcVar9 = pcVar8;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            pcVar9 = pcVar8 + (uint)bVar7 * -2 + 1;
            cVar2 = *pcVar8;
            pcVar8 = pcVar9;
          } while (cVar2 != '\0');
          pcVar9 = pcVar9 + -1;
          do {
            cVar2 = *pcVar7;
            *pcVar9 = cVar2;
            if (cVar2 == '\0') break;
            cVar2 = pcVar7[1];
            pcVar7 = pcVar7 + 2;
            pcVar9[1] = cVar2;
            pcVar9 = pcVar9 + 2;
          } while (cVar2 != '\0');
          pcVar8 = g_ProcessFileInfoStr + 4;
          iVar5 = -1;
          pcVar7 = local_44;
          do {
            pcVar9 = pcVar7;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            pcVar9 = pcVar7 + (uint)bVar7 * -2 + 1;
            cVar2 = *pcVar7;
            pcVar7 = pcVar9;
          } while (cVar2 != '\0');
          pcVar9 = pcVar9 + -1;
          do {
            cVar2 = *pcVar8;
            *pcVar9 = cVar2;
            if (cVar2 == '\0') break;
            cVar2 = pcVar8[1];
            pcVar8 = pcVar8 + 2;
            pcVar9[1] = cVar2;
            pcVar9 = pcVar9 + 2;
          } while (cVar2 != '\0');
          pcVar8 = local_44;
          iVar5 = -1;
          pcVar7 = pcVar3;
          do {
            pcVar9 = pcVar7;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            pcVar9 = pcVar7 + (uint)bVar7 * -2 + 1;
            cVar2 = *pcVar7;
            pcVar7 = pcVar9;
          } while (cVar2 != '\0');
          pcVar9 = pcVar9 + -1;
          do {
            cVar2 = *pcVar8;
            *pcVar9 = cVar2;
            if (cVar2 == '\0') break;
            cVar2 = pcVar8[1];
            pcVar8 = pcVar8 + 2;
            pcVar9[1] = cVar2;
            pcVar9 = pcVar9 + 2;
          } while (cVar2 != '\0');
        }
        file_handle_index = file_handle_index + 1;
      } while (file_handle_index < g_MaxHandleCount);
    }
  }
  return pcVar3;
}
