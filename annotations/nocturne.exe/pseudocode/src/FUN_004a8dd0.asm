; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a8dd0(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_Bip01_Head_00584ad4+1
;   string s_Bip01_L_ForeArm_00584ae0
;   string s_Bip01_R_ForeArm_00584af0
;   string s_Bip01_L_UpperArm_00584b00
;   string s_Bip01_R_UpperArm_00584b11
;   string s_Bip01_L_Foot_00584b22
;   string s_Bip01_R_Foot_00584b2f
;   string s_Bip01_L_Hand_00584b3c
;   string s_Bip01_R_Hand_00584b49
;   string s_Bip01_Spine_00584b56
;   string s_Bip01_Spine2_00584b62
;   string s_r_high_arm01_00584b6f
;   string s_r_lo_arm01_00584b7c
;   string s_l_high_arm01_00584b87
;   string s_l_lo_arm01_00584b94
;   ... and 18 more
;
; Called Functions:
;   FUN_004796b0
;   FUN_005179d0
;   FUN_00519b30
;   FUN_0051dcd0
;   FUN_0051e020
;   FUN_0051e0a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a8dd0
        ;   Label: FUN_004a8dd0
    PUSH ESI                            ; 004a8dd1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004a8dd2
    PUSH EDI                            ; 004a8dd6
    LEA EDI,[EBX + 0x150]               ; 004a8dd7
    PUSH EDI                            ; 004a8ddd
    CALL FUN_0051dcd0                   ; 004a8dde
        ;   XREF to: 0051dcd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051dcd0()
    ADD ESP,0x4                         ; 004a8de3
    PUSH EDI                            ; 004a8de6
    CALL FUN_0051e0a0                   ; 004a8de7
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051e0a0()
    ADD ESP,0x4                         ; 004a8dec
    PUSH 0x1                            ; 004a8def
    PUSH 0x584ad5                       ; 004a8df1 | s_Bip01_Head_00584ad4+1
    PUSH EAX                            ; 004a8df6
    MOV ESI,EAX                         ; 004a8df7
    CALL FUN_005179d0                   ; 004a8df9
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 004a8dfe
    PUSH 0x1                            ; 004a8e01
    PUSH 0x584ae0                       ; 004a8e03 | = "Bip01 L ForeArm"
    PUSH ESI                            ; 004a8e08
    MOV [0x01c78c14],EAX                ; 004a8e09 | DAT_01c78c14
    CALL FUN_005179d0                   ; 004a8e0e
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 004a8e13
    PUSH 0x1                            ; 004a8e16
    PUSH 0x584af0                       ; 004a8e18 | = "Bip01 R ForeArm"
    PUSH ESI                            ; 004a8e1d
    MOV [0x01c78c20],EAX                ; 004a8e1e | DAT_01c78c20
    CALL FUN_005179d0                   ; 004a8e23
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 004a8e28
    PUSH 0x1                            ; 004a8e2b
    PUSH 0x584b00                       ; 004a8e2d | = "Bip01 L UpperArm"
    PUSH ESI                            ; 004a8e32
    MOV [0x01c78c24],EAX                ; 004a8e33 | DAT_01c78c24
    CALL FUN_005179d0                   ; 004a8e38
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 004a8e3d
    PUSH 0x1                            ; 004a8e40
    PUSH 0x584b11                       ; 004a8e42 | = "Bip01 R UpperArm"
    PUSH ESI                            ; 004a8e47
    MOV [0x01c78c28],EAX                ; 004a8e48 | DAT_01c78c28
    CALL FUN_005179d0                   ; 004a8e4d
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 004a8e52
    PUSH 0x1                            ; 004a8e55
    PUSH 0x584b22                       ; 004a8e57 | = "Bip01 L Foot"
    PUSH ESI                            ; 004a8e5c
    MOV [0x01c78c2c],EAX                ; 004a8e5d | DAT_01c78c2c
    CALL FUN_005179d0                   ; 004a8e62
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 004a8e67
    PUSH 0x1                            ; 004a8e6a
    PUSH 0x584b2f                       ; 004a8e6c | = "Bip01 R Foot"
    PUSH ESI                            ; 004a8e71
    MOV [0x01c78c30],EAX                ; 004a8e72 | DAT_01c78c30
    CALL FUN_005179d0                   ; 004a8e77
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 004a8e7c
    PUSH 0x1                            ; 004a8e7f
    PUSH 0x584b3c                       ; 004a8e81 | = "Bip01 L Hand"
    PUSH ESI                            ; 004a8e86
    MOV [0x01c78c34],EAX                ; 004a8e87 | DAT_01c78c34
    CALL FUN_005179d0                   ; 004a8e8c
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 004a8e91
    PUSH 0x1                            ; 004a8e94
    PUSH 0x584b49                       ; 004a8e96 | = "Bip01 R Hand"
    PUSH ESI                            ; 004a8e9b
    MOV [0x01c78c18],EAX                ; 004a8e9c | DAT_01c78c18
    CALL FUN_005179d0                   ; 004a8ea1
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 004a8ea6
    MOV [0x01c78c1c],EAX                ; 004a8ea9 | DAT_01c78c1c
    PUSH 0x1                            ; 004a8eae
    PUSH 0x584b56                       ; 004a8eb0 | = "Bip01 Spine"
    PUSH ESI                            ; 004a8eb5
    CALL FUN_005179d0                   ; 004a8eb6
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 004a8ebb
    PUSH 0x1                            ; 004a8ebe
    PUSH 0x584b62                       ; 004a8ec0 | = "Bip01 Spine2"
    PUSH ESI                            ; 004a8ec5
    MOV [0x01c78c38],EAX                ; 004a8ec6 | DAT_01c78c38
    CALL FUN_005179d0                   ; 004a8ecb
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 004a8ed0
    PUSH EDI                            ; 004a8ed3
    MOV [0x01c78c3c],EAX                ; 004a8ed4 | DAT_01c78c3c
    CALL FUN_0051e020                   ; 004a8ed9
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; undefined FUN_0051e020()
    ADD ESP,0x4                         ; 004a8ede
    PUSH 0x1                            ; 004a8ee1
    PUSH 0x584b6f                       ; 004a8ee3 | = "r high arm01"
    PUSH EAX                            ; 004a8ee8
    MOV ESI,EAX                         ; 004a8ee9
    CALL FUN_00519b30                   ; 004a8eeb
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    ADD ESP,0xc                         ; 004a8ef0
    PUSH 0x1                            ; 004a8ef3
    PUSH 0x584b7c                       ; 004a8ef5 | = "r lo arm01"
    PUSH ESI                            ; 004a8efa
    MOV dword ptr [EBX + 0xbd48],EAX    ; 004a8efb
    CALL FUN_00519b30                   ; 004a8f01
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    ADD ESP,0xc                         ; 004a8f06
    PUSH 0x1                            ; 004a8f09
    PUSH 0x584b87                       ; 004a8f0b | = "l high arm01"
    PUSH ESI                            ; 004a8f10
    MOV dword ptr [EBX + 0xbd4c],EAX    ; 004a8f11
    CALL FUN_00519b30                   ; 004a8f17
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    ADD ESP,0xc                         ; 004a8f1c
    PUSH 0x1                            ; 004a8f1f
    PUSH 0x584b94                       ; 004a8f21 | = "l lo arm01"
    PUSH ESI                            ; 004a8f26
    MOV dword ptr [EBX + 0xbd50],EAX    ; 004a8f27
    CALL FUN_00519b30                   ; 004a8f2d
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    ADD ESP,0xc                         ; 004a8f32
    PUSH 0x1                            ; 004a8f35
    PUSH 0x584b9f                       ; 004a8f37 | = "r thigh01"
    PUSH ESI                            ; 004a8f3c
    MOV dword ptr [EBX + 0xbd54],EAX    ; 004a8f3d
    CALL FUN_00519b30                   ; 004a8f43
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    ADD ESP,0xc                         ; 004a8f48
    PUSH 0x1                            ; 004a8f4b
    PUSH 0x584ba9                       ; 004a8f4d | = "r shin01"
    PUSH ESI                            ; 004a8f52
    MOV dword ptr [EBX + 0xbd58],EAX    ; 004a8f53
    CALL FUN_00519b30                   ; 004a8f59
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    ADD ESP,0xc                         ; 004a8f5e
    PUSH 0x1                            ; 004a8f61
    PUSH 0x584bb2                       ; 004a8f63 | = "l thigh01"
    PUSH ESI                            ; 004a8f68
    MOV dword ptr [EBX + 0xbd5c],EAX    ; 004a8f69
    CALL FUN_00519b30                   ; 004a8f6f
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    ADD ESP,0xc                         ; 004a8f74
    MOV dword ptr [EBX + 0xbd60],EAX    ; 004a8f77
    POP EDI                             ; 004a8f7d
    PUSH 0x1                            ; 004a8f7e
    PUSH 0x584bbc                       ; 004a8f80 | = "l shin01"
    PUSH ESI                            ; 004a8f85
    CALL FUN_00519b30                   ; 004a8f86
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    ADD ESP,0xc                         ; 004a8f8b
    PUSH 0x1                            ; 004a8f8e
    PUSH 0x584bc5                       ; 004a8f90 | = "lo torso01"
    PUSH ESI                            ; 004a8f95
    MOV dword ptr [EBX + 0xbd64],EAX    ; 004a8f96
    CALL FUN_00519b30                   ; 004a8f9c
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    ADD ESP,0xc                         ; 004a8fa1
    PUSH 0x1                            ; 004a8fa4
    PUSH 0x584bd0                       ; 004a8fa6 | = "high torso01"
    PUSH ESI                            ; 004a8fab
    MOV dword ptr [EBX + 0xbd68],EAX    ; 004a8fac
    CALL FUN_00519b30                   ; 004a8fb2
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    ADD ESP,0xc                         ; 004a8fb7
    PUSH 0x1                            ; 004a8fba
    PUSH 0x584bdd                       ; 004a8fbc | = "head01"
    PUSH ESI                            ; 004a8fc1
    MOV dword ptr [EBX + 0xbd6c],EAX    ; 004a8fc2
    CALL FUN_00519b30                   ; 004a8fc8
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    ADD ESP,0xc                         ; 004a8fcd
    PUSH EBX                            ; 004a8fd0
    MOV dword ptr [EBX + 0xbd70],EAX    ; 004a8fd1
    CALL FUN_004796b0                   ; 004a8fd7
        ;   XREF to: 004796b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004796b0()
    MOV dword ptr [EBX + 0xbd80],0x0    ; 004a8fdc
    MOV dword ptr [EBX + 0xbd84],0x0    ; 004a8fe6
    MOV dword ptr [EBX + 0xbd88],0x0    ; 004a8ff0
    MOV dword ptr [EBX + 0xbd8c],0x0    ; 004a8ffa
    MOV dword ptr [EBX + 0xbd90],0x0    ; 004a9004
    MOV dword ptr [EBX + 0xbd74],0x0    ; 004a900e
    MOV dword ptr [EBX + 0xbd78],0x0    ; 004a9018
    ADD ESP,0x4                         ; 004a9022
    MOV dword ptr [EBX + 0xbd7c],0x0    ; 004a9025
    POP ESI                             ; 004a902f
    POP EBX                             ; 004a9030
    RET                                 ; 004a9031

