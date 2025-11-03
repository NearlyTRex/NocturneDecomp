// Name: core_charactr.cpp_CCharacter_FUN_0042e050
// Address: 0042e050
// Address Range: [[0042e050, 0042e1f4] [0042e20c, 0042e36d]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_FUN_0042e050(CCharacter * this_ptr)
// Cross-references:
//   core_enemy.cpp_CEnemy_FUN_004a9fd0 (004a9fd0) at 004aa002 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_006174d2
//   undefined4 DAT_006174da
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 DAT_032690dc
//   undefined4 DAT_032690e0
//   undefined4 DAT_032690e4
//   CVector3f g_ZeroVector
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_actor.cpp_getRandomInt_FUN_0040cc70
//   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   core_waypoint.cpp_FUN_005ec320
//   shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_charactr_cpp_CCharacter_FUN_0042e050(CCharacter *this_ptr)

{
  char *target_string;
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  BADSPACEBASE *in_ESP;
  int iVar4;
  int iVar5;
  float in_stack_00000008;
  char *in_stack_0000000c;
  float fVar6;
  float fVar7;
  int local_1f80 [2005];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  CLocation *local_1c;
  float local_14;
  
  if ((in_stack_0000000c == (char *)0x0) || (*in_stack_0000000c == '\0')) {
    this_ptr->field11_0x25a0[0x50] = '\0';
    this_ptr->field11_0x25a0[0x51] = '\0';
    this_ptr->field11_0x25a0[0x52] = '\0';
    this_ptr->field11_0x25a0[0x53] = '\0';
    this_ptr->field11_0x25a0[0x54] = '\0';
    this_ptr->field11_0x25a0[0x55] = '\0';
    this_ptr->field11_0x25a0[0x56] = '\0';
    this_ptr->field11_0x25a0[0x57] = '\0';
    this_ptr->field11_0x25a0[0x4c] = '\0';
    this_ptr->field11_0x25a0[0x4d] = '\0';
    this_ptr->field11_0x25a0[0x4e] = '\0';
    this_ptr->field11_0x25a0[0x4f] = '\0';
    return 0;
  }
  fVar6 = *(float *)(this_ptr->field11_0x25a0 + 0x54) - in_stack_00000008;
  *(float *)(this_ptr->field11_0x25a0 + 0x54) = fVar6;
  if (0.0 < fVar6) goto LAB_0042e20c;
  iVar5 = *(int *)(this_ptr->field11_0x25a0 + 0x4c);
  if ((iVar5 == 0) ||
     (fVar6 = *(float *)(iVar5 + 0x20) - (this_ptr->base_actor).location.position.x,
     fVar1 = *(float *)(iVar5 + 0x24) - (this_ptr->base_actor).location.position.y,
     fVar7 = *(float *)(iVar5 + 0x28) - (this_ptr->base_actor).location.position.z,
     (float)_DAT_006174d2 <= SQRT(fVar7 * fVar7 + fVar1 * fVar1 + fVar6 * fVar6))) {
    if (*(int *)(this_ptr->field11_0x25a0 + 0x50) == 0) goto LAB_0042e0e4;
    if (*(int *)(this_ptr->field11_0x25a0 + 0x4c) == 0) goto LAB_0042e0ee;
    uVar3 = core_waypoint_cpp_FUN_005ec320();
    *(undefined4 *)(this_ptr->field11_0x25a0 + 0x50) = uVar3;
  }
  else {
    this_ptr->field11_0x25a0[0x50] = '\0';
    this_ptr->field11_0x25a0[0x51] = '\0';
    this_ptr->field11_0x25a0[0x52] = '\0';
    this_ptr->field11_0x25a0[0x53] = '\0';
LAB_0042e0e4:
    this_ptr->field11_0x25a0[0x4c] = '\0';
    this_ptr->field11_0x25a0[0x4d] = '\0';
    this_ptr->field11_0x25a0[0x4e] = '\0';
    this_ptr->field11_0x25a0[0x4f] = '\0';
LAB_0042e0ee:
    this_ptr->field11_0x25a0[0x50] = '\0';
    this_ptr->field11_0x25a0[0x51] = '\0';
    this_ptr->field11_0x25a0[0x52] = '\0';
    this_ptr->field11_0x25a0[0x53] = '\0';
    local_28 = 0;
    local_1c = &(this_ptr->base_actor).location;
    local_24 = 0;
    iVar5 = 0;
    for (local_20 = 0; local_20 < *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + 0x5dc4);
        local_20 = local_20 + 1) {
      target_string = *(char **)(g_CDemonSetPtr->field19_0x14f0a0 + local_24 + 0x5dc8);
      iVar2 = shape_edittool_cpp_wildcardStringMatch_FUN_004a6e20(in_stack_0000000c,target_string,0)
      ;
      iVar4 = iVar5;
      if ((iVar2 != 0) &&
         (fVar6 = (local_1c->position).x - *(float *)(target_string + 0x20),
         fVar1 = (local_1c->position).y - *(float *)(target_string + 0x24),
         fVar7 = (local_1c->position).z - *(float *)(target_string + 0x28),
         _DAT_006174da <= SQRT(fVar7 * fVar7 + fVar1 * fVar1 + fVar6 * fVar6))) {
        iVar4 = iVar5 + 4;
        local_28 = local_28 + 1;
        *(char **)((int)local_1f80 + iVar5) = target_string;
      }
      local_24 = local_24 + 4;
      iVar5 = iVar4;
    }
    if (0 < local_28) {
      local_2c = local_28 + -1;
      iVar5 = 0;
      do {
        while( true ) {
          iVar4 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,local_2c);
          if (local_1f80[iVar4] != 0) break;
          iVar5 = iVar5 + 1;
          if (9 < iVar5) goto LAB_0042e1d9;
        }
        iVar2 = core_waypoint_cpp_FUN_005ec320();
        *(int *)(this_ptr->field11_0x25a0 + 0x50) = iVar2;
        if (iVar2 != 0) {
          *(int *)(this_ptr->field11_0x25a0 + 0x4c) = local_1f80[iVar4];
          break;
        }
        local_1f80[iVar4] = 0;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 10);
    }
  }
