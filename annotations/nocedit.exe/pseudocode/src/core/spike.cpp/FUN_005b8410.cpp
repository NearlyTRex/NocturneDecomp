// Name: core_spike.cpp_FUN_005b8410
// Address: 005b8410
// Address Range: [[005b8410, 005b8672] [005b868f, 005b8726]]
// Convention: unknown
// Signature: undefined core_spike.cpp_FUN_005b8410()
// Globals:
//   double DOUBLE_00652e00 = 0.0000100000000000000
//   CEventList* g_CEventListPtr = 02d05310
//   CEventList g_CEventListInstance
// Function calls:
//   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   core_spike.cpp_FUN_005b8950

#include "nocturne.h"

/* Signature: undefined1 actors_other_spike.cpp_FUN_005b8410(undefined4 param_1, undefined4 param_2)
    */

void core_spike_cpp_FUN_005b8410(void)

{
  CLocation *pCVar1;
  CDemonActor_vtable *pCVar2;
  float fVar3;
  int iVar4;
  CVector3f *pCVar5;
  float fVar6;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  float in_stack_00000010;
  CVector3f local_48;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float fStack_28;
  CVector3f CStack_24;
  
  fVar6 = in_stack_00000004[2].location.position.y;
  if ((fVar6 == 0.0) || (fVar6 == 1.4013e-45)) {
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,(char *)&in_stack_00000004[2].orient_matrix.m[0].y);
    if (iVar4 != 0) {
      in_stack_00000004[2].location.area_id = 1;
    }
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,in_stack_00000004[2].create_event + 0x2c);
    if (iVar4 == 0) goto LAB_005b85e2;
    in_stack_00000004[2].location.area_id = 0;
LAB_005b8479:
    fVar6 = in_stack_00000004[2].location.position.z;
    if (fVar6 == 0.0) {
      return;
    }
    if (fVar6 == 2.8026e-45) {
      in_stack_00000004[2].location.position.z = 4.2039e-45;
    }
  }
  else {
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,(char *)&in_stack_00000004[2].scale);
    if (iVar4 != 0) {
      in_stack_00000004[2].location.area_id = 1;
    }
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,in_stack_00000004[3].actor_name + 0x14);
    if (iVar4 == 0) {
LAB_005b85e2:
      if (in_stack_00000004[2].location.area_id == 0) goto LAB_005b8479;
    }
    else {
      in_stack_00000004[2].location.area_id = 1;
    }
  }
  fVar6 = *(float *)(in_stack_00000004[3].create_event + 8) - in_stack_00000010;
  *(float *)(in_stack_00000004[3].create_event + 8) = fVar6;
  if (0.0 < fVar6) {
    return;
  }
  fVar6 = in_stack_00000004[2].location.position.z;
  in_stack_00000004[3].create_event[8] = '\0';
  in_stack_00000004[3].create_event[9] = '\0';
  in_stack_00000004[3].create_event[10] = '\0';
  in_stack_00000004[3].create_event[0xb] = '\0';
  if (fVar6 == 0.0) {
    in_stack_00000004[2].location.position.z = 1.4013e-45;
    in_stack_00000004[3].vtable = (CDemonActor_vtable *)0x0;
    goto LAB_005b84db;
  }
  if (fVar6 == 1.4013e-45) {
    pCVar2 = (CDemonActor_vtable *)
             (in_stack_00000010 / *(float *)in_stack_00000004[3].create_event +
             (float)in_stack_00000004[3].vtable);
    in_stack_00000004[3].vtable = pCVar2;
    if ((float)pCVar2 <= 1.0) goto LAB_005b84db;
    in_stack_00000004[2].location.position.z = 2.8026e-45;
    fVar6 = in_stack_00000004[2].location.position.y;
    in_stack_00000004[3].vtable = (CDemonActor_vtable *)0x3f800000;
    if (fVar6 == 2.8026e-45) {
LAB_005b8655:
      in_stack_00000004[2].location.area_id = 0;
      goto LAB_005b84db;
    }
    if (fVar6 != 1.4013e-45) {
      *(CDemonActor **)(in_stack_00000004[3].create_event + 8) = in_stack_00000004[3].next_actor;
      goto LAB_005b84db;
    }
  }
  else {
    if (fVar6 == 2.8026e-45) {
      in_stack_00000004[3].vtable = (CDemonActor_vtable *)0x3f800000;
      in_stack_00000004[2].location.position.z = 4.2039e-45;
      goto LAB_005b84db;
    }
    if ((fVar6 != 4.2039e-45) ||
       (pCVar2 = (CDemonActor_vtable *)
                 ((float)in_stack_00000004[3].vtable -
                 in_stack_00000010 / *(float *)(in_stack_00000004[3].create_event + 4)),
       in_stack_00000004[3].vtable = pCVar2, 0.0 <= (float)pCVar2)) goto LAB_005b84db;
    in_stack_00000004[2].location.position.z = 0.0;
    fVar6 = in_stack_00000004[2].location.position.y;
    in_stack_00000004[3].vtable = (CDemonActor_vtable *)0x0;
    if (fVar6 == 2.8026e-45) goto LAB_005b8655;
    if (fVar6 != 1.4013e-45) {
      *(CDemonActor **)(in_stack_00000004[3].create_event + 8) = in_stack_00000004[3].next_actor;
      goto LAB_005b84db;
    }
  }
  fVar6 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.75,1.25);
  *(float *)(in_stack_00000004[3].create_event + 8) = fVar6 * (float)in_stack_00000004[3].next_actor
  ;
