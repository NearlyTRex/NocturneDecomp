; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_SetStdHandleToSomething_FUN_00608a1c(HANDLE param_1,uint param_2)
;
;
; Referenced Globals:
;   SET_STD_HANDLE_FUNC* g_SetStdHandleFunc = 002121e6
;   ENTER_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f18 = 00602434
;   EXIT_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f1c = 00602434
;   SIOControlBlock* g_IOControlBlock = 00000000
;   int g_CurrentHandleCount = 0x0
;
; Called Functions:
;   crt_memory.c_realloc_FUN_00601df0
;   crt_sync.c_CriticalSectionStub_FUN_00602434
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00608a1c
        ;   Label: crt_unknown.c_SetStdHandleToSomething_FUN_00608a1c
    PUSH ESI                            ; 00608a1d
    PUSH EDI                            ; 00608a1e
    PUSH EBP                            ; 00608a1f
    MOV ESI,dword ptr [0x0068526c]      ; 00608a20 | g_IOControlBlock
    MOV EDI,dword ptr [ESP + 0x18]      ; 00608a26
    TEST EDI,EDI                        ; 00608a2a
    JL 0x00608ae6                       ; 00608a2c
        ;   XREF to: 00608ae6 (CONDITIONAL_JUMP)  ; LAB_00608ae6
    CALL dword ptr [0x00684f18]         ; 00608a32 | PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f18
    CMP EDI,0x1                         ; 00608a38
    JC 0x00608a46                       ; 00608a3b
        ;   XREF to: 00608a46 (CONDITIONAL_JUMP)  ; LAB_00608a46
    JBE 0x00608a53                      ; 00608a3d
        ;   XREF to: 00608a53 (CONDITIONAL_JUMP)  ; LAB_00608a53
    CMP EDI,0x2                         ; 00608a3f
    JZ 0x00608a5c                       ; 00608a42
        ;   XREF to: 00608a5c (CONDITIONAL_JUMP)  ; LAB_00608a5c
    JMP 0x00608a6a                      ; 00608a44
        ;   XREF to: 00608a6a (UNCONDITIONAL_JUMP)  ; LAB_00608a6a
    TEST EDI,EDI                        ; 00608a46
        ;   Label: LAB_00608a46
    JNZ 0x00608a6a                      ; 00608a48
        ;   XREF to: 00608a6a (CONDITIONAL_JUMP)  ; LAB_00608a6a
    MOV ECX,dword ptr [ESP + 0x14]      ; 00608a4a
    PUSH ECX                            ; 00608a4e
    PUSH -0xa                           ; 00608a4f
    JMP 0x00608a63                      ; 00608a51
        ;   XREF to: 00608a63 (UNCONDITIONAL_JUMP)  ; LAB_00608a63
    MOV EBX,dword ptr [ESP + 0x14]      ; 00608a53
        ;   Label: LAB_00608a53
    PUSH EBX                            ; 00608a57
    PUSH -0xb                           ; 00608a58
    JMP 0x00608a63                      ; 00608a5a
        ;   XREF to: 00608a63 (UNCONDITIONAL_JUMP)  ; LAB_00608a63
    MOV EDX,dword ptr [ESP + 0x14]      ; 00608a5c
        ;   Label: LAB_00608a5c
    PUSH EDX                            ; 00608a60
    PUSH -0xc                           ; 00608a61
    CALL dword ptr CS:[0x611638]        ; 00608a63 | g_SetStdHandleFunc
        ;   Label: LAB_00608a63
    MOV EBP,dword ptr [0x00685270]      ; 00608a6a | g_CurrentHandleCount
        ;   Label: LAB_00608a6a
    LEA EBX,[EDI*0x4 + 0x0]             ; 00608a70
    MOV ESI,dword ptr [0x0068526c]      ; 00608a77 | g_IOControlBlock
    CMP EDI,EBP                         ; 00608a7d
    JGE 0x00608a8b                      ; 00608a7f
        ;   XREF to: 00608a8b (CONDITIONAL_JUMP)  ; LAB_00608a8b
    ADD EBX,ESI                         ; 00608a81
    MOV EAX,dword ptr [ESP + 0x14]      ; 00608a83
    MOV dword ptr [EBX],EAX             ; 00608a87
    JMP 0x00608ada                      ; 00608a89
        ;   XREF to: 00608ada (UNCONDITIONAL_JUMP)  ; LAB_00608ada
    LEA EAX,[EBX + 0x4]                 ; 00608a8b
        ;   Label: LAB_00608a8b
    PUSH EAX                            ; 00608a8e
    PUSH ESI                            ; 00608a8f
    CALL crt_memory.c_realloc_FUN_00601df0 ; 00608a90
        ;   XREF to: 00601df0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_00601df0(void * ptr, ulong new_size)
    MOV EDX,dword ptr [0x00685270]      ; 00608a95 | g_CurrentHandleCount
    ADD ESP,0x8                         ; 00608a9b
    MOV ESI,EAX                         ; 00608a9e
    CMP EDX,EDI                         ; 00608aa0
    JGE 0x00608abe                      ; 00608aa2
        ;   XREF to: 00608abe (CONDITIONAL_JUMP)  ; LAB_00608abe
    LEA EAX,[EDX*0x4 + 0x0]             ; 00608aa4
    MOV ECX,EBX                         ; 00608aab
    MOV EBX,ESI                         ; 00608aad
    MOV dword ptr [EBX + EAX*0x1],0x0   ; 00608aaf
        ;   Label: LAB_00608aaf
    ADD EAX,0x4                         ; 00608ab6
    INC EDX                             ; 00608ab9
    CMP EAX,ECX                         ; 00608aba
    JL 0x00608aaf                       ; 00608abc
        ;   XREF to: 00608aaf (CONDITIONAL_JUMP)  ; LAB_00608aaf
    LEA EAX,[EDI*0x4 + 0x0]             ; 00608abe
        ;   Label: LAB_00608abe
    MOV EDX,dword ptr [ESP + 0x14]      ; 00608ac5
    INC EDI                             ; 00608ac9
    ADD EAX,ESI                         ; 00608aca
    MOV dword ptr [0x0068526c],ESI      ; 00608acc | g_IOControlBlock
    MOV dword ptr [0x00685270],EDI      ; 00608ad2 | g_CurrentHandleCount
    MOV dword ptr [EAX],EDX             ; 00608ad8
    CALL dword ptr [0x00684f1c]         ; 00608ada | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f1c
        ;   Label: LAB_00608ada
    MOV ESI,dword ptr [0x0068526c]      ; 00608ae0 | g_IOControlBlock
    MOV ESI,dword ptr [0x0068526c]      ; 00608ae6 | g_IOControlBlock
        ;   Label: LAB_00608ae6
    POP EBP                             ; 00608aec
    POP EDI                             ; 00608aed
    POP ESI                             ; 00608aee
    POP EBX                             ; 00608aef
    RET                                 ; 00608af0

