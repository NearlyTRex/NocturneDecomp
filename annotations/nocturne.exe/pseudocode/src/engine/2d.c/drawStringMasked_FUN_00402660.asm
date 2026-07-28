; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_2d_c_drawStringMasked_FUN_00402660(byte *param_1,int param_2,int param_3)
;
;
; Called Functions:
;   engine_2d.c_drawCharacterMasked_FUN_00401f30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402660
        ;   Label: engine_2d.c_drawStringMasked_FUN_00402660
    PUSH ESI                            ; 00402661
    PUSH EDI                            ; 00402662
    PUSH EBP                            ; 00402663
    MOV ESI,dword ptr [ESP + 0x14]      ; 00402664
    MOV EBP,dword ptr [ESP + 0x18]      ; 00402668
    MOV EDI,ESI                         ; 0040266c
    SUB ECX,ECX                         ; 0040266e
    DEC ECX                             ; 00402670
    XOR EAX,EAX                         ; 00402671
    SCASB.REPNE ES:EDI                  ; 00402673
    NOT ECX                             ; 00402675
    DEC ECX                             ; 00402677
    XOR EBX,EBX                         ; 00402678
    MOV EDI,ECX                         ; 0040267a
    TEST ECX,ECX                        ; 0040267c
    JLE 0x004026a7                      ; 0040267e
        ;   XREF to: 004026a7 (CONDITIONAL_JUMP)  ; LAB_004026a7
    XOR EAX,EAX                         ; 00402680
        ;   Label: LAB_00402680
    MOV AL,byte ptr [ESI]               ; 00402682
    CMP EAX,0x20                        ; 00402684
    JL 0x004026a1                       ; 00402687
        ;   XREF to: 004026a1 (CONDITIONAL_JUMP)  ; LAB_004026a1
    CMP EAX,0x100                       ; 00402689
    JGE 0x004026a1                      ; 0040268e
        ;   XREF to: 004026a1 (CONDITIONAL_JUMP)  ; LAB_004026a1
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00402690
    PUSH EDX                            ; 00402694
    PUSH EBP                            ; 00402695
    PUSH EAX                            ; 00402696
    CALL engine_2d.c_drawCharacterMasked_FUN_00401f30 ; 00402697
        ;   XREF to: 00401f30 (UNCONDITIONAL_CALL)  ; int engine_2d.c_drawCharacterMasked_FUN_00401f30(int char_code, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0040269c
    ADD EBP,EAX                         ; 0040269f
    INC EBX                             ; 004026a1
        ;   Label: LAB_004026a1
    INC ESI                             ; 004026a2
    CMP EBX,EDI                         ; 004026a3
    JL 0x00402680                       ; 004026a5
        ;   XREF to: 00402680 (CONDITIONAL_JUMP)  ; LAB_00402680
    POP EBP                             ; 004026a7
        ;   Label: LAB_004026a7
    POP EDI                             ; 004026a8
    POP ESI                             ; 004026a9
    POP EBX                             ; 004026aa
    RET                                 ; 004026ab

