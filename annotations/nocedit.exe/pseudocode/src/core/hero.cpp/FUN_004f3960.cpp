// Name: core_hero.cpp_FUN_004f3960
// Address: 004f3960
// Address Range: [[004f3960, 004f3ae7]]
// Convention: unknown
// Signature: undefined core_hero.cpp_FUN_004f3960()
// Cross-references:
//   core_baron.cpp_FUN_004136b0 (004136b0) at 004136cb [UNCONDITIONAL_CALL]
//   core_colonel.cpp_FUN_0043ff20 (0043ff20) at 0043ffe3 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d4190 (004d4190) at 004d4269 [UNCONDITIONAL_CALL]
//   core_haystack.cpp_FUN_004f13f0 (004f13f0) at 004f14bc [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f8c70 (004f8c70) at 004f8d8e [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_005578e0 (005578e0) at 00557996 [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_FUN_005d9260 (005d9260) at 005d937e [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0062ecce = 2
//   WatcomTypeInfo g_CVectorTypeInfo
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 g_CMobsterClassInfo.name_hash
//   undefined4 g_CDemonSetInstance.field19_0x14f0a0[7996]
//   undefined4 DAT_03265258
//   undefined4 g_CVehicleClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

/* Signature: undefined1 actors_hero_hero.cpp_FUN_004f3960(undefined4 param_1, undefined4 param_2)
    */

int core_hero_cpp_FUN_004f3960(void)

{
  CDemonActor *actor_ptr;
  float fVar1;
  float fVar2;
  float fVar3;
  CDemonActor *pCVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  int iVar6;
  int iVar7;
  int in_stack_00000004;
  float *in_stack_00000008;
  float *in_stack_0000002c;
  SCollisionInfo *in_stack_ffffff60;
  CVector3f aCStack_7c [8];
  int local_1c;
  int local_14;
  
  *in_stack_00000008 = 9999.9;
  iVar6 = 0;
  local_14 = in_stack_00000004 + 0x20;
  local_1c = 0;
  for (iVar7 = 0; iVar7 < *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + 0x1f3c); iVar7 = iVar7 + 1) {
    actor_ptr = *(CDemonActor **)(g_CDemonSetPtr->field19_0x14f0a0 + iVar6 + 8000);
    pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,g_CVehicleClassInfo.name_hash);
    if (pCVar4 == (CDemonActor *)0x0) {
      pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,g_CMobsterClassInfo.name_hash);
      if ((pCVar4 == (CDemonActor *)0x0) || (*(int *)(pCVar4[0x8e].actor_name + 0x10) == 0)) {
        iVar5 = (*actor_ptr->vtable[1].hasCollision)(actor_ptr,in_stack_ffffff60);
        if (iVar5 == 0) {
          iVar5 = (*actor_ptr->vtable->shouldIgnoreForTargeting)(actor_ptr);
          if (iVar5 == 0) {
            crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                      (&stack0xffffff80,10,&g_CVectorTypeInfo);
            iVar5 = (*actor_ptr->vtable->getTargetPoints)(actor_ptr,aCStack_7c);
            if (0 < iVar5) {
              fVar1 = *in_stack_0000002c - (actor_ptr->location).position.x;
              fVar2 = (in_stack_0000002c[1] - (actor_ptr->location).position.y) *
                      (float)DOUBLE_0062ecce;
              fVar3 = in_stack_0000002c[2] - (actor_ptr->location).position.z;
              fVar1 = fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2;
              if (fVar1 < *in_stack_00000008) {
                *in_stack_00000008 = fVar1;
              }
            }
          }
        }
      }
    }
    iVar6 = iVar6 + 4;
  }
  if (local_1c == 0) {
    return 0;
  }
  *in_stack_00000008 = SQRT(*in_stack_00000008);
  return local_1c;
}


