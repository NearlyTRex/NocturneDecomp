; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004443a0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_head_005d6b84
;   TerminatedCString s_Bip01_L_Clavicle_005d6b8f
;   TerminatedCString s_Bip01_R_Clavicle_005d6ba0
;   TerminatedCString s_Bip01_L_UpperArm_005d6bb1
;   TerminatedCString s_Bip01_R_UpperArm_005d6bc2
;   TerminatedCString s_Bip01_L_ForeArm_005d6bd3
;   TerminatedCString s_Bip01_R_ForeArm_005d6be3
;   TerminatedCString s_Bip01_L_Foot_005d6bf3
;   TerminatedCString s_Bip01_R_Foot_005d6c00
;   TerminatedCString s_Bip01_L_Thigh_005d6c0d
;   TerminatedCString s_Bip01_R_Thigh_005d6c1b
;   TerminatedCString s_Bip01_L_Calf_005d6c29
;   TerminatedCString s_Bip01_R_Calf_005d6c36
;   TerminatedCString s_Bip01_L_Hand_005d6c43
;   TerminatedCString s_Bip01_R_Hand_005d6c50
;   ... and 19 more
;
; Called Functions:
;   FUN_004eaa10
;   FUN_005634f0
;   FUN_00569f30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004443a0
        ;   Label: FUN_004443a0
    PUSH ESI                            ; 004443a1
    MOV ESI,dword ptr [ESP + 0xc]       ; 004443a2
    PUSH ESI                            ; 004443a6
    CALL FUN_004eaa10                   ; 004443a7
        ;   XREF to: 004eaa10 (UNCONDITIONAL_CALL)  ; undefined FUN_004eaa10()
    ADD ESP,0x4                         ; 004443ac
    LEA EAX,[ESI + 0x158]               ; 004443af
    PUSH EAX                            ; 004443b5
    CALL FUN_00569f30                   ; 004443b6
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f30()
    ADD ESP,0x4                         ; 004443bb
    PUSH 0x1                            ; 004443be
    PUSH 0x5d6b84                       ; 004443c0 | = "Bip01 head"
    PUSH EAX                            ; 004443c5
    MOV EBX,EAX                         ; 004443c6
    CALL FUN_005634f0                   ; 004443c8
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004443cd
    PUSH 0x1                            ; 004443d0
    PUSH 0x5d6b8f                       ; 004443d2 | = "Bip01 L Clavicle"
    PUSH EBX                            ; 004443d7
    MOV [0x007db570],EAX                ; 004443d8 | DAT_007db570
    CALL FUN_005634f0                   ; 004443dd
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004443e2
    PUSH 0x1                            ; 004443e5
    PUSH 0x5d6ba0                       ; 004443e7 | = "Bip01 R Clavicle"
    PUSH EBX                            ; 004443ec
    MOV [0x007db574],EAX                ; 004443ed | DAT_007db574
    CALL FUN_005634f0                   ; 004443f2
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004443f7
    PUSH 0x1                            ; 004443fa
    PUSH 0x5d6bb1                       ; 004443fc | = "Bip01 L UpperArm"
    PUSH EBX                            ; 00444401
    MOV [0x007db578],EAX                ; 00444402 | DAT_007db578
    CALL FUN_005634f0                   ; 00444407
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0044440c
    PUSH 0x1                            ; 0044440f
    PUSH 0x5d6bc2                       ; 00444411 | = "Bip01 R UpperArm"
    PUSH EBX                            ; 00444416
    MOV [0x007db57c],EAX                ; 00444417 | DAT_007db57c
    CALL FUN_005634f0                   ; 0044441c
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 00444421
    PUSH 0x1                            ; 00444424
    PUSH 0x5d6bd3                       ; 00444426 | = "Bip01 L ForeArm"
    PUSH EBX                            ; 0044442b
    MOV [0x007db580],EAX                ; 0044442c | DAT_007db580
    CALL FUN_005634f0                   ; 00444431
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 00444436
    PUSH 0x1                            ; 00444439
    PUSH 0x5d6be3                       ; 0044443b | = "Bip01 R ForeArm"
    PUSH EBX                            ; 00444440
    MOV [0x007db584],EAX                ; 00444441 | DAT_007db584
    CALL FUN_005634f0                   ; 00444446
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0044444b
    PUSH 0x1                            ; 0044444e
    PUSH 0x5d6bf3                       ; 00444450 | = "Bip01 L Foot"
    PUSH EBX                            ; 00444455
    MOV [0x007db588],EAX                ; 00444456 | DAT_007db588
    CALL FUN_005634f0                   ; 0044445b
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 00444460
    PUSH 0x1                            ; 00444463
    PUSH 0x5d6c00                       ; 00444465 | = "Bip01 R Foot"
    PUSH EBX                            ; 0044446a
    MOV [0x007db58c],EAX                ; 0044446b | DAT_007db58c
    CALL FUN_005634f0                   ; 00444470
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 00444475
    MOV [0x007db590],EAX                ; 00444478 | DAT_007db590
    PUSH 0x1                            ; 0044447d
    PUSH 0x5d6c0d                       ; 0044447f | = "Bip01 L Thigh"
    PUSH EBX                            ; 00444484
    CALL FUN_005634f0                   ; 00444485
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0044448a
    PUSH 0x1                            ; 0044448d
    PUSH 0x5d6c1b                       ; 0044448f | = "Bip01 R Thigh"
    PUSH EBX                            ; 00444494
    MOV [0x007db594],EAX                ; 00444495 | DAT_007db594
    CALL FUN_005634f0                   ; 0044449a
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0044449f
    PUSH 0x1                            ; 004444a2
    PUSH 0x5d6c29                       ; 004444a4 | = "Bip01 L Calf"
    PUSH EBX                            ; 004444a9
    MOV [0x007db598],EAX                ; 004444aa | DAT_007db598
    CALL FUN_005634f0                   ; 004444af
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004444b4
    PUSH 0x1                            ; 004444b7
    PUSH 0x5d6c36                       ; 004444b9 | = "Bip01 R Calf"
    PUSH EBX                            ; 004444be
    MOV [0x007db59c],EAX                ; 004444bf | DAT_007db59c
    CALL FUN_005634f0                   ; 004444c4
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004444c9
    PUSH 0x1                            ; 004444cc
    PUSH 0x5d6c43                       ; 004444ce | = "Bip01 L Hand"
    PUSH EBX                            ; 004444d3
    MOV [0x007db5a0],EAX                ; 004444d4 | DAT_007db5a0
    CALL FUN_005634f0                   ; 004444d9
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004444de
    PUSH 0x1                            ; 004444e1
    PUSH 0x5d6c50                       ; 004444e3 | = "Bip01 R Hand"
    PUSH EBX                            ; 004444e8
    MOV [0x007db5a4],EAX                ; 004444e9 | DAT_007db5a4
    CALL FUN_005634f0                   ; 004444ee
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004444f3
    PUSH 0x1                            ; 004444f6
    PUSH 0x5d6c5d                       ; 004444f8 | = "Bip01 Spine2"
    PUSH EBX                            ; 004444fd
    MOV [0x007db5a8],EAX                ; 004444fe | DAT_007db5a8
    CALL FUN_005634f0                   ; 00444503
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 00444508
    PUSH 0x1                            ; 0044450b
    PUSH 0x5d6c6a                       ; 0044450d | = "Bip01 Spine"
    PUSH EBX                            ; 00444512
    MOV [0x007db5ac],EAX                ; 00444513 | DAT_007db5ac
    CALL FUN_005634f0                   ; 00444518
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0044451d
    MOV [0x007db5b0],EAX                ; 00444520 | DAT_007db5b0
    MOV dword ptr [ESI + 0x1ffac],0x0   ; 00444525
    POP ESI                             ; 0044452f
    POP EBX                             ; 00444530
    RET                                 ; 00444531

