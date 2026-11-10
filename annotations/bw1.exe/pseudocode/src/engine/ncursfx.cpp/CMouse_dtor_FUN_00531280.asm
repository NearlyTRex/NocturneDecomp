; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMouse * __cdecl engine_ncursfx_cpp_CMouse_dtor_FUN_00531280(CMouse *this_ptr,uint flags)
;
; Parameters:
; CMouse *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_game.cpp_CAlphaBitmap_arrdtor8_FUN_004dc1f0
;   engine_ncursfx.cpp_CAlphaBitmap_arrdtor15_FUN_005315f0
;   engine_ncursfx.cpp_CAlphaBitmap_arrdtor7_FUN_005315d0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00531280
        ;   Label: engine_ncursfx.cpp_CMouse_dtor_FUN_00531280
    PUSH 0x0                            ; 00531284
    ADD EAX,0x12c                       ; 00531286
    PUSH EAX                            ; 0053128b
    CALL engine_ncursfx.cpp_CAlphaBitmap_arrdtor15_FUN_005315f0 ; 0053128c
        ;   XREF to: 005315f0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_ncursfx.cpp_CAlphaBitmap_arrdtor15_FUN_005315f0(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00531291
    PUSH 0x0                            ; 00531294
    SUB EAX,0x8c                        ; 00531296
    PUSH EAX                            ; 0053129b
    CALL engine_ncursfx.cpp_CAlphaBitmap_arrdtor7_FUN_005315d0 ; 0053129c
        ;   XREF to: 005315d0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_ncursfx.cpp_CAlphaBitmap_arrdtor7_FUN_005315d0(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005312a1
    PUSH 0x0                            ; 005312a4
    SUB EAX,0xa0                        ; 005312a6
    PUSH EAX                            ; 005312ab
    CALL core_game.cpp_CAlphaBitmap_arrdtor8_FUN_004dc1f0 ; 005312ac
        ;   XREF to: 004dc1f0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * core_game.cpp_CAlphaBitmap_arrdtor8_FUN_004dc1f0(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005312b1
    RET                                 ; 005312b4

