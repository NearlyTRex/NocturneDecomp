// Name: core_ghoul.cpp_FUN_004e82d0
// Address: 004e82d0
// Address Range: [[004e82d0, 004e8495]]
// Convention: unknown
// Signature: undefined core_ghoul.cpp_FUN_004e82d0()
// Globals:
//   float FLOAT_0062de5a = 0.5
//   undefined4 DAT_02d83300
//   undefined4 DAT_02d83304
//   undefined4 DAT_02d83308
//   undefined4 DAT_02d8330c
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
//   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_ghoul.cpp_FUN_004e82d0(undefined4 param_1, undefined4 param_2)
    */

undefined4 core_ghoul_cpp_FUN_004e82d0(void)

{
  float fVar1;
  CVector3f *pCVar2;
  CVector3f *pCVar3;
  CDeformableModelInstance *this_ptr;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  CVector3f *in_stack_00000008;
  CDemonActor *in_stack_00000018;
  CVector3f aCStack_80 [2];
  float local_68;
  float local_64;
  float local_60;
  CVector3f local_5c;
  float local_50;
  float local_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  CVector3f CStack_3c;
  float local_28;
  float local_24;
  float local_20;
  float fStack_14;
  float local_10;
  
  this_ptr = (CDeformableModelInstance *)(in_stack_00000004 + 0x158);
  fVar1 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                    ((CMotionController *)this_ptr,0xb);
  if (fVar1 <= 0.0) {
    return 0;
  }
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (this_ptr,&CStack_3c,DAT_02d83300);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (this_ptr,aCStack_80,DAT_02d83308);
  local_28 = pCVar3->x + pCVar2->x;
  local_24 = pCVar3->y + pCVar2->y;
  local_4c = local_28 * FLOAT_0062de5a;
  local_20 = pCVar3->z + pCVar2->z;
  fStack_48 = local_24 * FLOAT_0062de5a;
  fStack_44 = local_20 * FLOAT_0062de5a;
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (this_ptr,(CVector3f *)&stack0xffffff78,DAT_02d83304);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (this_ptr,&CStack_3c,DAT_02d8330c);
  local_68 = pCVar3->x + pCVar2->x;
  local_64 = pCVar3->y + pCVar2->y;
  local_50 = local_68 * FLOAT_0062de5a;
  local_4c = local_64 * FLOAT_0062de5a;
  local_60 = pCVar3->z + pCVar2->z;
  fStack_14 = fStack_44 + local_50;
  fStack_48 = local_60 * FLOAT_0062de5a;
  local_5c.x = fStack_14 * FLOAT_0062de5a;
  local_10 = local_40 + local_4c;
  local_5c.y = local_10 * FLOAT_0062de5a;
  local_5c.z = (CStack_3c.x + fStack_48) * FLOAT_0062de5a;
  pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     (in_stack_00000018,(CVector3f *)&stack0xfffffff8,&local_5c);
  if (in_stack_00000008 != pCVar2) {
    in_stack_00000008->x = pCVar2->x;
    in_stack_00000008->y = pCVar2->y;
    in_stack_00000008->z = pCVar2->z;
  }
  return 1;
}


