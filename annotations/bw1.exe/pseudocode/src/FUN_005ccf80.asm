; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ccf80(int param_1)
;
;
; XREF[1]:
;   FUN_005cac3c at 005cac6d
;
; Referenced Globals:
;   void* PTR_GetCurrentThreadId_005d0590 = 001d0e6a
;
; Called Functions:
;   FUN_005cb0a0
;   GetCurrentThreadId
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ccf80
        ;   Label: FUN_005ccf80
    MOV EBX,dword ptr [ESP + 0x8]       ; 005ccf81
    TEST EBX,EBX                        ; 005ccf85
    JZ 0x005ccfa8                       ; 005ccf87
        ;   XREF to: 005ccfa8 (CONDITIONAL_JUMP)  ; LAB_005ccfa8
    PUSH 0x0                            ; 005ccf89
    PUSH EBX                            ; 005ccf8b
    MOV dword ptr [EBX + 0xc],0x1       ; 005ccf8c
    CALL FUN_005cb0a0                   ; 005ccf93
        ;   XREF to: 005cb0a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005cb0a0()
    ADD ESP,0x8                         ; 005ccf98
    CALL dword ptr CS:[0x5d0590]        ; 005ccf9b | PTR_GetCurrentThreadId_005d0590
    MOV dword ptr [EBX + 0xda],EAX      ; 005ccfa2
    POP EBX                             ; 005ccfa8
        ;   Label: LAB_005ccfa8
    RET                                 ; 005ccfa9

