; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00425490(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00425420 at 00425435
;
; Referenced Globals:
;   undefined4 DAT_005dbca0
;
; Called Functions:
;   FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5dbca0                       ; 00425490 | DAT_005dbca0
        ;   Label: FUN_00425490
    PUSH 0x8                            ; 00425495
    MOV EDX,dword ptr [ESP + 0xc]       ; 00425497
    PUSH EDX                            ; 0042549b
    CALL FUN_005a3de6                   ; 0042549c
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3de6()
    ADD ESP,0xc                         ; 004254a1
    RET                                 ; 004254a4

