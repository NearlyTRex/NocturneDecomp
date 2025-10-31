// Name: sound_mp3.cpp_FUN_00531d50
// Address: 00531d50
// Address Range: [[00531d50, 005321fc]]
// Convention: unknown
// Signature: undefined sound_mp3.cpp_FUN_00531d50()
// Cross-references:
//   sound_mp3.cpp_MpegLoadMaybe_FUN_00534d40 (00534d40) at 00535882 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0063b042
//   undefined4 DAT_0063b04a
//   undefined4 DAT_0063b052
//   undefined4 DAT_0067e180
//   undefined4 DAT_0067e184
//   undefined4 DAT_0067e6cc
//   undefined4 DAT_0067e6d0
//   undefined4 DAT_0067e6dc
//   undefined4 DAT_0067e6e8
//   undefined4 DAT_0067e728
//   undefined4 DAT_0067e72c
//   undefined4 DAT_0067e730
//   undefined4 DAT_0067e734
//   undefined4 DAT_0067e738
//   undefined4 DAT_02f45984
//   undefined8 DAT_02f45988
//   undefined8 DAT_02f45fc8
// Function calls:
//   crt_math.c_pow_FUN_005ffd76

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 sound_mp3.cpp_FUN_00531d50(undefined4 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6) */

void sound_mp3_cpp_FUN_00531d50(void)

