// Name: core_setutil.cpp_C3DSCamera_save_FUN_00585a40
// Address: 00585a40
// Address Range: [[00585a40, 00585c84]]
// Convention: __cdecl
// Signature: void core_setutil.cpp_C3DSCamera_save_FUN_00585a40(C3DSCamera * this_ptr, FILE * file_handle)
// Cross-references:
//   core_setedit.cpp_CDemonSet_save_FUN_0057a2a0 (0057a2a0) at 0057a512 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_camera_name_00649353
//   TerminatedCString s_s_0064937c
//   TerminatedCString s_pos_00649380
//   TerminatedCString s_f_f_f_00649385
//   TerminatedCString s_orient_0064938f
//   TerminatedCString s_f_f_f_00649397
//   TerminatedCString s_fov_006493a1
//   TerminatedCString s_f_006493a6
//   TerminatedCString s_vmat_006493aa
//   TerminatedCString s_f_f_f_006493b0
//   TerminatedCString s_f_f_f_006493ba
//   TerminatedCString s_f_f_f_006493c4
//   TerminatedCString s_d_006493ce
//   TerminatedCString s_box_min_max_006493d2
//   TerminatedCString s_g_g_g_006493e0
//   TerminatedCString s_g_g_g_006493ea
//   TerminatedCString s_reverbPreset_006493f4
//   TerminatedCString s_d_00649402
// Function calls:
//   core_dcamera.cpp_saveCameraFog_FUN_00453f10
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSCamera_save_FUN_00585a40(C3DSCamera *this_ptr,FILE *file_handle)

{
  undefined4 uStack0000002c;
  int iStack00000038;
  
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"-- camera name ------------------------\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"pos\n");
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file_handle,"%f,%f,%f\n",(double)(this_ptr->position).x,
             (double)(this_ptr->position).y,(double)(this_ptr->position).z);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"orient\n");
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file_handle,"%f,%f,%f\n",(double)(this_ptr->orientation).x,
             (double)(this_ptr->orientation).z);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"fov\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%f\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"vmat\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%f,%f,%f\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%f,%f,%f\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%f,%f,%f\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n");
  if (this_ptr->fog_enabled == 0) {
    core_dcamera_cpp_saveCameraFog_FUN_00453f10(&this_ptr->fog,file_handle);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"box min, max\n");
  uStack0000002c = (undefined4)((ulonglong)(double)(this_ptr->box_min).z >> 0x20);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%g,%g,%g\n");
  uStack0000002c = SUB84((double)(this_ptr->box_max).z,0);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%g,%g,%g\n");
  uStack0000002c = 0x585c54;
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"reverbPreset\n");
  iStack00000038 = this_ptr->reverb_preset;
  uStack0000002c = 0x585c69;
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d\n");
  return;
}


