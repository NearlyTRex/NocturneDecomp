; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00529a20(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00525eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00529a20
        ;   Label: FUN_00529a20
    MOV EBX,dword ptr [ESP + 0x8]       ; 00529a21
    PUSH EBX                            ; 00529a25
    CALL FUN_00525eb0                   ; 00529a26
        ;   XREF to: 00525eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00525eb0()
    ADD ESP,0x4                         ; 00529a2b
    MOV EAX,EBX                         ; 00529a2e
    POP EBX                             ; 00529a30
    RET                                 ; 00529a31

