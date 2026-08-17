; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_exit_c_FinalExitHandler_FUN_0056fd00(int exit_code)
;
; Parameters:
; int              Stack[0x4]:4   exit_code
;
; XREF[1]:
;   crt_startup.c_ExitApplication_FUN_0056fcd4 at 0056fcf7
;
; Referenced Globals:
;   undefined4 DAT_005c1d94
;   void* PTR_crt_unknown.c_ExitHookStub_FUN_0056fcd0_005c2054 = 0056fcd0
;   void* PTR_crt_unknown.c_ExitHookStub_FUN_0056fcd0_005c2058 = 0056fcd0
;
; Called Functions:
;   crt_exit.c_ExitProcess_FUN_005674b0
;   crt_unknown.c_ExitHookStub_FUN_0056fcd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056fd00
        ;   Label: crt_exit.c_FinalExitHandler_FUN_0056fd00
    CALL dword ptr [0x005c2054]         ; 0056fd01 | PTR_crt_unknown.c_ExitHookStub_FUN_0056fcd0_005c2054
    CALL dword ptr [0x005c2058]         ; 0056fd07 | PTR_crt_unknown.c_ExitHookStub_FUN_0056fcd0_005c2058
    CMP dword ptr [0x005c1d94],0x0      ; 0056fd0d | DAT_005c1d94
    JZ 0x0056fd1c                       ; 0056fd14
        ;   XREF to: 0056fd1c (CONDITIONAL_JUMP)  ; LAB_0056fd1c
    CALL dword ptr [0x005c1d94]         ; 0056fd16 | DAT_005c1d94
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056fd1c
        ;   Label: LAB_0056fd1c
    PUSH EBX                            ; 0056fd20
    JMP 0x005674b0                      ; 0056fd21
        ;   XREF to: 005674b0 (UNCONDITIONAL_CALL)

