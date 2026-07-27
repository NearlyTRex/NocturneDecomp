; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_special_cpp_FUN_00532980(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c02594
;   undefined4 DAT_02dc9dc4
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c02594],0x0      ; 00532980 | DAT_01c02594
        ;   Label: engine_special.cpp_FUN_00532980
    JNZ 0x0053298c                      ; 00532987
        ;   XREF to: 0053298c (CONDITIONAL_JUMP)  ; LAB_0053298c
    XOR EAX,EAX                         ; 00532989
    RET                                 ; 0053298b
    CALL dword ptr [0x02dc9dc4]         ; 0053298c | DAT_02dc9dc4
        ;   Label: LAB_0053298c
    RET                                 ; 00532992

