; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00510e90(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00539400
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00510e90
        ;   Label: FUN_00510e90
    PUSH EDX                            ; 00510e94
    CALL FUN_00539400                   ; 00510e95
        ;   XREF to: 00539400 (UNCONDITIONAL_CALL)  ; undefined FUN_00539400()
    ADD ESP,0x4                         ; 00510e9a
    MOV dword ptr [EAX + 0x154],0x603b74 ; 00510e9d
    RET                                 ; 00510ea7

