; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl HANDLE __cdecl wincore_winrun_cpp_createMutex_FUN_005f3fe0(void)
;
;
; XREF[9]:
;   shape_memdbg.cpp_acquireDebugMutex_FUN_0050ee5e at 0050ee72
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0 at 0050faa1
;   shape_memdbg.cpp_debugCalloc_FUN_0050f350 at 0050f372
;   shape_memdbg.cpp_debugFree_FUN_0050f460 at 0050f482
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250 at 0050f26a
;   shape_memdbg.cpp_debugMemdump_FUN_0050f6c0 at 0050f6da
;   shape_memdbg.cpp_debugRealloc_FUN_0050f540 at 0050f562
;   shape_memdbg.cpp_openFile_FUN_0050f7a0 at 0050f8c8
;   sound_sndmain.cpp_lockSound_FUN_005abd30 at 005abd3b
;
; Referenced Globals:
;   CREATE_MUTEX_A_FUNC* g_CreateMutexAFunc = 00211c78
;
; Called Functions:
;   CreateMutexA
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 005f3fe0
        ;   Label: wincore_winrun.cpp_createMutex_FUN_005f3fe0
    PUSH 0x0                            ; 005f3fe2
    PUSH 0x0                            ; 005f3fe4
    CALL dword ptr CS:[0x611514]        ; 005f3fe6 | g_CreateMutexAFunc
    RET                                 ; 005f3fed

