; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl crt_math_c__aullrem_FUN_10009350(uint dividend_lo,uint dividend_hi,uint divisor_lo,uint divisor_hi)
;
; Parameters:
; uint             Stack[0x4]:4   dividend_lo
; uint             Stack[0x8]:4   dividend_hi
; uint             Stack[0xc]:4   divisor_lo
; uint             Stack[0x10]:4   divisor_hi
;
; XREF[1]:
;   crt_stdio.c__output_FUN_10005f40 at 10006543
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 10009350
        ;   Label: crt_math.c__aullrem_FUN_10009350
    MOV EAX,dword ptr [ESP + 0x14]      ; 10009351
    OR EAX,EAX                          ; 10009355
    JNZ 0x10009371                      ; 10009357
        ;   XREF to: 10009371 (CONDITIONAL_JUMP)  ; LAB_10009371
    MOV ECX,dword ptr [ESP + 0x10]      ; 10009359
    MOV EAX,dword ptr [ESP + 0xc]       ; 1000935d
    XOR EDX,EDX                         ; 10009361
    DIV ECX                             ; 10009363
    MOV EAX,dword ptr [ESP + 0x8]       ; 10009365
    DIV ECX                             ; 10009369
    MOV EAX,EDX                         ; 1000936b
    XOR EDX,EDX                         ; 1000936d
    JMP 0x100093c1                      ; 1000936f
        ;   XREF to: 100093c1 (UNCONDITIONAL_JUMP)  ; LAB_100093c1
    MOV ECX,EAX                         ; 10009371
        ;   Label: LAB_10009371
    MOV EBX,dword ptr [ESP + 0x10]      ; 10009373
    MOV EDX,dword ptr [ESP + 0xc]       ; 10009377
    MOV EAX,dword ptr [ESP + 0x8]       ; 1000937b
    SHR ECX,0x1                         ; 1000937f
        ;   Label: LAB_1000937f
    RCR EBX,0x1                         ; 10009381
    SHR EDX,0x1                         ; 10009383
    RCR EAX,0x1                         ; 10009385
    OR ECX,ECX                          ; 10009387
    JNZ 0x1000937f                      ; 10009389
        ;   XREF to: 1000937f (CONDITIONAL_JUMP)  ; LAB_1000937f
    DIV EBX                             ; 1000938b
    MOV ECX,EAX                         ; 1000938d
    MUL dword ptr [ESP + 0x14]          ; 1000938f
    XCHG EAX,ECX                        ; 10009393
    MUL dword ptr [ESP + 0x10]          ; 10009394
    ADD EDX,ECX                         ; 10009398
    JC 0x100093aa                       ; 1000939a
        ;   XREF to: 100093aa (CONDITIONAL_JUMP)  ; LAB_100093aa
    CMP EDX,dword ptr [ESP + 0xc]       ; 1000939c
    JA 0x100093aa                       ; 100093a0
        ;   XREF to: 100093aa (CONDITIONAL_JUMP)  ; LAB_100093aa
    JC 0x100093b2                       ; 100093a2
        ;   XREF to: 100093b2 (CONDITIONAL_JUMP)  ; LAB_100093b2
    CMP EAX,dword ptr [ESP + 0x8]       ; 100093a4
    JBE 0x100093b2                      ; 100093a8
        ;   XREF to: 100093b2 (CONDITIONAL_JUMP)  ; LAB_100093b2
    SUB EAX,dword ptr [ESP + 0x10]      ; 100093aa
        ;   Label: LAB_100093aa
    SBB EDX,dword ptr [ESP + 0x14]      ; 100093ae
    SUB EAX,dword ptr [ESP + 0x8]       ; 100093b2
        ;   Label: LAB_100093b2
    SBB EDX,dword ptr [ESP + 0xc]       ; 100093b6
    NEG EDX                             ; 100093ba
    NEG EAX                             ; 100093bc
    SBB EDX,0x0                         ; 100093be
    POP EBX                             ; 100093c1
        ;   Label: LAB_100093c1
    RET 0x10                            ; 100093c2

