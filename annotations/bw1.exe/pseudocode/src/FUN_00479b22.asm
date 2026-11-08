; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00479b22(void)
;
;
; XREF[1]:
;   FUN_00479ae0 at 00479b0a
;
; Called Functions:
;   FUN_005c09f0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00479b22
        ;   Label: FUN_00479b22
    CALL FUN_005c09f0                   ; 00479b23
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c09f0()
    ADD ESP,0x4                         ; 00479b28
    MOV dword ptr [EBX + 0x30],0x0      ; 00479b2b
    POP EBP                             ; 00479b32
    POP ESI                             ; 00479b33
    POP EBX                             ; 00479b34
    RET                                 ; 00479b35

