// Name: FUN_004347cc
// Address: 004347cc
// Address Range: [[004347cc, 00434844]]
// Convention: unknown
// Signature: undefined4 FUN_004347cc(undefined4 param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

/* WARNING: Instruction at (ram,0x004347cd) overlaps instruction at (ram,0x004347cc)
uint FUN_004347cc(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int *piVar4;
  uint in_ECX;
  uint uVar5;
  int iVar6;
  int *in_EDX;
  int iVar7;
  uint *puVar8;
  int *unaff_EBX;
  int *unaff_EBP;
  uint *puVar9;
  int *piVar10;
  int unaff_EDI;
  uint *puVar11;
  byte bVar12;
  int iStack00000010;
  int iStack00000014;
  
  bVar12 = 0;
code_r0x004347cc:
  *(byte *)(in_ECX + 0x30) = *(byte *)(in_ECX + 0x30) ^ (byte)((uint)unaff_EBX >> 8);
  piVar4 = in_EDX;
  piVar10 = (int *)((int)&DAT_0076874c + unaff_EDI);
  for (uVar5 = in_ECX >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *piVar10 = *piVar4;
    piVar4 = piVar4 + (uint)bVar12 * -2 + 1;
    piVar10 = piVar10 + (uint)bVar12 * -2 + 1;
  }
  for (uVar5 = in_ECX & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(char *)piVar10 = (char)*piVar4;
    piVar4 = (int *)((int)piVar4 + (uint)bVar12 * -2 + 1);
    piVar10 = (int *)((int)piVar10 + (uint)bVar12 * -2 + 1);
  }
  DAT_00767b44 = DAT_00767b44 + 1;
  engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_004338d0
            (in_EDX,unaff_EBP,&DAT_0076874c + DAT_00767b44 * 0xc);
  DAT_00767b44 = DAT_00767b44 + 1;
  do {
    iVar6 = param_3 + 1;
    in_EDX = unaff_EBX + 0xc;
    if ((int)DAT_00767b40 <= iVar6) {
      if (2 < (int)DAT_00767b44) {
        iStack00000010 = 0;
        if (0 < (int)DAT_00767b44) {
          puVar8 = &DAT_0076874c;
          do {
            uVar5 = iStack00000010 + 1;
            if (uVar5 == DAT_00767b44) {
              uVar5 = uVar5 ^ DAT_00767b44;
            }
            bVar3 = (int)puVar8[2] <= (int)puVar8[1];
            if ((int)(&DAT_00768754)[uVar5 * 0xc] <= (int)(&DAT_00768750)[uVar5 * 0xc]) {
              bVar3 = bVar3 | 2;
            }
            switch(bVar3) {
            case 0:
              puVar9 = puVar8;
              puVar11 = &DAT_00768d4c + DAT_00767b48 * 0xc;
              for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
                *puVar11 = *puVar9;
                puVar9 = puVar9 + (uint)bVar12 * -2 + 1;
                puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
              }
              for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
                *(byte *)puVar11 = *(byte *)puVar9;
                puVar9 = (uint *)((int)puVar9 + (uint)bVar12 * -2 + 1);
                puVar11 = (uint *)((int)puVar11 + (uint)bVar12 * -2 + 1);
              }
              DAT_00767b48 = DAT_00767b48 + 1;
              break;
            case 1:
              engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00433a00
                        (&DAT_0076874c + uVar5 * 0xc,puVar8,&DAT_00768d4c + DAT_00767b48 * 0xc);
              DAT_00767b48 = DAT_00767b48 + 1;
              break;
            case 2:
              puVar9 = puVar8;
              puVar11 = &DAT_00768d4c + DAT_00767b48 * 0xc;
              for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
                *puVar11 = *puVar9;
                puVar9 = puVar9 + (uint)bVar12 * -2 + 1;
                puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
              }
              for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
                *(byte *)puVar11 = *(byte *)puVar9;
                puVar9 = (uint *)((int)puVar9 + (uint)bVar12 * -2 + 1);
                puVar11 = (uint *)((int)puVar11 + (uint)bVar12 * -2 + 1);
              }
              DAT_00767b48 = DAT_00767b48 + 1;
              engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00433a00
                        (puVar8,&DAT_0076874c + uVar5 * 0xc,&DAT_00768d4c + DAT_00767b48 * 0xc);
              DAT_00767b48 = DAT_00767b48 + 1;
            }
            iStack00000010 = iStack00000010 + 1;
            puVar8 = puVar8 + 0xc;
          } while (iStack00000010 < (int)DAT_00767b44);
        }
        if (2 < (int)DAT_00767b48) {
          iStack00000014 = 0;
          if (0 < (int)DAT_00767b48) {
            puVar8 = &DAT_00768d4c;
            do {
              uVar5 = iStack00000014 + 1;
              if (uVar5 == DAT_00767b48) {
                uVar5 = uVar5 ^ DAT_00767b48;
              }
              bVar3 = (int)puVar8[1] <= (int)-puVar8[2];
              if ((int)(&DAT_00768d50)[uVar5 * 0xc] <= (int)-(&DAT_00768d54)[uVar5 * 0xc]) {
                bVar3 = bVar3 | 2;
              }
              switch(bVar3) {
              case 0:
                puVar9 = puVar8;
                puVar11 = &DAT_00766c74 + DAT_00766c70 * 0xc;
                for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *puVar11 = *puVar9;
                  puVar9 = puVar9 + (uint)bVar12 * -2 + 1;
                  puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
                }
                for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *(byte *)puVar11 = *(byte *)puVar9;
                  puVar9 = (uint *)((int)puVar9 + (uint)bVar12 * -2 + 1);
                  puVar11 = (uint *)((int)puVar11 + (uint)bVar12 * -2 + 1);
                }
                DAT_00766c70 = DAT_00766c70 + 1;
                break;
              case 1:
                engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_00433b30
                          (&DAT_00768d4c + uVar5 * 0xc,puVar8,&DAT_00766c74 + DAT_00766c70 * 0xc);
                DAT_00766c70 = DAT_00766c70 + 1;
                break;
              case 2:
                puVar9 = puVar8;
                puVar11 = &DAT_00766c74 + DAT_00766c70 * 0xc;
                for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *puVar11 = *puVar9;
                  puVar9 = puVar9 + (uint)bVar12 * -2 + 1;
                  puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
                }
                for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *(byte *)puVar11 = *(byte *)puVar9;
                  puVar9 = (uint *)((int)puVar9 + (uint)bVar12 * -2 + 1);
                  puVar11 = (uint *)((int)puVar11 + (uint)bVar12 * -2 + 1);
                }
                DAT_00766c70 = DAT_00766c70 + 1;
                engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_00433b30
                          (puVar8,&DAT_00768d4c + uVar5 * 0xc,&DAT_00766c74 + DAT_00766c70 * 0xc);
                DAT_00766c70 = DAT_00766c70 + 1;
              }
              iStack00000014 = iStack00000014 + 1;
              puVar8 = puVar8 + 0xc;
            } while (iStack00000014 < (int)DAT_00767b48);
          }
          if (2 < DAT_00766c70) {
            piVar4 = &DAT_00766c74;
            iVar6 = 0;
            if (0 < DAT_00766c70) {
              do {
                iVar1 = piVar4[2];
                if (iVar1 == 0) {
                  piVar4[2] = 1;
                  *piVar4 = 0;
                  piVar4[1] = 0;
                }
                else if (iVar1 < *piVar4) {
                  *piVar4 = iVar1;
                }
                else {
                  iVar7 = -iVar1;
                  if (-*piVar4 == iVar1 || iVar7 < *piVar4) {
                    iVar2 = piVar4[1];
                    if (piVar4[2] < iVar2) {
                      piVar4[1] = piVar4[2];
                    }
                    else if (-iVar2 != iVar1 && iVar2 <= iVar7) {
                      piVar4[1] = iVar7;
                    }
                  }
                  else {
                    *piVar4 = iVar7;
                  }
                }
                iVar6 = iVar6 + 1;
                piVar4 = piVar4 + 0xc;
              } while (iVar6 < DAT_00766c70);
            }
          }
        }
      }
      return 0;
    }
    uVar5 = param_3 + 2;
    if (uVar5 == DAT_00767b40) {
      uVar5 = uVar5 ^ DAT_00767b40;
    }
    unaff_EBP = &DAT_00767b4c + uVar5 * 0xc;
    bVar3 = *in_EDX <= -unaff_EBX[0xe];
    if (*unaff_EBP <= (int)-(&DAT_00767b54)[uVar5 * 0xc]) {
      bVar3 = bVar3 | 2;
    }
    unaff_EBX = in_EDX;
    param_3 = iVar6;
    switch(bVar3) {
    case 0:
      piVar4 = in_EDX;
      piVar10 = &DAT_0076874c + DAT_00767b44 * 0xc;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar10 = *piVar4;
        piVar4 = piVar4 + (uint)bVar12 * -2 + 1;
        piVar10 = piVar10 + (uint)bVar12 * -2 + 1;
      }
      for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(char *)piVar10 = (char)*piVar4;
        piVar4 = (int *)((int)piVar4 + (uint)bVar12 * -2 + 1);
        piVar10 = (int *)((int)piVar10 + (uint)bVar12 * -2 + 1);
      }
      DAT_00767b44 = DAT_00767b44 + 1;
      break;
    case 1:
      engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_004338d0
                (unaff_EBP,in_EDX,&DAT_0076874c + DAT_00767b44 * 0xc);
      DAT_00767b44 = DAT_00767b44 + 1;
      break;
    case 2:
      goto switchD_00434534_caseD_2;
    }
  } while( true );
switchD_00434534_caseD_2:
  unaff_EDI = DAT_00767b44 * 0x30;
  in_ECX = 0x30;
  goto code_r0x004347cc;
}
