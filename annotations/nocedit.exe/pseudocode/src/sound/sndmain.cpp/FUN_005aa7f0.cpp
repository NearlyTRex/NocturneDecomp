// Name: sound_sndmain.cpp_FUN_005aa7f0
// Address: 005aa7f0
// Address Range: [[005aa7f0, 005aadfc]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005aa7f0()
// Cross-references:
//   sound_snddx.cpp_FUN_005b12e0 (005b12e0) at 005b13bf [UNCONDITIONAL_CALL]
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   sound_sndmain.cpp_FUN_005aa7b0
//   sound_sndmain.cpp_FUN_005aa7d0

#include "nocturne.h"

/* Signature: undefined1 sound_sndmain.cpp_FUN_005aa7f0(undefined4 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4
   param_7, undefined4 param_8, undefined4 param_9, undefined4 param_10, undefined4 param_11) */

void sound_sndmain_cpp_FUN_005aa7f0(void)

{
  undefined1 uVar1;
  float fVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  short *psVar8;
  float10 fVar9;
  float10 fVar10;
  double dVar11;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  short *in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  short *in_stack_00000028;
  int in_stack_0000002c;
  undefined1 local_14;
  
  if (0 < in_stack_0000002c) {
    if (((in_stack_0000000c == in_stack_00000020) && (in_stack_00000004 == in_stack_00000018)) &&
       (in_stack_00000008 == in_stack_0000001c)) {
      if (in_stack_00000014 != in_stack_00000028) {
        uVar4 = ((int)((in_stack_00000004 + (in_stack_00000004 >> 0x1f) * -8) -
                      (uint)((in_stack_00000004 >> 0x1f) << 2 < 0)) >> 3) * in_stack_0000002c *
                in_stack_0000001c;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)in_stack_00000028 = *(undefined4 *)in_stack_00000014;
          in_stack_00000014 = in_stack_00000014 + 2;
          in_stack_00000028 = in_stack_00000028 + 2;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(char *)in_stack_00000028 = (char)*in_stack_00000014;
          in_stack_00000014 = (short *)((int)in_stack_00000014 + 1);
          in_stack_00000028 = (short *)((int)in_stack_00000028 + 1);
        }
      }
    }
    else {
      fVar2 = (float)in_stack_0000000c / (float)in_stack_00000020;
      if (in_stack_00000004 == 8) {
        if (in_stack_00000018 == 8) {
          if (in_stack_00000008 == 1) {
            if (in_stack_0000001c == 1) {
              iVar6 = 0;
              if (0 < in_stack_0000002c) {
                fVar9 = (float10)fVar2;
                do {
                  fVar10 = (float10)iVar6 * fVar9;
                  dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar6,in_stack_00000014));
                  in_stack_00000014 = SUB84(dVar11,0);
                  iVar6 = (int)((ulonglong)dVar11 >> 0x20) + 1;
                  *(undefined1 *)in_stack_00000028 =
                       *(undefined1 *)((int)ROUND(fVar10) + (int)in_stack_00000014);
                  in_stack_00000028 = (short *)((int)in_stack_00000028 + 1);
                } while (iVar6 < in_stack_0000002c);
              }
            }
            else {
              iVar6 = 0;
              if (0 < in_stack_0000002c) {
                fVar9 = (float10)fVar2;
                do {
                  fVar10 = (float10)iVar6 * fVar9;
                  dVar11 = crt_math_c_round_FUN_005fe6b0
                                     ((double)CONCAT44(in_stack_00000028,in_stack_00000014));
                  puVar7 = (undefined1 *)((ulonglong)dVar11 >> 0x20);
                  in_stack_00000014 = SUB84(dVar11,0);
                  in_stack_00000028 = (short *)(puVar7 + 2);
                  uVar1 = *(undefined1 *)((int)ROUND(fVar10) + (int)in_stack_00000014);
                  puVar7[1] = uVar1;
                  iVar6 = iVar6 + 1;
                  *puVar7 = uVar1;
                } while (iVar6 < in_stack_0000002c);
              }
            }
          }
          else if (in_stack_0000001c == 1) {
            iVar6 = 0;
            if (0 < in_stack_0000002c) {
              fVar9 = (float10)fVar2;
              do {
                fVar10 = (float10)iVar6 * fVar9;
                dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar6,in_stack_00000014));
                in_stack_00000014 = SUB84(dVar11,0);
                local_14 = (undefined1)
                           ((int)(char)in_stack_00000014[(int)ROUND(fVar10)] +
                            (int)*(char *)((int)in_stack_00000014 + (int)ROUND(fVar10) * 2 + 1) >> 1
                           );
                iVar6 = (int)((ulonglong)dVar11 >> 0x20) + 1;
                *(undefined1 *)in_stack_00000028 = local_14;
                in_stack_00000028 = (short *)((int)in_stack_00000028 + 1);
              } while (iVar6 < in_stack_0000002c);
            }
          }
          else {
            iVar6 = 0;
            if (0 < in_stack_0000002c) {
              fVar9 = (float10)fVar2;
              do {
                fVar10 = (float10)iVar6 * fVar9;
                dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar6,in_stack_00000014));
                in_stack_00000014 = SUB84(dVar11,0);
                *(char *)in_stack_00000028 = (char)in_stack_00000014[(int)ROUND(fVar10)];
                iVar6 = (int)((ulonglong)dVar11 >> 0x20) + 1;
                *(undefined1 *)((int)in_stack_00000028 + 1) =
                     *(undefined1 *)((int)in_stack_00000014 + (int)ROUND(fVar10) * 2 + 1);
                in_stack_00000028 = in_stack_00000028 + 1;
              } while (iVar6 < in_stack_0000002c);
            }
          }
        }
        else if (in_stack_00000008 == 1) {
          if (in_stack_0000001c == 1) {
            iVar6 = 0;
            if (0 < in_stack_0000002c) {
              fVar9 = (float10)fVar2;
              do {
                fVar10 = (float10)iVar6 * fVar9;
                dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar6,in_stack_00000014));
                in_stack_00000014 = SUB84(dVar11,0);
                iVar6 = (int)((ulonglong)dVar11 >> 0x20) + 1;
                *in_stack_00000028 =
                     (short)*(char *)((int)ROUND(fVar10) + (int)in_stack_00000014) << 8;
                in_stack_00000028 = in_stack_00000028 + 1;
              } while (iVar6 < in_stack_0000002c);
            }
          }
          else {
            iVar6 = 0;
            if (0 < in_stack_0000002c) {
              fVar9 = (float10)fVar2;
              do {
                fVar10 = (float10)iVar6 * fVar9;
                dVar11 = crt_math_c_round_FUN_005fe6b0
                                   ((double)CONCAT44(in_stack_00000028,in_stack_00000014));
                psVar8 = (short *)((ulonglong)dVar11 >> 0x20);
                in_stack_00000014 = SUB84(dVar11,0);
                in_stack_00000028 = psVar8 + 2;
                sVar3 = (short)*(char *)((int)ROUND(fVar10) + (int)in_stack_00000014) << 8;
                psVar8[1] = sVar3;
                iVar6 = iVar6 + 1;
                *psVar8 = sVar3;
              } while (iVar6 < in_stack_0000002c);
            }
          }
        }
        else if (in_stack_0000001c == 1) {
          iVar6 = 0;
          if (0 < in_stack_0000002c) {
            fVar9 = (float10)fVar2;
            do {
              fVar10 = (float10)iVar6 * fVar9;
              dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar6,in_stack_00000014));
              in_stack_00000014 = SUB84(dVar11,0);
              iVar6 = (int)((ulonglong)dVar11 >> 0x20) + 1;
              *in_stack_00000028 =
                   (char)in_stack_00000014[(int)ROUND(fVar10)] * 0x80 +
                   *(char *)((int)in_stack_00000014 + (int)ROUND(fVar10) * 2 + 1) * 0x80;
              in_stack_00000028 = in_stack_00000028 + 1;
            } while (iVar6 < in_stack_0000002c);
          }
        }
        else {
          iVar6 = 0;
          if (0 < in_stack_0000002c) {
            fVar9 = (float10)fVar2;
            do {
              fVar10 = (float10)iVar6 * fVar9;
              dVar11 = crt_math_c_round_FUN_005fe6b0
                                 ((double)CONCAT44(in_stack_00000028,in_stack_00000014));
              psVar8 = (short *)((ulonglong)dVar11 >> 0x20);
              in_stack_00000014 = SUB84(dVar11,0);
              *psVar8 = (short)(char)in_stack_00000014[(int)ROUND(fVar10)] << 8;
              in_stack_00000028 = psVar8 + 2;
              iVar6 = iVar6 + 1;
              psVar8[1] = (short)*(char *)((int)in_stack_00000014 + (int)ROUND(fVar10) * 2 + 1) << 8
              ;
            } while (iVar6 < in_stack_0000002c);
          }
        }
      }
      else if (in_stack_00000018 == 8) {
        if (in_stack_00000008 == 1) {
          if (in_stack_0000001c == 1) {
            iVar6 = 0;
            if (0 < in_stack_0000002c) {
              fVar9 = (float10)fVar2;
              do {
                fVar10 = (float10)iVar6 * fVar9;
                dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar6,in_stack_00000014));
                in_stack_00000014 = SUB84(dVar11,0);
                iVar6 = (int)((ulonglong)dVar11 >> 0x20) + 1;
                *(char *)in_stack_00000028 =
                     (char)((ushort)in_stack_00000014[(int)ROUND(fVar10)] >> 8);
                in_stack_00000028 = (short *)((int)in_stack_00000028 + 1);
              } while (iVar6 < in_stack_0000002c);
            }
          }
          else {
            iVar6 = 0;
            if (0 < in_stack_0000002c) {
              fVar9 = (float10)fVar2;
              do {
                fVar10 = (float10)iVar6 * fVar9;
                dVar11 = crt_math_c_round_FUN_005fe6b0
                                   ((double)CONCAT44(in_stack_00000028,in_stack_00000014));
                puVar7 = (undefined1 *)((ulonglong)dVar11 >> 0x20);
                in_stack_00000014 = SUB84(dVar11,0);
                in_stack_00000028 = (short *)(puVar7 + 2);
                local_14 = (undefined1)((ushort)in_stack_00000014[(int)ROUND(fVar10)] >> 8);
                puVar7[1] = local_14;
                iVar6 = iVar6 + 1;
                *puVar7 = local_14;
              } while (iVar6 < in_stack_0000002c);
            }
          }
        }
        else if (in_stack_0000001c == 1) {
          iVar6 = 0;
          if (0 < in_stack_0000002c) {
            fVar9 = (float10)fVar2;
            do {
              fVar10 = (float10)iVar6 * fVar9;
              dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar6,in_stack_00000014));
              in_stack_00000014 = SUB84(dVar11,0);
              iVar6 = (int)((ulonglong)dVar11 >> 0x20) + 1;
              *(char *)in_stack_00000028 =
                   (char)((int)in_stack_00000014[(int)ROUND(fVar10) * 2] +
                          (*(int *)(in_stack_00000014 + (int)ROUND(fVar10) * 2) >> 0x10) >> 9);
              in_stack_00000028 = (short *)((int)in_stack_00000028 + 1);
            } while (iVar6 < in_stack_0000002c);
          }
        }
        else {
          iVar6 = 0;
          if (0 < in_stack_0000002c) {
            fVar9 = (float10)fVar2;
            do {
              fVar10 = (float10)iVar6 * fVar9;
              dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar6,in_stack_00000014));
              in_stack_00000014 = SUB84(dVar11,0);
              local_14 = (undefined1)((ushort)in_stack_00000014[(int)ROUND(fVar10) * 2] >> 8);
              *(undefined1 *)in_stack_00000028 = local_14;
              local_14 = (undefined1)
                         ((uint)*(undefined4 *)(in_stack_00000014 + (int)ROUND(fVar10) * 2) >> 0x18)
              ;
              iVar6 = (int)((ulonglong)dVar11 >> 0x20) + 1;
              *(undefined1 *)((int)in_stack_00000028 + 1) = local_14;
              in_stack_00000028 = in_stack_00000028 + 1;
            } while (iVar6 < in_stack_0000002c);
          }
        }
      }
      else if (in_stack_00000008 == 1) {
        if (in_stack_0000001c == 1) {
          iVar6 = 0;
          if (0 < in_stack_0000002c) {
            fVar9 = (float10)fVar2;
            do {
              fVar10 = (float10)iVar6 * fVar9;
              dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar6,in_stack_00000014));
              in_stack_00000014 = SUB84(dVar11,0);
              iVar6 = (int)((ulonglong)dVar11 >> 0x20) + 1;
              *in_stack_00000028 = in_stack_00000014[(int)ROUND(fVar10)];
              in_stack_00000028 = in_stack_00000028 + 1;
            } while (iVar6 < in_stack_0000002c);
          }
        }
        else {
          iVar6 = 0;
          if (0 < in_stack_0000002c) {
            fVar9 = (float10)fVar2;
            do {
              fVar10 = (float10)iVar6 * fVar9;
              dVar11 = crt_math_c_round_FUN_005fe6b0
                                 ((double)CONCAT44(in_stack_00000028,in_stack_00000014));
              psVar8 = (short *)((ulonglong)dVar11 >> 0x20);
              in_stack_00000014 = SUB84(dVar11,0);
              in_stack_00000028 = psVar8 + 2;
              sVar3 = in_stack_00000014[(int)ROUND(fVar10)];
              psVar8[1] = sVar3;
              iVar6 = iVar6 + 1;
              *psVar8 = sVar3;
            } while (iVar6 < in_stack_0000002c);
          }
        }
      }
      else if (in_stack_0000001c == 1) {
        iVar6 = 0;
        if (0 < in_stack_0000002c) {
          fVar9 = (float10)fVar2;
          do {
            fVar10 = (float10)iVar6 * fVar9;
            dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar6,in_stack_00000014));
            in_stack_00000014 = SUB84(dVar11,0);
            iVar6 = (int)((ulonglong)dVar11 >> 0x20) + 1;
            *in_stack_00000028 =
                 (short)((int)in_stack_00000014[(int)ROUND(fVar10) * 2] +
                         (*(int *)(in_stack_00000014 + (int)ROUND(fVar10) * 2) >> 0x10) >> 1);
            in_stack_00000028 = in_stack_00000028 + 1;
          } while (iVar6 < in_stack_0000002c);
        }
      }
      else {
        iVar6 = 0;
        if (0 < in_stack_0000002c) {
          fVar9 = (float10)fVar2;
          do {
            fVar10 = (float10)iVar6 * fVar9;
            dVar11 = crt_math_c_round_FUN_005fe6b0
                               ((double)CONCAT44(in_stack_00000028,in_stack_00000014));
            psVar8 = (short *)((ulonglong)dVar11 >> 0x20);
            in_stack_00000014 = SUB84(dVar11,0);
            *psVar8 = in_stack_00000014[(int)ROUND(fVar10) * 2];
            in_stack_00000028 = psVar8 + 2;
            iVar6 = iVar6 + 1;
            psVar8[1] = in_stack_00000014[(int)ROUND(fVar10) * 2 + 1];
          } while (iVar6 < in_stack_0000002c);
        }
      }
    }
    if (((in_stack_00000010 != 0) && (in_stack_00000024 == 0)) ||
       ((in_stack_00000010 == 0 && (in_stack_00000024 != 0)))) {
      if (in_stack_00000018 != 8) {
        sound_sndmain_cpp_FUN_005aa7d0();
        return;
      }
      sound_sndmain_cpp_FUN_005aa7b0();
    }
  }
  return;
}


