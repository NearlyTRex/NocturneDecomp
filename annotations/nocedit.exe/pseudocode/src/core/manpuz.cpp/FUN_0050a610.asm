; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_manpuz.cpp_FUN_0050a610()
;
; Local Variables:
; undefined1       Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_manpuz.cpp_FUN_005091d0 at 00509239
;
; Referenced Globals:
;   TerminatedCString s_manpuz_chargegemloop_red_00635775
;   TerminatedCString s_manpuz_chargegemloop_gre_00635792
;   TerminatedCString s_manpuz_chargegemloop_blu_006357b1
;   float FLOAT_006357d1 = 255
;   undefined4 DAT_00660d94
;   undefined4 DAT_00660d98
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_manpuz.cpp_CMansionPuzzleCircle_panelOccupied_FUN_0050b040
;   core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_0050aba0
;   core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_0050ad40
;   core_manpuz.cpp_FUN_0050a420
;   core_manpuz.cpp_FUN_0050a4f0
;   core_manpuz.cpp_FUN_0050aee0
;   core_manpuz.cpp_FUN_0050aef0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050a610
        ;   Label: core_manpuz.cpp_FUN_0050a610
    PUSH ESI                            ; 0050a611
    PUSH EDI                            ; 0050a612
    PUSH EBP                            ; 0050a613
    SUB ESP,0x2c                        ; 0050a614
    MOV ESI,dword ptr [ESP + 0x40]      ; 0050a617
    MOV EDI,dword ptr [ESP + 0x44]      ; 0050a61b
    FLD float ptr [ESP + 0x48]          ; 0050a61f
    FMUL float ptr [0x006357d1]         ; 0050a623 | FLOAT_006357d1
    FST float ptr [ESP + 0x14]          ; 0050a629
    FDIV float ptr [0x00660d94]         ; 0050a62d | DAT_00660d94
    LEA EAX,[EDI*0x4 + 0x0]             ; 0050a633
    SUB EAX,EDI                         ; 0050a63a
    SHL EAX,0x3                         ; 0050a63c
    SUB EAX,EDI                         ; 0050a63f
    LEA EBX,[ESI + 0xaa0]               ; 0050a641
    SHL EAX,0x3                         ; 0050a647
    ADD EBX,EAX                         ; 0050a64a
    LEA EAX,[EBX + 0x24]                ; 0050a64c
    PUSH EAX                            ; 0050a64f
    LEA EAX,[ESP + 0x4]                 ; 0050a650
    PUSH EAX                            ; 0050a654
    PUSH ESI                            ; 0050a655
    FSTP float ptr [ESP + 0x34]         ; 0050a656
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0050a65a
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0050a65f
    MOV EAX,ESP                         ; 0050a662
    PUSH EAX                            ; 0050a664
    PUSH 0x635775                       ; 0050a665 | = "manpuz-chargegemloop-red.wav"
    LEA EAX,[EBX + 0xac]                ; 0050a66a
    PUSH EAX                            ; 0050a670
    PUSH dword ptr [ESP + 0x34]         ; 0050a671
    LEA EAX,[EBX + 0xc]                 ; 0050a675
    PUSH dword ptr [EBX + 0x18]         ; 0050a678
    PUSH EAX                            ; 0050a67b
    CALL core_manpuz.cpp_FUN_0050a4f0   ; 0050a67c
        ;   XREF to: 0050a4f0 (UNCONDITIONAL_CALL)  ; undefined core_manpuz.cpp_FUN_0050a4f0()
    ADD ESP,0x18                        ; 0050a681
    MOV EBP,EAX                         ; 0050a684
    MOV EAX,ESP                         ; 0050a686
    PUSH EAX                            ; 0050a688
    PUSH 0x635792                       ; 0050a689 | = "manpuz-chargegemloop-green.wav"
    LEA EAX,[EBX + 0xb0]                ; 0050a68e
    PUSH EAX                            ; 0050a694
    PUSH dword ptr [ESP + 0x34]         ; 0050a695
    LEA EAX,[EBX + 0x10]                ; 0050a699
    PUSH dword ptr [EBX + 0x1c]         ; 0050a69c
    PUSH EAX                            ; 0050a69f
    AND EBP,0x1                         ; 0050a6a0
    CALL core_manpuz.cpp_FUN_0050a4f0   ; 0050a6a3
        ;   XREF to: 0050a4f0 (UNCONDITIONAL_CALL)  ; undefined core_manpuz.cpp_FUN_0050a4f0()
    ADD ESP,0x18                        ; 0050a6a8
    AND EBP,EAX                         ; 0050a6ab
    MOV EAX,ESP                         ; 0050a6ad
    PUSH EAX                            ; 0050a6af
    PUSH 0x6357b1                       ; 0050a6b0 | = "manpuz-chargegemloop-blue.wav"
    LEA EAX,[EBX + 0xb4]                ; 0050a6b5
    PUSH EAX                            ; 0050a6bb
    PUSH dword ptr [ESP + 0x34]         ; 0050a6bc
    LEA EAX,[EBX + 0x14]                ; 0050a6c0
    PUSH dword ptr [EBX + 0x20]         ; 0050a6c3
    PUSH EAX                            ; 0050a6c6
    CALL core_manpuz.cpp_FUN_0050a4f0   ; 0050a6c7
        ;   XREF to: 0050a4f0 (UNCONDITIONAL_CALL)  ; undefined core_manpuz.cpp_FUN_0050a4f0()
    ADD ESP,0x18                        ; 0050a6cc
    AND EBP,EAX                         ; 0050a6cf
    LEA EAX,[ESP + 0x18]                ; 0050a6d1
    PUSH EAX                            ; 0050a6d5
    LEA EAX,[ESP + 0x14]                ; 0050a6d6
    MOV dword ptr [EBX + 0x20],0x0      ; 0050a6da
    PUSH EAX                            ; 0050a6e1
    LEA EAX,[ESP + 0x14]                ; 0050a6e2
    FLD float ptr [EBX + 0x20]          ; 0050a6e6
    PUSH EAX                            ; 0050a6e9
    FSTP float ptr [EBX + 0x1c]         ; 0050a6ea
    PUSH EDI                            ; 0050a6ed
    FLD float ptr [EBX + 0x1c]          ; 0050a6ee
    PUSH ESI                            ; 0050a6f1
    FSTP float ptr [EBX + 0x18]         ; 0050a6f2
    CALL core_manpuz.cpp_FUN_0050a420   ; 0050a6f5
        ;   XREF to: 0050a420 (UNCONDITIONAL_CALL)  ; undefined core_manpuz.cpp_FUN_0050a420()
    ADD ESP,0x14                        ; 0050a6fa
    FLD float ptr [ESP + 0x14]          ; 0050a6fd
    FDIV float ptr [0x00660d98]         ; 0050a701 | DAT_00660d98
    FLD float ptr [ESP + 0xc]           ; 0050a707
    FSUB float ptr [EBX]                ; 0050a70b
    MOV EDX,0x1                         ; 0050a70d
    FSTP float ptr [ESP + 0x1c]         ; 0050a712
    FST float ptr [ESP + 0x28]          ; 0050a716
    FCHS                                ; 0050a71a
    FCOMP float ptr [ESP + 0x1c]        ; 0050a71c
    FNSTSW AX                           ; 0050a720
    SAHF                                ; 0050a722
    JA 0x0050a7eb                       ; 0050a723
        ;   XREF to: 0050a7eb (CONDITIONAL_JUMP)  ; LAB_0050a7eb
    FLD float ptr [ESP + 0x1c]          ; 0050a729
    FCOMP float ptr [ESP + 0x28]        ; 0050a72d
    FNSTSW AX                           ; 0050a731
    SAHF                                ; 0050a733
    JBE 0x0050a7f6                      ; 0050a734
        ;   XREF to: 0050a7f6 (CONDITIONAL_JUMP)  ; LAB_0050a7f6
    FLD float ptr [EBX]                 ; 0050a73a
    FADD float ptr [ESP + 0x28]         ; 0050a73c
    FSTP float ptr [EBX]                ; 0050a740
        ;   Label: LAB_0050a740
    XOR EAX,EAX                         ; 0050a742
    FLD float ptr [ESP + 0x10]          ; 0050a744
        ;   Label: LAB_0050a744
    FLD float ptr [ESP + 0x28]          ; 0050a748
    LEA ECX,[EBX + 0x4]                 ; 0050a74c
    FCHS                                ; 0050a74f
    FXCH                                ; 0050a751
    FSUB float ptr [ECX]                ; 0050a753
    AND EDX,EAX                         ; 0050a755
    FSTP float ptr [ESP + 0x24]         ; 0050a757
    FCOMP float ptr [ESP + 0x24]        ; 0050a75b
    FNSTSW AX                           ; 0050a75f
    SAHF                                ; 0050a761
    JBE 0x0050a803                      ; 0050a762
        ;   XREF to: 0050a803 (CONDITIONAL_JUMP)  ; LAB_0050a803
    FLD float ptr [ECX]                 ; 0050a768
    FSUB float ptr [ESP + 0x28]         ; 0050a76a
    FSTP float ptr [ECX]                ; 0050a76e
        ;   Label: LAB_0050a76e
    XOR EAX,EAX                         ; 0050a770
    FLD float ptr [ESP + 0x18]          ; 0050a772
        ;   Label: LAB_0050a772
    FLD float ptr [ESP + 0x28]          ; 0050a776
    LEA ECX,[EBX + 0x8]                 ; 0050a77a
    FCHS                                ; 0050a77d
    FXCH                                ; 0050a77f
    FSUB float ptr [ECX]                ; 0050a781
    AND EDX,EAX                         ; 0050a783
    FSTP float ptr [ESP + 0x20]         ; 0050a785
    FCOMP float ptr [ESP + 0x20]        ; 0050a789
    FNSTSW AX                           ; 0050a78d
    SAHF                                ; 0050a78f
    JBE 0x0050a82b                      ; 0050a790
        ;   XREF to: 0050a82b (CONDITIONAL_JUMP)  ; LAB_0050a82b
    FLD float ptr [ECX]                 ; 0050a796
    FSUB float ptr [ESP + 0x28]         ; 0050a798
    FSTP float ptr [ECX]                ; 0050a79c
        ;   Label: LAB_0050a79c
    XOR EAX,EAX                         ; 0050a79e
    AND EDX,EAX                         ; 0050a7a0
        ;   Label: LAB_0050a7a0
    JZ 0x0050a7e3                       ; 0050a7a2
        ;   XREF to: 0050a7e3 (CONDITIONAL_JUMP)  ; LAB_0050a7e3
    TEST EBP,EBP                        ; 0050a7a4
    JZ 0x0050a7e3                       ; 0050a7a6
        ;   XREF to: 0050a7e3 (CONDITIONAL_JUMP)  ; LAB_0050a7e3
    LEA EAX,[EDI*0x4 + 0x0]             ; 0050a7a8
    SUB EAX,EDI                         ; 0050a7af
    SHL EAX,0x3                         ; 0050a7b1
    ADD EAX,EDI                         ; 0050a7b4
    LEA EDX,[ESI + 0x5f0]               ; 0050a7b6
    SHL EAX,0x2                         ; 0050a7bc
    ADD EDX,EAX                         ; 0050a7bf
    CMP dword ptr [EDX],0x0             ; 0050a7c1
    JZ 0x0050a7e3                       ; 0050a7c4
        ;   XREF to: 0050a7e3 (CONDITIONAL_JUMP)  ; LAB_0050a7e3
    TEST dword ptr [EDX + 0x8],0x7fffffff ; 0050a7c6
    JNZ 0x0050a7e3                      ; 0050a7cd
        ;   XREF to: 0050a7e3 (CONDITIONAL_JUMP)  ; LAB_0050a7e3
    TEST dword ptr [EDX + 0x4],0x7fffffff ; 0050a7cf
    JNZ 0x0050a7e3                      ; 0050a7d6
        ;   XREF to: 0050a7e3 (CONDITIONAL_JUMP)  ; LAB_0050a7e3
    FILD dword ptr [EDX + 0x4c]         ; 0050a7d8
    FCOMP float ptr [EBX + 0xc]         ; 0050a7db
    FNSTSW AX                           ; 0050a7de
    SAHF                                ; 0050a7e0
    JZ 0x0050a853                       ; 0050a7e1
        ;   XREF to: 0050a853 (CONDITIONAL_JUMP)  ; LAB_0050a853
    ADD ESP,0x2c                        ; 0050a7e3
        ;   Label: LAB_0050a7e3
    POP EBP                             ; 0050a7e6
    POP EDI                             ; 0050a7e7
    POP ESI                             ; 0050a7e8
    POP EBX                             ; 0050a7e9
    RET                                 ; 0050a7ea
    FLD float ptr [EBX]                 ; 0050a7eb
        ;   Label: LAB_0050a7eb
    FSUB float ptr [ESP + 0x28]         ; 0050a7ed
    JMP 0x0050a740                      ; 0050a7f1
        ;   XREF to: 0050a740 (UNCONDITIONAL_JUMP)  ; LAB_0050a740
    MOV EAX,dword ptr [ESP + 0xc]       ; 0050a7f6
        ;   Label: LAB_0050a7f6
    MOV dword ptr [EBX],EAX             ; 0050a7fa
    MOV EAX,EDX                         ; 0050a7fc
    JMP 0x0050a744                      ; 0050a7fe
        ;   XREF to: 0050a744 (UNCONDITIONAL_JUMP)  ; LAB_0050a744
    FLD float ptr [ESP + 0x24]          ; 0050a803
        ;   Label: LAB_0050a803
    FCOMP float ptr [ESP + 0x28]        ; 0050a807
    FNSTSW AX                           ; 0050a80b
    SAHF                                ; 0050a80d
    JBE 0x0050a81b                      ; 0050a80e
        ;   XREF to: 0050a81b (CONDITIONAL_JUMP)  ; LAB_0050a81b
    FLD float ptr [ECX]                 ; 0050a810
    FADD float ptr [ESP + 0x28]         ; 0050a812
    JMP 0x0050a76e                      ; 0050a816
        ;   XREF to: 0050a76e (UNCONDITIONAL_JUMP)  ; LAB_0050a76e
    MOV EAX,dword ptr [ESP + 0x10]      ; 0050a81b
        ;   Label: LAB_0050a81b
    MOV dword ptr [ECX],EAX             ; 0050a81f
    MOV EAX,0x1                         ; 0050a821
    JMP 0x0050a772                      ; 0050a826
        ;   XREF to: 0050a772 (UNCONDITIONAL_JUMP)  ; LAB_0050a772
    FLD float ptr [ESP + 0x20]          ; 0050a82b
        ;   Label: LAB_0050a82b
    FCOMP float ptr [ESP + 0x28]        ; 0050a82f
    FNSTSW AX                           ; 0050a833
    SAHF                                ; 0050a835
    JBE 0x0050a843                      ; 0050a836
        ;   XREF to: 0050a843 (CONDITIONAL_JUMP)  ; LAB_0050a843
    FLD float ptr [ECX]                 ; 0050a838
    FADD float ptr [ESP + 0x28]         ; 0050a83a
    JMP 0x0050a79c                      ; 0050a83e
        ;   XREF to: 0050a79c (UNCONDITIONAL_JUMP)  ; LAB_0050a79c
    MOV EAX,dword ptr [ESP + 0x18]      ; 0050a843
        ;   Label: LAB_0050a843
    MOV dword ptr [ECX],EAX             ; 0050a847
    MOV EAX,0x1                         ; 0050a849
    JMP 0x0050a7a0                      ; 0050a84e
        ;   XREF to: 0050a7a0 (UNCONDITIONAL_JUMP)  ; LAB_0050a7a0
    FILD dword ptr [EDX + 0x50]         ; 0050a853
        ;   Label: LAB_0050a853
    FCOMP float ptr [EBX + 0x10]        ; 0050a856
    FNSTSW AX                           ; 0050a859
    SAHF                                ; 0050a85b
    JNZ 0x0050a7e3                      ; 0050a85c
        ;   XREF to: 0050a7e3 (CONDITIONAL_JUMP)  ; LAB_0050a7e3
    FILD dword ptr [EDX + 0x54]         ; 0050a85e
    FCOMP float ptr [EBX + 0x14]        ; 0050a861
    FNSTSW AX                           ; 0050a864
    SAHF                                ; 0050a866
    JNZ 0x0050a7e3                      ; 0050a867
        ;   XREF to: 0050a7e3 (CONDITIONAL_JUMP)  ; LAB_0050a7e3
    PUSH EDI                            ; 0050a86d
    PUSH ESI                            ; 0050a86e
    CALL core_manpuz.cpp_FUN_0050aef0   ; 0050a86f
        ;   XREF to: 0050aef0 (UNCONDITIONAL_CALL)  ; undefined core_manpuz.cpp_FUN_0050aef0()
    ADD ESP,0x8                         ; 0050a874
    PUSH EAX                            ; 0050a877
    PUSH ESI                            ; 0050a878
    CALL core_manpuz.cpp_CMansionPuzzleCircle_panelOccupied_FUN_0050b040 ; 0050a879
        ;   XREF to: 0050b040 (UNCONDITIONAL_CALL)  ; undefined core_manpuz.cpp_CMansionPuzzleCircle_panelOccupied_FUN_0050b040()
    ADD ESP,0x8                         ; 0050a87e
    TEST EAX,EAX                        ; 0050a881
    JZ 0x0050a8b3                       ; 0050a883
        ;   XREF to: 0050a8b3 (CONDITIONAL_JUMP)  ; LAB_0050a8b3
    PUSH EDI                            ; 0050a885
    PUSH ESI                            ; 0050a886
    CALL core_manpuz.cpp_FUN_0050aee0   ; 0050a887
        ;   XREF to: 0050aee0 (UNCONDITIONAL_CALL)  ; undefined core_manpuz.cpp_FUN_0050aee0()
    ADD ESP,0x8                         ; 0050a88c
    PUSH EAX                            ; 0050a88f
    PUSH ESI                            ; 0050a890
    CALL core_manpuz.cpp_CMansionPuzzleCircle_panelOccupied_FUN_0050b040 ; 0050a891
        ;   XREF to: 0050b040 (UNCONDITIONAL_CALL)  ; undefined core_manpuz.cpp_CMansionPuzzleCircle_panelOccupied_FUN_0050b040()
    ADD ESP,0x8                         ; 0050a896
    TEST EAX,EAX                        ; 0050a899
    JNZ 0x0050a7e3                      ; 0050a89b
        ;   XREF to: 0050a7e3 (CONDITIONAL_JUMP)  ; LAB_0050a7e3
    PUSH EDI                            ; 0050a8a1
    PUSH ESI                            ; 0050a8a2
    CALL core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_0050ad40 ; 0050a8a3
        ;   XREF to: 0050ad40 (UNCONDITIONAL_CALL)  ; undefined core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_0050ad40()
    ADD ESP,0x8                         ; 0050a8a8
    ADD ESP,0x2c                        ; 0050a8ab
    POP EBP                             ; 0050a8ae
    POP EDI                             ; 0050a8af
    POP ESI                             ; 0050a8b0
    POP EBX                             ; 0050a8b1
    RET                                 ; 0050a8b2
    PUSH EDI                            ; 0050a8b3
        ;   Label: LAB_0050a8b3
    PUSH ESI                            ; 0050a8b4
    CALL core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_0050aba0 ; 0050a8b5
        ;   XREF to: 0050aba0 (UNCONDITIONAL_CALL)  ; undefined core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_0050aba0()
    ADD ESP,0x8                         ; 0050a8ba
    ADD ESP,0x2c                        ; 0050a8bd
    POP EBP                             ; 0050a8c0
    POP EDI                             ; 0050a8c1
    POP ESI                             ; 0050a8c2
    POP EBX                             ; 0050a8c3
    RET                                 ; 0050a8c4

