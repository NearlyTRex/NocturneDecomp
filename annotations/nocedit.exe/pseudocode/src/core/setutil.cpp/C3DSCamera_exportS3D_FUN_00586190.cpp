// Name: core_setutil.cpp_C3DSCamera_exportS3D_FUN_00586190
// Address: 00586190
// Address Range: [[00586190, 005862ea]]
// Convention: __cdecl
// Signature: int core_setutil.cpp_C3DSCamera_exportS3D_FUN_00586190(C3DSCamera * this_ptr, FILE * file_handle)
// Cross-references:
//   core_setedit.cpp_CDemonSet_ExportSomething_FUN_0057a0c0 (0057a0c0) at 0057a1ed [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_s_g_g_g_g_g_g_g_006494eb
//   TerminatedCString s_g_g_g_00649506
//   TerminatedCString s_g_g_g_00649510
//   TerminatedCString s_g_g_g_0064951a
//   TerminatedCString s_g_g_g_00649524
//   double g_S3DProjectionScale = 18
//   double DOUBLE_0064953b = 2
// Function calls:
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

int __cdecl
core_setutil_cpp_C3DSCamera_exportS3D_FUN_00586190(C3DSCamera *this_ptr,FILE *file_handle)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  
  if (this_ptr->is_panning != 0) {
    this_ptr->projection_scale = 10.5;
  }
  fpatan((float10)g_S3DProjectionScale / (float10)this_ptr->projection_scale,(float10)1);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"\"%s\",%g,%g,%g,%g,%g,%g,%g\n");
  dVar1 = (double)(this_ptr->rotation_matrix).m[2].x;
  dVar2 = (double)(this_ptr->rotation_matrix).m[1].x;
  dVar3 = (double)(this_ptr->rotation_matrix).m[0].x;
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file_handle,"%g,%g,%g\n",SUB84(dVar3,0),(int)((ulonglong)dVar3 >> 0x20),
             SUB84(dVar2,0),(int)((ulonglong)dVar2 >> 0x20),SUB84(dVar1,0),
             (int)((ulonglong)dVar1 >> 0x20));
  dVar1 = (double)(this_ptr->rotation_matrix).m[2].y;
  dVar2 = (double)(this_ptr->rotation_matrix).m[1].y;
  dVar3 = (double)(this_ptr->rotation_matrix).m[0].y;
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file_handle,"%g,%g,%g\n",SUB84(dVar3,0),(int)((ulonglong)dVar3 >> 0x20),
             SUB84(dVar2,0),(int)((ulonglong)dVar2 >> 0x20),SUB84(dVar1,0),
             (int)((ulonglong)dVar1 >> 0x20));
  dVar1 = (double)(this_ptr->rotation_matrix).m[1].z;
  dVar2 = (double)(this_ptr->rotation_matrix).m[0].z;
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file_handle,"%g,%g,%g\n",SUB84(dVar2,0),(int)((ulonglong)dVar2 >> 0x20),
             SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20),
             SUB84((double)(this_ptr->rotation_matrix).m[2].z,0));
  dVar1 = (double)(this_ptr->position).y;
  dVar2 = (double)(this_ptr->position).x;
  iVar4 = crt_stdio_c_fprintf_FUN_005fe6d0
                    (file_handle,"%g,%g,%g\n",SUB84(dVar2,0),(int)((ulonglong)dVar2 >> 0x20),
                     SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
  return iVar4;
}


// Assembly code:
// 00586190: PUSH EBX
//   Label: core_setutil.cpp_C3DSCamera_exportS3D_FUN_00586190
// 00586191: PUSH ESI
// 00586192: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00586196: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0058619a: CMP dword ptr [EBX + 0x140],0x0
// 005861a1: JZ 0x005861ad
//   XREF to: 005861ad (CONDITIONAL_JUMP)
// 005861a3: MOV dword ptr [EBX + 0x144],0x41280000
// 005861ad: FLD float ptr [EBX + 0x144]
//   Label: LAB_005861ad
// 005861b3: FDIVR double ptr [0x00649533]
//   XREF to: 00649533 (READ)
// 005861b9: FLD1
// 005861bb: FPATAN
// 005861bd: FMUL double ptr [0x0064953b]
//   XREF to: 0064953b (READ)
// 005861c3: SUB ESP,0x8
// 005861c6: FSTP double ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 005861c9: SUB ESP,0x8
// 005861cc: FLD float ptr [EBX + 0x110]
// 005861d2: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 005861d5: SUB ESP,0x8
// 005861d8: FLD float ptr [EBX + 0x114]
// 005861de: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 005861e1: SUB ESP,0x8
// 005861e4: FLD float ptr [EBX + 0x10c]
// 005861ea: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 005861ed: SUB ESP,0x8
// 005861f0: FLD float ptr [EBX + 0x108]
// 005861f6: FSTP double ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 005861f9: SUB ESP,0x8
// 005861fc: FLD float ptr [EBX + 0x104]
// 00586202: FSTP double ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 00586205: SUB ESP,0x8
// 00586208: FLD float ptr [EBX + 0x100]
// 0058620e: FSTP double ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 00586211: PUSH EBX
// 00586212: PUSH 0x6494eb
//   XREF to: 006494eb (DATA)
// 00586217: PUSH ESI
// 00586218: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058621d: ADD ESP,0x44
// 00586220: SUB ESP,0x8
// 00586223: FLD float ptr [EBX + 0x130]
// 00586229: FSTP double ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 0058622c: SUB ESP,0x8
// 0058622f: FLD float ptr [EBX + 0x124]
// 00586235: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00586238: SUB ESP,0x8
// 0058623b: FLD float ptr [EBX + 0x118]
// 00586241: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 00586244: PUSH 0x649506
//   XREF to: 00649506 (DATA)
// 00586249: PUSH ESI
// 0058624a: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058624f: ADD ESP,0x20
// 00586252: SUB ESP,0x8
// 00586255: FLD float ptr [EBX + 0x134]
// 0058625b: FSTP double ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 0058625e: SUB ESP,0x8
// 00586261: FLD float ptr [EBX + 0x128]
// 00586267: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0058626a: SUB ESP,0x8
// 0058626d: FLD float ptr [EBX + 0x11c]
// 00586273: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 00586276: PUSH 0x649510
//   XREF to: 00649510 (DATA)
// 0058627b: PUSH ESI
// 0058627c: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00586281: ADD ESP,0x20
// 00586284: SUB ESP,0x8
// 00586287: FLD float ptr [EBX + 0x138]
// 0058628d: FSTP double ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 00586290: SUB ESP,0x8
// 00586293: FLD float ptr [EBX + 0x12c]
// 00586299: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0058629c: SUB ESP,0x8
// 0058629f: FLD float ptr [EBX + 0x120]
// 005862a5: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 005862a8: PUSH 0x64951a
//   XREF to: 0064951a (DATA)
// 005862ad: PUSH ESI
// 005862ae: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005862b3: ADD ESP,0x20
// 005862b6: SUB ESP,0x8
// 005862b9: FLD float ptr [EBX + 0x108]
// 005862bf: FSTP double ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 005862c2: SUB ESP,0x8
// 005862c5: FLD float ptr [EBX + 0x104]
// 005862cb: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 005862ce: SUB ESP,0x8
// 005862d1: FLD float ptr [EBX + 0x100]
// 005862d7: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 005862da: PUSH 0x649524
//   XREF to: 00649524 (DATA)
// 005862df: PUSH ESI
// 005862e0: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005862e5: ADD ESP,0x20
// 005862e8: POP ESI
// 005862e9: POP EBX
// 005862ea: RET
