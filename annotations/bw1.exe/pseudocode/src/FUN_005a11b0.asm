; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a11b0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0059f540
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a11b0
        ;   Label: FUN_005a11b0
    PUSH EDX                            ; 005a11b4
    CALL FUN_0059f540                   ; 005a11b5
        ;   XREF to: 0059f540 (UNCONDITIONAL_CALL)  ; undefined FUN_0059f540()
    ADD ESP,0x4                         ; 005a11ba
    MOV dword ptr [EAX],0x6073c4        ; 005a11bd
    RET                                 ; 005a11c3