// Assembly code:
// 005aa7f0: PUSH EBX
//   Label: sound_sndmain.cpp_FUN_005aa7f0
// 005aa7f1: PUSH ESI
// 005aa7f2: PUSH EDI
// 005aa7f3: PUSH EBP
// 005aa7f4: SUB ESP,0x4c
// 005aa7f7: MOV EDX,dword ptr [ESP + 0x64]
//   XREF to: Stack[0x8] (READ)
// 005aa7fb: MOV ECX,dword ptr [ESP + 0x68]
//   XREF to: Stack[0xc] (READ)
// 005aa7ff: MOV EDI,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x14] (READ)
// 005aa803: MOV ESI,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x1c] (READ)
// 005aa807: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x20] (READ)
// 005aa80b: MOV EBX,dword ptr [ESP + 0x88]
//   XREF to: Stack[0x2c] (READ)
// 005aa812: CMP EBX,0x1
// 005aa815: JL 0x005aa8b0
//   XREF to: 005aa8b0 (CONDITIONAL_JUMP)
// 005aa81b: CMP ECX,EAX
// 005aa81d: JNZ 0x005aa8b8
//   XREF to: 005aa8b8 (CONDITIONAL_JUMP)
// 005aa823: MOV EBP,dword ptr [ESP + 0x60]
//   XREF to: Stack[0x4] (READ)
// 005aa827: CMP EBP,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x18] (READ)
// 005aa82b: JNZ 0x005aa8b8
//   XREF to: 005aa8b8 (CONDITIONAL_JUMP)
// 005aa831: CMP EDX,ESI
// 005aa833: JNZ 0x005aa8b8
//   XREF to: 005aa8b8 (CONDITIONAL_JUMP)
// 005aa839: CMP EDI,dword ptr [ESP + 0x84]
//   XREF to: Stack[0x28] (READ)
// 005aa840: JZ 0x005aa872
//   XREF to: 005aa872 (CONDITIONAL_JUMP)
// 005aa842: MOV EDX,EBP
// 005aa844: MOV EAX,EBP
// 005aa846: SAR EDX,0x1f
// 005aa849: SHL EDX,0x3
// 005aa84c: SBB EAX,EDX
// 005aa84e: SAR EAX,0x3
// 005aa851: MOV ECX,EAX
// 005aa853: IMUL ECX,EBX
// 005aa856: IMUL ECX,ESI
// 005aa859: MOV ESI,EDI
// 005aa85b: MOV EDI,dword ptr [ESP + 0x84]
//   XREF to: Stack[0x28] (READ)
// 005aa862: PUSH EDI
// 005aa863: MOV EAX,ECX
// 005aa865: SHR ECX,0x2
// 005aa868: MOVSD.REP ES:EDI,ESI
// 005aa86a: MOV CL,AL
// 005aa86c: AND CL,0x3
// 005aa86f: MOVSB.REP ES:EDI,ESI
// 005aa871: POP EDI
// 005aa872: CMP dword ptr [ESP + 0x6c],0x0
//   Label: LAB_005aa872
//   XREF to: Stack[0x10] (READ)
// 005aa877: JZ 0x005aa883
//   XREF to: 005aa883 (CONDITIONAL_JUMP)
// 005aa879: CMP dword ptr [ESP + 0x80],0x0
//   XREF to: Stack[0x24] (READ)
// 005aa881: JZ 0x005aa894
//   XREF to: 005aa894 (CONDITIONAL_JUMP)
// 005aa883: CMP dword ptr [ESP + 0x6c],0x0
//   Label: LAB_005aa883
//   XREF to: Stack[0x10] (READ)
// 005aa888: JNZ 0x005aa8b0
//   XREF to: 005aa8b0 (CONDITIONAL_JUMP)
// 005aa88a: CMP dword ptr [ESP + 0x80],0x0
//   XREF to: Stack[0x24] (READ)
// 005aa892: JZ 0x005aa8b0
//   XREF to: 005aa8b0 (CONDITIONAL_JUMP)
// 005aa894: CMP dword ptr [ESP + 0x74],0x8
//   Label: LAB_005aa894
//   XREF to: Stack[0x18] (READ)
// 005aa899: JNZ 0x005aade4
//   XREF to: 005aade4 (CONDITIONAL_JUMP)
// 005aa89f: PUSH EBX
// 005aa8a0: MOV EDX,dword ptr [ESP + 0x88]
//   XREF to: Stack[0x28] (READ)
// 005aa8a7: PUSH EDX
// 005aa8a8: CALL sound_sndmain.cpp_FUN_005aa7b0
//   XREF to: 005aa7b0 (UNCONDITIONAL_CALL)
// 005aa8ad: ADD ESP,0x8
// 005aa8b0: ADD ESP,0x4c
//   Label: LAB_005aa8b0
// 005aa8b3: POP EBP
// 005aa8b4: POP EDI
// 005aa8b5: POP ESI
// 005aa8b6: POP EBX
// 005aa8b7: RET
// 005aa8b8: MOV dword ptr [ESP + 0x44],ECX
//   Label: LAB_005aa8b8
//   XREF to: Stack[-0x18] (WRITE)
// 005aa8bc: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005aa8c0: FILD dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x18] (READ)
// 005aa8c4: FILD dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x14] (READ)
// 005aa8c8: FDIVP
// 005aa8ca: MOV ECX,dword ptr [ESP + 0x60]
//   XREF to: Stack[0x4] (READ)
// 005aa8ce: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x44] (WRITE)
// 005aa8d2: CMP ECX,0x8
// 005aa8d5: JNZ 0x005aab53
//   XREF to: 005aab53 (CONDITIONAL_JUMP)
// 005aa8db: MOV EBP,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x18] (READ)
// 005aa8df: MOV EAX,EDI
// 005aa8e1: CMP EBP,ECX
// 005aa8e3: JNZ 0x005aaa0d
//   XREF to: 005aaa0d (CONDITIONAL_JUMP)
// 005aa8e9: MOV ECX,dword ptr [ESP + 0x84]
//   XREF to: Stack[0x28] (READ)
// 005aa8f0: CMP EDX,0x1
// 005aa8f3: JNZ 0x005aa977
//   XREF to: 005aa977 (CONDITIONAL_JUMP)
// 005aa8f9: CMP ESI,EDX
// 005aa8fb: JNZ 0x005aa935
//   XREF to: 005aa935 (CONDITIONAL_JUMP)
// 005aa8fd: XOR EDX,EDX
// 005aa8ff: CMP EDX,EBX
// 005aa901: JGE 0x005aa872
//   XREF to: 005aa872 (CONDITIONAL_JUMP)
// 005aa907: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x44] (READ)
// 005aa90b: MOV ESI,ECX
// 005aa90d: MOV dword ptr [ESP + 0x48],EDX
//   Label: LAB_005aa90d
//   XREF to: Stack[-0x14] (WRITE)
// 005aa911: FILD dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x14] (READ)
// 005aa915: FMUL ST1
// 005aa917: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005aa91c: FISTP dword ptr [ESP]
//   XREF to: Stack[-0x5c] (DATA)
// 005aa91f: MOV EDI,dword ptr [ESP]
//   XREF to: Stack[-0x5c] (DATA)
// 005aa922: INC ESI
// 005aa923: MOV CL,byte ptr [EDI + EAX*0x1]
// 005aa926: INC EDX
// 005aa927: MOV byte ptr [ESI + -0x1],CL
// 005aa92a: CMP EDX,EBX
// 005aa92c: JL 0x005aa90d
//   XREF to: 005aa90d (CONDITIONAL_JUMP)
// 005aa92e: FSTP ST0
// 005aa930: JMP 0x005aa872
//   XREF to: 005aa872 (UNCONDITIONAL_JUMP)
// 005aa935: XOR ESI,ESI
//   Label: LAB_005aa935
// 005aa937: CMP ESI,EBX
// 005aa939: JGE 0x005aa872
//   XREF to: 005aa872 (CONDITIONAL_JUMP)
// 005aa93f: LEA EDX,[ESI + ESI*0x1]
// 005aa942: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x44] (READ)
// 005aa946: ADD EDX,ECX
// 005aa948: MOV dword ptr [ESP + 0x44],ESI
//   Label: LAB_005aa948
//   XREF to: Stack[-0x18] (WRITE)
// 005aa94c: FILD dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x18] (READ)
// 005aa950: FMUL ST1
// 005aa952: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005aa957: FISTP dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x58] (WRITE)
// 005aa95b: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x58] (READ)
// 005aa95f: ADD EDX,0x2
// 005aa962: MOV CL,byte ptr [ECX + EAX*0x1]
// 005aa965: MOV byte ptr [EDX + -0x1],CL
// 005aa968: INC ESI
// 005aa969: MOV byte ptr [EDX + -0x2],CL
// 005aa96c: CMP ESI,EBX
// 005aa96e: JL 0x005aa948
//   XREF to: 005aa948 (CONDITIONAL_JUMP)
// 005aa970: FSTP ST0
// 005aa972: JMP 0x005aa872
//   XREF to: 005aa872 (UNCONDITIONAL_JUMP)
// 005aa977: CMP ESI,0x1
//   Label: LAB_005aa977
// 005aa97a: JNZ 0x005aa9c8
//   XREF to: 005aa9c8 (CONDITIONAL_JUMP)
// 005aa97c: XOR EDX,EDX
// 005aa97e: CMP EDX,EBX
// 005aa980: JGE 0x005aa872
//   XREF to: 005aa872 (CONDITIONAL_JUMP)
// 005aa986: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x44] (READ)
// 005aa98a: MOV ESI,ECX
// 005aa98c: MOV dword ptr [ESP + 0x44],EDX
//   Label: LAB_005aa98c
//   XREF to: Stack[-0x18] (WRITE)
// 005aa990: FILD dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x18] (READ)
// 005aa994: FMUL ST1
// 005aa996: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005aa99b: FISTP dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x54] (WRITE)
// 005aa99f: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x54] (READ)
// 005aa9a3: MOVSX EDI,byte ptr [EAX + ECX*0x2 + 0x1]
// 005aa9a8: MOVSX ECX,byte ptr [EAX + ECX*0x2]
// 005aa9ac: ADD ECX,EDI
// 005aa9ae: SAR ECX,0x1
// 005aa9b0: MOV dword ptr [ESP + 0x44],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 005aa9b4: INC ESI
// 005aa9b5: MOV CL,byte ptr [ESP + 0x44]
//   XREF to: Stack[-0x18] (READ)
// 005aa9b9: INC EDX
// 005aa9ba: MOV byte ptr [ESI + -0x1],CL
// 005aa9bd: CMP EDX,EBX
// 005aa9bf: JL 0x005aa98c
//   XREF to: 005aa98c (CONDITIONAL_JUMP)
// 005aa9c1: FSTP ST0
// 005aa9c3: JMP 0x005aa872
//   XREF to: 005aa872 (UNCONDITIONAL_JUMP)
// 005aa9c8: XOR EDX,EDX
//   Label: LAB_005aa9c8
// 005aa9ca: CMP EDX,EBX
// 005aa9cc: JGE 0x005aa872
//   XREF to: 005aa872 (CONDITIONAL_JUMP)
// 005aa9d2: LEA ESI,[EDX + EDX*0x1]
// 005aa9d5: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x44] (READ)
// 005aa9d9: ADD ESI,ECX
// 005aa9db: MOV dword ptr [ESP + 0x44],EDX
//   Label: LAB_005aa9db
//   XREF to: Stack[-0x18] (WRITE)
// 005aa9df: FILD dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x18] (READ)
// 005aa9e3: FMUL ST1
// 005aa9e5: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005aa9ea: FISTP dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x50] (WRITE)
// 005aa9ee: MOV EDI,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x50] (READ)
// 005aa9f2: MOV CL,byte ptr [EAX + EDI*0x2]
// 005aa9f5: MOV byte ptr [ESI],CL
// 005aa9f7: ADD ESI,0x2
// 005aa9fa: MOV CL,byte ptr [EAX + EDI*0x2 + 0x1]
// 005aa9fe: INC EDX
// 005aa9ff: MOV byte ptr [ESI + -0x1],CL
// 005aaa02: CMP EDX,EBX
// 005aaa04: JL 0x005aa9db
//   XREF to: 005aa9db (CONDITIONAL_JUMP)
// 005aaa06: FSTP ST0
// 005aaa08: JMP 0x005aa872
//   XREF to: 005aa872 (UNCONDITIONAL_JUMP)
// 005aaa0d: MOV ECX,dword ptr [ESP + 0x84]
//   Label: LAB_005aaa0d
//   XREF to: Stack[0x28] (READ)
// 005aaa14: CMP EDX,0x1
// 005aaa17: JNZ 0x005aaab3
//   XREF to: 005aaab3 (CONDITIONAL_JUMP)
// 005aaa1d: CMP ESI,EDX
// 005aaa1f: JNZ 0x005aaa66
//   XREF to: 005aaa66 (CONDITIONAL_JUMP)
// 005aaa21: XOR EDX,EDX
// 005aaa23: CMP EDX,EBX
// 005aaa25: JGE 0x005aa872
//   XREF to: 005aa872 (CONDITIONAL_JUMP)
// 005aaa2b: LEA ESI,[EDX + EDX*0x1]
// 005aaa2e: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x44] (READ)
// 005aaa32: ADD ESI,ECX
// 005aaa34: MOV dword ptr [ESP + 0x44],EDX
//   Label: LAB_005aaa34
//   XREF to: Stack[-0x18] (WRITE)
// 005aaa38: FILD dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x18] (READ)
// 005aaa3c: FMUL ST1
// 005aaa3e: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005aaa43: FISTP dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x4c] (WRITE)
// 005aaa47: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x4c] (READ)
// 005aaa4b: MOVSX CX,byte ptr [ECX + EAX*0x1]
// 005aaa50: ADD ESI,0x2
// 005aaa53: SHL ECX,0x8
// 005aaa56: INC EDX
// 005aaa57: MOV word ptr [ESI + -0x2],CX
// 005aaa5b: CMP EDX,EBX
// 005aaa5d: JL 0x005aaa34
//   XREF to: 005aaa34 (CONDITIONAL_JUMP)
// 005aaa5f: FSTP ST0
// 005aaa61: JMP 0x005aa872
//   XREF to: 005aa872 (UNCONDITIONAL_JUMP)
// 005aaa66: XOR ESI,ESI
//   Label: LAB_005aaa66
// 005aaa68: CMP ESI,EBX
// 005aaa6a: JGE 0x005aa872
//   XREF to: 005aa872 (CONDITIONAL_JUMP)
// 005aaa70: LEA EDX,[ESI*0x4 + 0x0]
// 005aaa77: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x44] (READ)
// 005aaa7b: ADD EDX,ECX
// 005aaa7d: MOV dword ptr [ESP + 0x48],ESI
//   Label: LAB_005aaa7d
//   XREF to: Stack[-0x14] (WRITE)
// 005aaa81: FILD dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x14] (READ)
// 005aaa85: FMUL ST1
// 005aaa87: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005aaa8c: FISTP dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x48] (WRITE)
// 005aaa90: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x48] (READ)
// 005aaa94: MOVSX CX,byte ptr [ECX + EAX*0x1]
// 005aaa99: ADD EDX,0x4
// 005aaa9c: SHL ECX,0x8
// 005aaa9f: MOV word ptr [EDX + -0x2],CX
// 005aaaa3: INC ESI
// 005aaaa4: MOV word ptr [EDX + -0x4],CX
// 005aaaa8: CMP ESI,EBX
// 005aaaaa: JL 0x005aaa7d
//   XREF to: 005aaa7d (CONDITIONAL_JUMP)
// 005aaaac: FSTP ST0
// 005aaaae: JMP 0x005aa872
//   XREF to: 005aa872 (UNCONDITIONAL_JUMP)
// 005aaab3: CMP ESI,0x1
//   Label: LAB_005aaab3
// 005aaab6: JNZ 0x005aab05
//   XREF to: 005aab05 (CONDITIONAL_JUMP)
// 005aaab8: XOR EDX,EDX
// 005aaaba: TEST EBX,EBX
// 005aaabc: JLE 0x005aa872
//   XREF to: 005aa872 (CONDITIONAL_JUMP)
// 005aaac2: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x44] (READ)
// 005aaac6: MOV ESI,ECX
// 005aaac8: MOV dword ptr [ESP + 0x48],EDX
//   Label: LAB_005aaac8
//   XREF to: Stack[-0x14] (WRITE)
// 005aaacc: FILD dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x14] (READ)
// 005aaad0: FMUL ST1
// 005aaad2: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005aaad7: FISTP dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x40] (WRITE)
// 005aaadb: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x40] (READ)
// 005aaadf: MOVSX DI,byte ptr [EAX + ECX*0x2 + 0x1]
// 005aaae5: ADD ESI,0x2
// 005aaae8: MOVSX CX,byte ptr [EAX + ECX*0x2]
// 005aaaed: SHL EDI,0x7
// 005aaaf0: SHL ECX,0x7
// 005aaaf3: INC EDX
// 005aaaf4: ADD ECX,EDI
// 005aaaf6: MOV word ptr [ESI + -0x2],CX
// 005aaafa: CMP EDX,EBX
// 005aaafc: JL 0x005aaac8
//   XREF to: 005aaac8 (CONDITIONAL_JUMP)
// 005aaafe: FSTP ST0
// 005aab00: JMP 0x005aa872
//   XREF to: 005aa872 (UNCONDITIONAL_JUMP)
// 005aab05: XOR ESI,ESI
//   Label: LAB_005aab05
// 005aab07: TEST EBX,EBX
// 005aab09: JLE 0x005aa872
//   XREF to: 005aa872 (CONDITIONAL_JUMP)
// 005aab0f: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x44] (READ)
// 005aab13: MOV EDX,ECX
// 005aab15: MOV dword ptr [ESP + 0x48],ESI
//   Label: LAB_005aab15
//   XREF to: Stack[-0x14] (WRITE)
// 005aab19: FILD dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x14] (READ)
// 005aab1d: FMUL ST1
// 005aab1f: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005aab24: FISTP dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x38] (WRITE)
// 005aab28: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x38] (READ)
// 005aab2c: MOVSX DI,byte ptr [EAX + ECX*0x2]
// 005aab31: SHL EDI,0x8
// 005aab34: MOV word ptr [EDX],DI
// 005aab37: ADD EDX,0x4
// 005aab3a: MOVSX CX,byte ptr [EAX + ECX*0x2 + 0x1]
// 005aab40: INC ESI
// 005aab41: SHL ECX,0x8
// 005aab44: MOV word ptr [EDX + -0x2],CX
// 005aab48: CMP ESI,EBX
// 005aab4a: JL 0x005aab15
//   XREF to: 005aab15 (CONDITIONAL_JUMP)
// 005aab4c: FSTP ST0
// 005aab4e: JMP 0x005aa872
//   XREF to: 005aa872 (UNCONDITIONAL_JUMP)
// 005aab53: MOV EAX,EDI
//   Label: LAB_005aab53
// 005aab55: CMP dword ptr [ESP + 0x74],0x8
//   XREF to: Stack[0x18] (READ)
// 005aab5a: JNZ 0x005aacb0
//   XREF to: 005aacb0 (CONDITIONAL_JUMP)
// 005aab60: CMP EDX,0x1
// 005aab63: JNZ 0x005aac00
//   XREF to: 005aac00 (CONDITIONAL_JUMP)
// 005aab69: CMP ESI,EDX
// 005aab6b: JNZ 0x005aabb0
//   XREF to: 005aabb0 (CONDITIONAL_JUMP)
// 005aab6d: XOR EDX,EDX
// 005aab6f: TEST EBX,EBX
// 005aab71: JLE 0x005aa872
//   XREF to: 005aa872 (CONDITIONAL_JUMP)
// 005aab77: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x44] (READ)
// 005aab7b: MOV ESI,dword ptr [ESP + 0x84]
//   XREF to: Stack[0x28] (READ)
// 005aab82: MOV dword ptr [ESP + 0x44],EDX
//   Label: LAB_005aab82
//   XREF to: Stack[-0x18] (WRITE)
// 005aab86: FILD dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x18] (READ)
// 005aab8a: FMUL ST1
// 005aab8c: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005aab91: FISTP dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x34] (WRITE)
// 005aab95: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x34] (READ)
// 005aab99: MOVSX ECX,word ptr [EAX + ECX*0x2]
// 005aab9d: INC ESI
// 005aab9e: SAR ECX,0x8
// 005aaba1: INC EDX
// 005aaba2: MOV byte ptr [ESI + -0x1],CL
// 005aaba5: CMP EDX,EBX
// 005aaba7: JL 0x005aab82
//   XREF to: 005aab82 (CONDITIONAL_JUMP)
// 005aaba9: FSTP ST0
// 005aabab: JMP 0x005aa872
//   XREF to: 005aa872 (UNCONDITIONAL_JUMP)
// 005aabb0: XOR ESI,ESI
//   Label: LAB_005aabb0
// 005aabb2: TEST EBX,EBX
// 005aabb4: JLE 0x005aa872
//   XREF to: 005aa872 (CONDITIONAL_JUMP)
// 005aabba: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x44] (READ)
// 005aabbe: MOV EDX,dword ptr [ESP + 0x84]
//   XREF to: Stack[0x28] (READ)
// 005aabc5: MOV dword ptr [ESP + 0x48],ESI
//   Label: LAB_005aabc5
//   XREF to: Stack[-0x14] (WRITE)
// 005aabc9: FILD dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x14] (READ)
// 005aabcd: FMUL ST1
// 005aabcf: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005aabd4: FISTP dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x30] (WRITE)
// 005aabd8: MOV ECX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x30] (READ)
// 005aabdc: MOVSX ECX,word ptr [EAX + ECX*0x2]
// 005aabe0: SAR ECX,0x8
// 005aabe3: MOV dword ptr [ESP + 0x44],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 005aabe7: ADD EDX,0x2
// 005aabea: MOV CL,byte ptr [ESP + 0x44]
//   XREF to: Stack[-0x18] (READ)
// 005aabee: MOV byte ptr [EDX + -0x1],CL
// 005aabf1: INC ESI
// 005aabf2: MOV byte ptr [EDX + -0x2],CL
// 005aabf5: CMP ESI,EBX
// 005aabf7: JL 0x005aabc5
//   XREF to: 005aabc5 (CONDITIONAL_JUMP)
// 005aabf9: FSTP ST0
// 005aabfb: JMP 0x005aa872
//   XREF to: 005aa872 (UNCONDITIONAL_JUMP)
// 005aac00: CMP ESI,0x1
//   Label: LAB_005aac00
// 005aac03: JNZ 0x005aac50
//   XREF to: 005aac50 (CONDITIONAL_JUMP)
// 005aac05: XOR EDX,EDX
// 005aac07: TEST EBX,EBX
// 005aac09: JLE 0x005aa872
//   XREF to: 005aa872 (CONDITIONAL_JUMP)
// 005aac0f: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x44] (READ)
// 005aac13: MOV ESI,dword ptr [ESP + 0x84]
//   XREF to: Stack[0x28] (READ)
// 005aac1a: MOV dword ptr [ESP + 0x48],EDX
//   Label: LAB_005aac1a
//   XREF to: Stack[-0x14] (WRITE)
// 005aac1e: FILD dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x14] (READ)
// 005aac22: FMUL ST1
// 005aac24: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005aac29: FISTP dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x2c] (WRITE)
// 005aac2d: MOV ECX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x2c] (READ)
// 005aac31: MOV EDI,dword ptr [EAX + ECX*0x4]
// 005aac34: SAR EDI,0x10
// 005aac37: MOVSX ECX,word ptr [EAX + ECX*0x4]
// 005aac3b: ADD ECX,EDI
// 005aac3d: INC ESI
// 005aac3e: SAR ECX,0x9
// 005aac41: INC EDX
// 005aac42: MOV byte ptr [ESI + -0x1],CL
// 005aac45: CMP EDX,EBX
// 005aac47: JL 0x005aac1a
//   XREF to: 005aac1a (CONDITIONAL_JUMP)
// 005aac49: FSTP ST0
// 005aac4b: JMP 0x005aa872
//   XREF to: 005aa872 (UNCONDITIONAL_JUMP)
// 005aac50: XOR EDX,EDX
//   Label: LAB_005aac50
// 005aac52: TEST EBX,EBX
// 005aac54: JLE 0x005aa872
//   XREF to: 005aa872 (CONDITIONAL_JUMP)
// 005aac5a: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x44] (READ)
// 005aac5e: MOV ESI,dword ptr [ESP + 0x84]
//   XREF to: Stack[0x28] (READ)
// 005aac65: MOV dword ptr [ESP + 0x48],EDX
//   Label: LAB_005aac65
//   XREF to: Stack[-0x14] (WRITE)
// 005aac69: FILD dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x14] (READ)
// 005aac6d: FMUL ST1
// 005aac6f: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005aac74: FISTP dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x28] (WRITE)
// 005aac78: MOV EDI,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x28] (READ)
// 005aac7c: MOVSX ECX,word ptr [EAX + EDI*0x4]
// 005aac80: SAR ECX,0x8
// 005aac83: MOV dword ptr [ESP + 0x44],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 005aac87: MOV CL,byte ptr [ESP + 0x44]
//   XREF to: Stack[-0x18] (READ)
// 005aac8b: MOV byte ptr [ESI],CL
// 005aac8d: MOV ECX,dword ptr [EAX + EDI*0x4]
// 005aac90: SAR ECX,0x10
// 005aac93: SAR ECX,0x8
// 005aac96: MOV dword ptr [ESP + 0x44],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 005aac9a: ADD ESI,0x2
// 005aac9d: MOV CL,byte ptr [ESP + 0x44]
//   XREF to: Stack[-0x18] (READ)
// 005aaca1: INC EDX
// 005aaca2: MOV byte ptr [ESI + -0x1],CL
// 005aaca5: CMP EDX,EBX
// 005aaca7: JL 0x005aac65
//   XREF to: 005aac65 (CONDITIONAL_JUMP)
// 005aaca9: FSTP ST0
// 005aacab: JMP 0x005aa872
//   XREF to: 005aa872 (UNCONDITIONAL_JUMP)
// 005aacb0: CMP EDX,0x1
//   Label: LAB_005aacb0
// 005aacb3: JNZ 0x005aad47
//   XREF to: 005aad47 (CONDITIONAL_JUMP)
// 005aacb9: CMP ESI,EDX
// 005aacbb: JNZ 0x005aad00
//   XREF to: 005aad00 (CONDITIONAL_JUMP)
// 005aacbd: XOR EDX,EDX
// 005aacbf: TEST EBX,EBX
// 005aacc1: JLE 0x005aa872
//   XREF to: 005aa872 (CONDITIONAL_JUMP)
// 005aacc7: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x44] (READ)
// 005aaccb: MOV ESI,dword ptr [ESP + 0x84]
//   XREF to: Stack[0x28] (READ)
// 005aacd2: MOV dword ptr [ESP + 0x44],EDX
//   Label: LAB_005aacd2
//   XREF to: Stack[-0x18] (WRITE)
// 005aacd6: FILD dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x18] (READ)
// 005aacda: FMUL ST1
// 005aacdc: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005aace1: FISTP dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x24] (WRITE)
// 005aace5: MOV ECX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x24] (READ)
// 005aace9: ADD ESI,0x2
// 005aacec: MOV CX,word ptr [EAX + ECX*0x2]
// 005aacf0: INC EDX
// 005aacf1: MOV word ptr [ESI + -0x2],CX
// 005aacf5: CMP EDX,EBX
// 005aacf7: JL 0x005aacd2
//   XREF to: 005aacd2 (CONDITIONAL_JUMP)
// 005aacf9: FSTP ST0
// 005aacfb: JMP 0x005aa872
//   XREF to: 005aa872 (UNCONDITIONAL_JUMP)
// 005aad00: XOR ESI,ESI
//   Label: LAB_005aad00
// 005aad02: TEST EBX,EBX
// 005aad04: JLE 0x005aa872
//   XREF to: 005aa872 (CONDITIONAL_JUMP)
// 005aad0a: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x44] (READ)
// 005aad0e: MOV EDX,dword ptr [ESP + 0x84]
//   XREF to: Stack[0x28] (READ)
// 005aad15: MOV dword ptr [ESP + 0x44],ESI
//   Label: LAB_005aad15
//   XREF to: Stack[-0x18] (WRITE)
// 005aad19: FILD dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x18] (READ)
// 005aad1d: FMUL ST1
// 005aad1f: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005aad24: FISTP dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x20] (WRITE)
// 005aad28: MOV ECX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x20] (READ)
// 005aad2c: ADD EDX,0x4
// 005aad2f: MOV CX,word ptr [EAX + ECX*0x2]
// 005aad33: MOV word ptr [EDX + -0x2],CX
// 005aad37: INC ESI
// 005aad38: MOV word ptr [EDX + -0x4],CX
// 005aad3c: CMP ESI,EBX
// 005aad3e: JL 0x005aad15
//   XREF to: 005aad15 (CONDITIONAL_JUMP)
// 005aad40: FSTP ST0
// 005aad42: JMP 0x005aa872
//   XREF to: 005aa872 (UNCONDITIONAL_JUMP)
// 005aad47: CMP ESI,0x1
//   Label: LAB_005aad47
// 005aad4a: JNZ 0x005aad99
//   XREF to: 005aad99 (CONDITIONAL_JUMP)
// 005aad4c: XOR EDX,EDX
// 005aad4e: TEST EBX,EBX
// 005aad50: JLE 0x005aa872
//   XREF to: 005aa872 (CONDITIONAL_JUMP)
// 005aad56: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x44] (READ)
// 005aad5a: MOV ESI,dword ptr [ESP + 0x84]
//   XREF to: Stack[0x28] (READ)
// 005aad61: MOV dword ptr [ESP + 0x44],EDX
//   Label: LAB_005aad61
//   XREF to: Stack[-0x18] (WRITE)
// 005aad65: FILD dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x18] (READ)
// 005aad69: FMUL ST1
// 005aad6b: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005aad70: FISTP dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x1c] (WRITE)
// 005aad74: MOV ECX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x1c] (READ)
// 005aad78: MOV EDI,dword ptr [EAX + ECX*0x4]
// 005aad7b: SAR EDI,0x10
// 005aad7e: MOVSX ECX,word ptr [EAX + ECX*0x4]
// 005aad82: ADD ECX,EDI
// 005aad84: ADD ESI,0x2
// 005aad87: SAR ECX,0x1
// 005aad89: INC EDX
// 005aad8a: MOV word ptr [ESI + -0x2],CX
// 005aad8e: CMP EDX,EBX
// 005aad90: JL 0x005aad61
//   XREF to: 005aad61 (CONDITIONAL_JUMP)
// 005aad92: FSTP ST0
// 005aad94: JMP 0x005aa872
//   XREF to: 005aa872 (UNCONDITIONAL_JUMP)
// 005aad99: XOR ESI,ESI
//   Label: LAB_005aad99
// 005aad9b: TEST EBX,EBX
// 005aad9d: JLE 0x005aa872
//   XREF to: 005aa872 (CONDITIONAL_JUMP)
// 005aada3: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x44] (READ)
// 005aada7: MOV EDX,dword ptr [ESP + 0x84]
//   XREF to: Stack[0x28] (READ)
// 005aadae: MOV dword ptr [ESP + 0x44],ESI
//   Label: LAB_005aadae
//   XREF to: Stack[-0x18] (WRITE)
// 005aadb2: FILD dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x18] (READ)
// 005aadb6: FMUL ST1
// 005aadb8: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005aadbd: FISTP dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x3c] (WRITE)
// 005aadc1: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x3c] (READ)
// 005aadc5: MOV DI,word ptr [EAX + ECX*0x4]
// 005aadc9: MOV word ptr [EDX],DI
// 005aadcc: ADD EDX,0x4
// 005aadcf: MOV CX,word ptr [EAX + ECX*0x4 + 0x2]
// 005aadd4: INC ESI
// 005aadd5: MOV word ptr [EDX + -0x2],CX
// 005aadd9: CMP ESI,EBX
// 005aaddb: JL 0x005aadae
//   XREF to: 005aadae (CONDITIONAL_JUMP)
// 005aaddd: FSTP ST0
// 005aaddf: JMP 0x005aa872
//   XREF to: 005aa872 (UNCONDITIONAL_JUMP)
// 005aade4: PUSH EBX
//   Label: LAB_005aade4
// 005aade5: MOV EAX,dword ptr [ESP + 0x88]
//   XREF to: Stack[0x28] (READ)
// 005aadec: PUSH EAX
// 005aaded: CALL sound_sndmain.cpp_FUN_005aa7d0
//   XREF to: 005aa7d0 (UNCONDITIONAL_CALL)
// 005aadf2: ADD ESP,0x8
// 005aadf5: ADD ESP,0x4c
// 005aadf8: POP EBP
// 005aadf9: POP EDI
// 005aadfa: POP ESI
// 005aadfb: POP EBX
// 005aadfc: RET
