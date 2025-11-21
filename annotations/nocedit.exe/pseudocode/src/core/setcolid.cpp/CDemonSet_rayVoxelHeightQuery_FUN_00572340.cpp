// Name: core_setcolid.cpp_CDemonSet_rayVoxelHeightQuery_FUN_00572340
// Address: 00572340
// Address Range: [[00572340, 00572457]]
// Convention: __cdecl
// Signature: float core_setcolid.cpp_CDemonSet_rayVoxelHeightQuery_FUN_00572340(CDemonSet * this_ptr, CVector3f * position)
// Cross-references:
//   core_sound.cpp_updateListeners_FUN_005b1870 (005b1870) at 005b1e4f [UNCONDITIONAL_CALL]
// Globals:
//   float g_RayOffsetForStart = -1
//   float g_RayOffsetForEnd = 150
//   CDemonRaytrace g_CDemonRaytraceInstance
// Function calls:
//   core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
//   core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_00572a10

#include "nocturne.h"

float __cdecl
core_setcolid_cpp_CDemonSet_rayVoxelHeightQuery_FUN_00572340
          (CDemonSet *this_ptr,CVector3f *position)

{
  float fVar1;
  BADSPACEBASE *in_ESP;
  undefined1 local_2c [8];
  float local_24;
  undefined1 local_20 [8];
  float local_18;
  float local_14;
  float fStack_c;
  
  if ((CVector3f *)local_20 != position) {
    local_20._0_4_ = position->x;
    local_20._4_4_ = position->y;
    local_18 = position->z;
  }
  if ((CVector3f *)local_2c != position) {
    local_2c._0_4_ = position->x;
    local_2c._4_4_ = position->y;
    local_24 = position->z;
  }
  local_20._4_4_ = (float)local_20._4_4_ + g_RayOffsetForStart;
  local_2c._4_4_ = (float)local_2c._4_4_ + g_RayOffsetForEnd;
  fStack_c = core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
                       (&g_CDemonRaytraceInstance,(CVector3f *)local_20,(CVector3f *)local_2c,
                        &this_ptr->collision_normal,&this_ptr->ground_type);
  local_2c._0_4_ = fStack_c;
  if (fStack_c < 0.0) {
    local_2c._0_4_ = 1.01;
  }
  if (((float)local_2c._0_4_ < 1.0) && (this_ptr->ground_type == 0)) {
    this_ptr->ground_type = this_ptr->default_ground_type;
  }
  fVar1 = core_setcolid_cpp_CDemonSet_raycastAgainstActors_FUN_00572a10
                    (this_ptr,-1.0,(CVector3f *)(local_20 + 4),(CVector3f *)(local_2c + 4),
                     (float)local_2c._0_4_);
  return ((float)local_20._0_4_ - local_14) * fVar1 + local_14;
}


