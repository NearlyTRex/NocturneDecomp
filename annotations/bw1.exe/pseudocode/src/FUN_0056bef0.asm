; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056bef0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Head_005f2862
;   TerminatedCString s_Bip01_L_ForeArm_005f286d
;   TerminatedCString s_Bip01_R_ForeArm_005f287d
;   TerminatedCString s_Bip01_L_UpperArm_005f288d
;   TerminatedCString s_Bip01_R_UpperArm_005f289e
;   TerminatedCString s_Bip01_L_Foot_005f28af
;   TerminatedCString s_Bip01_R_Foot_005f28bc
;   TerminatedCString s_Bip01_L_Hand_005f28c9
;   TerminatedCString s_Bip01_R_Hand_005f28d6
;   TerminatedCString s_Bip01_Spine_005f28e3
;   TerminatedCString s_Bip01_Spine1_005f28ef
;   TerminatedCString s_Bip01_Spine2_005f28fc
;   TerminatedCString s_Bip01_Head_005f2909
;   TerminatedCString s_Bip01_L_UpperArm_005f2914
;   TerminatedCString s_Bip01_R_UpperArm_005f2925
;   ... and 27 more
;
; Called Functions:
;   FUN_004a0510
;   FUN_005634f0
;   FUN_00565780
;   FUN_00569b20
;   FUN_00569eb0
;   FUN_00569f30
;   FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056bef0
        ;   Label: FUN_0056bef0
    PUSH ESI                            ; 0056bef1
    PUSH EDI                            ; 0056bef2
    PUSH EBP                            ; 0056bef3
    MOV EBP,ESP                         ; 0056bef4
    MOV EBX,dword ptr [EBP + 0x14]      ; 0056bef6
    PUSH EBX                            ; 0056bef9
    CALL FUN_004a0510                   ; 0056befa
        ;   XREF to: 004a0510 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0510()
    ADD ESP,0x4                         ; 0056beff
    LEA EDI,[EBX + 0x158]               ; 0056bf02
    PUSH EDI                            ; 0056bf08
    CALL FUN_00569b20                   ; 0056bf09
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; undefined FUN_00569b20()
    ADD ESP,0x4                         ; 0056bf0e
    PUSH EDI                            ; 0056bf11
    CALL FUN_00569f30                   ; 0056bf12
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f30()
    ADD ESP,0x4                         ; 0056bf17
    PUSH 0x1                            ; 0056bf1a
    PUSH 0x5f2862                       ; 0056bf1c | = "Bip01 Head"
    PUSH EAX                            ; 0056bf21
    MOV ESI,EAX                         ; 0056bf22
    CALL FUN_005634f0                   ; 0056bf24
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0056bf29
    PUSH 0x1                            ; 0056bf2c
    PUSH 0x5f286d                       ; 0056bf2e | = "Bip01 L ForeArm"
    PUSH ESI                            ; 0056bf33
    MOV [0x02c5fcd8],EAX                ; 0056bf34 | DAT_02c5fcd8
    CALL FUN_005634f0                   ; 0056bf39
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0056bf3e
    PUSH 0x1                            ; 0056bf41
    PUSH 0x5f287d                       ; 0056bf43 | = "Bip01 R ForeArm"
    PUSH ESI                            ; 0056bf48
    MOV [0x02c5fce4],EAX                ; 0056bf49 | DAT_02c5fce4
    CALL FUN_005634f0                   ; 0056bf4e
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0056bf53
    PUSH 0x1                            ; 0056bf56
    PUSH 0x5f288d                       ; 0056bf58 | = "Bip01 L UpperArm"
    PUSH ESI                            ; 0056bf5d
    MOV [0x02c5fce8],EAX                ; 0056bf5e | DAT_02c5fce8
    CALL FUN_005634f0                   ; 0056bf63
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0056bf68
    PUSH 0x1                            ; 0056bf6b
    PUSH 0x5f289e                       ; 0056bf6d | = "Bip01 R UpperArm"
    PUSH ESI                            ; 0056bf72
    MOV [0x02c5fcec],EAX                ; 0056bf73 | DAT_02c5fcec
    CALL FUN_005634f0                   ; 0056bf78
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0056bf7d
    PUSH 0x1                            ; 0056bf80
    PUSH 0x5f28af                       ; 0056bf82 | = "Bip01 L Foot"
    PUSH ESI                            ; 0056bf87
    MOV [0x02c5fcf0],EAX                ; 0056bf88 | DAT_02c5fcf0
    CALL FUN_005634f0                   ; 0056bf8d
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0056bf92
    PUSH 0x1                            ; 0056bf95
    PUSH 0x5f28bc                       ; 0056bf97 | = "Bip01 R Foot"
    PUSH ESI                            ; 0056bf9c
    MOV [0x02c5fcf4],EAX                ; 0056bf9d | DAT_02c5fcf4
    CALL FUN_005634f0                   ; 0056bfa2
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0056bfa7
    PUSH 0x1                            ; 0056bfaa
    PUSH 0x5f28c9                       ; 0056bfac | = "Bip01 L Hand"
    PUSH ESI                            ; 0056bfb1
    MOV [0x02c5fcf8],EAX                ; 0056bfb2 | DAT_02c5fcf8
    CALL FUN_005634f0                   ; 0056bfb7
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0056bfbc
    MOV [0x02c5fcdc],EAX                ; 0056bfbf | DAT_02c5fcdc
    PUSH 0x1                            ; 0056bfc4
    PUSH 0x5f28d6                       ; 0056bfc6 | = "Bip01 R Hand"
    PUSH ESI                            ; 0056bfcb
    CALL FUN_005634f0                   ; 0056bfcc
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0056bfd1
    PUSH 0x1                            ; 0056bfd4
    PUSH 0x5f28e3                       ; 0056bfd6 | = "Bip01 Spine"
    PUSH ESI                            ; 0056bfdb
    MOV [0x02c5fce0],EAX                ; 0056bfdc | DAT_02c5fce0
    CALL FUN_005634f0                   ; 0056bfe1
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0056bfe6
    PUSH 0x1                            ; 0056bfe9
    PUSH 0x5f28ef                       ; 0056bfeb | = "Bip01 Spine1"
    PUSH ESI                            ; 0056bff0
    MOV [0x02c5fcfc],EAX                ; 0056bff1 | DAT_02c5fcfc
    CALL FUN_005634f0                   ; 0056bff6
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0056bffb
    PUSH 0x1                            ; 0056bffe
    PUSH 0x5f28fc                       ; 0056c000 | = "Bip01 Spine2"
    PUSH ESI                            ; 0056c005
    MOV [0x02c5fd00],EAX                ; 0056c006 | DAT_02c5fd00
    CALL FUN_005634f0                   ; 0056c00b
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0056c010
    PUSH 0x1                            ; 0056c013
    PUSH 0x5f2909                       ; 0056c015 | = "Bip01 Head"
    PUSH ESI                            ; 0056c01a
    MOV [0x02c5fd04],EAX                ; 0056c01b | DAT_02c5fd04
    CALL FUN_005634f0                   ; 0056c020
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0056c025
    PUSH 0x1                            ; 0056c028
    PUSH 0x5f2914                       ; 0056c02a | = "Bip01 L UpperArm"
    PUSH ESI                            ; 0056c02f
    MOV [0x02c5fcd8],EAX                ; 0056c030 | DAT_02c5fcd8
    CALL FUN_005634f0                   ; 0056c035
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0056c03a
    PUSH 0x1                            ; 0056c03d
    PUSH 0x5f2925                       ; 0056c03f | = "Bip01 R UpperArm"
    PUSH ESI                            ; 0056c044
    MOV [0x02c5fcec],EAX                ; 0056c045 | DAT_02c5fcec
    CALL FUN_005634f0                   ; 0056c04a
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0056c04f
    PUSH 0x1                            ; 0056c052
    PUSH 0x5f2936                       ; 0056c054 | = "Bip01 Spine"
    PUSH ESI                            ; 0056c059
    MOV [0x02c5fcf0],EAX                ; 0056c05a | DAT_02c5fcf0
    CALL FUN_005634f0                   ; 0056c05f
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0056c064
    PUSH 0x1                            ; 0056c067
    PUSH 0x5f2942                       ; 0056c069 | = "Bip01 Spine2"
    PUSH ESI                            ; 0056c06e
    MOV [0x02c5fcfc],EAX                ; 0056c06f | DAT_02c5fcfc
    CALL FUN_005634f0                   ; 0056c074
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0056c079
    PUSH EDI                            ; 0056c07c
    MOV [0x02c5fd04],EAX                ; 0056c07d | DAT_02c5fd04
    CALL FUN_00569eb0                   ; 0056c082
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00569eb0()
    MOV ESI,EAX                         ; 0056c087
    ADD ESP,0x4                         ; 0056c089
    PUSH 0x1                            ; 0056c08c
    PUSH 0x5f294f                       ; 0056c08e | = "larm01"
    PUSH EAX                            ; 0056c093
    CALL FUN_00565780                   ; 0056c094
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 0056c099
    PUSH 0x1                            ; 0056c09c
    PUSH 0x5f2956                       ; 0056c09e | = "l4arm01"
    PUSH ESI                            ; 0056c0a3
    MOV dword ptr [EBX + 0xc270],EAX    ; 0056c0a4
    CALL FUN_00565780                   ; 0056c0aa
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 0056c0af
    PUSH 0x1                            ; 0056c0b2
    PUSH 0x5f295e                       ; 0056c0b4 | = "rarm01"
    PUSH ESI                            ; 0056c0b9
    MOV dword ptr [EBX + 0xc274],EAX    ; 0056c0ba
    CALL FUN_00565780                   ; 0056c0c0
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 0056c0c5
    PUSH 0x1                            ; 0056c0c8
    PUSH 0x5f2965                       ; 0056c0ca | = "r4arm01"
    PUSH ESI                            ; 0056c0cf
    MOV dword ptr [EBX + 0xc278],EAX    ; 0056c0d0
    CALL FUN_00565780                   ; 0056c0d6
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 0056c0db
    PUSH 0x1                            ; 0056c0de
    PUSH 0x5f296d                       ; 0056c0e0 | = "rthigh01"
    PUSH ESI                            ; 0056c0e5
    MOV dword ptr [EBX + 0xc27c],EAX    ; 0056c0e6
    CALL FUN_00565780                   ; 0056c0ec
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 0056c0f1
    PUSH 0x1                            ; 0056c0f4
    PUSH 0x5f2976                       ; 0056c0f6 | = "rshin01"
    PUSH ESI                            ; 0056c0fb
    MOV dword ptr [EBX + 0xc280],EAX    ; 0056c0fc
    CALL FUN_00565780                   ; 0056c102
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 0056c107
    PUSH 0x1                            ; 0056c10a
    PUSH 0x5f297e                       ; 0056c10c | = "lthigh01"
    PUSH ESI                            ; 0056c111
    MOV dword ptr [EBX + 0xc284],EAX    ; 0056c112
    CALL FUN_00565780                   ; 0056c118
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 0056c11d
    PUSH 0x1                            ; 0056c120
    PUSH 0x5f2987                       ; 0056c122 | = "lshin01"
    PUSH ESI                            ; 0056c127
    MOV dword ptr [EBX + 0xc288],EAX    ; 0056c128
    CALL FUN_00565780                   ; 0056c12e
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 0056c133
    PUSH 0x1                            ; 0056c136
    PUSH 0x5f298f                       ; 0056c138 | = "ass01"
    PUSH ESI                            ; 0056c13d
    MOV dword ptr [EBX + 0xc28c],EAX    ; 0056c13e
    CALL FUN_00565780                   ; 0056c144
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 0056c149
    MOV dword ptr [EBX + 0xc290],EAX    ; 0056c14c
    PUSH 0x1                            ; 0056c152
    PUSH 0x5f2995                       ; 0056c154 | = "torso01"
    PUSH ESI                            ; 0056c159
    CALL FUN_00565780                   ; 0056c15a
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 0056c15f
    PUSH 0x1                            ; 0056c162
    PUSH 0x5f299d                       ; 0056c164 | = "head01"
    PUSH ESI                            ; 0056c169
    MOV dword ptr [EBX + 0xc294],EAX    ; 0056c16a
    CALL FUN_00565780                   ; 0056c170
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    MOV dword ptr [EBX + 0xc29c],0x0    ; 0056c175
    ADD ESP,0xc                         ; 0056c17f
    MOV dword ptr [EBX + 0xc298],EAX    ; 0056c182
    PUSH 0x5f29a4                       ; 0056c188 | = "smiley2.dfm"
    LEA EAX,[EBX + 0x24a8]              ; 0056c18d
    MOV dword ptr [EBX + 0xc2a0],0x0    ; 0056c193
    PUSH EAX                            ; 0056c19d
    MOV dword ptr [EBX + 0xc2a8],0x1    ; 0056c19e
    CALL FUN_005c04e0                   ; 0056c1a8
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 0056c1ad
    TEST EAX,EAX                        ; 0056c1b0
    JNZ 0x0056c1be                      ; 0056c1b2
        ;   XREF to: 0056c1be (CONDITIONAL_JUMP)  ; LAB_0056c1be
    MOV dword ptr [EBX + 0xc2a8],0x2    ; 0056c1b4
    PUSH 0x5f29b0                       ; 0056c1be | = "smiley3.dfm"
        ;   Label: LAB_0056c1be
    LEA EAX,[EBX + 0x24a8]              ; 0056c1c3
    PUSH EAX                            ; 0056c1c9
    CALL FUN_005c04e0                   ; 0056c1ca
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 0056c1cf
    TEST EAX,EAX                        ; 0056c1d2
    JZ 0x0056c1db                       ; 0056c1d4
        ;   XREF to: 0056c1db (CONDITIONAL_JUMP)  ; LAB_0056c1db
    POP EBP                             ; 0056c1d6
    POP EDI                             ; 0056c1d7
    POP ESI                             ; 0056c1d8
    POP EBX                             ; 0056c1d9
    RET                                 ; 0056c1da
    MOV dword ptr [EBX + 0xc2a8],0x3    ; 0056c1db
        ;   Label: LAB_0056c1db
    MOV dword ptr [EBX + 0x27c0],EAX    ; 0056c1e5
    POP EBP                             ; 0056c1eb
    POP EDI                             ; 0056c1ec
    POP ESI                             ; 0056c1ed
    POP EBX                             ; 0056c1ee
    RET                                 ; 0056c1ef

