; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040add0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x9c]:1  local_9c
;
; Referenced Globals:
;   undefined4 DAT_005992b0
;   undefined4 DAT_005993b0
;   undefined4 DAT_005ae700
;   undefined4 DAT_005b761c
;   undefined4 DAT_005b7620
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01bff320
;   undefined4 DAT_01c00c70
;
; Called Functions:
;   FUN_00401530
;   FUN_0053075c
;   FUN_005644a7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040add0
        ;   Label: FUN_0040add0
    PUSH ESI                            ; 0040add1
    PUSH EDI                            ; 0040add2
    PUSH EBP                            ; 0040add3
    SUB ESP,0x8c                        ; 0040add4
    MOV EBX,dword ptr [ESP + 0xa0]      ; 0040adda
    PUSH 0x5993b0                       ; 0040ade1 | DAT_005993b0
    PUSH 0xa                            ; 0040ade6
    LEA EAX,[ESP + 0x8]                 ; 0040ade8
    PUSH EAX                            ; 0040adec
    CALL FUN_005644a7                   ; 0040aded
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined FUN_005644a7()
    ADD ESP,0xc                         ; 0040adf2
    MOV EAX,ESP                         ; 0040adf5
    PUSH EAX                            ; 0040adf7
    MOV EDX,dword ptr [EBX + 0x14c]     ; 0040adf8
    PUSH EBX                            ; 0040adfe
    CALL dword ptr [EDX + 0x4c]         ; 0040adff
    ADD ESP,0x8                         ; 0040ae02
    XOR EBP,EBP                         ; 0040ae05
    MOV dword ptr [ESP + 0x84],EAX      ; 0040ae07
    TEST EAX,EAX                        ; 0040ae0e
    JLE 0x0040ae87                      ; 0040ae10
        ;   XREF to: 0040ae87 (CONDITIONAL_JUMP)  ; LAB_0040ae87
    MOV EDI,ESP                         ; 0040ae12
    XOR EAX,EAX                         ; 0040ae14
        ;   Label: LAB_0040ae14
    MOV AL,[0x01bff320]                 ; 0040ae16 | DAT_01bff320
    LEA EBX,[ESP + 0x78]                ; 0040ae1b
    MOV dword ptr [ESP + 0x88],EAX      ; 0040ae1f
    MOV EAX,EDI                         ; 0040ae26
    MOV EDX,dword ptr [0x005ae700]      ; 0040ae28 | DAT_005ae700
    FLD float ptr [EAX]                 ; 0040ae2e
    FMUL float ptr [0x005992b0]         ; 0040ae30 | DAT_005992b0
    FISTP dword ptr [EBX]               ; 0040ae36
    FLD float ptr [EAX + 0x4]           ; 0040ae38
    FMUL float ptr [0x005992b0]         ; 0040ae3b | DAT_005992b0
    FISTP dword ptr [EBX + 0x4]         ; 0040ae41
    FLD float ptr [EAX + 0x8]           ; 0040ae44
    FMUL float ptr [0x005992b0]         ; 0040ae47 | DAT_005992b0
    FISTP dword ptr [EBX + 0x8]         ; 0040ae4d
    LEA EAX,[ESP + 0x78]                ; 0040ae50
    PUSH EAX                            ; 0040ae54
    MOV EAX,dword ptr [EDX]             ; 0040ae55 | DAT_01b4d738
    ADD EAX,0xea5d0                     ; 0040ae57
    PUSH EAX                            ; 0040ae5c
    CALL FUN_0053075c                   ; 0040ae5d
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined FUN_0053075c()
    MOV ESI,dword ptr [0x005ae700]      ; 0040ae62 | DAT_005ae700
    MOV ESI,dword ptr [ESI]             ; 0040ae68 | DAT_01b4d738
    MOV AH,byte ptr [ESI + 0xea5e3]     ; 0040ae6a
    ADD ESP,0x8                         ; 0040ae70
    TEST AH,0x80                        ; 0040ae73
    JZ 0x0040ae92                       ; 0040ae76
        ;   XREF to: 0040ae92 (CONDITIONAL_JUMP)  ; LAB_0040ae92
    MOV EDX,dword ptr [ESP + 0x84]      ; 0040ae78
        ;   Label: LAB_0040ae78
    INC EBP                             ; 0040ae7f
    ADD EDI,0xc                         ; 0040ae80
    CMP EBP,EDX                         ; 0040ae83
    JL 0x0040ae14                       ; 0040ae85
        ;   XREF to: 0040ae14 (CONDITIONAL_JUMP)  ; LAB_0040ae14
    ADD ESP,0x8c                        ; 0040ae87
        ;   Label: LAB_0040ae87
    POP EBP                             ; 0040ae8d
    POP EDI                             ; 0040ae8e
    POP ESI                             ; 0040ae8f
    POP EBX                             ; 0040ae90
    RET                                 ; 0040ae91
    MOV EBX,dword ptr [ESI + 0xea5e0]   ; 0040ae92
        ;   Label: LAB_0040ae92
    MOV EAX,dword ptr [ESP + 0x88]      ; 0040ae98
    SAR EBX,0x10                        ; 0040ae9f
    MOV ESI,dword ptr [ESI + 0xea5e4]   ; 0040aea2
    MOV [0x01c00c70],EAX                ; 0040aea8 | DAT_01c00c70
    SAR ESI,0x10                        ; 0040aead
    TEST EBX,EBX                        ; 0040aeb0
    JL 0x0040aec4                       ; 0040aeb2
        ;   XREF to: 0040aec4 (CONDITIONAL_JUMP)  ; LAB_0040aec4
    TEST ESI,ESI                        ; 0040aeb4
    JL 0x0040aec4                       ; 0040aeb6
        ;   XREF to: 0040aec4 (CONDITIONAL_JUMP)  ; LAB_0040aec4
    CMP EBX,dword ptr [0x005b761c]      ; 0040aeb8 | DAT_005b761c
    JL 0x0040afb7                       ; 0040aebe
        ;   XREF to: 0040afb7 (CONDITIONAL_JUMP)  ; LAB_0040afb7
    LEA EAX,[EBX + -0x1]                ; 0040aec4
        ;   Label: LAB_0040aec4
    LEA EDX,[ESI + -0x1]                ; 0040aec7
    TEST EAX,EAX                        ; 0040aeca
    JL 0x0040aede                       ; 0040aecc
        ;   XREF to: 0040aede (CONDITIONAL_JUMP)  ; LAB_0040aede
    TEST EDX,EDX                        ; 0040aece
    JL 0x0040aede                       ; 0040aed0
        ;   XREF to: 0040aede (CONDITIONAL_JUMP)  ; LAB_0040aede
    CMP EAX,dword ptr [0x005b761c]      ; 0040aed2 | DAT_005b761c
    JL 0x0040afd2                       ; 0040aed8
        ;   XREF to: 0040afd2 (CONDITIONAL_JUMP)  ; LAB_0040afd2
    LEA EAX,[EBX + -0x1]                ; 0040aede
        ;   Label: LAB_0040aede
    LEA EDX,[ESI + 0x1]                 ; 0040aee1
    TEST EAX,EAX                        ; 0040aee4
    JL 0x0040aef8                       ; 0040aee6
        ;   XREF to: 0040aef8 (CONDITIONAL_JUMP)  ; LAB_0040aef8
    TEST EDX,EDX                        ; 0040aee8
    JL 0x0040aef8                       ; 0040aeea
        ;   XREF to: 0040aef8 (CONDITIONAL_JUMP)  ; LAB_0040aef8
    CMP EAX,dword ptr [0x005b761c]      ; 0040aeec | DAT_005b761c
    JL 0x0040afed                       ; 0040aef2
        ;   XREF to: 0040afed (CONDITIONAL_JUMP)  ; LAB_0040afed
    LEA EAX,[EBX + 0x1]                 ; 0040aef8
        ;   Label: LAB_0040aef8
    LEA EDX,[ESI + -0x1]                ; 0040aefb
    TEST EAX,EAX                        ; 0040aefe
    JL 0x0040af12                       ; 0040af00
        ;   XREF to: 0040af12 (CONDITIONAL_JUMP)  ; LAB_0040af12
    TEST EDX,EDX                        ; 0040af02
    JL 0x0040af12                       ; 0040af04
        ;   XREF to: 0040af12 (CONDITIONAL_JUMP)  ; LAB_0040af12
    CMP EAX,dword ptr [0x005b761c]      ; 0040af06 | DAT_005b761c
    JL 0x0040b008                       ; 0040af0c
        ;   XREF to: 0040b008 (CONDITIONAL_JUMP)  ; LAB_0040b008
    LEA EDX,[EBX + 0x1]                 ; 0040af12
        ;   Label: LAB_0040af12
    LEA EAX,[ESI + 0x1]                 ; 0040af15
    TEST EDX,EDX                        ; 0040af18
    JL 0x0040af2c                       ; 0040af1a
        ;   XREF to: 0040af2c (CONDITIONAL_JUMP)  ; LAB_0040af2c
    TEST EAX,EAX                        ; 0040af1c
    JL 0x0040af2c                       ; 0040af1e
        ;   XREF to: 0040af2c (CONDITIONAL_JUMP)  ; LAB_0040af2c
    CMP EDX,dword ptr [0x005b761c]      ; 0040af20 | DAT_005b761c
    JL 0x0040b023                       ; 0040af26
        ;   XREF to: 0040b023 (CONDITIONAL_JUMP)  ; LAB_0040b023
    LEA EAX,[EBX + -0x2]                ; 0040af2c
        ;   Label: LAB_0040af2c
    LEA EDX,[ESI + -0x2]                ; 0040af2f
    TEST EAX,EAX                        ; 0040af32
    JL 0x0040af46                       ; 0040af34
        ;   XREF to: 0040af46 (CONDITIONAL_JUMP)  ; LAB_0040af46
    TEST EDX,EDX                        ; 0040af36
    JL 0x0040af46                       ; 0040af38
        ;   XREF to: 0040af46 (CONDITIONAL_JUMP)  ; LAB_0040af46
    CMP EAX,dword ptr [0x005b761c]      ; 0040af3a | DAT_005b761c
    JL 0x0040b03e                       ; 0040af40
        ;   XREF to: 0040b03e (CONDITIONAL_JUMP)  ; LAB_0040b03e
    LEA EAX,[EBX + -0x2]                ; 0040af46
        ;   Label: LAB_0040af46
    LEA EDX,[ESI + 0x2]                 ; 0040af49
    TEST EAX,EAX                        ; 0040af4c
    JL 0x0040af60                       ; 0040af4e
        ;   XREF to: 0040af60 (CONDITIONAL_JUMP)  ; LAB_0040af60
    TEST EDX,EDX                        ; 0040af50
    JL 0x0040af60                       ; 0040af52
        ;   XREF to: 0040af60 (CONDITIONAL_JUMP)  ; LAB_0040af60
    CMP EAX,dword ptr [0x005b761c]      ; 0040af54 | DAT_005b761c
    JL 0x0040b059                       ; 0040af5a
        ;   XREF to: 0040b059 (CONDITIONAL_JUMP)  ; LAB_0040b059
    LEA EAX,[EBX + 0x2]                 ; 0040af60
        ;   Label: LAB_0040af60
    LEA EDX,[ESI + -0x2]                ; 0040af63
    TEST EAX,EAX                        ; 0040af66
    JL 0x0040af7a                       ; 0040af68
        ;   XREF to: 0040af7a (CONDITIONAL_JUMP)  ; LAB_0040af7a
    TEST EDX,EDX                        ; 0040af6a
    JL 0x0040af7a                       ; 0040af6c
        ;   XREF to: 0040af7a (CONDITIONAL_JUMP)  ; LAB_0040af7a
    CMP EAX,dword ptr [0x005b761c]      ; 0040af6e | DAT_005b761c
    JL 0x0040b074                       ; 0040af74
        ;   XREF to: 0040b074 (CONDITIONAL_JUMP)  ; LAB_0040b074
    ADD EBX,0x2                         ; 0040af7a
        ;   Label: LAB_0040af7a
    ADD ESI,0x2                         ; 0040af7d
    TEST EBX,EBX                        ; 0040af80
    JL 0x0040ae78                       ; 0040af82
        ;   XREF to: 0040ae78 (CONDITIONAL_JUMP)  ; LAB_0040ae78
    TEST ESI,ESI                        ; 0040af88
    JL 0x0040ae78                       ; 0040af8a
        ;   XREF to: 0040ae78 (CONDITIONAL_JUMP)  ; LAB_0040ae78
    CMP EBX,dword ptr [0x005b761c]      ; 0040af90 | DAT_005b761c
    JGE 0x0040ae78                      ; 0040af96
        ;   XREF to: 0040ae78 (CONDITIONAL_JUMP)  ; LAB_0040ae78
    CMP ESI,dword ptr [0x005b7620]      ; 0040af9c | DAT_005b7620
    JGE 0x0040ae78                      ; 0040afa2
        ;   XREF to: 0040ae78 (CONDITIONAL_JUMP)  ; LAB_0040ae78
    PUSH ESI                            ; 0040afa8
    PUSH EBX                            ; 0040afa9
    CALL FUN_00401530                   ; 0040afaa
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; undefined FUN_00401530()
    ADD ESP,0x8                         ; 0040afaf
    JMP 0x0040ae78                      ; 0040afb2
        ;   XREF to: 0040ae78 (UNCONDITIONAL_JUMP)  ; LAB_0040ae78
    CMP ESI,dword ptr [0x005b7620]      ; 0040afb7 | DAT_005b7620
        ;   Label: LAB_0040afb7
    JGE 0x0040aec4                      ; 0040afbd
        ;   XREF to: 0040aec4 (CONDITIONAL_JUMP)  ; LAB_0040aec4
    PUSH ESI                            ; 0040afc3
    PUSH EBX                            ; 0040afc4
    CALL FUN_00401530                   ; 0040afc5
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; undefined FUN_00401530()
    ADD ESP,0x8                         ; 0040afca
    JMP 0x0040aec4                      ; 0040afcd
        ;   XREF to: 0040aec4 (UNCONDITIONAL_JUMP)  ; LAB_0040aec4
    CMP EDX,dword ptr [0x005b7620]      ; 0040afd2 | DAT_005b7620
        ;   Label: LAB_0040afd2
    JGE 0x0040aede                      ; 0040afd8
        ;   XREF to: 0040aede (CONDITIONAL_JUMP)  ; LAB_0040aede
    PUSH EDX                            ; 0040afde
    PUSH EAX                            ; 0040afdf
    CALL FUN_00401530                   ; 0040afe0
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; undefined FUN_00401530()
    ADD ESP,0x8                         ; 0040afe5
    JMP 0x0040aede                      ; 0040afe8
        ;   XREF to: 0040aede (UNCONDITIONAL_JUMP)  ; LAB_0040aede
    CMP EDX,dword ptr [0x005b7620]      ; 0040afed | DAT_005b7620
        ;   Label: LAB_0040afed
    JGE 0x0040aef8                      ; 0040aff3
        ;   XREF to: 0040aef8 (CONDITIONAL_JUMP)  ; LAB_0040aef8
    PUSH EDX                            ; 0040aff9
    PUSH EAX                            ; 0040affa
    CALL FUN_00401530                   ; 0040affb
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; undefined FUN_00401530()
    ADD ESP,0x8                         ; 0040b000
    JMP 0x0040aef8                      ; 0040b003
        ;   XREF to: 0040aef8 (UNCONDITIONAL_JUMP)  ; LAB_0040aef8
    CMP EDX,dword ptr [0x005b7620]      ; 0040b008 | DAT_005b7620
        ;   Label: LAB_0040b008
    JGE 0x0040af12                      ; 0040b00e
        ;   XREF to: 0040af12 (CONDITIONAL_JUMP)  ; LAB_0040af12
    PUSH EDX                            ; 0040b014
    PUSH EAX                            ; 0040b015
    CALL FUN_00401530                   ; 0040b016
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; undefined FUN_00401530()
    ADD ESP,0x8                         ; 0040b01b
    JMP 0x0040af12                      ; 0040b01e
        ;   XREF to: 0040af12 (UNCONDITIONAL_JUMP)  ; LAB_0040af12
    CMP EAX,dword ptr [0x005b7620]      ; 0040b023 | DAT_005b7620
        ;   Label: LAB_0040b023
    JGE 0x0040af2c                      ; 0040b029
        ;   XREF to: 0040af2c (CONDITIONAL_JUMP)  ; LAB_0040af2c
    PUSH EAX                            ; 0040b02f
    PUSH EDX                            ; 0040b030
    CALL FUN_00401530                   ; 0040b031
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; undefined FUN_00401530()
    ADD ESP,0x8                         ; 0040b036
    JMP 0x0040af2c                      ; 0040b039
        ;   XREF to: 0040af2c (UNCONDITIONAL_JUMP)  ; LAB_0040af2c
    CMP EDX,dword ptr [0x005b7620]      ; 0040b03e | DAT_005b7620
        ;   Label: LAB_0040b03e
    JGE 0x0040af46                      ; 0040b044
        ;   XREF to: 0040af46 (CONDITIONAL_JUMP)  ; LAB_0040af46
    PUSH EDX                            ; 0040b04a
    PUSH EAX                            ; 0040b04b
    CALL FUN_00401530                   ; 0040b04c
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; undefined FUN_00401530()
    ADD ESP,0x8                         ; 0040b051
    JMP 0x0040af46                      ; 0040b054
        ;   XREF to: 0040af46 (UNCONDITIONAL_JUMP)  ; LAB_0040af46
    CMP EDX,dword ptr [0x005b7620]      ; 0040b059 | DAT_005b7620
        ;   Label: LAB_0040b059
    JGE 0x0040af60                      ; 0040b05f
        ;   XREF to: 0040af60 (CONDITIONAL_JUMP)  ; LAB_0040af60
    PUSH EDX                            ; 0040b065
    PUSH EAX                            ; 0040b066
    CALL FUN_00401530                   ; 0040b067
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; undefined FUN_00401530()
    ADD ESP,0x8                         ; 0040b06c
    JMP 0x0040af60                      ; 0040b06f
        ;   XREF to: 0040af60 (UNCONDITIONAL_JUMP)  ; LAB_0040af60
    CMP EDX,dword ptr [0x005b7620]      ; 0040b074 | DAT_005b7620
        ;   Label: LAB_0040b074
    JGE 0x0040af7a                      ; 0040b07a
        ;   XREF to: 0040af7a (CONDITIONAL_JUMP)  ; LAB_0040af7a
    PUSH EDX                            ; 0040b080
    PUSH EAX                            ; 0040b081
    CALL FUN_00401530                   ; 0040b082
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; undefined FUN_00401530()
    ADD ESP,0x8                         ; 0040b087
    JMP 0x0040af7a                      ; 0040b08a
        ;   XREF to: 0040af7a (UNCONDITIONAL_JUMP)  ; LAB_0040af7a

