// Name: core_moon.cpp_CMoon_init_FUN_00529ae0
// Address: 00529ae0
// Address Range: [[00529ae0, 00529b31] [00529bf0, 00529cd5]]
// Convention: __cdecl
// Signature: void core_moon.cpp_CMoon_init_FUN_00529ae0(CMoon * this_ptr)
// Cross-references:
//   core_menu.cpp_ShowOptionsScreen_FUN_00512d30 (00512d30) at 00512ea5 [UNCONDITIONAL_CALL]
//   core_menu.cpp_showMainGameMenu_FUN_00512f40 (00512f40) at 005131c6 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_taylor_head_kfm_00639f11
//   TerminatedCString s_moon_kfm_00639f21
//   TerminatedCString s_menubat_kfm_00639f2a
//   TerminatedCString s_menucld2_00639f36
//   TerminatedCString s_menu1_pth_00639f3f
//   TerminatedCString s_menu2_pth_00639f49
//   TerminatedCString s_menu3_pth_00639f53
//   TerminatedCString s_noc00000_00639fd1
//   TerminatedCString s_noc00001_00639fda
//   CGame* g_CGamePtr = 02d81a9c
//   char*[30] PTR_s_noc00000_0067d758
//   undefined4 PTR_s_noc00001_0067d75c
//   undefined4 DAT_02d81cb0
//   CAlphaBitmap g_MoonCloudTexture
//   CAlphaBitmap[30] g_MoonAnimTextures
//   undefined4 DAT_02f37f98
//   CCourse[3] g_MoonBatCourses
//   undefined4 DAT_02f381f4
//   undefined4 DAT_02f38200
//   SBat[30] g_MoonBats
//   undefined4 DAT_02f38224
//   CKeyFramedModel g_MoonBatModel
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_course.cpp_CCourse_load_FUN_00442580
//   core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0
//   crt_stdlib.c_rand_FUN_005feb5c
//   engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0

#include "nocturne.h"

void __cdecl core_moon_cpp_CMoon_init_FUN_00529ae0(CMoon *this_ptr)

{
  undefined4 *puVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  CAlphaBitmap *this_ptr_00;
  
  if (this_ptr->is_loaded == 0) {
    if (g_CGamePtr->head_of_horror_cheat == 0x29a) {
      core_dmodel_cpp_CKeyFramedModel_load_FUN_00476db0(&this_ptr->moon,"taylor_head.kfm");
      g_CGamePtr->head_of_horror_cheat = 0;
    }
    else {
      core_dmodel_cpp_CKeyFramedModel_load_FUN_00476db0(&this_ptr->moon,"moon.kfm");
    }
    core_dmodel_cpp_CKeyFramedModel_load_FUN_00476db0(&g_MoonBatModel,"menubat.kfm");
    this_ptr_00 = g_MoonAnimTextures;
    iVar5 = 0;
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
              (&g_MoonCloudTexture,"menucld2",0x100,0x100);
    do {
      puVar1 = (undefined4 *)((int)PTR_s_noc00000_0067d758 + iVar5);
      iVar5 = iVar5 + 4;
      engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0(this_ptr_00,(char *)*puVar1,0x280,0x116);
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar5 != 0x78);
    this_ptr->is_loaded = 1;
    core_course_cpp_CCourse_load_FUN_00442580(g_MoonBatCourses,"menu1.pth");
    core_course_cpp_CCourse_load_FUN_00442580(g_MoonBatCourses + 1,"menu2.pth");
    core_course_cpp_CCourse_load_FUN_00442580(g_MoonBatCourses + 2,"menu3.pth");
  }
  this_ptr->rotation_phase = 0.25;
  iVar5 = 0;
  do {
    iVar2 = crt_stdlib_c_rand_FUN_005feb5c();
    *(int *)((int)&g_MoonBats[0].course_index + iVar5) = iVar2 % 3;
    fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,(float)g_MoonBatCourses[iVar2 % 3].len);
    fVar4 = (float)g_MoonBatModel.frame_count;
    *(float *)((int)&g_MoonBats[0].course_position + iVar5) = -fVar3;
    fVar4 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,fVar4);
    *(float *)((int)&g_MoonBats[0].animation_frame + iVar5) = fVar4;
    fVar4 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
    *(float *)((int)&g_MoonBats[0].random_offset.x + iVar5) = fVar4;
    fVar4 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
    *(float *)((int)&g_MoonBats[0].random_offset.y + iVar5) = fVar4;
    fVar4 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
    iVar2 = iVar5 + 0x18;
    *(float *)((int)&g_MoonBats[0].random_offset.z + iVar5) = fVar4;
    iVar5 = iVar2;
  } while (iVar2 != 0x2d0);
  g_MoonBatsEnabled = 0;
  return;
}


