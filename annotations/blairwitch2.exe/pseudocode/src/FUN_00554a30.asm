; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00554a30(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00550070
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00554a30
        ;   Label: FUN_00554a30
    MOV EBX,dword ptr [ESP + 0x8]       ; 00554a31
    PUSH EBX                            ; 00554a35
    CALL FUN_00550070                   ; 00554a36
        ;   XREF to: 00550070 (UNCONDITIONAL_CALL)  ; undefined FUN_00550070()
    ADD ESP,0x4                         ; 00554a3b
    MOV EAX,EBX                         ; 00554a3e
    POP EBX                             ; 00554a40
    RET                                 ; 00554a41

