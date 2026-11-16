; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_0046e8f0(void)
;
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0046e8f0
        ;   Label: FUN_0046e8f0
    PUSH EDI                            ; 0046e8f1
    MOV EAX,dword ptr [ESI + 0x8]       ; 0046e8f2
    MOV ECX,dword ptr [EDI + 0x8]       ; 0046e8f5
    CMP EAX,ECX                         ; 0046e8f8
    JBE 0x0046e8ff                      ; 0046e8fa
        ;   XREF to: 0046e8ff (CONDITIONAL_JUMP)  ; LAB_0046e8ff
    XCHG EAX,ECX                        ; 0046e8fc
    XCHG EDI,ESI                        ; 0046e8fd
    SHR EAX,0x10                        ; 0046e8ff
        ;   Label: LAB_0046e8ff
    SHR ECX,0x10                        ; 0046e902
    MOV EBX,dword ptr [EBX*0x4 + 0x1c2b64c] ; 0046e905
    SUB ECX,EAX                         ; 0046e90c
    JLE 0x0046e933                      ; 0046e90e
        ;   XREF to: 0046e933 (CONDITIONAL_JUMP)  ; LAB_0046e933
    SHL EAX,0x2                         ; 0046e910
    ADD EBX,EAX                         ; 0046e913
    MOV EAX,dword ptr [EDI + 0x28]      ; 0046e915
    SUB EAX,dword ptr [ESI + 0x28]      ; 0046e918
    IMUL dword ptr [ECX*0x4 + 0x1c35e74] ; 0046e91b
    MOV ESI,dword ptr [ESI + 0x28]      ; 0046e922
    CMP ESI,dword ptr [EBX]             ; 0046e925
        ;   Label: LAB_0046e925
    JL 0x0046e92b                       ; 0046e927
        ;   XREF to: 0046e92b (CONDITIONAL_JUMP)  ; LAB_0046e92b
    MOV dword ptr [EBX],ESI             ; 0046e929
    ADD ESI,EDX                         ; 0046e92b
        ;   Label: LAB_0046e92b
    ADD EBX,0x4                         ; 0046e92d
    DEC ECX                             ; 0046e930
    JG 0x0046e925                       ; 0046e931
        ;   XREF to: 0046e925 (CONDITIONAL_JUMP)  ; LAB_0046e925
    POP EDI                             ; 0046e933
        ;   Label: LAB_0046e933
    POP ESI                             ; 0046e934
    RET                                 ; 0046e935

