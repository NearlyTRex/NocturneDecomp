// Name: core_setutil.cpp_C3DSLight_importS3D_FUN_00587710
// Address: 00587710
// Address Range: [[00587710, 00587842]]
// Convention: __cdecl
// Signature: void core_setutil.cpp_C3DSLight_importS3D_FUN_00587710(C3DSLight * this_ptr, FILE * file_handle)
// Cross-references:
//   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 (00578d80) at 00579ced [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 (0057e7c0) at 0057f739 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_d_f_f_f_f_f_f_0064999f
//   TerminatedCString s_core_setutil_cpp_006499bd
//   TerminatedCString s_Can_t_parse_light_from_S_006499d1
//   TerminatedCString s_f_f_f_006499f2
//   TerminatedCString s_f_f_006499fd
//   TerminatedCString s_core_setutil_cpp_00649a05
//   TerminatedCString s_Unknown_light_type_00649a19
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_setutil.cpp_C3DSLight_reset_FUN_005879b0
//   crt_stdio.c_fscanf_FUN_005fe7c0

#include "nocturne.h"

void __cdecl
core_setutil_cpp_C3DSLight_importS3D_FUN_00587710(C3DSLight *this_ptr,FILE *file_handle)

{
  int iVar1;
  
  core_setutil_cpp_C3DSLight_reset_FUN_005879b0(this_ptr);
  iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0
                    (file_handle,"\"%[^\"]\",%d,%f,%f,%f,%f,%f,%f ",this_ptr->name,this_ptr,&this_ptr->pos,
                     &(this_ptr->pos).y,&(this_ptr->pos).z,&this_ptr->color,&(this_ptr->color).g,
                     &(this_ptr->color).b);
  if (iVar1 != 8) goto LAB_00587796;
  do {
    if (this_ptr->light_type == 0) {
      iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0
                        (file_handle,",%f,%f,%f\n",",%f,%f,%f\n",&this_ptr->orient,
                         &(this_ptr->orient).z,&(this_ptr->orient).y);
      if (iVar1 == 3) {
        return;
      }
    }
    else {
      if (this_ptr->light_type != 1) {
        g_CurrentFilename = "..\\core\\setutil.cpp";
        g_CurrentLineNumber = 0x4a9;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Unknown light type!");
        return;
      }
      iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0
                        (file_handle,",%f,%f\n",",%f,%f\n",&this_ptr->atten_start,
                         &this_ptr->atten_end);
      if (iVar1 == 2) {
        if (this_ptr->atten_start < 0.0) {
          this_ptr->atten_start = 0.0;
        }
        if (0.0 <= this_ptr->atten_end) {
          return;
        }
        this_ptr->atten_end = 0.0;
        return;
      }
    }
LAB_00587796:
    g_CurrentFilename = "..\\core\\setutil.cpp";
    g_CurrentLineNumber = 0x49d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't parse light from S3D file.");
  } while( true );
}


