; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_releaseRecordingDevice_FUN_00552f10(void)
;
;
; XREF[2]:
;   sound_sndmain.cpp_FUN_00553680 at 005536fd
;   sound_sndmain.cpp_shutdownSoundSystem_FUN_00552470 at 00552493
;
; Referenced Globals:
;   undefined4 DAT_02649868
;
; Called Functions:
;   sound_sndmain.cpp_stopRecordingDevice_FUN_00553140
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_stopRecordingDevice_FUN_00553140 ; 00552f10
        ;   XREF to: 00553140 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_stopRecordingDevice_FUN_00553140()
        ;   Label: sound_sndmain.cpp_releaseRecordingDevice_FUN_00552f10
    TEST EAX,EAX                        ; 00552f15
    JZ 0x00552f28                       ; 00552f17
        ;   XREF to: 00552f28 (CONDITIONAL_JUMP)  ; LAB_00552f28
    MOV EDX,dword ptr [0x02649868]      ; 00552f19 | DAT_02649868
    TEST EDX,EDX                        ; 00552f1f
    JNZ 0x00552f29                      ; 00552f21
        ;   XREF to: 00552f29 (CONDITIONAL_JUMP)  ; LAB_00552f29
    MOV EAX,0x1                         ; 00552f23
    RET                                 ; 00552f28
        ;   Label: LAB_00552f28
    MOV EAX,EDX                         ; 00552f29
        ;   Label: LAB_00552f29
    PUSH EAX                            ; 00552f2b
    MOV EDX,dword ptr [EDX]             ; 00552f2c
    CALL dword ptr [EDX]                ; 00552f2e
    ADD ESP,0x4                         ; 00552f30
    TEST EAX,EAX                        ; 00552f33
    JZ 0x00552f28                       ; 00552f35
        ;   XREF to: 00552f28 (CONDITIONAL_JUMP)  ; LAB_00552f28
    XOR ECX,ECX                         ; 00552f37
    MOV EAX,0x1                         ; 00552f39
    MOV dword ptr [0x02649868],ECX      ; 00552f3e | DAT_02649868
    RET                                 ; 00552f44

