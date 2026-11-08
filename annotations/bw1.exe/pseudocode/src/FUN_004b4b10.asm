; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004b4b10(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004aba90 at 004aba95
;
; Called Functions:
;   FUN_004b4b30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b4b10
        ;   Label: FUN_004b4b10
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b4b11
    PUSH EBX                            ; 004b4b15
    CALL FUN_004b4b30                   ; 004b4b16
        ;   XREF to: 004b4b30 (UNCONDITIONAL_CALL)  ; undefined FUN_004b4b30()
    ADD ESP,0x4                         ; 004b4b1b
    MOV EAX,EBX                         ; 004b4b1e
    POP EBX                             ; 004b4b20
    RET                                 ; 004b4b21

