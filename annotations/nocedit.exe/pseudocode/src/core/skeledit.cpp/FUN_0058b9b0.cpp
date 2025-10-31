// Name: core_skeledit.cpp_FUN_0058b9b0
// Address: 0058b9b0
// Address Range: [[0058b9b0, 0058bc30]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058b9b0()
// Cross-references:
//   core_skeledit.cpp_FUN_0058b660 (0058b660) at 0058b874 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058c327 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_d_d_f_f_d_f_f_d_f_f_0064a8cf
//   undefined4 DAT_0064a8f2
//   undefined4 DAT_0064a8fa
// Function calls:
//   core_skeledit.cpp_FUN_0058ede0
//   crt_math.c_floor_FUN_005feb90
//   crt_math.c_round_FUN_005fe6b0
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   crt_stdio.c_fgetc_FUN_005fe840
//   crt_stdio.c_fscanf_FUN_005fe7c0

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 core_skeledit_cpp_FUN_0058b9b0(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_EAX;
  undefined4 extraout_EAX_00;
  float fVar4;
  int extraout_ECX;
  undefined2 *puVar5;
  float extraout_EDX;
  undefined4 extraout_EDX_00;
  BADSPACEBASE *in_ESP;
  int iVar6;
  int iVar7;
  float10 extraout_ST0;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  double dVar11;
  int in_stack_0000000c;
  FILE *in_stack_00000010;
  undefined8 local_4c;
  float local_44;
  float local_40;
  undefined1 local_3c [4];
  float local_38;
  undefined2 local_34 [2];
  undefined1 local_30 [4];
  undefined1 auStack_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float fStack_10;
  float fStack_c;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x88);
  iVar6 = 1;
  do {
    iVar2 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000010);
    if (iVar2 < 0) break;
  } while ((iVar2 != 10) || (iVar6 = iVar6 + -1, 0 < iVar6));
  iVar6 = 0;
  if (0 < *(int *)(in_stack_0000000c + 0x54)) {
    iVar2 = 0;
    iVar7 = 0;
    fVar8 = extraout_ST0;
    do {
      iVar3 = crt_stdio_c_fscanf_FUN_005fe7c0
                        ((FILE *)0x58ba3a,"%d,%d,%f,%f,%d,%f,%f,%d,%f,%f\n",local_34,&local_40,
                         &local_4c,local_30,local_3c,(int)&local_4c + 4,auStack_2c,&local_38,
                         &local_44);
      if (iVar3 != 10) {
        return 0;
      }
      local_14 = local_38;
      fStack_c = 4.0;
      iVar3 = 4;
      fVar4 = local_44;
      do {
        if (*(float *)((int)local_34 + iVar3 + -4) < local_14) {
          local_14 = *(float *)((int)local_34 + iVar3 + -4);
        }
        if (*(float *)((int)&local_44 + iVar3) < fVar4) {
          fVar4 = *(float *)((int)&local_44 + iVar3);
        }
        iVar3 = iVar3 + 4;
      } while (iVar3 != 0xc);
      local_4c = (double)((local_14 + 4.0) * (float)_DAT_0064a8f2);
      dVar11 = crt_math_c_floor_FUN_005feb90((double)fVar8);
      local_18 = (float)((float10)(double)CONCAT44(extraout_EDX,extraout_EAX) *
                        (float10)_DAT_0064a8fa);
      local_4c._0_4_ =
           (undefined4)((ulonglong)(double)((fStack_c + fStack_10) * (float)_DAT_0064a8f2) >> 0x20);
      local_20 = extraout_EDX;
      dVar11 = crt_math_c_floor_FUN_005feb90(dVar11);
      fVar8 = (float10)dVar11;
      local_28 = extraout_EAX_00;
      local_24 = extraout_EDX_00;
      fStack_10 = (float)((float10)(double)CONCAT44(extraout_EDX_00,extraout_EAX_00) *
                         (float10)_DAT_0064a8fa);
      if ((int)local_20 < 0) {
        local_20 = 0.0;
      }
      if (*(int *)(in_stack_0000000c + 0xbc) <= (int)local_20) {
        local_20 = 0.0;
      }
      puVar5 = (undefined2 *)(*(int *)(in_stack_0000000c + 0x7c) + iVar7);
      *(float *)(*(int *)(in_stack_0000000c + 0x90) + iVar2) = local_20;
      iVar3 = 0;
      fVar4 = local_20;
      do {
        uVar1 = *(undefined2 *)((int)local_34 + iVar3);
        *puVar5 = uVar1;
        fVar9 = ((float10)*(float *)(local_3c + iVar3 + -4) - (float10)local_1c) *
                (float10)_DAT_0064a8fa;
        fVar10 = ((float10)*(float *)((int)&local_4c + iVar3) - (float10)fStack_10) *
                 (float10)_DAT_0064a8fa;
        dVar11 = crt_math_c_round_FUN_005fe6b0
                           ((double)CONCAT44(iVar3,CONCAT22((short)((uint)fVar4 >> 0x10),uVar1)));
        local_4c._0_4_ = 0x58bb63;
        dVar11 = crt_math_c_round_FUN_005fe6b0(dVar11);
        local_18 = (float)(int)ROUND(fVar9);
        fStack_c = (float)(int)ROUND(fVar10);
        if ((int)local_18 < 0) {
          local_18 = 0.0;
        }
        else if (0xffff < (int)local_18) {
          local_18 = 9.18341e-41;
        }
        if ((int)fStack_c < 0) {
          fStack_c = 0.0;
        }
        else if (0xffff < (int)fStack_c) {
          fStack_c = 9.18341e-41;
        }
        puVar5 = (undefined2 *)(extraout_ECX + 2);
        *(short *)(extraout_ECX + 6) = SUB42(local_18,0);
        iVar3 = (int)((ulonglong)dVar11 >> 0x20) + 4;
        *(short *)(extraout_ECX + 0xc) = SUB42(fStack_c,0);
        fVar4 = fStack_c;
      } while (iVar3 != 0xc);
      iVar2 = iVar2 + 4;
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0x12;
    } while (iVar6 < *(int *)(in_stack_0000000c + 0x54));
  }
  core_skeledit_cpp_FUN_0058ede0();
  return 1;
}


