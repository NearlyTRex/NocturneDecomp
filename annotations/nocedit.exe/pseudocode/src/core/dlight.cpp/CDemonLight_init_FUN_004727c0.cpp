// Name: core_dlight.cpp_CDemonLight_init_FUN_004727c0
// Address: 004727c0
// Address Range: [[004727c0, 004728a3]]
// Convention: __cdecl
// Signature: void core_dlight.cpp_CDemonLight_init_FUN_004727c0(CDemonLight * this_ptr)
// Cross-references:
//   core_boxactor.cpp_FUN_00422a20 (00422a20) at 00422a3e [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004db1ac [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 (0053e220) at 0053e271 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 00539167 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_unk201_FUN_0057ae50 (0057ae50) at 0057ae9d [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSLight_create_FUN_00586a90 (00586a90) at 00586ae8 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dlight_cpp_0061ee4b
//   TerminatedCString s_core_dlight_cpp_0061ee5e
//   TerminatedCString s_CDemonCamera_init_Unable_0061ee71
//   TerminatedCString s_core_dlight_cpp_0061eea3
//   double DOUBLE_0061eebb = 7
//   CDemonFilter* g_GlobalFilters = 020a4878
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770
//   core_dlight.cpp_CDemonLight_free_FUN_004728b0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_math.c_round_FUN_005fe6b0
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_init_FUN_004727c0(CDemonLight *this_ptr)

{
  void *pvVar1;
  uchar *puVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_EDX;
  float10 fVar5;
  int iStack00000008;
  
  core_dlight_cpp_CDemonLight_free_FUN_004728b0(this_ptr);
  pvVar1 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                     (this_ptr->shadow_map_width * this_ptr->shadow_map_height * 2 + 0x210,
                      "..\\core\\dlight.cpp",0x6b);
  this_ptr->shadow_buffer_raw = pvVar1;
  if (pvVar1 == (void *)0x0) {
    g_CurrentFilename = "..\\core\\dlight.cpp";
    g_CurrentLineNumber = 0x6c;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonCamera::init - Unable to alloc frame buffer");
  }
  this_ptr->shadow_depth_buffer = (ushort *)((int)this_ptr->shadow_buffer_raw + 0x10U & 0xfffffff0);
  iVar3 = this_ptr->shadow_map_width * this_ptr->shadow_map_height;
  iVar4 = iVar3 >> 0x1f;
  puVar2 = (uchar *)shape_memdbg_cpp_debugMalloc_FUN_0050f250
                              ((int)((iVar3 + iVar4 * -8) - (uint)(iVar4 << 2 < 0)) >> 3,
                               "..\\core\\dlight.cpp",0x71);
  fVar5 = (float10)this_ptr->volumetric_intensity * (float10)DOUBLE_0061eebb;
  this_ptr->lightmap_visibility_bits = puVar2;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,puVar2));
  iStack00000008 = (int)ROUND(fVar5);
  core_dlight_cpp_CDemonLight_applyFilter_FUN_00474770
            (this_ptr,(&g_GlobalFilters)[iStack00000008],0,0,(int)this_ptr);
  return;
}


// Assembly code:
// 004727c0: PUSH EBX
//   Label: core_dlight.cpp_CDemonLight_init_FUN_004727c0
// 004727c1: PUSH EBP
// 004727c2: SUB ESP,0x4
// 004727c5: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004727c9: PUSH EBX
// 004727ca: CALL core_dlight.cpp_CDemonLight_free_FUN_004728b0
//   XREF to: 004728b0 (UNCONDITIONAL_CALL)
// 004727cf: MOV EDX,dword ptr [EBX + 0x1cc0]
// 004727d5: IMUL EDX,dword ptr [EBX + 0x1cc4]
// 004727dc: ADD ESP,0x4
// 004727df: PUSH 0x6b
// 004727e1: ADD EDX,EDX
// 004727e3: PUSH 0x61ee4b
//   XREF to: 0061ee4b (DATA)
// 004727e8: ADD EDX,0x210
// 004727ee: PUSH EDX
// 004727ef: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 004727f4: ADD ESP,0xc
// 004727f7: MOV dword ptr [EBX + 0x2f98],EAX
// 004727fd: TEST EAX,EAX
// 004727ff: JZ 0x0047287a
//   XREF to: 0047287a (CONDITIONAL_JUMP)
// 00472801: MOV EAX,dword ptr [EBX + 0x2f98]
//   Label: LAB_00472801
// 00472807: ADD EAX,0x10
// 0047280a: AND AL,0xf0
// 0047280c: MOV dword ptr [EBX + 0x2f94],EAX
// 00472812: MOV EDX,dword ptr [EBX + 0x1cc0]
// 00472818: MOV EAX,dword ptr [EBX + 0x1cc4]
// 0047281e: IMUL EDX,EAX
// 00472821: MOV EAX,EDX
// 00472823: SAR EDX,0x1f
// 00472826: SHL EDX,0x3
// 00472829: SBB EAX,EDX
// 0047282b: SAR EAX,0x3
// 0047282e: PUSH 0x71
// 00472830: PUSH 0x61eea3
//   XREF to: 0061eea3 (DATA)
// 00472835: PUSH EAX
// 00472836: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 0047283b: FLD float ptr [EBX + 0x2fa8]
// 00472841: FMUL double ptr [0x0061eebb]
//   XREF to: 0061eebb (READ)
// 00472847: ADD ESP,0xc
// 0047284a: MOV dword ptr [EBX + 0x2fa0],EAX
// 00472850: PUSH 0x0
// 00472852: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00472857: PUSH 0x0
// 00472859: FISTP dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xc] (WRITE)
// 0047285d: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xc] (READ)
// 00472861: PUSH 0x0
// 00472863: MOV EDX,dword ptr [EAX*0x4 + 0x66ef9c]
//   XREF to: 0066ef9c (DATA)
// 0047286a: PUSH EDX
// 0047286b: PUSH EBX
// 0047286c: CALL core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770
//   XREF to: 00474770 (UNCONDITIONAL_CALL)
// 00472871: ADD ESP,0x14
// 00472874: ADD ESP,0x4
// 00472877: POP EBP
// 00472878: POP EBX
// 00472879: RET
// 0047287a: PUSH EDI
//   Label: LAB_0047287a
// 0047287b: MOV EDI,0x61ee5e
//   XREF to: 0061ee5e (DATA)
// 00472880: MOV EBP,0x6c
// 00472885: PUSH 0x61ee71
//   XREF to: 0061ee71 (DATA)
// 0047288a: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 00472890: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 00472896: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0047289b: ADD ESP,0x4
// 0047289e: POP EDI
// 0047289f: JMP 0x00472801
//   XREF to: 00472801 (UNCONDITIONAL_JUMP)
