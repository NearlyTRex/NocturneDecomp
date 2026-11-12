// Name: support_trstream.cpp_FUN_005726f0
// Address: 005726f0
// Address Range: [[005726f0, 00573783]]
// Convention: unknown
// Signature: int support_trstream_cpp_FUN_005726f0(int *param_1,byte *param_2,int *param_3)

#include "nocturne.h"

int support_trstream_cpp_FUN_005726f0(int *param_1,byte *param_2,int *param_3)

{
  byte *pbVar1;
  uint *puVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  uint uStack_e8;
  uint uStack_e4;
  char cStack_e0;
  char acStack_df [99];
  byte abStack_7c [32];
  double dStack_5c;
  uint uStack_54;
  uint uStack_50;
  int iStack_4c;
  int iStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  uint uStack_18;
  int iStack_14;
  
  iStack_2c = 0;
  uStack_18 = 0;
  iStack_14 = 0;
  iStack_28 = 0;
  uVar4 = uStack_18;
  if (*param_2 != 0) {
    while (uVar4 = uStack_18, uStack_18 == 0) {
      pbVar8 = param_2 + 1;
      if (((&DAT_006074b8)[(byte)(*param_2 + 1)] & 2) != 0) {
        uVar4 = support_trstream_cpp_FUN_00573830(param_1);
        if (-1 < (int)uVar4) {
          iStack_14 = iStack_14 + uVar4;
          param_2 = pbVar8;
          uVar4 = uStack_18;
          goto LAB_0057275f;
        }
        break;
      }
      if ((*param_2 != 0x25) || (param_2 = pbVar8, *pbVar8 == 0x25)) {
        uVar4 = (**(code **)(*param_1 + 4))(param_1);
        if (uVar4 == *param_2) {
          iStack_14 = iStack_14 + 1;
          param_2 = param_2 + 1;
          uVar4 = uStack_18;
          goto LAB_0057275f;
        }
        if ((-1 < (int)uVar4) &&
           (iVar5 = (**(code **)(*param_1 + 8))(param_1,uVar4), uVar4 = uStack_18, iVar5 == 0)) {
          return -1;
        }
        break;
      }
      iStack_4c = 0;
      iStack_24 = 0;
      iStack_48 = 0;
      uStack_50 = 0;
      bVar3 = *pbVar8;
      iStack_20 = 1;
      uVar12 = 0x7fffffff;
      while (bVar3 != 0) {
        uVar14 = (uint)*pbVar8;
        uVar4 = uVar12;
        if (uVar14 < 0x4c) {
          if (uVar14 < 0x2a) {
LAB_00572868:
            if (((&DAT_006074b8)[(byte)(*pbVar8 + 1)] & 0x20) == 0) break;
            uVar4 = uVar14 - 0x30;
            uVar14 = uStack_50;
            if (uVar12 != 0x7fffffff) {
              uVar4 = uVar12 * 10 + uVar4;
            }
          }
          else if (uVar14 < 0x2b) {
            iStack_20 = 0;
            uVar14 = uStack_50;
          }
          else if (uVar14 != 0x46) goto LAB_00572868;
        }
        else if (0x4c < uVar14) {
          if (uVar14 < 0x68) {
            if (uVar14 != 0x4e) goto LAB_00572868;
          }
          else if ((0x68 < uVar14) && (uVar14 != 0x6c)) goto LAB_00572868;
        }
        uStack_50 = uVar14;
        pbVar1 = pbVar8 + 1;
        pbVar8 = pbVar8 + 1;
        uVar12 = uVar4;
        bVar3 = *pbVar1;
      }
      uStack_38 = (uint)*pbVar8;
      param_2 = pbVar8 + 1;
      uVar14 = uVar12;
      uVar4 = uStack_18;
      switch(uStack_38) {
      case 0x44:
      case 100:
        iStack_1c = 10;
        goto LAB_005728be;
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x65:
      case 0x66:
      case 0x67:
        uVar4 = support_trstream_cpp_FUN_00573830(param_1);
        if (-1 < (int)uVar4) {
          iStack_14 = iStack_14 + uVar4;
          pcVar10 = &cStack_e0;
          if (uVar12 < 100) {
            if ((int)uVar12 < 1) goto LAB_005732d7;
          }
          else {
            uVar12 = 99;
          }
          uStack_44 = (**(code **)(*param_1 + 4))(param_1);
          uVar4 = uStack_44;
          if (-1 < (int)uStack_44) {
            iVar5 = iStack_14 + 1;
            iStack_34 = iVar5;
            if (uStack_44 == 0x2d) {
              pcVar10 = acStack_df;
              cStack_e0 = '-';
            }
            else if (uStack_44 != 0x2b) {
              iVar5 = (**(code **)(*param_1 + 8))(param_1,uStack_44);
              if (iVar5 != 0) goto LAB_005732d7;
              uStack_18 = 0xfffffffe;
              uVar4 = uStack_18;
              break;
            }
            while( true ) {
              uVar12 = uVar12 - 1;
              iStack_14 = iVar5;
LAB_005732d7:
              uVar4 = uStack_18;
              if (((int)uVar12 < 1) ||
                 (uStack_44 = (**(code **)(*param_1 + 4))(param_1), uVar4 = uStack_44,
                 (int)uStack_44 < 0)) goto LAB_0057337f;
              if (((&DAT_006074b8)[(byte)((byte)uStack_44 + 1)] & 0x20) == 0) break;
              iStack_48 = 1;
              *pcVar10 = (byte)uStack_44;
              iVar5 = iStack_14 + 1;
              pcVar10 = pcVar10 + 1;
            }
            iVar5 = (**(code **)(*param_1 + 8))(param_1,uStack_44);
            uVar4 = uStack_18;
            if (iVar5 == 0) {
              uStack_18 = 0xfffffffe;
              uVar4 = uStack_18;
            }
            else {
LAB_0057337f:
              uStack_18 = uVar4;
              uVar4 = uStack_18;
              if (-2 < (int)uStack_18) {
                if ((0 < (int)uVar12) &&
                   (uStack_44 = (**(code **)(*param_1 + 4))(param_1), uVar4 = uStack_44,
                   -1 < (int)uStack_44)) {
                  if (uStack_44 == 0x2e) {
                    *pcVar10 = '.';
                    while( true ) {
                      uVar12 = uVar12 - 1;
                      iStack_14 = iStack_14 + 1;
                      pcVar10 = pcVar10 + 1;
                      uVar4 = uStack_18;
                      if (((int)uVar12 < 1) ||
                         (uStack_44 = (**(code **)(*param_1 + 4))(param_1), uVar4 = uStack_44,
                         (int)uStack_44 < 0)) goto LAB_00573442;
                      if (((&DAT_006074b8)[(byte)((byte)uStack_44 + 1)] & 0x20) == 0) break;
                      *pcVar10 = (byte)uStack_44;
                      iStack_48 = 1;
                    }
                    iVar5 = (**(code **)(*param_1 + 8))(param_1,uStack_44);
                    uVar4 = uStack_18;
                    if (iVar5 == 0) {
                      uStack_18 = 0xfffffffe;
                      uVar4 = uStack_18;
                      break;
                    }
                  }
                  else {
                    iVar5 = (**(code **)(*param_1 + 8))(param_1,uStack_44);
                    uVar4 = uStack_18;
                    if (iVar5 == 0) {
                      uStack_18 = 0xfffffffe;
                      uVar4 = uStack_18;
                      break;
                    }
                  }
                }
LAB_00573442:
                uStack_18 = uVar4;
                uVar4 = uStack_18;
                if (-2 < (int)uStack_18) {
                  pcVar11 = pcVar10;
                  if (((iStack_48 != 0) && (0 < (int)uVar12)) &&
                     (uStack_54 = (**(code **)(*param_1 + 4))(param_1), uStack_44 = uStack_54,
                     uVar4 = uStack_54, -1 < (int)uStack_54)) {
                    iVar5 = toupper(uStack_54);
                    if (iVar5 == 0x45) {
                      *pcVar10 = (byte)uStack_44;
                      iVar15 = uVar12 - 1;
                      iStack_14 = iStack_14 + 1;
                      pcVar11 = pcVar10 + 1;
                      iVar5 = iVar15;
                      iVar9 = iStack_14;
                      if (0 < iVar15) {
                        uStack_44 = (**(code **)(*param_1 + 4))(param_1);
                        uVar4 = uStack_44;
                        if ((int)uStack_44 < 0) break;
                        iStack_30 = iStack_14 + 1;
                        iVar5 = uVar12 - 2;
                        if (uStack_44 == 0x2d) {
                          pcVar11 = pcVar10 + 2;
                          pcVar10[1] = '-';
                          iVar9 = iStack_30;
                        }
                        else {
                          iVar9 = iStack_30;
                          if ((uStack_44 != 0x2b) &&
                             (iVar7 = (**(code **)(*param_1 + 8))(param_1,uStack_44), iVar5 = iVar15
                             , iVar9 = iStack_14, iVar7 == 0)) {
                            uStack_18 = 0xfffffffe;
                            uVar4 = uStack_18;
                            break;
                          }
                        }
                      }
                      while( true ) {
                        iStack_14 = iVar9;
                        uVar4 = uStack_18;
                        if ((iVar5 < 1) ||
                           (uStack_44 = (**(code **)(*param_1 + 4))(param_1), uVar4 = uStack_44,
                           (int)uStack_44 < 0)) goto LAB_005735f1;
                        if (((&DAT_006074b8)[(byte)((byte)uStack_44 + 1)] & 0x20) == 0) break;
                        *pcVar11 = (byte)uStack_44;
                        iVar5 = iVar5 + -1;
                        pcVar11 = pcVar11 + 1;
                        iVar9 = iStack_14 + 1;
                      }
                      iVar5 = (**(code **)(*param_1 + 8))(param_1,uStack_44);
                      uVar4 = uStack_18;
                      if (iVar5 == 0) {
                        uStack_18 = 0xfffffffe;
                        uVar4 = uStack_18;
                        break;
                      }
                    }
                    else {
                      iVar5 = (**(code **)(*param_1 + 8))(param_1,uStack_54);
                      uVar4 = uStack_18;
                      if (iVar5 == 0) {
                        uStack_18 = 0xfffffffe;
                        uVar4 = uStack_18;
                        break;
                      }
                    }
                  }
LAB_005735f1:
                  uStack_18 = uVar4;
                  uVar4 = uStack_18;
                  if (((-2 < (int)uStack_18) && (iStack_48 != 0)) &&
                     (iStack_2c = iStack_2c + 1, iStack_20 != 0)) {
                    *pcVar11 = '\0';
                    dStack_5c = _strtod(&cStack_e0);
                    uVar4 = uStack_18;
                    if (uStack_50 < 0x4c) {
LAB_00573663:
                      puVar2 = (uint *)*param_3;
                      *param_3 = (int)(puVar2 + 1);
                      *(float *)*puVar2 = (float)dStack_5c;
                      iStack_28 = iStack_28 + 1;
                    }
                    else {
                      uStack_e8 = SUB84(dStack_5c,0);
                      uStack_e4 = (uint)((ulonglong)dStack_5c >> 0x20);
                      if (uStack_50 < 0x4d) {
                        piVar6 = (int *)*param_3;
                        *param_3 = (int)(piVar6 + 1);
                        puVar2 = (uint *)*piVar6;
                        *puVar2 = uStack_e8;
                        puVar2[1] = uStack_e4;
                        iStack_28 = iStack_28 + 1;
                      }
                      else {
                        if (((uStack_50 < 0x68) || (uStack_50 < 0x69)) || (uStack_50 != 0x6c))
                        goto LAB_00573663;
                        piVar6 = (int *)*param_3;
                        *param_3 = (int)(piVar6 + 1);
                        puVar2 = (uint *)*piVar6;
                        *puVar2 = uStack_e8;
                        puVar2[1] = uStack_e4;
                        iStack_28 = iStack_28 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        break;
      default:
        param_2 = pbVar8;
        break;
      case 0x4f:
      case 0x6f:
        iStack_1c = 8;
LAB_005728be:
        uVar4 = support_trstream_cpp_FUN_00573830(param_1);
        if (-1 < (int)uVar4) {
          iStack_14 = iStack_14 + uVar4;
          iVar5 = iStack_14;
          if (0 < (int)uVar12) {
            uVar4 = (**(code **)(*param_1 + 4))(param_1);
            if ((int)uVar4 < 0) break;
            uVar14 = uVar12 - 1;
            iVar5 = iStack_14 + 1;
            if (uVar4 == 0x2d) {
              iStack_24 = 1;
            }
            else if ((uVar4 != 0x2b) &&
                    (iVar9 = (**(code **)(*param_1 + 8))(param_1,uVar4), uVar14 = uVar12,
                    iVar5 = iStack_14, iVar9 == 0)) {
              uStack_18 = 0xfffffffe;
              uVar4 = uStack_18;
              break;
            }
          }
LAB_0057291d:
          while( true ) {
            iStack_14 = iVar5;
            uVar4 = uStack_18;
            if (((int)uVar14 < 1) ||
               (uStack_44 = (**(code **)(*param_1 + 4))(param_1), uVar4 = uStack_44,
               (int)uStack_44 < 0)) goto LAB_00573096;
            iVar9 = 99;
            iVar5 = toupper(uStack_44);
            switch(iVar5) {
            case 0x30:
              iVar9 = 0;
              break;
            case 0x31:
              iVar9 = 1;
              break;
            case 0x32:
              iVar9 = 2;
              break;
            case 0x33:
              iVar9 = 3;
              break;
            case 0x34:
              iVar9 = 4;
              break;
            case 0x35:
              iVar9 = 5;
              break;
            case 0x36:
              iVar9 = 6;
              break;
            case 0x37:
              iVar9 = 7;
              break;
            case 0x38:
              iVar9 = 8;
              break;
            case 0x39:
              iVar9 = 9;
              break;
            case 0x41:
              iVar9 = 10;
              break;
            case 0x42:
              iVar9 = 0xb;
              break;
            case 0x43:
              iVar9 = 0xc;
              break;
            case 0x44:
              iVar9 = 0xd;
              break;
            case 0x45:
              iVar9 = 0xe;
              break;
            case 0x46:
              iVar9 = 0xf;
            }
            if (iStack_1c < iVar9) break;
            iStack_4c = iStack_4c * iStack_1c + iVar9;
            iStack_48 = 1;
            uVar14 = uVar14 - 1;
            iVar5 = iStack_14 + 1;
          }
          iVar5 = (**(code **)(*param_1 + 8))(param_1,uStack_44);
          uVar4 = uStack_18;
          if (iVar5 == 0) {
            uStack_18 = 0xfffffffe;
            uVar4 = uStack_18;
            break;
          }
LAB_00573096:
          uStack_18 = uVar4;
          uVar4 = uStack_18;
          if (((-2 < (int)uStack_18) && (iStack_48 != 0)) &&
             (iStack_2c = iStack_2c + 1, iStack_20 != 0)) {
            if (iStack_24 != 0) {
              iStack_4c = -iStack_4c;
            }
            if (uStack_50 < 0x48) {
LAB_005730f1:
              puVar2 = (uint *)*param_3;
              *param_3 = (int)(puVar2 + 1);
              piVar6 = (int *)*puVar2;
            }
            else {
              if (uStack_50 < 0x49) {
LAB_005731d8:
                puVar2 = (uint *)*param_3;
                *param_3 = (int)(puVar2 + 1);
                *(short *)*puVar2 = (short)iStack_4c;
                iStack_28 = iStack_28 + 1;
                break;
              }
              if (uStack_50 < 0x68) goto LAB_005730f1;
              if (uStack_50 < 0x69) goto LAB_005731d8;
              if (uStack_50 != 0x6c) goto LAB_005730f1;
              puVar2 = (uint *)*param_3;
              *param_3 = (int)(puVar2 + 1);
              piVar6 = (int *)*puVar2;
            }
            *piVar6 = iStack_4c;
            iStack_28 = iStack_28 + 1;
          }
        }
        break;
      case 0x50:
      case 0x70:
        uVar4 = support_trstream_cpp_FUN_00573830(param_1);
        if ((int)uVar4 < 0) break;
        iStack_1c = 0x10;
        iVar5 = iStack_14 + uVar4;
        goto LAB_0057291d;
      case 0x55:
      case 0x75:
        uVar4 = support_trstream_cpp_FUN_00573830(param_1);
        if (-1 < (int)uVar4) {
          iStack_1c = 10;
          iVar5 = iStack_14 + uVar4;
          goto LAB_0057291d;
        }
        break;
      case 0x58:
      case 0x78:
        uVar4 = support_trstream_cpp_FUN_00573830(param_1);
        if (-1 < (int)uVar4) {
          iVar5 = iStack_14 + uVar4;
          uVar13 = uVar12;
          if (0 < (int)uVar12) {
            iStack_14 = iVar5;
            uVar4 = (**(code **)(*param_1 + 4))(param_1);
            if ((int)uVar4 < 0) break;
            uVar13 = uVar12 - 1;
            if (uVar4 == 0x2d) {
              iStack_24 = 1;
              iVar5 = iVar5 + 1;
            }
            else {
              iVar5 = iVar5 + 1;
              if ((uVar4 != 0x2b) &&
                 (iVar9 = (**(code **)(*param_1 + 8))(param_1,uVar4), uVar13 = uVar12,
                 iVar5 = iStack_14, iVar9 == 0)) {
                uStack_18 = 0xfffffffe;
                uVar4 = uStack_18;
                break;
              }
            }
          }
          iStack_14 = iVar5;
          uVar14 = uVar13;
          if (0 < (int)uVar13) {
            uVar4 = (**(code **)(*param_1 + 4))(param_1);
            if ((int)uVar4 < 0) break;
            if (uVar4 == 0x30) {
              iStack_48 = 1;
              iStack_14 = iStack_14 + 1;
              uVar14 = uVar13 - 1;
              if (0 < (int)uVar14) {
                uVar4 = (**(code **)(*param_1 + 4))(param_1);
                if ((int)uVar4 < -1) break;
                if (-1 < (int)uVar4) {
                  iVar5 = toupper(uVar4);
                  if (iVar5 == 0x58) {
                    iStack_14 = iStack_14 + 1;
                    uVar14 = uVar13 - 2;
                  }
                  else {
                    iVar5 = (**(code **)(*param_1 + 8))(param_1,uVar4);
                    if (iVar5 == 0) {
                      uStack_18 = 0xfffffffe;
                      uVar4 = uStack_18;
                      break;
                    }
                  }
                }
              }
            }
            else {
              iVar5 = (**(code **)(*param_1 + 8))(param_1,uVar4);
              if (iVar5 == 0) {
                uStack_18 = 0xfffffffe;
                uVar4 = uStack_18;
                break;
              }
            }
          }
          iStack_1c = 0x10;
          iVar5 = iStack_14;
          goto LAB_0057291d;
        }
        break;
      case 0x5b:
        bVar16 = *param_2 != 0x5e;
        if (bVar16) {
          iVar5 = 0;
        }
        else {
          iVar5 = 0xff;
          param_2 = pbVar8 + 2;
        }
        memset(abStack_7c,iVar5,0x20);
        pbVar8 = param_2;
        if (*param_2 == 0x5d) {
          if (bVar16) {
            abStack_7c[0xb] = abStack_7c[0xb] | 0x20;
          }
          else {
            abStack_7c[0xb] = abStack_7c[0xb] & 0xdf;
          }
          pbVar8 = param_2 + 1;
        }
        while ((bVar3 = *pbVar8, param_2 = pbVar8, bVar3 != 0 &&
               (param_2 = pbVar8 + 1, bVar3 != 0x5d))) {
          if (bVar3 == 0x2d) {
            uVar4 = (uint)pbVar8[1];
            if (uVar4 == 0) break;
            uVar14 = (uint)pbVar8[-1];
            uStack_44 = uVar14;
            if (uVar4 < uVar14) {
              uStack_44 = uVar4;
              uVar4 = uVar14;
            }
            pbVar8 = param_2;
            if (uStack_44 <= uVar4) {
              do {
                bVar3 = '\x01' << ((byte)uStack_44 & 7);
                if (bVar16) {
                  abStack_7c[uStack_44 >> 3] = abStack_7c[uStack_44 >> 3] | bVar3;
                }
                else {
                  abStack_7c[(int)uStack_44 >> 3] = abStack_7c[(int)uStack_44 >> 3] & ~bVar3;
                }
                uStack_44 = uStack_44 + 1;
              } while ((int)uStack_44 <= (int)uVar4);
            }
          }
          else if (bVar16) {
            abStack_7c[bVar3 >> 3] = abStack_7c[bVar3 >> 3] | '\x01' << (bVar3 & 7);
            pbVar8 = pbVar8 + 1;
          }
          else {
            abStack_7c[(int)(uint)bVar3 >> 3] =
                 abStack_7c[(int)(uint)bVar3 >> 3] & ~('\x01' << (bVar3 & 7));
            pbVar8 = pbVar8 + 1;
          }
        }
        goto LAB_00572a24;
      case 99:
        if (uVar12 == 0x7fffffff) {
          uVar12 = 1;
        }
        memset(abStack_7c,0xff,0x20);
LAB_00572a24:
        pbVar8 = (byte *)0x0;
        if (iStack_20 != 0) {
          puVar2 = (uint *)*param_3;
          *param_3 = (int)(puVar2 + 1);
          pbVar8 = (byte *)*puVar2;
        }
        while (uVar4 = uStack_18, 0 < (int)uVar12) {
          uStack_3c = (**(code **)(*param_1 + 4))(param_1);
          uVar12 = uVar12 - 1;
          uVar4 = uStack_3c;
          if ((int)uStack_3c < 0) break;
          uStack_40 = (uint)abStack_7c[uStack_3c >> 3];
          if ((uStack_40 & 1 << ((byte)uStack_3c & 7)) == 0) {
            iVar5 = (**(code **)(*param_1 + 8))(param_1,uStack_3c);
            uVar4 = uStack_18;
            if (iVar5 == 0) {
              uStack_18 = 0xfffffffe;
              uVar4 = uStack_18;
            }
            break;
          }
          iStack_14 = iStack_14 + 1;
          if (pbVar8 == (byte *)0x0) {
            iStack_48 = 1;
          }
          else {
            *pbVar8 = (byte)uStack_3c;
            iStack_48 = 1;
            pbVar8 = pbVar8 + 1;
          }
        }
        uStack_18 = uVar4;
        if ((uStack_38 != 99) && (pbVar8 != (byte *)0x0)) {
          *pbVar8 = 0;
        }
        uVar4 = uStack_18;
        if (iStack_48 != 0) {
          if (pbVar8 != (byte *)0x0) {
            iStack_28 = iStack_28 + 1;
          }
          iStack_2c = iStack_2c + 1;
        }
        break;
      case 0x69:
        uVar4 = support_trstream_cpp_FUN_00573830(param_1);
        if (-1 < (int)uVar4) {
          iStack_14 = iStack_14 + uVar4;
          uVar13 = uVar12;
          iVar5 = iStack_14;
          if (0 < (int)uVar12) {
            uVar4 = (**(code **)(*param_1 + 4))(param_1);
            if ((int)uVar4 < 0) break;
            uVar13 = uVar12 - 1;
            iVar5 = iStack_14 + 1;
            if (uVar4 == 0x2d) {
              iStack_24 = 1;
            }
            else if ((uVar4 != 0x2b) &&
                    (iVar9 = (**(code **)(*param_1 + 8))(param_1,uVar4), uVar13 = uVar12,
                    iVar5 = iStack_14, iVar9 == 0)) {
              uStack_18 = 0xfffffffe;
              uVar4 = uStack_18;
              break;
            }
          }
          iStack_14 = iVar5;
          uVar14 = uVar13;
          iVar5 = iStack_14;
          if (0 < (int)uVar13) {
            uVar4 = (**(code **)(*param_1 + 4))(param_1);
            if ((int)uVar4 < 0) break;
            if (uVar4 == 0x30) {
              uVar14 = uVar13 - 1;
              iStack_14 = iStack_14 + 1;
              iStack_1c = 8;
              iVar5 = iStack_14;
              if (0 < (int)uVar14) {
                uVar4 = (**(code **)(*param_1 + 4))(param_1);
                if ((int)uVar4 < -1) break;
                iVar5 = iStack_14;
                if (-1 < (int)uVar4) {
                  iVar5 = toupper(uVar4);
                  if (iVar5 == 0x58) {
                    iStack_1c = 0x10;
                    uVar14 = uVar13 - 2;
                    iVar5 = iStack_14 + 1;
                  }
                  else {
                    iVar9 = (**(code **)(*param_1 + 8))(param_1,uVar4);
                    iVar5 = iStack_14;
                    if (iVar9 == 0) {
                      uStack_18 = 0xfffffffe;
                      uVar4 = uStack_18;
                      break;
                    }
                  }
                }
              }
            }
            else {
              iVar9 = (**(code **)(*param_1 + 8))(param_1,uVar4);
              iVar5 = iStack_14;
              if (iVar9 == 0) {
                uStack_18 = 0xfffffffe;
                uVar4 = uStack_18;
                break;
              }
            }
          }
          goto LAB_0057291d;
        }
        break;
      case 0x6e:
        if (iStack_20 != 0) {
          puVar2 = (uint *)*param_3;
          *param_3 = (int)(puVar2 + 1);
          *(int *)*puVar2 = iStack_14;
        }
        break;
      case 0x73:
        uVar4 = support_trstream_cpp_FUN_00573830(param_1);
        if (-1 < (int)uVar4) {
          iStack_14 = iStack_14 + uVar4;
          memset(abStack_7c,0xff,0x20);
          uStack_44 = 9;
          abStack_7c[4] = abStack_7c[4] & 0xfe;
          do {
            abStack_7c[(int)uStack_44 >> 3] =
                 abStack_7c[(int)uStack_44 >> 3] & ~('\x01' << ((byte)uStack_44 & 7));
            uStack_44 = uStack_44 + 1;
          } while ((int)uStack_44 < 0xe);
          goto LAB_00572a24;
        }
      }
LAB_0057275f:
      uStack_18 = uVar4;
      uVar4 = uStack_18;
      if (*param_2 == 0) break;
    }
  }
  uStack_18 = uVar4;
  if ((-2 < (int)uStack_18) && (((uStack_18 == 0 || (iStack_28 != 0)) || (iStack_2c != 0)))) {
    return iStack_28;
  }
  return -1;
}
