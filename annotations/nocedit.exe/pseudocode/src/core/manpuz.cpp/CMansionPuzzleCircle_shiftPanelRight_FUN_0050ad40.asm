; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_0050ad40()
;
;
; XREF[1]:
;   core_manpuz.cpp_FUN_0050a610 at 0050a8a3
;
; Referenced Globals:
;   TerminatedCString s_core_manpuz_cpp_00635835
;   TerminatedCString s_CMansionPuzzleCircle_shi_00635848
;   TerminatedCString s_manpuz_doorslide_wav_00635879
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_manpuz.cpp_FUN_0050aee0
;   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
;   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
;   sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_005a8940
;   sound_sndmain.cpp_startSfx_FUN_005a8e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050ad40
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_0050ad40
    PUSH ESI                            ; 0050ad41
    PUSH EBP                            ; 0050ad42
    MOV EDX,dword ptr [ESP + 0x10]      ; 0050ad43
    MOV ECX,dword ptr [ESP + 0x14]      ; 0050ad47
    LEA EAX,[ECX*0x4 + 0x0]             ; 0050ad4b
    SUB EAX,ECX                         ; 0050ad52
    SHL EAX,0x3                         ; 0050ad54
    LEA ESI,[EDX + 0x5f0]               ; 0050ad57
    ADD EAX,ECX                         ; 0050ad5d
    PUSH ECX                            ; 0050ad5f
    SHL EAX,0x2                         ; 0050ad60
    PUSH EDX                            ; 0050ad63
    LEA EBX,[ESI + EAX*0x1]             ; 0050ad64
    CALL core_manpuz.cpp_FUN_0050aee0   ; 0050ad67 | undefined core_manpuz.cpp_FUN_0050aee0()
        ;   XREF to: 0050aee0 (UNCONDITIONAL_CALL)
    MOV EDX,EAX                         ; 0050ad6c
    SHL EAX,0x2                         ; 0050ad6e
    SUB EAX,EDX                         ; 0050ad71
    SHL EAX,0x3                         ; 0050ad73
    ADD EAX,EDX                         ; 0050ad76
    ADD ESP,0x8                         ; 0050ad78
    SHL EAX,0x2                         ; 0050ad7b
    MOV EDX,dword ptr [EBX]             ; 0050ad7e
    ADD ESI,EAX                         ; 0050ad80
    TEST EDX,EDX                        ; 0050ad82
    JZ 0x0050adcb                       ; 0050ad84 | LAB_0050adcb
        ;   XREF to: 0050adcb (CONDITIONAL_JUMP)
    CMP dword ptr [ESI],0x0             ; 0050ad86
    JNZ 0x0050adcb                      ; 0050ad89 | LAB_0050adcb
        ;   XREF to: 0050adcb (CONDITIONAL_JUMP)
    TEST dword ptr [EBX + 0x4],0x7fffffff ; 0050ad8b
    JNZ 0x0050adcb                      ; 0050ad92 | LAB_0050adcb
        ;   XREF to: 0050adcb (CONDITIONAL_JUMP)
    TEST dword ptr [EBX + 0x8],0x7fffffff ; 0050ad94
    JNZ 0x0050adcb                      ; 0050ad9b | LAB_0050adcb
        ;   XREF to: 0050adcb (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x8],0x3f800000 ; 0050ad9d
        ;   Label: LAB_0050ad9d
    ADD EBX,0x58                        ; 0050ada4
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30 ; 0050ada7 | void sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30()
        ;   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
    PUSH EBX                            ; 0050adac
    CALL sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_005a8940 ; 0050adad | void sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_005a8940(CVector3f * position_source_ptr)
        ;   XREF to: 005a8940 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0050adb2
    PUSH 0x635879                       ; 0050adb5 | = "manpuz-doorslide.wav" | s_manpuz_doorslide_wav_00635879 = manpuz-doorslide.wav
    CALL sound_sndmain.cpp_startSfx_FUN_005a8e90 ; 0050adba | uint sound_sndmain.cpp_startSfx_FUN_005a8e90(char * filename)
        ;   XREF to: 005a8e90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0050adbf
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0 ; 0050adc2 | void sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0()
        ;   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
    POP EBP                             ; 0050adc7
    POP ESI                             ; 0050adc8
    POP EBX                             ; 0050adc9
    RET                                 ; 0050adca
    MOV EBP,0x635835                    ; 0050adcb | = "..\\core\\manpuz.cpp" | s_core_manpuz_cpp_00635835 = ..\core\manpuz.cpp
        ;   Label: LAB_0050adcb
    MOV EAX,0x57d                       ; 0050add0
    PUSH 0x635848                       ; 0050add5 | = "CMansionPuzzleCircle::shiftPanelRight..." | s_CMansionPuzzleCircle_shi_00635848 = CMansionPuzzleCircle::shiftPanelRight - fubared.
    MOV dword ptr [0x02f0ca48],EBP      ; 0050adda | char * g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0050ade0 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0050ade5 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0050adea
    JMP 0x0050ad9d                      ; 0050aded | LAB_0050ad9d
        ;   XREF to: 0050ad9d (UNCONDITIONAL_JUMP)

