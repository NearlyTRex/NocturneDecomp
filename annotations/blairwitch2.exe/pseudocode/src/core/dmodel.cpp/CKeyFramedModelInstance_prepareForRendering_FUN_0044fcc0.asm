; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance *this_ptr,float animation_frame,int render_flags)
;
; Parameters:
; CKeyFramedModelInstance * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   animation_frame
; int              Stack[0xc]:4   render_flags
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[56]:
;   core_ammo.cpp_CAmmo_renderOpaque_FUN_0040e0f0 at 0040e155
;   core_ammobox.cpp_CAmmoBox_renderOpaque_FUN_0040e780 at 0040e803
;   core_anvil.cpp_CAnvil_renderOpaque_FUN_0040ec10 at 0040ec92
;   core_backgnd.cpp_CBackgroundActor_renderBackground_FUN_0040f3f0 at 0040f451
;   core_baron.cpp_CBaron_renderTransparent_FUN_00410670 at 00410750
;   core_bat.cpp_CBat_renderOpaque_FUN_004113f0 at 00411459
;   core_battery.cpp_CBattery_renderOpaque_FUN_00414810 at 0041489a
;   core_bodypart.cpp_CBodyPart_renderOpaque_FUN_00415b60 at 00415c47
;   core_boxactor.cpp_CBoxActor_renderOpaque_FUN_0041c580 at 0041c641
;   core_boxactor.cpp_CBoxActor_renderTransparent_FUN_0041c690 at 0041c756
;   ... and 46 more
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_0044e6a0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0044fcc0
        ;   Label: core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0044fcc3
    MOV EDX,dword ptr [ESP + 0x10]      ; 0044fcc7
    FLD float ptr [ESP + 0xc]           ; 0044fccb
    PUSH EDX                            ; 0044fccf
    CALL crt_math.c_round_FUN_005b7ff0  ; 0044fcd0
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    PUSH EAX                            ; 0044fcd5
    FISTP dword ptr [ESP + 0x8]         ; 0044fcd6
    MOV ECX,dword ptr [ESP + 0x8]       ; 0044fcda
    PUSH ECX                            ; 0044fcde
    PUSH EAX                            ; 0044fcdf
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 0044fce0
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0044fce5
    PUSH EAX                            ; 0044fce8
    CALL core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_0044e6a0 ; 0044fce9
        ;   XREF to: 0044e6a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_0044e6a0(CKeyFramedModel * this_ptr, int frame_index, CKeyFramedModelInstance * instance, int render_flags)
    ADD ESP,0x10                        ; 0044fcee
    ADD ESP,0x4                         ; 0044fcf1
    RET                                 ; 0044fcf4

