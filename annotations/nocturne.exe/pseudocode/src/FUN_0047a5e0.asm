; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0047a5e0(char *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005c168c
;
; Called Functions:
;   crt_string.c_memmove_FUN_00566170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047a5e0
        ;   Label: FUN_0047a5e0
    PUSH ESI                            ; 0047a5e1
    PUSH EDI                            ; 0047a5e2
    MOV ESI,dword ptr [ESP + 0x10]      ; 0047a5e3
    MOV EDI,ESI                         ; 0047a5e7
    SUB ECX,ECX                         ; 0047a5e9
    DEC ECX                             ; 0047a5eb
    XOR EAX,EAX                         ; 0047a5ec
    SCASB.REPNE ES:EDI                  ; 0047a5ee
    NOT ECX                             ; 0047a5f0
    DEC ECX                             ; 0047a5f2
    MOV EBX,ECX                         ; 0047a5f3
    TEST ECX,ECX                        ; 0047a5f5
    JLE 0x0047a610                      ; 0047a5f7
        ;   XREF to: 0047a610 (CONDITIONAL_JUMP)  ; LAB_0047a610
    LEA EAX,[ECX + ESI*0x1]             ; 0047a5f9
    MOV DL,byte ptr [EAX + -0x1]        ; 0047a5fc
        ;   Label: LAB_0047a5fc
    INC DL                              ; 0047a5ff
    AND EDX,0xff                        ; 0047a601
    TEST byte ptr [EDX + 0x5c168c],0x2  ; 0047a607 | DAT_005c168c
    JNZ 0x0047a62f                      ; 0047a60e
        ;   XREF to: 0047a62f (CONDITIONAL_JUMP)  ; LAB_0047a62f
    LEA EAX,[ESI + EBX*0x1]             ; 0047a610
        ;   Label: LAB_0047a610
    LEA EDI,[ESI + 0x1]                 ; 0047a613
    MOV byte ptr [EAX],0x0              ; 0047a616
    MOV AL,byte ptr [ESI]               ; 0047a619
        ;   Label: LAB_0047a619
    INC AL                              ; 0047a61b
    AND EAX,0xff                        ; 0047a61d
    TEST byte ptr [EAX + 0x5c168c],0x2  ; 0047a622 | DAT_005c168c
    JNZ 0x0047a637                      ; 0047a629
        ;   XREF to: 0047a637 (CONDITIONAL_JUMP)  ; LAB_0047a637
    POP EDI                             ; 0047a62b
    POP ESI                             ; 0047a62c
    POP EBX                             ; 0047a62d
    RET                                 ; 0047a62e
    DEC EBX                             ; 0047a62f
        ;   Label: LAB_0047a62f
    DEC EAX                             ; 0047a630
    TEST EBX,EBX                        ; 0047a631
    JG 0x0047a5fc                       ; 0047a633
        ;   XREF to: 0047a5fc (CONDITIONAL_JUMP)  ; LAB_0047a5fc
    JMP 0x0047a610                      ; 0047a635
        ;   XREF to: 0047a610 (UNCONDITIONAL_JUMP)  ; LAB_0047a610
    PUSH EBX                            ; 0047a637
        ;   Label: LAB_0047a637
    PUSH EDI                            ; 0047a638
    PUSH ESI                            ; 0047a639
    DEC EBX                             ; 0047a63a
    CALL crt_string.c_memmove_FUN_00566170 ; 0047a63b
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_memmove_FUN_00566170()
    ADD ESP,0xc                         ; 0047a640
    JMP 0x0047a619                      ; 0047a643
        ;   XREF to: 0047a619 (UNCONDITIONAL_JUMP)  ; LAB_0047a619

