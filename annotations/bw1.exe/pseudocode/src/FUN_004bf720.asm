; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004bf720(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x600980                       ; 004bf720
        ;   Label: FUN_004bf720
    PUSH 0x6                            ; 004bf725
    MOV EDX,dword ptr [ESP + 0xc]       ; 004bf727
    PUSH EDX                            ; 004bf72b
    CALL FUN_005c1066                   ; 004bf72c
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1066()
    ADD ESP,0xc                         ; 004bf731
    RET                                 ; 004bf734

