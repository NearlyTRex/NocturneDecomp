; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005380b0(undefined4 param_1)
;
;
; XREF[3]:
;   FUN_00537c30 at 00537c94
;   FUN_00537cb0 at 00537cf1
;   FUN_00538480 at 00538514
;
; Called Functions:
;   FUN_00538000
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005380b0
        ;   Label: FUN_005380b0
    PUSH EAX                            ; 005380b4
    PUSH EAX                            ; 005380b5
    CALL FUN_00538000                   ; 005380b6
        ;   XREF to: 00538000 (UNCONDITIONAL_CALL)  ; undefined FUN_00538000()
    ADD ESP,0x8                         ; 005380bb
    RET                                 ; 005380be

