; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_startup_c_ExitApplication_FUN_0056fcd4(int exit_code)
;
; Parameters:
; int              Stack[0x4]:4   exit_code
;
; XREF[2]:
;   crt_cpp.c_reportPureVirtualError_FUN_0056af76 at 0056af95
;   crt_startup.cpp_WinMainBootstrap_FUN_0056df10 at 0056dfb3
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_ExitHookStub_FUN_0056fcd0_005c2054 = 0056fcd0
;   undefined4 DAT_02de4e30
;
; Called Functions:
;   crt_exit.c_FinalExitHandler_FUN_0056fd00
;   crt_exit.c_ProcessExitHandlers_FUN_0056efb8
;   crt_unknown.c_ExitHookStub_FUN_0056fcd0
;
; *****************************************************************************

section .text

    CALL dword ptr [0x005c2054]         ; 0056fcd4 | PTR_crt_unknown.c_ExitHookStub_FUN_0056fcd0_005c2054
        ;   Label: crt_startup.c_ExitApplication_FUN_0056fcd4
    CMP byte ptr [0x02de4e30],0x0       ; 0056fcda | DAT_02de4e30
    JNZ 0x0056fcf2                      ; 0056fce1
        ;   XREF to: 0056fcf2 (CONDITIONAL_JUMP)  ; LAB_0056fcf2
    MOV EDX,0xff                        ; 0056fce3
    MOV EAX,0x10                        ; 0056fce8
    CALL crt_exit.c_ProcessExitHandlers_FUN_0056efb8 ; 0056fced
        ;   XREF to: 0056efb8 (UNCONDITIONAL_CALL)  ; void crt_exit.c_ProcessExitHandlers_FUN_0056efb8(uchar min_priority, uchar max_priority)
    MOV EDX,dword ptr [ESP + 0x4]       ; 0056fcf2
        ;   Label: LAB_0056fcf2
    PUSH EDX                            ; 0056fcf6
    CALL crt_exit.c_FinalExitHandler_FUN_0056fd00 ; 0056fcf7
        ;   XREF to: 0056fd00 (UNCONDITIONAL_CALL)  ; void crt_exit.c_FinalExitHandler_FUN_0056fd00(int exit_code)
    ADD ESP,0x4                         ; 0056fcfc
    RET                                 ; 0056fcff

