// Name: core_dcamera.cpp_saveCameraFog_FUN_00453f10
// Address: 00453f10
// Address Range: [[00453f10, 00453fb3]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_saveCameraFog_FUN_00453f10(SFog * fog, FILE * file_handle)
// Cross-references:
//   core_setedit.cpp_CDemonSet_save_FUN_0057a2a0 (0057a2a0) at 0057a35d [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSCamera_save_FUN_00585a40 (00585a40) at 00585c78 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_fogR_fogG_fogB_0061a491
//   TerminatedCString s_d_d_d_0061a4a1
//   TerminatedCString s_fogVel_0061a4ab
//   TerminatedCString s_f_f_f_0061a4b3
//   TerminatedCString s_f_f_0061a4bd
//   TerminatedCString s_f_0061a4c4
// Function calls:
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

void __cdecl core_dcamera_cpp_saveCameraFog_FUN_00453f10(SFog *fog,FILE *file_handle)

{
  double dVar1;
  double dVar2;
  
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"fogR,fogG,fogB\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d,%d,%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"fogVel\n");
  dVar1 = (double)(fog->scroll).z;
  dVar2 = (double)(fog->scroll).y;
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file_handle,"%f,%f,%f\n",(double)(fog->scroll).x,SUB84(dVar2,0),
             (int)((ulonglong)dVar2 >> 0x20),SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file_handle,"%f,%f\n",SUB84((double)fog->height_threshold,0),
             (int)((ulonglong)(double)fog->height_threshold >> 0x20),
             SUB84((double)fog->density_multiplier,0));
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%f\n");
  return;
}


// Assembly code:
// 00453f10: PUSH EBX
//   Label: core_dcamera.cpp_saveCameraFog_FUN_00453f10
// 00453f11: PUSH ESI
// 00453f12: PUSH EDI
// 00453f13: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00453f17: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00453f1b: PUSH 0x61a491
//   XREF to: 0061a491 (DATA)
// 00453f20: PUSH ESI
// 00453f21: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00453f26: ADD ESP,0x8
// 00453f29: MOV EDX,dword ptr [EBX + 0x8]
// 00453f2c: PUSH EDX
// 00453f2d: MOV ECX,dword ptr [EBX + 0x4]
// 00453f30: PUSH ECX
// 00453f31: MOV EDI,dword ptr [EBX]
// 00453f33: PUSH EDI
// 00453f34: PUSH 0x61a4a1
//   XREF to: 0061a4a1 (DATA)
// 00453f39: PUSH ESI
// 00453f3a: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00453f3f: ADD ESP,0x14
// 00453f42: PUSH 0x61a4ab
//   XREF to: 0061a4ab (DATA)
// 00453f47: PUSH ESI
// 00453f48: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00453f4d: ADD ESP,0x8
// 00453f50: SUB ESP,0x8
// 00453f53: FLD float ptr [EBX + 0x14]
// 00453f56: FSTP double ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00453f59: SUB ESP,0x8
// 00453f5c: FLD float ptr [EBX + 0x10]
// 00453f5f: FSTP double ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 00453f62: SUB ESP,0x8
// 00453f65: FLD float ptr [EBX + 0xc]
// 00453f68: FSTP double ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 00453f6b: PUSH 0x61a4b3
//   XREF to: 0061a4b3 (DATA)
// 00453f70: PUSH ESI
// 00453f71: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00453f76: ADD ESP,0x20
// 00453f79: SUB ESP,0x8
// 00453f7c: FLD float ptr [EBX + 0x1c]
// 00453f7f: FSTP double ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00453f82: SUB ESP,0x8
// 00453f85: FLD float ptr [EBX + 0x18]
// 00453f88: FSTP double ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 00453f8b: PUSH 0x61a4bd
//   XREF to: 0061a4bd (DATA)
// 00453f90: PUSH ESI
// 00453f91: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00453f96: ADD ESP,0x18
// 00453f99: SUB ESP,0x8
// 00453f9c: FLD float ptr [EBX + 0x20]
// 00453f9f: FSTP double ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00453fa2: PUSH 0x61a4c4
//   XREF to: 0061a4c4 (DATA)
// 00453fa7: PUSH ESI
// 00453fa8: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00453fad: ADD ESP,0x10
// 00453fb0: POP EDI
// 00453fb1: POP ESI
// 00453fb2: POP EBX
// 00453fb3: RET
