// Name: core_glass.cpp_FUN_004eaef0
// Address: 004eaef0
// Address Range: [[004eaef0, 004eb247]]
// Convention: unknown
// Signature: undefined core_glass.cpp_FUN_004eaef0()
// Cross-references:
//   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210 (0040a210) at 0040a6c3 [UNCONDITIONAL_CALL]
//   core_crossbow.cpp_FUN_00448f20 (00448f20) at 004494e5 [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_process_FUN_004e98e0 (004e98e0) at 004e9919 [UNCONDITIONAL_CALL]
//   core_gun.cpp_FUN_004f0350 (004f0350) at 004f0a57 [UNCONDITIONAL_CALL]
//   core_hiram.cpp_FUN_004f4550 (004f4550) at 004f4644 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056b810 (0056b810) at 0056bbe7 [UNCONDITIONAL_CALL]
//   core_tommygun.cpp_FUN_005ddb30 (005ddb30) at 005de270 [UNCONDITIONAL_CALL]
//   core_turret.cpp_FUN_005e3750 (005e3750) at 005e3c02 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 s_7YEARS.RAW_0062e0e9
//   undefined4 s_YEARS.RAW_0062e0ea
//   undefined4 s_EARS.RAW_0062e0eb
//   undefined4 s_ARS.RAW_0062e0ec
//   TerminatedCString s_glass_1_wav_2_0_0062e0f4
//   double DOUBLE_0062e109 = 0.5
//   WatcomTypeInfo g_CVectorTypeInfo
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   int g_CurrentTextureDimension = 0x100
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 DAT_00f80000
//   undefined4 DAT_00fe0000
//   CDemonRenderer g_CDemonRendererInstance
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   core_glass.cpp_FUN_004ea1c0
//   core_set.cpp_CDemonSet_FUN_00570c60
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80

#include "nocturne.h"

void core_glass_cpp_FUN_004eaef0(void)

