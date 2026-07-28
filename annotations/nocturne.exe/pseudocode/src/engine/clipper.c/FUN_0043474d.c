// Name: engine_clipper.c_FUN_0043474d
// Address: 0043474d
// Address Range: [[0043471e, 00434746] [0043474d, 004347c5]]
// Convention: unknown
// Signature: undefined4 engine_clipper_c_FUN_0043474d(void)

#include "nocturne.h"

/* WARNING: Instruction at (ram,0x0043474e) overlaps instruction at (ram,0x0043474d)
uint engine_clipper_c_FUN_0043474d(void)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  uint in_ECX;
  uint uVar6;
  SRenderVertex *in_EDX;
  int iVar7;
  SRenderVertex *pSVar8;
  SRenderVertex *unaff_EBX;
  SRenderVertex *unaff_EBP;
  SRenderVertex *pSVar9;
  SRenderVertex *pSVar10;
  int unaff_EDI;
  byte bVar11;
  int iStack0000000c;
  int iStack00000010;
  int iStack00000014;
  int in_stack_00000018;
  
  bVar11 = 0;
code_r0x0043474d:
  *(byte *)(in_ECX + 0x30) = *(byte *)(in_ECX + 0x30) ^ (byte)((uint)unaff_EBX >> 8);
  pSVar8 = in_EDX;
  piVar5 = (int *)((int)&DAT_00767b4c + unaff_EDI);
  for (uVar6 = in_ECX >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *piVar5 = (pSVar8->projected_vertex).transformed_x;
    pSVar8 = (SRenderVertex *)((int)pSVar8 + (uint)bVar11 * -8 + 4);
    piVar5 = piVar5 + (uint)bVar11 * -2 + 1;
  }
  for (uVar6 = in_ECX & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(char *)piVar5 = (char)(pSVar8->projected_vertex).transformed_x;
    pSVar8 = (SRenderVertex *)((int)pSVar8 + (uint)bVar11 * -2 + 1);
    piVar5 = (int *)((int)piVar5 + (uint)bVar11 * -2 + 1);
  }
  DAT_00767b40 = DAT_00767b40 + 1;
  engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_004337a0
            (in_EDX,unaff_EBP,(SRenderVertex *)(&DAT_00767b4c + DAT_00767b40 * 0xc));
  DAT_00767b40 = DAT_00767b40 + 1;
  do {
    iVar4 = in_stack_00000018 + 1;
    in_EDX = unaff_EBX + 1;
    if ((int)DAT_00767b3c <= iVar4) {
      if (2 < (int)DAT_00767b40) {
        iStack0000000c = 0;
        if (0 < (int)DAT_00767b40) {
          pSVar8 = (SRenderVertex *)&DAT_00767b4c;
          do {
            uVar6 = iStack0000000c + 1;
            if (uVar6 == DAT_00767b40) {
              uVar6 = uVar6 ^ DAT_00767b40;
            }
            pSVar10 = (SRenderVertex *)(&DAT_00767b4c + uVar6 * 0xc);
            bVar3 = (pSVar8->projected_vertex).transformed_x <=
                    -(pSVar8->projected_vertex).transformed_z;
            if ((pSVar10->projected_vertex).transformed_x <= (int)-(&DAT_00767b54)[uVar6 * 0xc]) {
              bVar3 = bVar3 | 2;
            }
            switch(bVar3) {
            case 0:
              pSVar10 = pSVar8;
              piVar5 = &DAT_0076874c + DAT_00767b44 * 0xc;
              for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                *piVar5 = (pSVar10->projected_vertex).transformed_x;
                pSVar10 = (SRenderVertex *)((int)pSVar10 + (uint)bVar11 * -8 + 4);
                piVar5 = piVar5 + (uint)bVar11 * -2 + 1;
              }
              for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
                *(char *)piVar5 = (char)(pSVar10->projected_vertex).transformed_x;
                pSVar10 = (SRenderVertex *)((int)pSVar10 + (uint)bVar11 * -2 + 1);
                piVar5 = (int *)((int)piVar5 + (uint)bVar11 * -2 + 1);
              }
              DAT_00767b44 = DAT_00767b44 + 1;
              break;
            case 1:
              engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_004338d0
                        (pSVar10,pSVar8,(SRenderVertex *)(&DAT_0076874c + DAT_00767b44 * 0xc));
              DAT_00767b44 = DAT_00767b44 + 1;
              break;
            case 2:
              pSVar9 = pSVar8;
              piVar5 = &DAT_0076874c + DAT_00767b44 * 0xc;
              for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                *piVar5 = (pSVar9->projected_vertex).transformed_x;
                pSVar9 = (SRenderVertex *)((int)pSVar9 + (uint)bVar11 * -8 + 4);
                piVar5 = piVar5 + (uint)bVar11 * -2 + 1;
              }
              for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
                *(char *)piVar5 = (char)(pSVar9->projected_vertex).transformed_x;
                pSVar9 = (SRenderVertex *)((int)pSVar9 + (uint)bVar11 * -2 + 1);
                piVar5 = (int *)((int)piVar5 + (uint)bVar11 * -2 + 1);
              }
              DAT_00767b44 = DAT_00767b44 + 1;
              engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_004338d0
                        (pSVar8,pSVar10,(SRenderVertex *)(&DAT_0076874c + DAT_00767b44 * 0xc));
              DAT_00767b44 = DAT_00767b44 + 1;
            }
            iStack0000000c = iStack0000000c + 1;
            pSVar8 = pSVar8 + 1;
          } while (iStack0000000c < (int)DAT_00767b40);
        }
        if (2 < (int)DAT_00767b44) {
          iStack00000010 = 0;
          if (0 < (int)DAT_00767b44) {
            pSVar8 = (SRenderVertex *)&DAT_0076874c;
            do {
              uVar6 = iStack00000010 + 1;
              if (uVar6 == DAT_00767b44) {
                uVar6 = uVar6 ^ DAT_00767b44;
              }
              bVar3 = (pSVar8->projected_vertex).transformed_z <=
                      (pSVar8->projected_vertex).transformed_y;
              if ((int)(&DAT_00768754)[uVar6 * 0xc] <= (int)(&DAT_00768750)[uVar6 * 0xc]) {
                bVar3 = bVar3 | 2;
              }
              switch(bVar3) {
              case 0:
                pSVar10 = pSVar8;
                piVar5 = &DAT_00768d4c + DAT_00767b48 * 0xc;
                for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *piVar5 = (pSVar10->projected_vertex).transformed_x;
                  pSVar10 = (SRenderVertex *)((int)pSVar10 + (uint)bVar11 * -8 + 4);
                  piVar5 = piVar5 + (uint)bVar11 * -2 + 1;
                }
                for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *(char *)piVar5 = (char)(pSVar10->projected_vertex).transformed_x;
                  pSVar10 = (SRenderVertex *)((int)pSVar10 + (uint)bVar11 * -2 + 1);
                  piVar5 = (int *)((int)piVar5 + (uint)bVar11 * -2 + 1);
                }
                DAT_00767b48 = DAT_00767b48 + 1;
                break;
              case 1:
                engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00433a00
                          ((SRenderVertex *)(&DAT_0076874c + uVar6 * 0xc),pSVar8,
                           (SRenderVertex *)(&DAT_00768d4c + DAT_00767b48 * 0xc));
                DAT_00767b48 = DAT_00767b48 + 1;
                break;
              case 2:
                pSVar10 = pSVar8;
                piVar5 = &DAT_00768d4c + DAT_00767b48 * 0xc;
                for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *piVar5 = (pSVar10->projected_vertex).transformed_x;
                  pSVar10 = (SRenderVertex *)((int)pSVar10 + (uint)bVar11 * -8 + 4);
                  piVar5 = piVar5 + (uint)bVar11 * -2 + 1;
                }
                for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *(char *)piVar5 = (char)(pSVar10->projected_vertex).transformed_x;
                  pSVar10 = (SRenderVertex *)((int)pSVar10 + (uint)bVar11 * -2 + 1);
                  piVar5 = (int *)((int)piVar5 + (uint)bVar11 * -2 + 1);
                }
                DAT_00767b48 = DAT_00767b48 + 1;
                engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00433a00
                          (pSVar8,(SRenderVertex *)(&DAT_0076874c + uVar6 * 0xc),
                           (SRenderVertex *)(&DAT_00768d4c + DAT_00767b48 * 0xc));
                DAT_00767b48 = DAT_00767b48 + 1;
              }
              iStack00000010 = iStack00000010 + 1;
              pSVar8 = pSVar8 + 1;
            } while (iStack00000010 < (int)DAT_00767b44);
          }
          if (2 < (int)DAT_00767b48) {
            iStack00000014 = 0;
            if (0 < (int)DAT_00767b48) {
              pSVar8 = (SRenderVertex *)&DAT_00768d4c;
              do {
                uVar6 = iStack00000014 + 1;
                if (uVar6 == DAT_00767b48) {
                  uVar6 = uVar6 ^ DAT_00767b48;
                }
                bVar3 = (pSVar8->projected_vertex).transformed_y <=
                        -(pSVar8->projected_vertex).transformed_z;
                if ((int)(&DAT_00768d50)[uVar6 * 0xc] <= (int)-(&DAT_00768d54)[uVar6 * 0xc]) {
                  bVar3 = bVar3 | 2;
                }
                switch(bVar3) {
                case 0:
                  pSVar10 = pSVar8;
                  piVar5 = &DAT_00766c74 + DAT_00766c70 * 0xc;
                  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                    *piVar5 = (pSVar10->projected_vertex).transformed_x;
                    pSVar10 = (SRenderVertex *)((int)pSVar10 + (uint)bVar11 * -8 + 4);
                    piVar5 = piVar5 + (uint)bVar11 * -2 + 1;
                  }
                  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
                    *(char *)piVar5 = (char)(pSVar10->projected_vertex).transformed_x;
                    pSVar10 = (SRenderVertex *)((int)pSVar10 + (uint)bVar11 * -2 + 1);
                    piVar5 = (int *)((int)piVar5 + (uint)bVar11 * -2 + 1);
                  }
                  DAT_00766c70 = DAT_00766c70 + 1;
                  break;
                case 1:
                  engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_00433b30
                            ((SRenderVertex *)(&DAT_00768d4c + uVar6 * 0xc),pSVar8,
                             (SRenderVertex *)(&DAT_00766c74 + DAT_00766c70 * 0xc));
                  DAT_00766c70 = DAT_00766c70 + 1;
                  break;
                case 2:
                  pSVar10 = pSVar8;
                  piVar5 = &DAT_00766c74 + DAT_00766c70 * 0xc;
                  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                    *piVar5 = (pSVar10->projected_vertex).transformed_x;
                    pSVar10 = (SRenderVertex *)((int)pSVar10 + (uint)bVar11 * -8 + 4);
                    piVar5 = piVar5 + (uint)bVar11 * -2 + 1;
                  }
                  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
                    *(char *)piVar5 = (char)(pSVar10->projected_vertex).transformed_x;
                    pSVar10 = (SRenderVertex *)((int)pSVar10 + (uint)bVar11 * -2 + 1);
                    piVar5 = (int *)((int)piVar5 + (uint)bVar11 * -2 + 1);
                  }
                  DAT_00766c70 = DAT_00766c70 + 1;
                  engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_00433b30
                            (pSVar8,(SRenderVertex *)(&DAT_00768d4c + uVar6 * 0xc),
                             (SRenderVertex *)(&DAT_00766c74 + DAT_00766c70 * 0xc));
                  DAT_00766c70 = DAT_00766c70 + 1;
                }
                iStack00000014 = iStack00000014 + 1;
                pSVar8 = pSVar8 + 1;
              } while (iStack00000014 < (int)DAT_00767b48);
            }
            if (2 < DAT_00766c70) {
              piVar5 = &DAT_00766c74;
              iVar4 = 0;
              if (0 < DAT_00766c70) {
                do {
                  iVar1 = piVar5[2];
                  if (iVar1 == 0) {
                    piVar5[2] = 1;
                    *piVar5 = 0;
                    piVar5[1] = 0;
                  }
                  else if (iVar1 < *piVar5) {
                    *piVar5 = iVar1;
                  }
                  else {
                    iVar7 = -iVar1;
                    if (-*piVar5 == iVar1 || iVar7 < *piVar5) {
                      iVar2 = piVar5[1];
                      if (piVar5[2] < iVar2) {
                        piVar5[1] = piVar5[2];
                      }
                      else if (-iVar2 != iVar1 && iVar2 <= iVar7) {
                        piVar5[1] = iVar7;
                      }
                    }
                    else {
                      *piVar5 = iVar7;
                    }
                  }
                  iVar4 = iVar4 + 1;
                  piVar5 = piVar5 + 0xc;
                } while (iVar4 < DAT_00766c70);
              }
            }
          }
        }
      }
      return 0;
    }
    uVar6 = in_stack_00000018 + 2;
    if (uVar6 == DAT_00767b3c) {
      uVar6 = uVar6 ^ DAT_00767b3c;
    }
    unaff_EBP = (SRenderVertex *)(&DAT_0076814c + uVar6 * 0xc);
    bVar3 = unaff_EBX[1].projected_vertex.transformed_z <= (in_EDX->projected_vertex).transformed_x;
    if ((int)(&DAT_00768154)[uVar6 * 0xc] <= (unaff_EBP->projected_vertex).transformed_x) {
      bVar3 = bVar3 | 2;
    }
    unaff_EBX = in_EDX;
    in_stack_00000018 = iVar4;
    switch(bVar3) {
    case 0:
      pSVar8 = in_EDX;
      piVar5 = &DAT_00767b4c + DAT_00767b40 * 0xc;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar5 = (pSVar8->projected_vertex).transformed_x;
        pSVar8 = (SRenderVertex *)((int)pSVar8 + (uint)bVar11 * -8 + 4);
        piVar5 = piVar5 + (uint)bVar11 * -2 + 1;
      }
      for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(char *)piVar5 = (char)(pSVar8->projected_vertex).transformed_x;
        pSVar8 = (SRenderVertex *)((int)pSVar8 + (uint)bVar11 * -2 + 1);
        piVar5 = (int *)((int)piVar5 + (uint)bVar11 * -2 + 1);
      }
      DAT_00767b40 = DAT_00767b40 + 1;
      break;
    case 1:
      engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_004337a0
                (unaff_EBP,in_EDX,(SRenderVertex *)(&DAT_00767b4c + DAT_00767b40 * 0xc));
      DAT_00767b40 = DAT_00767b40 + 1;
      break;
    case 2:
      goto switchD_00434485_caseD_2;
    }
  } while( true );
switchD_00434485_caseD_2:
  unaff_EDI = DAT_00767b40 * 0x30;
  in_ECX = 0x30;
  goto code_r0x0043474d;
}
