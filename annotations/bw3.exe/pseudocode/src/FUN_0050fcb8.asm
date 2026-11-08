; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0050fcb8(void)
;
;
; XREF[1]:
;   FUN_0050fa90 at 0050fb2d
;
; Called Functions:
;   FUN_005a3e50
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0050fcb8
        ;   Label: FUN_0050fcb8
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050fcb9
    PUSH EAX                            ; 0050fcbc
    CALL FUN_005a3e50                   ; 0050fcbd
        ;   XREF to: 005a3e50 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3e50()
    ADD ESP,0x8                         ; 0050fcc2
    MOV dword ptr [EBP + 0x14],EAX      ; 0050fcc5
    ADD ESP,0x144                       ; 0050fcc8
    POP EBP                             ; 0050fcce
    POP EDI                             ; 0050fccf
    POP ESI                             ; 0050fcd0
    POP EBX                             ; 0050fcd1
    RET                                 ; 0050fcd2

