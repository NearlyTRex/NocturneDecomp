// Name: core_crossbow.cpp_FUN_00448d30
// Address: 00448d30
// Address Range: [[00448d30, 00448df3]]
// Convention: unknown
// Signature: undefined core_crossbow.cpp_FUN_00448d30()
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408ec0
//   core_flame.cpp_FUN_004c9c00
//   core_flame.cpp_FUN_004caa70
//   core_weapon.cpp_CWeapon_process_FUN_005ee110

#include "nocturne.h"

/* Signature: undefined1 actors_weapon_crossbow.cpp_FUN_00448d30(undefined4 param_1, undefined4
   param_2) */

void core_crossbow_cpp_FUN_00448d30(void)

{
  float *pfVar1;
  CWeapon *in_stack_00000004;
  
  core_weapon_cpp_CWeapon_process_FUN_005ee110(in_stack_00000004);
  (*(in_stack_00000004->base_actor).metadata.vtable[1].renderOpaque)(&in_stack_00000004->base_actor)
  ;
  pfVar1 = core_actor_cpp_CDemonActor_FUN_00408ec0(&in_stack_00000004->base_actor);
  in_stack_00000004[1].base_actor.location.position.y = *pfVar1;
  in_stack_00000004[1].base_actor.location.position.z = pfVar1[1];
  in_stack_00000004[1].base_actor.location.area_id = (int)pfVar1[2];
  if ((((in_stack_00000004->weapon_state != 2) || (in_stack_00000004->ammo_count < 1)) ||
      (in_stack_00000004->ammo_type != 5)) ||
     (0.0 < *(float *)(in_stack_00000004->field6_0x2f4 + 0xc))) {
    core_flame_cpp_FUN_004caa70();
    in_stack_00000004[1].base_actor.actor_name[0] = '\0';
    in_stack_00000004[1].base_actor.actor_name[1] = '\0';
    in_stack_00000004[1].base_actor.actor_name[2] = '\0';
    in_stack_00000004[1].base_actor.actor_name[3] = '\0';
  }
  else {
    in_stack_00000004[1].base_actor.actor_name[0] = '\x01';
    in_stack_00000004[1].base_actor.actor_name[1] = '\0';
    in_stack_00000004[1].base_actor.actor_name[2] = '\0';
    in_stack_00000004[1].base_actor.actor_name[3] = '\0';
  }
  core_flame_cpp_FUN_004c9c00();
  (in_stack_00000004->base_actor).is_transparent =
       *(int *)in_stack_00000004[1].base_actor.actor_name;
  return;
}


// Assembly code:
// 00448d30: PUSH EBX
//   Label: core_crossbow.cpp_FUN_00448d30
// 00448d31: SUB ESP,0x18
// 00448d34: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 00448d38: PUSH dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 00448d3c: PUSH EBX
// 00448d3d: CALL core_weapon.cpp_CWeapon_process_FUN_005ee110
//   XREF to: 005ee110 (UNCONDITIONAL_CALL)
// 00448d42: ADD ESP,0x8
// 00448d45: LEA EDX,[ESP + 0xc]
//   XREF to: Stack[-0x10] (DATA)
// 00448d49: PUSH EDX
// 00448d4a: MOV EAX,dword ptr [EBX + 0x154]
// 00448d50: PUSH EBX
// 00448d51: CALL dword ptr [EAX + 0xf4]
// 00448d57: ADD ESP,0x8
// 00448d5a: PUSH EAX
// 00448d5b: LEA EAX,[ESP + 0x4]
// 00448d5f: PUSH EAX
// 00448d60: PUSH EBX
// 00448d61: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00448d66: LEA EDX,[EBX + 0x59c]
// 00448d6c: MOV ECX,dword ptr [EAX]
// 00448d6e: MOV dword ptr [EDX],ECX
// 00448d70: MOV ECX,dword ptr [EAX + 0x4]
// 00448d73: MOV dword ptr [EDX + 0x4],ECX
// 00448d76: MOV ECX,dword ptr [EAX + 0x8]
// 00448d79: MOV dword ptr [EDX + 0x8],ECX
// 00448d7c: MOV EDX,dword ptr [EBX + 0x2d4]
// 00448d82: ADD ESP,0xc
// 00448d85: CMP EDX,0x2
// 00448d88: JNZ 0x00448dd9
//   XREF to: 00448dd9 (CONDITIONAL_JUMP)
// 00448d8a: CMP dword ptr [EBX + 0x568],0x0
// 00448d91: JLE 0x00448dd9
//   XREF to: 00448dd9 (CONDITIONAL_JUMP)
// 00448d93: CMP dword ptr [EBX + 0x56c],0x5
// 00448d9a: JNZ 0x00448dd9
//   XREF to: 00448dd9 (CONDITIONAL_JUMP)
// 00448d9c: FLD float ptr [EBX + 0x300]
// 00448da2: FLDZ
// 00448da4: FCOMPP
// 00448da6: FNSTSW AX
// 00448da8: SAHF
// 00448da9: JC 0x00448dd9
//   XREF to: 00448dd9 (CONDITIONAL_JUMP)
// 00448dab: MOV dword ptr [EBX + 0x578],0x1
// 00448db5: LEA EAX,[EBX + 0x57c]
//   Label: LAB_00448db5
// 00448dbb: PUSH dword ptr [ESP + 0x24]
// 00448dbf: PUSH EAX
// 00448dc0: CALL core_flame.cpp_FUN_004c9c00
//   XREF to: 004c9c00 (UNCONDITIONAL_CALL)
// 00448dc5: MOV EAX,dword ptr [EBX + 0x578]
// 00448dcb: ADD ESP,0x8
// 00448dce: MOV dword ptr [EBX + 0xfc],EAX
// 00448dd4: ADD ESP,0x18
// 00448dd7: POP EBX
// 00448dd8: RET
// 00448dd9: LEA EAX,[EBX + 0x57c]
//   Label: LAB_00448dd9
// 00448ddf: PUSH EAX
// 00448de0: CALL core_flame.cpp_FUN_004caa70
//   XREF to: 004caa70 (UNCONDITIONAL_CALL)
// 00448de5: ADD ESP,0x4
// 00448de8: MOV dword ptr [EBX + 0x578],0x0
// 00448df2: JMP 0x00448db5
//   XREF to: 00448db5 (UNCONDITIONAL_JUMP)
