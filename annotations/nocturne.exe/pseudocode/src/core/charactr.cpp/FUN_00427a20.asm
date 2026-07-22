; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * core_charactr_cpp_FUN_00427a20(int param_1,undefined4 *param_2)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00427a20
        ;   Label: core_charactr.cpp_FUN_00427a20
    MOV ECX,dword ptr [ESP + 0xc]       ; 00427a21
    MOV EAX,dword ptr [ESP + 0x8]       ; 00427a25
    ADD EAX,0x25f0                      ; 00427a29
    MOV EDX,dword ptr [EAX]             ; 00427a2e
    LEA EBX,[EAX + 0x4]                 ; 00427a30
    MOV dword ptr [ECX],EDX             ; 00427a33
    LEA EDX,[ECX + 0x4]                 ; 00427a35
    MOV EBX,dword ptr [EBX]             ; 00427a38
    MOV dword ptr [EDX],EBX             ; 00427a3a
    LEA EBX,[EAX + 0x8]                 ; 00427a3c
    MOV EBX,dword ptr [EBX]             ; 00427a3f
    MOV dword ptr [EDX + 0x4],EBX       ; 00427a41
    MOV EBX,dword ptr [EAX + 0xc]       ; 00427a44
    ADD EAX,0xc                         ; 00427a47
    MOV dword ptr [EDX + 0x8],EBX       ; 00427a4a
    LEA EBX,[EAX + 0x4]                 ; 00427a4d
    MOV EBX,dword ptr [EBX]             ; 00427a50
    MOV dword ptr [EDX + 0xc],EBX       ; 00427a52
    MOV EAX,dword ptr [EAX + 0x8]       ; 00427a55
    MOV dword ptr [EDX + 0x10],EAX      ; 00427a58
    MOV EAX,ECX                         ; 00427a5b
    POP EBX                             ; 00427a5d
    RET                                 ; 00427a5e

