; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_scat.cpp_FUN_00558010()
;
;
; XREF[2]:
;   core_scat.cpp_FUN_005571f0 at 005575e7
;   core_scat.cpp_FUN_00557ea0 at 00557fb0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00558010
        ;   Label: core_scat.cpp_FUN_00558010
    CMP dword ptr [EAX + 0x1fbd4],0x0   ; 00558014
    JZ 0x00558034                       ; 0055801b | LAB_00558034
        ;   XREF to: 00558034 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EAX + 0x1fbe8]   ; 0055801d
    TEST ECX,ECX                        ; 00558023
    JZ 0x00558034                       ; 00558025 | LAB_00558034
        ;   XREF to: 00558034 (CONDITIONAL_JUMP)
    CMP dword ptr [ECX + 0x2e0],0x8     ; 00558027
    JZ 0x00556e44                       ; 0055802e | LAB_00556e44
        ;   XREF to: 00556e44 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 00558034
        ;   Label: LAB_00558034
    RET                                 ; 00558036