// Assembly code:
// 004e82d0: PUSH EBX
//   Label: core_ghoul.cpp_FUN_004e82d0
// 004e82d1: PUSH EDI
// 004e82d2: PUSH EBP
// 004e82d3: SUB ESP,0x88
// 004e82d9: MOV EDI,dword ptr [ESP + 0x9c]
//   XREF to: Stack[0x8] (READ)
// 004e82e0: MOV EBX,dword ptr [ESP + 0x98]
//   XREF to: Stack[0x4] (READ)
// 004e82e7: PUSH 0xb
// 004e82e9: ADD EBX,0x158
// 004e82ef: PUSH EBX
// 004e82f0: CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 004e82f5: MOV dword ptr [ESP + 0x8c],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 004e82fc: FLD float ptr [ESP + 0x8c]
//   XREF to: Stack[-0x10] (READ)
// 004e8303: FLDZ
// 004e8305: ADD ESP,0x8
// 004e8308: FCOMPP
// 004e830a: FNSTSW AX
// 004e830c: SAHF
// 004e830d: JC 0x004e831b
//   XREF to: 004e831b (CONDITIONAL_JUMP)
// 004e830f: XOR EAX,EAX
// 004e8311: ADD ESP,0x88
// 004e8317: POP EBP
// 004e8318: POP EDI
// 004e8319: POP EBX
// 004e831a: RET
// 004e831b: PUSH ESI
//   Label: LAB_004e831b
// 004e831c: MOV EDX,dword ptr [0x02d83300]
//   XREF to: 02d83300 (READ)
// 004e8322: PUSH EDX
// 004e8323: LEA EAX,[ESP + 0x5c]
//   XREF to: Stack[-0x40] (DATA)
// 004e8327: PUSH EAX
// 004e8328: PUSH EBX
// 004e8329: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 004e832e: ADD ESP,0xc
// 004e8331: MOV ECX,dword ptr [0x02d83308]
//   XREF to: 02d83308 (READ)
// 004e8337: PUSH ECX
// 004e8338: MOV ESI,EAX
// 004e833a: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x88] (DATA)
// 004e833e: PUSH EAX
// 004e833f: PUSH EBX
// 004e8340: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 004e8345: FLD float ptr [EAX]
// 004e8347: FADD float ptr [ESI]
// 004e8349: ADD ESP,0xc
// 004e834c: FST float ptr [ESP + 0x64]
//   XREF to: Stack[-0x34] (WRITE)
// 004e8350: FLD float ptr [EAX + 0x4]
// 004e8353: FADD float ptr [ESI + 0x4]
// 004e8356: FXCH
// 004e8358: FMUL float ptr [0x0062de5a]
//   XREF to: 0062de5a (READ)
// 004e835e: FXCH
// 004e8360: FST float ptr [ESP + 0x68]
//   XREF to: Stack[-0x30] (WRITE)
// 004e8364: FLD float ptr [EAX + 0x8]
// 004e8367: FADD float ptr [ESI + 0x8]
// 004e836a: FXCH
// 004e836c: FMUL float ptr [0x0062de5a]
//   XREF to: 0062de5a (READ)
// 004e8372: FXCH
// 004e8374: FST float ptr [ESP + 0x6c]
//   XREF to: Stack[-0x2c] (WRITE)
// 004e8378: FMUL float ptr [0x0062de5a]
//   XREF to: 0062de5a (READ)
// 004e837e: MOV ESI,dword ptr [0x02d83304]
//   XREF to: 02d83304 (READ)
// 004e8384: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x94] (DATA)
// 004e8388: PUSH ESI
// 004e8389: FXCH ST2
// 004e838b: FSTP float ptr [ESP + 0x44]
//   XREF to: Stack[-0x58] (WRITE)
// 004e838f: PUSH EAX
// 004e8390: FSTP float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x54] (WRITE)
// 004e8394: PUSH EBX
// 004e8395: FSTP float ptr [ESP + 0x54]
//   XREF to: Stack[-0x50] (WRITE)
// 004e8399: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 004e839e: ADD ESP,0xc
// 004e83a1: MOV EBP,dword ptr [0x02d8330c]
//   XREF to: 02d8330c (READ)
// 004e83a7: PUSH EBP
// 004e83a8: MOV ESI,EAX
// 004e83aa: LEA EAX,[ESP + 0x50]
//   XREF to: Stack[-0x4c] (DATA)
// 004e83ae: PUSH EAX
// 004e83af: PUSH EBX
// 004e83b0: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 004e83b5: FLD float ptr [EAX]
// 004e83b7: FADD float ptr [ESI]
// 004e83b9: ADD ESP,0xc
// 004e83bc: FST float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x7c] (WRITE)
// 004e83c0: FLD float ptr [EAX + 0x4]
// 004e83c3: FADD float ptr [ESI + 0x4]
// 004e83c6: FXCH
// 004e83c8: FMUL float ptr [0x0062de5a]
//   XREF to: 0062de5a (READ)
// 004e83ce: FXCH
// 004e83d0: FST float ptr [ESP + 0x20]
//   XREF to: Stack[-0x78] (WRITE)
// 004e83d4: FMUL float ptr [0x0062de5a]
//   XREF to: 0062de5a (READ)
// 004e83da: FLD float ptr [EAX + 0x8]
// 004e83dd: FADD float ptr [ESI + 0x8]
// 004e83e0: FLD float ptr [ESP + 0x40]
//   XREF to: Stack[-0x58] (READ)
// 004e83e4: FXCH
// 004e83e6: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x74] (WRITE)
// 004e83ea: FXCH ST2
// 004e83ec: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x64] (WRITE)
// 004e83f0: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x74] (READ)
// 004e83f4: FXCH ST2
// 004e83f6: FADD float ptr [ESP + 0x34]
//   XREF to: Stack[-0x64] (READ)
// 004e83fa: FXCH ST2
// 004e83fc: FMUL float ptr [0x0062de5a]
//   XREF to: 0062de5a (READ)
// 004e8402: FXCH ST2
// 004e8404: FST float ptr [ESP + 0x70]
//   XREF to: Stack[-0x28] (WRITE)
// 004e8408: FMUL float ptr [0x0062de5a]
//   XREF to: 0062de5a (READ)
// 004e840e: FLD float ptr [ESP + 0x44]
//   XREF to: Stack[-0x54] (READ)
// 004e8412: FXCH ST2
// 004e8414: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x60] (WRITE)
// 004e8418: FXCH
// 004e841a: FADD float ptr [ESP + 0x38]
//   XREF to: Stack[-0x60] (READ)
// 004e841e: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0x70] (DATA)
// 004e8422: FST float ptr [ESP + 0x74]
//   XREF to: Stack[-0x24] (WRITE)
// 004e8426: FMUL float ptr [0x0062de5a]
//   XREF to: 0062de5a (READ)
// 004e842c: PUSH EAX
// 004e842d: LEA EAX,[ESP + 0x80]
//   XREF to: Stack[-0x1c] (DATA)
// 004e8434: FLD float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x50] (READ)
// 004e8438: PUSH EAX
// 004e8439: FXCH ST3
// 004e843b: FSTP float ptr [ESP + 0x44]
//   XREF to: Stack[-0x5c] (WRITE)
// 004e843f: FXCH ST2
// 004e8441: FADD float ptr [ESP + 0x44]
//   XREF to: Stack[-0x5c] (READ)
// 004e8445: MOV EAX,dword ptr [ESP + 0xa4]
//   XREF to: Stack[0x4] (READ)
// 004e844c: FST float ptr [ESP + 0x80]
//   XREF to: Stack[-0x20] (WRITE)
// 004e8453: FMUL float ptr [0x0062de5a]
//   XREF to: 0062de5a (READ)
// 004e8459: PUSH EAX
// 004e845a: FXCH
// 004e845c: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x70] (WRITE)
// 004e8460: FXCH
// 004e8462: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x6c] (WRITE)
// 004e8466: FSTP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x68] (WRITE)
// 004e846a: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004e846f: ADD ESP,0xc
// 004e8472: CMP EDI,EAX
// 004e8474: JZ 0x004e8486
//   XREF to: 004e8486 (CONDITIONAL_JUMP)
// 004e8476: MOV EDX,dword ptr [EAX]
// 004e8478: MOV dword ptr [EDI],EDX
// 004e847a: MOV EDX,dword ptr [EAX + 0x4]
// 004e847d: MOV dword ptr [EDI + 0x4],EDX
// 004e8480: MOV EDX,dword ptr [EAX + 0x8]
// 004e8483: MOV dword ptr [EDI + 0x8],EDX
// 004e8486: MOV EAX,0x1
//   Label: LAB_004e8486
// 004e848b: POP ESI
// 004e848c: ADD ESP,0x88
// 004e8492: POP EBP
// 004e8493: POP EDI
// 004e8494: POP EBX
// 004e8495: RET
