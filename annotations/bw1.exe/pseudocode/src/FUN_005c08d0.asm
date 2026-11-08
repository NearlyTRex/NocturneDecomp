; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c08d0(undefined4 param_1)
;
;
; XREF[44]:
;   FUN_0040d0e0 at 0040d105
;   FUN_0043a200 at 0043a22f
;   FUN_0043b2e0 at 0043b397
;   FUN_00443f90 at 00443fbc
;   FUN_0044cc30 at 0044cd36
;   FUN_00457c40 at 00457ca6
;   FUN_0045d9c0 at 0045d9d5
;   FUN_0045ddb0 at 0045de47
;   FUN_00462590 at 004625b8
;   FUN_00463de0 at 00463de5
;   ... and 34 more
;
; Called Functions:
;   FUN_005c08e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005c08d0
        ;   Label: FUN_005c08d0
    PUSH EDX                            ; 005c08d4
    CALL FUN_005c08e0                   ; 005c08d5
        ;   XREF to: 005c08e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c08e0()
    ADD ESP,0x4                         ; 005c08da
    RET                                 ; 005c08dd

