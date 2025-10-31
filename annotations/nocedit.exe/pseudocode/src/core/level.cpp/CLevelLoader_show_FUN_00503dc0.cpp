// Name: core_level.cpp_CLevelLoader_show_FUN_00503dc0
// Address: 00503dc0
// Address Range: [[00503dc0, 00504154]]
// Convention: __cdecl
// Signature: void core_level.cpp_CLevelLoader_show_FUN_00503dc0(CLevelLoader * this_ptr, int total_frames, int use_custom_viewport, int image_variant)
// Cross-references:
//   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 (004e12b0) at 004e140d [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0 (004e1cb0) at 004e200d [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_run_FUN_00524420 (00524420) at 0052455c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_moon_kfm_00631017
//   TerminatedCString s_load1_00631020
//   TerminatedCString s_load2_00631026
//   TerminatedCString s_load3_0063102c
//   TerminatedCString s_load4_00631032
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   SMRGLTextureBasic g_LoadingMoonGlowTexture
//   CDemonRenderer g_CDemonRendererInstance
//   CKeyFramedModel g_LoadingMoonModel
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0
//   crt_stdlib.c_rand_FUN_005feb5c
//   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
//   engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950
//   engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_00410540
//   engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   wincore_windll.cpp_clearScreen_FUN_005b3e70

#include "nocturne.h"

void __cdecl
core_level_cpp_CLevelLoader_show_FUN_00503dc0
          (CLevelLoader *this_ptr,int total_frames,int use_custom_viewport,int image_variant)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [8];
  undefined1 auStack_24 [28];
  
  this_ptr->version = 0;
  this_ptr->enabled = 1;
  this_ptr->current_frame = 0;
  this_ptr->use_custom_viewport = use_custom_viewport;
  this_ptr->total_frames = total_frames;
  if (use_custom_viewport == 0) {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    this_ptr->viewport_x = 0;
    this_ptr->viewport_y = 0;
    this_ptr->viewport_width = 0x280;
    this_ptr->viewport_height = 0x1e0;
  }
  else {
    this_ptr->viewport_y = 0;
    this_ptr->viewport_width = 0xc0;
    this_ptr->viewport_height = 0xc0;
    this_ptr->viewport_x = 0x1bf;
  }
  (this_ptr->color).r = 0xff;
  (this_ptr->color).g = 0xff;
  (this_ptr->color).b = 0xff;
  core_dmodel_cpp_CKeyFramedModel_load_FUN_00476db0(&g_LoadingMoonModel,"moon.kfm");
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,&g_LoadingMoonGlowTexture);
  if ((image_variant == -1) && (this_ptr->use_custom_viewport == 0)) {
    iVar1 = crt_stdlib_c_rand_FUN_005feb5c();
    image_variant = iVar1 % 3;
  }
  if (image_variant == 0) {
    engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520((CAlphaBitmap *)(auStack_38 + 4));
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
              ((CAlphaBitmap *)auStack_40,"load1",0x280,0x1e0);
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950
              ((CAlphaBitmap *)(auStack_40 + 4),0,0,0xffff);
    this_ptr->viewport_x = 0x78;
    this_ptr->viewport_y = 0x82;
    this_ptr->viewport_width = 0x5a;
    this_ptr->viewport_height = 0x5a;
    this_ptr->use_custom_viewport = 1;
    (this_ptr->color).r = 0x82;
    (this_ptr->color).g = 200;
    (this_ptr->color).b = 0xf4;
    engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540((CAlphaBitmap *)auStack_38);
  }
  if (image_variant == 1) {
    engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520((CAlphaBitmap *)(auStack_24 + 4));
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
              ((CAlphaBitmap *)auStack_2c,"load2",0x280,0x1e0);
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950
              ((CAlphaBitmap *)(auStack_2c + 4),0,0,0xffff);
    this_ptr->viewport_x = 0x1e4;
    this_ptr->viewport_y = 0x42;
    this_ptr->viewport_width = 0x5a;
    this_ptr->viewport_height = 0x5a;
    (this_ptr->color).r = 0x82;
    (this_ptr->color).g = 0xbd;
    (this_ptr->color).b = 0xff;
    this_ptr->use_custom_viewport = 1;
    engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540((CAlphaBitmap *)auStack_24);
  }
  if (image_variant == 2) {
    engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520((CAlphaBitmap *)(auStack_24 + 0x18));
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
              ((CAlphaBitmap *)(auStack_24 + 0xc),"load3",0x280,0x1e0);
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950
              ((CAlphaBitmap *)(auStack_24 + 0x10),0,0,0xffff);
    this_ptr->viewport_x = 0x9f;
    this_ptr->viewport_y = 1;
    this_ptr->viewport_width = 0x5a;
    this_ptr->viewport_height = 0x5a;
    this_ptr->use_custom_viewport = 1;
    (this_ptr->color).r = 0x9e;
    (this_ptr->color).g = 0xe1;
    (this_ptr->color).b = 0xff;
    engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540((CAlphaBitmap *)(auStack_24 + 0x14));
  }
  if (image_variant != 3) {
    return;
  }
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520((CAlphaBitmap *)&stack0xffffffb8);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
            ((CAlphaBitmap *)&stack0xffffffbc,"load4",0x280,0x1e0);
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950((CAlphaBitmap *)auStack_40,0,0,0xffff);
  this_ptr->viewport_x = 0x17b;
  this_ptr->viewport_y = 0x44;
  this_ptr->viewport_width = 0x5a;
  this_ptr->viewport_height = 0x5a;
  this_ptr->use_custom_viewport = 1;
  (this_ptr->color).r = 0x6b;
  auStack_40._0_4_ = (uint *)0x0;
  (this_ptr->color).g = 0x9a;
  (this_ptr->color).b = 0xff;
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540((CAlphaBitmap *)(auStack_40 + 4));
  return;
}


