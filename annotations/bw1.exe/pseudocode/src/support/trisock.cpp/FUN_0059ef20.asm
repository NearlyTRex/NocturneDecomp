; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_FUN_0059ef20(void)
;
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_shutdown_FUN_0052c5d0 at 0052c5f1
;
; Referenced Globals:
;   TerminatedCString s_killSockets_005f8888
;   undefined4 DAT_02c8ae58
;   undefined4 DAT_02c8ae5c
;   undefined4 DAT_02c8ae64
;
; Called Functions:
;   crt_wsock32.c_WSACleanup
;   support_trisock.cpp_FUN_0059de90
;   wincore_winrun.cpp_FUN_005b3a90
;   wincore_winrun.cpp_releaseMutex_FUN_005b37b0
;   wincore_winrun.cpp_sleep_FUN_005b3860
;   wincore_winrun.cpp_waitForMutex_FUN_005b3750
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059ef20
        ;   Label: support_trisock.cpp_FUN_0059ef20
    PUSH ESI                            ; 0059ef21
    PUSH EDI                            ; 0059ef22
    PUSH EBP                            ; 0059ef23
    MOV EBP,ESP                         ; 0059ef24
    AND ESP,0xfffffff8                  ; 0059ef26
    PUSH 0x5f8888                       ; 0059ef29 | = "killSockets\n"
    CALL wincore_winrun.cpp_FUN_005b3a90 ; 0059ef2e
        ;   XREF to: 005b3a90 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005b3a90()
    MOV EDX,dword ptr [0x02c8ae58]      ; 0059ef33 | DAT_02c8ae58
    ADD ESP,0x4                         ; 0059ef39
    TEST EDX,EDX                        ; 0059ef3c
    JNZ 0x0059ef55                      ; 0059ef3e
        ;   XREF to: 0059ef55 (CONDITIONAL_JUMP)  ; LAB_0059ef55
    CMP dword ptr [0x02c8ae64],0x0      ; 0059ef40 | DAT_02c8ae64
        ;   Label: LAB_0059ef40
    JNZ 0x0059efa0                      ; 0059ef47
        ;   XREF to: 0059efa0 (CONDITIONAL_JUMP)  ; LAB_0059efa0
    CALL crt_wsock32.c_WSACleanup       ; 0059ef49
        ;   XREF to: 005cf7d2 (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_WSACleanup()
    MOV ESP,EBP                         ; 0059ef4e
    POP EBP                             ; 0059ef50
    POP EDI                             ; 0059ef51
    POP ESI                             ; 0059ef52
    POP EBX                             ; 0059ef53
    RET                                 ; 0059ef54
    PUSH EDX                            ; 0059ef55
        ;   Label: LAB_0059ef55
    CALL wincore_winrun.cpp_waitForMutex_FUN_005b3750 ; 0059ef56
        ;   XREF to: 005b3750 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_waitForMutex_FUN_005b3750(HANDLE mutex_handle)
    MOV EBX,dword ptr [0x02c8ae5c]      ; 0059ef5b | DAT_02c8ae5c
    ADD ESP,0x4                         ; 0059ef61
    TEST EBX,EBX                        ; 0059ef64
    JZ 0x0059ef90                       ; 0059ef66
        ;   XREF to: 0059ef90 (CONDITIONAL_JUMP)  ; LAB_0059ef90
    MOV ESI,dword ptr [0x02c8ae5c]      ; 0059ef68 | DAT_02c8ae5c
        ;   Label: LAB_0059ef68
    PUSH ESI                            ; 0059ef6e
    CALL support_trisock.cpp_FUN_0059de90 ; 0059ef6f
        ;   XREF to: 0059de90 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_0059de90()
    MOV EDI,dword ptr [0x02c8ae5c]      ; 0059ef74 | DAT_02c8ae5c
    ADD ESP,0x4                         ; 0059ef7a
    TEST EDI,EDI                        ; 0059ef7d
    JNZ 0x0059ef68                      ; 0059ef7f
        ;   XREF to: 0059ef68 (CONDITIONAL_JUMP)  ; LAB_0059ef68
    LEA EAX,[EAX]                       ; 0059ef81
    LEA EDX,[EDX]                       ; 0059ef87
    LEA EAX,[EAX]                       ; 0059ef8d
    MOV EAX,[0x02c8ae58]                ; 0059ef90 | DAT_02c8ae58
        ;   Label: LAB_0059ef90
    PUSH EAX                            ; 0059ef95
    CALL wincore_winrun.cpp_releaseMutex_FUN_005b37b0 ; 0059ef96
        ;   XREF to: 005b37b0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_releaseMutex_FUN_005b37b0(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 0059ef9b
    JMP 0x0059ef40                      ; 0059ef9e
        ;   XREF to: 0059ef40 (UNCONDITIONAL_JUMP)  ; LAB_0059ef40
    PUSH 0x0                            ; 0059efa0
        ;   Label: LAB_0059efa0
    PUSH 0x0                            ; 0059efa2
    CALL wincore_winrun.cpp_sleep_FUN_005b3860 ; 0059efa4
        ;   XREF to: 005b3860 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_sleep_FUN_005b3860(double seconds)
    ADD ESP,0x8                         ; 0059efa9
    JMP 0x0059ef40                      ; 0059efac
        ;   XREF to: 0059ef40 (UNCONDITIONAL_JUMP)  ; LAB_0059ef40

