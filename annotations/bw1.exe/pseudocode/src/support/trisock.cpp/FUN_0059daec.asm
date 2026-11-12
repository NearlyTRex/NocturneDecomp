; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trisock_cpp_FUN_0059daec(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02c8ae58
;   undefined4 DAT_02c8ae5c
;   undefined4 DAT_02c8ae60
;   undefined4 DAT_02c8ae64
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005c0357
;   support_trisock.cpp_formatIPAddress_FUN_0059c590
;   support_trisock.cpp_FUN_0059dfc0
;   support_trisock.cpp_FUN_0059f1a0
;   support_trisock.cpp_FUN_0059f230
;   wincore_winrun.cpp_FUN_005b3a90
;   wincore_winrun.cpp_releaseMutex_FUN_005b37b0
;   wincore_winrun.cpp_sleep_FUN_005b3860
;   wincore_winrun.cpp_waitForMutex_FUN_005b3750
;   wincore_winrun.cpp_waitForMutexTimeout_FUN_005b3770
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 0059daec
        ;   Label: support_trisock.cpp_FUN_0059daec
    PUSH EBX                            ; 0059daf0
    PUSH ESI                            ; 0059daf1
    PUSH EDI                            ; 0059daf2
    PUSH EBP                            ; 0059daf3
    MOV EBP,ESP                         ; 0059daf4
    SUB ESP,0x4e0                       ; 0059daf6
    AND ESP,0xfffffff8                  ; 0059dafc
    CMP dword ptr [0x02c8ae64],0x1      ; 0059daff | DAT_02c8ae64
    JZ 0x0059db25                       ; 0059db06
        ;   XREF to: 0059db25 (CONDITIONAL_JUMP)  ; LAB_0059db25
    CMP dword ptr [0x02c8ae64],0x1      ; 0059db08 | DAT_02c8ae64
        ;   Label: LAB_0059db08
    JG 0x0059db31                       ; 0059db0f
        ;   XREF to: 0059db31 (CONDITIONAL_JUMP)  ; LAB_0059db31
    XOR ECX,ECX                         ; 0059db11
    MOV dword ptr [0x02c8ae64],ECX      ; 0059db13 | DAT_02c8ae64
    MOV EAX,0x1                         ; 0059db19
    MOV ESP,EBP                         ; 0059db1e
    POP EBP                             ; 0059db20
    POP EDI                             ; 0059db21
    POP ESI                             ; 0059db22
    POP EBX                             ; 0059db23
    RET                                 ; 0059db24
    MOV dword ptr [0x02c8ae64],0x2      ; 0059db25 | DAT_02c8ae64
        ;   Label: LAB_0059db25
    JMP 0x0059db08                      ; 0059db2f
        ;   XREF to: 0059db08 (UNCONDITIONAL_JUMP)  ; LAB_0059db08
    PUSH 0x3fa99999                     ; 0059db31
        ;   Label: LAB_0059db31
    PUSH 0x9999999a                     ; 0059db36
    MOV ESI,dword ptr [0x02c8ae58]      ; 0059db3b | DAT_02c8ae58
    PUSH ESI                            ; 0059db41
    CALL wincore_winrun.cpp_waitForMutexTimeout_FUN_005b3770 ; 0059db42
        ;   XREF to: 005b3770 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_waitForMutexTimeout_FUN_005b3770(HANDLE mutex_handle, double timeout_seconds)
    ADD ESP,0xc                         ; 0059db47
    TEST EAX,EAX                        ; 0059db4a
    JZ 0x0059dc3f                       ; 0059db4c
        ;   XREF to: 0059dc3f (CONDITIONAL_JUMP)  ; LAB_0059dc3f
    XOR EDI,EDI                         ; 0059db52
    MOV EAX,[0x02c8ae5c]                ; 0059db54 | DAT_02c8ae5c
    MOV dword ptr [0x02c8ae60],EDI      ; 0059db59 | DAT_02c8ae60
    TEST EAX,EAX                        ; 0059db5f
    JZ 0x0059dc4e                       ; 0059db61
        ;   XREF to: 0059dc4e (CONDITIONAL_JUMP)  ; LAB_0059dc4e
    LEA EDI,[ESP + 0x2b8]               ; 0059db67
    MOV ESI,EAX                         ; 0059db6e
    PUSH EDI                            ; 0059db70
    MOV AL,byte ptr [ESI]               ; 0059db71
        ;   Label: LAB_0059db71
    MOV byte ptr [EDI],AL               ; 0059db73
    CMP AL,0x0                          ; 0059db75
    JZ 0x0059db89                       ; 0059db77
        ;   XREF to: 0059db89 (CONDITIONAL_JUMP)  ; LAB_0059db89
    MOV AL,byte ptr [ESI + 0x1]         ; 0059db79
    ADD ESI,0x2                         ; 0059db7c
    MOV byte ptr [EDI + 0x1],AL         ; 0059db7f
    ADD EDI,0x2                         ; 0059db82
    CMP AL,0x0                          ; 0059db85
    JNZ 0x0059db71                      ; 0059db87
        ;   XREF to: 0059db71 (CONDITIONAL_JUMP)  ; LAB_0059db71
    POP EDI                             ; 0059db89
        ;   Label: LAB_0059db89
    MOV EDX,dword ptr [0x02c8ae58]      ; 0059db8a | DAT_02c8ae58
    MOV EBX,dword ptr [0x02c8ae5c]      ; 0059db90 | DAT_02c8ae5c
    PUSH EDX                            ; 0059db96
    MOV dword ptr [0x02c8ae60],EBX      ; 0059db97 | DAT_02c8ae60
    MOV ESI,dword ptr [EBX + 0x100]     ; 0059db9d
    CALL wincore_winrun.cpp_releaseMutex_FUN_005b37b0 ; 0059dba3
        ;   XREF to: 005b37b0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_releaseMutex_FUN_005b37b0(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 0059dba8
    PUSH 0x607310                       ; 0059dbab
    PUSH 0xc                            ; 0059dbb0
    LEA EAX,[ESP + 0x290]               ; 0059dbb2
    PUSH EAX                            ; 0059dbb9
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 0059dbba
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0059dbbf
    CMP byte ptr [ESP + 0x2b8],0x0      ; 0059dbc2
    JNZ 0x0059dc7b                      ; 0059dbca
        ;   XREF to: 0059dc7b (CONDITIONAL_JUMP)  ; LAB_0059dc7b
    MOV EAX,ESP                         ; 0059dbd0
    PUSH EAX                            ; 0059dbd2
    PUSH ESI                            ; 0059dbd3
    CALL support_trisock.cpp_FUN_0059f230 ; 0059dbd4
        ;   XREF to: 0059f230 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_0059f230()
    ADD ESP,0x8                         ; 0059dbd9
    MOV ESI,EAX                         ; 0059dbdc
    MOV ECX,dword ptr [0x02c8ae58]      ; 0059dbde | DAT_02c8ae58
        ;   Label: LAB_0059dbde
    PUSH ECX                            ; 0059dbe4
    CALL wincore_winrun.cpp_waitForMutex_FUN_005b3750 ; 0059dbe5
        ;   XREF to: 005b3750 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_waitForMutex_FUN_005b3750(HANDLE mutex_handle)
    MOV EBX,dword ptr [0x02c8ae60]      ; 0059dbea | DAT_02c8ae60
    ADD ESP,0x4                         ; 0059dbf0
    TEST EBX,EBX                        ; 0059dbf3
    JZ 0x0059dc2b                       ; 0059dbf5
        ;   XREF to: 0059dc2b (CONDITIONAL_JUMP)  ; LAB_0059dc2b
    TEST ESI,ESI                        ; 0059dbf7
    JZ 0x0059dd2b                       ; 0059dbf9
        ;   XREF to: 0059dd2b (CONDITIONAL_JUMP)  ; LAB_0059dd2b
    MOV ESI,EBX                         ; 0059dbff
    MOV dword ptr [EBX + 0x3bc],0x2     ; 0059dc01
    MOV ECX,0xae                        ; 0059dc0b
    LEA EDI,[ESI + 0x104]               ; 0059dc10
    MOV ESI,ESP                         ; 0059dc16
    MOVSD.REP ES:EDI,ESI                ; 0059dc18
    PUSH 0x1                            ; 0059dc1a
        ;   Label: LAB_0059dc1a
    MOV ESI,dword ptr [0x02c8ae60]      ; 0059dc1c | DAT_02c8ae60
    PUSH ESI                            ; 0059dc22
    CALL support_trisock.cpp_FUN_0059dfc0 ; 0059dc23
        ;   XREF to: 0059dfc0 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_0059dfc0()
    ADD ESP,0x8                         ; 0059dc28
    MOV EDI,dword ptr [0x02c8ae58]      ; 0059dc2b | DAT_02c8ae58
        ;   Label: LAB_0059dc2b
    PUSH EDI                            ; 0059dc31
    CALL wincore_winrun.cpp_releaseMutex_FUN_005b37b0 ; 0059dc32
        ;   XREF to: 005b37b0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_releaseMutex_FUN_005b37b0(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 0059dc37
    JMP 0x0059db08                      ; 0059dc3a
        ;   XREF to: 0059db08 (UNCONDITIONAL_JUMP)  ; LAB_0059db08
    PUSH EAX                            ; 0059dc3f
        ;   Label: LAB_0059dc3f
    PUSH EAX                            ; 0059dc40
    CALL wincore_winrun.cpp_sleep_FUN_005b3860 ; 0059dc41
        ;   XREF to: 005b3860 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_sleep_FUN_005b3860(double seconds)
    ADD ESP,0x8                         ; 0059dc46
    JMP 0x0059db08                      ; 0059dc49
        ;   XREF to: 0059db08 (UNCONDITIONAL_JUMP)  ; LAB_0059db08
    MOV dword ptr [0x02c8ae64],0xffffffff ; 0059dc4e | DAT_02c8ae64
        ;   Label: LAB_0059dc4e
    MOV EDX,dword ptr [0x02c8ae58]      ; 0059dc58 | DAT_02c8ae58
    PUSH EDX                            ; 0059dc5e
    CALL wincore_winrun.cpp_releaseMutex_FUN_005b37b0 ; 0059dc5f
        ;   XREF to: 005b37b0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_releaseMutex_FUN_005b37b0(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 0059dc64
    XOR ECX,ECX                         ; 0059dc67
    MOV dword ptr [0x02c8ae64],ECX      ; 0059dc69 | DAT_02c8ae64
    MOV EAX,0x1                         ; 0059dc6f
    MOV ESP,EBP                         ; 0059dc74
    POP EBP                             ; 0059dc76
    POP EDI                             ; 0059dc77
    POP ESI                             ; 0059dc78
    POP EBX                             ; 0059dc79
    RET                                 ; 0059dc7a
    PUSH 0x5f8616                       ; 0059dc7b
        ;   Label: LAB_0059dc7b
    CALL wincore_winrun.cpp_FUN_005b3a90 ; 0059dc80
        ;   XREF to: 005b3a90 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005b3a90()
    ADD ESP,0x4                         ; 0059dc85
    LEA EAX,[ESP + 0x2b8]               ; 0059dc88
    PUSH EAX                            ; 0059dc8f
    CALL wincore_winrun.cpp_FUN_005b3a90 ; 0059dc90
        ;   XREF to: 005b3a90 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005b3a90()
    ADD ESP,0x4                         ; 0059dc95
    PUSH 0x5f861c                       ; 0059dc98
    CALL wincore_winrun.cpp_FUN_005b3a90 ; 0059dc9d
        ;   XREF to: 005b3a90 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005b3a90()
    ADD ESP,0x4                         ; 0059dca2
    MOV EAX,ESP                         ; 0059dca5
    PUSH EAX                            ; 0059dca7
    LEA EAX,[ESP + 0x2bc]               ; 0059dca8
    PUSH EAX                            ; 0059dcaf
    CALL support_trisock.cpp_FUN_0059f1a0 ; 0059dcb0
        ;   XREF to: 0059f1a0 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_0059f1a0()
    ADD ESP,0x8                         ; 0059dcb5
    PUSH 0x5f861e                       ; 0059dcb8
    MOV EBX,EAX                         ; 0059dcbd
    MOV ESI,EAX                         ; 0059dcbf
    CALL wincore_winrun.cpp_FUN_005b3a90 ; 0059dcc1
        ;   XREF to: 005b3a90 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005b3a90()
    ADD ESP,0x4                         ; 0059dcc6
    LEA EAX,[ESP + 0x2b8]               ; 0059dcc9
    PUSH EAX                            ; 0059dcd0
    CALL wincore_winrun.cpp_FUN_005b3a90 ; 0059dcd1
        ;   XREF to: 005b3a90 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005b3a90()
    ADD ESP,0x4                         ; 0059dcd6
    PUSH 0x5f8624                       ; 0059dcd9
    CALL wincore_winrun.cpp_FUN_005b3a90 ; 0059dcde
        ;   XREF to: 005b3a90 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005b3a90()
    ADD ESP,0x4                         ; 0059dce3
    TEST EBX,EBX                        ; 0059dce6
    JZ 0x0059dd24                       ; 0059dce8
        ;   XREF to: 0059dd24 (CONDITIONAL_JUMP)  ; LAB_0059dd24
    LEA EAX,[ESP + 0x4b8]               ; 0059dcea
    PUSH EAX                            ; 0059dcf1
    LEA EAX,[ESP + 0x28c]               ; 0059dcf2
    PUSH EAX                            ; 0059dcf9
    CALL support_trisock.cpp_formatIPAddress_FUN_0059c590 ; 0059dcfa
        ;   XREF to: 0059c590 (UNCONDITIONAL_CALL)  ; void support_trisock.cpp_formatIPAddress_FUN_0059c590(uchar * ip_bytes, char * output_buffer)
    ADD ESP,0x8                         ; 0059dcff
    LEA EAX,[ESP + 0x4b8]               ; 0059dd02
    PUSH EAX                            ; 0059dd09
    CALL wincore_winrun.cpp_FUN_005b3a90 ; 0059dd0a
        ;   XREF to: 005b3a90 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005b3a90()
        ;   Label: LAB_0059dd0a
    ADD ESP,0x4                         ; 0059dd0f
    PUSH 0x5f8634                       ; 0059dd12
    CALL wincore_winrun.cpp_FUN_005b3a90 ; 0059dd17
        ;   XREF to: 005b3a90 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005b3a90()
    ADD ESP,0x4                         ; 0059dd1c
    JMP 0x0059dbde                      ; 0059dd1f
        ;   XREF to: 0059dbde (UNCONDITIONAL_JUMP)  ; LAB_0059dbde
    PUSH 0x5f862b                       ; 0059dd24
        ;   Label: LAB_0059dd24
    JMP 0x0059dd0a                      ; 0059dd29
        ;   XREF to: 0059dd0a (UNCONDITIONAL_JUMP)  ; LAB_0059dd0a
    MOV dword ptr [EBX + 0x3bc],0xffffffff ; 0059dd2b
        ;   Label: LAB_0059dd2b
    JMP 0x0059dc1a                      ; 0059dd35
        ;   XREF to: 0059dc1a (UNCONDITIONAL_JUMP)  ; LAB_0059dc1a

