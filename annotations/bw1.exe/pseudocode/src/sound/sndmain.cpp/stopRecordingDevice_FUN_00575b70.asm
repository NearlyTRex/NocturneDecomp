; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_stopRecordingDevice_FUN_00575b70(void)
;
;
; XREF[2]:
;   sound_sndmain.cpp_releaseRecordingDevice_FUN_00575940 at 00575940
;   sound_sndmain.cpp_shutdownSoundSystem_FUN_00574ea0 at 00574ebe
;
; Referenced Globals:
;   undefined4 DAT_02c81038
;   undefined4 DAT_02c8103c
;
; Called Functions:
;   sound_sndmain.cpp_lockSound_FUN_00575d20
;   sound_sndmain.cpp_unlockSound_FUN_00573e70
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_lockSound_FUN_00575d20 ; 00575b70
        ;   XREF to: 00575d20 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00575d20()
        ;   Label: sound_sndmain.cpp_stopRecordingDevice_FUN_00575b70
    MOV EDX,dword ptr [0x02c81038]      ; 00575b75 | DAT_02c81038
    TEST EDX,EDX                        ; 00575b7b
    JZ 0x00575b8e                       ; 00575b7d
        ;   XREF to: 00575b8e (CONDITIONAL_JUMP)  ; LAB_00575b8e
    MOV EAX,EDX                         ; 00575b7f
    PUSH EAX                            ; 00575b81
    MOV EDX,dword ptr [EDX]             ; 00575b82
    CALL dword ptr [EDX + 0x8]          ; 00575b84
    ADD ESP,0x4                         ; 00575b87
    TEST EAX,EAX                        ; 00575b8a
    JZ 0x00575ba1                       ; 00575b8c
        ;   XREF to: 00575ba1 (CONDITIONAL_JUMP)  ; LAB_00575ba1
    XOR ECX,ECX                         ; 00575b8e
        ;   Label: LAB_00575b8e
    MOV dword ptr [0x02c8103c],ECX      ; 00575b90 | DAT_02c8103c
    CALL sound_sndmain.cpp_unlockSound_FUN_00573e70 ; 00575b96
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00573e70()
    MOV EAX,0x1                         ; 00575b9b
    RET                                 ; 00575ba0
    CALL sound_sndmain.cpp_unlockSound_FUN_00573e70 ; 00575ba1
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00573e70()
        ;   Label: LAB_00575ba1
    XOR EAX,EAX                         ; 00575ba6
    RET                                 ; 00575ba8

