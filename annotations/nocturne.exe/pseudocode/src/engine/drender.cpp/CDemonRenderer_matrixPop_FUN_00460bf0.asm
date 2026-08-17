; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(CDemonRenderer *this_ptr)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
;
; XREF[62]:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 at 00409f67
;   core_anvil.cpp_CAnvil_renderOpaque_FUN_0040f740 at 0040f7bf
;   core_baron.cpp_CBaron_renderTransparent_FUN_004110f0 at 004111df
;   core_battery.cpp_CBattery_renderOpaque_FUN_00414e70 at 00414ecb
;   core_bodypart.cpp_CBodyPart_renderBackground_FUN_00416300 at 004163b4
;   core_bodypart.cpp_CBodyPart_renderOpaque_FUN_004161a0 at 00416291
;   core_boxactor.cpp_CBoxActor_renderOpaque_FUN_0041ea00 at 0041eabd
;   core_boxactor.cpp_CBoxActor_renderTransparent_FUN_0041eaf0 at 0041ebcb
;   core_bugs.cpp_CBugs_renderOpaque_FUN_00421540 at 00421685
;   core_charactr.cpp_CCharacter_renderAttachedModels_FUN_004265a0 at 00426687
;   ... and 52 more
;
; Called Functions:
;   engine_matrix.c_pop_FUN_004cdbc0
;
; *****************************************************************************

section .text

    CALL engine_matrix.c_pop_FUN_004cdbc0 ; 00460bf0
        ;   XREF to: 004cdbc0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_004cdbc0()
        ;   Label: engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
    RET                                 ; 00460bf5

