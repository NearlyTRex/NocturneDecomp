; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bce08(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_005befc0 at 005bf061
;
; Called Functions:
;   FUN_005c0900
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005bce08
        ;   Label: FUN_005bce08
    PUSH EDX                            ; 005bce0c
    CALL FUN_005c0900                   ; 005bce0d
        ;   XREF to: 005c0900 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0900()
    ADD ESP,0x4                         ; 005bce12
    RET                                 ; 005bce15

