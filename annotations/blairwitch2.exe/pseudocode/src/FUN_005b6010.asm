; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005b6010(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005b6030
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b6010
        ;   Label: FUN_005b6010
    MOV EBX,dword ptr [ESP + 0x8]       ; 005b6011
    PUSH EBX                            ; 005b6015
    CALL FUN_005b6030                   ; 005b6016
        ;   XREF to: 005b6030 (UNCONDITIONAL_CALL)  ; undefined FUN_005b6030()
    ADD ESP,0x4                         ; 005b601b
    MOV EAX,EBX                         ; 005b601e
    POP EBX                             ; 005b6020
    RET                                 ; 005b6021

