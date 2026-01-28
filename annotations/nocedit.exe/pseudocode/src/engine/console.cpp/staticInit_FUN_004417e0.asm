; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_console_cpp_staticInit_FUN_004417e0(void)
;
;
; Referenced Globals:
;   WatcomStaticDestructorNode g_ConsoleDestructorNode
;   CConsole g_ConsolePtr
;
; Called Functions:
;   crt_stdlib.c_atexit_FUN_005ff060
;   engine_console.cpp_CConsole_ctor_FUN_00441810
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004417e0
        ;   Label: engine_console.cpp_staticInit_FUN_004417e0
    PUSH 0x1                            ; 004417e2
    PUSH 0x20                           ; 004417e4
    PUSH 0x28                           ; 004417e6
    PUSH 0x83b1a4                       ; 004417e8 | g_ConsolePtr
    CALL engine_console.cpp_CConsole_ctor_FUN_00441810 ; 004417ed
        ;   XREF to: 00441810 (UNCONDITIONAL_CALL)  ; CConsole * engine_console.cpp_CConsole_ctor_FUN_00441810(CConsole * this_ptr, int width, int height, int screen_x, ...)
    ADD ESP,0x14                        ; 004417f2
    PUSH 0x66e8d0                       ; 004417f5 | g_ConsoleDestructorNode
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 004417fa
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004417ff
    RET                                 ; 00441802

