; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005407e0(void)
;
;
; Called Functions:
;   FUN_00502760
;   FUN_005badc7
;
; *****************************************************************************

section .text

    PUSH 0x8                            ; 005407e0
        ;   Label: FUN_005407e0
    CALL FUN_005badc7                   ; 005407e5
        ;   XREF to: 005badc7 (UNCONDITIONAL_CALL)  ; undefined FUN_005badc7()
    MOV EDX,dword ptr [ESP + 0x4]       ; 005407ea
    PUSH EDX                            ; 005407ee
    CALL FUN_00502760                   ; 005407ef
        ;   XREF to: 00502760 (UNCONDITIONAL_CALL)  ; undefined FUN_00502760()
    MOV dword ptr [EAX + 0x1d1f8],0x0   ; 005407f4
    MOV dword ptr [EAX + 0x1e00c],0x0   ; 005407fe
    MOV dword ptr [EAX + 0x1e010],0x0   ; 00540808
    MOV dword ptr [EAX + 0x1e014],0x0   ; 00540812
    MOV dword ptr [EAX + 0x1e018],0x0   ; 0054081c
    ADD ESP,0x4                         ; 00540826
    MOV byte ptr [EAX + 0x1d1a8],0x0    ; 00540829
    RET                                 ; 00540830

