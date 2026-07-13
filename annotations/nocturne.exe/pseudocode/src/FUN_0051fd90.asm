; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051fd90(int param_1)
;
;
; Referenced Globals:
;   string s_Bip01_Head_00591ef8
;   string s_Bip01_L_ForeArm_00591f03
;   string s_Bip01_R_ForeArm_00591f13
;   string s_Bip01_L_UpperArm_00591f23
;   string s_Bip01_R_UpperArm_00591f34
;   string s_Bip01_L_Foot_00591f45
;   string s_Bip01_R_Foot_00591f52
;   string s_Bip01_L_Hand_00591f5f
;   string s_Bip01_R_Hand_00591f6c
;   string s_Bip01_Spine_00591f79
;   string s_Bip01_Spine1_00591f85
;   string s_Bip01_Spine2_00591f92
;   string s_Bip01_Head_00591f9f
;   string s_Bip01_L_UpperArm_00591faa
;   string s_Bip01_R_UpperArm_00591fbb
;   ... and 27 more
;
; Called Functions:
;   FUN_004796b0
;   FUN_005179d0
;   FUN_00519b30
;   FUN_0051dcd0
;   FUN_0051e020
;   FUN_0051e0a0
;   FUN_00564520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051fd90
        ;   Label: FUN_0051fd90
    PUSH ESI                            ; 0051fd91
    PUSH EDI                            ; 0051fd92
    PUSH EBP                            ; 0051fd93
    MOV EBP,ESP                         ; 0051fd94
    MOV EBX,dword ptr [EBP + 0x14]      ; 0051fd96
    PUSH EBX                            ; 0051fd99
    CALL FUN_004796b0                   ; 0051fd9a
        ;   XREF to: 004796b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004796b0()
    ADD ESP,0x4                         ; 0051fd9f
    LEA EDI,[EBX + 0x150]               ; 0051fda2
    PUSH EDI                            ; 0051fda8
    CALL FUN_0051dcd0                   ; 0051fda9
        ;   XREF to: 0051dcd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051dcd0()
    ADD ESP,0x4                         ; 0051fdae
    PUSH EDI                            ; 0051fdb1
    CALL FUN_0051e0a0                   ; 0051fdb2
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051e0a0()
    ADD ESP,0x4                         ; 0051fdb7
    PUSH 0x1                            ; 0051fdba
    PUSH 0x591ef8                       ; 0051fdbc | = "Bip01 Head"
    PUSH EAX                            ; 0051fdc1
    MOV ESI,EAX                         ; 0051fdc2
    CALL FUN_005179d0                   ; 0051fdc4
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 0051fdc9
    PUSH 0x1                            ; 0051fdcc
    PUSH 0x591f03                       ; 0051fdce | = "Bip01 L ForeArm"
    PUSH ESI                            ; 0051fdd3
    MOV [0x02da8a74],EAX                ; 0051fdd4 | DAT_02da8a74
    CALL FUN_005179d0                   ; 0051fdd9
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 0051fdde
    PUSH 0x1                            ; 0051fde1
    PUSH 0x591f13                       ; 0051fde3 | = "Bip01 R ForeArm"
    PUSH ESI                            ; 0051fde8
    MOV [0x02da8a80],EAX                ; 0051fde9 | DAT_02da8a80
    CALL FUN_005179d0                   ; 0051fdee
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 0051fdf3
    PUSH 0x1                            ; 0051fdf6
    PUSH 0x591f23                       ; 0051fdf8 | = "Bip01 L UpperArm"
    PUSH ESI                            ; 0051fdfd
    MOV [0x02da8a84],EAX                ; 0051fdfe | DAT_02da8a84
    CALL FUN_005179d0                   ; 0051fe03
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 0051fe08
    PUSH 0x1                            ; 0051fe0b
    PUSH 0x591f34                       ; 0051fe0d | = "Bip01 R UpperArm"
    PUSH ESI                            ; 0051fe12
    MOV [0x02da8a88],EAX                ; 0051fe13 | DAT_02da8a88
    CALL FUN_005179d0                   ; 0051fe18
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 0051fe1d
    PUSH 0x1                            ; 0051fe20
    PUSH 0x591f45                       ; 0051fe22 | = "Bip01 L Foot"
    PUSH ESI                            ; 0051fe27
    MOV [0x02da8a8c],EAX                ; 0051fe28 | DAT_02da8a8c
    CALL FUN_005179d0                   ; 0051fe2d
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 0051fe32
    PUSH 0x1                            ; 0051fe35
    PUSH 0x591f52                       ; 0051fe37 | = "Bip01 R Foot"
    PUSH ESI                            ; 0051fe3c
    MOV [0x02da8a90],EAX                ; 0051fe3d | DAT_02da8a90
    CALL FUN_005179d0                   ; 0051fe42
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 0051fe47
    PUSH 0x1                            ; 0051fe4a
    PUSH 0x591f5f                       ; 0051fe4c | = "Bip01 L Hand"
    PUSH ESI                            ; 0051fe51
    MOV [0x02da8a94],EAX                ; 0051fe52 | DAT_02da8a94
    CALL FUN_005179d0                   ; 0051fe57
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 0051fe5c
    MOV [0x02da8a78],EAX                ; 0051fe5f | DAT_02da8a78
    PUSH 0x1                            ; 0051fe64
    PUSH 0x591f6c                       ; 0051fe66 | = "Bip01 R Hand"
    PUSH ESI                            ; 0051fe6b
    CALL FUN_005179d0                   ; 0051fe6c
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 0051fe71
    PUSH 0x1                            ; 0051fe74
    PUSH 0x591f79                       ; 0051fe76 | = "Bip01 Spine"
    PUSH ESI                            ; 0051fe7b
    MOV [0x02da8a7c],EAX                ; 0051fe7c | DAT_02da8a7c
    CALL FUN_005179d0                   ; 0051fe81
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 0051fe86
    PUSH 0x1                            ; 0051fe89
    PUSH 0x591f85                       ; 0051fe8b | = "Bip01 Spine1"
    PUSH ESI                            ; 0051fe90
    MOV [0x02da8a98],EAX                ; 0051fe91 | DAT_02da8a98
    CALL FUN_005179d0                   ; 0051fe96
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 0051fe9b
    PUSH 0x1                            ; 0051fe9e
    PUSH 0x591f92                       ; 0051fea0 | = "Bip01 Spine2"
    PUSH ESI                            ; 0051fea5
    MOV [0x02da8a9c],EAX                ; 0051fea6 | DAT_02da8a9c
    CALL FUN_005179d0                   ; 0051feab
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 0051feb0
    PUSH 0x1                            ; 0051feb3
    PUSH 0x591f9f                       ; 0051feb5 | = "Bip01 Head"
    PUSH ESI                            ; 0051feba
    MOV [0x02da8aa0],EAX                ; 0051febb | DAT_02da8aa0
    CALL FUN_005179d0                   ; 0051fec0
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 0051fec5
    PUSH 0x1                            ; 0051fec8
    PUSH 0x591faa                       ; 0051feca | = "Bip01 L UpperArm"
    PUSH ESI                            ; 0051fecf
    MOV [0x02da8a74],EAX                ; 0051fed0 | DAT_02da8a74
    CALL FUN_005179d0                   ; 0051fed5
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 0051feda
    PUSH 0x1                            ; 0051fedd
    PUSH 0x591fbb                       ; 0051fedf | = "Bip01 R UpperArm"
    PUSH ESI                            ; 0051fee4
    MOV [0x02da8a88],EAX                ; 0051fee5 | DAT_02da8a88
    CALL FUN_005179d0                   ; 0051feea
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 0051feef
    PUSH 0x1                            ; 0051fef2
    PUSH 0x591fcc                       ; 0051fef4 | = "Bip01 Spine"
    PUSH ESI                            ; 0051fef9
    MOV [0x02da8a8c],EAX                ; 0051fefa | DAT_02da8a8c
    CALL FUN_005179d0                   ; 0051feff
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 0051ff04
    PUSH 0x1                            ; 0051ff07
    PUSH 0x591fd8                       ; 0051ff09 | = "Bip01 Spine2"
    PUSH ESI                            ; 0051ff0e
    MOV [0x02da8a98],EAX                ; 0051ff0f | DAT_02da8a98
    CALL FUN_005179d0                   ; 0051ff14
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005179d0()
    ADD ESP,0xc                         ; 0051ff19
    PUSH EDI                            ; 0051ff1c
    MOV [0x02da8aa0],EAX                ; 0051ff1d | DAT_02da8aa0
    CALL FUN_0051e020                   ; 0051ff22
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; undefined FUN_0051e020()
    MOV ESI,EAX                         ; 0051ff27
    ADD ESP,0x4                         ; 0051ff29
    PUSH 0x1                            ; 0051ff2c
    PUSH 0x591fe5                       ; 0051ff2e | = "larm01"
    PUSH EAX                            ; 0051ff33
    CALL FUN_00519b30                   ; 0051ff34
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    ADD ESP,0xc                         ; 0051ff39
    PUSH 0x1                            ; 0051ff3c
    PUSH 0x591fec                       ; 0051ff3e | = "l4arm01"
    PUSH ESI                            ; 0051ff43
    MOV dword ptr [EBX + 0xbd2c],EAX    ; 0051ff44
    CALL FUN_00519b30                   ; 0051ff4a
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    ADD ESP,0xc                         ; 0051ff4f
    PUSH 0x1                            ; 0051ff52
    PUSH 0x591ff4                       ; 0051ff54 | = "rarm01"
    PUSH ESI                            ; 0051ff59
    MOV dword ptr [EBX + 0xbd30],EAX    ; 0051ff5a
    CALL FUN_00519b30                   ; 0051ff60
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    ADD ESP,0xc                         ; 0051ff65
    PUSH 0x1                            ; 0051ff68
    PUSH 0x591ffb                       ; 0051ff6a | = "r4arm01"
    PUSH ESI                            ; 0051ff6f
    MOV dword ptr [EBX + 0xbd34],EAX    ; 0051ff70
    CALL FUN_00519b30                   ; 0051ff76
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    ADD ESP,0xc                         ; 0051ff7b
    PUSH 0x1                            ; 0051ff7e
    PUSH 0x592003                       ; 0051ff80 | = "rthigh01"
    PUSH ESI                            ; 0051ff85
    MOV dword ptr [EBX + 0xbd38],EAX    ; 0051ff86
    CALL FUN_00519b30                   ; 0051ff8c
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    ADD ESP,0xc                         ; 0051ff91
    PUSH 0x1                            ; 0051ff94
    PUSH 0x59200c                       ; 0051ff96 | = "rshin01"
    PUSH ESI                            ; 0051ff9b
    MOV dword ptr [EBX + 0xbd3c],EAX    ; 0051ff9c
    CALL FUN_00519b30                   ; 0051ffa2
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    ADD ESP,0xc                         ; 0051ffa7
    PUSH 0x1                            ; 0051ffaa
    PUSH 0x592014                       ; 0051ffac | = "lthigh01"
    PUSH ESI                            ; 0051ffb1
    MOV dword ptr [EBX + 0xbd40],EAX    ; 0051ffb2
    CALL FUN_00519b30                   ; 0051ffb8
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    ADD ESP,0xc                         ; 0051ffbd
    PUSH 0x1                            ; 0051ffc0
    PUSH 0x59201d                       ; 0051ffc2 | = "lshin01"
    PUSH ESI                            ; 0051ffc7
    MOV dword ptr [EBX + 0xbd44],EAX    ; 0051ffc8
    CALL FUN_00519b30                   ; 0051ffce
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    ADD ESP,0xc                         ; 0051ffd3
    PUSH 0x1                            ; 0051ffd6
    PUSH 0x592025                       ; 0051ffd8 | = "ass01"
    PUSH ESI                            ; 0051ffdd
    MOV dword ptr [EBX + 0xbd48],EAX    ; 0051ffde
    CALL FUN_00519b30                   ; 0051ffe4
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    ADD ESP,0xc                         ; 0051ffe9
    MOV dword ptr [EBX + 0xbd4c],EAX    ; 0051ffec
    PUSH 0x1                            ; 0051fff2
    PUSH 0x59202b                       ; 0051fff4 | = "torso01"
    PUSH ESI                            ; 0051fff9
    CALL FUN_00519b30                   ; 0051fffa
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    ADD ESP,0xc                         ; 0051ffff
    PUSH 0x1                            ; 00520002
    PUSH 0x592033                       ; 00520004 | = "head01"
    PUSH ESI                            ; 00520009
    MOV dword ptr [EBX + 0xbd50],EAX    ; 0052000a
    CALL FUN_00519b30                   ; 00520010
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00519b30()
    MOV dword ptr [EBX + 0xbd58],0x0    ; 00520015
    ADD ESP,0xc                         ; 0052001f
    MOV dword ptr [EBX + 0xbd54],EAX    ; 00520022
    PUSH 0x59203a                       ; 00520028 | = "smiley2.dfm"
    LEA EAX,[EBX + 0x23b0]              ; 0052002d
    MOV dword ptr [EBX + 0xbd5c],0x0    ; 00520033
    PUSH EAX                            ; 0052003d
    MOV dword ptr [EBX + 0xbd64],0x1    ; 0052003e
    CALL FUN_00564520                   ; 00520048
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined FUN_00564520()
    ADD ESP,0x8                         ; 0052004d
    TEST EAX,EAX                        ; 00520050
    JNZ 0x0052005e                      ; 00520052
        ;   XREF to: 0052005e (CONDITIONAL_JUMP)  ; LAB_0052005e
    MOV dword ptr [EBX + 0xbd64],0x2    ; 00520054
    PUSH 0x592046                       ; 0052005e | = "smiley3.dfm"
        ;   Label: LAB_0052005e
    LEA EAX,[EBX + 0x23b0]              ; 00520063
    PUSH EAX                            ; 00520069
    CALL FUN_00564520                   ; 0052006a
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined FUN_00564520()
    ADD ESP,0x8                         ; 0052006f
    TEST EAX,EAX                        ; 00520072
    JZ 0x0052007b                       ; 00520074
        ;   XREF to: 0052007b (CONDITIONAL_JUMP)  ; LAB_0052007b
    POP EBP                             ; 00520076
    POP EDI                             ; 00520077
    POP ESI                             ; 00520078
    POP EBX                             ; 00520079
    RET                                 ; 0052007a
    MOV dword ptr [EBX + 0xbd64],0x3    ; 0052007b
        ;   Label: LAB_0052007b
    MOV dword ptr [EBX + 0x261c],EAX    ; 00520085
    POP EBP                             ; 0052008b
    POP EDI                             ; 0052008c
    POP ESI                             ; 0052008d
    POP EBX                             ; 0052008e
    RET                                 ; 0052008f

