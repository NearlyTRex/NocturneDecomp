; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0042cdc0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_0042cd30 at 0042cd45
;
; Referenced Globals:
;   undefined4 DAT_0059b320
;
; Called Functions:
;   FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59b320                       ; 0042cdc0 | DAT_0059b320
        ;   Label: FUN_0042cdc0
    PUSH 0x14                           ; 0042cdc5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0042cdc7
    PUSH EDX                            ; 0042cdcb
    CALL FUN_0056494f                   ; 0042cdcc
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined FUN_0056494f()
    ADD ESP,0xc                         ; 0042cdd1
    RET                                 ; 0042cdd4