// Assembly code:
// 00585a40: PUSH EBX
//   Label: core_setutil.cpp_C3DSCamera_save_FUN_00585a40
// 00585a41: PUSH ESI
// 00585a42: PUSH EDI
// 00585a43: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00585a47: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00585a4b: PUSH 0x649353
//   XREF to: 00649353 (DATA)
// 00585a50: PUSH ESI
// 00585a51: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00585a56: ADD ESP,0x8
// 00585a59: PUSH EBX
// 00585a5a: PUSH 0x64937c
//   XREF to: 0064937c (DATA)
// 00585a5f: PUSH ESI
// 00585a60: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00585a65: ADD ESP,0xc
// 00585a68: PUSH 0x649380
//   XREF to: 00649380 (DATA)
// 00585a6d: PUSH ESI
// 00585a6e: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00585a73: ADD ESP,0x8
// 00585a76: SUB ESP,0x8
// 00585a79: FLD float ptr [EBX + 0x108]
// 00585a7f: FSTP double ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00585a82: SUB ESP,0x8
// 00585a85: FLD float ptr [EBX + 0x104]
// 00585a8b: FSTP double ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 00585a8e: SUB ESP,0x8
// 00585a91: FLD float ptr [EBX + 0x100]
// 00585a97: FSTP double ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 00585a9a: PUSH 0x649385
//   XREF to: 00649385 (DATA)
// 00585a9f: PUSH ESI
// 00585aa0: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00585aa5: ADD ESP,0x20
// 00585aa8: PUSH 0x64938f
//   XREF to: 0064938f (DATA)
// 00585aad: PUSH ESI
// 00585aae: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00585ab3: ADD ESP,0x8
// 00585ab6: SUB ESP,0x8
// 00585ab9: FLD float ptr [EBX + 0x110]
// 00585abf: FSTP double ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00585ac2: SUB ESP,0x8
// 00585ac5: FLD float ptr [EBX + 0x114]
// 00585acb: FSTP double ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 00585ace: SUB ESP,0x8
// 00585ad1: FLD float ptr [EBX + 0x10c]
// 00585ad7: FSTP double ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 00585ada: PUSH 0x649397
//   XREF to: 00649397 (DATA)
// 00585adf: PUSH ESI
// 00585ae0: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00585ae5: ADD ESP,0x20
// 00585ae8: PUSH 0x6493a1
//   XREF to: 006493a1 (DATA)
// 00585aed: PUSH ESI
// 00585aee: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00585af3: ADD ESP,0x8
// 00585af6: SUB ESP,0x8
// 00585af9: FLD float ptr [EBX + 0x144]
// 00585aff: FSTP double ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00585b02: PUSH 0x6493a6
//   XREF to: 006493a6 (DATA)
// 00585b07: PUSH ESI
// 00585b08: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00585b0d: ADD ESP,0x10
// 00585b10: PUSH 0x6493aa
//   XREF to: 006493aa (DATA)
// 00585b15: PUSH ESI
// 00585b16: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00585b1b: ADD ESP,0x8
// 00585b1e: SUB ESP,0x8
// 00585b21: FLD float ptr [EBX + 0x120]
// 00585b27: FSTP double ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00585b2a: SUB ESP,0x8
// 00585b2d: FLD float ptr [EBX + 0x11c]
// 00585b33: FSTP double ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 00585b36: SUB ESP,0x8
// 00585b39: FLD float ptr [EBX + 0x118]
// 00585b3f: FSTP double ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 00585b42: PUSH 0x6493b0
//   XREF to: 006493b0 (DATA)
// 00585b47: PUSH ESI
// 00585b48: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00585b4d: ADD ESP,0x20
// 00585b50: SUB ESP,0x8
// 00585b53: FLD float ptr [EBX + 0x12c]
// 00585b59: FSTP double ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00585b5c: SUB ESP,0x8
// 00585b5f: FLD float ptr [EBX + 0x128]
// 00585b65: FSTP double ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 00585b68: SUB ESP,0x8
// 00585b6b: FLD float ptr [EBX + 0x124]
// 00585b71: FSTP double ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 00585b74: PUSH 0x6493ba
//   XREF to: 006493ba (DATA)
// 00585b79: PUSH ESI
// 00585b7a: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00585b7f: ADD ESP,0x20
// 00585b82: SUB ESP,0x8
// 00585b85: FLD float ptr [EBX + 0x138]
// 00585b8b: FSTP double ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00585b8e: SUB ESP,0x8
// 00585b91: FLD float ptr [EBX + 0x134]
// 00585b97: FSTP double ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 00585b9a: SUB ESP,0x8
// 00585b9d: FLD float ptr [EBX + 0x130]
// 00585ba3: FSTP double ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 00585ba6: PUSH 0x6493c4
//   XREF to: 006493c4 (DATA)
// 00585bab: PUSH ESI
// 00585bac: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00585bb1: ADD ESP,0x20
// 00585bb4: MOV EDX,dword ptr [EBX + 0x150]
// 00585bba: PUSH EDX
// 00585bbb: PUSH 0x6493ce
//   XREF to: 006493ce (DATA)
// 00585bc0: PUSH ESI
// 00585bc1: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00585bc6: MOV ECX,dword ptr [EBX + 0x150]
// 00585bcc: ADD ESP,0xc
// 00585bcf: TEST ECX,ECX
// 00585bd1: JZ 0x00585c70
//   XREF to: 00585c70 (CONDITIONAL_JUMP)
// 00585bd7: PUSH 0x6493d2
//   Label: LAB_00585bd7
//   XREF to: 006493d2 (DATA)
// 00585bdc: PUSH ESI
// 00585bdd: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00585be2: ADD ESP,0x8
// 00585be5: SUB ESP,0x8
// 00585be8: FLD float ptr [EBX + 0x184]
// 00585bee: FSTP double ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00585bf1: SUB ESP,0x8
// 00585bf4: FLD float ptr [EBX + 0x180]
// 00585bfa: FSTP double ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 00585bfd: SUB ESP,0x8
// 00585c00: FLD float ptr [EBX + 0x17c]
// 00585c06: FSTP double ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 00585c09: PUSH 0x6493e0
//   XREF to: 006493e0 (DATA)
// 00585c0e: PUSH ESI
// 00585c0f: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00585c14: ADD ESP,0x20
// 00585c17: SUB ESP,0x8
// 00585c1a: FLD float ptr [EBX + 0x190]
// 00585c20: FSTP double ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00585c23: SUB ESP,0x8
// 00585c26: FLD float ptr [EBX + 0x18c]
// 00585c2c: FSTP double ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 00585c2f: SUB ESP,0x8
// 00585c32: FLD float ptr [EBX + 0x188]
// 00585c38: FSTP double ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 00585c3b: PUSH 0x6493ea
//   XREF to: 006493ea (DATA)
// 00585c40: PUSH ESI
// 00585c41: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00585c46: ADD ESP,0x20
// 00585c49: PUSH 0x6493f4
//   XREF to: 006493f4 (DATA)
// 00585c4e: PUSH ESI
// 00585c4f: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00585c54: ADD ESP,0x8
// 00585c57: MOV EDI,dword ptr [EBX + 0x178]
// 00585c5d: PUSH EDI
// 00585c5e: PUSH 0x649402
//   XREF to: 00649402 (DATA)
// 00585c63: PUSH ESI
// 00585c64: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00585c69: ADD ESP,0xc
// 00585c6c: POP EDI
// 00585c6d: POP ESI
// 00585c6e: POP EBX
// 00585c6f: RET
// 00585c70: PUSH ESI
//   Label: LAB_00585c70
// 00585c71: LEA EAX,[EBX + 0x154]
// 00585c77: PUSH EAX
// 00585c78: CALL core_dcamera.cpp_saveCameraFog_FUN_00453f10
//   XREF to: 00453f10 (UNCONDITIONAL_CALL)
// 00585c7d: ADD ESP,0x8
// 00585c80: JMP 0x00585bd7
//   XREF to: 00585bd7 (UNCONDITIONAL_JUMP)
