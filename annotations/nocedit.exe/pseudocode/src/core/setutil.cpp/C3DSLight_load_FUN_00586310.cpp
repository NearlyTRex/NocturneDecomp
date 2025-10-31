// Name: core_setutil.cpp_C3DSLight_load_FUN_00586310
// Address: 00586310
// Address Range: [[00586310, 00586a8b]]
// Convention: __cdecl
// Signature: void core_setutil.cpp_C3DSLight_load_FUN_00586310(C3DSLight * this_ptr, FILE * file_handle)
// Cross-references:
//   core_set.cpp_CDemonSet_load_FUN_00569410 (00569410) at 005697b2 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_anon_00649543
//   TerminatedCString s_f_f_f_0064954a
//   TerminatedCString s_f_f_f_00649554
//   TerminatedCString s_f_0064955e
//   TerminatedCString s_f_00649562
//   TerminatedCString s_f_00649566
//   TerminatedCString s_d_0064956a
//   TerminatedCString s_f_f_f_f_f_0064956e
//   TerminatedCString s_d_d_0064957e
//   TerminatedCString s_d_00649585
//   TerminatedCString s_d_00649589
//   TerminatedCString s_f_s_0064958d
//   TerminatedCString s_f_d_s_00649594
//   TerminatedCString s_d_0064959e
//   TerminatedCString s_d_d_d_d_d_006495a2
//   TerminatedCString s_f_f_006495b2
//   TerminatedCString s_d_006495b9
//   TerminatedCString s_d_d_d_d_d_006495bd
//   TerminatedCString s_d_006495cd
//   TerminatedCString s_d_d_d_d_d_006495d1
//   TerminatedCString s_core_setutil_cpp_006495e1
//   TerminatedCString s_Invalid_camera_number_in_006495f5
//   CDemonSet* g_CDemonSetPtr = 03114278
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CDemonSet g_CDemonSetInstance
//   undefined4 DAT_0326ef24
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_memory.c_memset_FUN_005fde40
//   crt_stdio.c_fgets_FUN_005fefd0
//   crt_stdio.c_fscanf_FUN_005fe7c0

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSLight_load_FUN_00586310(C3DSLight *this_ptr,FILE *file_handle)

