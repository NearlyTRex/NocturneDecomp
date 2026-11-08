; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * FUN_004a3630(int param_1,char *param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_004a41b0 at 004a47fb
;
; Referenced Globals:
;   TerminatedCString s_core_fldnotes_cpp_005d5d23
;   TerminatedCString s_Too_many_field_note_entr_005d5d38
;   TerminatedCString s_core_fldnotes_cpp_005d5d73
;   TerminatedCString s_Out_of_memory_005d5d88
;   TerminatedCString s_core_fldnotes_cpp_005d5d97
;   TerminatedCString s_Entry_name_s_is_too_long_005d5dac
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004a3280
;   FUN_004e4500
;   FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a3630
        ;   Label: FUN_004a3630
    PUSH ESI                            ; 004a3631
    PUSH EDI                            ; 004a3632
    PUSH EBP                            ; 004a3633
    MOV EBP,dword ptr [ESP + 0x14]      ; 004a3634
    MOV ESI,dword ptr [ESP + 0x18]      ; 004a3638
    CMP dword ptr [EBP + 0x150],0x64    ; 004a363c
    JGE 0x004a36e3                      ; 004a3643
        ;   XREF to: 004a36e3 (CONDITIONAL_JUMP)  ; LAB_004a36e3
    PUSH 0x15c                          ; 004a3649
        ;   Label: LAB_004a3649
    CALL FUN_005b8be2                   ; 004a364e
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8be2()
    ADD ESP,0x4                         ; 004a3653
    TEST EAX,EAX                        ; 004a3656
    JZ 0x004a3663                       ; 004a3658
        ;   XREF to: 004a3663 (CONDITIONAL_JUMP)  ; LAB_004a3663
    PUSH EAX                            ; 004a365a
    CALL FUN_004a3280                   ; 004a365b
        ;   XREF to: 004a3280 (UNCONDITIONAL_CALL)  ; undefined FUN_004a3280()
    ADD ESP,0x4                         ; 004a3660
    MOV EBX,EAX                         ; 004a3663
        ;   Label: LAB_004a3663
    TEST EAX,EAX                        ; 004a3665
    JNZ 0x004a368b                      ; 004a3667
        ;   XREF to: 004a368b (CONDITIONAL_JUMP)  ; LAB_004a368b
    MOV EDI,0x5d5d73                    ; 004a3669 | = "..\\core\\fldnotes.cpp"
    MOV EAX,0x6cc                       ; 004a366e
    PUSH 0x5d5d88                       ; 004a3673 | = "Out of memory!"
    MOV dword ptr [0x01d046a0],EDI      ; 004a3678 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004a367e | DAT_01d046a4
    CALL FUN_004e4500                   ; 004a3683
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004a3688
    MOV EDI,ESI                         ; 004a368b
        ;   Label: LAB_004a368b
    SUB ECX,ECX                         ; 004a368d
    DEC ECX                             ; 004a368f
    XOR EAX,EAX                         ; 004a3690
    SCASB.REPNE ES:EDI                  ; 004a3692
    NOT ECX                             ; 004a3694
    DEC ECX                             ; 004a3696
    CMP ECX,0x40                        ; 004a3697
    JNC 0x004a370d                      ; 004a369a
        ;   XREF to: 004a370d (CONDITIONAL_JUMP)  ; LAB_004a370d
    MOV EDI,EBX                         ; 004a369c
        ;   Label: LAB_004a369c
    PUSH EDI                            ; 004a369e
    MOV AL,byte ptr [ESI]               ; 004a369f
        ;   Label: LAB_004a369f
    MOV byte ptr [EDI],AL               ; 004a36a1
    CMP AL,0x0                          ; 004a36a3
    JZ 0x004a36b7                       ; 004a36a5
        ;   XREF to: 004a36b7 (CONDITIONAL_JUMP)  ; LAB_004a36b7
    MOV AL,byte ptr [ESI + 0x1]         ; 004a36a7
    ADD ESI,0x2                         ; 004a36aa
    MOV byte ptr [EDI + 0x1],AL         ; 004a36ad
    ADD EDI,0x2                         ; 004a36b0
    CMP AL,0x0                          ; 004a36b3
    JNZ 0x004a369f                      ; 004a36b5
        ;   XREF to: 004a369f (CONDITIONAL_JUMP)  ; LAB_004a369f
    POP EDI                             ; 004a36b7
        ;   Label: LAB_004a36b7
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004a36b8
    MOV dword ptr [EBX + 0x140],EAX     ; 004a36bc
    MOV EAX,dword ptr [EBP + 0x150]     ; 004a36c2
    MOV dword ptr [EBP + EAX*0x4 + 0x154],EBX ; 004a36c8
    MOV ESI,dword ptr [EBP + 0x150]     ; 004a36cf
    INC ESI                             ; 004a36d5
    MOV EAX,EBX                         ; 004a36d6
    MOV dword ptr [EBP + 0x150],ESI     ; 004a36d8
    POP EBP                             ; 004a36de
    POP EDI                             ; 004a36df
    POP ESI                             ; 004a36e0
    POP EBX                             ; 004a36e1
    RET                                 ; 004a36e2
    PUSH ESI                            ; 004a36e3
        ;   Label: LAB_004a36e3
    PUSH EBP                            ; 004a36e4
    MOV ECX,0x5d5d23                    ; 004a36e5 | = "..\\core\\fldnotes.cpp"
    MOV EBX,0x6c6                       ; 004a36ea
    PUSH 0x5d5d38                       ; 004a36ef | = "Too many field note entries in sectio..."
    MOV dword ptr [0x01d046a0],ECX      ; 004a36f4 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 004a36fa | DAT_01d046a4
    CALL FUN_004e4500                   ; 004a3700
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0xc                         ; 004a3705
    JMP 0x004a3649                      ; 004a3708
        ;   XREF to: 004a3649 (UNCONDITIONAL_JUMP)  ; LAB_004a3649
    PUSH ESI                            ; 004a370d
        ;   Label: LAB_004a370d
    MOV EDX,0x5d5d97                    ; 004a370e | = "..\\core\\fldnotes.cpp"
    MOV ECX,0x6d1                       ; 004a3713
    PUSH 0x5d5dac                       ; 004a3718 | = "Entry name '%s' is too long"
    MOV dword ptr [0x01d046a0],EDX      ; 004a371d | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 004a3723 | DAT_01d046a4
    CALL FUN_004e4500                   ; 004a3729
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x8                         ; 004a372e
    JMP 0x004a369c                      ; 004a3731
        ;   XREF to: 004a369c (UNCONDITIONAL_JUMP)  ; LAB_004a369c

