; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_special_cpp_FUN_00561fdc(void)
;
;
; XREF[2]:
;   engine_mini3d.cpp_fillPolygon_FUN_004f2090 at 004f2282
;   engine_mini3d.cpp_rasterizeTriangle_FUN_004f1830 at 004f1a7a
;
; Referenced Globals:
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
;   undefined4 DAT_00604db8
;   ... and 23 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00561fdc
        ;   Label: engine_special.cpp_FUN_00561fdc
    PUSH EDI                            ; 00561fdd
    PUSH EBP                            ; 00561fde
    MOV EAX,dword ptr [ESI + 0x8]       ; 00561fdf
    MOV ECX,dword ptr [EDI + 0x8]       ; 00561fe2
    CMP EAX,ECX                         ; 00561fe5
    JBE 0x00561fec                      ; 00561fe7
        ;   XREF to: 00561fec (CONDITIONAL_JUMP)  ; LAB_00561fec
    XCHG EAX,ECX                        ; 00561fe9
    XCHG EDI,ESI                        ; 00561fea
    SHR ECX,0x10                        ; 00561fec
        ;   Label: LAB_00561fec
    SHR EAX,0x10                        ; 00561fef
    MOV EBP,dword ptr [EBX*0x4 + 0x1c60dac] ; 00561ff2 | DAT_01c60dac
    MOV EBX,dword ptr [EBX*0x4 + 0x1c5faec] ; 00561ff9 | DAT_01c5faec
    SUB ECX,EAX                         ; 00562000
    JLE 0x005623d0                      ; 00562002
        ;   XREF to: 005623d0 (CONDITIONAL_JUMP)  ; LAB_005623d0
    LEA EBX,[EBX + EAX*0x4]             ; 00562008
    SHL ECX,0x2                         ; 0056200b
    LEA EBP,[EBP + EAX*0x4]             ; 0056200e
    MOV dword ptr [0x006048a4],ECX      ; 00562012 | DAT_006048a4
    MOV dword ptr [0x00604908],EBX      ; 00562018 | DAT_00604908
    MOV dword ptr [0x0060490c],EBP      ; 0056201e | DAT_0060490c
    CMP dword ptr [0x01c6e2b4],0x80     ; 00562024 | DAT_01c6e2b4
    JZ 0x00562560                       ; 0056202e
        ;   XREF to: 00562560 (CONDITIONAL_JUMP)  ; LAB_00562560
    MOV EAX,dword ptr [EDI + 0x18]      ; 00562034
    MOV EBX,dword ptr [ESI + 0x18]      ; 00562037
    SUB EAX,EBX                         ; 0056203a
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 0056203c
    MOV dword ptr [0x006048e0],EBX      ; 00562042 | DAT_006048e0
    MOV dword ptr [0x00604d10],EDX      ; 00562048 | DAT_00604d10
    MOV EAX,dword ptr [EDI + 0x20]      ; 0056204e
    MOV EBX,dword ptr [ESI + 0x20]      ; 00562051
    SUB EAX,EBX                         ; 00562054
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 00562056
    MOV dword ptr [0x006048e4],EBX      ; 0056205c | DAT_006048e4
    MOV dword ptr [0x00604d14],EDX      ; 00562062 | DAT_00604d14
    MOV EAX,dword ptr [EDI + 0x28]      ; 00562068
    MOV EBX,dword ptr [ESI + 0x28]      ; 0056206b
    SUB EAX,EBX                         ; 0056206e
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 00562070
    MOV dword ptr [0x006048ec],EBX      ; 00562076 | DAT_006048ec
    MOV dword ptr [0x00604d18],EDX      ; 0056207c | DAT_00604d18
    TEST dword ptr [0x01c6e2b4],0x8     ; 00562082 | DAT_01c6e2b4
    JZ 0x005620b0                       ; 0056208c
        ;   XREF to: 005620b0 (CONDITIONAL_JUMP)  ; LAB_005620b0
    MOV EAX,dword ptr [EDI + 0x30]      ; 0056208e
    MOV EBX,dword ptr [ESI + 0x30]      ; 00562091
    SUB EAX,EBX                         ; 00562094
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 00562096
    MOV dword ptr [0x00604dd0],EBX      ; 0056209c | DAT_00604dd0
    MOV dword ptr [0x00604dd8],EDX      ; 005620a2 | DAT_00604dd8
    JMP 0x005620c4                      ; 005620a8
        ;   XREF to: 005620c4 (UNCONDITIONAL_JUMP)  ; LAB_005620c4
    MOV dword ptr [0x00604dd0],0x0      ; 005620b0 | DAT_00604dd0
        ;   Label: LAB_005620b0
    MOV dword ptr [0x00604dd8],0x0      ; 005620ba | DAT_00604dd8
    TEST dword ptr [0x01c6e2b4],0x20    ; 005620c4 | DAT_01c6e2b4
        ;   Label: LAB_005620c4
    JZ 0x005620ea                       ; 005620ce
        ;   XREF to: 005620ea (CONDITIONAL_JUMP)  ; LAB_005620ea
    MOV EAX,dword ptr [EDI + 0x48]      ; 005620d0
    MOV EBX,dword ptr [ESI + 0x48]      ; 005620d3
    SUB EAX,EBX                         ; 005620d6
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 005620d8
    MOV dword ptr [0x00604de0],EBX      ; 005620de | DAT_00604de0
    MOV dword ptr [0x00604de8],EDX      ; 005620e4 | DAT_00604de8
    MOV EAX,dword ptr [EDI + 0x10]      ; 005620ea
        ;   Label: LAB_005620ea
    MOV EBX,dword ptr [ESI + 0x10]      ; 005620ed
    SHR EAX,0x1                         ; 005620f0
    SHR EBX,0x1                         ; 005620f2
    SUB EAX,EBX                         ; 005620f4
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 005620f6
    AND EBX,0xffff                      ; 005620fc
    AND EDX,0xffff                      ; 00562102
    MOV dword ptr [0x00604d90],EBX      ; 00562108 | DAT_00604d90
    MOV dword ptr [0x00604db0],EDX      ; 0056210e | DAT_00604db0
    MOV EAX,dword ptr [EDI + 0x38]      ; 00562114
    MOV EBX,dword ptr [ESI + 0x38]      ; 00562117
    SHR EAX,0x1                         ; 0056211a
    SHR EBX,0x1                         ; 0056211c
    SUB EAX,EBX                         ; 0056211e
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 00562120
    AND EBX,0xffff                      ; 00562126
    AND EDX,0xffff                      ; 0056212c
    MOV dword ptr [0x00604d98],EBX      ; 00562132 | DAT_00604d98
    MOV dword ptr [0x00604db8],EDX      ; 00562138 | DAT_00604db8
    MOV EAX,dword ptr [EDI + 0x40]      ; 0056213e
    MOV EBX,dword ptr [ESI + 0x40]      ; 00562141
    SHR EAX,0x1                         ; 00562144
    SHR EBX,0x1                         ; 00562146
    SUB EAX,EBX                         ; 00562148
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 0056214a
    AND EBX,0xffff                      ; 00562150
    AND EDX,0xffff                      ; 00562156
    MOV dword ptr [0x00604da0],EBX      ; 0056215c | DAT_00604da0
    MOV dword ptr [0x00604dc0],EDX      ; 00562162 | DAT_00604dc0
    MOVQ MM5,qword ptr [0x00604d90]     ; 00562168 | DAT_00604d90
    MOVQ MM6,qword ptr [0x00604db0]     ; 0056216f | DAT_00604db0
    PSLLQ MM5,0x10                      ; 00562176
    PSLLQ MM6,0x10                      ; 0056217a
    POR MM5,qword ptr [0x00604d98]      ; 0056217e | DAT_00604d98
    POR MM6,qword ptr [0x00604db8]      ; 00562185 | DAT_00604db8
    PSLLQ MM5,0x10                      ; 0056218c
    PSLLQ MM6,0x10                      ; 00562190
    POR MM5,qword ptr [0x00604da0]      ; 00562194 | DAT_00604da0
    POR MM6,qword ptr [0x00604dc0]      ; 0056219b | DAT_00604dc0
    MOVQ qword ptr [0x00604df0],MM6     ; 005621a2 | DAT_00604df0
    MOV ECX,dword ptr [0x006048e0]      ; 005621a9 | DAT_006048e0
    MOV EDX,dword ptr [0x006048e4]      ; 005621af | DAT_006048e4
    MOV ESI,dword ptr [0x006048ec]      ; 005621b5 | DAT_006048ec
    MOV EDI,0x0                         ; 005621bb
    MOV EBP,dword ptr [0x00604dd0]      ; 005621c0 | DAT_00604dd0
    PXOR MM7,MM7                        ; 005621c6
    TEST dword ptr [0x01c6e2b4],0x20    ; 005621c9 | DAT_01c6e2b4
    JZ 0x005623d6                       ; 005621d3
        ;   XREF to: 005623d6 (CONDITIONAL_JUMP)  ; LAB_005623d6
    MOVD MM6,dword ptr [0x00604de0]     ; 005621d9 | DAT_00604de0
    TEST dword ptr [0x01c6e2b4],0x40    ; 005621e0 | DAT_01c6e2b4
        ;   Label: LAB_005621e0
    JZ 0x005621fc                       ; 005621ea
        ;   XREF to: 005621fc (CONDITIONAL_JUMP)  ; LAB_005621fc
    LEA EAX,[EDI]                       ; 005621ec
    ADD EAX,dword ptr [0x0060490c]      ; 005621ee | DAT_0060490c
    CMP ESI,dword ptr [EAX]             ; 005621f4
    JL 0x0056238b                       ; 005621f6
        ;   XREF to: 0056238b (CONDITIONAL_JUMP)  ; LAB_0056238b
    MOVD MM0,ECX                        ; 005621fc
        ;   Label: LAB_005621fc
    MOVD MM2,EDX                        ; 005621ff
    PSRLQ MM0,qword ptr [0x00604df8]    ; 00562202 | DAT_00604df8
    PSRLQ MM2,qword ptr [0x00604e18]    ; 00562209 | DAT_00604e18
    PAND MM0,qword ptr [0x00604e38]     ; 00562210 | DAT_00604e38
    PAND MM2,qword ptr [0x00604e58]     ; 00562217 | DAT_00604e58
    PADDD MM0,MM2                       ; 0056221e
    MOVD EBX,MM0                        ; 00562221
    TEST dword ptr [0x01c6cee4],0xffffffff ; 00562224 | DAT_01c6cee4
    JNZ 0x00562268                      ; 0056222e
        ;   XREF to: 00562268 (CONDITIONAL_JUMP)  ; LAB_00562268
    ADD EBX,dword ptr [0x01c6ced0]      ; 00562230 | DAT_01c6ced0
    MOVZX EAX,byte ptr [EBX]            ; 00562236
    MOVD MM0,dword ptr [EAX*0x4 + 0x1c6a974] ; 00562239 | DAT_01c6a974
    PUNPCKLBW MM0,MM7                   ; 00562241
    TEST dword ptr [0x01c6ced4],0xffffffff ; 00562244 | DAT_01c6ced4
    JZ 0x00562261                       ; 0056224e
        ;   XREF to: 00562261 (CONDITIONAL_JUMP)  ; LAB_00562261
    SUB EBX,dword ptr [0x01c6ced0]      ; 00562250 | DAT_01c6ced0
    ADD EBX,dword ptr [0x01c6ced4]      ; 00562256 | DAT_01c6ced4
    MOVZX EAX,byte ptr [EBX]            ; 0056225c
    JMP 0x0056227c                      ; 0056225f
        ;   XREF to: 0056227c (UNCONDITIONAL_JUMP)  ; LAB_0056227c
    MOV EAX,0xff                        ; 00562261
        ;   Label: LAB_00562261
    JMP 0x0056227c                      ; 00562266
        ;   XREF to: 0056227c (UNCONDITIONAL_JUMP)  ; LAB_0056227c
    SHL EBX,0x2                         ; 00562268
        ;   Label: LAB_00562268
    ADD EBX,dword ptr [0x01c6ced0]      ; 0056226b | DAT_01c6ced0
    MOV EAX,dword ptr [EBX]             ; 00562271
    MOVD MM0,EAX                        ; 00562273
    PUNPCKLBW MM0,MM7                   ; 00562276
    SHR EAX,0x18                        ; 00562279
    TEST EAX,0xffffffff                 ; 0056227c
        ;   Label: LAB_0056227c
    JZ 0x0056238b                       ; 00562281
        ;   XREF to: 0056238b (CONDITIONAL_JUMP)  ; LAB_0056238b
    MOV EBX,EDI                         ; 00562287
    ADD EBX,dword ptr [0x00604908]      ; 00562289 | DAT_00604908
    MOVD MM4,dword ptr [EBX]            ; 0056228f
    PUNPCKLBW MM4,MM7                   ; 00562292
    PSLLW MM0,0x4                       ; 00562295
    MOVQ MM7,MM5                        ; 00562299
    PSRLW MM7,0x3                       ; 0056229c
    PMULHW MM0,MM7                      ; 005622a0
    PXOR MM7,MM7                        ; 005622a3
    PACKUSWB MM0,MM7                    ; 005622a6
    PUNPCKLBW MM0,MM7                   ; 005622a9
    MOVD EBX,MM6                        ; 005622ac
    IMUL EAX,EBX                        ; 005622af
    SHR EAX,0x10                        ; 005622b2
    TEST dword ptr [0x01c6e2b4],0x8     ; 005622b5 | DAT_01c6e2b4
    JNZ 0x005622c3                      ; 005622bf
        ;   XREF to: 005622c3 (CONDITIONAL_JUMP)  ; LAB_005622c3
    JMP 0x005622f1                      ; 005622c1
        ;   XREF to: 005622f1 (UNCONDITIONAL_JUMP)  ; LAB_005622f1
    MOV EBX,EBP                         ; 005622c3
        ;   Label: LAB_005622c3
    SAR EBX,0x8                         ; 005622c5
    MOVQ MM1,qword ptr [EBX*0x8 + 0x605710] ; 005622c8 | DAT_00605710
    MOVQ MM2,MM1                        ; 005622d0
    PXOR MM2,qword ptr [0x00605f08]     ; 005622d3 | DAT_00605f08
    MOVD MM3,dword ptr [0x01c6e2bc]     ; 005622da | DAT_01c6e2bc
    PUNPCKLBW MM3,MM7                   ; 005622e1
    PMULLW MM0,MM2                      ; 005622e4
    PMULLW MM3,MM1                      ; 005622e7
    PADDW MM0,MM3                       ; 005622ea
    PSRLW MM0,0x8                       ; 005622ed
    MOVQ MM2,qword ptr [EAX*0x8 + 0x605710] ; 005622f1 | DAT_00605710
        ;   Label: LAB_005622f1
    MOVQ MM3,MM2                        ; 005622f9
    PXOR MM3,qword ptr [0x00605f08]     ; 005622fc | DAT_00605f08
    CMP dword ptr [0x01c6e2ac],0x1      ; 00562303 | DAT_01c6e2ac
    JZ 0x00562330                       ; 0056230a
        ;   XREF to: 00562330 (CONDITIONAL_JUMP)  ; LAB_00562330
    CMP dword ptr [0x01c6e2ac],0x2      ; 0056230c | DAT_01c6e2ac
    JZ 0x00562340                       ; 00562313
        ;   XREF to: 00562340 (CONDITIONAL_JUMP)  ; LAB_00562340
    CMP dword ptr [0x01c6e2ac],0x3      ; 00562315 | DAT_01c6e2ac
    JZ 0x00562350                       ; 0056231c
        ;   XREF to: 00562350 (CONDITIONAL_JUMP)  ; LAB_00562350
    PMULLW MM0,MM2                      ; 0056231e
    PMULLW MM4,MM3                      ; 00562321
    JMP 0x00562360                      ; 00562324
        ;   XREF to: 00562360 (UNCONDITIONAL_JUMP)  ; LAB_00562360
    PMULLW MM0,MM2                      ; 00562330
        ;   Label: LAB_00562330
    PSLLW MM4,0x8                       ; 00562333
    JMP 0x00562360                      ; 00562337
        ;   XREF to: 00562360 (UNCONDITIONAL_JUMP)  ; LAB_00562360
    PMULLW MM4,MM0                      ; 00562340
        ;   Label: LAB_00562340
    PMULLW MM0,MM2                      ; 00562343
    JMP 0x00562360                      ; 00562346
        ;   XREF to: 00562360 (UNCONDITIONAL_JUMP)  ; LAB_00562360
    MOVQ MM1,MM0                        ; 00562350
        ;   Label: LAB_00562350
    PXOR MM1,qword ptr [0x00605f08]     ; 00562353 | DAT_00605f08
    PMULLW MM4,MM1                      ; 0056235a
    PMULLW MM0,MM2                      ; 0056235d
    PADDUSW MM0,MM4                     ; 00562360
        ;   Label: LAB_00562360
    PSRLW MM0,0x8                       ; 00562363
    PACKUSWB MM0,MM7                    ; 00562367
    MOV EBX,EDI                         ; 0056236a
    ADD EBX,dword ptr [0x00604908]      ; 0056236c | DAT_00604908
    MOVD dword ptr [EBX],MM0            ; 00562372
    TEST dword ptr [0x01c6e2b4],0x80    ; 00562375 | DAT_01c6e2b4
    JZ 0x0056238b                       ; 0056237f
        ;   XREF to: 0056238b (CONDITIONAL_JUMP)  ; LAB_0056238b
    MOV EAX,EDI                         ; 00562381
    ADD EAX,dword ptr [0x0060490c]      ; 00562383 | DAT_0060490c
    MOV dword ptr [EAX],ESI             ; 00562389
    ADD EDI,0x4                         ; 0056238b
        ;   Label: LAB_0056238b
    CMP EDI,dword ptr [0x006048a4]      ; 0056238e | DAT_006048a4
    JNC 0x005623d0                      ; 00562394
        ;   XREF to: 005623d0 (CONDITIONAL_JUMP)  ; LAB_005623d0
    ADD ECX,dword ptr [0x00604d10]      ; 00562396 | DAT_00604d10
    PADDW MM5,qword ptr [0x00604df0]    ; 0056239c | DAT_00604df0
    ADD EDX,dword ptr [0x00604d14]      ; 005623a3 | DAT_00604d14
    MOVQ MM0,MM5                        ; 005623a9
    ADD ESI,dword ptr [0x00604d18]      ; 005623ac | DAT_00604d18
    PCMPGTW MM5,qword ptr [0x00604d1c]  ; 005623b2 | DAT_00604d1c
    ADD EBP,dword ptr [0x00604dd8]      ; 005623b9 | DAT_00604dd8
    PAND MM5,MM0                        ; 005623bf
    PADDD MM6,qword ptr [0x00604de8]    ; 005623c2 | DAT_00604de8
    JMP 0x005621e0                      ; 005623c9
        ;   XREF to: 005621e0 (UNCONDITIONAL_JUMP)  ; LAB_005621e0
    POP EBP                             ; 005623d0
        ;   Label: LAB_005623d0
    EMMS                                ; 005623d1
    POP EDI                             ; 005623d3
    POP ESI                             ; 005623d4
    RET                                 ; 005623d5
    MOVD MM1,dword ptr [0x01c6e2bc]     ; 005623d6 | DAT_01c6e2bc
        ;   Label: LAB_005623d6
    PUNPCKLBW MM1,MM7                   ; 005623dd
    TEST dword ptr [0x01c6e2b4],0x8     ; 005623e0 | DAT_01c6e2b4
    JNZ 0x005623fb                      ; 005623ea
        ;   XREF to: 005623fb (CONDITIONAL_JUMP)  ; LAB_005623fb
    MOV EBP,0x0                         ; 005623ec
    MOV dword ptr [0x00604dd8],0x0      ; 005623f1 | DAT_00604dd8
    TEST dword ptr [0x01c6e2b4],0x40    ; 005623fb | DAT_01c6e2b4
        ;   Label: LAB_005623fb
    JZ 0x00562417                       ; 00562405
        ;   XREF to: 00562417 (CONDITIONAL_JUMP)  ; LAB_00562417
    LEA EAX,[EDI]                       ; 00562407
    ADD EAX,dword ptr [0x0060490c]      ; 00562409 | DAT_0060490c
    CMP ESI,dword ptr [EAX]             ; 0056240f
    JL 0x005624e7                       ; 00562411
        ;   XREF to: 005624e7 (CONDITIONAL_JUMP)  ; LAB_005624e7
    TEST dword ptr [0x01c6e2b4],0x1     ; 00562417 | DAT_01c6e2b4
        ;   Label: LAB_00562417
    JZ 0x00562536                       ; 00562421
        ;   XREF to: 00562536 (CONDITIONAL_JUMP)  ; LAB_00562536
    MOVD MM0,ECX                        ; 00562427
    MOVD MM2,EDX                        ; 0056242a
    PSRLQ MM0,qword ptr [0x00604df8]    ; 0056242d | DAT_00604df8
    PSRLQ MM2,qword ptr [0x00604e18]    ; 00562434 | DAT_00604e18
    PAND MM0,qword ptr [0x00604e38]     ; 0056243b | DAT_00604e38
    PAND MM2,qword ptr [0x00604e58]     ; 00562442 | DAT_00604e58
    PADDD MM0,MM2                       ; 00562449
    MOVD EBX,MM0                        ; 0056244c
    TEST dword ptr [0x01c6cee4],0xffffffff ; 0056244f | DAT_01c6cee4
    JNZ 0x0056246e                      ; 00562459
        ;   XREF to: 0056246e (CONDITIONAL_JUMP)  ; LAB_0056246e
    ADD EBX,dword ptr [0x01c6ced0]      ; 0056245b | DAT_01c6ced0
    MOVZX EAX,byte ptr [EBX]            ; 00562461
    MOVD MM0,dword ptr [EAX*0x4 + 0x1c6a974] ; 00562464 | DAT_01c6a974
    JMP 0x0056247a                      ; 0056246c
        ;   XREF to: 0056247a (UNCONDITIONAL_JUMP)  ; LAB_0056247a
    SHL EBX,0x2                         ; 0056246e
        ;   Label: LAB_0056246e
    ADD EBX,dword ptr [0x01c6ced0]      ; 00562471 | DAT_01c6ced0
    MOVD MM0,dword ptr [EBX]            ; 00562477
    MOVQ MM3,MM5                        ; 0056247a
        ;   Label: LAB_0056247a
    PUNPCKLBW MM0,MM7                   ; 0056247d
    PSRLW MM3,0x3                       ; 00562480
    PSLLW MM0,0x4                       ; 00562484
    PMULHW MM0,MM3                      ; 00562488
    PACKUSWB MM0,MM7                    ; 0056248b
    TEST dword ptr [0x01c6e2b4],0x8     ; 0056248e | DAT_01c6e2b4
    JZ 0x005624c7                       ; 00562498
        ;   XREF to: 005624c7 (CONDITIONAL_JUMP)  ; LAB_005624c7
    MOV EAX,EBP                         ; 0056249a
    SAR EAX,0x8                         ; 0056249c
    MOVQ MM3,qword ptr [EAX*0x8 + 0x605710] ; 0056249f | DAT_00605710
    MOVQ MM4,MM1                        ; 005624a7
    MOVQ MM2,MM3                        ; 005624aa
    PMULLW MM4,MM3                      ; 005624ad
    PXOR MM2,qword ptr [0x00605f08]     ; 005624b0 | DAT_00605f08
    PUNPCKLBW MM0,MM7                   ; 005624b7
    PMULLW MM0,MM2                      ; 005624ba
    PADDW MM0,MM4                       ; 005624bd
    PSRLW MM0,0x8                       ; 005624c0
    PACKUSWB MM0,MM7                    ; 005624c4
    MOV EBX,dword ptr [0x00604908]      ; 005624c7 | DAT_00604908
        ;   Label: LAB_005624c7
    ADD EBX,EDI                         ; 005624cd
    MOVD dword ptr [EBX],MM0            ; 005624cf
    TEST dword ptr [0x01c6e2b4],0x80    ; 005624d2 | DAT_01c6e2b4
    JZ 0x005624e7                       ; 005624dc
        ;   XREF to: 005624e7 (CONDITIONAL_JUMP)  ; LAB_005624e7
    MOV EAX,[0x0060490c]                ; 005624de | DAT_0060490c
    ADD EAX,EDI                         ; 005624e3
    MOV dword ptr [EAX],ESI             ; 005624e5
    ADD EDI,0x4                         ; 005624e7
        ;   Label: LAB_005624e7
    CMP EDI,dword ptr [0x006048a4]      ; 005624ea | DAT_006048a4
    JNC 0x005623d0                      ; 005624f0
        ;   XREF to: 005623d0 (CONDITIONAL_JUMP)  ; LAB_005623d0
    ADD ECX,dword ptr [0x00604d10]      ; 005624f6 | DAT_00604d10
    PADDW MM5,qword ptr [0x00604df0]    ; 005624fc | DAT_00604df0
    ADD EDX,dword ptr [0x00604d14]      ; 00562503 | DAT_00604d14
    MOVQ MM0,MM5                        ; 00562509
    ADD ESI,dword ptr [0x00604d18]      ; 0056250c | DAT_00604d18
    PCMPGTW MM5,qword ptr [0x00604d1c]  ; 00562512 | DAT_00604d1c
    ADD EBP,dword ptr [0x00604dd8]      ; 00562519 | DAT_00604dd8
    PAND MM5,MM0                        ; 0056251f
    JMP 0x005623fb                      ; 00562522
        ;   XREF to: 005623fb (UNCONDITIONAL_JUMP)  ; LAB_005623fb
    TEST dword ptr [0x01c6e2b4],0x200   ; 00562536 | DAT_01c6e2b4
        ;   Label: LAB_00562536
    JNZ 0x00562550                      ; 00562540
        ;   XREF to: 00562550 (CONDITIONAL_JUMP)  ; LAB_00562550
    MOVD MM0,dword ptr [0x01c6b5c0]     ; 00562542 | DAT_01c6b5c0
    JMP 0x0056247a                      ; 00562549
        ;   XREF to: 0056247a (UNCONDITIONAL_JUMP)  ; LAB_0056247a
    MOVD MM0,dword ptr [0x00604f08]     ; 00562550 | DAT_00604f08
        ;   Label: LAB_00562550
    JMP 0x0056247a                      ; 00562557
        ;   XREF to: 0056247a (UNCONDITIONAL_JUMP)  ; LAB_0056247a
    MOV EAX,dword ptr [EDI + 0x28]      ; 00562560
        ;   Label: LAB_00562560
    MOV EBX,dword ptr [ESI + 0x28]      ; 00562563
    SUB EAX,EBX                         ; 00562566
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 00562568
    MOV dword ptr [0x006048ec],EBX      ; 0056256e | DAT_006048ec
    MOV dword ptr [0x00604d18],EDX      ; 00562574 | DAT_00604d18
    MOV EAX,[0x006048ec]                ; 0056257a | DAT_006048ec
    MOV EBX,dword ptr [0x00604d18]      ; 0056257f | DAT_00604d18
    MOV ESI,dword ptr [0x0060490c]      ; 00562585 | DAT_0060490c
    MOV ECX,dword ptr [0x006048a4]      ; 0056258b | DAT_006048a4
    MOV dword ptr [ESI],EAX             ; 00562591
        ;   Label: LAB_00562591
    ADD EAX,EBX                         ; 00562593
    ADD ESI,0x4                         ; 00562595
    SUB ECX,0x4                         ; 00562598
    JG 0x00562591                       ; 0056259b
        ;   XREF to: 00562591 (CONDITIONAL_JUMP)  ; LAB_00562591
    POP EBP                             ; 0056259d
    EMMS                                ; 0056259e
    POP EDI                             ; 005625a0
    POP ESI                             ; 005625a1
    RET                                 ; 005625a2

