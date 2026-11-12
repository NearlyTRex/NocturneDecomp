; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_trisock_cpp_FUN_0059deb0(int param_1)
;
;
; XREF[2]:
;   support_trisock.cpp_FUN_0059ddc0 at 0059ddf1
;   support_trisock.cpp_FUN_0059de00 at 0059de1c
;
; Referenced Globals:
;   undefined4 DAT_02c8ae58
;   undefined4 DAT_02c8ae5c
;
; Called Functions:
;   crt_memory.c_memset_FUN_005bfb70
;   wincore_winrun.cpp_waitForMutex_FUN_005b3750
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059deb0
        ;   Label: support_trisock.cpp_FUN_0059deb0
    PUSH ESI                            ; 0059deb1
    PUSH EBP                            ; 0059deb2
    MOV EBP,ESP                         ; 0059deb3
    AND ESP,0xfffffff8                  ; 0059deb5
    MOV EBX,dword ptr [EBP + 0x10]      ; 0059deb8
    PUSH 0x2b8                          ; 0059debb
    PUSH 0x0                            ; 0059dec0
    LEA EAX,[EBX + 0x104]               ; 0059dec2
    PUSH EAX                            ; 0059dec8
    CALL crt_memory.c_memset_FUN_005bfb70 ; 0059dec9
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0059dece
    MOV EDX,dword ptr [0x02c8ae58]      ; 0059ded1 | DAT_02c8ae58
    PUSH EDX                            ; 0059ded7
    CALL wincore_winrun.cpp_waitForMutex_FUN_005b3750 ; 0059ded8
        ;   XREF to: 005b3750 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_waitForMutex_FUN_005b3750(HANDLE mutex_handle)
    MOV dword ptr [EBX + 0x3bc],0x1     ; 0059dedd
    MOV EAX,0x2c8ae5c                   ; 0059dee7
    MOV ECX,dword ptr [0x02c8ae5c]      ; 0059deec | DAT_02c8ae5c
    ADD ESP,0x4                         ; 0059def2
    TEST ECX,ECX                        ; 0059def5
    JZ 0x0059df10                       ; 0059def7
        ;   XREF to: 0059df10 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EAX]             ; 0059def9
        ;   Label: LAB_0059def9
    MOV ESI,dword ptr [EAX + 0x3c0]     ; 0059defb
    ADD EAX,0x3c0                       ; 0059df01
    TEST ESI,ESI                        ; 0059df06
    JNZ 0x0059def9                      ; 0059df08
        ;   XREF to: 0059def9 (CONDITIONAL_JUMP)  ; LAB_0059def9
    LEA EAX,[EAX]                       ; 0059df0a

