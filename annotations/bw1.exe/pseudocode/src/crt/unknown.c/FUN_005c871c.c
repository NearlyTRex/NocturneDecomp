// Name: crt_unknown.c_FUN_005c871c
// Address: 005c871c
// Address Range: [[005c871c, 005c8ad0]]
// Convention: unknown
// Signature: DWORD crt_unknown_c_FUN_005c871c(uint param_1,LPCVOID param_2,DWORD param_3)

#include "nocturne.h"

DWORD FUN_005c871c(uint param_1,LPCVOID param_2,DWORD param_3)

{
  uint uVar1;
  DWORD DVar2;
  int iVar3;
  BOOL BVar4;
  DWORD DStack_24;
  DWORD DStack_20;
  DWORD DStack_1c;
  HANDLE pvStack_18;
  uint uStack_14;
  
  if (((int)param_1 < 0) || (0x00000014 < param_1)) {
    setErrno(4);
    param_3 = 0xffffffff;
  }
  else {
    pvStack_18 = *(HANDLE *)(DAT_00626838 + param_1 * 4);
    uVar1 = FUN_005c8ae0(param_1);
    uStack_14 = uVar1;
    if (uVar1 == 0) {
      setErrno(4);
      return 0xffffffff;
    }
    if ((uVar1 & 2) == 0) {
      setErrno(6);
      return 0xffffffff;
    }
    (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626600)(param_1);
    if (((uVar1 & 0x80) == 0) ||
       (DVar2 = SetFilePointer(pvStack_18,0,(PLONG)0x0,2), DVar2 != 0xffffffff)) {
      if (((uStack_14 & 0x8000) != 0) && (iVar3 = FUN_005c8640(param_1), iVar3 != 0))
      {
        (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626604)(param_1);
        return 0xffffffff;
      }
      if ((uStack_14 & 0x40) == 0) {
        DStack_20 = unkafter_zombie_cpp_FUN_005cc370();
        if (DStack_20 < 0xb0) {
          FUN_005c31b6();
        }
        DVar2 = 0x200;
        if (DStack_20 < 0x230) {
          DVar2 = 0x80;
        }
        DStack_20 = 0;
        DStack_24 = 0;
        DStack_1c = 0;
        if (param_3 != 0) {
          do {
            if (*(char *)((int)param_2 + DStack_20) == '\n') {
              *(byte *)((int)&DStack_24 + DStack_24) = 0xd;
              DStack_24 = DStack_24 + 1;
              if (DVar2 == DStack_24) {
                if ((DAT_006267a0 == (code *)0x0) || (iVar3 = (*DAT_00626774)(param_1), iVar3 == 0))
                {
                  BVar4 = WriteFile(pvStack_18,&DStack_24,DVar2,&DStack_24,(LPOVERLAPPED)0x0);
                  if (BVar4 == 0) {
                    (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626604)(param_1);
                    DVar2 = FUN_005c862c();
                    return DVar2;
                  }
                }
                else {
                  DStack_24 = (*DAT_006267a0)(iVar3,&DStack_24,DVar2);
                }
                if (DVar2 != DStack_24) {
                  setErrno(0xc);
                  (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626604)(param_1);
                  return DStack_1c + DStack_24;
                }
                DStack_1c = DStack_20;
                DStack_24 = 0;
              }
            }
            *(byte *)((int)&DStack_24 + DStack_24) = *(byte *)((int)param_2 + DStack_20)
            ;
            DStack_20 = DStack_20 + 1;
            DStack_24 = DStack_24 + 1;
            if (DVar2 == DStack_24) {
              if ((DAT_006267a0 == (code *)0x0) || (iVar3 = (*DAT_00626774)(param_1), iVar3 == 0)) {
                BVar4 = WriteFile(pvStack_18,&DStack_24,DVar2,&DStack_24,(LPOVERLAPPED)0x0);
                if (BVar4 == 0) {
                  (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626604)(param_1);
                  DVar2 = FUN_005c862c();
                  return DVar2;
                }
              }
              else {
                DStack_24 = (*DAT_006267a0)(iVar3,&DStack_24,DVar2);
              }
              if (DVar2 != DStack_24) {
                setErrno(0xc);
                (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626604)(param_1);
                return DStack_1c + DStack_24;
              }
              DStack_1c = DStack_20;
              DStack_24 = 0;
            }
          } while (DStack_20 < param_3);
        }
        if (DStack_24 != 0) {
          if ((DAT_006267a0 == (code *)0x0) || (iVar3 = (*DAT_00626774)(param_1), iVar3 == 0)) {
            BVar4 = WriteFile(pvStack_18,&DStack_24,DStack_24,&DStack_20,(LPOVERLAPPED)0x0);
            if (BVar4 == 0) {
              (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626604)(param_1);
              DVar2 = FUN_005c862c();
              return DVar2;
            }
          }
          else {
            DStack_20 = (*DAT_006267a0)(iVar3,&DStack_24,DStack_24);
          }
          if (DStack_20 != DStack_24) {
            setErrno(0xc);
            (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626604)(param_1);
            return DStack_1c + DStack_20;
          }
        }
      }
      else {
        if ((DAT_006267a0 == (code *)0x0) || (iVar3 = (*DAT_00626774)(param_1), iVar3 == 0)) {
          BVar4 = WriteFile(pvStack_18,param_2,param_3,&DStack_1c,(LPOVERLAPPED)0x0);
          if (BVar4 == 0) {
            (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626604)(param_1);
            DVar2 = FUN_005c862c();
            return DVar2;
          }
        }
        else {
          DStack_1c = (*DAT_006267a0)(iVar3,param_2,param_3);
        }
        if (DStack_1c != param_3) {
          setErrno(0xc);
          param_3 = DStack_1c;
        }
      }
      (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626604)(param_1);
    }
    else {
      (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626604)(param_1);
      param_3 = FUN_005c862c();
    }
  }
  return param_3;
}
