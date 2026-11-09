; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00492dde(int param_1,int param_2,int param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_01c3f544
;
; Called Functions:
;   engine_2d.c_drawHLine_FUN_00402f30
;   engine_mini3d.cpp_FUN_005182e0
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 00492dde
        ;   Label: shape_edittool.cpp_FUN_00492dde
    MOV EDX,dword ptr [ESP + 0x4]       ; 00492de0
    MOV ECX,dword ptr [ESP + 0x8]       ; 00492de4
    MOV EAX,dword ptr [ESP + 0xc]       ; 00492de8
    CMP dword ptr [0x01c3f544],0x0      ; 00492dec | DAT_01c3f544
    JZ 0x00492e01                       ; 00492df3
        ;   XREF to: 00492e01 (CONDITIONAL_JUMP)  ; LAB_00492e01
    PUSH EAX                            ; 00492df5
    PUSH ECX                            ; 00492df6
    PUSH EDX                            ; 00492df7
    CALL engine_mini3d.cpp_FUN_005182e0 ; 00492df8
        ;   XREF to: 005182e0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_005182e0()
    ADD ESP,0xc                         ; 00492dfd
    RET                                 ; 00492e00
    PUSH EAX                            ; 00492e01
        ;   Label: LAB_00492e01
    PUSH ECX                            ; 00492e02
    PUSH EDX                            ; 00492e03
    CALL engine_2d.c_drawHLine_FUN_00402f30 ; 00492e04
        ;   XREF to: 00402f30 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402f30(int x1, int y, int x2)
    ADD ESP,0xc                         ; 00492e09
    RET                                 ; 00492e0c

