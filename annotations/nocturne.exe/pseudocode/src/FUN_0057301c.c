// Name: FUN_0057301c
// Address: 0057301c
// Address Range: [[0057301c, 005733d0]]
// Convention: unknown
// Signature: DWORD FUN_0057301c(uint param_1,LPCVOID param_2,DWORD param_3)

#include "nocturne.h"

DWORD FUN_0057301c(uint param_1,LPCVOID param_2,DWORD param_3)

{
  uint uVar1;
  DWORD DVar2;
  int iVar3;
  BOOL BVar4;
  DWORD local_24;
  DWORD local_20;
  DWORD local_1c;
  HANDLE local_18;
  uint local_14;
  
  if (((int)param_1 < 0) || (0x00000014 < param_1)) {
    FUN_00568e80(4);
    param_3 = 0xffffffff;
  }
  else {
    local_18 = *(HANDLE *)(DAT_005c1f54 + param_1 * 4);
    uVar1 = FUN_0056f220(param_1);
    local_14 = uVar1;
    if (uVar1 == 0) {
      FUN_00568e80(4);
      return 0xffffffff;
    }
    if ((uVar1 & 2) == 0) {
      FUN_00568e80(6);
      return 0xffffffff;
    }
    (*(code *)PTR_FUN_005c1ac0)(param_1);
    if (((uVar1 & 0x80) == 0) ||
       (DVar2 = SetFilePointer(local_18,0,(PLONG)0x0,2), DVar2 != 0xffffffff)) {
      if (((local_14 & 0x8000) != 0) && (iVar3 = FUN_00572f40(param_1), iVar3 != 0)) {
        (*(code *)PTR_FUN_005c1ac4)(param_1);
        return 0xffffffff;
      }
      if ((local_14 & 0x40) == 0) {
        local_20 = FUN_00571150();
        if (local_20 < 0xb0) {
          FUN_005670e0();
        }
        DVar2 = 0x200;
        if (local_20 < 0x230) {
          DVar2 = 0x80;
        }
        local_20 = 0;
        local_24 = 0;
        local_1c = 0;
        if (param_3 != 0) {
          do {
            if (*(char *)((int)param_2 + local_20) == '\n') {
              *(byte *)((int)&local_24 + local_24) = 0xd;
              local_24 = local_24 + 1;
              if (DVar2 == local_24) {
                if ((DAT_005c1d80 == (code *)0x0) || (iVar3 = (*DAT_005c1d54)(param_1), iVar3 == 0))
                {
                  BVar4 = WriteFile(local_18,&local_24,DVar2,&local_24,(LPOVERLAPPED)0x0);
                  if (BVar4 == 0) {
                    (*(code *)PTR_FUN_005c1ac4)(param_1);
                    DVar2 = FUN_0056c73c();
                    return DVar2;
                  }
                }
                else {
                  local_24 = (*DAT_005c1d80)(iVar3,&local_24,DVar2);
                }
                if (DVar2 != local_24) {
                  FUN_00568e80(0xc);
                  (*(code *)PTR_FUN_005c1ac4)(param_1);
                  return local_1c + local_24;
                }
                local_1c = local_20;
                local_24 = 0;
              }
            }
            *(byte *)((int)&local_24 + local_24) = *(byte *)((int)param_2 + local_20);
            local_20 = local_20 + 1;
            local_24 = local_24 + 1;
            if (DVar2 == local_24) {
              if ((DAT_005c1d80 == (code *)0x0) || (iVar3 = (*DAT_005c1d54)(param_1), iVar3 == 0)) {
                BVar4 = WriteFile(local_18,&local_24,DVar2,&local_24,(LPOVERLAPPED)0x0);
                if (BVar4 == 0) {
                  (*(code *)PTR_FUN_005c1ac4)(param_1);
                  DVar2 = FUN_0056c73c();
                  return DVar2;
                }
              }
              else {
                local_24 = (*DAT_005c1d80)(iVar3,&local_24,DVar2);
              }
              if (DVar2 != local_24) {
                FUN_00568e80(0xc);
                (*(code *)PTR_FUN_005c1ac4)(param_1);
                return local_1c + local_24;
              }
              local_1c = local_20;
              local_24 = 0;
            }
          } while (local_20 < param_3);
        }
        if (local_24 != 0) {
          if ((DAT_005c1d80 == (code *)0x0) || (iVar3 = (*DAT_005c1d54)(param_1), iVar3 == 0)) {
            BVar4 = WriteFile(local_18,&local_24,local_24,&local_20,(LPOVERLAPPED)0x0);
            if (BVar4 == 0) {
              (*(code *)PTR_FUN_005c1ac4)(param_1);
              DVar2 = FUN_0056c73c();
              return DVar2;
            }
          }
          else {
            local_20 = (*DAT_005c1d80)(iVar3,&local_24,local_24);
          }
          if (local_20 != local_24) {
            FUN_00568e80(0xc);
            (*(code *)PTR_FUN_005c1ac4)(param_1);
            return local_1c + local_20;
          }
        }
      }
      else {
        if ((DAT_005c1d80 == (code *)0x0) || (iVar3 = (*DAT_005c1d54)(param_1), iVar3 == 0)) {
          BVar4 = WriteFile(local_18,param_2,param_3,&local_1c,(LPOVERLAPPED)0x0);
          if (BVar4 == 0) {
            (*(code *)PTR_FUN_005c1ac4)(param_1);
            DVar2 = FUN_0056c73c();
            return DVar2;
          }
        }
        else {
          local_1c = (*DAT_005c1d80)(iVar3,param_2,param_3);
        }
        if (local_1c != param_3) {
          FUN_00568e80(0xc);
          param_3 = local_1c;
        }
      }
      (*(code *)PTR_FUN_005c1ac4)(param_1);
    }
    else {
      (*(code *)PTR_FUN_005c1ac4)(param_1);
      param_3 = FUN_0056c73c();
    }
  }
  return param_3;
}
