; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_processTextureCoordinates_FUN_00403a50(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0062902c
;   undefined4 DAT_00629030
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403a50
        ;   Label: engine_3d.c_processTextureCoordinates_FUN_00403a50
    MOV ECX,dword ptr [ESP + 0x8]       ; 00403a51
    LEA EDX,[ECX + 0xc]                 ; 00403a55
    MOV EBX,dword ptr [ECX + 0x8]       ; 00403a58
    XOR EAX,EAX                         ; 00403a5b
    TEST EBX,EBX                        ; 00403a5d
    JLE 0x00403a8f                      ; 00403a5f
        ;   XREF to: 00403a8f (CONDITIONAL_JUMP)  ; LAB_00403a8f
    PUSH ESI                            ; 00403a61
    MOV ESI,dword ptr [ECX + 0x4]       ; 00403a62
        ;   Label: LAB_00403a62
    ADD ESI,EAX                         ; 00403a65
    IMUL ESI,ESI,0x30                   ; 00403a67
    MOV EBX,dword ptr [EDX]             ; 00403a6a
    MOV dword ptr [ESI + 0x62902c],EBX  ; 00403a6c | DAT_0062902c
    MOV EBX,dword ptr [ECX + 0x4]       ; 00403a72
    ADD EBX,EAX                         ; 00403a75
    IMUL ESI,EBX,0x30                   ; 00403a77
    MOV EBX,dword ptr [EDX + 0x4]       ; 00403a7a
    MOV dword ptr [ESI + 0x629030],EBX  ; 00403a7d | DAT_00629030
    INC EAX                             ; 00403a83
    MOV ESI,dword ptr [ECX + 0x8]       ; 00403a84
    ADD EDX,0x8                         ; 00403a87
    CMP EAX,ESI                         ; 00403a8a
    JL 0x00403a62                       ; 00403a8c
        ;   XREF to: 00403a62 (CONDITIONAL_JUMP)  ; LAB_00403a62
    POP ESI                             ; 00403a8e
    MOV EAX,dword ptr [ECX + 0x8]       ; 00403a8f
        ;   Label: LAB_00403a8f
    ADD ECX,0xc                         ; 00403a92
    SHL EAX,0x3                         ; 00403a95
    ADD EAX,ECX                         ; 00403a98
    POP EBX                             ; 00403a9a
    RET                                 ; 00403a9b

