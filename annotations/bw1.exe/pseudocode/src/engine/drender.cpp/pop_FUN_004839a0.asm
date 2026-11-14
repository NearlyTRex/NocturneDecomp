; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_pop_FUN_004839a0(void)
;
;
; XREF[65]:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 at 004087f7
;   core_anvil.cpp_CAnvil_renderOpaque_FUN_0040e7b0 at 0040e841
;   core_baron.cpp_CBaron_renderTransparent_FUN_004101f0 at 004102df
;   core_battery.cpp_CBattery_renderOpaque_FUN_00414500 at 0041456e
;   core_bmppuzzl.cpp_CAudioRecPuzzle_renderReel_FUN_00416fa0 at 004171ea
;   core_bodypart.cpp_CBodyPart_renderBackground_FUN_00419130 at 00419204
;   core_bodypart.cpp_CBodyPart_renderOpaque_FUN_00418fc0 at 004190c3
;   core_boxactor.cpp_CBoxActor_renderOpaque_FUN_004224f0 at 004225c0
;   core_boxactor.cpp_CBoxActor_renderTransparent_FUN_00422600 at 004226ed
;   core_bugs.cpp_CBugs_renderOpaque_FUN_00425480 at 004255fc
;   ... and 55 more
;
; Called Functions:
;   engine_matrix.c_pop_FUN_005084b0
;
; *****************************************************************************

section .text

    CALL engine_matrix.c_pop_FUN_005084b0 ; 004839a0
        ;   XREF to: 005084b0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_005084b0()
        ;   Label: engine_drender.cpp_pop_FUN_004839a0
    RET                                 ; 004839a5

