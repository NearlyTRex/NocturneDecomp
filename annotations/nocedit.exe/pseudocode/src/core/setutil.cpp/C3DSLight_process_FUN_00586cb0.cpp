// Name: core_setutil.cpp_C3DSLight_process_FUN_00586cb0
// Address: 00586cb0
// Address Range: [[00586cb0, 00586e6e]]
// Convention: __cdecl
// Signature: void core_setutil.cpp_C3DSLight_process_FUN_00586cb0(C3DSLight * this_ptr, CDemonLight * light, int apply_filter_flag)
// Cross-references:
//   core_set.cpp_CDemonSet_process_FUN_0056f940 (0056f940) at 0056f9df [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_setutil_cpp_00649673
//   TerminatedCString s_C3DSLight_process_NULL_C_00649687
//   CGame* g_CGamePtr = 02d81a9c
//   CDemonSet* g_CDemonSetPtr = 03114278
//   int g_GlobalDeltaTimeInt
//   undefined4 g_CGameInstance.delta_time_float
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 DAT_0326f118
// Function calls:
//   core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl
core_setutil_cpp_C3DSLight_process_FUN_00586cb0
          (C3DSLight *this_ptr,CDemonLight *light,int apply_filter_flag)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000010;
  
  if (light == (CDemonLight *)0x0) {
    g_CurrentFilename = "..\\core\\setutil.cpp";
    g_CurrentLineNumber = 0x351;
    core_main_c_displayErrorAndQuit_FUN_00506f10("C3DSLight::process - NULL CDemonLight pointer!");
  }
  if (this_ptr->filter_count != 0) {
    if (0.0 < this_ptr->filter_durations[this_ptr->current_filter_frame]) {
      this_ptr->filter_frame_elapsed = g_CGamePtr->delta_time_float + this_ptr->filter_frame_elapsed
      ;
      if (this_ptr->filter_durations[this_ptr->current_filter_frame] <
          this_ptr->filter_frame_elapsed) {
        iVar3 = this_ptr->current_filter_frame + 1;
        this_ptr->filter_frame_elapsed =
             this_ptr->filter_frame_elapsed -
             this_ptr->filter_durations[this_ptr->current_filter_frame];
        this_ptr->current_filter_frame = iVar3;
        if (this_ptr->filter_count <= iVar3) {
          this_ptr->current_filter_frame = 0;
        }
      }
    }
    iVar2 = g_GlobalDeltaTimeInt;
    lVar1 = (longlong)g_GlobalDeltaTimeInt * (longlong)(this_ptr->filter_vel).x;
    iVar3 = (this_ptr->filter_vel).y;
    (this_ptr->filter_pos).x =
         (this_ptr->filter_pos).x + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar2 * (longlong)iVar3;
    iVar3 = (this_ptr->filter_pos).y +
            ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    (this_ptr->filter_pos).y = iVar3;
    if (in_stack_00000010 != 0) {
      core_dlight_cpp_CDemonLight_applyFilter_FUN_00474770
                (light,this_ptr->filters[this_ptr->current_filter_frame],
                 this_ptr->filter_indices[this_ptr->current_filter_frame],(this_ptr->filter_pos).x,
                 iVar3);
    }
  }
  if (this_ptr->on_time < 1.0) {
    this_ptr->cycle_elapsed = g_CGamePtr->delta_time_float + this_ptr->cycle_elapsed;
    if (this_ptr->cycle_time < this_ptr->cycle_elapsed) {
      this_ptr->cycle_elapsed = this_ptr->cycle_elapsed - this_ptr->cycle_time;
    }
    if (this_ptr->cycle_elapsed <= this_ptr->on_time) {
      light->light_enabled_flag = 1;
    }
    else {
      light->light_enabled_flag = 0;
    }
  }
  if (g_CDemonSetPtr->camera_enabled_flag != 0) {
    return;
  }
  light->light_enabled_flag = 0;
  return;
}


