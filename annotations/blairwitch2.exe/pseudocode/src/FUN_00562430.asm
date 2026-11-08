; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00562430(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0041bd30
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00562430
        ;   Label: FUN_00562430
    PUSH EDX                            ; 00562434
    CALL FUN_0041bd30                   ; 00562435
        ;   XREF to: 0041bd30 (UNCONDITIONAL_CALL)  ; undefined FUN_0041bd30()
    MOV dword ptr [EAX + 0x2b0],0x5fc094 ; 0056243a
    ADD ESP,0x4                         ; 00562444
    MOV dword ptr [EAX + 0x7d4],0x0     ; 00562447
    RET                                 ; 00562451

