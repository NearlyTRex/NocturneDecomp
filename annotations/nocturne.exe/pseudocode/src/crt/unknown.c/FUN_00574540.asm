; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; short * crt_unknown_c_FUN_00574540(short *param_1,short param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005740b0 at 005740cb
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574540
        ;   Label: crt_unknown.c_FUN_00574540
    PUSH EDI                            ; 00574541
    MOV EAX,dword ptr [ESP + 0xc]       ; 00574542
    MOV EDX,dword ptr [ESP + 0x10]      ; 00574546
    MOV CX,word ptr [EAX]               ; 0057454a
    MOV EBX,EDX                         ; 0057454d
    CMP DX,CX                           ; 0057454f
    JZ 0x0057456a                       ; 00574552
        ;   XREF to: 0057456a (CONDITIONAL_JUMP)  ; LAB_0057456a
    MOV EDX,EAX                         ; 00574554
        ;   Label: LAB_00574554
    MOV DI,word ptr [EDX]               ; 00574556
    ADD EAX,0x2                         ; 00574559
    TEST DI,DI                          ; 0057455c
    JZ 0x00574568                       ; 0057455f
        ;   XREF to: 00574568 (CONDITIONAL_JUMP)  ; LAB_00574568
    CMP BX,word ptr [EAX]               ; 00574561
    JZ 0x0057456a                       ; 00574564
        ;   XREF to: 0057456a (CONDITIONAL_JUMP)  ; LAB_0057456a
    JMP 0x00574554                      ; 00574566
        ;   XREF to: 00574554 (UNCONDITIONAL_JUMP)  ; LAB_00574554
    XOR EAX,EAX                         ; 00574568
        ;   Label: LAB_00574568
    POP EDI                             ; 0057456a
        ;   Label: LAB_0057456a
    POP EBX                             ; 0057456b
    RET                                 ; 0057456c

