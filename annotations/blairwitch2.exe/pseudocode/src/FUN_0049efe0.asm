; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049efe0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f68b0                       ; 0049efe0
        ;   Label: FUN_0049efe0
    PUSH 0x100                          ; 0049efe5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0049efea
    PUSH EDX                            ; 0049efee
    CALL FUN_005b854f                   ; 0049efef
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; undefined FUN_005b854f()
    ADD ESP,0xc                         ; 0049eff4
    RET                                 ; 0049eff7

