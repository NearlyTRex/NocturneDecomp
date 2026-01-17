; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl HANDLE wincore_winrun.cpp_createThread_FUN_005f4070(LPTHREAD_START_ROUTINE thread_func, LPVOID thread_param)
;
; Parameters:
; typedef LPTHREAD_START_ROUTINE PTHREAD_START_ROUTINE Stack[0x4]:4   thread_func
; typedef LPVOID void * Stack[0x8]:4   thread_param
;
; XREF[1]:
;   sound_sndmain.cpp_startSoundThread_FUN_005abc00 at 005abc58
;
; Referenced Globals:
;   CreateThread* g_CreateThreadFunc = 00211c9a
;
; Called Functions:
;   CreateThread
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 005f4070
        ;   Label: wincore_winrun.cpp_createThread_FUN_005f4070
    MOV EAX,ESP                         ; 005f4073
    PUSH EAX                            ; 005f4075
    PUSH 0x0                            ; 005f4076
    MOV EDX,dword ptr [ESP + 0x14]      ; 005f4078
    PUSH EDX                            ; 005f407c
    MOV ECX,dword ptr [ESP + 0x14]      ; 005f407d
    PUSH ECX                            ; 005f4081
    PUSH 0x0                            ; 005f4082
    PUSH 0x0                            ; 005f4084
    CALL dword ptr CS:[0x61151c]        ; 005f4086 | g_CreateThreadFunc
    ADD ESP,0x4                         ; 005f408d
    RET                                 ; 005f4090

