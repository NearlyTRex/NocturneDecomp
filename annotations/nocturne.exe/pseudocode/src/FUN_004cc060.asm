; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cc060(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005a0250
;
; Called Functions:
;   FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5a0250                       ; 004cc060 | DAT_005a0250
        ;   Label: FUN_004cc060
    PUSH 0x2                            ; 004cc065
    MOV EDX,dword ptr [ESP + 0xc]       ; 004cc067
    PUSH EDX                            ; 004cc06b
    CALL FUN_0056494f                   ; 004cc06c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined FUN_0056494f()
    ADD ESP,0xc                         ; 004cc071
    RET                                 ; 004cc074

