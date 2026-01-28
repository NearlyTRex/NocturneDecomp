; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_scat_cpp_FUN_00559120(void)
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
    CALL core_hero.cpp_CHero_FUN_004f3f20 ; 0055912a
        ;   XREF to: 004f3f20 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_FUN_004f3f20(CHero * this_ptr)
    ADD ESP,0x8                         ; 0055912f
    RET                                 ; 00559132

