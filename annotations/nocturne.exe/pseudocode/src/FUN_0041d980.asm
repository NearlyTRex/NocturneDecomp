; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041d980(float *param_1)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0041d980
        ;   Label: FUN_0041d980
    FLD float ptr [EDX]                 ; 0041d984
    FCOMP float ptr [EDX + 0xc]         ; 0041d986
    FNSTSW AX                           ; 0041d989
    SAHF                                ; 0041d98b
    JA 0x0041d9b5                       ; 0041d98c
        ;   XREF to: 0041d9b5 (CONDITIONAL_JUMP)  ; LAB_0041d9b5
    FLD float ptr [EDX + 0x4]           ; 0041d98e
        ;   Label: LAB_0041d98e
    FCOMP float ptr [EDX + 0x10]        ; 0041d991
    FNSTSW AX                           ; 0041d994
    SAHF                                ; 0041d996
    JBE 0x0041d9a9                      ; 0041d997
        ;   XREF to: 0041d9a9 (CONDITIONAL_JUMP)  ; LAB_0041d9a9
    PUSH EBX                            ; 0041d999
    LEA ECX,[EDX + 0x4]                 ; 0041d99a
    LEA EAX,[EDX + 0x10]                ; 0041d99d
    MOV EBX,dword ptr [ECX]             ; 0041d9a0
    FLD float ptr [EAX]                 ; 0041d9a2
    FSTP float ptr [ECX]                ; 0041d9a4
    MOV dword ptr [EAX],EBX             ; 0041d9a6
    POP EBX                             ; 0041d9a8
    FLD float ptr [EDX + 0x8]           ; 0041d9a9
        ;   Label: LAB_0041d9a9
    FCOMP float ptr [EDX + 0x14]        ; 0041d9ac
    FNSTSW AX                           ; 0041d9af
    SAHF                                ; 0041d9b1
    JA 0x0041d9c2                       ; 0041d9b2
        ;   XREF to: 0041d9c2 (CONDITIONAL_JUMP)  ; LAB_0041d9c2
    RET                                 ; 0041d9b4
    LEA EAX,[EDX + 0xc]                 ; 0041d9b5
        ;   Label: LAB_0041d9b5
    MOV ECX,dword ptr [EDX]             ; 0041d9b8
    FLD float ptr [EAX]                 ; 0041d9ba
    FSTP float ptr [EDX]                ; 0041d9bc
    MOV dword ptr [EAX],ECX             ; 0041d9be
    JMP 0x0041d98e                      ; 0041d9c0
        ;   XREF to: 0041d98e (UNCONDITIONAL_JUMP)  ; LAB_0041d98e
    LEA EAX,[EDX + 0x8]                 ; 0041d9c2
        ;   Label: LAB_0041d9c2
    FLD float ptr [EDX + 0x14]          ; 0041d9c5
    MOV ECX,dword ptr [EAX]             ; 0041d9c8
    FSTP float ptr [EAX]                ; 0041d9ca
    MOV dword ptr [EDX + 0x14],ECX      ; 0041d9cc
    RET                                 ; 0041d9cf

