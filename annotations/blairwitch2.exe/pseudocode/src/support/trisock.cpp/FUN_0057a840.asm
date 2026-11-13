; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_trisock_cpp_FUN_0057a840(int param_1)
;
;
; XREF[2]:
;   support_trisock.cpp_FUN_0057a750 at 0057a781
;   support_trisock.cpp_FUN_0057a790 at 0057a7ac
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_0265363c
;   undefined4 DAT_02653640
;   undefined4 DAT_02653648
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_memory.c_memset_FUN_005b77c0
;   wincore_winrun.cpp_createMutex_FUN_0058fc90
;   wincore_winrun.cpp_createThread_FUN_0058fd20
;   wincore_winrun.cpp_releaseMutex_FUN_0058fd00
;   wincore_winrun.cpp_sleep_FUN_0058fd90
;   wincore_winrun.cpp_waitForMutex_FUN_0058fca0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057a840
        ;   Label: support_trisock.cpp_FUN_0057a840
    PUSH ESI                            ; 0057a841
    PUSH EDI                            ; 0057a842
    PUSH EBP                            ; 0057a843
    MOV EBP,ESP                         ; 0057a844
    AND ESP,0xfffffff8                  ; 0057a846
    MOV EBX,dword ptr [EBP + 0x14]      ; 0057a849
    PUSH 0x2b8                          ; 0057a84c
    PUSH 0x0                            ; 0057a851
    LEA EAX,[EBX + 0x104]               ; 0057a853
    PUSH EAX                            ; 0057a859
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0057a85a
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    MOV EDX,dword ptr [0x0265363c]      ; 0057a85f | DAT_0265363c
    ADD ESP,0xc                         ; 0057a865
    TEST EDX,EDX                        ; 0057a868
    JZ 0x0057a906                       ; 0057a86a
        ;   XREF to: 0057a906 (CONDITIONAL_JUMP)  ; LAB_0057a906
    MOV EDI,dword ptr [0x0265363c]      ; 0057a870 | DAT_0265363c
        ;   Label: LAB_0057a870
    PUSH EDI                            ; 0057a876
    CALL wincore_winrun.cpp_waitForMutex_FUN_0058fca0 ; 0057a877
        ;   XREF to: 0058fca0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_waitForMutex_FUN_0058fca0(HANDLE mutex_handle)
    MOV dword ptr [EBX + 0x3bc],0x1     ; 0057a87c
    MOV EAX,0x2653640                   ; 0057a886
    MOV EDX,dword ptr [0x02653640]      ; 0057a88b | DAT_02653640
    ADD ESP,0x4                         ; 0057a891
    TEST EDX,EDX                        ; 0057a894
    JZ 0x0057a8b0                       ; 0057a896
        ;   XREF to: 0057a8b0 (CONDITIONAL_JUMP)  ; LAB_0057a8b0
    MOV EAX,dword ptr [EAX]             ; 0057a898
        ;   Label: LAB_0057a898
    MOV ECX,dword ptr [EAX + 0x3c0]     ; 0057a89a
    ADD EAX,0x3c0                       ; 0057a8a0
    TEST ECX,ECX                        ; 0057a8a5
    JNZ 0x0057a898                      ; 0057a8a7
        ;   XREF to: 0057a898 (CONDITIONAL_JUMP)  ; LAB_0057a898
    LEA EAX,[EAX]                       ; 0057a8a9
    NOP                                 ; 0057a8af
    MOV dword ptr [EAX],EBX             ; 0057a8b0
        ;   Label: LAB_0057a8b0
    MOV dword ptr [EBX + 0x3c0],0x0     ; 0057a8b2
    CMP dword ptr [0x02653648],0x0      ; 0057a8bc | DAT_02653648
    JZ 0x0057a8e3                       ; 0057a8c3
        ;   XREF to: 0057a8e3 (CONDITIONAL_JUMP)  ; LAB_0057a8e3
    CMP dword ptr [0x02653648],0x2      ; 0057a8c5 | DAT_02653648
        ;   Label: LAB_0057a8c5
    JZ 0x0057a8e3                       ; 0057a8cc
        ;   XREF to: 0057a8e3 (CONDITIONAL_JUMP)  ; LAB_0057a8e3
    PUSH 0x0                            ; 0057a8ce
    PUSH 0x0                            ; 0057a8d0
    CALL wincore_winrun.cpp_sleep_FUN_0058fd90 ; 0057a8d2
        ;   XREF to: 0058fd90 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_sleep_FUN_0058fd90(double seconds)
    ADD ESP,0x8                         ; 0057a8d7
    CMP dword ptr [0x02653648],0x0      ; 0057a8da | DAT_02653648
    JNZ 0x0057a8c5                      ; 0057a8e1
        ;   XREF to: 0057a8c5 (CONDITIONAL_JUMP)  ; LAB_0057a8c5
    CMP dword ptr [0x02653648],0x1      ; 0057a8e3 | DAT_02653648
        ;   Label: LAB_0057a8e3
    JL 0x0057a940                       ; 0057a8ea
        ;   XREF to: 0057a940 (CONDITIONAL_JUMP)  ; LAB_0057a940
    LEA EAX,[EAX]                       ; 0057a8ec
    MOV ESI,dword ptr [0x0265363c]      ; 0057a8f0 | DAT_0265363c
        ;   Label: LAB_0057a8f0
    PUSH ESI                            ; 0057a8f6
    CALL wincore_winrun.cpp_releaseMutex_FUN_0058fd00 ; 0057a8f7
        ;   XREF to: 0058fd00 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_releaseMutex_FUN_0058fd00(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 0057a8fc
    MOV ESP,EBP                         ; 0057a8ff
    POP EBP                             ; 0057a901
    POP EDI                             ; 0057a902
    POP ESI                             ; 0057a903
    POP EBX                             ; 0057a904
    RET                                 ; 0057a905
    CALL wincore_winrun.cpp_createMutex_FUN_0058fc90 ; 0057a906
        ;   XREF to: 0058fc90 (UNCONDITIONAL_CALL)  ; HANDLE wincore_winrun.cpp_createMutex_FUN_0058fc90()
        ;   Label: LAB_0057a906
    MOV [0x0265363c],EAX                ; 0057a90b | DAT_0265363c
    TEST EAX,EAX                        ; 0057a910
    JNZ 0x0057a870                      ; 0057a912
        ;   XREF to: 0057a870 (CONDITIONAL_JUMP)  ; LAB_0057a870
    MOV ECX,0x5ed31c                    ; 0057a918
    MOV ESI,0x70a                       ; 0057a91d
    PUSH 0x5ed333                       ; 0057a922
    MOV dword ptr [0x01d046a0],ECX      ; 0057a927 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0057a92d | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0057a933
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0057a938
    JMP 0x0057a870                      ; 0057a93b
        ;   XREF to: 0057a870 (UNCONDITIONAL_JUMP)  ; LAB_0057a870
    PUSH 0x0                            ; 0057a940
        ;   Label: LAB_0057a940
    MOV EDX,0x1                         ; 0057a942
    PUSH 0x57a480                       ; 0057a947
    MOV dword ptr [0x02653648],EDX      ; 0057a94c | DAT_02653648
    CALL wincore_winrun.cpp_createThread_FUN_0058fd20 ; 0057a952
        ;   XREF to: 0058fd20 (UNCONDITIONAL_CALL)  ; HANDLE wincore_winrun.cpp_createThread_FUN_0058fd20(LPTHREAD_START_ROUTINE thread_func, LPVOID thread_param)
    ADD ESP,0x8                         ; 0057a957
    CMP dword ptr [0x02653648],0x1      ; 0057a95a | DAT_02653648
    JNZ 0x0057a8f0                      ; 0057a961
        ;   XREF to: 0057a8f0 (CONDITIONAL_JUMP)  ; LAB_0057a8f0
    PUSH 0x0                            ; 0057a963
        ;   Label: LAB_0057a963
    PUSH 0x0                            ; 0057a965
    CALL wincore_winrun.cpp_sleep_FUN_0058fd90 ; 0057a967
        ;   XREF to: 0058fd90 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_sleep_FUN_0058fd90(double seconds)
    ADD ESP,0x8                         ; 0057a96c
    CMP dword ptr [0x02653648],0x1      ; 0057a96f | DAT_02653648
    JZ 0x0057a963                       ; 0057a976
        ;   XREF to: 0057a963 (CONDITIONAL_JUMP)  ; LAB_0057a963
    JMP 0x0057a8f0                      ; 0057a978
        ;   XREF to: 0057a8f0 (UNCONDITIONAL_JUMP)  ; LAB_0057a8f0

