; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004bf700(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x6009a0                       ; 004bf700
        ;   Label: FUN_004bf700
    PUSH 0x4                            ; 004bf705
    MOV EDX,dword ptr [ESP + 0xc]       ; 004bf707
    PUSH EDX                            ; 004bf70b
    CALL FUN_005c1066                   ; 004bf70c
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1066()
    ADD ESP,0xc                         ; 004bf711
    RET                                 ; 004bf714

