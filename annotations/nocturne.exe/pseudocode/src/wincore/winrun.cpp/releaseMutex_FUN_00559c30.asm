; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_releaseMutex_FUN_00559c30(HANDLE param_1)
;
;
; XREF[2]:
;   sound_sndmain.cpp_processAudio_FUN_005288f0 at 0052895b
;   sound_sndmain.cpp_unlockSound_FUN_00528890 at 005288af
;
; Referenced Globals:
;   void* PTR_ReleaseMutex_00575580 = 00175f4c
;
; Called Functions:
;   ReleaseMutex
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00559c30
        ;   Label: wincore_winrun.cpp_releaseMutex_FUN_00559c30
    TEST EAX,EAX                        ; 00559c34
    JNZ 0x00559c39                      ; 00559c36
        ;   XREF to: 00559c39 (CONDITIONAL_JUMP)  ; LAB_00559c39
    RET                                 ; 00559c38
    PUSH EAX                            ; 00559c39
        ;   Label: LAB_00559c39
    CALL dword ptr CS:[0x575580]        ; 00559c3a | PTR_ReleaseMutex_00575580
    RET                                 ; 00559c41

