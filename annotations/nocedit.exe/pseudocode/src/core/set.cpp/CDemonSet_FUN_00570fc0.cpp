// Name: core_set.cpp_CDemonSet_FUN_00570fc0
// Address: 00570fc0
// Address Range: [[00570fc0, 0057112f]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_FUN_00570fc0(CDemonSet * this_ptr)
// Cross-references:
//   core_mission.cpp_CDemonMission_buildActiveSetActorList_FUN_00524120 (00524120) at 0052417b [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60 (00523e60) at 00523ec7 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 g_CCharacterClassInfo.name_hash
//   undefined4 g_CEnemyClassInfo.name_hash
//   undefined4 g_CTriggerClassInfo.name_hash
//   undefined4 g_CWayPointClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_00570fc0(CDemonSet *this_ptr)

{
  CDemonActor *actor_ptr;
  uint class_name_hash;
  CDemonActor *pCVar1;
  int iVar2;
  CDemonSet *pCVar3;
  
  this_ptr->field19_0x14f0a0[0x1f3c] = '\0';
  this_ptr->field19_0x14f0a0[0x1f3d] = '\0';
  this_ptr->field19_0x14f0a0[0x1f3e] = '\0';
  this_ptr->field19_0x14f0a0[7999] = '\0';
  this_ptr->field19_0x14f0a0[16000] = '\0';
  this_ptr->field19_0x14f0a0[0x3e81] = '\0';
  this_ptr->field19_0x14f0a0[0x3e82] = '\0';
  this_ptr->field19_0x14f0a0[0x3e83] = '\0';
  this_ptr->field19_0x14f0a0[0x5dc4] = '\0';
  this_ptr->field19_0x14f0a0[0x5dc5] = '\0';
  this_ptr->field19_0x14f0a0[0x5dc6] = '\0';
  this_ptr->field19_0x14f0a0[0x5dc7] = '\0';
  this_ptr->field19_0x14f0a0[0x9c4c] = '\0';
  this_ptr->field19_0x14f0a0[0x9c4d] = '\0';
  this_ptr->field19_0x14f0a0[0x9c4e] = '\0';
  this_ptr->field19_0x14f0a0[0x9c4f] = '\0';
  this_ptr->damage_listener_count = 0;
  iVar2 = 0;
  pCVar3 = this_ptr;
  if (0 < (int)this_ptr->actor_list_ptr) {
    do {
      actor_ptr = *(CDemonActor **)pCVar3->actor_list_data;
      if ((actor_ptr->is_transparent != 0) || (actor_ptr->field14_0xf8 != 0)) {
        *(CDemonActor **)
         (this_ptr->field19_0x14f0a0 + *(int *)(this_ptr->field19_0x14f0a0 + 0x9c4c) * 4 + 0x9c50) =
             actor_ptr;
        *(int *)(this_ptr->field19_0x14f0a0 + 0x9c4c) =
             *(int *)(this_ptr->field19_0x14f0a0 + 0x9c4c) + 1;
      }
      pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (actor_ptr,g_CCharacterClassInfo.name_hash);
      *(CDemonActor **)(this_ptr->field19_0x14f0a0 + this_ptr->damage_listener_count * 4 + -4) =
           pCVar1;
      class_name_hash = g_CEnemyClassInfo.name_hash;
      if (*(int *)(this_ptr->field19_0x14f0a0 + this_ptr->damage_listener_count * 4 + -4) == 0) {
        pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (actor_ptr,g_CWayPointClassInfo.name_hash);
        *(CDemonActor **)
         (this_ptr->field19_0x14f0a0 + *(int *)(this_ptr->field19_0x14f0a0 + 0x5dc4) * 4 + 0x5dc8) =
             pCVar1;
        if (*(int *)(this_ptr->field19_0x14f0a0 +
                    *(int *)(this_ptr->field19_0x14f0a0 + 0x5dc4) * 4 + 0x5dc8) != 0) {
          *(int *)(this_ptr->field19_0x14f0a0 + 0x5dc4) =
               *(int *)(this_ptr->field19_0x14f0a0 + 0x5dc4) + 1;
        }
        pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (actor_ptr,g_CTriggerClassInfo.name_hash);
        if (((pCVar1 != (CDemonActor *)0x0) && (*(int *)(pCVar1[1].actor_name + 0x1c) == 4)) &&
           (pCVar1[2].orient_matrix.m[1].z != 0.0)) goto LAB_005710a5;
      }
      else {
        this_ptr->damage_listener_count = this_ptr->damage_listener_count + 1;
        pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,class_name_hash);
        *(CDemonActor **)
         (this_ptr->field19_0x14f0a0 + *(int *)(this_ptr->field19_0x14f0a0 + 0x1f3c) * 4 + 8000) =
             pCVar1;
        if (*(int *)(this_ptr->field19_0x14f0a0 +
                    *(int *)(this_ptr->field19_0x14f0a0 + 0x1f3c) * 4 + 8000) != 0) {
          *(int *)(this_ptr->field19_0x14f0a0 + 0x1f3c) =
               *(int *)(this_ptr->field19_0x14f0a0 + 0x1f3c) + 1;
LAB_005710a5:
          *(CDemonActor **)
           (this_ptr->field19_0x14f0a0 + *(int *)(this_ptr->field19_0x14f0a0 + 16000) * 4 + 0x3e84)
               = actor_ptr;
          *(int *)(this_ptr->field19_0x14f0a0 + 16000) =
               *(int *)(this_ptr->field19_0x14f0a0 + 16000) + 1;
        }
      }
      iVar2 = iVar2 + 1;
      pCVar3 = (CDemonSet *)pCVar3->cameras;
    } while (iVar2 < (int)this_ptr->actor_list_ptr);
  }
  return;
}


