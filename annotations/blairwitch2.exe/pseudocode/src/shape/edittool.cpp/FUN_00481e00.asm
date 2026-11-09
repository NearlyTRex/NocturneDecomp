; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00481e00(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; Called Functions:
;   shape_edittool.cpp_FUN_00481ca0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481e00
        ;   Label: shape_edittool.cpp_FUN_00481e00
    MOV EDX,dword ptr [ESP + 0x10]      ; 00481e01
    PUSH EDX                            ; 00481e05
    PUSH 0x5d286b                       ; 00481e06
    MOV ECX,dword ptr [ESP + 0x14]      ; 00481e0b
    PUSH ECX                            ; 00481e0f
    MOV EBX,dword ptr [ESP + 0x14]      ; 00481e10
    PUSH EBX                            ; 00481e14
    CALL shape_edittool.cpp_FUN_00481ca0 ; 00481e15
        ;   XREF to: 00481ca0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00481ca0()
    ADD ESP,0x10                        ; 00481e1a
    POP EBX                             ; 00481e1d
    RET                                 ; 00481e1e

