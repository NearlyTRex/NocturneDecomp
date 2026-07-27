; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 shape_edittool_cpp_FUN_00476e70(undefined4 param_1)
;
;
; Called Functions:
;   shape_edittool.cpp_FUN_00476e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00476e70
        ;   Label: shape_edittool.cpp_FUN_00476e70
    MOV EBX,dword ptr [ESP + 0x8]       ; 00476e71
    PUSH EBX                            ; 00476e75
    CALL shape_edittool.cpp_FUN_00476e90 ; 00476e76
        ;   XREF to: 00476e90 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00476e90()
    ADD ESP,0x4                         ; 00476e7b
    MOV EAX,EBX                         ; 00476e7e
    POP EBX                             ; 00476e80
    RET                                 ; 00476e81

