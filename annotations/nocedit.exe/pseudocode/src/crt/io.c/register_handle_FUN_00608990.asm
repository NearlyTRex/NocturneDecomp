; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int crt_io.c_register_handle_FUN_00608990(HANDLE handle)
;
; Parameters:
; typedef HANDLE void * Stack[0x4]:4   handle
;
; XREF[3]:
;   crt_io.c_InitializeStandardHandles_FUN_00608b20 at 00608b3a
;   crt_io.c_register_handle_wrapper_FUN_0060a144 at 0060a149
;   crt_io.c_register_handler_wrapper_FUN_00602438 at 0060243d
;
; Referenced Globals:
;   ENTER_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f18 = 00602434
;   EXIT_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f1c = 00602434
;   SIOControlBlock* g_IOControlBlock = 00000000
;   undefined4 g_CurrentHandleCount
;
; Called Functions:
;   crt_memory.c_realloc_FUN_00601df0
;   crt_sync.c_CriticalSectionStub_FUN_00602434
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00608990
        ;   Label: crt_io.c_register_handle_FUN_00608990
    CALL dword ptr [0x00684f18]         ; 00608991 | ENTER_THREAD_CRITICAL_SECTION_FUNC * PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f18
    MOV EDX,dword ptr [0x00685270]      ; 00608997 | undefined4 g_CurrentHandleCount
    XOR EBX,EBX                         ; 0060899d
    TEST EDX,EDX                        ; 0060899f
    JLE 0x006089d1                      ; 006089a1 | LAB_006089d1
        ;   XREF to: 006089d1 (CONDITIONAL_JUMP)
    LEA ECX,[EDX*0x4 + 0x0]             ; 006089a3
    XOR EAX,EAX                         ; 006089aa
    MOV EDX,dword ptr [0x0068526c]      ; 006089ac | SIOControlBlock * g_IOControlBlock
        ;   Label: LAB_006089ac
    ADD EDX,EAX                         ; 006089b2
    CMP dword ptr [EDX],0x0             ; 006089b4
    JNZ 0x006089c9                      ; 006089b7 | LAB_006089c9
        ;   XREF to: 006089c9 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x8]       ; 006089b9
    MOV dword ptr [EDX],EAX             ; 006089bd
    CALL dword ptr [0x00684f1c]         ; 006089bf | EXIT_THREAD_CRITICAL_SECTION_FUNC * PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f1c
    MOV EAX,EBX                         ; 006089c5
    POP EBX                             ; 006089c7
    RET                                 ; 006089c8
    ADD EAX,0x4                         ; 006089c9
        ;   Label: LAB_006089c9
    INC EBX                             ; 006089cc
    CMP EAX,ECX                         ; 006089cd
    JL 0x006089ac                       ; 006089cf | LAB_006089ac
        ;   XREF to: 006089ac (CONDITIONAL_JUMP)
    MOV EAX,[0x00685270]                ; 006089d1 | undefined4 g_CurrentHandleCount
        ;   Label: LAB_006089d1
    INC EAX                             ; 006089d6
    SHL EAX,0x2                         ; 006089d7
    PUSH EAX                            ; 006089da
    MOV EBX,dword ptr [0x0068526c]      ; 006089db | SIOControlBlock * g_IOControlBlock
    PUSH EBX                            ; 006089e1
    CALL crt_memory.c_realloc_FUN_00601df0 ; 006089e2 | void * crt_memory.c_realloc_FUN_00601df0(void * ptr, ulong new_size)
        ;   XREF to: 00601df0 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x00685270]      ; 006089e7 | undefined4 g_CurrentHandleCount
    MOV ECX,dword ptr [0x00685270]      ; 006089ed | undefined4 g_CurrentHandleCount
    ADD ESP,0x8                         ; 006089f3
    MOV [0x0068526c],EAX                ; 006089f6 | SIOControlBlock * g_IOControlBlock
    SHL EDX,0x2                         ; 006089fb
    INC ECX                             ; 006089fe
    ADD EAX,EDX                         ; 006089ff
    MOV EDX,dword ptr [ESP + 0x8]       ; 00608a01
    MOV dword ptr [0x00685270],ECX      ; 00608a05 | undefined4 g_CurrentHandleCount
    MOV dword ptr [EAX],EDX             ; 00608a0b
    CALL dword ptr [0x00684f1c]         ; 00608a0d | EXIT_THREAD_CRITICAL_SECTION_FUNC * PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f1c
    MOV EAX,[0x00685270]                ; 00608a13 | undefined4 g_CurrentHandleCount
    DEC EAX                             ; 00608a18
    POP EBX                             ; 00608a19
    RET                                 ; 00608a1a

