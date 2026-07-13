; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00564520(byte *param_1,byte *param_2)
;
;
; XREF[88]:
;   FUN_0040c160 at 0040c1aa
;   FUN_00417c90 at 00417cb0
;   FUN_00428710 at 0042875a
;   FUN_004543b0 at 004543cc
;   FUN_00458730 at 0045875f
;   FUN_00470550 at 0047062e
;   FUN_00474140 at 0047415f
;   FUN_00474180 at 004741df
;   FUN_00474460 at 00474516
;   FUN_004748b0 at 00474a25
;   ... and 78 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00564520
        ;   Label: FUN_00564520
    MOV EBX,dword ptr [ESP + 0x8]       ; 00564521
    MOV EDX,dword ptr [ESP + 0xc]       ; 00564525
    MOV AL,byte ptr [EBX]               ; 00564529
        ;   Label: LAB_00564529
    MOV AH,byte ptr [EDX]               ; 0056452b
    CMP AL,0x41                         ; 0056452d
    JC 0x00564537                       ; 0056452f
        ;   XREF to: 00564537 (CONDITIONAL_JUMP)  ; LAB_00564537
    CMP AL,0x5a                         ; 00564531
    JA 0x00564537                       ; 00564533
        ;   XREF to: 00564537 (CONDITIONAL_JUMP)  ; LAB_00564537
    ADD AL,0x20                         ; 00564535
    CMP AH,0x41                         ; 00564537
        ;   Label: LAB_00564537
    JC 0x00564544                       ; 0056453a
        ;   XREF to: 00564544 (CONDITIONAL_JUMP)  ; LAB_00564544
    CMP AH,0x5a                         ; 0056453c
    JA 0x00564544                       ; 0056453f
        ;   XREF to: 00564544 (CONDITIONAL_JUMP)  ; LAB_00564544
    ADD AH,0x20                         ; 00564541
    CMP AL,AH                           ; 00564544
        ;   Label: LAB_00564544
    JNZ 0x00564550                      ; 00564546
        ;   XREF to: 00564550 (CONDITIONAL_JUMP)  ; LAB_00564550
    TEST AH,AH                          ; 00564548
    JZ 0x00564550                       ; 0056454a
        ;   XREF to: 00564550 (CONDITIONAL_JUMP)  ; LAB_00564550
    INC EBX                             ; 0056454c
    INC EDX                             ; 0056454d
    JMP 0x00564529                      ; 0056454e
        ;   XREF to: 00564529 (UNCONDITIONAL_JUMP)  ; LAB_00564529
    XOR EDX,EDX                         ; 00564550
        ;   Label: LAB_00564550
    MOV DL,AL                           ; 00564552
    MOV AL,AH                           ; 00564554
    AND EAX,0xff                        ; 00564556
    SUB EDX,EAX                         ; 0056455b
    MOV EAX,EDX                         ; 0056455d
    POP EBX                             ; 0056455f
    RET                                 ; 00564560

