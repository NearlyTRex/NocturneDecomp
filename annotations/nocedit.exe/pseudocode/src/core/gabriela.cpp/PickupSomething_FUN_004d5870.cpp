// Name: core_gabriela.cpp_PickupSomething_FUN_004d5870
// Address: 004d5870
// Address Range: [[004d5870, 004d5c0e]]
// Convention: unknown
// Signature: undefined core_gabriela.cpp_PickupSomething_FUN_004d5870()
// Cross-references:
//   core_gabriela.cpp_FUN_004d2ea0 (004d2ea0) at 004d3ba1 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_gabriela_cpp_0062afaf
//   TerminatedCString s_Hell_froze_invalid_pickU_0062afc4
//   double DOUBLE_0062afed = -0.800000000000000
//   double DOUBLE_0062aff5 = 2
//   WatcomTypeInfo g_CVectorTypeInfo
//   CDemonSet* g_CDemonSetPtr = 03114278
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 g_CDemonSetInstance.actor_list_ptr
//   undefined4 g_CDemonSetInstance.actor_list_data[0]
//   undefined4 DAT_032613d4
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408ec0
//   core_actor.cpp_CDemonActor_FUN_00408f10
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

/* Signature: undefined1 actors_hero_gabriella.cpp_PickupSomething(undefined4 param_1) */

undefined4 core_gabriela_cpp_PickupSomething_FUN_004d5870(void)

{
  CDemonActor *this_ptr;
  int iVar1;
  float fVar2;
  float *pfVar3;
  float **ppfVar4;
  CDemonActor *pCVar5;
  uint uVar6;
  BADSPACEBASE *in_ESP;
  int iVar7;
  CDemonActor *in_stack_00000004;
  float in_stack_0000000c;
  CDemonActor *local_bc;
  float local_a4 [2];
  float *local_98;
  CDemonActor *local_94;
  float *local_90;
  float local_8c [13];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  char local_48 [16];
  float local_38;
  float fStack_34;
  float fStack_30;
  CLocation *pCStack_1c;
  float local_18;
  float fStack_14;
  float fVar8;
  
  in_stack_00000004[0x179].scale.x = 0;
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(&local_bc,4,&g_CVectorTypeInfo);
  local_58 = 0xbda3d70a;
  local_54 = 0x3ee147ae;
  local_50 = 0x3ff5c28f;
  pfVar3 = core_actor_cpp_CDemonActor_FUN_00408ec0(in_stack_00000004);
  if ((float *)&stack0xffffff58 != pfVar3) {
    local_a4[0] = pfVar3[1];
    local_a4[1] = pfVar3[2];
  }
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_bc = (CDemonActor *)local_48;
  local_48[0] = 'f';
  local_48[1] = 'f';
  local_48[2] = '&';
  local_48[3] = -0x41;
  local_48[8] = '\x14';
  local_48[9] = -0x52;
  local_48[10] = '\a';
  local_48[0xb] = '@';
  ppfVar4 = (float **)core_actor_cpp_CDemonActor_FUN_00408ec0(in_stack_00000004);
  if (&local_98 != ppfVar4) {
    local_98 = *ppfVar4;
    local_94 = (CDemonActor *)ppfVar4[1];
    local_90 = ppfVar4[2];
  }
  local_bc = (CDemonActor *)(local_8c + 6);
  local_8c[3] = 0.0;
  local_8c[4] = 0.0;
  local_8c[5] = 2.0;
  pfVar3 = core_actor_cpp_CDemonActor_FUN_00408ec0(in_stack_00000004);
  if (local_8c + 1 != pfVar3) {
    local_8c[1] = *pfVar3;
    local_8c[2] = pfVar3[1];
    local_8c[3] = pfVar3[2];
  }
  iVar7 = 0;
  fStack_14 = 4.0;
  pCStack_1c = &in_stack_00000004->location;
  for (fVar8 = 0.0; (int)fVar8 < (int)g_CDemonSetPtr->actor_list_ptr;
      fVar8 = (float)((int)fVar8 + 1)) {
    this_ptr = *(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar7);
    pCVar5 = (*((this_ptr->metadata).vtable)->getCarrier)(this_ptr);
    if (pCVar5 == (CDemonActor *)0x0) {
      uVar6 = (*((this_ptr->metadata).vtable)->canPickup)(this_ptr,in_stack_00000004);
      if (uVar6 < 2) {
        if ((uVar6 == 1) && (in_stack_00000004[0x1b].field7_0x6c == 0)) {
          local_94 = in_stack_00000004;
          local_98 = &local_38;
          local_a4[1] = 7.10386e-39;
          core_actor_cpp_CDemonActor_FUN_00408f10(this_ptr);
          local_90 = (float *)SQRT(fStack_30 * fStack_30 +
                                   local_38 * local_38 + fStack_34 * fStack_34);
          if ((float)local_90 <= 0.0) {
            fStack_34 = 0.0;
            local_38 = 0.0;
            fStack_30 = 0.0;
          }
          else {
            fVar2 = 1.0 / (float)local_90;
            local_38 = local_38 * fVar2;
            fStack_34 = fStack_34 * fVar2;
            fStack_30 = fStack_30 * fVar2;
          }
          if (fStack_30 <= (float)DOUBLE_0062afed) goto LAB_004d59f9;
        }
      }
      else if (((uVar6 < 3) || (uVar6 == 3)) && (in_stack_00000004[0x1b].field7_0x6c == 0)) {
LAB_004d59f9:
        fStack_14 = (this_ptr->location).position.x - local_8c[uVar6 * 3];
        fVar2 = (this_ptr->location).position.z - local_8c[uVar6 * 3 + 2];
        if ((ABS((this_ptr->location).position.y - local_8c[uVar6 * 3 + 1]) <=
             (float)DOUBLE_0062aff5) &&
           (fVar2 = fStack_14 * fStack_14 + fVar2 * fVar2, fVar2 <= in_stack_0000000c)) {
          in_stack_00000004[0x179].scale.x = (int)this_ptr;
          in_stack_0000000c = fVar2;
        }
      }
    }
    iVar7 = iVar7 + 4;
  }
  iVar7 = in_stack_00000004[0x179].scale.x;
  if (iVar7 == 0) {
    return 0;
  }
  iVar1 = in_stack_00000004[0x179].scale.x;
  (in_stack_00000004->location).position.x =
       (*(float *)(iVar7 + 0x20) - local_8c[(int)local_18 * 3 + -8]) +
       (in_stack_00000004->location).position.x;
  local_bc = in_stack_00000004 + 1;
  (in_stack_00000004->location).position.z =
       (*(float *)(iVar1 + 0x28) - local_a4[(int)local_18 * 3]) +
       (in_stack_00000004->location).position.z;
  if ((uint)local_18 < 2) {
    if (local_18 != 1.4013e-45) {
LAB_004d5bd9:
      g_CurrentFilename = "..\\core\\gabriela.cpp";
      g_CurrentLineNumber = 0x638;
      local_bc = (CDemonActor *)0x4d5c01;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze - invalid pickUpType: %d");
      return 1;
    }
  }
  else if ((2 < (uint)local_18) && (local_18 != 4.2039e-45)) goto LAB_004d5bd9;
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
  return 1;
}


