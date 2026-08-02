; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005713a0(ThreadData *param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_0056e56c at 0056e59d
;
; Referenced Globals:
;   void* PTR_GetCurrentThreadId_00575500 = 00175ce8
;
; Called Functions:
;   crt_memory.c___GetStackLimits_FUN_0056e9d0
;   GetCurrentThreadId
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005713a0
        ;   Label: crt_unknown.c_FUN_005713a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005713a1
    TEST EBX,EBX                        ; 005713a5
    JZ 0x005713c8                       ; 005713a7
        ;   XREF to: 005713c8 (CONDITIONAL_JUMP)  ; LAB_005713c8
    PUSH 0x0                            ; 005713a9
    PUSH EBX                            ; 005713ab
    MOV dword ptr [EBX + 0xc],0x1       ; 005713ac
    CALL crt_memory.c___GetStackLimits_FUN_0056e9d0 ; 005713b3
        ;   XREF to: 0056e9d0 (UNCONDITIONAL_CALL)  ; void crt_memory.c___GetStackLimits_FUN_0056e9d0(ThreadData * pStackBound, uint * pHeapBound)
    ADD ESP,0x8                         ; 005713b8
    CALL dword ptr CS:[0x575500]        ; 005713bb | PTR_GetCurrentThreadId_00575500
    MOV dword ptr [EBX + 0xda],EAX      ; 005713c2
    POP EBX                             ; 005713c8
        ;   Label: LAB_005713c8
    RET                                 ; 005713c9

