; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_special_cpp_FUN_0056029c(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0264bc70
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 0056029c
        ;   Label: engine_special.cpp_FUN_0056029c
    CMP dword ptr [0x0264bc70],0x0      ; 005602a0 | DAT_0264bc70
    JNZ 0x005602ac                      ; 005602a7
        ;   XREF to: 005602ac (CONDITIONAL_JUMP)  ; LAB_005602ac
    XOR EAX,EAX                         ; 005602a9
    RET                                 ; 005602ab
    CALL dword ptr [0x0264bc70]         ; 005602ac | DAT_0264bc70
        ;   Label: LAB_005602ac
    RET                                 ; 005602b2

