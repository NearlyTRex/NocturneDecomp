; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0055c7e0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0055d580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055c7e0
        ;   Label: FUN_0055c7e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0055c7e1
    PUSH EBX                            ; 0055c7e5
    CALL FUN_0055d580                   ; 0055c7e6
        ;   XREF to: 0055d580 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d580()
    ADD ESP,0x4                         ; 0055c7eb
    MOV EAX,EBX                         ; 0055c7ee
    POP EBX                             ; 0055c7f0
    RET                                 ; 0055c7f1

