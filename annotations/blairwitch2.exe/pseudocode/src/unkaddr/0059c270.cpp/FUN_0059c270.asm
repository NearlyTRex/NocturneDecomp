; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkaddr_0059c270_cpp_FUN_0059c270(void)
;
;
; Called Functions:
;   crt_stdlib.c__atexit_FUN_005b8d8c
;   unkclass_gamehook.cpp_CGameHook_ctor_FUN_0059c290
;
; *****************************************************************************

section .text

    PUSH 0x2668118                      ; 0059c270
        ;   Label: unkaddr_0059c270.cpp_FUN_0059c270
    CALL unkclass_gamehook.cpp_CGameHook_ctor_FUN_0059c290 ; 0059c275
        ;   XREF to: 0059c290 (UNCONDITIONAL_CALL)  ; CGameHook * unkclass_gamehook.cpp_CGameHook_ctor_FUN_0059c290(CGameHook * this_ptr)
    ADD ESP,0x4                         ; 0059c27a
    PUSH 0x61ea4c                       ; 0059c27d
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 0059c282
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005b8d8c()
    ADD ESP,0x4                         ; 0059c287
    RET                                 ; 0059c28a

