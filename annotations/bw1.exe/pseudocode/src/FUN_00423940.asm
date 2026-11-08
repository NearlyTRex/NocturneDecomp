; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00423940(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Head_005d4e01
;   TerminatedCString s_Bip01_L_ForeArm_005d4e0c
;   TerminatedCString s_Bip01_R_ForeArm_005d4e1c
;   TerminatedCString s_Bip01_L_Foot_005d4e2c
;   TerminatedCString s_Bip01_R_Foot_005d4e39
;   TerminatedCString s_Bip01_L_Hand_005d4e46
;   TerminatedCString s_Bip01_R_Hand_005d4e53
;   TerminatedCString s_Bip01_L_UpperArm_005d4e60
;   TerminatedCString s_Bip01_R_UpperArm_005d4e71
;   TerminatedCString s_Bip01_Spine_005d4e82
;   TerminatedCString s_Bip01_Spine2_005d4e8e
;   TerminatedCString s_lshoulderpiece_005d4e9b
;   TerminatedCString s_l4armpiece_005d4eaa
;   TerminatedCString s_rshoulderpiece_005d4eb5
;   TerminatedCString s_r4armpiece_005d4ec4
;   ... and 16 more
;
; Called Functions:
;   FUN_0040cc00
;   FUN_004a0510
;   FUN_005634f0
;   FUN_00565780
;   FUN_00569b20
;   FUN_00569eb0
;   FUN_00569f30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00423940
        ;   Label: FUN_00423940
    PUSH ESI                            ; 00423941
    SUB ESP,0x4                         ; 00423942
    MOV EBX,dword ptr [ESP + 0x10]      ; 00423945
    PUSH EDI                            ; 00423949
    LEA EDI,[EBX + 0x158]               ; 0042394a
    PUSH EDI                            ; 00423950
    CALL FUN_00569b20                   ; 00423951
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; undefined FUN_00569b20()
    ADD ESP,0x4                         ; 00423956
    PUSH EDI                            ; 00423959
    MOV dword ptr [EBX + 0xc28c],0x0    ; 0042395a
    CALL FUN_00569f30                   ; 00423964
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f30()
    ADD ESP,0x4                         ; 00423969
    PUSH 0x1                            ; 0042396c
    PUSH 0x5d4e01                       ; 0042396e | = "Bip01 Head"
    PUSH EAX                            ; 00423973
    MOV ESI,EAX                         ; 00423974
    CALL FUN_005634f0                   ; 00423976
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0042397b
    PUSH 0x1                            ; 0042397e
    PUSH 0x5d4e0c                       ; 00423980 | = "Bip01 L ForeArm"
    PUSH ESI                            ; 00423985
    MOV [0x007c5388],EAX                ; 00423986 | DAT_007c5388
    CALL FUN_005634f0                   ; 0042398b
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 00423990
    PUSH 0x1                            ; 00423993
    PUSH 0x5d4e1c                       ; 00423995 | = "Bip01 R ForeArm"
    PUSH ESI                            ; 0042399a
    MOV [0x007c5394],EAX                ; 0042399b | DAT_007c5394
    CALL FUN_005634f0                   ; 004239a0
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004239a5
    PUSH 0x1                            ; 004239a8
    PUSH 0x5d4e2c                       ; 004239aa | = "Bip01 L Foot"
    PUSH ESI                            ; 004239af
    MOV [0x007c5398],EAX                ; 004239b0 | DAT_007c5398
    CALL FUN_005634f0                   ; 004239b5
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004239ba
    PUSH 0x1                            ; 004239bd
    PUSH 0x5d4e39                       ; 004239bf | = "Bip01 R Foot"
    PUSH ESI                            ; 004239c4
    MOV [0x007c53a4],EAX                ; 004239c5 | DAT_007c53a4
    CALL FUN_005634f0                   ; 004239ca
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004239cf
    PUSH 0x1                            ; 004239d2
    PUSH 0x5d4e46                       ; 004239d4 | = "Bip01 L Hand"
    PUSH ESI                            ; 004239d9
    MOV [0x007c53a8],EAX                ; 004239da | DAT_007c53a8
    CALL FUN_005634f0                   ; 004239df
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004239e4
    PUSH 0x1                            ; 004239e7
    PUSH 0x5d4e53                       ; 004239e9 | = "Bip01 R Hand"
    PUSH ESI                            ; 004239ee
    MOV [0x007c538c],EAX                ; 004239ef | DAT_007c538c
    CALL FUN_005634f0                   ; 004239f4
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004239f9
    PUSH 0x1                            ; 004239fc
    PUSH 0x5d4e60                       ; 004239fe | = "Bip01 L UpperArm"
    PUSH ESI                            ; 00423a03
    MOV [0x007c5390],EAX                ; 00423a04 | DAT_007c5390
    CALL FUN_005634f0                   ; 00423a09
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 00423a0e
    MOV [0x007c539c],EAX                ; 00423a11 | DAT_007c539c
    PUSH 0x1                            ; 00423a16
    PUSH 0x5d4e71                       ; 00423a18 | = "Bip01 R UpperArm"
    PUSH ESI                            ; 00423a1d
    CALL FUN_005634f0                   ; 00423a1e
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 00423a23
    PUSH 0x1                            ; 00423a26
    PUSH 0x5d4e82                       ; 00423a28 | = "Bip01 Spine"
    PUSH ESI                            ; 00423a2d
    MOV [0x007c53a0],EAX                ; 00423a2e | DAT_007c53a0
    CALL FUN_005634f0                   ; 00423a33
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 00423a38
    PUSH 0x1                            ; 00423a3b
    PUSH 0x5d4e8e                       ; 00423a3d | = "Bip01 Spine2"
    PUSH ESI                            ; 00423a42
    MOV [0x007c53ac],EAX                ; 00423a43 | DAT_007c53ac
    CALL FUN_005634f0                   ; 00423a48
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 00423a4d
    PUSH EDI                            ; 00423a50
    MOV [0x007c53b0],EAX                ; 00423a51 | DAT_007c53b0
    CALL FUN_00569eb0                   ; 00423a56
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00569eb0()
    ADD ESP,0x4                         ; 00423a5b
    PUSH 0x1                            ; 00423a5e
    PUSH 0x5d4e9b                       ; 00423a60 | = "lshoulderpiece"
    PUSH EAX                            ; 00423a65
    MOV ESI,EAX                         ; 00423a66
    CALL FUN_00565780                   ; 00423a68
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 00423a6d
    PUSH 0x1                            ; 00423a70
    PUSH 0x5d4eaa                       ; 00423a72 | = "l4armpiece"
    PUSH ESI                            ; 00423a77
    MOV dword ptr [EBX + 0xc268],EAX    ; 00423a78
    CALL FUN_00565780                   ; 00423a7e
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 00423a83
    PUSH 0x1                            ; 00423a86
    PUSH 0x5d4eb5                       ; 00423a88 | = "rshoulderpiece"
    PUSH ESI                            ; 00423a8d
    MOV dword ptr [EBX + 0xc26c],EAX    ; 00423a8e
    CALL FUN_00565780                   ; 00423a94
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 00423a99
    PUSH 0x1                            ; 00423a9c
    PUSH 0x5d4ec4                       ; 00423a9e | = "r4armpiece"
    PUSH ESI                            ; 00423aa3
    MOV dword ptr [EBX + 0xc270],EAX    ; 00423aa4
    CALL FUN_00565780                   ; 00423aaa
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 00423aaf
    PUSH 0x1                            ; 00423ab2
    PUSH 0x5d4ecf                       ; 00423ab4 | = "lshinpiece"
    PUSH ESI                            ; 00423ab9
    MOV dword ptr [EBX + 0xc274],EAX    ; 00423aba
    CALL FUN_00565780                   ; 00423ac0
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 00423ac5
    PUSH 0x1                            ; 00423ac8
    PUSH 0x5d4eda                       ; 00423aca | = "rshinpiece"
    PUSH ESI                            ; 00423acf
    MOV dword ptr [EBX + 0xc278],EAX    ; 00423ad0
    CALL FUN_00565780                   ; 00423ad6
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 00423adb
    MOV dword ptr [EBX + 0xc27c],EAX    ; 00423ade
    POP EDI                             ; 00423ae4
    PUSH 0x1                            ; 00423ae5
    PUSH 0x5d4ee5                       ; 00423ae7 | = "torsopiece"
    PUSH ESI                            ; 00423aec
    CALL FUN_00565780                   ; 00423aed
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 00423af2
    PUSH 0x1                            ; 00423af5
    PUSH 0x5d4ef0                       ; 00423af7 | = "lowerbodypiece"
    PUSH ESI                            ; 00423afc
    MOV dword ptr [EBX + 0xc280],EAX    ; 00423afd
    CALL FUN_00565780                   ; 00423b03
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 00423b08
    PUSH 0x1                            ; 00423b0b
    PUSH 0x5d4eff                       ; 00423b0d | = "headpiece"
    PUSH ESI                            ; 00423b12
    MOV dword ptr [EBX + 0xc284],EAX    ; 00423b13
    CALL FUN_00565780                   ; 00423b19
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 00423b1e
    PUSH EBX                            ; 00423b21
    MOV dword ptr [EBX + 0xc288],EAX    ; 00423b22
    CALL FUN_004a0510                   ; 00423b28
        ;   XREF to: 004a0510 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0510()
    ADD ESP,0x4                         ; 00423b2d
    PUSH 0x41a00000                     ; 00423b30
    PUSH 0x40000000                     ; 00423b35
    CALL FUN_0040cc00                   ; 00423b3a
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [EBX + 0xc294],0x0    ; 00423b3f
    MOV dword ptr [ESP + 0x8],EAX       ; 00423b49
    MOV dword ptr [EBX + 0xc298],0x0    ; 00423b4d
    MOV EAX,dword ptr [ESP + 0x8]       ; 00423b57
    MOV dword ptr [EBX + 0xc290],EAX    ; 00423b5b
    ADD ESP,0x8                         ; 00423b61
    ADD ESP,0x4                         ; 00423b64
    POP ESI                             ; 00423b67
    POP EBX                             ; 00423b68
    RET                                 ; 00423b69

