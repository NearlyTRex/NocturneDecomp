// Name: crt_io.c__read_lk_FUN_1000b720
// Address: 1000b720
// Address Range: [[1000b720, 1000b94f]]
// Convention: __cdecl
// Signature: int __cdecl crt_io_c__read_lk_FUN_1000b720(int fh,void *buf,uint cnt)

#include "nocturne.h"

int __cdecl _read_lk(int fh,void *buf,uint cnt)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  BOOL BVar5;
  DWORD oserrno;
  int *piVar6;
  ulong *puVar7;
  byte bVar8;
  void *lpBuffer;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char local_d;
  DWORD local_c;
  DWORD local_8;
  char *local_4;
  
  local_c = 0;
  if (cnt != 0) {
    piVar6 = (int *)((int)&DAT_10241870 + ((int)(fh & 0xffffffe7U) >> 3));
    iVar3 = (fh & 0x1fU) * 0x24;
    iVar4 = *piVar6 + iVar3;
    if ((*(byte *)(iVar4 + 4) & 2) == 0) {
      lpBuffer = buf;
      if (((*(byte *)(iVar4 + 4) & 0x48) != 0) && (*(char *)(iVar4 + 5) != '\n')) {
        *(char *)buf = *(char *)(iVar4 + 5);
        lpBuffer = (void *)((int)buf + 1);
        cnt = cnt - 1;
        local_c = 1;
        *(byte *)(*piVar6 + 5 + iVar3) = 10;
      }
      BVar5 = ReadFile(*(HANDLE *)(*piVar6 + iVar3),lpBuffer,cnt,&local_8,(LPOVERLAPPED)0x0);
      if (BVar5 == 0) {
        oserrno = GetLastError();
        if (oserrno == 5) {
          piVar6 = _errno();
          *piVar6 = 9;
          puVar7 = __doserrno();
          *puVar7 = 5;
          return -1;
        }
        if (oserrno != 0x6d) {
          _dosmaperr(oserrno);
          return -1;
        }
        return 0;
      }
      local_c = local_c + local_8;
      pbVar1 = (byte *)(*piVar6 + 4 + iVar3);
      bVar8 = *pbVar1;
      if ((bVar8 & 0x80) != 0) {
        if ((local_8 == 0) || (*(char *)buf != '\n')) {
          bVar8 = bVar8 & 0xfb;
        }
        else {
          bVar8 = bVar8 | 4;
        }
        *pbVar1 = bVar8;
        local_4 = (char *)(local_c + (int)buf);
        pcVar9 = buf;
        pcVar11 = buf;
        if (buf < local_4) {
          do {
            cVar2 = *pcVar9;
            if (cVar2 == '\x1a') {
              pbVar1 = (byte *)(*piVar6 + 4 + iVar3);
              bVar8 = *pbVar1;
              if ((bVar8 & 0x40) == 0) {
                *pbVar1 = bVar8 | 2;
              }
              break;
            }
            if (cVar2 == '\r') {
              if (pcVar9 < local_4 + -1) {
                pcVar10 = pcVar9 + 1;
                if (*pcVar10 == '\n') {
                  pcVar10 = pcVar9 + 2;
                  *pcVar11 = '\n';
                }
                else {
                  *pcVar11 = '\r';
                }
                goto LAB_1000b912;
              }
              pcVar10 = pcVar9 + 1;
              local_c = 0;
              BVar5 = ReadFile(*(HANDLE *)(*piVar6 + iVar3),&local_d,1,&local_8,(LPOVERLAPPED)0x0);
              if (BVar5 == 0) {
                local_c = GetLastError();
              }
              if ((local_c != 0) || (local_8 == 0)) {
LAB_1000b90f:
                *pcVar11 = '\r';
                goto LAB_1000b912;
              }
              if ((*(byte *)(*piVar6 + 4 + iVar3) & 0x48) == 0) {
                if ((buf == pcVar11) && (local_d == '\n')) {
                  *pcVar11 = '\n';
                  goto LAB_1000b912;
                }
                _lseek_lk(fh,-1,1);
                if (local_d != '\n') goto LAB_1000b90f;
              }
              else {
                if (local_d == '\n') {
                  *pcVar11 = '\n';
                  goto LAB_1000b912;
                }
                *pcVar11 = '\r';
                pcVar11 = pcVar11 + 1;
                *(char *)(*piVar6 + 5 + iVar3) = local_d;
              }
            }
            else {
              pcVar10 = pcVar9 + 1;
              *pcVar11 = cVar2;
LAB_1000b912:
              pcVar11 = pcVar11 + 1;
            }
            pcVar9 = pcVar10;
          } while (pcVar10 < local_4);
        }
        local_c = (int)pcVar11 - (int)buf;
      }
      return local_c;
    }
  }
  return 0;
}
