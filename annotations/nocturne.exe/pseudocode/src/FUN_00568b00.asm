; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint * FUN_00568b00(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005635c0 at 0056365b
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00568b00
        ;   Label: FUN_00568b00
    PUSH EDI                            ; 00568b01
    PUSH EBP                            ; 00568b02
    XOR EBP,EBP                         ; 00568b03
    TEST EAX,EAX                        ; 00568b05
    JZ 0x00568ba7                       ; 00568b07
        ;   XREF to: 00568ba7 (CONDITIONAL_JUMP)  ; LAB_00568ba7
    LEA ECX,[EAX + 0xb]                 ; 00568b0d
    CMP ECX,EAX                         ; 00568b10
    JC 0x00568ba7                       ; 00568b12
        ;   XREF to: 00568ba7 (CONDITIONAL_JUMP)  ; LAB_00568ba7
    MOV EDI,EBX                         ; 00568b18
    AND CL,0xf8                         ; 00568b1a
    MOV EAX,dword ptr [EBX + 0x14]      ; 00568b1d
    CMP ECX,0x10                        ; 00568b20
    JNC 0x00568b2a                      ; 00568b23
        ;   XREF to: 00568b2a (CONDITIONAL_JUMP)  ; LAB_00568b2a
    MOV ECX,0x10                        ; 00568b25
    CMP ECX,EAX                         ; 00568b2a
        ;   Label: LAB_00568b2a
    JA 0x00568ba7                       ; 00568b2c
        ;   XREF to: 00568ba7 (CONDITIONAL_JUMP)  ; LAB_00568ba7
    MOV EBX,dword ptr [EDI + 0x10]      ; 00568b32
    MOV EAX,dword ptr [EDI + 0xc]       ; 00568b35
    CMP ECX,EBX                         ; 00568b38
    JA 0x00568b41                       ; 00568b3a
        ;   XREF to: 00568b41 (CONDITIONAL_JUMP)  ; LAB_00568b41
    MOV EAX,dword ptr [EDI + 0x28]      ; 00568b3c
    XOR EBX,EBX                         ; 00568b3f
    LEA ESI,[EDI + 0x20]                ; 00568b41
        ;   Label: LAB_00568b41
    MOV EDX,dword ptr [EAX]             ; 00568b44
        ;   Label: LAB_00568b44
    CMP ECX,EDX                         ; 00568b46
    JBE 0x00568b5c                      ; 00568b48
        ;   XREF to: 00568b5c (CONDITIONAL_JUMP)  ; LAB_00568b5c
    CMP EDX,EBX                         ; 00568b4a
    JBE 0x00568b50                      ; 00568b4c
        ;   XREF to: 00568b50 (CONDITIONAL_JUMP)  ; LAB_00568b50
    MOV EBX,EDX                         ; 00568b4e
    MOV EAX,dword ptr [EAX + 0x8]       ; 00568b50
        ;   Label: LAB_00568b50
    CMP EAX,ESI                         ; 00568b53
    JNZ 0x00568b44                      ; 00568b55
        ;   XREF to: 00568b44 (CONDITIONAL_JUMP)  ; LAB_00568b44
    MOV dword ptr [EDI + 0x14],EBX      ; 00568b57
    JMP 0x00568ba7                      ; 00568b5a
        ;   XREF to: 00568ba7 (UNCONDITIONAL_JUMP)  ; LAB_00568ba7
    MOV dword ptr [EDI + 0x10],EBX      ; 00568b5c
        ;   Label: LAB_00568b5c
    MOV EBX,dword ptr [EDI + 0x18]      ; 00568b5f
    INC EBX                             ; 00568b62
    SUB EDX,ECX                         ; 00568b63
    MOV dword ptr [EDI + 0x18],EBX      ; 00568b65
    CMP EDX,0x10                        ; 00568b68
    JC 0x00568b8b                       ; 00568b6b
        ;   XREF to: 00568b8b (CONDITIONAL_JUMP)  ; LAB_00568b8b
    LEA EBX,[EAX + ECX*0x1]             ; 00568b6d
    MOV dword ptr [EDI + 0xc],EBX       ; 00568b70
    MOV dword ptr [EBX],EDX             ; 00568b73
    MOV dword ptr [EAX],ECX             ; 00568b75
    MOV ECX,dword ptr [EAX + 0x4]       ; 00568b77
    MOV dword ptr [EBX + 0x4],ECX       ; 00568b7a
    MOV EDX,dword ptr [EAX + 0x8]       ; 00568b7d
    MOV dword ptr [EBX + 0x8],EDX       ; 00568b80
    MOV dword ptr [ECX + 0x8],EBX       ; 00568b83
    MOV dword ptr [EDX + 0x4],EBX       ; 00568b86
    JMP 0x00568b9d                      ; 00568b89
        ;   XREF to: 00568b9d (UNCONDITIONAL_JUMP)  ; LAB_00568b9d
    DEC dword ptr [EDI + 0x1c]          ; 00568b8b
        ;   Label: LAB_00568b8b
    MOV EDX,dword ptr [EAX + 0x4]       ; 00568b8e
    MOV dword ptr [EDI + 0xc],EDX       ; 00568b91
    MOV EBX,dword ptr [EAX + 0x8]       ; 00568b94
    MOV dword ptr [EDX + 0x8],EBX       ; 00568b97
    MOV dword ptr [EBX + 0x4],EDX       ; 00568b9a
    MOV DL,byte ptr [EAX]               ; 00568b9d
        ;   Label: LAB_00568b9d
    OR DL,0x1                           ; 00568b9f
    LEA EBP,[EAX + 0x4]                 ; 00568ba2
    MOV byte ptr [EAX],DL               ; 00568ba5
    MOV EAX,EBP                         ; 00568ba7
        ;   Label: LAB_00568ba7
    POP EBP                             ; 00568ba9
    POP EDI                             ; 00568baa
    POP ESI                             ; 00568bab
    RET                                 ; 00568bac

