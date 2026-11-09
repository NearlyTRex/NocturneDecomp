; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMouse * __cdecl engine_ncursfx_cpp_CMouse_dtor_FUN_00508b50(CMouse *this_ptr,uint flags)
;
; Parameters:
; CMouse *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_game.cpp_CAlphaBitmap_arrdtor8_FUN_004c4d60
;   engine_ncursfx.cpp_CAlphaBitmap_arrdtor7_FUN_00508ea0
;   engine_ncursfx.cpp_FUN_00508ec0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00508b50
        ;   Label: engine_ncursfx.cpp_CMouse_dtor_FUN_00508b50
    PUSH 0x0                            ; 00508b54
    ADD EAX,0x12c                       ; 00508b56
    PUSH EAX                            ; 00508b5b
    CALL engine_ncursfx.cpp_FUN_00508ec0 ; 00508b5c
        ;   XREF to: 00508ec0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_ncursfx.cpp_FUN_00508ec0(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00508b61
    PUSH 0x0                            ; 00508b64
    SUB EAX,0x8c                        ; 00508b66
    PUSH EAX                            ; 00508b6b
    CALL engine_ncursfx.cpp_CAlphaBitmap_arrdtor7_FUN_00508ea0 ; 00508b6c
        ;   XREF to: 00508ea0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_ncursfx.cpp_CAlphaBitmap_arrdtor7_FUN_00508ea0(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00508b71
    PUSH 0x0                            ; 00508b74
    SUB EAX,0xa0                        ; 00508b76
    PUSH EAX                            ; 00508b7b
    CALL core_game.cpp_CAlphaBitmap_arrdtor8_FUN_004c4d60 ; 00508b7c
        ;   XREF to: 004c4d60 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * core_game.cpp_CAlphaBitmap_arrdtor8_FUN_004c4d60(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00508b81
    RET                                 ; 00508b84

