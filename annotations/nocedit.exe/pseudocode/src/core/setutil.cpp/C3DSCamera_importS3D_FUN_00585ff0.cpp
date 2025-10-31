// Name: core_setutil.cpp_C3DSCamera_importS3D_FUN_00585ff0
// Address: 00585ff0
// Address Range: [[00585ff0, 00586149]]
// Convention: __cdecl
// Signature: void core_setutil.cpp_C3DSCamera_importS3D_FUN_00585ff0(C3DSCamera * this_ptr, FILE * file_handle)
// Cross-references:
//   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 (00578d80) at 005791eb [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 (0057e7c0) at 0057f796 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_f_f_f_f_f_f_f_0064944f
//   TerminatedCString s_core_setutil_cpp_0064946d
//   TerminatedCString s_File_is_corrupt_in_C3DSC_00649481
//   TerminatedCString s_f_f_f_006494aa
//   TerminatedCString s_f_f_f_006494b4
//   TerminatedCString s_f_f_f_006494be
//   TerminatedCString s_f_f_f_006494c8
//   double DOUBLE_006494d3 = 0.5
//   double DOUBLE_006494db = 18
//   double DOUBLE_006494e3 = 11
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_setutil.cpp_C3DSCamera_reset_FUN_005853b0
//   crt_stdio.c_fscanf_FUN_005fe7c0

#include "nocturne.h"

void __cdecl
core_setutil_cpp_C3DSCamera_importS3D_FUN_00585ff0(C3DSCamera *this_ptr,FILE *file_handle)

{
  C3DSCamera *pCVar1;
  FILE *file;
  int iVar2;
  BADSPACEBASE *in_ESP;
  float10 fVar3;
  
  file = file_handle;
  pCVar1 = this_ptr;
  core_setutil_cpp_C3DSCamera_reset_FUN_005853b0(this_ptr);
  iVar2 = crt_stdio_c_fscanf_FUN_005fe7c0
                    (file,"\"%[^\"]\",%f,%f,%f,%f,%f,%f,%f\n",pCVar1,&pCVar1->position,&(pCVar1->position).y,
                     &(pCVar1->position).z,&pCVar1->orientation,&(pCVar1->orientation).z,
                     &(pCVar1->orientation).y,&pCVar1->projection_scale);
  if (iVar2 != 8) {
    g_CurrentFilename = "..\\core\\setutil.cpp";
    g_CurrentLineNumber = 0x1d3;
    core_main_c_displayErrorAndQuit_FUN_00506f10("File is corrupt in C3DSCamera::importS3D");
  }
  fVar3 = (float10)fptan((float10)pCVar1->projection_scale * (float10)DOUBLE_006494d3);
  pCVar1->projection_scale = (float)((float10)DOUBLE_006494db / fVar3);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (file,"%f,%f,%f\n",&pCVar1->rotation_matrix,(pCVar1->rotation_matrix).m + 1,
             (pCVar1->rotation_matrix).m + 2);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (file,"%f,%f,%f\n",&(pCVar1->rotation_matrix).m[0].y,
             &(pCVar1->rotation_matrix).m[1].y,&(pCVar1->rotation_matrix).m[2].y);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (file,"%f,%f,%f\n",&(pCVar1->rotation_matrix).m[0].z,
             &(pCVar1->rotation_matrix).m[1].z,&(pCVar1->rotation_matrix).m[2].z);
  crt_stdio_c_fscanf_FUN_005fe7c0(file,"%f,%f,%f\n",&stack0x00000000,&this_ptr,&file_handle);
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            (&pCVar1->rotation_matrix,&pCVar1->orientation);
  if ((float)DOUBLE_006494e3 < pCVar1->projection_scale) {
    return;
  }
  pCVar1->is_panning = 0;
  return;
}


