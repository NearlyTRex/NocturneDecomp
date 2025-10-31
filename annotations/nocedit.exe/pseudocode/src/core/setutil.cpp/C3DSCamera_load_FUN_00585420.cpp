// Name: core_setutil.cpp_C3DSCamera_load_FUN_00585420
// Address: 00585420
// Address Range: [[00585420, 005857a0]]
// Convention: __cdecl
// Signature: void core_setutil.cpp_C3DSCamera_load_FUN_00585420(C3DSCamera * this_ptr, FILE * file_handle)
// Cross-references:
//   core_set.cpp_CDemonSet_load_FUN_00569410 (00569410) at 0056980a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_s_006491cf
//   TerminatedCString s_f_f_f_006491d3
//   TerminatedCString s_f_f_f_006491dd
//   TerminatedCString s_f_006491e7
//   TerminatedCString s_f_f_f_006491eb
//   TerminatedCString s_f_f_f_006491f5
//   TerminatedCString s_f_f_f_006491ff
//   TerminatedCString s_d_00649209
//   TerminatedCString s_f_f_f_0064920d
//   TerminatedCString s_f_f_f_00649217
//   TerminatedCString s_d_00649221
//   TerminatedCString s_d_00649225
//   TerminatedCString s_core_setutil_cpp_00649229
//   TerminatedCString s_Panning_cameras_not_supp_0064923d
//   CDemonSet* g_CDemonSetPtr = 03114278
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CDemonSet g_CDemonSetInstance
//   undefined4 DAT_0326eea8
//   undefined4 DAT_0326eeac
//   undefined4 DAT_0326eeb0
//   undefined4 DAT_0326eeb4
//   undefined4 DAT_0326eeb8
//   undefined4 DAT_0326eebc
//   undefined4 DAT_0326eec0
//   undefined4 DAT_0326eec4
//   undefined4 DAT_0326eec8
//   undefined4 DAT_0326ef24
// Function calls:
//   core_dcamera.cpp_loadCameraFog_FUN_00453e50
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_setutil.cpp_C3DSCamera_reset_FUN_005853b0
//   crt_stdio.c_fgets_FUN_005fefd0
//   crt_stdio.c_fscanf_FUN_005fe7c0
//   crt_stdio.c_sscanf_FUN_0060013c

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSCamera_load_FUN_00585420(C3DSCamera *this_ptr,FILE *file_handle)

{
  CDemonSet *pCVar1;
  BADSPACEBASE *in_ESP;
  CVector3f *pCVar2;
  int *piStack_d0;
  
  core_setutil_cpp_C3DSCamera_reset_FUN_005853b0(this_ptr);
  if (10 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffef4,0xff,file_handle);
  }
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffef8,0xff,file_handle);
  crt_stdio_c_sscanf_FUN_0060013c(&stack0xfffffefc,"%s\n");
  if (10 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xffffff00,0xff,file_handle);
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f,%f,%f\n");
  if (10 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xffffff08,0xff,file_handle);
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f,%f,%f\n");
  if (10 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xffffff10,0xff,file_handle);
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f\n");
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xffffff18,0xff,file_handle);
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f,%f,%f\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f,%f,%f\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f,%f,%f\n");
  pCVar1 = g_CDemonSetPtr;
  if (g_CDemonSetPtr->set_file_version < 0x12) {
    this_ptr->fog_enabled = 1;
    (this_ptr->fog).color_index.r = *(int *)(pCVar1->field19_0x14f0a0 + 0xbb90);
    (this_ptr->fog).color_index.g = *(int *)(pCVar1->field19_0x14f0a0 + 0xbb94);
    pCVar2 = &(this_ptr->fog).scroll;
    (this_ptr->fog).color_index.b = *(int *)(pCVar1->field19_0x14f0a0 + 0xbb98);
    if (pCVar2 != (CVector3f *)(pCVar1->field19_0x14f0a0 + 0xbb9c)) {
      pCVar2->x = *(float *)(pCVar1->field19_0x14f0a0 + 0xbb9c);
      (this_ptr->fog).scroll.y = *(float *)(pCVar1->field19_0x14f0a0 + 0xbba0);
      (this_ptr->fog).scroll.z = *(float *)(pCVar1->field19_0x14f0a0 + 0xbba4);
    }
    (this_ptr->fog).height_threshold = *(float *)(pCVar1->field19_0x14f0a0 + 0xbba8);
    (this_ptr->fog).density_multiplier = *(float *)(pCVar1->field19_0x14f0a0 + 0xbbac);
    (this_ptr->fog).reserved = *(float *)(pCVar1->field19_0x14f0a0 + 0xbbb0);
  }
  else {
    crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n");
    if (this_ptr->fog_enabled == 0) {
      core_dcamera_cpp_loadCameraFog_FUN_00453e50
                (&this_ptr->fog,file_handle,g_CDemonSetPtr->set_file_version);
    }
  }
  if (0x16 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0((char *)&piStack_d0,0xff,file_handle);
    crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f,%f,%f\n");
    crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f,%f,%f\n");
  }
  if (0x16 < g_CDemonSetPtr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0((char *)&piStack_d0,0xff,file_handle);
    crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n");
  }
  if (g_CDemonSetPtr->set_file_version == 0x1b) {
    crt_stdio_c_fgets_FUN_005fefd0((char *)&piStack_d0,0xff,file_handle);
    piStack_d0 = &this_ptr->is_panning;
    crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n");
    if (this_ptr->is_panning != 0) {
      g_CurrentFilename = "..\\core\\setutil.cpp";
      g_CurrentLineNumber = 0xd5;
      piStack_d0 = (int *)0x585793;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Panning cameras not supported, bucko!");
      return;
    }
  }
  else {
    this_ptr->is_panning = 0;
  }
  return;
}


