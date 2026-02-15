; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; HRESULT __cdecl sound_sndmain_cpp_getRecordingDeviceCaps_FUN_005abb10(LPDSCCAPS pDSCCaps)
;
; Parameters:
; LPDSCCAPS        Stack[0x8]:4   pDSCCaps
;
; Referenced Globals:
;   IDirectSoundCapture* g_RecordingDeviceInterface
;
; Called Functions:
;   sound_sndmain.cpp_isRecordingStarted_FUN_005ab980
;   sound_sndmain.cpp_lockSound_FUN_005abd30
;   sound_sndmain.cpp_unlockSound_FUN_005abdc0
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_lockSound_FUN_005abd30 ; 005abb10
        ;   XREF to: 005abd30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_005abd30()
        ;   Label: sound_sndmain.cpp_getRecordingDeviceCaps_FUN_005abb10
    CALL sound_sndmain.cpp_isRecordingStarted_FUN_005ab980 ; 005abb15
        ;   XREF to: 005ab980 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isRecordingStarted_FUN_005ab980()
    TEST EAX,EAX                        ; 005abb1a
    JZ 0x005abb28                       ; 005abb1c
        ;   XREF to: 005abb28 (CONDITIONAL_JUMP)  ; LAB_005abb28
    MOV EDX,dword ptr [0x03f69c54]      ; 005abb1e | g_RecordingDeviceInterface
    TEST EDX,EDX                        ; 005abb24
    JNZ 0x005abb33                      ; 005abb26
        ;   XREF to: 005abb33 (CONDITIONAL_JUMP)  ; LAB_005abb33
    CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0 ; 005abb28
        ;   XREF to: 005abdc0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_005abdc0()
        ;   Label: LAB_005abb28
    MOV EAX,0xffffffff                  ; 005abb2d
    RET                                 ; 005abb32
    PUSH ESI                            ; 005abb33
        ;   Label: LAB_005abb33
    PUSH EBX                            ; 005abb34
    MOV ECX,dword ptr [ESP + 0x10]      ; 005abb35
    PUSH ECX                            ; 005abb39
    MOV ESI,dword ptr [ESP + 0x10]      ; 005abb3a
    PUSH ESI                            ; 005abb3e
    MOV EBX,dword ptr [EDX]             ; 005abb3f
    PUSH EDX                            ; 005abb41
    CALL dword ptr [EBX + 0x10]         ; 005abb42
    ADD ESP,0xc                         ; 005abb45
    MOV EBX,EAX                         ; 005abb48
    CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0 ; 005abb4a
        ;   XREF to: 005abdc0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_005abdc0()
    MOV EAX,EBX                         ; 005abb4f
    POP EBX                             ; 005abb51
    POP ESI                             ; 005abb52
    RET                                 ; 005abb53

