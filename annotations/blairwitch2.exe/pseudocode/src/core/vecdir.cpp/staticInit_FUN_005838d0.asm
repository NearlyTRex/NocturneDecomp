; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_vecdir_cpp_staticInit_FUN_005838d0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0265370c
;   undefined4 DAT_02653710
;   undefined4 DAT_02653714
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 005838d0
        ;   Label: core_vecdir.cpp_staticInit_FUN_005838d0
    MOV dword ptr [0x02653710],EDX      ; 005838d2 | DAT_02653710
    MOV dword ptr [0x02653714],EDX      ; 005838d8 | DAT_02653714
    MOV dword ptr [0x0265370c],EDX      ; 005838de | DAT_0265370c
    RET                                 ; 005838e4

