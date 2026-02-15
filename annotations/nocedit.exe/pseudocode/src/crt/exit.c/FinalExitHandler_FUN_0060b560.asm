; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_exit_c_FinalExitHandler_FUN_0060b560(int exit_code)
;
; Parameters:
; int              Stack[0x4]:4   exit_code
;
; XREF[1]:
;   crt_startup.c_ExitApplication_FUN_0060b534 at 0060b557
;
; Referenced Globals:
;   undefined4 DAT_006852c4
;   void* PTR_crt_exit.c_ExitHookStub_FUN_0060b530_00685478 = 0060b530
;   void* PTR_crt_exit.c_ExitHookStub_FUN_0060b530_0068547c = 0060b530
;
; Called Functions:
;   crt_exit.c_ExitHookStub_FUN_0060b530
;   crt_exit.c_ExitProcess_FUN_00602700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060b560
        ;   Label: crt_exit.c_FinalExitHandler_FUN_0060b560
    CALL dword ptr [0x00685478]         ; 0060b561 | PTR_crt_exit.c_ExitHookStub_FUN_0060b530_00685478
    CALL dword ptr [0x0068547c]         ; 0060b567 | PTR_crt_exit.c_ExitHookStub_FUN_0060b530_0068547c
    CMP dword ptr [0x006852c4],0x0      ; 0060b56d | DAT_006852c4
    JZ 0x0060b57c                       ; 0060b574
        ;   XREF to: 0060b57c (CONDITIONAL_JUMP)  ; LAB_0060b57c
    CALL dword ptr [0x006852c4]         ; 0060b576 | DAT_006852c4
    MOV EBX,dword ptr [ESP + 0x8]       ; 0060b57c
        ;   Label: LAB_0060b57c
    PUSH EBX                            ; 0060b580
    JMP 0x00602700                      ; 0060b581
        ;   XREF to: 00602700 (UNCONDITIONAL_CALL)

