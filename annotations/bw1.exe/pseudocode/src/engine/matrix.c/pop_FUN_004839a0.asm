; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_pop_FUN_004839a0(void)
;
;
; XREF[65]:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 at 004087f7
;   core_anvil.cpp_FUN_0040e7b0 at 0040e841
;   core_baron.cpp_FUN_004101f0 at 004102df
;   core_battery.cpp_FUN_00414500 at 0041456e
;   core_bodypart.cpp_FUN_00418fc0 at 004190c3
;   core_bodypart.cpp_FUN_00419130 at 00419204
;   core_boxactor.cpp_FUN_004224f0 at 004225c0
;   core_boxactor.cpp_FUN_00422600 at 004226ed
;   core_bugs.cpp_FUN_00425480 at 004255fc
;   core_charactr.cpp_CCharacter_renderAttachedModels_FUN_0042f3c0 at 0042f4bd
;   ... and 55 more
;
; Called Functions:
;   engine_matrix.c_pop_FUN_005084b0
;
; *****************************************************************************

section .text

    CALL engine_matrix.c_pop_FUN_005084b0 ; 004839a0
        ;   XREF to: 005084b0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_005084b0()
        ;   Label: engine_matrix.c_pop_FUN_004839a0
    RET                                 ; 004839a5

