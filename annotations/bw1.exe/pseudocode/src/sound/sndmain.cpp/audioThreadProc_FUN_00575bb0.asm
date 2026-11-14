; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; DWORD __cdecl sound_sndmain_cpp_audioThreadProc_FUN_00575bb0(LPVOID lpThreadParam)
;
; Parameters:
; LPVOID           Stack[0x4]:4   lpThreadParam
;
; XREF[1]:
;   sound_sndmain.cpp_startSoundThread_FUN_00575c00 at 00575c34
;
; Referenced Globals:
;   undefined4 DAT_02c807dc
;   undefined4 DAT_02c807e0
;   undefined4 DAT_02c807e4
;
; Called Functions:
;   sound_sndmain.cpp_processAudio_FUN_00575fb0
;   wincore_winrun.cpp_sleep_FUN_005b3860
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00575bb0
        ;   Label: sound_sndmain.cpp_audioThreadProc_FUN_00575bb0
    PUSH EDI                            ; 00575bb1
    MOV EDX,0x1                         ; 00575bb2
    MOV ECX,dword ptr [0x02c807e4]      ; 00575bb7 | DAT_02c807e4
    MOV dword ptr [0x02c807e0],EDX      ; 00575bbd | DAT_02c807e0
    TEST ECX,ECX                        ; 00575bc3
    JNZ 0x00575bd5                      ; 00575bc5
        ;   XREF to: 00575bd5 (CONDITIONAL_JUMP)  ; LAB_00575bd5
        ;   Label: LAB_00575bc5
    CALL sound_sndmain.cpp_processAudio_FUN_00575fb0 ; 00575bc7
        ;   XREF to: 00575fb0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_processAudio_FUN_00575fb0()
    CMP dword ptr [0x02c807e4],0x0      ; 00575bcc | DAT_02c807e4
    JZ 0x00575be2                       ; 00575bd3
        ;   XREF to: 00575be2 (CONDITIONAL_JUMP)  ; LAB_00575be2
    XOR EDI,EDI                         ; 00575bd5
        ;   Label: LAB_00575bd5
    XOR EAX,EAX                         ; 00575bd7
    MOV dword ptr [0x02c807e0],EDI      ; 00575bd9 | DAT_02c807e0
    POP EDI                             ; 00575bdf
    POP EBX                             ; 00575be0
    RET                                 ; 00575be1
    SUB ESP,0x8                         ; 00575be2
        ;   Label: LAB_00575be2
    FLD float ptr [0x02c807dc]          ; 00575be5 | DAT_02c807dc
    FSTP double ptr [ESP]               ; 00575beb
    CALL wincore_winrun.cpp_sleep_FUN_005b3860 ; 00575bee
        ;   XREF to: 005b3860 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_sleep_FUN_005b3860(double seconds)
    MOV EBX,dword ptr [0x02c807e4]      ; 00575bf3 | DAT_02c807e4
    ADD ESP,0x8                         ; 00575bf9
    TEST EBX,EBX                        ; 00575bfc
    JMP 0x00575bc5                      ; 00575bfe
        ;   XREF to: 00575bc5 (UNCONDITIONAL_JUMP)  ; LAB_00575bc5

