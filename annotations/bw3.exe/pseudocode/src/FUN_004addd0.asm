; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004addd0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005c1c51
;   undefined4 DAT_005c1c59
;   undefined4 DAT_005c1c61
;   undefined4 DAT_005e0400
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_01c6e24c
;   undefined4 DAT_01d1a0dc
;   undefined4 DAT_01d1a11c
;   undefined4 DAT_01d1a120
;
; Called Functions:
;   FUN_004087f0
;   FUN_00408830
;   FUN_0041daf0
;   FUN_0046b8f0
;   FUN_0046d3d0
;   FUN_0046d540
;   FUN_004add00
;   FUN_00515a80
;   FUN_005632a3
;   FUN_00567630
;   FUN_00567860
;   FUN_0056aa10
;   FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004addd0
        ;   Label: FUN_004addd0
    PUSH ESI                            ; 004addd1
    PUSH EDI                            ; 004addd2
    PUSH EBP                            ; 004addd3
    MOV EBP,ESP                         ; 004addd4
    SUB ESP,0xb0                        ; 004addd6
    AND ESP,0xfffffff8                  ; 004adddc
    MOV EDX,dword ptr [0x005f2afc]      ; 004adddf | DAT_005f2afc
    PUSH EDX                            ; 004adde5
    CALL FUN_0046d540                   ; 004adde6
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d540()
    ADD ESP,0x4                         ; 004addeb
    TEST EAX,EAX                        ; 004addee
    JZ 0x004addfb                       ; 004addf0
        ;   XREF to: 004addfb (CONDITIONAL_JUMP)  ; LAB_004addfb
    XOR EAX,EAX                         ; 004addf2
    MOV ESP,EBP                         ; 004addf4
    POP EBP                             ; 004addf6
    POP EDI                             ; 004addf7
    POP ESI                             ; 004addf8
    POP EBX                             ; 004addf9
    RET                                 ; 004addfa
    MOV EAX,dword ptr [EBP + 0x14]      ; 004addfb
        ;   Label: LAB_004addfb
    PUSH EAX                            ; 004addfe
    MOV dword ptr [EAX + 0x2a1c],0x0    ; 004addff
    CALL FUN_004087f0                   ; 004ade09
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 004ade0e
    PUSH 0x0                            ; 004ade11
    MOV EBX,dword ptr [EBP + 0x14]      ; 004ade13
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ade16
    PUSH EBX                            ; 004ade19
    MOV EAX,dword ptr [EAX + 0x154]     ; 004ade1a
    LEA ESI,[ESP + 0x50]                ; 004ade20
    LEA EDI,[ESP + 0x68]                ; 004ade24
    CALL dword ptr [EAX + 0x1c]         ; 004ade28
    MOV ECX,0x6                         ; 004ade2b
    ADD ESP,0x4                         ; 004ade30
    LEA EAX,[ESP + 0x64]                ; 004ade33
    LEA ESI,[ESP + 0x4c]                ; 004ade37
    PUSH EAX                            ; 004ade3b
    MOVSD.REP ES:EDI,ESI                ; 004ade3c
    CALL FUN_0041daf0                   ; 004ade3e
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041daf0()
    ADD ESP,0x8                         ; 004ade43
    MOV dword ptr [ESP + 0x9c],EAX      ; 004ade46
    TEST EAX,EAX                        ; 004ade4d
    JZ 0x004ae0c0                       ; 004ade4f
        ;   XREF to: 004ae0c0 (CONDITIONAL_JUMP)  ; LAB_004ae0c0
    MOV ESI,dword ptr [0x01d1a0dc]      ; 004ade55 | DAT_01d1a0dc
    MOV dword ptr [EBX + 0x2a1c],0x1    ; 004ade5b
    TEST ESI,ESI                        ; 004ade65
    JNZ 0x004adeae                      ; 004ade67
        ;   XREF to: 004adeae (CONDITIONAL_JUMP)  ; LAB_004adeae
    MOV ESI,0x1d1a124                   ; 004ade69
    XOR EBX,EBX                         ; 004ade6e
    MOV dword ptr [ESP + 0xac],EBX      ; 004ade70
        ;   Label: LAB_004ade70
    FILD dword ptr [ESP + 0xac]         ; 004ade77
    FADD double ptr [0x005c1c61]        ; 004ade7e | DAT_005c1c61
    FMUL double ptr [0x005c1c51]        ; 004ade84 | DAT_005c1c51
    PUSH 0x0                            ; 004ade8a
    SUB ESP,0x4                         ; 004ade8c
    FSTP float ptr [ESP]                ; 004ade8f
    PUSH ESI                            ; 004ade92
    INC EBX                             ; 004ade93
    CALL FUN_00567630                   ; 004ade94
        ;   XREF to: 00567630 (UNCONDITIONAL_CALL)  ; undefined FUN_00567630()
    ADD ESP,0xc                         ; 004ade99
    ADD ESI,0x20                        ; 004ade9c
    CMP EBX,0x40                        ; 004ade9f
    JL 0x004ade70                       ; 004adea2
        ;   XREF to: 004ade70 (CONDITIONAL_JUMP)  ; LAB_004ade70
    MOV dword ptr [0x01d1a0dc],0x1      ; 004adea4 | DAT_01d1a0dc
    MOV EAX,[0x01c6cee8]                ; 004adeae | DAT_01c6cee8
        ;   Label: LAB_004adeae
    TEST EAX,EAX                        ; 004adeb3
    JZ 0x004ae0da                       ; 004adeb5
        ;   XREF to: 004ae0da (CONDITIONAL_JUMP)  ; LAB_004ae0da
    MOV ECX,0x3                         ; 004adebb
    MOV ESI,0x800000                    ; 004adec0
    MOV EAX,[0x005f2afc]                ; 004adec5 | DAT_005f2afc
    XOR EBX,EBX                         ; 004adeca
    MOV dword ptr [ESP + 0x4],ECX       ; 004adecc
    MOV dword ptr [ESP + 0x14],EBX      ; 004aded0
    MOV dword ptr [ESP + 0x10],EBX      ; 004aded4
    MOV dword ptr [ESP + 0xc],EBX       ; 004aded8
    MOV dword ptr [ESP + 0x8],EBX       ; 004adedc
    MOV dword ptr [ESP + 0x18],EBX      ; 004adee0
    MOV dword ptr [ESP + 0x1c],ESI      ; 004adee4
    MOV dword ptr [ESP + 0x20],ESI      ; 004adee8
    MOV dword ptr [ESP + 0x28],ESI      ; 004adeec
    MOV dword ptr [ESP + 0x2c],ESI      ; 004adef0
    MOV dword ptr [ESP + 0x34],ESI      ; 004adef4
    MOV dword ptr [ESP + 0x38],ESI      ; 004adef8
    MOV ECX,0x1                         ; 004adefc
    MOV EBX,0x2                         ; 004adf01
    MOV dword ptr [ESP + 0x24],ECX      ; 004adf06
    MOV dword ptr [ESP + 0x30],EBX      ; 004adf0a
    MOV EDX,dword ptr [EAX]             ; 004adf0e
    MOV dword ptr [EDX + 0x20],0x0      ; 004adf10
    MOV EDX,dword ptr [EAX]             ; 004adf17
    MOV dword ptr [EDX + 0x24],0x0      ; 004adf19
    MOV EDX,dword ptr [EAX]             ; 004adf20
    MOV dword ptr [EDX + 0x28],0x0      ; 004adf22
    MOV EDX,dword ptr [EAX]             ; 004adf29
    MOV dword ptr [EDX + 0x50],0x0      ; 004adf2b
    MOV EDX,dword ptr [EAX]             ; 004adf32
    MOV dword ptr [EDX + 0x54],0x0      ; 004adf34
    MOV EDX,dword ptr [EAX]             ; 004adf3b
    MOV dword ptr [EDX + 0x58],0x0      ; 004adf3d
    MOV EDX,dword ptr [EAX]             ; 004adf44
    MOV dword ptr [EDX + 0x80],0x0      ; 004adf46
    MOV EDX,dword ptr [EAX]             ; 004adf50
    MOV dword ptr [EDX + 0x84],0x0      ; 004adf52
    MOV EDX,dword ptr [EAX]             ; 004adf5c
    MOV ESI,dword ptr [0x01c6e24c]      ; 004adf5e | DAT_01c6e24c
    MOV dword ptr [EDX + 0x88],0x0      ; 004adf64
    MOV EDX,0xffff                      ; 004adf6e
    MOV EBX,dword ptr [EAX]             ; 004adf73
    SUB EDX,ESI                         ; 004adf75
    MOV dword ptr [EBX + 0x2c],EDX      ; 004adf77
    MOV EBX,dword ptr [EAX]             ; 004adf7a
    MOV dword ptr [EBX + 0x5c],EDX      ; 004adf7c
    MOV EAX,dword ptr [EAX]             ; 004adf7f
    PUSH 0x5fe8c8                       ; 004adf81
    MOV dword ptr [EAX + 0x8c],EDX      ; 004adf86
    CALL FUN_0056aa10                   ; 004adf8c
        ;   XREF to: 0056aa10 (UNCONDITIONAL_CALL)  ; undefined FUN_0056aa10()
    ADD ESP,0x4                         ; 004adf91
    MOV EAX,dword ptr [EBP + 0x14]      ; 004adf94
        ;   Label: LAB_004adf94
    XOR EDI,EDI                         ; 004adf97
    MOV EDX,dword ptr [EAX + 0x164]     ; 004adf99
    MOV dword ptr [ESP + 0xa0],EDI      ; 004adf9f
    TEST EDX,EDX                        ; 004adfa6
    JLE 0x004ae0c0                      ; 004adfa8
        ;   XREF to: 004ae0c0 (CONDITIONAL_JUMP)  ; LAB_004ae0c0
    ADD EAX,0x168                       ; 004adfae
    MOV dword ptr [ESP + 0xa4],EAX      ; 004adfb3
    MOV EAX,dword ptr [ESP + 0xa4]      ; 004adfba
        ;   Label: LAB_004adfba
    FLD float ptr [EAX]                 ; 004adfc1
    FMUL float ptr [0x005c1c59]         ; 004adfc3 | DAT_005c1c59
    CALL FUN_005a3120                   ; 004adfc9
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0xa8]        ; 004adfce
    MOV EDI,dword ptr [ESP + 0xa8]      ; 004adfd5
    TEST EDI,EDI                        ; 004adfdc
    JL 0x004ae125                       ; 004adfde
        ;   XREF to: 004ae125 (CONDITIONAL_JUMP)  ; LAB_004ae125
    CMP EDI,0x40                        ; 004adfe4
    JL 0x004adff4                       ; 004adfe7
        ;   XREF to: 004adff4 (CONDITIONAL_JUMP)  ; LAB_004adff4
    MOV dword ptr [ESP + 0xa8],0x3f     ; 004adfe9
    MOV EDX,dword ptr [ESP + 0xa8]      ; 004adff4
        ;   Label: LAB_004adff4
    MOV EDI,0x1d1a124                   ; 004adffb
    LEA ESI,[EAX + 0x4]                 ; 004ae000
    SHL EDX,0x5                         ; 004ae003
    LEA EBX,[EAX + 0x10]                ; 004ae006
    ADD EDI,EDX                         ; 004ae009
    LEA EDX,[EAX + 0x1c]                ; 004ae00b
    ADD EAX,0x28                        ; 004ae00e
    PUSH EAX                            ; 004ae011
    PUSH EDX                            ; 004ae012
    PUSH EBX                            ; 004ae013
    PUSH ESI                            ; 004ae014
    PUSH EDI                            ; 004ae015
    LEA ESI,[ESP + 0xa4]                ; 004ae016
    LEA EBX,[ESP + 0x8c]                ; 004ae01d
    CALL FUN_00567860                   ; 004ae024
        ;   XREF to: 00567860 (UNCONDITIONAL_CALL)  ; undefined FUN_00567860()
    LEA EDI,[ESP + 0x98]                ; 004ae029
    LEA ESI,[ESP + 0xa4]                ; 004ae030
    LEA EAX,[ESP + 0x98]                ; 004ae037
    ADD ESP,0x14                        ; 004ae03e
    MOV EDX,dword ptr [0x005f2afc]      ; 004ae041 | DAT_005f2afc
    MOVSD ES:EDI,ESI                    ; 004ae047
    MOVSD ES:EDI,ESI                    ; 004ae048
    MOVSD ES:EDI,ESI                    ; 004ae049
    FLD float ptr [EAX]                 ; 004ae04a
    FMUL float ptr [0x005e0400]         ; 004ae04c | DAT_005e0400
    FISTP dword ptr [EBX]               ; 004ae052
    FLD float ptr [EAX + 0x4]           ; 004ae054
    FMUL float ptr [0x005e0400]         ; 004ae057 | DAT_005e0400
    FISTP dword ptr [EBX + 0x4]         ; 004ae05d
    FLD float ptr [EAX + 0x8]           ; 004ae060
    FMUL float ptr [0x005e0400]         ; 004ae063 | DAT_005e0400
    FISTP dword ptr [EBX + 0x8]         ; 004ae069
    LEA EAX,[ESP + 0x78]                ; 004ae06c
    PUSH EAX                            ; 004ae070
    MOV EAX,dword ptr [EDX]             ; 004ae071
    PUSH EAX                            ; 004ae073
    CALL FUN_005632a3                   ; 004ae074
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; undefined FUN_005632a3()
    MOV EAX,[0x005f2afc]                ; 004ae079 | DAT_005f2afc
    MOV EBX,dword ptr [EAX]             ; 004ae07e
    MOV DL,byte ptr [EBX + 0x13]        ; 004ae080
    ADD ESP,0x8                         ; 004ae083
    TEST DL,0x80                        ; 004ae086
    JZ 0x004ae133                       ; 004ae089
        ;   XREF to: 004ae133 (CONDITIONAL_JUMP)  ; LAB_004ae133
    MOV ECX,dword ptr [ESP + 0xa4]      ; 004ae08f
        ;   Label: LAB_004ae08f
    MOV EBX,dword ptr [ESP + 0xa0]      ; 004ae096
    MOV EDX,dword ptr [EBP + 0x14]      ; 004ae09d
    ADD ECX,0x34                        ; 004ae0a0
    INC EBX                             ; 004ae0a3
    MOV ESI,dword ptr [EDX + 0x164]     ; 004ae0a4
    MOV dword ptr [ESP + 0xa4],ECX      ; 004ae0aa
    MOV dword ptr [ESP + 0xa0],EBX      ; 004ae0b1
    CMP EBX,ESI                         ; 004ae0b8
    JL 0x004adfba                       ; 004ae0ba
        ;   XREF to: 004adfba (CONDITIONAL_JUMP)  ; LAB_004adfba
    MOV ESI,dword ptr [EBP + 0x14]      ; 004ae0c0
        ;   Label: LAB_004ae0c0
    PUSH ESI                            ; 004ae0c3
    CALL FUN_00408830                   ; 004ae0c4
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; undefined FUN_00408830()
    ADD ESP,0x4                         ; 004ae0c9
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004ae0cc
    MOV ESP,EBP                         ; 004ae0d3
    POP EBP                             ; 004ae0d5
    POP EDI                             ; 004ae0d6
    POP ESI                             ; 004ae0d7
    POP EBX                             ; 004ae0d8
    RET                                 ; 004ae0d9
    PUSH EAX                            ; 004ae0da
        ;   Label: LAB_004ae0da
    PUSH EAX                            ; 004ae0db
    PUSH EAX                            ; 004ae0dc
    MOV EDX,dword ptr [0x005f2afc]      ; 004ae0dd | DAT_005f2afc
    PUSH EDX                            ; 004ae0e3
    CALL FUN_0046d3d0                   ; 004ae0e4
        ;   XREF to: 0046d3d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d3d0()
    MOV EAX,[0x01c6e24c]                ; 004ae0e9 | DAT_01c6e24c
    SAR EAX,0x8                         ; 004ae0ee
    MOV [0x01d1a11c],EAX                ; 004ae0f1 | DAT_01d1a11c
    MOV EDX,dword ptr [0x01d1a11c]      ; 004ae0f6 | DAT_01d1a11c
    SHL EAX,0x8                         ; 004ae0fc
    OR EDX,EAX                          ; 004ae0ff
    MOV EAX,[0x01d1a11c]                ; 004ae101 | DAT_01d1a11c
    SHL EAX,0x10                        ; 004ae106
    OR EDX,EAX                          ; 004ae109
    MOV EAX,EDX                         ; 004ae10b
    ADD ESP,0x10                        ; 004ae10d
    XOR EAX,0xffffff                    ; 004ae110
    MOV dword ptr [0x01d1a11c],EDX      ; 004ae115 | DAT_01d1a11c
    MOV [0x01d1a120],EAX                ; 004ae11b | DAT_01d1a120
    JMP 0x004adf94                      ; 004ae120
        ;   XREF to: 004adf94 (UNCONDITIONAL_JUMP)  ; LAB_004adf94
    XOR EBX,EBX                         ; 004ae125
        ;   Label: LAB_004ae125
    MOV dword ptr [ESP + 0xa8],EBX      ; 004ae127
    JMP 0x004adff4                      ; 004ae12e
        ;   XREF to: 004adff4 (UNCONDITIONAL_JUMP)  ; LAB_004adff4
    MOV EDX,dword ptr [0x01c6cee8]      ; 004ae133 | DAT_01c6cee8
        ;   Label: LAB_004ae133
    MOV EDI,dword ptr [EBX + 0x14]      ; 004ae139
    MOV ESI,dword ptr [EBX + 0x10]      ; 004ae13c
    SAR EDI,0x10                        ; 004ae13f
    SAR ESI,0x10                        ; 004ae142
    TEST EDX,EDX                        ; 004ae145
    JZ 0x004ae1b8                       ; 004ae147
        ;   XREF to: 004ae1b8 (CONDITIONAL_JUMP)  ; LAB_004ae1b8
    MOV EDX,dword ptr [0x005fba18]      ; 004ae149 | DAT_005fba18
    DEC EDX                             ; 004ae14f
    CMP ESI,EDX                         ; 004ae150
    JGE 0x004ae08f                      ; 004ae152
        ;   XREF to: 004ae08f (CONDITIONAL_JUMP)  ; LAB_004ae08f
    MOV ESI,dword ptr [0x005fba1c]      ; 004ae158 | DAT_005fba1c
    DEC ESI                             ; 004ae15e
    CMP EDI,ESI                         ; 004ae15f
    JGE 0x004ae08f                      ; 004ae161
        ;   XREF to: 004ae08f (CONDITIONAL_JUMP)  ; LAB_004ae08f
    MOV word ptr [EBX + 0x10],0x0       ; 004ae167
    MOV word ptr [EBX + 0x14],0x0       ; 004ae16d
    MOV ESI,dword ptr [EAX]             ; 004ae173
    MOV ECX,0xc                         ; 004ae175
    LEA EDI,[ESI + 0x30]                ; 004ae17a
    MOV ESI,EBX                         ; 004ae17d
    MOVSD.REP ES:EDI,ESI                ; 004ae17f
    MOV ESI,dword ptr [EAX]             ; 004ae181
    MOV ECX,0xc                         ; 004ae183
    LEA EDI,[ESI + 0x60]                ; 004ae188
    MOV ESI,EBX                         ; 004ae18b
    MOVSD.REP ES:EDI,ESI                ; 004ae18d
    MOV EBX,dword ptr [EAX]             ; 004ae18f
    INC word ptr [EBX + 0x42]           ; 004ae191
    MOV EBX,dword ptr [EAX]             ; 004ae195
    PUSH 0x3e7                          ; 004ae197
    LEA EDX,[ESP + 0x4]                 ; 004ae19c
    MOV CX,word ptr [EBX + 0x76]        ; 004ae1a0
    PUSH EDX                            ; 004ae1a4
    INC ECX                             ; 004ae1a5
    PUSH EAX                            ; 004ae1a6
    MOV word ptr [EBX + 0x76],CX        ; 004ae1a7
    CALL FUN_0046b8f0                   ; 004ae1ab
        ;   XREF to: 0046b8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b8f0()
    ADD ESP,0xc                         ; 004ae1b0
    JMP 0x004ae08f                      ; 004ae1b3
        ;   XREF to: 004ae08f (UNCONDITIONAL_JUMP)  ; LAB_004ae08f
    PUSH 0x1                            ; 004ae1b8
        ;   Label: LAB_004ae1b8
    PUSH EBX                            ; 004ae1ba
    CALL FUN_00515a80                   ; 004ae1bb
        ;   XREF to: 00515a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00515a80()
    ADD ESP,0x8                         ; 004ae1c0
    MOV EAX,dword ptr [EBX + 0x8]       ; 004ae1c3
    TEST ESI,ESI                        ; 004ae1c6
    JL 0x004ae08f                       ; 004ae1c8
        ;   XREF to: 004ae08f (CONDITIONAL_JUMP)  ; LAB_004ae08f
    CMP ESI,dword ptr [0x005fba18]      ; 004ae1ce | DAT_005fba18
    JGE 0x004ae08f                      ; 004ae1d4
        ;   XREF to: 004ae08f (CONDITIONAL_JUMP)  ; LAB_004ae08f
    TEST EDI,EDI                        ; 004ae1da
    JL 0x004ae08f                       ; 004ae1dc
        ;   XREF to: 004ae08f (CONDITIONAL_JUMP)  ; LAB_004ae08f
    CMP EDI,dword ptr [0x005fba1c]      ; 004ae1e2 | DAT_005fba1c
    JGE 0x004ae08f                      ; 004ae1e8
        ;   XREF to: 004ae08f (CONDITIONAL_JUMP)  ; LAB_004ae08f
    PUSH EAX                            ; 004ae1ee
    PUSH EDI                            ; 004ae1ef
    PUSH ESI                            ; 004ae1f0
    CALL FUN_004add00                   ; 004ae1f1
        ;   XREF to: 004add00 (UNCONDITIONAL_CALL)  ; undefined FUN_004add00()
    ADD ESP,0xc                         ; 004ae1f6
    JMP 0x004ae08f                      ; 004ae1f9
        ;   XREF to: 004ae08f (UNCONDITIONAL_JUMP)  ; LAB_004ae08f

