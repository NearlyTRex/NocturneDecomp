; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trisock_cpp_FUN_00570adc(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02cfd8a8
;   undefined4 DAT_02cfd8ac
;   undefined4 DAT_02cfd8b0
;   undefined4 DAT_02cfd8b4
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005a30d7
;   support_trisock.cpp_formatIPAddress_FUN_0056f580
;   support_trisock.cpp_FUN_00570fb0
;   support_trisock.cpp_FUN_00572190
;   support_trisock.cpp_FUN_00572220
;   wincore_winrun.cpp_FUN_00581c70
;   wincore_winrun.cpp_releaseMutex_FUN_00581990
;   wincore_winrun.cpp_sleep_FUN_00581a40
;   wincore_winrun.cpp_waitForMutex_FUN_00581930
;   wincore_winrun.cpp_waitForMutexTimeout_FUN_00581950
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 00570adc
        ;   Label: support_trisock.cpp_FUN_00570adc
    PUSH EBX                            ; 00570ae0
    PUSH ESI                            ; 00570ae1
    PUSH EDI                            ; 00570ae2
    PUSH EBP                            ; 00570ae3
    MOV EBP,ESP                         ; 00570ae4
    SUB ESP,0x4e0                       ; 00570ae6
    AND ESP,0xfffffff8                  ; 00570aec
    CMP dword ptr [0x02cfd8b4],0x1      ; 00570aef | DAT_02cfd8b4
    JZ 0x00570b15                       ; 00570af6
        ;   XREF to: 00570b15 (CONDITIONAL_JUMP)  ; LAB_00570b15
    CMP dword ptr [0x02cfd8b4],0x1      ; 00570af8 | DAT_02cfd8b4
        ;   Label: LAB_00570af8
    JG 0x00570b21                       ; 00570aff
        ;   XREF to: 00570b21 (CONDITIONAL_JUMP)  ; LAB_00570b21
    XOR ECX,ECX                         ; 00570b01
    MOV dword ptr [0x02cfd8b4],ECX      ; 00570b03 | DAT_02cfd8b4
    MOV EAX,0x1                         ; 00570b09
    MOV ESP,EBP                         ; 00570b0e
    POP EBP                             ; 00570b10
    POP EDI                             ; 00570b11
    POP ESI                             ; 00570b12
    POP EBX                             ; 00570b13
    RET                                 ; 00570b14
    MOV dword ptr [0x02cfd8b4],0x2      ; 00570b15 | DAT_02cfd8b4
        ;   Label: LAB_00570b15
    JMP 0x00570af8                      ; 00570b1f
        ;   XREF to: 00570af8 (UNCONDITIONAL_JUMP)  ; LAB_00570af8
    PUSH 0x3fa99999                     ; 00570b21
        ;   Label: LAB_00570b21
    PUSH 0x9999999a                     ; 00570b26
    MOV ESI,dword ptr [0x02cfd8a8]      ; 00570b2b | DAT_02cfd8a8
    PUSH ESI                            ; 00570b31
    CALL wincore_winrun.cpp_waitForMutexTimeout_FUN_00581950 ; 00570b32
        ;   XREF to: 00581950 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_waitForMutexTimeout_FUN_00581950(HANDLE mutex_handle, double timeout_seconds)
    ADD ESP,0xc                         ; 00570b37
    TEST EAX,EAX                        ; 00570b3a
    JZ 0x00570c2f                       ; 00570b3c
        ;   XREF to: 00570c2f (CONDITIONAL_JUMP)  ; LAB_00570c2f
    XOR EDI,EDI                         ; 00570b42
    MOV EAX,[0x02cfd8ac]                ; 00570b44 | DAT_02cfd8ac
    MOV dword ptr [0x02cfd8b0],EDI      ; 00570b49 | DAT_02cfd8b0
    TEST EAX,EAX                        ; 00570b4f
    JZ 0x00570c3e                       ; 00570b51
        ;   XREF to: 00570c3e (CONDITIONAL_JUMP)  ; LAB_00570c3e
    LEA EDI,[ESP + 0x2b8]               ; 00570b57
    MOV ESI,EAX                         ; 00570b5e
    PUSH EDI                            ; 00570b60
    MOV AL,byte ptr [ESI]               ; 00570b61
        ;   Label: LAB_00570b61
    MOV byte ptr [EDI],AL               ; 00570b63
    CMP AL,0x0                          ; 00570b65
    JZ 0x00570b79                       ; 00570b67
        ;   XREF to: 00570b79 (CONDITIONAL_JUMP)  ; LAB_00570b79
    MOV AL,byte ptr [ESI + 0x1]         ; 00570b69
    ADD ESI,0x2                         ; 00570b6c
    MOV byte ptr [EDI + 0x1],AL         ; 00570b6f
    ADD EDI,0x2                         ; 00570b72
    CMP AL,0x0                          ; 00570b75
    JNZ 0x00570b61                      ; 00570b77
        ;   XREF to: 00570b61 (CONDITIONAL_JUMP)  ; LAB_00570b61
    POP EDI                             ; 00570b79
        ;   Label: LAB_00570b79
    MOV EDX,dword ptr [0x02cfd8a8]      ; 00570b7a | DAT_02cfd8a8
    MOV EBX,dword ptr [0x02cfd8ac]      ; 00570b80 | DAT_02cfd8ac
    PUSH EDX                            ; 00570b86
    MOV dword ptr [0x02cfd8b0],EBX      ; 00570b87 | DAT_02cfd8b0
    MOV ESI,dword ptr [EBX + 0x100]     ; 00570b8d
    CALL wincore_winrun.cpp_releaseMutex_FUN_00581990 ; 00570b93
        ;   XREF to: 00581990 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_releaseMutex_FUN_00581990(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 00570b98
    PUSH 0x5e5a10                       ; 00570b9b
    PUSH 0xc                            ; 00570ba0
    LEA EAX,[ESP + 0x290]               ; 00570ba2
    PUSH EAX                            ; 00570ba9
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 00570baa
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005a30d7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00570baf
    CMP byte ptr [ESP + 0x2b8],0x0      ; 00570bb2
    JNZ 0x00570c6b                      ; 00570bba
        ;   XREF to: 00570c6b (CONDITIONAL_JUMP)  ; LAB_00570c6b
    MOV EAX,ESP                         ; 00570bc0
    PUSH EAX                            ; 00570bc2
    PUSH ESI                            ; 00570bc3
    CALL support_trisock.cpp_FUN_00572220 ; 00570bc4
        ;   XREF to: 00572220 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_00572220()
    ADD ESP,0x8                         ; 00570bc9
    MOV ESI,EAX                         ; 00570bcc
    MOV ECX,dword ptr [0x02cfd8a8]      ; 00570bce | DAT_02cfd8a8
        ;   Label: LAB_00570bce
    PUSH ECX                            ; 00570bd4
    CALL wincore_winrun.cpp_waitForMutex_FUN_00581930 ; 00570bd5
        ;   XREF to: 00581930 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_waitForMutex_FUN_00581930(HANDLE mutex_handle)
    MOV EBX,dword ptr [0x02cfd8b0]      ; 00570bda | DAT_02cfd8b0
    ADD ESP,0x4                         ; 00570be0
    TEST EBX,EBX                        ; 00570be3
    JZ 0x00570c1b                       ; 00570be5
        ;   XREF to: 00570c1b (CONDITIONAL_JUMP)  ; LAB_00570c1b
    TEST ESI,ESI                        ; 00570be7
    JZ 0x00570d1b                       ; 00570be9
        ;   XREF to: 00570d1b (CONDITIONAL_JUMP)  ; LAB_00570d1b
    MOV ESI,EBX                         ; 00570bef
    MOV dword ptr [EBX + 0x3bc],0x2     ; 00570bf1
    MOV ECX,0xae                        ; 00570bfb
    LEA EDI,[ESI + 0x104]               ; 00570c00
    MOV ESI,ESP                         ; 00570c06
    MOVSD.REP ES:EDI,ESI                ; 00570c08
    PUSH 0x1                            ; 00570c0a
        ;   Label: LAB_00570c0a
    MOV ESI,dword ptr [0x02cfd8b0]      ; 00570c0c | DAT_02cfd8b0
    PUSH ESI                            ; 00570c12
    CALL support_trisock.cpp_FUN_00570fb0 ; 00570c13
        ;   XREF to: 00570fb0 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_00570fb0()
    ADD ESP,0x8                         ; 00570c18
    MOV EDI,dword ptr [0x02cfd8a8]      ; 00570c1b | DAT_02cfd8a8
        ;   Label: LAB_00570c1b
    PUSH EDI                            ; 00570c21
    CALL wincore_winrun.cpp_releaseMutex_FUN_00581990 ; 00570c22
        ;   XREF to: 00581990 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_releaseMutex_FUN_00581990(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 00570c27
    JMP 0x00570af8                      ; 00570c2a
        ;   XREF to: 00570af8 (UNCONDITIONAL_JUMP)  ; LAB_00570af8
    PUSH EAX                            ; 00570c2f
        ;   Label: LAB_00570c2f
    PUSH EAX                            ; 00570c30
    CALL wincore_winrun.cpp_sleep_FUN_00581a40 ; 00570c31
        ;   XREF to: 00581a40 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_sleep_FUN_00581a40(double seconds)
    ADD ESP,0x8                         ; 00570c36
    JMP 0x00570af8                      ; 00570c39
        ;   XREF to: 00570af8 (UNCONDITIONAL_JUMP)  ; LAB_00570af8
    MOV dword ptr [0x02cfd8b4],0xffffffff ; 00570c3e | DAT_02cfd8b4
        ;   Label: LAB_00570c3e
    MOV EDX,dword ptr [0x02cfd8a8]      ; 00570c48 | DAT_02cfd8a8
    PUSH EDX                            ; 00570c4e
    CALL wincore_winrun.cpp_releaseMutex_FUN_00581990 ; 00570c4f
        ;   XREF to: 00581990 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_releaseMutex_FUN_00581990(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 00570c54
    XOR ECX,ECX                         ; 00570c57
    MOV dword ptr [0x02cfd8b4],ECX      ; 00570c59 | DAT_02cfd8b4
    MOV EAX,0x1                         ; 00570c5f
    MOV ESP,EBP                         ; 00570c64
    POP EBP                             ; 00570c66
    POP EDI                             ; 00570c67
    POP ESI                             ; 00570c68
    POP EBX                             ; 00570c69
    RET                                 ; 00570c6a
    PUSH 0x5d6b85                       ; 00570c6b
        ;   Label: LAB_00570c6b
    CALL wincore_winrun.cpp_FUN_00581c70 ; 00570c70
        ;   XREF to: 00581c70 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_00581c70()
    ADD ESP,0x4                         ; 00570c75
    LEA EAX,[ESP + 0x2b8]               ; 00570c78
    PUSH EAX                            ; 00570c7f
    CALL wincore_winrun.cpp_FUN_00581c70 ; 00570c80
        ;   XREF to: 00581c70 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_00581c70()
    ADD ESP,0x4                         ; 00570c85
    PUSH 0x5d6b8b                       ; 00570c88
    CALL wincore_winrun.cpp_FUN_00581c70 ; 00570c8d
        ;   XREF to: 00581c70 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_00581c70()
    ADD ESP,0x4                         ; 00570c92
    MOV EAX,ESP                         ; 00570c95
    PUSH EAX                            ; 00570c97
    LEA EAX,[ESP + 0x2bc]               ; 00570c98
    PUSH EAX                            ; 00570c9f
    CALL support_trisock.cpp_FUN_00572190 ; 00570ca0
        ;   XREF to: 00572190 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_00572190()
    ADD ESP,0x8                         ; 00570ca5
    PUSH 0x5d6b8d                       ; 00570ca8
    MOV EBX,EAX                         ; 00570cad
    MOV ESI,EAX                         ; 00570caf
    CALL wincore_winrun.cpp_FUN_00581c70 ; 00570cb1
        ;   XREF to: 00581c70 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_00581c70()
    ADD ESP,0x4                         ; 00570cb6
    LEA EAX,[ESP + 0x2b8]               ; 00570cb9
    PUSH EAX                            ; 00570cc0
    CALL wincore_winrun.cpp_FUN_00581c70 ; 00570cc1
        ;   XREF to: 00581c70 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_00581c70()
    ADD ESP,0x4                         ; 00570cc6
    PUSH 0x5d6b93                       ; 00570cc9
    CALL wincore_winrun.cpp_FUN_00581c70 ; 00570cce
        ;   XREF to: 00581c70 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_00581c70()
    ADD ESP,0x4                         ; 00570cd3
    TEST EBX,EBX                        ; 00570cd6
    JZ 0x00570d14                       ; 00570cd8
        ;   XREF to: 00570d14 (CONDITIONAL_JUMP)  ; LAB_00570d14
    LEA EAX,[ESP + 0x4b8]               ; 00570cda
    PUSH EAX                            ; 00570ce1
    LEA EAX,[ESP + 0x28c]               ; 00570ce2
    PUSH EAX                            ; 00570ce9
    CALL support_trisock.cpp_formatIPAddress_FUN_0056f580 ; 00570cea
        ;   XREF to: 0056f580 (UNCONDITIONAL_CALL)  ; void support_trisock.cpp_formatIPAddress_FUN_0056f580(uchar * ip_bytes, char * output_buffer)
    ADD ESP,0x8                         ; 00570cef
    LEA EAX,[ESP + 0x4b8]               ; 00570cf2
    PUSH EAX                            ; 00570cf9
    CALL wincore_winrun.cpp_FUN_00581c70 ; 00570cfa
        ;   XREF to: 00581c70 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_00581c70()
        ;   Label: LAB_00570cfa
    ADD ESP,0x4                         ; 00570cff
    PUSH 0x5d6ba3                       ; 00570d02
    CALL wincore_winrun.cpp_FUN_00581c70 ; 00570d07
        ;   XREF to: 00581c70 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_00581c70()
    ADD ESP,0x4                         ; 00570d0c
    JMP 0x00570bce                      ; 00570d0f
        ;   XREF to: 00570bce (UNCONDITIONAL_JUMP)  ; LAB_00570bce
    PUSH 0x5d6b9a                       ; 00570d14
        ;   Label: LAB_00570d14
    JMP 0x00570cfa                      ; 00570d19
        ;   XREF to: 00570cfa (UNCONDITIONAL_JUMP)  ; LAB_00570cfa
    MOV dword ptr [EBX + 0x3bc],0xffffffff ; 00570d1b
        ;   Label: LAB_00570d1b
    JMP 0x00570c0a                      ; 00570d25
        ;   XREF to: 00570c0a (UNCONDITIONAL_JUMP)  ; LAB_00570c0a

