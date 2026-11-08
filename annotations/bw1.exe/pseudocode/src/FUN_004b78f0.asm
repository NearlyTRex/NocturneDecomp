; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b78f0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x600220                       ; 004b78f0
        ;   Label: FUN_004b78f0
    PUSH 0x40                           ; 004b78f5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b78f7
    PUSH EDX                            ; 004b78fb
    CALL FUN_005c1066                   ; 004b78fc
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1066()
    ADD ESP,0xc                         ; 004b7901
    RET                                 ; 004b7904