{
  char *pcVar1;
  BADSPACEBASE *in_ESP;
  C3DSLight *pCVar2;
  int iVar3;
  int iVar4;
  char in_stack_0000001c;
  char cStack00000020;
  int in_stack_0000002c;
  C3DSLight *in_stack_00000030;
  char (*in_stack_00000034) [40];
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  
  if (10 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffeb8,0xff,file_handle);
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%[^\n]\n");
  if (10 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffec0,0xff,file_handle);
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f,%f,%f\n");
  if (10 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffec8,0xff,file_handle);
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f,%f,%f\n");
  if (10 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffed0,0xff,file_handle);
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f\n");
  if (g_CDemonSetPtr->set_file_version < 0x15) {
    this_ptr->aspect = 1.0;
  }
  else {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffed8,0xff,file_handle);
    crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f\n");
  }
  if (g_CDemonSetPtr->set_file_version < 0x16) {
    this_ptr->intensity = 1.0;
  }
  else {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffee0,0xff,file_handle);
    crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f\n");
  }
  if (10 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffee0,0xff,file_handle);
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n");
  if (10 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffee4,0xff,file_handle);
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f,%f,%f,%f,%f\n");
  if (10 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffeec,0xff,file_handle);
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d,%d\n");
  if (10 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffef4,0xff,file_handle);
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n");
  if (10 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffefc,0xff,file_handle);
  }
  if (g_CDemonSetPtr->set_file_version < 9) {
    this_ptr->blend_filter = 1;
  }
  else {
    crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n");
  }
  iVar3 = 0;
  if (0 < this_ptr->filter_count) {
    _cStack00000020 = this_ptr->filter_indices;
    in_stack_00000034 = this_ptr->filter_names;
    in_stack_00000030 = this_ptr;
    do {
      in_stack_0000002c = iVar3 * 4;
      if (g_CDemonSetPtr->set_file_version < 0x10) {
        crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f,%s\n");
        this_ptr->filter_indices[iVar3] = 0;
      }
      else {
        crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f,%d,%s\n");
      }
      iVar3 = iVar3 + 1;
      in_stack_00000034 = in_stack_00000034 + 1;
      pcVar1 = in_stack_00000030->name;
      in_stack_00000030->filters[0] = (CDemonFilter *)0x0;
      in_stack_00000030 = (C3DSLight *)pcVar1;
    } while (iVar3 < this_ptr->filter_count);
  }
  if (10 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xffffff00,0xff,file_handle);
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n");
  if (g_CDemonSetPtr->set_file_version < 0x13) {
    (this_ptr->filter_vel).x = 0;
    (this_ptr->filter_vel).y = 0;
    (this_ptr->filter_pos).x = 0;
    (this_ptr->filter_pos).y = 0;
    this_ptr->move_filter = 0;
  }
  else {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xffffff04,0xff,file_handle);
    crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d,%d,%d,%d,%d\n");
  }
  if (10 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xffffff0c,0xff,file_handle);
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f,%f\n");
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xffffff10,0xff,file_handle);
  if (g_CDemonSetPtr->set_file_version < 0xb) {
    iVar3 = 100;
    if (6 < g_CDemonSetPtr->set_file_version) {
      if (g_CDemonSetPtr->set_file_version < 0x1a) {
        iVar3 = 200;
      }
      else {
        iVar3 = 0xfa;
      }
    }
    if (iVar3 != 0) {
      iVar4 = 0;
      pCVar2 = this_ptr;
      do {
        if (g_CDemonSetPtr->set_file_version < 2) {
          crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n");
          pCVar2->visible_flags[0] = in_stack_0000001c;
          pcVar1 = this_ptr->field8_0x21e + iVar4 + 6;
          pcVar1[0] = '\x01';
          pcVar1[1] = '\0';
          pcVar1[2] = '\0';
          pcVar1[3] = '\0';
          pcVar1 = this_ptr->field8_0x21e + iVar4 + 10;
          pcVar1[0] = '>';
          pcVar1[1] = '\x01';
          pcVar1[2] = '\0';
          pcVar1[3] = '\0';
          pcVar1 = this_ptr->field8_0x21e + iVar4 + 0xe;
          pcVar1[0] = '\x01';
          pcVar1[1] = '\0';
          pcVar1[2] = '\0';
          pcVar1[3] = '\0';
          pcVar1 = this_ptr->field8_0x21e + iVar4 + 0x12;
          pcVar1[0] = -0x12;
          pcVar1[1] = '\0';
          pcVar1[2] = '\0';
          pcVar1[3] = '\0';
        }
        else {
          crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d,%d,%d,%d,%d\n");
          pCVar2->visible_flags[0] = cStack00000020;
        }
        iVar4 = iVar4 + 0x10;
        pCVar2 = (C3DSLight *)((int)&pCVar2->light_type + 1);
      } while (iVar4 < iVar3 << 4);
    }
  }
  else {
    crt_memory_c_memset_FUN_005fde40(this_ptr->visible_flags,0,0xfa);
    crt_memory_c_memset_FUN_005fde40(this_ptr->field8_0x21e + 6,0,4000);
    crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n");
    iVar3 = 0;
    if (0 < (int)_cStack00000020) {
      do {
        crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d,%d,%d,%d,%d\n");
        if (0xf9 < (int)in_stack_00000030) {
          g_CurrentFilename = "..\\core\\setutil.cpp";
          g_CurrentLineNumber = 0x2d8;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid camera number in visiblilty list!");
        }
        this_ptr->visible_flags[in_stack_0000002c] = '\x01';
        *(C3DSLight **)(this_ptr->field8_0x21e + in_stack_0000002c * 0x10 + 6) = in_stack_00000030;
        *(undefined4 *)(this_ptr->field8_0x21e + in_stack_0000002c * 0x10 + 10) = in_stack_00000038;
        *(char (**) [40])(this_ptr->field8_0x21e + in_stack_0000002c * 0x10 + 0xe) =
             in_stack_00000034;
        *(undefined4 *)(this_ptr->field8_0x21e + in_stack_0000002c * 0x10 + 0x12) =
             in_stack_0000003c;
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)_cStack00000020);
    }
  }
  *(float *)this_ptr->field12_0x11d8 = this_ptr->atten_end * this_ptr->atten_end;
  *(float *)(this_ptr->field12_0x11d8 + 4) = 1.0 / this_ptr->atten_end;
  return;
}