{
  float10 fVar1;
  int iVar2;
  float *pfVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int iVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  uint *in_stack_00000004;
  float *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int *in_stack_00000018;
  uint *local_70;
  int local_6c;
  int local_68;
  float *local_64;
  int local_44;
  float *local_3c;
  int local_38;
  float *local_34;
  uint *local_30;
  int local_2c;
  int local_28;
  int local_20;
  int local_1c;
  float *local_18;
  
  iVar7 = 0;
  iVar8 = ((int *)*in_stack_00000018)[4] + *(int *)*in_stack_00000018 * 3;
  if ((*(int *)(in_stack_00000010 + 0x10) == 0) || (*(int *)(in_stack_00000010 + 0x14) != 2)) {
    local_1c = *(int *)(&DAT_0067e6cc + iVar8 * 0x94);
  }
  else {
    iVar4 = iVar8 * 0x94;
    if (*(int *)(in_stack_00000010 + 0x18) == 0) {
      local_1c = *(int *)(&DAT_0067e728 + iVar4) * 3;
      local_28 = *(int *)(&DAT_0067e728 + iVar4);
      local_2c = 0;
    }
    else {
      local_1c = *(int *)(&DAT_0067e6cc + iVar4);
    }
  }
  if (DAT_02f45984 == 0) {
    fVar11 = (float10)_DAT_0063b04a;
    iVar4 = 0;
    iVar6 = 0;
    do {
      fVar9 = crt_math_c_pow_FUN_005ffd76((float10)iVar4,fVar11);
      iVar4 = extraout_EDX + 1;
      *(double *)((int)&DAT_02f45988 + iVar6) = (double)fVar9;
      iVar6 = iVar6 + 8;
    } while (iVar4 < 200);
    iVar6 = 0;
    fVar9 = (float10)_DAT_0063b052;
    fVar11 = (float10)_DAT_0063b042;
    iVar4 = 0;
    do {
      fVar1 = (float10)-iVar6 * fVar11;
      fVar10 = crt_math_c_pow_FUN_005ffd76(fVar9,(float10)-iVar6 * fVar11);
      fVar9 = fVar11;
      fVar11 = fVar1;
      iVar6 = extraout_EDX_00 + 1;
      *(double *)((int)&DAT_02f45fc8 + iVar4) = (double)fVar10;
      iVar4 = iVar4 + 8;
    } while (iVar6 < 200);
    DAT_02f45984 = 1;
    in_stack_00000010 = extraout_ECX;
  }
  local_44 = 0;
  in_stack_0000000c = in_stack_0000000c + in_stack_00000014 * 0xf8;
  iVar8 = iVar8 * 0x94;
  local_64 = in_stack_00000008;
  local_70 = in_stack_00000004;
  local_6c = 0;
  local_68 = 0;
  do {
    local_20 = local_6c;
    local_38 = local_6c;
    local_3c = local_64;
    local_34 = local_64;
    local_18 = local_64;
    local_30 = local_70;
    iVar4 = 0;
    do {
      if (local_20 == local_1c) {
        if ((*(int *)(in_stack_00000010 + 0x10) == 0) || (*(int *)(in_stack_00000010 + 0x14) != 2))
        {
          iVar7 = iVar7 + 1;
          local_1c = *(int *)(&DAT_0067e6cc + iVar7 * 4 + iVar8);
        }
        else {
          iVar7 = iVar7 + 1;
          iVar6 = iVar7 * 4 + iVar8;
          if (*(int *)(in_stack_00000010 + 0x18) == 0) {
LAB_00532050:
            local_1c = *(int *)(&DAT_0067e728 + iVar6);
            iVar2 = *(int *)(iVar6 + 0x67e724);
            local_28 = *(int *)(&DAT_0067e728 + iVar6) - iVar2;
          }
          else {
            if (local_20 != *(int *)(&DAT_0067e6e8 + iVar8)) {
              if (local_20 < *(int *)(&DAT_0067e6e8 + iVar8)) {
                local_1c = *(int *)(&DAT_0067e6cc + iVar6);
                goto LAB_00531ee0;
              }
              goto LAB_00532050;
            }
            local_1c = *(int *)(&DAT_0067e734 + iVar8);
            iVar2 = *(int *)(&DAT_0067e730 + iVar8);
            local_28 = *(int *)(&DAT_0067e734 + iVar8) - iVar2;
            iVar7 = 3;
          }
          local_1c = local_1c * 3;
          local_2c = iVar2 * 3;
        }
      }
LAB_00531ee0:
      if (*(int *)((int)in_stack_00000004 + iVar4 + local_68) == 0) {
        *(undefined4 *)((int)in_stack_00000008 + iVar4 + local_68) = 0;
      }
      else {
        iVar6 = *(int *)(in_stack_00000010 + 8) + -0xd2;
        if ((*(int *)(in_stack_00000010 + 0x10) == 0) ||
           (((*(int *)(in_stack_00000010 + 0x14) != 2 || (*(int *)(in_stack_00000010 + 0x18) != 0))
            && ((*(int *)(in_stack_00000010 + 0x14) != 2 ||
                ((*(int *)(in_stack_00000010 + 0x18) == 0 || (local_44 < 2)))))))) {
          iVar2 = (*(int *)(in_stack_00000010 + 0x40) + 1) * -2 *
                  (*(int *)(iVar7 * 4 + in_stack_0000000c) +
                  *(int *)(in_stack_00000010 + 0x3c) * *(int *)(iVar7 * 4 + 0x67e174));
        }
        else {
          iVar2 = (local_38 - local_2c) / local_28;
          iVar6 = iVar6 + *(int *)(in_stack_00000010 + 0x28 + iVar2 * 4) * -8;
          iVar2 = (*(int *)(in_stack_00000010 + 0x40) + 1) * -2 *
                  *(int *)(in_stack_0000000c + iVar2 * 0x34 + iVar7 * 4 + 0x5c);
        }
        iVar6 = iVar6 + iVar2;
        if ((iVar6 < 1) && (-200 < iVar6)) {
          fVar11 = (float10)(double)(&DAT_02f45fc8)[-iVar6];
          pfVar3 = local_3c;
        }
        else {
          fVar11 = crt_math_c_pow_FUN_005ffd76
                             ((float10)_DAT_0063b052,(float10)iVar6 * (float10)_DAT_0063b042);
          pfVar3 = local_34;
          in_stack_00000010 = extraout_ECX_00;
        }
        *pfVar3 = (float)fVar11;
        uVar5 = (int)*local_30 >> 0x1f;
        iVar6 = (*local_30 ^ uVar5) - uVar5;
        if (iVar6 < 200) {
          *local_18 = *local_18 * (float)(double)(&DAT_02f45988)[iVar6];
        }
        else {
          fVar11 = crt_math_c_pow_FUN_005ffd76((float10)iVar6,(float10)_DAT_0063b04a);
          *local_18 = (float)(fVar11 * (float10)*local_18);
          in_stack_00000010 = extraout_ECX_01;
        }
        if (*(int *)((int)in_stack_00000004 + iVar4 + local_68) < 0) {
          *(float *)((int)in_stack_00000008 + iVar4 + local_68) =
               -*(float *)((int)in_stack_00000008 + iVar4 + local_68);
        }
      }
      iVar4 = iVar4 + 4;
      local_20 = local_20 + 1;
      local_38 = local_38 + 1;
      local_3c = local_3c + 1;
      local_34 = local_34 + 1;
      local_18 = local_18 + 1;
      local_30 = local_30 + 1;
    } while (iVar4 != 0x48);
    local_6c = local_6c + 0x12;
    local_68 = local_68 + 0x48;
    local_64 = local_64 + 0x12;
    local_70 = local_70 + 0x12;
    local_44 = local_44 + 1;
    if (0x1f < local_44) {
      return;
    }
  } while( true );
}


