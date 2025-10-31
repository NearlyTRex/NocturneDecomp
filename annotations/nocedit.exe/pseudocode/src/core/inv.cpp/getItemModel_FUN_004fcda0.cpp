// Name: core_inv.cpp_getItemModel_FUN_004fcda0
// Address: 004fcda0
// Address Range: [[004fcda0, 004fcef4]]
// Convention: __cdecl
// Signature: CKeyFramedModelInstance * core_inv.cpp_getItemModel_FUN_004fcda0(CDemonActor * actor_ptr)
// Cross-references:
//   core_inv.cpp_CInventory_renderItemModel_FUN_004fee00 (004fee00) at 004feed9 [UNCONDITIONAL_CALL]
//   core_inv.cpp_getItemDisplayName_FUN_004fcf00 (004fcf00) at 004fcf11 [UNCONDITIONAL_CALL]
//   core_inv.cpp_getItemIconName_FUN_004fcf70 (004fcf70) at 004fcf81 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_CWeapon_006302fa
//   TerminatedCString s_CAmmo_00630302
//   TerminatedCString s_CKeyActor_00630308
//   TerminatedCString s_CBoxActor_00630312
//   TerminatedCString s_CHealthItem_0063031c
//   TerminatedCString s_CGasMask_00630328
//   TerminatedCString s_CFilmReel_00630331
//   TerminatedCString s_CTrap_0063033b
//   TerminatedCString s_CBattery_00630341
//   TerminatedCString s_core_inv_cpp_0063034a
//   TerminatedCString s_getModel_Can_t_classify__0063035a
//   undefined4 g_CAmmoClassInfo.name_hash
//   undefined4 g_CBatteryClassInfo.name_hash
//   undefined4 g_CBoxActorClassInfo.name_hash
//   undefined4 g_CFilmReelClassInfo.name_hash
//   undefined4 g_CGasMaskClassInfo.name_hash
//   undefined4 DAT_02db8780.name_hash
//   undefined4 g_CKeyActorClassInfo.name_hash
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 g_CTrapClassInfo.name_hash
//   undefined4 g_CWeaponClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_isOfClass_FUN_0040c6d0
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

CKeyFramedModelInstance * __cdecl core_inv_cpp_getItemModel_FUN_004fcda0(CDemonActor *actor_ptr)

{
  int iVar1;
  CDemonActor *pCVar2;
  uint class_name_hash;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CWeapon");
  class_name_hash = g_CWeaponClassInfo.name_hash;
  if ((((((iVar1 == 0) &&
         (iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CAmmo"),
         class_name_hash = g_CAmmoClassInfo.name_hash, iVar1 == 0)) &&
        (iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CKeyActor"),
        class_name_hash = g_CKeyActorClassInfo.name_hash, iVar1 == 0)) &&
       ((iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CBoxActor"),
        class_name_hash = g_CBoxActorClassInfo.name_hash, iVar1 == 0 &&
        (iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CHealthItem"),
        class_name_hash = g_CHealthItemClassInfo.name_hash, iVar1 == 0)))) &&
      ((iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CGasMask"),
       class_name_hash = g_CGasMaskClassInfo.name_hash, iVar1 == 0 &&
       ((iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CFilmReel"),
        class_name_hash = g_CFilmReelClassInfo.name_hash, iVar1 == 0 &&
        (iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CTrap"),
        class_name_hash = g_CTrapClassInfo.name_hash, iVar1 == 0)))))) &&
     (iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CBattery"),
     class_name_hash = g_CBatteryClassInfo.name_hash, iVar1 == 0)) {
    g_CurrentFilename = "..\\core\\inv.cpp";
    g_CurrentLineNumber = 0x9d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("getModel - Can't classify : %s");
    return (CKeyFramedModelInstance *)0x0;
  }
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,class_name_hash);
  return (CKeyFramedModelInstance *)(pCVar2 + 1);
}


