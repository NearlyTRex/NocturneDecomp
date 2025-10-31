// Name: core_ground.cpp_getGroundTypeName_FUN_004eed80
// Address: 004eed80
// Address Range: [[004eed80, 004eedde]]
// Convention: __cdecl
// Signature: char * core_ground.cpp_getGroundTypeName_FUN_004eed80(int type)
// Cross-references:
//   core_actor.cpp_AnotherActorParser_FUN_0040eed0 (0040eed0) at 0040f653 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CActorProperty_FUN_0040ea50 (0040ea50) at 0040ec06 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 (00578d80) at 005799e3 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940 (00584940) at 00584a23 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_EditingGroundTypesAndSaving_FUN_00578630 (00578630) at 005786a6 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_ImportingGroundTextures_FUN_00578420 (00578420) at 005785a1 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_004eed48 = 004eed91
//   undefined4 s_DIRT_0062e614
//   undefined4 s_GRASS_0062e620
//   undefined4 s_METAL_0062e62d
//   undefined4 s_WATER_0062e63a
//   undefined4 s_WOOD_0062e647
//   undefined4 s_MARBLE_0062e653
//   undefined4 s_MUD_0062e661
//   undefined4 s_CARPET_0062e66c
//   undefined4 s_GLASS_0062e67a
//   undefined4 s_GRAVEL_0062e687
//   TerminatedCString s_DEFAULT_0062e68e

#include "nocturne.h"

char * __cdecl core_ground_cpp_getGroundTypeName_FUN_004eed80(int type)

{
  switch(type) {
  case 1:
    return "GROUND_NONE" + 7;
  case 2:
    return "GROUND_CONCRETE" + 7;
  case 3:
    return "GROUND_DIRT" + 7;
  case 4:
    return "GROUND_GRASS" + 7;
  case 5:
    return "GROUND_METAL" + 7;
  case 6:
    return "GROUND_WATER" + 7;
  case 7:
    return "GROUND_WOOD" + 7;
  case 8:
    return "GROUND_MARBLE" + 7;
  case 9:
    return "GROUND_MUD" + 7;
  case 10:
    return "GROUND_CARPET" + 7;
  default:
    return "DEFAULT";
  case 0xc:
    return "GROUND_GLASS" + 7;
  case 0xd:
    return "GROUND_GRAVEL" + 7;
  }
}


// Assembly code:
// 004eed80: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_ground.cpp_getGroundTypeName_FUN_004eed80
//   XREF to: Stack[0x4] (READ)
// 004eed84: DEC EAX
// 004eed85: CMP EAX,0xc
// 004eed88: JA 0x004eedd9
//   XREF to: 004eedd9 (CONDITIONAL_JUMP)
// 004eed8a: JMP dword ptr [EAX*0x4 + 0x4eed48]
//   Label: switchD
//   XREF to: 004eed91 (COMPUTED_JUMP)
//   XREF to: 004eed97 (COMPUTED_JUMP)
//   XREF to: 004eed9d (COMPUTED_JUMP)
//   XREF to: 004eeda3 (COMPUTED_JUMP)
//   XREF to: 004eeda9 (COMPUTED_JUMP)
//   XREF to: 004eedaf (COMPUTED_JUMP)
//   XREF to: 004eedb5 (COMPUTED_JUMP)
//   XREF to: 004eedbb (COMPUTED_JUMP)
//   XREF to: 004eedc1 (COMPUTED_JUMP)
//   XREF to: 004eedc7 (COMPUTED_JUMP)
//   XREF to: 004eedcd (COMPUTED_JUMP)
//   XREF to: 004eedd3 (COMPUTED_JUMP)
//   XREF to: 004eedd9 (COMPUTED_JUMP)
//   XREF to: 004eed48 (DATA)
// 004eed91: MOV EAX,0x62e5f8
//   Label: caseD_1
//   XREF to: 0062e5f8 (DATA)
// 004eed96: RET
// 004eed97: MOV EAX,0x62e604
//   Label: caseD_2
//   XREF to: 0062e604 (DATA)
// 004eed9c: RET
// 004eed9d: MOV EAX,0x62e614
//   Label: caseD_3
//   XREF to: 0062e614 (DATA)
// 004eeda2: RET
// 004eeda3: MOV EAX,0x62e620
//   Label: caseD_4
//   XREF to: 0062e620 (DATA)
// 004eeda8: RET
// 004eeda9: MOV EAX,0x62e62d
//   Label: caseD_5
//   XREF to: 0062e62d (DATA)
// 004eedae: RET
// 004eedaf: MOV EAX,0x62e63a
//   Label: caseD_6
//   XREF to: 0062e63a (DATA)
// 004eedb4: RET
// 004eedb5: MOV EAX,0x62e647
//   Label: caseD_7
//   XREF to: 0062e647 (DATA)
// 004eedba: RET
// 004eedbb: MOV EAX,0x62e653
//   Label: caseD_8
//   XREF to: 0062e653 (DATA)
// 004eedc0: RET
// 004eedc1: MOV EAX,0x62e661
//   Label: caseD_9
//   XREF to: 0062e661 (DATA)
// 004eedc6: RET
// 004eedc7: MOV EAX,0x62e66c
//   Label: caseD_a
//   XREF to: 0062e66c (DATA)
// 004eedcc: RET
// 004eedcd: MOV EAX,0x62e67a
//   Label: caseD_c
//   XREF to: 0062e67a (DATA)
// 004eedd2: RET
// 004eedd3: MOV EAX,0x62e687
//   Label: caseD_d
//   XREF to: 0062e687 (DATA)
// 004eedd8: RET
// 004eedd9: MOV EAX,0x62e68e
//   Label: caseD_b
//   XREF to: 0062e68e (DATA)
// 004eedde: RET
