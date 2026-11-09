; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_selectRecordingDevice_FUN_005589e0(int device_id)
;
; Parameters:
; int              Stack[0x4]:4   device_id
;
; XREF[3]:
;   sound_sndmain.cpp_FUN_00559220 at 00559312
;   sound_sndmain.cpp_initializeRecordingDevice_FUN_00558a50 at 00558a61
;   sound_sndmain.cpp_resetSoundSystemDefaults_FUN_00557f60 at 00558004
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005d3bfb
;   TerminatedCString s_selectRecordingDevice_de_005d3c10
;   undefined4 DAT_00604258
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   sound_sndmain.cpp_findBestRecordingDevice_FUN_00558960
;   sound_sndmain.cpp_getRecordingDeviceCount_FUN_005588a0
;   sound_sndmain.cpp_isRecordingSystemActive_FUN_00558af0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005589e0
        ;   Label: sound_sndmain.cpp_selectRecordingDevice_FUN_005589e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005589e1
    CALL sound_sndmain.cpp_isRecordingSystemActive_FUN_00558af0 ; 005589e5
        ;   XREF to: 00558af0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isRecordingSystemActive_FUN_00558af0()
    TEST EAX,EAX                        ; 005589ea
    JNZ 0x00558a10                      ; 005589ec
        ;   XREF to: 00558a10 (CONDITIONAL_JUMP)  ; LAB_00558a10
    TEST EBX,EBX                        ; 005589ee
        ;   Label: LAB_005589ee
    JGE 0x005589f8                      ; 005589f0
        ;   XREF to: 005589f8 (CONDITIONAL_JUMP)  ; LAB_005589f8
    MOV EBX,dword ptr [0x00604258]      ; 005589f2 | DAT_00604258
    CALL sound_sndmain.cpp_getRecordingDeviceCount_FUN_005588a0 ; 005589f8
        ;   XREF to: 005588a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getRecordingDeviceCount_FUN_005588a0()
        ;   Label: LAB_005589f8
    CMP EBX,EAX                         ; 005589fd
    JL 0x00558a35                       ; 005589ff
        ;   XREF to: 00558a35 (CONDITIONAL_JUMP)  ; LAB_00558a35
    CALL sound_sndmain.cpp_findBestRecordingDevice_FUN_00558960 ; 00558a01
        ;   XREF to: 00558960 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_findBestRecordingDevice_FUN_00558960()
        ;   Label: LAB_00558a01
    MOV EBX,EAX                         ; 00558a06
    MOV dword ptr [0x00604258],EBX      ; 00558a08 | DAT_00604258
    POP EBX                             ; 00558a0e
    RET                                 ; 00558a0f
    MOV EDX,0x5d3bfb                    ; 00558a10 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00558a10
    MOV ECX,0x1694                      ; 00558a15
    PUSH 0x5d3c10                       ; 00558a1a | = "selectRecordingDevice - device alread..."
    MOV dword ptr [0x01d71de0],EDX      ; 00558a1f | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00558a25 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00558a2b
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00558a30
    JMP 0x005589ee                      ; 00558a33
        ;   XREF to: 005589ee (UNCONDITIONAL_JUMP)  ; LAB_005589ee
    TEST EBX,EBX                        ; 00558a35
        ;   Label: LAB_00558a35
    JL 0x00558a01                       ; 00558a37
        ;   XREF to: 00558a01 (CONDITIONAL_JUMP)  ; LAB_00558a01
    MOV dword ptr [0x00604258],EBX      ; 00558a39 | DAT_00604258
    POP EBX                             ; 00558a3f
    RET                                 ; 00558a40

