; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_stdio.c_DrainConsoleInputAndSetup_FUN_0060b3f8()
;
;
; XREF[1]:
;   crt_stdio.c_SetupConsoleInputMode_FUN_006059b0 at 006059b8
;
; Referenced Globals:
;   GetConsoleMode* PTR_GetConsoleMode_00611574 = 00211e30
;   SetConsoleMode* PTR_SetConsoleMode_00611610 = 00212126
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
    MOV EAX,[0x00685000]                ; 0060b3fd | int g_ConsoleInitializationFlag
    TEST EAX,EAX                        ; 0060b402
    JZ 0x0060b410                       ; 0060b404 | LAB_0060b410
        ;   XREF to: 0060b410 (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 0060b406
    MOV dword ptr [0x00685000],ESI      ; 0060b408 | int g_ConsoleInitializationFlag
    JMP 0x0060b47b                      ; 0060b40e | LAB_0060b47b
        ;   XREF to: 0060b47b (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x006852b8],0x0      ; 0060b410 | SPECIAL_CONSOLE_INPUT_HANDLER_FUNC * g_SpecialConsoleInputHandler
        ;   Label: LAB_0060b410
    JZ 0x0060b431                       ; 0060b417 | LAB_0060b431
        ;   XREF to: 0060b431 (CONDITIONAL_JUMP)
    PUSH EAX                            ; 0060b419
    CALL dword ptr [0x00685284]         ; 0060b41a | IS_SPECIAL_DEVICE_FUNC * g_IsSpecialDeviceFuncPtr
    ADD ESP,0x4                         ; 0060b420
    PUSH EAX                            ; 0060b423
    CALL dword ptr [0x006852b8]         ; 0060b424 | SPECIAL_CONSOLE_INPUT_HANDLER_FUNC * g_SpecialConsoleInputHandler
    ADD ESP,0x4                         ; 0060b42a
    MOV ESI,EAX                         ; 0060b42d
    JMP 0x0060b479                      ; 0060b42f | LAB_0060b479
        ;   XREF to: 0060b479 (UNCONDITIONAL_JUMP)
    PUSH EAX                            ; 0060b431
        ;   Label: LAB_0060b431
    CALL dword ptr [0x00684ee8]         ; 0060b432 | ENTER_CRITICAL_SECTION_BY_INDEX_FUNC * PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8
    ADD ESP,0x4                         ; 0060b438
    CALL crt_stdio.c_GetConsoleInputHandle_FUN_0060ce30 ; 0060b43b | HANDLE crt_stdio.c_GetConsoleInputHandle_FUN_0060ce30()
        ;   XREF to: 0060ce30 (UNCONDITIONAL_CALL)
    MOV EBX,EAX                         ; 0060b440
    MOV EAX,ESP                         ; 0060b442
    PUSH EAX                            ; 0060b444
    PUSH EBX                            ; 0060b445
    CALL dword ptr CS:[0x611574]        ; 0060b446 | GetConsoleMode * PTR_GetConsoleMode_00611574
    PUSH 0x0                            ; 0060b44d
    PUSH EBX                            ; 0060b44f
    CALL dword ptr CS:[0x611610]        ; 0060b450 | SetConsoleMode * PTR_SetConsoleMode_00611610
    PUSH EBX                            ; 0060b457
    CALL crt_stdio.c_DrainConsoleInputWithBuffering_FUN_0060b2e0 ; 0060b458 | int crt_stdio.c_DrainConsoleInputWithBuffering_FUN_0060b2e0(HANDLE hConsoleInput)
        ;   XREF to: 0060b2e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0060b45d
    MOV ECX,dword ptr [ESP]             ; 0060b460
    PUSH ECX                            ; 0060b463
    PUSH EBX                            ; 0060b464
    MOV ESI,EAX                         ; 0060b465
    CALL dword ptr CS:[0x611610]        ; 0060b467 | SetConsoleMode * PTR_SetConsoleMode_00611610
    PUSH 0x0                            ; 0060b46e
    CALL dword ptr [0x00684eec]         ; 0060b470 | EXIT_CRITICAL_SECTION_BY_INDEX_FUNC * PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 0060b476
    MOV EAX,ESI                         ; 0060b479
        ;   Label: LAB_0060b479
    ADD ESP,0x4                         ; 0060b47b
        ;   Label: LAB_0060b47b
    POP ESI                             ; 0060b47e
    POP EBX                             ; 0060b47f
    RET                                 ; 0060b480

