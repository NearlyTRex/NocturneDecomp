; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void wincore_winrun.cpp_releaseMutex_FUN_005f4050(HANDLE mutex_handle)
;
; Parameters:
; typedef HANDLE void * Stack[0x4]:4   mutex_handle
;
; XREF[10]:
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0 at 0050fb23
;   shape_memdbg.cpp_debugCalloc_FUN_0050f350 at 0050f3cd
;   shape_memdbg.cpp_debugFree_FUN_0050f460 at 0050f500
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250 at 0050f2c5
;   shape_memdbg.cpp_debugMemdump_FUN_0050f6c0 at 0050f785
;   shape_memdbg.cpp_debugRealloc_FUN_0050f540 at 0050f6a2
;   shape_memdbg.cpp_openFile_FUN_0050f7a0 at 0050f8ac
;   shape_memdbg.cpp_releaseDebugMutex_FUN_0050ee90 at 0050ee97
;   sound_sndmain.cpp_processAudio_FUN_005abe20 at 005abe8b
;   sound_sndmain.cpp_unlockSound_FUN_005abdc0 at 005abddf
;
; Referenced Globals:
;   ReleaseMutex* g_ReleaseMutexFunc = 002120fe
;
; Called Functions:
;   ReleaseMutex
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005f4050
        ;   Label: wincore_winrun.cpp_releaseMutex_FUN_005f4050
    TEST EAX,EAX                        ; 005f4054
    JNZ 0x005f4059                      ; 005f4056
        ;   XREF to: 005f4059 (CONDITIONAL_JUMP)  ; LAB_005f4059
    RET                                 ; 005f4058
    PUSH EAX                            ; 005f4059
        ;   Label: LAB_005f4059
    CALL dword ptr CS:[0x611608]        ; 005f405a | g_ReleaseMutexFunc
    RET                                 ; 005f4061

