// Name: core_bmppuzzl.cpp_CAudioRecPuzzle_load_FUN_00415fc0
// Address: 00415fc0
// Address Range: [[00415fc0, 0041656e]]
// Convention: __cdecl
// Signature: void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_load_FUN_00415fc0(CAudioRecPuzzle *this_ptr,int param_2)

#include "nocturne.h"

void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_load_FUN_00415fc0(CAudioRecPuzzle *this_ptr,int param_2)

{
  int iVar1;
  CAlphaBitmap *this_ptr_00;
  
  if (param_2 == 0) {
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&this_ptr->background);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap_ARRAY_007c3984);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap_ARRAY_007c3984 + 1);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap_ARRAY_007c3984 + 2);
    iVar1 = 0;
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap_ARRAY_007c3984 + 3);
    if (0 < this_ptr->button_count) {
      this_ptr_00 = &this_ptr->buttons[0].bitmap;
      do {
        engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(this_ptr_00);
        iVar1 = iVar1 + 1;
        this_ptr_00 = (CAlphaBitmap *)&this_ptr_00[2].opa;
      } while (iVar1 < this_ptr->button_count);
    }
    this_ptr->button_count = 0;
    sound_sndmain_cpp_killAllSfx_FUN_00573b00();
    this_ptr->cursor_index = 0;
    this_ptr->playback_started = 0;
    this_ptr->mouse_button = 0;
    this_ptr->previous_mouse_button = 0;
    this_ptr->click_handled = 0;
    this_ptr->reel_angle = 0.0;
    this_ptr->solved = 0;
    DAT_007c397c = 0xffffffff;
    return;
  }
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(&this_ptr->reel_model);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(&this_ptr->reel_shadow_model);
  this_ptr->power_on = 1;
  this_ptr->transport_state = 1;
  this_ptr->button_count = 0;
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (&this_ptr->background,"radioback",0x280,0x1e0);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (CAlphaBitmap_ARRAY_007c3984,"radiopointer2",0xd,0x12);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (CAlphaBitmap_ARRAY_007c3984 + 1,"radiotuners2",0x2a,0xc);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (CAlphaBitmap_ARRAY_007c3984 + 2,"radiotunersleft",0x15,0xc);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (CAlphaBitmap_ARRAY_007c3984 + 3,"radiotunersright",0x15,0xc);
  (**(code **)((int)this_ptr->vtable + 0x28))
            (this_ptr,0,"poweron",0x3d,0x3a,1,0x1f9,0x195,0);
  (**(code **)((int)this_ptr->vtable + 0x28))
            (this_ptr,1,"poweroff",0x3d,0x3a,1,0x1f9,0x195,0);
  (**(code **)((int)this_ptr->vtable + 0x28))
            (this_ptr,2,"playreverse",0x2d,0x4c,2,0x128,0x8a,0);
  (**(code **)((int)this_ptr->vtable + 0x28))
            (this_ptr,3,"playstop",0x2d,0x4c,2,0x128,0x8a,0);
  (**(code **)((int)this_ptr->vtable + 0x28))
            (this_ptr,4,"playforward",0x2d,0x4c,2,0x128,0x8a,0);
  (**(code **)((int)this_ptr->vtable + 0x28))(this_ptr,5,0x5d3e15,0x16,0x20,3,0x171,0x12e,0);
  (**(code **)((int)this_ptr->vtable + 0x28))(this_ptr,6,0x5d3e1c,0x16,0x20,3,0x195,0x12e,0);
  (**(code **)((int)this_ptr->vtable + 0x28))(this_ptr,7,0x5d3e23,0x16,0x20,3,0x1bd,0x12e,0);
  (**(code **)((int)this_ptr->vtable + 0x28))(this_ptr,8,0x5d3e2a,0x16,0x20,3,0x1e3,0x12e,0);
  (**(code **)((int)this_ptr->vtable + 0x28))(this_ptr,9,0x5d3e31,0x16,0x20,3,0x20a,0x12e,0);
  (**(code **)((int)this_ptr->vtable + 0x28))
            (this_ptr,10,"lighton",0x14,0x15,0,0x135,0x62,0);
  (**(code **)((int)this_ptr->vtable + 0x28))
            (this_ptr,0xb,"lightoff",0x14,0x15,0,0x135,0x62,0);
  (**(code **)((int)this_ptr->vtable + 0x28))
            (this_ptr,0xc,"knobArrow1",0x27,0x27,2,0x4b,0x1a3,0);
  (**(code **)((int)this_ptr->vtable + 0x28))
            (this_ptr,0xd,"knobArrow2",0x27,0x27,2,0x4b,0x1a3,0);
  (**(code **)((int)this_ptr->vtable + 0x28))
            (this_ptr,0xe,"knobArrow3",0x27,0x27,2,0x4b,0x1a3,0);
  (**(code **)((int)this_ptr->vtable + 0x28))
            (this_ptr,0xf,"knobArrow4",0x27,0x27,2,0x4b,0x1a3,0);
  (**(code **)((int)this_ptr->vtable + 0x28))
            (this_ptr,0x10,"knobArrow5",0x27,0x27,2,0x4b,0x1a3,0);
  (**(code **)((int)this_ptr->vtable + 0x28))
            (this_ptr,0x11,"knobArrow1",0x27,0x27,2,0xaf,0x1a3,0);
  (**(code **)((int)this_ptr->vtable + 0x28))
            (this_ptr,0x12,"knobArrow2",0x27,0x27,2,0xaf,0x1a3,0);
  (**(code **)((int)this_ptr->vtable + 0x28))
            (this_ptr,0x13,"knobArrow3",0x27,0x27,2,0xaf,0x1a3,0);
  (**(code **)((int)this_ptr->vtable + 0x28))
            (this_ptr,0x14,"knobArrow4",0x27,0x27,2,0xaf,0x1a3,0);
  (**(code **)((int)this_ptr->vtable + 0x28))
            (this_ptr,0x15,"knobArrow5",0x27,0x27,2,0xaf,0x1a3,0);
  (**(code **)((int)this_ptr->vtable + 0x28))
            (this_ptr,0x16,"knobArrow1",0x27,0x27,2,0x111,0x1a3,0);
  (**(code **)((int)this_ptr->vtable + 0x28))
            (this_ptr,0x17,"knobArrow2",0x27,0x27,2,0x111,0x1a3,0);
  (**(code **)((int)this_ptr->vtable + 0x28))
            (this_ptr,0x18,"knobArrow3",0x27,0x27,2,0x111,0x1a3,0);
  (**(code **)((int)this_ptr->vtable + 0x28))
            (this_ptr,0x19,"knobArrow4",0x27,0x27,2,0x111,0x1a3,0);
  (**(code **)((int)this_ptr->vtable + 0x28))
            (this_ptr,0x1a,"knobArrow5",0x27,0x27,2,0x111,0x1a3,0);
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (0x01C51D80,"AudioPuzzleTelOsMah");
  if (iVar1 == 0) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (0x01C51D80,"AudioPuzzleMary");
    if (iVar1 != 0) {
      this_ptr->solution[1] = 1;
      this_ptr->solution[2] = 4;
      this_ptr->solution[3] = 1;
      this_ptr->solution[4] = 2;
      this_ptr->recording_id = 2;
      this_ptr->solution[0] = 3;
      this_ptr->solved = 0;
      return;
    }
  }
  else {
    this_ptr->solution[1] = 4;
    this_ptr->solution[2] = 2;
    this_ptr->solution[3] = 3;
    this_ptr->solution[4] = 0;
    this_ptr->recording_id = 1;
    this_ptr->solution[0] = 1;
  }
  this_ptr->solved = 0;
  return;
}
