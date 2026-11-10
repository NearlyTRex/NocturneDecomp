; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_FUN_00571f10(void)
;
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_shutdown_FUN_00503ed0 at 00503ef1
;
; Referenced Globals:
;   TerminatedCString s_killSockets_005d6df7
;   undefined4 DAT_02cfd8a8
;   undefined4 DAT_02cfd8ac
;   undefined4 DAT_02cfd8b4
;
; Called Functions:
;   crt_wsock32.c_WSACleanup
;   support_trisock.cpp_FUN_00570e80
;   wincore_winrun.cpp_FUN_00581c70
;   wincore_winrun.cpp_releaseMutex_FUN_00581990
;   wincore_winrun.cpp_sleep_FUN_00581a40
;   wincore_winrun.cpp_waitForMutex_FUN_00581930
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00571f10
        ;   Label: support_trisock.cpp_FUN_00571f10
    PUSH ESI                            ; 00571f11
    PUSH EDI                            ; 00571f12
    PUSH EBP                            ; 00571f13
    MOV EBP,ESP                         ; 00571f14
    AND ESP,0xfffffff8                  ; 00571f16
    PUSH 0x5d6df7                       ; 00571f19 | = "killSockets\n"
    CALL wincore_winrun.cpp_FUN_00581c70 ; 00571f1e
        ;   XREF to: 00581c70 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_00581c70()
    MOV EDX,dword ptr [0x02cfd8a8]      ; 00571f23 | DAT_02cfd8a8
    ADD ESP,0x4                         ; 00571f29
    TEST EDX,EDX                        ; 00571f2c
    JNZ 0x00571f45                      ; 00571f2e
        ;   XREF to: 00571f45 (CONDITIONAL_JUMP)  ; LAB_00571f45
    CMP dword ptr [0x02cfd8b4],0x0      ; 00571f30 | DAT_02cfd8b4
        ;   Label: LAB_00571f30
    JNZ 0x00571f90                      ; 00571f37
        ;   XREF to: 00571f90 (CONDITIONAL_JUMP)  ; LAB_00571f90
    CALL crt_wsock32.c_WSACleanup       ; 00571f39
        ;   XREF to: 005b2562 (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_WSACleanup()
    MOV ESP,EBP                         ; 00571f3e
    POP EBP                             ; 00571f40
    POP EDI                             ; 00571f41
    POP ESI                             ; 00571f42
    POP EBX                             ; 00571f43
    RET                                 ; 00571f44
    PUSH EDX                            ; 00571f45
        ;   Label: LAB_00571f45
    CALL wincore_winrun.cpp_waitForMutex_FUN_00581930 ; 00571f46
        ;   XREF to: 00581930 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_waitForMutex_FUN_00581930(HANDLE mutex_handle)
    MOV EBX,dword ptr [0x02cfd8ac]      ; 00571f4b | DAT_02cfd8ac
    ADD ESP,0x4                         ; 00571f51
    TEST EBX,EBX                        ; 00571f54
    JZ 0x00571f80                       ; 00571f56
        ;   XREF to: 00571f80 (CONDITIONAL_JUMP)  ; LAB_00571f80
    MOV ESI,dword ptr [0x02cfd8ac]      ; 00571f58 | DAT_02cfd8ac
        ;   Label: LAB_00571f58
    PUSH ESI                            ; 00571f5e
    CALL support_trisock.cpp_FUN_00570e80 ; 00571f5f
        ;   XREF to: 00570e80 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_00570e80()
    MOV EDI,dword ptr [0x02cfd8ac]      ; 00571f64 | DAT_02cfd8ac
    ADD ESP,0x4                         ; 00571f6a
    TEST EDI,EDI                        ; 00571f6d
    JNZ 0x00571f58                      ; 00571f6f
        ;   XREF to: 00571f58 (CONDITIONAL_JUMP)  ; LAB_00571f58
    LEA EAX,[EAX]                       ; 00571f71
    LEA EDX,[EDX]                       ; 00571f77
    LEA EAX,[EAX]                       ; 00571f7d
    MOV EAX,[0x02cfd8a8]                ; 00571f80 | DAT_02cfd8a8
        ;   Label: LAB_00571f80
    PUSH EAX                            ; 00571f85
    CALL wincore_winrun.cpp_releaseMutex_FUN_00581990 ; 00571f86
        ;   XREF to: 00581990 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_releaseMutex_FUN_00581990(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 00571f8b
    JMP 0x00571f30                      ; 00571f8e
        ;   XREF to: 00571f30 (UNCONDITIONAL_JUMP)  ; LAB_00571f30
    PUSH 0x0                            ; 00571f90
        ;   Label: LAB_00571f90
    PUSH 0x0                            ; 00571f92
    CALL wincore_winrun.cpp_sleep_FUN_00581a40 ; 00571f94
        ;   XREF to: 00581a40 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_sleep_FUN_00581a40(double seconds)
    ADD ESP,0x8                         ; 00571f99
    JMP 0x00571f30                      ; 00571f9c
        ;   XREF to: 00571f30 (UNCONDITIONAL_JUMP)  ; LAB_00571f30

