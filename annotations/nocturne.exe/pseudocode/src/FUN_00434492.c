// Name: FUN_00434492
// Address: 00434492
// Address Range: [[00434492, 0043453a]]
// Convention: unknown
// Signature: undefined4 FUN_00434492(void)

#include "nocturne.h"

/* WARNING: Instruction at (ram,0x00434493) overlaps instruction at (ram,0x00434492)
uint FUN_00434492(void)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  uint in_ECX;
  uint uVar5;
  int *in_EDX;
  int iVar6;
  int *unaff_EBX;
  int *piVar7;
  uint *puVar8;
  int *piVar9;
  int *piVar10;
  uint *puVar11;
  int unaff_EDI;
  int *piVar12;
  uint *puVar13;
  byte bVar14;
  int iStack0000000c;
  int iStack00000010;
  int iStack00000014;
  int in_stack_00000018;
  
  bVar14 = 0;
code_r0x00434492:
  *(byte *)(in_ECX + 0x30) = *(byte *)(in_ECX + 0x30) ^ (byte)((uint)unaff_EBX >> 8);
  piVar7 = (int *)((int)&DAT_00767b4c + unaff_EDI);
  for (uVar5 = in_ECX >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *piVar7 = *in_EDX;
    in_EDX = in_EDX + (uint)bVar14 * -2 + 1;
    piVar7 = piVar7 + (uint)bVar14 * -2 + 1;
  }
  for (uVar5 = in_ECX & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(char *)piVar7 = (char)*in_EDX;
    in_EDX = (int *)((int)in_EDX + (uint)bVar14 * -2 + 1);
    piVar7 = (int *)((int)piVar7 + (uint)bVar14 * -2 + 1);
  }
  DAT_00767b40 = DAT_00767b40 + 1;
  do {
    iVar4 = in_stack_00000018 + 1;
    in_EDX = unaff_EBX + 0xc;
    if ((int)DAT_00767b3c <= iVar4) {
      if (2 < (int)DAT_00767b40) {
        iStack0000000c = 0;
        if (0 < (int)DAT_00767b40) {
          piVar7 = &DAT_00767b4c;
          do {
            uVar5 = iStack0000000c + 1;
            if (uVar5 == DAT_00767b40) {
              uVar5 = uVar5 ^ DAT_00767b40;
            }
            piVar9 = &DAT_00767b4c + uVar5 * 0xc;
            bVar3 = *piVar7 <= -piVar7[2];
            if (*piVar9 <= (int)-(&DAT_00767b54)[uVar5 * 0xc]) {
              bVar3 = bVar3 | 2;
            }
            switch(bVar3) {
            case 0:
              piVar9 = piVar7;
              piVar10 = &DAT_0076874c + DAT_00767b44 * 0xc;
              for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                *piVar10 = *piVar9;
                piVar9 = piVar9 + (uint)bVar14 * -2 + 1;
                piVar10 = piVar10 + (uint)bVar14 * -2 + 1;
              }
              for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
                *(char *)piVar10 = (char)*piVar9;
                piVar9 = (int *)((int)piVar9 + (uint)bVar14 * -2 + 1);
                piVar10 = (int *)((int)piVar10 + (uint)bVar14 * -2 + 1);
              }
              DAT_00767b44 = DAT_00767b44 + 1;
              break;
            case 1:
              engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_004338d0
                        (piVar9,piVar7,&DAT_0076874c + DAT_00767b44 * 0xc);
              DAT_00767b44 = DAT_00767b44 + 1;
              break;
            case 2:
              piVar10 = piVar7;
              piVar12 = &DAT_0076874c + DAT_00767b44 * 0xc;
              for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                *piVar12 = *piVar10;
                piVar10 = piVar10 + (uint)bVar14 * -2 + 1;
                piVar12 = piVar12 + (uint)bVar14 * -2 + 1;
              }
              for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
                *(char *)piVar12 = (char)*piVar10;
                piVar10 = (int *)((int)piVar10 + (uint)bVar14 * -2 + 1);
                piVar12 = (int *)((int)piVar12 + (uint)bVar14 * -2 + 1);
              }
              DAT_00767b44 = DAT_00767b44 + 1;
              engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_004338d0
                        (piVar7,piVar9,&DAT_0076874c + DAT_00767b44 * 0xc);
              DAT_00767b44 = DAT_00767b44 + 1;
            }
            iStack0000000c = iStack0000000c + 1;
            piVar7 = piVar7 + 0xc;
          } while (iStack0000000c < (int)DAT_00767b40);
        }
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
                puVar11 = puVar8;
                puVar13 = &DAT_00768d4c + DAT_00767b48 * 0xc;
                for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *puVar13 = *puVar11;
                  puVar11 = puVar11 + (uint)bVar14 * -2 + 1;
                  puVar13 = puVar13 + (uint)bVar14 * -2 + 1;
                }
                for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *(byte *)puVar13 = *(byte *)puVar11;
                  puVar11 = (uint *)((int)puVar11 + (uint)bVar14 * -2 + 1);
                  puVar13 = (uint *)((int)puVar13 + (uint)bVar14 * -2 + 1);
                }
                DAT_00767b48 = DAT_00767b48 + 1;
                break;
              case 1:
                engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00433a00
                          (&DAT_0076874c + uVar5 * 0xc,puVar8,&DAT_00768d4c + DAT_00767b48 * 0xc);
                DAT_00767b48 = DAT_00767b48 + 1;
                break;
              case 2:
                puVar11 = puVar8;
                puVar13 = &DAT_00768d4c + DAT_00767b48 * 0xc;
                for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *puVar13 = *puVar11;
                  puVar11 = puVar11 + (uint)bVar14 * -2 + 1;
                  puVar13 = puVar13 + (uint)bVar14 * -2 + 1;
                }
                for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *(byte *)puVar13 = *(byte *)puVar11;
                  puVar11 = (uint *)((int)puVar11 + (uint)bVar14 * -2 + 1);
                  puVar13 = (uint *)((int)puVar13 + (uint)bVar14 * -2 + 1);
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
                  puVar11 = puVar8;
                  puVar13 = &DAT_00766c74 + DAT_00766c70 * 0xc;
                  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                    *puVar13 = *puVar11;
                    puVar11 = puVar11 + (uint)bVar14 * -2 + 1;
                    puVar13 = puVar13 + (uint)bVar14 * -2 + 1;
                  }
                  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
                    *(byte *)puVar13 = *(byte *)puVar11;
                    puVar11 = (uint *)((int)puVar11 + (uint)bVar14 * -2 + 1);
                    puVar13 = (uint *)((int)puVar13 + (uint)bVar14 * -2 + 1);
                  }
                  DAT_00766c70 = DAT_00766c70 + 1;
                  break;
                case 1:
                  engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_00433b30
                            (&DAT_00768d4c + uVar5 * 0xc,puVar8,&DAT_00766c74 + DAT_00766c70 * 0xc);
                  DAT_00766c70 = DAT_00766c70 + 1;
                  break;
                case 2:
                  puVar11 = puVar8;
                  puVar13 = &DAT_00766c74 + DAT_00766c70 * 0xc;
                  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                    *puVar13 = *puVar11;
                    puVar11 = puVar11 + (uint)bVar14 * -2 + 1;
                    puVar13 = puVar13 + (uint)bVar14 * -2 + 1;
                  }
                  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
                    *(byte *)puVar13 = *(byte *)puVar11;
                    puVar11 = (uint *)((int)puVar11 + (uint)bVar14 * -2 + 1);
                    puVar13 = (uint *)((int)puVar13 + (uint)bVar14 * -2 + 1);
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
              piVar7 = &DAT_00766c74;
              iVar4 = 0;
              if (0 < DAT_00766c70) {
                do {
                  iVar1 = piVar7[2];
                  if (iVar1 == 0) {
                    piVar7[2] = 1;
                    *piVar7 = 0;
                    piVar7[1] = 0;
                  }
                  else if (iVar1 < *piVar7) {
                    *piVar7 = iVar1;
                  }
                  else {
                    iVar6 = -iVar1;
                    if (-*piVar7 == iVar1 || iVar6 < *piVar7) {
                      iVar2 = piVar7[1];
                      if (piVar7[2] < iVar2) {
                        piVar7[1] = piVar7[2];
                      }
                      else if (-iVar2 != iVar1 && iVar2 <= iVar6) {
                        piVar7[1] = iVar6;
                      }
                    }
                    else {
                      *piVar7 = iVar6;
                    }
                  }
                  iVar4 = iVar4 + 1;
                  piVar7 = piVar7 + 0xc;
                } while (iVar4 < DAT_00766c70);
              }
            }
          }
        }
      }
      return 0;
    }
    uVar5 = in_stack_00000018 + 2;
    if (uVar5 == DAT_00767b3c) {
      uVar5 = uVar5 ^ DAT_00767b3c;
    }
    piVar7 = &DAT_0076814c + uVar5 * 0xc;
    bVar3 = unaff_EBX[0xe] <= *in_EDX;
    if ((int)(&DAT_00768154)[uVar5 * 0xc] <= *piVar7) {
      bVar3 = bVar3 | 2;
    }
    unaff_EBX = in_EDX;
    in_stack_00000018 = iVar4;
    switch(bVar3) {
    case 0:
      goto switchD_00434485_caseD_0;
    case 1:
      engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_004337a0
                (piVar7,in_EDX,&DAT_00767b4c + DAT_00767b40 * 0xc);
      DAT_00767b40 = DAT_00767b40 + 1;
      break;
    case 2:
      piVar9 = in_EDX;
      piVar10 = &DAT_00767b4c + DAT_00767b40 * 0xc;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar10 = *piVar9;
        piVar9 = piVar9 + (uint)bVar14 * -2 + 1;
        piVar10 = piVar10 + (uint)bVar14 * -2 + 1;
      }
      for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(char *)piVar10 = (char)*piVar9;
        piVar9 = (int *)((int)piVar9 + (uint)bVar14 * -2 + 1);
        piVar10 = (int *)((int)piVar10 + (uint)bVar14 * -2 + 1);
      }
      DAT_00767b40 = DAT_00767b40 + 1;
      engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_004337a0
                (in_EDX,piVar7,&DAT_00767b4c + DAT_00767b40 * 0xc);
      DAT_00767b40 = DAT_00767b40 + 1;
    }
  } while( true );
switchD_00434485_caseD_0:
  unaff_EDI = DAT_00767b40 * 0x30;
  in_ECX = 0x30;
  goto code_r0x00434492;
}
