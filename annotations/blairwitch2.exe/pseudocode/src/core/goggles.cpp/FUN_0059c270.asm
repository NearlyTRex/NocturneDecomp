; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_goggles_cpp_FUN_0059c270(void)
;
;
; Called Functions:
;   core_gmehook.cpp_CGameHook_ctor_FUN_0059c290
;   crt_stdlib.c__atexit_FUN_005b8d8c
;
; *****************************************************************************

section .text

    PUSH 0x2668118                      ; 0059c270
        ;   Label: core_goggles.cpp_FUN_0059c270
    CALL core_gmehook.cpp_CGameHook_ctor_FUN_0059c290 ; 0059c275
        ;   XREF to: 0059c290 (UNCONDITIONAL_CALL)  ; CGameHook * core_gmehook.cpp_CGameHook_ctor_FUN_0059c290(CGameHook * this_ptr)
    ADD ESP,0x4                         ; 0059c27a
    PUSH 0x61ea4c                       ; 0059c27d
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 0059c282
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005b8d8c()
    ADD ESP,0x4                         ; 0059c287
    RET                                 ; 0059c28a