// Assembly code:
// 00572340: PUSH EBX
//   Label: core_setcolid.cpp_CDemonSet_rayVoxelHeightQuery_FUN_00572340
// 00572341: PUSH EBP
// 00572342: MOV EBP,ESP
// 00572344: SUB ESP,0x24
// 00572347: AND ESP,0xfffffff8
// 0057234a: MOV EBX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0057234d: MOV EDX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00572350: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x20] (DATA)
// 00572354: CMP EAX,EDX
// 00572356: JNZ 0x0057243f
//   XREF to: 0057243f (CONDITIONAL_JUMP)
// 0057235c: LEA EAX,[ESP + 0x4]
//   Label: LAB_0057235c
//   XREF to: Stack[-0x2c] (DATA)
// 00572360: CMP EAX,EDX
// 00572362: JZ 0x00572378
//   XREF to: 00572378 (CONDITIONAL_JUMP)
// 00572364: MOV EAX,dword ptr [EDX]
// 00572366: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0057236a: MOV EAX,dword ptr [EDX + 0x4]
// 0057236d: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00572371: MOV EAX,dword ptr [EDX + 0x8]
// 00572374: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00572378: LEA EAX,[EBX + 0x14d134]
//   Label: LAB_00572378
// 0057237e: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (READ)
// 00572382: PUSH EAX
// 00572383: LEA EAX,[EBX + 0x14d128]
// 00572389: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x28] (READ)
// 0057238d: PUSH EAX
// 0057238e: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x2c] (DATA)
// 00572392: FXCH
// 00572394: FADD float ptr [0x0064624e]
//   XREF to: 0064624e (READ)
// 0057239a: PUSH EAX
// 0057239b: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x20] (DATA)
// 0057239f: FXCH
// 005723a1: FADD float ptr [0x00646252]
//   XREF to: 00646252 (READ)
// 005723a7: PUSH EAX
// 005723a8: FXCH
// 005723aa: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (WRITE)
// 005723ae: PUSH 0x3277d14
//   XREF to: 03277d14 (DATA)
// 005723b3: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x28] (WRITE)
// 005723b7: CALL core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
//   XREF to: 00495b70 (UNCONDITIONAL_CALL)
// 005723bc: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 005723c0: FLD float ptr [ESP + 0x34]
//   XREF to: Stack[-0x10] (READ)
// 005723c4: ADD ESP,0x14
// 005723c7: FST float ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 005723ca: FLDZ
// 005723cc: FCOMPP
// 005723ce: FNSTSW AX
// 005723d0: SAHF
// 005723d1: JBE 0x005723da
//   XREF to: 005723da (CONDITIONAL_JUMP)
// 005723d3: MOV dword ptr [ESP],0x3f8147ae
//   XREF to: Stack[-0x30] (DATA)
// 005723da: FLD float ptr [ESP]
//   Label: LAB_005723da
//   XREF to: Stack[-0x30] (DATA)
// 005723dd: FLD1
// 005723df: FCOMPP
// 005723e1: FNSTSW AX
// 005723e3: SAHF
// 005723e4: JBE 0x005723fb
//   XREF to: 005723fb (CONDITIONAL_JUMP)
// 005723e6: CMP dword ptr [EBX + 0x14d134],0x0
// 005723ed: JNZ 0x005723fb
//   XREF to: 005723fb (CONDITIONAL_JUMP)
// 005723ef: MOV EAX,dword ptr [EBX + 0x15f67c]
// 005723f5: MOV dword ptr [EBX + 0x14d134],EAX
// 005723fb: LEA EAX,[ESP + 0x4]
//   Label: LAB_005723fb
//   XREF to: Stack[-0x2c] (DATA)
// 005723ff: PUSH dword ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 00572402: PUSH EAX
// 00572403: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x20] (DATA)
// 00572407: PUSH EAX
// 00572408: PUSH 0xbf800000
// 0057240d: PUSH EBX
// 0057240e: CALL core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_00572a10
//   XREF to: 00572a10 (UNCONDITIONAL_CALL)
// 00572413: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 00572417: FLD float ptr [ESP + 0x34]
//   XREF to: Stack[-0x10] (READ)
// 0057241b: ADD ESP,0x14
// 0057241e: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 00572422: FSUB float ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (READ)
// 00572426: FXCH
// 00572428: FSTP float ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 0057242b: FMUL float ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 0057242e: FADD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (READ)
// 00572432: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (WRITE)
// 00572436: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 0057243a: MOV ESP,EBP
// 0057243c: POP EBP
// 0057243d: POP EBX
// 0057243e: RET
// 0057243f: MOV EAX,dword ptr [EDX]
//   Label: LAB_0057243f
// 00572441: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00572445: MOV EAX,dword ptr [EDX + 0x4]
// 00572448: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0057244c: MOV EAX,dword ptr [EDX + 0x8]
// 0057244f: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00572453: JMP 0x0057235c
//   XREF to: 0057235c (UNCONDITIONAL_JUMP)
