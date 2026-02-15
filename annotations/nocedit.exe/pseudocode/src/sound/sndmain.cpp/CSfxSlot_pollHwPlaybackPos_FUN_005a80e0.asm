; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_CSfxSlot_pollHwPlaybackPos_FUN_005a80e0(CSfxSlot *this_ptr)
;
; Parameters:
; CSfxSlot *       Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   sound_sndmain.cpp_CSfxSample_pollStream_FUN_005a6730 at 005a67e4
;   sound_sndmain.cpp_formatActiveSounds_FUN_005a9f80 at 005a9fba
;   sound_sndmain.cpp_getSfxPlaybackPosition_FUN_005a9720 at 005a9750
;
; Referenced Globals:
;   TerminatedCString s_Error_polling_hw_playbac_00650541
;   CSoundDevice* g_CSoundDevicePtr
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSlot_updatePlaybackPos_FUN_005a8170
;   sound_sndmain.cpp_logSoundError_FUN_005adba0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a80e0
        ;   Label: sound_sndmain.cpp_CSfxSlot_pollHwPlaybackPos_FUN_005a80e0
    PUSH EDI                            ; 005a80e1
    PUSH EBP                            ; 005a80e2
    MOV EBP,ESP                         ; 005a80e3
    SUB ESP,0x10                        ; 005a80e5
    AND ESP,0xfffffff8                  ; 005a80e8
    MOV EBX,dword ptr [EBP + 0x10]      ; 005a80eb
    CMP dword ptr [EBX + 0x70],0x0      ; 005a80ee
    JZ 0x005a8104                       ; 005a80f2
        ;   XREF to: 005a8104 (CONDITIONAL_JUMP)  ; LAB_005a8104
    MOV ECX,dword ptr [0x03f69268]      ; 005a80f4 | g_CSoundDevicePtr
    TEST ECX,ECX                        ; 005a80fa
    JZ 0x005a8104                       ; 005a80fc
        ;   XREF to: 005a8104 (CONDITIONAL_JUMP)  ; LAB_005a8104
    CMP dword ptr [EBX + 0x78],0x0      ; 005a80fe
    JNZ 0x005a810c                      ; 005a8102
        ;   XREF to: 005a810c (CONDITIONAL_JUMP)  ; LAB_005a810c
    XOR EAX,EAX                         ; 005a8104
        ;   Label: LAB_005a8104
    MOV ESP,EBP                         ; 005a8106
    POP EBP                             ; 005a8108
    POP EDI                             ; 005a8109
    POP EBX                             ; 005a810a
    RET                                 ; 005a810b
    PUSH EBX                            ; 005a810c
        ;   Label: LAB_005a810c
    MOV EDX,dword ptr [ECX]             ; 005a810d
    PUSH ECX                            ; 005a810f
    CALL dword ptr [EDX + 0x44]         ; 005a8110
    MOV dword ptr [ESP + 0x10],EAX      ; 005a8113
    MOV dword ptr [ESP + 0x14],EDX      ; 005a8117
    FLD double ptr [ESP + 0x10]         ; 005a811b
    ADD ESP,0x8                         ; 005a811f
    FLDZ                                ; 005a8122
    FXCH                                ; 005a8124
    FSTP double ptr [ESP]               ; 005a8126
    FCOMP double ptr [ESP]              ; 005a8129
    FNSTSW AX                           ; 005a812c
    SAHF                                ; 005a812e
    JBE 0x005a814a                      ; 005a812f
        ;   XREF to: 005a814a (CONDITIONAL_JUMP)  ; LAB_005a814a
    MOV EDX,dword ptr [EBX + 0x78]      ; 005a8131
    PUSH EDX                            ; 005a8134
    PUSH 0x650541                       ; 005a8135 | = "Error polling hw playback pos %s\n"
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005a813a
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x8                         ; 005a813f
    XOR EAX,EAX                         ; 005a8142
    MOV ESP,EBP                         ; 005a8144
    POP EBP                             ; 005a8146
    POP EDI                             ; 005a8147
    POP EBX                             ; 005a8148
    RET                                 ; 005a8149
    MOV EDI,dword ptr [ESP + 0x4]       ; 005a814a
        ;   Label: LAB_005a814a
    PUSH EDI                            ; 005a814e
    MOV EAX,dword ptr [ESP + 0x4]       ; 005a814f
    PUSH EAX                            ; 005a8153
    PUSH EBX                            ; 005a8154
    CALL sound_sndmain.cpp_CSfxSlot_updatePlaybackPos_FUN_005a8170 ; 005a8155
        ;   XREF to: 005a8170 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_updatePlaybackPos_FUN_005a8170(CSfxSlot * this_ptr, double hardware_playback_pos)
    MOV EAX,0x1                         ; 005a815a
    ADD ESP,0xc                         ; 005a815f
    MOV ESP,EBP                         ; 005a8162
    POP EBP                             ; 005a8164
    POP EDI                             ; 005a8165
    POP EBX                             ; 005a8166
    RET                                 ; 005a8167

