// Name: sound_mp3.cpp_FUN_005304f0
// Address: 005304f0
// Address Range: [[005304f0, 0053079d]]
// Convention: unknown
// Signature: undefined sound_mp3.cpp_FUN_005304f0()
// Cross-references:
//   sound_mp3.cpp_MpegLoadMaybe_FUN_00534d40 (00534d40) at 005351b0 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0063ae5a
//   undefined4 DAT_0063ae62
//   undefined4 DAT_0063ae6a
//   undefined4 DAT_0063ae72
//   undefined4 DAT_0063ae7a
//   undefined4 DAT_0063ae82
//   undefined4 DAT_0063ae8a
//   undefined4 DAT_0067d970
//   undefined4 DAT_0067d9f0
//   undefined4 DAT_0067e170
//   undefined4 DAT_02f43980
//   undefined4 DAT_02f43984
//   undefined4 DAT_02f43a00
// Function calls:
//   crt_math.c_modf_FUN_00602102

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 sound_mp3.cpp_FUN_005304f0(undefined4 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4) */

int sound_mp3_cpp_FUN_005304f0(void)

{
  int iVar1;
  int iVar2;
  double dVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  float *pfVar11;
  BADSPACEBASE *in_ESP;
  float *pfVar12;
  float10 fVar13;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int aiStack_e4 [32];
  double local_64;
  double local_5c [2];
  int local_4c;
  int local_48;
  float *local_44;
  undefined4 *local_40;
  int local_3c;
  int local_30;
  float *local_24;
  int local_20;
  int local_1c;
  int local_14;
  
  if (DAT_0067e170 != 0) {
    local_1c = 0;
    local_24 = (float *)&DAT_02f43980;
    do {
      iVar5 = 1;
      pfVar11 = local_24;
      pfVar12 = local_24;
      do {
        fVar13 = (float10)fcos((float10)iVar5 *
                               ((float10)local_1c * (float10)_DAT_0063ae5a + (float10)_DAT_0063ae72)
                              );
        *pfVar11 = (float)(fVar13 * (float10)_DAT_0063ae62);
        local_14 = iVar5;
        if (*pfVar11 < 0.0) {
          local_5c[0] = (double)*pfVar11;
          crt_math_c_modf_FUN_00602102((double)(*pfVar11 + (float)_DAT_0063ae7a),local_5c);
          dVar3 = local_5c[0];
        }
        else {
          local_64 = (double)*pfVar11;
          crt_math_c_modf_FUN_00602102((double)(*pfVar11 + (float)_DAT_0063ae82),&local_64);
          dVar3 = local_64;
        }
        *pfVar11 = (float)dVar3;
        pfVar11 = pfVar11 + 1;
        iVar5 = iVar5 + 2;
        *pfVar12 = *pfVar12 * (float)_DAT_0063ae6a;
        pfVar12 = pfVar12 + 1;
      } while (iVar5 != 0x41);
      local_1c = local_1c + 1;
      local_24 = local_24 + 0x20;
    } while (local_1c < 0x40);
    DAT_0067e170 = 0;
  }
  iVar5 = in_stack_0000000c * 4 + in_stack_00000004;
  uVar9 = *(int *)(iVar5 + 0x7350) - 0x40U & 0x3ff;
  *(uint *)(iVar5 + 0x7350) = uVar9;
  local_44 = (float *)(in_stack_00000004 + 0x5350 + in_stack_0000000c * 0x1000 + uVar9 * 4);
  iVar5 = 0;
  local_4c = 0;
  do {
    if ((float)_DAT_0063ae8a < ABS(*(float *)(iVar5 * 4 + in_stack_00000008))) {
      aiStack_e4[local_4c] = iVar5;
      local_4c = local_4c + 1;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x20);
  local_20 = 0;
  do {
    local_40 = &DAT_02f43980 + local_20 * 0x20;
    local_3c = in_stack_00000008;
    fVar4 = 0.0;
    iVar5 = local_4c;
    while (0 < iVar5) {
      iVar5 = iVar5 + -1;
      fVar4 = (float)(&DAT_02f43980 + local_20 * 0x20)[aiStack_e4[iVar5]] *
              *(float *)(in_stack_00000008 + aiStack_e4[iVar5] * 4) + fVar4;
    }
    *local_44 = fVar4;
    local_44 = local_44 + 1;
    local_20 = local_20 + 1;
  } while (local_20 < 0x40);
  local_48 = 0;
  iVar10 = in_stack_00000004 + 0x5350 + in_stack_0000000c * 0x1000;
  iVar5 = local_48;
  do {
    local_48 = iVar5;
    uVar9 = local_48 + *(int *)(in_stack_00000004 + in_stack_0000000c * 4 + 0x7350);
    fVar4 = 0.0;
    iVar6 = 8;
    iVar5 = local_48;
    do {
      iVar1 = iVar5 * 4;
      uVar7 = uVar9 & 0x3ff;
      iVar2 = iVar5 * 4;
      uVar8 = uVar7 + 0x60 & 0x3ff;
      iVar5 = iVar5 + 0x40;
      uVar9 = uVar8 + 0x20;
      fVar4 = *(float *)(&DAT_0067d9f0 + iVar2) * *(float *)(iVar10 + uVar8 * 4) +
              *(float *)(&DAT_0067d970 + iVar1) * *(float *)(iVar10 + uVar7 * 4) + fVar4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    local_30 = (int)ROUND(fVar4 * 32768.0);
    if (local_30 < 0x8000) {
      if (local_30 < -0x8000) {
        local_30 = -0x8000;
      }
    }
    else {
      local_30 = 0x7fff;
    }
    *(short *)(local_48 * 2 + in_stack_00000010) = (short)local_30;
    iVar5 = local_48 + 1;
  } while (local_48 + 1 < 0x20);
  return local_48;
}


// Assembly code:
// 005304f0: PUSH EBX
//   Label: sound_mp3.cpp_FUN_005304f0
// 005304f1: PUSH ESI
// 005304f2: PUSH EDI
// 005304f3: PUSH EBP
// 005304f4: MOV EBP,ESP
// 005304f6: SUB ESP,0xd4
// 005304fc: CMP dword ptr [0x0067e170],0x0
//   XREF to: 0067e170 (READ)
// 00530503: JNZ 0x005306be
//   XREF to: 005306be (CONDITIONAL_JUMP)
// 00530509: MOV EAX,dword ptr [EBP + 0x1c]
//   Label: LAB_00530509
//   XREF to: Stack[0xc] (READ)
// 0053050c: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0053050f: SHL EAX,0x2
// 00530512: ADD EAX,ECX
// 00530514: MOV EBX,dword ptr [EAX + 0x7350]
// 0053051a: SUB EBX,0x40
// 0053051d: AND EBX,0x3ff
// 00530523: MOV dword ptr [EAX + 0x7350],EBX
// 00530529: LEA ESI,[EBX*0x4 + 0x0]
// 00530530: MOV EBX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00530533: LEA EAX,[ECX + 0x5350]
// 00530539: SHL EBX,0xc
// 0053053c: ADD EAX,EBX
// 0053053e: ADD EAX,ESI
// 00530540: MOV dword ptr [EBP + -0x34],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 00530543: XOR EBX,EBX
// 00530545: MOV dword ptr [EBP + -0x3c],EBX
//   XREF to: Stack[-0x4c] (WRITE)
// 00530548: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0053054b: LEA EAX,[EBX*0x4 + 0x0]
//   Label: LAB_0053054b
// 00530552: ADD EAX,ESI
// 00530554: FLD float ptr [EAX]
// 00530556: FABS
// 00530558: FCOMP double ptr [0x0063ae8a]
//   XREF to: 0063ae8a (READ)
// 0053055e: FNSTSW AX
// 00530560: SAHF
// 00530561: JBE 0x00530570
//   XREF to: 00530570 (CONDITIONAL_JUMP)
// 00530563: MOV EAX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 00530566: MOV dword ptr [EBP + EAX*0x4 + 0xffffff2c],EBX
// 0053056d: INC dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ_WRITE)
// 00530570: INC EBX
//   Label: LAB_00530570
// 00530571: CMP EBX,0x20
// 00530574: JL 0x0053054b
//   XREF to: 0053054b (CONDITIONAL_JUMP)
// 00530576: XOR EAX,EAX
// 00530578: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0053057b: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_0053057b
//   XREF to: Stack[-0x20] (READ)
// 0053057e: MOV EBX,0x2f43980
//   XREF to: 02f43980 (PARAM)
// 00530583: SHL EAX,0x7
// 00530586: ADD EBX,EAX
// 00530588: MOV dword ptr [EBP + -0x30],EBX
//   XREF to: Stack[-0x40] (WRITE)
// 0053058b: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0053058e: MOV dword ptr [EBP + -0x2c],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 00530591: FLDZ
// 00530593: MOV ECX,dword ptr [EBP + 0xffffffc4]
//   XREF to: Stack[-0x4c] (READ)
// 00530599: SUB ECX,0x1
// 0053059c: JL 0x005305be
//   XREF to: 005305be (CONDITIONAL_JUMP)
// 0053059e: MOV EBX,dword ptr [EBP + 0xffffffd0]
//   XREF to: Stack[-0x40] (READ)
// 005305a4: MOV EDX,dword ptr [EBP + 0xffffffd4]
//   XREF to: Stack[-0x3c] (READ)
// 005305aa: MOV EAX,dword ptr [EBP + ECX*0x4 + 0xffffff2c]
//   Label: LAB_005305aa
// 005305b1: FLD float ptr [EBX + EAX*0x4]
// 005305b4: FMUL float ptr [EDX + EAX*0x4]
// 005305b7: FADDP
// 005305b9: SUB ECX,0x1
// 005305bc: JGE 0x005305aa
//   XREF to: 005305aa (CONDITIONAL_JUMP)
// 005305be: MOV EBX,dword ptr [EBP + 0xffffffcc]
//   Label: LAB_005305be
//   XREF to: Stack[-0x44] (READ)
// 005305c4: FSTP float ptr [EBX]
// 005305c6: ADD dword ptr [EBP + -0x34],0x4
//   XREF to: Stack[-0x44] (READ_WRITE)
// 005305ca: MOV ECX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 005305cd: INC ECX
// 005305ce: MOV dword ptr [EBP + -0x10],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 005305d1: CMP ECX,0x40
// 005305d4: JL 0x0053057b
//   XREF to: 0053057b (CONDITIONAL_JUMP)
// 005305d6: XOR ESI,ESI
// 005305d8: MOV dword ptr [EBP + -0x38],ESI
//   XREF to: Stack[-0x48] (WRITE)
// 005305db: CMP dword ptr [EBP + -0x38],0x20
//   XREF to: Stack[-0x48] (READ)
// 005305df: JGE 0x005306b7
//   XREF to: 005306b7 (CONDITIONAL_JUMP)
// 005305e5: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005305e8: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005305eb: SHL EAX,0x2
// 005305ee: ADD EBX,EAX
// 005305f0: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005305f3: MOV dword ptr [EBP + -0x1c],EBX
//   XREF to: Stack[-0x2c] (WRITE)
// 005305f6: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005305f9: SHL EAX,0xc
// 005305fc: ADD EBX,0x5350
// 00530602: ADD EBX,EAX
// 00530604: MOV dword ptr [EBP + -0x18],EBX
//   XREF to: Stack[-0x28] (WRITE)
// 00530607: MOV EAX,dword ptr [EBP + -0x38]
//   Label: LAB_00530607
//   XREF to: Stack[-0x48] (READ)
// 0053060a: MOV EBX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0053060d: MOV ESI,dword ptr [EBX + 0x7350]
// 00530613: ADD EAX,ESI
// 00530615: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00530618: MOV EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0053061b: MOV dword ptr [EBP + -0x28],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0053061e: MOV dword ptr [EBP + -0x24],0x47000000
//   XREF to: Stack[-0x34] (WRITE)
// 00530625: FLDZ
// 00530627: MOV EBX,dword ptr [EBP + 0xffffffc8]
//   XREF to: Stack[-0x48] (READ)
// 0053062d: MOV EDX,dword ptr [EBP + 0xfffffff8]
//   XREF to: Stack[-0x18] (READ)
// 00530633: MOV ECX,0x8
// 00530638: MOV ESI,dword ptr [EBP + 0xffffffd8]
//   XREF to: Stack[-0x38] (READ)
// 0053063e: FLD float ptr [EBX*0x4 + 0x67d970]
//   Label: LAB_0053063e
//   XREF to: 0067d970 (DATA)
// 00530645: AND EDX,0x3ff
// 0053064b: FMUL float ptr [ESI + EDX*0x4]
// 0053064e: ADD EDX,0x60
// 00530651: FLD float ptr [EBX*0x4 + 0x67d9f0]
//   XREF to: 0067d9f0 (DATA)
// 00530658: AND EDX,0x3ff
// 0053065e: FMUL float ptr [ESI + EDX*0x4]
// 00530661: ADD EBX,0x40
// 00530664: ADD EDX,0x20
// 00530667: FADDP
// 00530669: FADDP
// 0053066b: DEC ECX
// 0053066c: JNZ 0x0053063e
//   XREF to: 0053063e (CONDITIONAL_JUMP)
// 0053066e: FMUL float ptr [EBP + 0xffffffdc]
//   XREF to: Stack[-0x34] (READ)
// 00530674: FISTP dword ptr [EBP + 0xffffffe0]
//   XREF to: Stack[-0x30] (WRITE)
// 0053067a: CMP dword ptr [EBP + -0x20],0x8000
//   XREF to: Stack[-0x30] (READ)
// 00530681: JGE 0x00530792
//   XREF to: 00530792 (CONDITIONAL_JUMP)
// 00530687: CMP dword ptr [EBP + -0x20],0xffff8000
//   XREF to: Stack[-0x30] (READ)
// 0053068e: JGE 0x00530697
//   XREF to: 00530697 (CONDITIONAL_JUMP)
// 00530690: MOV dword ptr [EBP + -0x20],0xffff8000
//   XREF to: Stack[-0x30] (WRITE)
// 00530697: MOV EBX,dword ptr [EBP + -0x38]
//   Label: LAB_00530697
//   XREF to: Stack[-0x48] (READ)
// 0053069a: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0053069d: ADD EBX,EBX
// 0053069f: ADD EBX,EAX
// 005306a1: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 005306a4: MOV word ptr [EBX],AX
// 005306a7: MOV EAX,dword ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (READ)
// 005306aa: INC dword ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (READ_WRITE)
// 005306ad: CMP dword ptr [EBP + -0x38],0x20
//   XREF to: Stack[-0x48] (READ)
// 005306b1: JL 0x00530607
//   XREF to: 00530607 (CONDITIONAL_JUMP)
// 005306b7: MOV ESP,EBP
//   Label: LAB_005306b7
// 005306b9: POP EBP
// 005306ba: POP EDI
// 005306bb: POP ESI
// 005306bc: POP EBX
// 005306bd: RET
// 005306be: XOR ECX,ECX
//   Label: LAB_005306be
// 005306c0: MOV EBX,0x2f43980
//   XREF to: 02f43980 (DATA)
// 005306c5: MOV dword ptr [EBP + -0xc],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 005306c8: MOV dword ptr [EBP + -0x14],EBX
//   XREF to: Stack[-0x24] (WRITE)
//   XREF to: 02f43980 (DATA)
// 005306cb: MOV EBX,dword ptr [EBP + -0x14]
//   Label: LAB_005306cb
//   XREF to: Stack[-0x24] (READ)
//   XREF to: 02f43980 (PARAM)
// 005306ce: MOV EDI,0x1
// 005306d3: MOV ESI,EBX
// 005306d5: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_005306d5
//   XREF to: Stack[-0x1c] (READ)
// 005306d8: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005306db: FILD dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 005306de: FMUL double ptr [0x0063ae5a]
//   XREF to: 0063ae5a (READ)
// 005306e4: FADD double ptr [0x0063ae72]
//   XREF to: 0063ae72 (READ)
// 005306ea: MOV dword ptr [EBP + -0x4],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 005306ed: FILD dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 005306f0: FMULP
// 005306f2: FCOS
// 005306f4: FMUL double ptr [0x0063ae62]
//   XREF to: 0063ae62 (READ)
// 005306fa: FLDZ
// 005306fc: FXCH
// 005306fe: FSTP float ptr [EBX]
//   XREF to: 02f43980 (WRITE)
//   XREF to: 02f43984 (WRITE)
//   XREF to: 02f43a00 (WRITE)
// 00530700: FCOMP float ptr [EBX]
//   XREF to: 02f43980 (READ)
//   XREF to: 02f43984 (READ)
//   XREF to: 02f43a00 (READ)
// 00530702: FNSTSW AX
// 00530704: SAHF
// 00530705: JA 0x00530771
//   XREF to: 00530771 (CONDITIONAL_JUMP)
// 00530707: FLD float ptr [EBX]
//   XREF to: 02f43980 (READ)
// 00530709: LEA EAX,[EBP + -0x54]
//   XREF to: Stack[-0x64] (DATA)
// 0053070c: FSTP double ptr [EBP + -0x54]
//   XREF to: Stack[-0x64] (WRITE)
// 0053070f: FLD float ptr [EBX]
//   XREF to: 02f43980 (READ)
// 00530711: PUSH EAX
// 00530712: FADD double ptr [0x0063ae82]
//   XREF to: 0063ae82 (READ)
// 00530718: SUB ESP,0x8
// 0053071b: FSTP double ptr [ESP]
//   XREF to: Stack[-0xf0] (DATA)
// 0053071e: CALL crt_math.c_modf_FUN_00602102
//   XREF to: 00602102 (UNCONDITIONAL_CALL)
// 00530723: FLD double ptr [EBP + -0x54]
//   XREF to: Stack[-0x64] (READ)
// 00530726: ADD ESP,0xc
//   Label: LAB_00530726
// 00530729: FSTP float ptr [EBX]
//   XREF to: 02f43980 (WRITE)
//   XREF to: 02f43984 (WRITE)
// 0053072b: FLD float ptr [ESI]
//   XREF to: 02f43980 (READ)
//   XREF to: 02f43984 (READ)
// 0053072d: FLD ST0
// 0053072f: FMUL double ptr [0x0063ae6a]
//   XREF to: 0063ae6a (READ)
// 00530735: ADD EBX,0x4
// 00530738: ADD EDI,0x2
// 0053073b: ADD ESI,0x4
// 0053073e: FSTP ST1
// 00530740: FSTP float ptr [ESI + -0x4]
//   XREF to: 02f43980 (WRITE)
//   XREF to: 02f43984 (WRITE)
// 00530743: CMP EDI,0x41
// 00530746: JNZ 0x005306d5
//   XREF to: 005306d5 (CONDITIONAL_JUMP)
// 00530748: MOV EDI,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0053074b: MOV ESI,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0053074e: INC EDI
// 0053074f: ADD ESI,0x80
// 00530755: MOV dword ptr [EBP + -0xc],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 00530758: MOV dword ptr [EBP + -0x14],ESI
//   XREF to: Stack[-0x24] (WRITE)
//   XREF to: 02f43a00 (DATA)
// 0053075b: CMP EDI,0x40
// 0053075e: JL 0x005306cb
//   XREF to: 005306cb (CONDITIONAL_JUMP)
// 00530764: XOR EDX,EDX
// 00530766: MOV dword ptr [0x0067e170],EDX
//   XREF to: 0067e170 (WRITE)
// 0053076c: JMP 0x00530509
//   XREF to: 00530509 (UNCONDITIONAL_JUMP)
// 00530771: FLD float ptr [EBX]
//   Label: LAB_00530771
//   XREF to: 02f43980 (READ)
//   XREF to: 02f43984 (READ)
// 00530773: LEA EAX,[EBP + -0x4c]
//   XREF to: Stack[-0x5c] (DATA)
// 00530776: FSTP double ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (WRITE)
// 00530779: FLD float ptr [EBX]
//   XREF to: 02f43980 (READ)
//   XREF to: 02f43984 (READ)
// 0053077b: PUSH EAX
// 0053077c: FADD double ptr [0x0063ae7a]
//   XREF to: 0063ae7a (READ)
// 00530782: SUB ESP,0x8
// 00530785: FSTP double ptr [ESP]
//   XREF to: Stack[-0xf0] (DATA)
// 00530788: CALL crt_math.c_modf_FUN_00602102
//   XREF to: 00602102 (UNCONDITIONAL_CALL)
// 0053078d: FLD double ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 00530790: JMP 0x00530726
//   XREF to: 00530726 (UNCONDITIONAL_JUMP)
// 00530792: MOV dword ptr [EBP + -0x20],0x7fff
//   Label: LAB_00530792
//   XREF to: Stack[-0x30] (WRITE)
// 00530799: JMP 0x00530697
//   XREF to: 00530697 (UNCONDITIONAL_JUMP)
