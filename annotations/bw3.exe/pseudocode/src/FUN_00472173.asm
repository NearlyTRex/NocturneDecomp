; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00472173(uint *param_1,undefined8 *param_2,byte *param_3,byte *param_4,int param_5)
;
;
; XREF[1]:
;   FUN_00450020 at 004501ea
;
; Referenced Globals:
;   undefined8 DAT_005f8b88
;   undefined8 DAT_005f8b90
;   undefined4 DAT_005fa0e0
;   undefined4 DAT_005fa100
;   undefined4 DAT_005fa120
;   undefined4 DAT_005fa140
;   undefined4 DAT_005fa160
;   undefined4 DAT_005fa180
;   undefined4 DAT_005fa1a0
;   undefined4 DAT_005fa1c0
;   undefined4 DAT_005fa1e0
;   undefined4 DAT_005fa200
;   undefined4 DAT_005fa220
;   undefined4 DAT_005fa240
;   undefined4 DAT_005fa260
;   ... and 91 more
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00472173
        ;   Label: FUN_00472173
    MOV EBP,ESP                         ; 00472174
    PUSH ESI                            ; 00472176
    PUSH EDI                            ; 00472177
    PUSH EBP                            ; 00472178
    MOV ECX,dword ptr [EBP + 0x18]      ; 00472179
    MOV EDI,dword ptr [EBP + 0x8]       ; 0047217c
    MOV ESI,dword ptr [EBP + 0xc]       ; 0047217f
    MOV EBX,dword ptr [EBP + 0x10]      ; 00472182
    MOV EBP,dword ptr [EBP + 0x14]      ; 00472185
    PXOR MM7,MM7                        ; 00472188
    MOVD MM5,dword ptr [0x01c6e2bc]     ; 0047218b | DAT_01c6e2bc
    PUNPCKLBW MM5,MM7                   ; 00472192
    PSLLW MM5,0x6                       ; 00472195
    MOV EAX,dword ptr [EBX]             ; 00472199
    MOV EAX,dword ptr [EBX + 0x20]      ; 0047219b
    MOV EAX,dword ptr [EBX + 0x40]      ; 0047219e
    MOV EAX,dword ptr [EBX + 0x60]      ; 004721a1
    MOV EAX,dword ptr [EBX + 0x80]      ; 004721a4
    MOV EAX,dword ptr [EBX + 0xa0]      ; 004721aa
    MOV EAX,dword ptr [EBX + 0xc0]      ; 004721b0
    MOV EAX,dword ptr [EBX + 0xe0]      ; 004721b6
    MOV EAX,dword ptr [EBX + 0x100]     ; 004721bc
    MOV EAX,dword ptr [EBX + 0x120]     ; 004721c2
    MOV EDX,dword ptr [EBP]             ; 004721c8
    MOV EDX,dword ptr [EBP + 0x20]      ; 004721cb
    MOV EDX,dword ptr [EBP + 0x40]      ; 004721ce
    MOV EDX,dword ptr [EBP + 0x60]      ; 004721d1
    MOV EDX,dword ptr [EBP + 0x80]      ; 004721d4
    MOV EDX,dword ptr [EBP + 0xa0]      ; 004721da
    MOV EDX,dword ptr [EBP + 0xc0]      ; 004721e0
    MOV EDX,dword ptr [EBP + 0xe0]      ; 004721e6
    MOV EDX,dword ptr [EBP + 0x100]     ; 004721ec
    MOV EDX,dword ptr [EBP + 0x120]     ; 004721f2
    MOV EAX,dword ptr [ESI]             ; 004721f8
    MOV EAX,dword ptr [ESI + 0x20]      ; 004721fa
    MOV EAX,dword ptr [ESI + 0x40]      ; 004721fd
    MOV EAX,dword ptr [ESI + 0x60]      ; 00472200
    MOV EAX,dword ptr [ESI + 0x80]      ; 00472203
    MOV EAX,dword ptr [ESI + 0xa0]      ; 00472209
    MOV EAX,dword ptr [ESI + 0xc0]      ; 0047220f
    MOV EAX,dword ptr [ESI + 0xe0]      ; 00472215
    MOV EAX,dword ptr [ESI + 0x100]     ; 0047221b
    MOV EAX,dword ptr [ESI + 0x120]     ; 00472221
    MOV EAX,dword ptr [ESI + 0x140]     ; 00472227
    MOV EAX,dword ptr [ESI + 0x160]     ; 0047222d
    MOV EAX,dword ptr [ESI + 0x180]     ; 00472233
    MOV EAX,dword ptr [ESI + 0x1a0]     ; 00472239
    MOV EAX,dword ptr [ESI + 0x1c0]     ; 0047223f
    MOV EAX,dword ptr [ESI + 0x1e0]     ; 00472245
    MOV EAX,dword ptr [ESI + 0x200]     ; 0047224b
    MOV EAX,dword ptr [ESI + 0x220]     ; 00472251
    MOV EAX,dword ptr [ESI + 0x240]     ; 00472257
    MOV EAX,dword ptr [ESI + 0x260]     ; 0047225d
    MOV EAX,dword ptr [ESI + 0x280]     ; 00472263
    MOV EAX,dword ptr [ESI + 0x2a0]     ; 00472269
    MOV EAX,dword ptr [ESI + 0x2c0]     ; 0047226f
    MOV EAX,dword ptr [ESI + 0x2e0]     ; 00472275
    MOV EAX,dword ptr [ESI + 0x300]     ; 0047227b
    MOV EAX,dword ptr [ESI + 0x320]     ; 00472281
    MOV EAX,dword ptr [ESI + 0x340]     ; 00472287
    MOV EAX,dword ptr [ESI + 0x360]     ; 0047228d
    MOV EAX,dword ptr [ESI + 0x380]     ; 00472293
    MOV EAX,dword ptr [ESI + 0x3a0]     ; 00472299
    MOV EAX,dword ptr [ESI + 0x3c0]     ; 0047229f
    MOV EAX,dword ptr [ESI + 0x3e0]     ; 004722a5
    MOV EAX,dword ptr [ESI + 0x400]     ; 004722ab
    MOV EAX,dword ptr [ESI + 0x420]     ; 004722b1
    MOV EAX,dword ptr [ESI + 0x440]     ; 004722b7
    MOV EAX,dword ptr [ESI + 0x460]     ; 004722bd
    MOV EAX,dword ptr [ESI + 0x480]     ; 004722c3
    MOV EAX,dword ptr [ESI + 0x4a0]     ; 004722c9
    MOV EAX,dword ptr [ESI + 0x4c0]     ; 004722cf
    MOV EAX,dword ptr [ESI + 0x4e0]     ; 004722d5
    MOV EAX,dword ptr [ESI + 0x500]     ; 004722db
    MOV EAX,dword ptr [ESI + 0x520]     ; 004722e1
    MOV EAX,dword ptr [ESI + 0x540]     ; 004722e7
    MOV EAX,dword ptr [ESI + 0x560]     ; 004722ed
    MOV EAX,dword ptr [ESI + 0x580]     ; 004722f3
    MOV EAX,dword ptr [ESI + 0x5a0]     ; 004722f9
    MOV EAX,dword ptr [ESI + 0x5c0]     ; 004722ff
    MOV EAX,dword ptr [ESI + 0x5e0]     ; 00472305
    MOV EAX,dword ptr [ESI + 0x600]     ; 0047230b
    MOV EAX,dword ptr [ESI + 0x620]     ; 00472311
    MOV EAX,dword ptr [ESI + 0x640]     ; 00472317
    MOV EAX,dword ptr [ESI + 0x660]     ; 0047231d
    MOV EAX,dword ptr [ESI + 0x680]     ; 00472323
    MOV EAX,dword ptr [ESI + 0x6a0]     ; 00472329
    MOV EAX,dword ptr [ESI + 0x6c0]     ; 0047232f
    MOV EAX,dword ptr [ESI + 0x6e0]     ; 00472335
    MOV EAX,dword ptr [ESI + 0x700]     ; 0047233b
    MOV EAX,dword ptr [ESI + 0x720]     ; 00472341
    MOV EAX,dword ptr [ESI + 0x740]     ; 00472347
    MOV EAX,dword ptr [ESI + 0x760]     ; 0047234d
    MOV EAX,dword ptr [ESI + 0x780]     ; 00472353
    MOV EAX,dword ptr [ESI + 0x7a0]     ; 00472359
    MOV EAX,dword ptr [ESI + 0x7c0]     ; 0047235f
    MOV EAX,dword ptr [ESI + 0x7e0]     ; 00472365
    MOV EAX,dword ptr [ESI + 0x800]     ; 0047236b
    MOV EAX,dword ptr [ESI + 0x820]     ; 00472371
    MOV EAX,dword ptr [ESI + 0x840]     ; 00472377
    MOV EAX,dword ptr [ESI + 0x860]     ; 0047237d
    MOV EAX,dword ptr [ESI + 0x880]     ; 00472383
    MOV EAX,dword ptr [ESI + 0x8a0]     ; 00472389
    MOV EAX,dword ptr [ESI + 0x8c0]     ; 0047238f
    MOV EAX,dword ptr [ESI + 0x8e0]     ; 00472395
    MOV EAX,dword ptr [ESI + 0x900]     ; 0047239b
    MOV EAX,dword ptr [ESI + 0x920]     ; 004723a1
    MOV EAX,dword ptr [ESI + 0x940]     ; 004723a7
    MOV EAX,dword ptr [ESI + 0x960]     ; 004723ad
    MOV EAX,dword ptr [ESI + 0x980]     ; 004723b3
    MOV EAX,dword ptr [ESI + 0x9a0]     ; 004723b9
    MOV EAX,dword ptr [ESI + 0x9c0]     ; 004723bf
    MOV EAX,dword ptr [ESI + 0x9e0]     ; 004723c5
    MOV EAX,[0x00b9e14c]                ; 004723cb | DAT_00b9e14c
    MOV EAX,[0x00b9e16c]                ; 004723d0 | DAT_00b9e16c
    MOV EAX,[0x00b9e18c]                ; 004723d5 | DAT_00b9e18c
    MOV EAX,[0x00b9e1ac]                ; 004723da | DAT_00b9e1ac
    MOV EAX,[0x00b9e1cc]                ; 004723df | DAT_00b9e1cc
    MOV EAX,[0x00b9e1ec]                ; 004723e4 | DAT_00b9e1ec
    MOV EAX,[0x00b9e20c]                ; 004723e9 | DAT_00b9e20c
    MOV EAX,[0x00b9e22c]                ; 004723ee | DAT_00b9e22c
    MOV EAX,[0x00b9e24c]                ; 004723f3 | DAT_00b9e24c
    MOV EAX,[0x00b9e26c]                ; 004723f8 | DAT_00b9e26c
    MOV EAX,[0x00b9e28c]                ; 004723fd | DAT_00b9e28c
    MOV EAX,[0x00b9e2ac]                ; 00472402 | DAT_00b9e2ac
    MOV EAX,[0x00b9e2cc]                ; 00472407 | DAT_00b9e2cc
    MOV EAX,[0x00b9e2ec]                ; 0047240c | DAT_00b9e2ec
    MOV EAX,[0x00b9e30c]                ; 00472411 | DAT_00b9e30c
    MOV EAX,[0x00b9e32c]                ; 00472416 | DAT_00b9e32c
    MOV EAX,[0x00b9e34c]                ; 0047241b | DAT_00b9e34c
    MOV EAX,[0x00b9e36c]                ; 00472420 | DAT_00b9e36c
    MOV EAX,[0x00b9e38c]                ; 00472425 | DAT_00b9e38c
    MOV EAX,[0x00b9e3ac]                ; 0047242a | DAT_00b9e3ac
    MOV EAX,[0x00b9e3cc]                ; 0047242f | DAT_00b9e3cc
    MOV EAX,[0x00b9e3ec]                ; 00472434 | DAT_00b9e3ec
    MOV EAX,[0x00b9e40c]                ; 00472439 | DAT_00b9e40c
    MOV EAX,[0x00b9e42c]                ; 0047243e | DAT_00b9e42c
    MOV EAX,[0x00b9e44c]                ; 00472443 | DAT_00b9e44c
    MOV EAX,[0x00b9e46c]                ; 00472448 | DAT_00b9e46c
    MOV EAX,[0x00b9e48c]                ; 0047244d | DAT_00b9e48c
    MOV EAX,[0x00b9e4ac]                ; 00472452 | DAT_00b9e4ac
    MOV EAX,[0x00b9e4cc]                ; 00472457 | DAT_00b9e4cc
    MOV EAX,[0x00b9e4ec]                ; 0047245c | DAT_00b9e4ec
    MOV EAX,[0x00b9e50c]                ; 00472461 | DAT_00b9e50c
    MOV EAX,[0x00b9e52c]                ; 00472466 | DAT_00b9e52c
    MOV EAX,[0x005fa0e0]                ; 0047246b | DAT_005fa0e0
    MOV EAX,[0x005fa100]                ; 00472470 | DAT_005fa100
    MOV EAX,[0x005fa120]                ; 00472475 | DAT_005fa120
    MOV EAX,[0x005fa140]                ; 0047247a | DAT_005fa140
    MOV EAX,[0x005fa160]                ; 0047247f | DAT_005fa160
    MOV EAX,[0x005fa180]                ; 00472484 | DAT_005fa180
    MOV EAX,[0x005fa1a0]                ; 00472489 | DAT_005fa1a0
    MOV EAX,[0x005fa1c0]                ; 0047248e | DAT_005fa1c0
    MOV EAX,[0x005fa1e0]                ; 00472493 | DAT_005fa1e0
    MOV EAX,[0x005fa200]                ; 00472498 | DAT_005fa200
    MOV EAX,[0x005fa220]                ; 0047249d | DAT_005fa220
    MOV EAX,[0x005fa240]                ; 004724a2 | DAT_005fa240
    MOV EAX,[0x005fa260]                ; 004724a7 | DAT_005fa260
    MOV EAX,[0x005fa280]                ; 004724ac | DAT_005fa280
    MOV EAX,[0x005fa2a0]                ; 004724b1 | DAT_005fa2a0
    MOV EAX,[0x005fa2c0]                ; 004724b6 | DAT_005fa2c0
    MOV EAX,[0x005fa2e0]                ; 004724bb | DAT_005fa2e0
    MOV EAX,[0x005fa300]                ; 004724c0 | DAT_005fa300
    MOV EAX,[0x005fa320]                ; 004724c5 | DAT_005fa320
    MOV EAX,[0x005fa340]                ; 004724ca | DAT_005fa340
    MOV EAX,[0x005fa360]                ; 004724cf | DAT_005fa360
    MOV EAX,[0x005fa380]                ; 004724d4 | DAT_005fa380
    MOV EAX,[0x005fa3a0]                ; 004724d9 | DAT_005fa3a0
    MOV EAX,[0x005fa3c0]                ; 004724de | DAT_005fa3c0
    MOV EAX,[0x005fa3e0]                ; 004724e3 | DAT_005fa3e0
    MOV EAX,[0x005fa400]                ; 004724e8 | DAT_005fa400
    MOV EAX,[0x005fa420]                ; 004724ed | DAT_005fa420
    MOV EAX,[0x005fa440]                ; 004724f2 | DAT_005fa440
    MOV EAX,[0x005fa460]                ; 004724f7 | DAT_005fa460
    MOV EAX,[0x005fa480]                ; 004724fc | DAT_005fa480
    MOV EAX,[0x005fa4a0]                ; 00472501 | DAT_005fa4a0
    MOV EAX,[0x005fa4c0]                ; 00472506 | DAT_005fa4c0
    MOV EAX,[0x005fa4e0]                ; 0047250b | DAT_005fa4e0
    MOV EAX,[0x005fa500]                ; 00472510 | DAT_005fa500
    MOV EAX,[0x005fa520]                ; 00472515 | DAT_005fa520
    MOV EAX,[0x005fa540]                ; 0047251a | DAT_005fa540
    MOV EAX,[0x005fa560]                ; 0047251f | DAT_005fa560
    MOV EAX,[0x005fa580]                ; 00472524 | DAT_005fa580
    MOV EAX,[0x005fa5a0]                ; 00472529 | DAT_005fa5a0
    MOV EAX,[0x005fa5c0]                ; 0047252e | DAT_005fa5c0
    MOV EAX,[0x005fa5e0]                ; 00472533 | DAT_005fa5e0
    MOV EAX,[0x005fa600]                ; 00472538 | DAT_005fa600
    MOV EAX,[0x005fa620]                ; 0047253d | DAT_005fa620
    MOV EAX,[0x005fa640]                ; 00472542 | DAT_005fa640
    MOV EAX,[0x005fa660]                ; 00472547 | DAT_005fa660
    MOV EAX,[0x005fa680]                ; 0047254c | DAT_005fa680
    MOV EAX,[0x005fa6a0]                ; 00472551 | DAT_005fa6a0
    MOV EAX,[0x005fa6c0]                ; 00472556 | DAT_005fa6c0
    MOV EAX,[0x005fa6e0]                ; 0047255b | DAT_005fa6e0
    MOV EAX,[0x005fa700]                ; 00472560 | DAT_005fa700
    MOV EAX,[0x005fa720]                ; 00472565 | DAT_005fa720
    MOV EAX,[0x005fa740]                ; 0047256a | DAT_005fa740
    MOV EAX,[0x005fa760]                ; 0047256f | DAT_005fa760
    MOV EAX,[0x005fa780]                ; 00472574 | DAT_005fa780
    MOV EAX,[0x005fa7a0]                ; 00472579 | DAT_005fa7a0
    MOV EAX,[0x005fa7c0]                ; 0047257e | DAT_005fa7c0
    MOV EAX,[0x005fa7e0]                ; 00472583 | DAT_005fa7e0
    MOV EAX,[0x005fa800]                ; 00472588 | DAT_005fa800
    MOV EAX,[0x005fa820]                ; 0047258d | DAT_005fa820
    MOV EAX,[0x005fa840]                ; 00472592 | DAT_005fa840
    MOV EAX,[0x005fa860]                ; 00472597 | DAT_005fa860
    MOV EAX,[0x005fa880]                ; 0047259c | DAT_005fa880
    MOV EAX,[0x005fa8a0]                ; 004725a1 | DAT_005fa8a0
    MOV EAX,[0x005fa8c0]                ; 004725a6 | DAT_005fa8c0
    JMP 0x004725b0                      ; 004725ab
        ;   XREF to: 004725b0 (UNCONDITIONAL_JUMP)  ; LAB_004725b0
    MOVZX EDX,byte ptr [EBX]            ; 004725b0
        ;   Label: LAB_004725b0
    MOVQ MM0,qword ptr [ESI]            ; 004725b3
    MOVD MM2,dword ptr [EDX*0x4 + 0xb9e14c] ; 004725b6 | DAT_00b9e14c
    MOVZX EDX,byte ptr [EBX + 0x1]      ; 004725be
    MOVZX EAX,byte ptr [EBP]            ; 004725c2
    MOVD MM6,dword ptr [EDX*0x4 + 0xb9e14c] ; 004725c6 | DAT_00b9e14c
    MOVQ MM1,MM0                        ; 004725ce
    PUNPCKLBW MM6,MM7                   ; 004725d1
    PUNPCKLBW MM0,MM7                   ; 004725d4
    SHR EDX,0x1                         ; 004725d7
    PSRLQ MM1,0x20                      ; 004725d9
    PUNPCKLBW MM2,MM7                   ; 004725dd
    ADD EAX,EDX                         ; 004725e0
    PADDW MM6,MM2                       ; 004725e2
    PUNPCKLBW MM1,MM7                   ; 004725e5
    PMULLW MM0,MM2                      ; 004725e8
    PSRLW MM6,0x1                       ; 004725eb
    MOVQ MM3,qword ptr [EAX*0x8 + 0x5fa0e0] ; 004725ef | DAT_005fa0e0
    PMULLW MM1,MM6                      ; 004725f7
    MOVQ MM2,MM3                        ; 004725fa
    MOVQ MM4,MM5                        ; 004725fd
    PXOR MM2,qword ptr [0x005fa8d8]     ; 00472600 | DAT_005fa8d8
    PMULHW MM0,MM2                      ; 00472607
    PMULHW MM1,MM2                      ; 0047260a
    PMULHW MM4,MM3                      ; 0047260d
    PADDW MM0,MM4                       ; 00472610
    PADDW MM1,MM4                       ; 00472613
    PADDW MM0,qword ptr [0x005f8b88]    ; 00472616 | DAT_005f8b88
    PADDW MM1,qword ptr [0x005f8b90]    ; 0047261d | DAT_005f8b90
    PSRLW MM0,0x4                       ; 00472624
    PSRLW MM1,0x4                       ; 00472628
    PACKUSWB MM0,MM7                    ; 0047262c
    PACKUSWB MM1,MM7                    ; 0047262f
    MOVQ MM2,MM0                        ; 00472632
    MOVQ MM3,MM0                        ; 00472635
    PAND MM0,qword ptr [0x00604eb8]     ; 00472638 | DAT_00604eb8
    PAND MM2,qword ptr [0x00604e98]     ; 0047263f | DAT_00604e98
    PAND MM3,qword ptr [0x00604e78]     ; 00472646 | DAT_00604e78
    PSRLQ MM0,qword ptr [0x00604f00]    ; 0047264d | DAT_00604f00
    PSRLQ MM2,qword ptr [0x00604ee0]    ; 00472654 | DAT_00604ee0
    PSRLQ MM3,qword ptr [0x00604ec0]    ; 0047265b | DAT_00604ec0
    POR MM0,MM2                         ; 00472662
    POR MM0,MM3                         ; 00472665
    MOVQ MM2,MM1                        ; 00472668
    MOVQ MM3,MM1                        ; 0047266b
    PAND MM1,qword ptr [0x00604eb8]     ; 0047266e | DAT_00604eb8
    PAND MM2,qword ptr [0x00604e98]     ; 00472675 | DAT_00604e98
    PAND MM3,qword ptr [0x00604e78]     ; 0047267c | DAT_00604e78
    PSRLQ MM1,qword ptr [0x00604f00]    ; 00472683 | DAT_00604f00
    PSRLQ MM2,qword ptr [0x00604ee0]    ; 0047268a | DAT_00604ee0
    PSRLQ MM3,qword ptr [0x00604ec0]    ; 00472691 | DAT_00604ec0
    POR MM1,MM2                         ; 00472698
    POR MM1,MM3                         ; 0047269b
    PSLLQ MM1,0x10                      ; 0047269e
    POR MM0,MM1                         ; 004726a2
    ADD ESI,0x8                         ; 004726a5
    INC EBX                             ; 004726a8
    INC EBP                             ; 004726a9
    MOVD dword ptr [EDI],MM0            ; 004726aa
    ADD EDI,0x4                         ; 004726ad
    SUB ECX,0x2                         ; 004726b0
    JG 0x004725b0                       ; 004726b3
        ;   XREF to: 004725b0 (CONDITIONAL_JUMP)  ; LAB_004725b0
    POP EBP                             ; 004726b9
    EMMS                                ; 004726ba
    POP EDI                             ; 004726bc
    POP ESI                             ; 004726bd
    LEAVE                               ; 004726be
    RET                                 ; 004726bf

