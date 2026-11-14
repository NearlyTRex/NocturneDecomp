; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_pop_FUN_0046d080(void)
;
;
; XREF[55]:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 at 00408837
;   core_battery.cpp_CBattery_renderOpaque_FUN_0040f590 at 0040f5fe
;   core_bmppuzzl.cpp_CAudioRecPuzzle_renderReel_FUN_00412c50 at 00412e8d
;   core_bodypart.cpp_CBodyPart_renderBackground_FUN_00414d40 at 00414e14
;   core_bodypart.cpp_CBodyPart_renderOpaque_FUN_00414bd0 at 00414cd3
;   core_boxactor.cpp_CBoxActor_renderOpaque_FUN_0041f8e0 at 0041f9b0
;   core_boxactor.cpp_CBoxActor_renderTransparent_FUN_0041f9f0 at 0041fb07
;   core_bugs.cpp_CBugs_renderOpaque_FUN_004215f0 at 0042176c
;   core_charactr.cpp_CCharacter_renderAttachedModels_FUN_0042e3a0 at 0042e49d
;   core_cloth.cpp_FUN_0043f160 at 0043f2e3
;   ... and 45 more
;
; Called Functions:
;   engine_matrix.c_pop_FUN_004e5ef0
;
; *****************************************************************************

section .text

    CALL engine_matrix.c_pop_FUN_004e5ef0 ; 0046d080
        ;   XREF to: 004e5ef0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_004e5ef0()
        ;   Label: engine_drender.cpp_pop_FUN_0046d080
    RET                                 ; 0046d085

