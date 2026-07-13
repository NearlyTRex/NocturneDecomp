; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cb010(int param_1,int param_2,float param_3)
;
; Local Variables:
; undefined        Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004c9cf0 at 004c9d59
;
; Referenced Globals:
;   undefined4 s_manpuz-chargegemloop-red.wav_00587fc8+2
;   string s_manpuz-chargegemloop-green.wav_00587fe7
;   string s_manpuz-chargegemloop-blue.wav_00588006
;   undefined4 DAT_00588026
;   undefined4 DAT_005a0044
;   undefined4 DAT_005a0048
;
; Called Functions:
;   FUN_0040a240
;   FUN_004cae20
;   FUN_004caef0
;   FUN_004cb5a0
;   FUN_004cb740
;   FUN_004cb8e0
;   FUN_004cb8f0
;   FUN_004cba40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cb010
        ;   Label: FUN_004cb010
    PUSH ESI                            ; 004cb011
    PUSH EDI                            ; 004cb012
    PUSH EBP                            ; 004cb013
    SUB ESP,0x2c                        ; 004cb014
    MOV ESI,dword ptr [ESP + 0x40]      ; 004cb017
    MOV EDI,dword ptr [ESP + 0x44]      ; 004cb01b
    FLD float ptr [ESP + 0x48]          ; 004cb01f
    FMUL float ptr [0x00588026]         ; 004cb023 | DAT_00588026
    FST float ptr [ESP + 0x14]          ; 004cb029
    FDIV float ptr [0x005a0044]         ; 004cb02d | DAT_005a0044
    LEA EAX,[EDI*0x4 + 0x0]             ; 004cb033
    SUB EAX,EDI                         ; 004cb03a
    SHL EAX,0x3                         ; 004cb03c
    SUB EAX,EDI                         ; 004cb03f
    LEA EBX,[ESI + 0xa98]               ; 004cb041
    SHL EAX,0x3                         ; 004cb047
    ADD EBX,EAX                         ; 004cb04a
    LEA EAX,[EBX + 0x24]                ; 004cb04c
    PUSH EAX                            ; 004cb04f
    LEA EAX,[ESP + 0x4]                 ; 004cb050
    PUSH EAX                            ; 004cb054
    PUSH ESI                            ; 004cb055
    FSTP float ptr [ESP + 0x34]         ; 004cb056
    CALL FUN_0040a240                   ; 004cb05a
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a240()
    ADD ESP,0xc                         ; 004cb05f
    MOV EAX,ESP                         ; 004cb062
    PUSH EAX                            ; 004cb064
    PUSH 0x587fca                       ; 004cb065 | s_manpuz-chargegemloop-red.wav_00587fc8+2
    LEA EAX,[EBX + 0xac]                ; 004cb06a
    PUSH EAX                            ; 004cb070
    PUSH dword ptr [ESP + 0x34]         ; 004cb071
    LEA EAX,[EBX + 0xc]                 ; 004cb075
    PUSH dword ptr [EBX + 0x18]         ; 004cb078
    PUSH EAX                            ; 004cb07b
    CALL FUN_004caef0                   ; 004cb07c
        ;   XREF to: 004caef0 (UNCONDITIONAL_CALL)  ; undefined FUN_004caef0()
    ADD ESP,0x18                        ; 004cb081
    MOV EBP,EAX                         ; 004cb084
    MOV EAX,ESP                         ; 004cb086
    PUSH EAX                            ; 004cb088
    PUSH 0x587fe7                       ; 004cb089 | = "manpuz-chargegemloop-green.wav"
    LEA EAX,[EBX + 0xb0]                ; 004cb08e
    PUSH EAX                            ; 004cb094
    PUSH dword ptr [ESP + 0x34]         ; 004cb095
    LEA EAX,[EBX + 0x10]                ; 004cb099
    PUSH dword ptr [EBX + 0x1c]         ; 004cb09c
    PUSH EAX                            ; 004cb09f
    AND EBP,0x1                         ; 004cb0a0
    CALL FUN_004caef0                   ; 004cb0a3
        ;   XREF to: 004caef0 (UNCONDITIONAL_CALL)  ; undefined FUN_004caef0()
    ADD ESP,0x18                        ; 004cb0a8
    AND EBP,EAX                         ; 004cb0ab
    MOV EAX,ESP                         ; 004cb0ad
    PUSH EAX                            ; 004cb0af
    PUSH 0x588006                       ; 004cb0b0 | = "manpuz-chargegemloop-blue.wav"
    LEA EAX,[EBX + 0xb4]                ; 004cb0b5
    PUSH EAX                            ; 004cb0bb
    PUSH dword ptr [ESP + 0x34]         ; 004cb0bc
    LEA EAX,[EBX + 0x14]                ; 004cb0c0
    PUSH dword ptr [EBX + 0x20]         ; 004cb0c3
    PUSH EAX                            ; 004cb0c6
    CALL FUN_004caef0                   ; 004cb0c7
        ;   XREF to: 004caef0 (UNCONDITIONAL_CALL)  ; undefined FUN_004caef0()
    ADD ESP,0x18                        ; 004cb0cc
    AND EBP,EAX                         ; 004cb0cf
    LEA EAX,[ESP + 0x18]                ; 004cb0d1
    PUSH EAX                            ; 004cb0d5
    LEA EAX,[ESP + 0x14]                ; 004cb0d6
    MOV dword ptr [EBX + 0x20],0x0      ; 004cb0da
    PUSH EAX                            ; 004cb0e1
    LEA EAX,[ESP + 0x14]                ; 004cb0e2
    FLD float ptr [EBX + 0x20]          ; 004cb0e6
    PUSH EAX                            ; 004cb0e9
    FSTP float ptr [EBX + 0x1c]         ; 004cb0ea
    PUSH EDI                            ; 004cb0ed
    FLD float ptr [EBX + 0x1c]          ; 004cb0ee
    PUSH ESI                            ; 004cb0f1
    FSTP float ptr [EBX + 0x18]         ; 004cb0f2
    CALL FUN_004cae20                   ; 004cb0f5
        ;   XREF to: 004cae20 (UNCONDITIONAL_CALL)  ; undefined FUN_004cae20()
    ADD ESP,0x14                        ; 004cb0fa
    FLD float ptr [ESP + 0x14]          ; 004cb0fd
    FDIV float ptr [0x005a0048]         ; 004cb101 | DAT_005a0048
    FLD float ptr [ESP + 0xc]           ; 004cb107
    FSUB float ptr [EBX]                ; 004cb10b
    MOV EDX,0x1                         ; 004cb10d
    FSTP float ptr [ESP + 0x1c]         ; 004cb112
    FST float ptr [ESP + 0x28]          ; 004cb116
    FCHS                                ; 004cb11a
    FCOMP float ptr [ESP + 0x1c]        ; 004cb11c
    FNSTSW AX                           ; 004cb120
    SAHF                                ; 004cb122
    JA 0x004cb1eb                       ; 004cb123
        ;   XREF to: 004cb1eb (CONDITIONAL_JUMP)  ; LAB_004cb1eb
    FLD float ptr [ESP + 0x1c]          ; 004cb129
    FCOMP float ptr [ESP + 0x28]        ; 004cb12d
    FNSTSW AX                           ; 004cb131
    SAHF                                ; 004cb133
    JBE 0x004cb1f6                      ; 004cb134
        ;   XREF to: 004cb1f6 (CONDITIONAL_JUMP)  ; LAB_004cb1f6
    FLD float ptr [EBX]                 ; 004cb13a
    FADD float ptr [ESP + 0x28]         ; 004cb13c
    FSTP float ptr [EBX]                ; 004cb140
        ;   Label: LAB_004cb140
    XOR EAX,EAX                         ; 004cb142
    FLD float ptr [ESP + 0x10]          ; 004cb144
        ;   Label: LAB_004cb144
    FLD float ptr [ESP + 0x28]          ; 004cb148
    LEA ECX,[EBX + 0x4]                 ; 004cb14c
    FCHS                                ; 004cb14f
    FXCH                                ; 004cb151
    FSUB float ptr [ECX]                ; 004cb153
    AND EDX,EAX                         ; 004cb155
    FSTP float ptr [ESP + 0x24]         ; 004cb157
    FCOMP float ptr [ESP + 0x24]        ; 004cb15b
    FNSTSW AX                           ; 004cb15f
    SAHF                                ; 004cb161
    JBE 0x004cb203                      ; 004cb162
        ;   XREF to: 004cb203 (CONDITIONAL_JUMP)  ; LAB_004cb203
    FLD float ptr [ECX]                 ; 004cb168
    FSUB float ptr [ESP + 0x28]         ; 004cb16a
    FSTP float ptr [ECX]                ; 004cb16e
        ;   Label: LAB_004cb16e
    XOR EAX,EAX                         ; 004cb170
    FLD float ptr [ESP + 0x18]          ; 004cb172
        ;   Label: LAB_004cb172
    FLD float ptr [ESP + 0x28]          ; 004cb176
    LEA ECX,[EBX + 0x8]                 ; 004cb17a
    FCHS                                ; 004cb17d
    FXCH                                ; 004cb17f
    FSUB float ptr [ECX]                ; 004cb181
    AND EDX,EAX                         ; 004cb183
    FSTP float ptr [ESP + 0x20]         ; 004cb185
    FCOMP float ptr [ESP + 0x20]        ; 004cb189
    FNSTSW AX                           ; 004cb18d
    SAHF                                ; 004cb18f
    JBE 0x004cb22b                      ; 004cb190
        ;   XREF to: 004cb22b (CONDITIONAL_JUMP)  ; LAB_004cb22b
    FLD float ptr [ECX]                 ; 004cb196
    FSUB float ptr [ESP + 0x28]         ; 004cb198
    FSTP float ptr [ECX]                ; 004cb19c
        ;   Label: LAB_004cb19c
    XOR EAX,EAX                         ; 004cb19e
    AND EDX,EAX                         ; 004cb1a0
        ;   Label: LAB_004cb1a0
    JZ 0x004cb1e3                       ; 004cb1a2
        ;   XREF to: 004cb1e3 (CONDITIONAL_JUMP)  ; LAB_004cb1e3
    TEST EBP,EBP                        ; 004cb1a4
    JZ 0x004cb1e3                       ; 004cb1a6
        ;   XREF to: 004cb1e3 (CONDITIONAL_JUMP)  ; LAB_004cb1e3
    LEA EAX,[EDI*0x4 + 0x0]             ; 004cb1a8
    SUB EAX,EDI                         ; 004cb1af
    SHL EAX,0x3                         ; 004cb1b1
    ADD EAX,EDI                         ; 004cb1b4
    LEA EDX,[ESI + 0x5e8]               ; 004cb1b6
    SHL EAX,0x2                         ; 004cb1bc
    ADD EDX,EAX                         ; 004cb1bf
    CMP dword ptr [EDX],0x0             ; 004cb1c1
    JZ 0x004cb1e3                       ; 004cb1c4
        ;   XREF to: 004cb1e3 (CONDITIONAL_JUMP)  ; LAB_004cb1e3
    TEST dword ptr [EDX + 0x8],0x7fffffff ; 004cb1c6
    JNZ 0x004cb1e3                      ; 004cb1cd
        ;   XREF to: 004cb1e3 (CONDITIONAL_JUMP)  ; LAB_004cb1e3
    TEST dword ptr [EDX + 0x4],0x7fffffff ; 004cb1cf
    JNZ 0x004cb1e3                      ; 004cb1d6
        ;   XREF to: 004cb1e3 (CONDITIONAL_JUMP)  ; LAB_004cb1e3
    FILD dword ptr [EDX + 0x4c]         ; 004cb1d8
    FCOMP float ptr [EBX + 0xc]         ; 004cb1db
    FNSTSW AX                           ; 004cb1de
    SAHF                                ; 004cb1e0
    JZ 0x004cb253                       ; 004cb1e1
        ;   XREF to: 004cb253 (CONDITIONAL_JUMP)  ; LAB_004cb253
    ADD ESP,0x2c                        ; 004cb1e3
        ;   Label: LAB_004cb1e3
    POP EBP                             ; 004cb1e6
    POP EDI                             ; 004cb1e7
    POP ESI                             ; 004cb1e8
    POP EBX                             ; 004cb1e9
    RET                                 ; 004cb1ea
    FLD float ptr [EBX]                 ; 004cb1eb
        ;   Label: LAB_004cb1eb
    FSUB float ptr [ESP + 0x28]         ; 004cb1ed
    JMP 0x004cb140                      ; 004cb1f1
        ;   XREF to: 004cb140 (UNCONDITIONAL_JUMP)  ; LAB_004cb140
    MOV EAX,dword ptr [ESP + 0xc]       ; 004cb1f6
        ;   Label: LAB_004cb1f6
    MOV dword ptr [EBX],EAX             ; 004cb1fa
    MOV EAX,EDX                         ; 004cb1fc
    JMP 0x004cb144                      ; 004cb1fe
        ;   XREF to: 004cb144 (UNCONDITIONAL_JUMP)  ; LAB_004cb144
    FLD float ptr [ESP + 0x24]          ; 004cb203
        ;   Label: LAB_004cb203
    FCOMP float ptr [ESP + 0x28]        ; 004cb207
    FNSTSW AX                           ; 004cb20b
    SAHF                                ; 004cb20d
    JBE 0x004cb21b                      ; 004cb20e
        ;   XREF to: 004cb21b (CONDITIONAL_JUMP)  ; LAB_004cb21b
    FLD float ptr [ECX]                 ; 004cb210
    FADD float ptr [ESP + 0x28]         ; 004cb212
    JMP 0x004cb16e                      ; 004cb216
        ;   XREF to: 004cb16e (UNCONDITIONAL_JUMP)  ; LAB_004cb16e
    MOV EAX,dword ptr [ESP + 0x10]      ; 004cb21b
        ;   Label: LAB_004cb21b
    MOV dword ptr [ECX],EAX             ; 004cb21f
    MOV EAX,0x1                         ; 004cb221
    JMP 0x004cb172                      ; 004cb226
        ;   XREF to: 004cb172 (UNCONDITIONAL_JUMP)  ; LAB_004cb172
    FLD float ptr [ESP + 0x20]          ; 004cb22b
        ;   Label: LAB_004cb22b
    FCOMP float ptr [ESP + 0x28]        ; 004cb22f
    FNSTSW AX                           ; 004cb233
    SAHF                                ; 004cb235
    JBE 0x004cb243                      ; 004cb236
        ;   XREF to: 004cb243 (CONDITIONAL_JUMP)  ; LAB_004cb243
    FLD float ptr [ECX]                 ; 004cb238
    FADD float ptr [ESP + 0x28]         ; 004cb23a
    JMP 0x004cb19c                      ; 004cb23e
        ;   XREF to: 004cb19c (UNCONDITIONAL_JUMP)  ; LAB_004cb19c
    MOV EAX,dword ptr [ESP + 0x18]      ; 004cb243
        ;   Label: LAB_004cb243
    MOV dword ptr [ECX],EAX             ; 004cb247
    MOV EAX,0x1                         ; 004cb249
    JMP 0x004cb1a0                      ; 004cb24e
        ;   XREF to: 004cb1a0 (UNCONDITIONAL_JUMP)  ; LAB_004cb1a0
    FILD dword ptr [EDX + 0x50]         ; 004cb253
        ;   Label: LAB_004cb253
    FCOMP float ptr [EBX + 0x10]        ; 004cb256
    FNSTSW AX                           ; 004cb259
    SAHF                                ; 004cb25b
    JNZ 0x004cb1e3                      ; 004cb25c
        ;   XREF to: 004cb1e3 (CONDITIONAL_JUMP)  ; LAB_004cb1e3
    FILD dword ptr [EDX + 0x54]         ; 004cb25e
    FCOMP float ptr [EBX + 0x14]        ; 004cb261
    FNSTSW AX                           ; 004cb264
    SAHF                                ; 004cb266
    JNZ 0x004cb1e3                      ; 004cb267
        ;   XREF to: 004cb1e3 (CONDITIONAL_JUMP)  ; LAB_004cb1e3
    PUSH EDI                            ; 004cb26d
    PUSH ESI                            ; 004cb26e
    CALL FUN_004cb8f0                   ; 004cb26f
        ;   XREF to: 004cb8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004cb8f0()
    ADD ESP,0x8                         ; 004cb274
    PUSH EAX                            ; 004cb277
    PUSH ESI                            ; 004cb278
    CALL FUN_004cba40                   ; 004cb279
        ;   XREF to: 004cba40 (UNCONDITIONAL_CALL)  ; undefined FUN_004cba40()
    ADD ESP,0x8                         ; 004cb27e
    TEST EAX,EAX                        ; 004cb281
    JZ 0x004cb2b3                       ; 004cb283
        ;   XREF to: 004cb2b3 (CONDITIONAL_JUMP)  ; LAB_004cb2b3
    PUSH EDI                            ; 004cb285
    PUSH ESI                            ; 004cb286
    CALL FUN_004cb8e0                   ; 004cb287
        ;   XREF to: 004cb8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004cb8e0()
    ADD ESP,0x8                         ; 004cb28c
    PUSH EAX                            ; 004cb28f
    PUSH ESI                            ; 004cb290
    CALL FUN_004cba40                   ; 004cb291
        ;   XREF to: 004cba40 (UNCONDITIONAL_CALL)  ; undefined FUN_004cba40()
    ADD ESP,0x8                         ; 004cb296
    TEST EAX,EAX                        ; 004cb299
    JNZ 0x004cb1e3                      ; 004cb29b
        ;   XREF to: 004cb1e3 (CONDITIONAL_JUMP)  ; LAB_004cb1e3
    PUSH EDI                            ; 004cb2a1
    PUSH ESI                            ; 004cb2a2
    CALL FUN_004cb740                   ; 004cb2a3
        ;   XREF to: 004cb740 (UNCONDITIONAL_CALL)  ; undefined FUN_004cb740()
    ADD ESP,0x8                         ; 004cb2a8
    ADD ESP,0x2c                        ; 004cb2ab
    POP EBP                             ; 004cb2ae
    POP EDI                             ; 004cb2af
    POP ESI                             ; 004cb2b0
    POP EBX                             ; 004cb2b1
    RET                                 ; 004cb2b2
    PUSH EDI                            ; 004cb2b3
        ;   Label: LAB_004cb2b3
    PUSH ESI                            ; 004cb2b4
    CALL FUN_004cb5a0                   ; 004cb2b5
        ;   XREF to: 004cb5a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004cb5a0()
    ADD ESP,0x8                         ; 004cb2ba
    ADD ESP,0x2c                        ; 004cb2bd
    POP EBP                             ; 004cb2c0
    POP EDI                             ; 004cb2c1
    POP ESI                             ; 004cb2c2
    POP EBX                             ; 004cb2c3
    RET                                 ; 004cb2c4

