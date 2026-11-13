; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_stopRecordingDevice_FUN_00553140(void)
;
;
; XREF[2]:
;   sound_sndmain.cpp_releaseRecordingDevice_FUN_00552f10 at 00552f10
;   sound_sndmain.cpp_shutdownSoundSystem_FUN_00552470 at 0055248e
;
; Referenced Globals:
;   undefined4 DAT_02649868
;   undefined4 DAT_0264986c
;
; Called Functions:
;   sound_sndmain.cpp_lockSound_FUN_005532f0
;   sound_sndmain.cpp_unlockSound_FUN_00551440
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_lockSound_FUN_005532f0 ; 00553140
        ;   XREF to: 005532f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_005532f0()
        ;   Label: sound_sndmain.cpp_stopRecordingDevice_FUN_00553140
    MOV EDX,dword ptr [0x02649868]      ; 00553145 | DAT_02649868
    TEST EDX,EDX                        ; 0055314b
    JZ 0x0055315e                       ; 0055314d
        ;   XREF to: 0055315e (CONDITIONAL_JUMP)  ; LAB_0055315e
    MOV EAX,EDX                         ; 0055314f
    PUSH EAX                            ; 00553151
    MOV EDX,dword ptr [EDX]             ; 00553152
    CALL dword ptr [EDX + 0x8]          ; 00553154
    ADD ESP,0x4                         ; 00553157
    TEST EAX,EAX                        ; 0055315a
    JZ 0x00553171                       ; 0055315c
        ;   XREF to: 00553171 (CONDITIONAL_JUMP)  ; LAB_00553171
    XOR ECX,ECX                         ; 0055315e
        ;   Label: LAB_0055315e
    MOV dword ptr [0x0264986c],ECX      ; 00553160 | DAT_0264986c
    CALL sound_sndmain.cpp_unlockSound_FUN_00551440 ; 00553166
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00551440()
    MOV EAX,0x1                         ; 0055316b
    RET                                 ; 00553170
    CALL sound_sndmain.cpp_unlockSound_FUN_00551440 ; 00553171
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00551440()
        ;   Label: LAB_00553171
    XOR EAX,EAX                         ; 00553176
    RET                                 ; 00553178