// Assembly code:
// 00586cb0: PUSH EBX
//   Label: core_setutil.cpp_C3DSLight_process_FUN_00586cb0
// 00586cb1: PUSH ESI
// 00586cb2: PUSH EDI
// 00586cb3: PUSH EBP
// 00586cb4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00586cb8: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00586cbc: TEST ESI,ESI
// 00586cbe: JZ 0x00586e30
//   XREF to: 00586e30 (CONDITIONAL_JUMP)
// 00586cc4: CMP dword ptr [EBX + 0x11ec],0x0
//   Label: LAB_00586cc4
// 00586ccb: JZ 0x00586db9
//   XREF to: 00586db9 (CONDITIONAL_JUMP)
// 00586cd1: MOV EAX,dword ptr [EBX + 0x1890]
// 00586cd7: FLD float ptr [EBX + EAX*0x4 + 0x16f4]
// 00586cde: FLDZ
// 00586ce0: FCOMPP
// 00586ce2: FNSTSW AX
// 00586ce4: SAHF
// 00586ce5: JNC 0x00586d4c
//   XREF to: 00586d4c (CONDITIONAL_JUMP)
// 00586ce7: MOV EDX,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 00586ced: LEA EAX,[EBX + 0x1894]
// 00586cf3: FLD float ptr [EDX + 0x264]
//   XREF to: 02d81d00 (READ)
// 00586cf9: FADD float ptr [EAX]
// 00586cfb: FSTP float ptr [EAX]
// 00586cfd: MOV EDX,dword ptr [EBX + 0x1890]
// 00586d03: SHL EDX,0x2
// 00586d06: ADD EDX,EBX
// 00586d08: FLD float ptr [EBX + 0x1894]
// 00586d0e: FCOMP float ptr [EDX + 0x16f4]
// 00586d14: FNSTSW AX
// 00586d16: SAHF
// 00586d17: JBE 0x00586d4c
//   XREF to: 00586d4c (CONDITIONAL_JUMP)
// 00586d19: FLD float ptr [EDX + 0x16f4]
// 00586d1f: MOV EBP,dword ptr [EBX + 0x1890]
// 00586d25: MOV EDX,dword ptr [EBX + 0x11ec]
// 00586d2b: FSUBR float ptr [EBX + 0x1894]
// 00586d31: INC EBP
// 00586d32: FSTP float ptr [EBX + 0x1894]
// 00586d38: MOV dword ptr [EBX + 0x1890],EBP
// 00586d3e: CMP EBP,EDX
// 00586d40: JL 0x00586d4c
//   XREF to: 00586d4c (CONDITIONAL_JUMP)
// 00586d42: MOV dword ptr [EBX + 0x1890],0x0
// 00586d4c: MOV EAX,[0x02cf6a80]
//   Label: LAB_00586d4c
//   XREF to: 02cf6a80 (READ)
// 00586d51: MOV EDX,dword ptr [EBX + 0x17f8]
// 00586d57: IMUL EDX
// 00586d59: SHRD EAX,EDX,0x10
// 00586d5d: MOV ECX,dword ptr [EBX + 0x1800]
// 00586d63: MOV EDX,dword ptr [EBX + 0x17fc]
// 00586d69: ADD ECX,EAX
// 00586d6b: MOV EAX,[0x02cf6a80]
//   XREF to: 02cf6a80 (READ)
// 00586d70: MOV dword ptr [EBX + 0x1800],ECX
// 00586d76: IMUL EDX
// 00586d78: SHRD EAX,EDX,0x10
// 00586d7c: MOV EDI,dword ptr [EBX + 0x1804]
// 00586d82: ADD EDI,EAX
// 00586d84: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00586d88: MOV dword ptr [EBX + 0x1804],EDI
// 00586d8e: TEST EBP,EBP
// 00586d90: JZ 0x00586db9
//   XREF to: 00586db9 (CONDITIONAL_JUMP)
// 00586d92: PUSH EDI
// 00586d93: MOV EDX,dword ptr [EBX + 0x1800]
// 00586d99: MOV EAX,dword ptr [EBX + 0x1890]
// 00586d9f: PUSH EDX
// 00586da0: MOV ECX,dword ptr [EBX + EAX*0x4 + 0x1774]
// 00586da7: PUSH ECX
// 00586da8: MOV EDI,dword ptr [EBX + EAX*0x4 + 0x1810]
// 00586daf: PUSH EDI
// 00586db0: PUSH ESI
// 00586db1: CALL core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770
//   XREF to: 00474770 (UNCONDITIONAL_CALL)
// 00586db6: ADD ESP,0x14
// 00586db9: FLD float ptr [EBX + 0x11e0]
//   Label: LAB_00586db9
// 00586dbf: FLD1
// 00586dc1: FCOMPP
// 00586dc3: FNSTSW AX
// 00586dc5: SAHF
// 00586dc6: JBE 0x00586e1c
//   XREF to: 00586e1c (CONDITIONAL_JUMP)
// 00586dc8: MOV EDX,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 00586dce: LEA EAX,[EBX + 0x11e8]
// 00586dd4: FLD float ptr [EDX + 0x264]
//   XREF to: 02d81d00 (READ)
// 00586dda: FADD float ptr [EAX]
// 00586ddc: FSTP float ptr [EAX]
// 00586dde: FLD float ptr [EBX + 0x11e8]
// 00586de4: FCOMP float ptr [EBX + 0x11e4]
// 00586dea: FNSTSW AX
// 00586dec: SAHF
// 00586ded: JBE 0x00586e01
//   XREF to: 00586e01 (CONDITIONAL_JUMP)
// 00586def: FLD float ptr [EBX + 0x11e4]
// 00586df5: FSUBR float ptr [EBX + 0x11e8]
// 00586dfb: FSTP float ptr [EBX + 0x11e8]
// 00586e01: FLD float ptr [EBX + 0x11e8]
//   Label: LAB_00586e01
// 00586e07: FCOMP float ptr [EBX + 0x11e0]
// 00586e0d: FNSTSW AX
// 00586e0f: SAHF
// 00586e10: JBE 0x00586e58
//   XREF to: 00586e58 (CONDITIONAL_JUMP)
// 00586e12: MOV dword ptr [ESI + 0x1cb4],0x0
// 00586e1c: MOV EAX,[0x006810c8]
//   Label: LAB_00586e1c
//   XREF to: 006810c8 (READ)
// 00586e21: MOV EAX,dword ptr [EAX + 0x15aea0]
//   XREF to: 0326f118 (READ)
// 00586e27: TEST EAX,EAX
// 00586e29: JZ 0x00586e64
//   XREF to: 00586e64 (CONDITIONAL_JUMP)
// 00586e2b: POP EBP
// 00586e2c: POP EDI
// 00586e2d: POP ESI
// 00586e2e: POP EBX
// 00586e2f: RET
// 00586e30: MOV EDX,0x649673
//   Label: LAB_00586e30
//   XREF to: 00649673 (PARAM)
// 00586e35: MOV ECX,0x351
// 00586e3a: PUSH 0x649687
//   XREF to: 00649687 (DATA)
// 00586e3f: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00586e45: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00586e4b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00586e50: ADD ESP,0x4
// 00586e53: JMP 0x00586cc4
//   XREF to: 00586cc4 (UNCONDITIONAL_JUMP)
// 00586e58: MOV dword ptr [ESI + 0x1cb4],0x1
//   Label: LAB_00586e58
// 00586e62: JMP 0x00586e1c
//   XREF to: 00586e1c (UNCONDITIONAL_JUMP)
// 00586e64: MOV dword ptr [ESI + 0x1cb4],EAX
//   Label: LAB_00586e64
// 00586e6a: POP EBP
// 00586e6b: POP EDI
// 00586e6c: POP ESI
// 00586e6d: POP EBX
// 00586e6e: RET
