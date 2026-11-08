; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a1490(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0059fa20
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a1490
        ;   Label: FUN_005a1490
    PUSH EDX                            ; 005a1494
    CALL FUN_0059fa20                   ; 005a1495
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; undefined FUN_0059fa20()
    ADD ESP,0x4                         ; 005a149a
    RET                                 ; 005a149d

