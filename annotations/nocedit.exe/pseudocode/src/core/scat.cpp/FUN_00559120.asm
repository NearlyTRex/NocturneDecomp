; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_scat.cpp_FUN_00559120()
;
;
; Called Functions:
;   core_hero.cpp_CHero_FUN_004f3f20
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00559120
        ;   Label: core_scat.cpp_FUN_00559120
    PUSH EDX                            ; 00559124
    MOV ECX,dword ptr [ESP + 0x8]       ; 00559125
    PUSH ECX                            ; 00559129
    CALL core_hero.cpp_CHero_FUN_004f3f20 ; 0055912a | void core_hero.cpp_CHero_FUN_004f3f20(CHero * this_ptr)
        ;   XREF to: 004f3f20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0055912f
    RET                                 ; 00559132

