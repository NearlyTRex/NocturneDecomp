; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_curtain_cpp_FUN_00449fc0(void)
;
; Local Variables:
; undefined4       Stack[-0x158]:4  local_158
; undefined4       Stack[-0x154]:4  local_154
; undefined4       Stack[-0x150]:4  local_150
; undefined4       Stack[-0x14c]:4  local_14c
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0x144]:4  local_144
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
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
;   core_curtain.cpp_FUN_0044a920 at 0044b043
;
; Referenced Globals:
;   double DOUBLE_00619c0a = -0.5
;   double DOUBLE_00619c12 = 0.0100000000000000
;   undefined4 DAT_008879bc
;   CVector3f[100] DAT_008879c0
;   undefined4 DAT_008879c4
;   undefined4 DAT_008879c8
;   SCollisionInfo[100] DAT_00887e70
;   undefined4 DAT_00887e88
;   undefined4 DAT_00887e8c
;   undefined4 DAT_00887eb4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00449fc0
        ;   Label: core_curtain.cpp_FUN_00449fc0
    PUSH ESI                            ; 00449fc1
    PUSH EDI                            ; 00449fc2
    PUSH EBP                            ; 00449fc3
    MOV EBP,ESP                         ; 00449fc4
    SUB ESP,0x148                       ; 00449fc6
    AND ESP,0xfffffff8                  ; 00449fcc
    MOV EBX,dword ptr [EBP + 0x18]      ; 00449fcf
    MOV EAX,dword ptr [EBP + 0x14]      ; 00449fd2
    CMP dword ptr [EAX + 0x65b2c],0x0   ; 00449fd5
    JZ 0x0044a014                       ; 00449fdc
        ;   XREF to: 0044a014 (CONDITIONAL_JUMP)  ; LAB_0044a014
    FLD float ptr [EBX + 0x24]          ; 00449fde
    FCOMP float ptr [EAX + 0x65b28]     ; 00449fe1
    FNSTSW AX                           ; 00449fe7
    SAHF                                ; 00449fe9
    JNC 0x0044a014                      ; 00449fea
        ;   XREF to: 0044a014 (CONDITIONAL_JUMP)  ; LAB_0044a014
    LEA EAX,[EBX + 0x2c]                ; 00449fec
    MOV dword ptr [EAX + 0x8],0x0       ; 00449fef
    MOV EDX,dword ptr [EAX + 0x8]       ; 00449ff6
    MOV dword ptr [EAX + 0x4],EDX       ; 00449ff9
    MOV EDX,dword ptr [EAX + 0x4]       ; 00449ffc
    MOV dword ptr [EAX],EDX             ; 00449fff
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044a001
    MOV EDX,dword ptr [EAX + 0x65b28]   ; 0044a004
    MOV dword ptr [EBX + 0x24],EDX      ; 0044a00a
    MOV dword ptr [EBX + 0x6c],0x1      ; 0044a00d
    XOR ECX,ECX                         ; 0044a014
        ;   Label: LAB_0044a014
    MOV ESI,dword ptr [0x008879bc]      ; 0044a016 | DAT_008879bc
    MOV dword ptr [ESP + 0x140],ECX     ; 0044a01c
    TEST ESI,ESI                        ; 0044a023
    JLE 0x0044a1e7                      ; 0044a025
        ;   XREF to: 0044a1e7 (CONDITIONAL_JUMP)  ; LAB_0044a1e7
    LEA EDX,[EBX + 0x20]                ; 0044a02b
    LEA ECX,[EBX + 0x2c]                ; 0044a02e
    LEA EAX,[EBX + 0x28]                ; 0044a031
    MOV dword ptr [ESP + 0x114],EAX     ; 0044a034
    LEA EAX,[EBX + 0x24]                ; 0044a03b
    MOV dword ptr [ESP + 0x118],EAX     ; 0044a03e
    LEA EAX,[EBX + 0x30]                ; 0044a045
    MOV dword ptr [ESP + 0x144],EAX     ; 0044a048
    LEA EAX,[EBX + 0x34]                ; 0044a04f
    MOV EDI,dword ptr [EBP + 0x14]      ; 0044a052
    MOV dword ptr [ESP + 0x108],EAX     ; 0044a055
    MOV EAX,0x887e70                    ; 0044a05c | DAT_00887e70
    XOR ESI,ESI                         ; 0044a061
    ADD EAX,0x1c                        ; 0044a063
    ADD EDI,0x1c728                     ; 0044a066
    MOV dword ptr [ESP + 0x13c],EAX     ; 0044a06c | DAT_00887e8c
    MOV EAX,dword ptr [ECX]             ; 0044a073
        ;   Label: LAB_0044a073
    MOV dword ptr [ESP + 0xa8],EAX      ; 0044a075
    MOV EAX,dword ptr [ESP + 0x144]     ; 0044a07c
    MOV EAX,dword ptr [EAX]             ; 0044a083
    MOV dword ptr [ESP + 0xac],EAX      ; 0044a085
    FLD float ptr [ESP + 0xac]          ; 0044a08c
    FMUL ST0                            ; 0044a093
    MOV EAX,dword ptr [ESP + 0x108]     ; 0044a095
    FLD float ptr [ESP + 0xa8]          ; 0044a09c
    FMUL ST0                            ; 0044a0a3
    MOV EAX,dword ptr [EAX]             ; 0044a0a5
    FADDP                               ; 0044a0a7
    MOV dword ptr [ESP + 0xb0],EAX      ; 0044a0a9
    FLD float ptr [ESP + 0xb0]          ; 0044a0b0
    FMUL ST0                            ; 0044a0b7
    FADDP                               ; 0044a0b9
    FSQRT                               ; 0044a0bb
    FST float ptr [ESP + 0x4]           ; 0044a0bd
    FLDZ                                ; 0044a0c1
    FCOMPP                              ; 0044a0c3
    FNSTSW AX                           ; 0044a0c5
    SAHF                                ; 0044a0c7
    JNC 0x0044a4fb                      ; 0044a0c8
        ;   XREF to: 0044a4fb (CONDITIONAL_JUMP)  ; LAB_0044a4fb
    FLD1                                ; 0044a0ce
    FLD float ptr [ESP + 0xa8]          ; 0044a0d0
    FXCH                                ; 0044a0d7
    FDIV float ptr [ESP + 0x4]          ; 0044a0d9
    FXCH                                ; 0044a0dd
    FMUL ST1                            ; 0044a0df
    FLD float ptr [ESP + 0xac]          ; 0044a0e1
    FMUL ST2                            ; 0044a0e8
    FLD float ptr [ESP + 0xb0]          ; 0044a0ea
    FMULP ST3                           ; 0044a0f1
    FXCH                                ; 0044a0f3
    FSTP float ptr [ESP + 0xa8]         ; 0044a0f5
    FSTP float ptr [ESP + 0xac]         ; 0044a0fc
    FSTP float ptr [ESP + 0xb0]         ; 0044a103
    FLD float ptr [EBX + 0x30]          ; 0044a10a
        ;   Label: LAB_0044a10a
    FCOMP double ptr [0x00619c0a]       ; 0044a10d | DOUBLE_00619c0a
    FNSTSW AX                           ; 0044a113
    SAHF                                ; 0044a115
    JNC 0x0044a517                      ; 0044a116
        ;   XREF to: 0044a517 (CONDITIONAL_JUMP)  ; LAB_0044a517
    IMUL EAX,dword ptr [ESP + 0x140],0x28 ; 0044a11c
    FLD float ptr [EBX + 0x24]          ; 0044a124
    FLD float ptr [ESI + 0x8879c4]      ; 0044a127 | DAT_008879c4
    FADD float ptr [EAX + 0x887e88]     ; 0044a12d | DAT_00887e88
    MOV dword ptr [ESP + 0x11c],EAX     ; 0044a133
    FSTP float ptr [ESP + 0xfc]         ; 0044a13a
    FCOMP float ptr [ESP + 0xfc]        ; 0044a141
    FNSTSW AX                           ; 0044a148
    SAHF                                ; 0044a14a
    JNC 0x0044a517                      ; 0044a14b
        ;   XREF to: 0044a517 (CONDITIONAL_JUMP)  ; LAB_0044a517
    FLD float ptr [EBX + 0x24]          ; 0044a151
    FCOMP float ptr [ESI + 0x8879c4]    ; 0044a154 | DAT_008879c4
    FNSTSW AX                           ; 0044a15a
    SAHF                                ; 0044a15c
    JBE 0x0044a517                      ; 0044a15d
        ;   XREF to: 0044a517 (CONDITIONAL_JUMP)  ; LAB_0044a517
    FLD float ptr [EBX + 0x20]          ; 0044a163
    FSUB float ptr [ESI + 0x8879c0]     ; 0044a166 | DAT_008879c0
    FST float ptr [ESP + 0x30]          ; 0044a16c
    FLD float ptr [EBX + 0x28]          ; 0044a170
    FSUB float ptr [ESI + 0x8879c8]     ; 0044a173 | DAT_008879c8
    FXCH                                ; 0044a179
    FMUL float ptr [ESP + 0x30]         ; 0044a17b
    FXCH                                ; 0044a17f
    FST float ptr [ESP + 0x38]          ; 0044a181
    FMUL float ptr [ESP + 0x38]         ; 0044a185
    XOR EAX,EAX                         ; 0044a189
    FADDP                               ; 0044a18b
    MOV dword ptr [ESP + 0x34],EAX      ; 0044a18d
    FSQRT                               ; 0044a191
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0044a193
    FCOMP float ptr [EAX + 0x887e8c]    ; 0044a19a | DAT_00887e8c
    FNSTSW AX                           ; 0044a1a0
    SAHF                                ; 0044a1a2
    JNC 0x0044a517                      ; 0044a1a3
        ;   XREF to: 0044a517 (CONDITIONAL_JUMP)  ; LAB_0044a517
    MOV dword ptr [EBX + 0x30],0x0      ; 0044a1a9
    MOV EAX,dword ptr [ESP + 0xfc]      ; 0044a1b0
    MOV dword ptr [EBX + 0x6c],0x1      ; 0044a1b7
    MOV dword ptr [EBX + 0x24],EAX      ; 0044a1be
    ADD dword ptr [ESP + 0x13c],0x28    ; 0044a1c1 | DAT_00887eb4
        ;   Label: LAB_0044a1c1
    MOV EAX,dword ptr [ESP + 0x140]     ; 0044a1c9
    INC EAX                             ; 0044a1d0
    ADD ESI,0xc                         ; 0044a1d1
    MOV dword ptr [ESP + 0x140],EAX     ; 0044a1d4
    CMP EAX,dword ptr [0x008879bc]      ; 0044a1db | DAT_008879bc
    JL 0x0044a073                       ; 0044a1e1
        ;   XREF to: 0044a073 (CONDITIONAL_JUMP)  ; LAB_0044a073
    XOR EDX,EDX                         ; 0044a1e7
        ;   Label: LAB_0044a1e7
    MOV ECX,dword ptr [EBX + 0x44]      ; 0044a1e9
    MOV dword ptr [ESP + 0x124],EDX     ; 0044a1ec
    TEST ECX,ECX                        ; 0044a1f3
    JLE 0x0044a4f4                      ; 0044a1f5
        ;   XREF to: 0044a4f4 (CONDITIONAL_JUMP)  ; LAB_0044a4f4
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044a1fb
    MOV ESI,dword ptr [EBP + 0x14]      ; 0044a1fe
    LEA EDX,[EBX + 0x20]                ; 0044a201
    ADD EAX,0x65b1c                     ; 0044a204
    ADD ESI,0x1c728                     ; 0044a209
    MOV dword ptr [ESP + 0x120],EAX     ; 0044a20f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044a216
    LEA ECX,[EBX + 0x2c]                ; 0044a219
    ADD EAX,0x208                       ; 0044a21c
    MOV EDI,EBX                         ; 0044a221
    MOV dword ptr [ESP + 0x10c],EAX     ; 0044a223
    IMUL EAX,dword ptr [EDI + 0x48],0x74 ; 0044a22a
        ;   Label: LAB_0044a22a
    MOV dword ptr [ESP + 0x104],EAX     ; 0044a22e
    MOV EAX,dword ptr [ESP + 0x10c]     ; 0044a235
    ADD EAX,dword ptr [ESP + 0x104]     ; 0044a23c
    FLD float ptr [EDX]                 ; 0044a243
    FSUB float ptr [EAX + 0x20]         ; 0044a245
    ADD EAX,0x20                        ; 0044a248
    FSTP float ptr [ESP + 0xc]          ; 0044a24b
    FLD float ptr [EDX + 0x4]           ; 0044a24f
    FSUB float ptr [EAX + 0x4]          ; 0044a252
    FSTP float ptr [ESP + 0x10]         ; 0044a255
    FLD float ptr [EDX + 0x8]           ; 0044a259
    FSUB float ptr [EAX + 0x8]          ; 0044a25c
    LEA EAX,[ESP + 0xc]                 ; 0044a25f
    MOV dword ptr [ESP + 0x104],EAX     ; 0044a263
    LEA EAX,[ESP + 0x78]                ; 0044a26a
    FSTP float ptr [ESP + 0x14]         ; 0044a26e
    CMP EAX,dword ptr [ESP + 0x104]     ; 0044a272
    JNZ 0x0044a8f3                      ; 0044a279
        ;   XREF to: 0044a8f3 (CONDITIONAL_JUMP)  ; LAB_0044a8f3
    FLD float ptr [ESP + 0x7c]          ; 0044a27f
        ;   Label: LAB_0044a27f
    FMUL ST0                            ; 0044a283
    FLD float ptr [ESP + 0x78]          ; 0044a285
    FMUL ST0                            ; 0044a289
    FADDP                               ; 0044a28b
    FLD float ptr [ESP + 0x80]          ; 0044a28d
    FMUL ST0                            ; 0044a294
    FADDP                               ; 0044a296
    FSQRT                               ; 0044a298
    FSTP float ptr [ESP + 0x134]        ; 0044a29a
    MOV EAX,dword ptr [ESP + 0x134]     ; 0044a2a1
    MOV dword ptr [ESP],EAX             ; 0044a2a8
    MOV EAX,dword ptr [EDI + 0x58]      ; 0044a2ab
    MOV dword ptr [ESP + 0x138],EAX     ; 0044a2ae
    FLD float ptr [ESP + 0x134]         ; 0044a2b5
    FCOMP float ptr [ESP + 0x138]       ; 0044a2bc
    FNSTSW AX                           ; 0044a2c3
    SAHF                                ; 0044a2c5
    JBE 0x0044a3a9                      ; 0044a2c6
        ;   XREF to: 0044a3a9 (CONDITIONAL_JUMP)  ; LAB_0044a3a9
    FLD float ptr [ESP + 0x134]         ; 0044a2cc
    FLD ST0                             ; 0044a2d3
    FSUB float ptr [ESP + 0x138]        ; 0044a2d5
    FLD float ptr [ESP + 0x78]          ; 0044a2dc
    FXCH                                ; 0044a2e0
    FSTP float ptr [ESP + 0x128]        ; 0044a2e2
    FMUL float ptr [ESP + 0x128]        ; 0044a2e9
    FLD float ptr [ESP + 0x7c]          ; 0044a2f0
    FMUL float ptr [ESP + 0x128]        ; 0044a2f4
    FLD float ptr [ESP + 0x80]          ; 0044a2fb
    FMUL float ptr [ESP + 0x128]        ; 0044a302
    FLD1                                ; 0044a309
    FXCH ST3                            ; 0044a30b
    FST float ptr [ESP + 0x6c]          ; 0044a30d
    FXCH ST3                            ; 0044a311
    FDIVRP ST4,ST0                      ; 0044a313
    FXCH ST2                            ; 0044a315
    FMUL ST3                            ; 0044a317
    FXCH                                ; 0044a319
    FST float ptr [ESP + 0x70]          ; 0044a31b
    FMUL ST3                            ; 0044a31f
    FXCH ST2                            ; 0044a321
    FST float ptr [ESP + 0x74]          ; 0044a323
    FMULP ST3                           ; 0044a327
    FSTP float ptr [ESP + 0x3c]         ; 0044a329
    FSTP float ptr [ESP + 0x40]         ; 0044a32d
    FSTP float ptr [ESP + 0x44]         ; 0044a331
    FLD float ptr [EDX]                 ; 0044a335
    FSUB float ptr [ESP + 0x3c]         ; 0044a337
    FLD float ptr [EDX + 0x4]           ; 0044a33b
    FXCH                                ; 0044a33e
    FSTP float ptr [EDX]                ; 0044a340
    FSUB float ptr [ESP + 0x40]         ; 0044a342
    FLD float ptr [EDX + 0x8]           ; 0044a346
    FXCH                                ; 0044a349
    FSTP float ptr [EDX + 0x4]          ; 0044a34b
    FSUB float ptr [ESP + 0x44]         ; 0044a34e
    FSTP float ptr [EDX + 0x8]          ; 0044a352
    FLD float ptr [ESP + 0x3c]          ; 0044a355
    FMUL float ptr [ESI]                ; 0044a359
    FLD float ptr [ESP + 0x40]          ; 0044a35b
    FXCH                                ; 0044a35f
    FSTP float ptr [ESP + 0x90]         ; 0044a361
    FMUL float ptr [ESI]                ; 0044a368
    FLD float ptr [ESP + 0x44]          ; 0044a36a
    FXCH                                ; 0044a36e
    FSTP float ptr [ESP + 0x94]         ; 0044a370
    FMUL float ptr [ESI]                ; 0044a377
    FSTP float ptr [ESP + 0x98]         ; 0044a379
    FLD float ptr [ECX]                 ; 0044a380
    FSUB float ptr [ESP + 0x90]         ; 0044a382
    FLD float ptr [ECX + 0x4]           ; 0044a389
    FXCH                                ; 0044a38c
    FSTP float ptr [ECX]                ; 0044a38e
    FSUB float ptr [ESP + 0x94]         ; 0044a390
    FLD float ptr [ECX + 0x8]           ; 0044a397
    FXCH                                ; 0044a39a
    FSTP float ptr [ECX + 0x4]          ; 0044a39c
    FSUB float ptr [ESP + 0x98]         ; 0044a39f
    FSTP float ptr [ECX + 0x8]          ; 0044a3a6
    FLD float ptr [ESP]                 ; 0044a3a9
        ;   Label: LAB_0044a3a9
    FCOMP float ptr [ESP + 0x138]       ; 0044a3ac
    FNSTSW AX                           ; 0044a3b3
    SAHF                                ; 0044a3b5
    JNC 0x0044a4d9                      ; 0044a3b6
        ;   XREF to: 0044a4d9 (CONDITIONAL_JUMP)  ; LAB_0044a4d9
    FLD float ptr [ESP]                 ; 0044a3bc
    FCOMP double ptr [0x00619c12]       ; 0044a3bf | DOUBLE_00619c12
    FNSTSW AX                           ; 0044a3c5
    SAHF                                ; 0044a3c7
    JBE 0x0044a4d9                      ; 0044a3c8
        ;   XREF to: 0044a4d9 (CONDITIONAL_JUMP)  ; LAB_0044a4d9
    FLD float ptr [ESP]                 ; 0044a3ce
    FLD float ptr [ESP + 0x138]         ; 0044a3d1
    FSUB ST0,ST1                        ; 0044a3d8
    FLD float ptr [ESP + 0x78]          ; 0044a3da
    FXCH                                ; 0044a3de
    FSTP float ptr [ESP + 0x12c]        ; 0044a3e0
    FMUL float ptr [ESP + 0x12c]        ; 0044a3e7
    FLD float ptr [ESP + 0x7c]          ; 0044a3ee
    FMUL float ptr [ESP + 0x12c]        ; 0044a3f2
    FLD float ptr [ESP + 0x80]          ; 0044a3f9
    FMUL float ptr [ESP + 0x12c]        ; 0044a400
    FLD1                                ; 0044a407
    FXCH ST3                            ; 0044a409
    FST float ptr [ESP + 0xf0]          ; 0044a40b
    FXCH ST3                            ; 0044a412
    FDIVRP ST4,ST0                      ; 0044a414
    FXCH ST2                            ; 0044a416
    FMUL ST3                            ; 0044a418
    FXCH                                ; 0044a41a
    FST float ptr [ESP + 0xf4]          ; 0044a41c
    FMUL ST3                            ; 0044a423
    FXCH ST2                            ; 0044a425
    FST float ptr [ESP + 0xf8]          ; 0044a427
    FMULP ST3                           ; 0044a42e
    MOV EAX,dword ptr [ESP + 0x120]     ; 0044a430
    FSTP float ptr [ESP + 0x48]         ; 0044a437
    FSTP float ptr [ESP + 0x4c]         ; 0044a43b
    FSTP float ptr [ESP + 0x50]         ; 0044a43f
    FLD float ptr [ESP + 0x48]          ; 0044a443
    FMUL float ptr [EAX]                ; 0044a447
    FLD float ptr [ESP + 0x4c]          ; 0044a449
    FXCH                                ; 0044a44d
    FSTP float ptr [ESP + 0x60]         ; 0044a44f
    FMUL float ptr [EAX]                ; 0044a453
    FLD float ptr [ESP + 0x50]          ; 0044a455
    FXCH                                ; 0044a459
    FSTP float ptr [ESP + 0x64]         ; 0044a45b
    FMUL float ptr [EAX]                ; 0044a45f
    FSTP float ptr [ESP + 0x68]         ; 0044a461
    FLD float ptr [EDX]                 ; 0044a465
    FADD float ptr [ESP + 0x60]         ; 0044a467
    FLD float ptr [EDX + 0x4]           ; 0044a46b
    FXCH                                ; 0044a46e
    FSTP float ptr [EDX]                ; 0044a470
    FADD float ptr [ESP + 0x64]         ; 0044a472
    FLD float ptr [EDX + 0x8]           ; 0044a476
    FXCH                                ; 0044a479
    FSTP float ptr [EDX + 0x4]          ; 0044a47b
    FADD float ptr [ESP + 0x68]         ; 0044a47e
    FSTP float ptr [EDX + 0x8]          ; 0044a482
    FLD float ptr [ESP + 0x60]          ; 0044a485
    FMUL float ptr [ESI]                ; 0044a489
    FLD float ptr [ESP + 0x64]          ; 0044a48b
    FXCH                                ; 0044a48f
    FSTP float ptr [ESP + 0xd8]         ; 0044a491
    FMUL float ptr [ESI]                ; 0044a498
    FLD float ptr [ESP + 0x68]          ; 0044a49a
    FXCH                                ; 0044a49e
    FSTP float ptr [ESP + 0xdc]         ; 0044a4a0
    FMUL float ptr [ESI]                ; 0044a4a7
    FSTP float ptr [ESP + 0xe0]         ; 0044a4a9
    FLD float ptr [ECX]                 ; 0044a4b0
    FADD float ptr [ESP + 0xd8]         ; 0044a4b2
    FLD float ptr [ECX + 0x4]           ; 0044a4b9
    FXCH                                ; 0044a4bc
    FSTP float ptr [ECX]                ; 0044a4be
    FADD float ptr [ESP + 0xdc]         ; 0044a4c0
    FLD float ptr [ECX + 0x8]           ; 0044a4c7
    FXCH                                ; 0044a4ca
    FSTP float ptr [ECX + 0x4]          ; 0044a4cc
    FADD float ptr [ESP + 0xe0]         ; 0044a4cf
    FSTP float ptr [ECX + 0x8]          ; 0044a4d6
    MOV EAX,dword ptr [ESP + 0x124]     ; 0044a4d9
        ;   Label: LAB_0044a4d9
    INC EAX                             ; 0044a4e0
    ADD EDI,0x4                         ; 0044a4e1
    MOV dword ptr [ESP + 0x124],EAX     ; 0044a4e4
    CMP EAX,dword ptr [EBX + 0x44]      ; 0044a4eb
    JL 0x0044a22a                       ; 0044a4ee
        ;   XREF to: 0044a22a (CONDITIONAL_JUMP)  ; LAB_0044a22a
    MOV ESP,EBP                         ; 0044a4f4
        ;   Label: LAB_0044a4f4
    POP EBP                             ; 0044a4f6
    POP EDI                             ; 0044a4f7
    POP ESI                             ; 0044a4f8
    POP EBX                             ; 0044a4f9
    RET                                 ; 0044a4fa
    XOR EAX,EAX                         ; 0044a4fb
        ;   Label: LAB_0044a4fb
    MOV dword ptr [ESP + 0xac],EAX      ; 0044a4fd
    MOV dword ptr [ESP + 0xa8],EAX      ; 0044a504
    MOV dword ptr [ESP + 0xb0],EAX      ; 0044a50b
    JMP 0x0044a10a                      ; 0044a512
        ;   XREF to: 0044a10a (UNCONDITIONAL_JUMP)  ; LAB_0044a10a
    FLD float ptr [EBX + 0x24]          ; 0044a517
        ;   Label: LAB_0044a517
    FCOMP float ptr [ESI + 0x8879c4]    ; 0044a51a | DAT_008879c4
    FNSTSW AX                           ; 0044a520
    SAHF                                ; 0044a522
    JC 0x0044a1c1                       ; 0044a523
        ;   XREF to: 0044a1c1 (CONDITIONAL_JUMP)  ; LAB_0044a1c1
    IMUL EAX,dword ptr [ESP + 0x140],0x28 ; 0044a529
    FLD float ptr [EBX + 0x24]          ; 0044a531
    FLD float ptr [ESI + 0x8879c4]      ; 0044a534 | DAT_008879c4
    FADD float ptr [EAX + 0x887e88]     ; 0044a53a | DAT_00887e88
    MOV dword ptr [ESP + 0x100],EAX     ; 0044a540
    FSTP float ptr [ESP + 0x130]        ; 0044a547
    FCOMP float ptr [ESP + 0x130]       ; 0044a54e
    FNSTSW AX                           ; 0044a555
    SAHF                                ; 0044a557
    JA 0x0044a1c1                       ; 0044a558
        ;   XREF to: 0044a1c1 (CONDITIONAL_JUMP)  ; LAB_0044a1c1
    FLD float ptr [EBX + 0x20]          ; 0044a55e
    FSUB float ptr [ESI + 0x8879c0]     ; 0044a561 | DAT_008879c0
    FST float ptr [ESP + 0x54]          ; 0044a567
    FLD float ptr [EBX + 0x28]          ; 0044a56b
    FSUB float ptr [ESI + 0x8879c8]     ; 0044a56e | DAT_008879c8
    FXCH                                ; 0044a574
    FMUL float ptr [ESP + 0x54]         ; 0044a576
    FXCH                                ; 0044a57a
    FST float ptr [ESP + 0x5c]          ; 0044a57c
    FMUL float ptr [ESP + 0x5c]         ; 0044a580
    XOR EAX,EAX                         ; 0044a584
    FXCH                                ; 0044a586
    FXCH                                ; 0044a588
    FSTP float ptr [ESP + 0x110]        ; 0044a58a
    FADD float ptr [ESP + 0x110]        ; 0044a591
    MOV dword ptr [ESP + 0x58],EAX      ; 0044a598
    FSQRT                               ; 0044a59c
    MOV EAX,dword ptr [ESP + 0x100]     ; 0044a59e
    FST float ptr [ESP + 0x8]           ; 0044a5a5
    FCOMP float ptr [EAX + 0x887e8c]    ; 0044a5a9 | DAT_00887e8c
    FNSTSW AX                           ; 0044a5af
    SAHF                                ; 0044a5b1
    JA 0x0044a1c1                       ; 0044a5b2
        ;   XREF to: 0044a1c1 (CONDITIONAL_JUMP)  ; LAB_0044a1c1
    FLD float ptr [EBX + 0x3c]          ; 0044a5b8
    FCOMP float ptr [ESP + 0x130]       ; 0044a5bb
    FNSTSW AX                           ; 0044a5c2
    SAHF                                ; 0044a5c4
    JC 0x0044a6c8                       ; 0044a5c5
        ;   XREF to: 0044a6c8 (CONDITIONAL_JUMP)  ; LAB_0044a6c8
    MOV EAX,dword ptr [EDX]             ; 0044a5cb
    MOV dword ptr [ESP + 0x84],EAX      ; 0044a5cd
    MOV EAX,dword ptr [ESP + 0x118]     ; 0044a5d4
    MOV EAX,dword ptr [EAX]             ; 0044a5db
    MOV dword ptr [ESP + 0x88],EAX      ; 0044a5dd
    MOV EAX,dword ptr [ESP + 0x114]     ; 0044a5e4
    MOV EAX,dword ptr [EAX]             ; 0044a5eb
    MOV dword ptr [ESP + 0x8c],EAX      ; 0044a5ed
    MOV EAX,dword ptr [ESP + 0x130]     ; 0044a5f4
    MOV dword ptr [ESP + 0x88],EAX      ; 0044a5fb
    FLD float ptr [ESP + 0x84]          ; 0044a602
    FSUB float ptr [EDX]                ; 0044a609
    FLD float ptr [ESP + 0x130]         ; 0044a60b
    FXCH                                ; 0044a612
    FSTP float ptr [ESP + 0xc0]         ; 0044a614
    FSUB float ptr [EDX + 0x4]          ; 0044a61b
    FLD float ptr [ESP + 0x8c]          ; 0044a61e
    FXCH                                ; 0044a625
    FSTP float ptr [ESP + 0xc4]         ; 0044a627
    FSUB float ptr [EDX + 0x8]          ; 0044a62e
    FLD float ptr [ESP + 0xc0]          ; 0044a631
    FXCH                                ; 0044a638
    FSTP float ptr [ESP + 0xc8]         ; 0044a63a
    FMUL float ptr [EDI]                ; 0044a641
    FLD float ptr [ESP + 0xc4]          ; 0044a643
    FXCH                                ; 0044a64a
    FSTP float ptr [ESP + 0xe4]         ; 0044a64c
    FMUL float ptr [EDI]                ; 0044a653
    FLD float ptr [ESP + 0xc8]          ; 0044a655
    FXCH                                ; 0044a65c
    FSTP float ptr [ESP + 0xe8]         ; 0044a65e
    FMUL float ptr [EDI]                ; 0044a665
    FSTP float ptr [ESP + 0xec]         ; 0044a667
    FLD float ptr [ECX]                 ; 0044a66e
    FADD float ptr [ESP + 0xe4]         ; 0044a670
    FLD float ptr [ECX + 0x4]           ; 0044a677
    FXCH                                ; 0044a67a
    FSTP float ptr [ECX]                ; 0044a67c
    FADD float ptr [ESP + 0xe8]         ; 0044a67e
    FLD float ptr [ECX + 0x8]           ; 0044a685
    FXCH                                ; 0044a688
    FSTP float ptr [ECX + 0x4]          ; 0044a68a
    FADD float ptr [ESP + 0xec]         ; 0044a68d
    LEA EAX,[ESP + 0x84]                ; 0044a694
    FSTP float ptr [ECX + 0x8]          ; 0044a69b
    CMP EDX,EAX                         ; 0044a69e
    JZ 0x0044a1c1                       ; 0044a6a0
        ;   XREF to: 0044a1c1 (CONDITIONAL_JUMP)  ; LAB_0044a1c1
    MOV EAX,dword ptr [ESP + 0x84]      ; 0044a6a6
    MOV dword ptr [EDX],EAX             ; 0044a6ad
    MOV EAX,dword ptr [ESP + 0x88]      ; 0044a6af
    MOV dword ptr [EDX + 0x4],EAX       ; 0044a6b6
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0044a6b9
    MOV dword ptr [EDX + 0x8],EAX       ; 0044a6c0
    JMP 0x0044a1c1                      ; 0044a6c3
        ;   XREF to: 0044a1c1 (UNCONDITIONAL_JUMP)  ; LAB_0044a1c1
    FLD float ptr [EBX + 0x3c]          ; 0044a6c8
        ;   Label: LAB_0044a6c8
    FCOMP float ptr [ESI + 0x8879c4]    ; 0044a6cb | DAT_008879c4
    FNSTSW AX                           ; 0044a6d1
    SAHF                                ; 0044a6d3
    JA 0x0044a7b5                       ; 0044a6d4
        ;   XREF to: 0044a7b5 (CONDITIONAL_JUMP)  ; LAB_0044a7b5
    MOV EAX,dword ptr [EDX]             ; 0044a6da
    MOV dword ptr [ESP + 0x18],EAX      ; 0044a6dc
    MOV EAX,dword ptr [ESP + 0x118]     ; 0044a6e0
    MOV EAX,dword ptr [EAX]             ; 0044a6e7
    MOV dword ptr [ESP + 0x1c],EAX      ; 0044a6e9
    MOV EAX,dword ptr [ESP + 0x114]     ; 0044a6ed
    MOV EAX,dword ptr [EAX]             ; 0044a6f4
    MOV dword ptr [ESP + 0x20],EAX      ; 0044a6f6
    MOV EAX,dword ptr [ESI + 0x8879c4]  ; 0044a6fa | DAT_008879c4
    MOV dword ptr [ESP + 0x1c],EAX      ; 0044a700
    FLD float ptr [ESP + 0x18]          ; 0044a704
    FSUB float ptr [EDX]                ; 0044a708
    FLD float ptr [ESP + 0x1c]          ; 0044a70a
    FXCH                                ; 0044a70e
    FSTP float ptr [ESP + 0xb4]         ; 0044a710
    FSUB float ptr [EDX + 0x4]          ; 0044a717
    FLD float ptr [ESP + 0x20]          ; 0044a71a
    FXCH                                ; 0044a71e
    FSTP float ptr [ESP + 0xb8]         ; 0044a720
    FSUB float ptr [EDX + 0x8]          ; 0044a727
    FLD float ptr [ESP + 0xb4]          ; 0044a72a
    FXCH                                ; 0044a731
    FSTP float ptr [ESP + 0xbc]         ; 0044a733
    FMUL float ptr [EDI]                ; 0044a73a
    FLD float ptr [ESP + 0xb8]          ; 0044a73c
    FXCH                                ; 0044a743
    FSTP float ptr [ESP + 0xcc]         ; 0044a745
    FMUL float ptr [EDI]                ; 0044a74c
    FLD float ptr [ESP + 0xbc]          ; 0044a74e
    FXCH                                ; 0044a755
    FSTP float ptr [ESP + 0xd0]         ; 0044a757
    FMUL float ptr [EDI]                ; 0044a75e
    FSTP float ptr [ESP + 0xd4]         ; 0044a760
    FLD float ptr [ECX]                 ; 0044a767
    FADD float ptr [ESP + 0xcc]         ; 0044a769
    FLD float ptr [ECX + 0x4]           ; 0044a770
    FXCH                                ; 0044a773
    FSTP float ptr [ECX]                ; 0044a775
    FADD float ptr [ESP + 0xd0]         ; 0044a777
    FLD float ptr [ECX + 0x8]           ; 0044a77e
    FXCH                                ; 0044a781
    FSTP float ptr [ECX + 0x4]          ; 0044a783
    FADD float ptr [ESP + 0xd4]         ; 0044a786
    LEA EAX,[ESP + 0x18]                ; 0044a78d
    FSTP float ptr [ECX + 0x8]          ; 0044a791
    CMP EDX,EAX                         ; 0044a794
    JZ 0x0044a1c1                       ; 0044a796
        ;   XREF to: 0044a1c1 (CONDITIONAL_JUMP)  ; LAB_0044a1c1
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044a79c
    MOV dword ptr [EDX],EAX             ; 0044a7a0
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0044a7a2
    MOV dword ptr [EDX + 0x4],EAX       ; 0044a7a6
    MOV EAX,dword ptr [ESP + 0x20]      ; 0044a7a9
    MOV dword ptr [EDX + 0x8],EAX       ; 0044a7ad
    JMP 0x0044a1c1                      ; 0044a7b0
        ;   XREF to: 0044a1c1 (UNCONDITIONAL_JUMP)  ; LAB_0044a1c1
    FLD float ptr [ESP + 0x8]           ; 0044a7b5
        ;   Label: LAB_0044a7b5
    FLDZ                                ; 0044a7b9
    FCOMPP                              ; 0044a7bb
    FNSTSW AX                           ; 0044a7bd
    SAHF                                ; 0044a7bf
    JNC 0x0044a8e0                      ; 0044a7c0
        ;   XREF to: 0044a8e0 (CONDITIONAL_JUMP)  ; LAB_0044a8e0
    FLD1                                ; 0044a7c6
    FLD float ptr [ESP + 0x54]          ; 0044a7c8
    FXCH                                ; 0044a7cc
    FDIV float ptr [ESP + 0x8]          ; 0044a7ce
    FXCH                                ; 0044a7d2
    FMUL ST1                            ; 0044a7d4
    FLDZ                                ; 0044a7d6
    FMUL ST2                            ; 0044a7d8
    FLD float ptr [ESP + 0x5c]          ; 0044a7da
    FMULP ST3                           ; 0044a7de
    FXCH                                ; 0044a7e0
    FSTP float ptr [ESP + 0x54]         ; 0044a7e2
    FSTP float ptr [ESP + 0x58]         ; 0044a7e6
    FSTP float ptr [ESP + 0x5c]         ; 0044a7ea
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0044a7ee
        ;   Label: LAB_0044a7ee
    FLD float ptr [ESP + 0x54]          ; 0044a7f5
    FMUL float ptr [EAX]                ; 0044a7f9 | DAT_00887e8c
    FLD float ptr [ESP + 0x58]          ; 0044a7fb
    FXCH                                ; 0044a7ff
    FSTP float ptr [ESP + 0x54]         ; 0044a801
    FMUL float ptr [EAX]                ; 0044a805 | DAT_00887e8c
    FLD float ptr [ESP + 0x5c]          ; 0044a807
    FXCH                                ; 0044a80b
    FSTP float ptr [ESP + 0x58]         ; 0044a80d
    FMUL float ptr [EAX]                ; 0044a811 | DAT_00887e8c
    FLD float ptr [ESP + 0x54]          ; 0044a813
    FADD float ptr [ESI + 0x8879c0]     ; 0044a817 | DAT_008879c0
    FXCH                                ; 0044a81d
    FSTP float ptr [ESP + 0x5c]         ; 0044a81f
    FSTP float ptr [ESP + 0x54]         ; 0044a823
    FLD float ptr [ESP + 0x5c]          ; 0044a827
    FLD float ptr [ESP + 0x54]          ; 0044a82b
    MOV EAX,dword ptr [EBX + 0x24]      ; 0044a82f
    FXCH                                ; 0044a832
    FADD float ptr [ESI + 0x8879c8]     ; 0044a834 | DAT_008879c8
    MOV dword ptr [ESP + 0x58],EAX      ; 0044a83a
    FSTP float ptr [ESP + 0x5c]         ; 0044a83e
    FSUB float ptr [EDX]                ; 0044a842
    FLD float ptr [ESP + 0x58]          ; 0044a844
    FXCH                                ; 0044a848
    FSTP float ptr [ESP + 0x24]         ; 0044a84a
    FSUB float ptr [EDX + 0x4]          ; 0044a84e
    FLD float ptr [ESP + 0x5c]          ; 0044a851
    FXCH                                ; 0044a855
    FSTP float ptr [ESP + 0x28]         ; 0044a857
    FSUB float ptr [EDX + 0x8]          ; 0044a85b
    FLD float ptr [ESP + 0x24]          ; 0044a85e
    FXCH                                ; 0044a862
    FSTP float ptr [ESP + 0x2c]         ; 0044a864
    FMUL float ptr [EDI]                ; 0044a868
    FLD float ptr [ESP + 0x28]          ; 0044a86a
    FXCH                                ; 0044a86e
    FSTP float ptr [ESP + 0x9c]         ; 0044a870
    FMUL float ptr [EDI]                ; 0044a877
    FLD float ptr [ESP + 0x2c]          ; 0044a879
    FXCH                                ; 0044a87d
    FSTP float ptr [ESP + 0xa0]         ; 0044a87f
    FMUL float ptr [EDI]                ; 0044a886
    FSTP float ptr [ESP + 0xa4]         ; 0044a888
    FLD float ptr [ECX]                 ; 0044a88f
    FADD float ptr [ESP + 0x9c]         ; 0044a891
    FLD float ptr [ECX + 0x4]           ; 0044a898
    FXCH                                ; 0044a89b
    FSTP float ptr [ECX]                ; 0044a89d
    FADD float ptr [ESP + 0xa0]         ; 0044a89f
    FLD float ptr [ECX + 0x8]           ; 0044a8a6
    FXCH                                ; 0044a8a9
    FSTP float ptr [ECX + 0x4]          ; 0044a8ab
    FADD float ptr [ESP + 0xa4]         ; 0044a8ae
    LEA EAX,[ESP + 0x54]                ; 0044a8b5
    FSTP float ptr [ECX + 0x8]          ; 0044a8b9
    CMP EDX,EAX                         ; 0044a8bc
    JZ 0x0044a8d4                       ; 0044a8be
        ;   XREF to: 0044a8d4 (CONDITIONAL_JUMP)  ; LAB_0044a8d4
    MOV EAX,dword ptr [ESP + 0x54]      ; 0044a8c0
    MOV dword ptr [EDX],EAX             ; 0044a8c4
    MOV EAX,dword ptr [ESP + 0x58]      ; 0044a8c6
    MOV dword ptr [EDX + 0x4],EAX       ; 0044a8ca
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0044a8cd
    MOV dword ptr [EDX + 0x8],EAX       ; 0044a8d1
    MOV dword ptr [EBX + 0x6c],0x1      ; 0044a8d4
        ;   Label: LAB_0044a8d4
    JMP 0x0044a1c1                      ; 0044a8db
        ;   XREF to: 0044a1c1 (UNCONDITIONAL_JUMP)  ; LAB_0044a1c1
    XOR EAX,EAX                         ; 0044a8e0
        ;   Label: LAB_0044a8e0
    MOV dword ptr [ESP + 0x58],EAX      ; 0044a8e2
    MOV dword ptr [ESP + 0x54],EAX      ; 0044a8e6
    MOV dword ptr [ESP + 0x5c],EAX      ; 0044a8ea
    JMP 0x0044a7ee                      ; 0044a8ee
        ;   XREF to: 0044a7ee (UNCONDITIONAL_JUMP)  ; LAB_0044a7ee
    MOV EAX,dword ptr [ESP + 0xc]       ; 0044a8f3
        ;   Label: LAB_0044a8f3
    MOV dword ptr [ESP + 0x78],EAX      ; 0044a8f7
    MOV EAX,dword ptr [ESP + 0x10]      ; 0044a8fb
    MOV dword ptr [ESP + 0x7c],EAX      ; 0044a8ff
    MOV EAX,dword ptr [ESP + 0x14]      ; 0044a903
    MOV dword ptr [ESP + 0x80],EAX      ; 0044a907
    JMP 0x0044a27f                      ; 0044a90e
        ;   XREF to: 0044a27f (UNCONDITIONAL_JUMP)  ; LAB_0044a27f

