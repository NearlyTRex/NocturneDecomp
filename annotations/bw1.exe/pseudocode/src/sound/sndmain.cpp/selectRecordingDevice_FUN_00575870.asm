; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_selectRecordingDevice_FUN_00575870(int device_id)
;
; Parameters:
; int              Stack[0x4]:4   device_id
;
; XREF[3]:
;   sound_sndmain.cpp_FUN_005760b0 at 005761a2
;   sound_sndmain.cpp_initializeRecordingDevice_FUN_005758e0 at 005758f1
;   sound_sndmain.cpp_resetSoundSystemDefaults_FUN_00574e00 at 00574e88
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005f4305
;   TerminatedCString s_selectRecordingDevice_de_005f431a
;   undefined4 DAT_0062331c
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   sound_sndmain.cpp_findBestRecordingDevice_FUN_005757f0
;   sound_sndmain.cpp_getRecordingDeviceCount_FUN_00575730
;   sound_sndmain.cpp_isRecordingSystemActive_FUN_00575980
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00575870
        ;   Label: sound_sndmain.cpp_selectRecordingDevice_FUN_00575870
    MOV EBX,dword ptr [ESP + 0x8]       ; 00575871
    CALL sound_sndmain.cpp_isRecordingSystemActive_FUN_00575980 ; 00575875
        ;   XREF to: 00575980 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isRecordingSystemActive_FUN_00575980()
    TEST EAX,EAX                        ; 0057587a
    JNZ 0x005758a0                      ; 0057587c
        ;   XREF to: 005758a0 (CONDITIONAL_JUMP)  ; LAB_005758a0
    TEST EBX,EBX                        ; 0057587e
        ;   Label: LAB_0057587e
    JGE 0x00575888                      ; 00575880
        ;   XREF to: 00575888 (CONDITIONAL_JUMP)  ; LAB_00575888
    MOV EBX,dword ptr [0x0062331c]      ; 00575882 | DAT_0062331c
    CALL sound_sndmain.cpp_getRecordingDeviceCount_FUN_00575730 ; 00575888
        ;   XREF to: 00575730 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getRecordingDeviceCount_FUN_00575730()
        ;   Label: LAB_00575888
    CMP EBX,EAX                         ; 0057588d
    JL 0x005758c5                       ; 0057588f
        ;   XREF to: 005758c5 (CONDITIONAL_JUMP)  ; LAB_005758c5
    CALL sound_sndmain.cpp_findBestRecordingDevice_FUN_005757f0 ; 00575891
        ;   XREF to: 005757f0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_findBestRecordingDevice_FUN_005757f0()
        ;   Label: LAB_00575891
    MOV EBX,EAX                         ; 00575896
    MOV dword ptr [0x0062331c],EBX      ; 00575898 | DAT_0062331c
    POP EBX                             ; 0057589e
    RET                                 ; 0057589f
    MOV EDX,0x5f4305                    ; 005758a0 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005758a0
    MOV ECX,0x1681                      ; 005758a5
    PUSH 0x5f431a                       ; 005758aa | = "selectRecordingDevice - device alread..."
    MOV dword ptr [0x01d1d400],EDX      ; 005758af | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 005758b5 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005758bb
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005758c0
    JMP 0x0057587e                      ; 005758c3
        ;   XREF to: 0057587e (UNCONDITIONAL_JUMP)  ; LAB_0057587e
    TEST EBX,EBX                        ; 005758c5
        ;   Label: LAB_005758c5
    JL 0x00575891                       ; 005758c7
        ;   XREF to: 00575891 (CONDITIONAL_JUMP)  ; LAB_00575891
    MOV dword ptr [0x0062331c],EBX      ; 005758c9 | DAT_0062331c
    POP EBX                             ; 005758cf
    RET                                 ; 005758d0

