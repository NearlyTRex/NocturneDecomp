// Name: core_dcamera.cpp_loadCameraFog_FUN_00453e50
// Address: 00453e50
// Address Range: [[00453e50, 00453f07]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_loadCameraFog_FUN_00453e50(SFog * fog, FILE * file_handle, int file_version)
// Cross-references:
//   core_set.cpp_CDemonSet_load_FUN_00569410 (00569410) at 00569e97 [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSCamera_load_FUN_00585420 (00585420) at 00585602 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_d_d_d_0061a472
//   TerminatedCString s_f_f_f_0061a47c
//   TerminatedCString s_f_f_0061a486
//   TerminatedCString s_f_0061a48d
// Function calls:
//   crt_stdio.c_fgets_FUN_005fefd0
//   crt_stdio.c_fscanf_FUN_005fe7c0

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_loadCameraFog_FUN_00453e50(SFog *fog,FILE *file_handle,int file_version)

{
  BADSPACEBASE *in_ESP;
  int in_stack_00000020;
  
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffef8,0xff,file_handle);
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d,%d,%d\n",fog,&(fog->color_index).g);
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xffffff00,0xff,file_handle);
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f,%f,%f\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f,%f\n");
  if (in_stack_00000020 < 0x1a) {
    fog->reserved = 50.0;
    return;
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f\n");
  return;
}


// Assembly code:
// 00453e50: PUSH EBX
//   Label: core_dcamera.cpp_loadCameraFog_FUN_00453e50
// 00453e51: PUSH ESI
// 00453e52: SUB ESP,0x100
// 00453e58: MOV EBX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[0x4] (READ)
// 00453e5f: MOV ESI,dword ptr [ESP + 0x110]
//   XREF to: Stack[0x8] (READ)
// 00453e66: PUSH ESI
// 00453e67: PUSH 0xff
// 00453e6c: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x108] (DATA)
// 00453e70: PUSH EAX
// 00453e71: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 00453e76: ADD ESP,0xc
// 00453e79: LEA EAX,[EBX + 0x8]
// 00453e7c: PUSH EAX
// 00453e7d: LEA EAX,[EBX + 0x4]
// 00453e80: PUSH EAX
// 00453e81: PUSH EBX
// 00453e82: PUSH 0x61a472
//   XREF to: 0061a472 (DATA)
// 00453e87: PUSH ESI
// 00453e88: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00453e8d: ADD ESP,0x14
// 00453e90: PUSH ESI
// 00453e91: PUSH 0xff
// 00453e96: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x108] (DATA)
// 00453e9a: PUSH EAX
// 00453e9b: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 00453ea0: ADD ESP,0xc
// 00453ea3: LEA EAX,[EBX + 0x14]
// 00453ea6: PUSH EAX
// 00453ea7: LEA EAX,[EBX + 0x10]
// 00453eaa: PUSH EAX
// 00453eab: LEA EAX,[EBX + 0xc]
// 00453eae: PUSH EAX
// 00453eaf: PUSH 0x61a47c
//   XREF to: 0061a47c (DATA)
// 00453eb4: PUSH ESI
// 00453eb5: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00453eba: ADD ESP,0x14
// 00453ebd: LEA EAX,[EBX + 0x1c]
// 00453ec0: PUSH EAX
// 00453ec1: LEA EAX,[EBX + 0x18]
// 00453ec4: PUSH EAX
// 00453ec5: PUSH 0x61a486
//   XREF to: 0061a486 (DATA)
// 00453eca: PUSH ESI
// 00453ecb: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00453ed0: ADD ESP,0x10
// 00453ed3: CMP dword ptr [ESP + 0x114],0x1a
//   XREF to: Stack[0xc] (READ)
// 00453edb: JGE 0x00453eed
//   XREF to: 00453eed (CONDITIONAL_JUMP)
// 00453edd: MOV dword ptr [EBX + 0x20],0x42480000
// 00453ee4: ADD ESP,0x100
// 00453eea: POP ESI
// 00453eeb: POP EBX
// 00453eec: RET
// 00453eed: ADD EBX,0x20
//   Label: LAB_00453eed
// 00453ef0: PUSH EBX
// 00453ef1: PUSH 0x61a48d
//   XREF to: 0061a48d (DATA)
// 00453ef6: PUSH ESI
// 00453ef7: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00453efc: ADD ESP,0xc
// 00453eff: ADD ESP,0x100
// 00453f05: POP ESI
// 00453f06: POP EBX
// 00453f07: RET