// Assembly code:
// 00587710: PUSH EBX
//   Label: core_setutil.cpp_C3DSLight_importS3D_FUN_00587710
// 00587711: PUSH ESI
// 00587712: PUSH EDI
// 00587713: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00587717: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0058771b: PUSH EBX
// 0058771c: CALL core_setutil.cpp_C3DSLight_reset_FUN_005879b0
//   XREF to: 005879b0 (UNCONDITIONAL_CALL)
// 00587721: ADD ESP,0x4
// 00587724: LEA EAX,[EBX + 0x11cc]
// 0058772a: PUSH EAX
// 0058772b: LEA EAX,[EBX + 0x11c8]
// 00587731: PUSH EAX
// 00587732: LEA EAX,[EBX + 0x11c4]
// 00587738: PUSH EAX
// 00587739: LEA EAX,[EBX + 0x10c]
// 0058773f: PUSH EAX
// 00587740: LEA EAX,[EBX + 0x108]
// 00587746: PUSH EAX
// 00587747: LEA EAX,[EBX + 0x104]
// 0058774d: PUSH EAX
// 0058774e: PUSH EBX
// 0058774f: LEA EAX,[EBX + 0x4]
// 00587752: PUSH EAX
// 00587753: PUSH 0x64999f
//   XREF to: 0064999f (DATA)
// 00587758: PUSH ESI
// 00587759: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0058775e: ADD ESP,0x28
// 00587761: CMP EAX,0x8
// 00587764: JNZ 0x00587796
//   XREF to: 00587796 (CONDITIONAL_JUMP)
// 00587766: MOV EDI,dword ptr [EBX]
//   Label: LAB_00587766
// 00587768: TEST EDI,EDI
// 0058776a: JZ 0x005877bb
//   XREF to: 005877bb (CONDITIONAL_JUMP)
// 0058776c: CMP EDI,0x1
// 0058776f: JNZ 0x0058781d
//   XREF to: 0058781d (CONDITIONAL_JUMP)
// 00587775: LEA EAX,[EBX + 0x11d4]
// 0058777b: PUSH EAX
// 0058777c: LEA EAX,[EBX + 0x11d0]
// 00587782: PUSH EAX
// 00587783: PUSH 0x6499fd
//   XREF to: 006499fd (DATA)
// 00587788: PUSH ESI
// 00587789: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0058778e: ADD ESP,0x10
// 00587791: CMP EAX,0x2
// 00587794: JZ 0x005877e7
//   XREF to: 005877e7 (CONDITIONAL_JUMP)
// 00587796: MOV EDX,0x6499bd
//   Label: LAB_00587796
//   XREF to: 006499bd (PARAM)
// 0058779b: MOV ECX,0x49d
// 005877a0: PUSH 0x6499d1
//   XREF to: 006499d1 (DATA)
// 005877a5: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 005877ab: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 005877b1: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005877b6: ADD ESP,0x4
// 005877b9: JMP 0x00587766
//   XREF to: 00587766 (UNCONDITIONAL_JUMP)
// 005877bb: LEA EAX,[EBX + 0x114]
//   Label: LAB_005877bb
// 005877c1: PUSH EAX
// 005877c2: LEA EAX,[EBX + 0x118]
// 005877c8: PUSH EAX
// 005877c9: LEA EAX,[EBX + 0x110]
// 005877cf: PUSH EAX
// 005877d0: PUSH 0x6499f2
//   XREF to: 006499f2 (DATA)
// 005877d5: PUSH ESI
// 005877d6: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 005877db: ADD ESP,0x14
// 005877de: CMP EAX,0x3
// 005877e1: JNZ 0x00587796
//   XREF to: 00587796 (CONDITIONAL_JUMP)
// 005877e3: POP EDI
//   Label: LAB_005877e3
// 005877e4: POP ESI
// 005877e5: POP EBX
// 005877e6: RET
// 005877e7: FLD float ptr [EBX + 0x11d0]
//   Label: LAB_005877e7
// 005877ed: FLDZ
// 005877ef: FCOMPP
// 005877f1: FNSTSW AX
// 005877f3: SAHF
// 005877f4: JBE 0x00587800
//   XREF to: 00587800 (CONDITIONAL_JUMP)
// 005877f6: MOV dword ptr [EBX + 0x11d0],0x0
// 00587800: FLD float ptr [EBX + 0x11d4]
//   Label: LAB_00587800
// 00587806: FLDZ
// 00587808: FCOMPP
// 0058780a: FNSTSW AX
// 0058780c: SAHF
// 0058780d: JBE 0x005877e3
//   XREF to: 005877e3 (CONDITIONAL_JUMP)
// 0058780f: MOV dword ptr [EBX + 0x11d4],0x0
// 00587819: POP EDI
// 0058781a: POP ESI
// 0058781b: POP EBX
// 0058781c: RET
// 0058781d: MOV EAX,0x649a05
//   Label: LAB_0058781d
//   XREF to: 00649a05 (PARAM)
// 00587822: MOV EDX,0x4a9
// 00587827: PUSH 0x649a19
//   XREF to: 00649a19 (DATA)
// 0058782c: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 00587831: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00587837: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0058783c: ADD ESP,0x4
// 0058783f: POP EDI
// 00587840: POP ESI
// 00587841: POP EBX
// 00587842: RET
