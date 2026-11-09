; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; HANDLE __cdecl wincore_winrun_cpp_createMutex_FUN_0058fc90(void)
;
;
; XREF[2]:
;   sound_sndmain.cpp_lockSound_FUN_005532f0 at 005532fb
;   support_trisock.cpp_FUN_0057a840 at 0057a906
;
; Referenced Globals:
;   void* PTR_CreateMutexA_005c851c = 001c8c72
;
; Called Functions:
;   CreateMutexA
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 0058fc90
        ;   Label: wincore_winrun.cpp_createMutex_FUN_0058fc90
    PUSH 0x0                            ; 0058fc92
    PUSH 0x0                            ; 0058fc94
    CALL dword ptr CS:[0x5c851c]        ; 0058fc96 | PTR_CreateMutexA_005c851c
    RET                                 ; 0058fc9d

