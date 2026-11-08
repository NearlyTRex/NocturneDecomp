; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004efa70(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_hotdemonx_dfm_005e5061
;   TerminatedCString s_hotdemon_dfm_005e506f
;   TerminatedCString s_Bip01_Head_005e507c
;   TerminatedCString s_Bip01_L_ForeArm_005e5087
;   TerminatedCString s_Bip01_R_ForeArm_005e5097
;   TerminatedCString s_Bip01_L_UpperArm_005e50a7
;   TerminatedCString s_Bip01_R_UpperArm_005e50b8
;   TerminatedCString s_Bip01_L_Foot_005e50c9
;   TerminatedCString s_Bip01_R_Foot_005e50d6
;   TerminatedCString s_Bip01_L_Hand_005e50e3
;   TerminatedCString s_Bip01_R_Hand_005e50f0
;   TerminatedCString s_Bip01_Spine_005e50fd
;   TerminatedCString s_Bip01_Spine1_005e5109
;   TerminatedCString s_Bip01_Spine2_005e5116
;   TerminatedCString s_Bip01_Head_005e5123
;   ... and 18 more
;
; Called Functions:
;   FUN_004a0510
;   FUN_005634f0
;   FUN_00569b20
;   FUN_00569eb0
;   FUN_00569f30
;   FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004efa70
        ;   Label: FUN_004efa70
    PUSH ESI                            ; 004efa71
    PUSH EDI                            ; 004efa72
    MOV EDI,dword ptr [ESP + 0x10]      ; 004efa73
    MOV EBX,dword ptr [0x0061d95c]      ; 004efa77 | DAT_0061d95c
    MOV EDX,dword ptr [EBX + 0x18]      ; 004efa7d | DAT_01ccf3a8
    LEA EAX,[EDI + 0x158]               ; 004efa80
    TEST EDX,EDX                        ; 004efa86
    JZ 0x004efc45                       ; 004efa88
        ;   XREF to: 004efc45 (CONDITIONAL_JUMP)  ; LAB_004efc45
    PUSH 0x5e506f                       ; 004efa8e | = "hotdemon.dfm"
    PUSH EAX                            ; 004efa93
        ;   Label: LAB_004efa93
    CALL FUN_00569f50                   ; 004efa94
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f50()
    ADD ESP,0x8                         ; 004efa99
    PUSH EDI                            ; 004efa9c
    CALL FUN_004a0510                   ; 004efa9d
        ;   XREF to: 004a0510 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0510()
    ADD ESP,0x4                         ; 004efaa2
    LEA ESI,[EDI + 0x158]               ; 004efaa5
    PUSH ESI                            ; 004efaab
    CALL FUN_00569b20                   ; 004efaac
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; undefined FUN_00569b20()
    ADD ESP,0x4                         ; 004efab1
    PUSH ESI                            ; 004efab4
    CALL FUN_00569f30                   ; 004efab5
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f30()
    ADD ESP,0x4                         ; 004efaba
    PUSH 0x1                            ; 004efabd
    PUSH 0x5e507c                       ; 004efabf | = "Bip01 Head"
    PUSH EAX                            ; 004efac4
    MOV EBX,EAX                         ; 004efac5
    CALL FUN_005634f0                   ; 004efac7
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004efacc
    PUSH 0x1                            ; 004efacf
    PUSH 0x5e5087                       ; 004efad1 | = "Bip01 L ForeArm"
    PUSH EBX                            ; 004efad6
    MOV [0x01d06bcc],EAX                ; 004efad7 | DAT_01d06bcc
    CALL FUN_005634f0                   ; 004efadc
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004efae1
    PUSH 0x1                            ; 004efae4
    PUSH 0x5e5097                       ; 004efae6 | = "Bip01 R ForeArm"
    PUSH EBX                            ; 004efaeb
    MOV [0x01d06bd8],EAX                ; 004efaec | DAT_01d06bd8
    CALL FUN_005634f0                   ; 004efaf1
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004efaf6
    PUSH 0x1                            ; 004efaf9
    PUSH 0x5e50a7                       ; 004efafb | = "Bip01 L UpperArm"
    PUSH EBX                            ; 004efb00
    MOV [0x01d06bdc],EAX                ; 004efb01 | DAT_01d06bdc
    CALL FUN_005634f0                   ; 004efb06
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004efb0b
    PUSH 0x1                            ; 004efb0e
    PUSH 0x5e50b8                       ; 004efb10 | = "Bip01 R UpperArm"
    PUSH EBX                            ; 004efb15
    MOV [0x01d06be0],EAX                ; 004efb16 | DAT_01d06be0
    CALL FUN_005634f0                   ; 004efb1b
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004efb20
    PUSH 0x1                            ; 004efb23
    PUSH 0x5e50c9                       ; 004efb25 | = "Bip01 L Foot"
    PUSH EBX                            ; 004efb2a
    MOV [0x01d06be4],EAX                ; 004efb2b | DAT_01d06be4
    CALL FUN_005634f0                   ; 004efb30
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004efb35
    PUSH 0x1                            ; 004efb38
    PUSH 0x5e50d6                       ; 004efb3a | = "Bip01 R Foot"
    PUSH EBX                            ; 004efb3f
    MOV [0x01d06be8],EAX                ; 004efb40 | DAT_01d06be8
    CALL FUN_005634f0                   ; 004efb45
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004efb4a
    PUSH 0x1                            ; 004efb4d
    PUSH 0x5e50e3                       ; 004efb4f | = "Bip01 L Hand"
    PUSH EBX                            ; 004efb54
    MOV [0x01d06bec],EAX                ; 004efb55 | DAT_01d06bec
    CALL FUN_005634f0                   ; 004efb5a
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004efb5f
    MOV [0x01d06bd0],EAX                ; 004efb62 | DAT_01d06bd0
    PUSH 0x1                            ; 004efb67
    PUSH 0x5e50f0                       ; 004efb69 | = "Bip01 R Hand"
    PUSH EBX                            ; 004efb6e
    CALL FUN_005634f0                   ; 004efb6f
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004efb74
    PUSH 0x1                            ; 004efb77
    PUSH 0x5e50fd                       ; 004efb79 | = "Bip01 Spine"
    PUSH EBX                            ; 004efb7e
    MOV [0x01d06bd4],EAX                ; 004efb7f | DAT_01d06bd4
    CALL FUN_005634f0                   ; 004efb84
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004efb89
    PUSH 0x1                            ; 004efb8c
    PUSH 0x5e5109                       ; 004efb8e | = "Bip01 Spine1"
    PUSH EBX                            ; 004efb93
    MOV [0x01d06bf0],EAX                ; 004efb94 | DAT_01d06bf0
    CALL FUN_005634f0                   ; 004efb99
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004efb9e
    PUSH 0x1                            ; 004efba1
    PUSH 0x5e5116                       ; 004efba3 | = "Bip01 Spine2"
    PUSH EBX                            ; 004efba8
    MOV [0x01d06bf4],EAX                ; 004efba9 | DAT_01d06bf4
    CALL FUN_005634f0                   ; 004efbae
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004efbb3
    PUSH 0x1                            ; 004efbb6
    PUSH 0x5e5123                       ; 004efbb8 | = "Bip01 Head"
    PUSH EBX                            ; 004efbbd
    MOV [0x01d06bf8],EAX                ; 004efbbe | DAT_01d06bf8
    CALL FUN_005634f0                   ; 004efbc3
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004efbc8
    PUSH 0x1                            ; 004efbcb
    PUSH 0x5e512e                       ; 004efbcd | = "Bip01 L UpperArm"
    PUSH EBX                            ; 004efbd2
    MOV [0x01d06bcc],EAX                ; 004efbd3 | DAT_01d06bcc
    CALL FUN_005634f0                   ; 004efbd8
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004efbdd
    PUSH 0x1                            ; 004efbe0
    PUSH 0x5e513f                       ; 004efbe2 | = "Bip01 R UpperArm"
    PUSH EBX                            ; 004efbe7
    MOV [0x01d06be0],EAX                ; 004efbe8 | DAT_01d06be0
    CALL FUN_005634f0                   ; 004efbed
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004efbf2
    PUSH 0x1                            ; 004efbf5
    PUSH 0x5e5150                       ; 004efbf7 | = "Bip01 Spine"
    PUSH EBX                            ; 004efbfc
    MOV [0x01d06be4],EAX                ; 004efbfd | DAT_01d06be4
    CALL FUN_005634f0                   ; 004efc02
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004efc07
    PUSH 0x1                            ; 004efc0a
    PUSH 0x5e515c                       ; 004efc0c | = "Bip01 Spine2"
    PUSH EBX                            ; 004efc11
    MOV [0x01d06bf0],EAX                ; 004efc12 | DAT_01d06bf0
    CALL FUN_005634f0                   ; 004efc17
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004efc1c
    PUSH ESI                            ; 004efc1f
    MOV [0x01d06bf8],EAX                ; 004efc20 | DAT_01d06bf8
    CALL FUN_00569eb0                   ; 004efc25
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00569eb0()
    MOV dword ptr [EDI + 0xc268],0x0    ; 004efc2a
    ADD ESP,0x4                         ; 004efc34
    MOV dword ptr [EDI + 0xc26c],0x0    ; 004efc37
    POP EDI                             ; 004efc41
    POP ESI                             ; 004efc42
    POP EBX                             ; 004efc43
    RET                                 ; 004efc44
    PUSH 0x5e5061                       ; 004efc45 | = "hotdemonx.dfm"
        ;   Label: LAB_004efc45
    JMP 0x004efa93                      ; 004efc4a
        ;   XREF to: 004efa93 (UNCONDITIONAL_JUMP)  ; LAB_004efa93

