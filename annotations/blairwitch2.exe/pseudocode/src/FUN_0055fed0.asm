; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0055fed0(void)
;
;
; XREF[1]:
;   FUN_00476280 at 004762da
;
; Referenced Globals:
;   undefined4 DAT_01c37788
;   undefined4 DAT_0264bc20
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c37788],0x0      ; 0055fed0 | DAT_01c37788
        ;   Label: FUN_0055fed0
    JNZ 0x0055fedc                      ; 0055fed7
        ;   XREF to: 0055fedc (CONDITIONAL_JUMP)  ; LAB_0055fedc
    XOR EAX,EAX                         ; 0055fed9
    RET                                 ; 0055fedb
    CALL dword ptr [0x0264bc20]         ; 0055fedc | DAT_0264bc20
        ;   Label: LAB_0055fedc
    RET                                 ; 0055fee2

