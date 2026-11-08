; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0055a5d0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00555bf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055a5d0
        ;   Label: FUN_0055a5d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0055a5d1
    PUSH EBX                            ; 0055a5d5
    CALL FUN_00555bf0                   ; 0055a5d6
        ;   XREF to: 00555bf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00555bf0()
    ADD ESP,0x4                         ; 0055a5db
    MOV EAX,EBX                         ; 0055a5de
    POP EBX                             ; 0055a5e0
    RET                                 ; 0055a5e1

