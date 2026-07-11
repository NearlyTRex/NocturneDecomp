; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0052dff0(undefined4 param_1)
;
; Local Variables:
; undefined8       Stack[-0x148]:8  local_148
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined        Stack[-0x134]:1  local_134
; undefined        Stack[-0xd0]:1  local_d0
; undefined1       Stack[-0xcf]:1  local_cf
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
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
;   FUN_0049cc10 at 0049d5e9
;
; Referenced Globals:
;   void* switchdataD_0052dfdc = 0052e6b2
;   undefined4 DAT_00594af5
;   undefined4 DAT_00594af7
;   undefined4 DAT_00594afb
;   undefined4 DAT_00594aff
;   undefined4 DAT_00594b03
;   string s_trainext.wav_00594b07
;   string s_railnoiz.wav_00594b14
;   string s_rail?%s.wav_00594b21
;   undefined1 DAT_00594b2d
;   undefined1 DAT_00594b2e
;   undefined1 DAT_00594b2f
;   string s_p?.wav_00594b30
;   string s_%s_@_%g_00594b37
;   undefined4 s_wind-ctl.wav_00594b65+1
;   ... and 47 more
;
; Called Functions:
;   FUN_0040dda0
;   FUN_0050fa30
;   FUN_00511750
;   FUN_005117e0
;   FUN_00526090
;   FUN_005260f0
;   FUN_005261b0
;   FUN_00526240
;   FUN_00526340
;   FUN_005263c0
;   FUN_005265a0
;   FUN_00526c50
;   FUN_005270d0
;   FUN_00527230
;   FUN_005272e0
;   ... and 11 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052dff0
        ;   Label: FUN_0052dff0
    PUSH ESI                            ; 0052dff1
    PUSH EDI                            ; 0052dff2
    PUSH EBP                            ; 0052dff3
    MOV EBP,ESP                         ; 0052dff4
    SUB ESP,0x130                       ; 0052dff6
    AND ESP,0xfffffff8                  ; 0052dffc
    MOV EBX,dword ptr [EBP + 0x14]      ; 0052dfff
    MOV EAX,[0x005b9354]                ; 0052e002 | DAT_005b9354
    MOV EAX,dword ptr [EAX + 0x264]     ; 0052e007 | DAT_01c77850
    MOV dword ptr [ESP + 0x104],EAX     ; 0052e00d
    FLD float ptr [ESP + 0x104]         ; 0052e014
    FMUL double ptr [0x00594b86]        ; 0052e01b | DAT_00594b86
    MOV dword ptr [ESP + 0x110],EAX     ; 0052e021
    FSTP float ptr [ESP + 0x120]        ; 0052e028
    CALL FUN_0052c9d0                   ; 0052e02f
        ;   XREF to: 0052c9d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0052c9d0()
    FLD float ptr [0x02dc9468]          ; 0052e034 | DAT_02dc9468
    FLD float ptr [ESP + 0x120]         ; 0052e03a
    FCHS                                ; 0052e041
    FXCH                                ; 0052e043
    FSUB float ptr [0x02dc946c]         ; 0052e045 | DAT_02dc946c
    FXCH                                ; 0052e04b
    FSTP float ptr [ESP + 0x108]        ; 0052e04d
    FST float ptr [ESP + 0x11c]         ; 0052e054
    FCOMP float ptr [ESP + 0x108]       ; 0052e05b
    FNSTSW AX                           ; 0052e062
    SAHF                                ; 0052e064
    JC 0x0052e537                       ; 0052e065
        ;   XREF to: 0052e537 (CONDITIONAL_JUMP)  ; LAB_0052e537
    FLD float ptr [ESP + 0x11c]         ; 0052e06b
        ;   Label: LAB_0052e06b
    FCOMP float ptr [ESP + 0x120]       ; 0052e072
    FNSTSW AX                           ; 0052e079
    SAHF                                ; 0052e07b
    JBE 0x0052e08c                      ; 0052e07c
        ;   XREF to: 0052e08c (CONDITIONAL_JUMP)  ; LAB_0052e08c
    MOV EAX,dword ptr [ESP + 0x120]     ; 0052e07e
    MOV dword ptr [ESP + 0x11c],EAX     ; 0052e085
    FLD float ptr [0x02dc946c]          ; 0052e08c | DAT_02dc946c
        ;   Label: LAB_0052e08c
    FADD float ptr [ESP + 0x11c]        ; 0052e092
    FST float ptr [0x02dc946c]          ; 0052e099 | DAT_02dc946c
    FCOMP double ptr [0x00594b8e]       ; 0052e09f | DAT_00594b8e
    FNSTSW AX                           ; 0052e0a5
    SAHF                                ; 0052e0a7
    JBE 0x0052e561                      ; 0052e0a8
        ;   XREF to: 0052e561 (CONDITIONAL_JUMP)  ; LAB_0052e561
    MOV ESI,dword ptr [0x02dc9454]      ; 0052e0ae | DAT_02dc9454
    PUSH ESI                            ; 0052e0b4
    PUSH EBX                            ; 0052e0b5
    CALL FUN_0052eba0                   ; 0052e0b6
        ;   XREF to: 0052eba0 (UNCONDITIONAL_CALL)  ; undefined FUN_0052eba0()
    ADD ESP,0x8                         ; 0052e0bb
    TEST EAX,EAX                        ; 0052e0be
    JZ 0x0052e54a                       ; 0052e0c0
        ;   XREF to: 0052e54a (CONDITIONAL_JUMP)  ; LAB_0052e54a
    MOV EDI,dword ptr [0x02dc9454]      ; 0052e0c6 | DAT_02dc9454
        ;   Label: LAB_0052e0c6
    PUSH dword ptr [0x02dc946c]         ; 0052e0cc | DAT_02dc946c
    PUSH EDI                            ; 0052e0d2
    CALL FUN_005270d0                   ; 0052e0d3
        ;   XREF to: 005270d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005270d0()
    ADD ESP,0x8                         ; 0052e0d8
    XOR EAX,EAX                         ; 0052e0db
        ;   Label: LAB_0052e0db
    MOV dword ptr [ESP + 0x8],EAX       ; 0052e0dd
    MOV EAX,[0x005c11ec]                ; 0052e0e1 | DAT_005c11ec
    FLD float ptr [EAX + 0xc]           ; 0052e0e6 | DAT_02dd121c
    FLDZ                                ; 0052e0e9
    FCOMPP                              ; 0052e0eb
    FNSTSW AX                           ; 0052e0ed
    SAHF                                ; 0052e0ef
    JNC 0x0052e13d                      ; 0052e0f0
        ;   XREF to: 0052e13d (CONDITIONAL_JUMP)  ; LAB_0052e13d
    PUSH 0x4                            ; 0052e0f2
    MOV EAX,[0x005be368]                ; 0052e0f4 | DAT_005be368
    PUSH 0x594b73                       ; 0052e0f9 | DAT_00594b73
    ADD EAX,0x14cd08                    ; 0052e0fe
    PUSH EAX                            ; 0052e103
    CALL FUN_00564bc0                   ; 0052e104
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00564bc0()
    ADD ESP,0xc                         ; 0052e109
    TEST EAX,EAX                        ; 0052e10c
    JNZ 0x0052e13d                      ; 0052e10e
        ;   XREF to: 0052e13d (CONDITIONAL_JUMP)  ; LAB_0052e13d
    MOV EAX,[0x005c11ec]                ; 0052e110 | DAT_005c11ec
    FLD float ptr [EAX + 0xc]           ; 0052e115 | DAT_02dd121c
    FSQRT                               ; 0052e118
    FMUL double ptr [0x00594b96]        ; 0052e11a | DAT_00594b96
    FADD double ptr [0x00594b9e]        ; 0052e120 | DAT_00594b9e
    FST float ptr [ESP + 0x8]           ; 0052e126
    FCOMP double ptr [0x00594ba6]       ; 0052e12a | DAT_00594ba6
    FNSTSW AX                           ; 0052e130
    SAHF                                ; 0052e132
    JBE 0x0052e13d                      ; 0052e133
        ;   XREF to: 0052e13d (CONDITIONAL_JUMP)  ; LAB_0052e13d
    MOV dword ptr [ESP + 0x8],0x3f333333 ; 0052e135
    FLD float ptr [ESP + 0x8]           ; 0052e13d
        ;   Label: LAB_0052e13d
    FLD float ptr [ESP + 0x120]         ; 0052e141
    FCHS                                ; 0052e148
    FXCH                                ; 0052e14a
    FSUB float ptr [0x02dc9470]         ; 0052e14c | DAT_02dc9470
    FXCH                                ; 0052e152
    FSTP float ptr [ESP + 0x10c]        ; 0052e154
    FST float ptr [ESP + 0x118]         ; 0052e15b
    FCOMP float ptr [ESP + 0x10c]       ; 0052e162
    FNSTSW AX                           ; 0052e169
    SAHF                                ; 0052e16b
    JNC 0x0052e17c                      ; 0052e16c
        ;   XREF to: 0052e17c (CONDITIONAL_JUMP)  ; LAB_0052e17c
    MOV EAX,dword ptr [ESP + 0x10c]     ; 0052e16e
    MOV dword ptr [ESP + 0x118],EAX     ; 0052e175
    FLD float ptr [ESP + 0x118]         ; 0052e17c
        ;   Label: LAB_0052e17c
    FCOMP float ptr [ESP + 0x120]       ; 0052e183
    FNSTSW AX                           ; 0052e18a
    SAHF                                ; 0052e18c
    JBE 0x0052e19d                      ; 0052e18d
        ;   XREF to: 0052e19d (CONDITIONAL_JUMP)  ; LAB_0052e19d
    MOV EAX,dword ptr [ESP + 0x120]     ; 0052e18f
    MOV dword ptr [ESP + 0x118],EAX     ; 0052e196
    FLD float ptr [0x02dc9470]          ; 0052e19d | DAT_02dc9470
        ;   Label: LAB_0052e19d
    FADD float ptr [ESP + 0x118]        ; 0052e1a3
    FST float ptr [0x02dc9470]          ; 0052e1aa | DAT_02dc9470
    FCOMP double ptr [0x00594b8e]       ; 0052e1b0 | DAT_00594b8e
    FNSTSW AX                           ; 0052e1b6
    SAHF                                ; 0052e1b8
    JBE 0x0052e595                      ; 0052e1b9
        ;   XREF to: 0052e595 (CONDITIONAL_JUMP)  ; LAB_0052e595
    MOV ESI,dword ptr [0x02dc9458]      ; 0052e1bf | DAT_02dc9458
    PUSH ESI                            ; 0052e1c5
    PUSH EBX                            ; 0052e1c6
    CALL FUN_0052eba0                   ; 0052e1c7
        ;   XREF to: 0052eba0 (UNCONDITIONAL_CALL)  ; undefined FUN_0052eba0()
    ADD ESP,0x8                         ; 0052e1cc
    TEST EAX,EAX                        ; 0052e1cf
    JZ 0x0052e57e                       ; 0052e1d1
        ;   XREF to: 0052e57e (CONDITIONAL_JUMP)  ; LAB_0052e57e
    MOV EDI,dword ptr [0x02dc9458]      ; 0052e1d7 | DAT_02dc9458
        ;   Label: LAB_0052e1d7
    PUSH dword ptr [0x02dc9470]         ; 0052e1dd | DAT_02dc9470
    PUSH EDI                            ; 0052e1e3
    CALL FUN_005270d0                   ; 0052e1e4
        ;   XREF to: 005270d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005270d0()
    ADD ESP,0x8                         ; 0052e1e9
    FLD float ptr [0x02dc9ca0]          ; 0052e1ec | DAT_02dc9ca0
        ;   Label: LAB_0052e1ec
    FCOMP float ptr [ESP + 0x110]       ; 0052e1f2
    FNSTSW AX                           ; 0052e1f9
    SAHF                                ; 0052e1fb
    JBE 0x0052e5b2                      ; 0052e1fc
        ;   XREF to: 0052e5b2 (CONDITIONAL_JUMP)  ; LAB_0052e5b2
    FLD float ptr [0x02dc9c9c]          ; 0052e202 | DAT_02dc9c9c
    FSUB float ptr [0x02dc9c98]         ; 0052e208 | DAT_02dc9c98
    FLD float ptr [ESP + 0x110]         ; 0052e20e
    FLD ST0                             ; 0052e215
    FDIV float ptr [0x02dc9ca0]         ; 0052e217 | DAT_02dc9ca0
    FMULP ST2                           ; 0052e21d
    FSUBR float ptr [0x02dc9ca0]        ; 0052e21f | DAT_02dc9ca0
    FXCH                                ; 0052e225
    FADD float ptr [0x02dc9c98]         ; 0052e227 | DAT_02dc9c98
    FXCH                                ; 0052e22d
    FSTP float ptr [0x02dc9ca0]         ; 0052e22f | DAT_02dc9ca0
    FSTP float ptr [0x02dc9c98]         ; 0052e235 | DAT_02dc9c98
    PUSH 0x0                            ; 0052e23b
        ;   Label: LAB_0052e23b
    CALL FUN_00527490                   ; 0052e23d
        ;   XREF to: 00527490 (UNCONDITIONAL_CALL)  ; undefined FUN_00527490()
    ADD ESP,0x4                         ; 0052e242
    TEST EAX,EAX                        ; 0052e245
    JZ 0x0052e5ca                       ; 0052e247
        ;   XREF to: 0052e5ca (CONDITIONAL_JUMP)  ; LAB_0052e5ca
    PUSH 0x1                            ; 0052e24d
    PUSH 0x3                            ; 0052e24f
    CALL FUN_00527410                   ; 0052e251
        ;   XREF to: 00527410 (UNCONDITIONAL_CALL)  ; undefined FUN_00527410()
    ADD ESP,0x8                         ; 0052e256
    PUSH 0x0                            ; 0052e259
    CALL FUN_00527380                   ; 0052e25b
        ;   XREF to: 00527380 (UNCONDITIONAL_CALL)  ; undefined FUN_00527380()
    MOV dword ptr [ESP + 0x130],EAX     ; 0052e260
    FLD float ptr [ESP + 0x130]         ; 0052e267
    ADD ESP,0x4                         ; 0052e26e
    FMUL float ptr [0x02dc9c98]         ; 0052e271 | DAT_02dc9c98
    SUB ESP,0x4                         ; 0052e277
    FSTP float ptr [ESP]                ; 0052e27a
    PUSH 0x3                            ; 0052e27d
    CALL FUN_005272e0                   ; 0052e27f
        ;   XREF to: 005272e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005272e0()
    ADD ESP,0x8                         ; 0052e284
        ;   Label: LAB_0052e284
    MOV EAX,[0x005be368]                ; 0052e287 | DAT_005be368 | DAT_01e57284
    CMP dword ptr [EAX + 0x15a8c0],0x0  ; 0052e28c | DAT_01fb1b44
    JZ 0x0052e530                       ; 0052e293
        ;   XREF to: 0052e530 (CONDITIONAL_JUMP)  ; caseD_4
    MOV EDX,dword ptr [0x005b9354]      ; 0052e299 | DAT_005b9354
    FLD float ptr [EDX + 0x264]         ; 0052e29f | DAT_01c77850
    MOV ECX,dword ptr [EDX + 0x240]     ; 0052e2a5 | DAT_01c7782c
    FSTP float ptr [ESP + 0x128]        ; 0052e2ab
    TEST ECX,ECX                        ; 0052e2b2
    JNZ 0x0052e5d7                      ; 0052e2b4
        ;   XREF to: 0052e5d7 (CONDITIONAL_JUMP)  ; LAB_0052e5d7
    MOV EBX,dword ptr [0x02dc9d54]      ; 0052e2ba | DAT_02dc9d54
    CMP EBX,dword ptr [EAX + 0x15aabc]  ; 0052e2c0 | DAT_01fb1d40
    JZ 0x0052e3a4                       ; 0052e2c6
        ;   XREF to: 0052e3a4 (CONDITIONAL_JUMP)  ; LAB_0052e3a4
    PUSH EAX                            ; 0052e2cc | DAT_01e57284
    CALL FUN_00511750                   ; 0052e2cd
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; undefined FUN_00511750()
    ADD ESP,0x4                         ; 0052e2d2
    MOV ESI,dword ptr [0x005be368]      ; 0052e2d5 | DAT_005be368
    PUSH ESI                            ; 0052e2db | DAT_01e57284
    CALL FUN_005117e0                   ; 0052e2dc
        ;   XREF to: 005117e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005117e0()
    MOV EAX,[0x02dc945c]                ; 0052e2e1 | DAT_02dc945c
    ADD ESP,0x4                         ; 0052e2e6
    MOV dword ptr [ESP + 0xec],EAX      ; 0052e2e9
    MOV EAX,[0x02dc9460]                ; 0052e2f0 | DAT_02dc9460
    MOV dword ptr [ESP + 0xf0],EAX      ; 0052e2f5
    MOV EAX,[0x02dc9464]                ; 0052e2fc | DAT_02dc9464
    MOV dword ptr [ESP + 0xf4],EAX      ; 0052e301
    MOV EAX,0x41a00000                  ; 0052e308
    XOR EDI,EDI                         ; 0052e30d
    MOV dword ptr [ESP + 0xd8],EAX      ; 0052e30f
    MOV EAX,dword ptr [ESP + 0xec]      ; 0052e316
    MOV ECX,dword ptr [0x005be368]      ; 0052e31d | DAT_005be368
    MOV dword ptr [ESP + 0xf8],EAX      ; 0052e323
    MOV EAX,dword ptr [ESP + 0xf4]      ; 0052e32a
    MOV dword ptr [ESP + 0xd4],EDI      ; 0052e331
    MOV dword ptr [ESP + 0x100],EAX     ; 0052e338
    LEA EAX,[ESP + 0xf8]                ; 0052e33f
    MOV dword ptr [ESP + 0xdc],EDI      ; 0052e346
    PUSH EAX                            ; 0052e34d
    LEA EAX,[ESP + 0xf0]                ; 0052e34e
    FLD float ptr [ESP + 0xf4]          ; 0052e355
    PUSH EAX                            ; 0052e35c
    FADD float ptr [0x00594bae]         ; 0052e35d | DAT_00594bae
    PUSH ECX                            ; 0052e363 | DAT_01e57284
    FSTP float ptr [ESP + 0x108]        ; 0052e364
    CALL FUN_0050fa30                   ; 0052e36b
        ;   XREF to: 0050fa30 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fa30()
    ADD ESP,0xc                         ; 0052e370
    TEST EAX,EAX                        ; 0052e373
    JZ 0x0052e5ec                       ; 0052e375
        ;   XREF to: 0052e5ec (CONDITIONAL_JUMP)  ; LAB_0052e5ec
    MOV dword ptr [0x005bed60],0x594afb ; 0052e37b | PTR_DAT_005bed60 | DAT_00594afb
    MOV EDI,dword ptr [0x005be368]      ; 0052e385 | DAT_005be368
        ;   Label: LAB_0052e385
    PUSH EDI                            ; 0052e38b | DAT_01e57284
    CALL FUN_00511750                   ; 0052e38c
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; undefined FUN_00511750()
    MOV EAX,[0x005be368]                ; 0052e391 | DAT_005be368
    MOV EAX,dword ptr [EAX + 0x15aabc]  ; 0052e396 | DAT_01fb1d40
    ADD ESP,0x4                         ; 0052e39c
    MOV [0x02dc9d54],EAX                ; 0052e39f | DAT_02dc9d54
        ;   Label: LAB_0052e39f
    CALL FUN_00526340                   ; 0052e3a4
        ;   XREF to: 00526340 (UNCONDITIONAL_CALL)  ; undefined FUN_00526340()
        ;   Label: LAB_0052e3a4
    PUSH 0x1                            ; 0052e3a9
    CALL FUN_00526240                   ; 0052e3ab
        ;   XREF to: 00526240 (UNCONDITIONAL_CALL)  ; undefined FUN_00526240()
    ADD ESP,0x4                         ; 0052e3b0
    PUSH 0x3                            ; 0052e3b3
    CALL FUN_005261b0                   ; 0052e3b5
        ;   XREF to: 005261b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005261b0()
    ADD ESP,0x4                         ; 0052e3ba
    PUSH 0x594b03                       ; 0052e3bd | DAT_00594b03
    MOV ECX,dword ptr [0x005bed60]      ; 0052e3c2 | PTR_DAT_005bed60
    PUSH ECX                            ; 0052e3c8 | DAT_00594afb
    CALL FUN_00564520                   ; 0052e3c9
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined FUN_00564520()
    ADD ESP,0x8                         ; 0052e3ce
    TEST EAX,EAX                        ; 0052e3d1
    JNZ 0x0052e5fb                      ; 0052e3d3
        ;   XREF to: 0052e5fb (CONDITIONAL_JUMP)  ; LAB_0052e5fb
    MOV EDI,dword ptr [0x02dc9d5c]      ; 0052e3d9 | DAT_02dc9d5c
    PUSH EDI                            ; 0052e3df
    CALL FUN_00527230                   ; 0052e3e0
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined FUN_00527230()
    MOV EAX,0x3ecccccd                  ; 0052e3e5
    ADD ESP,0x4                         ; 0052e3ea
    MOV dword ptr [ESP + 0x4],EAX       ; 0052e3ed
    MOV EDX,dword ptr [0x02dc9d58]      ; 0052e3f1 | DAT_02dc9d58
        ;   Label: LAB_0052e3f1
    PUSH EDX                            ; 0052e3f7
    CALL FUN_00526c50                   ; 0052e3f8
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; undefined FUN_00526c50()
    ADD ESP,0x4                         ; 0052e3fd
    TEST EAX,EAX                        ; 0052e400
    JZ 0x0052e649                       ; 0052e402
        ;   XREF to: 0052e649 (CONDITIONAL_JUMP)  ; LAB_0052e649
    MOV ECX,dword ptr [0x005bed60]      ; 0052e408 | PTR_DAT_005bed60
    PUSH ECX                            ; 0052e40e | DAT_00594afb
    MOV EBX,dword ptr [0x005bed64]      ; 0052e40f | PTR_DAT_005bed64
    PUSH EBX                            ; 0052e415 | DAT_00594af5
    CALL FUN_00564520                   ; 0052e416
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined FUN_00564520()
    ADD ESP,0x8                         ; 0052e41b
    TEST EAX,EAX                        ; 0052e41e
    JNZ 0x0052e682                      ; 0052e420
        ;   XREF to: 0052e682 (CONDITIONAL_JUMP)  ; LAB_0052e682
    CALL FUN_005263c0                   ; 0052e426
        ;   XREF to: 005263c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005263c0()
        ;   Label: LAB_0052e426
    MOV EDX,0x41f00000                  ; 0052e42b
    MOV EBX,0x2dc9ca4                   ; 0052e430
    MOV EAX,[0x005bed60]                ; 0052e435 | PTR_DAT_005bed60
    XOR EDI,EDI                         ; 0052e43a
    XOR ESI,ESI                         ; 0052e43c
    MOV [0x005bed64],EAX                ; 0052e43e | PTR_DAT_005bed64
    MOV dword ptr [0x02dc9d44],EDI      ; 0052e443 | DAT_02dc9d44
    MOV dword ptr [0x02dc9d48],EDI      ; 0052e449 | DAT_02dc9d48
    MOV dword ptr [0x02dc9d4c],EDX      ; 0052e44f | DAT_02dc9d4c
    MOV dword ptr [ESP + 0x124],EDI     ; 0052e455
    MOV EDI,ESI                         ; 0052e45c
        ;   Label: LAB_0052e45c
    SHL EDI,0x4                         ; 0052e45e
    MOV EAX,dword ptr [EDI + 0x2dc9cb0] ; 0052e461
    PUSH EAX                            ; 0052e467
    CALL FUN_00526c50                   ; 0052e468
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; undefined FUN_00526c50()
    ADD ESP,0x4                         ; 0052e46d
    TEST EAX,EAX                        ; 0052e470
    JZ 0x0052e6a6                       ; 0052e472
        ;   XREF to: 0052e6a6 (CONDITIONAL_JUMP)  ; LAB_0052e6a6
    FLD float ptr [ESP + 0x128]         ; 0052e478
    FLD float ptr [0x02dc9d44]          ; 0052e47f | DAT_02dc9d44
    FMUL ST1                            ; 0052e485
    FLD float ptr [0x02dc9d48]          ; 0052e487 | DAT_02dc9d48
    FMUL ST2                            ; 0052e48d
    FLD float ptr [0x02dc9d4c]          ; 0052e48f | DAT_02dc9d4c
    FMULP ST3                           ; 0052e495
    FXCH                                ; 0052e497
    FSTP float ptr [ESP + 0xe0]         ; 0052e499
    FSTP float ptr [ESP + 0xe4]         ; 0052e4a0
    FSTP float ptr [ESP + 0xe8]         ; 0052e4a7
    FLD float ptr [EBX]                 ; 0052e4ae | DAT_02dc9ca4
    FADD float ptr [ESP + 0xe0]         ; 0052e4b0
    FLD float ptr [EBX + 0x4]           ; 0052e4b7 | DAT_02dc9ca8
    FXCH                                ; 0052e4ba
    FSTP float ptr [EBX]                ; 0052e4bc | DAT_02dc9ca4
    FADD float ptr [ESP + 0xe4]         ; 0052e4be
    FLD float ptr [EBX + 0x8]           ; 0052e4c5 | DAT_02dc9cac
    FXCH                                ; 0052e4c8
    FSTP float ptr [EBX + 0x4]          ; 0052e4ca | DAT_02dc9ca8
    FADD float ptr [ESP + 0xe8]         ; 0052e4cd
    FSTP float ptr [EBX + 0x8]          ; 0052e4d4 | DAT_02dc9cac
    FLD float ptr [EDI + 0x2dc9cac]     ; 0052e4d7 | DAT_02dc9cac
    FABS                                ; 0052e4dd
    FCOMP double ptr [0x00594bce]       ; 0052e4df | DAT_00594bce
    FNSTSW AX                           ; 0052e4e5
    SAHF                                ; 0052e4e7
    JBE 0x0052e4f9                      ; 0052e4e8
        ;   XREF to: 0052e4f9 (CONDITIONAL_JUMP)  ; LAB_0052e4f9
    MOV EDX,dword ptr [EDI + 0x2dc9cb0] ; 0052e4ea
    PUSH EDX                            ; 0052e4f0
    CALL FUN_00527230                   ; 0052e4f1
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined FUN_00527230()
    ADD ESP,0x4                         ; 0052e4f6
    INC ESI                             ; 0052e4f9
        ;   Label: LAB_0052e4f9
    ADD EBX,0x10                        ; 0052e4fa
    CMP ESI,0xa                         ; 0052e4fd
    JL 0x0052e45c                       ; 0052e500
        ;   XREF to: 0052e45c (CONDITIONAL_JUMP)  ; LAB_0052e45c
    FLD float ptr [0x02dc9d50]          ; 0052e506 | DAT_02dc9d50
    FSUB float ptr [ESP + 0x128]        ; 0052e50c
    FST float ptr [0x02dc9d50]          ; 0052e513 | DAT_02dc9d50
    FLDZ                                ; 0052e519
    FCOMPP                              ; 0052e51b
    FNSTSW AX                           ; 0052e51d
    SAHF                                ; 0052e51f
    JC 0x0052e530                       ; 0052e520
        ;   XREF to: 0052e530 (CONDITIONAL_JUMP)  ; caseD_4
    CMP dword ptr [ESP + 0x124],0x0     ; 0052e522
    JNZ 0x0052e7e1                      ; 0052e52a
        ;   XREF to: 0052e7e1 (CONDITIONAL_JUMP)  ; LAB_0052e7e1
    MOV ESP,EBP                         ; 0052e530
        ;   Label: caseD_4
    POP EBP                             ; 0052e532
    POP EDI                             ; 0052e533
    POP ESI                             ; 0052e534
    POP EBX                             ; 0052e535
    RET                                 ; 0052e536
    MOV EAX,dword ptr [ESP + 0x108]     ; 0052e537
        ;   Label: LAB_0052e537
    MOV dword ptr [ESP + 0x11c],EAX     ; 0052e53e
    JMP 0x0052e06b                      ; 0052e545
        ;   XREF to: 0052e06b (UNCONDITIONAL_JUMP)  ; LAB_0052e06b
    PUSH 0x594b66                       ; 0052e54a | s_wind-ctl.wav_00594b65+1
        ;   Label: LAB_0052e54a
    CALL FUN_005265a0                   ; 0052e54f
        ;   XREF to: 005265a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005265a0()
    ADD ESP,0x4                         ; 0052e554
    MOV [0x02dc9454],EAX                ; 0052e557 | DAT_02dc9454
    JMP 0x0052e0c6                      ; 0052e55c
        ;   XREF to: 0052e0c6 (UNCONDITIONAL_JUMP)  ; LAB_0052e0c6
    MOV EDX,dword ptr [0x02dc9454]      ; 0052e561 | DAT_02dc9454
        ;   Label: LAB_0052e561
    PUSH EDX                            ; 0052e567
    PUSH EBX                            ; 0052e568
    CALL FUN_0052ebb0                   ; 0052e569
        ;   XREF to: 0052ebb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0052ebb0()
    XOR ECX,ECX                         ; 0052e56e
    ADD ESP,0x8                         ; 0052e570
    MOV dword ptr [0x02dc946c],ECX      ; 0052e573 | DAT_02dc946c
    JMP 0x0052e0db                      ; 0052e579
        ;   XREF to: 0052e0db (UNCONDITIONAL_JUMP)  ; LAB_0052e0db
    PUSH 0x594b78                       ; 0052e57e | = "water-2.wav"
        ;   Label: LAB_0052e57e
    CALL FUN_005265a0                   ; 0052e583
        ;   XREF to: 005265a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005265a0()
    ADD ESP,0x4                         ; 0052e588
    MOV [0x02dc9458],EAX                ; 0052e58b | DAT_02dc9458
    JMP 0x0052e1d7                      ; 0052e590
        ;   XREF to: 0052e1d7 (UNCONDITIONAL_JUMP)  ; LAB_0052e1d7
    MOV ECX,dword ptr [0x02dc9458]      ; 0052e595 | DAT_02dc9458
        ;   Label: LAB_0052e595
    PUSH ECX                            ; 0052e59b
    PUSH EBX                            ; 0052e59c
    CALL FUN_0052ebb0                   ; 0052e59d
        ;   XREF to: 0052ebb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0052ebb0()
    XOR EBX,EBX                         ; 0052e5a2
    ADD ESP,0x8                         ; 0052e5a4
    MOV dword ptr [0x02dc9470],EBX      ; 0052e5a7 | DAT_02dc9470
    JMP 0x0052e1ec                      ; 0052e5ad
        ;   XREF to: 0052e1ec (UNCONDITIONAL_JUMP)  ; LAB_0052e1ec
    FLD float ptr [0x02dc9c9c]          ; 0052e5b2 | DAT_02dc9c9c
        ;   Label: LAB_0052e5b2
    XOR EAX,EAX                         ; 0052e5b8
    FSTP float ptr [0x02dc9c98]         ; 0052e5ba | DAT_02dc9c98
    MOV [0x02dc9ca0],EAX                ; 0052e5c0 | DAT_02dc9ca0
    JMP 0x0052e23b                      ; 0052e5c5
        ;   XREF to: 0052e23b (UNCONDITIONAL_JUMP)  ; LAB_0052e23b
    PUSH EAX                            ; 0052e5ca
        ;   Label: LAB_0052e5ca
    PUSH 0x3                            ; 0052e5cb
    CALL FUN_00527410                   ; 0052e5cd
        ;   XREF to: 00527410 (UNCONDITIONAL_CALL)  ; undefined FUN_00527410()
    JMP 0x0052e284                      ; 0052e5d2
        ;   XREF to: 0052e284 (UNCONDITIONAL_JUMP)  ; LAB_0052e284
    MOV EDX,0x594af7                    ; 0052e5d7 | DAT_00594af7
        ;   Label: LAB_0052e5d7
    MOV EAX,0xffffffff                  ; 0052e5dc
    MOV dword ptr [0x005bed60],EDX      ; 0052e5e1 | PTR_DAT_005bed60
    JMP 0x0052e39f                      ; 0052e5e7
        ;   XREF to: 0052e39f (UNCONDITIONAL_JUMP)  ; LAB_0052e39f
    MOV dword ptr [0x005bed60],0x594aff ; 0052e5ec | PTR_DAT_005bed60 | DAT_00594aff
        ;   Label: LAB_0052e5ec
    JMP 0x0052e385                      ; 0052e5f6
        ;   XREF to: 0052e385 (UNCONDITIONAL_JUMP)  ; LAB_0052e385
    MOV ESI,dword ptr [0x02dc9d5c]      ; 0052e5fb | DAT_02dc9d5c
        ;   Label: LAB_0052e5fb
    PUSH ESI                            ; 0052e601
    MOV EBX,0x3f333333                  ; 0052e602
    CALL FUN_00526c50                   ; 0052e607
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; undefined FUN_00526c50()
    MOV dword ptr [ESP + 0x8],EBX       ; 0052e60c
    ADD ESP,0x4                         ; 0052e610
    TEST EAX,EAX                        ; 0052e613
    JNZ 0x0052e3f1                      ; 0052e615
        ;   XREF to: 0052e3f1 (CONDITIONAL_JUMP)  ; LAB_0052e3f1
    CALL FUN_00526340                   ; 0052e61b
        ;   XREF to: 00526340 (UNCONDITIONAL_CALL)  ; undefined FUN_00526340()
    PUSH 0x3ecccccd                     ; 0052e620
    CALL FUN_005260f0                   ; 0052e625
        ;   XREF to: 005260f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005260f0()
    ADD ESP,0x4                         ; 0052e62a
    PUSH 0x594b07                       ; 0052e62d | = "trainext.wav"
    CALL FUN_005265a0                   ; 0052e632
        ;   XREF to: 005265a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005265a0()
    ADD ESP,0x4                         ; 0052e637
    MOV [0x02dc9d5c],EAX                ; 0052e63a | DAT_02dc9d5c
    CALL FUN_005263c0                   ; 0052e63f
        ;   XREF to: 005263c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005263c0()
    JMP 0x0052e3f1                      ; 0052e644
        ;   XREF to: 0052e3f1 (UNCONDITIONAL_JUMP)  ; LAB_0052e3f1
    CALL FUN_00526340                   ; 0052e649
        ;   XREF to: 00526340 (UNCONDITIONAL_CALL)  ; undefined FUN_00526340()
        ;   Label: LAB_0052e649
    FLD float ptr [ESP + 0x4]           ; 0052e64e
    FMUL double ptr [0x00594bb6]        ; 0052e652 | DAT_00594bb6
    SUB ESP,0x4                         ; 0052e658
    FSTP float ptr [ESP]                ; 0052e65b
    CALL FUN_005260f0                   ; 0052e65e
        ;   XREF to: 005260f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005260f0()
    ADD ESP,0x4                         ; 0052e663
    PUSH 0x594b14                       ; 0052e666 | = "railnoiz.wav"
    CALL FUN_005265a0                   ; 0052e66b
        ;   XREF to: 005265a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005265a0()
    ADD ESP,0x4                         ; 0052e670
    MOV [0x02dc9d58],EAX                ; 0052e673 | DAT_02dc9d58
    CALL FUN_005263c0                   ; 0052e678
        ;   XREF to: 005263c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005263c0()
    JMP 0x0052e426                      ; 0052e67d
        ;   XREF to: 0052e426 (UNCONDITIONAL_JUMP)  ; LAB_0052e426
    FLD float ptr [ESP + 0x4]           ; 0052e682
        ;   Label: LAB_0052e682
    FMUL double ptr [0x00594bb6]        ; 0052e686 | DAT_00594bb6
    SUB ESP,0x4                         ; 0052e68c
    MOV ESI,dword ptr [0x02dc9d58]      ; 0052e68f | DAT_02dc9d58
    FSTP float ptr [ESP]                ; 0052e695
    PUSH ESI                            ; 0052e698
    CALL FUN_005270d0                   ; 0052e699
        ;   XREF to: 005270d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005270d0()
    ADD ESP,0x8                         ; 0052e69e
    JMP 0x0052e426                      ; 0052e6a1
        ;   XREF to: 0052e426 (UNCONDITIONAL_JUMP)  ; LAB_0052e426
    MOV dword ptr [ESP + 0x124],EBX     ; 0052e6a6 | DAT_02dc9ca4
        ;   Label: LAB_0052e6a6
    JMP 0x0052e4f9                      ; 0052e6ad
        ;   XREF to: 0052e4f9 (UNCONDITIONAL_JUMP)  ; LAB_0052e4f9
    FLD float ptr [ESP + 0x4]           ; 0052e6b2
        ;   Label: caseD_0
    MOV EDX,dword ptr [0x005bed60]      ; 0052e6b6 | PTR_DAT_005bed60
    FMUL double ptr [0x00594bc6]        ; 0052e6bc | DAT_00594bc6
    PUSH EDX                            ; 0052e6c2 | DAT_00594afb
    MOV EAX,0x41c80000                  ; 0052e6c3
    PUSH 0x594b21                       ; 0052e6c8 | = "rail?%s.wav"
    MOV dword ptr [ESP + 0x11c],EAX     ; 0052e6cd
    LEA EAX,[ESP + 0x78]                ; 0052e6d4
    PUSH EAX                            ; 0052e6d8
    FSTP float ptr [ESP + 0xc]          ; 0052e6d9
    CALL FUN_00563c90                   ; 0052e6dd
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00563c90()
    ADD ESP,0xc                         ; 0052e6e2
    PUSH 0x40000000                     ; 0052e6e5
        ;   Label: default
    MOV EAX,dword ptr [ESP + 0x128]     ; 0052e6ea
    PUSH 0xc0400000                     ; 0052e6f1
    MOV dword ptr [EAX],0x0             ; 0052e6f6
    CALL FUN_0040dda0                   ; 0052e6fc
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dda0()
    MOV dword ptr [ESP + 0x134],EAX     ; 0052e701
    FLD float ptr [ESP + 0x134]         ; 0052e708
    ADD ESP,0x8                         ; 0052e70f
    FMUL float ptr [ESP + 0x114]        ; 0052e712
    MOV EAX,dword ptr [ESP + 0x124]     ; 0052e719
    FADD float ptr [0x02dc9464]         ; 0052e720 | DAT_02dc9464
    MOV dword ptr [EAX + 0x4],0x0       ; 0052e726
    FSTP float ptr [EAX + 0x8]          ; 0052e72d
    CALL FUN_00526340                   ; 0052e730
        ;   XREF to: 00526340 (UNCONDITIONAL_CALL)  ; undefined FUN_00526340()
    PUSH 0x3                            ; 0052e735
    CALL FUN_005261b0                   ; 0052e737
        ;   XREF to: 005261b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005261b0()
    ADD ESP,0x4                         ; 0052e73c
    PUSH 0x2dc9d44                      ; 0052e73f | DAT_02dc9d44
    CALL FUN_00526090                   ; 0052e744
        ;   XREF to: 00526090 (UNCONDITIONAL_CALL)  ; undefined FUN_00526090()
    ADD ESP,0x4                         ; 0052e749
    FLD float ptr [ESP]                 ; 0052e74c
    SUB ESP,0x8                         ; 0052e74f
    LEA EAX,[ESP + 0x78]                ; 0052e752
    FSTP double ptr [ESP]               ; 0052e756
    PUSH EAX                            ; 0052e759
    PUSH 0x594b37                       ; 0052e75a | = "%s @ %g"
    LEA EAX,[ESP + 0x1c]                ; 0052e75f
    PUSH EAX                            ; 0052e763
    CALL FUN_00563c90                   ; 0052e764
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00563c90()
    ADD ESP,0x14                        ; 0052e769
    MOV ECX,dword ptr [ESP + 0x124]     ; 0052e76c
    PUSH ECX                            ; 0052e773
    LEA EAX,[ESP + 0x10]                ; 0052e774
    PUSH EAX                            ; 0052e778
    PUSH 0x0                            ; 0052e779
    MOV EBX,dword ptr [0x005bed68]      ; 0052e77b | DAT_005bed68
    PUSH EBX                            ; 0052e781
    CALL FUN_0052ea90                   ; 0052e782
        ;   XREF to: 0052ea90 (UNCONDITIONAL_CALL)  ; undefined FUN_0052ea90()
    ADD ESP,0x10                        ; 0052e787
    MOV EDX,dword ptr [ESP + 0x124]     ; 0052e78a
    MOV dword ptr [EDX + 0xc],EAX       ; 0052e791
    CALL FUN_005263c0                   ; 0052e794
        ;   XREF to: 005263c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005263c0()
    MOV ESP,EBP                         ; 0052e799
    POP EBP                             ; 0052e79b
    POP EDI                             ; 0052e79c
    POP ESI                             ; 0052e79d
    POP EBX                             ; 0052e79e
    RET                                 ; 0052e79f
    FLD float ptr [ESP + 0x4]           ; 0052e7a0
        ;   Label: caseD_2
    FMUL double ptr [0x00594bbe]        ; 0052e7a4 | DAT_00594bbe
    MOV EDI,0x41a00000                  ; 0052e7aa
    MOV ESI,0x594b2d                    ; 0052e7af | DAT_00594b2d
    MOV dword ptr [ESP + 0x114],EDI     ; 0052e7b4
    LEA EDI,[ESP + 0x70]                ; 0052e7bb
    FSTP float ptr [ESP]                ; 0052e7bf
    PUSH EDI                            ; 0052e7c2
    MOV AL,byte ptr [ESI]               ; 0052e7c3 | DAT_00594b2d | DAT_00594b2f
        ;   Label: LAB_0052e7c3
    MOV byte ptr [EDI],AL               ; 0052e7c5
    CMP AL,0x0                          ; 0052e7c7
    JZ 0x0052e7db                       ; 0052e7c9
        ;   XREF to: 0052e7db (CONDITIONAL_JUMP)  ; LAB_0052e7db
    MOV AL,byte ptr [ESI + 0x1]         ; 0052e7cb | DAT_00594b2e | = "p?.wav"
    ADD ESI,0x2                         ; 0052e7ce
    MOV byte ptr [EDI + 0x1],AL         ; 0052e7d1
    ADD EDI,0x2                         ; 0052e7d4
    CMP AL,0x0                          ; 0052e7d7
    JNZ 0x0052e7c3                      ; 0052e7d9
        ;   XREF to: 0052e7c3 (CONDITIONAL_JUMP)  ; LAB_0052e7c3
    POP EDI                             ; 0052e7db
        ;   Label: LAB_0052e7db
    JMP 0x0052e6e5                      ; 0052e7dc
        ;   XREF to: 0052e6e5 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x40a00000                     ; 0052e7e1
        ;   Label: LAB_0052e7e1
    PUSH 0x3f800000                     ; 0052e7e6
    MOV EBX,0x41a00000                  ; 0052e7eb
    LEA EDI,[ESP + 0x78]                ; 0052e7f0
    MOV ESI,0x5bef88                    ; 0052e7f4 | DAT_005bef88
    CALL FUN_0040dda0                   ; 0052e7f9
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dda0()
    MOV dword ptr [ESP + 0x134],EAX     ; 0052e7fe
    MOV ECX,0x19                        ; 0052e805
    FLD float ptr [ESP + 0x134]         ; 0052e80a
    ADD ESP,0x8                         ; 0052e811
    FSTP float ptr [0x02dc9d50]         ; 0052e814 | DAT_02dc9d50
    MOV dword ptr [ESP + 0x114],EBX     ; 0052e81a
    MOVSD.REP ES:EDI,ESI                ; 0052e821 | DAT_005bef88 | DAT_005bef8c
    CALL FUN_0056488c                   ; 0052e823
        ;   XREF to: 0056488c (UNCONDITIONAL_CALL)  ; undefined FUN_0056488c()
    MOV EDX,EAX                         ; 0052e828
    MOV EBX,0x5                         ; 0052e82a
    SAR EDX,0x1f                        ; 0052e82f
    IDIV EBX                            ; 0052e832
    MOV dword ptr [ESP],0x3f800000      ; 0052e834
    CMP EDX,0x4                         ; 0052e83b
    JA 0x0052e6e5                       ; 0052e83e
        ;   XREF to: 0052e6e5 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x52dfdc]  ; 0052e844 | caseD_1 | caseD_3 | caseD_4
        ;   Label: switchD

