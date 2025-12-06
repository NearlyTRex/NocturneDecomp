// Name: core_skeledit.cpp_CSkeleton_saveStream_FUN_0058b3a0
// Address: 0058b3a0
// Address Range: [[0058b3a0, 0058b658]]
// Convention: __cdecl
// Signature: void core_skeledit.cpp_CSkeleton_saveStream_FUN_0058b3a0(CSkeleton * this_ptr, FILE * file_handle)

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
                    (in_stack_00000010,"%g,%g,%g,%g\n",(double)fVar4,SUB84 /* extract 2-byte value */((double)*pfVar3,0),
                     (int)((ulonglong)(double)*pfVar3 >> 0x20),SUB84 /* extract 2-byte value */((double)*pfVar2,0),
                     (int)((ulonglong)(double)*pfVar2 >> 0x20),SUB84 /* extract 2-byte value */((double)*pfVar1,0),
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
                (in_stack_00000010,"%g,%g,%g\n","%g,%g,%g\n",SUB84 /* extract 2-byte value */(dVar6,0),
                 (int)((ulonglong)dVar6 >> 0x20),SUB84 /* extract 2-byte value */(dVar5,0),(int)((ulonglong)dVar5 >> 0x20),
                 SUB84 /* extract 2-byte value */((double)*(float *)((int)&psVar7->__reserve_end + iVar11),0));
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
                (in_stack_00000010,"%g,%g,%g\n","%g,%g,%g\n",SUB84 /* extract 2-byte value */(dVar6,0),
                 (int)((ulonglong)dVar6 >> 0x20),SUB84 /* extract 2-byte value */(dVar5,0),(int)((ulonglong)dVar5 >> 0x20));
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
                (in_stack_00000010,"%g,%g,%g\n","%g,%g,%g\n",SUB84 /* extract 2-byte value */((double)fVar4,0),
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