// Assembly code:
// 00570fc0: PUSH EBX
//   Label: core_set.cpp_CDemonSet_FUN_00570fc0
// 00570fc1: PUSH ESI
// 00570fc2: PUSH EDI
// 00570fc3: PUSH EBP
// 00570fc4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00570fc8: MOV dword ptr [EBX + 0x150fdc],0x0
// 00570fd2: MOV dword ptr [EBX + 0x152f20],0x0
// 00570fdc: MOV dword ptr [EBX + 0x154e64],0x0
// 00570fe6: MOV dword ptr [EBX + 0x158cec],0x0
// 00570ff0: MOV EDX,dword ptr [EBX + 0x14d154]
// 00570ff6: MOV dword ptr [EBX + 0x14f098],0x0
// 00571000: XOR EBP,EBP
// 00571002: TEST EDX,EDX
// 00571004: JLE 0x005710ca
//   XREF to: 005710ca (CONDITIONAL_JUMP)
// 0057100a: MOV EDI,EBX
// 0057100c: MOV ESI,dword ptr [EDI + 0x14d158]
//   Label: LAB_0057100c
// 00571012: CMP dword ptr [ESI + 0xfc],0x0
// 00571019: JNZ 0x00571024
//   XREF to: 00571024 (CONDITIONAL_JUMP)
// 0057101b: CMP dword ptr [ESI + 0xf8],0x0
// 00571022: JZ 0x00571037
//   XREF to: 00571037 (CONDITIONAL_JUMP)
// 00571024: MOV EAX,dword ptr [EBX + 0x158cec]
//   Label: LAB_00571024
// 0057102a: MOV dword ptr [EBX + EAX*0x4 + 0x158cf0],ESI
// 00571031: INC dword ptr [EBX + 0x158cec]
// 00571037: MOV EAX,[0x00823c4c]
//   Label: LAB_00571037
//   XREF to: 00823c4c (READ)
// 0057103c: PUSH EAX
// 0057103d: PUSH ESI
// 0057103e: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 00571043: MOV EDX,dword ptr [EBX + 0x14f098]
// 00571049: MOV dword ptr [EBX + EDX*0x4 + 0x14f09c],EAX
// 00571050: MOV EAX,dword ptr [EBX + 0x14f098]
// 00571056: MOV EDX,dword ptr [EBX + EAX*0x4 + 0x14f09c]
// 0057105d: ADD ESP,0x8
// 00571060: TEST EDX,EDX
// 00571062: JZ 0x005710cf
//   XREF to: 005710cf (CONDITIONAL_JUMP)
// 00571064: MOV EAX,[0x02cf2bf0]
//   XREF to: 02cf2bf0 (READ)
// 00571069: MOV EDX,dword ptr [EBX + 0x14f098]
// 0057106f: PUSH EAX
// 00571070: INC EDX
// 00571071: PUSH ESI
// 00571072: MOV dword ptr [EBX + 0x14f098],EDX
// 00571078: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 0057107d: MOV EDX,dword ptr [EBX + 0x150fdc]
// 00571083: MOV dword ptr [EBX + EDX*0x4 + 0x150fe0],EAX
// 0057108a: MOV EAX,dword ptr [EBX + 0x150fdc]
// 00571090: MOV ECX,dword ptr [EBX + EAX*0x4 + 0x150fe0]
// 00571097: ADD ESP,0x8
// 0057109a: TEST ECX,ECX
// 0057109c: JZ 0x005710b8
//   XREF to: 005710b8 (CONDITIONAL_JUMP)
// 0057109e: INC EAX
// 0057109f: MOV dword ptr [EBX + 0x150fdc],EAX
// 005710a5: MOV EAX,dword ptr [EBX + 0x152f20]
//   Label: LAB_005710a5
// 005710ab: MOV dword ptr [EBX + EAX*0x4 + 0x152f24],ESI
// 005710b2: INC dword ptr [EBX + 0x152f20]
// 005710b8: INC EBP
//   Label: LAB_005710b8
// 005710b9: MOV ECX,dword ptr [EBX + 0x14d154]
// 005710bf: ADD EDI,0x4
// 005710c2: CMP EBP,ECX
// 005710c4: JL 0x0057100c
//   XREF to: 0057100c (CONDITIONAL_JUMP)
// 005710ca: POP EBP
//   Label: LAB_005710ca
// 005710cb: POP EDI
// 005710cc: POP ESI
// 005710cd: POP EBX
// 005710ce: RET
// 005710cf: MOV ECX,dword ptr [0x03f9591c]
//   Label: LAB_005710cf
//   XREF to: 03f9591c (READ)
// 005710d5: PUSH ECX
// 005710d6: PUSH ESI
// 005710d7: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005710dc: MOV EDX,dword ptr [EBX + 0x154e64]
// 005710e2: MOV dword ptr [EBX + EDX*0x4 + 0x154e68],EAX
// 005710e9: MOV EAX,dword ptr [EBX + 0x154e64]
// 005710ef: MOV EDX,dword ptr [EBX + EAX*0x4 + 0x154e68]
// 005710f6: ADD ESP,0x8
// 005710f9: TEST EDX,EDX
// 005710fb: JZ 0x00571106
//   XREF to: 00571106 (CONDITIONAL_JUMP)
// 005710fd: LEA ECX,[EAX + 0x1]
// 00571100: MOV dword ptr [EBX + 0x154e64],ECX
// 00571106: MOV EAX,[0x03f87490]
//   Label: LAB_00571106
//   XREF to: 03f87490 (READ)
// 0057110b: PUSH EAX
// 0057110c: PUSH ESI
// 0057110d: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 00571112: ADD ESP,0x8
// 00571115: TEST EAX,EAX
// 00571117: JZ 0x005710b8
//   XREF to: 005710b8 (CONDITIONAL_JUMP)
// 00571119: CMP dword ptr [EAX + 0x174],0x4
// 00571120: JNZ 0x005710b8
//   XREF to: 005710b8 (CONDITIONAL_JUMP)
// 00571122: CMP dword ptr [EAX + 0x300],0x0
// 00571129: JZ 0x005710b8
//   XREF to: 005710b8 (CONDITIONAL_JUMP)
// 0057112b: JMP 0x005710a5
//   XREF to: 005710a5 (UNCONDITIONAL_JUMP)
