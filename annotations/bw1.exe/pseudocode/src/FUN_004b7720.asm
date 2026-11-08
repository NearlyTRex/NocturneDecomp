; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b7720(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00532130
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004b7720
        ;   Label: FUN_004b7720
    PUSH EDX                            ; 004b7724
    CALL FUN_00532130                   ; 004b7725
        ;   XREF to: 00532130 (UNCONDITIONAL_CALL)  ; undefined FUN_00532130()
    ADD ESP,0x4                         ; 004b772a
    MOV dword ptr [EAX + 0x3c],0x600064 ; 004b772d
    RET                                 ; 004b7734

