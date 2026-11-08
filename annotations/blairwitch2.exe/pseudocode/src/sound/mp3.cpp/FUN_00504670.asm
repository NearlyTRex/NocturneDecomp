; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00504670(int *param_1)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_00509db0 at 00509ea7
;   FUN_0050a280 at 0050ae64
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_005dfe5b
;   TerminatedCString s_MPEG_Layer_2_pick_table_005dfe6c
;   TerminatedCString s_sound_mp3_cpp_005dfea5
;   TerminatedCString s_js_bound_bad_layer_modex_005dfeb6
;   undefined4 s_CMotionController_0061847c+0x14
;   undefined4 DAT_00618e88
;   undefined4 DAT_00618ec8
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01d23558
;
; Called Functions:
;   FUN_004e4500
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00504670
        ;   Label: FUN_00504670
    PUSH ESI                            ; 00504671
    PUSH EDI                            ; 00504672
    PUSH EBP                            ; 00504673
    SUB ESP,0x14                        ; 00504674
    MOV EBX,dword ptr [ESP + 0x28]      ; 00504677
    MOV ESI,dword ptr [EBX]             ; 0050467b
    MOV EAX,dword ptr [ESI + 0x1c]      ; 0050467d
    MOV dword ptr [EBX + 0x4],EAX       ; 00504680
    CMP EAX,0x3                         ; 00504683
    SETNZ AL                            ; 00504686
    AND EAX,0xff                        ; 00504689
    INC EAX                             ; 0050468e
    MOV dword ptr [EBX + 0x10],EAX      ; 0050468f
    CMP dword ptr [ESI + 0x4],0x2       ; 00504692
    JZ 0x00504701                       ; 00504696
        ;   XREF to: 00504701 (CONDITIONAL_JUMP)  ; LAB_00504701
    MOV dword ptr [EBX + 0x18],0x20     ; 00504698
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0050469f
        ;   Label: LAB_0050469f
    CMP ECX,0x1                         ; 005046a2
    JNZ 0x0050481a                      ; 005046a5
        ;   XREF to: 0050481a (CONDITIONAL_JUMP)  ; LAB_0050481a
    MOV EDI,dword ptr [ESI + 0x4]       ; 005046ab
    MOV ESI,dword ptr [ESI + 0x20]      ; 005046ae
    CMP EDI,ECX                         ; 005046b1
    JL 0x005046be                       ; 005046b3
        ;   XREF to: 005046be (CONDITIONAL_JUMP)  ; LAB_005046be
    CMP EDI,0x3                         ; 005046b5
    JLE 0x00504804                      ; 005046b8
        ;   XREF to: 00504804 (CONDITIONAL_JUMP)  ; LAB_00504804
    PUSH 0x1d23558                      ; 005046be | DAT_01d23558
        ;   Label: LAB_005046be
    PUSH ESI                            ; 005046c3
    PUSH EDI                            ; 005046c4
    MOV EBP,0x5dfea5                    ; 005046c5 | = "..\\sound\\mp3.cpp"
    MOV EAX,0x1ea                       ; 005046ca
    PUSH 0x5dfeb6                       ; 005046cf | = "js_bound bad layer/modext (%d/%d)  Fi..."
    MOV dword ptr [0x01d046a0],EBP      ; 005046d4 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 005046da | DAT_01d046a4
    CALL FUN_004e4500                   ; 005046df
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x10                        ; 005046e4
    SHL ESI,0x2                         ; 005046e7
        ;   Label: LAB_005046e7
    SHL EDI,0x4                         ; 005046ea
    LEA EAX,[EDI + ESI*0x1]             ; 005046ed
    MOV EAX,dword ptr [EAX + 0x618490]  ; 005046f0 | s_CMotionController_0061847c+0x14
    MOV dword ptr [EBX + 0x14],EAX      ; 005046f6
    ADD ESP,0x14                        ; 005046f9
    POP EBP                             ; 005046fc
    POP EDI                             ; 005046fd
    POP ESI                             ; 005046fe
    POP EBX                             ; 005046ff
    RET                                 ; 00504700
    MOV EAX,dword ptr [EBX + 0x18]      ; 00504701
        ;   Label: LAB_00504701
    MOV ECX,dword ptr [EBX]             ; 00504704
    MOV dword ptr [ESP + 0xc],EAX       ; 00504706
    MOV EAX,dword ptr [ECX + 0xc]       ; 0050470a
    MOV EDI,dword ptr [ECX]             ; 0050470d
    MOV dword ptr [ESP],EAX             ; 0050470f
    LEA EAX,[EDI*0x4 + 0x0]             ; 00504712
    SUB EAX,EDI                         ; 00504719
    SHL EAX,0x2                         ; 0050471b
    MOV EDX,EAX                         ; 0050471e
    SHL EAX,0x4                         ; 00504720
    MOV EBP,dword ptr [ECX + 0x4]       ; 00504723
    SUB EAX,EDX                         ; 00504726
    DEC EBP                             ; 00504728
    MOV dword ptr [ESP + 0x4],EAX       ; 00504729
    LEA EAX,[EBP*0x4 + 0x0]             ; 0050472d
    MOV EDX,EAX                         ; 00504734
    SHL EAX,0x4                         ; 00504736
    MOV EBP,dword ptr [ESP + 0x4]       ; 00504739
    SUB EAX,EDX                         ; 0050473d
    MOV EDX,dword ptr [ESP]             ; 0050473f
    ADD EAX,EBP                         ; 00504742
    MOV EDX,dword ptr [EAX + EDX*0x4 + 0x618ec8] ; 00504744 | DAT_00618ec8
    MOV EBP,dword ptr [EBX + 0x10]      ; 0050474b
    MOV EAX,EDX                         ; 0050474e
    SAR EDX,0x1f                        ; 00504750
    IDIV EBP                            ; 00504753
    MOV EDX,EAX                         ; 00504755
    MOV EAX,dword ptr [ECX + 0x10]      ; 00504757
    MOV ECX,EDI                         ; 0050475a
    SHL ECX,0x5                         ; 0050475c
    MOV dword ptr [ESP + 0x8],EBX       ; 0050475f
    FLD double ptr [ECX + EAX*0x8 + 0x618e88] ; 00504763 | DAT_00618e88
    CALL FUN_005b7ff0                   ; 0050476a
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x10]        ; 0050476f
    CMP EDI,0x1                         ; 00504773
    JNZ 0x005047fd                      ; 00504776
        ;   XREF to: 005047fd (CONDITIONAL_JUMP)  ; LAB_005047fd
    CMP dword ptr [ESP + 0x10],0x30     ; 0050477c
    JNZ 0x005047c6                      ; 00504781
        ;   XREF to: 005047c6 (CONDITIONAL_JUMP)  ; LAB_005047c6
    CMP EDX,0x38                        ; 00504783
    JL 0x005047c6                       ; 00504786
        ;   XREF to: 005047c6 (CONDITIONAL_JUMP)  ; LAB_005047c6
    XOR EAX,EAX                         ; 00504788
        ;   Label: LAB_00504788
    MOV EDX,dword ptr [ESP + 0x8]       ; 0050478a
        ;   Label: LAB_0050478a
    CMP EAX,dword ptr [EDX + 0xc]       ; 0050478e
    JZ 0x005047ba                       ; 00504791
        ;   XREF to: 005047ba (CONDITIONAL_JUMP)  ; LAB_005047ba
    PUSH 0x1d23558                      ; 00504793 | DAT_01d23558
    MOV EAX,0x5dfe5b                    ; 00504798 | = "..\\sound\\mp3.cpp"
    MOV EDX,0x1d8                       ; 0050479d
    PUSH 0x5dfe6c                       ; 005047a2 | = "MPEG Layer 2 - pick_table - can't loa..."
    MOV [0x01d046a0],EAX                ; 005047a7 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 005047ac | DAT_01d046a4
    CALL FUN_004e4500                   ; 005047b2
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x8                         ; 005047b7
    MOV EAX,dword ptr [ESP + 0xc]       ; 005047ba
        ;   Label: LAB_005047ba
    MOV dword ptr [EBX + 0x18],EAX      ; 005047be
    JMP 0x0050469f                      ; 005047c1
        ;   XREF to: 0050469f (UNCONDITIONAL_JUMP)  ; LAB_0050469f
    CMP EDX,0x38                        ; 005047c6
        ;   Label: LAB_005047c6
    JL 0x005047d0                       ; 005047c9
        ;   XREF to: 005047d0 (CONDITIONAL_JUMP)  ; LAB_005047d0
    CMP EDX,0x50                        ; 005047cb
    JLE 0x00504788                      ; 005047ce
        ;   XREF to: 00504788 (CONDITIONAL_JUMP)  ; LAB_00504788
    CMP dword ptr [ESP + 0x10],0x30     ; 005047d0
        ;   Label: LAB_005047d0
    JZ 0x005047e3                       ; 005047d5
        ;   XREF to: 005047e3 (CONDITIONAL_JUMP)  ; LAB_005047e3
    CMP EDX,0x60                        ; 005047d7
    JL 0x005047e3                       ; 005047da
        ;   XREF to: 005047e3 (CONDITIONAL_JUMP)  ; LAB_005047e3
    MOV EAX,0x1                         ; 005047dc
    JMP 0x0050478a                      ; 005047e1
        ;   XREF to: 0050478a (UNCONDITIONAL_JUMP)  ; LAB_0050478a
    CMP dword ptr [ESP + 0x10],0x20     ; 005047e3
        ;   Label: LAB_005047e3
    JZ 0x005047f6                       ; 005047e8
        ;   XREF to: 005047f6 (CONDITIONAL_JUMP)  ; LAB_005047f6
    CMP EDX,0x30                        ; 005047ea
    JG 0x005047f6                       ; 005047ed
        ;   XREF to: 005047f6 (CONDITIONAL_JUMP)  ; LAB_005047f6
    MOV EAX,0x2                         ; 005047ef
    JMP 0x0050478a                      ; 005047f4
        ;   XREF to: 0050478a (UNCONDITIONAL_JUMP)  ; LAB_0050478a
    MOV EAX,0x3                         ; 005047f6
        ;   Label: LAB_005047f6
    JMP 0x0050478a                      ; 005047fb
        ;   XREF to: 0050478a (UNCONDITIONAL_JUMP)  ; LAB_0050478a
    MOV EAX,0x4                         ; 005047fd
        ;   Label: LAB_005047fd
    JMP 0x0050478a                      ; 00504802
        ;   XREF to: 0050478a (UNCONDITIONAL_JUMP)  ; LAB_0050478a
    TEST ESI,ESI                        ; 00504804
        ;   Label: LAB_00504804
    JL 0x005046be                       ; 00504806
        ;   XREF to: 005046be (CONDITIONAL_JUMP)  ; LAB_005046be
    CMP ESI,0x3                         ; 0050480c
    JG 0x005046be                       ; 0050480f
        ;   XREF to: 005046be (CONDITIONAL_JUMP)  ; LAB_005046be
    JMP 0x005046e7                      ; 00504815
        ;   XREF to: 005046e7 (UNCONDITIONAL_JUMP)  ; LAB_005046e7
    MOV EAX,dword ptr [EBX + 0x18]      ; 0050481a
        ;   Label: LAB_0050481a
    MOV dword ptr [EBX + 0x14],EAX      ; 0050481d
    ADD ESP,0x14                        ; 00504820
    POP EBP                             ; 00504823
    POP EDI                             ; 00504824
    POP ESI                             ; 00504825
    POP EBX                             ; 00504826
    RET                                 ; 00504827

