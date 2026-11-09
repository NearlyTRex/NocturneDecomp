; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_special_cpp_FUN_0057de01(void)
;
;
; XREF[57]:
;   engine_3d.c_renderPolygonAdaptiveDepthOp25_FUN_00404980 at 00404a3e
;   engine_3d.c_renderPolygonAdaptiveFogTexturedOp52_FUN_00406280 at 00406356
;   engine_3d.c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_004046e0 at 0040478d
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00406d70 at 00406e04
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_00406c30 at 00406cc4
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedOp36_FUN_004054e0 at 00405569
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedPerspOp37_FUN_00405600 at 00405689
;   engine_3d.c_renderPolygonBlendedLitOp63_FUN_00406ad0 at 00406b6c
;   engine_3d.c_renderPolygonDepthWritePass_FUN_004057b0 at 0040582f
;   engine_3d.c_renderPolygonDestReadBlendDepthLitOp55_FUN_004065f0 at 00406694
;   ... and 47 more
;
; Referenced Globals:
;   undefined4 DAT_0061b4b8
;   undefined4 DAT_00623964
;   undefined4 DAT_006239a0
;   undefined4 DAT_006239a4
;   undefined4 DAT_006239ac
;   undefined4 DAT_006239c8
;   undefined4 DAT_006239cc
;   undefined4 DAT_00623dd0
;   undefined4 DAT_00623dd4
;   undefined4 DAT_00623dd8
;   undefined8 DAT_00623ddc
;   undefined8 DAT_00623e50
;   undefined4 DAT_00623e58
;   undefined4 DAT_00623e60
;   undefined8 DAT_00623e70
;   ... and 23 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0057de01
        ;   Label: engine_special.cpp_FUN_0057de01
    PUSH EDI                            ; 0057de02
    PUSH EBP                            ; 0057de03
    MOV EAX,dword ptr [ESI + 0x8]       ; 0057de04
    MOV ECX,dword ptr [EDI + 0x8]       ; 0057de07
    CMP EAX,ECX                         ; 0057de0a
    JBE 0x0057de11                      ; 0057de0c
        ;   XREF to: 0057de11 (CONDITIONAL_JUMP)  ; LAB_0057de11
    XCHG EAX,ECX                        ; 0057de0e
    XCHG EDI,ESI                        ; 0057de0f
    SHR ECX,0x10                        ; 0057de11
        ;   Label: LAB_0057de11
    SHR EAX,0x10                        ; 0057de14
    MOV EBP,dword ptr [EBX*0x4 + 0x1c4480c] ; 0057de17 | DAT_01c4480c
    MOV EBX,dword ptr [EBX*0x4 + 0x1c4354c] ; 0057de1e | DAT_01c4354c
    SUB ECX,EAX                         ; 0057de25
    JLE 0x0057e2b0                      ; 0057de27
        ;   XREF to: 0057e2b0 (CONDITIONAL_JUMP)  ; LAB_0057e2b0
    LEA EBX,[EBX + EAX*0x4]             ; 0057de2d
    SHL ECX,0x2                         ; 0057de30
    LEA EBP,[EBP + EAX*0x4]             ; 0057de33
    MOV dword ptr [0x00623964],ECX      ; 0057de37 | DAT_00623964
    MOV dword ptr [0x006239c8],EBX      ; 0057de3d | DAT_006239c8
    MOV dword ptr [0x006239cc],EBP      ; 0057de43 | DAT_006239cc
    CMP dword ptr [0x01c51d14],0x80     ; 0057de49 | DAT_01c51d14
    JZ 0x0057e5a0                       ; 0057de53
        ;   XREF to: 0057e5a0 (CONDITIONAL_JUMP)  ; LAB_0057e5a0
    CMP dword ptr [0x01c51d18],0x5      ; 0057de59 | DAT_01c51d18
    JNZ 0x0057ded2                      ; 0057de60
        ;   XREF to: 0057ded2 (CONDITIONAL_JUMP)  ; LAB_0057ded2
    MOV EAX,dword ptr [ESI + 0x18]      ; 0057de62
    MOV EBX,dword ptr [ESI + 0x28]      ; 0057de65
    CDQ                                 ; 0057de68
    SHLD EDX,EAX,0x18                   ; 0057de69
    SHL EAX,0x18                        ; 0057de6d
    IDIV EBX                            ; 0057de70
    MOV [0x006239a0],EAX                ; 0057de72 | DAT_006239a0
    MOV EAX,dword ptr [EDI + 0x18]      ; 0057de77
    MOV EBX,dword ptr [EDI + 0x28]      ; 0057de7a
    CDQ                                 ; 0057de7d
    SHLD EDX,EAX,0x18                   ; 0057de7e
    SHL EAX,0x18                        ; 0057de82
    IDIV EBX                            ; 0057de85
    SUB EAX,dword ptr [0x006239a0]      ; 0057de87 | DAT_006239a0
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057de8d | DAT_01c4f034
    MOV dword ptr [0x00623dd0],EDX      ; 0057de93 | DAT_00623dd0
    MOV EAX,dword ptr [ESI + 0x20]      ; 0057de99
    MOV EBX,dword ptr [ESI + 0x28]      ; 0057de9c
    CDQ                                 ; 0057de9f
    SHLD EDX,EAX,0x18                   ; 0057dea0
    SHL EAX,0x18                        ; 0057dea4
    IDIV EBX                            ; 0057dea7
    MOV [0x006239a4],EAX                ; 0057dea9 | DAT_006239a4
    MOV EAX,dword ptr [EDI + 0x20]      ; 0057deae
    MOV EBX,dword ptr [EDI + 0x28]      ; 0057deb1
    CDQ                                 ; 0057deb4
    SHLD EDX,EAX,0x18                   ; 0057deb5
    SHL EAX,0x18                        ; 0057deb9
    IDIV EBX                            ; 0057debc
    SUB EAX,dword ptr [0x006239a4]      ; 0057debe | DAT_006239a4
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057dec4 | DAT_01c4f034
    MOV dword ptr [0x00623dd4],EDX      ; 0057deca | DAT_00623dd4
    JMP 0x0057df06                      ; 0057ded0
        ;   XREF to: 0057df06 (UNCONDITIONAL_JUMP)  ; LAB_0057df06
    MOV EAX,dword ptr [EDI + 0x18]      ; 0057ded2
        ;   Label: LAB_0057ded2
    MOV EBX,dword ptr [ESI + 0x18]      ; 0057ded5
    SUB EAX,EBX                         ; 0057ded8
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057deda | DAT_01c4f034
    MOV dword ptr [0x006239a0],EBX      ; 0057dee0 | DAT_006239a0
    MOV dword ptr [0x00623dd0],EDX      ; 0057dee6 | DAT_00623dd0
    MOV EAX,dword ptr [EDI + 0x20]      ; 0057deec
    MOV EBX,dword ptr [ESI + 0x20]      ; 0057deef
    SUB EAX,EBX                         ; 0057def2
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057def4 | DAT_01c4f034
    MOV dword ptr [0x006239a4],EBX      ; 0057defa | DAT_006239a4
    MOV dword ptr [0x00623dd4],EDX      ; 0057df00 | DAT_00623dd4
    MOV EAX,dword ptr [EDI + 0x28]      ; 0057df06
        ;   Label: LAB_0057df06
    MOV EBX,dword ptr [ESI + 0x28]      ; 0057df09
    SUB EAX,EBX                         ; 0057df0c
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057df0e | DAT_01c4f034
    MOV dword ptr [0x006239ac],EBX      ; 0057df14 | DAT_006239ac
    MOV dword ptr [0x00623dd8],EDX      ; 0057df1a | DAT_00623dd8
    MOV EAX,dword ptr [EDI + 0x30]      ; 0057df20
    MOV EBX,dword ptr [ESI + 0x30]      ; 0057df23
    SUB EAX,EBX                         ; 0057df26
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057df28 | DAT_01c4f034
    MOV dword ptr [0x00623e90],EBX      ; 0057df2e | DAT_00623e90
    MOV dword ptr [0x00623e98],EDX      ; 0057df34 | DAT_00623e98
    MOV EBP,dword ptr [0x00623e90]      ; 0057df3a | DAT_00623e90
    PXOR MM7,MM7                        ; 0057df40
    TEST dword ptr [0x01c51d14],0x200   ; 0057df43 | DAT_01c51d14
    JNZ 0x0057df90                      ; 0057df4d
        ;   XREF to: 0057df90 (CONDITIONAL_JUMP)  ; LAB_0057df90
    TEST dword ptr [0x01c51d14],0x4     ; 0057df4f | DAT_01c51d14
    JNZ 0x0057e050                      ; 0057df59
        ;   XREF to: 0057e050 (CONDITIONAL_JUMP)  ; LAB_0057e050
    TEST dword ptr [0x01c51d14],0x10    ; 0057df5f | DAT_01c51d14
    JNZ 0x0057e0e0                      ; 0057df69
        ;   XREF to: 0057e0e0 (CONDITIONAL_JUMP)  ; LAB_0057e0e0
    MOVQ MM5,qword ptr [0x00624fc8]     ; 0057df6f | DAT_00624fc8
    PSLLW MM5,0x7                       ; 0057df76
    PXOR MM6,MM6                        ; 0057df7a
    JMP 0x0057e110                      ; 0057df7d
        ;   XREF to: 0057e110 (UNCONDITIONAL_JUMP)  ; LAB_0057e110
    MOV EAX,dword ptr [EDI + 0x10]      ; 0057df90
        ;   Label: LAB_0057df90
    MOV EBX,dword ptr [ESI + 0x10]      ; 0057df93
    SHR EAX,0x1                         ; 0057df96
    SHR EBX,0x1                         ; 0057df98
    SUB EAX,EBX                         ; 0057df9a
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057df9c | DAT_01c4f034
    AND EBX,0xffff                      ; 0057dfa2
    AND EDX,0xffff                      ; 0057dfa8
    MOV dword ptr [0x00623e50],EBX      ; 0057dfae | DAT_00623e50
    MOV dword ptr [0x00623e70],EDX      ; 0057dfb4 | DAT_00623e70
    MOV EAX,dword ptr [EDI + 0x38]      ; 0057dfba
    MOV EBX,dword ptr [ESI + 0x38]      ; 0057dfbd
    SHR EAX,0x1                         ; 0057dfc0
    SHR EBX,0x1                         ; 0057dfc2
    SUB EAX,EBX                         ; 0057dfc4
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057dfc6 | DAT_01c4f034
    AND EBX,0xffff                      ; 0057dfcc
    AND EDX,0xffff                      ; 0057dfd2
    MOV dword ptr [0x00623e58],EBX      ; 0057dfd8 | DAT_00623e58
    MOV dword ptr [0x00623e78],EDX      ; 0057dfde | DAT_00623e78
    MOV EAX,dword ptr [EDI + 0x40]      ; 0057dfe4
    MOV EBX,dword ptr [ESI + 0x40]      ; 0057dfe7
    SHR EAX,0x1                         ; 0057dfea
    SHR EBX,0x1                         ; 0057dfec
    SUB EAX,EBX                         ; 0057dfee
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057dff0 | DAT_01c4f034
    AND EBX,0xffff                      ; 0057dff6
    AND EDX,0xffff                      ; 0057dffc
    MOV dword ptr [0x00623e60],EBX      ; 0057e002 | DAT_00623e60
    MOV dword ptr [0x00623e80],EDX      ; 0057e008 | DAT_00623e80
    MOVQ MM5,qword ptr [0x00623e50]     ; 0057e00e | DAT_00623e50
    MOVQ MM6,qword ptr [0x00623e70]     ; 0057e015 | DAT_00623e70
    PSLLQ MM5,0x10                      ; 0057e01c
    PSLLQ MM6,0x10                      ; 0057e020
    POR MM5,qword ptr [0x00623e58]      ; 0057e024 | DAT_00623e58
    POR MM6,qword ptr [0x00623e78]      ; 0057e02b | DAT_00623e78
    PSLLQ MM5,0x10                      ; 0057e032
    PSLLQ MM6,0x10                      ; 0057e036
    POR MM5,qword ptr [0x00623e60]      ; 0057e03a | DAT_00623e60
    POR MM6,qword ptr [0x00623e80]      ; 0057e041 | DAT_00623e80
    JMP 0x0057e110                      ; 0057e048
        ;   XREF to: 0057e110 (UNCONDITIONAL_JUMP)  ; LAB_0057e110
    MOV EAX,dword ptr [EDI + 0x10]      ; 0057e050
        ;   Label: LAB_0057e050
    MOV EBX,dword ptr [ESI + 0x10]      ; 0057e053
    SUB EAX,0x100                       ; 0057e056
    SUB EBX,0x100                       ; 0057e05b
    CMP EAX,0xfff                       ; 0057e061
    JBE 0x0057e06d                      ; 0057e066
        ;   XREF to: 0057e06d (CONDITIONAL_JUMP)  ; LAB_0057e06d
    MOV EAX,0xfff                       ; 0057e068
    CMP EBX,0xfff                       ; 0057e06d
        ;   Label: LAB_0057e06d
    JBE 0x0057e07a                      ; 0057e073
        ;   XREF to: 0057e07a (CONDITIONAL_JUMP)  ; LAB_0057e07a
    MOV EBX,0xfff                       ; 0057e075
    SHL EAX,0x3                         ; 0057e07a
        ;   Label: LAB_0057e07a
    SHL EBX,0x3                         ; 0057e07d
    SUB EAX,EBX                         ; 0057e080
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057e082 | DAT_01c4f034
    AND EBX,0xffff                      ; 0057e088
    AND EDX,0xffff                      ; 0057e08e
    MOV dword ptr [0x00623e50],EBX      ; 0057e094 | DAT_00623e50
    MOV dword ptr [0x00623e70],EDX      ; 0057e09a | DAT_00623e70
    MOVQ MM5,qword ptr [0x00623e50]     ; 0057e0a0 | DAT_00623e50
    MOVQ MM6,qword ptr [0x00623e70]     ; 0057e0a7 | DAT_00623e70
    PSLLQ MM5,0x10                      ; 0057e0ae
    PSLLQ MM6,0x10                      ; 0057e0b2
    POR MM5,qword ptr [0x00623e50]      ; 0057e0b6 | DAT_00623e50
    POR MM6,qword ptr [0x00623e70]      ; 0057e0bd | DAT_00623e70
    PSLLQ MM5,0x10                      ; 0057e0c4
    PSLLQ MM6,0x10                      ; 0057e0c8
    POR MM5,qword ptr [0x00623e50]      ; 0057e0cc | DAT_00623e50
    POR MM6,qword ptr [0x00623e70]      ; 0057e0d3 | DAT_00623e70
    JMP 0x0057e110                      ; 0057e0da
        ;   XREF to: 0057e110 (UNCONDITIONAL_JUMP)  ; LAB_0057e110
    MOV EAX,[0x01c4f024]                ; 0057e0e0 | DAT_01c4f024
        ;   Label: LAB_0057e0e0
    SUB EAX,0x100                       ; 0057e0e5
    SHR EAX,0x4                         ; 0057e0ea
    CMP EAX,0xff                        ; 0057e0ed
    JC 0x0057e0f9                       ; 0057e0f2
        ;   XREF to: 0057e0f9 (CONDITIONAL_JUMP)  ; LAB_0057e0f9
    MOV EAX,0xff                        ; 0057e0f4
    MOVQ MM5,qword ptr [EAX*0x8 + 0x6247d0] ; 0057e0f9 | DAT_00624fc8 | DAT_006247d0
        ;   Label: LAB_0057e0f9
    PSLLW MM5,0x7                       ; 0057e101
    PXOR MM6,MM6                        ; 0057e105
    JMP 0x0057e110                      ; 0057e108
        ;   XREF to: 0057e110 (UNCONDITIONAL_JUMP)  ; LAB_0057e110
    MOV ECX,dword ptr [0x006239a0]      ; 0057e110 | DAT_006239a0
        ;   Label: LAB_0057e110
    MOV EDX,dword ptr [0x006239a4]      ; 0057e116 | DAT_006239a4
    MOV ESI,dword ptr [0x006239ac]      ; 0057e11c | DAT_006239ac
    MOV EDI,0x0                         ; 0057e122
    CMP dword ptr [0x01c50934],0x0      ; 0057e127 | DAT_01c50934
    JNZ 0x0057e140                      ; 0057e12e
        ;   XREF to: 0057e140 (CONDITIONAL_JUMP)  ; LAB_0057e140
    TEST dword ptr [0x01c51d14],0x2     ; 0057e130 | DAT_01c51d14
    JZ 0x0057e436                       ; 0057e13a
        ;   XREF to: 0057e436 (CONDITIONAL_JUMP)  ; LAB_0057e436
    TEST dword ptr [0x01c51d14],0x100   ; 0057e140 | DAT_01c51d14
        ;   Label: LAB_0057e140
    JNZ 0x0057e15f                      ; 0057e14a
        ;   XREF to: 0057e15f (CONDITIONAL_JUMP)  ; LAB_0057e15f
    MOV EBP,dword ptr [0x0061b4b8]      ; 0057e14c | DAT_0061b4b8
    SHL EBP,0x8                         ; 0057e152
    MOV dword ptr [0x00623e98],0x0      ; 0057e155 | DAT_00623e98
    CMP dword ptr [0x01c50934],0x0      ; 0057e15f | DAT_01c50934
        ;   Label: LAB_0057e15f
    JNZ 0x0057e2c0                      ; 0057e166
        ;   XREF to: 0057e2c0 (CONDITIONAL_JUMP)  ; LAB_0057e2c0
    TEST dword ptr [0x01c51d14],0x40    ; 0057e16c | DAT_01c51d14
        ;   Label: LAB_0057e16c
    JZ 0x0057e188                       ; 0057e176
        ;   XREF to: 0057e188 (CONDITIONAL_JUMP)  ; LAB_0057e188
    LEA EAX,[EDI]                       ; 0057e178
    ADD EAX,dword ptr [0x006239cc]      ; 0057e17a | DAT_006239cc
    CMP ESI,dword ptr [EAX]             ; 0057e180
    JL 0x0057e272                       ; 0057e182
        ;   XREF to: 0057e272 (CONDITIONAL_JUMP)  ; LAB_0057e272
    MOVD MM0,ECX                        ; 0057e188
        ;   Label: LAB_0057e188
    MOVD MM2,EDX                        ; 0057e18b
    PSRLQ MM0,qword ptr [0x00623eb8]    ; 0057e18e | DAT_00623eb8
    PSRLQ MM2,qword ptr [0x00623ed8]    ; 0057e195 | DAT_00623ed8
    PAND MM0,qword ptr [0x00623ef8]     ; 0057e19c | DAT_00623ef8
    PAND MM2,qword ptr [0x00623f18]     ; 0057e1a3 | DAT_00623f18
    PADDD MM0,MM2                       ; 0057e1aa
    MOVD EBX,MM0                        ; 0057e1ad
    ADD EBX,dword ptr [0x01c50930]      ; 0057e1b0 | DAT_01c50930
    MOVZX EAX,byte ptr [EBX]            ; 0057e1b6
    MOV EAX,dword ptr [EAX*0x4 + 0x1c4e3d4] ; 0057e1b9 | DAT_01c4e3d4
    CMP EAX,0x0                         ; 0057e1c0
    JZ 0x0057e272                       ; 0057e1c3
        ;   XREF to: 0057e272 (CONDITIONAL_JUMP)  ; LAB_0057e272
    MOVD MM0,EAX                        ; 0057e1c9
    PUNPCKLBW MM0,MM7                   ; 0057e1cc
    PXOR MM4,MM4                        ; 0057e1cf
    TEST dword ptr [0x01c51d14],0x20    ; 0057e1d2 | DAT_01c51d14
    JZ 0x0057e1ec                       ; 0057e1dc
        ;   XREF to: 0057e1ec (CONDITIONAL_JUMP)  ; LAB_0057e1ec
    MOV EBX,EDI                         ; 0057e1de
    ADD EBX,dword ptr [0x006239c8]      ; 0057e1e0 | DAT_006239c8
    MOVD MM4,dword ptr [EBX]            ; 0057e1e6
    PUNPCKLBW MM4,MM7                   ; 0057e1e9
    PSLLW MM0,0x4                       ; 0057e1ec
        ;   Label: LAB_0057e1ec
    MOVQ MM7,MM5                        ; 0057e1f0
    MOV EAX,EBP                         ; 0057e1f3
    PSRLW MM7,0x3                       ; 0057e1f5
    SAR EAX,0x8                         ; 0057e1f9
    PMULHW MM0,MM7                      ; 0057e1fc
    MOVQ MM2,qword ptr [EAX*0x8 + 0x6247d0] ; 0057e1ff | DAT_006247d0 | DAT_00624fc8
    PXOR MM7,MM7                        ; 0057e207
    MOVQ MM3,MM2                        ; 0057e20a
    PACKUSWB MM0,MM7                    ; 0057e20d
    PXOR MM3,qword ptr [0x00624fc8]     ; 0057e210 | DAT_00624fc8
    PUNPCKLBW MM0,MM7                   ; 0057e217
    CMP dword ptr [0x01c51d0c],0x0      ; 0057e21a | DAT_01c51d0c
    JNZ 0x0057e240                      ; 0057e221
        ;   XREF to: 0057e240 (CONDITIONAL_JUMP)  ; LAB_0057e240
    PMULLW MM4,MM3                      ; 0057e223
    PMULLW MM0,MM2                      ; 0057e226
    PADDUSW MM0,MM4                     ; 0057e229
    PSRLW MM0,0x8                       ; 0057e22c
    PACKUSWB MM0,MM7                    ; 0057e230
    JMP 0x0057e251                      ; 0057e233
        ;   XREF to: 0057e251 (UNCONDITIONAL_JUMP)  ; LAB_0057e251
    PSLLW MM4,0x8                       ; 0057e240
        ;   Label: LAB_0057e240
    PMULLW MM0,MM2                      ; 0057e244
    PADDUSW MM0,MM4                     ; 0057e247
    PSRLW MM0,0x8                       ; 0057e24a
    PACKUSWB MM0,MM7                    ; 0057e24e
    MOV EBX,EDI                         ; 0057e251
        ;   Label: LAB_0057e251
    ADD EBX,dword ptr [0x006239c8]      ; 0057e253 | DAT_006239c8
    MOVD dword ptr [EBX],MM0            ; 0057e259
    TEST dword ptr [0x01c51d14],0x80    ; 0057e25c | DAT_01c51d14
    JZ 0x0057e272                       ; 0057e266
        ;   XREF to: 0057e272 (CONDITIONAL_JUMP)  ; LAB_0057e272
    MOV EAX,EDI                         ; 0057e268
    ADD EAX,dword ptr [0x006239cc]      ; 0057e26a | DAT_006239cc
    MOV dword ptr [EAX],ESI             ; 0057e270
    ADD EDI,0x4                         ; 0057e272
        ;   Label: LAB_0057e272
    CMP EDI,dword ptr [0x00623964]      ; 0057e275 | DAT_00623964
    JNC 0x0057e2b0                      ; 0057e27b
        ;   XREF to: 0057e2b0 (CONDITIONAL_JUMP)  ; LAB_0057e2b0
    ADD ECX,dword ptr [0x00623dd0]      ; 0057e27d | DAT_00623dd0
    PADDW MM5,MM6                       ; 0057e283
    ADD EDX,dword ptr [0x00623dd4]      ; 0057e286 | DAT_00623dd4
    MOVQ MM0,MM5                        ; 0057e28c
    ADD ESI,dword ptr [0x00623dd8]      ; 0057e28f | DAT_00623dd8
    PCMPGTW MM5,qword ptr [0x00623ddc]  ; 0057e295 | DAT_00623ddc
    ADD EBP,dword ptr [0x00623e98]      ; 0057e29c | DAT_00623e98
    PAND MM5,MM0                        ; 0057e2a2
    JMP 0x0057e16c                      ; 0057e2a5
        ;   XREF to: 0057e16c (UNCONDITIONAL_JUMP)  ; LAB_0057e16c
    POP EBP                             ; 0057e2b0
        ;   Label: LAB_0057e2b0
    EMMS                                ; 0057e2b1
    POP EDI                             ; 0057e2b3
    POP ESI                             ; 0057e2b4
    RET                                 ; 0057e2b5
    TEST dword ptr [0x01c51d14],0x40    ; 0057e2c0 | DAT_01c51d14
        ;   Label: LAB_0057e2c0
    JZ 0x0057e2dc                       ; 0057e2ca
        ;   XREF to: 0057e2dc (CONDITIONAL_JUMP)  ; LAB_0057e2dc
    LEA EAX,[EDI]                       ; 0057e2cc
    ADD EAX,dword ptr [0x006239cc]      ; 0057e2ce | DAT_006239cc
    CMP ESI,dword ptr [EAX]             ; 0057e2d4
    JL 0x0057e3f2                       ; 0057e2d6
        ;   XREF to: 0057e3f2 (CONDITIONAL_JUMP)  ; LAB_0057e3f2
    MOVD MM0,ECX                        ; 0057e2dc
        ;   Label: LAB_0057e2dc
    MOVD MM2,EDX                        ; 0057e2df
    PSRLQ MM0,qword ptr [0x00623eb8]    ; 0057e2e2 | DAT_00623eb8
    PSRLQ MM2,qword ptr [0x00623ed8]    ; 0057e2e9 | DAT_00623ed8
    PAND MM0,qword ptr [0x00623ef8]     ; 0057e2f0 | DAT_00623ef8
    PAND MM2,qword ptr [0x00623f18]     ; 0057e2f7 | DAT_00623f18
    PADDD MM0,MM2                       ; 0057e2fe
    MOVD EBX,MM0                        ; 0057e301
    ADD EBX,dword ptr [0x01c50930]      ; 0057e304 | DAT_01c50930
    MOVZX EAX,byte ptr [EBX]            ; 0057e30a
    MOVD MM0,dword ptr [EAX*0x4 + 0x1c4e3d4] ; 0057e30d | DAT_01c4e3d4
    PUNPCKLBW MM0,MM7                   ; 0057e315
    SUB EBX,dword ptr [0x01c50930]      ; 0057e318 | DAT_01c50930
    ADD EBX,dword ptr [0x01c50934]      ; 0057e31e | DAT_01c50934
    MOVZX EAX,byte ptr [EBX]            ; 0057e324
    TEST EAX,0xffffffff                 ; 0057e327
    JZ 0x0057e3f2                       ; 0057e32c
        ;   XREF to: 0057e3f2 (CONDITIONAL_JUMP)  ; LAB_0057e3f2
    MOV EBX,EDI                         ; 0057e332
    ADD EBX,dword ptr [0x006239c8]      ; 0057e334 | DAT_006239c8
    MOVD MM4,dword ptr [EBX]            ; 0057e33a
    PUNPCKLBW MM4,MM7                   ; 0057e33d
    PSLLW MM0,0x4                       ; 0057e340
    MOVQ MM7,MM5                        ; 0057e344
    IMUL EAX,EBP                        ; 0057e347
    PSRLW MM7,0x3                       ; 0057e34a
    SHR EAX,0x10                        ; 0057e34e
    PMULHW MM0,MM7                      ; 0057e351
    MOVQ MM2,qword ptr [EAX*0x8 + 0x6247d0] ; 0057e354 | DAT_006247d0
    PXOR MM7,MM7                        ; 0057e35c
    MOVQ MM3,MM2                        ; 0057e35f
    PACKUSWB MM0,MM7                    ; 0057e362
    PXOR MM3,qword ptr [0x00624fc8]     ; 0057e365 | DAT_00624fc8
    PUNPCKLBW MM0,MM7                   ; 0057e36c
    CMP dword ptr [0x01c51d0c],0x0      ; 0057e36f | DAT_01c51d0c
    JNZ 0x0057e3c0                      ; 0057e376
        ;   XREF to: 0057e3c0 (CONDITIONAL_JUMP)  ; LAB_0057e3c0
    PMULLW MM4,MM3                      ; 0057e378
    PMULLW MM0,MM2                      ; 0057e37b
    PADDUSW MM0,MM4                     ; 0057e37e
    PSRLW MM0,0x8                       ; 0057e381
    PACKUSWB MM0,MM7                    ; 0057e385
    JMP 0x0057e3d1                      ; 0057e388
        ;   XREF to: 0057e3d1 (UNCONDITIONAL_JUMP)  ; LAB_0057e3d1
    PSLLW MM4,0x8                       ; 0057e3c0
        ;   Label: LAB_0057e3c0
    PMULLW MM0,MM2                      ; 0057e3c4
    PADDUSW MM0,MM4                     ; 0057e3c7
    PSRLW MM0,0x8                       ; 0057e3ca
    PACKUSWB MM0,MM7                    ; 0057e3ce
    MOV EBX,EDI                         ; 0057e3d1
        ;   Label: LAB_0057e3d1
    ADD EBX,dword ptr [0x006239c8]      ; 0057e3d3 | DAT_006239c8
    MOVD dword ptr [EBX],MM0            ; 0057e3d9
    TEST dword ptr [0x01c51d14],0x80    ; 0057e3dc | DAT_01c51d14
    JZ 0x0057e3f2                       ; 0057e3e6
        ;   XREF to: 0057e3f2 (CONDITIONAL_JUMP)  ; LAB_0057e3f2
    MOV EAX,EDI                         ; 0057e3e8
    ADD EAX,dword ptr [0x006239cc]      ; 0057e3ea | DAT_006239cc
    MOV dword ptr [EAX],ESI             ; 0057e3f0
    ADD EDI,0x4                         ; 0057e3f2
        ;   Label: LAB_0057e3f2
    CMP EDI,dword ptr [0x00623964]      ; 0057e3f5 | DAT_00623964
    JNC 0x0057e430                      ; 0057e3fb
        ;   XREF to: 0057e430 (CONDITIONAL_JUMP)  ; LAB_0057e430
    ADD ECX,dword ptr [0x00623dd0]      ; 0057e3fd | DAT_00623dd0
    PADDW MM5,MM6                       ; 0057e403
    ADD EDX,dword ptr [0x00623dd4]      ; 0057e406 | DAT_00623dd4
    MOVQ MM0,MM5                        ; 0057e40c
    ADD ESI,dword ptr [0x00623dd8]      ; 0057e40f | DAT_00623dd8
    PCMPGTW MM5,qword ptr [0x00623ddc]  ; 0057e415 | DAT_00623ddc
    ADD EBP,dword ptr [0x00623e98]      ; 0057e41c | DAT_00623e98
    PAND MM5,MM0                        ; 0057e422
    JMP 0x0057e2c0                      ; 0057e425
        ;   XREF to: 0057e2c0 (UNCONDITIONAL_JUMP)  ; LAB_0057e2c0
    POP EBP                             ; 0057e430
        ;   Label: LAB_0057e430
    EMMS                                ; 0057e431
    POP EDI                             ; 0057e433
    POP ESI                             ; 0057e434
    RET                                 ; 0057e435
    MOVQ MM1,qword ptr [0x01c51d1c]     ; 0057e436 | DAT_01c51d1c
        ;   Label: LAB_0057e436
    PUNPCKLBW MM1,MM7                   ; 0057e43d
    TEST dword ptr [0x01c51d14],0x8     ; 0057e440 | DAT_01c51d14
    JNZ 0x0057e45b                      ; 0057e44a
        ;   XREF to: 0057e45b (CONDITIONAL_JUMP)  ; LAB_0057e45b
    MOV EBP,0x0                         ; 0057e44c
    MOV dword ptr [0x00623e98],0x0      ; 0057e451 | DAT_00623e98
    TEST dword ptr [0x01c51d14],0x40    ; 0057e45b | DAT_01c51d14
        ;   Label: LAB_0057e45b
    JZ 0x0057e477                       ; 0057e465
        ;   XREF to: 0057e477 (CONDITIONAL_JUMP)  ; LAB_0057e477
    LEA EAX,[EDI]                       ; 0057e467
    ADD EAX,dword ptr [0x006239cc]      ; 0057e469 | DAT_006239cc
    CMP ESI,dword ptr [EAX]             ; 0057e46f
    JL 0x0057e52d                       ; 0057e471
        ;   XREF to: 0057e52d (CONDITIONAL_JUMP)  ; LAB_0057e52d
    TEST dword ptr [0x01c51d14],0x1     ; 0057e477 | DAT_01c51d14
        ;   Label: LAB_0057e477
    JZ 0x0057e576                       ; 0057e481
        ;   XREF to: 0057e576 (CONDITIONAL_JUMP)  ; LAB_0057e576
    MOVD MM0,ECX                        ; 0057e487
    MOVD MM2,EDX                        ; 0057e48a
    PSRLQ MM0,qword ptr [0x00623eb8]    ; 0057e48d | DAT_00623eb8
    PSRLQ MM2,qword ptr [0x00623ed8]    ; 0057e494 | DAT_00623ed8
    PAND MM0,qword ptr [0x00623ef8]     ; 0057e49b | DAT_00623ef8
    PAND MM2,qword ptr [0x00623f18]     ; 0057e4a2 | DAT_00623f18
    PADDD MM0,MM2                       ; 0057e4a9
    MOVD EBX,MM0                        ; 0057e4ac
    ADD EBX,dword ptr [0x01c50930]      ; 0057e4af | DAT_01c50930
    MOVZX EAX,byte ptr [EBX]            ; 0057e4b5
    MOVD MM0,dword ptr [EAX*0x4 + 0x1c4e3d4] ; 0057e4b8 | DAT_01c4e3d4
    MOVQ MM3,MM5                        ; 0057e4c0
        ;   Label: LAB_0057e4c0
    PUNPCKLBW MM0,MM7                   ; 0057e4c3
    PSRLW MM3,0x3                       ; 0057e4c6
    PSLLW MM0,0x4                       ; 0057e4ca
    PMULHW MM0,MM3                      ; 0057e4ce
    PACKUSWB MM0,MM7                    ; 0057e4d1
    TEST dword ptr [0x01c51d14],0x8     ; 0057e4d4 | DAT_01c51d14
    JZ 0x0057e50d                       ; 0057e4de
        ;   XREF to: 0057e50d (CONDITIONAL_JUMP)  ; LAB_0057e50d
    MOV EAX,EBP                         ; 0057e4e0
    SAR EAX,0x8                         ; 0057e4e2
    MOVQ MM3,qword ptr [EAX*0x8 + 0x6247d0] ; 0057e4e5 | DAT_006247d0
    MOVQ MM4,MM1                        ; 0057e4ed
    MOVQ MM2,MM3                        ; 0057e4f0
    PMULLW MM4,MM3                      ; 0057e4f3
    PXOR MM2,qword ptr [0x00624fc8]     ; 0057e4f6 | DAT_00624fc8
    PUNPCKLBW MM0,MM7                   ; 0057e4fd
    PMULLW MM0,MM2                      ; 0057e500
    PADDW MM0,MM4                       ; 0057e503
    PSRLW MM0,0x8                       ; 0057e506
    PACKUSWB MM0,MM7                    ; 0057e50a
    MOV EBX,dword ptr [0x006239c8]      ; 0057e50d | DAT_006239c8
        ;   Label: LAB_0057e50d
    ADD EBX,EDI                         ; 0057e513
    MOVD dword ptr [EBX],MM0            ; 0057e515
    TEST dword ptr [0x01c51d14],0x80    ; 0057e518 | DAT_01c51d14
    JZ 0x0057e52d                       ; 0057e522
        ;   XREF to: 0057e52d (CONDITIONAL_JUMP)  ; LAB_0057e52d
    MOV EAX,[0x006239cc]                ; 0057e524 | DAT_006239cc
    ADD EAX,EDI                         ; 0057e529
    MOV dword ptr [EAX],ESI             ; 0057e52b
    ADD EDI,0x4                         ; 0057e52d
        ;   Label: LAB_0057e52d
    CMP EDI,dword ptr [0x00623964]      ; 0057e530 | DAT_00623964
    JNC 0x0057e2b0                      ; 0057e536
        ;   XREF to: 0057e2b0 (CONDITIONAL_JUMP)  ; LAB_0057e2b0
    ADD ECX,dword ptr [0x00623dd0]      ; 0057e53c | DAT_00623dd0
    PADDW MM5,MM6                       ; 0057e542
    ADD EDX,dword ptr [0x00623dd4]      ; 0057e545 | DAT_00623dd4
    MOVQ MM0,MM5                        ; 0057e54b
    ADD ESI,dword ptr [0x00623dd8]      ; 0057e54e | DAT_00623dd8
    PCMPGTW MM5,qword ptr [0x00623ddc]  ; 0057e554 | DAT_00623ddc
    ADD EBP,dword ptr [0x00623e98]      ; 0057e55b | DAT_00623e98
    PAND MM5,MM0                        ; 0057e561
    JMP 0x0057e45b                      ; 0057e564
        ;   XREF to: 0057e45b (UNCONDITIONAL_JUMP)  ; LAB_0057e45b
    TEST dword ptr [0x01c51d14],0x200   ; 0057e576 | DAT_01c51d14
        ;   Label: LAB_0057e576
    JNZ 0x0057e590                      ; 0057e580
        ;   XREF to: 0057e590 (CONDITIONAL_JUMP)  ; LAB_0057e590
    MOVD MM0,dword ptr [0x01c4f020]     ; 0057e582 | DAT_01c4f020
    JMP 0x0057e4c0                      ; 0057e589
        ;   XREF to: 0057e4c0 (UNCONDITIONAL_JUMP)  ; LAB_0057e4c0
    MOVD MM0,dword ptr [0x00623fc8]     ; 0057e590 | DAT_00623fc8
        ;   Label: LAB_0057e590
    JMP 0x0057e4c0                      ; 0057e597
        ;   XREF to: 0057e4c0 (UNCONDITIONAL_JUMP)  ; LAB_0057e4c0
    MOV EAX,dword ptr [EDI + 0x28]      ; 0057e5a0
        ;   Label: LAB_0057e5a0
    MOV EBX,dword ptr [ESI + 0x28]      ; 0057e5a3
    SUB EAX,EBX                         ; 0057e5a6
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057e5a8 | DAT_01c4f034
    MOV dword ptr [0x006239ac],EBX      ; 0057e5ae | DAT_006239ac
    MOV dword ptr [0x00623dd8],EDX      ; 0057e5b4 | DAT_00623dd8
    MOV EAX,[0x006239ac]                ; 0057e5ba | DAT_006239ac
    MOV EBX,dword ptr [0x00623dd8]      ; 0057e5bf | DAT_00623dd8
    MOV ESI,dword ptr [0x006239cc]      ; 0057e5c5 | DAT_006239cc
    MOV ECX,dword ptr [0x00623964]      ; 0057e5cb | DAT_00623964
    MOV dword ptr [ESI],EAX             ; 0057e5d1
        ;   Label: LAB_0057e5d1
    ADD EAX,EBX                         ; 0057e5d3
    ADD ESI,0x4                         ; 0057e5d5
    SUB ECX,0x4                         ; 0057e5d8
    JG 0x0057e5d1                       ; 0057e5db
        ;   XREF to: 0057e5d1 (CONDITIONAL_JUMP)  ; LAB_0057e5d1
    POP EBP                             ; 0057e5dd
    EMMS                                ; 0057e5de
    POP EDI                             ; 0057e5e0
    POP ESI                             ; 0057e5e1
    RET                                 ; 0057e5e2

