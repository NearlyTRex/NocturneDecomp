; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051ea60(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_head_005e29f1
;   TerminatedCString s_Bip01_L_Clavicle_005e29fc
;   TerminatedCString s_Bip01_R_Clavicle_005e2a0d
;   TerminatedCString s_Bip01_L_UpperArm_005e2a1e
;   TerminatedCString s_Bip01_R_UpperArm_005e2a2f
;   TerminatedCString s_Bip01_L_ForeArm_005e2a40
;   TerminatedCString s_Bip01_R_ForeArm_005e2a50
;   TerminatedCString s_Bip01_L_Foot_005e2a60
;   TerminatedCString s_Bip01_R_Foot_005e2a6d
;   TerminatedCString s_Bip01_L_Thigh_005e2a7a
;   TerminatedCString s_Bip01_R_Thigh_005e2a88
;   TerminatedCString s_Bip01_L_Calf_005e2a96
;   TerminatedCString s_Bip01_R_Calf_005e2aa3
;   TerminatedCString s_Bip01_L_Hand_005e2ab0
;   TerminatedCString s_Bip01_R_Hand_005e2abd
;   ... and 22 more
;
; Called Functions:
;   FUN_004ce4a0
;   FUN_00540e80
;   FUN_00547890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051ea60
        ;   Label: FUN_0051ea60
    PUSH ESI                            ; 0051ea61
    MOV ESI,dword ptr [ESP + 0xc]       ; 0051ea62
    PUSH ESI                            ; 0051ea66
    CALL FUN_004ce4a0                   ; 0051ea67
        ;   XREF to: 004ce4a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ce4a0()
    ADD ESP,0x4                         ; 0051ea6c
    LEA EAX,[ESI + 0x2b4]               ; 0051ea6f
    PUSH EAX                            ; 0051ea75
    CALL FUN_00547890                   ; 0051ea76
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; undefined FUN_00547890()
    ADD ESP,0x4                         ; 0051ea7b
    PUSH 0x1                            ; 0051ea7e
    PUSH 0x5e29f1                       ; 0051ea80 | = "Bip01 head"
    PUSH EAX                            ; 0051ea85
    MOV EBX,EAX                         ; 0051ea86
    CALL FUN_00540e80                   ; 0051ea88
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0051ea8d
    PUSH 0x1                            ; 0051ea90
    PUSH 0x5e29fc                       ; 0051ea92 | = "Bip01 L Clavicle"
    PUSH EBX                            ; 0051ea97
    MOV [0x01e62068],EAX                ; 0051ea98 | DAT_01e62068
    CALL FUN_00540e80                   ; 0051ea9d
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0051eaa2
    PUSH 0x1                            ; 0051eaa5
    PUSH 0x5e2a0d                       ; 0051eaa7 | = "Bip01 R Clavicle"
    PUSH EBX                            ; 0051eaac
    MOV [0x01e6206c],EAX                ; 0051eaad | DAT_01e6206c
    CALL FUN_00540e80                   ; 0051eab2
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0051eab7
    PUSH 0x1                            ; 0051eaba
    PUSH 0x5e2a1e                       ; 0051eabc | = "Bip01 L UpperArm"
    PUSH EBX                            ; 0051eac1
    MOV [0x01e62070],EAX                ; 0051eac2 | DAT_01e62070
    CALL FUN_00540e80                   ; 0051eac7
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0051eacc
    PUSH 0x1                            ; 0051eacf
    PUSH 0x5e2a2f                       ; 0051ead1 | = "Bip01 R UpperArm"
    PUSH EBX                            ; 0051ead6
    MOV [0x01e62074],EAX                ; 0051ead7 | DAT_01e62074
    CALL FUN_00540e80                   ; 0051eadc
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0051eae1
    PUSH 0x1                            ; 0051eae4
    PUSH 0x5e2a40                       ; 0051eae6 | = "Bip01 L ForeArm"
    PUSH EBX                            ; 0051eaeb
    MOV [0x01e62078],EAX                ; 0051eaec | DAT_01e62078
    CALL FUN_00540e80                   ; 0051eaf1
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0051eaf6
    PUSH 0x1                            ; 0051eaf9
    PUSH 0x5e2a50                       ; 0051eafb | = "Bip01 R ForeArm"
    PUSH EBX                            ; 0051eb00
    MOV [0x01e6207c],EAX                ; 0051eb01 | DAT_01e6207c
    CALL FUN_00540e80                   ; 0051eb06
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0051eb0b
    PUSH 0x1                            ; 0051eb0e
    PUSH 0x5e2a60                       ; 0051eb10 | = "Bip01 L Foot"
    PUSH EBX                            ; 0051eb15
    MOV [0x01e62080],EAX                ; 0051eb16 | DAT_01e62080
    CALL FUN_00540e80                   ; 0051eb1b
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0051eb20
    PUSH 0x1                            ; 0051eb23
    PUSH 0x5e2a6d                       ; 0051eb25 | = "Bip01 R Foot"
    PUSH EBX                            ; 0051eb2a
    MOV [0x01e62084],EAX                ; 0051eb2b | DAT_01e62084
    CALL FUN_00540e80                   ; 0051eb30
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0051eb35
    MOV [0x01e62088],EAX                ; 0051eb38 | DAT_01e62088
    PUSH 0x1                            ; 0051eb3d
    PUSH 0x5e2a7a                       ; 0051eb3f | = "Bip01 L Thigh"
    PUSH EBX                            ; 0051eb44
    CALL FUN_00540e80                   ; 0051eb45
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0051eb4a
    PUSH 0x1                            ; 0051eb4d
    PUSH 0x5e2a88                       ; 0051eb4f | = "Bip01 R Thigh"
    PUSH EBX                            ; 0051eb54
    MOV [0x01e6208c],EAX                ; 0051eb55 | DAT_01e6208c
    CALL FUN_00540e80                   ; 0051eb5a
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0051eb5f
    PUSH 0x1                            ; 0051eb62
    PUSH 0x5e2a96                       ; 0051eb64 | = "Bip01 L Calf"
    PUSH EBX                            ; 0051eb69
    MOV [0x01e62090],EAX                ; 0051eb6a | DAT_01e62090
    CALL FUN_00540e80                   ; 0051eb6f
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0051eb74
    PUSH 0x1                            ; 0051eb77
    PUSH 0x5e2aa3                       ; 0051eb79 | = "Bip01 R Calf"
    PUSH EBX                            ; 0051eb7e
    MOV [0x01e62094],EAX                ; 0051eb7f | DAT_01e62094
    CALL FUN_00540e80                   ; 0051eb84
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0051eb89
    PUSH 0x1                            ; 0051eb8c
    PUSH 0x5e2ab0                       ; 0051eb8e | = "Bip01 L Hand"
    PUSH EBX                            ; 0051eb93
    MOV [0x01e62098],EAX                ; 0051eb94 | DAT_01e62098
    CALL FUN_00540e80                   ; 0051eb99
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0051eb9e
    PUSH 0x1                            ; 0051eba1
    PUSH 0x5e2abd                       ; 0051eba3 | = "Bip01 R Hand"
    PUSH EBX                            ; 0051eba8
    MOV [0x01e6209c],EAX                ; 0051eba9 | DAT_01e6209c
    CALL FUN_00540e80                   ; 0051ebae
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0051ebb3
    PUSH 0x1                            ; 0051ebb6
    PUSH 0x5e2aca                       ; 0051ebb8 | = "Bip01 Spine2"
    PUSH EBX                            ; 0051ebbd
    MOV [0x01e620a0],EAX                ; 0051ebbe | DAT_01e620a0
    CALL FUN_00540e80                   ; 0051ebc3
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0051ebc8
    PUSH 0x1                            ; 0051ebcb
    PUSH 0x5e2ad7                       ; 0051ebcd | = "Bip01 Spine"
    PUSH EBX                            ; 0051ebd2
    MOV [0x01e620a4],EAX                ; 0051ebd3 | DAT_01e620a4
    CALL FUN_00540e80                   ; 0051ebd8
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0051ebdd
    PUSH 0x1                            ; 0051ebe0
    PUSH 0x5e2ae3                       ; 0051ebe2 | = "Bip01 Spine1"
    PUSH EBX                            ; 0051ebe7
    MOV [0x01e620ac],EAX                ; 0051ebe8 | DAT_01e620ac
    CALL FUN_00540e80                   ; 0051ebed
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 0051ebf2
    PUSH 0x1                            ; 0051ebf5
    PUSH 0x5e2af0                       ; 0051ebf7 | = "Bip01 Spine1"
    PUSH EBX                            ; 0051ebfc
    MOV [0x01e620a8],EAX                ; 0051ebfd | DAT_01e620a8
    CALL FUN_00540e80                   ; 0051ec02
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    MOV dword ptr [ESI + 0x25640],0x0   ; 0051ec07
    ADD ESP,0xc                         ; 0051ec11
    MOV dword ptr [ESI + 0x27c0],EAX    ; 0051ec14
    POP ESI                             ; 0051ec1a
    POP EBX                             ; 0051ec1b
    RET                                 ; 0051ec1c

