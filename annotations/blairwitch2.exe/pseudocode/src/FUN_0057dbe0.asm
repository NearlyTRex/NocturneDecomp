; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057dbe0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0057d860
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0057dbe0
        ;   Label: FUN_0057dbe0
    PUSH EDX                            ; 0057dbe4
    CALL FUN_0057d860                   ; 0057dbe5
        ;   XREF to: 0057d860 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d860()
    ADD ESP,0x4                         ; 0057dbea
    MOV dword ptr [EAX],0x5fd484        ; 0057dbed
    RET                                 ; 0057dbf3

