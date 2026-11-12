; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_trstream_cpp_staticInit_FUN_00572510(void)
;
;
; Called Functions:
;   crt_stdlib.c__atexit_FUN_005a3e13
;   support_trstream.cpp_COutStreamDebug_ctor_FUN_00574e00
;
; *****************************************************************************

section .text

    PUSH 0x2cfd8c0                      ; 00572510
        ;   Label: support_trstream.cpp_staticInit_FUN_00572510
    CALL support_trstream.cpp_COutStreamDebug_ctor_FUN_00574e00 ; 00572515
        ;   XREF to: 00574e00 (UNCONDITIONAL_CALL)  ; COutStreamDebug * support_trstream.cpp_COutStreamDebug_ctor_FUN_00574e00(COutStreamDebug * this_ptr)
    ADD ESP,0x4                         ; 0057251a
    PUSH 0x606abc                       ; 0057251d
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 00572522
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005a3e13(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00572527
    RET                                 ; 0057252a

