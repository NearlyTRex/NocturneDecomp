; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_0046f960(void)
;
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0046f960
        ;   Label: FUN_0046f960
    PUSH EDI                            ; 0046f961
    MOV EAX,dword ptr [ESI + 0x8]       ; 0046f962
    MOV ECX,dword ptr [EDI + 0x8]       ; 0046f965
    CMP EAX,ECX                         ; 0046f968
    JBE 0x0046f96f                      ; 0046f96a
        ;   XREF to: 0046f96f (CONDITIONAL_JUMP)  ; LAB_0046f96f
    XCHG EAX,ECX                        ; 0046f96c
    XCHG EDI,ESI                        ; 0046f96d
    SHR EAX,0x10                        ; 0046f96f
        ;   Label: LAB_0046f96f
    SHR ECX,0x10                        ; 0046f972
    MOV EBX,dword ptr [EBX*0x4 + 0x1c60dac] ; 0046f975
    SUB ECX,EAX                         ; 0046f97c
    JLE 0x0046f9a3                      ; 0046f97e
        ;   XREF to: 0046f9a3 (CONDITIONAL_JUMP)  ; LAB_0046f9a3
    SHL EAX,0x2                         ; 0046f980
    ADD EBX,EAX                         ; 0046f983
    MOV EAX,dword ptr [EDI + 0x28]      ; 0046f985
    SUB EAX,dword ptr [ESI + 0x28]      ; 0046f988
    IMUL dword ptr [ECX*0x4 + 0x1c6b5d4] ; 0046f98b
    MOV ESI,dword ptr [ESI + 0x28]      ; 0046f992
    CMP ESI,dword ptr [EBX]             ; 0046f995
        ;   Label: LAB_0046f995
    JL 0x0046f99b                       ; 0046f997
        ;   XREF to: 0046f99b (CONDITIONAL_JUMP)  ; LAB_0046f99b
    MOV dword ptr [EBX],ESI             ; 0046f999
    ADD ESI,EDX                         ; 0046f99b
        ;   Label: LAB_0046f99b
    ADD EBX,0x4                         ; 0046f99d
    DEC ECX                             ; 0046f9a0
    JG 0x0046f995                       ; 0046f9a1
        ;   XREF to: 0046f995 (CONDITIONAL_JUMP)  ; LAB_0046f995
    POP EDI                             ; 0046f9a3
        ;   Label: LAB_0046f9a3
    POP ESI                             ; 0046f9a4
    RET                                 ; 0046f9a5