// Assembly code:
// 004f3960: PUSH EBX
//   Label: core_hero.cpp_FUN_004f3960
// 004f3961: PUSH ESI
// 004f3962: PUSH EDI
// 004f3963: PUSH EBP
// 004f3964: MOV EBP,ESP
// 004f3966: SUB ESP,0x98
// 004f396c: AND ESP,0xfffffff8
// 004f396f: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004f3972: XOR EDX,EDX
// 004f3974: XOR EDI,EDI
// 004f3976: MOV dword ptr [EAX],0x461c3f9a
// 004f397c: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004f397f: XOR ESI,ESI
// 004f3981: ADD EAX,0x20
// 004f3984: MOV dword ptr [ESP + 0x8c],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 004f398b: MOV dword ptr [ESP + 0x94],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004f3992: MOV EAX,[0x006810c8]
//   Label: LAB_004f3992
//   XREF to: 006810c8 (READ)
// 004f3997: CMP EDI,dword ptr [EAX + 0x150fdc]
//   XREF to: 03265254 (READ)
// 004f399d: JL 0x004f39bb
//   XREF to: 004f39bb (CONDITIONAL_JUMP)
// 004f399f: CMP dword ptr [ESP + 0x8c],0x0
//   XREF to: Stack[-0x1c] (READ)
// 004f39a7: JNZ 0x004f3ace
//   XREF to: 004f3ace (CONDITIONAL_JUMP)
// 004f39ad: MOV EAX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x1c] (READ)
// 004f39b4: MOV ESP,EBP
// 004f39b6: POP EBP
// 004f39b7: POP EDI
// 004f39b8: POP ESI
// 004f39b9: POP EBX
// 004f39ba: RET
// 004f39bb: MOV EBX,dword ptr [ESI + EAX*0x1 + 0x150fe0]
//   Label: LAB_004f39bb
//   XREF to: 03265258 (READ)
// 004f39c2: MOV EAX,[0x03f8759c]
//   XREF to: 03f8759c (READ)
// 004f39c7: PUSH EAX
// 004f39c8: PUSH EBX
// 004f39c9: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004f39ce: ADD ESP,0x8
// 004f39d1: TEST EAX,EAX
// 004f39d3: JNZ 0x004f3ac5
//   XREF to: 004f3ac5 (CONDITIONAL_JUMP)
// 004f39d9: MOV EDX,dword ptr [0x02f37f30]
//   XREF to: 02f37f30 (READ)
// 004f39df: PUSH EDX
// 004f39e0: PUSH EBX
// 004f39e1: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004f39e6: ADD ESP,0x8
// 004f39e9: TEST EAX,EAX
// 004f39eb: JZ 0x004f39fa
//   XREF to: 004f39fa (CONDITIONAL_JUMP)
// 004f39ed: CMP dword ptr [EAX + 0xbee0],0x0
// 004f39f4: JNZ 0x004f3ac5
//   XREF to: 004f3ac5 (CONDITIONAL_JUMP)
// 004f39fa: PUSH EBX
//   Label: LAB_004f39fa
// 004f39fb: MOV EAX,dword ptr [EBX + 0x154]
// 004f3a01: CALL dword ptr [EAX + 0x120]
// 004f3a07: ADD ESP,0x4
// 004f3a0a: TEST EAX,EAX
// 004f3a0c: JNZ 0x004f3ac5
//   XREF to: 004f3ac5 (CONDITIONAL_JUMP)
// 004f3a12: PUSH EBX
// 004f3a13: MOV EAX,dword ptr [EBX + 0x154]
// 004f3a19: CALL dword ptr [EAX + 0x68]
// 004f3a1c: ADD ESP,0x4
// 004f3a1f: TEST EAX,EAX
// 004f3a21: JNZ 0x004f3ac5
//   XREF to: 004f3ac5 (CONDITIONAL_JUMP)
// 004f3a27: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 004f3a2c: PUSH 0xa
// 004f3a2e: LEA EAX,[ESP + 0x8]
// 004f3a32: PUSH EAX
// 004f3a33: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 004f3a38: ADD ESP,0xc
// 004f3a3b: MOV EDX,ESP
// 004f3a3d: PUSH EDX
// 004f3a3e: MOV EAX,dword ptr [EBX + 0x154]
// 004f3a44: PUSH EBX
// 004f3a45: CALL dword ptr [EAX + 0x4c]
// 004f3a48: ADD ESP,0x8
// 004f3a4b: TEST EAX,EAX
// 004f3a4d: JLE 0x004f3ac5
//   XREF to: 004f3ac5 (CONDITIONAL_JUMP)
// 004f3a4f: MOV EDX,dword ptr [ESP + 0x94]
// 004f3a56: LEA EAX,[EBX + 0x20]
// 004f3a59: FLD float ptr [EDX]
// 004f3a5b: FSUB float ptr [EAX]
// 004f3a5d: FSTP float ptr [ESP + 0x78]
// 004f3a61: FLD float ptr [EDX + 0x4]
// 004f3a64: FSUB float ptr [EAX + 0x4]
// 004f3a67: FST float ptr [ESP + 0x7c]
// 004f3a6b: FLD ST0
// 004f3a6d: FMUL double ptr [0x0062ecce]
//   XREF to: 0062ecce (READ)
// 004f3a73: FLD float ptr [EDX + 0x8]
// 004f3a76: FSUB float ptr [EAX + 0x8]
// 004f3a79: FXCH
// 004f3a7b: FSTP ST2
// 004f3a7d: FXCH
// 004f3a7f: FST float ptr [ESP + 0x7c]
// 004f3a83: FMUL float ptr [ESP + 0x7c]
// 004f3a87: FLD float ptr [ESP + 0x78]
// 004f3a8b: FMUL ST0
// 004f3a8d: FADDP
// 004f3a8f: FXCH
// 004f3a91: FST float ptr [ESP + 0x80]
// 004f3a98: FMUL float ptr [ESP + 0x80]
// 004f3a9f: FADDP
// 004f3aa1: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004f3aa4: FST float ptr [ESP + 0x90]
// 004f3aab: FCOMP float ptr [EAX]
// 004f3aad: FNSTSW AX
// 004f3aaf: SAHF
// 004f3ab0: JNC 0x004f3ac5
//   XREF to: 004f3ac5 (CONDITIONAL_JUMP)
// 004f3ab2: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004f3ab5: MOV EAX,dword ptr [ESP + 0x90]
// 004f3abc: MOV dword ptr [ESP + 0x8c],EBX
// 004f3ac3: MOV dword ptr [EDX],EAX
// 004f3ac5: INC EDI
//   Label: LAB_004f3ac5
// 004f3ac6: ADD ESI,0x4
// 004f3ac9: JMP 0x004f3992
//   XREF to: 004f3992 (UNCONDITIONAL_JUMP)
// 004f3ace: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_004f3ace
//   XREF to: Stack[0x8] (READ)
// 004f3ad1: FLD float ptr [EAX]
// 004f3ad3: FSQRT
// 004f3ad5: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004f3ad8: FSTP float ptr [EAX]
// 004f3ada: MOV EAX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x1c] (READ)
// 004f3ae1: MOV ESP,EBP
// 004f3ae3: POP EBP
// 004f3ae4: POP EDI
// 004f3ae5: POP ESI
// 004f3ae6: POP EBX
// 004f3ae7: RET
