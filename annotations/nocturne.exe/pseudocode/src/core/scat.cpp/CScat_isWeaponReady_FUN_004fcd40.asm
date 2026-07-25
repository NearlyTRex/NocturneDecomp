; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(int param_1)
;
;
; XREF[2]:
;   FUN_004fbf20 at 004fc26b
;   core_scat.cpp_CScat_processDamage_FUN_004fcbd0 at 004fcce0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004fcd40
        ;   Label: core_scat.cpp_CScat_isWeaponReady_FUN_004fcd40
    CMP dword ptr [EAX + 0x1fa3c],0x0   ; 004fcd44
    JZ 0x004fcd64                       ; 004fcd4b
        ;   XREF to: 004fcd64 (CONDITIONAL_JUMP)  ; LAB_004fcd64
    MOV ECX,dword ptr [EAX + 0x1fa50]   ; 004fcd4d
    TEST ECX,ECX                        ; 004fcd53
    JZ 0x004fcd64                       ; 004fcd55
        ;   XREF to: 004fcd64 (CONDITIONAL_JUMP)  ; LAB_004fcd64
    CMP dword ptr [ECX + 0x2d8],0x8     ; 004fcd57
    JZ 0x004fbb84                       ; 004fcd5e
        ;   XREF to: 004fbb84 (CONDITIONAL_JUMP)  ; LAB_004fbb84
    XOR EAX,EAX                         ; 004fcd64
        ;   Label: LAB_004fcd64
    RET                                 ; 004fcd66

