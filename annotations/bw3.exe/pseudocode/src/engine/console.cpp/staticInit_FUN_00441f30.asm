; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_console_cpp_staticInit_FUN_00441f30(void)
;
;
; Called Functions:
;   crt_stdlib.c__atexit_FUN_005a3e13
;   engine_console.cpp_CConsole_ctor_FUN_00441f60
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00441f30
        ;   Label: engine_console.cpp_staticInit_FUN_00441f30
    PUSH 0x1                            ; 00441f32
    PUSH 0x20                           ; 00441f34
    PUSH 0x28                           ; 00441f36
    PUSH 0x7f7ea4                       ; 00441f38
    CALL engine_console.cpp_CConsole_ctor_FUN_00441f60 ; 00441f3d
        ;   XREF to: 00441f60 (UNCONDITIONAL_CALL)  ; CConsole * engine_console.cpp_CConsole_ctor_FUN_00441f60(CConsole * this_ptr, int width, int height, int screen_x, ...)
    ADD ESP,0x14                        ; 00441f42
    PUSH 0x5f1680                       ; 00441f45
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 00441f4a
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005a3e13(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00441f4f
    RET                                 ; 00441f52