// Assembly code:
// 00531d50: PUSH EBX
//   Label: sound_mp3.cpp_FUN_00531d50
// 00531d51: PUSH ESI
// 00531d52: PUSH EDI
// 00531d53: PUSH EBP
// 00531d54: MOV EBP,ESP
// 00531d56: SUB ESP,0x68
// 00531d59: AND ESP,0xfffffff8
// 00531d5c: MOV ECX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00531d5f: MOV EBX,dword ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 00531d62: MOV EBX,dword ptr [EBX]
// 00531d64: MOV EDX,dword ptr [EBX]
// 00531d66: XOR ESI,ESI
// 00531d68: LEA EAX,[EDX*0x4 + 0x0]
// 00531d6f: MOV EDI,dword ptr [EBX + 0x10]
// 00531d72: SUB EAX,EDX
// 00531d74: MOV EDX,dword ptr [ECX + 0x10]
// 00531d77: ADD EDI,EAX
// 00531d79: TEST EDX,EDX
// 00531d7b: JZ 0x00531faf
//   XREF to: 00531faf (CONDITIONAL_JUMP)
// 00531d81: CMP dword ptr [ECX + 0x14],0x2
// 00531d85: JNZ 0x00531faf
//   XREF to: 00531faf (CONDITIONAL_JUMP)
// 00531d8b: LEA EAX,[EDI*0x8 + 0x0]
// 00531d92: ADD EAX,EDI
// 00531d94: SHL EAX,0x2
// 00531d97: LEA EDX,[EDI + EAX*0x1]
// 00531d9a: MOV EAX,dword ptr [ECX + 0x18]
// 00531d9d: SHL EDX,0x2
// 00531da0: TEST EAX,EAX
// 00531da2: JZ 0x00531f85
//   XREF to: 00531f85 (CONDITIONAL_JUMP)
// 00531da8: MOV EAX,dword ptr [EDX + 0x67e6cc]
//   XREF to: 0067e6cc (DATA)
// 00531dae: MOV dword ptr [ESP + 0x5c],EAX
//   Label: LAB_00531dae
//   XREF to: Stack[-0x1c] (WRITE)
// 00531db2: MOV EDX,dword ptr [0x02f45984]
//   Label: LAB_00531db2
//   XREF to: 02f45984 (READ)
// 00531db8: TEST EDX,EDX
// 00531dba: JZ 0x00531fc9
//   XREF to: 00531fc9 (CONDITIONAL_JUMP)
// 00531dc0: XOR EAX,EAX
//   Label: LAB_00531dc0
// 00531dc2: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 00531dc6: MOV EAX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 00531dc9: SHL EAX,0x3
// 00531dcc: MOV EDX,EAX
// 00531dce: SHL EAX,0x5
// 00531dd1: SUB EAX,EDX
// 00531dd3: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00531dd6: ADD EDX,EAX
// 00531dd8: LEA EAX,[EDI*0x8 + 0x0]
// 00531ddf: ADD EAX,EDI
// 00531de1: SHL EAX,0x2
// 00531de4: ADD EAX,EDI
// 00531de6: SHL EAX,0x2
// 00531de9: MOV dword ptr [ESP + 0x20],EDX
//   XREF to: Stack[-0x58] (WRITE)
// 00531ded: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00531df1: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 00531df5: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00531df8: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x60] (WRITE)
// 00531dfc: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 00531e00: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00531e03: XOR EDX,EDX
// 00531e05: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 00531e09: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x24] (READ)
// 00531e0d: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x6c] (WRITE)
// 00531e11: ADD EAX,0xc
// 00531e14: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x68] (WRITE)
// 00531e18: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 00531e1c: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_00531e1c
//   XREF to: Stack[-0x6c] (READ)
// 00531e20: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00531e24: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 00531e28: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x64] (READ)
// 00531e2c: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 00531e30: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00531e34: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00531e38: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x70] (READ)
// 00531e3c: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x68] (READ)
// 00531e40: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00531e44: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00531e47: ADD EAX,EDX
// 00531e49: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 00531e4d: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 00531e51: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00531e54: ADD EAX,EDX
// 00531e56: XOR EDI,EDI
// 00531e58: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 00531e5c: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 00531e60: MOV EAX,dword ptr [ESP + 0x58]
//   Label: LAB_00531e60
//   XREF to: Stack[-0x20] (READ)
// 00531e64: CMP EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x1c] (READ)
// 00531e68: JNZ 0x00531ee0
//   XREF to: 00531ee0 (CONDITIONAL_JUMP)
// 00531e6a: CMP dword ptr [ECX + 0x10],0x0
// 00531e6e: JZ 0x00532077
//   XREF to: 00532077 (CONDITIONAL_JUMP)
// 00531e74: CMP dword ptr [ECX + 0x14],0x2
// 00531e78: JNZ 0x00532077
//   XREF to: 00532077 (CONDITIONAL_JUMP)
// 00531e7e: INC ESI
// 00531e7f: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x24] (READ)
// 00531e83: LEA EBX,[ESI*0x4 + 0x0]
// 00531e8a: MOV EDX,dword ptr [ECX + 0x18]
// 00531e8d: ADD EBX,EAX
// 00531e8f: TEST EDX,EDX
// 00531e91: JZ 0x00532050
//   XREF to: 00532050 (CONDITIONAL_JUMP)
// 00531e97: MOV EDX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x24] (READ)
// 00531e9b: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x20] (READ)
// 00531e9f: CMP EAX,dword ptr [EDX + 0x67e6e8]
//   XREF to: 0067e6e8 (DATA)
// 00531ea5: JNZ 0x0053203f
//   XREF to: 0053203f (CONDITIONAL_JUMP)
// 00531eab: MOV EAX,dword ptr [EDX + 0x67e734]
//   XREF to: 0067e734 (DATA)
// 00531eb1: LEA EAX,[EAX + EAX*0x2]
// 00531eb4: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x40] (READ)
// 00531eb8: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00531ebc: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x40] (READ)
// 00531ec0: MOV EBX,dword ptr [EDX + 0x67e724]
//   XREF to: 0067e730 (DATA)
// 00531ec6: MOV EAX,dword ptr [EAX + 0x67e728]
//   XREF to: 0067e734 (DATA)
// 00531ecc: SUB EAX,EBX
// 00531ece: MOV ESI,0x3
// 00531ed3: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00531ed7: MOV EAX,EBX
// 00531ed9: IMUL EAX,ESI
// 00531edc: MOV dword ptr [ESP + 0x4c],EAX
//   Label: LAB_00531edc
//   XREF to: Stack[-0x2c] (WRITE)
// 00531ee0: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_00531ee0
//   XREF to: Stack[-0x54] (READ)
// 00531ee4: MOV EDX,dword ptr [EDI + EAX*0x1]
// 00531ee7: TEST EDX,EDX
// 00531ee9: JNZ 0x00532094
//   XREF to: 00532094 (CONDITIONAL_JUMP)
// 00531eef: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x48] (READ)
// 00531ef3: MOV dword ptr [EDI + EAX*0x1],EDX
// 00531ef6: MOV EAX,dword ptr [ESP + 0x58]
//   Label: LAB_00531ef6
//   XREF to: Stack[-0x20] (READ)
// 00531efa: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x38] (READ)
// 00531efe: MOV EBX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x3c] (READ)
// 00531f02: ADD EDI,0x4
// 00531f05: INC EAX
// 00531f06: INC EDX
// 00531f07: ADD EBX,0x4
// 00531f0a: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00531f0e: MOV dword ptr [ESP + 0x40],EDX
//   XREF to: Stack[-0x38] (WRITE)
// 00531f12: MOV dword ptr [ESP + 0x3c],EBX
//   XREF to: Stack[-0x3c] (WRITE)
// 00531f16: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x34] (READ)
// 00531f1a: MOV EDX,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x18] (READ)
// 00531f1e: MOV EBX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x30] (READ)
// 00531f22: ADD EAX,0x4
// 00531f25: ADD EDX,0x4
// 00531f28: ADD EBX,0x4
// 00531f2b: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00531f2f: MOV dword ptr [ESP + 0x60],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 00531f33: MOV dword ptr [ESP + 0x48],EBX
//   XREF to: Stack[-0x30] (WRITE)
// 00531f37: CMP EDI,0x48
// 00531f3a: JNZ 0x00531e60
//   XREF to: 00531e60 (CONDITIONAL_JUMP)
// 00531f40: MOV EDI,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x6c] (READ)
// 00531f44: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x68] (READ)
// 00531f48: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x64] (READ)
// 00531f4c: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x70] (READ)
// 00531f50: ADD EDI,0x12
// 00531f53: ADD EAX,0x48
// 00531f56: ADD EDX,0x48
// 00531f59: ADD EBX,0x48
// 00531f5c: MOV dword ptr [ESP + 0xc],EDI
//   XREF to: Stack[-0x6c] (WRITE)
// 00531f60: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 00531f64: MOV EDI,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x44] (READ)
// 00531f68: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0x64] (WRITE)
// 00531f6c: INC EDI
// 00531f6d: MOV dword ptr [ESP + 0x8],EBX
//   XREF to: Stack[-0x70] (WRITE)
// 00531f71: MOV dword ptr [ESP + 0x34],EDI
//   XREF to: Stack[-0x44] (WRITE)
// 00531f75: CMP EDI,0x20
// 00531f78: JL 0x00531e1c
//   XREF to: 00531e1c (CONDITIONAL_JUMP)
// 00531f7e: MOV ESP,EBP
// 00531f80: POP EBP
// 00531f81: POP EDI
// 00531f82: POP ESI
// 00531f83: POP EBX
// 00531f84: RET
// 00531f85: MOV EAX,dword ptr [EDX + 0x67e728]
//   Label: LAB_00531f85
//   XREF to: 0067e728 (DATA)
// 00531f8b: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00531f8f: MOV EBX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x14] (READ)
// 00531f93: SHL EAX,0x2
// 00531f96: SUB EAX,EBX
// 00531f98: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00531f9c: MOV EAX,dword ptr [EDX + 0x67e728]
//   XREF to: 0067e728 (DATA)
// 00531fa2: MOV dword ptr [ESP + 0x4c],ESI
//   XREF to: Stack[-0x2c] (WRITE)
// 00531fa6: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00531faa: JMP 0x00531db2
//   XREF to: 00531db2 (UNCONDITIONAL_JUMP)
// 00531faf: LEA EAX,[EDI*0x8 + 0x0]
//   Label: LAB_00531faf
// 00531fb6: ADD EAX,EDI
// 00531fb8: SHL EAX,0x2
// 00531fbb: ADD EAX,EDI
// 00531fbd: MOV EAX,dword ptr [EAX*0x4 + 0x67e6cc]
//   XREF to: 0067e6cc (DATA)
// 00531fc4: JMP 0x00531dae
//   XREF to: 00531dae (UNCONDITIONAL_JUMP)
// 00531fc9: XOR EBX,EBX
//   Label: LAB_00531fc9
// 00531fcb: FLD double ptr [0x0063b04a]
//   XREF to: 0063b04a (READ)
// 00531fd1: MOV dword ptr [ESP + 0x64],EDX
//   Label: LAB_00531fd1
//   XREF to: Stack[-0x14] (WRITE)
// 00531fd5: FLD ST0
// 00531fd7: FILD dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x14] (READ)
// 00531fdb: CALL crt_math.c_pow_FUN_005ffd76
//   XREF to: 005ffd76 (UNCONDITIONAL_CALL)
// 00531fe0: ADD EBX,0x8
// 00531fe3: INC EDX
// 00531fe4: FSTP double ptr [EBX + 0x2f45980]
//   XREF to: 02f45988 (WRITE)
// 00531fea: CMP EDX,0xc8
// 00531ff0: JL 0x00531fd1
//   XREF to: 00531fd1 (CONDITIONAL_JUMP)
// 00531ff2: FSTP ST0
// 00531ff4: XOR EDX,EDX
// 00531ff6: XOR EBX,EBX
// 00531ff8: FLD double ptr [0x0063b052]
//   XREF to: 0063b052 (READ)
// 00531ffe: FLD double ptr [0x0063b042]
//   XREF to: 0063b042 (READ)
// 00532004: MOV EAX,EDX
//   Label: LAB_00532004
// 00532006: NEG EAX
// 00532008: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0053200c: FILD dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x14] (READ)
// 00532010: FMUL ST1
// 00532012: FLD ST2
// 00532014: CALL crt_math.c_pow_FUN_005ffd76
//   XREF to: 005ffd76 (UNCONDITIONAL_CALL)
// 00532019: ADD EBX,0x8
// 0053201c: INC EDX
// 0053201d: FSTP double ptr [EBX + 0x2f45fc0]
//   XREF to: 02f45fc8 (WRITE)
// 00532023: CMP EDX,0xc8
// 00532029: JL 0x00532004
//   XREF to: 00532004 (CONDITIONAL_JUMP)
// 0053202b: FSTP ST0
// 0053202d: MOV EBX,0x1
// 00532032: FSTP ST0
// 00532034: MOV dword ptr [0x02f45984],EBX
//   XREF to: 02f45984 (WRITE)
// 0053203a: JMP 0x00531dc0
//   XREF to: 00531dc0 (UNCONDITIONAL_JUMP)
// 0053203f: JGE 0x00532050
//   Label: LAB_0053203f
//   XREF to: 00532050 (CONDITIONAL_JUMP)
// 00532041: MOV EAX,dword ptr [EBX + 0x67e6cc]
//   XREF to: 0067e6d0 (DATA)
// 00532047: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0053204b: JMP 0x00531ee0
//   XREF to: 00531ee0 (UNCONDITIONAL_JUMP)
// 00532050: MOV EAX,dword ptr [EBX + 0x67e728]
//   Label: LAB_00532050
//   XREF to: 0067e72c (DATA)
//   XREF to: 0067e738 (DATA)
// 00532056: LEA EAX,[EAX + EAX*0x2]
// 00532059: MOV EDX,dword ptr [EBX + 0x67e724]
//   XREF to: 0067e728 (DATA)
//   XREF to: 0067e734 (DATA)
// 0053205f: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00532063: MOV EAX,dword ptr [EBX + 0x67e728]
//   XREF to: 0067e72c (DATA)
//   XREF to: 0067e738 (DATA)
// 00532069: SUB EAX,EDX
// 0053206b: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0053206f: LEA EAX,[EDX + EDX*0x2]
// 00532072: JMP 0x00531edc
//   XREF to: 00531edc (UNCONDITIONAL_JUMP)
// 00532077: INC ESI
//   Label: LAB_00532077
// 00532078: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x5c] (READ)
// 0053207c: LEA EAX,[ESI*0x4 + 0x0]
// 00532083: ADD EAX,EDX
// 00532085: MOV EAX,dword ptr [EAX + 0x67e6cc]
//   XREF to: 0067e6d0 (DATA)
//   XREF to: 0067e6dc (DATA)
// 0053208b: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0053208f: JMP 0x00531ee0
//   XREF to: 00531ee0 (UNCONDITIONAL_JUMP)
// 00532094: MOV EBX,dword ptr [ECX + 0x8]
//   Label: LAB_00532094
// 00532097: MOV EAX,dword ptr [ECX + 0x10]
// 0053209a: SUB EBX,0xd2
// 005320a0: TEST EAX,EAX
// 005320a2: JZ 0x0053218e
//   XREF to: 0053218e (CONDITIONAL_JUMP)
// 005320a8: CMP dword ptr [ECX + 0x14],0x2
// 005320ac: JNZ 0x00532177
//   XREF to: 00532177 (CONDITIONAL_JUMP)
// 005320b2: CMP dword ptr [ECX + 0x18],0x0
// 005320b6: JNZ 0x00532177
//   XREF to: 00532177 (CONDITIONAL_JUMP)
// 005320bc: MOV EDX,dword ptr [ESP + 0x40]
//   Label: LAB_005320bc
//   XREF to: Stack[-0x38] (READ)
// 005320c0: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x2c] (READ)
// 005320c4: SUB EDX,EAX
// 005320c6: MOV EAX,EDX
// 005320c8: SAR EDX,0x1f
// 005320cb: IDIV dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x28] (READ)
// 005320cf: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005320d3: MOV EAX,dword ptr [ECX + EAX*0x4 + 0x28]
// 005320d7: SHL EAX,0x3
// 005320da: MOV EDX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x14] (READ)
// 005320de: SUB EBX,EAX
// 005320e0: IMUL EAX,EDX,0x34
// 005320e3: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x58] (READ)
// 005320e7: ADD EDX,EAX
// 005320e9: LEA EAX,[ESI*0x4 + 0x0]
// 005320f0: ADD EDX,EAX
// 005320f2: MOV EAX,dword ptr [ECX + 0x40]
// 005320f5: INC EAX
// 005320f6: ADD EAX,EAX
// 005320f8: NEG EAX
// 005320fa: IMUL EAX,dword ptr [EDX + 0x5c]
// 005320fe: ADD EBX,EAX
//   Label: LAB_005320fe
// 00532100: TEST EBX,EBX
// 00532102: JLE 0x005321c7
//   XREF to: 005321c7 (CONDITIONAL_JUMP)
// 00532108: MOV dword ptr [ESP + 0x64],EBX
//   Label: LAB_00532108
//   XREF to: Stack[-0x14] (WRITE)
// 0053210c: FILD dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x14] (READ)
// 00532110: FMUL double ptr [0x0063b042]
//   XREF to: 0063b042 (READ)
// 00532116: FLD double ptr [0x0063b052]
//   XREF to: 0063b052 (READ)
// 0053211c: CALL crt_math.c_pow_FUN_005ffd76
//   XREF to: 005ffd76 (UNCONDITIONAL_CALL)
// 00532121: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x34] (READ)
// 00532125: FSTP float ptr [EAX]
//   Label: LAB_00532125
// 00532127: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x30] (READ)
// 0053212b: MOV EAX,dword ptr [EAX]
// 0053212d: CDQ
// 0053212e: XOR EAX,EDX
// 00532130: SUB EAX,EDX
// 00532132: CMP EAX,0xc8
// 00532137: JL 0x005321e5
//   XREF to: 005321e5 (CONDITIONAL_JUMP)
// 0053213d: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00532141: FLD double ptr [0x0063b04a]
//   XREF to: 0063b04a (READ)
// 00532147: FILD dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x14] (READ)
// 0053214b: CALL crt_math.c_pow_FUN_005ffd76
//   XREF to: 005ffd76 (UNCONDITIONAL_CALL)
// 00532150: MOV EAX,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x18] (READ)
// 00532154: FMUL float ptr [EAX]
// 00532156: FSTP float ptr [EAX]
// 00532158: MOV EAX,dword ptr [ESP + 0x2c]
//   Label: LAB_00532158
//   XREF to: Stack[-0x4c] (READ)
// 0053215c: CMP dword ptr [EDI + EAX*0x1],0x0
// 00532160: JGE 0x00531ef6
//   XREF to: 00531ef6 (CONDITIONAL_JUMP)
// 00532166: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x50] (READ)
// 0053216a: FLD float ptr [EDI + EAX*0x1]
// 0053216d: FCHS
// 0053216f: FSTP float ptr [EDI + EAX*0x1]
// 00532172: JMP 0x00531ef6
//   XREF to: 00531ef6 (UNCONDITIONAL_JUMP)
// 00532177: CMP dword ptr [ECX + 0x14],0x2
//   Label: LAB_00532177
// 0053217b: JNZ 0x0053218e
//   XREF to: 0053218e (CONDITIONAL_JUMP)
// 0053217d: CMP dword ptr [ECX + 0x18],0x0
// 00532181: JZ 0x0053218e
//   XREF to: 0053218e (CONDITIONAL_JUMP)
// 00532183: CMP dword ptr [ESP + 0x34],0x2
//   XREF to: Stack[-0x44] (READ)
// 00532188: JGE 0x005320bc
//   XREF to: 005320bc (CONDITIONAL_JUMP)
// 0053218e: MOV EDX,dword ptr [ECX + 0x3c]
//   Label: LAB_0053218e
// 00532191: LEA EAX,[ESI*0x4 + 0x0]
// 00532198: IMUL EDX,dword ptr [EAX + 0x67e174]
//   XREF to: 0067e180 (READ)
//   XREF to: 0067e184 (READ)
// 0053219f: MOV dword ptr [ESP + 0x64],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005321a3: ADD EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x60] (READ)
// 005321a7: MOV EDX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x14] (READ)
// 005321ab: MOV EAX,dword ptr [EAX]
// 005321ad: ADD EAX,EDX
// 005321af: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005321b3: MOV EAX,dword ptr [ECX + 0x40]
// 005321b6: INC EAX
// 005321b7: ADD EAX,EAX
// 005321b9: MOV EDX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x14] (READ)
// 005321bd: NEG EAX
// 005321bf: IMUL EAX,EDX
// 005321c2: JMP 0x005320fe
//   XREF to: 005320fe (UNCONDITIONAL_JUMP)
// 005321c7: CMP EBX,0xffffff38
//   Label: LAB_005321c7
// 005321cd: JLE 0x00532108
//   XREF to: 00532108 (CONDITIONAL_JUMP)
// 005321d3: NEG EBX
// 005321d5: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x3c] (READ)
// 005321d9: FLD double ptr [EBX*0x8 + 0x2f45fc8]
//   XREF to: 02f45fc8 (DATA)
// 005321e0: JMP 0x00532125
//   XREF to: 00532125 (UNCONDITIONAL_JUMP)
// 005321e5: MOV EDX,dword ptr [ESP + 0x60]
//   Label: LAB_005321e5
//   XREF to: Stack[-0x18] (READ)
// 005321e9: FLD float ptr [EDX]
// 005321eb: FLD ST0
// 005321ed: FMUL double ptr [EAX*0x8 + 0x2f45988]
//   XREF to: 02f45988 (DATA)
// 005321f4: FSTP ST1
// 005321f6: FSTP float ptr [EDX]
// 005321f8: JMP 0x00532158
//   XREF to: 00532158 (UNCONDITIONAL_JUMP)
