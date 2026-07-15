; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl crt_math_c__aulldiv_FUN_100092e0(uint dividend_lo,uint dividend_hi,uint divisor_lo,uint divisor_hi)
;
; Parameters:
; uint             Stack[0x4]:4   dividend_lo
; uint             Stack[0x8]:4   dividend_hi
; uint             Stack[0xc]:4   divisor_lo
; uint             Stack[0x10]:4   divisor_hi
;
; XREF[1]:
;   crt_stdio.c__output_FUN_10005f40 at 1000655f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 100092e0
        ;   Label: crt_math.c__aulldiv_FUN_100092e0
    PUSH ESI                            ; 100092e1
    MOV EAX,dword ptr [ESP + 0x18]      ; 100092e2
    OR EAX,EAX                          ; 100092e6
    JNZ 0x10009302                      ; 100092e8
        ;   XREF to: 10009302 (CONDITIONAL_JUMP)  ; LAB_10009302
    MOV ECX,dword ptr [ESP + 0x14]      ; 100092ea
    MOV EAX,dword ptr [ESP + 0x10]      ; 100092ee
    XOR EDX,EDX                         ; 100092f2
    DIV ECX                             ; 100092f4
    MOV EBX,EAX                         ; 100092f6
    MOV EAX,dword ptr [ESP + 0xc]       ; 100092f8
    DIV ECX                             ; 100092fc
    MOV EDX,EBX                         ; 100092fe
    JMP 0x10009343                      ; 10009300
        ;   XREF to: 10009343 (UNCONDITIONAL_JUMP)  ; LAB_10009343
    MOV ECX,EAX                         ; 10009302
        ;   Label: LAB_10009302
    MOV EBX,dword ptr [ESP + 0x14]      ; 10009304
    MOV EDX,dword ptr [ESP + 0x10]      ; 10009308
    MOV EAX,dword ptr [ESP + 0xc]       ; 1000930c
    SHR ECX,0x1                         ; 10009310
        ;   Label: LAB_10009310
    RCR EBX,0x1                         ; 10009312
    SHR EDX,0x1                         ; 10009314
    RCR EAX,0x1                         ; 10009316
    OR ECX,ECX                          ; 10009318
    JNZ 0x10009310                      ; 1000931a
        ;   XREF to: 10009310 (CONDITIONAL_JUMP)  ; LAB_10009310
    DIV EBX                             ; 1000931c
    MOV ESI,EAX                         ; 1000931e
    MUL dword ptr [ESP + 0x18]          ; 10009320
    MOV ECX,EAX                         ; 10009324
    MOV EAX,dword ptr [ESP + 0x14]      ; 10009326
    MUL ESI                             ; 1000932a
    ADD EDX,ECX                         ; 1000932c
    JC 0x1000933e                       ; 1000932e
        ;   XREF to: 1000933e (CONDITIONAL_JUMP)  ; LAB_1000933e
    CMP EDX,dword ptr [ESP + 0x10]      ; 10009330
    JA 0x1000933e                       ; 10009334
        ;   XREF to: 1000933e (CONDITIONAL_JUMP)  ; LAB_1000933e
    JC 0x1000933f                       ; 10009336
        ;   XREF to: 1000933f (CONDITIONAL_JUMP)  ; LAB_1000933f
    CMP EAX,dword ptr [ESP + 0xc]       ; 10009338
    JBE 0x1000933f                      ; 1000933c
        ;   XREF to: 1000933f (CONDITIONAL_JUMP)  ; LAB_1000933f
    DEC ESI                             ; 1000933e
        ;   Label: LAB_1000933e
    XOR EDX,EDX                         ; 1000933f
        ;   Label: LAB_1000933f
    MOV EAX,ESI                         ; 10009341
    POP ESI                             ; 10009343
        ;   Label: LAB_10009343
    POP EBX                             ; 10009344
    RET 0x10                            ; 10009345