// Assembly code:
// 00529ae0: PUSH EBX
//   Label: core_moon.cpp_CMoon_init_FUN_00529ae0
// 00529ae1: PUSH ESI
// 00529ae2: PUSH EDI
// 00529ae3: PUSH EBP
// 00529ae4: SUB ESP,0x4
// 00529ae7: MOV EDI,dword ptr [ESP + 0x18]
// 00529aeb: CMP dword ptr [EDI],0x0
// 00529aee: JZ 0x00529bf0
//   XREF to: 00529bf0 (CONDITIONAL_JUMP)
// 00529af4: MOV ESI,0x3
//   Label: LAB_00529af4
// 00529af9: MOV dword ptr [EDI + 0x4],0x3e800000
// 00529b00: XOR EBX,EBX
// 00529b02: CALL crt_stdlib.c_rand_FUN_005feb5c
//   Label: LAB_00529b02
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 00529b07: MOV EDX,EAX
// 00529b09: SAR EDX,0x1f
// 00529b0c: IDIV ESI
// 00529b0e: MOV dword ptr [EBX + 0x2f3820c],EDX
//   XREF to: 02f3820c (WRITE)
//   XREF to: 02f38224 (DATA)
// 00529b14: IMUL EDX,EDX,0xc
// 00529b17: ADD EDX,0x2f381e8
//   XREF to: 02f381e8 (DATA)
// 00529b1d: MOV EDX,dword ptr [EDX]
//   XREF to: 02f381e8 (DATA)
// 00529b1f: MOV dword ptr [ESP],EDX
// 00529b22: FILD dword ptr [ESP]
// 00529b25: SUB ESP,0x4
// 00529b28: FSTP float ptr [ESP]
// 00529b2b: PUSH 0x0
// 00529b2d: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 00529bf0: MOV EDX,dword ptr [0x0067b654]
//   Label: LAB_00529bf0
//   XREF to: 0067b654 (READ)
// 00529bf6: MOV ECX,dword ptr [EDX + 0x214]
//   XREF to: 02d81cb0 (READ)
// 00529bfc: LEA EAX,[EDI + 0x8]
// 00529bff: CMP ECX,0x29a
// 00529c05: JNZ 0x00529cc3
//   XREF to: 00529cc3 (CONDITIONAL_JUMP)
// 00529c0b: PUSH 0x639f11
//   XREF to: 00639f11 (DATA)
// 00529c10: PUSH EAX
// 00529c11: CALL core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0
//   XREF to: 00476db0 (UNCONDITIONAL_CALL)
// 00529c16: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00529c1b: ADD ESP,0x8
// 00529c1e: MOV dword ptr [EAX + 0x214],0x0
//   XREF to: 02d81cb0 (WRITE)
// 00529c28: PUSH 0x639f2a
//   Label: LAB_00529c28
//   XREF to: 00639f2a (DATA)
// 00529c2d: PUSH 0x2f384dc
//   XREF to: 02f384dc (DATA)
// 00529c32: CALL core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0
//   XREF to: 00476db0 (UNCONDITIONAL_CALL)
// 00529c37: ADD ESP,0x8
// 00529c3a: PUSH 0x100
// 00529c3f: PUSH 0x100
// 00529c44: PUSH 0x639f36
//   XREF to: 00639f36 (DATA)
// 00529c49: PUSH 0x2f37f70
//   XREF to: 02f37f70 (DATA)
// 00529c4e: MOV ESI,0x2f37f84
//   XREF to: 02f37f84 (DATA)
// 00529c53: XOR EBX,EBX
// 00529c55: CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0
//   XREF to: 004105d0 (UNCONDITIONAL_CALL)
// 00529c5a: ADD ESP,0x10
// 00529c5d: PUSH 0x116
//   Label: LAB_00529c5d
// 00529c62: PUSH 0x280
// 00529c67: MOV EBP,dword ptr [EBX + 0x67d758]
//   XREF to: 0067d758 (READ)
//   XREF to: 0067d75c (READ)
// 00529c6d: PUSH EBP
//   XREF to: 00639fd1 (DATA)
//   XREF to: 00639fda (DATA)
// 00529c6e: PUSH ESI
//   XREF to: 02f37f84 (DATA)
//   XREF to: 02f37f98 (DATA)
// 00529c6f: ADD EBX,0x4
// 00529c72: CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0
//   XREF to: 004105d0 (UNCONDITIONAL_CALL)
// 00529c77: ADD ESP,0x10
// 00529c7a: ADD ESI,0x14
// 00529c7d: CMP EBX,0x78
// 00529c80: JNZ 0x00529c5d
//   XREF to: 00529c5d (CONDITIONAL_JUMP)
// 00529c82: PUSH 0x639f3f
//   XREF to: 00639f3f (DATA)
// 00529c87: PUSH 0x2f381e8
//   XREF to: 02f381e8 (DATA)
// 00529c8c: MOV dword ptr [EDI],0x1
// 00529c92: CALL core_course.cpp_CCourse_load_FUN_00442580
//   XREF to: 00442580 (UNCONDITIONAL_CALL)
// 00529c97: ADD ESP,0x8
// 00529c9a: PUSH 0x639f49
//   XREF to: 00639f49 (DATA)
// 00529c9f: PUSH 0x2f381f4
//   XREF to: 02f381f4 (DATA)
// 00529ca4: CALL core_course.cpp_CCourse_load_FUN_00442580
//   XREF to: 00442580 (UNCONDITIONAL_CALL)
// 00529ca9: ADD ESP,0x8
// 00529cac: PUSH 0x639f53
//   XREF to: 00639f53 (DATA)
// 00529cb1: PUSH 0x2f38200
//   XREF to: 02f38200 (DATA)
// 00529cb6: CALL core_course.cpp_CCourse_load_FUN_00442580
//   XREF to: 00442580 (UNCONDITIONAL_CALL)
// 00529cbb: ADD ESP,0x8
// 00529cbe: JMP 0x00529af4
//   XREF to: 00529af4 (UNCONDITIONAL_JUMP)
// 00529cc3: PUSH 0x639f21
//   Label: LAB_00529cc3
//   XREF to: 00639f21 (DATA)
// 00529cc8: PUSH EAX
// 00529cc9: CALL core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0
//   XREF to: 00476db0 (UNCONDITIONAL_CALL)
// 00529cce: ADD ESP,0x8
// 00529cd1: JMP 0x00529c28
//   XREF to: 00529c28 (UNCONDITIONAL_JUMP)
