// Name: core_setdir.cpp_CZThumb_saveZBufferTable_FUN_00574910
// Address: 00574910
// Address Range: [[00574910, 00574b1c]]
// Convention: __cdecl
// Signature: void core_setdir.cpp_CZThumb_saveZBufferTable_FUN_00574910(CZThumb * this_ptr, CVector3f * camera_pos, CVector3f * look_at_pos, int width, int height, float unknown_scale, FILE * file_handle)
// Globals:
//   TerminatedCString s_core_setdir_cpp_006463fe
//   TerminatedCString s_saveZBufferTable_already_00646411
//   TerminatedCString s_core_setdir_cpp_00646433
//   TerminatedCString s_saveZBufferTable_not_sav_00646446
//   TerminatedCString s_core_setdir_cpp_00646464
//   TerminatedCString s_core_setdir_cpp_00646477
//   TerminatedCString s_Out_of_memory_0064648a
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonRenderer g_CDemonRendererInstance
//   uint*[1024] g_ZBufferScanlineArray
//   undefined4 g_ZBufferScanlineArray[1]
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CDemonSet g_CDemonSetInstance
//   CVector3f g_VDTempVector
//   uint*[1024] g_ZBufferScanlineArrayBackup
//   undefined4 DAT_03363630
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
//   core_setdir.cpp_CZThumb_free_FUN_00574b50
//   core_setdir.cpp_CZThumb_popRenderingContext_FUN_00574ef0
//   core_setdir.cpp_CZThumb_pushRenderingContext_FUN_00574e70
//   core_setdir.cpp_CZThumb_setupZBufferScanlines_FUN_00574e30
//   crt_stdio.c_fread_FUN_005fd990
//   engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0048c420
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   wincore_windll.cpp_clearZBuffer_FUN_005b3ed4

#include "nocturne.h"

void __cdecl
core_setdir_cpp_CZThumb_saveZBufferTable_FUN_00574910
          (CZThumb *this_ptr,CVector3f *camera_pos,CVector3f *look_at_pos,int width,int height,
          float unknown_scale,FILE *file_handle)

{
  int iVar1;
  void *pvVar2;
  int value;
  int iVar3;
  int iVar4;
  FILE *in_stack_00000028;
  
  core_setdir_cpp_CZThumb_free_FUN_00574b50(this_ptr);
  if (&this_ptr->camera_position != camera_pos) {
    (this_ptr->camera_position).x = camera_pos->x;
    (this_ptr->camera_position).y = camera_pos->y;
    (this_ptr->camera_position).z = camera_pos->z;
  }
  if (&this_ptr->look_at_position != look_at_pos) {
    (this_ptr->look_at_position).x = look_at_pos->x;
    (this_ptr->look_at_position).y = look_at_pos->y;
    (this_ptr->look_at_position).z = look_at_pos->z;
  }
  this_ptr->width = height;
  this_ptr->height = (int)unknown_scale;
  this_ptr->projection_scale = (int)file_handle;
  pvVar2 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                     (this_ptr->width * this_ptr->height * 4,"..\\core\\setdir.cpp",0x9e);
  this_ptr->zbuffer_data = pvVar2;
  if (pvVar2 == (void *)0x0) {
    g_CurrentFilename = "..\\core\\setdir.cpp";
    g_CurrentLineNumber = 0x9f;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
  }
  if (in_stack_00000028 != (FILE *)0x0) {
    crt_stdio_c_fread_FUN_005fd990
              (this_ptr->zbuffer_data,this_ptr->width * this_ptr->height,4,in_stack_00000028);
    return;
  }
  value = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(g_CDemonRendererPtr,0);
  iVar1 = this_ptr->height;
  if (g_ZBufferScanlineArrayBackup[0] != (uint *)0x0) {
    g_CurrentFilename = "..\\core\\setdir.cpp";
    g_CurrentLineNumber = 0x67;
    core_main_c_displayErrorAndQuit_FUN_00506f10("saveZBufferTable - already saved!");
  }
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      iVar3 = iVar4 + 4;
      *(undefined4 *)((int)g_ZBufferScanlineArrayBackup + iVar4) =
           *(undefined4 *)((int)g_ZBufferScanlineArray + iVar4);
      iVar4 = iVar3;
    } while (SBORROW4(iVar3,iVar1 * 4) != iVar3 + iVar1 * -4 < 0);
  }
  core_setdir_cpp_CZThumb_setupZBufferScanlines_FUN_00574e30(this_ptr);
  core_setdir_cpp_CZThumb_pushRenderingContext_FUN_00574e70(this_ptr);
  engine_drender_cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0048c420
            (g_CDemonRendererPtr,&g_VDTempVector);
  wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
  core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(g_CDemonSetPtr,9999.9,0);
  core_setdir_cpp_CZThumb_popRenderingContext_FUN_00574ef0(this_ptr);
  iVar1 = this_ptr->height;
  if (g_ZBufferScanlineArrayBackup[0] == (uint *)0x0) {
    g_CurrentFilename = "..\\core\\setdir.cpp";
    g_CurrentLineNumber = 0x70;
    core_main_c_displayErrorAndQuit_FUN_00506f10("saveZBufferTable - not saved!");
  }
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      iVar3 = iVar4 + 4;
      *(undefined4 *)((int)g_ZBufferScanlineArray + iVar4) =
           *(undefined4 *)((int)g_ZBufferScanlineArrayBackup + iVar4);
      iVar4 = iVar3;
    } while (SBORROW4(iVar3,iVar1 * 4) != iVar3 + iVar1 * -4 < 0);
  }
  g_ZBufferScanlineArrayBackup[0] = (uint *)0x0;
  engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(g_CDemonRendererPtr,value);
  return;
}


