; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_console_cpp_staticInit_FUN_00445370(void)
;
;
; Called Functions:
;   crt_stdlib.c__atexit_FUN_005c1093
;   engine_console.cpp_CConsole_ctor_FUN_004453a0
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00445370
        ;   Label: engine_console.cpp_staticInit_FUN_00445370
    PUSH 0x1                            ; 00445372
    PUSH 0x20                           ; 00445374
    PUSH 0x28                           ; 00445376
    PUSH 0x7db5f0                       ; 00445378
    CALL engine_console.cpp_CConsole_ctor_FUN_004453a0 ; 0044537d
        ;   XREF to: 004453a0 (UNCONDITIONAL_CALL)  ; CConsole * engine_console.cpp_CConsole_ctor_FUN_004453a0(CConsole * this_ptr, int width, int height, int screen_x, ...)
    ADD ESP,0x14                        ; 00445382
    PUSH 0x6110f0                       ; 00445385
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 0044538a
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005c1093()
    ADD ESP,0x4                         ; 0044538f
    RET                                 ; 00445392

