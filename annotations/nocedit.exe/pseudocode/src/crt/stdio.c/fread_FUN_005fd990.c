// Name: crt_stdio.c_fread_FUN_005fd990
// Address: 005fd990
// Address Range: [[005fd990, 005fdb86]]
// Convention: __cdecl
// Signature: SIZE_T __cdecl crt_stdio_c_fread_FUN_005fd990(void *buffer,SIZE_T size,SIZE_T count,_FILE *file)

#include "nocturne.h"

SIZE_T __cdecl _fread(void *buffer,SIZE_T size,SIZE_T count,_FILE *file)

{
  char cVar1;
  SIZE_T SVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  byte bVar9;
  uint uStack_14;
  
  bVar9 = 0;
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(file->_handle);
  if ((file->_flag & 1) == 0) {
    setErrno(4);
    *(byte *)&file->_flag = (byte)file->_flag | 0x20;
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
    SVar2 = 0;
  }
  else {
    uVar8 = count * size;
    if (uVar8 == 0) {
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
      return 0;
    }
    if (file->_link->__reserve_end == (char *)0x0) {
      InitializeFileBuffer(file);
    }
    uStack_14 = 0;
    if ((file->_flag & 0x40) == 0) {
      pcVar6 = buffer;
      do {
        if ((file->_cnt == 0) &&
           (iVar4 = FillInputBuffer(file), iVar4 == 0)) break;
        pcVar7 = file->_ptr;
        file->_cnt = file->_cnt + -1;
        file->_ptr = pcVar7 + 1;
        cVar1 = *pcVar7;
        if (cVar1 == '\r') {
          if ((file->_cnt == 0) &&
             (iVar4 = FillInputBuffer(file), iVar4 == 0)) break;
          file->_cnt = file->_cnt + -1;
          pcVar7 = file->_ptr;
          file->_ptr = pcVar7 + 1;
          cVar1 = *pcVar7;
        }
        if (cVar1 == '\x1a') {
          *(byte *)&file->_flag = (byte)file->_flag | 0x10;
          break;
        }
        pcVar7 = pcVar6 + 1;
        uStack_14 = uStack_14 + 1;
        *pcVar6 = cVar1;
        pcVar6 = pcVar7;
      } while (pcVar7 != (char *)(uVar8 + (int)buffer));
    }
    else {
      do {
        while( true ) {
          uVar3 = file->_cnt;
          if (uVar3 != 0) {
            if (uVar8 < uVar3) {
              uVar3 = uVar8;
            }
            pcVar6 = file->_ptr;
            pcVar7 = buffer;
            for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(uint *)pcVar7 = *(uint *)pcVar6;
              pcVar6 = pcVar6 + ((uint)bVar9 * -2 + 1) * 4;
              pcVar7 = pcVar7 + ((uint)bVar9 * -2 + 1) * 4;
            }
            for (uVar5 = uVar3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *pcVar7 = *pcVar6;
              pcVar6 = pcVar6 + (uint)bVar9 * -2 + 1;
              pcVar7 = pcVar7 + (uint)bVar9 * -2 + 1;
            }
            uVar8 = uVar8 - uVar3;
            buffer = (void *)((int)buffer + uVar3);
            uStack_14 = uStack_14 + uVar3;
            file->_ptr = file->_ptr + uVar3;
            file->_cnt = file->_cnt - uVar3;
          }
          if (uVar8 == 0) goto LAB_005fdb69;
          if ((uVar8 < file->_bufsize) && ((file->_flag & 0x400) == 0)) break;
          file->_ptr = file->_link->__reserve_end;
          file->_cnt = 0;
          uVar3 = uVar8;
          if (((file->_flag & 0x400) == 0) && (0x200 < uVar8)) {
            uVar3 = (uVar8 >> 8 & 0xfffffe) << 8;
          }
          iVar4 = ReadFileWithDeviceAbstraction(file->_handle,buffer,uVar3)
          ;
          if (iVar4 == -1) {
            *(byte *)&file->_flag = (byte)file->_flag | 0x20;
            goto LAB_005fdb69;
          }
          if (iVar4 == 0) {
            *(byte *)&file->_flag = (byte)file->_flag | 0x10;
            goto LAB_005fdb69;
          }
          buffer = (void *)((int)buffer + iVar4);
          uVar8 = uVar8 - iVar4;
          uStack_14 = uStack_14 + iVar4;
        }
        iVar4 = FillInputBuffer(file);
      } while (iVar4 != 0);
    }
LAB_005fdb69:
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
    SVar2 = uStack_14 / size;
  }
  return SVar2;
}
