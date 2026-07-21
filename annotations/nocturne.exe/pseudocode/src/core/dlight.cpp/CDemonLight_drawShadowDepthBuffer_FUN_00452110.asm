; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_drawShadowDepthBuffer_FUN_00452110(int param_1,int param_2,int param_3,int param_4)
;
; Local Variables:
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
;   FUN_0050a260 at 0050a566
;
; Referenced Globals:
;   undefined4 DAT_005b761c
;   undefined4 DAT_005b7620
;   undefined4 DAT_005b7624
;   undefined4 DAT_01abb4c4
;   undefined4 DAT_01abb4c8
;   undefined4 DAT_01abb4cc
;   undefined4 DAT_01bd2fa0
;   undefined4 DAT_01bd2fa4
;   undefined4 DAT_01c00624
;   undefined4 DAT_01c00628
;   undefined4 DAT_01c00630
;   undefined4 DAT_01c00634
;   undefined4 DAT_01c0063c
;   undefined4 DAT_01c00640
;
; Called Functions:
;   crt_memory.c_memset_FUN_00563cc0
;   crt_stdlib.c_rand_FUN_0056488c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00452110
        ;   Label: core_dlight.cpp_CDemonLight_drawShadowDepthBuffer_FUN_00452110
    PUSH ESI                            ; 00452111
    PUSH EDI                            ; 00452112
    PUSH EBP                            ; 00452113
    SUB ESP,0x34                        ; 00452114
    MOV EBP,dword ptr [ESP + 0x54]      ; 00452117
    XOR ESI,ESI                         ; 0045211b
    XOR EBX,EBX                         ; 0045211d
    MOV dword ptr [0x01abb4c4],ESI      ; 0045211f | DAT_01abb4c4
    CALL crt_stdlib.c_rand_FUN_0056488c ; 00452125
        ;   XREF to: 0056488c (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c_rand_FUN_0056488c()
        ;   Label: LAB_00452125
    AND EAX,0x1f                        ; 0045212a
    ADD EBX,0x4                         ; 0045212d
    SUB EAX,0x10                        ; 00452130
    MOV dword ptr [EBX + 0x1abb4c4],EAX ; 00452133
    CMP EBX,0x190                       ; 00452139
    JNZ 0x00452125                      ; 0045213f
        ;   XREF to: 00452125 (CONDITIONAL_JUMP)  ; LAB_00452125
    MOV EDX,dword ptr [0x005b7620]      ; 00452141 | DAT_005b7620
    XOR EBX,EBX                         ; 00452147
    TEST EDX,EDX                        ; 00452149
    JLE 0x00452190                      ; 0045214b
        ;   XREF to: 00452190 (CONDITIONAL_JUMP)  ; LAB_00452190
    XOR EDI,EDI                         ; 0045214d
    MOV EDX,dword ptr [0x005b761c]      ; 0045214f | DAT_005b761c
        ;   Label: LAB_0045214f
    MOV ECX,dword ptr [0x005b7624]      ; 00452155 | DAT_005b7624
    IMUL EDX,ECX                        ; 0045215b
    MOV EAX,EDX                         ; 0045215e
    SAR EDX,0x1f                        ; 00452160
    SHL EDX,0x3                         ; 00452163
    SBB EAX,EDX                         ; 00452166
    SAR EAX,0x3                         ; 00452168
    PUSH EAX                            ; 0045216b
    PUSH 0x0                            ; 0045216c
    MOV EAX,dword ptr [EDI + 0x1bd2fa0] ; 0045216e | DAT_01bd2fa0 | DAT_01bd2fa4
    PUSH EAX                            ; 00452174
    ADD EDI,0x4                         ; 00452175
    INC EBX                             ; 00452178
    CALL crt_memory.c_memset_FUN_00563cc0 ; 00452179
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_memset_FUN_00563cc0()
    MOV EDX,dword ptr [0x005b7620]      ; 0045217e | DAT_005b7620
    ADD ESP,0xc                         ; 00452184
    CMP EBX,EDX                         ; 00452187
    JL 0x0045214f                       ; 00452189
        ;   XREF to: 0045214f (CONDITIONAL_JUMP)  ; LAB_0045214f
    LEA EAX,[EAX]                       ; 0045218b
    MOV ECX,ECX                         ; 0045218e
    MOV ECX,dword ptr [0x005b7624]      ; 00452190 | DAT_005b7624
        ;   Label: LAB_00452190
    MOV ESI,dword ptr [0x01abb4c4]      ; 00452196 | DAT_01abb4c4
    CMP ECX,0x20                        ; 0045219c
    JNZ 0x00452343                      ; 0045219f
        ;   XREF to: 00452343 (CONDITIONAL_JUMP)  ; LAB_00452343
    XOR EAX,EAX                         ; 004521a5
    MOV dword ptr [ESP + 0x14],EAX      ; 004521a7
    MOV EAX,dword ptr [ESP + 0x48]      ; 004521ab
    CMP dword ptr [EAX + 0x1cc4],0x0    ; 004521af
    JLE 0x004521fe                      ; 004521b6
        ;   XREF to: 004521fe (CONDITIONAL_JUMP)  ; LAB_004521fe
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004521b8
    SHL EAX,0x2                         ; 004521bc
    MOV dword ptr [ESP + 0xc],EAX       ; 004521bf
    CMP dword ptr [0x005b7620],0xf0     ; 004521c3 | DAT_005b7620
        ;   Label: LAB_004521c3
    JLE 0x0045220c                      ; 004521cd
        ;   XREF to: 0045220c (CONDITIONAL_JUMP)  ; LAB_0045220c
    MOV EAX,dword ptr [ESP + 0x14]      ; 004521cf
    MOV ECX,dword ptr [ESP + 0x50]      ; 004521d3
    ADD EAX,EAX                         ; 004521d7
    ADD EAX,ECX                         ; 004521d9
    TEST EAX,EAX                        ; 004521db
        ;   Label: LAB_004521db
    JL 0x004521e7                       ; 004521dd
        ;   XREF to: 004521e7 (CONDITIONAL_JUMP)  ; LAB_004521e7
    CMP EAX,dword ptr [0x005b7620]      ; 004521df | DAT_005b7620
    JL 0x00452216                       ; 004521e5
        ;   XREF to: 00452216 (CONDITIONAL_JUMP)  ; LAB_00452216
    MOV EBX,dword ptr [ESP + 0x14]      ; 004521e7
        ;   Label: LAB_004521e7
    MOV EDX,dword ptr [ESP + 0x48]      ; 004521eb
    INC EBX                             ; 004521ef
    MOV EDI,dword ptr [EDX + 0x1cc4]    ; 004521f0
    MOV dword ptr [ESP + 0x14],EBX      ; 004521f6
    CMP EBX,EDI                         ; 004521fa
    JL 0x004521c3                       ; 004521fc
        ;   XREF to: 004521c3 (CONDITIONAL_JUMP)  ; LAB_004521c3
    MOV dword ptr [0x01abb4c4],ESI      ; 004521fe | DAT_01abb4c4
        ;   Label: LAB_004521fe
    ADD ESP,0x34                        ; 00452204
    POP EBP                             ; 00452207
    POP EDI                             ; 00452208
    POP ESI                             ; 00452209
    POP EBX                             ; 0045220a
    RET                                 ; 0045220b
    MOV EAX,dword ptr [ESP + 0x14]      ; 0045220c
        ;   Label: LAB_0045220c
    ADD EAX,dword ptr [ESP + 0x50]      ; 00452210
    JMP 0x004521db                      ; 00452214
        ;   XREF to: 004521db (UNCONDITIONAL_JUMP)  ; LAB_004521db
    MOV EDX,dword ptr [ESP + 0x48]      ; 00452216
        ;   Label: LAB_00452216
    MOV EDI,dword ptr [EAX*0x4 + 0x1bd2fa0] ; 0045221a | DAT_01bd2fa0
    MOV EAX,dword ptr [ESP + 0xc]       ; 00452221
    MOV ECX,dword ptr [EDX + 0x1cc0]    ; 00452225
    ADD EDI,EAX                         ; 0045222b
    MOV EAX,dword ptr [ESP + 0x14]      ; 0045222d
    IMUL EAX,ECX                        ; 00452231
    LEA EDX,[EAX + EAX*0x1]             ; 00452234
    MOV EAX,dword ptr [ESP + 0x48]      ; 00452237
    MOV EAX,dword ptr [EAX + 0x2f94]    ; 0045223b
    ADD EAX,EDX                         ; 00452241
    XOR EBX,EBX                         ; 00452243
    MOV dword ptr [ESP + 0x2c],EAX      ; 00452245
    MOV EAX,dword ptr [ESP + 0x48]      ; 00452249
    MOV dword ptr [ESP + 0x20],EBX      ; 0045224d
    MOV EDX,dword ptr [EAX + 0x1cc0]    ; 00452251
    MOV dword ptr [ESP + 0x24],EBX      ; 00452257
    TEST EDX,EDX                        ; 0045225b
    JLE 0x004521e7                      ; 0045225d
        ;   XREF to: 004521e7 (CONDITIONAL_JUMP)  ; LAB_004521e7
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0045225f
        ;   Label: LAB_0045225f
    XOR EBX,EBX                         ; 00452263
    MOV BX,word ptr [EAX]               ; 00452265
    TEST EBX,EBX                        ; 00452268
    JZ 0x004522f4                       ; 0045226a
        ;   XREF to: 004522f4 (CONDITIONAL_JUMP)  ; LAB_004522f4
    SHR EBX,0x6                         ; 00452270
    MOV EAX,dword ptr [ESI*0x4 + 0x1abb4c8] ; 00452273 | DAT_01abb4c8 | DAT_01abb4cc
    INC ESI                             ; 0045227a
    ADD EBX,EAX                         ; 0045227b
    CMP ESI,0x64                        ; 0045227d
    JL 0x00452284                       ; 00452280
        ;   XREF to: 00452284 (CONDITIONAL_JUMP)  ; LAB_00452284
    XOR ESI,ESI                         ; 00452282
    CMP EBX,0x7f                        ; 00452284
        ;   Label: LAB_00452284
    JBE 0x0045228e                      ; 00452287
        ;   XREF to: 0045228e (CONDITIONAL_JUMP)  ; LAB_0045228e
    MOV EBX,0x7f                        ; 00452289
    XOR BL,0x7f                         ; 0045228e
        ;   Label: LAB_0045228e
    TEST EBP,EBP                        ; 00452291
    JLE 0x004522a4                      ; 00452293
        ;   XREF to: 004522a4 (CONDITIONAL_JUMP)  ; LAB_004522a4
    ADD EBX,EBP                         ; 00452295
    CMP EBX,0xff                        ; 00452297
    JBE 0x004522a4                      ; 0045229d
        ;   XREF to: 004522a4 (CONDITIONAL_JUMP)  ; LAB_004522a4
    MOV EBX,0xff                        ; 0045229f
    ADD EBX,dword ptr [ESP + 0x20]      ; 004522a4
        ;   Label: LAB_004522a4
    SHR EBX,0x1                         ; 004522a8
    MOV dword ptr [ESP + 0x20],EBX      ; 004522aa
    LEA EAX,[EBX + EBX*0x1]             ; 004522ae
    ADD EAX,EBX                         ; 004522b1
    MOV ECX,dword ptr [0x005b7624]      ; 004522b3 | DAT_005b7624
    SHR EAX,0x2                         ; 004522b9
    CMP ECX,0x20                        ; 004522bc
    JNZ 0x00452330                      ; 004522bf
        ;   XREF to: 00452330 (CONDITIONAL_JUMP)  ; LAB_00452330
    MOV CL,byte ptr [0x01c00624]        ; 004522c1 | DAT_01c00624
    MOV EDX,EAX                         ; 004522c7
    SHL EDX,CL                          ; 004522c9
    MOV CL,byte ptr [0x01c00630]        ; 004522cb | DAT_01c00630
    SHL EAX,CL                          ; 004522d1
    MOV CL,byte ptr [0x01c0063c]        ; 004522d3 | DAT_01c0063c
    SHL EBX,CL                          ; 004522d9
    OR EAX,EDX                          ; 004522db
    MOV ECX,EBX                         ; 004522dd
    OR ECX,EAX                          ; 004522df
    MOV EBX,dword ptr [0x005b761c]      ; 004522e1 | DAT_005b761c
        ;   Label: LAB_004522e1
    MOV dword ptr [EDI],ECX             ; 004522e7
    CMP EBX,0x140                       ; 004522e9
    JLE 0x004522f4                      ; 004522ef
        ;   XREF to: 004522f4 (CONDITIONAL_JUMP)  ; LAB_004522f4
    MOV dword ptr [EDI + 0x4],ECX       ; 004522f1
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004522f4
        ;   Label: LAB_004522f4
    ADD EAX,0x2                         ; 004522f8
    MOV EDX,dword ptr [0x005b761c]      ; 004522fb | DAT_005b761c
    MOV dword ptr [ESP + 0x2c],EAX      ; 00452301
    CMP EDX,0x140                       ; 00452305
    JLE 0x0045233e                      ; 0045230b
        ;   XREF to: 0045233e (CONDITIONAL_JUMP)  ; LAB_0045233e
    ADD EDI,0x8                         ; 0045230d
    MOV ECX,dword ptr [ESP + 0x24]      ; 00452310
        ;   Label: LAB_00452310
    MOV EDX,dword ptr [ESP + 0x48]      ; 00452314
    INC ECX                             ; 00452318
    MOV EBX,dword ptr [EDX + 0x1cc0]    ; 00452319
    MOV dword ptr [ESP + 0x24],ECX      ; 0045231f
    CMP ECX,EBX                         ; 00452323
    JGE 0x004521e7                      ; 00452325
        ;   XREF to: 004521e7 (CONDITIONAL_JUMP)  ; LAB_004521e7
    JMP 0x0045225f                      ; 0045232b
        ;   XREF to: 0045225f (UNCONDITIONAL_JUMP)  ; LAB_0045225f
    MOV ECX,EAX                         ; 00452330
        ;   Label: LAB_00452330
    SHL EAX,0x8                         ; 00452332
    SHL ECX,0x10                        ; 00452335
    OR ECX,EAX                          ; 00452338
    OR ECX,EBX                          ; 0045233a
    JMP 0x004522e1                      ; 0045233c
        ;   XREF to: 004522e1 (UNCONDITIONAL_JUMP)  ; LAB_004522e1
    ADD EDI,0x4                         ; 0045233e
        ;   Label: LAB_0045233e
    JMP 0x00452310                      ; 00452341
        ;   XREF to: 00452310 (UNCONDITIONAL_JUMP)  ; LAB_00452310
    MOV EAX,dword ptr [ESP + 0x48]      ; 00452343
        ;   Label: LAB_00452343
    XOR EBX,EBX                         ; 00452347
    MOV EDI,dword ptr [EAX + 0x1cc4]    ; 00452349
    MOV dword ptr [ESP + 0x18],EBX      ; 0045234f
    TEST EDI,EDI                        ; 00452353
    JLE 0x004521fe                      ; 00452355
        ;   XREF to: 004521fe (CONDITIONAL_JUMP)  ; LAB_004521fe
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0045235b
    ADD EAX,EAX                         ; 0045235f
    MOV dword ptr [ESP + 0x10],EAX      ; 00452361
    CMP dword ptr [0x005b7620],0xf0     ; 00452365 | DAT_005b7620
        ;   Label: LAB_00452365
    JLE 0x004523a6                      ; 0045236f
        ;   XREF to: 004523a6 (CONDITIONAL_JUMP)  ; LAB_004523a6
    MOV EAX,dword ptr [ESP + 0x18]      ; 00452371
    MOV ECX,dword ptr [ESP + 0x50]      ; 00452375
    ADD EAX,EAX                         ; 00452379
    ADD EAX,ECX                         ; 0045237b
    TEST EAX,EAX                        ; 0045237d
        ;   Label: LAB_0045237d
    JL 0x00452389                       ; 0045237f
        ;   XREF to: 00452389 (CONDITIONAL_JUMP)  ; LAB_00452389
    CMP EAX,dword ptr [0x005b7620]      ; 00452381 | DAT_005b7620
    JL 0x004523b0                       ; 00452387
        ;   XREF to: 004523b0 (CONDITIONAL_JUMP)  ; LAB_004523b0
    MOV ECX,dword ptr [ESP + 0x18]      ; 00452389
        ;   Label: LAB_00452389
    MOV EDX,dword ptr [ESP + 0x48]      ; 0045238d
    INC ECX                             ; 00452391
    MOV EBX,dword ptr [EDX + 0x1cc4]    ; 00452392
    MOV dword ptr [ESP + 0x18],ECX      ; 00452398
    CMP ECX,EBX                         ; 0045239c
    JGE 0x004521fe                      ; 0045239e
        ;   XREF to: 004521fe (CONDITIONAL_JUMP)  ; LAB_004521fe
    JMP 0x00452365                      ; 004523a4
        ;   XREF to: 00452365 (UNCONDITIONAL_JUMP)  ; LAB_00452365
    MOV EAX,dword ptr [ESP + 0x18]      ; 004523a6
        ;   Label: LAB_004523a6
    ADD EAX,dword ptr [ESP + 0x50]      ; 004523aa
    JMP 0x0045237d                      ; 004523ae
        ;   XREF to: 0045237d (UNCONDITIONAL_JUMP)  ; LAB_0045237d
    MOV EDX,dword ptr [ESP + 0x48]      ; 004523b0
        ;   Label: LAB_004523b0
    MOV EDI,dword ptr [EAX*0x4 + 0x1bd2fa0] ; 004523b4 | DAT_01bd2fa0
    MOV EAX,dword ptr [ESP + 0x10]      ; 004523bb
    MOV ECX,dword ptr [EDX + 0x1cc0]    ; 004523bf
    ADD EDI,EAX                         ; 004523c5
    MOV EAX,dword ptr [ESP + 0x18]      ; 004523c7
    IMUL EAX,ECX                        ; 004523cb
    MOV EDX,dword ptr [EDX + 0x2f94]    ; 004523ce
    ADD EAX,EAX                         ; 004523d4
    XOR EBX,EBX                         ; 004523d6
    ADD EDX,EAX                         ; 004523d8
    MOV EAX,dword ptr [ESP + 0x48]      ; 004523da
    MOV dword ptr [ESP + 0x1c],EBX      ; 004523de
    MOV dword ptr [ESP + 0x30],EDX      ; 004523e2
    MOV EDX,dword ptr [EAX + 0x1cc0]    ; 004523e6
    MOV dword ptr [ESP + 0x28],EBX      ; 004523ec
    TEST EDX,EDX                        ; 004523f0
    JLE 0x00452389                      ; 004523f2
        ;   XREF to: 00452389 (CONDITIONAL_JUMP)  ; LAB_00452389
    MOV EAX,dword ptr [ESP + 0x30]      ; 004523f4
        ;   Label: LAB_004523f4
    XOR EBX,EBX                         ; 004523f8
    MOV BX,word ptr [EAX]               ; 004523fa
    TEST EBX,EBX                        ; 004523fd
    JZ 0x004524be                       ; 004523ff
        ;   XREF to: 004524be (CONDITIONAL_JUMP)  ; LAB_004524be
    SHR EBX,0x6                         ; 00452405
    MOV EAX,dword ptr [ESI*0x4 + 0x1abb4c8] ; 00452408 | DAT_01abb4c8 | DAT_01abb4cc
    INC ESI                             ; 0045240f
    ADD EBX,EAX                         ; 00452410
    CMP ESI,0x64                        ; 00452412
    JL 0x00452419                       ; 00452415
        ;   XREF to: 00452419 (CONDITIONAL_JUMP)  ; LAB_00452419
    XOR ESI,ESI                         ; 00452417
    CMP EBX,0x7f                        ; 00452419
        ;   Label: LAB_00452419
    JBE 0x00452423                      ; 0045241c
        ;   XREF to: 00452423 (CONDITIONAL_JUMP)  ; LAB_00452423
    MOV EBX,0x7f                        ; 0045241e
    XOR BL,0x7f                         ; 00452423
        ;   Label: LAB_00452423
    TEST EBP,EBP                        ; 00452426
    JLE 0x00452439                      ; 00452428
        ;   XREF to: 00452439 (CONDITIONAL_JUMP)  ; LAB_00452439
    ADD EBX,EBP                         ; 0045242a
    CMP EBX,0xff                        ; 0045242c
    JBE 0x00452439                      ; 00452432
        ;   XREF to: 00452439 (CONDITIONAL_JUMP)  ; LAB_00452439
    MOV EBX,0xff                        ; 00452434
    ADD EBX,dword ptr [ESP + 0x1c]      ; 00452439
        ;   Label: LAB_00452439
    SHR EBX,0x1                         ; 0045243d
    MOV dword ptr [ESP + 0x1c],EBX      ; 0045243f
    LEA ECX,[EBX + EBX*0x1]             ; 00452443
    ADD ECX,EBX                         ; 00452446
    SHR ECX,0x2                         ; 00452448
    XOR EDX,EDX                         ; 0045244b
    MOV EAX,ECX                         ; 0045244d
    DIV dword ptr [0x01c00628]          ; 0045244f | DAT_01c00628
    MOV dword ptr [ESP],ECX             ; 00452455
    MOV dword ptr [ESP + 0x4],ECX       ; 00452458
    MOV dword ptr [ESP],EAX             ; 0045245c
    XOR EDX,EDX                         ; 0045245f
    MOV EAX,ECX                         ; 00452461
    DIV dword ptr [0x01c00634]          ; 00452463 | DAT_01c00634
    MOV dword ptr [ESP + 0x8],EBX       ; 00452469
    MOV dword ptr [ESP + 0x4],EAX       ; 0045246d
    XOR EDX,EDX                         ; 00452471
    MOV EAX,EBX                         ; 00452473
    DIV dword ptr [0x01c00640]          ; 00452475 | DAT_01c00640
    MOV CL,byte ptr [0x01c00624]        ; 0045247b | DAT_01c00624
    MOV EBX,dword ptr [ESP]             ; 00452481
    MOV dword ptr [ESP + 0x8],EAX       ; 00452484
    MOV EAX,dword ptr [ESP + 0x4]       ; 00452488
    SHL EBX,CL                          ; 0045248c
    MOV CL,byte ptr [0x01c00630]        ; 0045248e | DAT_01c00630
    SHL EAX,CL                          ; 00452494
    MOV CL,byte ptr [0x01c0063c]        ; 00452496 | DAT_01c0063c
    OR EBX,EAX                          ; 0045249c
    MOV EAX,dword ptr [ESP + 0x8]       ; 0045249e
    SHL EAX,CL                          ; 004524a2
    OR EAX,EBX                          ; 004524a4
    XOR EBX,EBX                         ; 004524a6
    MOV word ptr [EDI],AX               ; 004524a8
    MOV BX,AX                           ; 004524ab
    CMP dword ptr [0x005b761c],0x140    ; 004524ae | DAT_005b761c
    JLE 0x004524be                      ; 004524b8
        ;   XREF to: 004524be (CONDITIONAL_JUMP)  ; LAB_004524be
    MOV word ptr [EDI + 0x2],BX         ; 004524ba
    MOV EDX,dword ptr [ESP + 0x30]      ; 004524be
        ;   Label: LAB_004524be
    ADD EDX,0x2                         ; 004524c2
    MOV ECX,dword ptr [0x005b761c]      ; 004524c5 | DAT_005b761c
    MOV dword ptr [ESP + 0x30],EDX      ; 004524cb
    CMP ECX,0x140                       ; 004524cf
    JLE 0x004524fa                      ; 004524d5
        ;   XREF to: 004524fa (CONDITIONAL_JUMP)  ; LAB_004524fa
    ADD EDI,0x4                         ; 004524d7
    MOV ECX,dword ptr [ESP + 0x28]      ; 004524da
        ;   Label: LAB_004524da
    MOV EDX,dword ptr [ESP + 0x48]      ; 004524de
    INC ECX                             ; 004524e2
    MOV EBX,dword ptr [EDX + 0x1cc0]    ; 004524e3
    MOV dword ptr [ESP + 0x28],ECX      ; 004524e9
    CMP ECX,EBX                         ; 004524ed
    JGE 0x00452389                      ; 004524ef
        ;   XREF to: 00452389 (CONDITIONAL_JUMP)  ; LAB_00452389
    JMP 0x004523f4                      ; 004524f5
        ;   XREF to: 004523f4 (UNCONDITIONAL_JUMP)  ; LAB_004523f4
    ADD EDI,0x2                         ; 004524fa
        ;   Label: LAB_004524fa
    JMP 0x004524da                      ; 004524fd
        ;   XREF to: 004524da (UNCONDITIONAL_JUMP)  ; LAB_004524da

