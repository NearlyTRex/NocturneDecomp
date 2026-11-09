; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_trisock_cpp_FUN_00570f00(void)
;
;
; XREF[1]:
;   support_trisock.cpp_FUN_00570ea0 at 00570ee7
;
; Referenced Globals:
;   undefined4 DAT_02cfd8a8
;   undefined4 DAT_02cfd8b4
;
; Called Functions:
;   wincore_winrun.cpp_createThread_FUN_005819b0
;   wincore_winrun.cpp_FUN_00581a20
;   wincore_winrun.cpp_releaseMutex_FUN_00581990
;   wincore_winrun.cpp_sleep_FUN_00581a40
;
; *****************************************************************************

section .text

    MOV dword ptr [EAX],EBX             ; 00570f00
        ;   Label: support_trisock.cpp_FUN_00570f00
    MOV dword ptr [EBX + 0x3c0],0x0     ; 00570f02
    CMP dword ptr [0x02cfd8b4],0x0      ; 00570f0c | DAT_02cfd8b4
    JZ 0x00570f33                       ; 00570f13
        ;   XREF to: 00570f33 (CONDITIONAL_JUMP)  ; LAB_00570f33
    CMP dword ptr [0x02cfd8b4],0x2      ; 00570f15 | DAT_02cfd8b4
        ;   Label: LAB_00570f15
    JZ 0x00570f33                       ; 00570f1c
        ;   XREF to: 00570f33 (CONDITIONAL_JUMP)  ; LAB_00570f33
    PUSH 0x0                            ; 00570f1e
    PUSH 0x0                            ; 00570f20
    CALL wincore_winrun.cpp_sleep_FUN_00581a40 ; 00570f22
        ;   XREF to: 00581a40 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_sleep_FUN_00581a40(double seconds)
    ADD ESP,0x8                         ; 00570f27
    CMP dword ptr [0x02cfd8b4],0x0      ; 00570f2a | DAT_02cfd8b4
    JNZ 0x00570f15                      ; 00570f31
        ;   XREF to: 00570f15 (CONDITIONAL_JUMP)  ; LAB_00570f15
    CMP dword ptr [0x02cfd8b4],0x1      ; 00570f33 | DAT_02cfd8b4
        ;   Label: LAB_00570f33
    JL 0x00570f50                       ; 00570f3a
        ;   XREF to: 00570f50 (CONDITIONAL_JUMP)  ; LAB_00570f50
    MOV EAX,[0x02cfd8a8]                ; 00570f3c | DAT_02cfd8a8
    PUSH EAX                            ; 00570f41
    CALL wincore_winrun.cpp_releaseMutex_FUN_00581990 ; 00570f42
        ;   XREF to: 00581990 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_releaseMutex_FUN_00581990(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 00570f47
    MOV ESP,EBP                         ; 00570f4a
    POP EBP                             ; 00570f4c
    POP ESI                             ; 00570f4d
    POP EBX                             ; 00570f4e
    RET                                 ; 00570f4f
    PUSH 0x0                            ; 00570f50
        ;   Label: LAB_00570f50
    MOV EBX,0x1                         ; 00570f52
    PUSH 0x570ae0                       ; 00570f57
    MOV dword ptr [0x02cfd8b4],EBX      ; 00570f5c | DAT_02cfd8b4
    CALL wincore_winrun.cpp_createThread_FUN_005819b0 ; 00570f62
        ;   XREF to: 005819b0 (UNCONDITIONAL_CALL)  ; HANDLE wincore_winrun.cpp_createThread_FUN_005819b0(LPTHREAD_START_ROUTINE thread_func, LPVOID thread_param)
    ADD ESP,0x8                         ; 00570f67
    MOV EBX,EAX                         ; 00570f6a
    CMP dword ptr [0x02cfd8b4],0x1      ; 00570f6c | DAT_02cfd8b4
    JNZ 0x00570f90                      ; 00570f73
        ;   XREF to: 00570f90 (CONDITIONAL_JUMP)  ; LAB_00570f90
    PUSH 0x0                            ; 00570f75
        ;   Label: LAB_00570f75
    PUSH 0x0                            ; 00570f77
    CALL wincore_winrun.cpp_sleep_FUN_00581a40 ; 00570f79
        ;   XREF to: 00581a40 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_sleep_FUN_00581a40(double seconds)
    ADD ESP,0x8                         ; 00570f7e
    CMP dword ptr [0x02cfd8b4],0x1      ; 00570f81 | DAT_02cfd8b4
    JZ 0x00570f75                       ; 00570f88
        ;   XREF to: 00570f75 (CONDITIONAL_JUMP)  ; LAB_00570f75
    LEA EAX,[EAX]                       ; 00570f8a
    PUSH EBX                            ; 00570f90
        ;   Label: LAB_00570f90
    CALL wincore_winrun.cpp_FUN_00581a20 ; 00570f91
        ;   XREF to: 00581a20 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_00581a20()
    ADD ESP,0x4                         ; 00570f96
    MOV EAX,[0x02cfd8a8]                ; 00570f99 | DAT_02cfd8a8
    PUSH EAX                            ; 00570f9e
    CALL wincore_winrun.cpp_releaseMutex_FUN_00581990 ; 00570f9f
        ;   XREF to: 00581990 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_releaseMutex_FUN_00581990(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 00570fa4
    MOV ESP,EBP                         ; 00570fa7
    POP EBP                             ; 00570fa9
    POP ESI                             ; 00570faa
    POP EBX                             ; 00570fab
    RET                                 ; 00570fac

