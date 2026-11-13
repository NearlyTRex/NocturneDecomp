; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_special_cpp_FUN_00565a70(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_02cf601c
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c6cee8],0x0      ; 00565a70 | DAT_01c6cee8
        ;   Label: engine_special.cpp_FUN_00565a70
    JNZ 0x00565a7c                      ; 00565a77
        ;   XREF to: 00565a7c (CONDITIONAL_JUMP)  ; LAB_00565a7c
    XOR EAX,EAX                         ; 00565a79
    RET                                 ; 00565a7b
    MOV ECX,dword ptr [ESP + 0x4]       ; 00565a7c
        ;   Label: LAB_00565a7c
    PUSH ECX                            ; 00565a80
    CALL dword ptr [0x02cf601c]         ; 00565a81 | DAT_02cf601c
    ADD ESP,0x4                         ; 00565a87
    RET                                 ; 00565a8a

