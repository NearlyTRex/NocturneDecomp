; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_releaseMutex_FUN_00581990(HANDLE mutex_handle)
;
; Parameters:
; HANDLE           Stack[0x4]:4   mutex_handle
;
; XREF[6]:
;   sound_sndmain.cpp_processAudio_FUN_00559120 at 0055918b
;   sound_sndmain.cpp_unlockSound_FUN_00556fd0 at 00557000
;   support_trisock.cpp_FUN_00570ae0 at 00570b93
;   support_trisock.cpp_FUN_00570ea0 at 00570f42
;   support_trisock.cpp_FUN_00570fb0 at 00571025
;   support_trisock.cpp_FUN_00571f10 at 00571f86
;
; Referenced Globals:
;   void* PTR_ReleaseMutex_005b361c = 001b410c
;
; Called Functions:
;   ReleaseMutex
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00581990
        ;   Label: wincore_winrun.cpp_releaseMutex_FUN_00581990
    TEST EAX,EAX                        ; 00581994
    JNZ 0x00581999                      ; 00581996
        ;   XREF to: 00581999 (CONDITIONAL_JUMP)  ; LAB_00581999
    RET                                 ; 00581998
    PUSH EAX                            ; 00581999
        ;   Label: LAB_00581999
    CALL dword ptr CS:[0x5b361c]        ; 0058199a | PTR_ReleaseMutex_005b361c
    RET                                 ; 005819a1

