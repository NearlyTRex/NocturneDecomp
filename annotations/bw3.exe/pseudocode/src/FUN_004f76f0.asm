; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f76f0(void)
;
;
; XREF[1]:
;   FUN_004f5cc0 at 004f61c7
;
; Called Functions:
;   FUN_004624d0
;   FUN_005501a0
;   FUN_005502d0
;   FUN_0056ac20
;
; *****************************************************************************

section .text

    CALL FUN_0056ac20                   ; 004f76f0
        ;   XREF to: 0056ac20 (UNCONDITIONAL_CALL)  ; undefined FUN_0056ac20()
        ;   Label: FUN_004f76f0
    CALL FUN_004624d0                   ; 004f76f5
        ;   XREF to: 004624d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004624d0()
    CALL FUN_005501a0                   ; 004f76fa
        ;   XREF to: 005501a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005501a0()
    JMP 0x005502d0                      ; 004f76ff
        ;   XREF to: 005502d0 (UNCONDITIONAL_CALL)

