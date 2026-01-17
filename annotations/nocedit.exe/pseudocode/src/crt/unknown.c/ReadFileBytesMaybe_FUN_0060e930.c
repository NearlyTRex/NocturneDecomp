// Name: crt_unknown.c_ReadFileBytesMaybe_FUN_0060e930
// Address: 0060e930
// Address Range: [[0060e930, 0060eb38]]
// Convention: unknown
// Signature: undefined crt_unknown.c_ReadFileBytesMaybe_FUN_0060e930()

#include "nocturne.h"

/* Signature: byte unk_ReadFileBytesMaybe(uint param_1, uint param_2, uint
   param_3) */

uint crt_unknown_c_ReadFileBytesMaybe_FUN_0060e930
               (uint param_1,uint param_2,uint unaff_EBX,uint param_4,uint param_5
               ,char *param_6,DWORD param_7,uint param_8,uint param_9,int param_10)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  BOOL BVar4;
  DWORD DVar5;
  char *pcVar6;
  uint uVar7;
  DWORD unaff_ESI;
  uint unaff_EDI;
  HANDLE unaff_retaddr;
  
  if (((int)param_5 < 0) || (g_MaxHandleCount < param_5)) {
    crt_errno_c_setErrno_FUN_00602790(4);
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = crt_io_c_getFileTypeFlags_FUN_006088b0(param_5);
    if (uVar2 == 0) {
      crt_errno_c_setErrno_FUN_00602790(4);
      return 0xffffffff;
    }
    (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(param_5);
    if ((uVar2 & 1) == 0) {
      crt_errno_c_setErrno_FUN_00602790(6);
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(param_5);
      return 0xffffffff;
    }
    if ((uVar2 & 0x40) == 0) {
      uVar2 = 0;
      while( true ) {
        if ((g_SpecialDeviceReadFuncPtr == (SPECIAL_DEVICE_READ_FUNC *)0x0) ||
           (iVar3 = (*g_IsSpecialDeviceFuncPtr)(param_10), iVar3 == 0)) {
          BVar4 = (*g_ReadFileFunc)(unaff_retaddr,param_6,unaff_ESI,(LPDWORD)&stack0xfffffff4,
                                    (LPOVERLAPPED)0x0);
          if (BVar4 == 0) {
            (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(param_10);
            DVar5 = (*g_GetLastErrorFunc)();
            if (DVar5 == 0x6d) {
              return uVar2;
            }
            goto LAB_0060ea3a;
          }
        }
        else {
          unaff_EDI = (*g_SpecialDeviceReadFuncPtr)(iVar3,param_6,unaff_EBX);
        }
        if (unaff_EDI == 0) break;
        uVar7 = 0;
        iVar3 = 0;
        pcVar6 = param_6;
        if (unaff_EDI != 0) {
          do {
            if (*pcVar6 == '\x1a') {
              crt_stdio_c_lseek_FUN_00606690(param_10,(uVar7 - unaff_EDI) + 1,1);
              goto LAB_0060eb26;
            }
            if (*pcVar6 != '\r') {
              uVar2 = uVar2 + 1;
              pcVar1 = param_6 + iVar3;
              iVar3 = iVar3 + 1;
              *pcVar1 = *pcVar6;
            }
            uVar7 = uVar7 + 1;
            pcVar6 = pcVar6 + 1;
          } while (uVar7 < unaff_EDI);
        }
        unaff_ESI = unaff_ESI - iVar3;
        param_6 = param_6 + iVar3;
        if (((unaff_EBX & 0x2000) != 0) || (unaff_ESI == 0)) break;
      }
    }
    else {
      uVar2 = unaff_EDI;
      if ((g_SpecialDeviceReadFuncPtr == (SPECIAL_DEVICE_READ_FUNC *)0x0) ||
         (iVar3 = (*g_IsSpecialDeviceFuncPtr)(param_5), uVar2 = unaff_EDI, iVar3 == 0)) {
        BVar4 = (*g_ReadFileFunc)(unaff_retaddr,param_6,param_7,(LPDWORD)&stack0xfffffff4,
                                  (LPOVERLAPPED)0x0);
        if (BVar4 == 0) {
          (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(param_10);
          DVar5 = (*g_GetLastErrorFunc)();
          if (DVar5 == 0x6d) {
            return uVar2;
          }
LAB_0060ea3a:
          uVar2 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
          return uVar2;
        }
      }
      else {
        uVar2 = (*g_SpecialDeviceReadFuncPtr)(iVar3,param_6,param_7);
      }
    }
LAB_0060eb26:
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(param_10);
  }
  return uVar2;
}
