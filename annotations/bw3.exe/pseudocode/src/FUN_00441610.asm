; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00441610(int param_1,int *param_2,undefined4 param_3)
;
;
; Called Functions:
;   FUN_00440260
;   FUN_00441490
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441610
        ;   Label: FUN_00441610
    PUSH ESI                            ; 00441611
    PUSH EDI                            ; 00441612
    MOV EBX,dword ptr [ESP + 0x14]      ; 00441613
    MOV ESI,dword ptr [ESP + 0x10]      ; 00441617
    MOV EDI,dword ptr [ESP + 0x18]      ; 0044161b
    ADD ESI,0x4                         ; 0044161f
    PUSH EBX                            ; 00441622
        ;   Label: LAB_00441622
    MOV EAX,dword ptr [EBX]             ; 00441623
    CALL dword ptr [EAX + 0x4]          ; 00441625
    ADD ESP,0x4                         ; 00441628
    TEST EAX,EAX                        ; 0044162b
    JGE 0x00441638                      ; 0044162d
        ;   XREF to: 00441638 (CONDITIONAL_JUMP)  ; LAB_00441638
    MOV EAX,0x1                         ; 0044162f
    POP EDI                             ; 00441634
    POP ESI                             ; 00441635
    POP EBX                             ; 00441636
    RET                                 ; 00441637
    PUSH EAX                            ; 00441638
        ;   Label: LAB_00441638
    CALL FUN_00441490                   ; 00441639
        ;   XREF to: 00441490 (UNCONDITIONAL_CALL)  ; undefined FUN_00441490()
    ADD ESP,0x4                         ; 0044163e
    TEST EAX,EAX                        ; 00441641
    JL 0x00441622                       ; 00441643
        ;   XREF to: 00441622 (CONDITIONAL_JUMP)  ; LAB_00441622
    PUSH EDI                            ; 00441645
    PUSH EAX                            ; 00441646
    PUSH 0x6                            ; 00441647
    PUSH ESI                            ; 00441649
    CALL FUN_00440260                   ; 0044164a
        ;   XREF to: 00440260 (UNCONDITIONAL_CALL)  ; undefined FUN_00440260()
    ADD ESP,0x10                        ; 0044164f
    JMP 0x00441622                      ; 00441652
        ;   XREF to: 00441622 (UNCONDITIONAL_JUMP)  ; LAB_00441622

