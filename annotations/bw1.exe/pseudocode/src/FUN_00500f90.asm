; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00500f90(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005e6efa
;   undefined4 DAT_005e6f02
;   undefined4 DAT_005e6f0a
;   undefined4 DAT_005e6f12
;   undefined4 DAT_00603014
;   undefined4 DAT_00612560
;   undefined4 DAT_0061c010
;   undefined4 DAT_01bc120c
;
; Called Functions:
;   FUN_00408ac0
;   FUN_00408b40
;   FUN_0040cc00
;   FUN_00483e60
;   FUN_004b59e0
;   FUN_004b60e0
;   FUN_005adf90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00500f90
        ;   Label: FUN_00500f90
    PUSH ESI                            ; 00500f91
    PUSH EDI                            ; 00500f92
    PUSH EBP                            ; 00500f93
    MOV EBP,ESP                         ; 00500f94
    SUB ESP,0x124                       ; 00500f96
    AND ESP,0xfffffff8                  ; 00500f9c
    MOV EDX,dword ptr [0x00612560]      ; 00500f9f | DAT_00612560
    PUSH EDX                            ; 00500fa5 | DAT_01bc120c
    CALL FUN_00483e60                   ; 00500fa6
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00483e60()
    ADD ESP,0x4                         ; 00500fab
    TEST EAX,EAX                        ; 00500fae
    JNZ 0x005014c0                      ; 00500fb0
        ;   XREF to: 005014c0 (CONDITIONAL_JUMP)  ; LAB_005014c0
    MOV EAX,dword ptr [EBP + 0x14]      ; 00500fb6
    CMP dword ptr [EAX + 0x588],0x0     ; 00500fb9
    JZ 0x005014c7                       ; 00500fc0
        ;   XREF to: 005014c7 (CONDITIONAL_JUMP)  ; LAB_005014c7
    MOV ESI,dword ptr [EBP + 0x14]      ; 00500fc6
    MOV EAX,dword ptr [EAX + 0x154]     ; 00500fc9
    PUSH ESI                            ; 00500fcf
    LEA ESI,[ESP + 0x74]                ; 00500fd0
    LEA EDI,[ESP + 0x20]                ; 00500fd4
    CALL dword ptr [EAX + 0xe0]         ; 00500fd8
    LEA ESI,[ESP + 0x74]                ; 00500fde
    ADD ESP,0x4                         ; 00500fe2
    LEA EAX,[ESP + 0x1c]                ; 00500fe5
    MOVSD ES:EDI,ESI                    ; 00500fe9
    MOVSD ES:EDI,ESI                    ; 00500fea
    MOVSD ES:EDI,ESI                    ; 00500feb
    PUSH EAX                            ; 00500fec
    MOV EDI,dword ptr [EBP + 0x14]      ; 00500fed
    PUSH EDI                            ; 00500ff0
    LEA ESI,[ESP + 0xc]                 ; 00500ff1
    CALL FUN_00408b40                   ; 00500ff5
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    LEA EDI,[ESP + 0xcc]                ; 00500ffa
    ADD ESP,0x8                         ; 00501001
    LEA ESI,[ESP + 0x4]                 ; 00501004
    MOV EAX,dword ptr [EBP + 0x14]      ; 00501008
    MOVSD ES:EDI,ESI                    ; 0050100b
    MOVSD ES:EDI,ESI                    ; 0050100c
    MOVSD ES:EDI,ESI                    ; 0050100d
    MOV EAX,dword ptr [EAX + 0x2e8]     ; 0050100e
    MOV dword ptr [ESP + 0x110],EAX     ; 00501014
    XOR EAX,EAX                         ; 0050101b
    MOV dword ptr [ESP + 0xac],EAX      ; 0050101d
    MOV dword ptr [ESP + 0xb0],EAX      ; 00501024
    MOV EAX,dword ptr [ESP + 0x110]     ; 0050102b
    MOV dword ptr [ESP + 0xb4],EAX      ; 00501032
    LEA EAX,[ESP + 0xac]                ; 00501039
    PUSH EAX                            ; 00501040
    MOV ECX,dword ptr [EBP + 0x14]      ; 00501041
    LEA EBX,[ESP + 0x8c]                ; 00501044
    PUSH ECX                            ; 0050104b
    LEA ESI,[ESP + 0xe4]                ; 0050104c
    LEA EDI,[ESP + 0x18]                ; 00501053
    CALL FUN_00408ac0                   ; 00501057
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408ac0()
    LEA ESI,[ESP + 0xe4]                ; 0050105c
    ADD ESP,0x8                         ; 00501063
    LEA EAX,[ESP + 0xf4]                ; 00501066
    FLD float ptr [ESP + 0xc4]          ; 0050106d
    FLD float ptr [ESP + 0xc8]          ; 00501074
    MOVSD ES:EDI,ESI                    ; 0050107b
    MOVSD ES:EDI,ESI                    ; 0050107c
    MOVSD ES:EDI,ESI                    ; 0050107d
    FLD float ptr [ESP + 0xcc]          ; 0050107e
    FLD float ptr [ESP + 0x10]          ; 00501085
    FLD float ptr [ESP + 0x14]          ; 00501089
    FLD float ptr [ESP + 0x18]          ; 0050108d
    LEA EDI,[ESP + 0x4c]                ; 00501091
    LEA ESI,[ESP + 0xb8]                ; 00501095
    FXCH ST2                            ; 0050109c
    FCHS                                ; 0050109e
    FXCH                                ; 005010a0
    FCHS                                ; 005010a2
    FXCH ST2                            ; 005010a4
    FCHS                                ; 005010a6
    FXCH ST5                            ; 005010a8
    FADD float ptr [ESP + 0x10]         ; 005010aa
    FXCH ST4                            ; 005010ae
    FADD float ptr [ESP + 0x14]         ; 005010b0
    FXCH ST3                            ; 005010b4
    FADD float ptr [ESP + 0x18]         ; 005010b6
    FXCH                                ; 005010ba
    FSTP float ptr [ESP + 0x58]         ; 005010bc
    FXCH ST3                            ; 005010c0
    FSTP float ptr [ESP + 0xb8]         ; 005010c2
    FXCH                                ; 005010c9
    FSTP float ptr [ESP + 0xbc]         ; 005010cb
    FXCH                                ; 005010d2
    FSTP float ptr [ESP + 0xc0]         ; 005010d4
    MOVSD ES:EDI,ESI                    ; 005010db
    MOVSD ES:EDI,ESI                    ; 005010dc
    MOVSD ES:EDI,ESI                    ; 005010dd
    FSTP float ptr [ESP + 0x5c]         ; 005010de
    LEA EDI,[ESP + 0xf4]                ; 005010e2
    LEA ESI,[ESP + 0x58]                ; 005010e9
    FSTP float ptr [ESP + 0x60]         ; 005010ed
    MOVSD ES:EDI,ESI                    ; 005010f1
    MOVSD ES:EDI,ESI                    ; 005010f2
    MOVSD ES:EDI,ESI                    ; 005010f3
    CMP EBX,EAX                         ; 005010f4
    JZ 0x00501122                       ; 005010f6
        ;   XREF to: 00501122 (CONDITIONAL_JUMP)  ; LAB_00501122
    MOV EAX,dword ptr [ESP + 0xf4]      ; 005010f8
    MOV dword ptr [ESP + 0x88],EAX      ; 005010ff
    MOV EAX,dword ptr [ESP + 0xf8]      ; 00501106
    MOV dword ptr [ESP + 0x8c],EAX      ; 0050110d
    MOV EAX,dword ptr [ESP + 0xfc]      ; 00501114
    MOV dword ptr [ESP + 0x90],EAX      ; 0050111b
    FLD float ptr [ESP + 0x8c]          ; 00501122
        ;   Label: LAB_00501122
    FMUL ST0                            ; 00501129
    FLD float ptr [ESP + 0x88]          ; 0050112b
    FMUL ST0                            ; 00501132
    FADDP                               ; 00501134
    FLD float ptr [ESP + 0x90]          ; 00501136
    FMUL ST0                            ; 0050113d
    FADDP                               ; 0050113f
    FSQRT                               ; 00501141
    FLDZ                                ; 00501143
    FXCH                                ; 00501145
    FSTP float ptr [ESP + 0x118]        ; 00501147
    FCOMP float ptr [ESP + 0x118]       ; 0050114e
    FNSTSW AX                           ; 00501155
    SAHF                                ; 00501157
    JNC 0x005014d7                      ; 00501158
        ;   XREF to: 005014d7 (CONDITIONAL_JUMP)  ; LAB_005014d7
    FLD1                                ; 0050115e
    FLD float ptr [ESP + 0x88]          ; 00501160
    FXCH                                ; 00501167
    FDIV float ptr [ESP + 0x118]        ; 00501169
    FXCH                                ; 00501170
    FMUL ST1                            ; 00501172
    FLD float ptr [ESP + 0x8c]          ; 00501174
    FMUL ST2                            ; 0050117b
    FLD float ptr [ESP + 0x90]          ; 0050117d
    FMULP ST3                           ; 00501184
    FXCH                                ; 00501186
    FSTP float ptr [ESP + 0x88]         ; 00501188
    FSTP float ptr [ESP + 0x8c]         ; 0050118f
    FSTP float ptr [ESP + 0x90]         ; 00501196
    FLD float ptr [0x00603014]          ; 0050119d | DAT_00603014
        ;   Label: LAB_0050119d
    FDIVR double ptr [0x005e6efa]       ; 005011a3 | DAT_005e6efa
    FLD1                                ; 005011a9
    FPATAN                              ; 005011ab
    MOV EDX,dword ptr [EBP + 0x14]      ; 005011ad
    LEA ESI,[ESP + 0xe8]                ; 005011b0
    MOV EAX,dword ptr [EBP + 0x14]      ; 005011b7
    LEA EDI,[ESP + 0xd0]                ; 005011ba
    PUSH EDX                            ; 005011c1
    MOV EAX,dword ptr [EAX + 0x154]     ; 005011c2
    FSTP float ptr [ESP + 0x4]          ; 005011c8
    CALL dword ptr [EAX + 0xe0]         ; 005011cc
    LEA ESI,[ESP + 0xec]                ; 005011d2
    ADD ESP,0x4                         ; 005011d9
    LEA EAX,[ESP + 0xd0]                ; 005011dc
    MOV ECX,dword ptr [EBP + 0x14]      ; 005011e3
    PUSH EAX                            ; 005011e6
    MOVSD ES:EDI,ESI                    ; 005011e7
    MOVSD ES:EDI,ESI                    ; 005011e8
    MOVSD ES:EDI,ESI                    ; 005011e9
    PUSH ECX                            ; 005011ea
    LEA ESI,[ESP + 0x3c]                ; 005011eb
    CALL FUN_00408b40                   ; 005011ef
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    ADD ESP,0x8                         ; 005011f4
    PUSH dword ptr [ESP]                ; 005011f7
    PUSH 0x0                            ; 005011fa
    PUSH 0x0                            ; 005011fc
    PUSH 0xff                           ; 005011fe
    LEA EAX,[ESP + 0x5c]                ; 00501203
    PUSH 0x3f800000                     ; 00501207
    PUSH EAX                            ; 0050120c
    LEA EAX,[ESP + 0xdc]                ; 0050120d
    PUSH EAX                            ; 00501214
    MOV EBX,dword ptr [0x0061c010]      ; 00501215 | DAT_0061c010
    PUSH EBX                            ; 0050121b
    CALL FUN_004b60e0                   ; 0050121c
        ;   XREF to: 004b60e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b60e0()
    ADD ESP,0x20                        ; 00501221
    MOV EAX,dword ptr [EBP + 0x14]      ; 00501224
    CMP dword ptr [EAX + 0x588],0x0     ; 00501227
    JZ 0x005014c0                       ; 0050122e
        ;   XREF to: 005014c0 (CONDITIONAL_JUMP)  ; LAB_005014c0
    MOV EBX,0x1                         ; 00501234
    MOV dword ptr [EAX + 0x588],0x0     ; 00501239
    XOR ESI,ESI                         ; 00501243
    FLD float ptr [ESP]                 ; 00501245
        ;   Label: LAB_00501245
    FMUL double ptr [0x005e6f02]        ; 00501248 | DAT_005e6f02
    MOV dword ptr [ESP + 0x120],EBX     ; 0050124e
    FILD dword ptr [ESP + 0x120]        ; 00501255
    FMULP                               ; 0050125c
    SUB ESP,0x4                         ; 0050125e
    FSTP float ptr [ESP]                ; 00501261
    PUSH ESI                            ; 00501264
    PUSH ESI                            ; 00501265
    PUSH 0xff                           ; 00501266
    LEA EAX,[ESP + 0x5c]                ; 0050126b
    PUSH 0x3f800000                     ; 0050126f
    PUSH EAX                            ; 00501274
    LEA EAX,[ESP + 0xdc]                ; 00501275
    PUSH EAX                            ; 0050127c
    MOV EDI,dword ptr [0x0061c010]      ; 0050127d | DAT_0061c010
    PUSH EDI                            ; 00501283
    INC EBX                             ; 00501284
    CALL FUN_004b60e0                   ; 00501285
        ;   XREF to: 004b60e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b60e0()
    ADD ESP,0x20                        ; 0050128a
    CMP EBX,0xa                         ; 0050128d
    JL 0x00501245                       ; 00501290
        ;   XREF to: 00501245 (CONDITIONAL_JUMP)  ; LAB_00501245
    FLD float ptr [ESP + 0x4c]          ; 00501292
    FLD float ptr [ESP + 0x50]          ; 00501296
    FLD float ptr [ESP + 0x54]          ; 0050129a
    LEA EDI,[ESP + 0x40]                ; 0050129e
    LEA ESI,[ESP + 0xc4]                ; 005012a2
    FXCH ST2                            ; 005012a9
    FSUB float ptr [ESP + 0xc4]         ; 005012ab
    FXCH                                ; 005012b2
    FSUB float ptr [ESP + 0xc8]         ; 005012b4
    FXCH ST2                            ; 005012bb
    FSUB float ptr [ESP + 0xcc]         ; 005012bd
    MOVSD ES:EDI,ESI                    ; 005012c4
    MOVSD ES:EDI,ESI                    ; 005012c5
    MOVSD ES:EDI,ESI                    ; 005012c6
    FXCH                                ; 005012c7
    FSTP float ptr [ESP + 0x7c]         ; 005012c9
    FXCH                                ; 005012cd
    FSTP float ptr [ESP + 0x80]         ; 005012cf
    LEA EDI,[ESP + 0xa0]                ; 005012d6
    LEA ESI,[ESP + 0x7c]                ; 005012dd
    FSTP float ptr [ESP + 0x84]         ; 005012e1
    MOVSD ES:EDI,ESI                    ; 005012e8
    MOVSD ES:EDI,ESI                    ; 005012e9
    MOVSD ES:EDI,ESI                    ; 005012ea
    FLD float ptr [ESP + 0xa4]          ; 005012eb
    FMUL ST0                            ; 005012f2
    FLD float ptr [ESP + 0xa0]          ; 005012f4
    FMUL ST0                            ; 005012fb
    FADDP                               ; 005012fd
    FLD float ptr [ESP + 0xa8]          ; 005012ff
    FMUL ST0                            ; 00501306
    FADDP                               ; 00501308
    FSQRT                               ; 0050130a
    FLDZ                                ; 0050130c
    FXCH                                ; 0050130e
    FSTP float ptr [ESP + 0x114]        ; 00501310
    FCOMP float ptr [ESP + 0x114]       ; 00501317
    FNSTSW AX                           ; 0050131e
    SAHF                                ; 00501320
    JC 0x005014f3                       ; 00501321
        ;   XREF to: 005014f3 (CONDITIONAL_JUMP)  ; LAB_005014f3
    XOR EAX,EAX                         ; 00501327
    MOV dword ptr [ESP + 0xa4],EAX      ; 00501329
    MOV dword ptr [ESP + 0xa0],EAX      ; 00501330
    MOV dword ptr [ESP + 0xa8],EAX      ; 00501337
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050133e
        ;   Label: LAB_0050133e
    FLD float ptr [EAX + 0x594]         ; 00501341
    FMUL double ptr [0x005e6f0a]        ; 00501347 | DAT_005e6f0a
    FLD float ptr [ESP + 0xa0]          ; 0050134d
    FXCH                                ; 00501354
    FSTP float ptr [ESP + 0x11c]        ; 00501356
    FMUL float ptr [ESP + 0x11c]        ; 0050135d
    FLD float ptr [ESP + 0xa4]          ; 00501364
    FMUL float ptr [ESP + 0x11c]        ; 0050136b
    FLD float ptr [ESP + 0xa8]          ; 00501372
    FMUL float ptr [ESP + 0x11c]        ; 00501379
    LEA EDI,[ESP + 0x64]                ; 00501380
    LEA ESI,[ESP + 0x28]                ; 00501384
    LEA EBX,[ESP + 0xa0]                ; 00501388
    LEA EAX,[ESP + 0x64]                ; 0050138f
    FXCH ST2                            ; 00501393
    FSTP float ptr [ESP + 0x28]         ; 00501395
    FSTP float ptr [ESP + 0x2c]         ; 00501399
    FSTP float ptr [ESP + 0x30]         ; 0050139d
    MOVSD ES:EDI,ESI                    ; 005013a1
    MOVSD ES:EDI,ESI                    ; 005013a2
    MOVSD ES:EDI,ESI                    ; 005013a3
    CMP EBX,EAX                         ; 005013a4
    JNZ 0x00501537                      ; 005013a6
        ;   XREF to: 00501537 (CONDITIONAL_JUMP)  ; LAB_00501537
    XOR EBX,EBX                         ; 005013ac
        ;   Label: LAB_005013ac
    MOV ESI,0x1388                      ; 005013ae
    PUSH 0x40a00000                     ; 005013b3
        ;   Label: LAB_005013b3
    PUSH 0xc0a00000                     ; 005013b8
    CALL FUN_0040cc00                   ; 005013bd
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0x128],EAX     ; 005013c2
    FLD float ptr [ESP + 0x128]         ; 005013c9
    ADD ESP,0x8                         ; 005013d0
    MOV dword ptr [ESP + 0x120],EBX     ; 005013d3
    FILD dword ptr [ESP + 0x120]        ; 005013da
    FMUL double ptr [0x005e6f12]        ; 005013e1 | DAT_005e6f12
    FSTP double ptr [ESP + 0x100]       ; 005013e7
    FMUL double ptr [ESP + 0x100]       ; 005013ee
    PUSH 0x40a00000                     ; 005013f5
    PUSH 0xc0a00000                     ; 005013fa
    FSTP float ptr [ESP + 0x9c]         ; 005013ff
    CALL FUN_0040cc00                   ; 00501406
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0x128],EAX     ; 0050140b
    FLD float ptr [ESP + 0x128]         ; 00501412
    ADD ESP,0x8                         ; 00501419
    FMUL double ptr [ESP + 0x100]       ; 0050141c
    PUSH 0x40a00000                     ; 00501423
    PUSH 0xc0a00000                     ; 00501428
    FSTP float ptr [ESP + 0xa0]         ; 0050142d
    CALL FUN_0040cc00                   ; 00501434
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0x128],EAX     ; 00501439
    FLD float ptr [ESP + 0x128]         ; 00501440
    ADD ESP,0x8                         ; 00501447
    PUSH ESI                            ; 0050144a
    PUSH 0x3                            ; 0050144b
    PUSH ESI                            ; 0050144d
    PUSH 0xffdc                         ; 0050144e
    LEA EAX,[ESP + 0xa4]                ; 00501453
    PUSH EAX                            ; 0050145a
    LEA EAX,[ESP + 0x54]                ; 0050145b
    MOV EDI,dword ptr [0x0061c010]      ; 0050145f | DAT_0061c010
    PUSH EAX                            ; 00501465
    FMUL double ptr [ESP + 0x118]       ; 00501466
    PUSH EDI                            ; 0050146d
    FSTP float ptr [ESP + 0xb8]         ; 0050146e
    CALL FUN_004b59e0                   ; 00501475
        ;   XREF to: 004b59e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b59e0()
    ADD ESP,0x1c                        ; 0050147a
    INC EBX                             ; 0050147d
    FLD float ptr [ESP + 0x40]          ; 0050147e
    FLD float ptr [ESP + 0x44]          ; 00501482
    FLD float ptr [ESP + 0x48]          ; 00501486
    FXCH ST2                            ; 0050148a
    FADD float ptr [ESP + 0xa0]         ; 0050148c
    FXCH                                ; 00501493
    FADD float ptr [ESP + 0xa4]         ; 00501495
    FXCH ST2                            ; 0050149c
    FADD float ptr [ESP + 0xa8]         ; 0050149e
    FXCH                                ; 005014a5
    FSTP float ptr [ESP + 0x40]         ; 005014a7
    FXCH                                ; 005014ab
    FSTP float ptr [ESP + 0x44]         ; 005014ad
    FSTP float ptr [ESP + 0x48]         ; 005014b1
    CMP EBX,0x40                        ; 005014b5
    JL 0x005013b3                       ; 005014b8
        ;   XREF to: 005013b3 (CONDITIONAL_JUMP)  ; LAB_005013b3
    MOV EAX,EAX                         ; 005014be
    MOV ESP,EBP                         ; 005014c0
        ;   Label: LAB_005014c0
    POP EBP                             ; 005014c2
    POP EDI                             ; 005014c3
    POP ESI                             ; 005014c4
    POP EBX                             ; 005014c5
    RET                                 ; 005014c6
    PUSH EAX                            ; 005014c7
        ;   Label: LAB_005014c7
    CALL FUN_005adf90                   ; 005014c8
        ;   XREF to: 005adf90 (UNCONDITIONAL_CALL)  ; undefined FUN_005adf90()
    ADD ESP,0x4                         ; 005014cd
    MOV ESP,EBP                         ; 005014d0
    POP EBP                             ; 005014d2
    POP EDI                             ; 005014d3
    POP ESI                             ; 005014d4
    POP EBX                             ; 005014d5
    RET                                 ; 005014d6
    XOR EBX,EBX                         ; 005014d7
        ;   Label: LAB_005014d7
    MOV dword ptr [ESP + 0x8c],EBX      ; 005014d9
    MOV dword ptr [ESP + 0x88],EBX      ; 005014e0
    MOV dword ptr [ESP + 0x90],EBX      ; 005014e7
    JMP 0x0050119d                      ; 005014ee
        ;   XREF to: 0050119d (UNCONDITIONAL_JUMP)  ; LAB_0050119d
    FLD1                                ; 005014f3
        ;   Label: LAB_005014f3
    FLD float ptr [ESP + 0xa0]          ; 005014f5
    FXCH                                ; 005014fc
    FDIV float ptr [ESP + 0x114]        ; 005014fe
    FXCH                                ; 00501505
    FMUL ST1                            ; 00501507
    FLD float ptr [ESP + 0xa4]          ; 00501509
    FMUL ST2                            ; 00501510
    FLD float ptr [ESP + 0xa8]          ; 00501512
    FMULP ST3                           ; 00501519
    FXCH                                ; 0050151b
    FSTP float ptr [ESP + 0xa0]         ; 0050151d
    FSTP float ptr [ESP + 0xa4]         ; 00501524
    FSTP float ptr [ESP + 0xa8]         ; 0050152b
    JMP 0x0050133e                      ; 00501532
        ;   XREF to: 0050133e (UNCONDITIONAL_JUMP)  ; LAB_0050133e
    MOV EAX,dword ptr [ESP + 0x64]      ; 00501537
        ;   Label: LAB_00501537
    MOV dword ptr [ESP + 0xa0],EAX      ; 0050153b
    MOV EAX,dword ptr [ESP + 0x68]      ; 00501542
    MOV dword ptr [ESP + 0xa4],EAX      ; 00501546
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0050154d
    MOV dword ptr [ESP + 0xa8],EAX      ; 00501551
    JMP 0x005013ac                      ; 00501558
        ;   XREF to: 005013ac (UNCONDITIONAL_JUMP)  ; LAB_005013ac

