; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; HANDLE __cdecl wincore_winrun_cpp_createMutex_FUN_005b3740(void)
;
;
; XREF[2]:
;   sound_sndmain.cpp_lockSound_FUN_00575d20 at 00575d2b
;   support_trisock.cpp_FUN_0059eeb0 at 0059eee0
;
; Referenced Globals:
;   void* PTR_CreateMutexA_005d052c = 001d0c9a
;
; Called Functions:
;   CreateMutexA
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 005b3740
        ;   Label: wincore_winrun.cpp_createMutex_FUN_005b3740
    PUSH 0x0                            ; 005b3742
    PUSH 0x0                            ; 005b3744
    CALL dword ptr CS:[0x5d052c]        ; 005b3746 | PTR_CreateMutexA_005d052c
    RET                                 ; 005b374d

