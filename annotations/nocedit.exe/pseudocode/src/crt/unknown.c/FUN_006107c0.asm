; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; short * crt_unknown_c_FUN_006107c0(short *param_1,short param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_0060fb40 at 0060fb5b
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 006107c0
        ;   Label: crt_unknown.c_FUN_006107c0
    PUSH EDI                            ; 006107c1
    MOV EAX,dword ptr [ESP + 0xc]       ; 006107c2
    MOV EDX,dword ptr [ESP + 0x10]      ; 006107c6
    MOV CX,word ptr [EAX]               ; 006107ca
    MOV EBX,EDX                         ; 006107cd
    CMP DX,CX                           ; 006107cf
    JZ 0x006107ea                       ; 006107d2
        ;   XREF to: 006107ea (CONDITIONAL_JUMP)  ; LAB_006107ea
    MOV EDX,EAX                         ; 006107d4
        ;   Label: LAB_006107d4
    MOV DI,word ptr [EDX]               ; 006107d6
    ADD EAX,0x2                         ; 006107d9
    TEST DI,DI                          ; 006107dc
    JZ 0x006107e8                       ; 006107df
        ;   XREF to: 006107e8 (CONDITIONAL_JUMP)  ; LAB_006107e8
    CMP BX,word ptr [EAX]               ; 006107e1
    JZ 0x006107ea                       ; 006107e4
        ;   XREF to: 006107ea (CONDITIONAL_JUMP)  ; LAB_006107ea
    JMP 0x006107d4                      ; 006107e6
        ;   XREF to: 006107d4 (UNCONDITIONAL_JUMP)  ; LAB_006107d4
    XOR EAX,EAX                         ; 006107e8
        ;   Label: LAB_006107e8
    POP EDI                             ; 006107ea
        ;   Label: LAB_006107ea
    POP EBX                             ; 006107eb
    RET                                 ; 006107ec

