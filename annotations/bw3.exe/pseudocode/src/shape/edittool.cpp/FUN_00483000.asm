; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00483000(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; Called Functions:
;   shape_edittool.cpp_FUN_00482ea0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00483000
        ;   Label: shape_edittool.cpp_FUN_00483000
    MOV EDX,dword ptr [ESP + 0x10]      ; 00483001
    PUSH EDX                            ; 00483005
    PUSH 0x5bd6c1                       ; 00483006
    MOV ECX,dword ptr [ESP + 0x14]      ; 0048300b
    PUSH ECX                            ; 0048300f
    MOV EBX,dword ptr [ESP + 0x14]      ; 00483010
    PUSH EBX                            ; 00483014
    CALL shape_edittool.cpp_FUN_00482ea0 ; 00483015
        ;   XREF to: 00482ea0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00482ea0()
    ADD ESP,0x10                        ; 0048301a
    POP EBX                             ; 0048301d
    RET                                 ; 0048301e

