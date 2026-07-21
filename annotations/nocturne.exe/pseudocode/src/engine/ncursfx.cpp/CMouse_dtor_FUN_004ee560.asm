; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_ncursfx_cpp_CMouse_dtor_FUN_004ee560(int param_1)
;
;
; Called Functions:
;   core_menu.cpp_CAlphaBitmap_arrdtor_FUN_004d4370
;   engine_ncursfx.cpp_CAlphaBitmap_arrdtor1_FUN_004ee8b0
;   engine_ncursfx.cpp_CAlphaBitmap_arrdtor2_FUN_004ee8d0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ee560
        ;   Label: engine_ncursfx.cpp_CMouse_dtor_FUN_004ee560
    PUSH 0x0                            ; 004ee564
    ADD EAX,0x12c                       ; 004ee566
    PUSH EAX                            ; 004ee56b
    CALL engine_ncursfx.cpp_CAlphaBitmap_arrdtor2_FUN_004ee8d0 ; 004ee56c
        ;   XREF to: 004ee8d0 (UNCONDITIONAL_CALL)  ; undefined engine_ncursfx.cpp_CAlphaBitmap_arrdtor2_FUN_004ee8d0()
    ADD ESP,0x8                         ; 004ee571
    PUSH 0x0                            ; 004ee574
    SUB EAX,0x8c                        ; 004ee576
    PUSH EAX                            ; 004ee57b
    CALL engine_ncursfx.cpp_CAlphaBitmap_arrdtor1_FUN_004ee8b0 ; 004ee57c
        ;   XREF to: 004ee8b0 (UNCONDITIONAL_CALL)  ; undefined engine_ncursfx.cpp_CAlphaBitmap_arrdtor1_FUN_004ee8b0()
    ADD ESP,0x8                         ; 004ee581
    PUSH 0x0                            ; 004ee584
    SUB EAX,0xa0                        ; 004ee586
    PUSH EAX                            ; 004ee58b
    CALL core_menu.cpp_CAlphaBitmap_arrdtor_FUN_004d4370 ; 004ee58c
        ;   XREF to: 004d4370 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_CAlphaBitmap_arrdtor_FUN_004d4370()
    ADD ESP,0x8                         ; 004ee591
    RET                                 ; 004ee594

