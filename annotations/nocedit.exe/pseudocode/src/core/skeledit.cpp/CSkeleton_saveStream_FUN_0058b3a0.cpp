// Name: core_skeledit.cpp_CSkeleton_saveStream_FUN_0058b3a0
// Address: 0058b3a0
// Address Range: [[0058b3a0, 0058b658]]
// Convention: __cdecl
// Signature: void core_skeledit.cpp_CSkeleton_saveStream_FUN_0058b3a0(CSkeleton * this_ptr, FILE * file_handle)
// Cross-references:
//   core_skeledit.cpp_CSkeleton_save_FUN_0058b2c0 (0058b2c0) at 0058b33e [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_skeleton_version_0064a658
//   TerminatedCString s_d_0064a66d
//   TerminatedCString s_bonecount_frameCount_0064a671
//   TerminatedCString s_d_d_0064a68b
//   TerminatedCString s_boneList_0064a692
//   TerminatedCString s_s_d_0064a69f
//   TerminatedCString s_angle_list_w_x_y_z_0064a6a9
//   TerminatedCString s_g_g_g_g_0064a6c1
//   TerminatedCString s_root_offset_list_x_y_z_0064a6ce
//   TerminatedCString s_g_g_g_0064a6ea
//   TerminatedCString s_canceled_movement_list_x_0064a6f4
//   TerminatedCString s_g_g_g_0064a716
//   TerminatedCString s_reference_bone_org_list__0064a720
//   TerminatedCString s_g_g_g_0064a743
//   TerminatedCString s_core_skeledit_cpp_0064a74d
//   TerminatedCString s_CSkeleton_saveStream_err_0064a762
//   undefined4 g_CSkeletonVersion
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_motion.cpp_CMotionList_save_FUN_0052d170
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

