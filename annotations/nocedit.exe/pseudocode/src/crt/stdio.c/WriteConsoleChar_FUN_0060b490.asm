; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack int crt_stdio.c_WriteConsoleChar_FUN_0060b490(int character)
;
; Parameters:
; int              Stack[0x4]:4   character
; Local Variables:
; undefined1       Stack[-0x8]:1  local_8
;
; XREF[1]:
;   crt_stdio.c_SetupConsoleInputMode_FUN_006059b0 at 006059c9
;
; Referenced Globals:
;   WriteConsoleA* g_WriteConsoleAFunc = 002122f0
;   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
;   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
;   IS_SPECIAL_DEVICE_FUNC* g_IsSpecialDeviceFuncPtr = 00000000
;   SPECIAL_CONSOLE_OUTPUT_HANDLER_FUNC* g_SpecialConsoleOutputHandler = 00000000
;
; Called Functions:
;   crt_stdio.c_GetConsoleOutputHandle_FUN_0060ce3c
;   crt_sync.c_CriticalSectionStub_FUN_00602434
;   WriteConsoleA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060b490
        ;   Label: crt_stdio.c_WriteConsoleChar_FUN_0060b490
    SUB ESP,0x8                         ; 0060b491
    MOV EBX,dword ptr [ESP + 0x10]      ; 0060b494
    MOV EDX,dword ptr [0x006852c0]      ; 0060b498 | g_SpecialConsoleOutputHandler
    MOV byte ptr [ESP + 0x4],BL         ; 0060b49e
    TEST EDX,EDX                        ; 0060b4a2
    JZ 0x0060b4be                       ; 0060b4a4
        ;   XREF to: 0060b4be (CONDITIONAL_JUMP)  ; LAB_0060b4be
    PUSH 0x1                            ; 0060b4a6
    CALL dword ptr [0x00685284]         ; 0060b4a8 | g_IsSpecialDeviceFuncPtr
    ADD ESP,0x4                         ; 0060b4ae
    PUSH EBX                            ; 0060b4b1
    PUSH EAX                            ; 0060b4b2
    CALL dword ptr [0x006852c0]         ; 0060b4b3 | g_SpecialConsoleOutputHandler
    ADD ESP,0x8                         ; 0060b4b9
    JMP 0x0060b4ef                      ; 0060b4bc
        ;   XREF to: 0060b4ef (UNCONDITIONAL_JUMP)  ; LAB_0060b4ef
    PUSH 0x1                            ; 0060b4be
        ;   Label: LAB_0060b4be
    CALL dword ptr [0x00684ee8]         ; 0060b4c0 | PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8
    ADD ESP,0x4                         ; 0060b4c6
    CALL crt_stdio.c_GetConsoleOutputHandle_FUN_0060ce3c ; 0060b4c9
        ;   XREF to: 0060ce3c (UNCONDITIONAL_CALL)  ; HANDLE crt_stdio.c_GetConsoleOutputHandle_FUN_0060ce3c()
    PUSH 0x0                            ; 0060b4ce
    LEA EDX,[ESP + 0x4]                 ; 0060b4d0
    PUSH EDX                            ; 0060b4d4
    PUSH 0x1                            ; 0060b4d5
    LEA EDX,[ESP + 0x10]                ; 0060b4d7
    PUSH EDX                            ; 0060b4db
    PUSH EAX                            ; 0060b4dc
    CALL dword ptr CS:[0x611674]        ; 0060b4dd | g_WriteConsoleAFunc
    PUSH 0x1                            ; 0060b4e4
    CALL dword ptr [0x00684eec]         ; 0060b4e6 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 0060b4ec
    MOV EAX,EBX                         ; 0060b4ef
        ;   Label: LAB_0060b4ef
    ADD ESP,0x8                         ; 0060b4f1
    POP EBX                             ; 0060b4f4
    RET                                 ; 0060b4f5

