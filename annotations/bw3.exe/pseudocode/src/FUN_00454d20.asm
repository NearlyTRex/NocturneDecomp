; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00454d20(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Head_005ba3db
;   TerminatedCString s_Bip01_L_ForeArm_005ba3e6
;   TerminatedCString s_Bip01_R_ForeArm_005ba3f6
;   TerminatedCString s_Bip01_L_UpperArm_005ba406
;   TerminatedCString s_Bip01_R_UpperArm_005ba417
;   TerminatedCString s_Bip01_L_Foot_005ba428
;   TerminatedCString s_Bip01_R_Foot_005ba435
;   TerminatedCString s_Bip01_L_Hand_005ba442
;   TerminatedCString s_Bip01_R_Hand_005ba44f
;   TerminatedCString s_Bip01_Spine_005ba45c
;   TerminatedCString s_Bip01_Spine2_005ba468
;   undefined4 DAT_005ba475
;   TerminatedCString s_l4arm_005ba47a
;   undefined4 DAT_005ba480
;   TerminatedCString s_r4arm_005ba485
;   ... and 4 more
;
; Called Functions:
;   FUN_0040ce40
;   FUN_00489110
;   FUN_00548090
;   FUN_0054a310
;   FUN_0054e6b0
;   FUN_0054ea40
;   FUN_0054eac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00454d20
        ;   Label: FUN_00454d20
    PUSH ESI                            ; 00454d21
    PUSH EDI                            ; 00454d22
    SUB ESP,0x4                         ; 00454d23
    MOV EBX,dword ptr [ESP + 0x14]      ; 00454d26
    LEA EDI,[EBX + 0x158]               ; 00454d2a
    PUSH EDI                            ; 00454d30
    CALL FUN_0054e6b0                   ; 00454d31
        ;   XREF to: 0054e6b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e6b0()
    ADD ESP,0x4                         ; 00454d36
    PUSH EDI                            ; 00454d39
    CALL FUN_0054eac0                   ; 00454d3a
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eac0()
    ADD ESP,0x4                         ; 00454d3f
    PUSH 0x1                            ; 00454d42
    PUSH 0x5ba3db                       ; 00454d44 | = "Bip01 Head"
    PUSH EAX                            ; 00454d49
    MOV ESI,EAX                         ; 00454d4a
    CALL FUN_00548090                   ; 00454d4c
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 00454d51
    PUSH 0x1                            ; 00454d54
    PUSH 0x5ba3e6                       ; 00454d56 | = "Bip01 L ForeArm"
    PUSH ESI                            ; 00454d5b
    MOV dword ptr [EBX + 0xd0e8],EAX    ; 00454d5c
    CALL FUN_00548090                   ; 00454d62
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 00454d67
    PUSH 0x1                            ; 00454d6a
    PUSH 0x5ba3f6                       ; 00454d6c | = "Bip01 R ForeArm"
    PUSH ESI                            ; 00454d71
    MOV dword ptr [EBX + 0xd0f4],EAX    ; 00454d72
    CALL FUN_00548090                   ; 00454d78
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 00454d7d
    PUSH 0x1                            ; 00454d80
    PUSH 0x5ba406                       ; 00454d82 | = "Bip01 L UpperArm"
    PUSH ESI                            ; 00454d87
    MOV dword ptr [EBX + 0xd0f8],EAX    ; 00454d88
    CALL FUN_00548090                   ; 00454d8e
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 00454d93
    PUSH 0x1                            ; 00454d96
    PUSH 0x5ba417                       ; 00454d98 | = "Bip01 R UpperArm"
    PUSH ESI                            ; 00454d9d
    MOV dword ptr [EBX + 0xd0fc],EAX    ; 00454d9e
    CALL FUN_00548090                   ; 00454da4
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 00454da9
    PUSH 0x1                            ; 00454dac
    PUSH 0x5ba428                       ; 00454dae | = "Bip01 L Foot"
    PUSH ESI                            ; 00454db3
    MOV dword ptr [EBX + 0xd100],EAX    ; 00454db4
    CALL FUN_00548090                   ; 00454dba
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 00454dbf
    PUSH 0x1                            ; 00454dc2
    PUSH 0x5ba435                       ; 00454dc4 | = "Bip01 R Foot"
    PUSH ESI                            ; 00454dc9
    MOV dword ptr [EBX + 0xd104],EAX    ; 00454dca
    CALL FUN_00548090                   ; 00454dd0
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 00454dd5
    PUSH 0x1                            ; 00454dd8
    PUSH 0x5ba442                       ; 00454dda | = "Bip01 L Hand"
    PUSH ESI                            ; 00454ddf
    MOV dword ptr [EBX + 0xd108],EAX    ; 00454de0
    CALL FUN_00548090                   ; 00454de6
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 00454deb
    MOV dword ptr [EBX + 0xd0ec],EAX    ; 00454dee
    PUSH 0x1                            ; 00454df4
    PUSH 0x5ba44f                       ; 00454df6 | = "Bip01 R Hand"
    PUSH ESI                            ; 00454dfb
    CALL FUN_00548090                   ; 00454dfc
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 00454e01
    PUSH 0x1                            ; 00454e04
    PUSH 0x5ba45c                       ; 00454e06 | = "Bip01 Spine"
    PUSH ESI                            ; 00454e0b
    MOV dword ptr [EBX + 0xd0f0],EAX    ; 00454e0c
    CALL FUN_00548090                   ; 00454e12
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 00454e17
    PUSH 0x1                            ; 00454e1a
    PUSH 0x5ba468                       ; 00454e1c | = "Bip01 Spine2"
    PUSH ESI                            ; 00454e21
    MOV dword ptr [EBX + 0xd10c],EAX    ; 00454e22
    CALL FUN_00548090                   ; 00454e28
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 00454e2d
    PUSH EDI                            ; 00454e30
    MOV dword ptr [EBX + 0xd110],EAX    ; 00454e31
    CALL FUN_0054ea40                   ; 00454e37
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; undefined FUN_0054ea40()
    ADD ESP,0x4                         ; 00454e3c
    PUSH 0x1                            ; 00454e3f
    PUSH 0x5ba475                       ; 00454e41 | DAT_005ba475
    PUSH EAX                            ; 00454e46
    MOV ESI,EAX                         ; 00454e47
    MOV EDI,EAX                         ; 00454e49
    CALL FUN_0054a310                   ; 00454e4b
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; undefined FUN_0054a310()
    ADD ESP,0xc                         ; 00454e50
    PUSH 0x1                            ; 00454e53
    PUSH 0x5ba47a                       ; 00454e55 | = "l4arm"
    PUSH ESI                            ; 00454e5a
    MOV dword ptr [EBX + 0xd114],EAX    ; 00454e5b
    CALL FUN_0054a310                   ; 00454e61
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; undefined FUN_0054a310()
    ADD ESP,0xc                         ; 00454e66
    PUSH 0x1                            ; 00454e69
    PUSH 0x5ba480                       ; 00454e6b | DAT_005ba480
    PUSH ESI                            ; 00454e70
    MOV dword ptr [EBX + 0xd118],EAX    ; 00454e71
    CALL FUN_0054a310                   ; 00454e77
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; undefined FUN_0054a310()
    ADD ESP,0xc                         ; 00454e7c
    PUSH 0x0                            ; 00454e7f
    PUSH 0x5ba485                       ; 00454e81 | = "r4arm"
    PUSH ESI                            ; 00454e86
    MOV dword ptr [EBX + 0xd11c],EAX    ; 00454e87
    CALL FUN_0054a310                   ; 00454e8d
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; undefined FUN_0054a310()
    ADD ESP,0xc                         ; 00454e92
    MOV dword ptr [EBX + 0xd120],EAX    ; 00454e95
    TEST EAX,EAX                        ; 00454e9b
    JGE 0x00454ea9                      ; 00454e9d
        ;   XREF to: 00454ea9 (CONDITIONAL_JUMP)  ; LAB_00454ea9
    MOV dword ptr [EBX + 0xd120],0x3b   ; 00454e9f
    PUSH 0x0                            ; 00454ea9
        ;   Label: LAB_00454ea9
    PUSH 0x5ba48b                       ; 00454eab | = "waist"
    PUSH EDI                            ; 00454eb0
    CALL FUN_0054a310                   ; 00454eb1
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; undefined FUN_0054a310()
    ADD ESP,0xc                         ; 00454eb6
    PUSH 0x1                            ; 00454eb9
    PUSH 0x5ba491                       ; 00454ebb | = "torso"
    PUSH EDI                            ; 00454ec0
    MOV dword ptr [EBX + 0xd124],EAX    ; 00454ec1
    CALL FUN_0054a310                   ; 00454ec7
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; undefined FUN_0054a310()
    ADD ESP,0xc                         ; 00454ecc
    PUSH 0x1                            ; 00454ecf
    PUSH 0x5ba497                       ; 00454ed1 | DAT_005ba497
    PUSH EDI                            ; 00454ed6
    MOV dword ptr [EBX + 0xd128],EAX    ; 00454ed7
    CALL FUN_0054a310                   ; 00454edd
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; undefined FUN_0054a310()
    MOV dword ptr [EBX + 0x2384],0x0    ; 00454ee2
    MOV dword ptr [EBX + 0xd12c],EAX    ; 00454eec
    MOV EAX,dword ptr [EBX + 0xd0ec]    ; 00454ef2
    MOV dword ptr [EBX + 0x25a8],EAX    ; 00454ef8
    MOV EAX,dword ptr [EBX + 0xd118]    ; 00454efe
    MOV dword ptr [EBX + 0x25ac],EAX    ; 00454f04
    MOV EAX,dword ptr [EBX + 0xd0f0]    ; 00454f0a
    MOV dword ptr [EBX + 0x2620],EAX    ; 00454f10
    ADD ESP,0xc                         ; 00454f16
    MOV EAX,dword ptr [EBX + 0xd120]    ; 00454f19
    PUSH EBX                            ; 00454f1f
    MOV dword ptr [EBX + 0x2624],EAX    ; 00454f20
    CALL FUN_00489110                   ; 00454f26
        ;   XREF to: 00489110 (UNCONDITIONAL_CALL)  ; undefined FUN_00489110()
    MOV ECX,dword ptr [EBX + 0xd0d8]    ; 00454f2b
    ADD ESP,0x4                         ; 00454f31
    TEST ECX,ECX                        ; 00454f34
    SETNZ AL                            ; 00454f36
    PUSH 0x3f800000                     ; 00454f39
    AND EAX,0xff                        ; 00454f3e
    PUSH 0x0                            ; 00454f43
    MOV dword ptr [EBX + 0xfc],EAX      ; 00454f45
    CALL FUN_0040ce40                   ; 00454f4b
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    MOV dword ptr [ESP + 0x8],EAX       ; 00454f50
    MOV ESI,dword ptr [EBX + 0xd124]    ; 00454f54
    MOV EAX,dword ptr [ESP + 0x8]       ; 00454f5a
    MOV dword ptr [EBX + 0xd140],EAX    ; 00454f5e
    ADD ESP,0x8                         ; 00454f64
    TEST ESI,ESI                        ; 00454f67
    JL 0x00454f7a                       ; 00454f69
        ;   XREF to: 00454f7a (CONDITIONAL_JUMP)  ; LAB_00454f7a
    FLD float ptr [EBX + 0x3280]        ; 00454f6b
    FLDZ                                ; 00454f71
    FCOMPP                              ; 00454f73
    FNSTSW AX                           ; 00454f75
    SAHF                                ; 00454f77
    JA 0x00454fa9                       ; 00454f78
        ;   XREF to: 00454fa9 (CONDITIONAL_JUMP)  ; LAB_00454fa9
    MOV dword ptr [EBX + 0xd0e4],0x0    ; 00454f7a
        ;   Label: LAB_00454f7a
    MOV dword ptr [EBX + 0xd138],0x0    ; 00454f84
    MOV dword ptr [EBX + 0xd13c],0x0    ; 00454f8e
    MOV dword ptr [EBX + 0xd134],0x0    ; 00454f98
    ADD ESP,0x4                         ; 00454fa2
    POP EDI                             ; 00454fa5
    POP ESI                             ; 00454fa6
    POP EBX                             ; 00454fa7
    RET                                 ; 00454fa8
    FLD float ptr [EBX + 0x2490]        ; 00454fa9
        ;   Label: LAB_00454fa9
    FADD double ptr [0x005ba4a2]        ; 00454faf | DAT_005ba4a2
    FSTP float ptr [EBX + 0x3280]       ; 00454fb5
    JMP 0x00454f7a                      ; 00454fbb
        ;   XREF to: 00454f7a (UNCONDITIONAL_JUMP)  ; LAB_00454f7a

