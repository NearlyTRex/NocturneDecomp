; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0052f823(void)
;
;
; XREF[70]:
;   FUN_00405340 at 004053fb
;   FUN_00406920 at 004069e5
;   FUN_00406a00 at 00406ac8
;   FUN_00406ae0 at 00406b74
;   FUN_00406b80 at 00406c48
;   FUN_00461720 at 0046194e
;   engine_3d.c_renderPolygonAdaptiveDepthOp25_FUN_004060b0 at 00406175
;   engine_3d.c_renderPolygonAdaptiveFogTexturedOp52_FUN_00407a20 at 00407b05
;   engine_3d.c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_00405e10 at 00405ec9
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00408510 at 004085b0
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
;   ... and 32 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0052f823
        ;   Label: FUN_0052f823
    PUSH EDI                            ; 0052f824
    PUSH EBP                            ; 0052f825
    MOV EAX,dword ptr [ESI + 0x8]       ; 0052f826
    MOV ECX,dword ptr [EDI + 0x8]       ; 0052f829
    CMP EAX,ECX                         ; 0052f82c
    JBE 0x0052f833                      ; 0052f82e
        ;   XREF to: 0052f833 (CONDITIONAL_JUMP)  ; LAB_0052f833
    XCHG EAX,ECX                        ; 0052f830
    XCHG EDI,ESI                        ; 0052f831
    SHR ECX,0x10                        ; 0052f833
        ;   Label: LAB_0052f833
    SHR EAX,0x10                        ; 0052f836
    MOV EBP,dword ptr [EBX*0x4 + 0x1bd4260] ; 0052f839 | DAT_01bd4260
    MOV EBX,dword ptr [EBX*0x4 + 0x1bd2fa0] ; 0052f840 | DAT_01bd2fa0
    SUB ECX,EAX                         ; 0052f847
    JLE 0x0052fd1c                      ; 0052f849
        ;   XREF to: 0052fd1c (CONDITIONAL_JUMP)  ; LAB_0052fd1c
    LEA EBX,[EBX + EAX*0x2]             ; 0052f84f
    SHL ECX,0x2                         ; 0052f852
    LEA EBP,[EBP + EAX*0x4]             ; 0052f855
    MOV dword ptr [0x005bf014],ECX      ; 0052f859 | DAT_005bf014
    MOV dword ptr [0x005bf078],EBX      ; 0052f85f | DAT_005bf078
    MOV dword ptr [0x005bf07c],EBP      ; 0052f865 | DAT_005bf07c
    CMP dword ptr [0x01c039a0],0x80     ; 0052f86b | DAT_01c039a0
    JZ 0x005300a9                       ; 0052f875
        ;   XREF to: 005300a9 (CONDITIONAL_JUMP)  ; LAB_005300a9
    CMP dword ptr [0x01c039a4],0x5      ; 0052f87b | DAT_01c039a4
    JNZ 0x0052f8f4                      ; 0052f882
        ;   XREF to: 0052f8f4 (CONDITIONAL_JUMP)  ; LAB_0052f8f4
    MOV EAX,dword ptr [ESI + 0x18]      ; 0052f884
    MOV EBX,dword ptr [ESI + 0x28]      ; 0052f887
    CDQ                                 ; 0052f88a
    SHLD EDX,EAX,0x18                   ; 0052f88b
    SHL EAX,0x18                        ; 0052f88f
    IDIV EBX                            ; 0052f892
    MOV [0x005bf050],EAX                ; 0052f894 | DAT_005bf050
    MOV EAX,dword ptr [EDI + 0x18]      ; 0052f899
    MOV EBX,dword ptr [EDI + 0x28]      ; 0052f89c
    CDQ                                 ; 0052f89f
    SHLD EDX,EAX,0x18                   ; 0052f8a0
    SHL EAX,0x18                        ; 0052f8a4
    IDIV EBX                            ; 0052f8a7
    SUB EAX,dword ptr [0x005bf050]      ; 0052f8a9 | DAT_005bf050
    IMUL dword ptr [ECX + 0x1c00c84]    ; 0052f8af | DAT_01c00c84
    MOV dword ptr [0x005bf480],EDX      ; 0052f8b5 | DAT_005bf480
    MOV EAX,dword ptr [ESI + 0x20]      ; 0052f8bb
    MOV EBX,dword ptr [ESI + 0x28]      ; 0052f8be
    CDQ                                 ; 0052f8c1
    SHLD EDX,EAX,0x18                   ; 0052f8c2
    SHL EAX,0x18                        ; 0052f8c6
    IDIV EBX                            ; 0052f8c9
    MOV [0x005bf054],EAX                ; 0052f8cb | DAT_005bf054
    MOV EAX,dword ptr [EDI + 0x20]      ; 0052f8d0
    MOV EBX,dword ptr [EDI + 0x28]      ; 0052f8d3
    CDQ                                 ; 0052f8d6
    SHLD EDX,EAX,0x18                   ; 0052f8d7
    SHL EAX,0x18                        ; 0052f8db
    IDIV EBX                            ; 0052f8de
    SUB EAX,dword ptr [0x005bf054]      ; 0052f8e0 | DAT_005bf054
    IMUL dword ptr [ECX + 0x1c00c84]    ; 0052f8e6 | DAT_01c00c84
    MOV dword ptr [0x005bf484],EDX      ; 0052f8ec | DAT_005bf484
    JMP 0x0052f928                      ; 0052f8f2
        ;   XREF to: 0052f928 (UNCONDITIONAL_JUMP)  ; LAB_0052f928
    MOV EAX,dword ptr [EDI + 0x18]      ; 0052f8f4
        ;   Label: LAB_0052f8f4
    MOV EBX,dword ptr [ESI + 0x18]      ; 0052f8f7
    SUB EAX,EBX                         ; 0052f8fa
    IMUL dword ptr [ECX + 0x1c00c84]    ; 0052f8fc | DAT_01c00c84
    MOV dword ptr [0x005bf050],EBX      ; 0052f902 | DAT_005bf050
    MOV dword ptr [0x005bf480],EDX      ; 0052f908 | DAT_005bf480
    MOV EAX,dword ptr [EDI + 0x20]      ; 0052f90e
    MOV EBX,dword ptr [ESI + 0x20]      ; 0052f911
    SUB EAX,EBX                         ; 0052f914
    IMUL dword ptr [ECX + 0x1c00c84]    ; 0052f916 | DAT_01c00c84
    MOV dword ptr [0x005bf054],EBX      ; 0052f91c | DAT_005bf054
    MOV dword ptr [0x005bf484],EDX      ; 0052f922 | DAT_005bf484
    MOV EAX,dword ptr [EDI + 0x28]      ; 0052f928
        ;   Label: LAB_0052f928
    MOV EBX,dword ptr [ESI + 0x28]      ; 0052f92b
    SUB EAX,EBX                         ; 0052f92e
    IMUL dword ptr [ECX + 0x1c00c84]    ; 0052f930 | DAT_01c00c84
    MOV dword ptr [0x005bf05c],EBX      ; 0052f936 | DAT_005bf05c
    MOV dword ptr [0x005bf488],EDX      ; 0052f93c | DAT_005bf488
    MOV EAX,dword ptr [EDI + 0x30]      ; 0052f942
    MOV EBX,dword ptr [ESI + 0x30]      ; 0052f945
    SUB EAX,EBX                         ; 0052f948
    IMUL dword ptr [ECX + 0x1c00c84]    ; 0052f94a | DAT_01c00c84
    MOV dword ptr [0x005bf540],EBX      ; 0052f950 | DAT_005bf540
    MOV dword ptr [0x005bf548],EDX      ; 0052f956 | DAT_005bf548
    MOV EBP,dword ptr [0x005bf540]      ; 0052f95c | DAT_005bf540
    PXOR MM7,MM7                        ; 0052f962
    TEST dword ptr [0x01c039a0],0x200   ; 0052f965 | DAT_01c039a0
    JNZ 0x0052f9a4                      ; 0052f96f
        ;   XREF to: 0052f9a4 (CONDITIONAL_JUMP)  ; LAB_0052f9a4
    TEST dword ptr [0x01c039a0],0x4     ; 0052f971 | DAT_01c039a0
    JNZ 0x0052fa61                      ; 0052f97b
        ;   XREF to: 0052fa61 (CONDITIONAL_JUMP)  ; LAB_0052fa61
    TEST dword ptr [0x01c039a0],0x10    ; 0052f981 | DAT_01c039a0
    JNZ 0x0052faed                      ; 0052f98b
        ;   XREF to: 0052faed (CONDITIONAL_JUMP)  ; LAB_0052faed
    MOVQ MM5,qword ptr [0x005c0668]     ; 0052f991 | DAT_005c0668
    PSLLW MM5,0x7                       ; 0052f998
    PXOR MM6,MM6                        ; 0052f99c
    JMP 0x0052fb17                      ; 0052f99f
        ;   XREF to: 0052fb17 (UNCONDITIONAL_JUMP)  ; LAB_0052fb17
    MOV EAX,dword ptr [EDI + 0x10]      ; 0052f9a4
        ;   Label: LAB_0052f9a4
    MOV EBX,dword ptr [ESI + 0x10]      ; 0052f9a7
    SHR EAX,0x1                         ; 0052f9aa
    SHR EBX,0x1                         ; 0052f9ac
    SUB EAX,EBX                         ; 0052f9ae
    IMUL dword ptr [ECX + 0x1c00c84]    ; 0052f9b0 | DAT_01c00c84
    AND EBX,0xffff                      ; 0052f9b6
    AND EDX,0xffff                      ; 0052f9bc
    MOV dword ptr [0x005bf500],EBX      ; 0052f9c2 | DAT_005bf500
    MOV dword ptr [0x005bf520],EDX      ; 0052f9c8 | DAT_005bf520
    MOV EAX,dword ptr [EDI + 0x38]      ; 0052f9ce
    MOV EBX,dword ptr [ESI + 0x38]      ; 0052f9d1
    SHR EAX,0x1                         ; 0052f9d4
    SHR EBX,0x1                         ; 0052f9d6
    SUB EAX,EBX                         ; 0052f9d8
    IMUL dword ptr [ECX + 0x1c00c84]    ; 0052f9da | DAT_01c00c84
    AND EBX,0xffff                      ; 0052f9e0
    AND EDX,0xffff                      ; 0052f9e6
    MOV dword ptr [0x005bf508],EBX      ; 0052f9ec | DAT_005bf508
    MOV dword ptr [0x005bf528],EDX      ; 0052f9f2 | DAT_005bf528
    MOV EAX,dword ptr [EDI + 0x40]      ; 0052f9f8
    MOV EBX,dword ptr [ESI + 0x40]      ; 0052f9fb
    SHR EAX,0x1                         ; 0052f9fe
    SHR EBX,0x1                         ; 0052fa00
    SUB EAX,EBX                         ; 0052fa02
    IMUL dword ptr [ECX + 0x1c00c84]    ; 0052fa04 | DAT_01c00c84
    AND EBX,0xffff                      ; 0052fa0a
    AND EDX,0xffff                      ; 0052fa10
    MOV dword ptr [0x005bf510],EBX      ; 0052fa16 | DAT_005bf510
    MOV dword ptr [0x005bf530],EDX      ; 0052fa1c | DAT_005bf530
    MOVQ MM5,qword ptr [0x005bf500]     ; 0052fa22 | DAT_005bf500
    MOVQ MM6,qword ptr [0x005bf520]     ; 0052fa29 | DAT_005bf520
    PSLLQ MM5,0x10                      ; 0052fa30
    PSLLQ MM6,0x10                      ; 0052fa34
    POR MM5,qword ptr [0x005bf508]      ; 0052fa38 | DAT_005bf508
    POR MM6,qword ptr [0x005bf528]      ; 0052fa3f | DAT_005bf528
    PSLLQ MM5,0x10                      ; 0052fa46
    PSLLQ MM6,0x10                      ; 0052fa4a
    POR MM5,qword ptr [0x005bf510]      ; 0052fa4e | DAT_005bf510
    POR MM6,qword ptr [0x005bf530]      ; 0052fa55 | DAT_005bf530
    JMP 0x0052fb17                      ; 0052fa5c
        ;   XREF to: 0052fb17 (UNCONDITIONAL_JUMP)  ; LAB_0052fb17
    MOV EAX,dword ptr [EDI + 0x10]      ; 0052fa61
        ;   Label: LAB_0052fa61
    MOV EBX,dword ptr [ESI + 0x10]      ; 0052fa64
    SUB EAX,0x100                       ; 0052fa67
    SUB EBX,0x100                       ; 0052fa6c
    CMP EAX,0xfff                       ; 0052fa72
    JBE 0x0052fa7e                      ; 0052fa77
        ;   XREF to: 0052fa7e (CONDITIONAL_JUMP)  ; LAB_0052fa7e
    MOV EAX,0xfff                       ; 0052fa79
    CMP EBX,0xfff                       ; 0052fa7e
        ;   Label: LAB_0052fa7e
    JBE 0x0052fa8b                      ; 0052fa84
        ;   XREF to: 0052fa8b (CONDITIONAL_JUMP)  ; LAB_0052fa8b
    MOV EBX,0xfff                       ; 0052fa86
    SHL EAX,0x3                         ; 0052fa8b
        ;   Label: LAB_0052fa8b
    SHL EBX,0x3                         ; 0052fa8e
    SUB EAX,EBX                         ; 0052fa91
    IMUL dword ptr [ECX + 0x1c00c84]    ; 0052fa93 | DAT_01c00c84
    AND EBX,0xffff                      ; 0052fa99
    AND EDX,0xffff                      ; 0052fa9f
    MOV dword ptr [0x005bf500],EBX      ; 0052faa5 | DAT_005bf500
    MOV dword ptr [0x005bf520],EDX      ; 0052faab | DAT_005bf520
    MOVQ MM5,qword ptr [0x005bf500]     ; 0052fab1 | DAT_005bf500
    MOVQ MM6,qword ptr [0x005bf520]     ; 0052fab8 | DAT_005bf520
    PSLLQ MM5,0x10                      ; 0052fabf
    PSLLQ MM6,0x10                      ; 0052fac3
    POR MM5,qword ptr [0x005bf500]      ; 0052fac7 | DAT_005bf500
    POR MM6,qword ptr [0x005bf520]      ; 0052face | DAT_005bf520
    PSLLQ MM5,0x10                      ; 0052fad5
    PSLLQ MM6,0x10                      ; 0052fad9
    POR MM5,qword ptr [0x005bf500]      ; 0052fadd | DAT_005bf500
    POR MM6,qword ptr [0x005bf520]      ; 0052fae4 | DAT_005bf520
    JMP 0x0052fb17                      ; 0052faeb
        ;   XREF to: 0052fb17 (UNCONDITIONAL_JUMP)  ; LAB_0052fb17
    MOV EAX,[0x01c00c74]                ; 0052faed | DAT_01c00c74
        ;   Label: LAB_0052faed
    SUB EAX,0x100                       ; 0052faf2
    SHR EAX,0x4                         ; 0052faf7
    CMP EAX,0xff                        ; 0052fafa
    JC 0x0052fb06                       ; 0052faff
        ;   XREF to: 0052fb06 (CONDITIONAL_JUMP)  ; LAB_0052fb06
    MOV EAX,0xff                        ; 0052fb01
    MOVQ MM5,qword ptr [EAX*0x8 + 0x5bfe70] ; 0052fb06 | DAT_005c0668 | DAT_005bfe70
        ;   Label: LAB_0052fb06
    PSLLW MM5,0x7                       ; 0052fb0e
    PXOR MM6,MM6                        ; 0052fb12
    JMP 0x0052fb17                      ; 0052fb15
        ;   XREF to: 0052fb17 (UNCONDITIONAL_JUMP)  ; LAB_0052fb17
    MOV ECX,dword ptr [0x005bf050]      ; 0052fb17 | DAT_005bf050
        ;   Label: LAB_0052fb17
    MOV EDX,dword ptr [0x005bf054]      ; 0052fb1d | DAT_005bf054
    MOV ESI,dword ptr [0x005bf05c]      ; 0052fb23 | DAT_005bf05c
    MOV EDI,0x0                         ; 0052fb29
    CMP dword ptr [0x01c02584],0x0      ; 0052fb2e | DAT_01c02584
    JNZ 0x0052fb47                      ; 0052fb35
        ;   XREF to: 0052fb47 (CONDITIONAL_JUMP)  ; LAB_0052fb47
    TEST dword ptr [0x01c039a0],0x2     ; 0052fb37 | DAT_01c039a0
    JZ 0x0052ff11                       ; 0052fb41
        ;   XREF to: 0052ff11 (CONDITIONAL_JUMP)  ; LAB_0052ff11
    TEST dword ptr [0x01c039a0],0x100   ; 0052fb47 | DAT_01c039a0
        ;   Label: LAB_0052fb47
    JNZ 0x0052fb66                      ; 0052fb51
        ;   XREF to: 0052fb66 (CONDITIONAL_JUMP)  ; LAB_0052fb66
    MOV EBP,dword ptr [0x005b763c]      ; 0052fb53 | DAT_005b763c
    SHL EBP,0x8                         ; 0052fb59
    MOV dword ptr [0x005bf548],0x0      ; 0052fb5c | DAT_005bf548
    CMP dword ptr [0x01c02584],0x0      ; 0052fb66 | DAT_01c02584
        ;   Label: LAB_0052fb66
    JNZ 0x0052fd22                      ; 0052fb6d
        ;   XREF to: 0052fd22 (CONDITIONAL_JUMP)  ; LAB_0052fd22
    TEST dword ptr [0x01c039a0],0x40    ; 0052fb73 | DAT_01c039a0
        ;   Label: LAB_0052fb73
    JZ 0x0052fb8f                       ; 0052fb7d
        ;   XREF to: 0052fb8f (CONDITIONAL_JUMP)  ; LAB_0052fb8f
    LEA EAX,[EDI]                       ; 0052fb7f
    ADD EAX,dword ptr [0x005bf07c]      ; 0052fb81 | DAT_005bf07c
    CMP ESI,dword ptr [EAX]             ; 0052fb87
    JL 0x0052fce4                       ; 0052fb89
        ;   XREF to: 0052fce4 (CONDITIONAL_JUMP)  ; LAB_0052fce4
    MOVD MM0,ECX                        ; 0052fb8f
        ;   Label: LAB_0052fb8f
    MOVD MM2,EDX                        ; 0052fb92
    PSRLQ MM0,qword ptr [0x005bf550]    ; 0052fb95 | DAT_005bf550
    PSRLQ MM2,qword ptr [0x005bf570]    ; 0052fb9c | DAT_005bf570
    PAND MM0,qword ptr [0x005bf590]     ; 0052fba3 | DAT_005bf590
    PAND MM2,qword ptr [0x005bf5b0]     ; 0052fbaa | DAT_005bf5b0
    PADDD MM0,MM2                       ; 0052fbb1
    MOVD EBX,MM0                        ; 0052fbb4
    ADD EBX,dword ptr [0x01c02580]      ; 0052fbb7 | DAT_01c02580
    MOVZX EAX,byte ptr [EBX]            ; 0052fbbd
    MOV EAX,dword ptr [EAX*0x4 + 0x1c00024] ; 0052fbc0 | DAT_01c00024
    CMP EAX,0x0                         ; 0052fbc7
    JZ 0x0052fce4                       ; 0052fbca
        ;   XREF to: 0052fce4 (CONDITIONAL_JUMP)  ; LAB_0052fce4
    MOVD MM0,EAX                        ; 0052fbd0
    PUNPCKLBW MM0,MM7                   ; 0052fbd3
    PXOR MM4,MM4                        ; 0052fbd6
    TEST dword ptr [0x01c039a0],0x20    ; 0052fbd9 | DAT_01c039a0
    JZ 0x0052fc2e                       ; 0052fbe3
        ;   XREF to: 0052fc2e (CONDITIONAL_JUMP)  ; LAB_0052fc2e
    MOV EBX,EDI                         ; 0052fbe5
    SHR EBX,0x1                         ; 0052fbe7
    ADD EBX,dword ptr [0x005bf078]      ; 0052fbe9 | DAT_005bf078
    MOVZX EBX,word ptr [EBX]            ; 0052fbef
    MOVD MM4,EBX                        ; 0052fbf2
    PAND MM4,qword ptr [0x005bf5c8]     ; 0052fbf5 | DAT_005bf5c8
    PSLLQ MM4,qword ptr [0x005bf658]    ; 0052fbfc | DAT_005bf658
    MOVD MM2,EBX                        ; 0052fc03
    PAND MM2,qword ptr [0x005bf5c0]     ; 0052fc06 | DAT_005bf5c0
    PSLLQ MM2,qword ptr [0x005bf638]    ; 0052fc0d | DAT_005bf638
    POR MM4,MM2                         ; 0052fc14
    MOVD MM2,EBX                        ; 0052fc17
    PAND MM2,qword ptr [0x005bf5b8]     ; 0052fc1a | DAT_005bf5b8
    PSLLQ MM2,qword ptr [0x005bf618]    ; 0052fc21 | DAT_005bf618
    POR MM4,MM2                         ; 0052fc28
    PUNPCKLBW MM4,MM7                   ; 0052fc2b
    PSLLW MM0,0x4                       ; 0052fc2e
        ;   Label: LAB_0052fc2e
    MOVQ MM7,MM5                        ; 0052fc32
    MOV EAX,EBP                         ; 0052fc35
    PSRLW MM7,0x3                       ; 0052fc37
    SAR EAX,0x8                         ; 0052fc3b
    PMULHW MM0,MM7                      ; 0052fc3e
    MOVQ MM2,qword ptr [EAX*0x8 + 0x5bfe70] ; 0052fc41 | DAT_005c0668
    PXOR MM7,MM7                        ; 0052fc49
    MOVQ MM3,MM2                        ; 0052fc4c
    PACKUSWB MM0,MM7                    ; 0052fc4f
    PXOR MM3,qword ptr [0x005c0668]     ; 0052fc52 | DAT_005c0668
    PUNPCKLBW MM0,MM7                   ; 0052fc59
    CMP dword ptr [0x01c03998],0x0      ; 0052fc5c | DAT_01c03998
    JNZ 0x0052fc77                      ; 0052fc63
        ;   XREF to: 0052fc77 (CONDITIONAL_JUMP)  ; LAB_0052fc77
    PMULLW MM4,MM3                      ; 0052fc65
    PMULLW MM0,MM2                      ; 0052fc68
    PADDUSW MM0,MM4                     ; 0052fc6b
    PSRLW MM0,0x8                       ; 0052fc6e
    PACKUSWB MM0,MM7                    ; 0052fc72
    JMP 0x0052fc88                      ; 0052fc75
        ;   XREF to: 0052fc88 (UNCONDITIONAL_JUMP)  ; LAB_0052fc88
    PSLLW MM4,0x8                       ; 0052fc77
        ;   Label: LAB_0052fc77
    PMULLW MM0,MM2                      ; 0052fc7b
    PADDUSW MM0,MM4                     ; 0052fc7e
    PSRLW MM0,0x8                       ; 0052fc81
    PACKUSWB MM0,MM7                    ; 0052fc85
    MOV EBX,EDI                         ; 0052fc88
        ;   Label: LAB_0052fc88
    SHR EBX,0x1                         ; 0052fc8a
    ADD EBX,dword ptr [0x005bf078]      ; 0052fc8c | DAT_005bf078
    MOVQ MM2,MM0                        ; 0052fc92
    MOVQ MM4,MM0                        ; 0052fc95
    PAND MM0,qword ptr [0x005bf610]     ; 0052fc98 | DAT_005bf610
    PAND MM2,qword ptr [0x005bf5f0]     ; 0052fc9f | DAT_005bf5f0
    PAND MM4,qword ptr [0x005bf5d0]     ; 0052fca6 | DAT_005bf5d0
    PSRLQ MM0,qword ptr [0x005bf658]    ; 0052fcad | DAT_005bf658
    PSRLQ MM2,qword ptr [0x005bf638]    ; 0052fcb4 | DAT_005bf638
    PSRLQ MM4,qword ptr [0x005bf618]    ; 0052fcbb | DAT_005bf618
    POR MM0,MM2                         ; 0052fcc2
    POR MM0,MM4                         ; 0052fcc5
    MOVD EAX,MM0                        ; 0052fcc8
    MOV word ptr [EBX],AX               ; 0052fccb
    TEST dword ptr [0x01c039a0],0x80    ; 0052fcce | DAT_01c039a0
    JZ 0x0052fce4                       ; 0052fcd8
        ;   XREF to: 0052fce4 (CONDITIONAL_JUMP)  ; LAB_0052fce4
    MOV EAX,EDI                         ; 0052fcda
    ADD EAX,dword ptr [0x005bf07c]      ; 0052fcdc | DAT_005bf07c
    MOV dword ptr [EAX],ESI             ; 0052fce2
    ADD EDI,0x4                         ; 0052fce4
        ;   Label: LAB_0052fce4
    CMP EDI,dword ptr [0x005bf014]      ; 0052fce7 | DAT_005bf014
    JNC 0x0052fd1c                      ; 0052fced
        ;   XREF to: 0052fd1c (CONDITIONAL_JUMP)  ; LAB_0052fd1c
    ADD ECX,dword ptr [0x005bf480]      ; 0052fcef | DAT_005bf480
    PADDW MM5,MM6                       ; 0052fcf5
    ADD EDX,dword ptr [0x005bf484]      ; 0052fcf8 | DAT_005bf484
    MOVQ MM0,MM5                        ; 0052fcfe
    ADD ESI,dword ptr [0x005bf488]      ; 0052fd01 | DAT_005bf488
    PCMPGTW MM5,qword ptr [0x005bf48c]  ; 0052fd07 | DAT_005bf48c
    ADD EBP,dword ptr [0x005bf548]      ; 0052fd0e | DAT_005bf548
    PAND MM5,MM0                        ; 0052fd14
    JMP 0x0052fb73                      ; 0052fd17
        ;   XREF to: 0052fb73 (UNCONDITIONAL_JUMP)  ; LAB_0052fb73
    POP EBP                             ; 0052fd1c
        ;   Label: LAB_0052fd1c
    EMMS                                ; 0052fd1d
    POP EDI                             ; 0052fd1f
    POP ESI                             ; 0052fd20
    RET                                 ; 0052fd21
    TEST dword ptr [0x01c039a0],0x40    ; 0052fd22 | DAT_01c039a0
        ;   Label: LAB_0052fd22
    JZ 0x0052fd3e                       ; 0052fd2c
        ;   XREF to: 0052fd3e (CONDITIONAL_JUMP)  ; LAB_0052fd3e
    LEA EAX,[EDI]                       ; 0052fd2e
    ADD EAX,dword ptr [0x005bf07c]      ; 0052fd30 | DAT_005bf07c
    CMP ESI,dword ptr [EAX]             ; 0052fd36
    JL 0x0052fed3                       ; 0052fd38
        ;   XREF to: 0052fed3 (CONDITIONAL_JUMP)  ; LAB_0052fed3
    MOVD MM0,ECX                        ; 0052fd3e
        ;   Label: LAB_0052fd3e
    MOVD MM2,EDX                        ; 0052fd41
    PSRLQ MM0,qword ptr [0x005bf550]    ; 0052fd44 | DAT_005bf550
    PSRLQ MM2,qword ptr [0x005bf570]    ; 0052fd4b | DAT_005bf570
    PAND MM0,qword ptr [0x005bf590]     ; 0052fd52 | DAT_005bf590
    PAND MM2,qword ptr [0x005bf5b0]     ; 0052fd59 | DAT_005bf5b0
    PADDD MM0,MM2                       ; 0052fd60
    MOVD EBX,MM0                        ; 0052fd63
    ADD EBX,dword ptr [0x01c02580]      ; 0052fd66 | DAT_01c02580
    MOVZX EAX,byte ptr [EBX]            ; 0052fd6c
    MOVD MM0,dword ptr [EAX*0x4 + 0x1c00024] ; 0052fd6f | DAT_01c00024
    PUNPCKLBW MM0,MM7                   ; 0052fd77
    SUB EBX,dword ptr [0x01c02580]      ; 0052fd7a | DAT_01c02580
    ADD EBX,dword ptr [0x01c02584]      ; 0052fd80 | DAT_01c02584
    MOVZX EAX,byte ptr [EBX]            ; 0052fd86
    TEST EAX,0xffffffff                 ; 0052fd89
    JZ 0x0052fed3                       ; 0052fd8e
        ;   XREF to: 0052fed3 (CONDITIONAL_JUMP)  ; LAB_0052fed3
    CMP EBP,0xff00                      ; 0052fd94
    JLE 0x0052fda7                      ; 0052fd9a
        ;   XREF to: 0052fda7 (CONDITIONAL_JUMP)  ; LAB_0052fda7
    CMP EAX,0xff                        ; 0052fd9c
    JGE 0x0052fe3a                      ; 0052fda1
        ;   XREF to: 0052fe3a (CONDITIONAL_JUMP)  ; LAB_0052fe3a
    MOV EBX,EDI                         ; 0052fda7
        ;   Label: LAB_0052fda7
    SHR EBX,0x1                         ; 0052fda9
    ADD EBX,dword ptr [0x005bf078]      ; 0052fdab | DAT_005bf078
    MOVZX EBX,word ptr [EBX]            ; 0052fdb1
    MOVD MM4,EBX                        ; 0052fdb4
    PAND MM4,qword ptr [0x005bf5c8]     ; 0052fdb7 | DAT_005bf5c8
    PSLLQ MM4,qword ptr [0x005bf658]    ; 0052fdbe | DAT_005bf658
    MOVD MM2,EBX                        ; 0052fdc5
    PAND MM2,qword ptr [0x005bf5c0]     ; 0052fdc8 | DAT_005bf5c0
    PSLLQ MM2,qword ptr [0x005bf638]    ; 0052fdcf | DAT_005bf638
    POR MM4,MM2                         ; 0052fdd6
    MOVD MM2,EBX                        ; 0052fdd9
    PAND MM2,qword ptr [0x005bf5b8]     ; 0052fddc | DAT_005bf5b8
    PSLLQ MM2,qword ptr [0x005bf618]    ; 0052fde3 | DAT_005bf618
    POR MM4,MM2                         ; 0052fdea
    PUNPCKLBW MM4,MM7                   ; 0052fded
    PSLLW MM0,0x4                       ; 0052fdf0
    MOVQ MM7,MM5                        ; 0052fdf4
    IMUL EAX,EBP                        ; 0052fdf7
    PSRLW MM7,0x3                       ; 0052fdfa
    SHR EAX,0x10                        ; 0052fdfe
    PMULHW MM0,MM7                      ; 0052fe01
    MOVQ MM2,qword ptr [EAX*0x8 + 0x5bfe70] ; 0052fe04 | DAT_005bfe70
    PXOR MM7,MM7                        ; 0052fe0c
    MOVQ MM3,MM2                        ; 0052fe0f
    PACKUSWB MM0,MM7                    ; 0052fe12
    PXOR MM3,qword ptr [0x005c0668]     ; 0052fe15 | DAT_005c0668
    PUNPCKLBW MM0,MM7                   ; 0052fe1c
    CMP dword ptr [0x01c03998],0x0      ; 0052fe1f | DAT_01c03998
    JNZ 0x0052fe66                      ; 0052fe26
        ;   XREF to: 0052fe66 (CONDITIONAL_JUMP)  ; LAB_0052fe66
    PMULLW MM4,MM3                      ; 0052fe28
    PMULLW MM0,MM2                      ; 0052fe2b
    PADDUSW MM0,MM4                     ; 0052fe2e
    PSRLW MM0,0x8                       ; 0052fe31
    PACKUSWB MM0,MM7                    ; 0052fe35
    JMP 0x0052fe77                      ; 0052fe38
        ;   XREF to: 0052fe77 (UNCONDITIONAL_JUMP)  ; LAB_0052fe77
    CMP EBP,0xff                        ; 0052fe3a
        ;   Label: LAB_0052fe3a
    JL 0x0052fda7                       ; 0052fe40
        ;   XREF to: 0052fda7 (CONDITIONAL_JUMP)  ; LAB_0052fda7
    CMP dword ptr [0x01c03998],0x0      ; 0052fe46 | DAT_01c03998
    JNZ 0x0052fda7                      ; 0052fe4d
        ;   XREF to: 0052fda7 (CONDITIONAL_JUMP)  ; LAB_0052fda7
    MOVQ MM3,MM5                        ; 0052fe53
    PSRLW MM3,0x3                       ; 0052fe56
    PSLLW MM0,0x4                       ; 0052fe5a
    PMULHW MM0,MM3                      ; 0052fe5e
    PACKUSWB MM0,MM7                    ; 0052fe61
    JMP 0x0052fe77                      ; 0052fe64
        ;   XREF to: 0052fe77 (UNCONDITIONAL_JUMP)  ; LAB_0052fe77
    PSLLW MM4,0x8                       ; 0052fe66
        ;   Label: LAB_0052fe66
    PMULLW MM0,MM2                      ; 0052fe6a
    PADDUSW MM0,MM4                     ; 0052fe6d
    PSRLW MM0,0x8                       ; 0052fe70
    PACKUSWB MM0,MM7                    ; 0052fe74
    MOV EBX,EDI                         ; 0052fe77
        ;   Label: LAB_0052fe77
    SHR EBX,0x1                         ; 0052fe79
    ADD EBX,dword ptr [0x005bf078]      ; 0052fe7b | DAT_005bf078
    MOVQ MM2,MM0                        ; 0052fe81
    MOVQ MM4,MM0                        ; 0052fe84
    PAND MM0,qword ptr [0x005bf610]     ; 0052fe87 | DAT_005bf610
    PAND MM2,qword ptr [0x005bf5f0]     ; 0052fe8e | DAT_005bf5f0
    PAND MM4,qword ptr [0x005bf5d0]     ; 0052fe95 | DAT_005bf5d0
    PSRLQ MM0,qword ptr [0x005bf658]    ; 0052fe9c | DAT_005bf658
    PSRLQ MM2,qword ptr [0x005bf638]    ; 0052fea3 | DAT_005bf638
    PSRLQ MM4,qword ptr [0x005bf618]    ; 0052feaa | DAT_005bf618
    POR MM0,MM2                         ; 0052feb1
    POR MM0,MM4                         ; 0052feb4
    MOVD EAX,MM0                        ; 0052feb7
    MOV word ptr [EBX],AX               ; 0052feba
    TEST dword ptr [0x01c039a0],0x80    ; 0052febd | DAT_01c039a0
    JZ 0x0052fed3                       ; 0052fec7
        ;   XREF to: 0052fed3 (CONDITIONAL_JUMP)  ; LAB_0052fed3
    MOV EAX,EDI                         ; 0052fec9
    ADD EAX,dword ptr [0x005bf07c]      ; 0052fecb | DAT_005bf07c
    MOV dword ptr [EAX],ESI             ; 0052fed1
    ADD EDI,0x4                         ; 0052fed3
        ;   Label: LAB_0052fed3
    CMP EDI,dword ptr [0x005bf014]      ; 0052fed6 | DAT_005bf014
    JNC 0x0052ff0b                      ; 0052fedc
        ;   XREF to: 0052ff0b (CONDITIONAL_JUMP)  ; LAB_0052ff0b
    ADD ECX,dword ptr [0x005bf480]      ; 0052fede | DAT_005bf480
    PADDW MM5,MM6                       ; 0052fee4
    ADD EDX,dword ptr [0x005bf484]      ; 0052fee7 | DAT_005bf484
    MOVQ MM0,MM5                        ; 0052feed
    ADD ESI,dword ptr [0x005bf488]      ; 0052fef0 | DAT_005bf488
    PCMPGTW MM5,qword ptr [0x005bf48c]  ; 0052fef6 | DAT_005bf48c
    ADD EBP,dword ptr [0x005bf548]      ; 0052fefd | DAT_005bf548
    PAND MM5,MM0                        ; 0052ff03
    JMP 0x0052fd22                      ; 0052ff06
        ;   XREF to: 0052fd22 (UNCONDITIONAL_JUMP)  ; LAB_0052fd22
    POP EBP                             ; 0052ff0b
        ;   Label: LAB_0052ff0b
    EMMS                                ; 0052ff0c
    POP EDI                             ; 0052ff0e
    POP ESI                             ; 0052ff0f
    RET                                 ; 0052ff10
    MOVQ MM1,qword ptr [0x01c039a8]     ; 0052ff11 | DAT_01c039a8
        ;   Label: LAB_0052ff11
    PUNPCKLBW MM1,MM7                   ; 0052ff18
    TEST dword ptr [0x01c039a0],0x8     ; 0052ff1b | DAT_01c039a0
    JNZ 0x0052ff36                      ; 0052ff25
        ;   XREF to: 0052ff36 (CONDITIONAL_JUMP)  ; LAB_0052ff36
    MOV EBP,0x0                         ; 0052ff27
    MOV dword ptr [0x005bf548],0x0      ; 0052ff2c | DAT_005bf548
    TEST dword ptr [0x01c039a0],0x40    ; 0052ff36 | DAT_01c039a0
        ;   Label: LAB_0052ff36
    JZ 0x0052ff52                       ; 0052ff40
        ;   XREF to: 0052ff52 (CONDITIONAL_JUMP)  ; LAB_0052ff52
    LEA EAX,[EDI]                       ; 0052ff42
    ADD EAX,dword ptr [0x005bf07c]      ; 0052ff44 | DAT_005bf07c
    CMP ESI,dword ptr [EAX]             ; 0052ff4a
    JL 0x00530043                       ; 0052ff4c
        ;   XREF to: 00530043 (CONDITIONAL_JUMP)  ; LAB_00530043
    TEST dword ptr [0x01c039a0],0x1     ; 0052ff52 | DAT_01c039a0
        ;   Label: LAB_0052ff52
    JZ 0x00530085                       ; 0052ff5c
        ;   XREF to: 00530085 (CONDITIONAL_JUMP)  ; LAB_00530085
    MOVD MM0,ECX                        ; 0052ff62
    MOVD MM2,EDX                        ; 0052ff65
    PSRLQ MM0,qword ptr [0x005bf550]    ; 0052ff68 | DAT_005bf550
    PSRLQ MM2,qword ptr [0x005bf570]    ; 0052ff6f | DAT_005bf570
    PAND MM0,qword ptr [0x005bf590]     ; 0052ff76 | DAT_005bf590
    PAND MM2,qword ptr [0x005bf5b0]     ; 0052ff7d | DAT_005bf5b0
    PADDD MM0,MM2                       ; 0052ff84
    MOVD EBX,MM0                        ; 0052ff87
    ADD EBX,dword ptr [0x01c02580]      ; 0052ff8a | DAT_01c02580
    MOVZX EAX,byte ptr [EBX]            ; 0052ff90
    MOVD MM0,dword ptr [EAX*0x4 + 0x1c00024] ; 0052ff93 | DAT_01c00024
    MOVQ MM3,MM5                        ; 0052ff9b
        ;   Label: LAB_0052ff9b
    PUNPCKLBW MM0,MM7                   ; 0052ff9e
    PSRLW MM3,0x3                       ; 0052ffa1
    PSLLW MM0,0x4                       ; 0052ffa5
    PMULHW MM0,MM3                      ; 0052ffa9
    PACKUSWB MM0,MM7                    ; 0052ffac
    TEST dword ptr [0x01c039a0],0x8     ; 0052ffaf | DAT_01c039a0
    JZ 0x0052ffe8                       ; 0052ffb9
        ;   XREF to: 0052ffe8 (CONDITIONAL_JUMP)  ; LAB_0052ffe8
    MOV EAX,EBP                         ; 0052ffbb
    SAR EAX,0x8                         ; 0052ffbd
    MOVQ MM3,qword ptr [EAX*0x8 + 0x5bfe70] ; 0052ffc0 | DAT_005bfe70
    MOVQ MM4,MM1                        ; 0052ffc8
    MOVQ MM2,MM3                        ; 0052ffcb
    PMULLW MM4,MM3                      ; 0052ffce
    PXOR MM2,qword ptr [0x005c0668]     ; 0052ffd1 | DAT_005c0668
    PUNPCKLBW MM0,MM7                   ; 0052ffd8
    PMULLW MM0,MM2                      ; 0052ffdb
    PADDW MM0,MM4                       ; 0052ffde
    PSRLW MM0,0x8                       ; 0052ffe1
    PACKUSWB MM0,MM7                    ; 0052ffe5
    MOV EBX,EDI                         ; 0052ffe8
        ;   Label: LAB_0052ffe8
    SHR EBX,0x1                         ; 0052ffea
    ADD EBX,dword ptr [0x005bf078]      ; 0052ffec | DAT_005bf078
    MOVQ MM2,MM0                        ; 0052fff2
    MOVQ MM4,MM0                        ; 0052fff5
    PAND MM0,qword ptr [0x005bf610]     ; 0052fff8 | DAT_005bf610
    PAND MM2,qword ptr [0x005bf5f0]     ; 0052ffff | DAT_005bf5f0
    PAND MM4,qword ptr [0x005bf5d0]     ; 00530006 | DAT_005bf5d0
    PSRLQ MM0,qword ptr [0x005bf658]    ; 0053000d | DAT_005bf658
    PSRLQ MM2,qword ptr [0x005bf638]    ; 00530014 | DAT_005bf638
    PSRLQ MM4,qword ptr [0x005bf618]    ; 0053001b | DAT_005bf618
    POR MM0,MM2                         ; 00530022
    POR MM0,MM4                         ; 00530025
    MOVD EAX,MM0                        ; 00530028
    MOV word ptr [EBX],AX               ; 0053002b
    TEST dword ptr [0x01c039a0],0x80    ; 0053002e | DAT_01c039a0
    JZ 0x00530043                       ; 00530038
        ;   XREF to: 00530043 (CONDITIONAL_JUMP)  ; LAB_00530043
    MOV EAX,[0x005bf07c]                ; 0053003a | DAT_005bf07c
    ADD EAX,EDI                         ; 0053003f
    MOV dword ptr [EAX],ESI             ; 00530041
    ADD EDI,0x4                         ; 00530043
        ;   Label: LAB_00530043
    CMP EDI,dword ptr [0x005bf014]      ; 00530046 | DAT_005bf014
    JNC 0x0052fd1c                      ; 0053004c
        ;   XREF to: 0052fd1c (CONDITIONAL_JUMP)  ; LAB_0052fd1c
    ADD ECX,dword ptr [0x005bf480]      ; 00530052 | DAT_005bf480
    PADDW MM5,MM6                       ; 00530058
    ADD EDX,dword ptr [0x005bf484]      ; 0053005b | DAT_005bf484
    MOVQ MM0,MM5                        ; 00530061
    ADD ESI,dword ptr [0x005bf488]      ; 00530064 | DAT_005bf488
    PCMPGTW MM5,qword ptr [0x005bf48c]  ; 0053006a | DAT_005bf48c
    ADD EBP,dword ptr [0x005bf548]      ; 00530071 | DAT_005bf548
    PAND MM5,MM0                        ; 00530077
    JMP 0x0052ff36                      ; 0053007a
        ;   XREF to: 0052ff36 (UNCONDITIONAL_JUMP)  ; LAB_0052ff36
    TEST dword ptr [0x01c039a0],0x200   ; 00530085 | DAT_01c039a0
        ;   Label: LAB_00530085
    JNZ 0x0053009d                      ; 0053008f
        ;   XREF to: 0053009d (CONDITIONAL_JUMP)  ; LAB_0053009d
    MOVD MM0,dword ptr [0x01c00c70]     ; 00530091 | DAT_01c00c70
    JMP 0x0052ff9b                      ; 00530098
        ;   XREF to: 0052ff9b (UNCONDITIONAL_JUMP)  ; LAB_0052ff9b
    MOVD MM0,dword ptr [0x005bf660]     ; 0053009d | DAT_005bf660
        ;   Label: LAB_0053009d
    JMP 0x0052ff9b                      ; 005300a4
        ;   XREF to: 0052ff9b (UNCONDITIONAL_JUMP)  ; LAB_0052ff9b
    MOV EAX,dword ptr [EDI + 0x28]      ; 005300a9
        ;   Label: LAB_005300a9
    MOV EBX,dword ptr [ESI + 0x28]      ; 005300ac
    SUB EAX,EBX                         ; 005300af
    IMUL dword ptr [ECX + 0x1c00c84]    ; 005300b1 | DAT_01c00c84
    MOV dword ptr [0x005bf05c],EBX      ; 005300b7 | DAT_005bf05c
    MOV dword ptr [0x005bf488],EDX      ; 005300bd | DAT_005bf488
    MOV EAX,[0x005bf05c]                ; 005300c3 | DAT_005bf05c
    MOV EBX,dword ptr [0x005bf488]      ; 005300c8 | DAT_005bf488
    MOV ESI,dword ptr [0x005bf07c]      ; 005300ce | DAT_005bf07c
    MOV ECX,dword ptr [0x005bf014]      ; 005300d4 | DAT_005bf014
    MOV dword ptr [ESI],EAX             ; 005300da
        ;   Label: LAB_005300da
    ADD EAX,EBX                         ; 005300dc
    ADD ESI,0x4                         ; 005300de
    SUB ECX,0x4                         ; 005300e1
    JG 0x005300da                       ; 005300e4
        ;   XREF to: 005300da (CONDITIONAL_JUMP)  ; LAB_005300da
    POP EBP                             ; 005300e6
    EMMS                                ; 005300e7
    POP EDI                             ; 005300e9
    POP ESI                             ; 005300ea
    RET                                 ; 005300eb

