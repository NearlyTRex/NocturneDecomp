; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_haystack.cpp_CHaystack_load_FUN_004f1b50()
;
;
; Called Functions:
;   core_hero.cpp_CHero_serialize_FUN_004f2610
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004f1b50
        ;   Label: core_haystack.cpp_CHaystack_load_FUN_004f1b50
    PUSH EDX                            ; 004f1b54
    CALL core_hero.cpp_CHero_serialize_FUN_004f2610 ; 004f1b55 | void core_hero.cpp_CHero_serialize_FUN_004f2610(CHero * this_ptr)
        ;   XREF to: 004f2610 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004f1b5a
    RET                                 ; 004f1b5d

