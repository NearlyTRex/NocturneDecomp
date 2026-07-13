; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0044bcb0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0044bcd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044bcb0
        ;   Label: FUN_0044bcb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0044bcb1
    PUSH EBX                            ; 0044bcb5
    CALL FUN_0044bcd0                   ; 0044bcb6
        ;   XREF to: 0044bcd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044bcd0()
    ADD ESP,0x4                         ; 0044bcbb
    MOV EAX,EBX                         ; 0044bcbe
    POP EBX                             ; 0044bcc0
    RET                                 ; 0044bcc1

