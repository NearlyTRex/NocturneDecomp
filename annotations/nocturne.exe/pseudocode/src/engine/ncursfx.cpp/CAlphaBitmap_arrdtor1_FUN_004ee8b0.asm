; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_ncursfx_cpp_CAlphaBitmap_arrdtor1_FUN_004ee8b0(undefined4 param_1)
;
;
; XREF[1]:
;   engine_ncursfx.cpp_CMouse_dtor_FUN_004ee560 at 004ee57c
;
; Referenced Globals:
;   undefined4 DAT_0059df00
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59df00                       ; 004ee8b0 | DAT_0059df00
        ;   Label: engine_ncursfx.cpp_CAlphaBitmap_arrdtor1_FUN_004ee8b0
    PUSH 0x7                            ; 004ee8b5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ee8b7
    PUSH EDX                            ; 004ee8bb
    CALL crt_memory.c___arrfini_FUN_0056494f ; 004ee8bc
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_0056494f()
    ADD ESP,0xc                         ; 004ee8c1
    RET                                 ; 004ee8c4

