; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
;
; Parameters:
; CKeyFramedModelInstance * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   animation_frame
; int              Stack[0xc]:4   render_flags
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[52]:
;   core_ammo.cpp_CAmmo_renderOpaque_FUN_00410e80 at 00410ecd
;   core_ammobox.cpp_CAmmoBox_FUN_00411820 at 00411892
;   core_anvil.cpp_CAnvil_FUN_00411ec0 at 00411f2e
;   core_backgnd.cpp_CBackgroundActor_FUN_00412860 at 004128b0
;   core_backgnd.cpp_CBackgroundActor_FUN_004128d0 at 00412920
;   core_baron.cpp_CBaron_renderTransparent_FUN_00413ae0 at 00413bc0
;   core_bat.cpp_CBat_FUN_00414bf0 at 00414c41
;   core_battery.cpp_FUN_00417f80 at 00417ff2
;   core_bodypart.cpp_CBodyPart_renderOpaque_FUN_004194b0 at 00419583
;   core_boxactor.cpp_FUN_00421e00 at 00421ea8
;   ... and 42 more
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00478d20
        ;   Label: core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
    MOV EAX,dword ptr [ESP + 0x8]       ; 00478d23
    MOV EDX,dword ptr [ESP + 0x10]      ; 00478d27
    FLD float ptr [ESP + 0xc]           ; 00478d2b
    PUSH EDX                            ; 00478d2f
    CALL crt_math.c_round_FUN_005fe6b0  ; 00478d30
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    PUSH EAX                            ; 00478d35
    FISTP dword ptr [ESP + 0x8]         ; 00478d36
    MOV ECX,dword ptr [ESP + 0x8]       ; 00478d3a
    PUSH ECX                            ; 00478d3e
    PUSH EAX                            ; 00478d3f
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 00478d40
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00478d45
    PUSH EAX                            ; 00478d48
    CALL core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850 ; 00478d49
        ;   XREF to: 00477850 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850(CKeyFramedModel * this_ptr, CKeyFramedModelInstance * instance, int frame_index, int render_flags)
    ADD ESP,0x10                        ; 00478d4e
    ADD ESP,0x4                         ; 00478d51
    RET                                 ; 00478d54

