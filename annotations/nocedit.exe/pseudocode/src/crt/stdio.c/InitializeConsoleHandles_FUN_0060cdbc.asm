; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallRegister void crt_stdio.c_InitializeConsoleHandles_FUN_0060cdbc(void)
;
;
; XREF[2]:
;   crt_stdio.c_GetConsoleInputHandle_FUN_0060ce30 at 0060ce30
;   crt_stdio.c_GetConsoleOutputHandle_FUN_0060ce3c at 0060ce3c
;
; Referenced Globals:
;   CreateFileA* g_CreateFileAFunc = 00211c6a
;   TerminatedCString s_conin_00659698
;   TerminatedCString s_conout_006596a0
;   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
;   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
;   HANDLE g_ConsoleInputHandle = ffffffff
;   HANDLE g_ConsoleOutputHandle = ffffffff
;
; Called Functions:
;   CreateFileA
;   crt_sync.c_CriticalSectionStub_FUN_00602434
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 0060cdbc
        ;   Label: crt_stdio.c_InitializeConsoleHandles_FUN_0060cdbc
    CALL dword ptr [0x00684ee8]         ; 0060cdbe | PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8
    MOV EDX,dword ptr [0x006854fc]      ; 0060cdc4 | g_ConsoleInputHandle
    ADD ESP,0x4                         ; 0060cdca
    CMP EDX,-0x1                        ; 0060cdcd
    JNZ 0x0060cdf5                      ; 0060cdd0
        ;   XREF to: 0060cdf5 (CONDITIONAL_JUMP)  ; LAB_0060cdf5
    PUSH 0x0                            ; 0060cdd2
    PUSH 0x80                           ; 0060cdd4
    PUSH 0x3                            ; 0060cdd9
    PUSH 0x0                            ; 0060cddb
    PUSH 0x1                            ; 0060cddd
    PUSH 0x80000000                     ; 0060cddf
    PUSH 0x659698                       ; 0060cde4 | = "conin$"
    CALL dword ptr CS:[0x611510]        ; 0060cde9 | g_CreateFileAFunc
    MOV [0x006854fc],EAX                ; 0060cdf0 | g_ConsoleInputHandle
    CMP dword ptr [0x00685500],-0x1     ; 0060cdf5 | g_ConsoleOutputHandle
        ;   Label: LAB_0060cdf5
    JNZ 0x0060ce21                      ; 0060cdfc
        ;   XREF to: 0060ce21 (CONDITIONAL_JUMP)  ; LAB_0060ce21
    PUSH 0x0                            ; 0060cdfe
    PUSH 0x80                           ; 0060ce00
    PUSH 0x3                            ; 0060ce05
    PUSH 0x0                            ; 0060ce07
    PUSH 0x2                            ; 0060ce09
    PUSH 0x40000000                     ; 0060ce0b
    PUSH 0x6596a0                       ; 0060ce10 | = "conout$"
    CALL dword ptr CS:[0x611510]        ; 0060ce15 | g_CreateFileAFunc
    MOV [0x00685500],EAX                ; 0060ce1c | g_ConsoleOutputHandle
    PUSH 0x0                            ; 0060ce21
        ;   Label: LAB_0060ce21
    CALL dword ptr [0x00684eec]         ; 0060ce23 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 0060ce29
    RET                                 ; 0060ce2c

