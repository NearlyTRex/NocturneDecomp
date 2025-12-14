; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_startup.c_ExitApplication_FUN_0060b534(int exit_code)
;
; Parameters:
; int              Stack[0x4]:4   exit_code
;
; XREF[2]:
;   crt_cpp.c_reportPureVirtualError_FUN_00605b23 at 00605b42
;   crt_startup.cpp_WinMainBootstrap_FUN_00609e70 at 00609f13
;
; Referenced Globals:
;   void* PTR_crt_exit.c_ExitHookStub_FUN_0060b530_00685478 = 0060b530
;   int g_EmergencyExitFlag
;
; Called Functions:
;   crt_exit.c_ExitHookStub_FUN_0060b530
;   crt_exit.c_FinalExitHandler_FUN_0060b560
;   crt_exit.c_ProcessExitHandlers_FUN_0060ac88
;
; *****************************************************************************

section .text

    CALL dword ptr [0x00685478]         ; 0060b534 | PTR_crt_exit.c_ExitHookStub_FUN_0060b530_00685478
        ;   Label: crt_startup.c_ExitApplication_FUN_0060b534
    CMP byte ptr [0x03f9b220],0x0       ; 0060b53a | g_EmergencyExitFlag
    JNZ 0x0060b552                      ; 0060b541
        ;   XREF to: 0060b552 (CONDITIONAL_JUMP)  ; LAB_0060b552
    MOV EDX,0xff                        ; 0060b543
    MOV EAX,0x10                        ; 0060b548
    CALL crt_exit.c_ProcessExitHandlers_FUN_0060ac88 ; 0060b54d
        ;   XREF to: 0060ac88 (UNCONDITIONAL_CALL)  ; void crt_exit.c_ProcessExitHandlers_FUN_0060ac88(uchar min_priority, uchar max_priority)
    MOV EDX,dword ptr [ESP + 0x4]       ; 0060b552
        ;   Label: LAB_0060b552
    PUSH EDX                            ; 0060b556
    CALL crt_exit.c_FinalExitHandler_FUN_0060b560 ; 0060b557
        ;   XREF to: 0060b560 (UNCONDITIONAL_CALL)  ; void crt_exit.c_FinalExitHandler_FUN_0060b560(int exit_code)
    ADD ESP,0x4                         ; 0060b55c
    RET                                 ; 0060b55f