void __cdecl
core_skeledit_cpp_CSkeleton_saveStream_FUN_0058b3a0(CSkeleton *this_ptr,FILE *file_handle)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  streambuf *psVar7;
  uint *puVar8;
  float *pfVar9;
  int *piVar10;
  int iVar11;
  FILE *in_stack_00000010;
  int iStack00000014;
  FILE *pFVar12;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x4c);
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000010,"// skeleton version\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000010,"%d\n",g_CSkeletonVersion);
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000010,"// bonecount, frameCount\n");
  crt_stdio_c_fprintf_FUN_005fe6d0
            (in_stack_00000010,"%d,%d\n",file_handle[0x170c]._link,file_handle[0x178d]._ptr);
  iVar11 = 0;
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000010,"// boneList\n");
  if (0 < (int)file_handle[0x170c]._link) {
    puVar8 = &file_handle[0x170c]._flag;
    pFVar12 = file_handle;
    do {
      crt_stdio_c_fprintf_FUN_005fe6d0
                (in_stack_00000010,"\"%s\", %d\n","\"%s\", %d\n",puVar8,pFVar12[0x170d]._handle);
      iVar11 = iVar11 + 1;
      puVar8 = puVar8 + 9;
      pFVar12 = (FILE *)&pFVar12[1]._link;
    } while (iVar11 < (int)file_handle[0x170c]._link);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000010,"// angle list: w,x,y,z\n");
  pfVar9 = (float *)file_handle[0x178d]._cnt;
  this_ptr = (CSkeleton *)0x0;
  if (0 < (int)file_handle[0x178d]._ptr) {
    do {
      iVar11 = 0;
      if (0 < (int)file_handle[0x170c]._link) {
        do {
          pfVar1 = pfVar9 + 3;
          pfVar2 = pfVar9 + 2;
          pfVar3 = pfVar9 + 1;
          fVar4 = *pfVar9;
          pfVar9 = pfVar9 + 4;
          iVar11 = iVar11 + 1;
          crt_stdio_c_fprintf_FUN_005fe6d0
                    (in_stack_00000010,"%g,%g,%g,%g\n",(double)fVar4,SUB84((double)*pfVar3,0),
                     (int)((ulonglong)(double)*pfVar3 >> 0x20),SUB84((double)*pfVar2,0),
                     (int)((ulonglong)(double)*pfVar2 >> 0x20),SUB84((double)*pfVar1,0),
                     (int)((ulonglong)(double)*pfVar1 >> 0x20));
        } while (iVar11 < (int)file_handle[0x170c]._link);
      }
      this_ptr = (CSkeleton *)((int)&(this_ptr->motion_list).state_count + 1);
    } while ((int)this_ptr < (int)file_handle[0x178d]._ptr);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000010,"// root offset list: x,y,z\n");
  this_ptr = (CSkeleton *)0x0;
  if (0 < (int)file_handle[0x178d]._ptr) {
    iVar11 = 0;
    do {
      psVar7 = file_handle[0x178d]._link;
      dVar5 = (double)*(float *)((int)&psVar7->__reserve_base + iVar11);
      dVar6 = (double)*(float *)((int)&psVar7->__b_lock + iVar11);
      crt_stdio_c_fprintf_FUN_005fe6d0
                (in_stack_00000010,"%g,%g,%g\n","%g,%g,%g\n",SUB84(dVar6,0),
                 (int)((ulonglong)dVar6 >> 0x20),SUB84(dVar5,0),(int)((ulonglong)dVar5 >> 0x20),
                 SUB84((double)*(float *)((int)&psVar7->__reserve_end + iVar11),0));
      iVar11 = iVar11 + 0xc;
      this_ptr = (CSkeleton *)((int)&(this_ptr->motion_list).state_count + 1);
    } while ((int)this_ptr < (int)file_handle[0x178d]._ptr);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000010,"// canceled movement list: x,y,z\n");
  iStack00000014 = 0;
  if (0 < (int)file_handle[0x178d]._ptr) {
    iVar11 = 0;
    do {
      dVar5 = (double)*(float *)(iVar11 + 4 + file_handle[0x178d]._flag);
      dVar6 = (double)*(float *)(iVar11 + file_handle[0x178d]._flag);
      crt_stdio_c_fprintf_FUN_005fe6d0
                (in_stack_00000010,"%g,%g,%g\n","%g,%g,%g\n",SUB84(dVar6,0),
                 (int)((ulonglong)dVar6 >> 0x20),SUB84(dVar5,0),(int)((ulonglong)dVar5 >> 0x20));
      iVar11 = iVar11 + 0xc;
      iStack00000014 = iStack00000014 + 1;
    } while (iStack00000014 < (int)file_handle[0x178d]._ptr);
  }
  core_motion_cpp_CMotionList_save_FUN_0052d170((CMotionList *)file_handle,in_stack_00000010);
  iVar11 = 0;
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000010,"// reference bone org list: x,y,z\n");
  if (0 < (int)file_handle[0x170c]._link) {
    piVar10 = &file_handle[0x178d]._handle;
    do {
      fVar4 = (float)*piVar10;
      piVar10 = piVar10 + 3;
      iVar11 = iVar11 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0
                (in_stack_00000010,"%g,%g,%g\n","%g,%g,%g\n",SUB84((double)fVar4,0),
                 (int)((ulonglong)(double)fVar4 >> 0x20));
    } while (iVar11 < (int)file_handle[0x170c]._link);
  }
  if ((in_stack_00000010->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x49f;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CSkeleton::saveStream - error writing file.");
    return;
  }
  return;
}


