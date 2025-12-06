; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_icepick.cpp_CIcePick_load_FUN_004f9590()
;
;
; Called Functions:
;   core_hero.cpp_CHero_serialize_FUN_004f2610
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004f9590
        ;   Label: core_icepick.cpp_CIcePick_load_FUN_004f9590
    PUSH EDX                            ; 004f9594
    CALL core_hero.cpp_CHero_serialize_FUN_004f2610 ; 004f9595 | void core_hero.cpp_CHero_serialize_FUN_004f2610(CHero * this_ptr)
        ;   XREF to: 004f2610 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004f959a
    RET                                 ; 004f959d

