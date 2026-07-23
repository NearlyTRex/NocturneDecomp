; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_004cb5a0(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004cb010 at 004cb2b5
;
; Referenced Globals:
;   TerminatedCString s_core_manpuz_cpp_00588032
;   TerminatedCString s_CMansionPuzzleCircle_shi_00588045
;   TerminatedCString s_manpuz_doorslide_wav_00588075
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   core_manpuz.cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_004cb8f0
;   core_manpuz.cpp_CMansionPuzzleCircle_updatePanelTransform_FUN_004ca640
;   FUN_004c8440
;   sound_sndmain.cpp_popSfxOptions_FUN_005263c0
;   sound_sndmain.cpp_pushSfxOptions_FUN_00526340
;   sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_00525fc0
;   sound_sndmain.cpp_startSfx_FUN_005265a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cb5a0
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_004cb5a0
    PUSH ESI                            ; 004cb5a1
    PUSH EDI                            ; 004cb5a2
    PUSH EBP                            ; 004cb5a3
    SUB ESP,0x4                         ; 004cb5a4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004cb5a7
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004cb5ab
    PUSH EBX                            ; 004cb5af
    PUSH EBP                            ; 004cb5b0
    CALL core_manpuz.cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_004cb8f0 ; 004cb5b1
        ;   XREF to: 004cb8f0 (UNCONDITIONAL_CALL)  ; undefined core_manpuz.cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_004cb8f0()
    ADD ESP,0x8                         ; 004cb5b6
    MOV EDX,EAX                         ; 004cb5b9
    MOV dword ptr [ESP],EAX             ; 004cb5bb
    LEA EAX,[EBX*0x4 + 0x0]             ; 004cb5be
    SUB EAX,EBX                         ; 004cb5c5
    SHL EAX,0x3                         ; 004cb5c7
    ADD EAX,EBX                         ; 004cb5ca
    LEA ESI,[EBP + 0x5e8]               ; 004cb5cc
    SHL EAX,0x2                         ; 004cb5d2
    LEA EBX,[ESI + EAX*0x1]             ; 004cb5d5
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cb5d8
    SUB EAX,EDX                         ; 004cb5df
    SHL EAX,0x3                         ; 004cb5e1
    ADD EAX,EDX                         ; 004cb5e4
    SHL EAX,0x2                         ; 004cb5e6
    MOV EDX,dword ptr [EBX]             ; 004cb5e9
    ADD ESI,EAX                         ; 004cb5eb
    TEST EDX,EDX                        ; 004cb5ed
    JZ 0x004cb5fa                       ; 004cb5ef
        ;   XREF to: 004cb5fa (CONDITIONAL_JUMP)  ; LAB_004cb5fa
    CMP dword ptr [ESI],0x0             ; 004cb5f1
    JZ 0x004cb719                       ; 004cb5f4
        ;   XREF to: 004cb719 (CONDITIONAL_JUMP)  ; LAB_004cb719
    MOV EDX,0x588032                    ; 004cb5fa | = "..\\core\\manpuz.cpp"
        ;   Label: LAB_004cb5fa
    MOV ECX,0x554                       ; 004cb5ff
    PUSH 0x588045                       ; 004cb604 | = "CMansionPuzzleCircle::shiftPanelLeft ..."
    MOV dword ptr [0x01cc4800],EDX      ; 004cb609 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004cb60f | DAT_01cc4804
    CALL FUN_004c8440                   ; 004cb615
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004cb61a
    MOV EAX,ESI                         ; 004cb61d
        ;   Label: LAB_004cb61d
    MOV ECX,dword ptr [EBX]             ; 004cb61f
    MOV EDX,EBX                         ; 004cb621
    MOV dword ptr [ESI],ECX             ; 004cb623
    LEA EDI,[EBX + 0xc]                 ; 004cb625
    FLD float ptr [EBX + 0x4]           ; 004cb628
    LEA ECX,[ESI + 0xc]                 ; 004cb62b
    FSTP float ptr [ESI + 0x4]          ; 004cb62e
    FLD float ptr [EBX + 0x8]           ; 004cb631
    FSTP float ptr [ESI + 0x8]          ; 004cb634
    CMP ECX,EDI                         ; 004cb637
    JZ 0x004cb64b                       ; 004cb639
        ;   XREF to: 004cb64b (CONDITIONAL_JUMP)  ; LAB_004cb64b
    FLD float ptr [EDI]                 ; 004cb63b
    FSTP float ptr [ECX]                ; 004cb63d
    FLD float ptr [EDI + 0x4]           ; 004cb63f
    FSTP float ptr [ECX + 0x4]          ; 004cb642
    FLD float ptr [EDI + 0x8]           ; 004cb645
    FSTP float ptr [ECX + 0x8]          ; 004cb648
    LEA EDI,[EDX + 0x18]                ; 004cb64b
        ;   Label: LAB_004cb64b
    LEA ECX,[EAX + 0x18]                ; 004cb64e
    CMP ECX,EDI                         ; 004cb651
    JZ 0x004cb665                       ; 004cb653
        ;   XREF to: 004cb665 (CONDITIONAL_JUMP)  ; LAB_004cb665
    FLD float ptr [EDI]                 ; 004cb655
    FSTP float ptr [ECX]                ; 004cb657
    FLD float ptr [EDI + 0x4]           ; 004cb659
    FSTP float ptr [ECX + 0x4]          ; 004cb65c
    FLD float ptr [EDI + 0x8]           ; 004cb65f
    FSTP float ptr [ECX + 0x8]          ; 004cb662
    MOV ECX,dword ptr [EDX + 0x24]      ; 004cb665
        ;   Label: LAB_004cb665
    MOV dword ptr [EAX + 0x24],ECX      ; 004cb668
    MOV ECX,dword ptr [EDX + 0x28]      ; 004cb66b
    MOV dword ptr [EAX + 0x28],ECX      ; 004cb66e
    MOV ECX,dword ptr [EDX + 0x2c]      ; 004cb671
    MOV dword ptr [EAX + 0x2c],ECX      ; 004cb674
    MOV ECX,dword ptr [EDX + 0x30]      ; 004cb677
    MOV dword ptr [EAX + 0x30],ECX      ; 004cb67a
    MOV ECX,dword ptr [EDX + 0x34]      ; 004cb67d
    MOV dword ptr [EAX + 0x34],ECX      ; 004cb680
    MOV ECX,dword ptr [EDX + 0x38]      ; 004cb683
    MOV dword ptr [EAX + 0x38],ECX      ; 004cb686
    MOV ECX,dword ptr [EDX + 0x3c]      ; 004cb689
    MOV dword ptr [EAX + 0x3c],ECX      ; 004cb68c
    MOV ECX,dword ptr [EDX + 0x40]      ; 004cb68f
    MOV dword ptr [EAX + 0x40],ECX      ; 004cb692
    MOV ECX,dword ptr [EDX + 0x44]      ; 004cb695
    MOV dword ptr [EAX + 0x44],ECX      ; 004cb698
    MOV ECX,dword ptr [EDX + 0x48]      ; 004cb69b
    MOV dword ptr [EAX + 0x48],ECX      ; 004cb69e
    MOV ECX,dword ptr [EDX + 0x4c]      ; 004cb6a1
    MOV dword ptr [EAX + 0x4c],ECX      ; 004cb6a4
    MOV ECX,dword ptr [EDX + 0x50]      ; 004cb6a7
    MOV dword ptr [EAX + 0x50],ECX      ; 004cb6aa
    ADD EAX,0x58                        ; 004cb6ad
    MOV ECX,dword ptr [EDX + 0x54]      ; 004cb6b0
    ADD EDX,0x58                        ; 004cb6b3
    MOV dword ptr [EAX + -0x4],ECX      ; 004cb6b6
    CMP EAX,EDX                         ; 004cb6b9
    JZ 0x004cb6cd                       ; 004cb6bb
        ;   XREF to: 004cb6cd (CONDITIONAL_JUMP)  ; LAB_004cb6cd
    MOV ECX,dword ptr [EDX]             ; 004cb6bd
    MOV dword ptr [EAX],ECX             ; 004cb6bf
    MOV ECX,dword ptr [EDX + 0x4]       ; 004cb6c1
    MOV dword ptr [EAX + 0x4],ECX       ; 004cb6c4
    MOV ECX,dword ptr [EDX + 0x8]       ; 004cb6c7
    MOV dword ptr [EAX + 0x8],ECX       ; 004cb6ca
    MOV dword ptr [EBX],0x0             ; 004cb6cd
        ;   Label: LAB_004cb6cd
    MOV EBX,dword ptr [ESP]             ; 004cb6d3
    PUSH EBX                            ; 004cb6d6
    MOV dword ptr [ESI + 0x4],0x3f800000 ; 004cb6d7
    PUSH EBP                            ; 004cb6de
    MOV dword ptr [ESI + 0x8],0xbf800000 ; 004cb6df
    CALL core_manpuz.cpp_CMansionPuzzleCircle_updatePanelTransform_FUN_004ca640 ; 004cb6e6
        ;   XREF to: 004ca640 (UNCONDITIONAL_CALL)  ; undefined core_manpuz.cpp_CMansionPuzzleCircle_updatePanelTransform_FUN_004ca640()
    ADD ESP,0x8                         ; 004cb6eb
    ADD ESI,0x58                        ; 004cb6ee
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00526340 ; 004cb6f1
        ;   XREF to: 00526340 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_pushSfxOptions_FUN_00526340()
    PUSH ESI                            ; 004cb6f6
    CALL sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_00525fc0 ; 004cb6f7
        ;   XREF to: 00525fc0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_00525fc0()
    ADD ESP,0x4                         ; 004cb6fc
    PUSH 0x588075                       ; 004cb6ff | = "manpuz-doorslide.wav"
    CALL sound_sndmain.cpp_startSfx_FUN_005265a0 ; 004cb704
        ;   XREF to: 005265a0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_startSfx_FUN_005265a0()
    ADD ESP,0x4                         ; 004cb709
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005263c0 ; 004cb70c
        ;   XREF to: 005263c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_popSfxOptions_FUN_005263c0()
    ADD ESP,0x4                         ; 004cb711
    POP EBP                             ; 004cb714
    POP EDI                             ; 004cb715
    POP ESI                             ; 004cb716
    POP EBX                             ; 004cb717
    RET                                 ; 004cb718
    TEST dword ptr [EBX + 0x4],0x7fffffff ; 004cb719
        ;   Label: LAB_004cb719
    JNZ 0x004cb5fa                      ; 004cb720
        ;   XREF to: 004cb5fa (CONDITIONAL_JUMP)  ; LAB_004cb5fa
    TEST dword ptr [EBX + 0x8],0x7fffffff ; 004cb726
    JNZ 0x004cb5fa                      ; 004cb72d
        ;   XREF to: 004cb5fa (CONDITIONAL_JUMP)  ; LAB_004cb5fa
    JMP 0x004cb61d                      ; 004cb733
        ;   XREF to: 004cb61d (UNCONDITIONAL_JUMP)  ; LAB_004cb61d