// Assembly code:
// 00574910: PUSH EBX
//   Label: core_setdir.cpp_CZThumb_saveZBufferTable_FUN_00574910
// 00574911: PUSH ESI
// 00574912: PUSH EDI
// 00574913: PUSH EBP
// 00574914: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00574918: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0057491c: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00574920: PUSH ESI
// 00574921: CALL core_setdir.cpp_CZThumb_free_FUN_00574b50
//   XREF to: 00574b50 (UNCONDITIONAL_CALL)
// 00574926: LEA EAX,[ESI + 0x8]
// 00574929: ADD ESP,0x4
// 0057492c: CMP EAX,EDI
// 0057492e: JNZ 0x00574aed
//   XREF to: 00574aed (CONDITIONAL_JUMP)
// 00574934: LEA EAX,[ESI + 0x14]
//   Label: LAB_00574934
// 00574937: CMP EAX,EBX
// 00574939: JZ 0x0057494b
//   XREF to: 0057494b (CONDITIONAL_JUMP)
// 0057493b: MOV EDX,dword ptr [EBX]
// 0057493d: MOV dword ptr [EAX],EDX
// 0057493f: MOV EDX,dword ptr [EBX + 0x4]
// 00574942: MOV dword ptr [EAX + 0x4],EDX
// 00574945: MOV EDX,dword ptr [EBX + 0x8]
// 00574948: MOV dword ptr [EAX + 0x8],EDX
// 0057494b: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_0057494b
//   XREF to: Stack[0x10] (READ)
// 0057494f: MOV dword ptr [ESI],EAX
// 00574951: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 00574955: MOV dword ptr [ESI + 0x4],EAX
// 00574958: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 0057495c: MOV dword ptr [ESI + 0x20],EAX
// 0057495f: MOV EDX,dword ptr [ESI + 0x4]
// 00574962: MOV EAX,dword ptr [ESI]
// 00574964: IMUL EAX,EDX
// 00574967: PUSH 0x9e
// 0057496c: PUSH 0x646464
//   XREF to: 00646464 (DATA)
// 00574971: SHL EAX,0x2
// 00574974: PUSH EAX
// 00574975: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 0057497a: ADD ESP,0xc
// 0057497d: MOV dword ptr [ESI + 0x24],EAX
// 00574980: TEST EAX,EAX
// 00574982: JNZ 0x005749a7
//   XREF to: 005749a7 (CONDITIONAL_JUMP)
// 00574984: MOV EBX,0x646477
//   XREF to: 00646477 (PARAM)
// 00574989: MOV EDI,0x9f
// 0057498e: PUSH 0x64648a
//   XREF to: 0064648a (DATA)
// 00574993: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 00574999: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 0057499f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005749a4: ADD ESP,0x4
// 005749a7: MOV EBP,dword ptr [ESP + 0x2c]
//   Label: LAB_005749a7
//   XREF to: Stack[0x1c] (READ)
// 005749ab: TEST EBP,EBP
// 005749ad: JNZ 0x00574b02
//   XREF to: 00574b02 (CONDITIONAL_JUMP)
// 005749b3: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005749b9: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 005749ba: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 005749bf: ADD ESP,0x4
// 005749c2: PUSH EBP
// 005749c3: MOV EBP,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005749c9: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 005749ca: MOV EDI,EAX
// 005749cc: CALL engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0
//   XREF to: 0048cac0 (UNCONDITIONAL_CALL)
// 005749d1: MOV EAX,[0x0336362c]
//   XREF to: 0336362c (READ)
// 005749d6: ADD ESP,0x8
// 005749d9: MOV EBX,dword ptr [ESI + 0x4]
// 005749dc: TEST EAX,EAX
// 005749de: JZ 0x00574a03
//   XREF to: 00574a03 (CONDITIONAL_JUMP)
// 005749e0: MOV EDX,0x6463fe
//   XREF to: 006463fe (PARAM)
// 005749e5: MOV ECX,0x67
// 005749ea: PUSH 0x646411
//   XREF to: 00646411 (DATA)
// 005749ef: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 005749f5: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 005749fb: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00574a00: ADD ESP,0x4
// 00574a03: TEST EBX,EBX
//   Label: LAB_00574a03
// 00574a05: JLE 0x00574a30
//   XREF to: 00574a30 (CONDITIONAL_JUMP)
// 00574a07: LEA ECX,[EBX*0x4 + 0x0]
// 00574a0e: XOR EAX,EAX
// 00574a10: ADD EAX,0x4
//   Label: LAB_00574a10
// 00574a13: MOV EDX,dword ptr [EAX + 0x2cf7d58]
//   XREF to: 02cf7d5c (READ)
//   XREF to: 02cf7d60 (READ)
// 00574a19: MOV dword ptr [EAX + 0x3363628],EDX
//   XREF to: 0336362c (WRITE)
//   XREF to: 03363630 (WRITE)
// 00574a1f: CMP EAX,ECX
// 00574a21: JL 0x00574a10
//   XREF to: 00574a10 (CONDITIONAL_JUMP)
// 00574a23: LEA EAX,[EAX]
// 00574a29: LEA EDX,[EDX]
// 00574a2f: NOP
// 00574a30: PUSH ESI
//   Label: LAB_00574a30
// 00574a31: CALL core_setdir.cpp_CZThumb_setupZBufferScanlines_FUN_00574e30
//   XREF to: 00574e30 (UNCONDITIONAL_CALL)
// 00574a36: ADD ESP,0x4
// 00574a39: PUSH ESI
// 00574a3a: CALL core_setdir.cpp_CZThumb_pushRenderingContext_FUN_00574e70
//   XREF to: 00574e70 (UNCONDITIONAL_CALL)
// 00574a3f: ADD ESP,0x4
// 00574a42: PUSH 0x3346d14
//   XREF to: 03346d14 (DATA)
// 00574a47: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00574a4d: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 00574a4e: CALL engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0048c420
//   XREF to: 0048c420 (UNCONDITIONAL_CALL)
// 00574a53: ADD ESP,0x8
// 00574a56: CALL wincore_windll.cpp_clearZBuffer_FUN_005b3ed4
//   XREF to: 005b3ed4 (UNCONDITIONAL_CALL)
// 00574a5b: PUSH 0x0
// 00574a5d: MOV EBP,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 00574a63: PUSH 0x461c3f9a
// 00574a68: PUSH EBP
//   XREF to: 03114278 (DATA)
// 00574a69: CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
//   XREF to: 0056a190 (UNCONDITIONAL_CALL)
// 00574a6e: ADD ESP,0xc
// 00574a71: PUSH ESI
// 00574a72: CALL core_setdir.cpp_CZThumb_popRenderingContext_FUN_00574ef0
//   XREF to: 00574ef0 (UNCONDITIONAL_CALL)
// 00574a77: MOV EAX,[0x0336362c]
//   XREF to: 0336362c (READ)
// 00574a7c: ADD ESP,0x4
// 00574a7f: MOV ESI,dword ptr [ESI + 0x4]
// 00574a82: TEST EAX,EAX
// 00574a84: JNZ 0x00574aa9
//   XREF to: 00574aa9 (CONDITIONAL_JUMP)
// 00574a86: MOV EDX,0x646433
//   XREF to: 00646433 (PARAM)
// 00574a8b: MOV ECX,0x70
// 00574a90: PUSH 0x646446
//   XREF to: 00646446 (DATA)
// 00574a95: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00574a9b: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00574aa1: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00574aa6: ADD ESP,0x4
// 00574aa9: TEST ESI,ESI
//   Label: LAB_00574aa9
// 00574aab: JLE 0x00574ad0
//   XREF to: 00574ad0 (CONDITIONAL_JUMP)
// 00574aad: LEA ECX,[ESI*0x4 + 0x0]
// 00574ab4: XOR EAX,EAX
// 00574ab6: ADD EAX,0x4
//   Label: LAB_00574ab6
// 00574ab9: MOV EDX,dword ptr [EAX + 0x3363628]
//   XREF to: 0336362c (READ)
//   XREF to: 03363630 (READ)
// 00574abf: MOV dword ptr [EAX + 0x2cf7d58],EDX
//   XREF to: 02cf7d5c (WRITE)
//   XREF to: 02cf7d60 (WRITE)
// 00574ac5: CMP EAX,ECX
// 00574ac7: JL 0x00574ab6
//   XREF to: 00574ab6 (CONDITIONAL_JUMP)
// 00574ac9: LEA EAX,[EAX]
// 00574acf: NOP
// 00574ad0: PUSH EDI
//   Label: LAB_00574ad0
// 00574ad1: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00574ad7: XOR EBX,EBX
// 00574ad9: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 00574ada: MOV dword ptr [0x0336362c],EBX
//   XREF to: 0336362c (WRITE)
// 00574ae0: CALL engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0
//   XREF to: 0048cac0 (UNCONDITIONAL_CALL)
// 00574ae5: ADD ESP,0x8
// 00574ae8: POP EBP
// 00574ae9: POP EDI
// 00574aea: POP ESI
// 00574aeb: POP EBX
// 00574aec: RET
// 00574aed: MOV EDX,dword ptr [EDI]
//   Label: LAB_00574aed
// 00574aef: MOV dword ptr [EAX],EDX
// 00574af1: MOV EDX,dword ptr [EDI + 0x4]
// 00574af4: MOV dword ptr [EAX + 0x4],EDX
// 00574af7: MOV EDX,dword ptr [EDI + 0x8]
// 00574afa: MOV dword ptr [EAX + 0x8],EDX
// 00574afd: JMP 0x00574934
//   XREF to: 00574934 (UNCONDITIONAL_JUMP)
// 00574b02: MOV EAX,dword ptr [ESI]
//   Label: LAB_00574b02
// 00574b04: IMUL EAX,dword ptr [ESI + 0x4]
// 00574b08: PUSH EBP
// 00574b09: PUSH 0x4
// 00574b0b: PUSH EAX
// 00574b0c: MOV ECX,dword ptr [ESI + 0x24]
// 00574b0f: PUSH ECX
// 00574b10: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 00574b15: ADD ESP,0x10
// 00574b18: POP EBP
// 00574b19: POP EDI
// 00574b1a: POP ESI
// 00574b1b: POP EBX
// 00574b1c: RET
