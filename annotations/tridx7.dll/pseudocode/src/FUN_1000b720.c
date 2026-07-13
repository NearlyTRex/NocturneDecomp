// Name: FUN_1000b720
// Address: 1000b720
// Address Range: [[1000b720, 1000b94f]]
// Convention: unknown
// Signature: int FUN_1000b720(uint param_1,char *param_2,DWORD param_3)

#include "nocturne.h"

int FUN_1000b720(uint param_1,char *param_2,DWORD param_3)

{
  int *piVar1;
  byte *pbVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  BOOL BVar6;
  DWORD DVar7;
  uint *puVar8;
  byte bVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char local_d;
  DWORD local_c;
  DWORD local_8;
  char *local_4;
  
  local_c = 0;
  if (param_3 != 0) {
    piVar1 = (int *)((int)&DAT_10241870 + ((int)(param_1 & 0xffffffe7) >> 3));
    iVar4 = (param_1 & 0x1f) * 0x24;
    iVar5 = *piVar1 + iVar4;
    if ((*(byte *)(iVar5 + 4) & 2) == 0) {
      pcVar10 = param_2;
      if (((*(byte *)(iVar5 + 4) & 0x48) != 0) && (*(char *)(iVar5 + 5) != '\n')) {
        *param_2 = *(char *)(iVar5 + 5);
        pcVar10 = param_2 + 1;
        param_3 = param_3 - 1;
        local_c = 1;
        *(byte *)(*piVar1 + 5 + iVar4) = 10;
      }
      BVar6 = ReadFile(*(HANDLE *)(*piVar1 + iVar4),pcVar10,param_3,&local_8,(LPOVERLAPPED)0x0);
      if (BVar6 == 0) {
        DVar7 = GetLastError();
        if (DVar7 == 5) {
          puVar8 = (uint *)FUN_10008a20();
          *puVar8 = 9;
          puVar8 = (uint *)FUN_10008a30();
          *puVar8 = 5;
          return -1;
        }
        if (DVar7 != 0x6d) {
          __dosmaperr(DVar7);
          return -1;
        }
        return 0;
      }
      local_c = local_c + local_8;
      pbVar2 = (byte *)(*piVar1 + 4 + iVar4);
      bVar9 = *pbVar2;
      if ((bVar9 & 0x80) != 0) {
        if ((local_8 == 0) || (*param_2 != '\n')) {
          bVar9 = bVar9 & 0xfb;
        }
        else {
          bVar9 = bVar9 | 4;
        }
        *pbVar2 = bVar9;
        local_4 = param_2 + local_c;
        pcVar10 = param_2;
        pcVar12 = param_2;
        if (param_2 < local_4) {
          do {
            cVar3 = *pcVar10;
            if (cVar3 == '\x1a') {
              pbVar2 = (byte *)(*piVar1 + 4 + iVar4);
              bVar9 = *pbVar2;
              if ((bVar9 & 0x40) == 0) {
                *pbVar2 = bVar9 | 2;
              }
              break;
            }
            if (cVar3 == '\r') {
              if (pcVar10 < local_4 + -1) {
                pcVar11 = pcVar10 + 1;
                if (*pcVar11 == '\n') {
                  pcVar11 = pcVar10 + 2;
                  *pcVar12 = '\n';
                }
                else {
                  *pcVar12 = '\r';
                }
                goto LAB_1000b912;
              }
              pcVar11 = pcVar10 + 1;
              local_c = 0;
              BVar6 = ReadFile(*(HANDLE *)(*piVar1 + iVar4),&local_d,1,&local_8,(LPOVERLAPPED)0x0);
              if (BVar6 == 0) {
                local_c = GetLastError();
              }
              if ((local_c != 0) || (local_8 == 0)) {
LAB_1000b90f:
                *pcVar12 = '\r';
                goto LAB_1000b912;
              }
              if ((*(byte *)(*piVar1 + 4 + iVar4) & 0x48) == 0) {
                if ((param_2 == pcVar12) && (local_d == '\n')) {
                  *pcVar12 = '\n';
                  goto LAB_1000b912;
                }
                __lseek_lk(param_1,0xffffffff,1);
                if (local_d != '\n') goto LAB_1000b90f;
              }
              else {
                if (local_d == '\n') {
                  *pcVar12 = '\n';
                  goto LAB_1000b912;
                }
                *pcVar12 = '\r';
                pcVar12 = pcVar12 + 1;
                *(char *)(*piVar1 + 5 + iVar4) = local_d;
              }
            }
            else {
              pcVar11 = pcVar10 + 1;
              *pcVar12 = cVar3;
LAB_1000b912:
              pcVar12 = pcVar12 + 1;
            }
            pcVar10 = pcVar11;
          } while (pcVar11 < local_4);
        }
        local_c = (int)pcVar12 - (int)param_2;
      }
      return local_c;
    }
  }
  return 0;
}
