; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMouse * __cdecl engine_ncursfx_cpp_CMouse_dtor_FUN_00510070(CMouse *this_ptr,uint flags)
;
; Parameters:
; CMouse *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_menu.cpp_CAlphaBitmap_arrdtor8_FUN_004f0230
;   engine_ncursfx.cpp_CAlphaBitmap_arrdtor15_FUN_005103e0
;   engine_ncursfx.cpp_CAlphaBitmap_arrdtor7_FUN_005103c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00510070
        ;   Label: engine_ncursfx.cpp_CMouse_dtor_FUN_00510070
    PUSH 0x0                            ; 00510074
    ADD EAX,0x12c                       ; 00510076
    PUSH EAX                            ; 0051007b
    CALL engine_ncursfx.cpp_CAlphaBitmap_arrdtor15_FUN_005103e0 ; 0051007c
        ;   XREF to: 005103e0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_ncursfx.cpp_CAlphaBitmap_arrdtor15_FUN_005103e0(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00510081
    PUSH 0x0                            ; 00510084
    SUB EAX,0x8c                        ; 00510086
    PUSH EAX                            ; 0051008b
    CALL engine_ncursfx.cpp_CAlphaBitmap_arrdtor7_FUN_005103c0 ; 0051008c
        ;   XREF to: 005103c0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_ncursfx.cpp_CAlphaBitmap_arrdtor7_FUN_005103c0(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00510091
    PUSH 0x0                            ; 00510094
    SUB EAX,0xa0                        ; 00510096
    PUSH EAX                            ; 0051009b
    CALL core_menu.cpp_CAlphaBitmap_arrdtor8_FUN_004f0230 ; 0051009c
        ;   XREF to: 004f0230 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * core_menu.cpp_CAlphaBitmap_arrdtor8_FUN_004f0230(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005100a1
    RET                                 ; 005100a4

