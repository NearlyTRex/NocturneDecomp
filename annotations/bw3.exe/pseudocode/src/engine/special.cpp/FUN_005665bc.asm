; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_special_cpp_FUN_005665bc(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02cf609c
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 005665bc
        ;   Label: engine_special.cpp_FUN_005665bc
    CMP dword ptr [0x02cf609c],0x0      ; 005665c0 | DAT_02cf609c
    JNZ 0x005665cc                      ; 005665c7
        ;   XREF to: 005665cc (CONDITIONAL_JUMP)  ; LAB_005665cc
    XOR EAX,EAX                         ; 005665c9
    RET                                 ; 005665cb
    CALL dword ptr [0x02cf609c]         ; 005665cc | DAT_02cf609c
        ;   Label: LAB_005665cc
    RET                                 ; 005665d2

