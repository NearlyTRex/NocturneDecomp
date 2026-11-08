; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00453cf0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00453ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00453cf0
        ;   Label: FUN_00453cf0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00453cf1
    PUSH EBX                            ; 00453cf5
    CALL FUN_00453ec0                   ; 00453cf6
        ;   XREF to: 00453ec0 (UNCONDITIONAL_CALL)  ; undefined FUN_00453ec0()
    ADD ESP,0x4                         ; 00453cfb
    MOV EAX,EBX                         ; 00453cfe
    POP EBX                             ; 00453d00
    RET                                 ; 00453d01

