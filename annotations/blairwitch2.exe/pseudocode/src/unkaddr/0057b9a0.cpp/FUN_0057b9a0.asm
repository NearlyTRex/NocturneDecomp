; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkaddr_0057b9a0_cpp_FUN_0057b9a0(void)
;
;
; Called Functions:
;   crt_stdlib.c__atexit_FUN_005b8d8c
;   support_trstream.cpp_COutStreamDebug_ctor_FUN_0057e1c0
;
; *****************************************************************************

section .text

    PUSH 0x2653654                      ; 0057b9a0
        ;   Label: unkaddr_0057b9a0.cpp_FUN_0057b9a0
    CALL support_trstream.cpp_COutStreamDebug_ctor_FUN_0057e1c0 ; 0057b9a5
        ;   XREF to: 0057e1c0 (UNCONDITIONAL_CALL)  ; COutStreamDebug * support_trstream.cpp_COutStreamDebug_ctor_FUN_0057e1c0(COutStreamDebug * this_ptr)
    ADD ESP,0x4                         ; 0057b9aa
    PUSH 0x61e46c                       ; 0057b9ad
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 0057b9b2
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005b8d8c()
    ADD ESP,0x4                         ; 0057b9b7
    RET                                 ; 0057b9ba

