// Name: crt_io.c_write_FUN_006084ec
// Address: 006084ec
// Address Range: [[006084ec, 006088a0]]
// Convention: __cdecl
// Signature: int crt_io.c_write_FUN_006084ec(int fd, void * buffer, SIZE_T count)

#include "nocturne.h"

int __cdecl crt_io_c_write_FUN_006084ec(int fd,void *buffer,SIZE_T count)

{
  uint uVar1;
  DWORD DVar2;
  int iVar3;
  SIZE_T SVar4;
  BOOL BVar5;
  byte *puVar6;
  byte *puVar7;
  byte *puVar8;
  byte *puVar9;
  byte *puVar10;
  HANDLE hFile;
  uint uVar11;
  
  if ((fd < 0) || (g_MaxHandleCount < (uint)fd)) {
    crt_errno_c_setErrno_FUN_00602790(4);
    count = 0xffffffff;
  }
  else {
    hFile = g_IOControlBlock->standard_handles[fd];
    uVar1 = crt_io_c_getFileTypeFlags_FUN_006088b0(fd);
    if (uVar1 == 0) {
      crt_errno_c_setErrno_FUN_00602790(4);
      return -1;
    }
    if ((uVar1 & 2) == 0) {
      crt_errno_c_setErrno_FUN_00602790(6);
      return -1;
    }
    uVar11 = uVar1;
    (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(fd);
    if (((uVar1 & 0x80) == 0) ||
       (DVar2 = (*g_SetFilePointerFunc)(hFile,0,(PLONG)0x0,2), DVar2 != 0xffffffff)) {
      if (((uVar11 & 0x8000) != 0) &&
         (iVar3 = crt_io_c_extend_file_for_append_FUN_00608410(fd), iVar3 != 0)) {
        (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
        return -1;
      }
      if ((uVar11 & 0x40) == 0) {
        uVar1 = crt_stack_c_GetStackUsage_FUN_0060c260();
        if (uVar1 < 0xb0) {
                    /* WARNING: Subroutine does not return */
          crt_stack_c_stack_overflow_handler_FUN_005ffa22(uVar1);
        }
        puVar7 = (byte *)0x200;
        if (uVar1 < 0x230) {
          puVar7 = (byte *)0x80;
        }
        puVar6 = &stack0xfffffff0;
        puVar9 = (byte *)0x0;
        puVar8 = (byte *)0x0;
        if (count != 0) {
          do {
            if (*(char *)((int)buffer + (int)puVar9) == '\n') {
              (&stack0xfffffff0)[(int)puVar8] = 0xd;
              puVar8 = puVar8 + 1;
              if (puVar7 == puVar8) {
                if ((g_SpecialDeviceWriteFuncPtr == (SPECIAL_DEVICE_WRITE_FUNC *)0x0) ||
                   (iVar3 = (*g_IsSpecialDeviceFuncPtr)(fd), iVar3 == 0)) {
                  puVar8 = &stack0xffffffdc;
                  puVar9 = &stack0xfffffff0;
                  puVar10 = puVar7;
                  BVar5 = (*g_WriteFileFunc)(puVar8,&stack0xfffffff0,(DWORD)puVar7,(LPDWORD)puVar8,
                                             (LPOVERLAPPED)0x0);
                  if (BVar5 == 0) {
                    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
                    DVar2 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
                    return DVar2;
                  }
                }
                else {
                  puVar10 = (byte *)0x6086ed;
                  puVar8 = (byte *)
                           (*g_SpecialDeviceWriteFuncPtr)(iVar3,&stack0xfffffff0,(int)puVar7);
                }
                if (puVar7 != puVar8) {
                  crt_errno_c_setErrno_FUN_00602790(0xc);
                  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
                  return (int)(puVar10 + (int)puVar8);
                }
                puVar8 = (byte *)0x0;
              }
            }
            puVar8[(int)&stack0xfffffff0] = *(byte *)((int)buffer + (int)puVar9);
            puVar9 = puVar9 + 1;
            puVar8 = puVar8 + 1;
            if (puVar7 == puVar8) {
              if ((g_SpecialDeviceWriteFuncPtr == (SPECIAL_DEVICE_WRITE_FUNC *)0x0) ||
                 (iVar3 = (*g_IsSpecialDeviceFuncPtr)(fd), iVar3 == 0)) {
                puVar8 = &stack0xffffffdc;
                puVar9 = &stack0xfffffff0;
                puVar10 = puVar7;
                BVar5 = (*g_WriteFileFunc)(puVar8,&stack0xfffffff0,(DWORD)puVar7,(LPDWORD)puVar8,
                                           (LPOVERLAPPED)0x0);
                if (BVar5 == 0) {
                  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
                  DVar2 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
                  return DVar2;
                }
              }
              else {
                puVar10 = (byte *)0x608799;
                puVar8 = (byte *)
                         (*g_SpecialDeviceWriteFuncPtr)(iVar3,&stack0xfffffff0,(int)puVar7);
              }
              if (puVar7 != puVar8) {
                crt_errno_c_setErrno_FUN_00602790(0xc);
                (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
                return (int)(puVar10 + (int)puVar8);
              }
              puVar8 = (byte *)0x0;
            }
          } while (puVar9 < count);
        }
        if (puVar8 != (byte *)0x0) {
          puVar7 = puVar8;
          if ((g_SpecialDeviceWriteFuncPtr == (SPECIAL_DEVICE_WRITE_FUNC *)0x0) ||
             (iVar3 = (*g_IsSpecialDeviceFuncPtr)(fd), puVar7 = puVar8, iVar3 == 0)) {
            puVar8 = &stack0xffffffe0;
            BVar5 = (*g_WriteFileFunc)(puVar8,&stack0xfffffff0,(DWORD)puVar7,(LPDWORD)puVar8,
                                       (LPOVERLAPPED)0x0);
            if (BVar5 == 0) {
              (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
              DVar2 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
              return DVar2;
            }
          }
          else {
            puVar7 = (byte *)0x60883a;
            puVar6 = (byte *)
                     (*g_SpecialDeviceWriteFuncPtr)(iVar3,&stack0xfffffff0,(int)puVar8);
          }
          if (puVar6 != puVar8) {
            crt_errno_c_setErrno_FUN_00602790(0xc);
            (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
            return (int)(puVar7 + (int)puVar6);
          }
        }
      }
      else {
        if ((g_SpecialDeviceWriteFuncPtr == (SPECIAL_DEVICE_WRITE_FUNC *)0x0) ||
           (iVar3 = (*g_IsSpecialDeviceFuncPtr)(fd), iVar3 == 0)) {
          SVar4 = count;
          BVar5 = (*g_WriteFileFunc)(&stack0xffffffe4,buffer,count,(LPDWORD)&stack0xffffffe4,
                                     (LPOVERLAPPED)0x0);
          if (BVar5 == 0) {
            (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
            DVar2 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
            return DVar2;
          }
        }
        else {
          SVar4 = (*g_SpecialDeviceWriteFuncPtr)(iVar3,buffer,count);
        }
        if (SVar4 != count) {
          count = SVar4;
          crt_errno_c_setErrno_FUN_00602790(0xc);
        }
      }
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
    }
    else {
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
      count = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
    }
  }
  return count;
}
