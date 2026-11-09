; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_00468620(CDrawSurface *param_1,int param_2,int param_3,int param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_005bc270
;   undefined4 DAT_005f2aec
;   undefined4 DAT_005f2af0
;   undefined4 DAT_01bdd524
;   undefined4 DAT_01bdd528
;   undefined4 DAT_01bdd52c
;   undefined4 DAT_01c5fad0
;   undefined4 DAT_01c5fad4
;
; Called Functions:
;   cockpit_drawsurf.cpp_FUN_00467f30
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468620
        ;   Label: cockpit_drawsurf.cpp_FUN_00468620
    PUSH ESI                            ; 00468621
    PUSH EDI                            ; 00468622
    PUSH EBP                            ; 00468623
    SUB ESP,0x1c                        ; 00468624
    MOV EBX,dword ptr [ESP + 0x34]      ; 00468627
    MOV ESI,dword ptr [ESP + 0x38]      ; 0046862b
    MOV EBP,dword ptr [ESP + 0x3c]      ; 0046862f
    MOV EDX,dword ptr [ESP + 0x40]      ; 00468633
    MOV EDI,dword ptr [0x01c5fad4]      ; 00468637 | DAT_01c5fad4
    CMP EDI,dword ptr [0x01bdd52c]      ; 0046863d | DAT_01bdd52c
    JNZ 0x00468718                      ; 00468643
        ;   XREF to: 00468718 (CONDITIONAL_JUMP)  ; LAB_00468718
    FLD float ptr [0x01bdd528]          ; 00468649 | DAT_01bdd528
        ;   Label: LAB_00468649
    MOV EDI,0x1                         ; 0046864f
    MOV ECX,dword ptr [ESP + 0x30]      ; 00468654
    CALL crt_math.c_round_FUN_005a3120  ; 00468658
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x14]        ; 0046865d
    MOV dword ptr [ESP + 0x4],EDI       ; 00468661
    MOV EAX,dword ptr [ECX + 0x8]       ; 00468665
    MOV EDI,dword ptr [ECX + 0xc]       ; 00468668
    SUB EBX,EAX                         ; 0046866b
    SUB EBP,EAX                         ; 0046866d
    MOV EAX,0x1                         ; 0046866f
    SUB ESI,EDI                         ; 00468674
    SUB EDX,EDI                         ; 00468676
    MOV dword ptr [ESP],EAX             ; 00468678
    CMP ESI,EDX                         ; 0046867b
    JG 0x00468686                       ; 0046867d
        ;   XREF to: 00468686 (CONDITIONAL_JUMP)  ; LAB_00468686
    MOV dword ptr [ESP],0xffffffff      ; 0046867f
    JLE 0x00468694                      ; 00468686
        ;   XREF to: 00468694 (CONDITIONAL_JUMP)  ; LAB_00468694
        ;   Label: LAB_00468686
    MOV ECX,EBX                         ; 00468688
    MOV EBX,EBP                         ; 0046868a
    MOV EBP,ECX                         ; 0046868c
    MOV ECX,ESI                         ; 0046868e
    MOV ESI,EDX                         ; 00468690
    MOV EDX,ECX                         ; 00468692
    SUB EDX,ESI                         ; 00468694
        ;   Label: LAB_00468694
    SUB EBP,EBX                         ; 00468696
    MOV dword ptr [ESP + 0x10],EDX      ; 00468698
    TEST EBP,EBP                        ; 0046869c
    JL 0x0046878e                       ; 0046869e
        ;   XREF to: 0046878e (CONDITIONAL_JUMP)  ; LAB_0046878e
    MOV EAX,dword ptr [ESP + 0x10]      ; 004686a4
        ;   Label: LAB_004686a4
    CMP EBP,EAX                         ; 004686a8
    JLE 0x004687b2                      ; 004686aa
        ;   XREF to: 004687b2 (CONDITIONAL_JUMP)  ; LAB_004687b2
    XOR EDX,EDX                         ; 004686b0
    LEA EDI,[EAX + EAX*0x1]             ; 004686b2
    MOV dword ptr [ESP + 0xc],EDX       ; 004686b5
    SUB EDI,EBP                         ; 004686b9
    TEST EBP,EBP                        ; 004686bb
    JL 0x00468710                       ; 004686bd
        ;   XREF to: 00468710 (CONDITIONAL_JUMP)  ; LAB_00468710
    MOV EAX,dword ptr [ESP + 0x14]      ; 004686bf
        ;   Label: LAB_004686bf
    CDQ                                 ; 004686c3
    XOR EAX,EDX                         ; 004686c4
    SUB EAX,EDX                         ; 004686c6
    MOV EDX,EAX                         ; 004686c8
    MOV ECX,dword ptr [0x005f2aec]      ; 004686ca | DAT_005f2aec
    SAR EDX,0x1f                        ; 004686d0
    ADD ECX,ECX                         ; 004686d3
    IDIV ECX                            ; 004686d5
    CMP EDX,dword ptr [0x005f2aec]      ; 004686d7 | DAT_005f2aec
    JL 0x0046879e                       ; 004686dd
        ;   XREF to: 0046879e (CONDITIONAL_JUMP)  ; LAB_0046879e
    TEST EDI,EDI                        ; 004686e3
        ;   Label: LAB_004686e3
    JLE 0x004686ea                      ; 004686e5
        ;   XREF to: 004686ea (CONDITIONAL_JUMP)  ; LAB_004686ea
    INC ESI                             ; 004686e7
    SUB EDI,EBP                         ; 004686e8
    MOV EDX,dword ptr [ESP]             ; 004686ea
        ;   Label: LAB_004686ea
    MOV ECX,dword ptr [ESP + 0x14]      ; 004686ed
    MOV EAX,dword ptr [ESP + 0x4]       ; 004686f1
    ADD ECX,EDX                         ; 004686f5
    ADD EBX,EAX                         ; 004686f7
    MOV dword ptr [ESP + 0x14],ECX      ; 004686f9
    MOV ECX,dword ptr [ESP + 0xc]       ; 004686fd
    MOV EDX,dword ptr [ESP + 0x10]      ; 00468701
    INC ECX                             ; 00468705
    ADD EDI,EDX                         ; 00468706
    MOV dword ptr [ESP + 0xc],ECX       ; 00468708
    CMP EBP,ECX                         ; 0046870c
    JGE 0x004686bf                      ; 0046870e
        ;   XREF to: 004686bf (CONDITIONAL_JUMP)  ; LAB_004686bf
    ADD ESP,0x1c                        ; 00468710
        ;   Label: LAB_00468710
    POP EBP                             ; 00468713
    POP EDI                             ; 00468714
    POP ESI                             ; 00468715
    POP EBX                             ; 00468716
    RET                                 ; 00468717
    FILD dword ptr [0x01c5fad0]         ; 00468718 | DAT_01c5fad0
        ;   Label: LAB_00468718
    FMUL float ptr [0x005bc270]         ; 0046871e | DAT_005bc270
    FADD float ptr [0x01bdd524]         ; 00468724 | DAT_01bdd524
    MOV dword ptr [0x01bdd52c],EDI      ; 0046872a | DAT_01bdd52c
    FST float ptr [0x01bdd524]          ; 00468730 | DAT_01bdd524
    FCOMP float ptr [0x005f2af0]        ; 00468736 | DAT_005f2af0
    FNSTSW AX                           ; 0046873c
    SAHF                                ; 0046873e
    JBE 0x00468649                      ; 0046873f
        ;   XREF to: 00468649 (CONDITIONAL_JUMP)  ; LAB_00468649
    FLD float ptr [0x01bdd524]          ; 00468745 | DAT_01bdd524
    FDIV float ptr [0x005f2af0]         ; 0046874b | DAT_005f2af0
    MOV ECX,dword ptr [0x005f2aec]      ; 00468751 | DAT_005f2aec
    ADD ECX,ECX                         ; 00468757
    MOV dword ptr [ESP + 0x18],ECX      ; 00468759
    FADD float ptr [0x01bdd528]         ; 0046875d | DAT_01bdd528
    FILD dword ptr [ESP + 0x18]         ; 00468763
    FXCH                                ; 00468767
    FSTP float ptr [0x01bdd528]         ; 00468769 | DAT_01bdd528
    FCOMP float ptr [0x01bdd528]        ; 0046876f | DAT_01bdd528
    FNSTSW AX                           ; 00468775
    SAHF                                ; 00468777
    JNC 0x00468781                      ; 00468778
        ;   XREF to: 00468781 (CONDITIONAL_JUMP)  ; LAB_00468781
    XOR EAX,EAX                         ; 0046877a
    MOV [0x01bdd528],EAX                ; 0046877c | DAT_01bdd528
    XOR ECX,ECX                         ; 00468781
        ;   Label: LAB_00468781
    MOV dword ptr [0x01bdd524],ECX      ; 00468783 | DAT_01bdd524
    JMP 0x00468649                      ; 00468789
        ;   XREF to: 00468649 (UNCONDITIONAL_JUMP)  ; LAB_00468649
    MOV EDI,0xffffffff                  ; 0046878e
        ;   Label: LAB_0046878e
    NEG EBP                             ; 00468793
    MOV dword ptr [ESP + 0x4],EDI       ; 00468795
    JMP 0x004686a4                      ; 00468799
        ;   XREF to: 004686a4 (UNCONDITIONAL_JUMP)  ; LAB_004686a4
    PUSH ESI                            ; 0046879e
        ;   Label: LAB_0046879e
    PUSH EBX                            ; 0046879f
    MOV EAX,dword ptr [ESP + 0x38]      ; 004687a0
    PUSH EAX                            ; 004687a4
    CALL cockpit_drawsurf.cpp_FUN_00467f30 ; 004687a5
        ;   XREF to: 00467f30 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_00467f30(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 004687aa
    JMP 0x004686e3                      ; 004687ad
        ;   XREF to: 004686e3 (UNCONDITIONAL_JUMP)  ; LAB_004686e3
    XOR ECX,ECX                         ; 004687b2
        ;   Label: LAB_004687b2
    LEA EDI,[EBP + EBP*0x1]             ; 004687b4
    MOV dword ptr [ESP + 0x8],ECX       ; 004687b8
    SUB EDI,EAX                         ; 004687bc
    TEST EAX,EAX                        ; 004687be
    JL 0x00468710                       ; 004687c0
        ;   XREF to: 00468710 (CONDITIONAL_JUMP)  ; LAB_00468710
    MOV EAX,dword ptr [ESP + 0x14]      ; 004687c6
        ;   Label: LAB_004687c6
    CDQ                                 ; 004687ca
    XOR EAX,EDX                         ; 004687cb
    SUB EAX,EDX                         ; 004687cd
    MOV EDX,EAX                         ; 004687cf
    MOV ECX,dword ptr [0x005f2aec]      ; 004687d1 | DAT_005f2aec
    SAR EDX,0x1f                        ; 004687d7
    ADD ECX,ECX                         ; 004687da
    IDIV ECX                            ; 004687dc
    CMP EDX,dword ptr [0x005f2aec]      ; 004687de | DAT_005f2aec
    JL 0x0046881d                       ; 004687e4
        ;   XREF to: 0046881d (CONDITIONAL_JUMP)  ; LAB_0046881d
    TEST EDI,EDI                        ; 004687e6
        ;   Label: LAB_004687e6
    JLE 0x004687f6                      ; 004687e8
        ;   XREF to: 004687f6 (CONDITIONAL_JUMP)  ; LAB_004687f6
    MOV EAX,dword ptr [ESP + 0x10]      ; 004687ea
    MOV ECX,dword ptr [ESP + 0x4]       ; 004687ee
    SUB EDI,EAX                         ; 004687f2
    ADD EBX,ECX                         ; 004687f4
    MOV EDX,dword ptr [ESP]             ; 004687f6
        ;   Label: LAB_004687f6
    MOV ECX,dword ptr [ESP + 0x14]      ; 004687f9
    MOV EAX,dword ptr [ESP + 0x8]       ; 004687fd
    INC ESI                             ; 00468801
    ADD EDI,EBP                         ; 00468802
    ADD ECX,EDX                         ; 00468804
    INC EAX                             ; 00468806
    MOV dword ptr [ESP + 0x14],ECX      ; 00468807
    MOV ECX,dword ptr [ESP + 0x10]      ; 0046880b
    MOV dword ptr [ESP + 0x8],EAX       ; 0046880f
    CMP EAX,ECX                         ; 00468813
    JG 0x00468710                       ; 00468815
        ;   XREF to: 00468710 (CONDITIONAL_JUMP)  ; LAB_00468710
    JMP 0x004687c6                      ; 0046881b
        ;   XREF to: 004687c6 (UNCONDITIONAL_JUMP)  ; LAB_004687c6
    PUSH ESI                            ; 0046881d
        ;   Label: LAB_0046881d
    PUSH EBX                            ; 0046881e
    MOV EDX,dword ptr [ESP + 0x38]      ; 0046881f
    PUSH EDX                            ; 00468823
    CALL cockpit_drawsurf.cpp_FUN_00467f30 ; 00468824
        ;   XREF to: 00467f30 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_00467f30(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 00468829
    JMP 0x004687e6                      ; 0046882c
        ;   XREF to: 004687e6 (UNCONDITIONAL_JUMP)  ; LAB_004687e6

