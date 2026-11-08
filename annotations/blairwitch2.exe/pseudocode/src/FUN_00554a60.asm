; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00554a60(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00550070
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00554a60
        ;   Label: FUN_00554a60
    MOV EBX,dword ptr [ESP + 0x8]       ; 00554a61
    PUSH EBX                            ; 00554a65
    CALL FUN_00550070                   ; 00554a66
        ;   XREF to: 00550070 (UNCONDITIONAL_CALL)  ; undefined FUN_00550070()
    ADD ESP,0x4                         ; 00554a6b
    MOV EAX,EBX                         ; 00554a6e
    POP EBX                             ; 00554a70
    RET                                 ; 00554a71