{
  char cVar1;
  CVector3f *pCVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  char *pcVar4;
  int in_stack_00000004;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  CVector3f local_7c;
  CVector3f local_70;
  CVector3f local_64;
  float local_58;
  float local_54;
  float local_50;
  CVector3f local_4c;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  CVector3f local_1c;
  
  if (*(int *)(in_stack_00000004 + 0x180) == 0) {
    *(undefined4 *)(in_stack_00000004 + 0x180) = 1;
    if (*(int *)(in_stack_00000004 + 0x1e8) != 0) {
      pcVar3 = ">7YEARS.RAW" + 1;
      pcVar4 = (char *)(in_stack_00000004 + 0x16c);
      *(undefined4 *)(in_stack_00000004 + 0x17c) = 0xffff;
      do {
        cVar1 = *pcVar3;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
      core_set_cpp_CDemonSet_FUN_00570c60(g_CDemonSetPtr);
    }
    crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(&local_cc,4,&g_CVectorTypeInfo);
    local_1c.x = *(float *)(in_stack_00000004 + 0x158) * (float)DOUBLE_0062e109;
    local_1c.y = 0.0;
    local_1c.z = 0.0;
    pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       ((CMatrix3x3f *)(in_stack_00000004 + 0x3c),&local_4c,&local_1c);
    local_40 = *(float *)(in_stack_00000004 + 0x20) + pCVar2->x;
    local_3c = *(float *)(in_stack_00000004 + 0x24) + pCVar2->y;
    local_38 = *(float *)(in_stack_00000004 + 0x28) + pCVar2->z;
    if (&local_cc != &local_40) {
      local_cc = local_40;
      local_c8 = local_3c;
      local_c4 = local_38;
    }
    local_1c.y = local_1c.y + *(float *)(in_stack_00000004 + 0x15c);
    pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       ((CMatrix3x3f *)(in_stack_00000004 + 0x3c),&local_7c,&local_1c);
    local_58 = *(float *)(in_stack_00000004 + 0x20) + pCVar2->x;
    local_54 = *(float *)(in_stack_00000004 + 0x24) + pCVar2->y;
    local_50 = *(float *)(in_stack_00000004 + 0x28) + pCVar2->z;
    if (&local_c0 != &local_58) {
      local_c0 = local_58;
      local_bc = local_54;
      local_b8 = local_50;
    }
    local_1c.x = -local_1c.x;
    pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       ((CMatrix3x3f *)(in_stack_00000004 + 0x3c),&local_64,&local_1c);
    local_34 = *(float *)(in_stack_00000004 + 0x20) + pCVar2->x;
    local_30 = *(float *)(in_stack_00000004 + 0x24) + pCVar2->y;
    local_2c = *(float *)(in_stack_00000004 + 0x28) + pCVar2->z;
    if (&local_b4 != &local_34) {
      local_b4 = local_34;
      local_b0 = local_30;
      local_ac = local_2c;
    }
    local_1c.y = 0.0;
    pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       ((CMatrix3x3f *)(in_stack_00000004 + 0x3c),&local_70,&local_1c);
    local_28 = *(float *)(in_stack_00000004 + 0x20) + pCVar2->x;
    local_24 = *(float *)(in_stack_00000004 + 0x24) + pCVar2->y;
    local_20 = *(float *)(in_stack_00000004 + 0x28) + pCVar2->z;
    if (&local_a8 != &local_28) {
      local_a8 = local_28;
      local_a4 = local_24;
      local_a0 = local_20;
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr,(SMRGLTextureBasic *)(in_stack_00000004 + 0x164));
    if (g_CurrentTextureDimension == 0x40) {
      local_8c = 0xf80000;
      local_98 = 0x80000;
      local_88 = 0x80000;
      local_94 = 0xf80000;
      local_84 = 0x80000;
      local_90 = 0xf80000;
      local_80 = 0xf80000;
      local_9c = 0x80000;
    }
    else {
      local_8c = 0xfe0000;
      local_98 = 0x20000;
      local_88 = 0x20000;
      local_94 = 0xfe0000;
      local_84 = 0x20000;
      local_90 = 0xfe0000;
      local_80 = 0xfe0000;
      local_9c = 0x20000;
    }
    core_glass_cpp_FUN_004ea1c0();
    (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
    if (*(int *)(in_stack_00000004 + 0x370) != 0) {
      *(undefined4 *)(in_stack_00000004 + 0xb3c) = 1;
      return;
    }
  }
  return;
}


// Assembly code:
// 004eaef0: PUSH EBX
//   Label: core_glass.cpp_FUN_004eaef0
// 004eaef1: PUSH ESI
// 004eaef2: PUSH EDI
// 004eaef3: PUSH EBP
// 004eaef4: SUB ESP,0xbc
// 004eaefa: MOV EBX,dword ptr [ESP + 0xd0]
//   XREF to: Stack[0x4] (READ)
// 004eaf01: CMP dword ptr [EBX + 0x180],0x0
// 004eaf08: JNZ 0x004eb1b6
//   XREF to: 004eb1b6 (CONDITIONAL_JUMP)
// 004eaf0e: MOV ECX,dword ptr [EBX + 0x1e8]
// 004eaf14: MOV dword ptr [EBX + 0x180],0x1
// 004eaf1e: TEST ECX,ECX
// 004eaf20: JNZ 0x004eb1c1
//   XREF to: 004eb1c1 (CONDITIONAL_JUMP)
// 004eaf26: PUSH 0x6598c0
//   Label: LAB_004eaf26
//   XREF to: 006598c0 (DATA)
// 004eaf2b: PUSH 0x4
// 004eaf2d: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0xcc] (DATA)
// 004eaf31: PUSH EAX
// 004eaf32: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 004eaf37: FLD float ptr [EBX + 0x158]
// 004eaf3d: FMUL double ptr [0x0062e109]
//   XREF to: 0062e109 (READ)
// 004eaf43: ADD ESP,0xc
// 004eaf46: LEA EAX,[ESP + 0xb0]
//   XREF to: Stack[-0x1c] (DATA)
// 004eaf4d: XOR EDI,EDI
// 004eaf4f: PUSH EAX
// 004eaf50: LEA EAX,[ESP + 0x84]
//   XREF to: Stack[-0x4c] (DATA)
// 004eaf57: MOV dword ptr [ESP + 0xb8],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 004eaf5e: PUSH EAX
// 004eaf5f: LEA EAX,[EBX + 0x3c]
// 004eaf62: MOV dword ptr [ESP + 0xc0],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 004eaf69: PUSH EAX
// 004eaf6a: FSTP float ptr [ESP + 0xbc]
//   XREF to: Stack[-0x1c] (WRITE)
// 004eaf71: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 004eaf76: LEA EDX,[EBX + 0x20]
// 004eaf79: FLD float ptr [EDX]
// 004eaf7b: FADD float ptr [EAX]
// 004eaf7d: ADD ESP,0xc
// 004eaf80: FSTP float ptr [ESP + 0x8c]
//   XREF to: Stack[-0x40] (WRITE)
// 004eaf87: FLD float ptr [EDX + 0x4]
// 004eaf8a: FADD float ptr [EAX + 0x4]
// 004eaf8d: FSTP float ptr [ESP + 0x90]
//   XREF to: Stack[-0x3c] (WRITE)
// 004eaf94: FLD float ptr [EDX + 0x8]
// 004eaf97: MOV EDX,ESP
// 004eaf99: FADD float ptr [EAX + 0x8]
// 004eaf9c: LEA EAX,[ESP + 0x8c]
//   XREF to: Stack[-0x40] (DATA)
// 004eafa3: FSTP float ptr [ESP + 0x94]
//   XREF to: Stack[-0x38] (WRITE)
// 004eafaa: CMP EDX,EAX
// 004eafac: JZ 0x004eafce
//   XREF to: 004eafce (CONDITIONAL_JUMP)
// 004eafae: MOV EAX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x40] (DATA)
// 004eafb5: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0xcc] (DATA)
// 004eafb8: MOV EAX,dword ptr [ESP + 0x90]
//   XREF to: Stack[-0x3c] (READ)
// 004eafbf: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0xc8] (WRITE)
// 004eafc3: MOV EAX,dword ptr [ESP + 0x94]
//   XREF to: Stack[-0x38] (READ)
// 004eafca: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0xc4] (WRITE)
// 004eafce: LEA EAX,[ESP + 0xb0]
//   Label: LAB_004eafce
//   XREF to: Stack[-0x1c] (DATA)
// 004eafd5: PUSH EAX
// 004eafd6: LEA EAX,[ESP + 0x54]
//   XREF to: Stack[-0x7c] (DATA)
// 004eafda: FLD float ptr [ESP + 0xb8]
//   XREF to: Stack[-0x18] (READ)
// 004eafe1: PUSH EAX
// 004eafe2: LEA EAX,[EBX + 0x3c]
// 004eafe5: FADD float ptr [EBX + 0x15c]
// 004eafeb: PUSH EAX
// 004eafec: FSTP float ptr [ESP + 0xc0]
//   XREF to: Stack[-0x18] (WRITE)
// 004eaff3: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 004eaff8: LEA EDX,[EBX + 0x20]
// 004eaffb: FLD float ptr [EDX]
// 004eaffd: FADD float ptr [EAX]
// 004eafff: ADD ESP,0xc
// 004eb002: FSTP float ptr [ESP + 0x74]
//   XREF to: Stack[-0x58] (WRITE)
// 004eb006: FLD float ptr [EDX + 0x4]
// 004eb009: FADD float ptr [EAX + 0x4]
// 004eb00c: FSTP float ptr [ESP + 0x78]
//   XREF to: Stack[-0x54] (WRITE)
// 004eb010: FLD float ptr [EDX + 0x8]
// 004eb013: LEA EDX,[ESP + 0x74]
//   XREF to: Stack[-0x58] (DATA)
// 004eb017: FADD float ptr [EAX + 0x8]
// 004eb01a: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0xc0] (DATA)
// 004eb01e: FSTP float ptr [ESP + 0x7c]
//   XREF to: Stack[-0x50] (WRITE)
// 004eb022: CMP EAX,EDX
// 004eb024: JZ 0x004eb03e
//   XREF to: 004eb03e (CONDITIONAL_JUMP)
// 004eb026: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x58] (READ)
// 004eb02a: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0xc0] (WRITE)
// 004eb02e: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x54] (READ)
// 004eb032: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0xbc] (WRITE)
// 004eb036: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x50] (READ)
// 004eb03a: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0xb8] (WRITE)
// 004eb03e: XOR byte ptr [ESP + 0xb3],0x80
//   Label: LAB_004eb03e
//   XREF to: Stack[-0x19] (READ_WRITE)
// 004eb046: LEA EAX,[ESP + 0xb0]
//   XREF to: Stack[-0x1c] (DATA)
// 004eb04d: PUSH EAX
// 004eb04e: LEA EAX,[ESP + 0x6c]
//   XREF to: Stack[-0x64] (DATA)
// 004eb052: PUSH EAX
// 004eb053: LEA EAX,[EBX + 0x3c]
// 004eb056: PUSH EAX
// 004eb057: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 004eb05c: LEA EDX,[EBX + 0x20]
// 004eb05f: FLD float ptr [EDX]
// 004eb061: FADD float ptr [EAX]
// 004eb063: ADD ESP,0xc
// 004eb066: FSTP float ptr [ESP + 0x98]
//   XREF to: Stack[-0x34] (WRITE)
// 004eb06d: FLD float ptr [EDX + 0x4]
// 004eb070: FADD float ptr [EAX + 0x4]
// 004eb073: FSTP float ptr [ESP + 0x9c]
//   XREF to: Stack[-0x30] (WRITE)
// 004eb07a: FLD float ptr [EDX + 0x8]
// 004eb07d: LEA EDX,[ESP + 0x18]
//   XREF to: Stack[-0xb4] (DATA)
// 004eb081: FADD float ptr [EAX + 0x8]
// 004eb084: LEA EAX,[ESP + 0x98]
//   XREF to: Stack[-0x34] (DATA)
// 004eb08b: FSTP float ptr [ESP + 0xa0]
//   XREF to: Stack[-0x2c] (WRITE)
// 004eb092: CMP EDX,EAX
// 004eb094: JZ 0x004eb0b7
//   XREF to: 004eb0b7 (CONDITIONAL_JUMP)
// 004eb096: MOV EAX,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x34] (DATA)
// 004eb09d: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0xb4] (WRITE)
// 004eb0a1: MOV EAX,dword ptr [ESP + 0x9c]
//   XREF to: Stack[-0x30] (READ)
// 004eb0a8: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0xb0] (WRITE)
// 004eb0ac: MOV EAX,dword ptr [ESP + 0xa0]
//   XREF to: Stack[-0x2c] (READ)
// 004eb0b3: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0xac] (WRITE)
// 004eb0b7: XOR EAX,EAX
//   Label: LAB_004eb0b7
// 004eb0b9: MOV dword ptr [ESP + 0xb4],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004eb0c0: LEA EAX,[ESP + 0xb0]
//   XREF to: Stack[-0x1c] (DATA)
// 004eb0c7: PUSH EAX
// 004eb0c8: LEA EAX,[ESP + 0x60]
//   XREF to: Stack[-0x70] (DATA)
// 004eb0cc: PUSH EAX
// 004eb0cd: LEA EAX,[EBX + 0x3c]
// 004eb0d0: PUSH EAX
// 004eb0d1: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 004eb0d6: LEA EDX,[EBX + 0x20]
// 004eb0d9: FLD float ptr [EDX]
// 004eb0db: FADD float ptr [EAX]
// 004eb0dd: ADD ESP,0xc
// 004eb0e0: FSTP float ptr [ESP + 0xa4]
//   XREF to: Stack[-0x28] (WRITE)
// 004eb0e7: FLD float ptr [EDX + 0x4]
// 004eb0ea: FADD float ptr [EAX + 0x4]
// 004eb0ed: FSTP float ptr [ESP + 0xa8]
//   XREF to: Stack[-0x24] (WRITE)
// 004eb0f4: FLD float ptr [EDX + 0x8]
// 004eb0f7: LEA EDX,[ESP + 0x24]
//   XREF to: Stack[-0xa8] (DATA)
// 004eb0fb: FADD float ptr [EAX + 0x8]
// 004eb0fe: LEA EAX,[ESP + 0xa4]
//   XREF to: Stack[-0x28] (DATA)
// 004eb105: FSTP float ptr [ESP + 0xac]
//   XREF to: Stack[-0x20] (WRITE)
// 004eb10c: CMP EDX,EAX
// 004eb10e: JZ 0x004eb131
//   XREF to: 004eb131 (CONDITIONAL_JUMP)
// 004eb110: MOV EAX,dword ptr [ESP + 0xa4]
//   XREF to: Stack[-0x28] (DATA)
// 004eb117: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0xa8] (WRITE)
// 004eb11b: MOV EAX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[-0x24] (READ)
// 004eb122: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0xa4] (WRITE)
// 004eb126: MOV EAX,dword ptr [ESP + 0xac]
//   XREF to: Stack[-0x20] (READ)
// 004eb12d: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0xa0] (WRITE)
// 004eb131: LEA EAX,[EBX + 0x164]
//   Label: LAB_004eb131
// 004eb137: PUSH EAX
// 004eb138: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004eb13e: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004eb13f: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 004eb144: MOV ECX,dword ptr [0x006793a4]
//   XREF to: 006793a4 (READ)
// 004eb14a: ADD ESP,0x8
// 004eb14d: CMP ECX,0x40
// 004eb150: JNZ 0x004eb204
//   XREF to: 004eb204 (CONDITIONAL_JUMP)
// 004eb156: MOV EAX,0xf80000
//   XREF to: 00f80000 (DATA)
// 004eb15b: MOV EBP,0x80000
// 004eb160: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x8c] (WRITE)
//   XREF to: 00f80000 (DATA)
// 004eb164: MOV dword ptr [ESP + 0x34],EBP
//   XREF to: Stack[-0x98] (WRITE)
// 004eb168: MOV dword ptr [ESP + 0x44],EBP
//   XREF to: Stack[-0x88] (WRITE)
// 004eb16c: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x94] (WRITE)
//   XREF to: 00f80000 (DATA)
// 004eb170: MOV dword ptr [ESP + 0x48],EBP
//   XREF to: Stack[-0x84] (WRITE)
// 004eb174: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x90] (WRITE)
//   XREF to: 00f80000 (DATA)
// 004eb178: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x80] (WRITE)
//   XREF to: 00f80000 (DATA)
// 004eb17c: MOV dword ptr [ESP + 0x30],EBP
//   XREF to: Stack[-0x9c] (WRITE)
// 004eb180: PUSH 0x0
//   Label: LAB_004eb180
// 004eb182: LEA EAX,[ESP + 0x44]
//   XREF to: Stack[-0x8c] (DATA)
// 004eb186: PUSH EAX
// 004eb187: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0x9c] (DATA)
// 004eb18b: PUSH EAX
// 004eb18c: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0xcc] (DATA)
// 004eb190: PUSH EAX
// 004eb191: PUSH EBX
// 004eb192: CALL core_glass.cpp_FUN_004ea1c0
//   XREF to: 004ea1c0 (UNCONDITIONAL_CALL)
// 004eb197: ADD ESP,0x14
// 004eb19a: PUSH 0x62e0f4
//   XREF to: 0062e0f4 (DATA)
// 004eb19f: MOV EAX,dword ptr [EBX + 0x154]
// 004eb1a5: PUSH EBX
// 004eb1a6: CALL dword ptr [EAX + 0x24]
// 004eb1a9: MOV EDX,dword ptr [EBX + 0x370]
// 004eb1af: ADD ESP,0x8
// 004eb1b2: TEST EDX,EDX
// 004eb1b4: JNZ 0x004eb233
//   XREF to: 004eb233 (CONDITIONAL_JUMP)
// 004eb1b6: ADD ESP,0xbc
//   Label: LAB_004eb1b6
// 004eb1bc: POP EBP
// 004eb1bd: POP EDI
// 004eb1be: POP ESI
// 004eb1bf: POP EBX
// 004eb1c0: RET
// 004eb1c1: MOV ESI,0x62e0e9
//   Label: LAB_004eb1c1
//   XREF to: 0062e0e9 (DATA)
// 004eb1c6: LEA EDI,[EBX + 0x16c]
// 004eb1cc: MOV dword ptr [EBX + 0x17c],0xffff
// 004eb1d6: PUSH EDI
// 004eb1d7: MOV AL,byte ptr [ESI]
//   Label: LAB_004eb1d7
//   XREF to: 0062e0e9 (READ)
//   XREF to: 0062e0eb (READ)
// 004eb1d9: MOV byte ptr [EDI],AL
// 004eb1db: CMP AL,0x0
// 004eb1dd: JZ 0x004eb1ef
//   XREF to: 004eb1ef (CONDITIONAL_JUMP)
// 004eb1df: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0062e0ea (READ)
//   XREF to: 0062e0ec (READ)
// 004eb1e2: ADD ESI,0x2
// 004eb1e5: MOV byte ptr [EDI + 0x1],AL
// 004eb1e8: ADD EDI,0x2
// 004eb1eb: CMP AL,0x0
// 004eb1ed: JNZ 0x004eb1d7
//   XREF to: 004eb1d7 (CONDITIONAL_JUMP)
// 004eb1ef: POP EDI
//   Label: LAB_004eb1ef
// 004eb1f0: MOV ESI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 004eb1f6: PUSH ESI
//   XREF to: 03114278 (DATA)
// 004eb1f7: CALL core_set.cpp_CDemonSet_FUN_00570c60
//   XREF to: 00570c60 (UNCONDITIONAL_CALL)
// 004eb1fc: ADD ESP,0x4
// 004eb1ff: JMP 0x004eaf26
//   XREF to: 004eaf26 (UNCONDITIONAL_JUMP)
// 004eb204: MOV EDI,0xfe0000
//   Label: LAB_004eb204
//   XREF to: 00fe0000 (DATA)
// 004eb209: MOV ESI,0x20000
// 004eb20e: MOV dword ptr [ESP + 0x40],EDI
//   XREF to: Stack[-0x8c] (WRITE)
//   XREF to: 00fe0000 (DATA)
// 004eb212: MOV dword ptr [ESP + 0x34],ESI
//   XREF to: Stack[-0x98] (WRITE)
// 004eb216: MOV dword ptr [ESP + 0x44],ESI
//   XREF to: Stack[-0x88] (WRITE)
// 004eb21a: MOV dword ptr [ESP + 0x38],EDI
//   XREF to: Stack[-0x94] (WRITE)
//   XREF to: 00fe0000 (DATA)
// 004eb21e: MOV dword ptr [ESP + 0x48],ESI
//   XREF to: Stack[-0x84] (WRITE)
// 004eb222: MOV dword ptr [ESP + 0x3c],EDI
//   XREF to: Stack[-0x90] (WRITE)
//   XREF to: 00fe0000 (DATA)
// 004eb226: MOV dword ptr [ESP + 0x4c],EDI
//   XREF to: Stack[-0x80] (WRITE)
//   XREF to: 00fe0000 (DATA)
// 004eb22a: MOV dword ptr [ESP + 0x30],ESI
//   XREF to: Stack[-0x9c] (WRITE)
// 004eb22e: JMP 0x004eb180
//   XREF to: 004eb180 (UNCONDITIONAL_JUMP)
// 004eb233: MOV dword ptr [EBX + 0xb3c],0x1
//   Label: LAB_004eb233
// 004eb23d: ADD ESP,0xbc
// 004eb243: POP EBP
// 004eb244: POP EDI
// 004eb245: POP ESI
// 004eb246: POP EBX
// 004eb247: RET
