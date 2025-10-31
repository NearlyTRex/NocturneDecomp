// Name: core_setutil.cpp_C3DSLight_create_FUN_00586a90
// Address: 00586a90
// Address Range: [[00586a90, 00586be8]]
// Convention: __cdecl
// Signature: CDemonLight * core_setutil.cpp_C3DSLight_create_FUN_00586a90(C3DSLight * this_ptr)
// Cross-references:
//   core_set.cpp_CDemonSet_initScene_FUN_0056aa10 (0056aa10) at 0056ac42 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_setutil_cpp_0064961f
//   TerminatedCString s_core_setutil_cpp_00649633
//   TerminatedCString s_C3DSLight_create_Out_of__00649647
//   CFilterCache* g_CFilterCachePtr = 020a4c08
//   CFilterCache g_CFilterCacheInstance
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_dfilter.cpp_CFilterCache_getFilter_FUN_00470060
//   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   core_dlight.cpp_CDemonLight_ctor_FUN_004726a0
//   core_dlight.cpp_CDemonLight_init_FUN_004727c0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

CDemonLight * __cdecl core_setutil_cpp_C3DSLight_create_FUN_00586a90(C3DSLight *this_ptr)

{
  char cVar1;
  CDemonLight *this_ptr_00;
  CDemonFilter *pCVar2;
  CDemonLight *unaff_EBX;
  C3DSLight *pCVar3;
  int unaff_ESI;
  int iVar4;
  char *pcVar5;
  char (*filter_name) [40];
  char *pcVar6;
  
  this_ptr_00 = (CDemonLight *)
                shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x2fac,"..\\core\\setutil.cpp",0x2f8);
  if (this_ptr_00 != (CDemonLight *)0x0) {
    this_ptr_00 = core_dlight_cpp_CDemonLight_ctor_FUN_004726a0(this_ptr_00);
  }
  if (this_ptr_00 == (CDemonLight *)0x0) {
    g_CurrentFilename = "..\\core\\setutil.cpp";
    g_CurrentLineNumber = 0x2f9;
    core_main_c_displayErrorAndQuit_FUN_00506f10("C3DSLight::create - Out of memory!");
  }
  core_dlight_cpp_CDemonLight_init_FUN_004727c0(this_ptr_00);
  if (this_ptr->filter_count < 1) {
    this_ptr_00->shadow_bounds_mode = 1;
  }
  else {
    this_ptr_00->shadow_bounds_mode = this_ptr->blend_filter;
  }
  if ((CVector3f *)(unaff_ESI + 4) != &this_ptr->pos) {
    *(float *)(unaff_ESI + 4) = (this_ptr->pos).x;
    *(float *)(unaff_ESI + 8) = (this_ptr->pos).y;
    *(float *)(unaff_ESI + 0xc) = (this_ptr->pos).z;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)(unaff_ESI + 0x10),&this_ptr->orient);
  (unaff_EBX->base).base.projection_scale = this_ptr->fov;
  iVar4 = 0;
  if (0 < this_ptr->filter_count) {
    filter_name = this_ptr->filter_names;
    pCVar3 = this_ptr;
    do {
      iVar4 = iVar4 + 1;
      pCVar2 = core_dfilter_cpp_CFilterCache_getFilter_FUN_00470060
                         (g_CFilterCachePtr,*filter_name,(char *)this_ptr->blend_filter,
                          (int)unaff_EBX);
      pCVar3->filters[0] = pCVar2;
      filter_name = filter_name + 1;
      pCVar3 = (C3DSLight *)pCVar3->name;
    } while (iVar4 < this_ptr->filter_count);
  }
  pcVar5 = this_ptr->name;
  pcVar6 = (unaff_EBX->base).camera_name;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') {
      return unaff_EBX;
    }
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  return unaff_EBX;
}


