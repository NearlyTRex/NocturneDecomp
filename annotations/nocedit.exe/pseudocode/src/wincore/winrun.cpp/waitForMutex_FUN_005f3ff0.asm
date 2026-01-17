; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int wincore_winrun.cpp_waitForMutex_FUN_005f3ff0(HANDLE mutex_handle)
;
; Parameters:
; typedef HANDLE void * Stack[0x4]:4   mutex_handle
;
; XREF[9]:
;   shape_memdbg.cpp_acquireDebugMutex_FUN_0050ee5e at 0050ee84
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0 at 0050fab2
;   shape_memdbg.cpp_debugCalloc_FUN_0050f350 at 0050f383
;   shape_memdbg.cpp_debugFree_FUN_0050f460 at 0050f493
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250 at 0050f27b
;   shape_memdbg.cpp_debugMemdump_FUN_0050f6c0 at 0050f6eb
;   shape_memdbg.cpp_debugRealloc_FUN_0050f540 at 0050f573
;   shape_memdbg.cpp_openFile_FUN_0050f7a0 at 0050f8d9
;   sound_sndmain.cpp_lockSound_FUN_005abd30 at 005abd75
;
; Referenced Globals:
;   WaitForSingleObject* g_WaitForSingleObjectFunc = 002122c4
;
; Called Functions:
;   WaitForSingleObject
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005f3ff0
        ;   Label: wincore_winrun.cpp_waitForMutex_FUN_005f3ff0
    TEST EAX,EAX                        ; 005f3ff4
    JNZ 0x005f3ff9                      ; 005f3ff6
        ;   XREF to: 005f3ff9 (CONDITIONAL_JUMP)  ; LAB_005f3ff9
    RET                                 ; 005f3ff8
    PUSH -0x1                           ; 005f3ff9
        ;   Label: LAB_005f3ff9
    PUSH EAX                            ; 005f3ffb
    CALL dword ptr CS:[0x61166c]        ; 005f3ffc | g_WaitForSingleObjectFunc
    TEST EAX,EAX                        ; 005f4003
    SETZ AL                             ; 005f4005
    AND EAX,0xff                        ; 005f4008
    RET                                 ; 005f400d

