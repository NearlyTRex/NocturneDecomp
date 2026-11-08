; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0055dfa0(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5)
;
;
; Referenced Globals:
;   void* PTR_waveInGetDevCapsA_005b3464 = 001b3962
;   void* PTR_waveInOpen_005b3468 = 001b3976
;   void* PTR_GlobalAlloc_005b35dc = 001b3fd0
;   void* PTR_GlobalLock_005b35e4 = 001b3fec
;   TerminatedCString s_WavInDevice_setMode_Can_005d50b7
;   undefined4 DAT_00604514
;   undefined4 DAT_00604518
;   undefined4 DAT_0060451c
;   undefined4 DAT_00604520
;   undefined4 DAT_00604524
;   undefined4 DAT_00604528
;   undefined4 DAT_0060452c
;   undefined4 DAT_00604530
;   undefined4 DAT_00604534
;   undefined4 DAT_00604538
;   ... and 11 more
;
; Called Functions:
;   FUN_0055a560
;   GlobalAlloc
;   GlobalLock
;   waveInGetDevCapsA
;   waveInOpen
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055dfa0
        ;   Label: FUN_0055dfa0
    PUSH ESI                            ; 0055dfa1
    PUSH EDI                            ; 0055dfa2
    PUSH EBP                            ; 0055dfa3
    SUB ESP,0x48                        ; 0055dfa4
    MOV EDI,dword ptr [0x02cf5664]      ; 0055dfa7 | DAT_02cf5664
    MOV EBP,dword ptr [0x02cf5660]      ; 0055dfad | DAT_02cf5660
    MOV EDX,dword ptr [ESP + 0x5c]      ; 0055dfb3
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0055dfb7
    PUSH EDX                            ; 0055dfbb
    MOV EAX,dword ptr [EAX]             ; 0055dfbc
    CALL dword ptr [EAX]                ; 0055dfbe
    ADD ESP,0x4                         ; 0055dfc0
    TEST EAX,EAX                        ; 0055dfc3
    JNZ 0x0055dfd5                      ; 0055dfc5
        ;   XREF to: 0055dfd5 (CONDITIONAL_JUMP)  ; LAB_0055dfd5
    MOV EDI,dword ptr [0x02cf5664]      ; 0055dfc7 | DAT_02cf5664
        ;   Label: LAB_0055dfc7
    ADD ESP,0x48                        ; 0055dfcd
    POP EBP                             ; 0055dfd0
    POP EDI                             ; 0055dfd1
    POP ESI                             ; 0055dfd2
    POP EBX                             ; 0055dfd3
    RET                                 ; 0055dfd4
    PUSH 0x30                           ; 0055dfd5
        ;   Label: LAB_0055dfd5
    LEA EAX,[ESP + 0x4]                 ; 0055dfd7
    PUSH EAX                            ; 0055dfdb
    MOV ECX,dword ptr [0x00604518]      ; 0055dfdc | DAT_00604518
    PUSH ECX                            ; 0055dfe2
    CALL dword ptr CS:[0x5b3464]        ; 0055dfe3 | PTR_waveInGetDevCapsA_005b3464
    TEST EAX,EAX                        ; 0055dfea
    JNZ 0x0055e1e0                      ; 0055dfec
        ;   XREF to: 0055e1e0 (CONDITIONAL_JUMP)  ; LAB_0055e1e0
    MOV EDI,dword ptr [ESP + 0x64]      ; 0055dff2
    MOV EAX,dword ptr [ESP + 0x68]      ; 0055dff6
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0055dffa
    MOV EBP,dword ptr [ESP + 0x60]      ; 0055dffe
    MOV [0x02cf5668],EAX                ; 0055e002 | DAT_02cf5668
    TEST EBX,EBX                        ; 0055e007
    SETNZ AL                            ; 0055e009
    AND EAX,0xff                        ; 0055e00c
    MOV [0x02cf566c],EAX                ; 0055e011 | DAT_02cf566c
    MOV EAX,dword ptr [ESP + 0x28]      ; 0055e016
    MOV dword ptr [ESP + 0x40],EAX      ; 0055e01a
    MOV EAX,0xffffffff                  ; 0055e01e
        ;   Label: LAB_0055e01e
    MOV ESI,0x1869f                     ; 0055e023
    XOR EDX,EDX                         ; 0055e028
    XOR EBX,EBX                         ; 0055e02a
    MOV dword ptr [ESP + 0x44],EAX      ; 0055e02c
    MOV ECX,dword ptr [ESP + 0x40]      ; 0055e030
        ;   Label: LAB_0055e030
    TEST dword ptr [EBX + 0x60451c],ECX ; 0055e034 | DAT_0060451c | DAT_0060452c
    JZ 0x0055e0a2                       ; 0055e03a
        ;   XREF to: 0055e0a2 (CONDITIONAL_JUMP)  ; LAB_0055e0a2
    MOV ECX,dword ptr [EBX + 0x604520]  ; 0055e040 | DAT_00604520 | DAT_00604530
    XOR EAX,EAX                         ; 0055e046
    CMP ECX,EBP                         ; 0055e048
    JLE 0x0055e051                      ; 0055e04a
        ;   XREF to: 0055e051 (CONDITIONAL_JUMP)  ; LAB_0055e051
    MOV EAX,0x1                         ; 0055e04c
    MOV ECX,dword ptr [EBX + 0x604520]  ; 0055e051 | DAT_00604520 | DAT_00604530
        ;   Label: LAB_0055e051
    CMP ECX,EBP                         ; 0055e057
    JGE 0x0055e05e                      ; 0055e059
        ;   XREF to: 0055e05e (CONDITIONAL_JUMP)  ; LAB_0055e05e
    ADD EAX,0x2                         ; 0055e05b
    MOV ECX,dword ptr [EBX + 0x604528]  ; 0055e05e | DAT_00604528 | DAT_00604538
        ;   Label: LAB_0055e05e
    CMP ECX,dword ptr [0x02cf5668]      ; 0055e064 | DAT_02cf5668
    JLE 0x0055e06d                      ; 0055e06a
        ;   XREF to: 0055e06d (CONDITIONAL_JUMP)  ; LAB_0055e06d
    INC EAX                             ; 0055e06c
    MOV ECX,dword ptr [EBX + 0x604528]  ; 0055e06d | DAT_00604528 | DAT_00604538
        ;   Label: LAB_0055e06d
    CMP ECX,dword ptr [0x02cf5668]      ; 0055e073 | DAT_02cf5668
    JGE 0x0055e07e                      ; 0055e079
        ;   XREF to: 0055e07e (CONDITIONAL_JUMP)  ; LAB_0055e07e
    ADD EAX,0x2                         ; 0055e07b
    MOV ECX,dword ptr [EBX + 0x604524]  ; 0055e07e | DAT_00604524 | DAT_00604534
        ;   Label: LAB_0055e07e
    CMP ECX,EDI                         ; 0055e084
    JLE 0x0055e08b                      ; 0055e086
        ;   XREF to: 0055e08b (CONDITIONAL_JUMP)  ; LAB_0055e08b
    ADD EAX,0x2                         ; 0055e088
    MOV ECX,dword ptr [EBX + 0x604524]  ; 0055e08b | DAT_00604524 | DAT_00604534
        ;   Label: LAB_0055e08b
    CMP ECX,EDI                         ; 0055e091
    JGE 0x0055e098                      ; 0055e093
        ;   XREF to: 0055e098 (CONDITIONAL_JUMP)  ; LAB_0055e098
    ADD EAX,0x3                         ; 0055e095
    CMP EAX,ESI                         ; 0055e098
        ;   Label: LAB_0055e098
    JGE 0x0055e0a2                      ; 0055e09a
        ;   XREF to: 0055e0a2 (CONDITIONAL_JUMP)  ; LAB_0055e0a2
    MOV dword ptr [ESP + 0x44],EDX      ; 0055e09c
    MOV ESI,EAX                         ; 0055e0a0
    INC EDX                             ; 0055e0a2
        ;   Label: LAB_0055e0a2
    ADD EBX,0x10                        ; 0055e0a3
    CMP EDX,0xc                         ; 0055e0a6
    JL 0x0055e030                       ; 0055e0a9
        ;   XREF to: 0055e030 (CONDITIONAL_JUMP)  ; LAB_0055e030
    MOV EBX,dword ptr [ESP + 0x44]      ; 0055e0ab
    MOV dword ptr [0x02cf5664],EDI      ; 0055e0af | DAT_02cf5664
    MOV dword ptr [0x02cf5660],EBP      ; 0055e0b5 | DAT_02cf5660
    TEST EBX,EBX                        ; 0055e0bb
    JL 0x0055e1f0                       ; 0055e0bd
        ;   XREF to: 0055e1f0 (CONDITIONAL_JUMP)  ; LAB_0055e1f0
    MOV EAX,EBX                         ; 0055e0c3
    SHL EAX,0x4                         ; 0055e0c5
    MOV EDX,dword ptr [EAX + 0x604520]  ; 0055e0c8 | DAT_00604520
    MOV dword ptr [0x02cf5648],EDX      ; 0055e0ce | DAT_02cf5648
    MOV ESI,dword ptr [0x02cf5648]      ; 0055e0d4 | DAT_02cf5648
    MOV EDX,dword ptr [EAX + 0x604524]  ; 0055e0da | DAT_00604524
    MOV EAX,dword ptr [EAX + 0x604528]  ; 0055e0e0 | DAT_00604528
    MOV dword ptr [0x02cf564c],EDX      ; 0055e0e6 | DAT_02cf564c
    MOV [0x02cf5650],EAX                ; 0055e0ec | DAT_02cf5650
    CMP ESI,0x8                         ; 0055e0f1
    SETZ AL                             ; 0055e0f4
    MOV ECX,0x14                        ; 0055e0f7
    AND EAX,0xff                        ; 0055e0fc
    MOV EDX,dword ptr [0x02cf5650]      ; 0055e101 | DAT_02cf5650
    MOV [0x02cf5654],EAX                ; 0055e107 | DAT_02cf5654
    MOV EAX,EDX                         ; 0055e10c
    SAR EDX,0x1f                        ; 0055e10e
    IDIV ECX                            ; 0055e111
    MOV EDX,dword ptr [0x02cf5650]      ; 0055e113 | DAT_02cf5650
    MOV [0x02cf5658],EAX                ; 0055e119 | DAT_02cf5658
    ADD EDX,EDX                         ; 0055e11e
    MOV ECX,EAX                         ; 0055e120
    MOV EAX,EDX                         ; 0055e122
    SAR EDX,0x1f                        ; 0055e124
    IDIV ECX                            ; 0055e127
    MOV [0x02cf565c],EAX                ; 0055e129 | DAT_02cf565c
    CMP EAX,0x14                        ; 0055e12e
    JLE 0x0055e13d                      ; 0055e131
        ;   XREF to: 0055e13d (CONDITIONAL_JUMP)  ; LAB_0055e13d
    MOV dword ptr [0x02cf565c],0x14     ; 0055e133 | DAT_02cf565c
    MOV ECX,dword ptr [0x02cf565c]      ; 0055e13d | DAT_02cf565c
        ;   Label: LAB_0055e13d
    MOV dword ptr [0x02cf5664],EDI      ; 0055e143 | DAT_02cf5664
    MOV dword ptr [0x02cf5660],EBP      ; 0055e149 | DAT_02cf5660
    XOR ESI,ESI                         ; 0055e14f
    TEST ECX,ECX                        ; 0055e151
    JLE 0x0055e192                      ; 0055e153
        ;   XREF to: 0055e192 (CONDITIONAL_JUMP)  ; LAB_0055e192
    XOR EBX,EBX                         ; 0055e155
    MOV EAX,[0x02cf5648]                ; 0055e157 | DAT_02cf5648
        ;   Label: LAB_0055e157
    MOV EDX,EAX                         ; 0055e15c
    SAR EDX,0x1f                        ; 0055e15e
    SHL EDX,0x3                         ; 0055e161
    SBB EAX,EDX                         ; 0055e164
    SAR EAX,0x3                         ; 0055e166
    IMUL EAX,dword ptr [0x02cf5658]     ; 0055e169 | DAT_02cf5658
    IMUL EAX,dword ptr [0x02cf564c]     ; 0055e170 | DAT_02cf564c
    PUSH EAX                            ; 0055e177
    PUSH 0x2002                         ; 0055e178
    CALL dword ptr CS:[0x5b35dc]        ; 0055e17d | PTR_GlobalAlloc_005b35dc
    MOV dword ptr [EBX + 0x2cf55a8],EAX ; 0055e184
    TEST EAX,EAX                        ; 0055e18a
    JNZ 0x0055e20d                      ; 0055e18c
        ;   XREF to: 0055e20d (CONDITIONAL_JUMP)  ; LAB_0055e20d
    CMP ESI,dword ptr [0x02cf565c]      ; 0055e192 | DAT_02cf565c
        ;   Label: LAB_0055e192
    JGE 0x0055e26a                      ; 0055e198
        ;   XREF to: 0055e26a (CONDITIONAL_JUMP)  ; LAB_0055e26a
    MOV EDX,dword ptr [ESP + 0x5c]      ; 0055e19e
        ;   Label: LAB_0055e19e
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0055e1a2
    PUSH EDX                            ; 0055e1a6
    MOV EAX,dword ptr [EAX]             ; 0055e1a7
    CALL dword ptr [EAX]                ; 0055e1a9
    ADD ESP,0x4                         ; 0055e1ab
    TEST EAX,EAX                        ; 0055e1ae
    JZ 0x0055dfc7                       ; 0055e1b0
        ;   XREF to: 0055dfc7 (CONDITIONAL_JUMP)  ; LAB_0055dfc7
    MOV EAX,dword ptr [ESP + 0x44]      ; 0055e1b6
    SHL EAX,0x4                         ; 0055e1ba
    MOV EAX,dword ptr [EAX + 0x60451c]  ; 0055e1bd | DAT_0060451c
    MOV ECX,dword ptr [ESP + 0x40]      ; 0055e1c3
    NOT EAX                             ; 0055e1c7
    MOV EBP,dword ptr [0x02cf5660]      ; 0055e1c9 | DAT_02cf5660
    AND ECX,EAX                         ; 0055e1cf
    MOV EDI,dword ptr [0x02cf5664]      ; 0055e1d1 | DAT_02cf5664
    MOV dword ptr [ESP + 0x40],ECX      ; 0055e1d7
    JMP 0x0055e01e                      ; 0055e1db
        ;   XREF to: 0055e01e (UNCONDITIONAL_JUMP)  ; LAB_0055e01e
    XOR EAX,EAX                         ; 0055e1e0
        ;   Label: LAB_0055e1e0
    MOV EDI,dword ptr [0x02cf5664]      ; 0055e1e2 | DAT_02cf5664
    ADD ESP,0x48                        ; 0055e1e8
    POP EBP                             ; 0055e1eb
    POP EDI                             ; 0055e1ec
    POP ESI                             ; 0055e1ed
    POP EBX                             ; 0055e1ee
    RET                                 ; 0055e1ef
    PUSH 0x5d50b7                       ; 0055e1f0 | = "WavInDevice::setMode - Can't set any ..."
        ;   Label: LAB_0055e1f0
    CALL FUN_0055a560                   ; 0055e1f5
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined FUN_0055a560()
    ADD ESP,0x4                         ; 0055e1fa
    XOR EAX,EAX                         ; 0055e1fd
    MOV EDI,dword ptr [0x02cf5664]      ; 0055e1ff | DAT_02cf5664
    ADD ESP,0x48                        ; 0055e205
    POP EBP                             ; 0055e208
    POP EDI                             ; 0055e209
    POP ESI                             ; 0055e20a
    POP EBX                             ; 0055e20b
    RET                                 ; 0055e20c
    PUSH EAX                            ; 0055e20d
        ;   Label: LAB_0055e20d
    CALL dword ptr CS:[0x5b35e4]        ; 0055e20e | PTR_GlobalLock_005b35e4
    MOV dword ptr [EBX + 0x2cf55f8],EAX ; 0055e215
    TEST EAX,EAX                        ; 0055e21b
    JZ 0x0055e192                       ; 0055e21d
        ;   XREF to: 0055e192 (CONDITIONAL_JUMP)  ; LAB_0055e192
    PUSH 0x20                           ; 0055e223
    PUSH 0x2002                         ; 0055e225
    CALL dword ptr CS:[0x5b35dc]        ; 0055e22a | PTR_GlobalAlloc_005b35dc
    MOV dword ptr [EBX + 0x2cf5508],EAX ; 0055e231
    TEST EAX,EAX                        ; 0055e237
    JZ 0x0055e192                       ; 0055e239
        ;   XREF to: 0055e192 (CONDITIONAL_JUMP)  ; LAB_0055e192
    MOV EAX,dword ptr [EBX + 0x2cf5508] ; 0055e23f
    PUSH EAX                            ; 0055e245
    ADD EBX,0x4                         ; 0055e246
    INC ESI                             ; 0055e249
    CALL dword ptr CS:[0x5b35e4]        ; 0055e24a | PTR_GlobalLock_005b35e4
    MOV EDX,dword ptr [0x02cf565c]      ; 0055e251 | DAT_02cf565c
    MOV dword ptr [EBX + 0x2cf5554],EAX ; 0055e257
    CMP ESI,EDX                         ; 0055e25d
    JL 0x0055e157                       ; 0055e25f
        ;   XREF to: 0055e157 (CONDITIONAL_JUMP)  ; LAB_0055e157
    JMP 0x0055e192                      ; 0055e265
        ;   XREF to: 0055e192 (UNCONDITIONAL_JUMP)  ; LAB_0055e192
    MOV EDX,0x1                         ; 0055e26a
        ;   Label: LAB_0055e26a
    MOV AX,[0x02cf5648]                 ; 0055e26f | DAT_02cf5648
    MOV word ptr [ESP + 0x30],DX        ; 0055e275
    MOV word ptr [ESP + 0x3e],AX        ; 0055e27a
    XOR EDX,EDX                         ; 0055e27f
    MOV AX,[0x02cf564c]                 ; 0055e281 | DAT_02cf564c
    MOV DX,word ptr [ESP + 0x3e]        ; 0055e287
    MOV word ptr [ESP + 0x32],AX        ; 0055e28c
    MOV EAX,EDX                         ; 0055e291
    SAR EDX,0x1f                        ; 0055e293
    SHL EDX,0x3                         ; 0055e296
    SBB EAX,EDX                         ; 0055e299
    SAR EAX,0x3                         ; 0055e29b
    XOR EDX,EDX                         ; 0055e29e
    MOV DX,word ptr [ESP + 0x32]        ; 0055e2a0
    IMUL EAX,EDX                        ; 0055e2a5
    MOV word ptr [ESP + 0x3c],AX        ; 0055e2a8
    MOV EAX,[0x02cf5650]                ; 0055e2ad | DAT_02cf5650
    MOV dword ptr [ESP + 0x34],EAX      ; 0055e2b2
    XOR EAX,EAX                         ; 0055e2b6
    MOV EDX,dword ptr [ESP + 0x34]      ; 0055e2b8
    MOV AX,word ptr [ESP + 0x3c]        ; 0055e2bc
    IMUL EDX,EAX                        ; 0055e2c1
    PUSH 0x0                            ; 0055e2c4
    PUSH 0x0                            ; 0055e2c6
    PUSH 0x0                            ; 0055e2c8
    LEA EAX,[ESP + 0x3c]                ; 0055e2ca
    PUSH EAX                            ; 0055e2ce
    MOV ESI,dword ptr [0x00604514]      ; 0055e2cf | DAT_00604514
    PUSH ESI                            ; 0055e2d5
    PUSH 0x2cf5504                      ; 0055e2d6 | DAT_02cf5504
    MOV dword ptr [ESP + 0x50],EDX      ; 0055e2db
    CALL dword ptr CS:[0x5b3468]        ; 0055e2df | PTR_waveInOpen_005b3468
    TEST EAX,EAX                        ; 0055e2e6
    JNZ 0x0055e19e                      ; 0055e2e8
        ;   XREF to: 0055e19e (CONDITIONAL_JUMP)  ; LAB_0055e19e
    MOV EAX,0x1                         ; 0055e2ee
    MOV EDI,dword ptr [0x02cf5664]      ; 0055e2f3 | DAT_02cf5664
    ADD ESP,0x48                        ; 0055e2f9
    POP EBP                             ; 0055e2fc
    POP EDI                             ; 0055e2fd
    POP ESI                             ; 0055e2fe
    POP EBX                             ; 0055e2ff
    RET                                 ; 0055e300

