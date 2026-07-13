; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00554960(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00555750
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00554960
        ;   Label: FUN_00554960
    MOV EBX,dword ptr [ESP + 0x8]       ; 00554961
    PUSH 0x0                            ; 00554965
    PUSH EBX                            ; 00554967
    CALL FUN_00555750                   ; 00554968
        ;   XREF to: 00555750 (UNCONDITIONAL_CALL)  ; undefined FUN_00555750()
    ADD ESP,0x8                         ; 0055496d
    MOV EAX,EBX                         ; 00554970
    POP EBX                             ; 00554972
    RET                                 ; 00554973

