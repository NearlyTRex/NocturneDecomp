; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; HANDLE __cdecl wincore_winrun_cpp_createThread_FUN_00559c50(LPTHREAD_START_ROUTINE thread_func,LPVOID thread_param)
;
; Parameters:
; LPTHREAD_START_ROUTINE Stack[0x4]:4   thread_func
; LPVOID           Stack[0x8]:4   thread_param
;
; XREF[1]:
;   sound_sndmain.cpp_startSoundThread_FUN_005286d0 at 00528728
;
; Referenced Globals:
;   void* PTR_CreateThread_005754a0 = 00175b24
;
; Called Functions:
;   CreateThread
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00559c50
        ;   Label: wincore_winrun.cpp_createThread_FUN_00559c50
    MOV EAX,ESP                         ; 00559c53
    PUSH EAX                            ; 00559c55
    PUSH 0x0                            ; 00559c56
    MOV EDX,dword ptr [ESP + 0x14]      ; 00559c58
    PUSH EDX                            ; 00559c5c
    MOV ECX,dword ptr [ESP + 0x14]      ; 00559c5d
    PUSH ECX                            ; 00559c61
    PUSH 0x0                            ; 00559c62
    PUSH 0x0                            ; 00559c64
    CALL dword ptr CS:[0x5754a0]        ; 00559c66 | PTR_CreateThread_005754a0
    ADD ESP,0x4                         ; 00559c6d
    RET                                 ; 00559c70

