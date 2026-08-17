// Name: crt_unknown.c_ReadFileBytesMaybe_FUN_0060e930
// Address: 0060e930
// Address Range: [[0060e930, 0060eb38]]
// Convention: __cdecl
// Signature: uint __cdecl crt_unknown_c_ReadFileBytesMaybe_FUN_0060e930(uint param_1,char *param_2,DWORD param_3)

#include "nocturne.h"

uint __cdecl ReadFileBytesMaybe(uint param_1,char *param_2,DWORD param_3)

{
  uint uVar2;
  uint uVar1;
  int iVar3;
  BOOL BVar4;
  DWORD DVar5;
  DWORD DVar2;
  int iVar4;
  BOOL BVar5;
  char *pcVar6;
  uint unaff_EBX;
  uint uVar7;
  DWORD unaff_ESI;
  uint unaff_EDI;
  int in_stack_00000018;
  HANDLE unaff_retaddr;
  char *pcVar1;
  
  if (((int)param_1 < 0) || (g_MaxHandleCount < param_1)) {
    setErrno(4);
    uVar2 = 0xffffffff;
  }
  else {
    uVar1 = func_0x006088b0(param_1);
    if (uVar1 == 0) {
      setErrno(4);
      return 0xffffffff;
    }
    (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(param_1);
    if ((uVar1 & 1) == 0) {
      setErrno(6);
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(param_1);
      return 0xffffffff;
    }
    if ((uVar1 & 0x40) == 0) {
      uVar2 = 0;
      while( true ) {
        if ((g_SpecialDeviceReadFuncPtr == (SPECIAL_DEVICE_READ_FUNC *)0x0) ||
           (iVar4 = (*g_IsSpecialDeviceFuncPtr)(in_stack_00000018), iVar4 == 0)) {
          BVar5 = (*g_ReadFileFunc)(unaff_retaddr,param_2,unaff_ESI,(LPDWORD)&stack0xfffffff4,
                                    (LPOVERLAPPED)0x0);
          if (BVar5 == 0) {
            (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(in_stack_00000018);
            DVar2 = (*g_GetLastErrorFunc)();
            if (DVar2 == 0x6d) {
              return uVar2;
            }
            goto LAB_0060ea3a;
          }
        }
        else {
          unaff_EDI = (*g_SpecialDeviceReadFuncPtr)(iVar4,param_2,unaff_EBX);
        }
        if (unaff_EDI == 0) break;
        uVar7 = 0;
        iVar4 = 0;
        pcVar6 = param_2;
        if (unaff_EDI != 0) {
          do {
            if (*pcVar6 == '\x1a') {
              lseek(in_stack_00000018,(uVar7 - unaff_EDI) + 1,1);
              goto LAB_0060eb26;
            }
            if (*pcVar6 != '\r') {
              uVar2 = uVar2 + 1;
              pcVar1 = param_2 + iVar4;
              iVar4 = iVar4 + 1;
              *pcVar1 = *pcVar6;
            }
            uVar7 = uVar7 + 1;
            pcVar6 = pcVar6 + 1;
          } while (uVar7 < unaff_EDI);
        }
        unaff_ESI = unaff_ESI - iVar4;
        param_2 = param_2 + iVar4;
        if (((unaff_EBX & 0x2000) != 0) || (unaff_ESI == 0)) break;
      }
    }
    else {
      uVar2 = unaff_EDI;
      if ((g_SpecialDeviceReadFuncPtr == (SPECIAL_DEVICE_READ_FUNC *)0x0) ||
         (iVar3 = (*g_IsSpecialDeviceFuncPtr)(param_1), uVar2 = unaff_EDI, iVar3 == 0)) {
        BVar4 = (*g_ReadFileFunc)(unaff_retaddr,param_2,param_3,(LPDWORD)&stack0xfffffff4,
                                  (LPOVERLAPPED)0x0);
        if (BVar4 == 0) {
          (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(in_stack_00000018);
          DVar5 = (*g_GetLastErrorFunc)();
          if (DVar5 == 0x6d) {
            return uVar2;
          }
LAB_0060ea3a:
          DVar2 = __set_errno();
          return DVar2;
        }
      }
      else {
        uVar2 = (*g_SpecialDeviceReadFuncPtr)(iVar3,param_2,param_3);
      }
    }
LAB_0060eb26:
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(in_stack_00000018);
  }
  return uVar2;
}
