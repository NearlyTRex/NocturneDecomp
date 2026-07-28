; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_exit_c_ExitProcess_FUN_005674b0(int exit_code)
;
; Parameters:
; undefined4       Stack[0x0]:4   local_res0
; int              Stack[0x4]:4   exit_code
;
; XREF[2]:
;   crt_exit.c_FinalExitHandler_FUN_0056fd00 at 0056fd21
;   crt_startup.c_WriteErrorAndExit_FUN_0056dd80 at 0056ddb8
;
; Referenced Globals:
;   void* PTR_ExitProcess_005754b4 = 00175b8a
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1af8 = 005671e4
;   undefined4 DAT_005c1b04
;   undefined4 DAT_02de4e30
;
; Called Functions:
;   crt_exception.c_RemoveExceptionHandler_FUN_0056ef24
;   crt_exit.c_ProcessExitHandlers_FUN_0056efb8
;   crt_sync.c_CriticalSectionStub_FUN_005671e4
;   ExitProcess
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02de4e30],0x0      ; 005674b0 | DAT_02de4e30
        ;   Label: crt_exit.c_ExitProcess_FUN_005674b0
    JZ 0x005674d4                       ; 005674b7
        ;   XREF to: 005674d4 (CONDITIONAL_JUMP)  ; LAB_005674d4
    CMP dword ptr [0x005c1b04],0x0      ; 005674b9 | DAT_005c1b04
    JZ 0x005674eb                       ; 005674c0
        ;   XREF to: 005674eb (CONDITIONAL_JUMP)  ; LAB_005674eb
    PUSH 0xff                           ; 005674c2
    PUSH 0x0                            ; 005674c7
    CALL dword ptr [0x005c1b04]         ; 005674c9 | DAT_005c1b04
    ADD ESP,0x8                         ; 005674cf
    JMP 0x005674eb                      ; 005674d2
        ;   XREF to: 005674eb (UNCONDITIONAL_JUMP)  ; LAB_005674eb
    CALL crt_exception.c_RemoveExceptionHandler_FUN_0056ef24 ; 005674d4
        ;   XREF to: 0056ef24 (UNCONDITIONAL_CALL)  ; void crt_exception.c_RemoveExceptionHandler_FUN_0056ef24()
        ;   Label: LAB_005674d4
    MOV EDX,0xf                         ; 005674d9
    XOR EAX,EAX                         ; 005674de
    CALL crt_exit.c_ProcessExitHandlers_FUN_0056efb8 ; 005674e0
        ;   XREF to: 0056efb8 (UNCONDITIONAL_CALL)  ; void crt_exit.c_ProcessExitHandlers_FUN_0056efb8(uchar min_priority, uchar max_priority)
    CALL dword ptr [0x005c1af8]         ; 005674e5 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1af8
    MOV ECX,dword ptr [ESP]             ; 005674eb
        ;   Label: LAB_005674eb
    PUSH ECX                            ; 005674ee
    CALL dword ptr CS:[0x5754b4]        ; 005674ef | PTR_ExitProcess_005754b4

