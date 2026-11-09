; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_trisock_cpp_FUN_0059df10(void)
;
;
; XREF[1]:
;   support_trisock.cpp_FUN_0059deb0 at 0059def7
;
; Referenced Globals:
;   undefined4 DAT_02c8ae58
;   undefined4 DAT_02c8ae64
;
; Called Functions:
;   wincore_winrun.cpp_createThread_FUN_005b37d0
;   wincore_winrun.cpp_FUN_005b3840
;   wincore_winrun.cpp_releaseMutex_FUN_005b37b0
;   wincore_winrun.cpp_sleep_FUN_005b3860
;
; *****************************************************************************

section .text

    MOV dword ptr [EAX],EBX             ; 0059df10
        ;   Label: support_trisock.cpp_FUN_0059df10
    MOV dword ptr [EBX + 0x3c0],0x0     ; 0059df12
    CMP dword ptr [0x02c8ae64],0x0      ; 0059df1c | DAT_02c8ae64
    JZ 0x0059df43                       ; 0059df23
        ;   XREF to: 0059df43 (CONDITIONAL_JUMP)  ; LAB_0059df43
    CMP dword ptr [0x02c8ae64],0x2      ; 0059df25 | DAT_02c8ae64
        ;   Label: LAB_0059df25
    JZ 0x0059df43                       ; 0059df2c
        ;   XREF to: 0059df43 (CONDITIONAL_JUMP)  ; LAB_0059df43
    PUSH 0x0                            ; 0059df2e
    PUSH 0x0                            ; 0059df30
    CALL wincore_winrun.cpp_sleep_FUN_005b3860 ; 0059df32
        ;   XREF to: 005b3860 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_sleep_FUN_005b3860(double seconds)
    ADD ESP,0x8                         ; 0059df37
    CMP dword ptr [0x02c8ae64],0x0      ; 0059df3a | DAT_02c8ae64
    JNZ 0x0059df25                      ; 0059df41
        ;   XREF to: 0059df25 (CONDITIONAL_JUMP)  ; LAB_0059df25
    CMP dword ptr [0x02c8ae64],0x1      ; 0059df43 | DAT_02c8ae64
        ;   Label: LAB_0059df43
    JL 0x0059df60                       ; 0059df4a
        ;   XREF to: 0059df60 (CONDITIONAL_JUMP)  ; LAB_0059df60
    MOV EAX,[0x02c8ae58]                ; 0059df4c | DAT_02c8ae58
    PUSH EAX                            ; 0059df51
    CALL wincore_winrun.cpp_releaseMutex_FUN_005b37b0 ; 0059df52
        ;   XREF to: 005b37b0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_releaseMutex_FUN_005b37b0(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 0059df57
    MOV ESP,EBP                         ; 0059df5a
    POP EBP                             ; 0059df5c
    POP ESI                             ; 0059df5d
    POP EBX                             ; 0059df5e
    RET                                 ; 0059df5f
    PUSH 0x0                            ; 0059df60
        ;   Label: LAB_0059df60
    MOV EBX,0x1                         ; 0059df62
    PUSH 0x59daf0                       ; 0059df67
    MOV dword ptr [0x02c8ae64],EBX      ; 0059df6c | DAT_02c8ae64
    CALL wincore_winrun.cpp_createThread_FUN_005b37d0 ; 0059df72
        ;   XREF to: 005b37d0 (UNCONDITIONAL_CALL)  ; HANDLE wincore_winrun.cpp_createThread_FUN_005b37d0(LPTHREAD_START_ROUTINE thread_func, LPVOID thread_param)
    ADD ESP,0x8                         ; 0059df77
    MOV EBX,EAX                         ; 0059df7a
    CMP dword ptr [0x02c8ae64],0x1      ; 0059df7c | DAT_02c8ae64
    JNZ 0x0059dfa0                      ; 0059df83
        ;   XREF to: 0059dfa0 (CONDITIONAL_JUMP)  ; LAB_0059dfa0
    PUSH 0x0                            ; 0059df85
        ;   Label: LAB_0059df85
    PUSH 0x0                            ; 0059df87
    CALL wincore_winrun.cpp_sleep_FUN_005b3860 ; 0059df89
        ;   XREF to: 005b3860 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_sleep_FUN_005b3860(double seconds)
    ADD ESP,0x8                         ; 0059df8e
    CMP dword ptr [0x02c8ae64],0x1      ; 0059df91 | DAT_02c8ae64
    JZ 0x0059df85                       ; 0059df98
        ;   XREF to: 0059df85 (CONDITIONAL_JUMP)  ; LAB_0059df85
    LEA EAX,[EAX]                       ; 0059df9a
    PUSH EBX                            ; 0059dfa0
        ;   Label: LAB_0059dfa0
    CALL wincore_winrun.cpp_FUN_005b3840 ; 0059dfa1
        ;   XREF to: 005b3840 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005b3840()
    ADD ESP,0x4                         ; 0059dfa6
    MOV EAX,[0x02c8ae58]                ; 0059dfa9 | DAT_02c8ae58
    PUSH EAX                            ; 0059dfae
    CALL wincore_winrun.cpp_releaseMutex_FUN_005b37b0 ; 0059dfaf
        ;   XREF to: 005b37b0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_releaseMutex_FUN_005b37b0(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 0059dfb4
    MOV ESP,EBP                         ; 0059dfb7
    POP EBP                             ; 0059dfb9
    POP ESI                             ; 0059dfba
    POP EBX                             ; 0059dfbb
    RET                                 ; 0059dfbc

