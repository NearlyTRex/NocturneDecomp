; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_00534ea0(int param_1,float *param_2,float param_3)
;
; Local Variables:
; undefined4       Stack[-0x208]:4  local_208
; undefined4       Stack[-0x1e8]:4  local_1e8
; undefined4       Stack[-0x1e4]:4  local_1e4
; undefined4       Stack[-0x1b0]:4  local_1b0
; undefined4       Stack[-0x1ac]:4  local_1ac
; undefined4       Stack[-0x1a8]:4  local_1a8
; undefined4       Stack[-0x1a4]:4  local_1a4
; undefined4       Stack[-0x1a0]:4  local_1a0
; undefined4       Stack[-0x19c]:4  local_19c
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[7]:
;   FUN_00408c30 at 00408c7c
;   FUN_0040c990 at 0040ca00
;   FUN_0040ca40 at 0040cad1
;   FUN_00499610 at 00499666
;   FUN_004c8d10 at 004c8d3b
;   FUN_0056acd0 at 0056b453
;   FUN_00576ab0 at 0057720d
;
; Referenced Globals:
;   TerminatedCString s_core_setcolid_cpp_005e5d15
;   TerminatedCString s_info_keyFramedModelInsta_005e5d2a
;   TerminatedCString s_core_setcolid_cpp_005e5d76
;   TerminatedCString s_Invalid_collision_type_005e5d8b
;   undefined4 DAT_005e5da5
;   undefined4 DAT_005e5da9
;   undefined4 DAT_005f22b0
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01fc9c68
;   undefined4 DAT_0264bd40
;
; Called Functions:
;   FUN_00408cf0
;   FUN_00408d70
;   FUN_00408de0
;   FUN_004090f0
;   FUN_0040c8f0
;   FUN_0041a600
;   FUN_0041b660
;   FUN_0044f670
;   FUN_0044fd20
;   FUN_004738d0
;   FUN_00473b20
;   FUN_004779e0
;   FUN_00478550
;   FUN_004e4500
;   FUN_00536990
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00534ea0
        ;   Label: FUN_00534ea0
    PUSH ESI                            ; 00534ea1
    PUSH EDI                            ; 00534ea2
    PUSH EBP                            ; 00534ea3
    SUB ESP,0x3a8                       ; 00534ea4
    MOV EBX,dword ptr [ESP + 0x3c0]     ; 00534eaa
    FLD float ptr [ESP + 0x3c4]         ; 00534eb1
    MOV ESI,dword ptr [ESP + 0x3bc]     ; 00534eb8
    MOV EBP,dword ptr [ESP + 0x3bc]     ; 00534ebf
    FLDZ                                ; 00534ec6
    ADD ESI,0x14d134                    ; 00534ec8
    ADD EBP,0x14d128                    ; 00534ece
    FCOMPP                              ; 00534ed4
    FNSTSW AX                           ; 00534ed6
    SAHF                                ; 00534ed8
    JC 0x00535149                       ; 00534ed9
        ;   XREF to: 00535149 (CONDITIONAL_JUMP)  ; LAB_00535149
    PUSH EBP                            ; 00534edf
    PUSH ESI                            ; 00534ee0
    PUSH EBX                            ; 00534ee1
    PUSH 0x1fc9c68                      ; 00534ee2 | DAT_01fc9c68
    CALL FUN_004738d0                   ; 00534ee7
        ;   XREF to: 004738d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004738d0()
    MOV dword ptr [ESP + 0x3b4],EAX     ; 00534eec
    FLD float ptr [ESP + 0x3b4]         ; 00534ef3
    ADD ESP,0x10                        ; 00534efa
    FSTP float ptr [ESP + 0x388]        ; 00534efd
        ;   Label: LAB_00534efd
    MOV EAX,dword ptr [ESP + 0x3bc]     ; 00534f04
    CMP dword ptr [EAX + 0x14d134],0x0  ; 00534f0b
    JNZ 0x00534f27                      ; 00534f12
        ;   XREF to: 00534f27 (CONDITIONAL_JUMP)  ; LAB_00534f27
    MOV ESI,dword ptr [ESP + 0x3bc]     ; 00534f14
    MOV EAX,dword ptr [EAX + 0x15f690]  ; 00534f1b
    MOV dword ptr [ESI + 0x14d134],EAX  ; 00534f21
    LEA EAX,[ESP + 0x2c8]               ; 00534f27
        ;   Label: LAB_00534f27
    CMP EAX,EBX                         ; 00534f2e
    JZ 0x00534f4f                       ; 00534f30
        ;   XREF to: 00534f4f (CONDITIONAL_JUMP)  ; LAB_00534f4f
    MOV EAX,dword ptr [EBX]             ; 00534f32
    MOV dword ptr [ESP + 0x2c8],EAX     ; 00534f34
    MOV EAX,dword ptr [EBX + 0x4]       ; 00534f3b
    MOV dword ptr [ESP + 0x2cc],EAX     ; 00534f3e
    MOV EAX,dword ptr [EBX + 0x8]       ; 00534f45
    MOV dword ptr [ESP + 0x2d0],EAX     ; 00534f48
    FLD float ptr [ESP + 0x2cc]         ; 00534f4f
        ;   Label: LAB_00534f4f
    FADD float ptr [0x005e5da5]         ; 00534f56 | DAT_005e5da5
    MOV EAX,dword ptr [ESP + 0x3bc]     ; 00534f5c
    FSTP float ptr [ESP + 0x2cc]        ; 00534f63
    MOV dword ptr [EAX + 0x14d144],0x0  ; 00534f6a
    MOV dword ptr [EAX + 0x14d148],0xffffffff ; 00534f74
    MOV ECX,dword ptr [EAX + 0x15f6a8]  ; 00534f7e
    MOV dword ptr [EAX + 0x14d14c],0xffffffff ; 00534f84
    TEST ECX,ECX                        ; 00534f8e
    JL 0x00535137                       ; 00534f90
        ;   XREF to: 00535137 (CONDITIONAL_JUMP)  ; LAB_00535137
    LEA EAX,[ESP + 0x214]               ; 00534f96
    LEA EBX,[ESP + 0x2c8]               ; 00534f9d
    CMP EAX,EBX                         ; 00534fa4
    JZ 0x00534fd2                       ; 00534fa6
        ;   XREF to: 00534fd2 (CONDITIONAL_JUMP)  ; LAB_00534fd2
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 00534fa8
    MOV dword ptr [ESP + 0x214],EAX     ; 00534faf
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 00534fb6
    MOV dword ptr [ESP + 0x218],EAX     ; 00534fbd
    MOV EAX,dword ptr [ESP + 0x2d0]     ; 00534fc4
    MOV dword ptr [ESP + 0x21c],EAX     ; 00534fcb
    FLD float ptr [ESP + 0x208]         ; 00534fd2
        ;   Label: LAB_00534fd2
    FLD float ptr [ESP + 0x210]         ; 00534fd9
    FLD float ptr [ESP + 0x214]         ; 00534fe0
    FLD float ptr [ESP + 0x21c]         ; 00534fe7
    LEA EAX,[ESP + 0x214]               ; 00534fee
    LEA EBX,[ESP + 0x208]               ; 00534ff5
    FXCH ST3                            ; 00534ffc
    FLD float ptr [ESP + 0x3c4]         ; 00534ffe
    FXCH                                ; 00535005
    FSUB ST0,ST1                        ; 00535007
    FXCH ST3                            ; 00535009
    FSUB ST0,ST1                        ; 0053500b
    FXCH ST2                            ; 0053500d
    FADD ST0,ST1                        ; 0053500f
    FXCH ST4                            ; 00535011
    FADDP                               ; 00535013
    FXCH                                ; 00535015
    FSTP float ptr [ESP + 0x210]        ; 00535017
    FXCH ST2                            ; 0053501e
    FSTP float ptr [ESP + 0x214]        ; 00535020
    FXCH                                ; 00535027
    FSTP float ptr [ESP + 0x21c]        ; 00535029
    FSTP float ptr [ESP + 0x208]        ; 00535030
    CMP EBX,EAX                         ; 00535037
    JZ 0x00535065                       ; 00535039
        ;   XREF to: 00535065 (CONDITIONAL_JUMP)  ; LAB_00535065
    MOV EAX,dword ptr [ESP + 0x214]     ; 0053503b
    MOV dword ptr [ESP + 0x208],EAX     ; 00535042
    MOV EAX,dword ptr [ESP + 0x218]     ; 00535049
    MOV dword ptr [ESP + 0x20c],EAX     ; 00535050
    MOV EAX,dword ptr [ESP + 0x21c]     ; 00535057
    MOV dword ptr [ESP + 0x210],EAX     ; 0053505e
    FLD float ptr [ESP + 0x20c]         ; 00535065
        ;   Label: LAB_00535065
    LEA EAX,[ESP + 0x1b0]               ; 0053506c
    FADD float ptr [0x005e5da9]         ; 00535073 | DAT_005e5da9
    PUSH EAX                            ; 00535079
    FSTP float ptr [ESP + 0x210]        ; 0053507a
    CALL FUN_00537fa0                   ; 00535081
        ;   XREF to: 00537fa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00537fa0()
    ADD ESP,0x4                         ; 00535086
    XOR EBX,EBX                         ; 00535089
    MOV EAX,dword ptr [ESP + 0x3bc]     ; 0053508b
    MOV dword ptr [ESP + 0x1b0],EBX     ; 00535092
    MOV EDI,dword ptr [EAX + 0x156db8]  ; 00535099
    MOV dword ptr [ESP + 0x394],EBX     ; 0053509f
    TEST EDI,EDI                        ; 005350a6
    JLE 0x00535122                      ; 005350a8
        ;   XREF to: 00535122 (CONDITIONAL_JUMP)  ; LAB_00535122
    ADD EAX,0x14d128                    ; 005350aa
    MOV dword ptr [ESP + 0x39c],EAX     ; 005350af
    MOV EAX,dword ptr [ESP + 0x3bc]     ; 005350b6
    MOV dword ptr [ESP + 0x398],EAX     ; 005350bd
    MOV EAX,dword ptr [ESP + 0x398]     ; 005350c4
        ;   Label: LAB_005350c4
    MOV EAX,dword ptr [EAX + 0x156dbc]  ; 005350cb
    PUSH EAX                            ; 005350d1
    MOV ESI,dword ptr [ESP + 0x3c0]     ; 005350d2
    PUSH ESI                            ; 005350d9
    MOV dword ptr [ESP + 0x3a8],EAX     ; 005350da
    CALL FUN_00536990                   ; 005350e1
        ;   XREF to: 00536990 (UNCONDITIONAL_CALL)  ; undefined FUN_00536990()
    ADD ESP,0x8                         ; 005350e6
    TEST EAX,EAX                        ; 005350e9
    JZ 0x00535173                       ; 005350eb
        ;   XREF to: 00535173 (CONDITIONAL_JUMP)  ; LAB_00535173
    MOV EBP,dword ptr [ESP + 0x398]     ; 005350f1
        ;   Label: LAB_005350f1
    MOV EAX,dword ptr [ESP + 0x394]     ; 005350f8
    MOV EBX,dword ptr [ESP + 0x3bc]     ; 005350ff
    ADD EBP,0x4                         ; 00535106
    INC EAX                             ; 00535109
    MOV EDX,dword ptr [EBX + 0x156db8]  ; 0053510a
    MOV dword ptr [ESP + 0x398],EBP     ; 00535110
    MOV dword ptr [ESP + 0x394],EAX     ; 00535117
    CMP EAX,EDX                         ; 0053511e
    JL 0x005350c4                       ; 00535120
        ;   XREF to: 005350c4 (CONDITIONAL_JUMP)  ; LAB_005350c4
    MOV EAX,dword ptr [ESP + 0x3bc]     ; 00535122
        ;   Label: LAB_00535122
    MOV ECX,dword ptr [EAX + 0x14d144]  ; 00535129
    TEST ECX,ECX                        ; 0053512f
    JNZ 0x00535cb5                      ; 00535131
        ;   XREF to: 00535cb5 (CONDITIONAL_JUMP)  ; LAB_00535cb5
    MOV EAX,dword ptr [ESP + 0x388]     ; 00535137
        ;   Label: LAB_00535137
    ADD ESP,0x3a8                       ; 0053513e
    POP EBP                             ; 00535144
    POP EDI                             ; 00535145
    POP ESI                             ; 00535146
    POP EBX                             ; 00535147
    RET                                 ; 00535148
    PUSH EBP                            ; 00535149
        ;   Label: LAB_00535149
    PUSH ESI                            ; 0053514a
    PUSH dword ptr [ESP + 0x3cc]        ; 0053514b
    PUSH EBX                            ; 00535152
    PUSH 0x1fc9c68                      ; 00535153 | DAT_01fc9c68
    CALL FUN_00473b20                   ; 00535158
        ;   XREF to: 00473b20 (UNCONDITIONAL_CALL)  ; undefined FUN_00473b20()
    MOV dword ptr [ESP + 0x3b8],EAX     ; 0053515d
    FLD float ptr [ESP + 0x3b8]         ; 00535164
    ADD ESP,0x14                        ; 0053516b
    JMP 0x00534efd                      ; 0053516e
        ;   XREF to: 00534efd (UNCONDITIONAL_JUMP)  ; LAB_00534efd
    MOV EDI,dword ptr [0x0264bd40]      ; 00535173 | DAT_0264bd40
        ;   Label: LAB_00535173
    PUSH EDI                            ; 00535179
    MOV EBP,dword ptr [ESP + 0x3a4]     ; 0053517a
    PUSH EBP                            ; 00535181
    CALL FUN_0040c8f0                   ; 00535182
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8f0()
    ADD ESP,0x8                         ; 00535187
    TEST EAX,EAX                        ; 0053518a
    JNZ 0x005350f1                      ; 0053518c
        ;   XREF to: 005350f1 (CONDITIONAL_JUMP)  ; LAB_005350f1
    MOV dword ptr [ESP + 0x1d0],EAX     ; 00535192
    MOV dword ptr [ESP + 0x1d4],EAX     ; 00535199
    LEA EAX,[ESP + 0x1b0]               ; 005351a0
    PUSH EAX                            ; 005351a7
    MOV EBX,dword ptr [EBP + 0x2b0]     ; 005351a8
    PUSH EBP                            ; 005351ae
    CALL dword ptr [EBX + 0x44]         ; 005351af
    ADD ESP,0x8                         ; 005351b2
    MOV EBX,EAX                         ; 005351b5
    TEST EAX,EAX                        ; 005351b7
    JZ 0x005350f1                       ; 005351b9
        ;   XREF to: 005350f1 (CONDITIONAL_JUMP)  ; LAB_005350f1
    PUSH EAX                            ; 005351bf
    LEA EAX,[ESP + 0x1b4]               ; 005351c0
    PUSH EAX                            ; 005351c7
    PUSH EBP                            ; 005351c8
    LEA ESI,[ESP + 0x1fc]               ; 005351c9
    LEA EDI,[ESP + 0x22c]               ; 005351d0
    CALL FUN_004090f0                   ; 005351d7
        ;   XREF to: 004090f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004090f0()
    ADD ESP,0xc                         ; 005351dc
    LEA EAX,[ESP + 0x220]               ; 005351df
    MOV ECX,0x6                         ; 005351e6
    PUSH EAX                            ; 005351eb
    LEA EAX,[ESP + 0x20c]               ; 005351ec
    LEA ESI,[ESP + 0x1f4]               ; 005351f3
    PUSH EAX                            ; 005351fa
    MOVSD.REP ES:EDI,ESI                ; 005351fb
    CALL FUN_0041b660                   ; 005351fd
        ;   XREF to: 0041b660 (UNCONDITIONAL_CALL)  ; undefined FUN_0041b660()
    ADD ESP,0x8                         ; 00535202
    TEST EAX,EAX                        ; 00535205
    JZ 0x005350f1                       ; 00535207
        ;   XREF to: 005350f1 (CONDITIONAL_JUMP)  ; LAB_005350f1
    MOV EAX,dword ptr [ESP + 0x3bc]     ; 0053520d
    CMP dword ptr [EAX + 0x15f6f0],0x0  ; 00535214
    JZ 0x00535a41                       ; 0053521b
        ;   XREF to: 00535a41 (CONDITIONAL_JUMP)  ; LAB_00535a41
    CMP EBX,0x2                         ; 00535221
        ;   Label: LAB_00535221
    JNC 0x00535c7e                      ; 00535224
        ;   XREF to: 00535c7e (CONDITIONAL_JUMP)  ; LAB_00535c7e
    CMP EBX,0x1                         ; 0053522a
    JNZ 0x00535c8d                      ; 0053522d
        ;   XREF to: 00535c8d (CONDITIONAL_JUMP)  ; LAB_00535c8d
    PUSH 0x5f22b0                       ; 00535233 | DAT_005f22b0
    PUSH 0x8                            ; 00535238
    LEA EAX,[ESP + 0x8]                 ; 0053523a
    PUSH EAX                            ; 0053523e
    CALL FUN_005b7f5f                   ; 0053523f
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined FUN_005b7f5f()
    ADD ESP,0xc                         ; 00535244
    MOV EAX,dword ptr [ESP + 0x3a0]     ; 00535247
    MOV ESI,dword ptr [ESP + 0x3a0]     ; 0053524e
    LEA EDI,[ESP + 0x238]               ; 00535255
    PUSH ESI                            ; 0053525c
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 0053525d
    LEA ESI,[ESP + 0x1dc]               ; 00535263
    LEA EBX,[ESP + 0x4]                 ; 0053526a
    CALL dword ptr [EAX + 0x24]         ; 0053526e
    MOV ECX,0x6                         ; 00535271
    LEA ESI,[ESP + 0x1dc]               ; 00535276
    ADD ESP,0x4                         ; 0053527d
    XOR EBP,EBP                         ; 00535280
    MOVSD.REP ES:EDI,ESI                ; 00535282
    PUSH EBP                            ; 00535284
        ;   Label: LAB_00535284
    LEA EAX,[ESP + 0x23c]               ; 00535285
    PUSH EAX                            ; 0053528c
    LEA ESI,[ESP + 0x36c]               ; 0053528d
    LEA EDI,[ESP + 0x33c]               ; 00535294
    CALL FUN_0041a600                   ; 0053529b
        ;   XREF to: 0041a600 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a600()
    LEA ESI,[ESP + 0x36c]               ; 005352a0
    ADD ESP,0x8                         ; 005352a7
    LEA EAX,[ESP + 0x334]               ; 005352aa
    MOVSD ES:EDI,ESI                    ; 005352b1
    MOVSD ES:EDI,ESI                    ; 005352b2
    MOVSD ES:EDI,ESI                    ; 005352b3
    PUSH EAX                            ; 005352b4
    MOV EDI,dword ptr [ESP + 0x3a4]     ; 005352b5
    PUSH EDI                            ; 005352bc
    LEA ESI,[ESP + 0x2dc]               ; 005352bd
    CALL FUN_00408d70                   ; 005352c4
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    LEA EDI,[ESP + 0x2c4]               ; 005352c9
    LEA ESI,[ESP + 0x2dc]               ; 005352d0
    ADD ESP,0x8                         ; 005352d7
    LEA EAX,[ESP + 0x2bc]               ; 005352da
    MOVSD ES:EDI,ESI                    ; 005352e1
    MOVSD ES:EDI,ESI                    ; 005352e2
    MOVSD ES:EDI,ESI                    ; 005352e3
    CMP EBX,EAX                         ; 005352e4
    JZ 0x00535305                       ; 005352e6
        ;   XREF to: 00535305 (CONDITIONAL_JUMP)  ; LAB_00535305
    MOV EAX,dword ptr [ESP + 0x2bc]     ; 005352e8
    MOV dword ptr [EBX],EAX             ; 005352ef
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 005352f1
    MOV dword ptr [EBX + 0x4],EAX       ; 005352f8
    MOV EAX,dword ptr [ESP + 0x2c4]     ; 005352fb
    MOV dword ptr [EBX + 0x8],EAX       ; 00535302
    INC EBP                             ; 00535305
        ;   Label: LAB_00535305
    ADD EBX,0xc                         ; 00535306
    CMP EBP,0x8                         ; 00535309
    JL 0x00535284                       ; 0053530c
        ;   XREF to: 00535284 (CONDITIONAL_JUMP)  ; LAB_00535284
    LEA EAX,[ESP + 0x48]                ; 00535312
    PUSH EAX                            ; 00535316
    LEA EAX,[ESP + 0x34]                ; 00535317
    PUSH EAX                            ; 0053531b
    LEA EAX,[ESP + 0x8]                 ; 0053531c
    PUSH EAX                            ; 00535320
    LEA EAX,[ESP + 0x6c]                ; 00535321
    PUSH EAX                            ; 00535325
    CALL FUN_004779e0                   ; 00535326
        ;   XREF to: 004779e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004779e0()
    ADD ESP,0x10                        ; 0053532b
    LEA EAX,[ESP + 0x388]               ; 0053532e
    PUSH EAX                            ; 00535335
    LEA EAX,[ESP + 0x2cc]               ; 00535336
    PUSH dword ptr [ESP + 0x3c8]        ; 0053533d
    PUSH EAX                            ; 00535344
    LEA EAX,[ESP + 0x6c]                ; 00535345
    PUSH EAX                            ; 00535349
    CALL FUN_00478550                   ; 0053534a
        ;   XREF to: 00478550 (UNCONDITIONAL_CALL)  ; undefined FUN_00478550()
    ADD ESP,0x10                        ; 0053534f
    MOV ESI,EAX                         ; 00535352
    LEA EAX,[ESP + 0x18]                ; 00535354
    PUSH EAX                            ; 00535358
    LEA EAX,[ESP + 0x4c]                ; 00535359
    PUSH EAX                            ; 0053535d
    LEA EAX,[ESP + 0x8]                 ; 0053535e
    PUSH EAX                            ; 00535362
    LEA EAX,[ESP + 0x6c]                ; 00535363
    PUSH EAX                            ; 00535367
    CALL FUN_004779e0                   ; 00535368
        ;   XREF to: 004779e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004779e0()
    ADD ESP,0x10                        ; 0053536d
    LEA EAX,[ESP + 0x388]               ; 00535370
    PUSH EAX                            ; 00535377
    LEA EAX,[ESP + 0x2cc]               ; 00535378
    PUSH dword ptr [ESP + 0x3c8]        ; 0053537f
    PUSH EAX                            ; 00535386
    LEA EAX,[ESP + 0x6c]                ; 00535387
    PUSH EAX                            ; 0053538b
    XOR EBX,EBX                         ; 0053538c
    MOV EBP,ESI                         ; 0053538e
    CALL FUN_00478550                   ; 00535390
        ;   XREF to: 00478550 (UNCONDITIONAL_CALL)  ; undefined FUN_00478550()
    ADD ESP,0x10                        ; 00535395
    OR EBP,EAX                          ; 00535398
    JZ 0x00535427                       ; 0053539a
        ;   XREF to: 00535427 (CONDITIONAL_JUMP)  ; LAB_00535427
    FLD float ptr [ESP + 0x84]          ; 005353a0
    FLD float ptr [ESP + 0x88]          ; 005353a7
    FLD float ptr [ESP + 0x8c]          ; 005353ae
    LEA EDI,[ESP + 0x28c]               ; 005353b5
    LEA ESI,[ESP + 0x250]               ; 005353bc
    FXCH ST2                            ; 005353c3
    FCHS                                ; 005353c5
    FXCH                                ; 005353c7
    FCHS                                ; 005353c9
    FXCH ST2                            ; 005353cb
    FCHS                                ; 005353cd
    FXCH ST2                            ; 005353cf
    FSTP float ptr [ESP + 0x254]        ; 005353d1
    FXCH                                ; 005353d8
    FSTP float ptr [ESP + 0x258]        ; 005353da
    FSTP float ptr [ESP + 0x250]        ; 005353e1
    MOVSD ES:EDI,ESI                    ; 005353e8
    MOVSD ES:EDI,ESI                    ; 005353e9
    MOVSD ES:EDI,ESI                    ; 005353ea
    LEA EAX,[ESP + 0x2ec]               ; 005353eb
    LEA ESI,[ESP + 0x28c]               ; 005353f2
    CMP EAX,ESI                         ; 005353f9
    JZ 0x00535427                       ; 005353fb
        ;   XREF to: 00535427 (CONDITIONAL_JUMP)  ; LAB_00535427
    MOV EAX,dword ptr [ESP + 0x28c]     ; 005353fd
    MOV dword ptr [ESP + 0x2ec],EAX     ; 00535404
    MOV EAX,dword ptr [ESP + 0x290]     ; 0053540b
    MOV dword ptr [ESP + 0x2f0],EAX     ; 00535412
    MOV EAX,dword ptr [ESP + 0x294]     ; 00535419
    MOV dword ptr [ESP + 0x2f4],EAX     ; 00535420
    LEA EAX,[ESP + 0x54]                ; 00535427
        ;   Label: LAB_00535427
    PUSH EAX                            ; 0053542b
    LEA EAX,[ESP + 0x28]                ; 0053542c
    PUSH EAX                            ; 00535430
    LEA EAX,[ESP + 0x14]                ; 00535431
    PUSH EAX                            ; 00535435
    LEA EAX,[ESP + 0x14c]               ; 00535436
    PUSH EAX                            ; 0053543d
    CALL FUN_004779e0                   ; 0053543e
        ;   XREF to: 004779e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004779e0()
    ADD ESP,0x10                        ; 00535443
    LEA EAX,[ESP + 0x388]               ; 00535446
    PUSH EAX                            ; 0053544d
    LEA EAX,[ESP + 0x2cc]               ; 0053544e
    PUSH dword ptr [ESP + 0x3c8]        ; 00535455
    PUSH EAX                            ; 0053545c
    LEA EAX,[ESP + 0x14c]               ; 0053545d
    PUSH EAX                            ; 00535464
    OR EBX,EBP                          ; 00535465
    CALL FUN_00478550                   ; 00535467
        ;   XREF to: 00478550 (UNCONDITIONAL_CALL)  ; undefined FUN_00478550()
    ADD ESP,0x10                        ; 0053546c
    MOV EBP,EAX                         ; 0053546f
    LEA EAX,[ESP + 0x3c]                ; 00535471
    PUSH EAX                            ; 00535475
    LEA EAX,[ESP + 0x58]                ; 00535476
    PUSH EAX                            ; 0053547a
    LEA EAX,[ESP + 0x14]                ; 0053547b
    PUSH EAX                            ; 0053547f
    LEA EAX,[ESP + 0x14c]               ; 00535480
    PUSH EAX                            ; 00535487
    CALL FUN_004779e0                   ; 00535488
        ;   XREF to: 004779e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004779e0()
    ADD ESP,0x10                        ; 0053548d
    LEA EAX,[ESP + 0x388]               ; 00535490
    PUSH EAX                            ; 00535497
    LEA EAX,[ESP + 0x2cc]               ; 00535498
    PUSH dword ptr [ESP + 0x3c8]        ; 0053549f
    PUSH EAX                            ; 005354a6
    LEA EAX,[ESP + 0x14c]               ; 005354a7
    PUSH EAX                            ; 005354ae
    CALL FUN_00478550                   ; 005354af
        ;   XREF to: 00478550 (UNCONDITIONAL_CALL)  ; undefined FUN_00478550()
    ADD ESP,0x10                        ; 005354b4
    OR EBP,EAX                          ; 005354b7
    JZ 0x00535546                       ; 005354b9
        ;   XREF to: 00535546 (CONDITIONAL_JUMP)  ; LAB_00535546
    FLD float ptr [ESP + 0x164]         ; 005354bf
    FLD float ptr [ESP + 0x168]         ; 005354c6
    FLD float ptr [ESP + 0x16c]         ; 005354cd
    LEA EDI,[ESP + 0x298]               ; 005354d4
    LEA ESI,[ESP + 0x280]               ; 005354db
    FXCH ST2                            ; 005354e2
    FCHS                                ; 005354e4
    FXCH                                ; 005354e6
    FCHS                                ; 005354e8
    FXCH ST2                            ; 005354ea
    FCHS                                ; 005354ec
    FXCH ST2                            ; 005354ee
    FSTP float ptr [ESP + 0x284]        ; 005354f0
    FXCH                                ; 005354f7
    FSTP float ptr [ESP + 0x288]        ; 005354f9
    FSTP float ptr [ESP + 0x280]        ; 00535500
    MOVSD ES:EDI,ESI                    ; 00535507
    MOVSD ES:EDI,ESI                    ; 00535508
    MOVSD ES:EDI,ESI                    ; 00535509
    LEA EAX,[ESP + 0x298]               ; 0053550a
    LEA ESI,[ESP + 0x2ec]               ; 00535511
    CMP ESI,EAX                         ; 00535518
    JZ 0x00535546                       ; 0053551a
        ;   XREF to: 00535546 (CONDITIONAL_JUMP)  ; LAB_00535546
    MOV EAX,dword ptr [ESP + 0x298]     ; 0053551c
    MOV dword ptr [ESP + 0x2ec],EAX     ; 00535523
    MOV EAX,dword ptr [ESP + 0x29c]     ; 0053552a
    MOV dword ptr [ESP + 0x2f0],EAX     ; 00535531
    MOV EAX,dword ptr [ESP + 0x2a0]     ; 00535538
    MOV dword ptr [ESP + 0x2f4],EAX     ; 0053553f
    LEA EAX,[ESP + 0x3c]                ; 00535546
        ;   Label: LAB_00535546
    PUSH EAX                            ; 0053554a
    LEA EAX,[ESP + 0x10]                ; 0053554b
    PUSH EAX                            ; 0053554f
    LEA EAX,[ESP + 0x8]                 ; 00535550
    PUSH EAX                            ; 00535554
    LEA EAX,[ESP + 0x184]               ; 00535555
    PUSH EAX                            ; 0053555c
    CALL FUN_004779e0                   ; 0053555d
        ;   XREF to: 004779e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004779e0()
    ADD ESP,0x10                        ; 00535562
    LEA EAX,[ESP + 0x388]               ; 00535565
    PUSH EAX                            ; 0053556c
    LEA EAX,[ESP + 0x2cc]               ; 0053556d
    PUSH dword ptr [ESP + 0x3c8]        ; 00535574
    PUSH EAX                            ; 0053557b
    LEA EAX,[ESP + 0x184]               ; 0053557c
    PUSH EAX                            ; 00535583
    CALL FUN_00478550                   ; 00535584
        ;   XREF to: 00478550 (UNCONDITIONAL_CALL)  ; undefined FUN_00478550()
    ADD ESP,0x10                        ; 00535589
    MOV ESI,EAX                         ; 0053558c
    LEA EAX,[ESP + 0x30]                ; 0053558e
    PUSH EAX                            ; 00535592
    LEA EAX,[ESP + 0x40]                ; 00535593
    PUSH EAX                            ; 00535597
    LEA EAX,[ESP + 0x8]                 ; 00535598
    PUSH EAX                            ; 0053559c
    LEA EAX,[ESP + 0x184]               ; 0053559d
    PUSH EAX                            ; 005355a4
    CALL FUN_004779e0                   ; 005355a5
        ;   XREF to: 004779e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004779e0()
    ADD ESP,0x10                        ; 005355aa
    LEA EAX,[ESP + 0x388]               ; 005355ad
    PUSH EAX                            ; 005355b4
    LEA EAX,[ESP + 0x2cc]               ; 005355b5
    PUSH dword ptr [ESP + 0x3c8]        ; 005355bc
    PUSH EAX                            ; 005355c3
    LEA EAX,[ESP + 0x184]               ; 005355c4
    PUSH EAX                            ; 005355cb
    OR EBX,EBP                          ; 005355cc
    MOV EBP,ESI                         ; 005355ce
    CALL FUN_00478550                   ; 005355d0
        ;   XREF to: 00478550 (UNCONDITIONAL_CALL)  ; undefined FUN_00478550()
    ADD ESP,0x10                        ; 005355d5
    OR EBP,EAX                          ; 005355d8
    JZ 0x00535667                       ; 005355da
        ;   XREF to: 00535667 (CONDITIONAL_JUMP)  ; LAB_00535667
    FLD float ptr [ESP + 0x19c]         ; 005355e0
    FLD float ptr [ESP + 0x1a0]         ; 005355e7
    FLD float ptr [ESP + 0x1a4]         ; 005355ee
    LEA EDI,[ESP + 0x310]               ; 005355f5
    LEA ESI,[ESP + 0x34c]               ; 005355fc
    FXCH ST2                            ; 00535603
    FCHS                                ; 00535605
    FXCH                                ; 00535607
    FCHS                                ; 00535609
    FXCH ST2                            ; 0053560b
    FCHS                                ; 0053560d
    FXCH ST2                            ; 0053560f
    FSTP float ptr [ESP + 0x350]        ; 00535611
    FXCH                                ; 00535618
    FSTP float ptr [ESP + 0x354]        ; 0053561a
    FSTP float ptr [ESP + 0x34c]        ; 00535621
    MOVSD ES:EDI,ESI                    ; 00535628
    MOVSD ES:EDI,ESI                    ; 00535629
    MOVSD ES:EDI,ESI                    ; 0053562a
    LEA EAX,[ESP + 0x310]               ; 0053562b
    LEA ESI,[ESP + 0x2ec]               ; 00535632
    CMP ESI,EAX                         ; 00535639
    JZ 0x00535667                       ; 0053563b
        ;   XREF to: 00535667 (CONDITIONAL_JUMP)  ; LAB_00535667
    MOV EAX,dword ptr [ESP + 0x310]     ; 0053563d
    MOV dword ptr [ESP + 0x2ec],EAX     ; 00535644
    MOV EAX,dword ptr [ESP + 0x314]     ; 0053564b
    MOV dword ptr [ESP + 0x2f0],EAX     ; 00535652
    MOV EAX,dword ptr [ESP + 0x318]     ; 00535659
    MOV dword ptr [ESP + 0x2f4],EAX     ; 00535660
    LEA EAX,[ESP + 0x54]                ; 00535667
        ;   Label: LAB_00535667
    PUSH EAX                            ; 0053566b
    LEA EAX,[ESP + 0x4c]                ; 0053566c
    PUSH EAX                            ; 00535670
    LEA EAX,[ESP + 0x20]                ; 00535671
    PUSH EAX                            ; 00535675
    LEA EAX,[ESP + 0x114]               ; 00535676
    PUSH EAX                            ; 0053567d
    CALL FUN_004779e0                   ; 0053567e
        ;   XREF to: 004779e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004779e0()
    ADD ESP,0x10                        ; 00535683
    LEA EAX,[ESP + 0x388]               ; 00535686
    PUSH EAX                            ; 0053568d
    LEA EAX,[ESP + 0x2cc]               ; 0053568e
    PUSH dword ptr [ESP + 0x3c8]        ; 00535695
    PUSH EAX                            ; 0053569c
    LEA EAX,[ESP + 0x114]               ; 0053569d
    PUSH EAX                            ; 005356a4
    OR EBX,EBP                          ; 005356a5
    CALL FUN_00478550                   ; 005356a7
        ;   XREF to: 00478550 (UNCONDITIONAL_CALL)  ; undefined FUN_00478550()
    ADD ESP,0x10                        ; 005356ac
    MOV EBP,EAX                         ; 005356af
    LEA EAX,[ESP + 0x24]                ; 005356b1
    PUSH EAX                            ; 005356b5
    LEA EAX,[ESP + 0x58]                ; 005356b6
    PUSH EAX                            ; 005356ba
    LEA EAX,[ESP + 0x20]                ; 005356bb
    PUSH EAX                            ; 005356bf
    LEA EAX,[ESP + 0x114]               ; 005356c0
    PUSH EAX                            ; 005356c7
    CALL FUN_004779e0                   ; 005356c8
        ;   XREF to: 004779e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004779e0()
    ADD ESP,0x10                        ; 005356cd
    LEA EAX,[ESP + 0x388]               ; 005356d0
    PUSH EAX                            ; 005356d7
    LEA EAX,[ESP + 0x2cc]               ; 005356d8
    PUSH dword ptr [ESP + 0x3c8]        ; 005356df
    PUSH EAX                            ; 005356e6
    LEA EAX,[ESP + 0x114]               ; 005356e7
    PUSH EAX                            ; 005356ee
    CALL FUN_00478550                   ; 005356ef
        ;   XREF to: 00478550 (UNCONDITIONAL_CALL)  ; undefined FUN_00478550()
    ADD ESP,0x10                        ; 005356f4
    OR EBP,EAX                          ; 005356f7
    JZ 0x00535786                       ; 005356f9
        ;   XREF to: 00535786 (CONDITIONAL_JUMP)  ; LAB_00535786
    FLD float ptr [ESP + 0x12c]         ; 005356ff
    FLD float ptr [ESP + 0x130]         ; 00535706
    FLD float ptr [ESP + 0x134]         ; 0053570d
    LEA EDI,[ESP + 0x2b0]               ; 00535714
    LEA ESI,[ESP + 0x370]               ; 0053571b
    FXCH ST2                            ; 00535722
    FCHS                                ; 00535724
    FXCH                                ; 00535726
    FCHS                                ; 00535728
    FXCH ST2                            ; 0053572a
    FCHS                                ; 0053572c
    FXCH ST2                            ; 0053572e
    FSTP float ptr [ESP + 0x374]        ; 00535730
    FXCH                                ; 00535737
    FSTP float ptr [ESP + 0x378]        ; 00535739
    FSTP float ptr [ESP + 0x370]        ; 00535740
    MOVSD ES:EDI,ESI                    ; 00535747
    MOVSD ES:EDI,ESI                    ; 00535748
    MOVSD ES:EDI,ESI                    ; 00535749
    LEA EAX,[ESP + 0x2b0]               ; 0053574a
    LEA ESI,[ESP + 0x2ec]               ; 00535751
    CMP ESI,EAX                         ; 00535758
    JZ 0x00535786                       ; 0053575a
        ;   XREF to: 00535786 (CONDITIONAL_JUMP)  ; LAB_00535786
    MOV EAX,dword ptr [ESP + 0x2b0]     ; 0053575c
    MOV dword ptr [ESP + 0x2ec],EAX     ; 00535763
    MOV EAX,dword ptr [ESP + 0x2b4]     ; 0053576a
    MOV dword ptr [ESP + 0x2f0],EAX     ; 00535771
    MOV EAX,dword ptr [ESP + 0x2b8]     ; 00535778
    MOV dword ptr [ESP + 0x2f4],EAX     ; 0053577f
    LEA EAX,[ESP + 0x24]                ; 00535786
        ;   Label: LAB_00535786
    PUSH EAX                            ; 0053578a
    LEA EAX,[ESP + 0x1c]                ; 0053578b
    PUSH EAX                            ; 0053578f
    LEA EAX,[ESP + 0x8]                 ; 00535790
    PUSH EAX                            ; 00535794
    LEA EAX,[ESP + 0xdc]                ; 00535795
    PUSH EAX                            ; 0053579c
    CALL FUN_004779e0                   ; 0053579d
        ;   XREF to: 004779e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004779e0()
    ADD ESP,0x10                        ; 005357a2
    LEA EAX,[ESP + 0x388]               ; 005357a5
    PUSH EAX                            ; 005357ac
    LEA EAX,[ESP + 0x2cc]               ; 005357ad
    PUSH dword ptr [ESP + 0x3c8]        ; 005357b4
    PUSH EAX                            ; 005357bb
    LEA EAX,[ESP + 0xdc]                ; 005357bc
    PUSH EAX                            ; 005357c3
    OR EBX,EBP                          ; 005357c4
    CALL FUN_00478550                   ; 005357c6
        ;   XREF to: 00478550 (UNCONDITIONAL_CALL)  ; undefined FUN_00478550()
    ADD ESP,0x10                        ; 005357cb
    MOV EBP,EAX                         ; 005357ce
    LEA EAX,[ESP + 0xc]                 ; 005357d0
    PUSH EAX                            ; 005357d4
    LEA EAX,[ESP + 0x28]                ; 005357d5
    PUSH EAX                            ; 005357d9
    LEA EAX,[ESP + 0x8]                 ; 005357da
    PUSH EAX                            ; 005357de
    LEA EAX,[ESP + 0xdc]                ; 005357df
    PUSH EAX                            ; 005357e6
    CALL FUN_004779e0                   ; 005357e7
        ;   XREF to: 004779e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004779e0()
    ADD ESP,0x10                        ; 005357ec
    LEA EAX,[ESP + 0x388]               ; 005357ef
    PUSH EAX                            ; 005357f6
    LEA EAX,[ESP + 0x2cc]               ; 005357f7
    PUSH dword ptr [ESP + 0x3c8]        ; 005357fe
    PUSH EAX                            ; 00535805
    LEA EAX,[ESP + 0xdc]                ; 00535806
    PUSH EAX                            ; 0053580d
    CALL FUN_00478550                   ; 0053580e
        ;   XREF to: 00478550 (UNCONDITIONAL_CALL)  ; undefined FUN_00478550()
    ADD ESP,0x10                        ; 00535813
    OR EBP,EAX                          ; 00535816
    JZ 0x005358a5                       ; 00535818
        ;   XREF to: 005358a5 (CONDITIONAL_JUMP)  ; LAB_005358a5
    FLD float ptr [ESP + 0xf4]          ; 0053581e
    FLD float ptr [ESP + 0xf8]          ; 00535825
    FLD float ptr [ESP + 0xfc]          ; 0053582c
    LEA EDI,[ESP + 0x274]               ; 00535833
    LEA ESI,[ESP + 0x358]               ; 0053583a
    FXCH ST2                            ; 00535841
    FCHS                                ; 00535843
    FXCH                                ; 00535845
    FCHS                                ; 00535847
    FXCH ST2                            ; 00535849
    FCHS                                ; 0053584b
    FXCH ST2                            ; 0053584d
    FSTP float ptr [ESP + 0x35c]        ; 0053584f
    FXCH                                ; 00535856
    FSTP float ptr [ESP + 0x360]        ; 00535858
    FSTP float ptr [ESP + 0x358]        ; 0053585f
    MOVSD ES:EDI,ESI                    ; 00535866
    MOVSD ES:EDI,ESI                    ; 00535867
    MOVSD ES:EDI,ESI                    ; 00535868
    LEA EAX,[ESP + 0x2ec]               ; 00535869
    LEA ESI,[ESP + 0x274]               ; 00535870
    CMP EAX,ESI                         ; 00535877
    JZ 0x005358a5                       ; 00535879
        ;   XREF to: 005358a5 (CONDITIONAL_JUMP)  ; LAB_005358a5
    MOV EAX,dword ptr [ESP + 0x274]     ; 0053587b
    MOV dword ptr [ESP + 0x2ec],EAX     ; 00535882
    MOV EAX,dword ptr [ESP + 0x278]     ; 00535889
    MOV dword ptr [ESP + 0x2f0],EAX     ; 00535890
    MOV EAX,dword ptr [ESP + 0x27c]     ; 00535897
    MOV dword ptr [ESP + 0x2f4],EAX     ; 0053589e
    LEA EAX,[ESP + 0x54]                ; 005358a5
        ;   Label: LAB_005358a5
    PUSH EAX                            ; 005358a9
    LEA EAX,[ESP + 0x40]                ; 005358aa
    PUSH EAX                            ; 005358ae
    LEA EAX,[ESP + 0x38]                ; 005358af
    PUSH EAX                            ; 005358b3
    LEA EAX,[ESP + 0xa4]                ; 005358b4
    PUSH EAX                            ; 005358bb
    CALL FUN_004779e0                   ; 005358bc
        ;   XREF to: 004779e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004779e0()
    ADD ESP,0x10                        ; 005358c1
    LEA EAX,[ESP + 0x388]               ; 005358c4
    PUSH EAX                            ; 005358cb
    LEA EAX,[ESP + 0x2cc]               ; 005358cc
    PUSH dword ptr [ESP + 0x3c8]        ; 005358d3
    PUSH EAX                            ; 005358da
    LEA EAX,[ESP + 0xa4]                ; 005358db
    PUSH EAX                            ; 005358e2
    OR EBX,EBP                          ; 005358e3
    CALL FUN_00478550                   ; 005358e5
        ;   XREF to: 00478550 (UNCONDITIONAL_CALL)  ; undefined FUN_00478550()
    ADD ESP,0x10                        ; 005358ea
    MOV EBP,EAX                         ; 005358ed
    LEA EAX,[ESP + 0x48]                ; 005358ef
    PUSH EAX                            ; 005358f3
    LEA EAX,[ESP + 0x58]                ; 005358f4
    PUSH EAX                            ; 005358f8
    LEA EAX,[ESP + 0x38]                ; 005358f9
    PUSH EAX                            ; 005358fd
    LEA EAX,[ESP + 0xa4]                ; 005358fe
    PUSH EAX                            ; 00535905
    CALL FUN_004779e0                   ; 00535906
        ;   XREF to: 004779e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004779e0()
    ADD ESP,0x10                        ; 0053590b
    LEA EAX,[ESP + 0x388]               ; 0053590e
    PUSH EAX                            ; 00535915
    LEA EAX,[ESP + 0x2cc]               ; 00535916
    PUSH dword ptr [ESP + 0x3c8]        ; 0053591d
    PUSH EAX                            ; 00535924
    LEA EAX,[ESP + 0xa4]                ; 00535925
    PUSH EAX                            ; 0053592c
    CALL FUN_00478550                   ; 0053592d
        ;   XREF to: 00478550 (UNCONDITIONAL_CALL)  ; undefined FUN_00478550()
    ADD ESP,0x10                        ; 00535932
    OR EBP,EAX                          ; 00535935
    JZ 0x005359c4                       ; 00535937
        ;   XREF to: 005359c4 (CONDITIONAL_JUMP)  ; LAB_005359c4
    FLD float ptr [ESP + 0xbc]          ; 0053593d
    FLD float ptr [ESP + 0xc0]          ; 00535944
    FLD float ptr [ESP + 0xc4]          ; 0053594b
    LEA EDI,[ESP + 0x25c]               ; 00535952
    LEA ESI,[ESP + 0x31c]               ; 00535959
    FXCH ST2                            ; 00535960
    FCHS                                ; 00535962
    FXCH                                ; 00535964
    FCHS                                ; 00535966
    FXCH ST2                            ; 00535968
    FCHS                                ; 0053596a
    FXCH ST2                            ; 0053596c
    FSTP float ptr [ESP + 0x320]        ; 0053596e
    FXCH                                ; 00535975
    FSTP float ptr [ESP + 0x324]        ; 00535977
    FSTP float ptr [ESP + 0x31c]        ; 0053597e
    MOVSD ES:EDI,ESI                    ; 00535985
    MOVSD ES:EDI,ESI                    ; 00535986
    MOVSD ES:EDI,ESI                    ; 00535987
    LEA EAX,[ESP + 0x2ec]               ; 00535988
    LEA ESI,[ESP + 0x25c]               ; 0053598f
    CMP EAX,ESI                         ; 00535996
    JZ 0x005359c4                       ; 00535998
        ;   XREF to: 005359c4 (CONDITIONAL_JUMP)  ; LAB_005359c4
    MOV EAX,dword ptr [ESP + 0x25c]     ; 0053599a
    MOV dword ptr [ESP + 0x2ec],EAX     ; 005359a1
    MOV EAX,dword ptr [ESP + 0x260]     ; 005359a8
    MOV dword ptr [ESP + 0x2f0],EAX     ; 005359af
    MOV EAX,dword ptr [ESP + 0x264]     ; 005359b6
    MOV dword ptr [ESP + 0x2f4],EAX     ; 005359bd
    OR EBX,EBP                          ; 005359c4
        ;   Label: LAB_005359c4
    JZ 0x005350f1                       ; 005359c6
        ;   XREF to: 005350f1 (CONDITIONAL_JUMP)  ; LAB_005350f1
    MOV EAX,dword ptr [ESP + 0x3bc]     ; 005359cc
    MOV EBX,dword ptr [ESP + 0x3a0]     ; 005359d3
    MOV dword ptr [EAX + 0x14d144],EBX  ; 005359da
    LEA EAX,[ESP + 0x2ec]               ; 005359e0
    PUSH EAX                            ; 005359e7
    PUSH EBX                            ; 005359e8
    LEA ESI,[ESP + 0x30c]               ; 005359e9
    LEA EDI,[ESP + 0x384]               ; 005359f0
    CALL FUN_00408cf0                   ; 005359f7
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408cf0()
    LEA ESI,[ESP + 0x30c]               ; 005359fc
    ADD ESP,0x8                         ; 00535a03
    LEA EAX,[ESP + 0x37c]               ; 00535a06
    MOV EDX,dword ptr [ESP + 0x39c]     ; 00535a0d
    MOVSD ES:EDI,ESI                    ; 00535a14
    MOVSD ES:EDI,ESI                    ; 00535a15
    MOVSD ES:EDI,ESI                    ; 00535a16
    CMP EAX,EDX                         ; 00535a17
    JZ 0x005350f1                       ; 00535a19
        ;   XREF to: 005350f1 (CONDITIONAL_JUMP)  ; LAB_005350f1
    MOV EAX,dword ptr [ESP + 0x37c]     ; 00535a1f
    MOV dword ptr [EDX],EAX             ; 00535a26
    MOV EAX,dword ptr [ESP + 0x380]     ; 00535a28
    MOV dword ptr [EDX + 0x4],EAX       ; 00535a2f
    MOV EAX,dword ptr [ESP + 0x384]     ; 00535a32
    MOV dword ptr [EDX + 0x8],EAX       ; 00535a39
    JMP 0x005350f1                      ; 00535a3c
        ;   XREF to: 005350f1 (UNCONDITIONAL_JUMP)  ; LAB_005350f1
    MOV EBP,dword ptr [ESP + 0x1d4]     ; 00535a41
        ;   Label: LAB_00535a41
    TEST EBP,EBP                        ; 00535a48
    JZ 0x00535221                       ; 00535a4a
        ;   XREF to: 00535221 (CONDITIONAL_JUMP)  ; LAB_00535221
    PUSH EBP                            ; 00535a50
    CALL FUN_0044fd20                   ; 00535a51
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd20()
    ADD ESP,0x4                         ; 00535a56
    MOV EDX,dword ptr [EAX + 0x358]     ; 00535a59
    MOV EBX,EAX                         ; 00535a5f
    TEST EDX,EDX                        ; 00535a61
    JNZ 0x00535a89                      ; 00535a63
        ;   XREF to: 00535a89 (CONDITIONAL_JUMP)  ; LAB_00535a89
    PUSH EAX                            ; 00535a65
    MOV ECX,0x5e5d15                    ; 00535a66 | = "..\\core\\setcolid.cpp"
    MOV ESI,0xcb                        ; 00535a6b
    PUSH 0x5e5d2a                       ; 00535a70 | = "info.keyFramedModelInstancePtr != NUL..."
    MOV dword ptr [0x01d046a0],ECX      ; 00535a75 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 00535a7b | DAT_01d046a4
    CALL FUN_004e4500                   ; 00535a81
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x8                         ; 00535a86
    FLD float ptr [ESP + 0x2c8]         ; 00535a89
        ;   Label: LAB_00535a89
    FLD float ptr [ESP + 0x2cc]         ; 00535a90
    FLD float ptr [ESP + 0x2d0]         ; 00535a97
    MOV EAX,dword ptr [ESP + 0x3a0]     ; 00535a9e
    FLD float ptr [ESP + 0x388]         ; 00535aa5
    ADD EAX,0x30                        ; 00535aac
    LEA EDI,[ESP + 0x2a4]               ; 00535aaf
    LEA ESI,[ESP + 0x2f8]               ; 00535ab6
    FXCH ST3                            ; 00535abd
    FSUB float ptr [EAX + -0x10]        ; 00535abf
    FXCH ST2                            ; 00535ac2
    FSUB float ptr [EAX + -0xc]         ; 00535ac4
    FXCH                                ; 00535ac7
    FSUB float ptr [EAX + -0x8]         ; 00535ac9
    FXCH ST2                            ; 00535acc
    FSTP float ptr [ESP + 0x2f8]        ; 00535ace
    FSTP float ptr [ESP + 0x2fc]        ; 00535ad5
    FSTP float ptr [ESP + 0x300]        ; 00535adc
    MOVSD ES:EDI,ESI                    ; 00535ae3
    MOVSD ES:EDI,ESI                    ; 00535ae4
    MOVSD ES:EDI,ESI                    ; 00535ae5
    PUSH EAX                            ; 00535ae6
    FSUB float ptr [EAX + -0xc]         ; 00535ae7
    LEA EAX,[ESP + 0x394]               ; 00535aea
    PUSH EAX                            ; 00535af1
    LEA EAX,[ESP + 0x2ac]               ; 00535af2
    PUSH dword ptr [ESP + 0x3cc]        ; 00535af9
    PUSH EAX                            ; 00535b00
    PUSH 0x0                            ; 00535b01
    PUSH EBX                            ; 00535b03
    FSTP float ptr [ESP + 0x3a8]        ; 00535b04
    CALL FUN_0044f670                   ; 00535b0b
        ;   XREF to: 0044f670 (UNCONDITIONAL_CALL)  ; undefined FUN_0044f670()
    ADD ESP,0x18                        ; 00535b10
    TEST EAX,EAX                        ; 00535b13
    JZ 0x005350f1                       ; 00535b15
        ;   XREF to: 005350f1 (CONDITIONAL_JUMP)  ; LAB_005350f1
    MOV EAX,dword ptr [ESP + 0x3bc]     ; 00535b1b
    MOV EBX,dword ptr [ESP + 0x3a0]     ; 00535b22
    MOV EBP,0x3f800000                  ; 00535b29
    MOV EDX,dword ptr [ESP + 0x39c]     ; 00535b2e
    MOV dword ptr [EAX + 0x14d144],EBX  ; 00535b35
    XOR EDI,EDI                         ; 00535b3b
    FLD float ptr [ESP + 0x390]         ; 00535b3d
    MOV EAX,EBX                         ; 00535b44
    FADD float ptr [EBX + 0x24]         ; 00535b46
    XOR EAX,EBX                         ; 00535b49
    FSTP float ptr [ESP + 0x388]        ; 00535b4b
    MOV dword ptr [ESP + 0x2e0],EDI     ; 00535b52
    MOV dword ptr [ESP + 0x2e8],EAX     ; 00535b59
    LEA EAX,[ESP + 0x2e0]               ; 00535b60
    MOV dword ptr [ESP + 0x2e4],EBP     ; 00535b67
    CMP EAX,EDX                         ; 00535b6e
    JZ 0x005350f1                       ; 00535b70
        ;   XREF to: 005350f1 (CONDITIONAL_JUMP)  ; LAB_005350f1
    MOV dword ptr [EDX],EDI             ; 00535b76
    MOV EAX,dword ptr [ESP + 0x2e4]     ; 00535b78
    MOV dword ptr [EDX + 0x4],EAX       ; 00535b7f
    MOV EAX,dword ptr [ESP + 0x2e8]     ; 00535b82
    MOV dword ptr [EDX + 0x8],EAX       ; 00535b89
    JMP 0x005350f1                      ; 00535b8c
        ;   XREF to: 005350f1 (UNCONDITIONAL_JUMP)  ; LAB_005350f1
    LEA EAX,[ESP + 0x2c8]               ; 00535b91
        ;   Label: LAB_00535b91
    PUSH EAX                            ; 00535b98
    MOV ECX,dword ptr [ESP + 0x3a4]     ; 00535b99
    PUSH ECX                            ; 00535ba0
    LEA ESI,[ESP + 0x330]               ; 00535ba1
    LEA EDI,[ESP + 0x270]               ; 00535ba8
    CALL FUN_00408de0                   ; 00535baf
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408de0()
    ADD ESP,0x8                         ; 00535bb4
    LEA ESI,[ESP + 0x328]               ; 00535bb7
    MOV EAX,dword ptr [ESP + 0x3a0]     ; 00535bbe
    MOVSD ES:EDI,ESI                    ; 00535bc5
    MOVSD ES:EDI,ESI                    ; 00535bc6
    MOVSD ES:EDI,ESI                    ; 00535bc7
    FLD float ptr [ESP + 0x388]         ; 00535bc8
    FSUB float ptr [EAX + 0x24]         ; 00535bcf
    FSTP float ptr [ESP + 0x38c]        ; 00535bd2
    MOV EBX,dword ptr [EAX + 0x2b0]     ; 00535bd9
    LEA EAX,[ESP + 0x38c]               ; 00535bdf
    PUSH EAX                            ; 00535be6
    LEA EAX,[ESP + 0x26c]               ; 00535be7
    PUSH dword ptr [ESP + 0x3c8]        ; 00535bee
    PUSH EAX                            ; 00535bf5
    MOV ESI,dword ptr [ESP + 0x3ac]     ; 00535bf6
    PUSH ESI                            ; 00535bfd
    CALL dword ptr [EBX + 0xc8]         ; 00535bfe
    ADD ESP,0x10                        ; 00535c04
    TEST EAX,EAX                        ; 00535c07
    JZ 0x005350f1                       ; 00535c09
        ;   XREF to: 005350f1 (CONDITIONAL_JUMP)  ; LAB_005350f1
    MOV EAX,dword ptr [ESP + 0x3bc]     ; 00535c0f
    MOV EBP,0x3f800000                  ; 00535c16
    MOV EDX,dword ptr [ESP + 0x39c]     ; 00535c1b
    MOV dword ptr [EAX + 0x14d144],ESI  ; 00535c22
    XOR EDI,EDI                         ; 00535c28
    FLD float ptr [ESP + 0x38c]         ; 00535c2a
    MOV EAX,ESI                         ; 00535c31
    FADD float ptr [ESI + 0x24]         ; 00535c33
    XOR EAX,ESI                         ; 00535c36
    FSTP float ptr [ESP + 0x388]        ; 00535c38
    MOV dword ptr [ESP + 0x340],EDI     ; 00535c3f
    MOV dword ptr [ESP + 0x348],EAX     ; 00535c46
    LEA EAX,[ESP + 0x340]               ; 00535c4d
    MOV dword ptr [ESP + 0x344],EBP     ; 00535c54
    CMP EAX,EDX                         ; 00535c5b
    JZ 0x005350f1                       ; 00535c5d
        ;   XREF to: 005350f1 (CONDITIONAL_JUMP)  ; LAB_005350f1
    MOV dword ptr [EDX],EDI             ; 00535c63
    MOV EAX,dword ptr [ESP + 0x344]     ; 00535c65
    MOV dword ptr [EDX + 0x4],EAX       ; 00535c6c
    MOV EAX,dword ptr [ESP + 0x348]     ; 00535c6f
    MOV dword ptr [EDX + 0x8],EAX       ; 00535c76
    JMP 0x005350f1                      ; 00535c79
        ;   XREF to: 005350f1 (UNCONDITIONAL_JUMP)  ; LAB_005350f1
    JBE 0x005350f1                      ; 00535c7e
        ;   XREF to: 005350f1 (CONDITIONAL_JUMP)  ; LAB_005350f1
        ;   Label: LAB_00535c7e
    CMP EBX,0x3                         ; 00535c84
    JZ 0x00535b91                       ; 00535c87
        ;   XREF to: 00535b91 (CONDITIONAL_JUMP)  ; LAB_00535b91
    MOV ECX,0x5e5d76                    ; 00535c8d | = "..\\core\\setcolid.cpp"
        ;   Label: LAB_00535c8d
    MOV EBX,0x12b                       ; 00535c92
    PUSH 0x5e5d8b                       ; 00535c97 | = "Invalid collision type!"
    MOV dword ptr [0x01d046a0],ECX      ; 00535c9c | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 00535ca2 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00535ca8
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00535cad
    JMP 0x005350f1                      ; 00535cb0
        ;   XREF to: 005350f1 (UNCONDITIONAL_JUMP)  ; LAB_005350f1
    PUSH ECX                            ; 00535cb5
        ;   Label: LAB_00535cb5
    MOV EBX,dword ptr [ECX + 0x2b0]     ; 00535cb6
    CALL dword ptr [EBX + 0x4c]         ; 00535cbc
    ADD ESP,0x4                         ; 00535cbf
    MOV EBX,dword ptr [ESP + 0x3bc]     ; 00535cc2
    MOV dword ptr [EBX + 0x14d134],EAX  ; 00535cc9
    MOV EAX,dword ptr [ESP + 0x388]     ; 00535ccf
    ADD ESP,0x3a8                       ; 00535cd6
    POP EBP                             ; 00535cdc
    POP EDI                             ; 00535cdd
    POP ESI                             ; 00535cde
    POP EBX                             ; 00535cdf
    RET                                 ; 00535ce0

