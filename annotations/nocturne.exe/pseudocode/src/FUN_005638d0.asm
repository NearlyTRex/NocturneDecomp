; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005638d0(undefined4 param_1)
;
;
; XREF[51]:
;   FUN_004012a0 at 004012b0
;   FUN_004303d0 at 004304ac
;   FUN_0044adf0 at 0044ae33
;   FUN_0044d4c0 at 0044d4d2
;   FUN_0046fa20 at 0046fa61
;   FUN_00476160 at 00476185
;   FUN_004a57c0 at 004a5d62
;   FUN_004e7ed0 at 004e7f1f
;   FUN_004f3f50 at 004f3f76
;   FUN_004f3f80 at 004f3f8f
;   ... and 41 more
;
; Called Functions:
;   FUN_005638e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005638d0
        ;   Label: FUN_005638d0
    PUSH EDX                            ; 005638d4
    CALL FUN_005638e0                   ; 005638d5
        ;   XREF to: 005638e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005638e0()
    ADD ESP,0x4                         ; 005638da
    RET                                 ; 005638dd

