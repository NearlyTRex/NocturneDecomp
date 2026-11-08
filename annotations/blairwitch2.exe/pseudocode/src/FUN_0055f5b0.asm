; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0055f5b0(void)
;
;
; XREF[1]:
;   FUN_0043bf50 at 0043bf77
;
; Referenced Globals:
;   undefined4 DAT_01c37788
;   undefined4 DAT_0264bbd4
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c37788],0x0      ; 0055f5b0 | DAT_01c37788
        ;   Label: FUN_0055f5b0
    JNZ 0x0055f5bc                      ; 0055f5b7
        ;   XREF to: 0055f5bc (CONDITIONAL_JUMP)  ; LAB_0055f5bc
    XOR EAX,EAX                         ; 0055f5b9
    RET                                 ; 0055f5bb
    CALL dword ptr [0x0264bbd4]         ; 0055f5bc | DAT_0264bbd4
        ;   Label: LAB_0055f5bc
    RET                                 ; 0055f5c2

