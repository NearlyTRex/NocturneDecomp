; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; HANDLE __cdecl wincore_winrun_cpp_createThread_FUN_005819b0(LPTHREAD_START_ROUTINE thread_func,LPVOID thread_param)
;
; Parameters:
; LPTHREAD_START_ROUTINE Stack[0x4]:4   thread_func
; LPVOID           Stack[0x8]:4   thread_param
;
; XREF[2]:
;   sound_sndmain.cpp_startSoundThread_FUN_00558d70 at 00558db5
;   support_trisock.cpp_FUN_00570f00 at 00570f62
;
; Referenced Globals:
;   void* PTR_CreateThread_005b352c = 001b3c98
;
; Called Functions:
;   CreateThread
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 005819b0
        ;   Label: wincore_winrun.cpp_createThread_FUN_005819b0
    MOV EAX,ESP                         ; 005819b3
    PUSH EAX                            ; 005819b5
    PUSH 0x0                            ; 005819b6
    MOV EDX,dword ptr [ESP + 0x14]      ; 005819b8
    PUSH EDX                            ; 005819bc
    MOV ECX,dword ptr [ESP + 0x14]      ; 005819bd
    PUSH ECX                            ; 005819c1
    PUSH 0x0                            ; 005819c2
    PUSH 0x0                            ; 005819c4
    CALL dword ptr CS:[0x5b352c]        ; 005819c6 | PTR_CreateThread_005b352c
    ADD ESP,0x4                         ; 005819cd
    RET                                 ; 005819d0

