; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * core_bodypart_cpp_FUN_00416c50(int param_1,undefined4 *param_2)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00416c50
        ;   Label: core_bodypart.cpp_FUN_00416c50
    MOV ECX,dword ptr [ESP + 0xc]       ; 00416c51
    MOV EAX,dword ptr [ESP + 0x8]       ; 00416c55
    ADD EAX,0x154                       ; 00416c59
    MOV EDX,dword ptr [EAX]             ; 00416c5e
    LEA EBX,[EAX + 0x4]                 ; 00416c60
    MOV dword ptr [ECX],EDX             ; 00416c63
    LEA EDX,[ECX + 0x4]                 ; 00416c65
    MOV EBX,dword ptr [EBX]             ; 00416c68
    MOV dword ptr [EDX],EBX             ; 00416c6a
    LEA EBX,[EAX + 0x8]                 ; 00416c6c
    MOV EBX,dword ptr [EBX]             ; 00416c6f
    MOV dword ptr [EDX + 0x4],EBX       ; 00416c71
    MOV EBX,dword ptr [EAX + 0xc]       ; 00416c74
    ADD EAX,0xc                         ; 00416c77
    MOV dword ptr [EDX + 0x8],EBX       ; 00416c7a
    LEA EBX,[EAX + 0x4]                 ; 00416c7d
    MOV EBX,dword ptr [EBX]             ; 00416c80
    MOV dword ptr [EDX + 0xc],EBX       ; 00416c82
    MOV EAX,dword ptr [EAX + 0x8]       ; 00416c85
    MOV dword ptr [EDX + 0x10],EAX      ; 00416c88
    MOV EAX,ECX                         ; 00416c8b
    POP EBX                             ; 00416c8d
    RET                                 ; 00416c8e

