; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00582b70(void)
;
;
; XREF[1]:
;   FUN_00451e20 at 00451e61
;
; Referenced Globals:
;   undefined4 DAT_02c8341c
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02c8341c],0x0      ; 00582b70 | DAT_02c8341c
        ;   Label: FUN_00582b70
    JNZ 0x00582b7c                      ; 00582b77
        ;   XREF to: 00582b7c (CONDITIONAL_JUMP)  ; LAB_00582b7c
    XOR EAX,EAX                         ; 00582b79
    RET                                 ; 00582b7b
    CALL dword ptr [0x02c8341c]         ; 00582b7c | DAT_02c8341c
        ;   Label: LAB_00582b7c
    RET                                 ; 00582b82

