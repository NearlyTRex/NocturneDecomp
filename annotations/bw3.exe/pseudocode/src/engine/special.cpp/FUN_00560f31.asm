; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_special_cpp_FUN_00560f31(void)
;
;
; XREF[57]:
;   engine_3d.c_renderPolygonAdaptiveDepthOp25_FUN_00404980 at 00404a3e
;   engine_3d.c_renderPolygonAdaptiveFogTexturedOp52_FUN_004062a0 at 00406376
;   engine_3d.c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_004046e0 at 0040478d
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00406d90 at 00406e24
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_00406c50 at 00406ce4
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedOp36_FUN_004054e0 at 00405569
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedPerspOp37_FUN_00405600 at 00405689
;   engine_3d.c_renderPolygonBlendedLitOp63_FUN_00406af0 at 00406b8c
;   engine_3d.c_renderPolygonDepthWritePass_FUN_004057b0 at 0040582f
;   engine_3d.c_renderPolygonDestReadBlendDepthLitOp55_FUN_00406610 at 004066b4
;   ... and 47 more
;
; Referenced Globals:
;   undefined4 DAT_005fba38
;   undefined4 DAT_006048a4
;   undefined4 DAT_006048e0
;   undefined4 DAT_006048e4
;   undefined4 DAT_006048ec
;   undefined4 DAT_00604908
;   undefined4 DAT_0060490c
;   undefined4 DAT_00604d10
;   undefined4 DAT_00604d14
;   undefined4 DAT_00604d18
;   undefined8 DAT_00604d1c
;   undefined8 DAT_00604d90
;   undefined4 DAT_00604d98
;   undefined4 DAT_00604da0
;   undefined8 DAT_00604db0
;   ... and 23 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00560f31
        ;   Label: engine_special.cpp_FUN_00560f31
    PUSH EDI                            ; 00560f32
    PUSH EBP                            ; 00560f33
    MOV EAX,dword ptr [ESI + 0x8]       ; 00560f34
    MOV ECX,dword ptr [EDI + 0x8]       ; 00560f37
    CMP EAX,ECX                         ; 00560f3a
    JBE 0x00560f41                      ; 00560f3c
        ;   XREF to: 00560f41 (CONDITIONAL_JUMP)  ; LAB_00560f41
    XCHG EAX,ECX                        ; 00560f3e
    XCHG EDI,ESI                        ; 00560f3f
    SHR ECX,0x10                        ; 00560f41
        ;   Label: LAB_00560f41
    SHR EAX,0x10                        ; 00560f44
    MOV EBP,dword ptr [EBX*0x4 + 0x1c60dac] ; 00560f47 | DAT_01c60dac
    MOV EBX,dword ptr [EBX*0x4 + 0x1c5faec] ; 00560f4e | DAT_01c5faec
    SUB ECX,EAX                         ; 00560f55
    JLE 0x005613e0                      ; 00560f57
        ;   XREF to: 005613e0 (CONDITIONAL_JUMP)  ; LAB_005613e0
    LEA EBX,[EBX + EAX*0x4]             ; 00560f5d
    SHL ECX,0x2                         ; 00560f60
    LEA EBP,[EBP + EAX*0x4]             ; 00560f63
    MOV dword ptr [0x006048a4],ECX      ; 00560f67 | DAT_006048a4
    MOV dword ptr [0x00604908],EBX      ; 00560f6d | DAT_00604908
    MOV dword ptr [0x0060490c],EBP      ; 00560f73 | DAT_0060490c
    CMP dword ptr [0x01c6e2b4],0x80     ; 00560f79 | DAT_01c6e2b4
    JZ 0x005616d0                       ; 00560f83
        ;   XREF to: 005616d0 (CONDITIONAL_JUMP)  ; LAB_005616d0
    CMP dword ptr [0x01c6e2b8],0x5      ; 00560f89 | DAT_01c6e2b8
    JNZ 0x00561002                      ; 00560f90
        ;   XREF to: 00561002 (CONDITIONAL_JUMP)  ; LAB_00561002
    MOV EAX,dword ptr [ESI + 0x18]      ; 00560f92
    MOV EBX,dword ptr [ESI + 0x28]      ; 00560f95
    CDQ                                 ; 00560f98
    SHLD EDX,EAX,0x18                   ; 00560f99
    SHL EAX,0x18                        ; 00560f9d
    IDIV EBX                            ; 00560fa0
    MOV [0x006048e0],EAX                ; 00560fa2 | DAT_006048e0
    MOV EAX,dword ptr [EDI + 0x18]      ; 00560fa7
    MOV EBX,dword ptr [EDI + 0x28]      ; 00560faa
    CDQ                                 ; 00560fad
    SHLD EDX,EAX,0x18                   ; 00560fae
    SHL EAX,0x18                        ; 00560fb2
    IDIV EBX                            ; 00560fb5
    SUB EAX,dword ptr [0x006048e0]      ; 00560fb7 | DAT_006048e0
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 00560fbd | DAT_01c6b5d4
    MOV dword ptr [0x00604d10],EDX      ; 00560fc3 | DAT_00604d10
    MOV EAX,dword ptr [ESI + 0x20]      ; 00560fc9
    MOV EBX,dword ptr [ESI + 0x28]      ; 00560fcc
    CDQ                                 ; 00560fcf
    SHLD EDX,EAX,0x18                   ; 00560fd0
    SHL EAX,0x18                        ; 00560fd4
    IDIV EBX                            ; 00560fd7
    MOV [0x006048e4],EAX                ; 00560fd9 | DAT_006048e4
    MOV EAX,dword ptr [EDI + 0x20]      ; 00560fde
    MOV EBX,dword ptr [EDI + 0x28]      ; 00560fe1
    CDQ                                 ; 00560fe4
    SHLD EDX,EAX,0x18                   ; 00560fe5
    SHL EAX,0x18                        ; 00560fe9
    IDIV EBX                            ; 00560fec
    SUB EAX,dword ptr [0x006048e4]      ; 00560fee | DAT_006048e4
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 00560ff4 | DAT_01c6b5d4
    MOV dword ptr [0x00604d14],EDX      ; 00560ffa | DAT_00604d14
    JMP 0x00561036                      ; 00561000
        ;   XREF to: 00561036 (UNCONDITIONAL_JUMP)  ; LAB_00561036
    MOV EAX,dword ptr [EDI + 0x18]      ; 00561002
        ;   Label: LAB_00561002
    MOV EBX,dword ptr [ESI + 0x18]      ; 00561005
    SUB EAX,EBX                         ; 00561008
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 0056100a | DAT_01c6b5d4
    MOV dword ptr [0x006048e0],EBX      ; 00561010 | DAT_006048e0
    MOV dword ptr [0x00604d10],EDX      ; 00561016 | DAT_00604d10
    MOV EAX,dword ptr [EDI + 0x20]      ; 0056101c
    MOV EBX,dword ptr [ESI + 0x20]      ; 0056101f
    SUB EAX,EBX                         ; 00561022
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 00561024 | DAT_01c6b5d4
    MOV dword ptr [0x006048e4],EBX      ; 0056102a | DAT_006048e4
    MOV dword ptr [0x00604d14],EDX      ; 00561030 | DAT_00604d14
    MOV EAX,dword ptr [EDI + 0x28]      ; 00561036
        ;   Label: LAB_00561036
    MOV EBX,dword ptr [ESI + 0x28]      ; 00561039
    SUB EAX,EBX                         ; 0056103c
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 0056103e | DAT_01c6b5d4
    MOV dword ptr [0x006048ec],EBX      ; 00561044 | DAT_006048ec
    MOV dword ptr [0x00604d18],EDX      ; 0056104a | DAT_00604d18
    MOV EAX,dword ptr [EDI + 0x30]      ; 00561050
    MOV EBX,dword ptr [ESI + 0x30]      ; 00561053
    SUB EAX,EBX                         ; 00561056
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 00561058 | DAT_01c6b5d4
    MOV dword ptr [0x00604dd0],EBX      ; 0056105e | DAT_00604dd0
    MOV dword ptr [0x00604dd8],EDX      ; 00561064 | DAT_00604dd8
    MOV EBP,dword ptr [0x00604dd0]      ; 0056106a | DAT_00604dd0
    PXOR MM7,MM7                        ; 00561070
    TEST dword ptr [0x01c6e2b4],0x200   ; 00561073 | DAT_01c6e2b4
    JNZ 0x005610c0                      ; 0056107d
        ;   XREF to: 005610c0 (CONDITIONAL_JUMP)  ; LAB_005610c0
    TEST dword ptr [0x01c6e2b4],0x4     ; 0056107f | DAT_01c6e2b4
    JNZ 0x00561180                      ; 00561089
        ;   XREF to: 00561180 (CONDITIONAL_JUMP)  ; LAB_00561180
    TEST dword ptr [0x01c6e2b4],0x10    ; 0056108f | DAT_01c6e2b4
    JNZ 0x00561210                      ; 00561099
        ;   XREF to: 00561210 (CONDITIONAL_JUMP)  ; LAB_00561210
    MOVQ MM5,qword ptr [0x00605f08]     ; 0056109f | DAT_00605f08
    PSLLW MM5,0x7                       ; 005610a6
    PXOR MM6,MM6                        ; 005610aa
    JMP 0x00561240                      ; 005610ad
        ;   XREF to: 00561240 (UNCONDITIONAL_JUMP)  ; LAB_00561240
    MOV EAX,dword ptr [EDI + 0x10]      ; 005610c0
        ;   Label: LAB_005610c0
    MOV EBX,dword ptr [ESI + 0x10]      ; 005610c3
    SHR EAX,0x1                         ; 005610c6
    SHR EBX,0x1                         ; 005610c8
    SUB EAX,EBX                         ; 005610ca
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 005610cc | DAT_01c6b5d4
    AND EBX,0xffff                      ; 005610d2
    AND EDX,0xffff                      ; 005610d8
    MOV dword ptr [0x00604d90],EBX      ; 005610de | DAT_00604d90
    MOV dword ptr [0x00604db0],EDX      ; 005610e4 | DAT_00604db0
    MOV EAX,dword ptr [EDI + 0x38]      ; 005610ea
    MOV EBX,dword ptr [ESI + 0x38]      ; 005610ed
    SHR EAX,0x1                         ; 005610f0
    SHR EBX,0x1                         ; 005610f2
    SUB EAX,EBX                         ; 005610f4
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 005610f6 | DAT_01c6b5d4
    AND EBX,0xffff                      ; 005610fc
    AND EDX,0xffff                      ; 00561102
    MOV dword ptr [0x00604d98],EBX      ; 00561108 | DAT_00604d98
    MOV dword ptr [0x00604db8],EDX      ; 0056110e | DAT_00604db8
    MOV EAX,dword ptr [EDI + 0x40]      ; 00561114
    MOV EBX,dword ptr [ESI + 0x40]      ; 00561117
    SHR EAX,0x1                         ; 0056111a
    SHR EBX,0x1                         ; 0056111c
    SUB EAX,EBX                         ; 0056111e
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 00561120 | DAT_01c6b5d4
    AND EBX,0xffff                      ; 00561126
    AND EDX,0xffff                      ; 0056112c
    MOV dword ptr [0x00604da0],EBX      ; 00561132 | DAT_00604da0
    MOV dword ptr [0x00604dc0],EDX      ; 00561138 | DAT_00604dc0
    MOVQ MM5,qword ptr [0x00604d90]     ; 0056113e | DAT_00604d90
    MOVQ MM6,qword ptr [0x00604db0]     ; 00561145 | DAT_00604db0
    PSLLQ MM5,0x10                      ; 0056114c
    PSLLQ MM6,0x10                      ; 00561150
    POR MM5,qword ptr [0x00604d98]      ; 00561154 | DAT_00604d98
    POR MM6,qword ptr [0x00604db8]      ; 0056115b | DAT_00604db8
    PSLLQ MM5,0x10                      ; 00561162
    PSLLQ MM6,0x10                      ; 00561166
    POR MM5,qword ptr [0x00604da0]      ; 0056116a | DAT_00604da0
    POR MM6,qword ptr [0x00604dc0]      ; 00561171 | DAT_00604dc0
    JMP 0x00561240                      ; 00561178
        ;   XREF to: 00561240 (UNCONDITIONAL_JUMP)  ; LAB_00561240
    MOV EAX,dword ptr [EDI + 0x10]      ; 00561180
        ;   Label: LAB_00561180
    MOV EBX,dword ptr [ESI + 0x10]      ; 00561183
    SUB EAX,0x100                       ; 00561186
    SUB EBX,0x100                       ; 0056118b
    CMP EAX,0xfff                       ; 00561191
    JBE 0x0056119d                      ; 00561196
        ;   XREF to: 0056119d (CONDITIONAL_JUMP)  ; LAB_0056119d
    MOV EAX,0xfff                       ; 00561198
    CMP EBX,0xfff                       ; 0056119d
        ;   Label: LAB_0056119d
    JBE 0x005611aa                      ; 005611a3
        ;   XREF to: 005611aa (CONDITIONAL_JUMP)  ; LAB_005611aa
    MOV EBX,0xfff                       ; 005611a5
    SHL EAX,0x3                         ; 005611aa
        ;   Label: LAB_005611aa
    SHL EBX,0x3                         ; 005611ad
    SUB EAX,EBX                         ; 005611b0
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 005611b2 | DAT_01c6b5d4
    AND EBX,0xffff                      ; 005611b8
    AND EDX,0xffff                      ; 005611be
    MOV dword ptr [0x00604d90],EBX      ; 005611c4 | DAT_00604d90
    MOV dword ptr [0x00604db0],EDX      ; 005611ca | DAT_00604db0
    MOVQ MM5,qword ptr [0x00604d90]     ; 005611d0 | DAT_00604d90
    MOVQ MM6,qword ptr [0x00604db0]     ; 005611d7 | DAT_00604db0
    PSLLQ MM5,0x10                      ; 005611de
    PSLLQ MM6,0x10                      ; 005611e2
    POR MM5,qword ptr [0x00604d90]      ; 005611e6 | DAT_00604d90
    POR MM6,qword ptr [0x00604db0]      ; 005611ed | DAT_00604db0
    PSLLQ MM5,0x10                      ; 005611f4
    PSLLQ MM6,0x10                      ; 005611f8
    POR MM5,qword ptr [0x00604d90]      ; 005611fc | DAT_00604d90
    POR MM6,qword ptr [0x00604db0]      ; 00561203 | DAT_00604db0
    JMP 0x00561240                      ; 0056120a
        ;   XREF to: 00561240 (UNCONDITIONAL_JUMP)  ; LAB_00561240
    MOV EAX,[0x01c6b5c4]                ; 00561210 | DAT_01c6b5c4
        ;   Label: LAB_00561210
    SUB EAX,0x100                       ; 00561215
    SHR EAX,0x4                         ; 0056121a
    CMP EAX,0xff                        ; 0056121d
    JC 0x00561229                       ; 00561222
        ;   XREF to: 00561229 (CONDITIONAL_JUMP)  ; LAB_00561229
    MOV EAX,0xff                        ; 00561224
    MOVQ MM5,qword ptr [EAX*0x8 + 0x605710] ; 00561229 | DAT_00605f08 | DAT_00605710
        ;   Label: LAB_00561229
    PSLLW MM5,0x7                       ; 00561231
    PXOR MM6,MM6                        ; 00561235
    JMP 0x00561240                      ; 00561238
        ;   XREF to: 00561240 (UNCONDITIONAL_JUMP)  ; LAB_00561240
    MOV ECX,dword ptr [0x006048e0]      ; 00561240 | DAT_006048e0
        ;   Label: LAB_00561240
    MOV EDX,dword ptr [0x006048e4]      ; 00561246 | DAT_006048e4
    MOV ESI,dword ptr [0x006048ec]      ; 0056124c | DAT_006048ec
    MOV EDI,0x0                         ; 00561252
    CMP dword ptr [0x01c6ced4],0x0      ; 00561257 | DAT_01c6ced4
    JNZ 0x00561270                      ; 0056125e
        ;   XREF to: 00561270 (CONDITIONAL_JUMP)  ; LAB_00561270
    TEST dword ptr [0x01c6e2b4],0x2     ; 00561260 | DAT_01c6e2b4
    JZ 0x00561566                       ; 0056126a
        ;   XREF to: 00561566 (CONDITIONAL_JUMP)  ; LAB_00561566
    TEST dword ptr [0x01c6e2b4],0x100   ; 00561270 | DAT_01c6e2b4
        ;   Label: LAB_00561270
    JNZ 0x0056128f                      ; 0056127a
        ;   XREF to: 0056128f (CONDITIONAL_JUMP)  ; LAB_0056128f
    MOV EBP,dword ptr [0x005fba38]      ; 0056127c | DAT_005fba38
    SHL EBP,0x8                         ; 00561282
    MOV dword ptr [0x00604dd8],0x0      ; 00561285 | DAT_00604dd8
    CMP dword ptr [0x01c6ced4],0x0      ; 0056128f | DAT_01c6ced4
        ;   Label: LAB_0056128f
    JNZ 0x005613f0                      ; 00561296
        ;   XREF to: 005613f0 (CONDITIONAL_JUMP)  ; LAB_005613f0
    TEST dword ptr [0x01c6e2b4],0x40    ; 0056129c | DAT_01c6e2b4
        ;   Label: LAB_0056129c
    JZ 0x005612b8                       ; 005612a6
        ;   XREF to: 005612b8 (CONDITIONAL_JUMP)  ; LAB_005612b8
    LEA EAX,[EDI]                       ; 005612a8
    ADD EAX,dword ptr [0x0060490c]      ; 005612aa | DAT_0060490c
    CMP ESI,dword ptr [EAX]             ; 005612b0
    JL 0x005613a2                       ; 005612b2
        ;   XREF to: 005613a2 (CONDITIONAL_JUMP)  ; LAB_005613a2
    MOVD MM0,ECX                        ; 005612b8
        ;   Label: LAB_005612b8
    MOVD MM2,EDX                        ; 005612bb
    PSRLQ MM0,qword ptr [0x00604df8]    ; 005612be | DAT_00604df8
    PSRLQ MM2,qword ptr [0x00604e18]    ; 005612c5 | DAT_00604e18
    PAND MM0,qword ptr [0x00604e38]     ; 005612cc | DAT_00604e38
    PAND MM2,qword ptr [0x00604e58]     ; 005612d3 | DAT_00604e58
    PADDD MM0,MM2                       ; 005612da
    MOVD EBX,MM0                        ; 005612dd
    ADD EBX,dword ptr [0x01c6ced0]      ; 005612e0 | DAT_01c6ced0
    MOVZX EAX,byte ptr [EBX]            ; 005612e6
    MOV EAX,dword ptr [EAX*0x4 + 0x1c6a974] ; 005612e9 | DAT_01c6a974
    CMP EAX,0x0                         ; 005612f0
    JZ 0x005613a2                       ; 005612f3
        ;   XREF to: 005613a2 (CONDITIONAL_JUMP)  ; LAB_005613a2
    MOVD MM0,EAX                        ; 005612f9
    PUNPCKLBW MM0,MM7                   ; 005612fc
    PXOR MM4,MM4                        ; 005612ff
    TEST dword ptr [0x01c6e2b4],0x20    ; 00561302 | DAT_01c6e2b4
    JZ 0x0056131c                       ; 0056130c
        ;   XREF to: 0056131c (CONDITIONAL_JUMP)  ; LAB_0056131c
    MOV EBX,EDI                         ; 0056130e
    ADD EBX,dword ptr [0x00604908]      ; 00561310 | DAT_00604908
    MOVD MM4,dword ptr [EBX]            ; 00561316
    PUNPCKLBW MM4,MM7                   ; 00561319
    PSLLW MM0,0x4                       ; 0056131c
        ;   Label: LAB_0056131c
    MOVQ MM7,MM5                        ; 00561320
    MOV EAX,EBP                         ; 00561323
    PSRLW MM7,0x3                       ; 00561325
    SAR EAX,0x8                         ; 00561329
    PMULHW MM0,MM7                      ; 0056132c
    MOVQ MM2,qword ptr [EAX*0x8 + 0x605710] ; 0056132f | DAT_00605f08
    PXOR MM7,MM7                        ; 00561337
    MOVQ MM3,MM2                        ; 0056133a
    PACKUSWB MM0,MM7                    ; 0056133d
    PXOR MM3,qword ptr [0x00605f08]     ; 00561340 | DAT_00605f08
    PUNPCKLBW MM0,MM7                   ; 00561347
    CMP dword ptr [0x01c6e2ac],0x0      ; 0056134a | DAT_01c6e2ac
    JNZ 0x00561370                      ; 00561351
        ;   XREF to: 00561370 (CONDITIONAL_JUMP)  ; LAB_00561370
    PMULLW MM4,MM3                      ; 00561353
    PMULLW MM0,MM2                      ; 00561356
    PADDUSW MM0,MM4                     ; 00561359
    PSRLW MM0,0x8                       ; 0056135c
    PACKUSWB MM0,MM7                    ; 00561360
    JMP 0x00561381                      ; 00561363
        ;   XREF to: 00561381 (UNCONDITIONAL_JUMP)  ; LAB_00561381
    PSLLW MM4,0x8                       ; 00561370
        ;   Label: LAB_00561370
    PMULLW MM0,MM2                      ; 00561374
    PADDUSW MM0,MM4                     ; 00561377
    PSRLW MM0,0x8                       ; 0056137a
    PACKUSWB MM0,MM7                    ; 0056137e
    MOV EBX,EDI                         ; 00561381
        ;   Label: LAB_00561381
    ADD EBX,dword ptr [0x00604908]      ; 00561383 | DAT_00604908
    MOVD dword ptr [EBX],MM0            ; 00561389
    TEST dword ptr [0x01c6e2b4],0x80    ; 0056138c | DAT_01c6e2b4
    JZ 0x005613a2                       ; 00561396
        ;   XREF to: 005613a2 (CONDITIONAL_JUMP)  ; LAB_005613a2
    MOV EAX,EDI                         ; 00561398
    ADD EAX,dword ptr [0x0060490c]      ; 0056139a | DAT_0060490c
    MOV dword ptr [EAX],ESI             ; 005613a0
    ADD EDI,0x4                         ; 005613a2
        ;   Label: LAB_005613a2
    CMP EDI,dword ptr [0x006048a4]      ; 005613a5 | DAT_006048a4
    JNC 0x005613e0                      ; 005613ab
        ;   XREF to: 005613e0 (CONDITIONAL_JUMP)  ; LAB_005613e0
    ADD ECX,dword ptr [0x00604d10]      ; 005613ad | DAT_00604d10
    PADDW MM5,MM6                       ; 005613b3
    ADD EDX,dword ptr [0x00604d14]      ; 005613b6 | DAT_00604d14
    MOVQ MM0,MM5                        ; 005613bc
    ADD ESI,dword ptr [0x00604d18]      ; 005613bf | DAT_00604d18
    PCMPGTW MM5,qword ptr [0x00604d1c]  ; 005613c5 | DAT_00604d1c
    ADD EBP,dword ptr [0x00604dd8]      ; 005613cc | DAT_00604dd8
    PAND MM5,MM0                        ; 005613d2
    JMP 0x0056129c                      ; 005613d5
        ;   XREF to: 0056129c (UNCONDITIONAL_JUMP)  ; LAB_0056129c
    POP EBP                             ; 005613e0
        ;   Label: LAB_005613e0
    EMMS                                ; 005613e1
    POP EDI                             ; 005613e3
    POP ESI                             ; 005613e4
    RET                                 ; 005613e5
    TEST dword ptr [0x01c6e2b4],0x40    ; 005613f0 | DAT_01c6e2b4
        ;   Label: LAB_005613f0
    JZ 0x0056140c                       ; 005613fa
        ;   XREF to: 0056140c (CONDITIONAL_JUMP)  ; LAB_0056140c
    LEA EAX,[EDI]                       ; 005613fc
    ADD EAX,dword ptr [0x0060490c]      ; 005613fe | DAT_0060490c
    CMP ESI,dword ptr [EAX]             ; 00561404
    JL 0x00561522                       ; 00561406
        ;   XREF to: 00561522 (CONDITIONAL_JUMP)  ; LAB_00561522
    MOVD MM0,ECX                        ; 0056140c
        ;   Label: LAB_0056140c
    MOVD MM2,EDX                        ; 0056140f
    PSRLQ MM0,qword ptr [0x00604df8]    ; 00561412 | DAT_00604df8
    PSRLQ MM2,qword ptr [0x00604e18]    ; 00561419 | DAT_00604e18
    PAND MM0,qword ptr [0x00604e38]     ; 00561420 | DAT_00604e38
    PAND MM2,qword ptr [0x00604e58]     ; 00561427 | DAT_00604e58
    PADDD MM0,MM2                       ; 0056142e
    MOVD EBX,MM0                        ; 00561431
    ADD EBX,dword ptr [0x01c6ced0]      ; 00561434 | DAT_01c6ced0
    MOVZX EAX,byte ptr [EBX]            ; 0056143a
    MOVD MM0,dword ptr [EAX*0x4 + 0x1c6a974] ; 0056143d | DAT_01c6a974
    PUNPCKLBW MM0,MM7                   ; 00561445
    SUB EBX,dword ptr [0x01c6ced0]      ; 00561448 | DAT_01c6ced0
    ADD EBX,dword ptr [0x01c6ced4]      ; 0056144e | DAT_01c6ced4
    MOVZX EAX,byte ptr [EBX]            ; 00561454
    TEST EAX,0xffffffff                 ; 00561457
    JZ 0x00561522                       ; 0056145c
        ;   XREF to: 00561522 (CONDITIONAL_JUMP)  ; LAB_00561522
    MOV EBX,EDI                         ; 00561462
    ADD EBX,dword ptr [0x00604908]      ; 00561464 | DAT_00604908
    MOVD MM4,dword ptr [EBX]            ; 0056146a
    PUNPCKLBW MM4,MM7                   ; 0056146d
    PSLLW MM0,0x4                       ; 00561470
    MOVQ MM7,MM5                        ; 00561474
    IMUL EAX,EBP                        ; 00561477
    PSRLW MM7,0x3                       ; 0056147a
    SHR EAX,0x10                        ; 0056147e
    PMULHW MM0,MM7                      ; 00561481
    MOVQ MM2,qword ptr [EAX*0x8 + 0x605710] ; 00561484 | DAT_00605710
    PXOR MM7,MM7                        ; 0056148c
    MOVQ MM3,MM2                        ; 0056148f
    PACKUSWB MM0,MM7                    ; 00561492
    PXOR MM3,qword ptr [0x00605f08]     ; 00561495 | DAT_00605f08
    PUNPCKLBW MM0,MM7                   ; 0056149c
    CMP dword ptr [0x01c6e2ac],0x0      ; 0056149f | DAT_01c6e2ac
    JNZ 0x005614f0                      ; 005614a6
        ;   XREF to: 005614f0 (CONDITIONAL_JUMP)  ; LAB_005614f0
    PMULLW MM4,MM3                      ; 005614a8
    PMULLW MM0,MM2                      ; 005614ab
    PADDUSW MM0,MM4                     ; 005614ae
    PSRLW MM0,0x8                       ; 005614b1
    PACKUSWB MM0,MM7                    ; 005614b5
    JMP 0x00561501                      ; 005614b8
        ;   XREF to: 00561501 (UNCONDITIONAL_JUMP)  ; LAB_00561501
    PSLLW MM4,0x8                       ; 005614f0
        ;   Label: LAB_005614f0
    PMULLW MM0,MM2                      ; 005614f4
    PADDUSW MM0,MM4                     ; 005614f7
    PSRLW MM0,0x8                       ; 005614fa
    PACKUSWB MM0,MM7                    ; 005614fe
    MOV EBX,EDI                         ; 00561501
        ;   Label: LAB_00561501
    ADD EBX,dword ptr [0x00604908]      ; 00561503 | DAT_00604908
    MOVD dword ptr [EBX],MM0            ; 00561509
    TEST dword ptr [0x01c6e2b4],0x80    ; 0056150c | DAT_01c6e2b4
    JZ 0x00561522                       ; 00561516
        ;   XREF to: 00561522 (CONDITIONAL_JUMP)  ; LAB_00561522
    MOV EAX,EDI                         ; 00561518
    ADD EAX,dword ptr [0x0060490c]      ; 0056151a | DAT_0060490c
    MOV dword ptr [EAX],ESI             ; 00561520
    ADD EDI,0x4                         ; 00561522
        ;   Label: LAB_00561522
    CMP EDI,dword ptr [0x006048a4]      ; 00561525 | DAT_006048a4
    JNC 0x00561560                      ; 0056152b
        ;   XREF to: 00561560 (CONDITIONAL_JUMP)  ; LAB_00561560
    ADD ECX,dword ptr [0x00604d10]      ; 0056152d | DAT_00604d10
    PADDW MM5,MM6                       ; 00561533
    ADD EDX,dword ptr [0x00604d14]      ; 00561536 | DAT_00604d14
    MOVQ MM0,MM5                        ; 0056153c
    ADD ESI,dword ptr [0x00604d18]      ; 0056153f | DAT_00604d18
    PCMPGTW MM5,qword ptr [0x00604d1c]  ; 00561545 | DAT_00604d1c
    ADD EBP,dword ptr [0x00604dd8]      ; 0056154c | DAT_00604dd8
    PAND MM5,MM0                        ; 00561552
    JMP 0x005613f0                      ; 00561555
        ;   XREF to: 005613f0 (UNCONDITIONAL_JUMP)  ; LAB_005613f0
    POP EBP                             ; 00561560
        ;   Label: LAB_00561560
    EMMS                                ; 00561561
    POP EDI                             ; 00561563
    POP ESI                             ; 00561564
    RET                                 ; 00561565
    MOVQ MM1,qword ptr [0x01c6e2bc]     ; 00561566 | DAT_01c6e2bc
        ;   Label: LAB_00561566
    PUNPCKLBW MM1,MM7                   ; 0056156d
    TEST dword ptr [0x01c6e2b4],0x8     ; 00561570 | DAT_01c6e2b4
    JNZ 0x0056158b                      ; 0056157a
        ;   XREF to: 0056158b (CONDITIONAL_JUMP)  ; LAB_0056158b
    MOV EBP,0x0                         ; 0056157c
    MOV dword ptr [0x00604dd8],0x0      ; 00561581 | DAT_00604dd8
    TEST dword ptr [0x01c6e2b4],0x40    ; 0056158b | DAT_01c6e2b4
        ;   Label: LAB_0056158b
    JZ 0x005615a7                       ; 00561595
        ;   XREF to: 005615a7 (CONDITIONAL_JUMP)  ; LAB_005615a7
    LEA EAX,[EDI]                       ; 00561597
    ADD EAX,dword ptr [0x0060490c]      ; 00561599 | DAT_0060490c
    CMP ESI,dword ptr [EAX]             ; 0056159f
    JL 0x0056165d                       ; 005615a1
        ;   XREF to: 0056165d (CONDITIONAL_JUMP)  ; LAB_0056165d
    TEST dword ptr [0x01c6e2b4],0x1     ; 005615a7 | DAT_01c6e2b4
        ;   Label: LAB_005615a7
    JZ 0x005616a6                       ; 005615b1
        ;   XREF to: 005616a6 (CONDITIONAL_JUMP)  ; LAB_005616a6
    MOVD MM0,ECX                        ; 005615b7
    MOVD MM2,EDX                        ; 005615ba
    PSRLQ MM0,qword ptr [0x00604df8]    ; 005615bd | DAT_00604df8
    PSRLQ MM2,qword ptr [0x00604e18]    ; 005615c4 | DAT_00604e18
    PAND MM0,qword ptr [0x00604e38]     ; 005615cb | DAT_00604e38
    PAND MM2,qword ptr [0x00604e58]     ; 005615d2 | DAT_00604e58
    PADDD MM0,MM2                       ; 005615d9
    MOVD EBX,MM0                        ; 005615dc
    ADD EBX,dword ptr [0x01c6ced0]      ; 005615df | DAT_01c6ced0
    MOVZX EAX,byte ptr [EBX]            ; 005615e5
    MOVD MM0,dword ptr [EAX*0x4 + 0x1c6a974] ; 005615e8 | DAT_01c6a974
    MOVQ MM3,MM5                        ; 005615f0
        ;   Label: LAB_005615f0
    PUNPCKLBW MM0,MM7                   ; 005615f3
    PSRLW MM3,0x3                       ; 005615f6
    PSLLW MM0,0x4                       ; 005615fa
    PMULHW MM0,MM3                      ; 005615fe
    PACKUSWB MM0,MM7                    ; 00561601
    TEST dword ptr [0x01c6e2b4],0x8     ; 00561604 | DAT_01c6e2b4
    JZ 0x0056163d                       ; 0056160e
        ;   XREF to: 0056163d (CONDITIONAL_JUMP)  ; LAB_0056163d
    MOV EAX,EBP                         ; 00561610
    SAR EAX,0x8                         ; 00561612
    MOVQ MM3,qword ptr [EAX*0x8 + 0x605710] ; 00561615 | DAT_00605710
    MOVQ MM4,MM1                        ; 0056161d
    MOVQ MM2,MM3                        ; 00561620
    PMULLW MM4,MM3                      ; 00561623
    PXOR MM2,qword ptr [0x00605f08]     ; 00561626 | DAT_00605f08
    PUNPCKLBW MM0,MM7                   ; 0056162d
    PMULLW MM0,MM2                      ; 00561630
    PADDW MM0,MM4                       ; 00561633
    PSRLW MM0,0x8                       ; 00561636
    PACKUSWB MM0,MM7                    ; 0056163a
    MOV EBX,dword ptr [0x00604908]      ; 0056163d | DAT_00604908
        ;   Label: LAB_0056163d
    ADD EBX,EDI                         ; 00561643
    MOVD dword ptr [EBX],MM0            ; 00561645
    TEST dword ptr [0x01c6e2b4],0x80    ; 00561648 | DAT_01c6e2b4
    JZ 0x0056165d                       ; 00561652
        ;   XREF to: 0056165d (CONDITIONAL_JUMP)  ; LAB_0056165d
    MOV EAX,[0x0060490c]                ; 00561654 | DAT_0060490c
    ADD EAX,EDI                         ; 00561659
    MOV dword ptr [EAX],ESI             ; 0056165b
    ADD EDI,0x4                         ; 0056165d
        ;   Label: LAB_0056165d
    CMP EDI,dword ptr [0x006048a4]      ; 00561660 | DAT_006048a4
    JNC 0x005613e0                      ; 00561666
        ;   XREF to: 005613e0 (CONDITIONAL_JUMP)  ; LAB_005613e0
    ADD ECX,dword ptr [0x00604d10]      ; 0056166c | DAT_00604d10
    PADDW MM5,MM6                       ; 00561672
    ADD EDX,dword ptr [0x00604d14]      ; 00561675 | DAT_00604d14
    MOVQ MM0,MM5                        ; 0056167b
    ADD ESI,dword ptr [0x00604d18]      ; 0056167e | DAT_00604d18
    PCMPGTW MM5,qword ptr [0x00604d1c]  ; 00561684 | DAT_00604d1c
    ADD EBP,dword ptr [0x00604dd8]      ; 0056168b | DAT_00604dd8
    PAND MM5,MM0                        ; 00561691
    JMP 0x0056158b                      ; 00561694
        ;   XREF to: 0056158b (UNCONDITIONAL_JUMP)  ; LAB_0056158b
    TEST dword ptr [0x01c6e2b4],0x200   ; 005616a6 | DAT_01c6e2b4
        ;   Label: LAB_005616a6
    JNZ 0x005616c0                      ; 005616b0
        ;   XREF to: 005616c0 (CONDITIONAL_JUMP)  ; LAB_005616c0
    MOVD MM0,dword ptr [0x01c6b5c0]     ; 005616b2 | DAT_01c6b5c0
    JMP 0x005615f0                      ; 005616b9
        ;   XREF to: 005615f0 (UNCONDITIONAL_JUMP)  ; LAB_005615f0
    MOVD MM0,dword ptr [0x00604f08]     ; 005616c0 | DAT_00604f08
        ;   Label: LAB_005616c0
    JMP 0x005615f0                      ; 005616c7
        ;   XREF to: 005615f0 (UNCONDITIONAL_JUMP)  ; LAB_005615f0
    MOV EAX,dword ptr [EDI + 0x28]      ; 005616d0
        ;   Label: LAB_005616d0
    MOV EBX,dword ptr [ESI + 0x28]      ; 005616d3
    SUB EAX,EBX                         ; 005616d6
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 005616d8 | DAT_01c6b5d4
    MOV dword ptr [0x006048ec],EBX      ; 005616de | DAT_006048ec
    MOV dword ptr [0x00604d18],EDX      ; 005616e4 | DAT_00604d18
    MOV EAX,[0x006048ec]                ; 005616ea | DAT_006048ec
    MOV EBX,dword ptr [0x00604d18]      ; 005616ef | DAT_00604d18
    MOV ESI,dword ptr [0x0060490c]      ; 005616f5 | DAT_0060490c
    MOV ECX,dword ptr [0x006048a4]      ; 005616fb | DAT_006048a4
    MOV dword ptr [ESI],EAX             ; 00561701
        ;   Label: LAB_00561701
    ADD EAX,EBX                         ; 00561703
    ADD ESI,0x4                         ; 00561705
    SUB ECX,0x4                         ; 00561708
    JG 0x00561701                       ; 0056170b
        ;   XREF to: 00561701 (CONDITIONAL_JUMP)  ; LAB_00561701
    POP EBP                             ; 0056170d
    EMMS                                ; 0056170e
    POP EDI                             ; 00561710
    POP ESI                             ; 00561711
    RET                                 ; 00561712

