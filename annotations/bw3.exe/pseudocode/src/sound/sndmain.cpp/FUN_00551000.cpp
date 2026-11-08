// Name: FUN_00551000
// Address: 00551000
// Address Range: [[00551000, 005513ed]]
// Convention: unknown
// Signature: undefined4 FUN_00551000(int *param_1,int *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00551000(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char cStack_88;
  char cStack_87;
  char cStack_86;
  char cStack_85;
  short sStack_24;
  ushort uStack_22;
  ushort uStack_20;
  uint uStack_1c;
  char cStack_18;
  char cStack_17;
  char cStack_16;
  char cStack_15;
  uint uStack_14;
  
  iVar1 = (**(code **)(*param_1 + 0x14))(param_1,*param_2,0);
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*param_1 + 0x10))(param_1,&cStack_18,8);
    if (iVar1 == 8) {
      if ((((cStack_18 == 'R') && (cStack_17 == 'I')) && (cStack_16 == 'F')) && (cStack_15 == 'F'))
      {
        iVar4 = uStack_14 + 8;
        iVar1 = (**(code **)(*param_1 + 0x10))(param_1,&cStack_88,4);
        if (iVar1 != 4) {
          return 0;
        }
        if (((cStack_88 == 'W') && (cStack_87 == 'A')) && ((cStack_86 == 'V' && (cStack_85 == 'E')))
           ) {
          iVar1 = 0xc;
          do {
            iVar3 = (**(code **)(*param_1 + 0x14))(param_1,*param_2 + iVar1,0);
            if (iVar3 == 0) {
              return 0;
            }
            iVar3 = (**(code **)(*param_1 + 0x10))(param_1,&cStack_18,8);
            if (iVar3 != 8) {
              return 0;
            }
            iVar1 = iVar1 + uStack_14 + 8;
            if (((cStack_18 == 'd') && (cStack_17 == 'a')) &&
               ((cStack_16 == 't' && (cStack_15 == 'a')))) {
              pcVar2 = "\"data\" chunk preceeds \"fmt\" chunk";
              goto LAB_00551052;
            }
            if (((cStack_18 == 'f') && (cStack_17 == 'm')) && (cStack_16 == 't')) {
              if (uStack_14 < 10) {
                pcVar2 = "File contains invalid \"fmt\" chunk";
                goto LAB_00551052;
              }
              iVar3 = (**(code **)(*param_1 + 0x10))(param_1,&sStack_24,10);
              if (iVar3 != 10) {
                return 0;
              }
              if (sStack_24 == 1) {
                *(uint *)(param_3 + 0x100) = 0;
              }
              else {
                if (sStack_24 != 0x20) {
                  FUN_005a28c0(&cStack_88,"Invalid \"fmt\" chunk tag: %04X",sStack_24);
                  pcVar2 = &cStack_88;
                  goto LAB_00551052;
                }
                *(uint *)(param_3 + 0x100) = 2;
              }
              *(uint *)(param_3 + 0x104) = 0;
              if ((uStack_22 == 0) || (2 < uStack_22)) {
                FUN_005a28c0(&cStack_88,"Invalid number of channels: %u  (must be 1 or 2)",uStack_22);
                pcVar2 = &cStack_88;
                goto LAB_00551052;
              }
              if (*(int *)(param_3 + 0x100) != 0) {
                if (*(int *)(param_3 + 0x100) == 2) {
                  *(uint *)(param_3 + 0x104) = 4;
                }
                else {
                  _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
                  _DAT_01d71de4 = 0x213;
                  FUN_004e4330("Hell froze");
                }
                goto LAB_005511ed;
              }
              if ((ushort)(uStack_22 * uStack_20) == (short)uStack_1c) {
                *(uint *)(param_3 + 0x104) = 8;
                goto LAB_005511ed;
              }
              if ((ushort)(uStack_22 * uStack_20 * 2) == (short)uStack_1c) {
                *(uint *)(param_3 + 0x104) = 0x10;
LAB_005511ed:
                do {
                  iVar3 = (**(code **)(*param_1 + 0x14))(param_1,*param_2 + iVar1,0);
                  if (iVar3 == 0) {
                    return 0;
                  }
                  iVar3 = (**(code **)(*param_1 + 0x10))(param_1,&cStack_18,8);
                  if (iVar3 != 8) {
                    return 0;
                  }
                  if (((cStack_18 == 'd') && (cStack_17 == 'a')) &&
                     ((cStack_16 == 't' && (cStack_15 == 'a')))) {
                    *param_2 = *param_2 + iVar1 + 8;
                    *(uint *)(param_3 + 0x108) = (uint)uStack_22;
                    if ((*(int *)(param_3 + 0x100) != 0) && (*(int *)(param_3 + 0x100) != 2)) {
                      _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
                      _DAT_01d71de4 = 0x238;
                      FUN_004e4330("Hell froze");
                    }
                    *(uint *)(param_3 + 0x110) =
                         (uStack_14 << 3) /
                         (uint)(*(int *)(param_3 + 0x104) * *(int *)(param_3 + 0x108));
                    *(uint *)(param_3 + 0x10c) = (uint)uStack_20;
                    return 1;
                  }
                  iVar1 = iVar1 + 8 + uStack_14;
                } while (iVar1 <= iVar4);
                pcVar2 = "No \"data\" chunk found";
              }
              else {
                FUN_005a28c0(&cStack_88,"Invalid bytes/sec value: %u (%04Xh)",uStack_1c & 0xffff,
                             uStack_1c & 0xffff);
                pcVar2 = &cStack_88;
              }
              goto LAB_00551052;
            }
          } while (iVar1 <= iVar4);
          pcVar2 = "Required \"fmt\" chunk not found";
        }
        else {
          pcVar2 = "\"WAVE\" ID not found at offset 00000008h";
        }
      }
      else {
        pcVar2 = "\"RIFF\" ID not found at offset 00000000h";
      }
LAB_00551052:
      FUN_0055a560("WAV file is invalid: %s\n",pcVar2);
      return 0;
    }
  }
  return 0;
}
