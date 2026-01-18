// Name: core_bodypart.cpp_CBodyPart_renderBackground_FUN_00419610
// Address: 00419610
// Address Range: [[00419610, 004196c6] [004196e0, 00419737]]
// Convention: __cdecl
// Signature: void core_bodypart.cpp_CBodyPart_renderBackground_FUN_00419610(CBodyPart * this_ptr, int layer_flag)

#include "nocturne.h"

void __cdecl
core_bodypart_cpp_CBodyPart_renderBackground_FUN_00419610(CBodyPart *this_ptr,int layer_flag)

{
  CConsole *this_ptr_00;
  CBoundingBox3D *this_ptr_01;
  int iVar1;
  int iVar2;
  
  if (*(int *)this_ptr->field1_0x158 == 0) {
    if ((((layer_flag != 0) && (*(int *)(this_ptr->field1_0x158 + 0xdd0) == 0)) &&
        (*(int *)(this_ptr->field1_0x158 + 0xdc8) == 0)) &&
       (iVar1 = (*((this_ptr->base_actor).vtable)->getAllowedMeleeAttackTypes)
                          (&this_ptr->base_actor), this_ptr_00 = g_CConsolePtr, iVar1 == 0)) {
      this_ptr->field1_0x158[0] = '\x01';
      this_ptr->field1_0x158[1] = '\0';
      this_ptr->field1_0x158[2] = '\0';
      this_ptr->field1_0x158[3] = '\0';
      engine_console_cpp_CConsole_printf_FUN_00441890
                (this_ptr_00,"%s going into background\n",this_ptr);
    }
    if (*(int *)this_ptr->field1_0x158 == 0) {
      return;
    }
  }
  if ((*(int *)this_ptr->field1_0x158 != 1) || (*(int *)(this_ptr->field1_0x158 + 0xdc8) == 0)) {
    this_ptr->field1_0x158[0] = '\x02';
    this_ptr->field1_0x158[1] = '\0';
    this_ptr->field1_0x158[2] = '\0';
    this_ptr->field1_0x158[3] = '\0';
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base_actor);
    g_CDemonSetPtr->unk_lighting_param2 = *(int *)(this_ptr->field1_0x158 + 0xb58);
    this_ptr_01 = (*((this_ptr->base_actor).vtable)->getBoundingBox)
                            (&this_ptr->base_actor,(CBoundingBox3D *)&stack0xffffffe4);
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_01);
    if ((iVar1 != 0) &&
       ((*(int *)(this_ptr->field1_0x158 + 0xb5c) == 0 ||
        (iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
        iVar2 != 0)))) {
      core_bodypart_cpp_FUN_00419340();
    }
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    g_CDemonSetPtr->unk_lighting_param2 = 0;
    *(int *)(this_ptr->field1_0x158 + 0xdd4) = iVar1;
  }
  return;
}
