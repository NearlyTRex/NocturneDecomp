; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0049a460(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; Called Functions:
;   shape_edittool.cpp_FUN_0049a300
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049a460
        ;   Label: shape_edittool.cpp_FUN_0049a460
    MOV EDX,dword ptr [ESP + 0x10]      ; 0049a461
    PUSH EDX                            ; 0049a465
    PUSH 0x5dc604                       ; 0049a466
    MOV ECX,dword ptr [ESP + 0x14]      ; 0049a46b
    PUSH ECX                            ; 0049a46f
    MOV EBX,dword ptr [ESP + 0x14]      ; 0049a470
    PUSH EBX                            ; 0049a474
    CALL shape_edittool.cpp_FUN_0049a300 ; 0049a475
        ;   XREF to: 0049a300 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0049a300()
    ADD ESP,0x10                        ; 0049a47a
    POP EBX                             ; 0049a47d
    RET                                 ; 0049a47e

