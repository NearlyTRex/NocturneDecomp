// Name: crt_stdio.c_fwrite_FUN_00563a50
// Address: 00563a50
// Address Range: [[00563a50, 00563c88]]
// Convention: __cdecl
// Signature: SIZE_T __cdecl crt_stdio_c_fwrite_FUN_00563a50(void *ptr,SIZE_T size,SIZE_T count,_FILE *file)

#include "nocturne.h"

SIZE_T __cdecl _fwrite(void *ptr,SIZE_T size,SIZE_T count,_FILE *file)

{
  byte bVar1;
  SIZE_T SVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte bVar7;
  uint uVar6;
  char *pcVar8;
  char *pcVar9;
  bool bVar10;
  char *in_stack_ffffffe0;
  int in_stack_ffffffe4;
  SIZE_T in_stack_ffffffe8;
  uint uVar11;
  uint uStack_14;
  
  bVar7 = 0;
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac0)(file->_handle);
  if ((file->_flag & 2) == 0) {
    setErrno(4);
    *(byte *)&file->_flag = (byte)file->_flag | 0x20;
    (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(file->_handle);
    SVar2 = 0;
  }
  else {
    uStack_14 = count * size;
    if (uStack_14 == 0) {
      (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(file->_handle);
      return 0;
    }
    if (file->_link->__reserve_end == (char *)0x0) {
      _setvbuf(file,in_stack_ffffffe0,in_stack_ffffffe4,in_stack_ffffffe8)
      ;
    }
    bVar1 = (byte)file->_flag;
    uVar3 = file->_flag & 0x30;
    uVar11 = 0;
    *(byte *)&file->_flag = bVar1 & 0xcf;
    if ((bVar1 & 0x40) == 0) {
      bVar7 = *(byte *)((int)&file->_flag + 1);
      bVar10 = (bVar7 & 4) != 0;
      if (bVar10) {
        bVar7 = bVar7 & 0xfa;
        *(byte *)((int)&file->_flag + 1) = bVar7;
        *(byte *)((int)&file->_flag + 1) = bVar7 | 1;
      }
      pcVar8 = file->_link->__get_base;
      file->_link->__get_base = (char *)0x1;
      do {
        bVar7 = *(byte *)ptr;
        ptr = (void *)((int)ptr + 1);
        _fputc((uint)bVar7,file);
        if ((file->_flag & 0x30) != 0) break;
        uVar11 = uVar11 + 1;
      } while (uStack_14 - uVar11 != 0);
      file->_link->__get_base = pcVar8;
      if (bVar10) {
        bVar7 = *(byte *)((int)&file->_flag + 1) & 0xfa;
        *(byte *)((int)&file->_flag + 1) = bVar7;
        *(byte *)((int)&file->_flag + 1) = bVar7 | 4;
        FUN_00568890(file);
      }
    }
    else {
      do {
        if ((file->_cnt == 0) && (file->_bufsize <= uStack_14)) {
          uVar4 = uStack_14 >> 8 & 0xfffffe;
          uVar6 = uVar4 << 8;
          if (uVar4 == 0) {
            uVar6 = uStack_14;
          }
          uVar4 = FUN_00569fb0(file->_handle,ptr,uVar6);
          if (uVar4 != 0xffffffff) {
            if (uVar4 != 0) goto LAB_00563ba0;
            iVar5 = (*(code *)PTR_crt_thread_c_GetTLS_FUN_005671dc_005c1abc)();
            *(uint *)(iVar5 + 4) = 0xc;
          }
          *(byte *)&file->_flag = (byte)file->_flag | 0x20;
        }
        else {
          uVar4 = file->_bufsize - file->_cnt;
          if (uStack_14 < uVar4) {
            uVar4 = uStack_14;
          }
          pcVar8 = ptr;
          pcVar9 = file->_ptr;
          for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(uint *)pcVar9 = *(uint *)pcVar8;
            pcVar8 = pcVar8 + ((uint)bVar7 * -2 + 1) * 4;
            pcVar9 = pcVar9 + ((uint)bVar7 * -2 + 1) * 4;
          }
          for (uVar6 = uVar4 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pcVar9 = *pcVar8;
            pcVar8 = pcVar8 + (uint)bVar7 * -2 + 1;
            pcVar9 = pcVar9 + (uint)bVar7 * -2 + 1;
          }
          bVar1 = *(byte *)((int)&file->_flag + 1);
          file->_ptr = file->_ptr + uVar4;
          file->_cnt = file->_cnt + uVar4;
          *(byte *)((int)&file->_flag + 1) = bVar1 | 0x10;
          if ((file->_cnt == file->_bufsize) || ((file->_flag & 0x400) != 0)) {
            FUN_00568890(file);
          }
        }
LAB_00563ba0:
        ptr = (void *)((int)ptr + uVar4);
        uVar11 = uVar11 + uVar4;
        uStack_14 = uStack_14 - uVar4;
      } while ((uStack_14 != 0) && ((file->_flag & 0x20) == 0));
    }
    if ((file->_flag & 0x20) != 0) {
      uVar11 = 0;
    }
    file->_flag = file->_flag | uVar3;
    (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(file->_handle);
    SVar2 = uVar11 / size;
  }
  return SVar2;
}
