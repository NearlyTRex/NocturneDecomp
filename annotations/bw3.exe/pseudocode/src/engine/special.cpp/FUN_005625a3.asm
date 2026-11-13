; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_special_cpp_FUN_005625a3(void)
;
;
; XREF[2]:
;   engine_mini3d.cpp_fillPolygon_FUN_004f2090 at 004f23e3
;   engine_mini3d.cpp_rasterizeTriangle_FUN_004f1830 at 004f203b
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
;   ... and 33 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005625a3
        ;   Label: engine_special.cpp_FUN_005625a3
    PUSH EDI                            ; 005625a4
    PUSH EBP                            ; 005625a5
    MOV EAX,dword ptr [ESI + 0x8]       ; 005625a6
    MOV ECX,dword ptr [EDI + 0x8]       ; 005625a9
    CMP EAX,ECX                         ; 005625ac
    JBE 0x005625b3                      ; 005625ae
        ;   XREF to: 005625b3 (CONDITIONAL_JUMP)  ; LAB_005625b3
    XCHG EAX,ECX                        ; 005625b0
    XCHG EDI,ESI                        ; 005625b1
    SHR ECX,0x10                        ; 005625b3
        ;   Label: LAB_005625b3
    SHR EAX,0x10                        ; 005625b6
    MOV EBP,dword ptr [EBX*0x4 + 0x1c60dac] ; 005625b9 | DAT_01c60dac
    MOV EBX,dword ptr [EBX*0x4 + 0x1c5faec] ; 005625c0 | DAT_01c5faec
    SUB ECX,EAX                         ; 005625c7
    JLE 0x00562a20                      ; 005625c9
        ;   XREF to: 00562a20 (CONDITIONAL_JUMP)  ; LAB_00562a20
    LEA EBX,[EBX + EAX*0x2]             ; 005625cf
    SHL ECX,0x2                         ; 005625d2
    LEA EBP,[EBP + EAX*0x4]             ; 005625d5
    MOV dword ptr [0x006048a4],ECX      ; 005625d9 | DAT_006048a4
    MOV dword ptr [0x00604908],EBX      ; 005625df | DAT_00604908
    MOV dword ptr [0x0060490c],EBP      ; 005625e5 | DAT_0060490c
    CMP dword ptr [0x01c6e2b4],0x80     ; 005625eb | DAT_01c6e2b4
    JZ 0x00562bf0                       ; 005625f5
        ;   XREF to: 00562bf0 (CONDITIONAL_JUMP)  ; LAB_00562bf0
    MOV EAX,dword ptr [EDI + 0x18]      ; 005625fb
    MOV EBX,dword ptr [ESI + 0x18]      ; 005625fe
    SUB EAX,EBX                         ; 00562601
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 00562603 | DAT_01c6b5d4
    MOV dword ptr [0x006048e0],EBX      ; 00562609 | DAT_006048e0
    MOV dword ptr [0x00604d10],EDX      ; 0056260f | DAT_00604d10
    MOV EAX,dword ptr [EDI + 0x20]      ; 00562615
    MOV EBX,dword ptr [ESI + 0x20]      ; 00562618
    SUB EAX,EBX                         ; 0056261b
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 0056261d | DAT_01c6b5d4
    MOV dword ptr [0x006048e4],EBX      ; 00562623 | DAT_006048e4
    MOV dword ptr [0x00604d14],EDX      ; 00562629 | DAT_00604d14
    MOV EAX,dword ptr [EDI + 0x28]      ; 0056262f
    MOV EBX,dword ptr [ESI + 0x28]      ; 00562632
    SUB EAX,EBX                         ; 00562635
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 00562637 | DAT_01c6b5d4
    MOV dword ptr [0x006048ec],EBX      ; 0056263d | DAT_006048ec
    MOV dword ptr [0x00604d18],EDX      ; 00562643 | DAT_00604d18
    TEST dword ptr [0x01c6e2b4],0x8     ; 00562649 | DAT_01c6e2b4
    JZ 0x00562680                       ; 00562653
        ;   XREF to: 00562680 (CONDITIONAL_JUMP)  ; LAB_00562680
    MOV EAX,dword ptr [EDI + 0x30]      ; 00562655
    MOV EBX,dword ptr [ESI + 0x30]      ; 00562658
    SUB EAX,EBX                         ; 0056265b
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 0056265d | DAT_01c6b5d4
    MOV dword ptr [0x00604dd0],EBX      ; 00562663 | DAT_00604dd0
    MOV dword ptr [0x00604dd8],EDX      ; 00562669 | DAT_00604dd8
    JMP 0x00562694                      ; 0056266f
        ;   XREF to: 00562694 (UNCONDITIONAL_JUMP)  ; LAB_00562694
    MOV dword ptr [0x00604dd0],0x0      ; 00562680 | DAT_00604dd0
        ;   Label: LAB_00562680
    MOV dword ptr [0x00604dd8],0x0      ; 0056268a | DAT_00604dd8
    TEST dword ptr [0x01c6e2b4],0x20    ; 00562694 | DAT_01c6e2b4
        ;   Label: LAB_00562694
    JZ 0x005626ba                       ; 0056269e
        ;   XREF to: 005626ba (CONDITIONAL_JUMP)  ; LAB_005626ba
    MOV EAX,dword ptr [EDI + 0x48]      ; 005626a0
    MOV EBX,dword ptr [ESI + 0x48]      ; 005626a3
    SUB EAX,EBX                         ; 005626a6
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 005626a8 | DAT_01c6b5d4
    MOV dword ptr [0x00604de0],EBX      ; 005626ae | DAT_00604de0
    MOV dword ptr [0x00604de8],EDX      ; 005626b4 | DAT_00604de8
    MOV EAX,dword ptr [EDI + 0x10]      ; 005626ba
        ;   Label: LAB_005626ba
    MOV EBX,dword ptr [ESI + 0x10]      ; 005626bd
    SHR EAX,0x1                         ; 005626c0
    SHR EBX,0x1                         ; 005626c2
    SUB EAX,EBX                         ; 005626c4
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 005626c6 | DAT_01c6b5d4
    AND EBX,0xffff                      ; 005626cc
    AND EDX,0xffff                      ; 005626d2
    MOV dword ptr [0x00604d90],EBX      ; 005626d8 | DAT_00604d90
    MOV dword ptr [0x00604db0],EDX      ; 005626de | DAT_00604db0
    MOV EAX,dword ptr [EDI + 0x38]      ; 005626e4
    MOV EBX,dword ptr [ESI + 0x38]      ; 005626e7
    SHR EAX,0x1                         ; 005626ea
    SHR EBX,0x1                         ; 005626ec
    SUB EAX,EBX                         ; 005626ee
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 005626f0 | DAT_01c6b5d4
    AND EBX,0xffff                      ; 005626f6
    AND EDX,0xffff                      ; 005626fc
    MOV dword ptr [0x00604d98],EBX      ; 00562702 | DAT_00604d98
    MOV dword ptr [0x00604db8],EDX      ; 00562708 | DAT_00604db8
    MOV EAX,dword ptr [EDI + 0x40]      ; 0056270e
    MOV EBX,dword ptr [ESI + 0x40]      ; 00562711
    SHR EAX,0x1                         ; 00562714
    SHR EBX,0x1                         ; 00562716
    SUB EAX,EBX                         ; 00562718
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 0056271a | DAT_01c6b5d4
    AND EBX,0xffff                      ; 00562720
    AND EDX,0xffff                      ; 00562726
    MOV dword ptr [0x00604da0],EBX      ; 0056272c | DAT_00604da0
    MOV dword ptr [0x00604dc0],EDX      ; 00562732 | DAT_00604dc0
    MOVQ MM5,qword ptr [0x00604d90]     ; 00562738 | DAT_00604d90
    MOVQ MM6,qword ptr [0x00604db0]     ; 0056273f | DAT_00604db0
    PSLLQ MM5,0x10                      ; 00562746
    PSLLQ MM6,0x10                      ; 0056274a
    POR MM5,qword ptr [0x00604d98]      ; 0056274e | DAT_00604d98
    POR MM6,qword ptr [0x00604db8]      ; 00562755 | DAT_00604db8
    PSLLQ MM5,0x10                      ; 0056275c
    PSLLQ MM6,0x10                      ; 00562760
    POR MM5,qword ptr [0x00604da0]      ; 00562764 | DAT_00604da0
    POR MM6,qword ptr [0x00604dc0]      ; 0056276b | DAT_00604dc0
    MOVQ qword ptr [0x00604df0],MM6     ; 00562772 | DAT_00604df0
    MOV ECX,dword ptr [0x006048e0]      ; 00562779 | DAT_006048e0
    MOV EDX,dword ptr [0x006048e4]      ; 0056277f | DAT_006048e4
    MOV ESI,dword ptr [0x006048ec]      ; 00562785 | DAT_006048ec
    MOV EDI,0x0                         ; 0056278b
    MOV EBP,dword ptr [0x00604dd0]      ; 00562790 | DAT_00604dd0
    PXOR MM7,MM7                        ; 00562796
    TEST dword ptr [0x01c6e2b4],0x20    ; 00562799 | DAT_01c6e2b4
    JZ 0x00562a26                       ; 005627a3
        ;   XREF to: 00562a26 (CONDITIONAL_JUMP)  ; LAB_00562a26
    MOVD MM6,dword ptr [0x00604de0]     ; 005627a9 | DAT_00604de0
    TEST dword ptr [0x01c6e2b4],0x40    ; 005627b0 | DAT_01c6e2b4
        ;   Label: LAB_005627b0
    JZ 0x005627cc                       ; 005627ba
        ;   XREF to: 005627cc (CONDITIONAL_JUMP)  ; LAB_005627cc
    LEA EAX,[EDI]                       ; 005627bc
    ADD EAX,dword ptr [0x0060490c]      ; 005627be | DAT_0060490c
    CMP ESI,dword ptr [EAX]             ; 005627c4
    JL 0x005629d6                       ; 005627c6
        ;   XREF to: 005629d6 (CONDITIONAL_JUMP)  ; LAB_005629d6
    MOVD MM0,ECX                        ; 005627cc
        ;   Label: LAB_005627cc
    MOVD MM2,EDX                        ; 005627cf
    PSRLQ MM0,qword ptr [0x00604df8]    ; 005627d2 | DAT_00604df8
    PSRLQ MM2,qword ptr [0x00604e18]    ; 005627d9 | DAT_00604e18
    PAND MM0,qword ptr [0x00604e38]     ; 005627e0 | DAT_00604e38
    PAND MM2,qword ptr [0x00604e58]     ; 005627e7 | DAT_00604e58
    PADDD MM0,MM2                       ; 005627ee
    MOVD EBX,MM0                        ; 005627f1
    TEST dword ptr [0x01c6cee4],0xffffffff ; 005627f4 | DAT_01c6cee4
    JNZ 0x00562838                      ; 005627fe
        ;   XREF to: 00562838 (CONDITIONAL_JUMP)  ; LAB_00562838
    ADD EBX,dword ptr [0x01c6ced0]      ; 00562800 | DAT_01c6ced0
    MOVZX EAX,byte ptr [EBX]            ; 00562806
    MOVD MM0,dword ptr [EAX*0x4 + 0x1c6a974] ; 00562809 | DAT_01c6a974
    PUNPCKLBW MM0,MM7                   ; 00562811
    TEST dword ptr [0x01c6ced4],0xffffffff ; 00562814 | DAT_01c6ced4
    JZ 0x00562831                       ; 0056281e
        ;   XREF to: 00562831 (CONDITIONAL_JUMP)  ; LAB_00562831
    SUB EBX,dword ptr [0x01c6ced0]      ; 00562820 | DAT_01c6ced0
    ADD EBX,dword ptr [0x01c6ced4]      ; 00562826 | DAT_01c6ced4
    MOVZX EAX,byte ptr [EBX]            ; 0056282c
    JMP 0x0056284c                      ; 0056282f
        ;   XREF to: 0056284c (UNCONDITIONAL_JUMP)  ; LAB_0056284c
    MOV EAX,0xff                        ; 00562831
        ;   Label: LAB_00562831
    JMP 0x0056284c                      ; 00562836
        ;   XREF to: 0056284c (UNCONDITIONAL_JUMP)  ; LAB_0056284c
    SHL EBX,0x2                         ; 00562838
        ;   Label: LAB_00562838
    ADD EBX,dword ptr [0x01c6ced0]      ; 0056283b | DAT_01c6ced0
    MOV EAX,dword ptr [EBX]             ; 00562841
    MOVD MM0,EAX                        ; 00562843
    PUNPCKLBW MM0,MM7                   ; 00562846
    SHR EAX,0x18                        ; 00562849
    TEST EAX,0xffffffff                 ; 0056284c
        ;   Label: LAB_0056284c
    JZ 0x005629d6                       ; 00562851
        ;   XREF to: 005629d6 (CONDITIONAL_JUMP)  ; LAB_005629d6
    MOV EBX,EDI                         ; 00562857
    SHR EBX,0x1                         ; 00562859
    ADD EBX,dword ptr [0x00604908]      ; 0056285b | DAT_00604908
    MOVZX EBX,word ptr [EBX]            ; 00562861
    MOVD MM4,EBX                        ; 00562864
    PAND MM4,qword ptr [0x00604e70]     ; 00562867 | DAT_00604e70
    PSLLQ MM4,qword ptr [0x00604f00]    ; 0056286e | DAT_00604f00
    MOVD MM2,EBX                        ; 00562875
    PAND MM2,qword ptr [0x00604e68]     ; 00562878 | DAT_00604e68
    PSLLQ MM2,qword ptr [0x00604ee0]    ; 0056287f | DAT_00604ee0
    POR MM4,MM2                         ; 00562886
    MOVD MM2,EBX                        ; 00562889
    PAND MM2,qword ptr [0x00604e60]     ; 0056288c | DAT_00604e60
    PSLLQ MM2,qword ptr [0x00604ec0]    ; 00562893 | DAT_00604ec0
    POR MM4,MM2                         ; 0056289a
    PUNPCKLBW MM4,MM7                   ; 0056289d
    PSLLW MM0,0x4                       ; 005628a0
    MOVQ MM7,MM5                        ; 005628a4
    PSRLW MM7,0x3                       ; 005628a7
    PMULHW MM0,MM7                      ; 005628ab
    PXOR MM7,MM7                        ; 005628ae
    PACKUSWB MM0,MM7                    ; 005628b1
    PUNPCKLBW MM0,MM7                   ; 005628b4
    MOVD EBX,MM6                        ; 005628b7
    IMUL EAX,EBX                        ; 005628ba
    SHR EAX,0x10                        ; 005628bd
    TEST dword ptr [0x01c6e2b4],0x8     ; 005628c0 | DAT_01c6e2b4
    JNZ 0x005628ce                      ; 005628ca
        ;   XREF to: 005628ce (CONDITIONAL_JUMP)  ; LAB_005628ce
    JMP 0x005628fc                      ; 005628cc
        ;   XREF to: 005628fc (UNCONDITIONAL_JUMP)  ; LAB_005628fc
    MOV EBX,EBP                         ; 005628ce
        ;   Label: LAB_005628ce
    SAR EBX,0x8                         ; 005628d0
    MOVQ MM1,qword ptr [EBX*0x8 + 0x605710] ; 005628d3 | DAT_00605710
    MOVQ MM2,MM1                        ; 005628db
    PXOR MM2,qword ptr [0x00605f08]     ; 005628de | DAT_00605f08
    MOVD MM3,dword ptr [0x01c6e2bc]     ; 005628e5 | DAT_01c6e2bc
    PUNPCKLBW MM3,MM7                   ; 005628ec
    PMULLW MM0,MM2                      ; 005628ef
    PMULLW MM3,MM1                      ; 005628f2
    PADDW MM0,MM3                       ; 005628f5
    PSRLW MM0,0x8                       ; 005628f8
    MOVQ MM2,qword ptr [EAX*0x8 + 0x605710] ; 005628fc | DAT_00605710
        ;   Label: LAB_005628fc
    MOVQ MM3,MM2                        ; 00562904
    PXOR MM3,qword ptr [0x00605f08]     ; 00562907 | DAT_00605f08
    CMP dword ptr [0x01c6e2ac],0x1      ; 0056290e | DAT_01c6e2ac
    JZ 0x00562940                       ; 00562915
        ;   XREF to: 00562940 (CONDITIONAL_JUMP)  ; LAB_00562940
    CMP dword ptr [0x01c6e2ac],0x2      ; 00562917 | DAT_01c6e2ac
    JZ 0x00562950                       ; 0056291e
        ;   XREF to: 00562950 (CONDITIONAL_JUMP)  ; LAB_00562950
    CMP dword ptr [0x01c6e2ac],0x3      ; 00562920 | DAT_01c6e2ac
    JZ 0x00562960                       ; 00562927
        ;   XREF to: 00562960 (CONDITIONAL_JUMP)  ; LAB_00562960
    PMULLW MM0,MM2                      ; 00562929
    PMULLW MM4,MM3                      ; 0056292c
    JMP 0x00562970                      ; 0056292f
        ;   XREF to: 00562970 (UNCONDITIONAL_JUMP)  ; LAB_00562970
    PMULLW MM0,MM2                      ; 00562940
        ;   Label: LAB_00562940
    PSLLW MM4,0x8                       ; 00562943
    JMP 0x00562970                      ; 00562947
        ;   XREF to: 00562970 (UNCONDITIONAL_JUMP)  ; LAB_00562970
    PMULLW MM4,MM0                      ; 00562950
        ;   Label: LAB_00562950
    PMULLW MM0,MM2                      ; 00562953
    JMP 0x00562970                      ; 00562956
        ;   XREF to: 00562970 (UNCONDITIONAL_JUMP)  ; LAB_00562970
    MOVQ MM1,MM0                        ; 00562960
        ;   Label: LAB_00562960
    PXOR MM1,qword ptr [0x00605f08]     ; 00562963 | DAT_00605f08
    PMULLW MM4,MM1                      ; 0056296a
    PMULLW MM0,MM2                      ; 0056296d
    PADDUSW MM0,MM4                     ; 00562970
        ;   Label: LAB_00562970
    PSRLW MM0,0x8                       ; 00562973
    PACKUSWB MM0,MM7                    ; 00562977
    MOV EBX,EDI                         ; 0056297a
    SHR EBX,0x1                         ; 0056297c
    ADD EBX,dword ptr [0x00604908]      ; 0056297e | DAT_00604908
    MOVQ MM2,MM0                        ; 00562984
    MOVQ MM4,MM0                        ; 00562987
    PAND MM0,qword ptr [0x00604eb8]     ; 0056298a | DAT_00604eb8
    PAND MM2,qword ptr [0x00604e98]     ; 00562991 | DAT_00604e98
    PAND MM4,qword ptr [0x00604e78]     ; 00562998 | DAT_00604e78
    PSRLQ MM0,qword ptr [0x00604f00]    ; 0056299f | DAT_00604f00
    PSRLQ MM2,qword ptr [0x00604ee0]    ; 005629a6 | DAT_00604ee0
    PSRLQ MM4,qword ptr [0x00604ec0]    ; 005629ad | DAT_00604ec0
    POR MM0,MM2                         ; 005629b4
    POR MM0,MM4                         ; 005629b7
    MOVD EAX,MM0                        ; 005629ba
    MOV word ptr [EBX],AX               ; 005629bd
    TEST dword ptr [0x01c6e2b4],0x80    ; 005629c0 | DAT_01c6e2b4
    JZ 0x005629d6                       ; 005629ca
        ;   XREF to: 005629d6 (CONDITIONAL_JUMP)  ; LAB_005629d6
    MOV EAX,EDI                         ; 005629cc
    ADD EAX,dword ptr [0x0060490c]      ; 005629ce | DAT_0060490c
    MOV dword ptr [EAX],ESI             ; 005629d4
    ADD EDI,0x4                         ; 005629d6
        ;   Label: LAB_005629d6
    CMP EDI,dword ptr [0x006048a4]      ; 005629d9 | DAT_006048a4
    JNC 0x00562a20                      ; 005629df
        ;   XREF to: 00562a20 (CONDITIONAL_JUMP)  ; LAB_00562a20
    ADD ECX,dword ptr [0x00604d10]      ; 005629e1 | DAT_00604d10
    PADDW MM5,qword ptr [0x00604df0]    ; 005629e7 | DAT_00604df0
    ADD EDX,dword ptr [0x00604d14]      ; 005629ee | DAT_00604d14
    MOVQ MM0,MM5                        ; 005629f4
    ADD ESI,dword ptr [0x00604d18]      ; 005629f7 | DAT_00604d18
    PCMPGTW MM5,qword ptr [0x00604d1c]  ; 005629fd | DAT_00604d1c
    ADD EBP,dword ptr [0x00604dd8]      ; 00562a04 | DAT_00604dd8
    PAND MM5,MM0                        ; 00562a0a
    PADDD MM6,qword ptr [0x00604de8]    ; 00562a0d | DAT_00604de8
    JMP 0x005627b0                      ; 00562a14
        ;   XREF to: 005627b0 (UNCONDITIONAL_JUMP)  ; LAB_005627b0
    POP EBP                             ; 00562a20
        ;   Label: LAB_00562a20
    EMMS                                ; 00562a21
    POP EDI                             ; 00562a23
    POP ESI                             ; 00562a24
    RET                                 ; 00562a25
    MOVD MM1,dword ptr [0x01c6e2bc]     ; 00562a26 | DAT_01c6e2bc
        ;   Label: LAB_00562a26
    PUNPCKLBW MM1,MM7                   ; 00562a2d
    TEST dword ptr [0x01c6e2b4],0x8     ; 00562a30 | DAT_01c6e2b4
    JNZ 0x00562a4b                      ; 00562a3a
        ;   XREF to: 00562a4b (CONDITIONAL_JUMP)  ; LAB_00562a4b
    MOV EBP,0x0                         ; 00562a3c
    MOV dword ptr [0x00604dd8],0x0      ; 00562a41 | DAT_00604dd8
    TEST dword ptr [0x01c6e2b4],0x40    ; 00562a4b | DAT_01c6e2b4
        ;   Label: LAB_00562a4b
    JZ 0x00562a67                       ; 00562a55
        ;   XREF to: 00562a67 (CONDITIONAL_JUMP)  ; LAB_00562a67
    LEA EAX,[EDI]                       ; 00562a57
    ADD EAX,dword ptr [0x0060490c]      ; 00562a59 | DAT_0060490c
    CMP ESI,dword ptr [EAX]             ; 00562a5f
    JL 0x00562b72                       ; 00562a61
        ;   XREF to: 00562b72 (CONDITIONAL_JUMP)  ; LAB_00562b72
    TEST dword ptr [0x01c6e2b4],0x1     ; 00562a67 | DAT_01c6e2b4
        ;   Label: LAB_00562a67
    JZ 0x00562bc6                       ; 00562a71
        ;   XREF to: 00562bc6 (CONDITIONAL_JUMP)  ; LAB_00562bc6
    MOVD MM0,ECX                        ; 00562a77
    MOVD MM2,EDX                        ; 00562a7a
    PSRLQ MM0,qword ptr [0x00604df8]    ; 00562a7d | DAT_00604df8
    PSRLQ MM2,qword ptr [0x00604e18]    ; 00562a84 | DAT_00604e18
    PAND MM0,qword ptr [0x00604e38]     ; 00562a8b | DAT_00604e38
    PAND MM2,qword ptr [0x00604e58]     ; 00562a92 | DAT_00604e58
    PADDD MM0,MM2                       ; 00562a99
    MOVD EBX,MM0                        ; 00562a9c
    TEST dword ptr [0x01c6cee4],0xffffffff ; 00562a9f | DAT_01c6cee4
    JNZ 0x00562abe                      ; 00562aa9
        ;   XREF to: 00562abe (CONDITIONAL_JUMP)  ; LAB_00562abe
    ADD EBX,dword ptr [0x01c6ced0]      ; 00562aab | DAT_01c6ced0
    MOVZX EAX,byte ptr [EBX]            ; 00562ab1
    MOVD MM0,dword ptr [EAX*0x4 + 0x1c6a974] ; 00562ab4 | DAT_01c6a974
    JMP 0x00562aca                      ; 00562abc
        ;   XREF to: 00562aca (UNCONDITIONAL_JUMP)  ; LAB_00562aca
    SHL EBX,0x2                         ; 00562abe
        ;   Label: LAB_00562abe
    ADD EBX,dword ptr [0x01c6ced0]      ; 00562ac1 | DAT_01c6ced0
    MOVD MM0,dword ptr [EBX]            ; 00562ac7
    MOVQ MM3,MM5                        ; 00562aca
        ;   Label: LAB_00562aca
    PUNPCKLBW MM0,MM7                   ; 00562acd
    PSRLW MM3,0x3                       ; 00562ad0
    PSLLW MM0,0x4                       ; 00562ad4
    PMULHW MM0,MM3                      ; 00562ad8
    PACKUSWB MM0,MM7                    ; 00562adb
    TEST dword ptr [0x01c6e2b4],0x8     ; 00562ade | DAT_01c6e2b4
    JZ 0x00562b17                       ; 00562ae8
        ;   XREF to: 00562b17 (CONDITIONAL_JUMP)  ; LAB_00562b17
    MOV EAX,EBP                         ; 00562aea
    SAR EAX,0x8                         ; 00562aec
    MOVQ MM3,qword ptr [EAX*0x8 + 0x605710] ; 00562aef | DAT_00605710
    MOVQ MM4,MM1                        ; 00562af7
    MOVQ MM2,MM3                        ; 00562afa
    PMULLW MM4,MM3                      ; 00562afd
    PXOR MM2,qword ptr [0x00605f08]     ; 00562b00 | DAT_00605f08
    PUNPCKLBW MM0,MM7                   ; 00562b07
    PMULLW MM0,MM2                      ; 00562b0a
    PADDW MM0,MM4                       ; 00562b0d
    PSRLW MM0,0x8                       ; 00562b10
    PACKUSWB MM0,MM7                    ; 00562b14
    MOV EBX,EDI                         ; 00562b17
        ;   Label: LAB_00562b17
    SHR EBX,0x1                         ; 00562b19
    ADD EBX,dword ptr [0x00604908]      ; 00562b1b | DAT_00604908
    MOVQ MM2,MM0                        ; 00562b21
    MOVQ MM4,MM0                        ; 00562b24
    PAND MM0,qword ptr [0x00604eb8]     ; 00562b27 | DAT_00604eb8
    PAND MM2,qword ptr [0x00604e98]     ; 00562b2e | DAT_00604e98
    PAND MM4,qword ptr [0x00604e78]     ; 00562b35 | DAT_00604e78
    PSRLQ MM0,qword ptr [0x00604f00]    ; 00562b3c | DAT_00604f00
    PSRLQ MM2,qword ptr [0x00604ee0]    ; 00562b43 | DAT_00604ee0
    PSRLQ MM4,qword ptr [0x00604ec0]    ; 00562b4a | DAT_00604ec0
    POR MM0,MM2                         ; 00562b51
    POR MM0,MM4                         ; 00562b54
    MOVD EAX,MM0                        ; 00562b57
    MOV word ptr [EBX],AX               ; 00562b5a
    TEST dword ptr [0x01c6e2b4],0x80    ; 00562b5d | DAT_01c6e2b4
    JZ 0x00562b72                       ; 00562b67
        ;   XREF to: 00562b72 (CONDITIONAL_JUMP)  ; LAB_00562b72
    MOV EAX,[0x0060490c]                ; 00562b69 | DAT_0060490c
    ADD EAX,EDI                         ; 00562b6e
    MOV dword ptr [EAX],ESI             ; 00562b70
    ADD EDI,0x4                         ; 00562b72
        ;   Label: LAB_00562b72
    CMP EDI,dword ptr [0x006048a4]      ; 00562b75 | DAT_006048a4
    JNC 0x00562a20                      ; 00562b7b
        ;   XREF to: 00562a20 (CONDITIONAL_JUMP)  ; LAB_00562a20
    ADD ECX,dword ptr [0x00604d10]      ; 00562b81 | DAT_00604d10
    PADDW MM5,qword ptr [0x00604df0]    ; 00562b87 | DAT_00604df0
    ADD EDX,dword ptr [0x00604d14]      ; 00562b8e | DAT_00604d14
    MOVQ MM0,MM5                        ; 00562b94
    ADD ESI,dword ptr [0x00604d18]      ; 00562b97 | DAT_00604d18
    PCMPGTW MM5,qword ptr [0x00604d1c]  ; 00562b9d | DAT_00604d1c
    ADD EBP,dword ptr [0x00604dd8]      ; 00562ba4 | DAT_00604dd8
    PAND MM5,MM0                        ; 00562baa
    JMP 0x00562a4b                      ; 00562bad
        ;   XREF to: 00562a4b (UNCONDITIONAL_JUMP)  ; LAB_00562a4b
    TEST dword ptr [0x01c6e2b4],0x200   ; 00562bc6 | DAT_01c6e2b4
        ;   Label: LAB_00562bc6
    JNZ 0x00562be0                      ; 00562bd0
        ;   XREF to: 00562be0 (CONDITIONAL_JUMP)  ; LAB_00562be0
    MOVD MM0,dword ptr [0x01c6b5c0]     ; 00562bd2 | DAT_01c6b5c0
    JMP 0x00562aca                      ; 00562bd9
        ;   XREF to: 00562aca (UNCONDITIONAL_JUMP)  ; LAB_00562aca
    MOVD MM0,dword ptr [0x00604f08]     ; 00562be0 | DAT_00604f08
        ;   Label: LAB_00562be0
    JMP 0x00562aca                      ; 00562be7
        ;   XREF to: 00562aca (UNCONDITIONAL_JUMP)  ; LAB_00562aca
    MOV EAX,dword ptr [EDI + 0x28]      ; 00562bf0
        ;   Label: LAB_00562bf0
    MOV EBX,dword ptr [ESI + 0x28]      ; 00562bf3
    SUB EAX,EBX                         ; 00562bf6
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 00562bf8 | DAT_01c6b5d4
    MOV dword ptr [0x006048ec],EBX      ; 00562bfe | DAT_006048ec
    MOV dword ptr [0x00604d18],EDX      ; 00562c04 | DAT_00604d18
    MOV EAX,[0x006048ec]                ; 00562c0a | DAT_006048ec
    MOV EBX,dword ptr [0x00604d18]      ; 00562c0f | DAT_00604d18
    MOV ESI,dword ptr [0x0060490c]      ; 00562c15 | DAT_0060490c
    MOV ECX,dword ptr [0x006048a4]      ; 00562c1b | DAT_006048a4
    MOV dword ptr [ESI],EAX             ; 00562c21
        ;   Label: LAB_00562c21
    ADD EAX,EBX                         ; 00562c23
    ADD ESI,0x4                         ; 00562c25
    SUB ECX,0x4                         ; 00562c28
    JG 0x00562c21                       ; 00562c2b
        ;   XREF to: 00562c21 (CONDITIONAL_JUMP)  ; LAB_00562c21
    POP EBP                             ; 00562c2d
    EMMS                                ; 00562c2e
    POP EDI                             ; 00562c30
    POP ESI                             ; 00562c31
    RET                                 ; 00562c32

