; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_stdio_c_DrainConsoleInputAndSetup_FUN_0060b3f8(void)
;
;
; XREF[1]:
;   crt_stdio.c_SetupConsoleInputMode_FUN_006059b0 at 006059b8
;
; Referenced Globals:
;   GET_CONSOLE_MODE_FUNC* g_GetConsoleModeFunc = 00211e30
;   SET_CONSOLE_MODE_FUNC* g_SetConsoleModeFunc = 00212126
;   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
;   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
;   int g_ConsoleInitializationFlag = 0x0
;   IS_SPECIAL_DEVICE_FUNC* g_IsSpecialDeviceFuncPtr = 00000000
;   SPECIAL_CONSOLE_INPUT_HANDLER_FUNC* g_SpecialConsoleInputHandler = 00000000
;
; Called Functions:
;   crt_stdio.c_DrainConsoleInputWithBuffering_FUN_0060b2e0
;   crt_stdio.c_GetConsoleInputHandle_FUN_0060ce30
;   crt_sync.c_CriticalSectionStub_FUN_00602434
;   GetConsoleMode
;   SetConsoleMode
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060b3f8
        ;   Label: crt_stdio.c_DrainConsoleInputAndSetup_FUN_0060b3f8
    PUSH ESI                            ; 0060b3f9
    SUB ESP,0x4                         ; 0060b3fa
    MOV EAX,[0x00685000]                ; 0060b3fd | g_ConsoleInitializationFlag
    TEST EAX,EAX                        ; 0060b402
    JZ 0x0060b410                       ; 0060b404
        ;   XREF to: 0060b410 (CONDITIONAL_JUMP)  ; LAB_0060b410
    XOR ESI,ESI                         ; 0060b406
    MOV dword ptr [0x00685000],ESI      ; 0060b408 | g_ConsoleInitializationFlag
    JMP 0x0060b47b                      ; 0060b40e
        ;   XREF to: 0060b47b (UNCONDITIONAL_JUMP)  ; LAB_0060b47b
    CMP dword ptr [0x006852b8],0x0      ; 0060b410 | g_SpecialConsoleInputHandler
        ;   Label: LAB_0060b410
    JZ 0x0060b431                       ; 0060b417
        ;   XREF to: 0060b431 (CONDITIONAL_JUMP)  ; LAB_0060b431
    PUSH EAX                            ; 0060b419
    CALL dword ptr [0x00685284]         ; 0060b41a | g_IsSpecialDeviceFuncPtr
    ADD ESP,0x4                         ; 0060b420
    PUSH EAX                            ; 0060b423
    CALL dword ptr [0x006852b8]         ; 0060b424 | g_SpecialConsoleInputHandler
    ADD ESP,0x4                         ; 0060b42a
    MOV ESI,EAX                         ; 0060b42d
    JMP 0x0060b479                      ; 0060b42f
        ;   XREF to: 0060b479 (UNCONDITIONAL_JUMP)  ; LAB_0060b479
    PUSH EAX                            ; 0060b431
        ;   Label: LAB_0060b431
    CALL dword ptr [0x00684ee8]         ; 0060b432 | PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8
    ADD ESP,0x4                         ; 0060b438
    CALL crt_stdio.c_GetConsoleInputHandle_FUN_0060ce30 ; 0060b43b
        ;   XREF to: 0060ce30 (UNCONDITIONAL_CALL)  ; HANDLE crt_stdio.c_GetConsoleInputHandle_FUN_0060ce30()
    MOV EBX,EAX                         ; 0060b440
    MOV EAX,ESP                         ; 0060b442
    PUSH EAX                            ; 0060b444
    PUSH EBX                            ; 0060b445
    CALL dword ptr CS:[0x611574]        ; 0060b446 | g_GetConsoleModeFunc
    PUSH 0x0                            ; 0060b44d
    PUSH EBX                            ; 0060b44f
    CALL dword ptr CS:[0x611610]        ; 0060b450 | g_SetConsoleModeFunc
    PUSH EBX                            ; 0060b457
    CALL crt_stdio.c_DrainConsoleInputWithBuffering_FUN_0060b2e0 ; 0060b458
        ;   XREF to: 0060b2e0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_DrainConsoleInputWithBuffering_FUN_0060b2e0(HANDLE hConsoleInput)
    ADD ESP,0x4                         ; 0060b45d
    MOV ECX,dword ptr [ESP]             ; 0060b460
    PUSH ECX                            ; 0060b463
    PUSH EBX                            ; 0060b464
    MOV ESI,EAX                         ; 0060b465
    CALL dword ptr CS:[0x611610]        ; 0060b467 | g_SetConsoleModeFunc
    PUSH 0x0                            ; 0060b46e
    CALL dword ptr [0x00684eec]         ; 0060b470 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 0060b476
    MOV EAX,ESI                         ; 0060b479
        ;   Label: LAB_0060b479
    ADD ESP,0x4                         ; 0060b47b
        ;   Label: LAB_0060b47b
    POP ESI                             ; 0060b47e
    POP EBX                             ; 0060b47f
    RET                                 ; 0060b480

