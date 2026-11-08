; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054ba80(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Head_005f02d0
;   TerminatedCString s_Bip01_L_ForeArm_005f02db
;   TerminatedCString s_Bip01_R_ForeArm_005f02eb
;   TerminatedCString s_Bip01_L_UpperArm_005f02fb
;   TerminatedCString s_Bip01_R_UpperArm_005f030c
;   TerminatedCString s_Bip01_L_Foot_005f031d
;   TerminatedCString s_Bip01_R_Foot_005f032a
;   TerminatedCString s_Bip01_L_Hand_005f0337
;   TerminatedCString s_Bip01_R_Hand_005f0344
;   TerminatedCString s_Bip01_Spine_005f0351
;   TerminatedCString s_Bip01_Spine1_005f035d
;   TerminatedCString s_Bip01_Spine2_005f036a
;   TerminatedCString s_Bip01_Head_005f0377
;   TerminatedCString s_Bip01_L_UpperArm_005f0382
;   TerminatedCString s_Bip01_R_UpperArm_005f0393
;   ... and 14 more
;
; Called Functions:
;   FUN_004a0510
;   FUN_005634f0
;   FUN_00569b20
;   FUN_00569eb0
;   FUN_00569f30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054ba80
        ;   Label: FUN_0054ba80
    PUSH ESI                            ; 0054ba81
    PUSH EDI                            ; 0054ba82
    MOV EDI,dword ptr [ESP + 0x10]      ; 0054ba83
    PUSH EDI                            ; 0054ba87
    CALL FUN_004a0510                   ; 0054ba88
        ;   XREF to: 004a0510 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0510()
    ADD ESP,0x4                         ; 0054ba8d
    LEA ESI,[EDI + 0x158]               ; 0054ba90
    PUSH ESI                            ; 0054ba96
    CALL FUN_00569b20                   ; 0054ba97
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; undefined FUN_00569b20()
    ADD ESP,0x4                         ; 0054ba9c
    PUSH ESI                            ; 0054ba9f
    CALL FUN_00569f30                   ; 0054baa0
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f30()
    ADD ESP,0x4                         ; 0054baa5
    PUSH 0x1                            ; 0054baa8
    PUSH 0x5f02d0                       ; 0054baaa | = "Bip01 Head"
    PUSH EAX                            ; 0054baaf
    MOV EBX,EAX                         ; 0054bab0
    CALL FUN_005634f0                   ; 0054bab2
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0054bab7
    PUSH 0x1                            ; 0054baba
    PUSH 0x5f02db                       ; 0054babc | = "Bip01 L ForeArm"
    PUSH EBX                            ; 0054bac1
    MOV [0x01e820fc],EAX                ; 0054bac2 | DAT_01e820fc
    CALL FUN_005634f0                   ; 0054bac7
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0054bacc
    PUSH 0x1                            ; 0054bacf
    PUSH 0x5f02eb                       ; 0054bad1 | = "Bip01 R ForeArm"
    PUSH EBX                            ; 0054bad6
    MOV [0x01e82108],EAX                ; 0054bad7 | DAT_01e82108
    CALL FUN_005634f0                   ; 0054badc
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0054bae1
    PUSH 0x1                            ; 0054bae4
    PUSH 0x5f02fb                       ; 0054bae6 | = "Bip01 L UpperArm"
    PUSH EBX                            ; 0054baeb
    MOV [0x01e8210c],EAX                ; 0054baec | DAT_01e8210c
    CALL FUN_005634f0                   ; 0054baf1
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0054baf6
    PUSH 0x1                            ; 0054baf9
    PUSH 0x5f030c                       ; 0054bafb | = "Bip01 R UpperArm"
    PUSH EBX                            ; 0054bb00
    MOV [0x01e82110],EAX                ; 0054bb01 | DAT_01e82110
    CALL FUN_005634f0                   ; 0054bb06
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0054bb0b
    PUSH 0x1                            ; 0054bb0e
    PUSH 0x5f031d                       ; 0054bb10 | = "Bip01 L Foot"
    PUSH EBX                            ; 0054bb15
    MOV [0x01e82114],EAX                ; 0054bb16 | DAT_01e82114
    CALL FUN_005634f0                   ; 0054bb1b
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0054bb20
    PUSH 0x1                            ; 0054bb23
    PUSH 0x5f032a                       ; 0054bb25 | = "Bip01 R Foot"
    PUSH EBX                            ; 0054bb2a
    MOV [0x01e82118],EAX                ; 0054bb2b | DAT_01e82118
    CALL FUN_005634f0                   ; 0054bb30
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0054bb35
    PUSH 0x1                            ; 0054bb38
    PUSH 0x5f0337                       ; 0054bb3a | = "Bip01 L Hand"
    PUSH EBX                            ; 0054bb3f
    MOV [0x01e8211c],EAX                ; 0054bb40 | DAT_01e8211c
    CALL FUN_005634f0                   ; 0054bb45
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0054bb4a
    MOV [0x01e82100],EAX                ; 0054bb4d | DAT_01e82100
    PUSH 0x1                            ; 0054bb52
    PUSH 0x5f0344                       ; 0054bb54 | = "Bip01 R Hand"
    PUSH EBX                            ; 0054bb59
    CALL FUN_005634f0                   ; 0054bb5a
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0054bb5f
    PUSH 0x1                            ; 0054bb62
    PUSH 0x5f0351                       ; 0054bb64 | = "Bip01 Spine"
    PUSH EBX                            ; 0054bb69
    MOV [0x01e82104],EAX                ; 0054bb6a | DAT_01e82104
    CALL FUN_005634f0                   ; 0054bb6f
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0054bb74
    PUSH 0x1                            ; 0054bb77
    PUSH 0x5f035d                       ; 0054bb79 | = "Bip01 Spine1"
    PUSH EBX                            ; 0054bb7e
    MOV [0x01e82120],EAX                ; 0054bb7f | DAT_01e82120
    CALL FUN_005634f0                   ; 0054bb84
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0054bb89
    PUSH 0x1                            ; 0054bb8c
    PUSH 0x5f036a                       ; 0054bb8e | = "Bip01 Spine2"
    PUSH EBX                            ; 0054bb93
    MOV [0x01e82124],EAX                ; 0054bb94 | DAT_01e82124
    CALL FUN_005634f0                   ; 0054bb99
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0054bb9e
    PUSH 0x1                            ; 0054bba1
    PUSH 0x5f0377                       ; 0054bba3 | = "Bip01 Head"
    PUSH EBX                            ; 0054bba8
    MOV [0x01e82128],EAX                ; 0054bba9 | DAT_01e82128
    CALL FUN_005634f0                   ; 0054bbae
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0054bbb3
    PUSH 0x1                            ; 0054bbb6
    PUSH 0x5f0382                       ; 0054bbb8 | = "Bip01 L UpperArm"
    PUSH EBX                            ; 0054bbbd
    MOV [0x01e820fc],EAX                ; 0054bbbe | DAT_01e820fc
    CALL FUN_005634f0                   ; 0054bbc3
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0054bbc8
    PUSH 0x1                            ; 0054bbcb
    PUSH 0x5f0393                       ; 0054bbcd | = "Bip01 R UpperArm"
    PUSH EBX                            ; 0054bbd2
    MOV [0x01e82110],EAX                ; 0054bbd3 | DAT_01e82110
    CALL FUN_005634f0                   ; 0054bbd8
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0054bbdd
    PUSH 0x1                            ; 0054bbe0
    PUSH 0x5f03a4                       ; 0054bbe2 | = "Bip01 Spine"
    PUSH EBX                            ; 0054bbe7
    MOV [0x01e82114],EAX                ; 0054bbe8 | DAT_01e82114
    CALL FUN_005634f0                   ; 0054bbed
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0054bbf2
    PUSH 0x1                            ; 0054bbf5
    PUSH 0x5f03b0                       ; 0054bbf7 | = "Bip01 Spine2"
    PUSH EBX                            ; 0054bbfc
    MOV [0x01e82120],EAX                ; 0054bbfd | DAT_01e82120
    CALL FUN_005634f0                   ; 0054bc02
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0054bc07
    PUSH ESI                            ; 0054bc0a
    MOV [0x01e82128],EAX                ; 0054bc0b | DAT_01e82128
    CALL FUN_00569eb0                   ; 0054bc10
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00569eb0()
    MOV dword ptr [EDI + 0xc26c],0x0    ; 0054bc15
    ADD ESP,0x4                         ; 0054bc1f
    MOV dword ptr [EDI + 0xc268],0x0    ; 0054bc22
    POP EDI                             ; 0054bc2c
    POP ESI                             ; 0054bc2d
    POP EBX                             ; 0054bc2e
    RET                                 ; 0054bc2f

