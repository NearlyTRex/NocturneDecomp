; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f2100(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005180b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004f2100
        ;   Label: FUN_004f2100
    PUSH EDX                            ; 004f2104
    CALL FUN_005180b0                   ; 004f2105
        ;   XREF to: 005180b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005180b0()
    ADD ESP,0x4                         ; 004f210a
    MOV dword ptr [EAX + 0x2b0],0x5fa034 ; 004f210d
    RET                                 ; 004f2117