LAB_0042e1d9:
  if (*(int *)(this_ptr->field11_0x25a0 + 0x50) == 0) {
    fVar7 = 10.0;
    fVar6 = 4.0;
  }
  else {
    fVar7 = 2.0;
    fVar6 = 1.0;
  }
  local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(fVar6,fVar7);
  *(float *)(this_ptr->field11_0x25a0 + 0x54) = local_14;
LAB_0042e20c:
  if (*(int *)(this_ptr->field11_0x25a0 + 0x50) == 0) {
    return 0;
  }
  (**(code **)(*(int *)(*(int *)(this_ptr->field11_0x25a0 + 0x50) + 0x154) + 0xbc))();
  iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(this_ptr);
  if (iVar5 == 0) {
    return 1;
  }
  if (iVar5 < 0) {
    this_ptr->field11_0x25a0[0x50] = '\0';
    this_ptr->field11_0x25a0[0x51] = '\0';
    this_ptr->field11_0x25a0[0x52] = '\0';
    this_ptr->field11_0x25a0[0x53] = '\0';
    return 0;
  }
  return 0;
}


// Assembly code:
// 0042e050: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042e050
// 0042e051: PUSH ESI
// 0042e052: PUSH EDI
// 0042e053: PUSH EBP
// 0042e054: SUB ESP,0x1f70
// 0042e05a: MOV EDI,dword ptr [ESP + 0x1f84]
// 0042e061: MOV EDX,dword ptr [ESP + 0x1f8c]
// 0042e068: TEST EDX,EDX
// 0042e06a: JZ 0x0042e180
//   XREF to: 0042e180 (CONDITIONAL_JUMP)
// 0042e070: CMP byte ptr [EDX],0x0
// 0042e073: JZ 0x0042e180
//   XREF to: 0042e180 (CONDITIONAL_JUMP)
// 0042e079: FLD float ptr [EDI + 0x25f4]
// 0042e07f: FSUB float ptr [ESP + 0x1f88]
// 0042e086: FST float ptr [EDI + 0x25f4]
// 0042e08c: FLDZ
// 0042e08e: FCOMPP
// 0042e090: FNSTSW AX
// 0042e092: SAHF
// 0042e093: JC 0x0042e20c
//   XREF to: 0042e20c (CONDITIONAL_JUMP)
// 0042e099: MOV ECX,dword ptr [EDI + 0x25ec]
// 0042e09f: TEST ECX,ECX
// 0042e0a1: JZ 0x0042e1ab
//   XREF to: 0042e1ab (CONDITIONAL_JUMP)
// 0042e0a7: MOV EAX,ECX
// 0042e0a9: LEA EBX,[EDI + 0x20]
// 0042e0ac: FLD float ptr [EAX + 0x20]
// 0042e0af: FSUB float ptr [EBX]
// 0042e0b1: FMUL ST0
// 0042e0b3: FLD float ptr [EAX + 0x24]
// 0042e0b6: FSUB float ptr [EBX + 0x4]
// 0042e0b9: FMUL ST0
// 0042e0bb: FLD float ptr [EAX + 0x28]
// 0042e0be: FXCH
// 0042e0c0: FADDP ST2,ST0
// 0042e0c2: FSUB float ptr [EBX + 0x8]
// 0042e0c5: FMUL ST0
// 0042e0c7: FADDP
// 0042e0c9: FSQRT
// 0042e0cb: FCOMP double ptr [0x006174d2]
//   XREF to: 006174d2 (READ)
// 0042e0d1: FNSTSW AX
// 0042e0d3: SAHF
// 0042e0d4: JNC 0x0042e1ab
//   XREF to: 0042e1ab (CONDITIONAL_JUMP)
// 0042e0da: MOV dword ptr [EDI + 0x25f0],0x0
// 0042e0e4: MOV dword ptr [EDI + 0x25ec],0x0
//   Label: LAB_0042e0e4
// 0042e0ee: MOV dword ptr [EDI + 0x25f0],0x0
//   Label: LAB_0042e0ee
// 0042e0f8: XOR EAX,EAX
// 0042e0fa: XOR ECX,ECX
// 0042e0fc: XOR EBP,EBP
// 0042e0fe: MOV dword ptr [ESP + 0x1f58],EAX
// 0042e105: MOV dword ptr [ESP + 0x1f60],EAX
// 0042e10c: LEA EAX,[EDI + 0x20]
// 0042e10f: MOV dword ptr [ESP + 0x1f5c],ECX
// 0042e116: MOV dword ptr [ESP + 0x1f64],EAX
// 0042e11d: MOV ESI,dword ptr [0x006810c8]
//   Label: LAB_0042e11d
//   XREF to: 006810c8 (READ)
// 0042e123: MOV EAX,dword ptr [ESP + 0x1f60]
// 0042e12a: CMP EAX,dword ptr [ESI + 0x154e64]
//   XREF to: 032690dc (READ)
// 0042e130: JGE 0x0042e279
//   XREF to: 0042e279 (CONDITIONAL_JUMP)
// 0042e136: ADD ESI,dword ptr [ESP + 0x1f5c]
// 0042e13d: PUSH 0x0
// 0042e13f: MOV ESI,dword ptr [ESI + 0x154e68]
//   XREF to: 032690e0 (DATA)
//   XREF to: 032690e4 (DATA)
// 0042e145: PUSH ESI
// 0042e146: MOV EDX,dword ptr [ESP + 0x1f94]
// 0042e14d: PUSH EDX
// 0042e14e: CALL shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20
//   XREF to: 004a6e20 (UNCONDITIONAL_CALL)
// 0042e153: ADD ESP,0xc
// 0042e156: TEST EAX,EAX
// 0042e158: JNZ 0x0042e227
//   XREF to: 0042e227 (CONDITIONAL_JUMP)
// 0042e15e: MOV ESI,dword ptr [ESP + 0x1f60]
//   Label: LAB_0042e15e
// 0042e165: MOV EBX,dword ptr [ESP + 0x1f5c]
// 0042e16c: INC ESI
// 0042e16d: ADD EBX,0x4
// 0042e170: MOV dword ptr [ESP + 0x1f60],ESI
// 0042e177: MOV dword ptr [ESP + 0x1f5c],EBX
// 0042e17e: JMP 0x0042e11d
//   XREF to: 0042e11d (UNCONDITIONAL_JUMP)
// 0042e180: MOV dword ptr [EDI + 0x25f0],0x0
//   Label: LAB_0042e180
// 0042e18a: MOV dword ptr [EDI + 0x25f4],0x0
// 0042e194: MOV dword ptr [EDI + 0x25ec],0x0
// 0042e19e: XOR EAX,EAX
// 0042e1a0: ADD ESP,0x1f70
// 0042e1a6: POP EBP
// 0042e1a7: POP EDI
// 0042e1a8: POP ESI
// 0042e1a9: POP EBX
// 0042e1aa: RET
// 0042e1ab: CMP dword ptr [EDI + 0x25f0],0x0
//   Label: LAB_0042e1ab
// 0042e1b2: JZ 0x0042e0e4
//   XREF to: 0042e0e4 (CONDITIONAL_JUMP)
// 0042e1b8: MOV ESI,dword ptr [EDI + 0x25ec]
// 0042e1be: TEST ESI,ESI
// 0042e1c0: JZ 0x0042e0ee
//   XREF to: 0042e0ee (CONDITIONAL_JUMP)
// 0042e1c6: PUSH ESI
// 0042e1c7: LEA EAX,[EDI + 0x20]
// 0042e1ca: PUSH EAX
// 0042e1cb: CALL core_waypoint.cpp_FUN_005ec320
//   XREF to: 005ec320 (UNCONDITIONAL_CALL)
// 0042e1d0: ADD ESP,0x8
// 0042e1d3: MOV dword ptr [EDI + 0x25f0],EAX
// 0042e1d9: CMP dword ptr [EDI + 0x25f0],0x0
//   Label: LAB_0042e1d9
// 0042e1e0: JZ 0x0042e2f6
//   XREF to: 0042e2f6 (CONDITIONAL_JUMP)
// 0042e1e6: PUSH 0x40000000
// 0042e1eb: PUSH 0x3f800000
// 0042e1f0: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   Label: LAB_0042e1f0
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 0042e20c: MOV EBX,dword ptr [EDI + 0x25f0]
//   Label: LAB_0042e20c
// 0042e212: TEST EBX,EBX
// 0042e214: JNZ 0x0042e305
//   XREF to: 0042e305 (CONDITIONAL_JUMP)
// 0042e21a: XOR EAX,EAX
// 0042e21c: ADD ESP,0x1f70
// 0042e222: POP EBP
// 0042e223: POP EDI
// 0042e224: POP ESI
// 0042e225: POP EBX
// 0042e226: RET
// 0042e227: MOV EAX,dword ptr [ESP + 0x1f64]
//   Label: LAB_0042e227
// 0042e22e: LEA EBX,[ESI + 0x20]
// 0042e231: FLD float ptr [EAX]
// 0042e233: FSUB float ptr [EBX]
// 0042e235: FMUL ST0
// 0042e237: FLD float ptr [EAX + 0x4]
// 0042e23a: FSUB float ptr [EBX + 0x4]
// 0042e23d: FMUL ST0
// 0042e23f: FLD float ptr [EAX + 0x8]
// 0042e242: FXCH
// 0042e244: FADDP ST2,ST0
// 0042e246: FSUB float ptr [EBX + 0x8]
// 0042e249: FMUL ST0
// 0042e24b: FADDP
// 0042e24d: FSQRT
// 0042e24f: FCOMP float ptr [0x006174da]
//   XREF to: 006174da (READ)
// 0042e255: FNSTSW AX
// 0042e257: SAHF
// 0042e258: JC 0x0042e15e
//   XREF to: 0042e15e (CONDITIONAL_JUMP)
// 0042e25e: MOV ECX,dword ptr [ESP + 0x1f58]
// 0042e265: ADD EBP,0x4
// 0042e268: INC ECX
// 0042e269: MOV dword ptr [ESP + EBP*0x1 + -0x4],ESI
// 0042e26d: MOV dword ptr [ESP + 0x1f58],ECX
// 0042e274: JMP 0x0042e15e
//   XREF to: 0042e15e (UNCONDITIONAL_JUMP)
// 0042e279: CMP dword ptr [ESP + 0x1f58],0x0
//   Label: LAB_0042e279
// 0042e281: JLE 0x0042e1d9
//   XREF to: 0042e1d9 (CONDITIONAL_JUMP)
// 0042e287: MOV EAX,dword ptr [ESP + 0x1f58]
// 0042e28e: LEA EBP,[EDI + 0x20]
// 0042e291: DEC EAX
// 0042e292: XOR ESI,ESI
// 0042e294: MOV dword ptr [ESP + 0x1f54],EAX
// 0042e29b: MOV EAX,dword ptr [ESP + 0x1f54]
//   Label: LAB_0042e29b
// 0042e2a2: PUSH EAX
// 0042e2a3: PUSH 0x0
// 0042e2a5: CALL core_actor.cpp_getRandomInt_FUN_0040cc70
//   XREF to: 0040cc70 (UNCONDITIONAL_CALL)
// 0042e2aa: LEA EBX,[EAX*0x4 + 0x0]
// 0042e2b1: ADD ESP,0x8
// 0042e2b4: MOV EDX,dword ptr [ESP + EBX*0x1]
// 0042e2b7: TEST EDX,EDX
// 0042e2b9: JNZ 0x0042e2c6
//   XREF to: 0042e2c6 (CONDITIONAL_JUMP)
// 0042e2bb: INC ESI
// 0042e2bc: CMP ESI,0xa
// 0042e2bf: JL 0x0042e29b
//   XREF to: 0042e29b (CONDITIONAL_JUMP)
// 0042e2c1: JMP 0x0042e1d9
//   XREF to: 0042e1d9 (UNCONDITIONAL_JUMP)
// 0042e2c6: PUSH EDX
//   Label: LAB_0042e2c6
// 0042e2c7: PUSH EBP
// 0042e2c8: CALL core_waypoint.cpp_FUN_005ec320
//   XREF to: 005ec320 (UNCONDITIONAL_CALL)
// 0042e2cd: ADD ESP,0x8
// 0042e2d0: MOV dword ptr [EDI + 0x25f0],EAX
// 0042e2d6: TEST EAX,EAX
// 0042e2d8: JZ 0x0042e2e8
//   XREF to: 0042e2e8 (CONDITIONAL_JUMP)
// 0042e2da: MOV EAX,dword ptr [ESP + EBX*0x1]
// 0042e2dd: MOV dword ptr [EDI + 0x25ec],EAX
// 0042e2e3: JMP 0x0042e1d9
//   XREF to: 0042e1d9 (UNCONDITIONAL_JUMP)
// 0042e2e8: MOV dword ptr [ESP + EBX*0x1],EAX
//   Label: LAB_0042e2e8
// 0042e2eb: INC ESI
// 0042e2ec: CMP ESI,0xa
// 0042e2ef: JL 0x0042e29b
//   XREF to: 0042e29b (CONDITIONAL_JUMP)
// 0042e2f1: JMP 0x0042e1d9
//   XREF to: 0042e1d9 (UNCONDITIONAL_JUMP)
// 0042e2f6: PUSH 0x41200000
//   Label: LAB_0042e2f6
// 0042e2fb: PUSH 0x40800000
// 0042e300: JMP 0x0042e1f0
//   XREF to: 0042e1f0 (UNCONDITIONAL_JUMP)
// 0042e305: PUSH 0x0
//   Label: LAB_0042e305
// 0042e307: PUSH 0x0
// 0042e309: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 0042e30e: MOV EAX,EBX
// 0042e310: MOV EBX,dword ptr [EBX + 0x154]
// 0042e316: PUSH EAX
// 0042e317: CALL dword ptr [EBX + 0xbc]
// 0042e31d: ADD ESP,0x4
// 0042e320: PUSH EAX
// 0042e321: MOV EAX,dword ptr [EDI + 0x25f0]
// 0042e327: ADD EAX,0x20
// 0042e32a: PUSH EAX
// 0042e32b: PUSH EDI
// 0042e32c: CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   XREF to: 004286e0 (UNCONDITIONAL_CALL)
// 0042e331: ADD ESP,0x18
// 0042e334: TEST EAX,EAX
// 0042e336: JZ 0x0042e347
//   XREF to: 0042e347 (CONDITIONAL_JUMP)
// 0042e338: JL 0x0042e357
//   XREF to: 0042e357 (CONDITIONAL_JUMP)
// 0042e33a: XOR EAX,EAX
// 0042e33c: ADD ESP,0x1f70
// 0042e342: POP EBP
// 0042e343: POP EDI
// 0042e344: POP ESI
// 0042e345: POP EBX
// 0042e346: RET
// 0042e347: MOV EAX,0x1
//   Label: LAB_0042e347
// 0042e34c: ADD ESP,0x1f70
// 0042e352: POP EBP
// 0042e353: POP EDI
// 0042e354: POP ESI
// 0042e355: POP EBX
// 0042e356: RET
// 0042e357: MOV dword ptr [EDI + 0x25f0],0x0
//   Label: LAB_0042e357
// 0042e361: XOR EAX,EAX
// 0042e363: ADD ESP,0x1f70
// 0042e369: POP EBP
// 0042e36a: POP EDI
// 0042e36b: POP ESI
// 0042e36c: POP EBX
// 0042e36d: RET
