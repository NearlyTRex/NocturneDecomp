// Name: core_setutil.cpp_C3DSLight_exportS3D_FUN_00587850
// Address: 00587850
// Address Range: [[00587850, 00587948]]
// Convention: __cdecl
// Signature: void core_setutil.cpp_C3DSLight_exportS3D_FUN_00587850(C3DSLight * this_ptr, FILE * file_handle)
// Cross-references:
//   core_setedit.cpp_CDemonSet_ExportSomething_FUN_0057a0c0 (0057a0c0) at 0057a1aa [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_s_d_g_g_g_g_g_g_00649a2d
//   TerminatedCString s_g_g_g_00649a48
//   TerminatedCString s_g_g_00649a53
//   TerminatedCString s_core_setutil_cpp_00649a5b
//   TerminatedCString s_Unknown_light_type_00649a6f
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

void __cdecl
core_setutil_cpp_C3DSLight_exportS3D_FUN_00587850(C3DSLight *this_ptr,FILE *file_handle)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (double)(this_ptr->color).b;
  dVar2 = (double)(this_ptr->color).g;
  dVar3 = (double)(this_ptr->color).r;
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file_handle,"\"%s\",%d,%g,%g,%g,%g,%g,%g ",this_ptr->name,this_ptr->light_type,
             (double)(this_ptr->pos).x,(double)(this_ptr->pos).y,(double)(this_ptr->pos).z,
             SUB84(dVar3,0),(int)((ulonglong)dVar3 >> 0x20),SUB84(dVar2,0),
             (int)((ulonglong)dVar2 >> 0x20),SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
  if (this_ptr->light_type == 0) {
    dVar1 = (double)(this_ptr->orient).y;
    dVar2 = (double)(this_ptr->orient).z;
    dVar3 = (double)(this_ptr->orient).x;
    crt_stdio_c_fprintf_FUN_005fe6d0
              (file_handle,",%g,%g,%g\n",SUB84(dVar3,0),(int)((ulonglong)dVar3 >> 0x20),
               SUB84(dVar2,0),(int)((ulonglong)dVar2 >> 0x20),SUB84(dVar1,0),
               (int)((ulonglong)dVar1 >> 0x20));
    return;
  }
  if (this_ptr->light_type == 1) {
    crt_stdio_c_fprintf_FUN_005fe6d0
              (file_handle,",%g,%g\n",SUB84((double)this_ptr->atten_start,0),
               (int)((ulonglong)(double)this_ptr->atten_start >> 0x20),
               SUB84((double)this_ptr->atten_end,0),
               (int)((ulonglong)(double)this_ptr->atten_end >> 0x20));
    return;
  }
  g_CurrentFilename = "..\\core\\setutil.cpp";
  g_CurrentLineNumber = 0x4c5;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Unknown light type!");
  return;
}


// Assembly code:
// 00587850: PUSH EBX
//   Label: core_setutil.cpp_C3DSLight_exportS3D_FUN_00587850
// 00587851: PUSH ESI
// 00587852: PUSH EBP
// 00587853: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00587857: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0058785b: SUB ESP,0x8
// 0058785e: FLD float ptr [EBX + 0x11cc]
// 00587864: FSTP double ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00587867: SUB ESP,0x8
// 0058786a: FLD float ptr [EBX + 0x11c8]
// 00587870: FSTP double ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 00587873: SUB ESP,0x8
// 00587876: FLD float ptr [EBX + 0x11c4]
// 0058787c: FSTP double ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 0058787f: SUB ESP,0x8
// 00587882: FLD float ptr [EBX + 0x10c]
// 00587888: FSTP double ptr [ESP]
//   XREF to: Stack[-0x2c] (DATA)
// 0058788b: SUB ESP,0x8
// 0058788e: FLD float ptr [EBX + 0x108]
// 00587894: FSTP double ptr [ESP]
//   XREF to: Stack[-0x34] (DATA)
// 00587897: SUB ESP,0x8
// 0058789a: FLD float ptr [EBX + 0x104]
// 005878a0: FSTP double ptr [ESP]
//   XREF to: Stack[-0x3c] (DATA)
// 005878a3: MOV EDX,dword ptr [EBX]
// 005878a5: PUSH EDX
// 005878a6: LEA EAX,[EBX + 0x4]
// 005878a9: PUSH EAX
// 005878aa: PUSH 0x649a2d
//   XREF to: 00649a2d (DATA)
// 005878af: PUSH ESI
// 005878b0: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005878b5: MOV ECX,dword ptr [EBX]
// 005878b7: ADD ESP,0x40
// 005878ba: TEST ECX,ECX
// 005878bc: JZ 0x005878ed
//   XREF to: 005878ed (CONDITIONAL_JUMP)
// 005878be: CMP ECX,0x1
// 005878c1: JNZ 0x00587923
//   XREF to: 00587923 (CONDITIONAL_JUMP)
// 005878c3: SUB ESP,0x8
// 005878c6: FLD float ptr [EBX + 0x11d4]
// 005878cc: FSTP double ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 005878cf: SUB ESP,0x8
// 005878d2: FLD float ptr [EBX + 0x11d0]
// 005878d8: FSTP double ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 005878db: PUSH 0x649a53
//   XREF to: 00649a53 (DATA)
// 005878e0: PUSH ESI
// 005878e1: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005878e6: ADD ESP,0x18
// 005878e9: POP EBP
// 005878ea: POP ESI
// 005878eb: POP EBX
// 005878ec: RET
// 005878ed: SUB ESP,0x8
//   Label: LAB_005878ed
// 005878f0: FLD float ptr [EBX + 0x114]
// 005878f6: FSTP double ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 005878f9: SUB ESP,0x8
// 005878fc: FLD float ptr [EBX + 0x118]
// 00587902: FSTP double ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 00587905: SUB ESP,0x8
// 00587908: FLD float ptr [EBX + 0x110]
// 0058790e: FSTP double ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 00587911: PUSH 0x649a48
//   XREF to: 00649a48 (DATA)
// 00587916: PUSH ESI
// 00587917: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058791c: ADD ESP,0x20
// 0058791f: POP EBP
// 00587920: POP ESI
// 00587921: POP EBX
// 00587922: RET
// 00587923: MOV EBP,0x649a5b
//   Label: LAB_00587923
//   XREF to: 00649a5b (DATA)
// 00587928: MOV EAX,0x4c5
// 0058792d: PUSH 0x649a6f
//   XREF to: 00649a6f (DATA)
// 00587932: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 00587938: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0058793d: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00587942: ADD ESP,0x4
// 00587945: POP EBP
// 00587946: POP ESI
// 00587947: POP EBX
// 00587948: RET
