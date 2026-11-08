; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00521630(int param_1)
;
;
; XREF[3]:
;   FUN_004fca90 at 004fcad5
;   FUN_00521600 at 00521606
;   FUN_00521cf0 at 00521d02
;
; Called Functions:
;   FUN_00480e10
;   FUN_00483d10
;   FUN_00521680
;   FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00521630
        ;   Label: FUN_00521630
    MOV EBX,dword ptr [ESP + 0x8]       ; 00521631
    LEA EAX,[EBX + 0x34]                ; 00521635
    PUSH EAX                            ; 00521638
    CALL FUN_00480e10                   ; 00521639
        ;   XREF to: 00480e10 (UNCONDITIONAL_CALL)  ; undefined FUN_00480e10()
    ADD ESP,0x4                         ; 0052163e
    PUSH EBX                            ; 00521641
    CALL FUN_00521680                   ; 00521642
        ;   XREF to: 00521680 (UNCONDITIONAL_CALL)  ; undefined FUN_00521680()
    MOV EDX,dword ptr [EBX + 0x24]      ; 00521647
    ADD ESP,0x4                         ; 0052164a
    TEST EDX,EDX                        ; 0052164d
    JNZ 0x00521667                      ; 0052164f
        ;   XREF to: 00521667 (CONDITIONAL_JUMP)  ; LAB_00521667
    PUSH 0x1e65910                      ; 00521651
        ;   Label: LAB_00521651
    MOV dword ptr [EBX + 0x20],0x0      ; 00521656
    CALL FUN_00483d10                   ; 0052165d
        ;   XREF to: 00483d10 (UNCONDITIONAL_CALL)  ; undefined FUN_00483d10()
    ADD ESP,0x4                         ; 00521662
    POP EBX                             ; 00521665
    RET                                 ; 00521666
    PUSH EDX                            ; 00521667
        ;   Label: LAB_00521667
    CALL FUN_005b86a0                   ; 00521668
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    ADD ESP,0x4                         ; 0052166d
    MOV dword ptr [EBX + 0x24],0x0      ; 00521670
    JMP 0x00521651                      ; 00521677
        ;   XREF to: 00521651 (UNCONDITIONAL_JUMP)  ; LAB_00521651