// Assembly code:
// 0058b9b0: PUSH 0x88
//   Label: core_skeledit.cpp_FUN_0058b9b0
// 0058b9b5: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0058b9ba: PUSH EBX
// 0058b9bb: PUSH ESI
// 0058b9bc: PUSH EDI
// 0058b9bd: PUSH EBP
// 0058b9be: SUB ESP,0x44
// 0058b9c1: MOV EBX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x4] (READ)
// 0058b9c5: MOV ESI,0x1
// 0058b9ca: MOV EDI,dword ptr [ESP + 0x5c]
//   XREF to: Stack[0x8] (READ)
// 0058b9ce: PUSH EDI
//   Label: LAB_0058b9ce
// 0058b9cf: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0058b9d4: ADD ESP,0x4
// 0058b9d7: TEST EAX,EAX
// 0058b9d9: JL 0x0058b9e5
//   XREF to: 0058b9e5 (CONDITIONAL_JUMP)
// 0058b9db: CMP EAX,0xa
// 0058b9de: JNZ 0x0058b9ce
//   XREF to: 0058b9ce (CONDITIONAL_JUMP)
// 0058b9e0: DEC ESI
// 0058b9e1: TEST ESI,ESI
// 0058b9e3: JG 0x0058b9ce
//   XREF to: 0058b9ce (CONDITIONAL_JUMP)
// 0058b9e5: MOV EDX,dword ptr [EBX + 0x54]
//   Label: LAB_0058b9e5
// 0058b9e8: XOR ESI,ESI
// 0058b9ea: TEST EDX,EDX
// 0058b9ec: JLE 0x0058bbd4
//   XREF to: 0058bbd4 (CONDITIONAL_JUMP)
// 0058b9f2: XOR EBP,EBP
// 0058b9f4: XOR EDI,EDI
// 0058b9f6: LEA EAX,[ESP + 0x8]
//   Label: LAB_0058b9f6
//   XREF to: Stack[-0x4c] (DATA)
// 0058b9fa: PUSH EAX
// 0058b9fb: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x40] (DATA)
// 0058b9ff: PUSH EAX
// 0058ba00: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0x34] (DATA)
// 0058ba04: PUSH EAX
// 0058ba05: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x50] (DATA)
// 0058ba09: PUSH EAX
// 0058ba0a: LEA EAX,[ESP + 0x20]
//   XREF to: Stack[-0x44] (DATA)
// 0058ba0e: PUSH EAX
// 0058ba0f: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x38] (DATA)
// 0058ba13: PUSH EAX
// 0058ba14: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x54] (DATA)
// 0058ba18: PUSH EAX
// 0058ba19: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0x48] (DATA)
// 0058ba1d: PUSH EAX
// 0058ba1e: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0x3c] (DATA)
// 0058ba22: PUSH EAX
// 0058ba23: LEA EAX,[ESP + 0x50]
//   XREF to: Stack[-0x28] (DATA)
// 0058ba27: PUSH EAX
// 0058ba28: PUSH 0x64a8cf
//   XREF to: 0064a8cf (DATA)
// 0058ba2d: MOV EAX,dword ptr [ESP + 0x88]
//   XREF to: Stack[0x8] (READ)
// 0058ba34: PUSH EAX
// 0058ba35: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0058ba3a: ADD ESP,0x30
// 0058ba3d: CMP EAX,0xa
// 0058ba40: JNZ 0x0058bbec
//   XREF to: 0058bbec (CONDITIONAL_JUMP)
// 0058ba46: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x48] (READ)
// 0058ba4a: MOV EDX,0x40800000
// 0058ba4f: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0058ba53: MOV dword ptr [ESP + 0x38],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0058ba57: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x54] (DATA)
// 0058ba5a: MOV EDX,0x4
// 0058ba5f: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0058ba63: FLD float ptr [ESP + EDX*0x1 + 0xc]
//   Label: LAB_0058ba63
// 0058ba67: FCOMP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x24] (READ)
// 0058ba6b: FNSTSW AX
// 0058ba6d: SAHF
// 0058ba6e: JC 0x0058bbf8
//   XREF to: 0058bbf8 (CONDITIONAL_JUMP)
// 0058ba74: FLD float ptr [ESP + EDX*0x1]
//   Label: LAB_0058ba74
// 0058ba77: FCOMP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x18] (READ)
// 0058ba7b: FNSTSW AX
// 0058ba7d: SAHF
// 0058ba7e: JNC 0x0058ba87
//   XREF to: 0058ba87 (CONDITIONAL_JUMP)
// 0058ba80: MOV EAX,dword ptr [ESP + EDX*0x1]
// 0058ba83: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0058ba87: ADD EDX,0x4
//   Label: LAB_0058ba87
// 0058ba8a: CMP EDX,0xc
// 0058ba8d: JNZ 0x0058ba63
//   XREF to: 0058ba63 (CONDITIONAL_JUMP)
// 0058ba8f: FLD float ptr [ESP + 0x30]
//   XREF to: Stack[-0x24] (READ)
// 0058ba93: FADD float ptr [ESP + 0x38]
//   XREF to: Stack[-0x1c] (READ)
// 0058ba97: FMUL double ptr [0x0064a8f2]
//   XREF to: 0064a8f2 (READ)
// 0058ba9d: SUB ESP,0x8
// 0058baa0: FSTP double ptr [ESP]
//   XREF to: Stack[-0x5c] (DATA)
// 0058baa3: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 0058baa8: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0058baac: MOV dword ptr [ESP + 0x30],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 0058bab0: FLD double ptr [ESP + 0x2c]
//   XREF to: Stack[-0x30] (READ)
// 0058bab4: ADD ESP,0x8
// 0058bab7: FLD float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x18] (READ)
// 0058babb: FADD float ptr [ESP + 0x38]
//   XREF to: Stack[-0x1c] (READ)
// 0058babf: FXCH
// 0058bac1: FMUL double ptr [0x0064a8fa]
//   XREF to: 0064a8fa (READ)
// 0058bac7: FXCH
// 0058bac9: FMUL double ptr [0x0064a8f2]
//   XREF to: 0064a8f2 (READ)
// 0058bacf: FXCH
// 0058bad1: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x24] (WRITE)
// 0058bad5: SUB ESP,0x8
// 0058bad8: FSTP double ptr [ESP]
//   XREF to: Stack[-0x5c] (DATA)
// 0058badb: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 0058bae0: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0058bae4: MOV dword ptr [ESP + 0x30],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 0058bae8: FLD double ptr [ESP + 0x2c]
//   XREF to: Stack[-0x30] (READ)
// 0058baec: ADD ESP,0x8
// 0058baef: FMUL double ptr [0x0064a8fa]
//   XREF to: 0064a8fa (READ)
// 0058baf5: MOV ECX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x28] (READ)
// 0058baf9: FSTP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x18] (WRITE)
// 0058bafd: TEST ECX,ECX
// 0058baff: JL 0x0058bc05
//   XREF to: 0058bc05 (CONDITIONAL_JUMP)
// 0058bb05: MOV EAX,dword ptr [ESP + 0x2c]
//   Label: LAB_0058bb05
//   XREF to: Stack[-0x28] (READ)
// 0058bb09: CMP EAX,dword ptr [EBX + 0xbc]
// 0058bb0f: JGE 0x0058bc10
//   XREF to: 0058bc10 (CONDITIONAL_JUMP)
// 0058bb15: MOV EAX,dword ptr [EBX + 0x7c]
//   Label: LAB_0058bb15
// 0058bb18: LEA ECX,[EAX + EDI*0x1]
// 0058bb1b: MOV EAX,dword ptr [EBX + 0x90]
// 0058bb21: LEA EDX,[EAX + EBP*0x1]
// 0058bb24: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x28] (READ)
// 0058bb28: MOV dword ptr [EDX],EAX
// 0058bb2a: XOR EDX,EDX
// 0058bb2c: MOV AX,word ptr [ESP + EDX*0x1 + 0x18]
//   Label: LAB_0058bb2c
// 0058bb31: MOV word ptr [ECX],AX
// 0058bb34: FLD float ptr [ESP + EDX*0x1]
//   XREF to: Stack[-0x54] (DATA)
// 0058bb37: FLD float ptr [ESP + EDX*0x1 + 0xc]
// 0058bb3b: FSUB float ptr [ESP + 0x30]
//   XREF to: Stack[-0x24] (READ)
// 0058bb3f: FXCH
// 0058bb41: FSUB float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x18] (READ)
// 0058bb45: FXCH
// 0058bb47: FLD double ptr [0x0064a8fa]
//   XREF to: 0064a8fa (READ)
// 0058bb4d: FXCH
// 0058bb4f: FMUL ST1
// 0058bb51: FXCH ST2
// 0058bb53: FMULP
// 0058bb55: FXCH
// 0058bb57: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0058bb5c: FXCH
// 0058bb5e: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0058bb63: FXCH
// 0058bb65: FISTP dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x20] (WRITE)
// 0058bb69: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x20] (READ)
// 0058bb6d: FISTP dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x14] (WRITE)
// 0058bb71: TEST EAX,EAX
// 0058bb73: JL 0x0058bc1b
//   XREF to: 0058bc1b (CONDITIONAL_JUMP)
// 0058bb79: CMP EAX,0xffff
// 0058bb7e: JLE 0x0058bb88
//   XREF to: 0058bb88 (CONDITIONAL_JUMP)
// 0058bb80: MOV dword ptr [ESP + 0x34],0xffff
//   XREF to: Stack[-0x20] (WRITE)
// 0058bb88: MOV EAX,dword ptr [ESP + 0x40]
//   Label: LAB_0058bb88
//   XREF to: Stack[-0x14] (READ)
// 0058bb8c: TEST EAX,EAX
// 0058bb8e: JL 0x0058bc26
//   XREF to: 0058bc26 (CONDITIONAL_JUMP)
// 0058bb94: CMP EAX,0xffff
// 0058bb99: JLE 0x0058bba3
//   XREF to: 0058bba3 (CONDITIONAL_JUMP)
// 0058bb9b: MOV dword ptr [ESP + 0x40],0xffff
//   XREF to: Stack[-0x14] (WRITE)
// 0058bba3: ADD ECX,0x2
//   Label: LAB_0058bba3
// 0058bba6: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x20] (READ)
// 0058bbaa: MOV word ptr [ECX + 0x4],AX
// 0058bbae: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x14] (READ)
// 0058bbb2: ADD EDX,0x4
// 0058bbb5: MOV word ptr [ECX + 0xa],AX
// 0058bbb9: CMP EDX,0xc
// 0058bbbc: JNZ 0x0058bb2c
//   XREF to: 0058bb2c (CONDITIONAL_JUMP)
// 0058bbc2: ADD EBP,0x4
// 0058bbc5: INC ESI
// 0058bbc6: MOV ECX,dword ptr [EBX + 0x54]
// 0058bbc9: ADD EDI,0x12
// 0058bbcc: CMP ESI,ECX
// 0058bbce: JL 0x0058b9f6
//   XREF to: 0058b9f6 (CONDITIONAL_JUMP)
// 0058bbd4: PUSH EBX
//   Label: LAB_0058bbd4
// 0058bbd5: CALL core_skeledit.cpp_FUN_0058ede0
//   XREF to: 0058ede0 (UNCONDITIONAL_CALL)
// 0058bbda: MOV EDX,0x1
// 0058bbdf: ADD ESP,0x4
// 0058bbe2: MOV EAX,EDX
// 0058bbe4: ADD ESP,0x44
// 0058bbe7: POP EBP
// 0058bbe8: POP EDI
// 0058bbe9: POP ESI
// 0058bbea: POP EBX
// 0058bbeb: RET
// 0058bbec: XOR EDX,EDX
//   Label: LAB_0058bbec
// 0058bbee: MOV EAX,EDX
// 0058bbf0: ADD ESP,0x44
// 0058bbf3: POP EBP
// 0058bbf4: POP EDI
// 0058bbf5: POP ESI
// 0058bbf6: POP EBX
// 0058bbf7: RET
// 0058bbf8: MOV EAX,dword ptr [ESP + EDX*0x1 + 0xc]
//   Label: LAB_0058bbf8
// 0058bbfc: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0058bc00: JMP 0x0058ba74
//   XREF to: 0058ba74 (UNCONDITIONAL_JUMP)
// 0058bc05: XOR EAX,EAX
//   Label: LAB_0058bc05
// 0058bc07: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0058bc0b: JMP 0x0058bb05
//   XREF to: 0058bb05 (UNCONDITIONAL_JUMP)
// 0058bc10: XOR ECX,ECX
//   Label: LAB_0058bc10
// 0058bc12: MOV dword ptr [ESP + 0x2c],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 0058bc16: JMP 0x0058bb15
//   XREF to: 0058bb15 (UNCONDITIONAL_JUMP)
// 0058bc1b: XOR EAX,EAX
//   Label: LAB_0058bc1b
// 0058bc1d: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0058bc21: JMP 0x0058bb88
//   XREF to: 0058bb88 (UNCONDITIONAL_JUMP)
// 0058bc26: XOR EAX,EAX
//   Label: LAB_0058bc26
// 0058bc28: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0058bc2c: JMP 0x0058bba3
//   XREF to: 0058bba3 (UNCONDITIONAL_JUMP)
