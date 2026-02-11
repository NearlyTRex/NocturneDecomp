; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CMouse * __cdecl engine_ncursfx_cpp_CMouse_dtor_FUN_005443e0(CMouse *this_ptr)
;
; Parameters:
; CMouse *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_menu.cpp_freeBitmaps_FUN_00514f50
;   engine_ncursfx.cpp_freeBitmap_FUN_00544730
;   engine_ncursfx.cpp_freeSkullBitmaps_FUN_00544750
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005443e0
        ;   Label: engine_ncursfx.cpp_CMouse_dtor_FUN_005443e0
    PUSH 0x0                            ; 005443e4
    ADD EAX,0x12c                       ; 005443e6
    PUSH EAX                            ; 005443eb
    CALL engine_ncursfx.cpp_freeSkullBitmaps_FUN_00544750 ; 005443ec
        ;   XREF to: 00544750 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_ncursfx.cpp_freeSkullBitmaps_FUN_00544750(CAlphaBitmap * objs)
    ADD ESP,0x8                         ; 005443f1
    PUSH 0x0                            ; 005443f4
    SUB EAX,0x8c                        ; 005443f6
    PUSH EAX                            ; 005443fb
    CALL engine_ncursfx.cpp_freeBitmap_FUN_00544730 ; 005443fc
        ;   XREF to: 00544730 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_ncursfx.cpp_freeBitmap_FUN_00544730(CAlphaBitmap * objs)
    ADD ESP,0x8                         ; 00544401
    PUSH 0x0                            ; 00544404
    SUB EAX,0xa0                        ; 00544406
    PUSH EAX                            ; 0054440b
    CALL core_menu.cpp_freeBitmaps_FUN_00514f50 ; 0054440c
        ;   XREF to: 00514f50 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * core_menu.cpp_freeBitmaps_FUN_00514f50(CAlphaBitmap * objs)
    ADD ESP,0x8                         ; 00544411
    RET                                 ; 00544414

