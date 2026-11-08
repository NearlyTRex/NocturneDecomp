; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c69a8(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_005c08e0 at 005c09a2
;
; Called Functions:
;   FUN_005c68f8
;   FUN_005cba50
;
; *****************************************************************************

section .text

    CALL FUN_005cba50                   ; 005c69a8
        ;   XREF to: 005cba50 (UNCONDITIONAL_CALL)  ; undefined FUN_005cba50()
        ;   Label: FUN_005c69a8
    MOV EDX,dword ptr [ESP + 0x4]       ; 005c69ad
    PUSH EDX                            ; 005c69b1
    CALL FUN_005c68f8                   ; 005c69b2
        ;   XREF to: 005c68f8 (UNCONDITIONAL_CALL)  ; undefined FUN_005c68f8()
    ADD ESP,0x4                         ; 005c69b7
    RET                                 ; 005c69ba

