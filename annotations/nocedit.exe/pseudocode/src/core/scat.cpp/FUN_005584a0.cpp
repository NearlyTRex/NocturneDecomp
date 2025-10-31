// Name: core_scat.cpp_FUN_005584a0
// Address: 005584a0
// Address Range: [[005584a0, 00558718]]
// Convention: unknown
// Signature: undefined core_scat.cpp_FUN_005584a0()
// Cross-references:
//   core_scat.cpp_FUN_005582c0 (005582c0) at 00558486 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_00665998
//   undefined4 DAT_03106168
//   undefined4 DAT_0310616c
//   undefined4 DAT_03106170
//   undefined4 DAT_03106174
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059f750
//   core_xform.cpp_multiplyQuaternion_FUN_005f7640
//   core_xform.cpp_quaternionFromAngleX_FUN_005f79b0
//   core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
//   core_xform.cpp_quaternionFromAngleZ_FUN_005f7a30
//   core_xform.cpp_slerpQuaternion_FUN_005f77e0

#include "nocturne.h"

/* Signature: undefined1 actors_hero_scat.cpp_FUN_005584a0(undefined4 param_1, undefined4 param_2)
    */

void core_scat_cpp_FUN_005584a0(void)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  float *pfVar2;
  float *pfVar3;
  undefined4 *puVar4;
  byte bVar5;
  int unaff_retaddr;
  int in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_00000010;
  float afStackY_1924 [1520];
  float in_stack_fffffea0;
  float in_stack_fffffea4;
  CQuaternion4f *in_stack_fffffeac;
  CQuaternion4f *in_stack_fffffeb0;
  CQuaternion4f *in_stack_fffffeb4;
  CQuaternion4f *in_stack_fffffeb8;
  CQuaternion4f *in_stack_fffffebc;
  CQuaternion4f *in_stack_fffffec0;
  CQuaternion4f *in_stack_fffffec4;
  float fStack_138;
  CQuaternion4f local_11c;
  CQuaternion4f local_10c;
  float local_fc [5];
  undefined1 auStack_e8 [16];
  undefined4 uStack_d8;
  CQuaternion4f CStack_d4;
  float afStack_c4 [3];
  CQuaternion4f CStack_b8;
  float fStack_a8;
  float afStack_a4 [4];
  float afStack_94 [9];
  float fStack_70;
  float local_6c [11];
  float afStack_40 [8];
  undefined4 uStack_20;
  undefined4 local_1c [3];
  
  iVar1 = in_stack_00000004;
  bVar5 = 0;
  if (in_stack_00000008 == 0) {
    local_1c[0] = DAT_03106168;
    local_1c[1] = DAT_03106170;
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((CQuaternion4f *)0x3fc90fdb,in_stack_fffffea0);
    local_fc[0] = CStack_d4.z;
    local_fc[(uint)bVar5 * -2 + 1] = afStack_c4[(uint)bVar5 * -2];
    local_fc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 2] =
         afStack_c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    (local_fc + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 2)[(uint)bVar5 * -2 + 1] =
         (afStack_c4 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_005f7a30((CQuaternion4f *)0x3fc90fdb,in_stack_fffffea4);
    pfVar2 = &CStack_b8.x;
  }
  else {
    local_1c[0] = DAT_0310616c;
    local_1c[1] = DAT_03106174;
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((CQuaternion4f *)0xbfc90fdb,in_stack_fffffea0);
    local_fc[0] = fStack_a8;
    local_fc[(uint)bVar5 * -2 + 1] = afStack_a4[(uint)bVar5 * -2];
    local_fc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 2] =
         afStack_a4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    (local_fc + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 2)[(uint)bVar5 * -2 + 1] =
         (afStack_a4 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_005f7a30((CQuaternion4f *)0xbfc90fdb,in_stack_fffffea4);
    pfVar2 = afStack_a4 + 4;
  }
  pfVar3 = pfVar2 + (uint)bVar5 * -2 + 1;
  fStack_138 = *pfVar2;
  *(float *)(&stack0xfffffecc + (uint)bVar5 * -8) = *pfVar3;
  *(float *)(&stack0xfffffed0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) = pfVar3[(uint)bVar5 * -2 + 1];
  *(float *)((int)(&stack0xfffffed0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
            ((uint)bVar5 * -2 + 1) * 4) = (pfVar3 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  if (*(float *)(iVar1 + 0x2a90) <= 0.0) {
    return;
  }
  core_xform_cpp_quaternionFromAngleY_FUN_005f79f0
            (*(CQuaternion4f **)(iVar1 + 0x1fbf0),*(float *)(iVar1 + 0x2a90));
  local_10c.y = fStack_70;
  local_fc[(uint)bVar5 * -2 + -1] = local_6c[(uint)bVar5 * -2];
  local_fc[(uint)bVar5 * -2 + (uint)bVar5 * -2] = local_6c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  (local_fc + (uint)bVar5 * -2 + (uint)bVar5 * -2)[(uint)bVar5 * -2 + 1] =
       (local_6c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  core_xform_cpp_quaternionFromAngleX_FUN_005f79b0
            (*(CQuaternion4f **)(iVar1 + 0x1fbec),(float)&local_10c.z);
  local_11c.z = (float)in_stack_fffffec4;
  *(undefined4 *)((int)&local_10c + (uint)bVar5 * -8) =
       *(undefined4 *)((int)&stack0xfffffec8 + (uint)bVar5 * -8);
  local_fc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + -3] =
       *(float *)(&stack0xfffffecc + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  (local_fc + (uint)bVar5 * -2 + (uint)bVar5 * -2 + -3)[(uint)bVar5 * -2 + 1] =
       *(float *)((int)(&stack0xfffffecc + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
                 ((uint)bVar5 * -2 + 1) * 4);
  core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_10c,in_stack_fffffeac,in_stack_fffffeb0);
  local_11c.w = (float)in_stack_fffffeb8;
  puVar4 = (undefined4 *)((int)&local_11c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  *(undefined4 *)((int)&local_11c + (uint)bVar5 * -8 + 4) =
       *(undefined4 *)(&stack0xfffffebc + (uint)bVar5 * -8);
  *puVar4 = *(undefined4 *)(&stack0xfffffec0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  puVar4[(uint)bVar5 * -2 + 1] =
       *(undefined4 *)
        ((int)(&stack0xfffffec0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4)
  ;
  core_xform_cpp_slerpQuaternion_FUN_005f77e0
            ((CQuaternion4f *)&DAT_00665998,(CQuaternion4f *)auStack_e8,(CQuaternion4f *)0x3f733333,
             (float)&local_11c.x);
  uStack_d8 = afStack_40[3];
  *(float *)((int)&CStack_d4 + (uint)bVar5 * -8) = afStack_40[(uint)bVar5 * -2 + 4];
  afStack_c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + -3] =
       (float)local_1c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + -4];
  (afStack_c4 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + -3)[(uint)bVar5 * -2 + 1] =
       (float)(local_1c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + -4)[(uint)bVar5 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_005f7640(&CStack_d4,in_stack_fffffeb4,in_stack_fffffeb8);
  local_1c[2] = uStack_20;
  *(undefined4 *)(&stack0xfffffff0 + (uint)bVar5 * -8) = local_1c[(uint)bVar5 * -2];
  *(undefined4 *)(&stack0xfffffff4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       local_1c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  *(undefined4 *)
   ((int)(&stack0xfffffff4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4) =
       (local_1c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  core_xform_cpp_slerpQuaternion_FUN_005f77e0
            ((CQuaternion4f *)(iVar1 + 0x808 + unaff_retaddr * 0x10),
             (CQuaternion4f *)&stack0xfffffff0,in_stack_fffffebc,(float)in_stack_fffffebc);
  pfVar2 = (float *)(unaff_retaddr * 0x10 + 0x808 + iVar1);
  pfVar3 = pfVar2 + (uint)bVar5 * -2 + 1;
  *pfVar2 = local_6c[0];
  *pfVar3 = local_6c[(uint)bVar5 * -2 + 1];
  pfVar3[(uint)bVar5 * -2 + 1] = local_6c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 2];
  (pfVar3 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       (local_6c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 2)[(uint)bVar5 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_005f7640
            ((CQuaternion4f *)(auStack_e8 + 0xc),&local_11c,&local_10c);
  afStack_c4[2] = afStack_40[2];
  pfVar2 = (float *)((int)&CStack_b8 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 4);
  *(float *)((int)&CStack_b8 + (uint)bVar5 * -8) = afStack_40[(uint)bVar5 * -2 + 3];
  *pfVar2 = afStack_40[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  pfVar2[(uint)bVar5 * -2 + 1] =
       (afStack_40 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 4)[(uint)bVar5 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_005f7640(&CStack_b8,in_stack_fffffec0,in_stack_fffffec4);
  *(float *)(&stack0x00000000 + (uint)bVar5 * -8) = afStack_40[(uint)bVar5 * -2];
  (&stack0x00000004)[(uint)bVar5 * -2 + (uint)bVar5 * -2] =
       (int)afStack_40[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  (&stack0x00000004 + (uint)bVar5 * -2 + (uint)bVar5 * -2)[(uint)bVar5 * -2 + 1] =
       (int)(afStack_40 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_FUN_0059f750();
  return;
}


// Assembly code:
// 005584a0: PUSH EBX
//   Label: core_scat.cpp_FUN_005584a0
// 005584a1: PUSH ESI
// 005584a2: PUSH EDI
// 005584a3: PUSH EBP
// 005584a4: MOV EBP,ESP
// 005584a6: SUB ESP,0x14c
// 005584ac: AND ESP,0xfffffff8
// 005584af: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005584b2: CMP dword ptr [EBP + 0x18],0x0
//   XREF to: Stack[0x8] (READ)
// 005584b6: JZ 0x00558538
//   XREF to: 00558538 (CONDITIONAL_JUMP)
// 005584bc: MOV ESI,dword ptr [0x0310616c]
//   XREF to: 0310616c (READ)
// 005584c2: MOV dword ptr [ESP + 0x144],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 005584c9: MOV ESI,dword ptr [0x03106174]
//   XREF to: 03106174 (READ)
// 005584cf: PUSH 0xbfc90fdb
// 005584d4: MOV dword ptr [ESP + 0x14c],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 005584db: LEA ESI,[ESP + 0xb8]
//   XREF to: Stack[-0xac] (DATA)
// 005584e2: LEA EDI,[ESP + 0x68]
//   XREF to: Stack[-0xfc] (DATA)
// 005584e6: CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
//   XREF to: 005f79f0 (UNCONDITIONAL_CALL)
// 005584eb: LEA ESI,[ESP + 0xb8]
//   XREF to: Stack[-0xac] (DATA)
// 005584f2: ADD ESP,0x4
// 005584f5: MOVSD ES:EDI,ESI
// 005584f6: MOVSD ES:EDI,ESI
// 005584f7: MOVSD ES:EDI,ESI
// 005584f8: MOVSD ES:EDI,ESI
// 005584f9: PUSH 0xbfc90fdb
// 005584fe: LEA ESI,[ESP + 0xc8]
//   XREF to: Stack[-0x9c] (DATA)
// 00558505: LEA EDI,[ESP + 0x28]
//   XREF to: Stack[-0x13c] (DATA)
// 00558509: CALL core_xform.cpp_quaternionFromAngleZ_FUN_005f7a30
//   XREF to: 005f7a30 (UNCONDITIONAL_CALL)
// 0055850e: LEA ESI,[ESP + 0xc8]
//   XREF to: Stack[-0x9c] (DATA)
// 00558515: ADD ESP,0x4
//   Label: LAB_00558515
// 00558518: MOVSD ES:EDI,ESI
// 00558519: MOVSD ES:EDI,ESI
// 0055851a: MOVSD ES:EDI,ESI
// 0055851b: MOVSD ES:EDI,ESI
// 0055851c: MOV ESI,dword ptr [EBX + 0x2a90]
// 00558522: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x160] (DATA)
// 00558525: FLD float ptr [ESP]
//   XREF to: Stack[-0x160] (DATA)
// 00558528: FLDZ
// 0055852a: FCOMPP
// 0055852c: FNSTSW AX
// 0055852e: SAHF
// 0055852f: JC 0x00558593
//   XREF to: 00558593 (CONDITIONAL_JUMP)
// 00558531: MOV ESP,EBP
// 00558533: POP EBP
// 00558534: POP EDI
// 00558535: POP ESI
// 00558536: POP EBX
// 00558537: RET
// 00558538: MOV ESI,dword ptr [0x03106168]
//   Label: LAB_00558538
//   XREF to: 03106168 (READ)
// 0055853e: MOV dword ptr [ESP + 0x144],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 00558545: MOV ESI,dword ptr [0x03106170]
//   XREF to: 03106170 (READ)
// 0055854b: PUSH 0x3fc90fdb
// 00558550: MOV dword ptr [ESP + 0x14c],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 00558557: LEA ESI,[ESP + 0x98]
//   XREF to: Stack[-0xcc] (DATA)
// 0055855e: LEA EDI,[ESP + 0x68]
//   XREF to: Stack[-0xfc] (DATA)
// 00558562: CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
//   XREF to: 005f79f0 (UNCONDITIONAL_CALL)
// 00558567: LEA ESI,[ESP + 0x98]
//   XREF to: Stack[-0xcc] (DATA)
// 0055856e: ADD ESP,0x4
// 00558571: MOVSD ES:EDI,ESI
// 00558572: MOVSD ES:EDI,ESI
// 00558573: MOVSD ES:EDI,ESI
// 00558574: MOVSD ES:EDI,ESI
// 00558575: PUSH 0x3fc90fdb
// 0055857a: LEA ESI,[ESP + 0xa8]
//   XREF to: Stack[-0xbc] (DATA)
// 00558581: LEA EDI,[ESP + 0x28]
//   XREF to: Stack[-0x13c] (DATA)
// 00558585: CALL core_xform.cpp_quaternionFromAngleZ_FUN_005f7a30
//   XREF to: 005f7a30 (UNCONDITIONAL_CALL)
// 0055858a: LEA ESI,[ESP + 0xa8]
//   XREF to: Stack[-0xbc] (DATA)
// 00558591: JMP 0x00558515
//   XREF to: 00558515 (UNCONDITIONAL_JUMP)
// 00558593: PUSH dword ptr [EBX + 0x1fbf0]
//   Label: LAB_00558593
// 00558599: LEA ESI,[ESP + 0xe8]
//   XREF to: Stack[-0x7c] (DATA)
// 005585a0: LEA EDI,[ESP + 0x58]
//   XREF to: Stack[-0x10c] (DATA)
// 005585a4: CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
//   XREF to: 005f79f0 (UNCONDITIONAL_CALL)
// 005585a9: LEA ESI,[ESP + 0xe8]
//   XREF to: Stack[-0x7c] (DATA)
// 005585b0: ADD ESP,0x4
// 005585b3: MOVSD ES:EDI,ESI
// 005585b4: MOVSD ES:EDI,ESI
// 005585b5: MOVSD ES:EDI,ESI
// 005585b6: MOVSD ES:EDI,ESI
// 005585b7: LEA ESI,[ESP + 0x54]
//   XREF to: Stack[-0x10c] (DATA)
// 005585bb: PUSH ESI
// 005585bc: PUSH dword ptr [EBX + 0x1fbec]
// 005585c2: LEA ESI,[ESP + 0x1c]
//   XREF to: Stack[-0x14c] (DATA)
// 005585c6: LEA EDI,[ESP + 0x4c]
//   XREF to: Stack[-0x11c] (DATA)
// 005585ca: CALL core_xform.cpp_quaternionFromAngleX_FUN_005f79b0
//   XREF to: 005f79b0 (UNCONDITIONAL_CALL)
// 005585cf: LEA ESI,[ESP + 0x1c]
//   XREF to: Stack[-0x14c] (DATA)
// 005585d3: ADD ESP,0x4
// 005585d6: MOVSD ES:EDI,ESI
// 005585d7: MOVSD ES:EDI,ESI
// 005585d8: MOVSD ES:EDI,ESI
// 005585d9: MOVSD ES:EDI,ESI
// 005585da: LEA ESI,[ESP + 0x48]
//   XREF to: Stack[-0x11c] (DATA)
// 005585de: PUSH ESI
// 005585df: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0x15c] (DATA)
// 005585e3: LEA EDI,[ESP + 0x3c]
//   XREF to: Stack[-0x12c] (DATA)
// 005585e7: CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640
//   XREF to: 005f7640 (UNCONDITIONAL_CALL)
// 005585ec: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0x15c] (DATA)
// 005585f0: ADD ESP,0x8
// 005585f3: MOVSD ES:EDI,ESI
// 005585f4: MOVSD ES:EDI,ESI
// 005585f5: MOVSD ES:EDI,ESI
// 005585f6: MOVSD ES:EDI,ESI
// 005585f7: LEA ESI,[ESP + 0x34]
//   XREF to: Stack[-0x12c] (DATA)
// 005585fb: PUSH ESI
// 005585fc: LEA ESI,[ESP + 0x68]
//   XREF to: Stack[-0xfc] (DATA)
// 00558600: PUSH 0x3f733333
// 00558605: PUSH ESI
// 00558606: PUSH 0x665998
//   XREF to: 00665998 (DATA)
// 0055860b: LEA ESI,[ESP + 0x124]
//   XREF to: Stack[-0x4c] (DATA)
// 00558612: LEA EDI,[ESP + 0x84]
//   XREF to: Stack[-0xec] (DATA)
// 00558619: CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0
//   XREF to: 005f77e0 (UNCONDITIONAL_CALL)
// 0055861e: LEA ESI,[ESP + 0x124]
//   XREF to: Stack[-0x4c] (DATA)
// 00558625: ADD ESP,0xc
// 00558628: MOVSD ES:EDI,ESI
// 00558629: MOVSD ES:EDI,ESI
// 0055862a: MOVSD ES:EDI,ESI
// 0055862b: MOVSD ES:EDI,ESI
// 0055862c: LEA ESI,[ESP + 0x78]
//   XREF to: Stack[-0xec] (DATA)
// 00558630: PUSH ESI
// 00558631: LEA ESI,[ESP + 0x12c]
//   XREF to: Stack[-0x3c] (DATA)
// 00558638: LEA EDI,[ESP + 0x13c]
//   XREF to: Stack[-0x2c] (DATA)
// 0055863f: CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640
//   XREF to: 005f7640 (UNCONDITIONAL_CALL)
// 00558644: LEA ESI,[ESP + 0x12c]
//   XREF to: Stack[-0x3c] (DATA)
// 0055864b: ADD ESP,0x8
// 0055864e: MOVSD ES:EDI,ESI
// 0055864f: MOVSD ES:EDI,ESI
// 00558650: MOVSD ES:EDI,ESI
// 00558651: MOVSD ES:EDI,ESI
// 00558652: PUSH dword ptr [ESP]
//   XREF to: Stack[-0x160] (DATA)
// 00558655: LEA ESI,[ESP + 0x138]
//   XREF to: Stack[-0x2c] (DATA)
// 0055865c: MOV EDI,dword ptr [ESP + 0x148]
//   XREF to: Stack[-0x1c] (DATA)
// 00558663: PUSH ESI
// 00558664: SHL EDI,0x4
// 00558667: LEA ESI,[EBX + 0x808]
// 0055866d: ADD ESI,EDI
// 0055866f: PUSH ESI
// 00558670: LEA ESI,[ESP + 0xe0]
//   XREF to: Stack[-0x8c] (DATA)
// 00558677: CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0
//   XREF to: 005f77e0 (UNCONDITIONAL_CALL)
// 0055867c: LEA ESI,[ESP + 0xe0]
//   XREF to: Stack[-0x8c] (DATA)
// 00558683: LEA EDI,[EDI + EBX*0x1 + 0x808]
// 0055868a: ADD ESP,0xc
// 0055868d: MOVSD ES:EDI,ESI
// 0055868e: MOVSD ES:EDI,ESI
// 0055868f: MOVSD ES:EDI,ESI
// 00558690: MOVSD ES:EDI,ESI
// 00558691: LEA ESI,[ESP + 0x34]
//   XREF to: Stack[-0x12c] (DATA)
// 00558695: PUSH ESI
// 00558696: LEA ESI,[ESP + 0x28]
//   XREF to: Stack[-0x13c] (DATA)
// 0055869a: PUSH ESI
// 0055869b: LEA ESI,[ESP + 0x6c]
//   XREF to: Stack[-0xfc] (DATA)
// 0055869f: PUSH ESI
// 005586a0: LEA ESI,[ESP + 0x110]
//   XREF to: Stack[-0x5c] (DATA)
// 005586a7: LEA EDI,[ESP + 0x90]
//   XREF to: Stack[-0xdc] (DATA)
// 005586ae: CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640
//   XREF to: 005f7640 (UNCONDITIONAL_CALL)
// 005586b3: LEA ESI,[ESP + 0x110]
//   XREF to: Stack[-0x5c] (DATA)
// 005586ba: ADD ESP,0x8
// 005586bd: MOVSD ES:EDI,ESI
// 005586be: MOVSD ES:EDI,ESI
// 005586bf: MOVSD ES:EDI,ESI
// 005586c0: MOVSD ES:EDI,ESI
// 005586c1: LEA ESI,[ESP + 0x88]
//   XREF to: Stack[-0xdc] (DATA)
// 005586c8: PUSH ESI
// 005586c9: LEA ESI,[ESP + 0xfc]
//   XREF to: Stack[-0x6c] (DATA)
// 005586d0: CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640
//   XREF to: 005f7640 (UNCONDITIONAL_CALL)
// 005586d5: ADD ESP,0x8
// 005586d8: LEA EDI,[ESP + 0x134]
//   XREF to: Stack[-0x2c] (DATA)
// 005586df: LEA ESI,[ESP + 0xf4]
//   XREF to: Stack[-0x6c] (DATA)
// 005586e6: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 005586eb: MOV ECX,dword ptr [ESP + 0x14c]
//   XREF to: Stack[-0x18] (READ)
// 005586f2: MOVSD ES:EDI,ESI
// 005586f3: MOVSD ES:EDI,ESI
// 005586f4: MOVSD ES:EDI,ESI
// 005586f5: MOVSD ES:EDI,ESI
// 005586f6: PUSH ECX
// 005586f7: LEA ESI,[ESP + 0x13c]
//   XREF to: Stack[-0x2c] (DATA)
// 005586fe: PUSH dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x160] (READ)
// 00558702: PUSH ESI
// 00558703: ADD EBX,0x158
// 00558709: PUSH EBX
// 0055870a: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059f750
//   XREF to: 0059f750 (UNCONDITIONAL_CALL)
// 0055870f: ADD ESP,0x14
// 00558712: MOV ESP,EBP
// 00558714: POP EBP
// 00558715: POP EDI
// 00558716: POP ESI
// 00558717: POP EBX
// 00558718: RET