// Assembly code:
// 00503dc0: PUSH ESI
//   Label: core_level.cpp_CLevelLoader_show_FUN_00503dc0
// 00503dc1: PUSH EDI
// 00503dc2: SUB ESP,0x50
// 00503dc5: MOV ESI,dword ptr [ESP + 0x5c]
//   XREF to: Stack[0x4] (READ)
// 00503dc9: MOV EDX,dword ptr [ESP + 0x64]
//   XREF to: Stack[0xc] (READ)
// 00503dcd: MOV EDI,dword ptr [ESP + 0x68]
//   XREF to: Stack[0x10] (READ)
// 00503dd1: MOV dword ptr [ESI + 0x8],0x0
// 00503dd8: MOV dword ptr [ESI + 0xc],0x1
// 00503ddf: MOV dword ptr [ESI],0x0
// 00503de5: MOV EAX,dword ptr [ESP + 0x60]
//   XREF to: Stack[0x8] (READ)
// 00503de9: MOV dword ptr [ESI + 0x110],EDX
// 00503def: MOV dword ptr [ESI + 0x4],EAX
// 00503df2: TEST EDX,EDX
// 00503df4: JZ 0x0050407f
//   XREF to: 0050407f (CONDITIONAL_JUMP)
// 00503dfa: MOV dword ptr [ESI + 0x118],0x0
// 00503e04: MOV dword ptr [ESI + 0x11c],0xc0
// 00503e0e: MOV dword ptr [ESI + 0x120],0xc0
// 00503e18: MOV dword ptr [ESI + 0x114],0x1bf
// 00503e22: MOV dword ptr [ESI + 0x124],0xff
//   Label: LAB_00503e22
// 00503e2c: PUSH 0x631017
//   XREF to: 00631017 (DATA)
// 00503e31: MOV dword ptr [ESI + 0x128],0xff
// 00503e3b: PUSH 0x2dcd980
//   XREF to: 02dcd980 (DATA)
// 00503e40: MOV dword ptr [ESI + 0x12c],0xff
// 00503e4a: CALL core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0
//   XREF to: 00476db0 (UNCONDITIONAL_CALL)
// 00503e4f: ADD ESP,0x8
// 00503e52: PUSH 0x67cf84
//   XREF to: 0067cf84 (DATA)
// 00503e57: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00503e5d: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00503e5e: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 00503e63: ADD ESP,0x8
// 00503e66: CMP EDI,-0x1
// 00503e69: JNZ 0x00503e87
//   XREF to: 00503e87 (CONDITIONAL_JUMP)
// 00503e6b: CMP dword ptr [ESI + 0x110],0x0
// 00503e72: JNZ 0x00503e87
//   XREF to: 00503e87 (CONDITIONAL_JUMP)
// 00503e74: CALL crt_stdlib.c_rand_FUN_005feb5c
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 00503e79: MOV EDX,EAX
// 00503e7b: MOV EDI,0x3
// 00503e80: SAR EDX,0x1f
// 00503e83: IDIV EDI
// 00503e85: MOV EDI,EDX
// 00503e87: TEST EDI,EDI
//   Label: LAB_00503e87
// 00503e89: JNZ 0x00503f2a
//   XREF to: 00503f2a (CONDITIONAL_JUMP)
// 00503e8f: LEA EDX,[ESP + 0x14]
//   XREF to: Stack[-0x44] (DATA)
// 00503e93: PUSH EDX
// 00503e94: CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
//   XREF to: 00410520 (UNCONDITIONAL_CALL)
// 00503e99: ADD ESP,0x4
// 00503e9c: PUSH 0x1e0
// 00503ea1: PUSH 0x280
// 00503ea6: PUSH 0x631020
//   XREF to: 00631020 (DATA)
// 00503eab: LEA EDX,[ESP + 0x20]
//   XREF to: Stack[-0x44] (DATA)
// 00503eaf: PUSH EDX
// 00503eb0: CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0
//   XREF to: 004105d0 (UNCONDITIONAL_CALL)
// 00503eb5: ADD ESP,0x10
// 00503eb8: PUSH 0xffff
// 00503ebd: PUSH EDI
// 00503ebe: PUSH EDI
// 00503ebf: LEA EDX,[ESP + 0x20]
//   XREF to: Stack[-0x44] (DATA)
// 00503ec3: PUSH EDX
// 00503ec4: CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950
//   XREF to: 00410950 (UNCONDITIONAL_CALL)
// 00503ec9: MOV dword ptr [ESI + 0x114],0x78
// 00503ed3: MOV dword ptr [ESI + 0x118],0x82
// 00503edd: MOV dword ptr [ESI + 0x11c],0x5a
// 00503ee7: MOV dword ptr [ESI + 0x120],0x5a
// 00503ef1: MOV dword ptr [ESI + 0x110],0x1
// 00503efb: ADD ESP,0x10
// 00503efe: MOV dword ptr [ESI + 0x124],0x82
// 00503f08: PUSH EDI
// 00503f09: LEA EDX,[ESP + 0x18]
//   XREF to: Stack[-0x44] (DATA)
// 00503f0d: MOV dword ptr [ESI + 0x128],0xc8
// 00503f17: PUSH EDX
// 00503f18: MOV dword ptr [ESI + 0x12c],0xf4
// 00503f22: CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_00410540
//   XREF to: 00410540 (UNCONDITIONAL_CALL)
// 00503f27: ADD ESP,0x8
// 00503f2a: CMP EDI,0x1
//   Label: LAB_00503f2a
// 00503f2d: JNZ 0x00503fcd
//   XREF to: 00503fcd (CONDITIONAL_JUMP)
// 00503f33: LEA EDX,[ESP + 0x28]
//   XREF to: Stack[-0x30] (DATA)
// 00503f37: PUSH EDX
// 00503f38: CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
//   XREF to: 00410520 (UNCONDITIONAL_CALL)
// 00503f3d: ADD ESP,0x4
// 00503f40: PUSH 0x1e0
// 00503f45: PUSH 0x280
// 00503f4a: PUSH 0x631026
//   XREF to: 00631026 (DATA)
// 00503f4f: LEA EDX,[ESP + 0x34]
//   XREF to: Stack[-0x30] (DATA)
// 00503f53: PUSH EDX
// 00503f54: CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0
//   XREF to: 004105d0 (UNCONDITIONAL_CALL)
// 00503f59: ADD ESP,0x10
// 00503f5c: PUSH 0xffff
// 00503f61: PUSH 0x0
// 00503f63: PUSH 0x0
// 00503f65: LEA EDX,[ESP + 0x34]
//   XREF to: Stack[-0x30] (DATA)
// 00503f69: PUSH EDX
// 00503f6a: CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950
//   XREF to: 00410950 (UNCONDITIONAL_CALL)
// 00503f6f: MOV dword ptr [ESI + 0x114],0x1e4
// 00503f79: MOV dword ptr [ESI + 0x118],0x42
// 00503f83: MOV dword ptr [ESI + 0x11c],0x5a
// 00503f8d: MOV dword ptr [ESI + 0x120],0x5a
// 00503f97: MOV dword ptr [ESI + 0x124],0x82
// 00503fa1: ADD ESP,0x10
// 00503fa4: MOV dword ptr [ESI + 0x128],0xbd
// 00503fae: PUSH 0x0
// 00503fb0: LEA EDX,[ESP + 0x2c]
//   XREF to: Stack[-0x30] (DATA)
// 00503fb4: MOV dword ptr [ESI + 0x12c],0xff
// 00503fbe: PUSH EDX
// 00503fbf: MOV dword ptr [ESI + 0x110],EDI
// 00503fc5: CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_00410540
//   XREF to: 00410540 (UNCONDITIONAL_CALL)
// 00503fca: ADD ESP,0x8
// 00503fcd: CMP EDI,0x2
//   Label: LAB_00503fcd
// 00503fd0: JNZ 0x00504074
//   XREF to: 00504074 (CONDITIONAL_JUMP)
// 00503fd6: LEA EDX,[ESP + 0x3c]
//   XREF to: Stack[-0x1c] (DATA)
// 00503fda: PUSH EDX
// 00503fdb: CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
//   XREF to: 00410520 (UNCONDITIONAL_CALL)
// 00503fe0: ADD ESP,0x4
// 00503fe3: PUSH 0x1e0
// 00503fe8: PUSH 0x280
// 00503fed: PUSH 0x63102c
//   XREF to: 0063102c (DATA)
// 00503ff2: LEA EDX,[ESP + 0x48]
//   XREF to: Stack[-0x1c] (DATA)
// 00503ff6: PUSH EDX
// 00503ff7: CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0
//   XREF to: 004105d0 (UNCONDITIONAL_CALL)
// 00503ffc: ADD ESP,0x10
// 00503fff: PUSH 0xffff
// 00504004: PUSH 0x0
// 00504006: PUSH 0x0
// 00504008: LEA EDX,[ESP + 0x48]
//   XREF to: Stack[-0x1c] (DATA)
// 0050400c: PUSH EDX
// 0050400d: CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950
//   XREF to: 00410950 (UNCONDITIONAL_CALL)
// 00504012: MOV dword ptr [ESI + 0x114],0x9f
// 0050401c: MOV dword ptr [ESI + 0x118],0x1
// 00504026: MOV dword ptr [ESI + 0x11c],0x5a
// 00504030: MOV dword ptr [ESI + 0x120],0x5a
// 0050403a: MOV dword ptr [ESI + 0x110],0x1
// 00504044: ADD ESP,0x10
// 00504047: MOV dword ptr [ESI + 0x124],0x9e
// 00504051: PUSH 0x0
// 00504053: LEA EDX,[ESP + 0x40]
//   XREF to: Stack[-0x1c] (DATA)
// 00504057: MOV dword ptr [ESI + 0x128],0xe1
// 00504061: PUSH EDX
// 00504062: MOV dword ptr [ESI + 0x12c],0xff
// 0050406c: CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_00410540
//   XREF to: 00410540 (UNCONDITIONAL_CALL)
// 00504071: ADD ESP,0x8
// 00504074: CMP EDI,0x3
//   Label: LAB_00504074
// 00504077: JZ 0x005040b3
//   XREF to: 005040b3 (CONDITIONAL_JUMP)
// 00504079: ADD ESP,0x50
// 0050407c: POP EDI
// 0050407d: POP ESI
// 0050407e: RET
// 0050407f: PUSH EBX
//   Label: LAB_0050407f
// 00504080: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00504085: MOV dword ptr [ESI + 0x114],0x0
// 0050408f: MOV dword ptr [ESI + 0x118],0x0
// 00504099: MOV dword ptr [ESI + 0x11c],0x280
// 005040a3: MOV dword ptr [ESI + 0x120],0x1e0
// 005040ad: POP EBX
// 005040ae: JMP 0x00503e22
//   XREF to: 00503e22 (UNCONDITIONAL_JUMP)
// 005040b3: MOV EDX,ESP
//   Label: LAB_005040b3
// 005040b5: PUSH EDX
// 005040b6: CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
//   XREF to: 00410520 (UNCONDITIONAL_CALL)
// 005040bb: ADD ESP,0x4
// 005040be: PUSH 0x1e0
// 005040c3: PUSH 0x280
// 005040c8: PUSH 0x631032
//   XREF to: 00631032 (DATA)
// 005040cd: LEA EDX,[ESP + 0xc]
//   XREF to: Stack[-0x58] (DATA)
// 005040d1: PUSH EDX
// 005040d2: CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0
//   XREF to: 004105d0 (UNCONDITIONAL_CALL)
// 005040d7: ADD ESP,0x10
// 005040da: PUSH 0xffff
// 005040df: PUSH 0x0
// 005040e1: PUSH 0x0
// 005040e3: LEA EDX,[ESP + 0xc]
//   XREF to: Stack[-0x58] (DATA)
// 005040e7: PUSH EDX
// 005040e8: CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950
//   XREF to: 00410950 (UNCONDITIONAL_CALL)
// 005040ed: MOV dword ptr [ESI + 0x114],0x17b
// 005040f7: MOV dword ptr [ESI + 0x118],0x44
// 00504101: MOV dword ptr [ESI + 0x11c],0x5a
// 0050410b: MOV dword ptr [ESI + 0x120],0x5a
// 00504115: MOV dword ptr [ESI + 0x110],0x1
// 0050411f: ADD ESP,0x10
// 00504122: MOV dword ptr [ESI + 0x124],0x6b
// 0050412c: PUSH 0x0
// 0050412e: LEA EDX,[ESP + 0x4]
//   XREF to: Stack[-0x58] (DATA)
// 00504132: MOV dword ptr [ESI + 0x128],0x9a
// 0050413c: PUSH EDX
// 0050413d: MOV dword ptr [ESI + 0x12c],0xff
// 00504147: CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_00410540
//   XREF to: 00410540 (UNCONDITIONAL_CALL)
// 0050414c: ADD ESP,0x8
// 0050414f: ADD ESP,0x50
// 00504152: POP EDI
// 00504153: POP ESI
// 00504154: RET
