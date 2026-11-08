; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00537d00(int param_1,int param_2,int param_3)
;
;
; XREF[1]:
;   FUN_00537cb0 at 00537cd8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00537d00
        ;   Label: FUN_00537d00
    PUSH ESI                            ; 00537d01
    PUSH EDI                            ; 00537d02
    PUSH EBP                            ; 00537d03
    SUB ESP,0x8                         ; 00537d04
    MOV EBP,dword ptr [ESP + 0x20]      ; 00537d07
    CMP dword ptr [ESP + 0x24],0x0      ; 00537d0b
    JZ 0x00537d97                       ; 00537d10
        ;   XREF to: 00537d97 (CONDITIONAL_JUMP)  ; LAB_00537d97
    XOR ECX,ECX                         ; 00537d16
        ;   Label: LAB_00537d16
    MOV dword ptr [ESP + 0x4],ECX       ; 00537d18
    MOV dword ptr [ESP],ECX             ; 00537d1c
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00537d1f
        ;   Label: LAB_00537d1f
    MOV ESI,dword ptr [ESP + 0x4]       ; 00537d23
    MOV ECX,dword ptr [ECX + 0x20]      ; 00537d27
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00537d2a
    ADD ECX,ESI                         ; 00537d2e
    MOV EBX,dword ptr [EBX + 0x14]      ; 00537d30
    MOV EDX,dword ptr [ECX]             ; 00537d33
    MOV EDI,dword ptr [ECX + 0x4]       ; 00537d35
    ADD EDX,EBX                         ; 00537d38
    ADD EBX,EDI                         ; 00537d3a
    CMP EDX,EBX                         ; 00537d3c
    JNC 0x00537d6c                      ; 00537d3e
        ;   XREF to: 00537d6c (CONDITIONAL_JUMP)  ; LAB_00537d6c
    LEA EDI,[EDX + 0x4]                 ; 00537d40
        ;   Label: LAB_00537d40
    XOR ECX,ECX                         ; 00537d43
    XOR ESI,ESI                         ; 00537d45
    MOV CX,word ptr [EDX + 0x2]         ; 00537d47
    MOV SI,word ptr [EDX]               ; 00537d4b
    LEA EDX,[ECX + 0x3]                 ; 00537d4e
    AND DL,0xfc                         ; 00537d51
    ADD ESI,EBP                         ; 00537d54
    ADD EDX,EDI                         ; 00537d56
    PUSH EDI                            ; 00537d58
    MOV EAX,ECX                         ; 00537d59
    SHR ECX,0x2                         ; 00537d5b
    MOVSD.REP ES:EDI,ESI                ; 00537d5e
    MOV CL,AL                           ; 00537d60
    AND CL,0x3                          ; 00537d62
    MOVSB.REP ES:EDI,ESI                ; 00537d65
    POP EDI                             ; 00537d67
    CMP EDX,EBX                         ; 00537d68
    JC 0x00537d40                       ; 00537d6a
        ;   XREF to: 00537d40 (CONDITIONAL_JUMP)  ; LAB_00537d40
    MOV EDX,dword ptr [ESP]             ; 00537d6c
        ;   Label: LAB_00537d6c
    MOV ECX,dword ptr [ESP + 0x24]      ; 00537d6f
    MOV EAX,dword ptr [ESP + 0x4]       ; 00537d73
    INC EDX                             ; 00537d77
    ADD EBP,ECX                         ; 00537d78
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00537d7a
    ADD EAX,0x4                         ; 00537d7e
    MOV dword ptr [ESP],EDX             ; 00537d81
    MOV EBX,dword ptr [ECX + 0x1c]      ; 00537d84
    MOV dword ptr [ESP + 0x4],EAX       ; 00537d87
    CMP EDX,EBX                         ; 00537d8b
    JL 0x00537d1f                       ; 00537d8d
        ;   XREF to: 00537d1f (CONDITIONAL_JUMP)  ; LAB_00537d1f
    ADD ESP,0x8                         ; 00537d8f
    POP EBP                             ; 00537d92
    POP EDI                             ; 00537d93
    POP ESI                             ; 00537d94
    POP EBX                             ; 00537d95
    RET                                 ; 00537d96
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00537d97
        ;   Label: LAB_00537d97
    MOV EDX,dword ptr [EDX + 0x18]      ; 00537d9b
    MOV dword ptr [ESP + 0x24],EDX      ; 00537d9e
    JMP 0x00537d16                      ; 00537da2
        ;   XREF to: 00537d16 (UNCONDITIONAL_JUMP)  ; LAB_00537d16

