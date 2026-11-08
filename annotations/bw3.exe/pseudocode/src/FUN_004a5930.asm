; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a5930(undefined4 param_1)
;
;
; XREF[2]:
;   FUN_004a58c0 at 004a58d5
;   FUN_00593ca0 at 00593cb5
;
; Referenced Globals:
;   undefined4 DAT_005dbca0
;
; Called Functions:
;   FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5dbca0                       ; 004a5930 | DAT_005dbca0
        ;   Label: FUN_004a5930
    PUSH 0xc                            ; 004a5935
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a5937
    PUSH EDX                            ; 004a593b
    CALL FUN_005a3de6                   ; 004a593c
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3de6()
    ADD ESP,0xc                         ; 004a5941
    RET                                 ; 004a5944

