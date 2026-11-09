; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_trisock_cpp_FUN_0057a8b0(void)
;
;
; XREF[1]:
;   support_trisock.cpp_FUN_0057a840 at 0057a896
;
; Referenced Globals:
;   undefined4 DAT_0265363c
;   undefined4 DAT_02653648
;
; Called Functions:
;   wincore_winrun.cpp_createThread_FUN_0058fd20
;   wincore_winrun.cpp_releaseMutex_FUN_0058fd00
;   wincore_winrun.cpp_sleep_FUN_0058fd90
;
; *****************************************************************************

section .text

    MOV dword ptr [EAX],EBX             ; 0057a8b0
        ;   Label: support_trisock.cpp_FUN_0057a8b0
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