LAB_005b84db:
  pCVar1 = &in_stack_00000004->location;
  local_30 = (pCVar1->position).x;
  local_2c = (in_stack_00000004->location).position.y;
  fStack_28 = (in_stack_00000004->location).position.z;
  local_48.z = in_stack_00000004[2].orient_matrix.m[0].x * (float)in_stack_00000004[3].vtable;
  local_48.x = 0.0;
  local_48.y = 0.0;
  pCVar5 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                     (in_stack_00000004,&CStack_24,&local_48);
  local_38 = in_stack_00000004[2].orient.pitch + pCVar5->x;
  local_34 = in_stack_00000004[2].orient.bank + pCVar5->y;
  local_30 = in_stack_00000004[2].orient.heading + pCVar5->z;
  (pCVar1->position).x = local_38;
  (in_stack_00000004->location).position.y = local_34;
  (in_stack_00000004->location).position.z = local_30;
  fVar6 = local_2c - (pCVar1->position).x;
  fVar3 = fStack_28 - (in_stack_00000004->location).position.y;
  CStack_24.x = CStack_24.x - (in_stack_00000004->location).position.z;
  if (CStack_24.x * CStack_24.x + fVar3 * fVar3 + fVar6 * fVar6 <= (float)DOUBLE_00652e00) {
    return;
  }
  local_48.x = (float)in_stack_00000004;
  core_spike_cpp_FUN_005b8950();
  return;
}


