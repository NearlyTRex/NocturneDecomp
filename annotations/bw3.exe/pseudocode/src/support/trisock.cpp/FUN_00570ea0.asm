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
;
; Called Functions:
;   crt_memory.c_memset_FUN_005a28f0
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
        ;   XREF to: 00570f00 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EAX]             ; 00570ee9
        ;   Label: LAB_00570ee9
    MOV ESI,dword ptr [EAX + 0x3c0]     ; 00570eeb
    ADD EAX,0x3c0                       ; 00570ef1
    TEST ESI,ESI                        ; 00570ef6
    JNZ 0x00570ee9                      ; 00570ef8
        ;   XREF to: 00570ee9 (CONDITIONAL_JUMP)  ; LAB_00570ee9
    LEA EAX,[EAX]                       ; 00570efa

