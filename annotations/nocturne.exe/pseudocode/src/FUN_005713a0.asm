; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005713a0(int param_1)
;
;
; XREF[1]:
;   FUN_0056e56c at 0056e59d
;
; Referenced Globals:
;   void* PTR_GetCurrentThreadId_00575500 = 00175ce8
;
; Called Functions:
;   FUN_0056e9d0
;   GetCurrentThreadId
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005713a0
        ;   Label: FUN_005713a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005713a1
    TEST EBX,EBX                        ; 005713a5
    JZ 0x005713c8                       ; 005713a7
        ;   XREF to: 005713c8 (CONDITIONAL_JUMP)  ; LAB_005713c8
    PUSH 0x0                            ; 005713a9
    PUSH EBX                            ; 005713ab
    MOV dword ptr [EBX + 0xc],0x1       ; 005713ac
    CALL FUN_0056e9d0                   ; 005713b3
        ;   XREF to: 0056e9d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056e9d0()
    ADD ESP,0x8                         ; 005713b8
    CALL dword ptr CS:[0x575500]        ; 005713bb | PTR_GetCurrentThreadId_00575500
    MOV dword ptr [EBX + 0xda],EAX      ; 005713c2
    POP EBX                             ; 005713c8
        ;   Label: LAB_005713c8
    RET                                 ; 005713c9

