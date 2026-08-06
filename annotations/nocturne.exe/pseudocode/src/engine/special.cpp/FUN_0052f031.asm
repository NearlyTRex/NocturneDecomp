; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_special_cpp_FUN_0052f031(void)
;
;
; XREF[70]:
;   engine_3d.c_FUN_00406a00 at 00406abc
;   engine_3d.c_FUN_00406b80 at 00406c3c
;   engine_3d.c_renderPolygonAdaptiveDepthOp25_FUN_004060b0 at 0040616e
;   engine_3d.c_renderPolygonAdaptiveFogTexturedOp52_FUN_00407a20 at 00407af6
;   engine_3d.c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_00405e10 at 00405ebd
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00408510 at 004085a4
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_004083d0 at 00408464
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedOp36_FUN_00406c60 at 00406ce9
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedPerspOp37_FUN_00406d80 at 00406e09
;   engine_3d.c_renderPolygonAlphaTexturedNormalizedLit_FUN_00406ae0 at 00406b68
;   ... and 60 more
;
; Referenced Globals:
;   undefined4 DAT_005b763c
;   undefined4 DAT_005bf014
;   undefined4 DAT_005bf050
;   undefined4 DAT_005bf054
;   undefined4 DAT_005bf05c
;   undefined4 DAT_005bf078
;   undefined4 DAT_005bf07c
;   undefined4 DAT_005bf480
;   undefined4 DAT_005bf484
;   undefined4 DAT_005bf488
;   undefined8 DAT_005bf48c
;   undefined8 DAT_005bf500
;   undefined4 DAT_005bf508
;   undefined4 DAT_005bf510
;   undefined8 DAT_005bf520
;   ... and 23 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0052f031
        ;   Label: engine_special.cpp_FUN_0052f031
    PUSH EDI                            ; 0052f032
    PUSH EBP                            ; 0052f033
    MOV EAX,dword ptr [ESI + 0x8]       ; 0052f034
    MOV ECX,dword ptr [EDI + 0x8]       ; 0052f037
    CMP EAX,ECX                         ; 0052f03a
    JBE 0x0052f041                      ; 0052f03c
        ;   XREF to: 0052f041 (CONDITIONAL_JUMP)  ; LAB_0052f041
    XCHG EAX,ECX                        ; 0052f03e
    XCHG EDI,ESI                        ; 0052f03f
    SHR ECX,0x10                        ; 0052f041
        ;   Label: LAB_0052f041
    SHR EAX,0x10                        ; 0052f044
    MOV EBP,dword ptr [EBX*0x4 + 0x1bd4260] ; 0052f047 | DAT_01bd4260
    MOV EBX,dword ptr [EBX*0x4 + 0x1bd2fa0] ; 0052f04e | DAT_01bd2fa0
    SUB ECX,EAX                         ; 0052f055
    JLE 0x0052f4e0                      ; 0052f057
        ;   XREF to: 0052f4e0 (CONDITIONAL_JUMP)  ; LAB_0052f4e0
    LEA EBX,[EBX + EAX*0x4]             ; 0052f05d
    SHL ECX,0x2                         ; 0052f060
    LEA EBP,[EBP + EAX*0x4]             ; 0052f063
    MOV dword ptr [0x005bf014],ECX      ; 0052f067 | DAT_005bf014
    MOV dword ptr [0x005bf078],EBX      ; 0052f06d | DAT_005bf078
    MOV dword ptr [0x005bf07c],EBP      ; 0052f073 | DAT_005bf07c
    CMP dword ptr [0x01c039a0],0x80     ; 0052f079 | DAT_01c039a0
    JZ 0x0052f7e0                       ; 0052f083
        ;   XREF to: 0052f7e0 (CONDITIONAL_JUMP)  ; LAB_0052f7e0
    CMP dword ptr [0x01c039a4],0x5      ; 0052f089 | DAT_01c039a4
    JNZ 0x0052f102                      ; 0052f090
        ;   XREF to: 0052f102 (CONDITIONAL_JUMP)  ; LAB_0052f102
    MOV EAX,dword ptr [ESI + 0x18]      ; 0052f092
    MOV EBX,dword ptr [ESI + 0x28]      ; 0052f095
    CDQ                                 ; 0052f098
    SHLD EDX,EAX,0x18                   ; 0052f099
    SHL EAX,0x18                        ; 0052f09d
    IDIV EBX                            ; 0052f0a0
    MOV [0x005bf050],EAX                ; 0052f0a2 | DAT_005bf050
    MOV EAX,dword ptr [EDI + 0x18]      ; 0052f0a7
    MOV EBX,dword ptr [EDI + 0x28]      ; 0052f0aa
    CDQ                                 ; 0052f0ad
    SHLD EDX,EAX,0x18                   ; 0052f0ae
    SHL EAX,0x18                        ; 0052f0b2
    IDIV EBX                            ; 0052f0b5
    SUB EAX,dword ptr [0x005bf050]      ; 0052f0b7 | DAT_005bf050
    IMUL dword ptr [ECX + 0x1c00c84]    ; 0052f0bd | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x005bf480],EDX      ; 0052f0c3 | DAT_005bf480
    MOV EAX,dword ptr [ESI + 0x20]      ; 0052f0c9
    MOV EBX,dword ptr [ESI + 0x28]      ; 0052f0cc
    CDQ                                 ; 0052f0cf
    SHLD EDX,EAX,0x18                   ; 0052f0d0
    SHL EAX,0x18                        ; 0052f0d4
    IDIV EBX                            ; 0052f0d7
    MOV [0x005bf054],EAX                ; 0052f0d9 | DAT_005bf054
    MOV EAX,dword ptr [EDI + 0x20]      ; 0052f0de
    MOV EBX,dword ptr [EDI + 0x28]      ; 0052f0e1
    CDQ                                 ; 0052f0e4
    SHLD EDX,EAX,0x18                   ; 0052f0e5
    SHL EAX,0x18                        ; 0052f0e9
    IDIV EBX                            ; 0052f0ec
    SUB EAX,dword ptr [0x005bf054]      ; 0052f0ee | DAT_005bf054
    IMUL dword ptr [ECX + 0x1c00c84]    ; 0052f0f4 | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x005bf484],EDX      ; 0052f0fa | DAT_005bf484
    JMP 0x0052f136                      ; 0052f100
        ;   XREF to: 0052f136 (UNCONDITIONAL_JUMP)  ; LAB_0052f136
    MOV EAX,dword ptr [EDI + 0x18]      ; 0052f102
        ;   Label: LAB_0052f102
    MOV EBX,dword ptr [ESI + 0x18]      ; 0052f105
    SUB EAX,EBX                         ; 0052f108
    IMUL dword ptr [ECX + 0x1c00c84]    ; 0052f10a | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x005bf050],EBX      ; 0052f110 | DAT_005bf050
    MOV dword ptr [0x005bf480],EDX      ; 0052f116 | DAT_005bf480
    MOV EAX,dword ptr [EDI + 0x20]      ; 0052f11c
    MOV EBX,dword ptr [ESI + 0x20]      ; 0052f11f
    SUB EAX,EBX                         ; 0052f122
    IMUL dword ptr [ECX + 0x1c00c84]    ; 0052f124 | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x005bf054],EBX      ; 0052f12a | DAT_005bf054
    MOV dword ptr [0x005bf484],EDX      ; 0052f130 | DAT_005bf484
    MOV EAX,dword ptr [EDI + 0x28]      ; 0052f136
        ;   Label: LAB_0052f136
    MOV EBX,dword ptr [ESI + 0x28]      ; 0052f139
    SUB EAX,EBX                         ; 0052f13c
    IMUL dword ptr [ECX + 0x1c00c84]    ; 0052f13e | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x005bf05c],EBX      ; 0052f144 | DAT_005bf05c
    MOV dword ptr [0x005bf488],EDX      ; 0052f14a | DAT_005bf488
    MOV EAX,dword ptr [EDI + 0x30]      ; 0052f150
    MOV EBX,dword ptr [ESI + 0x30]      ; 0052f153
    SUB EAX,EBX                         ; 0052f156
    IMUL dword ptr [ECX + 0x1c00c84]    ; 0052f158 | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x005bf540],EBX      ; 0052f15e | DAT_005bf540
    MOV dword ptr [0x005bf548],EDX      ; 0052f164 | DAT_005bf548
    MOV EBP,dword ptr [0x005bf540]      ; 0052f16a | DAT_005bf540
    PXOR MM7,MM7                        ; 0052f170
    TEST dword ptr [0x01c039a0],0x200   ; 0052f173 | DAT_01c039a0
    JNZ 0x0052f1c0                      ; 0052f17d
        ;   XREF to: 0052f1c0 (CONDITIONAL_JUMP)  ; LAB_0052f1c0
    TEST dword ptr [0x01c039a0],0x4     ; 0052f17f | DAT_01c039a0
    JNZ 0x0052f280                      ; 0052f189
        ;   XREF to: 0052f280 (CONDITIONAL_JUMP)  ; LAB_0052f280
    TEST dword ptr [0x01c039a0],0x10    ; 0052f18f | DAT_01c039a0
    JNZ 0x0052f310                      ; 0052f199
        ;   XREF to: 0052f310 (CONDITIONAL_JUMP)  ; LAB_0052f310
    MOVQ MM5,qword ptr [0x005c0668]     ; 0052f19f | DAT_005c0668
    PSLLW MM5,0x7                       ; 0052f1a6
    PXOR MM6,MM6                        ; 0052f1aa
    JMP 0x0052f340                      ; 0052f1ad
        ;   XREF to: 0052f340 (UNCONDITIONAL_JUMP)  ; LAB_0052f340
    MOV EAX,dword ptr [EDI + 0x10]      ; 0052f1c0
        ;   Label: LAB_0052f1c0
    MOV EBX,dword ptr [ESI + 0x10]      ; 0052f1c3
    SHR EAX,0x1                         ; 0052f1c6
    SHR EBX,0x1                         ; 0052f1c8
    SUB EAX,EBX                         ; 0052f1ca
    IMUL dword ptr [ECX + 0x1c00c84]    ; 0052f1cc | g_ReciprocalLookupTable[1]
    AND EBX,0xffff                      ; 0052f1d2
    AND EDX,0xffff                      ; 0052f1d8
    MOV dword ptr [0x005bf500],EBX      ; 0052f1de | DAT_005bf500
    MOV dword ptr [0x005bf520],EDX      ; 0052f1e4 | DAT_005bf520
    MOV EAX,dword ptr [EDI + 0x38]      ; 0052f1ea
    MOV EBX,dword ptr [ESI + 0x38]      ; 0052f1ed
    SHR EAX,0x1                         ; 0052f1f0
    SHR EBX,0x1                         ; 0052f1f2
    SUB EAX,EBX                         ; 0052f1f4
    IMUL dword ptr [ECX + 0x1c00c84]    ; 0052f1f6 | g_ReciprocalLookupTable[1]
    AND EBX,0xffff                      ; 0052f1fc
    AND EDX,0xffff                      ; 0052f202
    MOV dword ptr [0x005bf508],EBX      ; 0052f208 | DAT_005bf508
    MOV dword ptr [0x005bf528],EDX      ; 0052f20e | DAT_005bf528
    MOV EAX,dword ptr [EDI + 0x40]      ; 0052f214
    MOV EBX,dword ptr [ESI + 0x40]      ; 0052f217
    SHR EAX,0x1                         ; 0052f21a
    SHR EBX,0x1                         ; 0052f21c
    SUB EAX,EBX                         ; 0052f21e
    IMUL dword ptr [ECX + 0x1c00c84]    ; 0052f220 | g_ReciprocalLookupTable[1]
    AND EBX,0xffff                      ; 0052f226
    AND EDX,0xffff                      ; 0052f22c
    MOV dword ptr [0x005bf510],EBX      ; 0052f232 | DAT_005bf510
    MOV dword ptr [0x005bf530],EDX      ; 0052f238 | DAT_005bf530
    MOVQ MM5,qword ptr [0x005bf500]     ; 0052f23e | DAT_005bf500
    MOVQ MM6,qword ptr [0x005bf520]     ; 0052f245 | DAT_005bf520
    PSLLQ MM5,0x10                      ; 0052f24c
    PSLLQ MM6,0x10                      ; 0052f250
    POR MM5,qword ptr [0x005bf508]      ; 0052f254 | DAT_005bf508
    POR MM6,qword ptr [0x005bf528]      ; 0052f25b | DAT_005bf528
    PSLLQ MM5,0x10                      ; 0052f262
    PSLLQ MM6,0x10                      ; 0052f266
    POR MM5,qword ptr [0x005bf510]      ; 0052f26a | DAT_005bf510
    POR MM6,qword ptr [0x005bf530]      ; 0052f271 | DAT_005bf530
    JMP 0x0052f340                      ; 0052f278
        ;   XREF to: 0052f340 (UNCONDITIONAL_JUMP)  ; LAB_0052f340
    MOV EAX,dword ptr [EDI + 0x10]      ; 0052f280
        ;   Label: LAB_0052f280
    MOV EBX,dword ptr [ESI + 0x10]      ; 0052f283
    SUB EAX,0x100                       ; 0052f286
    SUB EBX,0x100                       ; 0052f28b
    CMP EAX,0xfff                       ; 0052f291
    JBE 0x0052f29d                      ; 0052f296
        ;   XREF to: 0052f29d (CONDITIONAL_JUMP)  ; LAB_0052f29d
    MOV EAX,0xfff                       ; 0052f298
    CMP EBX,0xfff                       ; 0052f29d
        ;   Label: LAB_0052f29d
    JBE 0x0052f2aa                      ; 0052f2a3
        ;   XREF to: 0052f2aa (CONDITIONAL_JUMP)  ; LAB_0052f2aa
    MOV EBX,0xfff                       ; 0052f2a5
    SHL EAX,0x3                         ; 0052f2aa
        ;   Label: LAB_0052f2aa
    SHL EBX,0x3                         ; 0052f2ad
    SUB EAX,EBX                         ; 0052f2b0
    IMUL dword ptr [ECX + 0x1c00c84]    ; 0052f2b2 | g_ReciprocalLookupTable[1]
    AND EBX,0xffff                      ; 0052f2b8
    AND EDX,0xffff                      ; 0052f2be
    MOV dword ptr [0x005bf500],EBX      ; 0052f2c4 | DAT_005bf500
    MOV dword ptr [0x005bf520],EDX      ; 0052f2ca | DAT_005bf520
    MOVQ MM5,qword ptr [0x005bf500]     ; 0052f2d0 | DAT_005bf500
    MOVQ MM6,qword ptr [0x005bf520]     ; 0052f2d7 | DAT_005bf520
    PSLLQ MM5,0x10                      ; 0052f2de
    PSLLQ MM6,0x10                      ; 0052f2e2
    POR MM5,qword ptr [0x005bf500]      ; 0052f2e6 | DAT_005bf500
    POR MM6,qword ptr [0x005bf520]      ; 0052f2ed | DAT_005bf520
    PSLLQ MM5,0x10                      ; 0052f2f4
    PSLLQ MM6,0x10                      ; 0052f2f8
    POR MM5,qword ptr [0x005bf500]      ; 0052f2fc | DAT_005bf500
    POR MM6,qword ptr [0x005bf520]      ; 0052f303 | DAT_005bf520
    JMP 0x0052f340                      ; 0052f30a
        ;   XREF to: 0052f340 (UNCONDITIONAL_JUMP)  ; LAB_0052f340
    MOV EAX,[0x01c00c74]                ; 0052f310 | DAT_01c00c74
        ;   Label: LAB_0052f310
    SUB EAX,0x100                       ; 0052f315
    SHR EAX,0x4                         ; 0052f31a
    CMP EAX,0xff                        ; 0052f31d
    JC 0x0052f329                       ; 0052f322
        ;   XREF to: 0052f329 (CONDITIONAL_JUMP)  ; LAB_0052f329
    MOV EAX,0xff                        ; 0052f324
    MOVQ MM5,qword ptr [EAX*0x8 + 0x5bfe70] ; 0052f329 | DAT_005c0668 | DAT_005bfe70
        ;   Label: LAB_0052f329
    PSLLW MM5,0x7                       ; 0052f331
    PXOR MM6,MM6                        ; 0052f335
    JMP 0x0052f340                      ; 0052f338
        ;   XREF to: 0052f340 (UNCONDITIONAL_JUMP)  ; LAB_0052f340
    MOV ECX,dword ptr [0x005bf050]      ; 0052f340 | DAT_005bf050
        ;   Label: LAB_0052f340
    MOV EDX,dword ptr [0x005bf054]      ; 0052f346 | DAT_005bf054
    MOV ESI,dword ptr [0x005bf05c]      ; 0052f34c | DAT_005bf05c
    MOV EDI,0x0                         ; 0052f352
    CMP dword ptr [0x01c02584],0x0      ; 0052f357 | DAT_01c02584
    JNZ 0x0052f370                      ; 0052f35e
        ;   XREF to: 0052f370 (CONDITIONAL_JUMP)  ; LAB_0052f370
    TEST dword ptr [0x01c039a0],0x2     ; 0052f360 | DAT_01c039a0
    JZ 0x0052f676                       ; 0052f36a
        ;   XREF to: 0052f676 (CONDITIONAL_JUMP)  ; LAB_0052f676
    TEST dword ptr [0x01c039a0],0x100   ; 0052f370 | DAT_01c039a0
        ;   Label: LAB_0052f370
    JNZ 0x0052f38f                      ; 0052f37a
        ;   XREF to: 0052f38f (CONDITIONAL_JUMP)  ; LAB_0052f38f
    MOV EBP,dword ptr [0x005b763c]      ; 0052f37c | DAT_005b763c
    SHL EBP,0x8                         ; 0052f382
    MOV dword ptr [0x005bf548],0x0      ; 0052f385 | DAT_005bf548
    CMP dword ptr [0x01c02584],0x0      ; 0052f38f | DAT_01c02584
        ;   Label: LAB_0052f38f
    JNZ 0x0052f4f0                      ; 0052f396
        ;   XREF to: 0052f4f0 (CONDITIONAL_JUMP)  ; LAB_0052f4f0
    TEST dword ptr [0x01c039a0],0x40    ; 0052f39c | DAT_01c039a0
        ;   Label: LAB_0052f39c
    JZ 0x0052f3b8                       ; 0052f3a6
        ;   XREF to: 0052f3b8 (CONDITIONAL_JUMP)  ; LAB_0052f3b8
    LEA EAX,[EDI]                       ; 0052f3a8
    ADD EAX,dword ptr [0x005bf07c]      ; 0052f3aa | DAT_005bf07c
    CMP ESI,dword ptr [EAX]             ; 0052f3b0
    JL 0x0052f4a2                       ; 0052f3b2
        ;   XREF to: 0052f4a2 (CONDITIONAL_JUMP)  ; LAB_0052f4a2
    MOVD MM0,ECX                        ; 0052f3b8
        ;   Label: LAB_0052f3b8
    MOVD MM2,EDX                        ; 0052f3bb
    PSRLQ MM0,qword ptr [0x005bf550]    ; 0052f3be | DAT_005bf550
    PSRLQ MM2,qword ptr [0x005bf570]    ; 0052f3c5 | DAT_005bf570
    PAND MM0,qword ptr [0x005bf590]     ; 0052f3cc | DAT_005bf590
    PAND MM2,qword ptr [0x005bf5b0]     ; 0052f3d3 | DAT_005bf5b0
    PADDD MM0,MM2                       ; 0052f3da
    MOVD EBX,MM0                        ; 0052f3dd
    ADD EBX,dword ptr [0x01c02580]      ; 0052f3e0 | DAT_01c02580
    MOVZX EAX,byte ptr [EBX]            ; 0052f3e6
    MOV EAX,dword ptr [EAX*0x4 + 0x1c00024] ; 0052f3e9 | DAT_01c00024
    CMP EAX,0x0                         ; 0052f3f0
    JZ 0x0052f4a2                       ; 0052f3f3
        ;   XREF to: 0052f4a2 (CONDITIONAL_JUMP)  ; LAB_0052f4a2
    MOVD MM0,EAX                        ; 0052f3f9
    PUNPCKLBW MM0,MM7                   ; 0052f3fc
    PXOR MM4,MM4                        ; 0052f3ff
    TEST dword ptr [0x01c039a0],0x20    ; 0052f402 | DAT_01c039a0
    JZ 0x0052f41c                       ; 0052f40c
        ;   XREF to: 0052f41c (CONDITIONAL_JUMP)  ; LAB_0052f41c
    MOV EBX,EDI                         ; 0052f40e
    ADD EBX,dword ptr [0x005bf078]      ; 0052f410 | DAT_005bf078
    MOVD MM4,dword ptr [EBX]            ; 0052f416
    PUNPCKLBW MM4,MM7                   ; 0052f419
    PSLLW MM0,0x4                       ; 0052f41c
        ;   Label: LAB_0052f41c
    MOVQ MM7,MM5                        ; 0052f420
    MOV EAX,EBP                         ; 0052f423
    PSRLW MM7,0x3                       ; 0052f425
    SAR EAX,0x8                         ; 0052f429
    PMULHW MM0,MM7                      ; 0052f42c
    MOVQ MM2,qword ptr [EAX*0x8 + 0x5bfe70] ; 0052f42f | DAT_005c0668
    PXOR MM7,MM7                        ; 0052f437
    MOVQ MM3,MM2                        ; 0052f43a
    PACKUSWB MM0,MM7                    ; 0052f43d
    PXOR MM3,qword ptr [0x005c0668]     ; 0052f440 | DAT_005c0668
    PUNPCKLBW MM0,MM7                   ; 0052f447
    CMP dword ptr [0x01c03998],0x0      ; 0052f44a | DAT_01c03998
    JNZ 0x0052f470                      ; 0052f451
        ;   XREF to: 0052f470 (CONDITIONAL_JUMP)  ; LAB_0052f470
    PMULLW MM4,MM3                      ; 0052f453
    PMULLW MM0,MM2                      ; 0052f456
    PADDUSW MM0,MM4                     ; 0052f459
    PSRLW MM0,0x8                       ; 0052f45c
    PACKUSWB MM0,MM7                    ; 0052f460
    JMP 0x0052f481                      ; 0052f463
        ;   XREF to: 0052f481 (UNCONDITIONAL_JUMP)  ; LAB_0052f481
    PSLLW MM4,0x8                       ; 0052f470
        ;   Label: LAB_0052f470
    PMULLW MM0,MM2                      ; 0052f474
    PADDUSW MM0,MM4                     ; 0052f477
    PSRLW MM0,0x8                       ; 0052f47a
    PACKUSWB MM0,MM7                    ; 0052f47e
    MOV EBX,EDI                         ; 0052f481
        ;   Label: LAB_0052f481
    ADD EBX,dword ptr [0x005bf078]      ; 0052f483 | DAT_005bf078
    MOVD dword ptr [EBX],MM0            ; 0052f489
    TEST dword ptr [0x01c039a0],0x80    ; 0052f48c | DAT_01c039a0
    JZ 0x0052f4a2                       ; 0052f496
        ;   XREF to: 0052f4a2 (CONDITIONAL_JUMP)  ; LAB_0052f4a2
    MOV EAX,EDI                         ; 0052f498
    ADD EAX,dword ptr [0x005bf07c]      ; 0052f49a | DAT_005bf07c
    MOV dword ptr [EAX],ESI             ; 0052f4a0
    ADD EDI,0x4                         ; 0052f4a2
        ;   Label: LAB_0052f4a2
    CMP EDI,dword ptr [0x005bf014]      ; 0052f4a5 | DAT_005bf014
    JNC 0x0052f4e0                      ; 0052f4ab
        ;   XREF to: 0052f4e0 (CONDITIONAL_JUMP)  ; LAB_0052f4e0
    ADD ECX,dword ptr [0x005bf480]      ; 0052f4ad | DAT_005bf480
    PADDW MM5,MM6                       ; 0052f4b3
    ADD EDX,dword ptr [0x005bf484]      ; 0052f4b6 | DAT_005bf484
    MOVQ MM0,MM5                        ; 0052f4bc
    ADD ESI,dword ptr [0x005bf488]      ; 0052f4bf | DAT_005bf488
    PCMPGTW MM5,qword ptr [0x005bf48c]  ; 0052f4c5 | DAT_005bf48c
    ADD EBP,dword ptr [0x005bf548]      ; 0052f4cc | DAT_005bf548
    PAND MM5,MM0                        ; 0052f4d2
    JMP 0x0052f39c                      ; 0052f4d5
        ;   XREF to: 0052f39c (UNCONDITIONAL_JUMP)  ; LAB_0052f39c
    POP EBP                             ; 0052f4e0
        ;   Label: LAB_0052f4e0
    EMMS                                ; 0052f4e1
    POP EDI                             ; 0052f4e3
    POP ESI                             ; 0052f4e4
    RET                                 ; 0052f4e5
    TEST dword ptr [0x01c039a0],0x40    ; 0052f4f0 | DAT_01c039a0
        ;   Label: LAB_0052f4f0
    JZ 0x0052f50c                       ; 0052f4fa
        ;   XREF to: 0052f50c (CONDITIONAL_JUMP)  ; LAB_0052f50c
    LEA EAX,[EDI]                       ; 0052f4fc
    ADD EAX,dword ptr [0x005bf07c]      ; 0052f4fe | DAT_005bf07c
    CMP ESI,dword ptr [EAX]             ; 0052f504
    JL 0x0052f632                       ; 0052f506
        ;   XREF to: 0052f632 (CONDITIONAL_JUMP)  ; LAB_0052f632
    MOVD MM0,ECX                        ; 0052f50c
        ;   Label: LAB_0052f50c
    MOVD MM2,EDX                        ; 0052f50f
    PSRLQ MM0,qword ptr [0x005bf550]    ; 0052f512 | DAT_005bf550
    PSRLQ MM2,qword ptr [0x005bf570]    ; 0052f519 | DAT_005bf570
    PAND MM0,qword ptr [0x005bf590]     ; 0052f520 | DAT_005bf590
    PAND MM2,qword ptr [0x005bf5b0]     ; 0052f527 | DAT_005bf5b0
    PADDD MM0,MM2                       ; 0052f52e
    MOVD EBX,MM0                        ; 0052f531
    ADD EBX,dword ptr [0x01c02580]      ; 0052f534 | DAT_01c02580
    MOVZX EAX,byte ptr [EBX]            ; 0052f53a
    MOVD MM0,dword ptr [EAX*0x4 + 0x1c00024] ; 0052f53d | DAT_01c00024
    PUNPCKLBW MM0,MM7                   ; 0052f545
    SUB EBX,dword ptr [0x01c02580]      ; 0052f548 | DAT_01c02580
    ADD EBX,dword ptr [0x01c02584]      ; 0052f54e | DAT_01c02584
    MOVZX EAX,byte ptr [EBX]            ; 0052f554
    TEST EAX,0xffffffff                 ; 0052f557
    JZ 0x0052f632                       ; 0052f55c
        ;   XREF to: 0052f632 (CONDITIONAL_JUMP)  ; LAB_0052f632
    CMP EBP,0xff00                      ; 0052f562
    JLE 0x0052f571                      ; 0052f568
        ;   XREF to: 0052f571 (CONDITIONAL_JUMP)  ; LAB_0052f571
    CMP EAX,0xff                        ; 0052f56a
    JGE 0x0052f5d0                      ; 0052f56f
        ;   XREF to: 0052f5d0 (CONDITIONAL_JUMP)  ; LAB_0052f5d0
    MOV EBX,EDI                         ; 0052f571
        ;   Label: LAB_0052f571
    ADD EBX,dword ptr [0x005bf078]      ; 0052f573 | DAT_005bf078
    MOVD MM4,dword ptr [EBX]            ; 0052f579
    PUNPCKLBW MM4,MM7                   ; 0052f57c
    PSLLW MM0,0x4                       ; 0052f57f
    MOVQ MM7,MM5                        ; 0052f583
    IMUL EAX,EBP                        ; 0052f586
    PSRLW MM7,0x3                       ; 0052f589
    SHR EAX,0x10                        ; 0052f58d
    PMULHW MM0,MM7                      ; 0052f590
    MOVQ MM2,qword ptr [EAX*0x8 + 0x5bfe70] ; 0052f593 | DAT_005bfe70
    PXOR MM7,MM7                        ; 0052f59b
    MOVQ MM3,MM2                        ; 0052f59e
    PACKUSWB MM0,MM7                    ; 0052f5a1
    PXOR MM3,qword ptr [0x005c0668]     ; 0052f5a4 | DAT_005c0668
    PUNPCKLBW MM0,MM7                   ; 0052f5ab
    CMP dword ptr [0x01c03998],0x0      ; 0052f5ae | DAT_01c03998
    JNZ 0x0052f600                      ; 0052f5b5
        ;   XREF to: 0052f600 (CONDITIONAL_JUMP)  ; LAB_0052f600
    PMULLW MM4,MM3                      ; 0052f5b7
    PMULLW MM0,MM2                      ; 0052f5ba
    PADDUSW MM0,MM4                     ; 0052f5bd
    PSRLW MM0,0x8                       ; 0052f5c0
    PACKUSWB MM0,MM7                    ; 0052f5c4
    JMP 0x0052f611                      ; 0052f5c7
        ;   XREF to: 0052f611 (UNCONDITIONAL_JUMP)  ; LAB_0052f611
    CMP EBP,0xff                        ; 0052f5d0
        ;   Label: LAB_0052f5d0
    JL 0x0052f571                       ; 0052f5d6
        ;   XREF to: 0052f571 (CONDITIONAL_JUMP)  ; LAB_0052f571
    CMP dword ptr [0x01c03998],0x0      ; 0052f5d8 | DAT_01c03998
    JNZ 0x0052f571                      ; 0052f5df
        ;   XREF to: 0052f571 (CONDITIONAL_JUMP)  ; LAB_0052f571
    MOVQ MM3,MM5                        ; 0052f5e1
    PSRLW MM3,0x3                       ; 0052f5e4
    PSLLW MM0,0x4                       ; 0052f5e8
    PMULHW MM0,MM3                      ; 0052f5ec
    PACKUSWB MM0,MM7                    ; 0052f5ef
    JMP 0x0052f611                      ; 0052f5f2
        ;   XREF to: 0052f611 (UNCONDITIONAL_JUMP)  ; LAB_0052f611
    PSLLW MM4,0x8                       ; 0052f600
        ;   Label: LAB_0052f600
    PMULLW MM0,MM2                      ; 0052f604
    PADDUSW MM0,MM4                     ; 0052f607
    PSRLW MM0,0x8                       ; 0052f60a
    PACKUSWB MM0,MM7                    ; 0052f60e
    MOV EBX,EDI                         ; 0052f611
        ;   Label: LAB_0052f611
    ADD EBX,dword ptr [0x005bf078]      ; 0052f613 | DAT_005bf078
    MOVD dword ptr [EBX],MM0            ; 0052f619
    TEST dword ptr [0x01c039a0],0x80    ; 0052f61c | DAT_01c039a0
    JZ 0x0052f632                       ; 0052f626
        ;   XREF to: 0052f632 (CONDITIONAL_JUMP)  ; LAB_0052f632
    MOV EAX,EDI                         ; 0052f628
    ADD EAX,dword ptr [0x005bf07c]      ; 0052f62a | DAT_005bf07c
    MOV dword ptr [EAX],ESI             ; 0052f630
    ADD EDI,0x4                         ; 0052f632
        ;   Label: LAB_0052f632
    CMP EDI,dword ptr [0x005bf014]      ; 0052f635 | DAT_005bf014
    JNC 0x0052f670                      ; 0052f63b
        ;   XREF to: 0052f670 (CONDITIONAL_JUMP)  ; LAB_0052f670
    ADD ECX,dword ptr [0x005bf480]      ; 0052f63d | DAT_005bf480
    PADDW MM5,MM6                       ; 0052f643
    ADD EDX,dword ptr [0x005bf484]      ; 0052f646 | DAT_005bf484
    MOVQ MM0,MM5                        ; 0052f64c
    ADD ESI,dword ptr [0x005bf488]      ; 0052f64f | DAT_005bf488
    PCMPGTW MM5,qword ptr [0x005bf48c]  ; 0052f655 | DAT_005bf48c
    ADD EBP,dword ptr [0x005bf548]      ; 0052f65c | DAT_005bf548
    PAND MM5,MM0                        ; 0052f662
    JMP 0x0052f4f0                      ; 0052f665
        ;   XREF to: 0052f4f0 (UNCONDITIONAL_JUMP)  ; LAB_0052f4f0
    POP EBP                             ; 0052f670
        ;   Label: LAB_0052f670
    EMMS                                ; 0052f671
    POP EDI                             ; 0052f673
    POP ESI                             ; 0052f674
    RET                                 ; 0052f675
    MOVQ MM1,qword ptr [0x01c039a8]     ; 0052f676 | DAT_01c039a8
        ;   Label: LAB_0052f676
    PUNPCKLBW MM1,MM7                   ; 0052f67d
    TEST dword ptr [0x01c039a0],0x8     ; 0052f680 | DAT_01c039a0
    JNZ 0x0052f69b                      ; 0052f68a
        ;   XREF to: 0052f69b (CONDITIONAL_JUMP)  ; LAB_0052f69b
    MOV EBP,0x0                         ; 0052f68c
    MOV dword ptr [0x005bf548],0x0      ; 0052f691 | DAT_005bf548
    TEST dword ptr [0x01c039a0],0x40    ; 0052f69b | DAT_01c039a0
        ;   Label: LAB_0052f69b
    JZ 0x0052f6b7                       ; 0052f6a5
        ;   XREF to: 0052f6b7 (CONDITIONAL_JUMP)  ; LAB_0052f6b7
    LEA EAX,[EDI]                       ; 0052f6a7
    ADD EAX,dword ptr [0x005bf07c]      ; 0052f6a9 | DAT_005bf07c
    CMP ESI,dword ptr [EAX]             ; 0052f6af
    JL 0x0052f76d                       ; 0052f6b1
        ;   XREF to: 0052f76d (CONDITIONAL_JUMP)  ; LAB_0052f76d
    TEST dword ptr [0x01c039a0],0x1     ; 0052f6b7 | DAT_01c039a0
        ;   Label: LAB_0052f6b7
    JZ 0x0052f7b6                       ; 0052f6c1
        ;   XREF to: 0052f7b6 (CONDITIONAL_JUMP)  ; LAB_0052f7b6
    MOVD MM0,ECX                        ; 0052f6c7
    MOVD MM2,EDX                        ; 0052f6ca
    PSRLQ MM0,qword ptr [0x005bf550]    ; 0052f6cd | DAT_005bf550
    PSRLQ MM2,qword ptr [0x005bf570]    ; 0052f6d4 | DAT_005bf570
    PAND MM0,qword ptr [0x005bf590]     ; 0052f6db | DAT_005bf590
    PAND MM2,qword ptr [0x005bf5b0]     ; 0052f6e2 | DAT_005bf5b0
    PADDD MM0,MM2                       ; 0052f6e9
    MOVD EBX,MM0                        ; 0052f6ec
    ADD EBX,dword ptr [0x01c02580]      ; 0052f6ef | DAT_01c02580
    MOVZX EAX,byte ptr [EBX]            ; 0052f6f5
    MOVD MM0,dword ptr [EAX*0x4 + 0x1c00024] ; 0052f6f8 | DAT_01c00024
    MOVQ MM3,MM5                        ; 0052f700
        ;   Label: LAB_0052f700
    PUNPCKLBW MM0,MM7                   ; 0052f703
    PSRLW MM3,0x3                       ; 0052f706
    PSLLW MM0,0x4                       ; 0052f70a
    PMULHW MM0,MM3                      ; 0052f70e
    PACKUSWB MM0,MM7                    ; 0052f711
    TEST dword ptr [0x01c039a0],0x8     ; 0052f714 | DAT_01c039a0
    JZ 0x0052f74d                       ; 0052f71e
        ;   XREF to: 0052f74d (CONDITIONAL_JUMP)  ; LAB_0052f74d
    MOV EAX,EBP                         ; 0052f720
    SAR EAX,0x8                         ; 0052f722
    MOVQ MM3,qword ptr [EAX*0x8 + 0x5bfe70] ; 0052f725 | DAT_005bfe70
    MOVQ MM4,MM1                        ; 0052f72d
    MOVQ MM2,MM3                        ; 0052f730
    PMULLW MM4,MM3                      ; 0052f733
    PXOR MM2,qword ptr [0x005c0668]     ; 0052f736 | DAT_005c0668
    PUNPCKLBW MM0,MM7                   ; 0052f73d
    PMULLW MM0,MM2                      ; 0052f740
    PADDW MM0,MM4                       ; 0052f743
    PSRLW MM0,0x8                       ; 0052f746
    PACKUSWB MM0,MM7                    ; 0052f74a
    MOV EBX,dword ptr [0x005bf078]      ; 0052f74d | DAT_005bf078
        ;   Label: LAB_0052f74d
    ADD EBX,EDI                         ; 0052f753
    MOVD dword ptr [EBX],MM0            ; 0052f755
    TEST dword ptr [0x01c039a0],0x80    ; 0052f758 | DAT_01c039a0
    JZ 0x0052f76d                       ; 0052f762
        ;   XREF to: 0052f76d (CONDITIONAL_JUMP)  ; LAB_0052f76d
    MOV EAX,[0x005bf07c]                ; 0052f764 | DAT_005bf07c
    ADD EAX,EDI                         ; 0052f769
    MOV dword ptr [EAX],ESI             ; 0052f76b
    ADD EDI,0x4                         ; 0052f76d
        ;   Label: LAB_0052f76d
    CMP EDI,dword ptr [0x005bf014]      ; 0052f770 | DAT_005bf014
    JNC 0x0052f4e0                      ; 0052f776
        ;   XREF to: 0052f4e0 (CONDITIONAL_JUMP)  ; LAB_0052f4e0
    ADD ECX,dword ptr [0x005bf480]      ; 0052f77c | DAT_005bf480
    PADDW MM5,MM6                       ; 0052f782
    ADD EDX,dword ptr [0x005bf484]      ; 0052f785 | DAT_005bf484
    MOVQ MM0,MM5                        ; 0052f78b
    ADD ESI,dword ptr [0x005bf488]      ; 0052f78e | DAT_005bf488
    PCMPGTW MM5,qword ptr [0x005bf48c]  ; 0052f794 | DAT_005bf48c
    ADD EBP,dword ptr [0x005bf548]      ; 0052f79b | DAT_005bf548
    PAND MM5,MM0                        ; 0052f7a1
    JMP 0x0052f69b                      ; 0052f7a4
        ;   XREF to: 0052f69b (UNCONDITIONAL_JUMP)  ; LAB_0052f69b
    TEST dword ptr [0x01c039a0],0x200   ; 0052f7b6 | DAT_01c039a0
        ;   Label: LAB_0052f7b6
    JNZ 0x0052f7d0                      ; 0052f7c0
        ;   XREF to: 0052f7d0 (CONDITIONAL_JUMP)  ; LAB_0052f7d0
    MOVD MM0,dword ptr [0x01c00c70]     ; 0052f7c2 | DAT_01c00c70
    JMP 0x0052f700                      ; 0052f7c9
        ;   XREF to: 0052f700 (UNCONDITIONAL_JUMP)  ; LAB_0052f700
    MOVD MM0,dword ptr [0x005bf660]     ; 0052f7d0 | DAT_005bf660
        ;   Label: LAB_0052f7d0
    JMP 0x0052f700                      ; 0052f7d7
        ;   XREF to: 0052f700 (UNCONDITIONAL_JUMP)  ; LAB_0052f700
    MOV EAX,dword ptr [EDI + 0x28]      ; 0052f7e0
        ;   Label: LAB_0052f7e0
    MOV EBX,dword ptr [ESI + 0x28]      ; 0052f7e3
    SUB EAX,EBX                         ; 0052f7e6
    IMUL dword ptr [ECX + 0x1c00c84]    ; 0052f7e8 | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x005bf05c],EBX      ; 0052f7ee | DAT_005bf05c
    MOV dword ptr [0x005bf488],EDX      ; 0052f7f4 | DAT_005bf488
    MOV EAX,[0x005bf05c]                ; 0052f7fa | DAT_005bf05c
    MOV EBX,dword ptr [0x005bf488]      ; 0052f7ff | DAT_005bf488
    MOV ESI,dword ptr [0x005bf07c]      ; 0052f805 | DAT_005bf07c
    MOV ECX,dword ptr [0x005bf014]      ; 0052f80b | DAT_005bf014
    MOV dword ptr [ESI],EAX             ; 0052f811
        ;   Label: LAB_0052f811
    ADD EAX,EBX                         ; 0052f813
    ADD ESI,0x4                         ; 0052f815
    SUB ECX,0x4                         ; 0052f818
    JG 0x0052f811                       ; 0052f81b
        ;   XREF to: 0052f811 (CONDITIONAL_JUMP)  ; LAB_0052f811
    POP EBP                             ; 0052f81d
    EMMS                                ; 0052f81e
    POP EDI                             ; 0052f820
    POP ESI                             ; 0052f821
    RET                                 ; 0052f822

