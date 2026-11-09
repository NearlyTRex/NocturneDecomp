; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkaddr_0059aa80_cpp_FUN_0059ba10(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01c2a37c
;   undefined4 DAT_026677e4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059ba10
        ;   Label: unkaddr_0059aa80.cpp_FUN_0059ba10
    PUSH ESI                            ; 0059ba11
    PUSH EDI                            ; 0059ba12
    MOV EDX,dword ptr [ESP + 0x10]      ; 0059ba13
    MOV ESI,dword ptr [ESP + 0x14]      ; 0059ba17
    LEA EAX,[ESI*0x4 + 0x0]             ; 0059ba1b
    LEA ECX,[ESI + EAX*0x1]             ; 0059ba22
    LEA EBX,[ECX + 0xc]                 ; 0059ba25
    MOV EDI,dword ptr [EDX + 0x20]      ; 0059ba28
    MOV EAX,EBX                         ; 0059ba2b
    ADD ECX,0x11                        ; 0059ba2d
    CMP EBX,EDI                         ; 0059ba30
    JZ 0x0059ba3e                       ; 0059ba32
        ;   XREF to: 0059ba3e (CONDITIONAL_JUMP)  ; LAB_0059ba3e
    INC EAX                             ; 0059ba34
        ;   Label: LAB_0059ba34
    CMP EAX,ECX                         ; 0059ba35
    JGE 0x0059ba90                      ; 0059ba37
        ;   XREF to: 0059ba90 (CONDITIONAL_JUMP)  ; LAB_0059ba90
    CMP EAX,dword ptr [EDX + 0x20]      ; 0059ba39
    JNZ 0x0059ba34                      ; 0059ba3c
        ;   XREF to: 0059ba34 (CONDITIONAL_JUMP)  ; LAB_0059ba34
    MOV ECX,dword ptr [0x01c2a37c]      ; 0059ba3e | DAT_01c2a37c
        ;   Label: LAB_0059ba3e
    LEA EAX,[ESI*0x4 + 0x0]             ; 0059ba44
    MOV EBX,dword ptr [0x026677e4]      ; 0059ba4b | DAT_026677e4
    ADD EAX,EDX                         ; 0059ba51
    CMP ECX,EBX                         ; 0059ba53
    JLE 0x0059ba94                      ; 0059ba55
        ;   XREF to: 0059ba94 (CONDITIONAL_JUMP)  ; LAB_0059ba94
    MOV ECX,dword ptr [EAX + 0x34]      ; 0059ba57
    INC ECX                             ; 0059ba5a
    MOV dword ptr [EAX + 0x34],ECX      ; 0059ba5b
    CMP ECX,0x4                         ; 0059ba5e
    JLE 0x0059ba6a                      ; 0059ba61
        ;   XREF to: 0059ba6a (CONDITIONAL_JUMP)  ; LAB_0059ba6a
    MOV dword ptr [EAX + 0x34],0x4      ; 0059ba63
    MOV EAX,[0x01c2a37c]                ; 0059ba6a | DAT_01c2a37c
        ;   Label: LAB_0059ba6a
    MOV [0x026677e4],EAX                ; 0059ba6f | DAT_026677e4
    LEA EAX,[ESI*0x4 + 0x0]             ; 0059ba74
    ADD EAX,EDX                         ; 0059ba7b
    MOV EDI,dword ptr [EAX + 0x34]      ; 0059ba7d
    CMP EDI,0x4                         ; 0059ba80
    JGE 0x0059baa8                      ; 0059ba83
        ;   XREF to: 0059baa8 (CONDITIONAL_JUMP)  ; LAB_0059baa8
    TEST EDI,EDI                        ; 0059ba85
    JLE 0x0059baa8                      ; 0059ba87
        ;   XREF to: 0059baa8 (CONDITIONAL_JUMP)  ; LAB_0059baa8
    MOV dword ptr [EDX + 0x18],0x1      ; 0059ba89
    POP EDI                             ; 0059ba90
        ;   Label: LAB_0059ba90
    POP ESI                             ; 0059ba91
    POP EBX                             ; 0059ba92
    RET                                 ; 0059ba93
    MOV EDI,dword ptr [EAX + 0x34]      ; 0059ba94
        ;   Label: LAB_0059ba94
    DEC EDI                             ; 0059ba97
    MOV dword ptr [EAX + 0x34],EDI      ; 0059ba98
    TEST EDI,EDI                        ; 0059ba9b
    JGE 0x0059ba6a                      ; 0059ba9d
        ;   XREF to: 0059ba6a (CONDITIONAL_JUMP)  ; LAB_0059ba6a
    MOV dword ptr [EAX + 0x34],0x0      ; 0059ba9f
    JMP 0x0059ba6a                      ; 0059baa6
        ;   XREF to: 0059ba6a (UNCONDITIONAL_JUMP)  ; LAB_0059ba6a
    CMP dword ptr [EDX + ESI*0x4 + 0x34],0x4 ; 0059baa8
        ;   Label: LAB_0059baa8
    JNZ 0x0059baba                      ; 0059baad
        ;   XREF to: 0059baba (CONDITIONAL_JUMP)  ; LAB_0059baba
    MOV dword ptr [EDX + 0x18],0x2      ; 0059baaf
    POP EDI                             ; 0059bab6
    POP ESI                             ; 0059bab7
    POP EBX                             ; 0059bab8
    RET                                 ; 0059bab9
    MOV dword ptr [EDX + 0x18],0x3      ; 0059baba
        ;   Label: LAB_0059baba
    POP EDI                             ; 0059bac1
    POP ESI                             ; 0059bac2
    POP EBX                             ; 0059bac3
    RET                                 ; 0059bac4

