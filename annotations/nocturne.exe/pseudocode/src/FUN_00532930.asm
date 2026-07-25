; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00532930(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c02594
;   undefined4 DAT_02dc9dbc
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c02594],0x0      ; 00532930 | DAT_01c02594
        ;   Label: FUN_00532930
    JNZ 0x0053293c                      ; 00532937
        ;   XREF to: 0053293c (CONDITIONAL_JUMP)  ; LAB_0053293c
    XOR EAX,EAX                         ; 00532939
    RET                                 ; 0053293b
    CALL dword ptr [0x02dc9dbc]         ; 0053293c | DAT_02dc9dbc
        ;   Label: LAB_0053293c
    RET                                 ; 00532942

