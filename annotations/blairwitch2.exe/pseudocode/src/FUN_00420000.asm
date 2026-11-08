; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00420000(int param_1,float param_2)
;
;
; XREF[1]:
;   FUN_0041f390 at 0041f3d0
;
; Referenced Globals:
;   undefined4 DAT_005cca21
;   undefined4 DAT_005cca29
;   undefined4 DAT_005f3e34
;
; Called Functions:
;   FUN_0041fad0
;   FUN_004203a0
;   FUN_00420840
;   FUN_00421a00
;   FUN_00421b10
;   FUN_00421dd0
;   FUN_00423a60
;   FUN_00449280
;   FUN_00449530
;   FUN_00513650
;   FUN_00513ea0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00420000
        ;   Label: FUN_00420000
    PUSH ESI                            ; 00420001
    PUSH EDI                            ; 00420002
    PUSH EBP                            ; 00420003
    MOV EBP,ESP                         ; 00420004
    SUB ESP,0xd8                        ; 00420006
    AND ESP,0xfffffff8                  ; 0042000c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042000f
    PUSH dword ptr [EBP + 0x18]         ; 00420012
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00420015
    PUSH EBX                            ; 0042001b
    CALL dword ptr [EAX + 0x150]        ; 0042001c
    ADD ESP,0x8                         ; 00420022
    MOV EDX,dword ptr [EBX + 0x1e4d8]   ; 00420025
    XOR ECX,ECX                         ; 0042002b
    TEST EDX,EDX                        ; 0042002d
    JZ 0x00420120                       ; 0042002f
        ;   XREF to: 00420120 (CONDITIONAL_JUMP)  ; LAB_00420120
    MOV ESI,dword ptr [EBX + 0x10a78]   ; 00420035
    TEST ESI,ESI                        ; 0042003b
    JZ 0x00420120                       ; 0042003d
        ;   XREF to: 00420120 (CONDITIONAL_JUMP)  ; LAB_00420120
    LEA EDX,[EBX + 0x20]                ; 00420043
    LEA EDI,[ESP + 0x4c]                ; 00420046
    FLD float ptr [EDX]                 ; 0042004a
    FLD float ptr [EDX + 0x4]           ; 0042004c
    FLD float ptr [EDX + 0x8]           ; 0042004f
    FXCH ST2                            ; 00420052
    FSUB float ptr [ESI + 0x20]         ; 00420054
    FXCH                                ; 00420057
    FSUB float ptr [ESI + 0x24]         ; 00420059
    FXCH ST2                            ; 0042005c
    FSUB float ptr [ESI + 0x28]         ; 0042005e
    FXCH                                ; 00420061
    FSTP float ptr [ESP + 0x70]         ; 00420063
    FXCH                                ; 00420067
    FSTP float ptr [ESP + 0x74]         ; 00420069
    LEA ESI,[ESP + 0x70]                ; 0042006d
    FSTP float ptr [ESP + 0x78]         ; 00420071
    MOVSD ES:EDI,ESI                    ; 00420075
    MOVSD ES:EDI,ESI                    ; 00420076
    MOVSD ES:EDI,ESI                    ; 00420077
    FLD float ptr [ESP + 0x50]          ; 00420078
    FABS                                ; 0042007c
    FCOMP double ptr [0x005cca21]       ; 0042007e | DAT_005cca21
    FNSTSW AX                           ; 00420084
    SAHF                                ; 00420086
    JNC 0x00420120                      ; 00420087
        ;   XREF to: 00420120 (CONDITIONAL_JUMP)  ; LAB_00420120
    FLD float ptr [ESP + 0x4c]          ; 0042008d
    FABS                                ; 00420091
    FCOMP double ptr [0x005cca21]       ; 00420093 | DAT_005cca21
    FNSTSW AX                           ; 00420099
    SAHF                                ; 0042009b
    JNC 0x00420120                      ; 0042009c
        ;   XREF to: 00420120 (CONDITIONAL_JUMP)  ; LAB_00420120
    FLD float ptr [ESP + 0x54]          ; 004200a2
    FABS                                ; 004200a6
    FCOMP double ptr [0x005cca21]       ; 004200a8 | DAT_005cca21
    FNSTSW AX                           ; 004200ae
    SAHF                                ; 004200b0
    JNC 0x00420120                      ; 004200b1
        ;   XREF to: 00420120 (CONDITIONAL_JUMP)  ; LAB_00420120
    PUSH EBX                            ; 004200b7
        ;   Label: LAB_004200b7
    CALL FUN_0041fad0                   ; 004200b8
        ;   XREF to: 0041fad0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041fad0()
    ADD ESP,0x4                         ; 004200bd
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 004200c0
    PUSH EDX                            ; 004200c6
    PUSH EBX                            ; 004200c7
    CALL FUN_00421b10                   ; 004200c8
        ;   XREF to: 00421b10 (UNCONDITIONAL_CALL)  ; undefined FUN_00421b10()
    MOV ECX,dword ptr [EBX + 0x10af8]   ; 004200cd
    ADD ESP,0x8                         ; 004200d3
    CMP ECX,0x1                         ; 004200d6
    JZ 0x00420385                       ; 004200d9
        ;   XREF to: 00420385 (CONDITIONAL_JUMP)  ; LAB_00420385
    MOV ESI,dword ptr [EBX + 0x10afc]   ; 004200df
        ;   Label: LAB_004200df
    XOR EDI,EDI                         ; 004200e5
    TEST ESI,ESI                        ; 004200e7
    JLE 0x00420110                      ; 004200e9
        ;   XREF to: 00420110 (CONDITIONAL_JUMP)  ; LAB_00420110
    LEA ESI,[EBX + 0x10b00]             ; 004200eb
    PUSH 0x0                            ; 004200f1
        ;   Label: LAB_004200f1
    PUSH dword ptr [EBP + 0x18]         ; 004200f3
    PUSH ESI                            ; 004200f6
    PUSH EBX                            ; 004200f7
    INC EDI                             ; 004200f8
    CALL FUN_00420840                   ; 004200f9
        ;   XREF to: 00420840 (UNCONDITIONAL_CALL)  ; undefined FUN_00420840()
    ADD ESI,0x40                        ; 004200fe
    MOV EAX,dword ptr [EBX + 0x10afc]   ; 00420101
    ADD ESP,0x10                        ; 00420107
    CMP EDI,EAX                         ; 0042010a
    JL 0x004200f1                       ; 0042010c
        ;   XREF to: 004200f1 (CONDITIONAL_JUMP)  ; LAB_004200f1
    MOV EAX,EAX                         ; 0042010e
    PUSH EBX                            ; 00420110
        ;   Label: LAB_00420110
    CALL FUN_00421a00                   ; 00420111
        ;   XREF to: 00421a00 (UNCONDITIONAL_CALL)  ; undefined FUN_00421a00()
    ADD ESP,0x4                         ; 00420116
    MOV ESP,EBP                         ; 00420119
    POP EBP                             ; 0042011b
    POP EDI                             ; 0042011c
    POP ESI                             ; 0042011d
    POP EBX                             ; 0042011e
    RET                                 ; 0042011f
    TEST ECX,ECX                        ; 00420120
        ;   Label: LAB_00420120
    JNZ 0x004200b7                      ; 00420122
        ;   XREF to: 004200b7 (CONDITIONAL_JUMP)  ; LAB_004200b7
    CMP dword ptr [EBX + 0x1e4d4],0x0   ; 00420124
    JZ 0x00420377                       ; 0042012b
        ;   XREF to: 00420377 (CONDITIONAL_JUMP)  ; LAB_00420377
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 00420131
    TEST EAX,EAX                        ; 00420137
    JZ 0x00420377                       ; 00420139
        ;   XREF to: 00420377 (CONDITIONAL_JUMP)  ; LAB_00420377
    PUSH EAX                            ; 0042013f
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 00420140
    CALL dword ptr [EDX + 0xcc]         ; 00420146
    ADD ESP,0x4                         ; 0042014c
    MOV EDX,EAX                         ; 0042014f
    TEST EAX,EAX                        ; 00420151
    JNZ 0x00420169                      ; 00420153
        ;   XREF to: 00420169 (CONDITIONAL_JUMP)  ; LAB_00420169
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 00420155
    ADD EAX,0x20                        ; 0042015b
    PUSH EAX                            ; 0042015e
    CALL FUN_00513ea0                   ; 0042015f
        ;   XREF to: 00513ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00513ea0()
    ADD ESP,0x4                         ; 00420164
    MOV EDX,EAX                         ; 00420167
    MOV ECX,dword ptr [EBX + 0x6c]      ; 00420169
        ;   Label: LAB_00420169
    PUSH ECX                            ; 0042016c
    LEA EAX,[ESP + 0x5c]                ; 0042016d
    PUSH EAX                            ; 00420171
    LEA EAX,[EBX + 0x20]                ; 00420172
    PUSH EAX                            ; 00420175
    PUSH EDX                            ; 00420176
    MOV dword ptr [ESP + 0xe0],EAX      ; 00420177
    CALL FUN_00513650                   ; 0042017e
        ;   XREF to: 00513650 (UNCONDITIONAL_CALL)  ; undefined FUN_00513650()
    ADD ESP,0x10                        ; 00420183
    TEST EAX,EAX                        ; 00420186
    JZ 0x00420377                       ; 00420188
        ;   XREF to: 00420377 (CONDITIONAL_JUMP)  ; LAB_00420377
    LEA EAX,[ESP + 0x58]                ; 0042018e
    PUSH EAX                            ; 00420192
    LEA EAX,[ESP + 0x4]                 ; 00420193
    PUSH EAX                            ; 00420197
    CALL FUN_00449280                   ; 00420198
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; undefined FUN_00449280()
    ADD ESP,0x8                         ; 0042019d
    FLD float ptr [0x005f3e34]          ; 004201a0 | DAT_005f3e34
    FMUL float ptr [EBP + 0x18]         ; 004201a6
    FSTP float ptr [ESP + 0xd4]         ; 004201a9
    MOV EAX,dword ptr [ESP + 0xd4]      ; 004201b0
    LEA ESI,[ESP + 0x34]                ; 004201b7
    MOV dword ptr [ESP + 0x84],EAX      ; 004201bb
    LEA EAX,[ESP + 0x7c]                ; 004201c2
    XOR EDI,EDI                         ; 004201c6
    PUSH EAX                            ; 004201c8
    LEA EAX,[ESP + 0x4]                 ; 004201c9
    MOV dword ptr [ESP + 0x80],EDI      ; 004201cd
    PUSH EAX                            ; 004201d4
    MOV dword ptr [ESP + 0x88],EDI      ; 004201d5
    LEA EDI,[ESP + 0xb4]                ; 004201dc
    CALL FUN_00449530                   ; 004201e3
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined FUN_00449530()
    LEA ESI,[ESP + 0x3c]                ; 004201e8
    ADD ESP,0x8                         ; 004201ec
    LEA EAX,[ESP + 0xac]                ; 004201ef
    MOVSD ES:EDI,ESI                    ; 004201f6
    MOVSD ES:EDI,ESI                    ; 004201f7
    MOVSD ES:EDI,ESI                    ; 004201f8
    PUSH EAX                            ; 004201f9
    LEA EDI,[ESP + 0x98]                ; 004201fa
    LEA ESI,[EBX + 0x20]                ; 00420201
    PUSH EBX                            ; 00420204
    MOVSD ES:EDI,ESI                    ; 00420205
    MOVSD ES:EDI,ESI                    ; 00420206
    MOVSD ES:EDI,ESI                    ; 00420207
    CALL FUN_00423a60                   ; 00420208
        ;   XREF to: 00423a60 (UNCONDITIONAL_CALL)  ; undefined FUN_00423a60()
    LEA EDI,[ESP + 0xa8]                ; 0042020d
    ADD ESP,0x8                         ; 00420214
    LEA ESI,[EBX + 0x20]                ; 00420217
    MOV EAX,dword ptr [ESP + 0x94]      ; 0042021a
    MOV EDX,dword ptr [ESP + 0xd0]      ; 00420221
    MOVSD ES:EDI,ESI                    ; 00420228
    MOVSD ES:EDI,ESI                    ; 00420229
    MOVSD ES:EDI,ESI                    ; 0042022a
    MOV dword ptr [EDX],EAX             ; 0042022b
    MOV EAX,dword ptr [ESP + 0x98]      ; 0042022d
    MOV dword ptr [EDX + 0x4],EAX       ; 00420234
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00420237
    LEA EDI,[ESP + 0xb8]                ; 0042023e
    MOV dword ptr [EDX + 0x8],EAX       ; 00420245
    LEA ESI,[ESP + 0x28]                ; 00420248
    FLD float ptr [ESP + 0xa0]          ; 0042024c
    FLD float ptr [ESP + 0xa4]          ; 00420253
    FLD float ptr [ESP + 0xa8]          ; 0042025a
    FXCH ST2                            ; 00420261
    FSUB float ptr [EDX]                ; 00420263
    FXCH                                ; 00420265
    FSUB float ptr [EDX + 0x4]          ; 00420267
    FXCH ST2                            ; 0042026a
    FSUB float ptr [EDX + 0x8]          ; 0042026c
    FXCH                                ; 0042026f
    FSTP float ptr [ESP + 0x28]         ; 00420271
    FXCH                                ; 00420275
    FSTP float ptr [ESP + 0x2c]         ; 00420277
    FSTP float ptr [ESP + 0x30]         ; 0042027b
    LEA EDX,[EBX + 0x1e608]             ; 0042027f
    MOVSD ES:EDI,ESI                    ; 00420285
    MOVSD ES:EDI,ESI                    ; 00420286
    MOVSD ES:EDI,ESI                    ; 00420287
    LEA EAX,[EBX + 0x1e614]             ; 00420288
    FLD float ptr [EDX]                 ; 0042028e
    FLD float ptr [EDX + 0x4]           ; 00420290
    FLD float ptr [EDX + 0x8]           ; 00420293
    LEA EDI,[ESP + 0x88]                ; 00420296
    LEA ESI,[ESP + 0x64]                ; 0042029d
    FXCH ST2                            ; 004202a1
    FADD float ptr [EAX]                ; 004202a3
    FXCH                                ; 004202a5
    FADD float ptr [EAX + 0x4]          ; 004202a7
    FXCH ST2                            ; 004202aa
    FADD float ptr [EAX + 0x8]          ; 004202ac
    FXCH                                ; 004202af
    FSTP float ptr [ESP + 0x64]         ; 004202b1
    FXCH                                ; 004202b5
    FSTP float ptr [ESP + 0x68]         ; 004202b7
    FSTP float ptr [ESP + 0x6c]         ; 004202bb
    MOVSD ES:EDI,ESI                    ; 004202bf
    MOVSD ES:EDI,ESI                    ; 004202c0
    MOVSD ES:EDI,ESI                    ; 004202c1
    FLD float ptr [0x005cca29]          ; 004202c2 | DAT_005cca29
    FLD float ptr [ESP + 0x88]          ; 004202c8
    FMUL ST1                            ; 004202cf
    FLD float ptr [ESP + 0x8c]          ; 004202d1
    FMUL ST2                            ; 004202d8
    FLD float ptr [ESP + 0x90]          ; 004202da
    FMULP ST3                           ; 004202e1
    LEA EDI,[ESP + 0x40]                ; 004202e3
    LEA ESI,[ESP + 0xc4]                ; 004202e7
    FXCH                                ; 004202ee
    FSTP float ptr [ESP + 0xc4]         ; 004202f0
    FSTP float ptr [ESP + 0xc8]         ; 004202f7
    FSTP float ptr [ESP + 0xcc]         ; 004202fe
    MOVSD ES:EDI,ESI                    ; 00420305
    MOVSD ES:EDI,ESI                    ; 00420306
    MOVSD ES:EDI,ESI                    ; 00420307
    MOV EAX,dword ptr [ESP + 0x44]      ; 00420308
    FLD float ptr [EDX]                 ; 0042030c
    MOV dword ptr [ESP + 0xbc],EAX      ; 0042030e
    FCOMP float ptr [ESP + 0xb8]        ; 00420315
    FNSTSW AX                           ; 0042031c
    SAHF                                ; 0042031e
    JA 0x00420377                       ; 0042031f
        ;   XREF to: 00420377 (CONDITIONAL_JUMP)  ; LAB_00420377
    FLD float ptr [EDX + 0x4]           ; 00420321
    FCOMP float ptr [ESP + 0x44]        ; 00420324
    FNSTSW AX                           ; 00420328
    SAHF                                ; 0042032a
    JA 0x00420377                       ; 0042032b
        ;   XREF to: 00420377 (CONDITIONAL_JUMP)  ; LAB_00420377
    FLD float ptr [EDX + 0x8]           ; 0042032d
    FCOMP float ptr [ESP + 0xc0]        ; 00420330
    FNSTSW AX                           ; 00420337
    SAHF                                ; 00420339
    JA 0x00420377                       ; 0042033a
        ;   XREF to: 00420377 (CONDITIONAL_JUMP)  ; LAB_00420377
    FLD float ptr [EDX + 0xc]           ; 0042033c
    FCOMP float ptr [ESP + 0xb8]        ; 0042033f
    FNSTSW AX                           ; 00420346
    SAHF                                ; 00420348
    JC 0x00420377                       ; 00420349
        ;   XREF to: 00420377 (CONDITIONAL_JUMP)  ; LAB_00420377
    FLD float ptr [EDX + 0x10]          ; 0042034b
    FCOMP float ptr [ESP + 0x44]        ; 0042034e
    FNSTSW AX                           ; 00420352
    SAHF                                ; 00420354
    JC 0x00420377                       ; 00420355
        ;   XREF to: 00420377 (CONDITIONAL_JUMP)  ; LAB_00420377
    FLD float ptr [EDX + 0x14]          ; 00420357
    FCOMP float ptr [ESP + 0xc0]        ; 0042035a
    FNSTSW AX                           ; 00420361
    SAHF                                ; 00420363
    JC 0x00420377                       ; 00420364
        ;   XREF to: 00420377 (CONDITIONAL_JUMP)  ; LAB_00420377
    LEA EAX,[ESP + 0xa0]                ; 00420366
    PUSH EAX                            ; 0042036d
    PUSH EBX                            ; 0042036e
    CALL FUN_00421dd0                   ; 0042036f
        ;   XREF to: 00421dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00421dd0()
    ADD ESP,0x8                         ; 00420374
    PUSH EBX                            ; 00420377
        ;   Label: LAB_00420377
    CALL FUN_0041fad0                   ; 00420378
        ;   XREF to: 0041fad0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041fad0()
    ADD ESP,0x4                         ; 0042037d
    JMP 0x004200df                      ; 00420380
        ;   XREF to: 004200df (UNCONDITIONAL_JUMP)  ; LAB_004200df
    PUSH dword ptr [EBP + 0x18]         ; 00420385
        ;   Label: LAB_00420385
    PUSH EBX                            ; 00420388
    CALL FUN_004203a0                   ; 00420389
        ;   XREF to: 004203a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004203a0()
    ADD ESP,0x8                         ; 0042038e
    MOV ESP,EBP                         ; 00420391
    POP EBP                             ; 00420393
    POP EDI                             ; 00420394
    POP ESI                             ; 00420395
    POP EBX                             ; 00420396
    RET                                 ; 00420397

