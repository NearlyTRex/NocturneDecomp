; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004bf6e0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x5fca10                       ; 004bf6e0
        ;   Label: FUN_004bf6e0
    PUSH 0x6                            ; 004bf6e5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004bf6e7
    PUSH EDX                            ; 004bf6eb
    CALL FUN_005c1066                   ; 004bf6ec
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1066()
    ADD ESP,0xc                         ; 004bf6f1
    RET                                 ; 004bf6f4