// Assembly code:
// 00585420: PUSH EBX
//   Label: core_setutil.cpp_C3DSCamera_load_FUN_00585420
// 00585421: PUSH ESI
// 00585422: PUSH EDI
// 00585423: PUSH EBP
// 00585424: SUB ESP,0x100
// 0058542a: MOV EBX,dword ptr [ESP + 0x114]
//   XREF to: Stack[0x4] (READ)
// 00585431: MOV ESI,dword ptr [ESP + 0x118]
//   XREF to: Stack[0x8] (READ)
// 00585438: PUSH EBX
// 00585439: CALL core_setutil.cpp_C3DSCamera_reset_FUN_005853b0
//   XREF to: 005853b0 (UNCONDITIONAL_CALL)
// 0058543e: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 00585443: MOV EDX,dword ptr [EAX + 0x15acac]
//   XREF to: 0326ef24 (READ)
// 00585449: ADD ESP,0x4
// 0058544c: CMP EDX,0xb
// 0058544f: JGE 0x005856ce
//   XREF to: 005856ce (CONDITIONAL_JUMP)
// 00585455: PUSH ESI
//   Label: LAB_00585455
// 00585456: PUSH 0xff
// 0058545b: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x110] (DATA)
// 0058545f: PUSH EAX
// 00585460: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 00585465: ADD ESP,0xc
// 00585468: PUSH EBX
// 00585469: PUSH 0x6491cf
//   XREF to: 006491cf (DATA)
// 0058546e: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x110] (DATA)
// 00585472: PUSH EAX
// 00585473: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 00585478: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 0058547d: MOV ECX,dword ptr [EAX + 0x15acac]
//   XREF to: 0326ef24 (READ)
// 00585483: ADD ESP,0xc
// 00585486: CMP ECX,0xb
// 00585489: JL 0x0058549e
//   XREF to: 0058549e (CONDITIONAL_JUMP)
// 0058548b: PUSH ESI
// 0058548c: PUSH 0xff
// 00585491: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x110] (DATA)
// 00585495: PUSH EAX
// 00585496: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 0058549b: ADD ESP,0xc
// 0058549e: LEA EAX,[EBX + 0x108]
//   Label: LAB_0058549e
// 005854a4: PUSH EAX
// 005854a5: LEA EAX,[EBX + 0x104]
// 005854ab: PUSH EAX
// 005854ac: LEA EAX,[EBX + 0x100]
// 005854b2: PUSH EAX
// 005854b3: PUSH 0x6491d3
//   XREF to: 006491d3 (DATA)
// 005854b8: PUSH ESI
// 005854b9: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 005854be: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 005854c3: MOV EDI,dword ptr [EAX + 0x15acac]
//   XREF to: 0326ef24 (READ)
// 005854c9: ADD ESP,0x14
// 005854cc: CMP EDI,0xb
// 005854cf: JL 0x005854e4
//   XREF to: 005854e4 (CONDITIONAL_JUMP)
// 005854d1: PUSH ESI
// 005854d2: PUSH 0xff
// 005854d7: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x110] (DATA)
// 005854db: PUSH EAX
// 005854dc: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 005854e1: ADD ESP,0xc
// 005854e4: LEA EAX,[EBX + 0x110]
//   Label: LAB_005854e4
// 005854ea: PUSH EAX
// 005854eb: LEA EAX,[EBX + 0x114]
// 005854f1: PUSH EAX
// 005854f2: LEA EAX,[EBX + 0x10c]
// 005854f8: PUSH EAX
// 005854f9: PUSH 0x6491dd
//   XREF to: 006491dd (DATA)
// 005854fe: PUSH ESI
// 005854ff: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00585504: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 00585509: MOV EBP,dword ptr [EAX + 0x15acac]
//   XREF to: 0326ef24 (READ)
// 0058550f: ADD ESP,0x14
// 00585512: CMP EBP,0xb
// 00585515: JL 0x0058552a
//   XREF to: 0058552a (CONDITIONAL_JUMP)
// 00585517: PUSH ESI
// 00585518: PUSH 0xff
// 0058551d: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x110] (DATA)
// 00585521: PUSH EAX
// 00585522: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 00585527: ADD ESP,0xc
// 0058552a: LEA EAX,[EBX + 0x144]
//   Label: LAB_0058552a
// 00585530: PUSH EAX
// 00585531: PUSH 0x6491e7
//   XREF to: 006491e7 (DATA)
// 00585536: PUSH ESI
// 00585537: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0058553c: ADD ESP,0xc
// 0058553f: PUSH ESI
// 00585540: PUSH 0xff
// 00585545: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x110] (DATA)
// 00585549: PUSH EAX
// 0058554a: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 0058554f: ADD ESP,0xc
// 00585552: LEA EAX,[EBX + 0x120]
// 00585558: PUSH EAX
// 00585559: LEA EAX,[EBX + 0x11c]
// 0058555f: PUSH EAX
// 00585560: LEA EAX,[EBX + 0x118]
// 00585566: PUSH EAX
// 00585567: PUSH 0x6491eb
//   XREF to: 006491eb (DATA)
// 0058556c: PUSH ESI
// 0058556d: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00585572: ADD ESP,0x14
// 00585575: LEA EAX,[EBX + 0x12c]
// 0058557b: PUSH EAX
// 0058557c: LEA EAX,[EBX + 0x128]
// 00585582: PUSH EAX
// 00585583: LEA EAX,[EBX + 0x124]
// 00585589: PUSH EAX
// 0058558a: PUSH 0x6491f5
//   XREF to: 006491f5 (DATA)
// 0058558f: PUSH ESI
// 00585590: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00585595: ADD ESP,0x14
// 00585598: LEA EAX,[EBX + 0x138]
// 0058559e: PUSH EAX
// 0058559f: LEA EAX,[EBX + 0x134]
// 005855a5: PUSH EAX
// 005855a6: LEA EAX,[EBX + 0x130]
// 005855ac: PUSH EAX
// 005855ad: PUSH 0x6491ff
//   XREF to: 006491ff (DATA)
// 005855b2: PUSH ESI
// 005855b3: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 005855b8: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 005855bd: LEA EDI,[EBX + 0x154]
// 005855c3: MOV EDX,dword ptr [EAX + 0x15acac]
//   XREF to: 0326ef24 (READ)
// 005855c9: ADD ESP,0x14
// 005855cc: CMP EDX,0x12
// 005855cf: JL 0x005856e6
//   XREF to: 005856e6 (CONDITIONAL_JUMP)
// 005855d5: LEA EAX,[EBX + 0x150]
// 005855db: PUSH EAX
// 005855dc: PUSH 0x649209
//   XREF to: 00649209 (DATA)
// 005855e1: PUSH ESI
// 005855e2: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 005855e7: MOV ECX,dword ptr [EBX + 0x150]
// 005855ed: ADD ESP,0xc
// 005855f0: TEST ECX,ECX
// 005855f2: JNZ 0x0058560a
//   XREF to: 0058560a (CONDITIONAL_JUMP)
// 005855f4: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005855f9: MOV EBP,dword ptr [EAX + 0x15acac]
//   XREF to: 0326ef24 (READ)
// 005855ff: PUSH EBP
// 00585600: PUSH ESI
// 00585601: PUSH EDI
// 00585602: CALL core_dcamera.cpp_loadCameraFog_FUN_00453e50
//   XREF to: 00453e50 (UNCONDITIONAL_CALL)
// 00585607: ADD ESP,0xc
// 0058560a: MOV EAX,[0x006810c8]
//   Label: LAB_0058560a
//   XREF to: 006810c8 (READ)
// 0058560f: CMP dword ptr [EAX + 0x15acac],0x17
//   XREF to: 0326ef24 (READ)
// 00585616: JL 0x00585671
//   XREF to: 00585671 (CONDITIONAL_JUMP)
// 00585618: PUSH ESI
// 00585619: PUSH 0xff
// 0058561e: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x110] (DATA)
// 00585622: PUSH EAX
// 00585623: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 00585628: ADD ESP,0xc
// 0058562b: LEA EAX,[EBX + 0x184]
// 00585631: PUSH EAX
// 00585632: LEA EAX,[EBX + 0x180]
// 00585638: PUSH EAX
// 00585639: LEA EAX,[EBX + 0x17c]
// 0058563f: PUSH EAX
// 00585640: PUSH 0x64920d
//   XREF to: 0064920d (DATA)
// 00585645: PUSH ESI
// 00585646: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0058564b: ADD ESP,0x14
// 0058564e: LEA EAX,[EBX + 0x190]
// 00585654: PUSH EAX
// 00585655: LEA EAX,[EBX + 0x18c]
// 0058565b: PUSH EAX
// 0058565c: LEA EAX,[EBX + 0x188]
// 00585662: PUSH EAX
// 00585663: PUSH 0x649217
//   XREF to: 00649217 (DATA)
// 00585668: PUSH ESI
// 00585669: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0058566e: ADD ESP,0x14
// 00585671: MOV EAX,[0x006810c8]
//   Label: LAB_00585671
//   XREF to: 006810c8 (READ)
// 00585676: CMP dword ptr [EAX + 0x15acac],0x17
//   XREF to: 0326ef24 (READ)
// 0058567d: JL 0x005856a7
//   XREF to: 005856a7 (CONDITIONAL_JUMP)
// 0058567f: PUSH ESI
// 00585680: PUSH 0xff
// 00585685: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x110] (DATA)
// 00585689: PUSH EAX
// 0058568a: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 0058568f: ADD ESP,0xc
// 00585692: LEA EAX,[EBX + 0x178]
// 00585698: PUSH EAX
// 00585699: PUSH 0x649221
//   XREF to: 00649221 (DATA)
// 0058569e: PUSH ESI
// 0058569f: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 005856a4: ADD ESP,0xc
// 005856a7: MOV EAX,[0x006810c8]
//   Label: LAB_005856a7
//   XREF to: 03114278 (DATA)
//   XREF to: 006810c8 (READ)
// 005856ac: CMP dword ptr [EAX + 0x15acac],0x1b
//   XREF to: 0326ef24 (READ)
// 005856b3: JZ 0x0058573e
//   XREF to: 0058573e (CONDITIONAL_JUMP)
// 005856b9: MOV dword ptr [EBX + 0x140],0x0
// 005856c3: ADD ESP,0x100
//   Label: LAB_005856c3
// 005856c9: POP EBP
// 005856ca: POP EDI
// 005856cb: POP ESI
// 005856cc: POP EBX
// 005856cd: RET
// 005856ce: PUSH ESI
//   Label: LAB_005856ce
// 005856cf: PUSH 0xff
// 005856d4: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x110] (DATA)
// 005856d8: PUSH EAX
// 005856d9: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 005856de: ADD ESP,0xc
// 005856e1: JMP 0x00585455
//   XREF to: 00585455 (UNCONDITIONAL_JUMP)
// 005856e6: MOV dword ptr [EBX + 0x150],0x1
//   Label: LAB_005856e6
// 005856f0: MOV EBP,dword ptr [EAX + 0x15ac30]
//   XREF to: 0326eea8 (READ)
// 005856f6: ADD EAX,0x15ac30
// 005856fb: MOV dword ptr [EDI],EBP
// 005856fd: MOV ECX,EDI
// 005856ff: MOV EBP,dword ptr [EAX + 0x4]
//   XREF to: 0326eeac (READ)
// 00585702: MOV EDX,EAX
// 00585704: MOV dword ptr [EDI + 0x4],EBP
// 00585707: ADD EDI,0xc
// 0058570a: MOV EBP,dword ptr [EAX + 0x8]
//   XREF to: 0326eeb0 (READ)
// 0058570d: ADD EAX,0xc
// 00585710: MOV dword ptr [EDI + -0x4],EBP
// 00585713: CMP EDI,EAX
// 00585715: JZ 0x00585727
//   XREF to: 00585727 (CONDITIONAL_JUMP)
// 00585717: MOV EBP,dword ptr [EAX]
//   XREF to: 0326eeb4 (READ)
// 00585719: MOV dword ptr [EDI],EBP
// 0058571b: MOV EBP,dword ptr [EAX + 0x4]
//   XREF to: 0326eeb8 (READ)
// 0058571e: MOV dword ptr [EDI + 0x4],EBP
// 00585721: MOV EBP,dword ptr [EAX + 0x8]
//   XREF to: 0326eebc (READ)
// 00585724: MOV dword ptr [EDI + 0x8],EBP
// 00585727: MOV EAX,dword ptr [EDX + 0x18]
//   Label: LAB_00585727
//   XREF to: 0326eec0 (READ)
// 0058572a: MOV dword ptr [ECX + 0x18],EAX
// 0058572d: MOV EAX,dword ptr [EDX + 0x1c]
//   XREF to: 0326eec4 (READ)
// 00585730: MOV dword ptr [ECX + 0x1c],EAX
// 00585733: MOV EAX,dword ptr [EDX + 0x20]
//   XREF to: 0326eec8 (READ)
// 00585736: MOV dword ptr [ECX + 0x20],EAX
// 00585739: JMP 0x0058560a
//   XREF to: 0058560a (UNCONDITIONAL_JUMP)
// 0058573e: PUSH ESI
//   Label: LAB_0058573e
// 0058573f: PUSH 0xff
// 00585744: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x110] (DATA)
// 00585748: PUSH EAX
// 00585749: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 0058574e: ADD ESP,0xc
// 00585751: LEA EAX,[EBX + 0x140]
// 00585757: PUSH EAX
// 00585758: PUSH 0x649225
//   XREF to: 00649225 (DATA)
// 0058575d: PUSH ESI
// 0058575e: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00585763: MOV EBP,dword ptr [EBX + 0x140]
// 00585769: ADD ESP,0xc
// 0058576c: TEST EBP,EBP
// 0058576e: JZ 0x005856c3
//   XREF to: 005856c3 (CONDITIONAL_JUMP)
// 00585774: MOV EAX,0x649229
//   XREF to: 00649229 (PARAM)
// 00585779: MOV EDX,0xd5
// 0058577e: PUSH 0x64923d
//   XREF to: 0064923d (DATA)
// 00585783: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 00585788: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 0058578e: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00585793: ADD ESP,0x4
// 00585796: ADD ESP,0x100
// 0058579c: POP EBP
// 0058579d: POP EDI
// 0058579e: POP ESI
// 0058579f: POP EBX
// 005857a0: RET
