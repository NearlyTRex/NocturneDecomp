; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00537500(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00537550
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00537500
        ;   Label: FUN_00537500
    MOV EBX,dword ptr [ESP + 0x8]       ; 00537501
    PUSH EBX                            ; 00537505
    CALL FUN_00537550                   ; 00537506
        ;   XREF to: 00537550 (UNCONDITIONAL_CALL)  ; undefined FUN_00537550()
    ADD ESP,0x4                         ; 0053750b
    MOV EAX,EBX                         ; 0053750e
    POP EBX                             ; 00537510
    RET                                 ; 00537511

