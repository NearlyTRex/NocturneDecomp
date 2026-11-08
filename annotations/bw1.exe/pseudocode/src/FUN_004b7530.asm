; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b7530(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00532130
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004b7530
        ;   Label: FUN_004b7530
    PUSH EDX                            ; 004b7534
    CALL FUN_00532130                   ; 004b7535
        ;   XREF to: 00532130 (UNCONDITIONAL_CALL)  ; undefined FUN_00532130()
    ADD ESP,0x4                         ; 004b753a
    MOV dword ptr [EAX + 0x3c],0x5fffe4 ; 004b753d
    RET                                 ; 004b7544

