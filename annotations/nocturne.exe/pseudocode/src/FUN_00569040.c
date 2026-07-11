// Name: FUN_00569040
// Address: 00569040
// Address Range: [[00569040, 00569466]]
// Convention: unknown
// Signature: undefined4 FUN_00569040(undefined4 param_1,char *param_2,int *param_3,code *param_4)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

uint FUN_00569040(uint param_1,char *param_2,int *param_3,code *param_4)

{
  char cVar1;
  undefined6 *puVar2;
  uint *puVar3;
  ushort uVar4;
  byte *puVar5;
  ulonglong uVar6;
  uint local_88;
  int iStack_84;
  uint local_78;
  char cStack_73;
  char cStack_72;
  ushort local_6c;
  ushort local_6a;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  byte auStack_50 [40];
  int iStack_28;
  int iStack_24;
  byte *puStack_20;
  uint uStack_1c;
  byte local_18 [4];
  
  local_18[0] = 0;
  local_6a = 0;
  local_6c = 100;
  local_78 = 0;
  cVar1 = *param_2;
  local_88 = param_1;
  do {
    if (cVar1 == '\0') {
      return local_78;
    }
LAB_00569090:
    while( true ) {
      cVar1 = *param_2;
      param_2 = param_2 + 1;
      if (cVar1 == '%') break;
      (*param_4)(&local_88,cVar1);
LAB_00569431:
      if (*param_2 == '\0') {
        return local_78;
      }
    }
    iStack_28 = *param_3;
    param_2 = (char *)FUN_00569468(param_2,&iStack_28,&local_88);
    *param_3 = iStack_28;
    cStack_73 = *param_2;
    param_2 = param_2 + 1;
    if (cStack_73 == '\0') {
      return local_78;
    }
    if (cStack_73 != 'n') {
      iStack_24 = *param_3;
      uVar6 = FUN_00569928(auStack_50,&iStack_24,&local_88,local_18);
      uStack_1c = (uint)((ulonglong)uVar6 >> 0x20);
      puVar5 = (byte *)uVar6;
      *param_3 = iStack_24;
      iStack_84 = iStack_84 -
                  (iStack_68 + iStack_64 + iStack_60 + iStack_5c + iStack_58 + iStack_54);
      if (((local_6a & 8) == 0) && (cStack_72 == ' ')) {
        for (; 0 < iStack_84; iStack_84 = iStack_84 + -1) {
          (*param_4)(&local_88,0x20);
        }
      }
      puStack_20 = auStack_50;
      for (; 0 < iStack_68; iStack_68 = iStack_68 + -1) {
        (*param_4)(&local_88,*puStack_20);
        puStack_20 = puStack_20 + 1;
      }
      while( true ) {
        if (iStack_64 < 1) break;
        (*param_4)(&local_88,0x30);
        iStack_64 = iStack_64 + -1;
      }
      if (cStack_73 == 's') {
        if ((local_6a & 0x20) == 0) {
          for (; 0 < iStack_60; iStack_60 = iStack_60 + -1) {
            (*param_4)(&local_88,*puVar5);
            puVar5 = puVar5 + 1;
          }
        }
        else {
          FUN_005698b0(puVar5,uStack_1c & 0xffff,&local_88,param_4);
        }
      }
      else if (cStack_73 == 'S') {
        FUN_005698b0(puVar5,uStack_1c & 0xffff,&local_88,param_4);
      }
      else {
        for (; 0 < iStack_60; iStack_60 = iStack_60 + -1) {
          (*param_4)(&local_88,*puVar5);
          puVar5 = puVar5 + 1;
        }
      }
      for (; 0 < iStack_5c; iStack_5c = iStack_5c + -1) {
        (*param_4)(&local_88,0x30);
      }
      for (; 0 < iStack_58; iStack_58 = iStack_58 + -1) {
        (*param_4)(&local_88,*puVar5);
        puVar5 = puVar5 + 1;
      }
      for (; 0 < iStack_54; iStack_54 = iStack_54 + -1) {
        (*param_4)(&local_88,0x30);
      }
      if ((local_6a & 8) != 0) {
        for (; 0 < iStack_84; iStack_84 = iStack_84 + -1) {
          (*param_4)(&local_88,0x20);
        }
      }
      goto LAB_00569431;
    }
    if ((local_6a & 0x20) == 0) {
      if ((local_6a & 0x10) == 0) {
        if ((local_6a & 0x80) == 0) {
          if ((local_6a & 0x40) == 0) {
            puVar3 = (uint *)*param_3;
            *param_3 = (int)(puVar3 + 1);
            *(uint *)*puVar3 = local_78;
            if (*param_2 == '\0') {
              return local_78;
            }
          }
          else {
            puVar3 = (uint *)*param_3;
            *param_3 = (int)(puVar3 + 1);
            *(uint *)*puVar3 = local_78;
            if (*param_2 == '\0') {
              return local_78;
            }
          }
        }
        else {
          puVar2 = (undefined6 *)*param_3;
          *param_3 = (int)(puVar2 + 1);
          *(uint *)*puVar2 = local_78;
          if (*param_2 == '\0') {
            return local_78;
          }
        }
      }
      else {
        uVar4 = (ushort)local_78;
        if ((local_6a & 0x80) == 0) {
          if ((local_6a & 0x40) == 0) {
            puVar3 = (uint *)*param_3;
            *param_3 = (int)(puVar3 + 1);
            *(ushort *)*puVar3 = uVar4;
            if (*param_2 == '\0') {
              return local_78;
            }
          }
          else {
            puVar3 = (uint *)*param_3;
            *param_3 = (int)(puVar3 + 1);
            *(ushort *)*puVar3 = uVar4;
            if (*param_2 == '\0') {
              return local_78;
            }
          }
        }
        else {
          puVar2 = (undefined6 *)*param_3;
          *param_3 = (int)(puVar2 + 1);
          *(ushort *)*puVar2 = uVar4;
          if (*param_2 == '\0') {
            return local_78;
          }
        }
      }
      goto LAB_00569090;
    }
    if ((local_6a & 0x80) == 0) {
      if ((local_6a & 0x40) == 0) {
        puVar3 = (uint *)*param_3;
        *param_3 = (int)(puVar3 + 1);
        *(uint *)*puVar3 = local_78;
        cVar1 = *param_2;
      }
      else {
        puVar3 = (uint *)*param_3;
        *param_3 = (int)(puVar3 + 1);
        *(uint *)*puVar3 = local_78;
        cVar1 = *param_2;
      }
    }
    else {
      puVar2 = (undefined6 *)*param_3;
      *param_3 = (int)(puVar2 + 1);
      *(uint *)*puVar2 = local_78;
      cVar1 = *param_2;
    }
  } while( true );
}
