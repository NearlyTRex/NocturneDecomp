; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_0050aba0(CMansionPuzzleCircle *this_ptr)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_manpuz.cpp_CMansionPuzzleCircle_FUN_0050a610 at 0050a8b5
;
; Referenced Globals:
;   TerminatedCString s_core_manpuz_cpp_006357dd
;   TerminatedCString s_CMansionPuzzleCircle_shi_006357f0
;   TerminatedCString s_manpuz_doorslide_wav_00635820
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_manpuz.cpp_CMansionPuzzleCircle_FUN_00509b20
;   core_manpuz.cpp_CMansionPuzzleCircle_FUN_0050aef0
;   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
;   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
;   sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_005a8940
;   sound_sndmain.cpp_startSfx_FUN_005a8e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050aba0
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_0050aba0
    PUSH ESI                            ; 0050aba1
    PUSH EDI                            ; 0050aba2
    PUSH EBP                            ; 0050aba3
    SUB ESP,0x4                         ; 0050aba4
    MOV EBP,dword ptr [ESP + 0x18]      ; 0050aba7
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0050abab
    PUSH EBX                            ; 0050abaf
    PUSH EBP                            ; 0050abb0
    CALL core_manpuz.cpp_CMansionPuzzleCircle_FUN_0050aef0 ; 0050abb1
        ;   XREF to: 0050aef0 (UNCONDITIONAL_CALL)  ; int core_manpuz.cpp_CMansionPuzzleCircle_FUN_0050aef0(CMansionPuzzleCircle * this_ptr)
    ADD ESP,0x8                         ; 0050abb6
    MOV EDX,EAX                         ; 0050abb9
    MOV dword ptr [ESP],EAX             ; 0050abbb
    LEA EAX,[EBX*0x4 + 0x0]             ; 0050abbe
    SUB EAX,EBX                         ; 0050abc5
    SHL EAX,0x3                         ; 0050abc7
    ADD EAX,EBX                         ; 0050abca
    LEA ESI,[EBP + 0x5f0]               ; 0050abcc
    SHL EAX,0x2                         ; 0050abd2
    LEA EBX,[ESI + EAX*0x1]             ; 0050abd5
    LEA EAX,[EDX*0x4 + 0x0]             ; 0050abd8
    SUB EAX,EDX                         ; 0050abdf
    SHL EAX,0x3                         ; 0050abe1
    ADD EAX,EDX                         ; 0050abe4
    SHL EAX,0x2                         ; 0050abe6
    MOV EDX,dword ptr [EBX]             ; 0050abe9
    ADD ESI,EAX                         ; 0050abeb
    TEST EDX,EDX                        ; 0050abed
    JZ 0x0050abfa                       ; 0050abef
        ;   XREF to: 0050abfa (CONDITIONAL_JUMP)  ; LAB_0050abfa
    CMP dword ptr [ESI],0x0             ; 0050abf1
    JZ 0x0050ad19                       ; 0050abf4
        ;   XREF to: 0050ad19 (CONDITIONAL_JUMP)  ; LAB_0050ad19
    MOV EDX,0x6357dd                    ; 0050abfa | = "..\\core\\manpuz.cpp"
        ;   Label: LAB_0050abfa
    MOV ECX,0x554                       ; 0050abff
    PUSH 0x6357f0                       ; 0050ac04 | = "CMansionPuzzleCircle::shiftPanelLeft ..."
    MOV dword ptr [0x02f0ca48],EDX      ; 0050ac09 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0050ac0f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0050ac15
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0050ac1a
    MOV EAX,ESI                         ; 0050ac1d
        ;   Label: LAB_0050ac1d
    MOV ECX,dword ptr [EBX]             ; 0050ac1f
    MOV EDX,EBX                         ; 0050ac21
    MOV dword ptr [ESI],ECX             ; 0050ac23
    LEA EDI,[EBX + 0xc]                 ; 0050ac25
    FLD float ptr [EBX + 0x4]           ; 0050ac28
    LEA ECX,[ESI + 0xc]                 ; 0050ac2b
    FSTP float ptr [ESI + 0x4]          ; 0050ac2e
    FLD float ptr [EBX + 0x8]           ; 0050ac31
    FSTP float ptr [ESI + 0x8]          ; 0050ac34
    CMP ECX,EDI                         ; 0050ac37
    JZ 0x0050ac4b                       ; 0050ac39
        ;   XREF to: 0050ac4b (CONDITIONAL_JUMP)  ; LAB_0050ac4b
    FLD float ptr [EDI]                 ; 0050ac3b
    FSTP float ptr [ECX]                ; 0050ac3d
    FLD float ptr [EDI + 0x4]           ; 0050ac3f
    FSTP float ptr [ECX + 0x4]          ; 0050ac42
    FLD float ptr [EDI + 0x8]           ; 0050ac45
    FSTP float ptr [ECX + 0x8]          ; 0050ac48
    LEA EDI,[EDX + 0x18]                ; 0050ac4b
        ;   Label: LAB_0050ac4b
    LEA ECX,[EAX + 0x18]                ; 0050ac4e
    CMP ECX,EDI                         ; 0050ac51
    JZ 0x0050ac65                       ; 0050ac53
        ;   XREF to: 0050ac65 (CONDITIONAL_JUMP)  ; LAB_0050ac65
    FLD float ptr [EDI]                 ; 0050ac55
    FSTP float ptr [ECX]                ; 0050ac57
    FLD float ptr [EDI + 0x4]           ; 0050ac59
    FSTP float ptr [ECX + 0x4]          ; 0050ac5c
    FLD float ptr [EDI + 0x8]           ; 0050ac5f
    FSTP float ptr [ECX + 0x8]          ; 0050ac62
    MOV ECX,dword ptr [EDX + 0x24]      ; 0050ac65
        ;   Label: LAB_0050ac65
    MOV dword ptr [EAX + 0x24],ECX      ; 0050ac68
    MOV ECX,dword ptr [EDX + 0x28]      ; 0050ac6b
    MOV dword ptr [EAX + 0x28],ECX      ; 0050ac6e
    MOV ECX,dword ptr [EDX + 0x2c]      ; 0050ac71
    MOV dword ptr [EAX + 0x2c],ECX      ; 0050ac74
    MOV ECX,dword ptr [EDX + 0x30]      ; 0050ac77
    MOV dword ptr [EAX + 0x30],ECX      ; 0050ac7a
    MOV ECX,dword ptr [EDX + 0x34]      ; 0050ac7d
    MOV dword ptr [EAX + 0x34],ECX      ; 0050ac80
    MOV ECX,dword ptr [EDX + 0x38]      ; 0050ac83
    MOV dword ptr [EAX + 0x38],ECX      ; 0050ac86
    MOV ECX,dword ptr [EDX + 0x3c]      ; 0050ac89
    MOV dword ptr [EAX + 0x3c],ECX      ; 0050ac8c
    MOV ECX,dword ptr [EDX + 0x40]      ; 0050ac8f
    MOV dword ptr [EAX + 0x40],ECX      ; 0050ac92
    MOV ECX,dword ptr [EDX + 0x44]      ; 0050ac95
    MOV dword ptr [EAX + 0x44],ECX      ; 0050ac98
    MOV ECX,dword ptr [EDX + 0x48]      ; 0050ac9b
    MOV dword ptr [EAX + 0x48],ECX      ; 0050ac9e
    MOV ECX,dword ptr [EDX + 0x4c]      ; 0050aca1
    MOV dword ptr [EAX + 0x4c],ECX      ; 0050aca4
    MOV ECX,dword ptr [EDX + 0x50]      ; 0050aca7
    MOV dword ptr [EAX + 0x50],ECX      ; 0050acaa
    ADD EAX,0x58                        ; 0050acad
    MOV ECX,dword ptr [EDX + 0x54]      ; 0050acb0
    ADD EDX,0x58                        ; 0050acb3
    MOV dword ptr [EAX + -0x4],ECX      ; 0050acb6
    CMP EAX,EDX                         ; 0050acb9
    JZ 0x0050accd                       ; 0050acbb
        ;   XREF to: 0050accd (CONDITIONAL_JUMP)  ; LAB_0050accd
    MOV ECX,dword ptr [EDX]             ; 0050acbd
    MOV dword ptr [EAX],ECX             ; 0050acbf
    MOV ECX,dword ptr [EDX + 0x4]       ; 0050acc1
    MOV dword ptr [EAX + 0x4],ECX       ; 0050acc4
    MOV ECX,dword ptr [EDX + 0x8]       ; 0050acc7
    MOV dword ptr [EAX + 0x8],ECX       ; 0050acca
    MOV dword ptr [EBX],0x0             ; 0050accd
        ;   Label: LAB_0050accd
    MOV EBX,dword ptr [ESP]             ; 0050acd3
    PUSH EBX                            ; 0050acd6
    MOV dword ptr [ESI + 0x4],0x3f800000 ; 0050acd7
    PUSH EBP                            ; 0050acde
    MOV dword ptr [ESI + 0x8],0xbf800000 ; 0050acdf
    CALL core_manpuz.cpp_CMansionPuzzleCircle_FUN_00509b20 ; 0050ace6
        ;   XREF to: 00509b20 (UNCONDITIONAL_CALL)  ; void core_manpuz.cpp_CMansionPuzzleCircle_FUN_00509b20(CMansionPuzzleCircle * this_ptr)
    ADD ESP,0x8                         ; 0050aceb
    ADD ESI,0x58                        ; 0050acee
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30 ; 0050acf1
        ;   XREF to: 005a8c30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30()
    PUSH ESI                            ; 0050acf6
    CALL sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_005a8940 ; 0050acf7
        ;   XREF to: 005a8940 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_005a8940(CVector3f * position_source_ptr)
    ADD ESP,0x4                         ; 0050acfc
    PUSH 0x635820                       ; 0050acff | = "manpuz-doorslide.wav"
    CALL sound_sndmain.cpp_startSfx_FUN_005a8e90 ; 0050ad04
        ;   XREF to: 005a8e90 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_005a8e90(char * filename)
    ADD ESP,0x4                         ; 0050ad09
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0 ; 0050ad0c
        ;   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0()
    ADD ESP,0x4                         ; 0050ad11
    POP EBP                             ; 0050ad14
    POP EDI                             ; 0050ad15
    POP ESI                             ; 0050ad16
    POP EBX                             ; 0050ad17
    RET                                 ; 0050ad18
    TEST dword ptr [EBX + 0x4],0x7fffffff ; 0050ad19
        ;   Label: LAB_0050ad19
    JNZ 0x0050abfa                      ; 0050ad20
        ;   XREF to: 0050abfa (CONDITIONAL_JUMP)  ; LAB_0050abfa
    TEST dword ptr [EBX + 0x8],0x7fffffff ; 0050ad26
    JNZ 0x0050abfa                      ; 0050ad2d
        ;   XREF to: 0050abfa (CONDITIONAL_JUMP)  ; LAB_0050abfa
    JMP 0x0050ac1d                      ; 0050ad33
        ;   XREF to: 0050ac1d (UNCONDITIONAL_JUMP)  ; LAB_0050ac1d

