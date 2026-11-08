; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004bfbe0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Head_005d8c19
;   TerminatedCString s_Bip01_L_ForeArm_005d8c24
;   TerminatedCString s_Bip01_R_ForeArm_005d8c34
;   TerminatedCString s_Bip01_L_UpperArm_005d8c44
;   TerminatedCString s_Bip01_R_UpperArm_005d8c55
;   TerminatedCString s_Bip01_L_Foot_005d8c66
;   TerminatedCString s_Bip01_R_Foot_005d8c73
;   TerminatedCString s_Bip01_L_Hand_005d8c80
;   TerminatedCString s_Bip01_R_Hand_005d8c8d
;   TerminatedCString s_Bip01_Spine_005d8c9a
;   TerminatedCString s_Bip01_Spine1_005d8ca6
;   TerminatedCString s_Bip01_Spine2_005d8cb3
;   TerminatedCString s_Bip01_Head_005d8cc0
;   TerminatedCString s_Bip01_L_UpperArm_005d8ccb
;   TerminatedCString s_Bip01_R_UpperArm_005d8cdc
;   ... and 26 more
;
; Called Functions:
;   FUN_00487eb0
;   FUN_00540e80
;   FUN_00543100
;   FUN_00547480
;   FUN_00547810
;   FUN_00547890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bfbe0
        ;   Label: FUN_004bfbe0
    PUSH ESI                            ; 004bfbe1
    PUSH EDI                            ; 004bfbe2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004bfbe3
    PUSH ESI                            ; 004bfbe7
    CALL FUN_00487eb0                   ; 004bfbe8
        ;   XREF to: 00487eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00487eb0()
    ADD ESP,0x4                         ; 004bfbed
    LEA EDI,[ESI + 0x2b4]               ; 004bfbf0
    PUSH EDI                            ; 004bfbf6
    CALL FUN_00547480                   ; 004bfbf7
        ;   XREF to: 00547480 (UNCONDITIONAL_CALL)  ; undefined FUN_00547480()
    ADD ESP,0x4                         ; 004bfbfc
    PUSH EDI                            ; 004bfbff
    CALL FUN_00547890                   ; 004bfc00
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; undefined FUN_00547890()
    ADD ESP,0x4                         ; 004bfc05
    PUSH 0x1                            ; 004bfc08
    PUSH 0x5d8c19                       ; 004bfc0a | = "Bip01 Head"
    PUSH EAX                            ; 004bfc0f
    MOV EBX,EAX                         ; 004bfc10
    CALL FUN_00540e80                   ; 004bfc12
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 004bfc17
    PUSH 0x1                            ; 004bfc1a
    PUSH 0x5d8c24                       ; 004bfc1c | = "Bip01 L ForeArm"
    PUSH EBX                            ; 004bfc21
    MOV [0x01cb8120],EAX                ; 004bfc22 | DAT_01cb8120
    CALL FUN_00540e80                   ; 004bfc27
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 004bfc2c
    PUSH 0x1                            ; 004bfc2f
    PUSH 0x5d8c34                       ; 004bfc31 | = "Bip01 R ForeArm"
    PUSH EBX                            ; 004bfc36
    MOV [0x01cb812c],EAX                ; 004bfc37 | DAT_01cb812c
    CALL FUN_00540e80                   ; 004bfc3c
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 004bfc41
    PUSH 0x1                            ; 004bfc44
    PUSH 0x5d8c44                       ; 004bfc46 | = "Bip01 L UpperArm"
    PUSH EBX                            ; 004bfc4b
    MOV [0x01cb8130],EAX                ; 004bfc4c | DAT_01cb8130
    CALL FUN_00540e80                   ; 004bfc51
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 004bfc56
    PUSH 0x1                            ; 004bfc59
    PUSH 0x5d8c55                       ; 004bfc5b | = "Bip01 R UpperArm"
    PUSH EBX                            ; 004bfc60
    MOV [0x01cb8134],EAX                ; 004bfc61 | DAT_01cb8134
    CALL FUN_00540e80                   ; 004bfc66
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 004bfc6b
    PUSH 0x1                            ; 004bfc6e
    PUSH 0x5d8c66                       ; 004bfc70 | = "Bip01 L Foot"
    PUSH EBX                            ; 004bfc75
    MOV [0x01cb8138],EAX                ; 004bfc76 | DAT_01cb8138
    CALL FUN_00540e80                   ; 004bfc7b
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 004bfc80
    PUSH 0x1                            ; 004bfc83
    PUSH 0x5d8c73                       ; 004bfc85 | = "Bip01 R Foot"
    PUSH EBX                            ; 004bfc8a
    MOV [0x01cb813c],EAX                ; 004bfc8b | DAT_01cb813c
    CALL FUN_00540e80                   ; 004bfc90
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 004bfc95
    PUSH 0x1                            ; 004bfc98
    PUSH 0x5d8c80                       ; 004bfc9a | = "Bip01 L Hand"
    PUSH EBX                            ; 004bfc9f
    MOV [0x01cb8140],EAX                ; 004bfca0 | DAT_01cb8140
    CALL FUN_00540e80                   ; 004bfca5
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 004bfcaa
    MOV [0x01cb8124],EAX                ; 004bfcad | DAT_01cb8124
    PUSH 0x1                            ; 004bfcb2
    PUSH 0x5d8c8d                       ; 004bfcb4 | = "Bip01 R Hand"
    PUSH EBX                            ; 004bfcb9
    CALL FUN_00540e80                   ; 004bfcba
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 004bfcbf
    PUSH 0x1                            ; 004bfcc2
    PUSH 0x5d8c9a                       ; 004bfcc4 | = "Bip01 Spine"
    PUSH EBX                            ; 004bfcc9
    MOV [0x01cb8128],EAX                ; 004bfcca | DAT_01cb8128
    CALL FUN_00540e80                   ; 004bfccf
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 004bfcd4
    PUSH 0x1                            ; 004bfcd7
    PUSH 0x5d8ca6                       ; 004bfcd9 | = "Bip01 Spine1"
    PUSH EBX                            ; 004bfcde
    MOV [0x01cb8144],EAX                ; 004bfcdf | DAT_01cb8144
    CALL FUN_00540e80                   ; 004bfce4
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 004bfce9
    PUSH 0x1                            ; 004bfcec
    PUSH 0x5d8cb3                       ; 004bfcee | = "Bip01 Spine2"
    PUSH EBX                            ; 004bfcf3
    MOV [0x01cb8148],EAX                ; 004bfcf4 | DAT_01cb8148
    CALL FUN_00540e80                   ; 004bfcf9
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 004bfcfe
    PUSH 0x1                            ; 004bfd01
    PUSH 0x5d8cc0                       ; 004bfd03 | = "Bip01 Head"
    PUSH EBX                            ; 004bfd08
    MOV [0x01cb814c],EAX                ; 004bfd09 | DAT_01cb814c
    CALL FUN_00540e80                   ; 004bfd0e
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 004bfd13
    PUSH 0x1                            ; 004bfd16
    PUSH 0x5d8ccb                       ; 004bfd18 | = "Bip01 L UpperArm"
    PUSH EBX                            ; 004bfd1d
    MOV [0x01cb8120],EAX                ; 004bfd1e | DAT_01cb8120
    CALL FUN_00540e80                   ; 004bfd23
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 004bfd28
    PUSH 0x1                            ; 004bfd2b
    PUSH 0x5d8cdc                       ; 004bfd2d | = "Bip01 R UpperArm"
    PUSH EBX                            ; 004bfd32
    MOV [0x01cb8134],EAX                ; 004bfd33 | DAT_01cb8134
    CALL FUN_00540e80                   ; 004bfd38
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 004bfd3d
    PUSH 0x1                            ; 004bfd40
    PUSH 0x5d8ced                       ; 004bfd42 | = "Bip01 Spine"
    PUSH EBX                            ; 004bfd47
    MOV [0x01cb8138],EAX                ; 004bfd48 | DAT_01cb8138
    CALL FUN_00540e80                   ; 004bfd4d
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 004bfd52
    PUSH 0x1                            ; 004bfd55
    PUSH 0x5d8cf9                       ; 004bfd57 | = "Bip01 Spine2"
    PUSH EBX                            ; 004bfd5c
    MOV [0x01cb8144],EAX                ; 004bfd5d | DAT_01cb8144
    CALL FUN_00540e80                   ; 004bfd62
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 004bfd67
    PUSH EDI                            ; 004bfd6a
    MOV [0x01cb814c],EAX                ; 004bfd6b | DAT_01cb814c
    CALL FUN_00547810                   ; 004bfd70
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; undefined FUN_00547810()
    MOV EBX,EAX                         ; 004bfd75
    ADD ESP,0x4                         ; 004bfd77
    PUSH 0x1                            ; 004bfd7a
    PUSH 0x5d8d06                       ; 004bfd7c | = "larm01"
    PUSH EAX                            ; 004bfd81
    CALL FUN_00543100                   ; 004bfd82
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; undefined FUN_00543100()
    ADD ESP,0xc                         ; 004bfd87
    PUSH 0x1                            ; 004bfd8a
    PUSH 0x5d8d0d                       ; 004bfd8c | = "l4arm01"
    PUSH EBX                            ; 004bfd91
    MOV dword ptr [ESI + 0x10af8],EAX   ; 004bfd92
    CALL FUN_00543100                   ; 004bfd98
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; undefined FUN_00543100()
    ADD ESP,0xc                         ; 004bfd9d
    PUSH 0x1                            ; 004bfda0
    PUSH 0x5d8d15                       ; 004bfda2 | = "rarm01"
    PUSH EBX                            ; 004bfda7
    MOV dword ptr [ESI + 0x10afc],EAX   ; 004bfda8
    CALL FUN_00543100                   ; 004bfdae
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; undefined FUN_00543100()
    ADD ESP,0xc                         ; 004bfdb3
    PUSH 0x1                            ; 004bfdb6
    PUSH 0x5d8d1c                       ; 004bfdb8 | = "r4arm01"
    PUSH EBX                            ; 004bfdbd
    MOV dword ptr [ESI + 0x10b00],EAX   ; 004bfdbe
    CALL FUN_00543100                   ; 004bfdc4
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; undefined FUN_00543100()
    ADD ESP,0xc                         ; 004bfdc9
    PUSH 0x1                            ; 004bfdcc
    PUSH 0x5d8d24                       ; 004bfdce | = "rthigh01"
    PUSH EBX                            ; 004bfdd3
    MOV dword ptr [ESI + 0x10b04],EAX   ; 004bfdd4
    CALL FUN_00543100                   ; 004bfdda
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; undefined FUN_00543100()
    ADD ESP,0xc                         ; 004bfddf
    PUSH 0x1                            ; 004bfde2
    PUSH 0x5d8d2d                       ; 004bfde4 | = "rshin01"
    PUSH EBX                            ; 004bfde9
    MOV dword ptr [ESI + 0x10b08],EAX   ; 004bfdea
    CALL FUN_00543100                   ; 004bfdf0
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; undefined FUN_00543100()
    ADD ESP,0xc                         ; 004bfdf5
    PUSH 0x1                            ; 004bfdf8
    PUSH 0x5d8d35                       ; 004bfdfa | = "lthigh01"
    PUSH EBX                            ; 004bfdff
    MOV dword ptr [ESI + 0x10b0c],EAX   ; 004bfe00
    CALL FUN_00543100                   ; 004bfe06
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; undefined FUN_00543100()
    ADD ESP,0xc                         ; 004bfe0b
    PUSH 0x1                            ; 004bfe0e
    PUSH 0x5d8d3e                       ; 004bfe10 | = "lshin01"
    PUSH EBX                            ; 004bfe15
    MOV dword ptr [ESI + 0x10b10],EAX   ; 004bfe16
    CALL FUN_00543100                   ; 004bfe1c
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; undefined FUN_00543100()
    ADD ESP,0xc                         ; 004bfe21
    PUSH 0x1                            ; 004bfe24
    PUSH 0x5d8d46                       ; 004bfe26 | = "ass01"
    PUSH EBX                            ; 004bfe2b
    MOV dword ptr [ESI + 0x10b14],EAX   ; 004bfe2c
    CALL FUN_00543100                   ; 004bfe32
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; undefined FUN_00543100()
    ADD ESP,0xc                         ; 004bfe37
    MOV dword ptr [ESI + 0x10b18],EAX   ; 004bfe3a
    PUSH 0x1                            ; 004bfe40
    PUSH 0x5d8d4c                       ; 004bfe42 | = "torso01"
    PUSH EBX                            ; 004bfe47
    CALL FUN_00543100                   ; 004bfe48
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; undefined FUN_00543100()
    ADD ESP,0xc                         ; 004bfe4d
    PUSH 0x1                            ; 004bfe50
    PUSH 0x5d8d54                       ; 004bfe52 | = "head01"
    PUSH EBX                            ; 004bfe57
    MOV dword ptr [ESI + 0x10b1c],EAX   ; 004bfe58
    CALL FUN_00543100                   ; 004bfe5e
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; undefined FUN_00543100()
    ADD ESP,0xc                         ; 004bfe63
    PUSH 0x1                            ; 004bfe66
    PUSH 0x5d8d5b                       ; 004bfe68 | = "tail01"
    PUSH EBX                            ; 004bfe6d
    MOV dword ptr [ESI + 0x10b20],EAX   ; 004bfe6e
    CALL FUN_00543100                   ; 004bfe74
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; undefined FUN_00543100()
    MOV dword ptr [ESI + 0x10b38],0x0   ; 004bfe79
    MOV dword ptr [ESI + 0x10b3c],0x0   ; 004bfe83
    ADD ESP,0xc                         ; 004bfe8d
    MOV dword ptr [ESI + 0x10b24],EAX   ; 004bfe90
    POP EDI                             ; 004bfe96
    POP ESI                             ; 004bfe97
    POP EBX                             ; 004bfe98
    RET                                 ; 004bfe99

