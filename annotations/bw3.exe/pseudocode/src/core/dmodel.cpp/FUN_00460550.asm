; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00460550(char *param_1,char *param_2)
;
;
; XREF[3]:
;   FUN_0043c330 at 0043c400
;   FUN_00462420 at 004624aa
;   FUN_00532b80 at 005336f0
;
; Referenced Globals:
;   undefined4 DAT_005bb5c4
;   TerminatedCString s_models_005bb5c7
;   TerminatedCString s_core_dmodel_cpp_005bb5ce
;   TerminatedCString s_Can_t_open_keyframed_mod_005bb5e1
;   undefined4 DAT_005bb5ff
;   TerminatedCString s_models_005bb602
;   TerminatedCString s_core_dmodel_cpp_005bb609
;   TerminatedCString s_Can_t_open_keyframed_mod_005bb61c
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004606a0
;   FUN_00460890
;   FUN_00460e10
;   FUN_00461530
;   FUN_004616e0
;   FUN_004659c0
;   FUN_004e4330
;   FUN_005a32b0
;   FUN_005a3480
;   FUN_005a3a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460550
        ;   Label: FUN_00460550
    PUSH ESI                            ; 00460551
    PUSH EDI                            ; 00460552
    PUSH EBP                            ; 00460553
    MOV EBX,dword ptr [ESP + 0x14]      ; 00460554
    PUSH EBX                            ; 00460558
    CALL FUN_00460e10                   ; 00460559
        ;   XREF to: 00460e10 (UNCONDITIONAL_CALL)  ; undefined FUN_00460e10()
    ADD ESP,0x4                         ; 0046055e
    PUSH 0x5bb5c4                       ; 00460561 | DAT_005bb5c4
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00460566
    PUSH EDX                            ; 0046056a
    PUSH 0x5bb5c7                       ; 0046056b | = "models"
    CALL FUN_004659c0                   ; 00460570
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004659c0()
    ADD ESP,0xc                         ; 00460575
    MOV EBP,EAX                         ; 00460578
    TEST EAX,EAX                        ; 0046057a
    JZ 0x0046065e                       ; 0046057c
        ;   XREF to: 0046065e (CONDITIONAL_JUMP)  ; LAB_0046065e
    MOV ESI,dword ptr [ESP + 0x18]      ; 00460582
        ;   Label: LAB_00460582
    MOV EDI,EBX                         ; 00460586
    PUSH EDI                            ; 00460588
    MOV AL,byte ptr [ESI]               ; 00460589
        ;   Label: LAB_00460589
    MOV byte ptr [EDI],AL               ; 0046058b
    CMP AL,0x0                          ; 0046058d
    JZ 0x004605a1                       ; 0046058f
        ;   XREF to: 004605a1 (CONDITIONAL_JUMP)  ; LAB_004605a1
    MOV AL,byte ptr [ESI + 0x1]         ; 00460591
    ADD ESI,0x2                         ; 00460594
    MOV byte ptr [EDI + 0x1],AL         ; 00460597
    ADD EDI,0x2                         ; 0046059a
    CMP AL,0x0                          ; 0046059d
    JNZ 0x00460589                      ; 0046059f
        ;   XREF to: 00460589 (CONDITIONAL_JUMP)  ; LAB_00460589
    POP EDI                             ; 004605a1
        ;   Label: LAB_004605a1
    PUSH EBP                            ; 004605a2
    CALL FUN_005a32b0                   ; 004605a3
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a32b0()
    ADD ESP,0x4                         ; 004605a8
    PUSH EBP                            ; 004605ab
    PUSH EAX                            ; 004605ac
    MOV ESI,EAX                         ; 004605ad
    CALL FUN_005a3480                   ; 004605af
        ;   XREF to: 005a3480 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3480()
    ADD ESP,0x8                         ; 004605b4
    CMP ESI,0x2f                        ; 004605b7
    JNZ 0x0046068b                      ; 004605ba
        ;   XREF to: 0046068b (CONDITIONAL_JUMP)  ; LAB_0046068b
    PUSH EBP                            ; 004605c0
    CALL FUN_005a3a90                   ; 004605c1
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3a90()
    ADD ESP,0x4                         ; 004605c6
    PUSH 0x5bb5ff                       ; 004605c9 | DAT_005bb5ff
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004605ce
    PUSH EBP                            ; 004605d2
    PUSH 0x5bb602                       ; 004605d3 | = "models"
    CALL FUN_004659c0                   ; 004605d8
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004659c0()
    ADD ESP,0xc                         ; 004605dd
    MOV EBP,EAX                         ; 004605e0
    TEST EAX,EAX                        ; 004605e2
    JNZ 0x0046060d                      ; 004605e4
        ;   XREF to: 0046060d (CONDITIONAL_JUMP)  ; LAB_0046060d
    MOV ECX,dword ptr [ESP + 0x18]      ; 004605e6
    PUSH ECX                            ; 004605ea
    MOV EAX,0x5bb609                    ; 004605eb | = "..\\core\\dmodel.cpp"
    MOV EDX,0xc5                        ; 004605f0
    PUSH 0x5bb61c                       ; 004605f5 | = "Can't open keyframed model %s"
    MOV [0x01d71de0],EAX                ; 004605fa | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 004605ff | DAT_01d71de4
    CALL FUN_004e4330                   ; 00460605
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x8                         ; 0046060a
    PUSH EBP                            ; 0046060d
        ;   Label: LAB_0046060d
    PUSH EBX                            ; 0046060e
    CALL FUN_00460890                   ; 0046060f
        ;   XREF to: 00460890 (UNCONDITIONAL_CALL)  ; undefined FUN_00460890()
    ADD ESP,0x8                         ; 00460614
        ;   Label: LAB_00460614
    PUSH EBP                            ; 00460617
    CALL FUN_005a3a90                   ; 00460618
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3a90()
    ADD ESP,0x4                         ; 0046061d
    PUSH EBX                            ; 00460620
    CALL FUN_004616e0                   ; 00460621
        ;   XREF to: 004616e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004616e0()
    ADD ESP,0x4                         ; 00460626
    MOV ESI,dword ptr [EBX + 0x120]     ; 00460629
    XOR EDX,EDX                         ; 0046062f
    TEST ESI,ESI                        ; 00460631
    JLE 0x00460650                      ; 00460633
        ;   XREF to: 00460650 (CONDITIONAL_JUMP)  ; LAB_00460650
    MOV EAX,EBX                         ; 00460635
    MOV dword ptr [EAX + 0x128],0x0     ; 00460637
        ;   Label: LAB_00460637
    INC EDX                             ; 00460641
    MOV EDI,dword ptr [EBX + 0x120]     ; 00460642
    ADD EAX,0x48                        ; 00460648
    CMP EDX,EDI                         ; 0046064b
    JL 0x00460637                       ; 0046064d
        ;   XREF to: 00460637 (CONDITIONAL_JUMP)  ; LAB_00460637
    NOP                                 ; 0046064f
    PUSH EBX                            ; 00460650
        ;   Label: LAB_00460650
    CALL FUN_00461530                   ; 00460651
        ;   XREF to: 00461530 (UNCONDITIONAL_CALL)  ; undefined FUN_00461530()
    ADD ESP,0x4                         ; 00460656
    POP EBP                             ; 00460659
    POP EDI                             ; 0046065a
    POP ESI                             ; 0046065b
    POP EBX                             ; 0046065c
    RET                                 ; 0046065d
    MOV EDI,dword ptr [ESP + 0x18]      ; 0046065e
        ;   Label: LAB_0046065e
    PUSH EDI                            ; 00460662
    MOV ECX,0x5bb5ce                    ; 00460663 | = "..\\core\\dmodel.cpp"
    MOV ESI,0xb8                        ; 00460668
    PUSH 0x5bb5e1                       ; 0046066d | = "Can't open keyframed model %s"
    MOV dword ptr [0x01d71de0],ECX      ; 00460672 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 00460678 | DAT_01d71de4
    CALL FUN_004e4330                   ; 0046067e
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x8                         ; 00460683
    JMP 0x00460582                      ; 00460686
        ;   XREF to: 00460582 (UNCONDITIONAL_JUMP)  ; LAB_00460582
    PUSH EBP                            ; 0046068b
        ;   Label: LAB_0046068b
    PUSH EBX                            ; 0046068c
    CALL FUN_004606a0                   ; 0046068d
        ;   XREF to: 004606a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004606a0()
    JMP 0x00460614                      ; 00460692
        ;   XREF to: 00460614 (UNCONDITIONAL_JUMP)  ; LAB_00460614

