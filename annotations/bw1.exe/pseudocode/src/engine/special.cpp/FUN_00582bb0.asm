; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_special_cpp_FUN_00582bb0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_02c83424
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02c83424],0x0      ; 00582bb0 | DAT_02c83424
        ;   Label: engine_special.cpp_FUN_00582bb0
    JNZ 0x00582bbc                      ; 00582bb7
        ;   XREF to: 00582bbc (CONDITIONAL_JUMP)  ; LAB_00582bbc
    XOR EAX,EAX                         ; 00582bb9
    RET                                 ; 00582bbb
    MOV ECX,dword ptr [ESP + 0x4]       ; 00582bbc
        ;   Label: LAB_00582bbc
    PUSH ECX                            ; 00582bc0
    CALL dword ptr [0x02c83424]         ; 00582bc1 | DAT_02c83424
    ADD ESP,0x4                         ; 00582bc7
    RET                                 ; 00582bca

