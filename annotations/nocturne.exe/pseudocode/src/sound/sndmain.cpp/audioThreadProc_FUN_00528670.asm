; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; DWORD __stdcall sound_sndmain_cpp_audioThreadProc_FUN_00528670(LPVOID lpThreadParam)
;
; Parameters:
; LPVOID           Stack[0x4]:4   lpThreadParam
;
; XREF[1]:
;   sound_sndmain.cpp_startSoundThread_FUN_005286d0 at 00528717
;
; Referenced Globals:
;   undefined4 DAT_02dc84a8
;   undefined4 DAT_02dc84ac
;   undefined4 DAT_02dc84b0
;   undefined4 DAT_02dc84b4
;
; Called Functions:
;   sound_sndmain.cpp_processAudio_FUN_005288f0
;   wincore_winrun.cpp_sleep_FUN_00559cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00528670
        ;   Label: sound_sndmain.cpp_audioThreadProc_FUN_00528670
    PUSH ESI                            ; 00528671
    PUSH EDI                            ; 00528672
    MOV EDX,0x1                         ; 00528673
    MOV ECX,dword ptr [0x02dc84b4]      ; 00528678 | DAT_02dc84b4
    MOV dword ptr [0x02dc84b0],EDX      ; 0052867e | DAT_02dc84b0
    TEST ECX,ECX                        ; 00528684
    JNZ 0x00528696                      ; 00528686
        ;   XREF to: 00528696 (CONDITIONAL_JUMP)  ; LAB_00528696
        ;   Label: LAB_00528686
    CALL sound_sndmain.cpp_processAudio_FUN_005288f0 ; 00528688
        ;   XREF to: 005288f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_processAudio_FUN_005288f0()
    CMP dword ptr [0x02dc84b4],0x0      ; 0052868d | DAT_02dc84b4
    JZ 0x005286a1                       ; 00528694
        ;   XREF to: 005286a1 (CONDITIONAL_JUMP)  ; LAB_005286a1
    XOR EAX,EAX                         ; 00528696
        ;   Label: LAB_00528696
    MOV [0x02dc84b0],EAX                ; 00528698 | DAT_02dc84b0
    POP EDI                             ; 0052869d
    POP ESI                             ; 0052869e
    POP EBX                             ; 0052869f
    RET                                 ; 005286a0
    MOV EBX,dword ptr [0x02dc84ac]      ; 005286a1 | DAT_02dc84ac
        ;   Label: LAB_005286a1
    PUSH EBX                            ; 005286a7
    MOV ESI,dword ptr [0x02dc84a8]      ; 005286a8 | DAT_02dc84a8
    PUSH ESI                            ; 005286ae
    CALL wincore_winrun.cpp_sleep_FUN_00559cc0 ; 005286af
        ;   XREF to: 00559cc0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_sleep_FUN_00559cc0(double seconds)
    MOV EDI,dword ptr [0x02dc84b4]      ; 005286b4 | DAT_02dc84b4
    ADD ESP,0x8                         ; 005286ba
    TEST EDI,EDI                        ; 005286bd
    JMP 0x00528686                      ; 005286bf
        ;   XREF to: 00528686 (UNCONDITIONAL_JUMP)  ; LAB_00528686

