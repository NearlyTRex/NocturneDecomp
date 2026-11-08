; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00461f70(int *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   FUN_00469590 at 004695fa
;   FUN_0046bd80 at 0046bf2c
;   FUN_0046bff0 at 0046c181
;
; Referenced Globals:
;   undefined4 DAT_00622014
;   undefined4 DAT_0062201c
;   undefined4 DAT_00622020
;   undefined4 DAT_00622024
;   undefined4 DAT_00622028
;   undefined4 DAT_0062202c
;   undefined4 DAT_00622030
;   undefined4 DAT_00622034
;   undefined4 DAT_00622038
;   undefined4 DAT_0062203c
;   undefined4 DAT_00622040
;   undefined4 DAT_0070ca74
;   undefined4 DAT_0070ca7c
;   undefined4 DAT_01ba51c8
;   undefined4 DAT_01ba51cc
;   ... and 8 more
;
; Called Functions:
;   FUN_0051c760
;   FUN_0055d6d7
;   FUN_0055f920
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00461f70
        ;   Label: FUN_00461f70
    PUSH ESI                            ; 00461f71
    PUSH EDI                            ; 00461f72
    PUSH EBP                            ; 00461f73
    SUB ESP,0x5c                        ; 00461f74
    MOV EBP,dword ptr [0x01ba51c8]      ; 00461f77 | DAT_01ba51c8
    CMP dword ptr [0x0070ca7c],0x0      ; 00461f7d | DAT_0070ca7c
    JNZ 0x00462007                      ; 00461f84
        ;   XREF to: 00462007 (CONDITIONAL_JUMP)  ; LAB_00462007
    MOV ECX,dword ptr [0x01e61b58]      ; 00461f8a | DAT_01e61b58
        ;   Label: LAB_00461f8a
    MOV EBX,dword ptr [0x01c37788]      ; 00461f90 | DAT_01c37788
    INC ECX                             ; 00461f96
    MOV EBP,dword ptr [0x01ba51c8]      ; 00461f97 | DAT_01ba51c8
    MOV dword ptr [0x01e61b58],ECX      ; 00461f9d | DAT_01e61b58
    TEST EBX,EBX                        ; 00461fa3
    JZ 0x0046206f                       ; 00461fa5
        ;   XREF to: 0046206f (CONDITIONAL_JUMP)  ; LAB_0046206f
    CMP dword ptr [0x0070ca74],0x0      ; 00461fab | DAT_0070ca74
    JNZ 0x0046206f                      ; 00461fb2
        ;   XREF to: 0046206f (CONDITIONAL_JUMP)  ; LAB_0046206f
    MOV ECX,dword ptr [ESP + 0x74]      ; 00461fb8
    XOR EBX,EBX                         ; 00461fbc
    TEST ECX,ECX                        ; 00461fbe
    JLE 0x00461fe0                      ; 00461fc0
        ;   XREF to: 00461fe0 (CONDITIONAL_JUMP)  ; LAB_00461fe0
    MOV EAX,dword ptr [ESP + 0x70]      ; 00461fc2
    IMUL EDX,dword ptr [EAX],0x30       ; 00461fc6
        ;   Label: LAB_00461fc6
    INC EBX                             ; 00461fc9
    ADD EDX,0x622014                    ; 00461fca | DAT_00622014
    MOV dword ptr [ESP + EBX*0x4 + -0x4],EDX ; 00461fd0
    MOV EDX,dword ptr [ESP + 0x74]      ; 00461fd4
    ADD EAX,0x4                         ; 00461fd8
    CMP EBX,EDX                         ; 00461fdb
    JL 0x00461fc6                       ; 00461fdd
        ;   XREF to: 00461fc6 (CONDITIONAL_JUMP)  ; LAB_00461fc6
    NOP                                 ; 00461fdf
    MOV ECX,dword ptr [0x01c38b54]      ; 00461fe0 | DAT_01c38b54
        ;   Label: LAB_00461fe0
    PUSH ECX                            ; 00461fe6
    MOV EBX,dword ptr [ESP + 0x78]      ; 00461fe7
    PUSH EBX                            ; 00461feb
    LEA EAX,[ESP + 0x8]                 ; 00461fec
    PUSH EAX                            ; 00461ff0
    CALL FUN_0055f920                   ; 00461ff1
        ;   XREF to: 0055f920 (UNCONDITIONAL_CALL)  ; undefined FUN_0055f920()
    ADD ESP,0xc                         ; 00461ff6
    MOV EBP,dword ptr [0x01ba51c8]      ; 00461ff9 | DAT_01ba51c8
        ;   Label: LAB_00461ff9
    ADD ESP,0x5c                        ; 00461fff
    POP EBP                             ; 00462002
    POP EDI                             ; 00462003
    POP ESI                             ; 00462004
    POP EBX                             ; 00462005
    RET                                 ; 00462006
    MOV EDX,dword ptr [ESP + 0x70]      ; 00462007
        ;   Label: LAB_00462007
    MOV EDX,dword ptr [EDX + 0x8]       ; 0046200b
    LEA EAX,[EDX*0x4 + 0x0]             ; 0046200e
    SUB EAX,EDX                         ; 00462015
    SHL EAX,0x4                         ; 00462017
    MOV EDX,dword ptr [ESP + 0x70]      ; 0046201a
    ADD EAX,0x622014                    ; 0046201e | DAT_00622014
    MOV EDX,dword ptr [EDX + 0x4]       ; 00462023
    PUSH EAX                            ; 00462026
    LEA EAX,[EDX*0x4 + 0x0]             ; 00462027
    SUB EAX,EDX                         ; 0046202e
    SHL EAX,0x4                         ; 00462030
    MOV EDX,dword ptr [ESP + 0x74]      ; 00462033
    ADD EAX,0x622014                    ; 00462037 | DAT_00622014
    MOV EDX,dword ptr [EDX]             ; 0046203c
    PUSH EAX                            ; 0046203e
    LEA EAX,[EDX*0x4 + 0x0]             ; 0046203f
    SUB EAX,EDX                         ; 00462046
    SHL EAX,0x4                         ; 00462048
    ADD EAX,0x622014                    ; 0046204b | DAT_00622014
    PUSH EAX                            ; 00462050
    CALL FUN_0051c760                   ; 00462051
        ;   XREF to: 0051c760 (UNCONDITIONAL_CALL)  ; undefined FUN_0051c760()
    ADD ESP,0xc                         ; 00462056
    TEST EAX,EAX                        ; 00462059
    JNZ 0x00461f8a                      ; 0046205b
        ;   XREF to: 00461f8a (CONDITIONAL_JUMP)  ; LAB_00461f8a
    MOV EBP,dword ptr [0x01ba51c8]      ; 00462061 | DAT_01ba51c8
    ADD ESP,0x5c                        ; 00462067
    POP EBP                             ; 0046206a
    POP EDI                             ; 0046206b
    POP ESI                             ; 0046206c
    POP EBX                             ; 0046206d
    RET                                 ; 0046206e
    MOV EDI,0x4b0                       ; 0046206f
        ;   Label: LAB_0046206f
    XOR EBP,EBP                         ; 00462074
    MOV EDX,dword ptr [ESP + 0x74]      ; 00462076
    MOV dword ptr [0x01ba56d0],EBP      ; 0046207a | DAT_01ba56d0
    MOV dword ptr [ESP + 0x48],EBP      ; 00462080
    MOV dword ptr [0x01ba56cc],EDI      ; 00462084 | DAT_01ba56cc
    TEST EDX,EDX                        ; 0046208a
    JLE 0x004620fa                      ; 0046208c
        ;   XREF to: 004620fa (CONDITIONAL_JUMP)  ; LAB_004620fa
    MOV EAX,dword ptr [ESP + 0x70]      ; 0046208e
    MOV dword ptr [ESP + 0x44],EAX      ; 00462092
    MOV EAX,dword ptr [ESP + 0x48]      ; 00462096
        ;   Label: LAB_00462096
    MOV EDX,dword ptr [ESP + 0x74]      ; 0046209a
    INC EAX                             ; 0046209e
    CMP EAX,EDX                         ; 0046209f
    JL 0x004620a5                       ; 004620a1
        ;   XREF to: 004620a5 (CONDITIONAL_JUMP)  ; LAB_004620a5
    XOR EAX,EAX                         ; 004620a3
    MOV ECX,dword ptr [ESP + 0x70]      ; 004620a5
        ;   Label: LAB_004620a5
    SHL EAX,0x2                         ; 004620a9
    ADD EAX,ECX                         ; 004620ac
    IMUL ECX,dword ptr [EAX],0x30       ; 004620ae
    MOV EAX,dword ptr [ESP + 0x44]      ; 004620b1
    IMUL EBX,dword ptr [EAX],0x30       ; 004620b5
    ADD ECX,0x622014                    ; 004620b8 | DAT_00622014
    ADD EBX,0x622014                    ; 004620be | DAT_00622014
    MOV dword ptr [ESP + 0x50],ECX      ; 004620c4
    MOV EDX,dword ptr [ECX + 0x14]      ; 004620c8 | DAT_00622028
    MOV EAX,dword ptr [EBX + 0x14]      ; 004620cb | DAT_00622028
    SAR EDX,0x10                        ; 004620ce
    SAR EAX,0x10                        ; 004620d1
    MOV ESI,EBX                         ; 004620d4
    CMP EAX,EDX                         ; 004620d6
    JNZ 0x004622e8                      ; 004620d8
        ;   XREF to: 004622e8 (CONDITIONAL_JUMP)  ; LAB_004622e8
    MOV EBX,dword ptr [ESP + 0x44]      ; 004620de
        ;   Label: LAB_004620de
    MOV ESI,dword ptr [ESP + 0x48]      ; 004620e2
    MOV EDI,dword ptr [ESP + 0x74]      ; 004620e6
    ADD EBX,0x4                         ; 004620ea
    INC ESI                             ; 004620ed
    MOV dword ptr [ESP + 0x44],EBX      ; 004620ee
    MOV dword ptr [ESP + 0x48],ESI      ; 004620f2
    CMP ESI,EDI                         ; 004620f6
    JL 0x00462096                       ; 004620f8
        ;   XREF to: 00462096 (CONDITIONAL_JUMP)  ; LAB_00462096
    MOV EBX,0x1ba51cc                   ; 004620fa
        ;   Label: LAB_004620fa
    XOR EAX,EAX                         ; 004620ff
    MOV ESI,dword ptr [0x01ba56cc]      ; 00462101 | DAT_01ba56cc
    MOV [0x01ba5c80],EAX                ; 00462107 | DAT_01ba5c80
    TEST EBP,EBP                        ; 0046210c
    JLE 0x0046255d                      ; 0046210e
        ;   XREF to: 0046255d (CONDITIONAL_JUMP)  ; LAB_0046255d
    CMP ESI,dword ptr [EBX]             ; 00462114 | DAT_01ba51cc | DAT_01ba521c
        ;   Label: LAB_00462114
    JNZ 0x00462551                      ; 00462116
        ;   XREF to: 00462551 (CONDITIONAL_JUMP)  ; LAB_00462551
    TEST EBX,EBX                        ; 0046211c
    JZ 0x00462551                       ; 0046211e
        ;   XREF to: 00462551 (CONDITIONAL_JUMP)  ; LAB_00462551
    MOV dword ptr [ESP + 0x54],EBX      ; 00462124 | DAT_01ba51cc | DAT_01ba521c
        ;   Label: LAB_00462124
    MOV dword ptr [0x01ba51c8],EBP      ; 00462128 | DAT_01ba51c8
    TEST EBX,EBX                        ; 0046212e
    JZ 0x00461ff9                       ; 00462130
        ;   XREF to: 00461ff9 (CONDITIONAL_JUMP)  ; LAB_00461ff9
    MOV EAX,0x1ba51cc                   ; 00462136
    MOV ECX,dword ptr [0x01ba56cc]      ; 0046213b | DAT_01ba56cc
    XOR EDX,EDX                         ; 00462141
    TEST EBP,EBP                        ; 00462143
    JLE 0x00462570                      ; 00462145
        ;   XREF to: 00462570 (CONDITIONAL_JUMP)  ; LAB_00462570
    CMP ECX,dword ptr [EAX]             ; 0046214b | DAT_01ba51cc | DAT_01ba521c
        ;   Label: LAB_0046214b
    JNZ 0x00462564                      ; 0046214d
        ;   XREF to: 00462564 (CONDITIONAL_JUMP)  ; LAB_00462564
    CMP EAX,EBX                         ; 00462153
    JZ 0x00462564                       ; 00462155
        ;   XREF to: 00462564 (CONDITIONAL_JUMP)  ; LAB_00462564
    MOV dword ptr [ESP + 0x58],EAX      ; 0046215b | DAT_01ba51cc | DAT_01ba521c
        ;   Label: LAB_0046215b
    MOV dword ptr [0x01ba51c8],EBP      ; 0046215f | DAT_01ba51c8
    TEST EAX,EAX                        ; 00462165
    JZ 0x00461ff9                       ; 00462167
        ;   XREF to: 00461ff9 (CONDITIONAL_JUMP)  ; LAB_00461ff9
    MOV EAX,[0x01ba56cc]                ; 0046216d | DAT_01ba56cc
    MOV dword ptr [ESP + 0x4c],EAX      ; 00462172
    MOV EDX,dword ptr [ESP + 0x54]      ; 00462176
        ;   Label: LAB_00462176
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0046217a
    MOV ESI,dword ptr [EDX + 0x4]       ; 0046217e
    MOV dword ptr [0x01ba51c8],EBP      ; 00462181 | DAT_01ba51c8
    CMP EAX,ESI                         ; 00462187
    JL 0x004621c8                       ; 00462189
        ;   XREF to: 004621c8 (CONDITIONAL_JUMP)  ; LAB_004621c8
    MOV ECX,dword ptr [ESP + 0x58]      ; 0046218b
    MOV EBX,EAX                         ; 0046218f
    MOV dword ptr [EDX],0xffffffff      ; 00462191
    MOV EAX,0x1ba51cc                   ; 00462197
    XOR EDX,EDX                         ; 0046219c
    TEST EBP,EBP                        ; 0046219e
    JLE 0x00462583                      ; 004621a0
        ;   XREF to: 00462583 (CONDITIONAL_JUMP)  ; LAB_00462583
    CMP EBX,dword ptr [EAX]             ; 004621a6 | DAT_01ba51cc | DAT_01ba521c
        ;   Label: LAB_004621a6
    JNZ 0x00462577                      ; 004621a8
        ;   XREF to: 00462577 (CONDITIONAL_JUMP)  ; LAB_00462577
    CMP EAX,ECX                         ; 004621ae
    JZ 0x00462577                       ; 004621b0
        ;   XREF to: 00462577 (CONDITIONAL_JUMP)  ; LAB_00462577
    MOV dword ptr [ESP + 0x54],EAX      ; 004621b6 | DAT_01ba51cc | DAT_01ba521c
        ;   Label: LAB_004621b6
    MOV dword ptr [0x01ba51c8],EBP      ; 004621ba | DAT_01ba51c8
    TEST EAX,EAX                        ; 004621c0
    JZ 0x00461ff9                       ; 004621c2
        ;   XREF to: 00461ff9 (CONDITIONAL_JUMP)  ; LAB_00461ff9
    MOV EDX,dword ptr [ESP + 0x58]      ; 004621c8
        ;   Label: LAB_004621c8
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004621cc
    CMP EAX,dword ptr [EDX + 0x4]       ; 004621d0
    JL 0x00462218                       ; 004621d3
        ;   XREF to: 00462218 (CONDITIONAL_JUMP)  ; LAB_00462218
    MOV ECX,dword ptr [ESP + 0x54]      ; 004621d5
    MOV EBP,dword ptr [0x01ba51c8]      ; 004621d9 | DAT_01ba51c8
    MOV EBX,EAX                         ; 004621df
    MOV dword ptr [EDX],0xffffffff      ; 004621e1
    MOV EAX,0x1ba51cc                   ; 004621e7
    XOR EDX,EDX                         ; 004621ec
    TEST EBP,EBP                        ; 004621ee
    JLE 0x00462596                      ; 004621f0
        ;   XREF to: 00462596 (CONDITIONAL_JUMP)  ; LAB_00462596
    CMP EBX,dword ptr [EAX]             ; 004621f6 | DAT_01ba51cc | DAT_01ba521c
        ;   Label: LAB_004621f6
    JNZ 0x0046258a                      ; 004621f8
        ;   XREF to: 0046258a (CONDITIONAL_JUMP)  ; LAB_0046258a
    CMP EAX,ECX                         ; 004621fe
    JZ 0x0046258a                       ; 00462200
        ;   XREF to: 0046258a (CONDITIONAL_JUMP)  ; LAB_0046258a
    MOV dword ptr [ESP + 0x58],EAX      ; 00462206 | DAT_01ba521c | DAT_01ba51cc
        ;   Label: LAB_00462206
    MOV dword ptr [0x01ba51c8],EBP      ; 0046220a | DAT_01ba51c8
    TEST EAX,EAX                        ; 00462210
    JZ 0x00461ff9                       ; 00462212
        ;   XREF to: 00461ff9 (CONDITIONAL_JUMP)  ; LAB_00461ff9
    MOV EDI,dword ptr [ESP + 0x58]      ; 00462218
        ;   Label: LAB_00462218
    MOV ESI,dword ptr [ESP + 0x54]      ; 0046221c
    MOV EBX,dword ptr [ESP + 0x4c]      ; 00462220
    CALL FUN_0055d6d7                   ; 00462224
        ;   XREF to: 0055d6d7 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d6d7()
    CMP dword ptr [0x01ba5c80],0x0      ; 00462229 | DAT_01ba5c80
    JNZ 0x00461ff9                      ; 00462230
        ;   XREF to: 00461ff9 (CONDITIONAL_JUMP)  ; LAB_00461ff9
    MOV EDX,dword ptr [ESP + 0x54]      ; 00462236
    MOV EAX,dword ptr [ESP + 0x54]      ; 0046223a
    MOV ECX,dword ptr [EDX + 0x8]       ; 0046223e
    MOV EAX,dword ptr [EAX + 0xc]       ; 00462241
    MOV EBX,dword ptr [EDX + 0x18]      ; 00462244
    ADD ECX,EAX                         ; 00462247
    MOV EAX,dword ptr [EDX + 0x1c]      ; 00462249
    MOV dword ptr [EDX + 0x8],ECX       ; 0046224c
    ADD EBX,EAX                         ; 0046224f
    MOV dword ptr [EDX + 0x18],EBX      ; 00462251
    MOV ESI,dword ptr [EDX + 0x20]      ; 00462254
    MOV EDI,dword ptr [EDX + 0x10]      ; 00462257
    MOV ECX,dword ptr [EDX + 0x28]      ; 0046225a
    MOV EAX,dword ptr [EDX + 0x24]      ; 0046225d
    MOV EBX,dword ptr [EDX + 0x30]      ; 00462260
    ADD ESI,EAX                         ; 00462263
    MOV EAX,dword ptr [EDX + 0x14]      ; 00462265
    MOV dword ptr [EDX + 0x20],ESI      ; 00462268
    ADD EDI,EAX                         ; 0046226b
    MOV EAX,dword ptr [EDX + 0x2c]      ; 0046226d
    MOV dword ptr [EDX + 0x10],EDI      ; 00462270
    ADD ECX,EAX                         ; 00462273
    MOV EAX,dword ptr [EDX + 0x34]      ; 00462275
    MOV dword ptr [EDX + 0x28],ECX      ; 00462278
    ADD EBX,EAX                         ; 0046227b
    MOV EAX,dword ptr [ESP + 0x58]      ; 0046227d
    MOV dword ptr [EDX + 0x30],EBX      ; 00462281
    MOV EDX,dword ptr [ESP + 0x58]      ; 00462284
    MOV EAX,dword ptr [EAX + 0xc]       ; 00462288
    MOV ESI,dword ptr [EDX + 0x8]       ; 0046228b
    MOV EDI,dword ptr [EDX + 0x18]      ; 0046228e
    ADD ESI,EAX                         ; 00462291
    MOV EAX,dword ptr [EDX + 0x1c]      ; 00462293
    MOV dword ptr [EDX + 0x8],ESI       ; 00462296
    ADD EDI,EAX                         ; 00462299
    MOV dword ptr [EDX + 0x18],EDI      ; 0046229b
    MOV ECX,dword ptr [EDX + 0x20]      ; 0046229e
    MOV EBX,dword ptr [EDX + 0x10]      ; 004622a1
    MOV ESI,dword ptr [EDX + 0x28]      ; 004622a4
    MOV EAX,dword ptr [EDX + 0x24]      ; 004622a7
    MOV EDI,dword ptr [EDX + 0x30]      ; 004622aa
    ADD ECX,EAX                         ; 004622ad
    MOV EAX,dword ptr [EDX + 0x14]      ; 004622af
    MOV dword ptr [EDX + 0x20],ECX      ; 004622b2
    ADD EBX,EAX                         ; 004622b5
    MOV EAX,dword ptr [EDX + 0x2c]      ; 004622b7
    MOV dword ptr [EDX + 0x10],EBX      ; 004622ba
    ADD ESI,EAX                         ; 004622bd
    MOV EAX,dword ptr [EDX + 0x34]      ; 004622bf
    MOV dword ptr [EDX + 0x28],ESI      ; 004622c2
    ADD EDI,EAX                         ; 004622c5
    MOV dword ptr [EDX + 0x30],EDI      ; 004622c7
    MOV DL,byte ptr [0x01c38b55]        ; 004622ca | DAT_01c38b55
    MOV EBP,dword ptr [0x01ba51c8]      ; 004622d0 | DAT_01ba51c8
    TEST DL,0x2                         ; 004622d6
    JNZ 0x0046259d                      ; 004622d9
        ;   XREF to: 0046259d (CONDITIONAL_JUMP)  ; LAB_0046259d
    INC dword ptr [ESP + 0x4c]          ; 004622df
    JMP 0x00462176                      ; 004622e3
        ;   XREF to: 00462176 (UNCONDITIONAL_JUMP)  ; LAB_00462176
    MOV EDI,dword ptr [EBX + 0x14]      ; 004622e8 | DAT_00622028
        ;   Label: LAB_004622e8
    CMP EDI,dword ptr [ECX + 0x14]      ; 004622eb | DAT_00622028
    JLE 0x004622fc                      ; 004622ee
        ;   XREF to: 004622fc (CONDITIONAL_JUMP)  ; LAB_004622fc
    MOV ESI,ECX                         ; 004622f0
    MOV dword ptr [ESP + 0x50],EBX      ; 004622f2
    MOV ECX,EAX                         ; 004622f6
    MOV EAX,EDX                         ; 004622f8
    MOV EDX,ECX                         ; 004622fa
    IMUL ECX,EBP,0x50                   ; 004622fc
        ;   Label: LAB_004622fc
    ADD ECX,0x1ba51cc                   ; 004622ff
    MOV dword ptr [ECX],EAX             ; 00462305 | DAT_01ba51cc
    MOV EDI,dword ptr [0x01ba56cc]      ; 00462307 | DAT_01ba56cc
    MOV dword ptr [ECX + 0x4],EDX       ; 0046230d
    CMP EAX,EDI                         ; 00462310
    JGE 0x00462319                      ; 00462312
        ;   XREF to: 00462319 (CONDITIONAL_JUMP)  ; LAB_00462319
    MOV [0x01ba56cc],EAX                ; 00462314 | DAT_01ba56cc
    CMP EDX,dword ptr [0x01ba56d0]      ; 00462319 | DAT_01ba56d0
        ;   Label: LAB_00462319
    JLE 0x00462327                      ; 0046231f
        ;   XREF to: 00462327 (CONDITIONAL_JUMP)  ; LAB_00462327
    MOV dword ptr [0x01ba56d0],EDX      ; 00462321 | DAT_01ba56d0
    MOV EBX,dword ptr [ESP + 0x50]      ; 00462327
        ;   Label: LAB_00462327
    MOV EDX,dword ptr [ESI + 0x14]      ; 0046232b | DAT_00622028
    MOV EBX,dword ptr [EBX + 0x14]      ; 0046232e | DAT_00622028
    SUB EBX,EDX                         ; 00462331
    CMP EBX,0x10000                     ; 00462333
    JNC 0x00462508                      ; 00462339
        ;   XREF to: 00462508 (CONDITIONAL_JUMP)  ; LAB_00462508
    MOV dword ptr [0x01ba51c8],EBP      ; 0046233f | DAT_01ba51c8
    XOR EBX,EBX                         ; 00462345
    MOV EAX,dword ptr [ESP + 0x50]      ; 00462347
        ;   Label: LAB_00462347
    MOV EDX,dword ptr [ESI + 0x10]      ; 0046234b | DAT_00622024
    MOV EAX,dword ptr [EAX + 0x10]      ; 0046234e | DAT_00622024
    MOV EDI,dword ptr [ESI + 0x14]      ; 00462351 | DAT_00622028
    SUB EAX,EDX                         ; 00462354
    AND EDI,0xffff                      ; 00462356
    MOV EDX,EAX                         ; 0046235c
    MOV EAX,EBX                         ; 0046235e
    XOR DI,0xffff                       ; 00462360
    IMUL EDX                            ; 00462364
    SHRD EAX,EDX,0x10                   ; 00462366
    MOV EDX,EAX                         ; 0046236a
    MOV dword ptr [ECX + 0xc],EAX       ; 0046236c
    MOV EAX,EDI                         ; 0046236f
    IMUL EDX                            ; 00462371
    SHRD EAX,EDX,0x10                   ; 00462373
    MOV dword ptr [ESP + 0x40],EAX      ; 00462377
    MOV EDX,dword ptr [ESP + 0x40]      ; 0046237b
    MOV EAX,dword ptr [ESI + 0x10]      ; 0046237f | DAT_00622024
    ADD EAX,EDX                         ; 00462382
    MOV dword ptr [ECX + 0x8],EAX       ; 00462384
    MOV EAX,dword ptr [ESP + 0x50]      ; 00462387
    MOV EDX,dword ptr [ESI + 0x18]      ; 0046238b | DAT_0062202c
    MOV EAX,dword ptr [EAX + 0x18]      ; 0046238e | DAT_0062202c
    SUB EAX,EDX                         ; 00462391
    MOV EDX,EAX                         ; 00462393
    MOV EAX,EBX                         ; 00462395
    IMUL EDX                            ; 00462397
    SHRD EAX,EDX,0x10                   ; 00462399
    MOV EDX,EAX                         ; 0046239d
    MOV dword ptr [ECX + 0x1c],EAX      ; 0046239f
    MOV EAX,EDI                         ; 004623a2
    IMUL EDX                            ; 004623a4
    SHRD EAX,EDX,0x10                   ; 004623a6
    MOV dword ptr [ESP + 0x40],EAX      ; 004623aa
    MOV EDX,dword ptr [ESP + 0x40]      ; 004623ae
    MOV EAX,dword ptr [ESI + 0x18]      ; 004623b2 | DAT_0062202c
    ADD EAX,EDX                         ; 004623b5
    MOV dword ptr [ECX + 0x18],EAX      ; 004623b7
    MOV EAX,dword ptr [ESP + 0x50]      ; 004623ba
    MOV EDX,dword ptr [ESI + 0x1c]      ; 004623be | DAT_00622030
    MOV EAX,dword ptr [EAX + 0x1c]      ; 004623c1 | DAT_00622030
    SUB EAX,EDX                         ; 004623c4
    MOV EDX,EAX                         ; 004623c6
    MOV EAX,EBX                         ; 004623c8
    IMUL EDX                            ; 004623ca
    SHRD EAX,EDX,0x10                   ; 004623cc
    MOV EDX,EAX                         ; 004623d0
    MOV dword ptr [ECX + 0x24],EAX      ; 004623d2
    MOV EAX,EDI                         ; 004623d5
    IMUL EDX                            ; 004623d7
    SHRD EAX,EDX,0x10                   ; 004623d9
    MOV dword ptr [ESP + 0x40],EAX      ; 004623dd
    MOV EDX,dword ptr [ESP + 0x40]      ; 004623e1
    MOV EAX,dword ptr [ESI + 0x1c]      ; 004623e5 | DAT_00622030
    ADD EAX,EDX                         ; 004623e8
    MOV dword ptr [ECX + 0x20],EAX      ; 004623ea
    MOV EAX,dword ptr [ESP + 0x50]      ; 004623ed
    MOV EDX,dword ptr [ESI + 0x20]      ; 004623f1 | DAT_00622034
    MOV EAX,dword ptr [EAX + 0x20]      ; 004623f4 | DAT_00622034
    SUB EAX,EDX                         ; 004623f7
    MOV EDX,EAX                         ; 004623f9
    MOV EAX,EBX                         ; 004623fb
    IMUL EDX                            ; 004623fd
    SHRD EAX,EDX,0x10                   ; 004623ff
    MOV EDX,EAX                         ; 00462403
    MOV dword ptr [ECX + 0x14],EAX      ; 00462405
    MOV EAX,EDI                         ; 00462408
    IMUL EDX                            ; 0046240a
    SHRD EAX,EDX,0x10                   ; 0046240c
    MOV dword ptr [ESP + 0x40],EAX      ; 00462410
    MOV EDX,dword ptr [ESP + 0x40]      ; 00462414
    MOV EAX,dword ptr [ESI + 0x20]      ; 00462418 | DAT_00622034
    ADD EAX,EDX                         ; 0046241b
    MOV dword ptr [ECX + 0x10],EAX      ; 0046241d
    MOV EAX,dword ptr [ESP + 0x50]      ; 00462420
    MOV EDX,dword ptr [ESI + 0x2c]      ; 00462424 | DAT_00622040
    MOV EAX,dword ptr [EAX + 0x2c]      ; 00462427 | DAT_00622040
    SUB EAX,EDX                         ; 0046242a
    MOV EDX,EAX                         ; 0046242c
    MOV EAX,EBX                         ; 0046242e
    IMUL EDX                            ; 00462430
    SHRD EAX,EDX,0x10                   ; 00462432
    MOV EDX,EAX                         ; 00462436
    MOV dword ptr [ECX + 0x34],EAX      ; 00462438
    MOV EAX,EDI                         ; 0046243b
    IMUL EDX                            ; 0046243d
    SHRD EAX,EDX,0x10                   ; 0046243f
    MOV dword ptr [ESP + 0x40],EAX      ; 00462443
    MOV EDX,dword ptr [ESP + 0x40]      ; 00462447
    MOV EAX,dword ptr [ESI + 0x2c]      ; 0046244b | DAT_00622040
    ADD EAX,EDX                         ; 0046244e
    MOV dword ptr [ECX + 0x30],EAX      ; 00462450
    CMP dword ptr [0x0070ca74],0x0      ; 00462453 | DAT_0070ca74
    JZ 0x0046251e                       ; 0046245a
        ;   XREF to: 0046251e (CONDITIONAL_JUMP)  ; LAB_0046251e
    MOV EAX,dword ptr [ESP + 0x50]      ; 00462460
    MOV EDX,dword ptr [ESI + 0x8]       ; 00462464 | DAT_0062201c
    MOV EAX,dword ptr [EAX + 0x8]       ; 00462467 | DAT_0062201c
    SUB EAX,EDX                         ; 0046246a
    MOV EDX,EAX                         ; 0046246c
    MOV EAX,EBX                         ; 0046246e
    IMUL EDX                            ; 00462470
    SHRD EAX,EDX,0x10                   ; 00462472
    MOV EDX,EAX                         ; 00462476
    MOV dword ptr [ECX + 0x2c],EAX      ; 00462478
    MOV EAX,EDI                         ; 0046247b
    IMUL EDX                            ; 0046247d
    SHRD EAX,EDX,0x10                   ; 0046247f
    MOV dword ptr [ESP + 0x40],EAX      ; 00462483
    MOV EDX,dword ptr [ESP + 0x40]      ; 00462487
    MOV EAX,dword ptr [ESI + 0x8]       ; 0046248b | DAT_0062201c
    ADD EAX,EDX                         ; 0046248e
        ;   Label: LAB_0046248e
    MOV dword ptr [ECX + 0x28],EAX      ; 00462490
    TEST byte ptr [0x01c38b55],0x2      ; 00462493 | DAT_01c38b55
    JZ 0x004624fc                       ; 0046249a
        ;   XREF to: 004624fc (CONDITIONAL_JUMP)  ; LAB_004624fc
    MOV EAX,dword ptr [ESP + 0x50]      ; 0046249c
    MOV EDX,dword ptr [ESI + 0x24]      ; 004624a0 | DAT_00622038
    MOV EAX,dword ptr [EAX + 0x24]      ; 004624a3 | DAT_00622038
    SUB EAX,EDX                         ; 004624a6
    MOV EDX,EAX                         ; 004624a8
    MOV EAX,EBX                         ; 004624aa
    IMUL EDX                            ; 004624ac
    SHRD EAX,EDX,0x10                   ; 004624ae
    MOV EDX,EAX                         ; 004624b2
    MOV dword ptr [ECX + 0x3c],EAX      ; 004624b4
    MOV EAX,EDI                         ; 004624b7
    IMUL EDX                            ; 004624b9
    SHRD EAX,EDX,0x10                   ; 004624bb
    MOV dword ptr [ESP + 0x40],EAX      ; 004624bf
    MOV EDX,dword ptr [ESP + 0x40]      ; 004624c3
    MOV EAX,dword ptr [ESI + 0x24]      ; 004624c7 | DAT_00622038
    ADD EAX,EDX                         ; 004624ca
    MOV dword ptr [ECX + 0x38],EAX      ; 004624cc
    MOV EAX,dword ptr [ESP + 0x50]      ; 004624cf
    MOV EDX,dword ptr [ESI + 0x28]      ; 004624d3 | DAT_0062203c
    MOV EAX,dword ptr [EAX + 0x28]      ; 004624d6 | DAT_0062203c
    SUB EAX,EDX                         ; 004624d9
    MOV EDX,EAX                         ; 004624db
    MOV EAX,EBX                         ; 004624dd
    IMUL EDX                            ; 004624df
    SHRD EAX,EDX,0x10                   ; 004624e1
    MOV EDX,EAX                         ; 004624e5
    MOV dword ptr [ECX + 0x44],EAX      ; 004624e7
    MOV EAX,EDI                         ; 004624ea
    IMUL EDX                            ; 004624ec
    SHRD EAX,EDX,0x10                   ; 004624ee
    MOV EDX,EAX                         ; 004624f2
    MOV EAX,dword ptr [ESI + 0x28]      ; 004624f4 | DAT_0062203c
    ADD EAX,EDX                         ; 004624f7
    MOV dword ptr [ECX + 0x40],EAX      ; 004624f9
    MOV EBP,dword ptr [0x01ba51c8]      ; 004624fc | DAT_01ba51c8
        ;   Label: LAB_004624fc
    INC EBP                             ; 00462502
    JMP 0x004620de                      ; 00462503
        ;   XREF to: 004620de (UNCONDITIONAL_JUMP)  ; LAB_004620de
    MOV EAX,0xffffffff                  ; 00462508
        ;   Label: LAB_00462508
    XOR EDX,EDX                         ; 0046250d
    DIV EBX                             ; 0046250f
    MOV dword ptr [0x01ba51c8],EBP      ; 00462511 | DAT_01ba51c8
    MOV EBX,EAX                         ; 00462517
    JMP 0x00462347                      ; 00462519
        ;   XREF to: 00462347 (UNCONDITIONAL_JUMP)  ; LAB_00462347
    MOV EAX,dword ptr [ESP + 0x50]      ; 0046251e
        ;   Label: LAB_0046251e
    MOV EDX,dword ptr [ESI + 0xc]       ; 00462522 | DAT_00622020
    MOV EAX,dword ptr [EAX + 0xc]       ; 00462525 | DAT_00622020
    SUB EAX,EDX                         ; 00462528
    MOV EDX,EAX                         ; 0046252a
    MOV EAX,EBX                         ; 0046252c
    IMUL EDX                            ; 0046252e
    SHRD EAX,EDX,0x10                   ; 00462530
    MOV EDX,EAX                         ; 00462534
    MOV dword ptr [ECX + 0x2c],EAX      ; 00462536
    MOV EAX,EDI                         ; 00462539
    IMUL EDX                            ; 0046253b
    SHRD EAX,EDX,0x10                   ; 0046253d
    MOV dword ptr [ESP + 0x40],EAX      ; 00462541
    MOV EDX,dword ptr [ESP + 0x40]      ; 00462545
    MOV EAX,dword ptr [ESI + 0xc]       ; 00462549 | DAT_00622020
    JMP 0x0046248e                      ; 0046254c
        ;   XREF to: 0046248e (UNCONDITIONAL_JUMP)  ; LAB_0046248e
    INC EAX                             ; 00462551
        ;   Label: LAB_00462551
    ADD EBX,0x50                        ; 00462552
    CMP EAX,EBP                         ; 00462555
    JL 0x00462114                       ; 00462557
        ;   XREF to: 00462114 (CONDITIONAL_JUMP)  ; LAB_00462114
    XOR EBX,EBX                         ; 0046255d
        ;   Label: LAB_0046255d
    JMP 0x00462124                      ; 0046255f
        ;   XREF to: 00462124 (UNCONDITIONAL_JUMP)  ; LAB_00462124
    INC EDX                             ; 00462564
        ;   Label: LAB_00462564
    ADD EAX,0x50                        ; 00462565
    CMP EDX,EBP                         ; 00462568
    JL 0x0046214b                       ; 0046256a
        ;   XREF to: 0046214b (CONDITIONAL_JUMP)  ; LAB_0046214b
    XOR EAX,EAX                         ; 00462570
        ;   Label: LAB_00462570
    JMP 0x0046215b                      ; 00462572
        ;   XREF to: 0046215b (UNCONDITIONAL_JUMP)  ; LAB_0046215b
    INC EDX                             ; 00462577
        ;   Label: LAB_00462577
    ADD EAX,0x50                        ; 00462578
    CMP EDX,EBP                         ; 0046257b
    JL 0x004621a6                       ; 0046257d
        ;   XREF to: 004621a6 (CONDITIONAL_JUMP)  ; LAB_004621a6
    XOR EAX,EAX                         ; 00462583
        ;   Label: LAB_00462583
    JMP 0x004621b6                      ; 00462585
        ;   XREF to: 004621b6 (UNCONDITIONAL_JUMP)  ; LAB_004621b6
    INC EDX                             ; 0046258a
        ;   Label: LAB_0046258a
    ADD EAX,0x50                        ; 0046258b
    CMP EDX,EBP                         ; 0046258e
    JL 0x004621f6                       ; 00462590
        ;   XREF to: 004621f6 (CONDITIONAL_JUMP)  ; LAB_004621f6
    XOR EAX,EAX                         ; 00462596
        ;   Label: LAB_00462596
    JMP 0x00462206                      ; 00462598
        ;   XREF to: 00462206 (UNCONDITIONAL_JUMP)  ; LAB_00462206
    MOV EDX,dword ptr [ESP + 0x54]      ; 0046259d
        ;   Label: LAB_0046259d
    MOV EAX,dword ptr [ESP + 0x54]      ; 004625a1
    MOV ECX,dword ptr [EDX + 0x38]      ; 004625a5
    MOV EAX,dword ptr [EAX + 0x3c]      ; 004625a8
    MOV EBX,dword ptr [EDX + 0x40]      ; 004625ab
    ADD ECX,EAX                         ; 004625ae
    MOV EAX,dword ptr [EDX + 0x44]      ; 004625b0
    MOV dword ptr [EDX + 0x38],ECX      ; 004625b3
    ADD EBX,EAX                         ; 004625b6
    MOV EAX,dword ptr [ESP + 0x58]      ; 004625b8
    MOV dword ptr [EDX + 0x40],EBX      ; 004625bc
    MOV EDX,dword ptr [ESP + 0x58]      ; 004625bf
    MOV EAX,dword ptr [EAX + 0x3c]      ; 004625c3
    MOV ESI,dword ptr [EDX + 0x38]      ; 004625c6
    MOV EDI,dword ptr [EDX + 0x40]      ; 004625c9
    ADD ESI,EAX                         ; 004625cc
    MOV EAX,dword ptr [EDX + 0x44]      ; 004625ce
    MOV dword ptr [EDX + 0x38],ESI      ; 004625d1
    ADD EDI,EAX                         ; 004625d4
    MOV dword ptr [EDX + 0x40],EDI      ; 004625d6
    INC dword ptr [ESP + 0x4c]          ; 004625d9
    JMP 0x00462176                      ; 004625dd
        ;   XREF to: 00462176 (UNCONDITIONAL_JUMP)  ; LAB_00462176