// Assembly code:
// 005b8410: PUSH EBX
//   Label: core_spike.cpp_FUN_005b8410
// 005b8411: PUSH ESI
// 005b8412: PUSH EDI
// 005b8413: PUSH EBP
// 005b8414: SUB ESP,0x40
// 005b8417: MOV EBX,dword ptr [ESP + 0x54]
// 005b841b: MOV EDX,dword ptr [EBX + 0x2d4]
// 005b8421: TEST EDX,EDX
// 005b8423: JZ 0x005b842e
//   XREF to: 005b842e (CONDITIONAL_JUMP)
// 005b8425: CMP EDX,0x1
// 005b8428: JNZ 0x005b8595
//   XREF to: 005b8595 (CONDITIONAL_JUMP)
// 005b842e: LEA EAX,[EBX + 0x2f0]
//   Label: LAB_005b842e
// 005b8434: PUSH EAX
// 005b8435: MOV EBP,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 005b843b: PUSH EBP
//   XREF to: 02d05310 (DATA)
// 005b843c: CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 005b8441: ADD ESP,0x8
// 005b8444: TEST EAX,EAX
// 005b8446: JZ 0x005b8452
//   XREF to: 005b8452 (CONDITIONAL_JUMP)
// 005b8448: MOV dword ptr [EBX + 0x2dc],0x1
// 005b8452: LEA EAX,[EBX + 0x354]
//   Label: LAB_005b8452
// 005b8458: PUSH EAX
// 005b8459: MOV EAX,[0x006793d0]
//   XREF to: 006793d0 (READ)
// 005b845e: PUSH EAX
//   XREF to: 02d05310 (DATA)
// 005b845f: CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 005b8464: ADD ESP,0x8
// 005b8467: TEST EAX,EAX
// 005b8469: JZ 0x005b85e2
//   XREF to: 005b85e2 (CONDITIONAL_JUMP)
// 005b846f: MOV dword ptr [EBX + 0x2dc],0x0
// 005b8479: MOV ECX,dword ptr [EBX + 0x2d8]
//   Label: LAB_005b8479
// 005b847f: TEST ECX,ECX
// 005b8481: JZ 0x005b858d
//   XREF to: 005b858d (CONDITIONAL_JUMP)
// 005b8487: CMP ECX,0x2
// 005b848a: JNZ 0x005b8496
//   XREF to: 005b8496 (CONDITIONAL_JUMP)
// 005b848c: MOV dword ptr [EBX + 0x2d8],0x3
// 005b8496: FLD float ptr [EBX + 0x488]
//   Label: LAB_005b8496
// 005b849c: FSUB float ptr [ESP + 0x58]
// 005b84a0: FST float ptr [EBX + 0x488]
// 005b84a6: FLDZ
// 005b84a8: FCOMPP
// 005b84aa: FNSTSW AX
// 005b84ac: SAHF
// 005b84ad: JC 0x005b858d
//   XREF to: 005b858d (CONDITIONAL_JUMP)
// 005b84b3: MOV EDI,dword ptr [EBX + 0x2d8]
// 005b84b9: MOV dword ptr [EBX + 0x488],0x0
// 005b84c3: TEST EDI,EDI
// 005b84c5: JNZ 0x005b85f4
//   XREF to: 005b85f4 (CONDITIONAL_JUMP)
// 005b84cb: MOV dword ptr [EBX + 0x2d8],0x1
// 005b84d5: MOV dword ptr [EBX + 0x55c],EDI
// 005b84db: LEA ESI,[EBX + 0x20]
//   Label: LAB_005b84db
// 005b84de: MOV EAX,dword ptr [ESI]
// 005b84e0: MOV dword ptr [ESP + 0x18],EAX
// 005b84e4: LEA EAX,[ESI + 0x4]
// 005b84e7: MOV EAX,dword ptr [EAX]
// 005b84e9: MOV dword ptr [ESP + 0x1c],EAX
// 005b84ed: LEA EAX,[ESI + 0x8]
// 005b84f0: MOV EAX,dword ptr [EAX]
// 005b84f2: MOV dword ptr [ESP + 0x20],EAX
// 005b84f6: FLD float ptr [EBX + 0x2ec]
// 005b84fc: FMUL float ptr [EBX + 0x55c]
// 005b8502: XOR EAX,EAX
// 005b8504: FSTP float ptr [ESP + 0x3c]
// 005b8508: MOV dword ptr [ESP],EAX
// 005b850b: MOV dword ptr [ESP + 0x4],EAX
// 005b850f: MOV EAX,dword ptr [ESP + 0x3c]
// 005b8513: MOV dword ptr [ESP + 0x8],EAX
// 005b8517: MOV EAX,ESP
// 005b8519: PUSH EAX
// 005b851a: LEA EAX,[ESP + 0x28]
// 005b851e: PUSH EAX
// 005b851f: PUSH EBX
// 005b8520: CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 005b8525: LEA EDX,[EBX + 0x2e0]
// 005b852b: FLD float ptr [EDX]
// 005b852d: FADD float ptr [EAX]
// 005b852f: ADD ESP,0xc
// 005b8532: FSTP float ptr [ESP + 0xc]
// 005b8536: FLD float ptr [EDX + 0x4]
// 005b8539: FADD float ptr [EAX + 0x4]
// 005b853c: FSTP float ptr [ESP + 0x10]
// 005b8540: FLD float ptr [EDX + 0x8]
// 005b8543: FADD float ptr [EAX + 0x8]
// 005b8546: MOV EAX,dword ptr [ESP + 0xc]
// 005b854a: FSTP float ptr [ESP + 0x14]
// 005b854e: MOV dword ptr [ESI],EAX
// 005b8550: MOV EAX,dword ptr [ESP + 0x10]
// 005b8554: MOV dword ptr [ESI + 0x4],EAX
// 005b8557: MOV EAX,dword ptr [ESP + 0x14]
// 005b855b: MOV dword ptr [ESI + 0x8],EAX
// 005b855e: FLD float ptr [ESP + 0x18]
// 005b8562: FSUB float ptr [ESI]
// 005b8564: FMUL ST0
// 005b8566: FLD float ptr [ESP + 0x1c]
// 005b856a: FSUB float ptr [ESI + 0x4]
// 005b856d: FMUL ST0
// 005b856f: FLD float ptr [ESP + 0x20]
// 005b8573: FXCH
// 005b8575: FADDP ST2,ST0
// 005b8577: FSUB float ptr [ESI + 0x8]
// 005b857a: FMUL ST0
// 005b857c: FADDP
// 005b857e: FCOMP double ptr [0x00652e00]
//   XREF to: 00652e00 (READ)
// 005b8584: FNSTSW AX
// 005b8586: SAHF
// 005b8587: JA 0x005b8716
//   XREF to: 005b8716 (CONDITIONAL_JUMP)
// 005b858d: ADD ESP,0x40
//   Label: LAB_005b858d
// 005b8590: POP EBP
// 005b8591: POP EDI
// 005b8592: POP ESI
// 005b8593: POP EBX
// 005b8594: RET
// 005b8595: LEA EAX,[EBX + 0x3b8]
//   Label: LAB_005b8595
// 005b859b: PUSH EAX
// 005b859c: MOV ESI,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 005b85a2: PUSH ESI
//   XREF to: 02d05310 (DATA)
// 005b85a3: CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 005b85a8: ADD ESP,0x8
// 005b85ab: TEST EAX,EAX
// 005b85ad: JZ 0x005b85b9
//   XREF to: 005b85b9 (CONDITIONAL_JUMP)
// 005b85af: MOV dword ptr [EBX + 0x2dc],0x1
// 005b85b9: LEA EAX,[EBX + 0x41c]
//   Label: LAB_005b85b9
// 005b85bf: PUSH EAX
// 005b85c0: MOV EDI,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 005b85c6: PUSH EDI
//   XREF to: 02d05310 (DATA)
// 005b85c7: CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 005b85cc: ADD ESP,0x8
// 005b85cf: TEST EAX,EAX
// 005b85d1: JZ 0x005b85e2
//   XREF to: 005b85e2 (CONDITIONAL_JUMP)
// 005b85d3: MOV dword ptr [EBX + 0x2dc],0x1
// 005b85dd: JMP 0x005b8496
//   XREF to: 005b8496 (UNCONDITIONAL_JUMP)
// 005b85e2: CMP dword ptr [EBX + 0x2dc],0x0
//   Label: LAB_005b85e2
// 005b85e9: JZ 0x005b8479
//   XREF to: 005b8479 (CONDITIONAL_JUMP)
// 005b85ef: JMP 0x005b8496
//   XREF to: 005b8496 (UNCONDITIONAL_JUMP)
// 005b85f4: CMP EDI,0x1
//   Label: LAB_005b85f4
// 005b85f7: JNZ 0x005b868f
//   XREF to: 005b868f (CONDITIONAL_JUMP)
// 005b85fd: FLD float ptr [ESP + 0x58]
// 005b8601: FDIV float ptr [EBX + 0x480]
// 005b8607: FADD float ptr [EBX + 0x55c]
// 005b860d: FST float ptr [EBX + 0x55c]
// 005b8613: FLD1
// 005b8615: FCOMPP
// 005b8617: FNSTSW AX
// 005b8619: SAHF
// 005b861a: JNC 0x005b84db
//   XREF to: 005b84db (CONDITIONAL_JUMP)
// 005b8620: MOV dword ptr [EBX + 0x2d8],0x2
// 005b862a: MOV EDI,dword ptr [EBX + 0x2d4]
// 005b8630: MOV dword ptr [EBX + 0x55c],0x3f800000
// 005b863a: CMP EDI,0x2
// 005b863d: JZ 0x005b8655
//   XREF to: 005b8655 (CONDITIONAL_JUMP)
// 005b863f: CMP EDI,0x1
// 005b8642: JZ 0x005b8664
//   XREF to: 005b8664 (CONDITIONAL_JUMP)
// 005b8644: MOV EAX,dword ptr [EBX + 0x554]
// 005b864a: MOV dword ptr [EBX + 0x488],EAX
// 005b8650: JMP 0x005b84db
//   XREF to: 005b84db (UNCONDITIONAL_JUMP)
// 005b8655: MOV dword ptr [EBX + 0x2dc],0x0
//   Label: LAB_005b8655
// 005b865f: JMP 0x005b84db
//   XREF to: 005b84db (UNCONDITIONAL_JUMP)
// 005b8664: PUSH 0x3fa00000
//   Label: LAB_005b8664
// 005b8669: PUSH 0x3f400000
// 005b866e: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 005b868f: CMP EDI,0x2
//   Label: LAB_005b868f
// 005b8692: JNZ 0x005b86ad
//   XREF to: 005b86ad (CONDITIONAL_JUMP)
// 005b8694: MOV dword ptr [EBX + 0x55c],0x3f800000
// 005b869e: MOV dword ptr [EBX + 0x2d8],0x3
// 005b86a8: JMP 0x005b84db
//   XREF to: 005b84db (UNCONDITIONAL_JUMP)
// 005b86ad: CMP EDI,0x3
//   Label: LAB_005b86ad
// 005b86b0: JNZ 0x005b84db
//   XREF to: 005b84db (CONDITIONAL_JUMP)
// 005b86b6: FLD float ptr [ESP + 0x58]
// 005b86ba: FDIV float ptr [EBX + 0x484]
// 005b86c0: FSUBR float ptr [EBX + 0x55c]
// 005b86c6: FST float ptr [EBX + 0x55c]
// 005b86cc: FLDZ
// 005b86ce: FCOMPP
// 005b86d0: FNSTSW AX
// 005b86d2: SAHF
// 005b86d3: JBE 0x005b84db
//   XREF to: 005b84db (CONDITIONAL_JUMP)
// 005b86d9: MOV dword ptr [EBX + 0x2d8],0x0
// 005b86e3: MOV ECX,dword ptr [EBX + 0x2d4]
// 005b86e9: MOV dword ptr [EBX + 0x55c],0x0
// 005b86f3: CMP ECX,0x2
// 005b86f6: JZ 0x005b8655
//   XREF to: 005b8655 (CONDITIONAL_JUMP)
// 005b86fc: CMP ECX,0x1
// 005b86ff: JZ 0x005b8664
//   XREF to: 005b8664 (CONDITIONAL_JUMP)
// 005b8705: MOV EAX,dword ptr [EBX + 0x554]
// 005b870b: MOV dword ptr [EBX + 0x488],EAX
// 005b8711: JMP 0x005b84db
//   XREF to: 005b84db (UNCONDITIONAL_JUMP)
// 005b8716: PUSH EBX
//   Label: LAB_005b8716
// 005b8717: CALL core_spike.cpp_FUN_005b8950
//   XREF to: 005b8950 (UNCONDITIONAL_CALL)
// 005b871c: ADD ESP,0x4
// 005b871f: ADD ESP,0x40
// 005b8722: POP EBP
// 005b8723: POP EDI
// 005b8724: POP ESI
// 005b8725: POP EBX
// 005b8726: RET
