; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_004cb740(CMansionPuzzleCircle *this_ptr,int panel_index)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   panel_index
;
; XREF[1]:
;   core_manpuz.cpp_FUN_004cb010 at 004cb2a3
;
; Referenced Globals:
;   TerminatedCString s_core_manpuz_cpp_0058808a
;   TerminatedCString s_CMansionPuzzleCircle_shi_0058809d
;   TerminatedCString s_manpuz_doorslide_wav_005880ce
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   core_manpuz.cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_004cb8e0
;   sound_sndmain.cpp_popSfxOptions_FUN_005263c0
;   sound_sndmain.cpp_pushSfxOptions_FUN_00526340
;   sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_00525fc0
;   sound_sndmain.cpp_startSfx_FUN_005265a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cb740
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_004cb740
    PUSH ESI                            ; 004cb741
    PUSH EBP                            ; 004cb742
    MOV EDX,dword ptr [ESP + 0x10]      ; 004cb743
    MOV ECX,dword ptr [ESP + 0x14]      ; 004cb747
    LEA EAX,[ECX*0x4 + 0x0]             ; 004cb74b
    SUB EAX,ECX                         ; 004cb752
    SHL EAX,0x3                         ; 004cb754
    LEA ESI,[EDX + 0x5e8]               ; 004cb757
    ADD EAX,ECX                         ; 004cb75d
    PUSH ECX                            ; 004cb75f
    SHL EAX,0x2                         ; 004cb760
    PUSH EDX                            ; 004cb763
    LEA EBX,[ESI + EAX*0x1]             ; 004cb764
    CALL core_manpuz.cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_004cb8e0 ; 004cb767
        ;   XREF to: 004cb8e0 (UNCONDITIONAL_CALL)  ; int core_manpuz.cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_004cb8e0(CMansionPuzzleCircle * this_ptr, int panel_index)
    MOV EDX,EAX                         ; 004cb76c
    SHL EAX,0x2                         ; 004cb76e
    SUB EAX,EDX                         ; 004cb771
    SHL EAX,0x3                         ; 004cb773
    ADD EAX,EDX                         ; 004cb776
    ADD ESP,0x8                         ; 004cb778
    SHL EAX,0x2                         ; 004cb77b
    MOV EDX,dword ptr [EBX]             ; 004cb77e
    ADD ESI,EAX                         ; 004cb780
    TEST EDX,EDX                        ; 004cb782
    JZ 0x004cb7cb                       ; 004cb784
        ;   XREF to: 004cb7cb (CONDITIONAL_JUMP)  ; LAB_004cb7cb
    CMP dword ptr [ESI],0x0             ; 004cb786
    JNZ 0x004cb7cb                      ; 004cb789
        ;   XREF to: 004cb7cb (CONDITIONAL_JUMP)  ; LAB_004cb7cb
    TEST dword ptr [EBX + 0x4],0x7fffffff ; 004cb78b
    JNZ 0x004cb7cb                      ; 004cb792
        ;   XREF to: 004cb7cb (CONDITIONAL_JUMP)  ; LAB_004cb7cb
    TEST dword ptr [EBX + 0x8],0x7fffffff ; 004cb794
    JNZ 0x004cb7cb                      ; 004cb79b
        ;   XREF to: 004cb7cb (CONDITIONAL_JUMP)  ; LAB_004cb7cb
    MOV dword ptr [EBX + 0x8],0x3f800000 ; 004cb79d
        ;   Label: LAB_004cb79d
    ADD EBX,0x58                        ; 004cb7a4
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00526340 ; 004cb7a7
        ;   XREF to: 00526340 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00526340()
    PUSH EBX                            ; 004cb7ac
    CALL sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_00525fc0 ; 004cb7ad
        ;   XREF to: 00525fc0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_00525fc0(CVector3f * position_source_ptr)
    ADD ESP,0x4                         ; 004cb7b2
    PUSH 0x5880ce                       ; 004cb7b5 | = "manpuz-doorslide.wav"
    CALL sound_sndmain.cpp_startSfx_FUN_005265a0 ; 004cb7ba
        ;   XREF to: 005265a0 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_005265a0(char * filename)
    ADD ESP,0x4                         ; 004cb7bf
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005263c0 ; 004cb7c2
        ;   XREF to: 005263c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005263c0()
    POP EBP                             ; 004cb7c7
    POP ESI                             ; 004cb7c8
    POP EBX                             ; 004cb7c9
    RET                                 ; 004cb7ca
    MOV EBP,0x58808a                    ; 004cb7cb | = "..\\core\\manpuz.cpp"
        ;   Label: LAB_004cb7cb
    MOV EAX,0x57d                       ; 004cb7d0
    PUSH 0x58809d                       ; 004cb7d5 | = "CMansionPuzzleCircle::shiftPanelRight..."
    MOV dword ptr [0x01cc4800],EBP      ; 004cb7da | PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 004cb7e0 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004cb7e5
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004cb7ea
    JMP 0x004cb79d                      ; 004cb7ed
        ;   XREF to: 004cb79d (UNCONDITIONAL_JUMP)  ; LAB_004cb79d

