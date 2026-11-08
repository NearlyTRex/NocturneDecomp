; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0055a600(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00555bf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055a600
        ;   Label: FUN_0055a600
    MOV EBX,dword ptr [ESP + 0x8]       ; 0055a601
    PUSH EBX                            ; 0055a605
    CALL FUN_00555bf0                   ; 0055a606
        ;   XREF to: 00555bf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00555bf0()
    ADD ESP,0x4                         ; 0055a60b
    MOV EAX,EBX                         ; 0055a60e
    POP EBX                             ; 0055a610
    RET                                 ; 0055a611

