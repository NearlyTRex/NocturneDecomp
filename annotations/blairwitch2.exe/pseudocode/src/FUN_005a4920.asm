; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a4920(undefined4 param_1)
;
;
; XREF[5]:
;   FUN_005a5440 at 005a5445
;   FUN_005a5d50 at 005a5d55
;   FUN_005a7cd0 at 005a7cd5
;   FUN_005a8e60 at 005a8e65
;   FUN_005a9110 at 005a9115
;
; Called Functions:
;   FUN_0059fa20
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a4920
        ;   Label: FUN_005a4920
    PUSH EDX                            ; 005a4924
    CALL FUN_0059fa20                   ; 005a4925
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; undefined FUN_0059fa20()
    ADD ESP,0x4                         ; 005a492a
    RET                                 ; 005a492d

