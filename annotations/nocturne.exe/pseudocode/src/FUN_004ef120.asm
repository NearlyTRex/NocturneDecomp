; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ef120(float *param_1)
;
; Local Variables:
; undefined8       Stack[-0xb0]:8  local_b0
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined        Stack[-0x74]:1  local_74
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined        Stack[-0x38]:1  local_38
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined4 DAT_0058cb88
;   undefined4 DAT_0058cb8c
;   undefined4 DAT_0058cb90
;   undefined4 DAT_005b9354
;   undefined4 DAT_01c77850
;   undefined4 DAT_01fba938
;
; Called Functions:
;   FUN_00467a00
;   FUN_0046b700
;   FUN_0046b7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ef120
        ;   Label: FUN_004ef120
    PUSH ESI                            ; 004ef121
    PUSH EDI                            ; 004ef122
    PUSH EBP                            ; 004ef123
    MOV EBP,ESP                         ; 004ef124
    SUB ESP,0xa0                        ; 004ef126
    AND ESP,0xfffffff8                  ; 004ef12c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004ef12f
    FLD float ptr [EBX + 0x18]          ; 004ef132
    FLDZ                                ; 004ef135
    FCOMPP                              ; 004ef137
    FNSTSW AX                           ; 004ef139
    SAHF                                ; 004ef13b
    JNC 0x004ef32e                      ; 004ef13c
        ;   XREF to: 004ef32e (CONDITIONAL_JUMP)  ; LAB_004ef32e
    LEA EAX,[EBX + 0x24]                ; 004ef142
    CMP EAX,EBX                         ; 004ef145
    JZ 0x004ef159                       ; 004ef147
        ;   XREF to: 004ef159 (CONDITIONAL_JUMP)  ; LAB_004ef159
    MOV EDX,dword ptr [EBX]             ; 004ef149
    MOV dword ptr [EAX],EDX             ; 004ef14b
    MOV EDX,dword ptr [EBX + 0x4]       ; 004ef14d
    MOV dword ptr [EAX + 0x4],EDX       ; 004ef150
    MOV EDX,dword ptr [EBX + 0x8]       ; 004ef153
    MOV dword ptr [EAX + 0x8],EDX       ; 004ef156
    MOV EAX,dword ptr [EBX + 0x20]      ; 004ef159
        ;   Label: LAB_004ef159
    MOV dword ptr [EBX + 0x30],EAX      ; 004ef15c
    MOV EAX,[0x005b9354]                ; 004ef15f | DAT_005b9354
    MOV EAX,dword ptr [EAX + 0x264]     ; 004ef164 | DAT_01c77850
    MOV dword ptr [ESP + 0x90],EAX      ; 004ef16a
    FLD float ptr [EBX + 0x1c]          ; 004ef171
    FMUL float ptr [ESP + 0x90]         ; 004ef174
    MOV dword ptr [ESP + 0x94],EAX      ; 004ef17b
    FADD float ptr [EBX + 0x10]         ; 004ef182
    LEA EAX,[EBX + 0xc]                 ; 004ef185
    FSTP float ptr [EBX + 0x10]         ; 004ef188
    FLD float ptr [EAX]                 ; 004ef18b
    FMUL float ptr [ESP + 0x90]         ; 004ef18d
    FSTP float ptr [ESP + 0x18]         ; 004ef194
    FLD float ptr [EAX + 0x4]           ; 004ef198
    FMUL float ptr [ESP + 0x90]         ; 004ef19b
    FSTP float ptr [ESP + 0x1c]         ; 004ef1a2
    FLD float ptr [EAX + 0x8]           ; 004ef1a6
    FMUL float ptr [ESP + 0x90]         ; 004ef1a9
    LEA ESI,[ESP + 0x78]                ; 004ef1b0
    PUSH EBX                            ; 004ef1b4
    FSTP float ptr [ESP + 0x24]         ; 004ef1b5
    FLD float ptr [EBX]                 ; 004ef1b9
    FADD float ptr [ESP + 0x1c]         ; 004ef1bb
    FLD float ptr [EBX + 0x4]           ; 004ef1bf
    FXCH                                ; 004ef1c2
    FSTP float ptr [EBX]                ; 004ef1c4
    FADD float ptr [ESP + 0x20]         ; 004ef1c6
    FLD float ptr [EBX + 0x8]           ; 004ef1ca
    FXCH                                ; 004ef1cd
    FSTP float ptr [EBX + 0x4]          ; 004ef1cf
    FADD float ptr [ESP + 0x24]         ; 004ef1d2
    PUSH 0x1fba938                      ; 004ef1d6 | DAT_01fba938
    FSTP float ptr [EBX + 0x8]          ; 004ef1db
    CALL FUN_0046b700                   ; 004ef1de
        ;   XREF to: 0046b700 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b700()
    ADD ESP,0x8                         ; 004ef1e3
    LEA EAX,[ESP + 0x3c]                ; 004ef1e6
    PUSH EAX                            ; 004ef1ea
    LEA EDI,[ESP + 0x40]                ; 004ef1eb
    LEA ESI,[ESP + 0x7c]                ; 004ef1ef
    PUSH 0x1fba938                      ; 004ef1f3 | DAT_01fba938
    MOVSD ES:EDI,ESI                    ; 004ef1f8
    MOVSD ES:EDI,ESI                    ; 004ef1f9
    MOVSD ES:EDI,ESI                    ; 004ef1fa
    CALL FUN_0046b7f0                   ; 004ef1fb
        ;   XREF to: 0046b7f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b7f0()
    ADD ESP,0x8                         ; 004ef200
    MOV dword ptr [EBX + 0x20],EAX      ; 004ef203
    TEST EAX,EAX                        ; 004ef206
    JZ 0x004ef335                       ; 004ef208
        ;   XREF to: 004ef335 (CONDITIONAL_JUMP)  ; LAB_004ef335
    PUSH 0x0                            ; 004ef20e
        ;   Label: LAB_004ef20e
    LEA EAX,[ESP + 0x88]                ; 004ef210
    PUSH EAX                            ; 004ef217
    PUSH EBX                            ; 004ef218
    LEA ESI,[EBX + 0x24]                ; 004ef219
    PUSH ESI                            ; 004ef21c
    PUSH 0x1fba938                      ; 004ef21d | DAT_01fba938
    CALL FUN_00467a00                   ; 004ef222
        ;   XREF to: 00467a00 (UNCONDITIONAL_CALL)  ; undefined FUN_00467a00()
    MOV dword ptr [ESP + 0xb0],EAX      ; 004ef227
    FLD float ptr [ESP + 0xb0]          ; 004ef22e
    ADD ESP,0x14                        ; 004ef235
    FLDZ                                ; 004ef238
    FXCH                                ; 004ef23a
    FST float ptr [ESP + 0x8]           ; 004ef23c
    FSTP double ptr [ESP]               ; 004ef240
    FCOMP double ptr [ESP]              ; 004ef243
    FNSTSW AX                           ; 004ef246
    SAHF                                ; 004ef248
    JA 0x004ef314                       ; 004ef249
        ;   XREF to: 004ef314 (CONDITIONAL_JUMP)  ; LAB_004ef314
    FLD1                                ; 004ef24f
    FCOMP double ptr [ESP]              ; 004ef251
    FNSTSW AX                           ; 004ef254
    SAHF                                ; 004ef256
    JBE 0x004ef314                      ; 004ef257
        ;   XREF to: 004ef314 (CONDITIONAL_JUMP)  ; LAB_004ef314
    FLD float ptr [EBX]                 ; 004ef25d
    FSUB float ptr [ESI]                ; 004ef25f
    FST float ptr [ESP + 0x60]          ; 004ef261
    FLD float ptr [EBX + 0x4]           ; 004ef265
    FSUB float ptr [ESI + 0x4]          ; 004ef268
    FXCH                                ; 004ef26b
    FLD float ptr [ESP + 0x8]           ; 004ef26d
    FXCH                                ; 004ef271
    FMUL ST1                            ; 004ef273
    FXCH ST2                            ; 004ef275
    FST float ptr [ESP + 0x64]          ; 004ef277
    FLD float ptr [EBX + 0x8]           ; 004ef27b
    FSUB float ptr [ESI + 0x8]          ; 004ef27e
    FXCH                                ; 004ef281
    FMUL ST2                            ; 004ef283
    FXCH                                ; 004ef285
    FST float ptr [ESP + 0x68]          ; 004ef287
    FMULP ST2                           ; 004ef28b
    FXCH ST2                            ; 004ef28d
    FST float ptr [ESP + 0x30]          ; 004ef28f
    FLD float ptr [0x0058cb88]          ; 004ef293 | DAT_0058cb88
    FXCH                                ; 004ef299
    FMUL ST1                            ; 004ef29b
    FXCH ST3                            ; 004ef29d
    FST float ptr [ESP + 0x34]          ; 004ef29f
    FMUL ST1                            ; 004ef2a3
    FXCH ST2                            ; 004ef2a5
    FST float ptr [ESP + 0x38]          ; 004ef2a7
    FMULP                               ; 004ef2ab
    FXCH ST2                            ; 004ef2ad
    FSTP float ptr [ESP + 0x24]         ; 004ef2af
    FSTP float ptr [ESP + 0x28]         ; 004ef2b3
    FSTP float ptr [ESP + 0x2c]         ; 004ef2b7
    FLD float ptr [ESI]                 ; 004ef2bb
    FADD float ptr [ESP + 0x24]         ; 004ef2bd
    FSTP float ptr [ESP + 0x48]         ; 004ef2c1
    FLD float ptr [ESI + 0x4]           ; 004ef2c5
    FADD float ptr [ESP + 0x28]         ; 004ef2c8
    FSTP float ptr [ESP + 0x4c]         ; 004ef2cc
    FLD float ptr [ESI + 0x8]           ; 004ef2d0
    FADD float ptr [ESP + 0x2c]         ; 004ef2d3
    LEA EAX,[ESP + 0x48]                ; 004ef2d7
    FSTP float ptr [ESP + 0x50]         ; 004ef2db
    CMP EBX,EAX                         ; 004ef2df
    JZ 0x004ef2f7                       ; 004ef2e1
        ;   XREF to: 004ef2f7 (CONDITIONAL_JUMP)  ; LAB_004ef2f7
    MOV EAX,dword ptr [ESP + 0x48]      ; 004ef2e3
    MOV dword ptr [EBX],EAX             ; 004ef2e7
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004ef2e9
    MOV dword ptr [EBX + 0x4],EAX       ; 004ef2ed
    MOV EAX,dword ptr [ESP + 0x50]      ; 004ef2f0
    MOV dword ptr [EBX + 0x8],EAX       ; 004ef2f4
    LEA EAX,[ESP + 0x84]                ; 004ef2f7
        ;   Label: LAB_004ef2f7
    PUSH EAX                            ; 004ef2fe
    MOV EDX,dword ptr [EBX + 0x34]      ; 004ef2ff
    PUSH EBX                            ; 004ef302
    CALL dword ptr [EDX + 0xc]          ; 004ef303
    ADD ESP,0x8                         ; 004ef306
    TEST EAX,EAX                        ; 004ef309
    JZ 0x004ef341                       ; 004ef30b
        ;   XREF to: 004ef341 (CONDITIONAL_JUMP)  ; LAB_004ef341
    MOV dword ptr [EBX + 0x18],0x0      ; 004ef30d
    FLD float ptr [EBX + 0x18]          ; 004ef314
        ;   Label: LAB_004ef314
    FSUB float ptr [ESP + 0x94]         ; 004ef317
    FST float ptr [EBX + 0x18]          ; 004ef31e
    FLDZ                                ; 004ef321
    FCOMPP                              ; 004ef323
    FNSTSW AX                           ; 004ef325
    SAHF                                ; 004ef327
    JA 0x004ef432                       ; 004ef328
        ;   XREF to: 004ef432 (CONDITIONAL_JUMP)  ; LAB_004ef432
    MOV ESP,EBP                         ; 004ef32e
        ;   Label: LAB_004ef32e
    POP EBP                             ; 004ef330
    POP EDI                             ; 004ef331
    POP ESI                             ; 004ef332
    POP EBX                             ; 004ef333
    RET                                 ; 004ef334
    CMP dword ptr [EBX + 0x30],0x0      ; 004ef335
        ;   Label: LAB_004ef335
    JNZ 0x004ef20e                      ; 004ef339
        ;   XREF to: 004ef20e (CONDITIONAL_JUMP)  ; LAB_004ef20e
    JMP 0x004ef314                      ; 004ef33f
        ;   XREF to: 004ef314 (UNCONDITIONAL_JUMP)  ; LAB_004ef314
    LEA EDX,[EBX + 0xc]                 ; 004ef341
        ;   Label: LAB_004ef341
    FLD float ptr [ESP + 0x88]          ; 004ef344
    FMUL float ptr [EDX + 0x4]          ; 004ef34b
    FLD float ptr [ESP + 0x84]          ; 004ef34e
    FMUL float ptr [EDX]                ; 004ef355
    FADDP                               ; 004ef357
    FLD float ptr [ESP + 0x8c]          ; 004ef359
    FMUL float ptr [EDX + 0x8]          ; 004ef360
    FADDP                               ; 004ef363
    FMUL float ptr [0x0058cb8c]         ; 004ef365 | DAT_0058cb8c
    FLD float ptr [ESP + 0x84]          ; 004ef36b
    FXCH                                ; 004ef372
    FSTP float ptr [ESP + 0x98]         ; 004ef374
    FMUL float ptr [ESP + 0x98]         ; 004ef37b
    FLD float ptr [ESP + 0x88]          ; 004ef382
    FMUL float ptr [ESP + 0x98]         ; 004ef389
    FLD float ptr [ESP + 0x8c]          ; 004ef390
    FMUL float ptr [ESP + 0x98]         ; 004ef397
    FXCH ST2                            ; 004ef39e
    FSTP float ptr [ESP + 0xc]          ; 004ef3a0
    FSTP float ptr [ESP + 0x10]         ; 004ef3a4
    FSTP float ptr [ESP + 0x14]         ; 004ef3a8
    FLD float ptr [ESP + 0xc]           ; 004ef3ac
    FSUB float ptr [EDX]                ; 004ef3b0
    FLD float ptr [ESP + 0x10]          ; 004ef3b2
    FXCH                                ; 004ef3b6
    FSTP float ptr [ESP + 0x54]         ; 004ef3b8
    FSUB float ptr [EDX + 0x4]          ; 004ef3bc
    FLD float ptr [ESP + 0x14]          ; 004ef3bf
    FXCH                                ; 004ef3c3
    FSTP float ptr [ESP + 0x58]         ; 004ef3c5
    FSUB float ptr [EDX + 0x8]          ; 004ef3c9
    LEA EAX,[ESP + 0x54]                ; 004ef3cc
    FSTP float ptr [ESP + 0x5c]         ; 004ef3d0
    CMP EDX,EAX                         ; 004ef3d4
    JZ 0x004ef3ec                       ; 004ef3d6
        ;   XREF to: 004ef3ec (CONDITIONAL_JUMP)  ; LAB_004ef3ec
    MOV EAX,dword ptr [ESP + 0x54]      ; 004ef3d8
    MOV dword ptr [EDX],EAX             ; 004ef3dc
    MOV EAX,dword ptr [ESP + 0x58]      ; 004ef3de
    MOV dword ptr [EDX + 0x4],EAX       ; 004ef3e2
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004ef3e5
    MOV dword ptr [EDX + 0x8],EAX       ; 004ef3e9
    LEA EDX,[EBX + 0xc]                 ; 004ef3ec
        ;   Label: LAB_004ef3ec
    FLD float ptr [0x0058cb90]          ; 004ef3ef | DAT_0058cb90
    FLD float ptr [EDX]                 ; 004ef3f5
    FMUL ST1                            ; 004ef3f7
    FSTP float ptr [ESP + 0x6c]         ; 004ef3f9
    FLD float ptr [EDX + 0x4]           ; 004ef3fd
    FMUL ST1                            ; 004ef400
    FSTP float ptr [ESP + 0x70]         ; 004ef402
    FMUL float ptr [EDX + 0x8]          ; 004ef406
    LEA EAX,[ESP + 0x6c]                ; 004ef409
    FSTP float ptr [ESP + 0x74]         ; 004ef40d
    CMP EDX,EAX                         ; 004ef411
    JZ 0x004ef314                       ; 004ef413
        ;   XREF to: 004ef314 (CONDITIONAL_JUMP)  ; LAB_004ef314
    MOV EAX,dword ptr [ESP + 0x6c]      ; 004ef419
    MOV dword ptr [EDX],EAX             ; 004ef41d
    MOV EAX,dword ptr [ESP + 0x70]      ; 004ef41f
    MOV dword ptr [EDX + 0x4],EAX       ; 004ef423
    MOV EAX,dword ptr [ESP + 0x74]      ; 004ef426
    MOV dword ptr [EDX + 0x8],EAX       ; 004ef42a
    JMP 0x004ef314                      ; 004ef42d
        ;   XREF to: 004ef314 (UNCONDITIONAL_JUMP)  ; LAB_004ef314
    MOV dword ptr [EBX + 0x18],0x0      ; 004ef432
        ;   Label: LAB_004ef432
    MOV ESP,EBP                         ; 004ef439
    POP EBP                             ; 004ef43b
    POP EDI                             ; 004ef43c
    POP ESI                             ; 004ef43d
    POP EBX                             ; 004ef43e
    RET                                 ; 004ef43f

