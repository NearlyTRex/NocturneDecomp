; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_trisock_cpp_FUN_0059eeb0(void)
;
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_init_FUN_0052c520 at 0052c550
;
; Referenced Globals:
;   TerminatedCString s_initSockets_005f8851
;   TerminatedCString s_support_trisock_cpp_005f885e
;   TerminatedCString s_Can_t_create_mutex_005f8875
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_02c8ae58
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_wsock32.c_WSAStartup
;   wincore_winrun.cpp_createMutex_FUN_005b3740
;   wincore_winrun.cpp_FUN_005b3a90
;
; *****************************************************************************

section .text

    SUB ESP,0x190                       ; 0059eeb0
        ;   Label: support_trisock.cpp_FUN_0059eeb0
    PUSH 0x5f8851                       ; 0059eeb6 | = "initSockets\n"
    CALL wincore_winrun.cpp_FUN_005b3a90 ; 0059eebb
        ;   XREF to: 005b3a90 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005b3a90()
    ADD ESP,0x4                         ; 0059eec0
    MOV EAX,ESP                         ; 0059eec3
    PUSH EAX                            ; 0059eec5
    PUSH 0x101                          ; 0059eec6
    CALL crt_wsock32.c_WSAStartup       ; 0059eecb
        ;   XREF to: 005cf7d8 (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_WSAStartup(WORD wVersionRequired, LPWSADATA lpWSAData)
    CMP dword ptr [0x02c8ae58],0x0      ; 0059eed0 | DAT_02c8ae58
    JZ 0x0059eee0                       ; 0059eed7
        ;   XREF to: 0059eee0 (CONDITIONAL_JUMP)  ; LAB_0059eee0
    ADD ESP,0x190                       ; 0059eed9
        ;   Label: LAB_0059eed9
    RET                                 ; 0059eedf
    CALL wincore_winrun.cpp_createMutex_FUN_005b3740 ; 0059eee0
        ;   XREF to: 005b3740 (UNCONDITIONAL_CALL)  ; HANDLE wincore_winrun.cpp_createMutex_FUN_005b3740()
        ;   Label: LAB_0059eee0
    MOV [0x02c8ae58],EAX                ; 0059eee5 | DAT_02c8ae58
    TEST EAX,EAX                        ; 0059eeea
    JNZ 0x0059eed9                      ; 0059eeec
        ;   XREF to: 0059eed9 (CONDITIONAL_JUMP)  ; LAB_0059eed9
    PUSH EBX                            ; 0059eeee
    MOV ECX,0x5f885e                    ; 0059eeef | = "..\\support\\trisock.cpp"
    MOV EBX,0x927                       ; 0059eef4
    PUSH 0x5f8875                       ; 0059eef9 | = "Can't create mutex"
    MOV dword ptr [0x01d1d400],ECX      ; 0059eefe | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 0059ef04 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0059ef0a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0059ef0f
    POP EBX                             ; 0059ef12
    ADD ESP,0x190                       ; 0059ef13
    RET                                 ; 0059ef19