// Assembly code:
// 00586a90: PUSH EBX
//   Label: core_setutil.cpp_C3DSLight_create_FUN_00586a90
// 00586a91: PUSH ESI
// 00586a92: PUSH EDI
// 00586a93: PUSH EBP
// 00586a94: SUB ESP,0x4
// 00586a97: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00586a9b: PUSH 0x2f8
// 00586aa0: PUSH 0x64961f
//   XREF to: 0064961f (DATA)
// 00586aa5: PUSH 0x2fac
// 00586aaa: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00586aaf: ADD ESP,0xc
// 00586ab2: TEST EAX,EAX
// 00586ab4: JNZ 0x00586bbe
//   XREF to: 00586bbe (CONDITIONAL_JUMP)
// 00586aba: MOV dword ptr [ESP],EAX
//   Label: LAB_00586aba
//   XREF to: Stack[-0x14] (DATA)
// 00586abd: TEST EAX,EAX
// 00586abf: JNZ 0x00586ae4
//   XREF to: 00586ae4 (CONDITIONAL_JUMP)
// 00586ac1: MOV EBX,0x649633
//   XREF to: 00649633 (PARAM)
// 00586ac6: MOV ESI,0x2f9
// 00586acb: PUSH 0x649647
//   XREF to: 00649647 (DATA)
// 00586ad0: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 00586ad6: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00586adc: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00586ae1: ADD ESP,0x4
// 00586ae4: MOV EDI,dword ptr [ESP]
//   Label: LAB_00586ae4
//   XREF to: Stack[-0x14] (DATA)
// 00586ae7: PUSH EDI
// 00586ae8: CALL core_dlight.cpp_CDemonLight_init_FUN_004727c0
//   XREF to: 004727c0 (UNCONDITIONAL_CALL)
// 00586aed: MOV EAX,dword ptr [EBP + 0x11ec]
// 00586af3: ADD ESP,0x4
// 00586af6: TEST EAX,EAX
// 00586af8: JLE 0x00586bda
//   XREF to: 00586bda (CONDITIONAL_JUMP)
// 00586afe: MOV EAX,dword ptr [EBP + 0x11f0]
// 00586b04: MOV dword ptr [EDI + 0x1cb8],EAX
// 00586b0a: MOV EBX,dword ptr [ESP]
//   Label: LAB_00586b0a
//   XREF to: Stack[-0x14] (DATA)
// 00586b0d: LEA EAX,[EBP + 0x104]
// 00586b13: ADD EBX,0x4
// 00586b16: CMP EBX,EAX
// 00586b18: JZ 0x00586b2a
//   XREF to: 00586b2a (CONDITIONAL_JUMP)
// 00586b1a: MOV EDX,dword ptr [EAX]
// 00586b1c: MOV dword ptr [EBX],EDX
// 00586b1e: MOV EDX,dword ptr [EAX + 0x4]
// 00586b21: MOV dword ptr [EBX + 0x4],EDX
// 00586b24: MOV EDX,dword ptr [EAX + 0x8]
// 00586b27: MOV dword ptr [EBX + 0x8],EDX
// 00586b2a: LEA EAX,[EBP + 0x110]
//   Label: LAB_00586b2a
// 00586b30: PUSH EAX
// 00586b31: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 00586b35: ADD EAX,0x10
// 00586b38: PUSH EAX
// 00586b39: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 00586b3e: ADD ESP,0x8
// 00586b41: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00586b44: MOV EDX,dword ptr [EBP + 0x11c]
// 00586b4a: MOV dword ptr [EAX + 0x38],EDX
// 00586b4d: MOV EDX,dword ptr [EBP + 0x11ec]
// 00586b53: XOR ESI,ESI
// 00586b55: TEST EDX,EDX
// 00586b57: JLE 0x00586b90
//   XREF to: 00586b90 (CONDITIONAL_JUMP)
// 00586b59: LEA EDI,[EBP + 0x11f4]
// 00586b5f: MOV EBX,EBP
// 00586b61: MOV ECX,dword ptr [EBP + 0x11f0]
//   Label: LAB_00586b61
// 00586b67: PUSH ECX
// 00586b68: PUSH EDI
// 00586b69: MOV EAX,[0x0066efcc]
//   XREF to: 020a4c08 (PARAM)
//   XREF to: 0066efcc (READ)
// 00586b6e: PUSH EAX
//   XREF to: 020a4c08 (DATA)
// 00586b6f: ADD EBX,0x4
// 00586b72: INC ESI
// 00586b73: CALL core_dfilter.cpp_CFilterCache_getFilter_FUN_00470060
//   XREF to: 00470060 (UNCONDITIONAL_CALL)
// 00586b78: MOV dword ptr [EBX + 0x180c],EAX
// 00586b7e: ADD EDI,0x28
// 00586b81: MOV EDX,dword ptr [EBP + 0x11ec]
// 00586b87: ADD ESP,0xc
// 00586b8a: CMP ESI,EDX
// 00586b8c: JL 0x00586b61
//   XREF to: 00586b61 (CONDITIONAL_JUMP)
// 00586b8e: MOV EAX,EAX
// 00586b90: MOV EDI,dword ptr [ESP]
//   Label: LAB_00586b90
//   XREF to: Stack[-0x14] (DATA)
// 00586b93: LEA ESI,[EBP + 0x4]
// 00586b96: ADD EDI,0x40
// 00586b99: PUSH EDI
// 00586b9a: MOV AL,byte ptr [ESI]
//   Label: LAB_00586b9a
// 00586b9c: MOV byte ptr [EDI],AL
// 00586b9e: CMP AL,0x0
// 00586ba0: JZ 0x00586bb2
//   XREF to: 00586bb2 (CONDITIONAL_JUMP)
// 00586ba2: MOV AL,byte ptr [ESI + 0x1]
// 00586ba5: ADD ESI,0x2
// 00586ba8: MOV byte ptr [EDI + 0x1],AL
// 00586bab: ADD EDI,0x2
// 00586bae: CMP AL,0x0
// 00586bb0: JNZ 0x00586b9a
//   XREF to: 00586b9a (CONDITIONAL_JUMP)
// 00586bb2: POP EDI
//   Label: LAB_00586bb2
// 00586bb3: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00586bb6: ADD ESP,0x4
// 00586bb9: POP EBP
// 00586bba: POP EDI
// 00586bbb: POP ESI
// 00586bbc: POP EBX
// 00586bbd: RET
// 00586bbe: MOV EDX,dword ptr [EBP + 0x180c]
//   Label: LAB_00586bbe
// 00586bc4: PUSH EDX
// 00586bc5: MOV ECX,dword ptr [EBP + 0x1808]
// 00586bcb: PUSH ECX
// 00586bcc: PUSH EAX
// 00586bcd: CALL core_dlight.cpp_CDemonLight_ctor_FUN_004726a0
//   XREF to: 004726a0 (UNCONDITIONAL_CALL)
// 00586bd2: ADD ESP,0xc
// 00586bd5: JMP 0x00586aba
//   XREF to: 00586aba (UNCONDITIONAL_JUMP)
// 00586bda: MOV dword ptr [EDI + 0x1cb8],0x1
//   Label: LAB_00586bda
// 00586be4: JMP 0x00586b0a
//   XREF to: 00586b0a (UNCONDITIONAL_JUMP)
