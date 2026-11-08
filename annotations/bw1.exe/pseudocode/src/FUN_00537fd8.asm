; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00537fd8(void)
;
;
; XREF[1]:
;   FUN_00537db0 at 00537e4d
;
; Called Functions:
;   FUN_005c10d0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00537fd8
        ;   Label: FUN_00537fd8
    MOV EAX,dword ptr [EBP + 0x14]      ; 00537fd9
    PUSH EAX                            ; 00537fdc
    CALL FUN_005c10d0                   ; 00537fdd
        ;   XREF to: 005c10d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c10d0()
    ADD ESP,0x8                         ; 00537fe2
    MOV dword ptr [EBP + 0x14],EAX      ; 00537fe5
    ADD ESP,0x144                       ; 00537fe8
    POP EBP                             ; 00537fee
    POP EDI                             ; 00537fef
    POP ESI                             ; 00537ff0
    POP EBX                             ; 00537ff1
    RET                                 ; 00537ff2

