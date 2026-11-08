; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00509cb0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_0054d9b0 at 0054da5b
;
; Called Functions:
;   FUN_00509f30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00509cb0
        ;   Label: FUN_00509cb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00509cb1
    PUSH EBX                            ; 00509cb5
    CALL FUN_00509f30                   ; 00509cb6
        ;   XREF to: 00509f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00509f30()
    ADD ESP,0x4                         ; 00509cbb
    MOV EAX,EBX                         ; 00509cbe
    POP EBX                             ; 00509cc0
    RET                                 ; 00509cc1

