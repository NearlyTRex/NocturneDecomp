; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00597620(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_02c83488
;
; Called Functions:
;   FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00597620
        ;   Label: FUN_00597620
    PUSH EBP                            ; 00597621
    MOV EBX,dword ptr [ESP + 0x10]      ; 00597622
    MOV EDX,dword ptr [EBX + 0x4]       ; 00597626
    TEST EDX,EDX                        ; 00597629
    JL 0x00597663                       ; 0059762b
        ;   XREF to: 00597663 (CONDITIONAL_JUMP)  ; LAB_00597663
    MOV EAX,EDX                         ; 0059762d
    MOV EDX,dword ptr [ESP + 0xc]       ; 0059762f
    CMP EAX,dword ptr [EDX + 0x18004]   ; 00597633
    JGE 0x00597663                      ; 00597639
        ;   XREF to: 00597663 (CONDITIONAL_JUMP)  ; LAB_00597663
    MOV EBX,dword ptr [EBX + 0x4]       ; 0059763b
        ;   Label: LAB_0059763b
    LEA EAX,[EBX*0x4 + 0x0]             ; 0059763e
    SUB EAX,EBX                         ; 00597645
    MOV EBX,EAX                         ; 00597647
    MOV EAX,dword ptr [ESP + 0xc]       ; 00597649
    SHL EBX,0x5                         ; 0059764d
    PUSH 0x0                            ; 00597650
    MOV EDX,dword ptr [EBX + EAX*0x1 + 0x60] ; 00597652
    PUSH EDX                            ; 00597656
    CALL dword ptr [0x02c83488]         ; 00597657 | DAT_02c83488
    ADD ESP,0x8                         ; 0059765d
    POP EBP                             ; 00597660
    POP EBX                             ; 00597661
    RET                                 ; 00597662
    PUSH EDI                            ; 00597663
        ;   Label: LAB_00597663
    PUSH ESI                            ; 00597664
    LEA EAX,[EBX + 0x8]                 ; 00597665
    PUSH EAX                            ; 00597668
    MOV EBP,dword ptr [EBX + 0x4]       ; 00597669
    PUSH EBP                            ; 0059766c
    MOV ESI,0x5f7b56                    ; 0059766d
    MOV EDI,0x2e9                       ; 00597672
    PUSH 0x5f7b6c                       ; 00597677
    MOV dword ptr [0x01d1d400],ESI      ; 0059767c | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 00597682 | DAT_01d1d404
    CALL FUN_005030e0                   ; 00597688
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0xc                         ; 0059768d
    POP ESI                             ; 00597690
    POP EDI                             ; 00597691
    JMP 0x0059763b                      ; 00597692
        ;   XREF to: 0059763b (UNCONDITIONAL_JUMP)  ; LAB_0059763b

