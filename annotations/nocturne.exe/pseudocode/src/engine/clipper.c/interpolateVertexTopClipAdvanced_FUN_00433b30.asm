; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_00433b30(int *param_1,int *param_2,int *param_3)
;
;
; XREF[1]:
;   engine_clipper.c_clipPolygonToViewport_FUN_004349a0 at 0043504c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00433b30
        ;   Label: engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00433b30
    PUSH ESI                            ; 00433b31
    PUSH EDI                            ; 00433b32
    PUSH EBP                            ; 00433b33
    MOV ESI,dword ptr [ESP + 0x14]      ; 00433b34
    MOV EBP,dword ptr [ESP + 0x18]      ; 00433b38
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00433b3c
    MOV EDX,dword ptr [ESI + 0x4]       ; 00433b40
    MOV ECX,dword ptr [ESI + 0x8]       ; 00433b43
    MOV EBX,dword ptr [EBP + 0x8]       ; 00433b46
    ADD EDX,ECX                         ; 00433b49
    MOV ECX,dword ptr [EBP + 0x4]       ; 00433b4b
    ADD ECX,EBX                         ; 00433b4e
    MOV EBX,EDX                         ; 00433b50
    SUB EBX,ECX                         ; 00433b52
    CMP EDX,EBX                         ; 00433b54
    JGE 0x00433b6a                      ; 00433b56
        ;   XREF to: 00433b6a (CONDITIONAL_JUMP)  ; LAB_00433b6a
    NEG EBX                             ; 00433b58
    CMP EDX,EBX                         ; 00433b5a
    JLE 0x00433b71                      ; 00433b5c
        ;   XREF to: 00433b71 (CONDITIONAL_JUMP)  ; LAB_00433b71
    NEG EBX                             ; 00433b5e
    XOR EAX,EAX                         ; 00433b60
    SAR EDX,0x1                         ; 00433b62
    RCR EAX,0x1                         ; 00433b64
    IDIV EBX                            ; 00433b66
    JMP 0x00433b78                      ; 00433b68
        ;   XREF to: 00433b78 (UNCONDITIONAL_JUMP)  ; LAB_00433b78
    MOV EAX,0x7fffffff                  ; 00433b6a
        ;   Label: LAB_00433b6a
    JMP 0x00433b78                      ; 00433b6f
        ;   XREF to: 00433b78 (UNCONDITIONAL_JUMP)  ; LAB_00433b78
    NEG EBX                             ; 00433b71
        ;   Label: LAB_00433b71
    MOV EAX,0x80000000                  ; 00433b73
    MOV ECX,EAX                         ; 00433b78
        ;   Label: LAB_00433b78
    MOV EDX,dword ptr [ESI + 0x8]       ; 00433b7a
    MOV EAX,dword ptr [EBP + 0x8]       ; 00433b7d
    SUB EAX,EDX                         ; 00433b80
    MOV EDX,ECX                         ; 00433b82
    IMUL EDX                            ; 00433b84
    ADD EAX,EAX                         ; 00433b86
    ADC EDX,EDX                         ; 00433b88
    MOV EAX,EDX                         ; 00433b8a
    MOV EDX,dword ptr [ESI + 0x8]       ; 00433b8c
    ADD EAX,EDX                         ; 00433b8f
    MOV dword ptr [EDI + 0x8],EAX       ; 00433b91
    MOV EBX,EAX                         ; 00433b94
    MOV dword ptr [EDI + 0x4],EAX       ; 00433b96
    NEG EBX                             ; 00433b99
    MOV dword ptr [EDI + 0x4],EBX       ; 00433b9b
    MOV EAX,dword ptr [EBP]             ; 00433b9e
    SUB EAX,dword ptr [ESI]             ; 00433ba1
    MOV EDX,ECX                         ; 00433ba3
    IMUL EDX                            ; 00433ba5
    ADD EAX,EAX                         ; 00433ba7
    ADC EDX,EDX                         ; 00433ba9
    MOV EAX,EDX                         ; 00433bab
    MOV EDX,dword ptr [ESI]             ; 00433bad
    MOV dword ptr [EDI + 0x10],0xffffffff ; 00433baf
    ADD EAX,EDX                         ; 00433bb6
    MOV dword ptr [EDI],EAX             ; 00433bb8
    MOV EAX,dword ptr [EBP + 0x20]      ; 00433bba
    MOV EBX,dword ptr [ESI + 0x20]      ; 00433bbd
    MOV EDX,ECX                         ; 00433bc0
    SUB EAX,EBX                         ; 00433bc2
    IMUL EDX                            ; 00433bc4
    ADD EAX,EAX                         ; 00433bc6
    ADC EDX,EDX                         ; 00433bc8
    MOV EAX,EDX                         ; 00433bca
    MOV EDX,dword ptr [ESI + 0x20]      ; 00433bcc
    ADD EAX,EDX                         ; 00433bcf
    MOV dword ptr [EDI + 0x20],EAX      ; 00433bd1
    MOV EAX,dword ptr [EBP + 0x24]      ; 00433bd4
    SUB EAX,dword ptr [ESI + 0x24]      ; 00433bd7
    MOV EDX,ECX                         ; 00433bda
    IMUL EDX                            ; 00433bdc
    ADD EAX,EAX                         ; 00433bde
    ADC EDX,EDX                         ; 00433be0
    MOV EAX,EDX                         ; 00433be2
    MOV EDX,dword ptr [ESI + 0x24]      ; 00433be4
    ADD EAX,EDX                         ; 00433be7
    MOV dword ptr [EDI + 0x24],EAX      ; 00433be9
    MOV EAX,dword ptr [EBP + 0x28]      ; 00433bec
    MOV EBX,dword ptr [ESI + 0x28]      ; 00433bef
    MOV EDX,ECX                         ; 00433bf2
    SUB EAX,EBX                         ; 00433bf4
    IMUL EDX                            ; 00433bf6
    ADD EAX,EAX                         ; 00433bf8
    ADC EDX,EDX                         ; 00433bfa
    MOV EAX,EDX                         ; 00433bfc
    MOV EDX,dword ptr [ESI + 0x28]      ; 00433bfe
    ADD EDX,EAX                         ; 00433c01
    MOV dword ptr [EDI + 0x28],EDX      ; 00433c03
    MOV EAX,dword ptr [EBP + 0x18]      ; 00433c06
    SUB EAX,dword ptr [ESI + 0x18]      ; 00433c09
    MOV EDX,ECX                         ; 00433c0c
    IMUL EDX                            ; 00433c0e
    ADD EAX,EAX                         ; 00433c10
    ADC EDX,EDX                         ; 00433c12
    MOV EAX,EDX                         ; 00433c14
    MOV EDX,dword ptr [ESI + 0x18]      ; 00433c16
    ADD EDX,EAX                         ; 00433c19
    MOV dword ptr [EDI + 0x18],EDX      ; 00433c1b
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00433c1e
    MOV EBX,dword ptr [ESI + 0x1c]      ; 00433c21
    MOV EDX,ECX                         ; 00433c24
    SUB EAX,EBX                         ; 00433c26
    IMUL EDX                            ; 00433c28
    ADD EAX,EAX                         ; 00433c2a
    ADC EDX,EDX                         ; 00433c2c
    MOV EAX,EDX                         ; 00433c2e
    MOV EDX,dword ptr [ESI + 0x1c]      ; 00433c30
    ADD EDX,EAX                         ; 00433c33
    MOV dword ptr [EDI + 0x1c],EDX      ; 00433c35
    MOV EAX,dword ptr [EBP + 0x2c]      ; 00433c38
    MOV EBP,dword ptr [ESI + 0x2c]      ; 00433c3b
    MOV EDX,ECX                         ; 00433c3e
    SUB EAX,EBP                         ; 00433c40
    IMUL EDX                            ; 00433c42
    ADD EAX,EAX                         ; 00433c44
    ADC EDX,EDX                         ; 00433c46
    MOV EAX,EDX                         ; 00433c48
    MOV EDX,dword ptr [ESI + 0x2c]      ; 00433c4a
    ADD EDX,EAX                         ; 00433c4d
    MOV dword ptr [EDI + 0x2c],EDX      ; 00433c4f
    POP EBP                             ; 00433c52
    POP EDI                             ; 00433c53
    POP ESI                             ; 00433c54
    POP EBX                             ; 00433c55
    RET                                 ; 00433c56

