; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined4 * core_turret_cpp_FUN_005e3720(void)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e3720
        ;   Label: core_turret.cpp_FUN_005e3720
    MOV ECX,dword ptr [ESP + 0xc]       ; 005e3721
    MOV EAX,dword ptr [ESP + 0x8]       ; 005e3725
    ADD EAX,0x860                       ; 005e3729
    MOV EDX,dword ptr [EAX]             ; 005e372e
    LEA EBX,[EAX + 0x4]                 ; 005e3730
    MOV dword ptr [ECX],EDX             ; 005e3733
    LEA EDX,[ECX + 0x4]                 ; 005e3735
    MOV EBX,dword ptr [EBX]             ; 005e3738
    MOV dword ptr [EDX],EBX             ; 005e373a
    MOV EAX,dword ptr [EAX + 0x8]       ; 005e373c
    MOV dword ptr [EDX + 0x4],EAX       ; 005e373f
    MOV EAX,ECX                         ; 005e3742
    POP EBX                             ; 005e3744
    RET                                 ; 005e3745

