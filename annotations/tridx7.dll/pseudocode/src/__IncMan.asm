; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __IncMan(int param_1,int param_2)
;
;
; XREF[1]:
;   __RoundMan at 10009e1d
;
; Called Functions:
;   ___addl
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 10009d40
        ;   Label: __IncMan
    PUSH ESI                            ; 10009d41
    PUSH EDI                            ; 10009d42
    MOV EDI,dword ptr [ESP + 0x14]      ; 10009d43
    MOV EBX,0x1                         ; 10009d47
    MOV EAX,EDI                         ; 10009d4c
    MOV CL,0x1f                         ; 10009d4e
    CDQ                                 ; 10009d50
    AND EDX,0x1f                        ; 10009d51
    ADD EAX,EDX                         ; 10009d54
    SAR EAX,0x5                         ; 10009d56
    MOV ESI,EAX                         ; 10009d59
    MOV EAX,EDI                         ; 10009d5b
    CDQ                                 ; 10009d5d
    XOR EAX,EDX                         ; 10009d5e
    MOV EDI,dword ptr [ESP + 0x10]      ; 10009d60
    SUB EAX,EDX                         ; 10009d64
    AND EAX,0x1f                        ; 10009d66
    XOR EAX,EDX                         ; 10009d69
    SUB EAX,EDX                         ; 10009d6b
    SUB CL,AL                           ; 10009d6d
    LEA EAX,[EDI + ESI*0x4]             ; 10009d6f
    SHL EBX,CL                          ; 10009d72
    PUSH EAX                            ; 10009d74
    MOV ECX,dword ptr [EAX]             ; 10009d75
    PUSH EBX                            ; 10009d77
    PUSH ECX                            ; 10009d78
    CALL ___addl                        ; 10009d79
        ;   XREF to: 1000c5a0 (UNCONDITIONAL_CALL)  ; undefined ___addl()
    ADD ESP,0xc                         ; 10009d7e
    DEC ESI                             ; 10009d81
    JS 0x10009d9f                       ; 10009d82
        ;   XREF to: 10009d9f (CONDITIONAL_JUMP)  ; LAB_10009d9f
    LEA EDI,[EDI + ESI*0x4]             ; 10009d84
    TEST EAX,EAX                        ; 10009d87
        ;   Label: LAB_10009d87
    JZ 0x10009d9f                       ; 10009d89
        ;   XREF to: 10009d9f (CONDITIONAL_JUMP)  ; LAB_10009d9f
    PUSH EDI                            ; 10009d8b
    MOV EAX,dword ptr [EDI]             ; 10009d8c
    PUSH 0x1                            ; 10009d8e
    SUB EDI,0x4                         ; 10009d90
    PUSH EAX                            ; 10009d93
    CALL ___addl                        ; 10009d94
        ;   XREF to: 1000c5a0 (UNCONDITIONAL_CALL)  ; undefined ___addl()
    ADD ESP,0xc                         ; 10009d99
    DEC ESI                             ; 10009d9c
    JNS 0x10009d87                      ; 10009d9d
        ;   XREF to: 10009d87 (CONDITIONAL_JUMP)  ; LAB_10009d87
    POP EDI                             ; 10009d9f
        ;   Label: LAB_10009d9f
    POP ESI                             ; 10009da0
    POP EBX                             ; 10009da1
    RET                                 ; 10009da2

