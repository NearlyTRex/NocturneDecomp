; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_special_cpp_FUN_00566480(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_02cf6080
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02cf6080],0x0      ; 00566480 | DAT_02cf6080
        ;   Label: engine_special.cpp_FUN_00566480
    JNZ 0x0056648c                      ; 00566487
        ;   XREF to: 0056648c (CONDITIONAL_JUMP)  ; LAB_0056648c
    XOR EAX,EAX                         ; 00566489
    RET                                 ; 0056648b
    MOV ECX,dword ptr [ESP + 0x4]       ; 0056648c
        ;   Label: LAB_0056648c
    PUSH ECX                            ; 00566490
    CALL dword ptr [0x02cf6080]         ; 00566491 | DAT_02cf6080
    ADD ESP,0x4                         ; 00566497
    RET                                 ; 0056649a

