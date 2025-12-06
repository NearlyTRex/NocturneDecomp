; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_colonel.cpp_CColonel_load_FUN_00440490()
;
;
; Called Functions:
;   core_hero.cpp_CHero_serialize_FUN_004f2610
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00440490
        ;   Label: core_colonel.cpp_CColonel_load_FUN_00440490
    PUSH EDX                            ; 00440494
    CALL core_hero.cpp_CHero_serialize_FUN_004f2610 ; 00440495 | void core_hero.cpp_CHero_serialize_FUN_004f2610(CHero * this_ptr)
        ;   XREF to: 004f2610 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0044049a
    RET                                 ; 0044049d

