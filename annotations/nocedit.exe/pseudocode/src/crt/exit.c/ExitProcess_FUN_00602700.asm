; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_exit.c_ExitProcess_FUN_00602700(int exit_code)
;
; Parameters:
; undefined4       Stack[0x0]:4   local_res0
; int              Stack[0x4]:4   exit_code
;
; XREF[2]:
;   crt_exit.c_FinalExitHandler_FUN_0060b560 at 0060b581
;   crt_startup.c_WriteErrorAndExit_FUN_00606620 at 00606658
;
; Referenced Globals:
;   ExitProcess* g_ExitProcessFunc = 00211d12
;   void* PTR_crt_sync.c_CriticalSectionCleanup_FUN_00602434_00684f20 = 00602434
;   int g_SpecialExitHandler = 0x0
;   int g_EmergencyExitFlag
;
; Called Functions:
;   crt_exception.c_RemoveExceptionHandler_FUN_0060abf4
;   crt_exit.c_ProcessExitHandlers_FUN_0060ac88
;   crt_sync.c_CriticalSectionStub_FUN_00602434
;   ExitProcess
;
; *****************************************************************************

section .text

    CMP dword ptr [0x03f9b220],0x0      ; 00602700 | g_EmergencyExitFlag
        ;   Label: crt_exit.c_ExitProcess_FUN_00602700
    JZ 0x00602724                       ; 00602707
        ;   XREF to: 00602724 (CONDITIONAL_JUMP)  ; LAB_00602724
    CMP dword ptr [0x00684f2c],0x0      ; 00602709 | g_SpecialExitHandler
    JZ 0x0060273b                       ; 00602710
        ;   XREF to: 0060273b (CONDITIONAL_JUMP)  ; LAB_0060273b
    PUSH 0xff                           ; 00602712
    PUSH 0x0                            ; 00602717
    CALL dword ptr [0x00684f2c]         ; 00602719 | g_SpecialExitHandler
    ADD ESP,0x8                         ; 0060271f
    JMP 0x0060273b                      ; 00602722
        ;   XREF to: 0060273b (UNCONDITIONAL_JUMP)  ; LAB_0060273b
    CALL crt_exception.c_RemoveExceptionHandler_FUN_0060abf4 ; 00602724
        ;   XREF to: 0060abf4 (UNCONDITIONAL_CALL)  ; void crt_exception.c_RemoveExceptionHandler_FUN_0060abf4()
        ;   Label: LAB_00602724
    MOV EDX,0xf                         ; 00602729
    XOR EAX,EAX                         ; 0060272e
    CALL crt_exit.c_ProcessExitHandlers_FUN_0060ac88 ; 00602730
        ;   XREF to: 0060ac88 (UNCONDITIONAL_CALL)  ; void crt_exit.c_ProcessExitHandlers_FUN_0060ac88(uchar min_priority, uchar max_priority)
    CALL dword ptr [0x00684f20]         ; 00602735 | PTR_crt_sync.c_CriticalSectionCleanup_FUN_00602434_00684f20
    MOV ECX,dword ptr [ESP]             ; 0060273b
        ;   Label: LAB_0060273b
    PUSH ECX                            ; 0060273e
    CALL dword ptr CS:[0x611534]        ; 0060273f
        ;   XREF to: EXTERNAL:00000058 (UNCONDITIONAL_CALL)  ; g_ExitProcessFunc

