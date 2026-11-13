; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_special_cpp_FUN_005602a0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0264bc70
;
; *****************************************************************************

section .text

    CMP dword ptr [0x0264bc70],0x0      ; 005602a0 | DAT_0264bc70
        ;   Label: engine_special.cpp_FUN_005602a0
    JNZ 0x005602ac                      ; 005602a7
        ;   XREF to: 005602ac (CONDITIONAL_JUMP)  ; LAB_005602ac
    XOR EAX,EAX                         ; 005602a9
    RET                                 ; 005602ab
    CALL dword ptr [0x0264bc70]         ; 005602ac | DAT_0264bc70
        ;   Label: LAB_005602ac
    RET                                 ; 005602b2