// Assembly code:
// 00586310: PUSH EBX
//   Label: core_setutil.cpp_C3DSLight_load_FUN_00586310
// 00586311: PUSH ESI
// 00586312: PUSH EDI
// 00586313: PUSH EBP
// 00586314: SUB ESP,0x138
// 0058631a: MOV EBX,dword ptr [ESP + 0x14c]
//   XREF to: Stack[0x4] (READ)
// 00586321: MOV ESI,dword ptr [ESP + 0x150]
//   XREF to: Stack[0x8] (READ)
// 00586328: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0058632d: CMP dword ptr [EAX + 0x15acac],0xb
//   XREF to: 0326ef24 (READ)
// 00586334: JGE 0x0058683c
//   XREF to: 0058683c (CONDITIONAL_JUMP)
// 0058633a: LEA EAX,[EBX + 0x4]
//   Label: LAB_0058633a
// 0058633d: PUSH EAX
// 0058633e: PUSH 0x649543
//   XREF to: 00649543 (DATA)
// 00586343: PUSH ESI
// 00586344: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00586349: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 0058634e: MOV ECX,dword ptr [EAX + 0x15acac]
//   XREF to: 0326ef24 (READ)
// 00586354: ADD ESP,0xc
// 00586357: CMP ECX,0xb
// 0058635a: JL 0x0058636f
//   XREF to: 0058636f (CONDITIONAL_JUMP)
// 0058635c: PUSH ESI
// 0058635d: PUSH 0xff
// 00586362: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x148] (DATA)
// 00586366: PUSH EAX
// 00586367: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 0058636c: ADD ESP,0xc
// 0058636f: LEA EAX,[EBX + 0x10c]
//   Label: LAB_0058636f
// 00586375: PUSH EAX
// 00586376: LEA EAX,[EBX + 0x108]
// 0058637c: PUSH EAX
// 0058637d: LEA EAX,[EBX + 0x104]
// 00586383: PUSH EAX
// 00586384: PUSH 0x64954a
//   XREF to: 0064954a (DATA)
// 00586389: PUSH ESI
// 0058638a: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0058638f: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 00586394: MOV EDI,dword ptr [EAX + 0x15acac]
//   XREF to: 0326ef24 (READ)
// 0058639a: ADD ESP,0x14
// 0058639d: CMP EDI,0xb
// 005863a0: JL 0x005863b5
//   XREF to: 005863b5 (CONDITIONAL_JUMP)
// 005863a2: PUSH ESI
// 005863a3: PUSH 0xff
// 005863a8: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x148] (DATA)
// 005863ac: PUSH EAX
// 005863ad: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 005863b2: ADD ESP,0xc
// 005863b5: LEA EAX,[EBX + 0x114]
//   Label: LAB_005863b5
// 005863bb: PUSH EAX
// 005863bc: LEA EAX,[EBX + 0x118]
// 005863c2: PUSH EAX
// 005863c3: LEA EAX,[EBX + 0x110]
// 005863c9: PUSH EAX
// 005863ca: PUSH 0x649554
//   XREF to: 00649554 (DATA)
// 005863cf: PUSH ESI
// 005863d0: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 005863d5: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 005863da: MOV EBP,dword ptr [EAX + 0x15acac]
//   XREF to: 0326ef24 (READ)
// 005863e0: ADD ESP,0x14
// 005863e3: CMP EBP,0xb
// 005863e6: JL 0x005863fb
//   XREF to: 005863fb (CONDITIONAL_JUMP)
// 005863e8: PUSH ESI
// 005863e9: PUSH 0xff
// 005863ee: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x148] (DATA)
// 005863f2: PUSH EAX
// 005863f3: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 005863f8: ADD ESP,0xc
// 005863fb: LEA EAX,[EBX + 0x11c]
//   Label: LAB_005863fb
// 00586401: PUSH EAX
// 00586402: PUSH 0x64955e
//   XREF to: 0064955e (DATA)
// 00586407: PUSH ESI
// 00586408: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0058640d: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 00586412: MOV EDX,dword ptr [EAX + 0x15acac]
//   XREF to: 0326ef24 (READ)
// 00586418: ADD ESP,0xc
// 0058641b: CMP EDX,0x15
// 0058641e: JL 0x00586854
//   XREF to: 00586854 (CONDITIONAL_JUMP)
// 00586424: PUSH ESI
// 00586425: PUSH 0xff
// 0058642a: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x148] (DATA)
// 0058642e: PUSH EAX
// 0058642f: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 00586434: ADD ESP,0xc
// 00586437: LEA EAX,[EBX + 0x120]
// 0058643d: PUSH EAX
// 0058643e: PUSH 0x649562
//   XREF to: 00649562 (DATA)
// 00586443: PUSH ESI
// 00586444: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00586449: ADD ESP,0xc
// 0058644c: MOV EAX,[0x006810c8]
//   Label: LAB_0058644c
//   XREF to: 006810c8 (READ)
// 00586451: CMP dword ptr [EAX + 0x15acac],0x16
//   XREF to: 0326ef24 (READ)
// 00586458: JL 0x00586863
//   XREF to: 00586863 (CONDITIONAL_JUMP)
// 0058645e: PUSH ESI
// 0058645f: PUSH 0xff
// 00586464: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x148] (DATA)
// 00586468: PUSH EAX
// 00586469: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 0058646e: ADD ESP,0xc
// 00586471: LEA EAX,[EBX + 0x124]
// 00586477: PUSH EAX
// 00586478: PUSH 0x649566
//   XREF to: 00649566 (DATA)
// 0058647d: PUSH ESI
// 0058647e: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00586483: ADD ESP,0xc
// 00586486: MOV EAX,[0x006810c8]
//   Label: LAB_00586486
//   XREF to: 006810c8 (READ)
// 0058648b: CMP dword ptr [EAX + 0x15acac],0xb
//   XREF to: 0326ef24 (READ)
// 00586492: JL 0x005864a7
//   XREF to: 005864a7 (CONDITIONAL_JUMP)
// 00586494: PUSH ESI
// 00586495: PUSH 0xff
// 0058649a: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x148] (DATA)
// 0058649e: PUSH EAX
// 0058649f: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 005864a4: ADD ESP,0xc
// 005864a7: PUSH EBX
//   Label: LAB_005864a7
// 005864a8: PUSH 0x64956a
//   XREF to: 0064956a (DATA)
// 005864ad: PUSH ESI
// 005864ae: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 005864b3: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 005864b8: MOV EBP,dword ptr [EAX + 0x15acac]
//   XREF to: 0326ef24 (READ)
// 005864be: ADD ESP,0xc
// 005864c1: CMP EBP,0xb
// 005864c4: JL 0x005864d9
//   XREF to: 005864d9 (CONDITIONAL_JUMP)
// 005864c6: PUSH ESI
// 005864c7: PUSH 0xff
// 005864cc: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x148] (DATA)
// 005864d0: PUSH EAX
// 005864d1: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 005864d6: ADD ESP,0xc
// 005864d9: LEA EAX,[EBX + 0x11d4]
//   Label: LAB_005864d9
// 005864df: PUSH EAX
// 005864e0: LEA EAX,[EBX + 0x11d0]
// 005864e6: PUSH EAX
// 005864e7: LEA EAX,[EBX + 0x11cc]
// 005864ed: PUSH EAX
// 005864ee: LEA EAX,[EBX + 0x11c8]
// 005864f4: PUSH EAX
// 005864f5: LEA EAX,[EBX + 0x11c4]
// 005864fb: PUSH EAX
// 005864fc: PUSH 0x64956e
//   XREF to: 0064956e (DATA)
// 00586501: PUSH ESI
// 00586502: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00586507: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 0058650c: MOV EDX,dword ptr [EAX + 0x15acac]
//   XREF to: 0326ef24 (READ)
// 00586512: ADD ESP,0x1c
// 00586515: CMP EDX,0xb
// 00586518: JL 0x0058652d
//   XREF to: 0058652d (CONDITIONAL_JUMP)
// 0058651a: PUSH ESI
// 0058651b: PUSH 0xff
// 00586520: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x148] (DATA)
// 00586524: PUSH EAX
// 00586525: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 0058652a: ADD ESP,0xc
// 0058652d: LEA EAX,[EBX + 0x180c]
//   Label: LAB_0058652d
// 00586533: PUSH EAX
// 00586534: LEA EAX,[EBX + 0x1808]
// 0058653a: PUSH EAX
// 0058653b: PUSH 0x64957e
//   XREF to: 0064957e (DATA)
// 00586540: PUSH ESI
// 00586541: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00586546: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 0058654b: MOV ECX,dword ptr [EAX + 0x15acac]
//   XREF to: 0326ef24 (READ)
// 00586551: ADD ESP,0x10
// 00586554: CMP ECX,0xb
// 00586557: JL 0x0058656c
//   XREF to: 0058656c (CONDITIONAL_JUMP)
// 00586559: PUSH ESI
// 0058655a: PUSH 0xff
// 0058655f: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x148] (DATA)
// 00586563: PUSH EAX
// 00586564: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 00586569: ADD ESP,0xc
// 0058656c: LEA EAX,[EBX + 0x11ec]
//   Label: LAB_0058656c
// 00586572: PUSH EAX
// 00586573: PUSH 0x649585
//   XREF to: 00649585 (DATA)
// 00586578: PUSH ESI
// 00586579: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0058657e: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 00586583: MOV EDI,dword ptr [EAX + 0x15acac]
//   XREF to: 0326ef24 (READ)
// 00586589: ADD ESP,0xc
// 0058658c: CMP EDI,0xb
// 0058658f: JL 0x005865a4
//   XREF to: 005865a4 (CONDITIONAL_JUMP)
// 00586591: PUSH ESI
// 00586592: PUSH 0xff
// 00586597: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x148] (DATA)
// 0058659b: PUSH EAX
// 0058659c: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 005865a1: ADD ESP,0xc
// 005865a4: MOV EAX,[0x006810c8]
//   Label: LAB_005865a4
//   XREF to: 006810c8 (READ)
// 005865a9: CMP dword ptr [EAX + 0x15acac],0x9
//   XREF to: 0326ef24 (READ)
// 005865b0: JL 0x00586872
//   XREF to: 00586872 (CONDITIONAL_JUMP)
// 005865b6: LEA EAX,[EBX + 0x11f0]
// 005865bc: PUSH EAX
// 005865bd: PUSH 0x649589
//   XREF to: 00649589 (DATA)
// 005865c2: PUSH ESI
// 005865c3: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 005865c8: ADD ESP,0xc
// 005865cb: MOV EAX,dword ptr [EBX + 0x11ec]
//   Label: LAB_005865cb
// 005865d1: XOR EDI,EDI
// 005865d3: TEST EAX,EAX
// 005865d5: JLE 0x00586689
//   XREF to: 00586689 (CONDITIONAL_JUMP)
// 005865db: LEA EAX,[EBX + 0x1774]
// 005865e1: LEA EBP,[EBX + 0x16f4]
// 005865e7: MOV dword ptr [ESP + 0x120],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005865ee: LEA EAX,[EBX + 0x11f4]
// 005865f4: MOV dword ptr [ESP + 0x134],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005865fb: MOV dword ptr [ESP + 0x130],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 00586602: LEA EDX,[EDI*0x4 + 0x0]
//   Label: LAB_00586602
// 00586609: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0058660e: MOV dword ptr [ESP + 0x12c],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 00586615: CMP dword ptr [EAX + 0x15acac],0x10
//   XREF to: 0326ef24 (READ)
// 0058661c: JGE 0x00586881
//   XREF to: 00586881 (CONDITIONAL_JUMP)
// 00586622: MOV ECX,dword ptr [ESP + 0x134]
//   XREF to: Stack[-0x14] (READ)
// 00586629: PUSH ECX
// 0058662a: PUSH EBP
// 0058662b: PUSH 0x64958d
//   XREF to: 0064958d (DATA)
// 00586630: PUSH ESI
// 00586631: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00586636: ADD ESP,0x10
// 00586639: MOV EAX,dword ptr [ESP + 0x12c]
//   XREF to: Stack[-0x1c] (READ)
// 00586640: MOV dword ptr [EBX + EAX*0x1 + 0x1774],0x0
// 0058664b: MOV EAX,dword ptr [ESP + 0x130]
//   Label: LAB_0058664b
//   XREF to: Stack[-0x18] (READ)
// 00586652: MOV EDX,dword ptr [ESP + 0x134]
//   XREF to: Stack[-0x14] (READ)
// 00586659: ADD EBP,0x4
// 0058665c: INC EDI
// 0058665d: ADD EDX,0x28
// 00586660: LEA ECX,[EAX + 0x4]
// 00586663: MOV dword ptr [EAX + 0x1810],0x0
// 0058666d: MOV dword ptr [ESP + 0x134],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00586674: MOV EAX,dword ptr [EBX + 0x11ec]
// 0058667a: MOV dword ptr [ESP + 0x130],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 00586681: CMP EDI,EAX
// 00586683: JL 0x00586602
//   XREF to: 00586602 (CONDITIONAL_JUMP)
// 00586689: MOV EAX,[0x006810c8]
//   Label: LAB_00586689
//   XREF to: 006810c8 (READ)
// 0058668e: CMP dword ptr [EAX + 0x15acac],0xb
//   XREF to: 0326ef24 (READ)
// 00586695: JL 0x005866aa
//   XREF to: 005866aa (CONDITIONAL_JUMP)
// 00586697: PUSH ESI
// 00586698: PUSH 0xff
// 0058669d: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x148] (DATA)
// 005866a1: PUSH EAX
// 005866a2: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 005866a7: ADD ESP,0xc
// 005866aa: LEA EAX,[EBX + 0x1890]
//   Label: LAB_005866aa
// 005866b0: PUSH EAX
// 005866b1: PUSH 0x64959e
//   XREF to: 0064959e (DATA)
// 005866b6: PUSH ESI
// 005866b7: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 005866bc: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 005866c1: MOV ECX,dword ptr [EAX + 0x15acac]
//   XREF to: 0326ef24 (READ)
// 005866c7: ADD ESP,0xc
// 005866ca: CMP ECX,0x13
// 005866cd: JL 0x005868ae
//   XREF to: 005868ae (CONDITIONAL_JUMP)
// 005866d3: PUSH ESI
// 005866d4: PUSH 0xff
// 005866d9: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x148] (DATA)
// 005866dd: PUSH EAX
// 005866de: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 005866e3: ADD ESP,0xc
// 005866e6: LEA EAX,[EBX + 0x1804]
// 005866ec: PUSH EAX
// 005866ed: LEA EAX,[EBX + 0x1800]
// 005866f3: PUSH EAX
// 005866f4: LEA EAX,[EBX + 0x17fc]
// 005866fa: PUSH EAX
// 005866fb: LEA EAX,[EBX + 0x17f8]
// 00586701: PUSH EAX
// 00586702: LEA EAX,[EBX + 0x17f4]
// 00586708: PUSH EAX
// 00586709: PUSH 0x6495a2
//   XREF to: 006495a2 (DATA)
// 0058670e: PUSH ESI
// 0058670f: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00586714: ADD ESP,0x1c
// 00586717: MOV EAX,[0x006810c8]
//   Label: LAB_00586717
//   XREF to: 006810c8 (READ)
// 0058671c: CMP dword ptr [EAX + 0x15acac],0xb
//   XREF to: 0326ef24 (READ)
// 00586723: JL 0x00586738
//   XREF to: 00586738 (CONDITIONAL_JUMP)
// 00586725: PUSH ESI
// 00586726: PUSH 0xff
// 0058672b: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x148] (DATA)
// 0058672f: PUSH EAX
// 00586730: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 00586735: ADD ESP,0xc
// 00586738: LEA EAX,[EBX + 0x11e4]
//   Label: LAB_00586738
// 0058673e: PUSH EAX
// 0058673f: LEA EAX,[EBX + 0x11e0]
// 00586745: PUSH EAX
// 00586746: PUSH 0x6495b2
//   XREF to: 006495b2 (DATA)
// 0058674b: PUSH ESI
// 0058674c: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00586751: ADD ESP,0x10
// 00586754: PUSH ESI
// 00586755: PUSH 0xff
// 0058675a: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x148] (DATA)
// 0058675e: PUSH EAX
// 0058675f: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 00586764: MOV EBP,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 0058676a: MOV EAX,dword ptr [EBP + 0x15acac]
//   XREF to: 0326ef24 (READ)
// 00586770: ADD ESP,0xc
// 00586773: CMP EAX,0xb
// 00586776: JGE 0x00586942
//   XREF to: 00586942 (CONDITIONAL_JUMP)
// 0058677c: MOV ECX,dword ptr [EBP + 0x15acac]
//   XREF to: 0326ef24 (READ)
// 00586782: MOV EAX,0x64
// 00586787: CMP ECX,0x7
// 0058678a: JL 0x0058679a
//   XREF to: 0058679a (CONDITIONAL_JUMP)
// 0058678c: CMP ECX,0x1a
// 0058678f: JL 0x005868e5
//   XREF to: 005868e5 (CONDITIONAL_JUMP)
// 00586795: MOV EAX,0xfa
// 0058679a: TEST EAX,EAX
//   Label: LAB_0058679a
// 0058679c: JLE 0x00586813
//   XREF to: 00586813 (CONDITIONAL_JUMP)
// 0058679e: LEA EDX,[EBX + 0x224]
// 005867a4: SHL EAX,0x4
// 005867a7: XOR EDI,EDI
// 005867a9: MOV EBP,EBX
// 005867ab: MOV dword ptr [ESP + 0x128],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005867b2: MOV dword ptr [ESP + 0x124],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 005867b9: MOV EAX,[0x006810c8]
//   Label: LAB_005867b9
//   XREF to: 006810c8 (READ)
// 005867be: CMP dword ptr [EAX + 0x15acac],0x2
//   XREF to: 0326ef24 (READ)
// 005867c5: JL 0x005868ef
//   XREF to: 005868ef (CONDITIONAL_JUMP)
// 005867cb: MOV EAX,dword ptr [ESP + 0x124]
//   XREF to: Stack[-0x24] (READ)
// 005867d2: ADD EAX,EDI
// 005867d4: LEA EDX,[EAX + 0xc]
// 005867d7: PUSH EDX
// 005867d8: LEA EDX,[EAX + 0x8]
// 005867db: PUSH EDX
// 005867dc: LEA EDX,[EAX + 0x4]
// 005867df: PUSH EDX
// 005867e0: PUSH EAX
// 005867e1: LEA EAX,[ESP + 0x118]
//   XREF to: Stack[-0x40] (DATA)
// 005867e8: PUSH EAX
// 005867e9: PUSH 0x6495bd
//   XREF to: 006495bd (DATA)
// 005867ee: PUSH ESI
// 005867ef: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 005867f4: ADD ESP,0x1c
// 005867f7: MOV AL,byte ptr [ESP + 0x108]
//   XREF to: Stack[-0x40] (READ)
// 005867fe: MOV byte ptr [EBP + 0x128],AL
// 00586804: MOV EAX,dword ptr [ESP + 0x128]
//   Label: LAB_00586804
//   XREF to: Stack[-0x20] (READ)
// 0058680b: ADD EDI,0x10
// 0058680e: INC EBP
// 0058680f: CMP EDI,EAX
// 00586811: JL 0x005867b9
//   XREF to: 005867b9 (CONDITIONAL_JUMP)
// 00586813: FLD float ptr [EBX + 0x11d4]
//   Label: LAB_00586813
// 00586819: FLD1
// 0058681b: FDIVRP
// 0058681d: FLD float ptr [EBX + 0x11d4]
// 00586823: FMUL ST0
// 00586825: FSTP float ptr [EBX + 0x11d8]
// 0058682b: FSTP float ptr [EBX + 0x11dc]
// 00586831: ADD ESP,0x138
// 00586837: POP EBP
// 00586838: POP EDI
// 00586839: POP ESI
// 0058683a: POP EBX
// 0058683b: RET
// 0058683c: PUSH ESI
//   Label: LAB_0058683c
// 0058683d: PUSH 0xff
// 00586842: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x148] (DATA)
// 00586846: PUSH EAX
// 00586847: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 0058684c: ADD ESP,0xc
// 0058684f: JMP 0x0058633a
//   XREF to: 0058633a (UNCONDITIONAL_JUMP)
// 00586854: MOV dword ptr [EBX + 0x120],0x3f800000
//   Label: LAB_00586854
// 0058685e: JMP 0x0058644c
//   XREF to: 0058644c (UNCONDITIONAL_JUMP)
// 00586863: MOV dword ptr [EBX + 0x124],0x3f800000
//   Label: LAB_00586863
// 0058686d: JMP 0x00586486
//   XREF to: 00586486 (UNCONDITIONAL_JUMP)
// 00586872: MOV dword ptr [EBX + 0x11f0],0x1
//   Label: LAB_00586872
// 0058687c: JMP 0x005865cb
//   XREF to: 005865cb (UNCONDITIONAL_JUMP)
// 00586881: MOV ECX,dword ptr [ESP + 0x134]
//   Label: LAB_00586881
//   XREF to: Stack[-0x14] (READ)
// 00586888: MOV EAX,dword ptr [ESP + 0x120]
//   XREF to: Stack[-0x28] (READ)
// 0058688f: MOV EDX,dword ptr [ESP + 0x12c]
//   XREF to: Stack[-0x1c] (READ)
// 00586896: PUSH ECX
// 00586897: ADD EAX,EDX
// 00586899: PUSH EAX
// 0058689a: PUSH EBP
// 0058689b: PUSH 0x649594
//   XREF to: 00649594 (DATA)
// 005868a0: PUSH ESI
// 005868a1: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 005868a6: ADD ESP,0x14
// 005868a9: JMP 0x0058664b
//   XREF to: 0058664b (UNCONDITIONAL_JUMP)
// 005868ae: MOV dword ptr [EBX + 0x17f8],0x0
//   Label: LAB_005868ae
// 005868b8: MOV dword ptr [EBX + 0x17fc],0x0
// 005868c2: MOV dword ptr [EBX + 0x1800],0x0
// 005868cc: MOV dword ptr [EBX + 0x1804],0x0
// 005868d6: MOV dword ptr [EBX + 0x17f4],0x0
// 005868e0: JMP 0x00586717
//   XREF to: 00586717 (UNCONDITIONAL_JUMP)
// 005868e5: MOV EAX,0xc8
//   Label: LAB_005868e5
// 005868ea: JMP 0x0058679a
//   XREF to: 0058679a (UNCONDITIONAL_JUMP)
// 005868ef: LEA EAX,[ESP + 0x104]
//   Label: LAB_005868ef
//   XREF to: Stack[-0x44] (DATA)
// 005868f6: PUSH EAX
// 005868f7: PUSH 0x6495b9
//   XREF to: 006495b9 (DATA)
// 005868fc: PUSH ESI
// 005868fd: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00586902: ADD ESP,0xc
// 00586905: MOV AL,byte ptr [ESP + 0x104]
//   XREF to: Stack[-0x44] (READ)
// 0058690c: MOV byte ptr [EBP + 0x128],AL
// 00586912: LEA EAX,[EBX + EDI*0x1]
// 00586915: MOV dword ptr [EAX + 0x224],0x1
// 0058691f: MOV dword ptr [EAX + 0x228],0x13e
// 00586929: MOV dword ptr [EAX + 0x22c],0x1
// 00586933: MOV dword ptr [EAX + 0x230],0xee
// 0058693d: JMP 0x00586804
//   XREF to: 00586804 (UNCONDITIONAL_JUMP)
// 00586942: PUSH 0xfa
//   Label: LAB_00586942
// 00586947: PUSH 0x0
// 00586949: LEA EAX,[EBX + 0x128]
// 0058694f: PUSH EAX
// 00586950: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 00586955: ADD ESP,0xc
// 00586958: PUSH 0xfa0
// 0058695d: PUSH 0x0
// 0058695f: LEA EAX,[EBX + 0x224]
// 00586965: PUSH EAX
// 00586966: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0058696b: ADD ESP,0xc
// 0058696e: LEA EAX,[ESP + 0x100]
//   XREF to: Stack[-0x48] (DATA)
// 00586975: PUSH EAX
// 00586976: PUSH 0x6495cd
//   XREF to: 006495cd (DATA)
// 0058697b: PUSH ESI
// 0058697c: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00586981: ADD ESP,0xc
// 00586984: MOV EDX,dword ptr [ESP + 0x100]
//   XREF to: Stack[-0x48] (READ)
// 0058698b: XOR EBP,EBP
// 0058698d: TEST EDX,EDX
// 0058698f: JLE 0x00586813
//   XREF to: 00586813 (CONDITIONAL_JUMP)
// 00586995: LEA EAX,[ESP + 0x11c]
//   Label: LAB_00586995
//   XREF to: Stack[-0x2c] (DATA)
// 0058699c: PUSH EAX
// 0058699d: LEA EAX,[ESP + 0x118]
//   XREF to: Stack[-0x34] (DATA)
// 005869a4: PUSH EAX
// 005869a5: LEA EAX,[ESP + 0x120]
//   XREF to: Stack[-0x30] (DATA)
// 005869ac: PUSH EAX
// 005869ad: LEA EAX,[ESP + 0x11c]
//   XREF to: Stack[-0x38] (DATA)
// 005869b4: PUSH EAX
// 005869b5: LEA EAX,[ESP + 0x11c]
//   XREF to: Stack[-0x3c] (DATA)
// 005869bc: PUSH EAX
// 005869bd: PUSH 0x6495d1
//   XREF to: 006495d1 (DATA)
// 005869c2: PUSH ESI
// 005869c3: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 005869c8: ADD ESP,0x1c
// 005869cb: CMP dword ptr [ESP + 0x10c],0xfa
//   XREF to: Stack[-0x3c] (READ)
// 005869d6: JGE 0x00586a64
//   XREF to: 00586a64 (CONDITIONAL_JUMP)
// 005869dc: MOV EAX,dword ptr [ESP + 0x10c]
//   Label: LAB_005869dc
//   XREF to: Stack[-0x3c] (READ)
// 005869e3: MOV byte ptr [EBX + EAX*0x1 + 0x128],0x1
// 005869eb: MOV EDX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x3c] (READ)
// 005869f2: SHL EDX,0x4
// 005869f5: MOV EAX,dword ptr [ESP + 0x110]
//   XREF to: Stack[-0x38] (READ)
// 005869fc: MOV dword ptr [EDX + EBX*0x1 + 0x224],EAX
// 00586a03: MOV EAX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x3c] (READ)
// 00586a0a: SHL EAX,0x4
// 00586a0d: LEA EDX,[EBX + EAX*0x1]
// 00586a10: MOV EAX,dword ptr [ESP + 0x118]
//   XREF to: Stack[-0x30] (READ)
// 00586a17: MOV dword ptr [EDX + 0x228],EAX
// 00586a1d: MOV EAX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x3c] (READ)
// 00586a24: SHL EAX,0x4
// 00586a27: LEA EDX,[EBX + EAX*0x1]
// 00586a2a: MOV EAX,dword ptr [ESP + 0x114]
//   XREF to: Stack[-0x34] (READ)
// 00586a31: MOV dword ptr [EDX + 0x22c],EAX
// 00586a37: MOV EAX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x3c] (READ)
// 00586a3e: SHL EAX,0x4
// 00586a41: LEA EDX,[EBX + EAX*0x1]
// 00586a44: MOV EAX,dword ptr [ESP + 0x11c]
//   XREF to: Stack[-0x2c] (READ)
// 00586a4b: MOV dword ptr [EDX + 0x230],EAX
// 00586a51: INC EBP
// 00586a52: CMP EBP,dword ptr [ESP + 0x100]
//   XREF to: Stack[-0x48] (READ)
// 00586a59: JGE 0x00586813
//   XREF to: 00586813 (CONDITIONAL_JUMP)
// 00586a5f: JMP 0x00586995
//   XREF to: 00586995 (UNCONDITIONAL_JUMP)
// 00586a64: MOV EDX,0x6495e1
//   Label: LAB_00586a64
//   XREF to: 006495e1 (PARAM)
// 00586a69: MOV ECX,0x2d8
// 00586a6e: PUSH 0x6495f5
//   XREF to: 006495f5 (DATA)
// 00586a73: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00586a79: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00586a7f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00586a84: ADD ESP,0x4
// 00586a87: JMP 0x005869dc
//   XREF to: 005869dc (UNCONDITIONAL_JUMP)
