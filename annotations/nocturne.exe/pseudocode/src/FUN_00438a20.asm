; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00438a20(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00435160 at 00435177
;
; Referenced Globals:
;   undefined4 DAT_0059b3c0
;
; Called Functions:
;   FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59b3c0                       ; 00438a20 | DAT_0059b3c0
        ;   Label: FUN_00438a20
    PUSH 0x32                           ; 00438a25
    MOV EDX,dword ptr [ESP + 0xc]       ; 00438a27
    PUSH EDX                            ; 00438a2b
    CALL FUN_0056494f                   ; 00438a2c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined FUN_0056494f()
    ADD ESP,0xc                         ; 00438a31
    RET                                 ; 00438a34

