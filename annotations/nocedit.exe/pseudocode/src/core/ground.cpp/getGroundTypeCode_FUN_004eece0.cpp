// Name: core_ground.cpp_getGroundTypeCode_FUN_004eece0
// Address: 004eece0
// Address Range: [[004eece0, 004eed44]]
// Convention: __cdecl
// Signature: char * core_ground.cpp_getGroundTypeCode_FUN_004eece0(int type)
// Cross-references:
//   core_actor.cpp_CDemonActor_handleFootstep_FUN_0040ca10 (0040ca10) at 0040cb15 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireEffect_FUN_004c76a0 (004c76a0) at 004c78af [UNCONDITIONAL_CALL]
//   core_setedit.cpp_ImportingGroundTextures_FUN_00578420 (00578420) at 0057854d [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_004eeca0 = 004eecf1
//   TerminatedCString s_dt_0062e5cd
//   TerminatedCString s_dt_0062e5d0
//   TerminatedCString s_mt_0062e5d3
//   TerminatedCString s_wt_0062e5d6
//   TerminatedCString s_wd_0062e5d9
//   TerminatedCString s_mb_0062e5dc
//   TerminatedCString s_md_0062e5df
//   TerminatedCString s_cp_0062e5e2
//   TerminatedCString s_bd_0062e5e5
//   TerminatedCString s_gl_0062e5e8
//   TerminatedCString s_gr_0062e5eb
//   TerminatedCString s_df_0062e5ee

#include "nocturne.h"

char * __cdecl core_ground_cpp_getGroundTypeCode_FUN_004eece0(int type)

{
  switch(type) {
  case 1:
    return "no";
  case 2:
    return "ct";
  case 3:
    return "dt";
  case 4:
    return "dt";
  case 5:
    return "mt";
  case 6:
    return "wt";
  case 7:
    return "wd";
  case 8:
    return "mb";
  case 9:
    return "md";
  case 10:
    return "cp";
  case 0xb:
    return "bd";
  case 0xc:
    return "gl";
  case 0xd:
    return "gr";
  default:
    return "df";
  }
}


// Assembly code:
// 004eece0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_ground.cpp_getGroundTypeCode_FUN_004eece0
//   XREF to: Stack[0x4] (READ)
// 004eece4: DEC EAX
// 004eece5: CMP EAX,0xc
// 004eece8: JA 0x004eed3f
//   XREF to: 004eed3f (CONDITIONAL_JUMP)
// 004eecea: JMP dword ptr [EAX*0x4 + 0x4eeca0]
//   Label: switchD
//   XREF to: 004eecf1 (COMPUTED_JUMP)
//   XREF to: 004eecf7 (COMPUTED_JUMP)
//   XREF to: 004eecfd (COMPUTED_JUMP)
//   XREF to: 004eed03 (COMPUTED_JUMP)
//   XREF to: 004eed09 (COMPUTED_JUMP)
//   XREF to: 004eed0f (COMPUTED_JUMP)
//   XREF to: 004eed15 (COMPUTED_JUMP)
//   XREF to: 004eed1b (COMPUTED_JUMP)
//   XREF to: 004eed21 (COMPUTED_JUMP)
//   XREF to: 004eed27 (COMPUTED_JUMP)
//   XREF to: 004eed2d (COMPUTED_JUMP)
//   XREF to: 004eed33 (COMPUTED_JUMP)
//   XREF to: 004eed39 (COMPUTED_JUMP)
//   XREF to: 004eeca0 (DATA)
// 004eecf1: MOV EAX,0x62e5c7
//   Label: caseD_1
//   XREF to: 0062e5c7 (DATA)
// 004eecf6: RET
// 004eecf7: MOV EAX,0x62e5ca
//   Label: caseD_2
//   XREF to: 0062e5ca (DATA)
// 004eecfc: RET
// 004eecfd: MOV EAX,0x62e5cd
//   Label: caseD_3
//   XREF to: 0062e5cd (DATA)
// 004eed02: RET
// 004eed03: MOV EAX,0x62e5d0
//   Label: caseD_4
//   XREF to: 0062e5d0 (DATA)
// 004eed08: RET
// 004eed09: MOV EAX,0x62e5d3
//   Label: caseD_5
//   XREF to: 0062e5d3 (DATA)
// 004eed0e: RET
// 004eed0f: MOV EAX,0x62e5d6
//   Label: caseD_6
//   XREF to: 0062e5d6 (DATA)
// 004eed14: RET
// 004eed15: MOV EAX,0x62e5d9
//   Label: caseD_7
//   XREF to: 0062e5d9 (DATA)
// 004eed1a: RET
// 004eed1b: MOV EAX,0x62e5dc
//   Label: caseD_8
//   XREF to: 0062e5dc (DATA)
// 004eed20: RET
// 004eed21: MOV EAX,0x62e5df
//   Label: caseD_9
//   XREF to: 0062e5df (DATA)
// 004eed26: RET
// 004eed27: MOV EAX,0x62e5e2
//   Label: caseD_a
//   XREF to: 0062e5e2 (DATA)
// 004eed2c: RET
// 004eed2d: MOV EAX,0x62e5e5
//   Label: caseD_b
//   XREF to: 0062e5e5 (DATA)
// 004eed32: RET
// 004eed33: MOV EAX,0x62e5e8
//   Label: caseD_c
//   XREF to: 0062e5e8 (DATA)
// 004eed38: RET
// 004eed39: MOV EAX,0x62e5eb
//   Label: caseD_d
//   XREF to: 0062e5eb (DATA)
// 004eed3e: RET
// 004eed3f: MOV EAX,0x62e5ee
//   Label: default
//   XREF to: 0062e5ee (DATA)
// 004eed44: RET
