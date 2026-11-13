; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_special_cpp_FUN_0057f473(void)
;
;
; XREF[2]:
;   engine_mini3d.cpp_fillPolygon_FUN_005168c0 at 00516c13
;   engine_mini3d.cpp_rasterizeTriangle_FUN_00516060 at 0051686b
;
; Referenced Globals:
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
;   undefined4 DAT_00623e78
;   ... and 33 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0057f473
        ;   Label: engine_special.cpp_FUN_0057f473
    PUSH EDI                            ; 0057f474
    PUSH EBP                            ; 0057f475
    MOV EAX,dword ptr [ESI + 0x8]       ; 0057f476
    MOV ECX,dword ptr [EDI + 0x8]       ; 0057f479
    CMP EAX,ECX                         ; 0057f47c
    JBE 0x0057f483                      ; 0057f47e
        ;   XREF to: 0057f483 (CONDITIONAL_JUMP)  ; LAB_0057f483
    XCHG EAX,ECX                        ; 0057f480
    XCHG EDI,ESI                        ; 0057f481
    SHR ECX,0x10                        ; 0057f483
        ;   Label: LAB_0057f483
    SHR EAX,0x10                        ; 0057f486
    MOV EBP,dword ptr [EBX*0x4 + 0x1c4480c] ; 0057f489 | DAT_01c4480c
    MOV EBX,dword ptr [EBX*0x4 + 0x1c4354c] ; 0057f490 | DAT_01c4354c
    SUB ECX,EAX                         ; 0057f497
    JLE 0x0057f8f0                      ; 0057f499
        ;   XREF to: 0057f8f0 (CONDITIONAL_JUMP)  ; LAB_0057f8f0
    LEA EBX,[EBX + EAX*0x2]             ; 0057f49f
    SHL ECX,0x2                         ; 0057f4a2
    LEA EBP,[EBP + EAX*0x4]             ; 0057f4a5
    MOV dword ptr [0x00623964],ECX      ; 0057f4a9 | DAT_00623964
    MOV dword ptr [0x006239c8],EBX      ; 0057f4af | DAT_006239c8
    MOV dword ptr [0x006239cc],EBP      ; 0057f4b5 | DAT_006239cc
    CMP dword ptr [0x01c51d14],0x80     ; 0057f4bb | DAT_01c51d14
    JZ 0x0057fac0                       ; 0057f4c5
        ;   XREF to: 0057fac0 (CONDITIONAL_JUMP)  ; LAB_0057fac0
    MOV EAX,dword ptr [EDI + 0x18]      ; 0057f4cb
    MOV EBX,dword ptr [ESI + 0x18]      ; 0057f4ce
    SUB EAX,EBX                         ; 0057f4d1
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057f4d3 | DAT_01c4f034
    MOV dword ptr [0x006239a0],EBX      ; 0057f4d9 | DAT_006239a0
    MOV dword ptr [0x00623dd0],EDX      ; 0057f4df | DAT_00623dd0
    MOV EAX,dword ptr [EDI + 0x20]      ; 0057f4e5
    MOV EBX,dword ptr [ESI + 0x20]      ; 0057f4e8
    SUB EAX,EBX                         ; 0057f4eb
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057f4ed | DAT_01c4f034
    MOV dword ptr [0x006239a4],EBX      ; 0057f4f3 | DAT_006239a4
    MOV dword ptr [0x00623dd4],EDX      ; 0057f4f9 | DAT_00623dd4
    MOV EAX,dword ptr [EDI + 0x28]      ; 0057f4ff
    MOV EBX,dword ptr [ESI + 0x28]      ; 0057f502
    SUB EAX,EBX                         ; 0057f505
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057f507 | DAT_01c4f034
    MOV dword ptr [0x006239ac],EBX      ; 0057f50d | DAT_006239ac
    MOV dword ptr [0x00623dd8],EDX      ; 0057f513 | DAT_00623dd8
    TEST dword ptr [0x01c51d14],0x8     ; 0057f519 | DAT_01c51d14
    JZ 0x0057f550                       ; 0057f523
        ;   XREF to: 0057f550 (CONDITIONAL_JUMP)  ; LAB_0057f550
    MOV EAX,dword ptr [EDI + 0x30]      ; 0057f525
    MOV EBX,dword ptr [ESI + 0x30]      ; 0057f528
    SUB EAX,EBX                         ; 0057f52b
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057f52d | DAT_01c4f034
    MOV dword ptr [0x00623e90],EBX      ; 0057f533 | DAT_00623e90
    MOV dword ptr [0x00623e98],EDX      ; 0057f539 | DAT_00623e98
    JMP 0x0057f564                      ; 0057f53f
        ;   XREF to: 0057f564 (UNCONDITIONAL_JUMP)  ; LAB_0057f564
    MOV dword ptr [0x00623e90],0x0      ; 0057f550 | DAT_00623e90
        ;   Label: LAB_0057f550
    MOV dword ptr [0x00623e98],0x0      ; 0057f55a | DAT_00623e98
    TEST dword ptr [0x01c51d14],0x20    ; 0057f564 | DAT_01c51d14
        ;   Label: LAB_0057f564
    JZ 0x0057f58a                       ; 0057f56e
        ;   XREF to: 0057f58a (CONDITIONAL_JUMP)  ; LAB_0057f58a
    MOV EAX,dword ptr [EDI + 0x48]      ; 0057f570
    MOV EBX,dword ptr [ESI + 0x48]      ; 0057f573
    SUB EAX,EBX                         ; 0057f576
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057f578 | DAT_01c4f034
    MOV dword ptr [0x00623ea0],EBX      ; 0057f57e | DAT_00623ea0
    MOV dword ptr [0x00623ea8],EDX      ; 0057f584 | DAT_00623ea8
    MOV EAX,dword ptr [EDI + 0x10]      ; 0057f58a
        ;   Label: LAB_0057f58a
    MOV EBX,dword ptr [ESI + 0x10]      ; 0057f58d
    SHR EAX,0x1                         ; 0057f590
    SHR EBX,0x1                         ; 0057f592
    SUB EAX,EBX                         ; 0057f594
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057f596 | DAT_01c4f034
    AND EBX,0xffff                      ; 0057f59c
    AND EDX,0xffff                      ; 0057f5a2
    MOV dword ptr [0x00623e50],EBX      ; 0057f5a8 | DAT_00623e50
    MOV dword ptr [0x00623e70],EDX      ; 0057f5ae | DAT_00623e70
    MOV EAX,dword ptr [EDI + 0x38]      ; 0057f5b4
    MOV EBX,dword ptr [ESI + 0x38]      ; 0057f5b7
    SHR EAX,0x1                         ; 0057f5ba
    SHR EBX,0x1                         ; 0057f5bc
    SUB EAX,EBX                         ; 0057f5be
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057f5c0 | DAT_01c4f034
    AND EBX,0xffff                      ; 0057f5c6
    AND EDX,0xffff                      ; 0057f5cc
    MOV dword ptr [0x00623e58],EBX      ; 0057f5d2 | DAT_00623e58
    MOV dword ptr [0x00623e78],EDX      ; 0057f5d8 | DAT_00623e78
    MOV EAX,dword ptr [EDI + 0x40]      ; 0057f5de
    MOV EBX,dword ptr [ESI + 0x40]      ; 0057f5e1
    SHR EAX,0x1                         ; 0057f5e4
    SHR EBX,0x1                         ; 0057f5e6
    SUB EAX,EBX                         ; 0057f5e8
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057f5ea | DAT_01c4f034
    AND EBX,0xffff                      ; 0057f5f0
    AND EDX,0xffff                      ; 0057f5f6
    MOV dword ptr [0x00623e60],EBX      ; 0057f5fc | DAT_00623e60
    MOV dword ptr [0x00623e80],EDX      ; 0057f602 | DAT_00623e80
    MOVQ MM5,qword ptr [0x00623e50]     ; 0057f608 | DAT_00623e50
    MOVQ MM6,qword ptr [0x00623e70]     ; 0057f60f | DAT_00623e70
    PSLLQ MM5,0x10                      ; 0057f616
    PSLLQ MM6,0x10                      ; 0057f61a
    POR MM5,qword ptr [0x00623e58]      ; 0057f61e | DAT_00623e58
    POR MM6,qword ptr [0x00623e78]      ; 0057f625 | DAT_00623e78
    PSLLQ MM5,0x10                      ; 0057f62c
    PSLLQ MM6,0x10                      ; 0057f630
    POR MM5,qword ptr [0x00623e60]      ; 0057f634 | DAT_00623e60
    POR MM6,qword ptr [0x00623e80]      ; 0057f63b | DAT_00623e80
    MOVQ qword ptr [0x00623eb0],MM6     ; 0057f642 | DAT_00623eb0
    MOV ECX,dword ptr [0x006239a0]      ; 0057f649 | DAT_006239a0
    MOV EDX,dword ptr [0x006239a4]      ; 0057f64f | DAT_006239a4
    MOV ESI,dword ptr [0x006239ac]      ; 0057f655 | DAT_006239ac
    MOV EDI,0x0                         ; 0057f65b
    MOV EBP,dword ptr [0x00623e90]      ; 0057f660 | DAT_00623e90
    PXOR MM7,MM7                        ; 0057f666
    TEST dword ptr [0x01c51d14],0x20    ; 0057f669 | DAT_01c51d14
    JZ 0x0057f8f6                       ; 0057f673
        ;   XREF to: 0057f8f6 (CONDITIONAL_JUMP)  ; LAB_0057f8f6
    MOVD MM6,dword ptr [0x00623ea0]     ; 0057f679 | DAT_00623ea0
    TEST dword ptr [0x01c51d14],0x40    ; 0057f680 | DAT_01c51d14
        ;   Label: LAB_0057f680
    JZ 0x0057f69c                       ; 0057f68a
        ;   XREF to: 0057f69c (CONDITIONAL_JUMP)  ; LAB_0057f69c
    LEA EAX,[EDI]                       ; 0057f68c
    ADD EAX,dword ptr [0x006239cc]      ; 0057f68e | DAT_006239cc
    CMP ESI,dword ptr [EAX]             ; 0057f694
    JL 0x0057f8a6                       ; 0057f696
        ;   XREF to: 0057f8a6 (CONDITIONAL_JUMP)  ; LAB_0057f8a6
    MOVD MM0,ECX                        ; 0057f69c
        ;   Label: LAB_0057f69c
    MOVD MM2,EDX                        ; 0057f69f
    PSRLQ MM0,qword ptr [0x00623eb8]    ; 0057f6a2 | DAT_00623eb8
    PSRLQ MM2,qword ptr [0x00623ed8]    ; 0057f6a9 | DAT_00623ed8
    PAND MM0,qword ptr [0x00623ef8]     ; 0057f6b0 | DAT_00623ef8
    PAND MM2,qword ptr [0x00623f18]     ; 0057f6b7 | DAT_00623f18
    PADDD MM0,MM2                       ; 0057f6be
    MOVD EBX,MM0                        ; 0057f6c1
    TEST dword ptr [0x01c50944],0xffffffff ; 0057f6c4 | DAT_01c50944
    JNZ 0x0057f708                      ; 0057f6ce
        ;   XREF to: 0057f708 (CONDITIONAL_JUMP)  ; LAB_0057f708
    ADD EBX,dword ptr [0x01c50930]      ; 0057f6d0 | DAT_01c50930
    MOVZX EAX,byte ptr [EBX]            ; 0057f6d6
    MOVD MM0,dword ptr [EAX*0x4 + 0x1c4e3d4] ; 0057f6d9 | DAT_01c4e3d4
    PUNPCKLBW MM0,MM7                   ; 0057f6e1
    TEST dword ptr [0x01c50934],0xffffffff ; 0057f6e4 | DAT_01c50934
    JZ 0x0057f701                       ; 0057f6ee
        ;   XREF to: 0057f701 (CONDITIONAL_JUMP)  ; LAB_0057f701
    SUB EBX,dword ptr [0x01c50930]      ; 0057f6f0 | DAT_01c50930
    ADD EBX,dword ptr [0x01c50934]      ; 0057f6f6 | DAT_01c50934
    MOVZX EAX,byte ptr [EBX]            ; 0057f6fc
    JMP 0x0057f71c                      ; 0057f6ff
        ;   XREF to: 0057f71c (UNCONDITIONAL_JUMP)  ; LAB_0057f71c
    MOV EAX,0xff                        ; 0057f701
        ;   Label: LAB_0057f701
    JMP 0x0057f71c                      ; 0057f706
        ;   XREF to: 0057f71c (UNCONDITIONAL_JUMP)  ; LAB_0057f71c
    SHL EBX,0x2                         ; 0057f708
        ;   Label: LAB_0057f708
    ADD EBX,dword ptr [0x01c50930]      ; 0057f70b | DAT_01c50930
    MOV EAX,dword ptr [EBX]             ; 0057f711
    MOVD MM0,EAX                        ; 0057f713
    PUNPCKLBW MM0,MM7                   ; 0057f716
    SHR EAX,0x18                        ; 0057f719
    TEST EAX,0xffffffff                 ; 0057f71c
        ;   Label: LAB_0057f71c
    JZ 0x0057f8a6                       ; 0057f721
        ;   XREF to: 0057f8a6 (CONDITIONAL_JUMP)  ; LAB_0057f8a6
    MOV EBX,EDI                         ; 0057f727
    SHR EBX,0x1                         ; 0057f729
    ADD EBX,dword ptr [0x006239c8]      ; 0057f72b | DAT_006239c8
    MOVZX EBX,word ptr [EBX]            ; 0057f731
    MOVD MM4,EBX                        ; 0057f734
    PAND MM4,qword ptr [0x00623f30]     ; 0057f737 | DAT_00623f30
    PSLLQ MM4,qword ptr [0x00623fc0]    ; 0057f73e | DAT_00623fc0
    MOVD MM2,EBX                        ; 0057f745
    PAND MM2,qword ptr [0x00623f28]     ; 0057f748 | DAT_00623f28
    PSLLQ MM2,qword ptr [0x00623fa0]    ; 0057f74f | DAT_00623fa0
    POR MM4,MM2                         ; 0057f756
    MOVD MM2,EBX                        ; 0057f759
    PAND MM2,qword ptr [0x00623f20]     ; 0057f75c | DAT_00623f20
    PSLLQ MM2,qword ptr [0x00623f80]    ; 0057f763 | DAT_00623f80
    POR MM4,MM2                         ; 0057f76a
    PUNPCKLBW MM4,MM7                   ; 0057f76d
    PSLLW MM0,0x4                       ; 0057f770
    MOVQ MM7,MM5                        ; 0057f774
    PSRLW MM7,0x3                       ; 0057f777
    PMULHW MM0,MM7                      ; 0057f77b
    PXOR MM7,MM7                        ; 0057f77e
    PACKUSWB MM0,MM7                    ; 0057f781
    PUNPCKLBW MM0,MM7                   ; 0057f784
    MOVD EBX,MM6                        ; 0057f787
    IMUL EAX,EBX                        ; 0057f78a
    SHR EAX,0x10                        ; 0057f78d
    TEST dword ptr [0x01c51d14],0x8     ; 0057f790 | DAT_01c51d14
    JNZ 0x0057f79e                      ; 0057f79a
        ;   XREF to: 0057f79e (CONDITIONAL_JUMP)  ; LAB_0057f79e
    JMP 0x0057f7cc                      ; 0057f79c
        ;   XREF to: 0057f7cc (UNCONDITIONAL_JUMP)  ; LAB_0057f7cc
    MOV EBX,EBP                         ; 0057f79e
        ;   Label: LAB_0057f79e
    SAR EBX,0x8                         ; 0057f7a0
    MOVQ MM1,qword ptr [EBX*0x8 + 0x6247d0] ; 0057f7a3 | DAT_006247d0
    MOVQ MM2,MM1                        ; 0057f7ab
    PXOR MM2,qword ptr [0x00624fc8]     ; 0057f7ae | DAT_00624fc8
    MOVD MM3,dword ptr [0x01c51d1c]     ; 0057f7b5 | DAT_01c51d1c
    PUNPCKLBW MM3,MM7                   ; 0057f7bc
    PMULLW MM0,MM2                      ; 0057f7bf
    PMULLW MM3,MM1                      ; 0057f7c2
    PADDW MM0,MM3                       ; 0057f7c5
    PSRLW MM0,0x8                       ; 0057f7c8
    MOVQ MM2,qword ptr [EAX*0x8 + 0x6247d0] ; 0057f7cc | DAT_006247d0
        ;   Label: LAB_0057f7cc
    MOVQ MM3,MM2                        ; 0057f7d4
    PXOR MM3,qword ptr [0x00624fc8]     ; 0057f7d7 | DAT_00624fc8
    CMP dword ptr [0x01c51d0c],0x1      ; 0057f7de | DAT_01c51d0c
    JZ 0x0057f810                       ; 0057f7e5
        ;   XREF to: 0057f810 (CONDITIONAL_JUMP)  ; LAB_0057f810
    CMP dword ptr [0x01c51d0c],0x2      ; 0057f7e7 | DAT_01c51d0c
    JZ 0x0057f820                       ; 0057f7ee
        ;   XREF to: 0057f820 (CONDITIONAL_JUMP)  ; LAB_0057f820
    CMP dword ptr [0x01c51d0c],0x3      ; 0057f7f0 | DAT_01c51d0c
    JZ 0x0057f830                       ; 0057f7f7
        ;   XREF to: 0057f830 (CONDITIONAL_JUMP)  ; LAB_0057f830
    PMULLW MM0,MM2                      ; 0057f7f9
    PMULLW MM4,MM3                      ; 0057f7fc
    JMP 0x0057f840                      ; 0057f7ff
        ;   XREF to: 0057f840 (UNCONDITIONAL_JUMP)  ; LAB_0057f840
    PMULLW MM0,MM2                      ; 0057f810
        ;   Label: LAB_0057f810
    PSLLW MM4,0x8                       ; 0057f813
    JMP 0x0057f840                      ; 0057f817
        ;   XREF to: 0057f840 (UNCONDITIONAL_JUMP)  ; LAB_0057f840
    PMULLW MM4,MM0                      ; 0057f820
        ;   Label: LAB_0057f820
    PMULLW MM0,MM2                      ; 0057f823
    JMP 0x0057f840                      ; 0057f826
        ;   XREF to: 0057f840 (UNCONDITIONAL_JUMP)  ; LAB_0057f840
    MOVQ MM1,MM0                        ; 0057f830
        ;   Label: LAB_0057f830
    PXOR MM1,qword ptr [0x00624fc8]     ; 0057f833 | DAT_00624fc8
    PMULLW MM4,MM1                      ; 0057f83a
    PMULLW MM0,MM2                      ; 0057f83d
    PADDUSW MM0,MM4                     ; 0057f840
        ;   Label: LAB_0057f840
    PSRLW MM0,0x8                       ; 0057f843
    PACKUSWB MM0,MM7                    ; 0057f847
    MOV EBX,EDI                         ; 0057f84a
    SHR EBX,0x1                         ; 0057f84c
    ADD EBX,dword ptr [0x006239c8]      ; 0057f84e | DAT_006239c8
    MOVQ MM2,MM0                        ; 0057f854
    MOVQ MM4,MM0                        ; 0057f857
    PAND MM0,qword ptr [0x00623f78]     ; 0057f85a | DAT_00623f78
    PAND MM2,qword ptr [0x00623f58]     ; 0057f861 | DAT_00623f58
    PAND MM4,qword ptr [0x00623f38]     ; 0057f868 | DAT_00623f38
    PSRLQ MM0,qword ptr [0x00623fc0]    ; 0057f86f | DAT_00623fc0
    PSRLQ MM2,qword ptr [0x00623fa0]    ; 0057f876 | DAT_00623fa0
    PSRLQ MM4,qword ptr [0x00623f80]    ; 0057f87d | DAT_00623f80
    POR MM0,MM2                         ; 0057f884
    POR MM0,MM4                         ; 0057f887
    MOVD EAX,MM0                        ; 0057f88a
    MOV word ptr [EBX],AX               ; 0057f88d
    TEST dword ptr [0x01c51d14],0x80    ; 0057f890 | DAT_01c51d14
    JZ 0x0057f8a6                       ; 0057f89a
        ;   XREF to: 0057f8a6 (CONDITIONAL_JUMP)  ; LAB_0057f8a6
    MOV EAX,EDI                         ; 0057f89c
    ADD EAX,dword ptr [0x006239cc]      ; 0057f89e | DAT_006239cc
    MOV dword ptr [EAX],ESI             ; 0057f8a4
    ADD EDI,0x4                         ; 0057f8a6
        ;   Label: LAB_0057f8a6
    CMP EDI,dword ptr [0x00623964]      ; 0057f8a9 | DAT_00623964
    JNC 0x0057f8f0                      ; 0057f8af
        ;   XREF to: 0057f8f0 (CONDITIONAL_JUMP)  ; LAB_0057f8f0
    ADD ECX,dword ptr [0x00623dd0]      ; 0057f8b1 | DAT_00623dd0
    PADDW MM5,qword ptr [0x00623eb0]    ; 0057f8b7 | DAT_00623eb0
    ADD EDX,dword ptr [0x00623dd4]      ; 0057f8be | DAT_00623dd4
    MOVQ MM0,MM5                        ; 0057f8c4
    ADD ESI,dword ptr [0x00623dd8]      ; 0057f8c7 | DAT_00623dd8
    PCMPGTW MM5,qword ptr [0x00623ddc]  ; 0057f8cd | DAT_00623ddc
    ADD EBP,dword ptr [0x00623e98]      ; 0057f8d4 | DAT_00623e98
    PAND MM5,MM0                        ; 0057f8da
    PADDD MM6,qword ptr [0x00623ea8]    ; 0057f8dd | DAT_00623ea8
    JMP 0x0057f680                      ; 0057f8e4
        ;   XREF to: 0057f680 (UNCONDITIONAL_JUMP)  ; LAB_0057f680
    POP EBP                             ; 0057f8f0
        ;   Label: LAB_0057f8f0
    EMMS                                ; 0057f8f1
    POP EDI                             ; 0057f8f3
    POP ESI                             ; 0057f8f4
    RET                                 ; 0057f8f5
    MOVD MM1,dword ptr [0x01c51d1c]     ; 0057f8f6 | DAT_01c51d1c
        ;   Label: LAB_0057f8f6
    PUNPCKLBW MM1,MM7                   ; 0057f8fd
    TEST dword ptr [0x01c51d14],0x8     ; 0057f900 | DAT_01c51d14
    JNZ 0x0057f91b                      ; 0057f90a
        ;   XREF to: 0057f91b (CONDITIONAL_JUMP)  ; LAB_0057f91b
    MOV EBP,0x0                         ; 0057f90c
    MOV dword ptr [0x00623e98],0x0      ; 0057f911 | DAT_00623e98
    TEST dword ptr [0x01c51d14],0x40    ; 0057f91b | DAT_01c51d14
        ;   Label: LAB_0057f91b
    JZ 0x0057f937                       ; 0057f925
        ;   XREF to: 0057f937 (CONDITIONAL_JUMP)  ; LAB_0057f937
    LEA EAX,[EDI]                       ; 0057f927
    ADD EAX,dword ptr [0x006239cc]      ; 0057f929 | DAT_006239cc
    CMP ESI,dword ptr [EAX]             ; 0057f92f
    JL 0x0057fa42                       ; 0057f931
        ;   XREF to: 0057fa42 (CONDITIONAL_JUMP)  ; LAB_0057fa42
    TEST dword ptr [0x01c51d14],0x1     ; 0057f937 | DAT_01c51d14
        ;   Label: LAB_0057f937
    JZ 0x0057fa96                       ; 0057f941
        ;   XREF to: 0057fa96 (CONDITIONAL_JUMP)  ; LAB_0057fa96
    MOVD MM0,ECX                        ; 0057f947
    MOVD MM2,EDX                        ; 0057f94a
    PSRLQ MM0,qword ptr [0x00623eb8]    ; 0057f94d | DAT_00623eb8
    PSRLQ MM2,qword ptr [0x00623ed8]    ; 0057f954 | DAT_00623ed8
    PAND MM0,qword ptr [0x00623ef8]     ; 0057f95b | DAT_00623ef8
    PAND MM2,qword ptr [0x00623f18]     ; 0057f962 | DAT_00623f18
    PADDD MM0,MM2                       ; 0057f969
    MOVD EBX,MM0                        ; 0057f96c
    TEST dword ptr [0x01c50944],0xffffffff ; 0057f96f | DAT_01c50944
    JNZ 0x0057f98e                      ; 0057f979
        ;   XREF to: 0057f98e (CONDITIONAL_JUMP)  ; LAB_0057f98e
    ADD EBX,dword ptr [0x01c50930]      ; 0057f97b | DAT_01c50930
    MOVZX EAX,byte ptr [EBX]            ; 0057f981
    MOVD MM0,dword ptr [EAX*0x4 + 0x1c4e3d4] ; 0057f984 | DAT_01c4e3d4
    JMP 0x0057f99a                      ; 0057f98c
        ;   XREF to: 0057f99a (UNCONDITIONAL_JUMP)  ; LAB_0057f99a
    SHL EBX,0x2                         ; 0057f98e
        ;   Label: LAB_0057f98e
    ADD EBX,dword ptr [0x01c50930]      ; 0057f991 | DAT_01c50930
    MOVD MM0,dword ptr [EBX]            ; 0057f997
    MOVQ MM3,MM5                        ; 0057f99a
        ;   Label: LAB_0057f99a
    PUNPCKLBW MM0,MM7                   ; 0057f99d
    PSRLW MM3,0x3                       ; 0057f9a0
    PSLLW MM0,0x4                       ; 0057f9a4
    PMULHW MM0,MM3                      ; 0057f9a8
    PACKUSWB MM0,MM7                    ; 0057f9ab
    TEST dword ptr [0x01c51d14],0x8     ; 0057f9ae | DAT_01c51d14
    JZ 0x0057f9e7                       ; 0057f9b8
        ;   XREF to: 0057f9e7 (CONDITIONAL_JUMP)  ; LAB_0057f9e7
    MOV EAX,EBP                         ; 0057f9ba
    SAR EAX,0x8                         ; 0057f9bc
    MOVQ MM3,qword ptr [EAX*0x8 + 0x6247d0] ; 0057f9bf | DAT_006247d0
    MOVQ MM4,MM1                        ; 0057f9c7
    MOVQ MM2,MM3                        ; 0057f9ca
    PMULLW MM4,MM3                      ; 0057f9cd
    PXOR MM2,qword ptr [0x00624fc8]     ; 0057f9d0 | DAT_00624fc8
    PUNPCKLBW MM0,MM7                   ; 0057f9d7
    PMULLW MM0,MM2                      ; 0057f9da
    PADDW MM0,MM4                       ; 0057f9dd
    PSRLW MM0,0x8                       ; 0057f9e0
    PACKUSWB MM0,MM7                    ; 0057f9e4
    MOV EBX,EDI                         ; 0057f9e7
        ;   Label: LAB_0057f9e7
    SHR EBX,0x1                         ; 0057f9e9
    ADD EBX,dword ptr [0x006239c8]      ; 0057f9eb | DAT_006239c8
    MOVQ MM2,MM0                        ; 0057f9f1
    MOVQ MM4,MM0                        ; 0057f9f4
    PAND MM0,qword ptr [0x00623f78]     ; 0057f9f7 | DAT_00623f78
    PAND MM2,qword ptr [0x00623f58]     ; 0057f9fe | DAT_00623f58
    PAND MM4,qword ptr [0x00623f38]     ; 0057fa05 | DAT_00623f38
    PSRLQ MM0,qword ptr [0x00623fc0]    ; 0057fa0c | DAT_00623fc0
    PSRLQ MM2,qword ptr [0x00623fa0]    ; 0057fa13 | DAT_00623fa0
    PSRLQ MM4,qword ptr [0x00623f80]    ; 0057fa1a | DAT_00623f80
    POR MM0,MM2                         ; 0057fa21
    POR MM0,MM4                         ; 0057fa24
    MOVD EAX,MM0                        ; 0057fa27
    MOV word ptr [EBX],AX               ; 0057fa2a
    TEST dword ptr [0x01c51d14],0x80    ; 0057fa2d | DAT_01c51d14
    JZ 0x0057fa42                       ; 0057fa37
        ;   XREF to: 0057fa42 (CONDITIONAL_JUMP)  ; LAB_0057fa42
    MOV EAX,[0x006239cc]                ; 0057fa39 | DAT_006239cc
    ADD EAX,EDI                         ; 0057fa3e
    MOV dword ptr [EAX],ESI             ; 0057fa40
    ADD EDI,0x4                         ; 0057fa42
        ;   Label: LAB_0057fa42
    CMP EDI,dword ptr [0x00623964]      ; 0057fa45 | DAT_00623964
    JNC 0x0057f8f0                      ; 0057fa4b
        ;   XREF to: 0057f8f0 (CONDITIONAL_JUMP)  ; LAB_0057f8f0
    ADD ECX,dword ptr [0x00623dd0]      ; 0057fa51 | DAT_00623dd0
    PADDW MM5,qword ptr [0x00623eb0]    ; 0057fa57 | DAT_00623eb0
    ADD EDX,dword ptr [0x00623dd4]      ; 0057fa5e | DAT_00623dd4
    MOVQ MM0,MM5                        ; 0057fa64
    ADD ESI,dword ptr [0x00623dd8]      ; 0057fa67 | DAT_00623dd8
    PCMPGTW MM5,qword ptr [0x00623ddc]  ; 0057fa6d | DAT_00623ddc
    ADD EBP,dword ptr [0x00623e98]      ; 0057fa74 | DAT_00623e98
    PAND MM5,MM0                        ; 0057fa7a
    JMP 0x0057f91b                      ; 0057fa7d
        ;   XREF to: 0057f91b (UNCONDITIONAL_JUMP)  ; LAB_0057f91b
    TEST dword ptr [0x01c51d14],0x200   ; 0057fa96 | DAT_01c51d14
        ;   Label: LAB_0057fa96
    JNZ 0x0057fab0                      ; 0057faa0
        ;   XREF to: 0057fab0 (CONDITIONAL_JUMP)  ; LAB_0057fab0
    MOVD MM0,dword ptr [0x01c4f020]     ; 0057faa2 | DAT_01c4f020
    JMP 0x0057f99a                      ; 0057faa9
        ;   XREF to: 0057f99a (UNCONDITIONAL_JUMP)  ; LAB_0057f99a
    MOVD MM0,dword ptr [0x00623fc8]     ; 0057fab0 | DAT_00623fc8
        ;   Label: LAB_0057fab0
    JMP 0x0057f99a                      ; 0057fab7
        ;   XREF to: 0057f99a (UNCONDITIONAL_JUMP)  ; LAB_0057f99a
    MOV EAX,dword ptr [EDI + 0x28]      ; 0057fac0
        ;   Label: LAB_0057fac0
    MOV EBX,dword ptr [ESI + 0x28]      ; 0057fac3
    SUB EAX,EBX                         ; 0057fac6
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057fac8 | DAT_01c4f034
    MOV dword ptr [0x006239ac],EBX      ; 0057face | DAT_006239ac
    MOV dword ptr [0x00623dd8],EDX      ; 0057fad4 | DAT_00623dd8
    MOV EAX,[0x006239ac]                ; 0057fada | DAT_006239ac
    MOV EBX,dword ptr [0x00623dd8]      ; 0057fadf | DAT_00623dd8
    MOV ESI,dword ptr [0x006239cc]      ; 0057fae5 | DAT_006239cc
    MOV ECX,dword ptr [0x00623964]      ; 0057faeb | DAT_00623964
    MOV dword ptr [ESI],EAX             ; 0057faf1
        ;   Label: LAB_0057faf1
    ADD EAX,EBX                         ; 0057faf3
    ADD ESI,0x4                         ; 0057faf5
    SUB ECX,0x4                         ; 0057faf8
    JG 0x0057faf1                       ; 0057fafb
        ;   XREF to: 0057faf1 (CONDITIONAL_JUMP)  ; LAB_0057faf1
    POP EBP                             ; 0057fafd
    EMMS                                ; 0057fafe
    POP EDI                             ; 0057fb00
    POP ESI                             ; 0057fb01
    RET                                 ; 0057fb02

