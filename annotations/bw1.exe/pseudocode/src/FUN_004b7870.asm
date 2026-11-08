; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b7870(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x600360                       ; 004b7870
        ;   Label: FUN_004b7870
    PUSH 0x100                          ; 004b7875
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b787a
    PUSH EDX                            ; 004b787e
    CALL FUN_005c1066                   ; 004b787f
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1066()
    ADD ESP,0xc                         ; 004b7884
    RET                                 ; 004b7887

