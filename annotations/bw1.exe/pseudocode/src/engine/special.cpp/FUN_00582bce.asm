; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_special_cpp_FUN_00582bce(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02c83428
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 00582bce
        ;   Label: engine_special.cpp_FUN_00582bce
    CMP dword ptr [0x02c83428],0x0      ; 00582bd0 | DAT_02c83428
    JNZ 0x00582bdc                      ; 00582bd7
        ;   XREF to: 00582bdc (CONDITIONAL_JUMP)  ; LAB_00582bdc
    XOR EAX,EAX                         ; 00582bd9
    RET                                 ; 00582bdb
    CALL dword ptr [0x02c83428]         ; 00582bdc | DAT_02c83428
        ;   Label: LAB_00582bdc
    RET                                 ; 00582be2