// Assembly code:
// 00585ff0: PUSH EBX
//   Label: core_setutil.cpp_C3DSCamera_importS3D_FUN_00585ff0
// 00585ff1: PUSH ESI
// 00585ff2: PUSH EDI
// 00585ff3: SUB ESP,0xc
// 00585ff6: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00585ffa: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 00585ffe: PUSH EBX
// 00585fff: CALL core_setutil.cpp_C3DSCamera_reset_FUN_005853b0
//   XREF to: 005853b0 (UNCONDITIONAL_CALL)
// 00586004: ADD ESP,0x4
// 00586007: LEA EAX,[EBX + 0x144]
// 0058600d: PUSH EAX
// 0058600e: LEA EAX,[EBX + 0x110]
// 00586014: PUSH EAX
// 00586015: LEA EAX,[EBX + 0x114]
// 0058601b: PUSH EAX
// 0058601c: LEA EAX,[EBX + 0x10c]
// 00586022: PUSH EAX
// 00586023: LEA EAX,[EBX + 0x108]
// 00586029: PUSH EAX
// 0058602a: LEA EAX,[EBX + 0x104]
// 00586030: PUSH EAX
// 00586031: LEA EAX,[EBX + 0x100]
// 00586037: PUSH EAX
// 00586038: PUSH EBX
// 00586039: PUSH 0x64944f
//   XREF to: 0064944f (DATA)
// 0058603e: PUSH ESI
// 0058603f: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00586044: ADD ESP,0x28
// 00586047: CMP EAX,0x8
// 0058604a: JZ 0x0058606f
//   XREF to: 0058606f (CONDITIONAL_JUMP)
// 0058604c: MOV EDX,0x64946d
//   XREF to: 0064946d (PARAM)
// 00586051: MOV ECX,0x1d3
// 00586056: PUSH 0x649481
//   XREF to: 00649481 (DATA)
// 0058605b: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00586061: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00586067: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0058606c: ADD ESP,0x4
// 0058606f: FLD float ptr [EBX + 0x144]
//   Label: LAB_0058606f
// 00586075: FMUL double ptr [0x006494d3]
//   XREF to: 006494d3 (READ)
// 0058607b: FPTAN
// 0058607d: FSTP ST0
// 0058607f: FDIVR double ptr [0x006494db]
//   XREF to: 006494db (READ)
// 00586085: LEA EAX,[EBX + 0x130]
// 0058608b: PUSH EAX
// 0058608c: LEA EAX,[EBX + 0x124]
// 00586092: PUSH EAX
// 00586093: LEA EDI,[EBX + 0x118]
// 00586099: PUSH EDI
// 0058609a: PUSH 0x6494aa
//   XREF to: 006494aa (DATA)
// 0058609f: PUSH ESI
// 005860a0: FSTP float ptr [EBX + 0x144]
// 005860a6: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 005860ab: ADD ESP,0x14
// 005860ae: LEA EAX,[EBX + 0x134]
// 005860b4: PUSH EAX
// 005860b5: LEA EAX,[EBX + 0x128]
// 005860bb: PUSH EAX
// 005860bc: LEA EAX,[EBX + 0x11c]
// 005860c2: PUSH EAX
// 005860c3: PUSH 0x6494b4
//   XREF to: 006494b4 (DATA)
// 005860c8: PUSH ESI
// 005860c9: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 005860ce: ADD ESP,0x14
// 005860d1: LEA EAX,[EBX + 0x138]
// 005860d7: PUSH EAX
// 005860d8: LEA EAX,[EBX + 0x12c]
// 005860de: PUSH EAX
// 005860df: LEA EAX,[EBX + 0x120]
// 005860e5: PUSH EAX
// 005860e6: PUSH 0x6494be
//   XREF to: 006494be (DATA)
// 005860eb: PUSH ESI
// 005860ec: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 005860f1: ADD ESP,0x14
// 005860f4: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x10] (DATA)
// 005860f8: PUSH EAX
// 005860f9: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x14] (DATA)
// 005860fd: PUSH EAX
// 005860fe: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x18] (DATA)
// 00586102: PUSH EAX
// 00586103: PUSH 0x6494c8
//   XREF to: 006494c8 (DATA)
// 00586108: PUSH ESI
// 00586109: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0058610e: ADD ESP,0x14
// 00586111: LEA EAX,[EBX + 0x10c]
// 00586117: PUSH EAX
// 00586118: PUSH EDI
// 00586119: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 0058611e: FLD float ptr [EBX + 0x144]
// 00586124: ADD ESP,0x8
// 00586127: FCOMP double ptr [0x006494e3]
//   XREF to: 006494e3 (READ)
// 0058612d: FNSTSW AX
// 0058612f: SAHF
// 00586130: JBE 0x00586139
//   XREF to: 00586139 (CONDITIONAL_JUMP)
// 00586132: ADD ESP,0xc
// 00586135: POP EDI
// 00586136: POP ESI
// 00586137: POP EBX
// 00586138: RET
// 00586139: MOV dword ptr [EBX + 0x140],0x0
//   Label: LAB_00586139
// 00586143: ADD ESP,0xc
// 00586146: POP EDI
// 00586147: POP ESI
// 00586148: POP EBX
// 00586149: RET