// Assembly code:
// 004d5870: PUSH EBX
//   Label: core_gabriela.cpp_PickupSomething_FUN_004d5870
// 004d5871: PUSH ESI
// 004d5872: PUSH EDI
// 004d5873: PUSH EBP
// 004d5874: MOV EBP,ESP
// 004d5876: SUB ESP,0xb0
// 004d587c: AND ESP,0xfffffff8
// 004d587f: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004d5882: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 004d5887: PUSH 0x4
// 004d5889: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0xbc] (DATA)
// 004d588d: PUSH EAX
// 004d588e: MOV dword ptr [ESI + 0x1fba0],0x0
// 004d5898: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 004d589d: ADD ESP,0xc
// 004d58a0: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0x5c] (DATA)
// 004d58a4: MOV EBX,0x3ff5c28f
// 004d58a9: PUSH EAX
// 004d58aa: LEA EAX,[ESP + 0x50]
//   XREF to: Stack[-0x74] (DATA)
// 004d58ae: MOV EDX,0xbda3d70a
// 004d58b3: PUSH EAX
// 004d58b4: MOV ECX,0x3ee147ae
// 004d58b9: MOV dword ptr [ESP + 0x6c],EDX
//   XREF to: Stack[-0x5c] (WRITE)
// 004d58bd: PUSH ESI
// 004d58be: MOV dword ptr [ESP + 0x74],ECX
//   XREF to: Stack[-0x58] (WRITE)
// 004d58c2: MOV dword ptr [ESP + 0x78],EBX
//   XREF to: Stack[-0x54] (WRITE)
// 004d58c6: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004d58cb: MOV EDX,EAX
// 004d58cd: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0xb0] (DATA)
// 004d58d1: ADD ESP,0xc
// 004d58d4: CMP EAX,EDX
// 004d58d6: JZ 0x004d58ec
//   XREF to: 004d58ec (CONDITIONAL_JUMP)
// 004d58d8: MOV EAX,dword ptr [EDX]
// 004d58da: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0xb0] (WRITE)
// 004d58de: MOV EAX,dword ptr [EDX + 0x4]
// 004d58e1: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0xac] (WRITE)
// 004d58e5: MOV EAX,dword ptr [EDX + 0x8]
// 004d58e8: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0xa8] (WRITE)
// 004d58ec: XOR EAX,EAX
//   Label: LAB_004d58ec
// 004d58ee: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 004d58f2: LEA EAX,[ESP + 0x70]
//   XREF to: Stack[-0x50] (DATA)
// 004d58f6: PUSH EAX
// 004d58f7: LEA EAX,[ESP + 0x8c]
//   XREF to: Stack[-0x38] (DATA)
// 004d58fe: PUSH EAX
// 004d58ff: MOV EDI,0xbf266666
// 004d5904: MOV EDX,0x4007ae14
// 004d5909: PUSH ESI
// 004d590a: MOV dword ptr [ESP + 0x7c],EDI
//   XREF to: Stack[-0x50] (WRITE)
// 004d590e: MOV dword ptr [ESP + 0x84],EDX
//   XREF to: Stack[-0x48] (WRITE)
// 004d5915: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004d591a: MOV EDX,EAX
// 004d591c: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0xa4] (DATA)
// 004d5920: ADD ESP,0xc
// 004d5923: CMP EAX,EDX
// 004d5925: JZ 0x004d593b
//   XREF to: 004d593b (CONDITIONAL_JUMP)
// 004d5927: MOV EAX,dword ptr [EDX]
// 004d5929: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0xa4] (WRITE)
// 004d592d: MOV EAX,dword ptr [EDX + 0x4]
// 004d5930: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0xa0] (WRITE)
// 004d5934: MOV EAX,dword ptr [EDX + 0x8]
// 004d5937: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x9c] (WRITE)
// 004d593b: LEA EAX,[ESP + 0x34]
//   Label: LAB_004d593b
//   XREF to: Stack[-0x8c] (DATA)
// 004d593f: PUSH EAX
// 004d5940: LEA EAX,[ESP + 0x44]
//   XREF to: Stack[-0x80] (DATA)
// 004d5944: XOR ECX,ECX
// 004d5946: PUSH EAX
// 004d5947: MOV EDI,0x40000000
// 004d594c: MOV dword ptr [ESP + 0x3c],ECX
//   XREF to: Stack[-0x8c] (WRITE)
// 004d5950: PUSH ESI
// 004d5951: MOV dword ptr [ESP + 0x44],ECX
//   XREF to: Stack[-0x88] (WRITE)
// 004d5955: MOV dword ptr [ESP + 0x48],EDI
//   XREF to: Stack[-0x84] (WRITE)
// 004d5959: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004d595e: MOV EDX,EAX
// 004d5960: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[-0x98] (DATA)
// 004d5964: ADD ESP,0xc
// 004d5967: CMP EAX,EDX
// 004d5969: JNZ 0x004d59d7
//   XREF to: 004d59d7 (CONDITIONAL_JUMP)
// 004d596b: MOV EAX,0x40800000
//   Label: LAB_004d596b
// 004d5970: XOR EDX,EDX
// 004d5972: XOR EDI,EDI
// 004d5974: MOV dword ptr [ESP + 0x9c],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004d597b: LEA EAX,[ESI + 0x20]
// 004d597e: MOV dword ptr [ESP + 0xa8],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 004d5985: MOV dword ptr [ESP + 0x94],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 004d598c: MOV EAX,[0x006810c8]
//   Label: LAB_004d598c
//   XREF to: 006810c8 (READ)
// 004d5991: MOV EDX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[-0x18] (READ)
// 004d5998: CMP EDX,dword ptr [EAX + 0x14d154]
//   XREF to: 032613cc (READ)
// 004d599e: JGE 0x004d5b60
//   XREF to: 004d5b60 (CONDITIONAL_JUMP)
// 004d59a4: MOV EBX,dword ptr [EDI + EAX*0x1 + 0x14d158]
//   XREF to: 032613d0 (READ)
//   XREF to: 032613d4 (READ)
// 004d59ab: PUSH EBX
// 004d59ac: MOV EAX,dword ptr [EBX + 0x154]
// 004d59b2: CALL dword ptr [EAX + 0x8c]
// 004d59b8: ADD ESP,0x4
// 004d59bb: TEST EAX,EAX
// 004d59bd: JZ 0x004d5b24
//   XREF to: 004d5b24 (CONDITIONAL_JUMP)
// 004d59c3: MOV ECX,dword ptr [ESP + 0xa8]
//   Label: LAB_004d59c3
// 004d59ca: INC ECX
// 004d59cb: ADD EDI,0x4
// 004d59ce: MOV dword ptr [ESP + 0xa8],ECX
// 004d59d5: JMP 0x004d598c
//   XREF to: 004d598c (UNCONDITIONAL_JUMP)
// 004d59d7: MOV EAX,dword ptr [EDX]
//   Label: LAB_004d59d7
// 004d59d9: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x98] (WRITE)
// 004d59dd: MOV EAX,dword ptr [EDX + 0x4]
// 004d59e0: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x94] (WRITE)
// 004d59e4: MOV EAX,dword ptr [EDX + 0x8]
// 004d59e7: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x90] (WRITE)
// 004d59eb: JMP 0x004d596b
//   XREF to: 004d596b (UNCONDITIONAL_JUMP)
// 004d59f0: CMP dword ptr [ESI + 0x24b4],0x0
//   Label: LAB_004d59f0
// 004d59f7: JNZ 0x004d59c3
//   XREF to: 004d59c3 (CONDITIONAL_JUMP)
// 004d59f9: IMUL EAX,dword ptr [ESP + 0xa0],0xc
//   Label: LAB_004d59f9
// 004d5a01: LEA EDX,[ESP + 0x4]
// 004d5a05: ADD EDX,EAX
// 004d5a07: LEA EAX,[EBX + 0x20]
// 004d5a0a: FLD float ptr [EAX]
// 004d5a0c: FSUB float ptr [EDX]
// 004d5a0e: FSTP float ptr [ESP + 0x7c]
// 004d5a12: FLD float ptr [EAX + 0x4]
// 004d5a15: FSUB float ptr [EDX + 0x4]
// 004d5a18: FST float ptr [ESP + 0x80]
// 004d5a1f: FLD float ptr [EAX + 0x8]
// 004d5a22: FXCH
// 004d5a24: FABS
// 004d5a26: FXCH
// 004d5a28: FSUB float ptr [EDX + 0x8]
// 004d5a2b: FSTP float ptr [ESP + 0x84]
// 004d5a32: FCOMP double ptr [0x0062aff5]
//   XREF to: 0062aff5 (READ)
// 004d5a38: FNSTSW AX
// 004d5a3a: SAHF
// 004d5a3b: JA 0x004d59c3
//   XREF to: 004d59c3 (CONDITIONAL_JUMP)
// 004d5a3d: FLD float ptr [ESP + 0x84]
// 004d5a44: FMUL ST0
// 004d5a46: FLD float ptr [ESP + 0x7c]
// 004d5a4a: FMUL ST0
// 004d5a4c: FADDP
// 004d5a4e: FST float ptr [ESP + 0xa4]
// 004d5a55: FCOMP float ptr [ESP + 0x9c]
// 004d5a5c: FNSTSW AX
// 004d5a5e: SAHF
// 004d5a5f: JA 0x004d59c3
//   XREF to: 004d59c3 (CONDITIONAL_JUMP)
// 004d5a65: MOV EAX,dword ptr [ESP + 0xa4]
// 004d5a6c: MOV dword ptr [ESP + 0x9c],EAX
// 004d5a73: MOV EAX,dword ptr [ESP + 0xa0]
// 004d5a7a: MOV dword ptr [ESI + 0x1fba0],EBX
// 004d5a80: MOV dword ptr [ESP + 0x98],EAX
// 004d5a87: JMP 0x004d59c3
//   XREF to: 004d59c3 (UNCONDITIONAL_JUMP)
// 004d5a8c: CMP dword ptr [ESI + 0x24b4],0x0
//   Label: LAB_004d5a8c
// 004d5a93: JNZ 0x004d59c3
//   XREF to: 004d59c3 (CONDITIONAL_JUMP)
// 004d5a99: MOV EAX,dword ptr [ESP + 0x94]
// 004d5aa0: PUSH EAX
// 004d5aa1: LEA EAX,[ESP + 0x5c]
// 004d5aa5: PUSH EAX
// 004d5aa6: PUSH EBX
// 004d5aa7: CALL core_actor.cpp_CDemonActor_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 004d5aac: ADD ESP,0xc
// 004d5aaf: FLD float ptr [ESP + 0x5c]
// 004d5ab3: FMUL ST0
// 004d5ab5: FLD float ptr [ESP + 0x58]
// 004d5ab9: FMUL ST0
// 004d5abb: FADDP
// 004d5abd: FLD float ptr [ESP + 0x60]
// 004d5ac1: FMUL ST0
// 004d5ac3: FADDP
// 004d5ac5: FSQRT
// 004d5ac7: FST float ptr [ESP]
// 004d5aca: FLDZ
// 004d5acc: FCOMPP
// 004d5ace: FNSTSW AX
// 004d5ad0: SAHF
// 004d5ad1: JNC 0x004d5b14
//   XREF to: 004d5b14 (CONDITIONAL_JUMP)
// 004d5ad3: FLD1
// 004d5ad5: FLD float ptr [ESP + 0x58]
// 004d5ad9: FXCH
// 004d5adb: FDIV float ptr [ESP]
// 004d5ade: FXCH
// 004d5ae0: FMUL ST1
// 004d5ae2: FLD float ptr [ESP + 0x5c]
// 004d5ae6: FMUL ST2
// 004d5ae8: FLD float ptr [ESP + 0x60]
// 004d5aec: FMULP ST3
// 004d5aee: FXCH
// 004d5af0: FSTP float ptr [ESP + 0x58]
// 004d5af4: FSTP float ptr [ESP + 0x5c]
// 004d5af8: FSTP float ptr [ESP + 0x60]
// 004d5afc: FLD float ptr [ESP + 0x60]
//   Label: LAB_004d5afc
// 004d5b00: FCOMP double ptr [0x0062afed]
//   XREF to: 0062afed (READ)
// 004d5b06: FNSTSW AX
// 004d5b08: SAHF
// 004d5b09: JA 0x004d59c3
//   XREF to: 004d59c3 (CONDITIONAL_JUMP)
// 004d5b0f: JMP 0x004d59f9
//   XREF to: 004d59f9 (UNCONDITIONAL_JUMP)
// 004d5b14: XOR EDX,EDX
//   Label: LAB_004d5b14
// 004d5b16: MOV dword ptr [ESP + 0x5c],EDX
// 004d5b1a: MOV dword ptr [ESP + 0x58],EDX
// 004d5b1e: MOV dword ptr [ESP + 0x60],EDX
// 004d5b22: JMP 0x004d5afc
//   XREF to: 004d5afc (UNCONDITIONAL_JUMP)
// 004d5b24: PUSH ESI
//   Label: LAB_004d5b24
// 004d5b25: MOV EAX,dword ptr [EBX + 0x154]
// 004d5b2b: PUSH EBX
// 004d5b2c: CALL dword ptr [EAX + 0x7c]
// 004d5b2f: ADD ESP,0x8
// 004d5b32: MOV dword ptr [ESP + 0xa0],EAX
// 004d5b39: CMP EAX,0x2
// 004d5b3c: JNC 0x004d5b4c
//   XREF to: 004d5b4c (CONDITIONAL_JUMP)
// 004d5b3e: CMP EAX,0x1
// 004d5b41: JZ 0x004d5a8c
//   XREF to: 004d5a8c (CONDITIONAL_JUMP)
// 004d5b47: JMP 0x004d59c3
//   XREF to: 004d59c3 (UNCONDITIONAL_JUMP)
// 004d5b4c: JBE 0x004d59f0
//   Label: LAB_004d5b4c
//   XREF to: 004d59f0 (CONDITIONAL_JUMP)
// 004d5b52: CMP EAX,0x3
// 004d5b55: JZ 0x004d59f0
//   XREF to: 004d59f0 (CONDITIONAL_JUMP)
// 004d5b5b: JMP 0x004d59c3
//   XREF to: 004d59c3 (UNCONDITIONAL_JUMP)
// 004d5b60: MOV EBX,dword ptr [ESI + 0x1fba0]
//   Label: LAB_004d5b60
// 004d5b66: TEST EBX,EBX
// 004d5b68: JZ 0x004d5bc9
//   XREF to: 004d5bc9 (CONDITIONAL_JUMP)
// 004d5b6a: MOV EDX,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x28] (READ)
// 004d5b71: LEA EAX,[EDX*0x4 + 0x0]
// 004d5b78: SUB EAX,EDX
// 004d5b7a: FLD float ptr [EBX + 0x20]
// 004d5b7d: FSUB float ptr [ESP + EAX*0x4 + 0x4]
// 004d5b81: FADD float ptr [ESI + 0x20]
// 004d5b84: MOV EDX,dword ptr [ESI + 0x1fba0]
// 004d5b8a: FSTP float ptr [ESI + 0x20]
// 004d5b8d: FLD float ptr [EDX + 0x28]
// 004d5b90: FSUB float ptr [ESP + EAX*0x4 + 0xc]
// 004d5b94: FADD float ptr [ESI + 0x28]
// 004d5b97: LEA EAX,[ESI + 0x158]
// 004d5b9d: FSTP float ptr [ESI + 0x28]
// 004d5ba0: MOV ESI,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x28] (READ)
// 004d5ba7: CMP ESI,0x2
// 004d5baa: JNC 0x004d5c06
//   XREF to: 004d5c06 (CONDITIONAL_JUMP)
// 004d5bac: CMP ESI,0x1
// 004d5baf: JNZ 0x004d5bd9
//   XREF to: 004d5bd9 (CONDITIONAL_JUMP)
// 004d5bb1: PUSH ESI
// 004d5bb2: PUSH 0xe
// 004d5bb4: PUSH EAX
//   Label: LAB_004d5bb4
// 004d5bb5: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004d5bba: ADD ESP,0xc
// 004d5bbd: MOV EAX,0x1
//   Label: LAB_004d5bbd
// 004d5bc2: MOV ESP,EBP
//   Label: LAB_004d5bc2
// 004d5bc4: POP EBP
// 004d5bc5: POP EDI
// 004d5bc6: POP ESI
// 004d5bc7: POP EBX
// 004d5bc8: RET
// 004d5bc9: XOR EAX,EAX
//   Label: LAB_004d5bc9
// 004d5bcb: JMP 0x004d5bc2
//   XREF to: 004d5bc2 (UNCONDITIONAL_JUMP)
// 004d5bcd: PUSH 0x1
//   Label: LAB_004d5bcd
// 004d5bcf: PUSH 0xf
// 004d5bd1: JMP 0x004d5bb4
//   XREF to: 004d5bb4 (UNCONDITIONAL_JUMP)
// 004d5bd3: PUSH 0x1
//   Label: LAB_004d5bd3
// 004d5bd5: PUSH 0x4
// 004d5bd7: JMP 0x004d5bb4
//   XREF to: 004d5bb4 (UNCONDITIONAL_JUMP)
// 004d5bd9: MOV EDI,dword ptr [ESP + 0x98]
//   Label: LAB_004d5bd9
//   XREF to: Stack[-0x28] (READ)
// 004d5be0: PUSH EDI
// 004d5be1: MOV EBX,0x62afaf
//   XREF to: 0062afaf (PARAM)
// 004d5be6: MOV ESI,0x638
// 004d5beb: PUSH 0x62afc4
//   XREF to: 0062afc4 (DATA)
// 004d5bf0: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 004d5bf6: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 004d5bfc: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004d5c01: ADD ESP,0x8
// 004d5c04: JMP 0x004d5bbd
//   XREF to: 004d5bbd (UNCONDITIONAL_JUMP)
// 004d5c06: JBE 0x004d5bcd
//   Label: LAB_004d5c06
//   XREF to: 004d5bcd (CONDITIONAL_JUMP)
// 004d5c08: CMP ESI,0x3
// 004d5c0b: JZ 0x004d5bd3
//   XREF to: 004d5bd3 (CONDITIONAL_JUMP)
// 004d5c0d: JMP 0x004d5bd9
//   XREF to: 004d5bd9 (UNCONDITIONAL_JUMP)
