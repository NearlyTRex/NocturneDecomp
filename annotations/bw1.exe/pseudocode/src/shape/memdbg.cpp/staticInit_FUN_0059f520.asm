; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_memdbg_cpp_staticInit_FUN_0059f520(void)
;
;
; Called Functions:
;   crt_stdlib.c__atexit_FUN_005c1093
;   support_trstream.cpp_COutStreamDebug_ctor_FUN_005a1e10
;
; *****************************************************************************

section .text

    PUSH 0x2c8ae70                      ; 0059f520
        ;   Label: shape_memdbg.cpp_staticInit_FUN_0059f520
    CALL support_trstream.cpp_COutStreamDebug_ctor_FUN_005a1e10 ; 0059f525
        ;   XREF to: 005a1e10 (UNCONDITIONAL_CALL)  ; COutStreamDebug * support_trstream.cpp_COutStreamDebug_ctor_FUN_005a1e10(COutStreamDebug * this_ptr)
    ADD ESP,0x4                         ; 0059f52a
    PUSH 0x625bdc                       ; 0059f52d
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 0059f532
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005c1093()
    ADD ESP,0x4                         ; 0059f537
    RET                                 ; 0059f53a

