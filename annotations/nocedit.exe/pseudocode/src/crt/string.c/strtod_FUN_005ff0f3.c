// Name: crt_string.c_strtod_FUN_005ff0f3
// Address: 005ff0f3
// Address Range: [[005ff0f3, 005ff122]]
// Convention: __cdecl
// Signature: double crt_string.c_strtod_FUN_005ff0f3(char * str)
// Cross-references:
//   core_cloth.cpp_FUN_0043c430 (0043c430) at 0043c589 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedFogEditor_FUN_00580730 (00580730) at 00580da3 [UNCONDITIONAL_CALL]
//   shape_design.c_centerVerticesAroundPoint_FUN_0045ea90 (0045ea90) at 0045eb48 [UNCONDITIONAL_CALL]
//   shape_design.c_configureFullPassPolygonReduction_FUN_00465810 (00465810) at 00465870 [UNCONDITIONAL_CALL]
//   shape_design.c_configureSinglePassPolygonReduction_FUN_00465560 (00465560) at 004655c0 [UNCONDITIONAL_CALL]
//   shape_design.c_createKeyframeModel_FUN_00468320 (00468320) at 004684a5 [UNCONDITIONAL_CALL]
//   shape_design.c_generateGlobe_FUN_00468910 (00468910) at 004689f4 [UNCONDITIONAL_CALL]
//   shape_design.c_generateOctant_FUN_00469420 (00469420) at 00469504 [UNCONDITIONAL_CALL]
//   shape_design.c_generateShell_FUN_00468f20 (00468f20) at 00469004 [UNCONDITIONAL_CALL]
//   shape_design.c_scaleModel_FUN_00467e70 (00467e70) at 00467eb5 [UNCONDITIONAL_CALL]
//   shape_design.c_sizeForStadium_FUN_00469c70 (00469c70) at 00469da0 [UNCONDITIONAL_CALL]
//   shape_design.c_translateAllVerticesAlongAxis_FUN_0045ec90 (0045ec90) at 0045ecd3 [UNCONDITIONAL_CALL]
//   shape_design.c_vertexReducer_FUN_00467850 (00467850) at 004678d5 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_string.c_strtod_main_FUN_00605d5d

#include "nocturne.h"

double __cdecl crt_string_c_strtod_FUN_005ff0f3(char *str)

{
  double dVar1;
  char **in_stack_ffffffec;
  
  dVar1 = crt_string_c_strtod_main_FUN_00605d5d((char *)0x0,in_stack_ffffffec);
  return dVar1;
}


// Assembly code:
// 005ff0f3: PUSH EBP
//   Label: crt_string.c_strtod_FUN_005ff0f3
// 005ff0f4: MOV EBP,ESP
// 005ff0f6: SUB ESP,0x10
// 005ff0f9: PUSH 0x0
// 005ff0fb: MOV EDX,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005ff0fe: PUSH EDX
// 005ff0ff: CALL crt_string.c_strtod_main_FUN_00605d5d
//   XREF to: 00605d5d (UNCONDITIONAL_CALL)
// 005ff104: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005ff107: MOV dword ptr [EBP + -0xc],EDX
//   XREF to: Stack[-0x10] (WRITE)
// 005ff10a: ADD ESP,0x8
// 005ff10d: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x14] (READ)
// 005ff110: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 005ff113: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x10] (READ)
// 005ff116: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 005ff119: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0xc] (READ)
// 005ff11c: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x8] (READ)
// 005ff11f: MOV ESP,EBP
// 005ff121: POP EBP
// 005ff122: RET
