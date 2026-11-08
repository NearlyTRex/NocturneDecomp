; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004f7d19(void)
;
;
; XREF[2]:
;   FUN_004f7c30 at 004f7c36
;   FUN_004f7d2f at 004f7d45
;
; Referenced Globals:
;   undefined4 DAT_0060069d
;   undefined1 DAT_006006a1
;   undefined4 DAT_00800000
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 004f7d19
        ;   Label: FUN_004f7d19
    MOV EAX,[0x0060069d]                ; 004f7d1a | DAT_0060069d
    TEST EAX,0x800000                   ; 004f7d1f | DAT_00800000
    JZ 0x004f7d2d                       ; 004f7d24
        ;   XREF to: 004f7d2d (CONDITIONAL_JUMP)  ; LAB_004f7d2d
    MOV byte ptr [0x006006a1],0x1       ; 004f7d26 | DAT_006006a1
    POP EAX                             ; 004f7d2d
        ;   Label: LAB_004f7d2d
    RET                                 ; 004f7d2e