// Assembly code:
// 0058b3a0: PUSH 0x4c
//   Label: core_skeledit.cpp_CSkeleton_saveStream_FUN_0058b3a0
// 0058b3a5: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0058b3aa: PUSH EBX
// 0058b3ab: PUSH ESI
// 0058b3ac: PUSH EDI
// 0058b3ad: PUSH EBP
// 0058b3ae: SUB ESP,0x10
// 0058b3b1: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 0058b3b5: MOV EBP,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 0058b3b9: PUSH 0x64a658
//   XREF to: 0064a658 (DATA)
// 0058b3be: PUSH EBP
// 0058b3bf: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058b3c4: ADD ESP,0x8
// 0058b3c7: MOV EDX,dword ptr [0x00681860]
//   XREF to: 00681860 (READ)
// 0058b3cd: PUSH EDX
// 0058b3ce: PUSH 0x64a66d
//   XREF to: 0064a66d (DATA)
// 0058b3d3: PUSH EBP
// 0058b3d4: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058b3d9: ADD ESP,0xc
// 0058b3dc: PUSH 0x64a671
//   XREF to: 0064a671 (DATA)
// 0058b3e1: PUSH EBP
// 0058b3e2: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058b3e7: ADD ESP,0x8
// 0058b3ea: MOV ECX,dword ptr [EDI + 0x2936c]
// 0058b3f0: PUSH ECX
// 0058b3f1: MOV EBX,dword ptr [EDI + 0x28558]
// 0058b3f7: PUSH EBX
// 0058b3f8: PUSH 0x64a68b
//   XREF to: 0064a68b (DATA)
// 0058b3fd: PUSH EBP
// 0058b3fe: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058b403: ADD ESP,0x10
// 0058b406: PUSH 0x64a692
//   XREF to: 0064a692 (DATA)
// 0058b40b: PUSH EBP
// 0058b40c: XOR ESI,ESI
// 0058b40e: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058b413: MOV EAX,dword ptr [EDI + 0x28558]
// 0058b419: ADD ESP,0x8
// 0058b41c: TEST EAX,EAX
// 0058b41e: JLE 0x0058b460
//   XREF to: 0058b460 (CONDITIONAL_JUMP)
// 0058b420: LEA EBX,[EDI + 0x2855c]
// 0058b426: MOV dword ptr [ESP],EDI
//   XREF to: Stack[-0x20] (DATA)
// 0058b429: MOV EAX,dword ptr [ESP]
//   Label: LAB_0058b429
//   XREF to: Stack[-0x20] (DATA)
// 0058b42c: MOV EDX,dword ptr [EAX + 0x2857c]
// 0058b432: PUSH EDX
// 0058b433: PUSH EBX
// 0058b434: PUSH 0x64a69f
//   XREF to: 0064a69f (DATA)
// 0058b439: PUSH EBP
// 0058b43a: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058b43f: ADD ESP,0x10
// 0058b442: INC ESI
// 0058b443: MOV ECX,dword ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0058b446: ADD EBX,0x24
// 0058b449: ADD ECX,0x24
// 0058b44c: MOV EAX,dword ptr [EDI + 0x28558]
// 0058b452: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x20] (DATA)
// 0058b455: CMP ESI,EAX
// 0058b457: JL 0x0058b429
//   XREF to: 0058b429 (CONDITIONAL_JUMP)
// 0058b459: LEA EAX,[EAX]
// 0058b45f: NOP
// 0058b460: PUSH 0x64a6a9
//   Label: LAB_0058b460
//   XREF to: 0064a6a9 (DATA)
// 0058b465: PUSH EBP
// 0058b466: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058b46b: ADD ESP,0x8
// 0058b46e: MOV EBX,dword ptr [EDI + 0x29370]
// 0058b474: XOR EDX,EDX
// 0058b476: MOV ECX,dword ptr [EDI + 0x2936c]
// 0058b47c: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0058b480: TEST ECX,ECX
// 0058b482: JLE 0x0058b4e2
//   XREF to: 0058b4e2 (CONDITIONAL_JUMP)
// 0058b484: MOV EAX,dword ptr [EDI + 0x28558]
//   Label: LAB_0058b484
// 0058b48a: XOR ESI,ESI
// 0058b48c: TEST EAX,EAX
// 0058b48e: JLE 0x0058b4cf
//   XREF to: 0058b4cf (CONDITIONAL_JUMP)
// 0058b490: SUB ESP,0x8
//   Label: LAB_0058b490
// 0058b493: FLD float ptr [EBX + 0xc]
// 0058b496: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0058b499: SUB ESP,0x8
// 0058b49c: FLD float ptr [EBX + 0x8]
// 0058b49f: FSTP double ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 0058b4a2: SUB ESP,0x8
// 0058b4a5: FLD float ptr [EBX + 0x4]
// 0058b4a8: FSTP double ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 0058b4ab: SUB ESP,0x8
// 0058b4ae: FLD float ptr [EBX]
// 0058b4b0: FSTP double ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 0058b4b3: PUSH 0x64a6c1
//   XREF to: 0064a6c1 (DATA)
// 0058b4b8: PUSH EBP
// 0058b4b9: ADD EBX,0x10
// 0058b4bc: INC ESI
// 0058b4bd: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058b4c2: MOV EAX,dword ptr [EDI + 0x28558]
// 0058b4c8: ADD ESP,0x28
// 0058b4cb: CMP ESI,EAX
// 0058b4cd: JL 0x0058b490
//   XREF to: 0058b490 (CONDITIONAL_JUMP)
// 0058b4cf: MOV ESI,dword ptr [ESP + 0x8]
//   Label: LAB_0058b4cf
//   XREF to: Stack[-0x18] (READ)
// 0058b4d3: INC ESI
// 0058b4d4: MOV EAX,dword ptr [EDI + 0x2936c]
// 0058b4da: MOV dword ptr [ESP + 0x8],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 0058b4de: CMP ESI,EAX
// 0058b4e0: JL 0x0058b484
//   XREF to: 0058b484 (CONDITIONAL_JUMP)
// 0058b4e2: PUSH 0x64a6ce
//   Label: LAB_0058b4e2
//   XREF to: 0064a6ce (DATA)
// 0058b4e7: PUSH EBP
// 0058b4e8: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058b4ed: ADD ESP,0x8
// 0058b4f0: XOR EDX,EDX
// 0058b4f2: MOV ECX,dword ptr [EDI + 0x2936c]
// 0058b4f8: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0058b4fc: TEST ECX,ECX
// 0058b4fe: JLE 0x0058b550
//   XREF to: 0058b550 (CONDITIONAL_JUMP)
// 0058b500: XOR ESI,ESI
// 0058b502: MOV EBX,dword ptr [EDI + 0x29374]
//   Label: LAB_0058b502
// 0058b508: SUB ESP,0x8
// 0058b50b: FLD float ptr [ESI + EBX*0x1 + 0x8]
// 0058b50f: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0058b512: SUB ESP,0x8
// 0058b515: FLD float ptr [ESI + EBX*0x1 + 0x4]
// 0058b519: FSTP double ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 0058b51c: SUB ESP,0x8
// 0058b51f: FLD float ptr [ESI + EBX*0x1]
// 0058b522: FSTP double ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 0058b525: PUSH 0x64a6ea
//   XREF to: 0064a6ea (DATA)
// 0058b52a: PUSH EBP
// 0058b52b: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058b530: ADD ESP,0x20
// 0058b533: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (READ)
// 0058b537: ADD ESI,0xc
// 0058b53a: INC EDX
// 0058b53b: MOV ECX,dword ptr [EDI + 0x2936c]
// 0058b541: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0058b545: CMP EDX,ECX
// 0058b547: JL 0x0058b502
//   XREF to: 0058b502 (CONDITIONAL_JUMP)
// 0058b549: LEA EAX,[EAX]
// 0058b54f: NOP
// 0058b550: PUSH 0x64a6f4
//   Label: LAB_0058b550
//   XREF to: 0064a6f4 (DATA)
// 0058b555: PUSH EBP
// 0058b556: XOR EBX,EBX
// 0058b558: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058b55d: ADD ESP,0x8
// 0058b560: MOV ESI,dword ptr [EDI + 0x2936c]
// 0058b566: MOV dword ptr [ESP + 0xc],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 0058b56a: TEST ESI,ESI
// 0058b56c: JLE 0x0058b5c0
//   XREF to: 0058b5c0 (CONDITIONAL_JUMP)
// 0058b56e: XOR ESI,ESI
// 0058b570: MOV EBX,dword ptr [EDI + 0x29378]
//   Label: LAB_0058b570
// 0058b576: SUB ESP,0x8
// 0058b579: FLD float ptr [ESI + EBX*0x1 + 0x8]
// 0058b57d: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0058b580: SUB ESP,0x8
// 0058b583: FLD float ptr [ESI + EBX*0x1 + 0x4]
// 0058b587: FSTP double ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 0058b58a: SUB ESP,0x8
// 0058b58d: FLD float ptr [ESI + EBX*0x1]
// 0058b590: FSTP double ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 0058b593: PUSH 0x64a716
//   XREF to: 0064a716 (DATA)
// 0058b598: PUSH EBP
// 0058b599: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058b59e: ADD ESP,0x20
// 0058b5a1: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 0058b5a5: ADD ESI,0xc
// 0058b5a8: INC EAX
// 0058b5a9: MOV EDX,dword ptr [EDI + 0x2936c]
// 0058b5af: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0058b5b3: CMP EAX,EDX
// 0058b5b5: JL 0x0058b570
//   XREF to: 0058b570 (CONDITIONAL_JUMP)
// 0058b5b7: LEA EAX,[EAX]
// 0058b5bd: LEA EDX,[EDX]
// 0058b5c0: PUSH EBP
//   Label: LAB_0058b5c0
// 0058b5c1: PUSH EDI
// 0058b5c2: CALL core_motion.cpp_CMotionList_save_FUN_0052d170
//   XREF to: 0052d170 (UNCONDITIONAL_CALL)
// 0058b5c7: ADD ESP,0x8
// 0058b5ca: PUSH 0x64a720
//   XREF to: 0064a720 (DATA)
// 0058b5cf: PUSH EBP
// 0058b5d0: XOR ESI,ESI
// 0058b5d2: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058b5d7: MOV ECX,dword ptr [EDI + 0x28558]
// 0058b5dd: ADD ESP,0x8
// 0058b5e0: TEST ECX,ECX
// 0058b5e2: JLE 0x0058b620
//   XREF to: 0058b620 (CONDITIONAL_JUMP)
// 0058b5e4: LEA EBX,[EDI + 0x2937c]
// 0058b5ea: SUB ESP,0x8
//   Label: LAB_0058b5ea
// 0058b5ed: FLD float ptr [EBX + 0x8]
// 0058b5f0: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0058b5f3: SUB ESP,0x8
// 0058b5f6: FLD float ptr [EBX + 0x4]
// 0058b5f9: FSTP double ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 0058b5fc: SUB ESP,0x8
// 0058b5ff: FLD float ptr [EBX]
// 0058b601: FSTP double ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 0058b604: PUSH 0x64a743
//   XREF to: 0064a743 (DATA)
// 0058b609: PUSH EBP
// 0058b60a: ADD EBX,0xc
// 0058b60d: INC ESI
// 0058b60e: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058b613: MOV EAX,dword ptr [EDI + 0x28558]
// 0058b619: ADD ESP,0x20
// 0058b61c: CMP ESI,EAX
// 0058b61e: JL 0x0058b5ea
//   XREF to: 0058b5ea (CONDITIONAL_JUMP)
// 0058b620: TEST byte ptr [EBP + 0xc],0x20
//   Label: LAB_0058b620
// 0058b624: JNZ 0x0058b62e
//   XREF to: 0058b62e (CONDITIONAL_JUMP)
// 0058b626: ADD ESP,0x10
// 0058b629: POP EBP
// 0058b62a: POP EDI
// 0058b62b: POP ESI
// 0058b62c: POP EBX
// 0058b62d: RET
// 0058b62e: MOV EDX,0x64a74d
//   Label: LAB_0058b62e
//   XREF to: 0064a74d (DATA)
// 0058b633: MOV ECX,0x49f
// 0058b638: PUSH 0x64a762
//   XREF to: 0064a762 (DATA)
// 0058b63d: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0058b643: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0058b649: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0058b64e: ADD ESP,0x4
// 0058b651: ADD ESP,0x10
// 0058b654: POP EBP
// 0058b655: POP EDI
// 0058b656: POP ESI
// 0058b657: POP EBX
// 0058b658: RET
