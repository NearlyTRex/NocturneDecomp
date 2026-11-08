; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005adab0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0041bd30
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005adab0
        ;   Label: FUN_005adab0
    PUSH EDX                            ; 005adab4
    CALL FUN_0041bd30                   ; 005adab5
        ;   XREF to: 0041bd30 (UNCONDITIONAL_CALL)  ; undefined FUN_0041bd30()
    ADD ESP,0x4                         ; 005adaba
    MOV dword ptr [EAX + 0x2b0],0x601094 ; 005adabd
    RET                                 ; 005adac7

