// Name: crt_io.c_write_FUN_0057301c
// Address: 0057301c
// Address Range: [[0057301c, 005733d0]]
// Convention: __cdecl
// Signature: int __cdecl crt_io_c_write_FUN_0057301c(int fd,void *buffer,SIZE_T count)

#include "nocturne.h"

int __cdecl write(int fd,void *buffer,SIZE_T count)

{
  uint uVar1;
  DWORD DVar2;
  int iVar3;
  BOOL BVar4;
  DWORD DVar5;
  DWORD local_24;
  DWORD local_20;
  DWORD local_1c;
  HANDLE local_18;
  uint local_14;
  
  if ((fd < 0) || (0x00000014 < (uint)fd)) {
    setErrno(4);
    count = 0xffffffff;
  }
  else {
    local_18 = *(HANDLE *)(DAT_005c1f54 + fd * 4);
    uVar1 = FUN_0056f220(fd);
    local_14 = uVar1;
    if (uVar1 == 0) {
      setErrno(4);
      return -1;
    }
    if ((uVar1 & 2) == 0) {
      setErrno(6);
      return -1;
    }
    (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac0)(fd);
    if (((uVar1 & 0x80) == 0) ||
       (DVar2 = SetFilePointer(local_18,0,(PLONG)0x0,2), DVar2 != 0xffffffff)) {
      if (((local_14 & 0x8000) != 0) &&
         (iVar3 = extend_file_for_append(fd), iVar3 != 0)) {
        (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(fd);
        return -1;
      }
      if ((local_14 & 0x40) == 0) {
        local_20 = GetStackUsage();
        if (local_20 < 0xb0) {
          stack_overflow_handler();
        }
        DVar2 = 0x200;
        if (local_20 < 0x230) {
          DVar2 = 0x80;
        }
        local_20 = 0;
        local_24 = 0;
        local_1c = 0;
        if (count != 0) {
          do {
            if (*(char *)((int)buffer + local_20) == '\n') {
              *(byte *)((int)&local_24 + local_24) = 0xd;
              local_24 = local_24 + 1;
              if (DVar2 == local_24) {
                if ((DAT_005c1d80 == (code *)0x0) || (iVar3 = (*DAT_005c1d54)(fd), iVar3 == 0)) {
                  BVar4 = WriteFile(local_18,&local_24,DVar2,&local_24,(LPOVERLAPPED)0x0);
                  if (BVar4 == 0) {
                    (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(fd);
                    DVar5 = __set_errno();
                    return DVar5;
                  }
                }
                else {
                  local_24 = (*DAT_005c1d80)(iVar3,&local_24,DVar2);
                }
                if (DVar2 != local_24) {
                  setErrno(0xc);
                  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(fd);
                  return local_1c + local_24;
                }
                local_1c = local_20;
                local_24 = 0;
              }
            }
            *(byte *)((int)&local_24 + local_24) = *(byte *)((int)buffer + local_20);
            local_20 = local_20 + 1;
            local_24 = local_24 + 1;
            if (DVar2 == local_24) {
              if ((DAT_005c1d80 == (code *)0x0) || (iVar3 = (*DAT_005c1d54)(fd), iVar3 == 0)) {
                BVar4 = WriteFile(local_18,&local_24,DVar2,&local_24,(LPOVERLAPPED)0x0);
                if (BVar4 == 0) {
                  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(fd);
                  DVar5 = __set_errno();
                  return DVar5;
                }
              }
              else {
                local_24 = (*DAT_005c1d80)(iVar3,&local_24,DVar2);
              }
              if (DVar2 != local_24) {
                setErrno(0xc);
                (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(fd);
                return local_1c + local_24;
              }
              local_1c = local_20;
              local_24 = 0;
            }
          } while (local_20 < count);
        }
        if (local_24 != 0) {
          if ((DAT_005c1d80 == (code *)0x0) || (iVar3 = (*DAT_005c1d54)(fd), iVar3 == 0)) {
            BVar4 = WriteFile(local_18,&local_24,local_24,&local_20,(LPOVERLAPPED)0x0);
            if (BVar4 == 0) {
              (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(fd);
              DVar5 = __set_errno();
              return DVar5;
            }
          }
          else {
            local_20 = (*DAT_005c1d80)(iVar3,&local_24,local_24);
          }
          if (local_20 != local_24) {
            setErrno(0xc);
            (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(fd);
            return local_1c + local_20;
          }
        }
      }
      else {
        if ((DAT_005c1d80 == (code *)0x0) || (iVar3 = (*DAT_005c1d54)(fd), iVar3 == 0)) {
          BVar4 = WriteFile(local_18,buffer,count,&local_1c,(LPOVERLAPPED)0x0);
          if (BVar4 == 0) {
            (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(fd);
            DVar5 = __set_errno();
            return DVar5;
          }
        }
        else {
          local_1c = (*DAT_005c1d80)(iVar3,buffer,count);
        }
        if (local_1c != count) {
          setErrno(0xc);
          count = local_1c;
        }
      }
      (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(fd);
    }
    else {
      (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(fd);
      count = __set_errno();
    }
  }
  return count;
}
