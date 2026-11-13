; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_releaseMutex_FUN_005b37b0(HANDLE mutex_handle)
;
; Parameters:
; HANDLE           Stack[0x4]:4   mutex_handle
;
; XREF[6]:
;   sound_sndmain.cpp_FUN_00573e70 at 00573ea0
;   sound_sndmain.cpp_processAudio_FUN_00575fb0 at 0057601b
;   support_trisock.cpp_FUN_0059daf0 at 0059dba3
;   support_trisock.cpp_FUN_0059deb0 at 0059df52
;   support_trisock.cpp_FUN_0059dfc0 at 0059e035
;   support_trisock.cpp_FUN_0059ef20 at 0059ef96
;
; Referenced Globals:
;   void* PTR_ReleaseMutex_005d061c = 001d1106
;
; Called Functions:
;   ReleaseMutex
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005b37b0
        ;   Label: wincore_winrun.cpp_releaseMutex_FUN_005b37b0
    TEST EAX,EAX                        ; 005b37b4
    JNZ 0x005b37b9                      ; 005b37b6
        ;   XREF to: 005b37b9 (CONDITIONAL_JUMP)  ; LAB_005b37b9
    RET                                 ; 005b37b8
    PUSH EAX                            ; 005b37b9
        ;   Label: LAB_005b37b9
    CALL dword ptr CS:[0x5d061c]        ; 005b37ba | PTR_ReleaseMutex_005d061c
    RET                                 ; 005b37c1

