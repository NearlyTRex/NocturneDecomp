; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_trisock_cpp_FUN_00570ea0(int param_1)
;
;
; XREF[2]:
;   support_trisock.cpp_FUN_00570db0 at 00570de1
;   support_trisock.cpp_FUN_00570df0 at 00570e0c
;
; Referenced Globals:
;   undefined4 DAT_02cfd8a8
;   undefined4 DAT_02cfd8ac
;   undefined4 DAT_02cfd8b4
;
; Called Functions:
;   crt_memory.c_memset_FUN_005a28f0
;   wincore_winrun.cpp_createThread_FUN_005819b0
;   wincore_winrun.cpp_FUN_00581a20
;   wincore_winrun.cpp_releaseMutex_FUN_00581990
;   wincore_winrun.cpp_sleep_FUN_00581a40
;   wincore_winrun.cpp_waitForMutex_FUN_00581930
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570ea0
        ;   Label: support_trisock.cpp_FUN_00570ea0
    PUSH ESI                            ; 00570ea1
    PUSH EBP                            ; 00570ea2
    MOV EBP,ESP                         ; 00570ea3
    AND ESP,0xfffffff8                  ; 00570ea5
    MOV EBX,dword ptr [EBP + 0x10]      ; 00570ea8
    PUSH 0x2b8                          ; 00570eab
    PUSH 0x0                            ; 00570eb0
    LEA EAX,[EBX + 0x104]               ; 00570eb2
    PUSH EAX                            ; 00570eb8
    CALL crt_memory.c_memset_FUN_005a28f0 ; 00570eb9
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00570ebe
    MOV EDX,dword ptr [0x02cfd8a8]      ; 00570ec1 | DAT_02cfd8a8
    PUSH EDX                            ; 00570ec7
    CALL wincore_winrun.cpp_waitForMutex_FUN_00581930 ; 00570ec8
        ;   XREF to: 00581930 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_waitForMutex_FUN_00581930(HANDLE mutex_handle)
    MOV dword ptr [EBX + 0x3bc],0x1     ; 00570ecd
    MOV EAX,0x2cfd8ac                   ; 00570ed7
    MOV ECX,dword ptr [0x02cfd8ac]      ; 00570edc | DAT_02cfd8ac
    ADD ESP,0x4                         ; 00570ee2
    TEST ECX,ECX                        ; 00570ee5
    JZ 0x00570f00                       ; 00570ee7
        ;   XREF to: 00570f00 (CONDITIONAL_JUMP)  ; LAB_00570f00
    MOV EAX,dword ptr [EAX]             ; 00570ee9
        ;   Label: LAB_00570ee9
    MOV ESI,dword ptr [EAX + 0x3c0]     ; 00570eeb
    ADD EAX,0x3c0                       ; 00570ef1
    TEST ESI,ESI                        ; 00570ef6
    JNZ 0x00570ee9                      ; 00570ef8
        ;   XREF to: 00570ee9 (CONDITIONAL_JUMP)  ; LAB_00570ee9
    LEA EAX,[EAX]                       ; 00570efa
    MOV dword ptr [EAX],EBX             ; 00570f00
        ;   Label: LAB_00570f00
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

