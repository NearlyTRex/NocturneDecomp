; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0047a44e(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01c25f84
;
; Called Functions:
;   engine_2d.c_plotPixel_FUN_00401130
;   engine_mini3d.cpp_FUN_004f8fe0
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 0047a44e
        ;   Label: shape_edittool.cpp_FUN_0047a44e
    MOV EAX,dword ptr [ESP + 0x4]       ; 0047a450
    MOV EDX,dword ptr [ESP + 0x8]       ; 0047a454
    CMP dword ptr [0x01c25f84],0x0      ; 0047a458 | DAT_01c25f84
    JZ 0x0047a46c                       ; 0047a45f
        ;   XREF to: 0047a46c (CONDITIONAL_JUMP)  ; LAB_0047a46c
    PUSH EDX                            ; 0047a461
    PUSH EAX                            ; 0047a462
    CALL engine_mini3d.cpp_FUN_004f8fe0 ; 0047a463
        ;   XREF to: 004f8fe0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8fe0()
    ADD ESP,0x8                         ; 0047a468
    RET                                 ; 0047a46b
    PUSH EDX                            ; 0047a46c
        ;   Label: LAB_0047a46c
    PUSH EAX                            ; 0047a46d
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 0047a46e
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 0047a473
    RET                                 ; 0047a476