// Assembly code:
// 004fcda0: PUSH EBX
//   Label: core_inv.cpp_getItemModel_FUN_004fcda0
// 004fcda1: PUSH ESI
// 004fcda2: PUSH EDI
// 004fcda3: PUSH EBP
// 004fcda4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004fcda8: PUSH 0x6302fa
//   XREF to: 006302fa (DATA)
// 004fcdad: PUSH EBX
// 004fcdae: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004fcdb3: ADD ESP,0x8
// 004fcdb6: TEST EAX,EAX
// 004fcdb8: JNZ 0x004fce84
//   XREF to: 004fce84 (CONDITIONAL_JUMP)
// 004fcdbe: PUSH 0x630302
//   XREF to: 00630302 (DATA)
// 004fcdc3: PUSH EBX
// 004fcdc4: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004fcdc9: ADD ESP,0x8
// 004fcdcc: TEST EAX,EAX
// 004fcdce: JNZ 0x004fce8d
//   XREF to: 004fce8d (CONDITIONAL_JUMP)
// 004fcdd4: PUSH 0x630308
//   XREF to: 00630308 (DATA)
// 004fcdd9: PUSH EBX
// 004fcdda: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004fcddf: ADD ESP,0x8
// 004fcde2: TEST EAX,EAX
// 004fcde4: JNZ 0x004fce96
//   XREF to: 004fce96 (CONDITIONAL_JUMP)
// 004fcdea: PUSH 0x630312
//   XREF to: 00630312 (DATA)
// 004fcdef: PUSH EBX
// 004fcdf0: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004fcdf5: ADD ESP,0x8
// 004fcdf8: TEST EAX,EAX
// 004fcdfa: JNZ 0x004fce9e
//   XREF to: 004fce9e (CONDITIONAL_JUMP)
// 004fce00: PUSH 0x63031c
//   XREF to: 0063031c (DATA)
// 004fce05: PUSH EBX
// 004fce06: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004fce0b: ADD ESP,0x8
// 004fce0e: TEST EAX,EAX
// 004fce10: JNZ 0x004fcea7
//   XREF to: 004fcea7 (CONDITIONAL_JUMP)
// 004fce16: PUSH 0x630328
//   XREF to: 00630328 (DATA)
// 004fce1b: PUSH EBX
// 004fce1c: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004fce21: ADD ESP,0x8
// 004fce24: TEST EAX,EAX
// 004fce26: JNZ 0x004fceb0
//   XREF to: 004fceb0 (CONDITIONAL_JUMP)
// 004fce2c: PUSH 0x630331
//   XREF to: 00630331 (DATA)
// 004fce31: PUSH EBX
// 004fce32: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004fce37: ADD ESP,0x8
// 004fce3a: TEST EAX,EAX
// 004fce3c: JNZ 0x004fceb8
//   XREF to: 004fceb8 (CONDITIONAL_JUMP)
// 004fce42: PUSH 0x63033b
//   XREF to: 0063033b (DATA)
// 004fce47: PUSH EBX
// 004fce48: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004fce4d: ADD ESP,0x8
// 004fce50: TEST EAX,EAX
// 004fce52: JNZ 0x004fcec1
//   XREF to: 004fcec1 (CONDITIONAL_JUMP)
// 004fce58: PUSH 0x630341
//   XREF to: 00630341 (DATA)
// 004fce5d: PUSH EBX
// 004fce5e: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004fce63: ADD ESP,0x8
// 004fce66: TEST EAX,EAX
// 004fce68: JZ 0x004fceca
//   XREF to: 004fceca (CONDITIONAL_JUMP)
// 004fce6a: MOV ESI,dword ptr [0x0082285c]
//   XREF to: 0082285c (READ)
// 004fce70: PUSH ESI
//   Label: LAB_004fce70
// 004fce71: PUSH EBX
//   Label: LAB_004fce71
// 004fce72: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004fce77: ADD ESP,0x8
// 004fce7a: ADD EAX,0x158
// 004fce7f: POP EBP
// 004fce80: POP EDI
// 004fce81: POP ESI
// 004fce82: POP EBX
// 004fce83: RET
// 004fce84: MOV EBP,dword ptr [0x03f95d78]
//   Label: LAB_004fce84
//   XREF to: 03f95d78 (READ)
// 004fce8a: PUSH EBP
// 004fce8b: JMP 0x004fce71
//   XREF to: 004fce71 (UNCONDITIONAL_JUMP)
// 004fce8d: MOV EDI,dword ptr [0x008223a4]
//   Label: LAB_004fce8d
//   XREF to: 008223a4 (READ)
// 004fce93: PUSH EDI
// 004fce94: JMP 0x004fce71
//   XREF to: 004fce71 (UNCONDITIONAL_JUMP)
// 004fce96: MOV ESI,dword ptr [0x02dcd7d0]
//   Label: LAB_004fce96
//   XREF to: 02dcd7d0 (READ)
// 004fce9c: JMP 0x004fce70
//   XREF to: 004fce70 (UNCONDITIONAL_JUMP)
// 004fce9e: MOV ECX,dword ptr [0x008229e8]
//   Label: LAB_004fce9e
//   XREF to: 008229e8 (READ)
// 004fcea4: PUSH ECX
// 004fcea5: JMP 0x004fce71
//   XREF to: 004fce71 (UNCONDITIONAL_JUMP)
// 004fcea7: MOV EDX,dword ptr [0x02db87b8]
//   Label: LAB_004fcea7
//   XREF to: 02db87b8 (READ)
// 004fcead: PUSH EDX
// 004fceae: JMP 0x004fce71
//   XREF to: 004fce71 (UNCONDITIONAL_JUMP)
// 004fceb0: MOV EAX,[0x02d832a4]
//   Label: LAB_004fceb0
//   XREF to: 02d832a4 (READ)
// 004fceb5: PUSH EAX
// 004fceb6: JMP 0x004fce71
//   XREF to: 004fce71 (UNCONDITIONAL_JUMP)
// 004fceb8: MOV EBP,dword ptr [0x02d12d70]
//   Label: LAB_004fceb8
//   XREF to: 02d12d70 (READ)
// 004fcebe: PUSH EBP
// 004fcebf: JMP 0x004fce71
//   XREF to: 004fce71 (UNCONDITIONAL_JUMP)
// 004fcec1: MOV EDI,dword ptr [0x03f87418]
//   Label: LAB_004fcec1
//   XREF to: 03f87418 (READ)
// 004fcec7: PUSH EDI
// 004fcec8: JMP 0x004fce71
//   XREF to: 004fce71 (UNCONDITIONAL_JUMP)
// 004fceca: PUSH EBX
//   Label: LAB_004fceca
// 004fcecb: MOV EDX,0x63034a
//   XREF to: 0063034a (PARAM)
// 004fced0: MOV ECX,0x9d
// 004fced5: PUSH 0x63035a
//   XREF to: 0063035a (DATA)
// 004fceda: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 004fcee0: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 004fcee6: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004fceeb: ADD ESP,0x8
// 004fceee: XOR EAX,EAX
// 004fcef0: POP EBP
// 004fcef1: POP EDI
// 004fcef2: POP ESI
// 004fcef3: POP EBX
// 004fcef4: RET
