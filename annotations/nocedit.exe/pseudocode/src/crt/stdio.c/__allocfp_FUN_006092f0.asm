; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; _FILE * __cdecl crt_stdio_c___allocfp_FUN_006092f0(int unused_param)
;
; Parameters:
; int              Stack[0x4]:4   unused_param
;
; XREF[1]:
;   crt_stdio.c_fopenWithFlags_FUN_00601a20 at 00601a3e
;
; Referenced Globals:
;   _FILE* g_StaticFilePoolStart = 00000000
;   int INT_00684cd0 = 0x1
;   _FILE g_StdoutLogFile
;   undefined4 DAT_00684cea
;   undefined4 g_StaticFilePoolEnd
;   ENTER_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ef8 = 00602434
;   EXIT_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684efc = 00602434
;   FileListNode* g_AllocatedListHead
;   undefined4 g_FreeListHeadPointer
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_00602790
;   crt_memory.c_malloc_FUN_00601bb0
;   crt_memory.c_memset_FUN_005fde40
;   crt_sync.c_CriticalSectionStub_FUN_00602434
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 006092f0
        ;   Label: crt_stdio.c___allocfp_FUN_006092f0
    PUSH ESI                            ; 006092f1
    PUSH EDI                            ; 006092f2
    CALL dword ptr [0x00684ef8]         ; 006092f3 | PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ef8
    MOV ESI,dword ptr [0x03f9b204]      ; 006092f9 | g_FreeListHeadPointer
    TEST ESI,ESI                        ; 006092ff
    JZ 0x0060931c                       ; 00609301
        ;   XREF to: 0060931c (CONDITIONAL_JUMP)  ; LAB_0060931c
    MOV EBX,dword ptr [ESI + 0x4]       ; 00609303
    MOV EDI,dword ptr [EBX + 0xc]       ; 00609306
    MOV EAX,dword ptr [ESI]             ; 00609309
    AND EDI,0x4003                      ; 0060930b
    MOV [0x03f9b204],EAX                ; 00609311 | g_FreeListHeadPointer
    OR DI,0x3                           ; 00609316
    JMP 0x00609369                      ; 0060931a
        ;   XREF to: 00609369 (UNCONDITIONAL_JUMP)  ; LAB_00609369
    MOV EBX,0x684cc4                    ; 0060931c | g_StaticFilePoolStart
        ;   Label: LAB_0060931c
    CMP EBX,0x684ecc                    ; 00609321 | g_StaticFilePoolEnd
    JNC 0x00609351                      ; 00609327
        ;   XREF to: 00609351 (CONDITIONAL_JUMP)  ; LAB_00609351
    TEST byte ptr [EBX + 0xc],0x3       ; 00609329 | INT_00684cd0 | DAT_00684cea
        ;   Label: LAB_00609329
    JNZ 0x00609346                      ; 0060932d
        ;   XREF to: 00609346 (CONDITIONAL_JUMP)  ; LAB_00609346
    PUSH 0x1d                           ; 0060932f
    CALL crt_memory.c_malloc_FUN_00601bb0 ; 00609331
        ;   XREF to: 00601bb0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_00601bb0(ulong size)
    ADD ESP,0x4                         ; 00609336
    MOV ESI,EAX                         ; 00609339
    TEST EAX,EAX                        ; 0060933b
    JZ 0x00609398                       ; 0060933d
        ;   XREF to: 00609398 (CONDITIONAL_JUMP)  ; LAB_00609398
    MOV EDI,0x3                         ; 0060933f
    JMP 0x00609369                      ; 00609344
        ;   XREF to: 00609369 (UNCONDITIONAL_JUMP)  ; LAB_00609369
    ADD EBX,0x1a                        ; 00609346 | g_StdoutLogFile
        ;   Label: LAB_00609346
    CMP EBX,0x684ecc                    ; 00609349 | g_StaticFilePoolEnd
    JC 0x00609329                       ; 0060934f
        ;   XREF to: 00609329 (CONDITIONAL_JUMP)  ; LAB_00609329
    PUSH 0x37                           ; 00609351
        ;   Label: LAB_00609351
    MOV EDI,0x4003                      ; 00609353
    CALL crt_memory.c_malloc_FUN_00601bb0 ; 00609358
        ;   XREF to: 00601bb0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_00601bb0(ulong size)
    ADD ESP,0x4                         ; 0060935d
    MOV ESI,EAX                         ; 00609360
    TEST EAX,EAX                        ; 00609362
    JZ 0x00609398                       ; 00609364
        ;   XREF to: 00609398 (CONDITIONAL_JUMP)  ; LAB_00609398
    LEA EBX,[EAX + 0x1d]                ; 00609366
    PUSH 0x1a                           ; 00609369
        ;   Label: LAB_00609369
    PUSH 0x0                            ; 0060936b
    PUSH EBX                            ; 0060936d | g_StaticFilePoolStart | g_StdoutLogFile
    CALL crt_memory.c_memset_FUN_005fde40 ; 0060936e
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    MOV dword ptr [EBX + 0xc],EDI       ; 00609373
    MOV EAX,[0x03f9b200]                ; 00609376 | g_AllocatedListHead
    MOV dword ptr [ESI + 0x4],EBX       ; 0060937b
    ADD ESP,0xc                         ; 0060937e
    MOV dword ptr [EBX + 0x8],ESI       ; 00609381
    MOV dword ptr [0x03f9b200],ESI      ; 00609384 | g_AllocatedListHead
    MOV dword ptr [ESI],EAX             ; 0060938a
    CALL dword ptr [0x00684efc]         ; 0060938c | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684efc
    MOV EAX,EBX                         ; 00609392
    POP EDI                             ; 00609394
    POP ESI                             ; 00609395
    POP EBX                             ; 00609396
    RET                                 ; 00609397
    PUSH 0x5                            ; 00609398
        ;   Label: LAB_00609398
    CALL crt_errno.c_setErrno_FUN_00602790 ; 0060939a
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00602790(int error_code)
    ADD ESP,0x4                         ; 0060939f
    CALL dword ptr [0x00684efc]         ; 006093a2 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684efc
    XOR EAX,EAX                         ; 006093a8
    POP EDI                             ; 006093aa
    POP ESI                             ; 006093ab
    POP EBX                             ; 006093ac
    RET                                 ; 006093ad

