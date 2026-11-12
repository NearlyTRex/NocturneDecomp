; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_console_cpp_staticInit_FUN_00436650(void)
;
;
; Called Functions:
;   crt_stdlib.c__atexit_FUN_005b8d8c
;   engine_console.cpp_CConsole_ctor_FUN_00436680
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00436650
        ;   Label: engine_console.cpp_staticInit_FUN_00436650
    PUSH 0x1                            ; 00436652
    PUSH 0x20                           ; 00436654
    PUSH 0x28                           ; 00436656
    PUSH 0x7c158c                       ; 00436658
    CALL engine_console.cpp_CConsole_ctor_FUN_00436680 ; 0043665d
        ;   XREF to: 00436680 (UNCONDITIONAL_CALL)  ; CConsole * engine_console.cpp_CConsole_ctor_FUN_00436680(CConsole * this_ptr, int width, int height, int screen_x, ...)
    ADD ESP,0x14                        ; 00436662
    PUSH 0x609ec0                       ; 00436665
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 0043666a
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005b8d8c(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 0043666f
    RET                                 ; 00436672

