; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f8fe0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[5]:
;   shape_edittool.cpp_FUN_0047a44e at 0047a463
;   shape_edittool.cpp_FUN_0047a480 at 0047a4d2
;   shape_edittool.cpp_FUN_0047a590 at 0047a5f7
;   shape_edittool.cpp_FUN_0047f210 at 0047f37f
;   shape_edittool.cpp_FUN_004808b0 at 004809a7
;
; Called Functions:
;   engine_mini3d.cpp_FUN_004f90d0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f8fe0
        ;   Label: engine_mini3d.cpp_FUN_004f8fe0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004f8fe4
    PUSH EDX                            ; 004f8fe8
    PUSH EAX                            ; 004f8fe9
    PUSH EDX                            ; 004f8fea
    PUSH EAX                            ; 004f8feb
    CALL engine_mini3d.cpp_FUN_004f90d0 ; 004f8fec
        ;   XREF to: 004f90d0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f90d0()
    ADD ESP,0x10                        ; 004f8ff1
    RET                                 ; 004f8ff4

