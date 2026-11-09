; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_pop_FUN_0046b4a0(void)
;
;
; XREF[67]:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 at 00408a17
;   core_anvil.cpp_FUN_0040ec10 at 0040eca1
;   core_baron.cpp_FUN_00410670 at 0041075f
;   core_battery.cpp_FUN_00414810 at 0041487e
;   core_bodypart.cpp_FUN_00415b60 at 00415c63
;   core_bodypart.cpp_FUN_00415cd0 at 00415d97
;   core_boxactor.cpp_FUN_0041c580 at 0041c650
;   core_boxactor.cpp_FUN_0041c690 at 0041c77d
;   core_bugs.cpp_FUN_0041f450 at 0041f5cc
;   core_charactr.cpp_CCharacter_renderAttachedModels_FUN_00425aa0 at 00425b9d
;   ... and 57 more
;
; Called Functions:
;   engine_matrix.c_pop_FUN_004e9810
;
; *****************************************************************************

section .text

    CALL engine_matrix.c_pop_FUN_004e9810 ; 0046b4a0
        ;   XREF to: 004e9810 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_004e9810()
        ;   Label: engine_matrix.c_pop_FUN_0046b4a0
    RET                                 ; 0046b4a5

