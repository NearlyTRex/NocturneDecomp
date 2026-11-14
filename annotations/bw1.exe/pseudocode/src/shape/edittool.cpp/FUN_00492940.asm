; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00492940(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c3f544
;
; Called Functions:
;   engine_2d.c_plotPixel_FUN_00401130
;   engine_mini3d.cpp_drawPixel_FUN_00517f10
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00492940
        ;   Label: shape_edittool.cpp_FUN_00492940
    MOV EDX,dword ptr [ESP + 0x8]       ; 00492944
    CMP dword ptr [0x01c3f544],0x0      ; 00492948 | DAT_01c3f544
    JZ 0x0049295c                       ; 0049294f
        ;   XREF to: 0049295c (CONDITIONAL_JUMP)  ; LAB_0049295c
    PUSH EDX                            ; 00492951
    PUSH EAX                            ; 00492952
    CALL engine_mini3d.cpp_drawPixel_FUN_00517f10 ; 00492953
        ;   XREF to: 00517f10 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_drawPixel_FUN_00517f10(int x, int y)
    ADD ESP,0x8                         ; 00492958
    RET                                 ; 0049295b
    PUSH EDX                            ; 0049295c
        ;   Label: LAB_0049295c
    PUSH EAX                            ; 0049295d
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 0049295e
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00492963
    RET                                 ; 00492966

