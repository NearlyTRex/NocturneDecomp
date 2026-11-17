; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_editorDrawHLine_FUN_00492de0(int x1,int y,int x2)
;
; Parameters:
; int              Stack[0x4]:4   x1
; int              Stack[0x8]:4   y
; int              Stack[0xc]:4   x2
;
; Referenced Globals:
;   int g_INT_01c3f544
;
; Called Functions:
;   engine_2d.c_drawHLine_FUN_00402f30
;   engine_mini3d.cpp_drawHLine_FUN_005182e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00492de0
        ;   Label: shape_edittool.cpp_editorDrawHLine_FUN_00492de0
    MOV ECX,dword ptr [ESP + 0x8]       ; 00492de4
    MOV EAX,dword ptr [ESP + 0xc]       ; 00492de8
    CMP dword ptr [0x01c3f544],0x0      ; 00492dec | g_INT_01c3f544
    JZ 0x00492e01                       ; 00492df3
        ;   XREF to: 00492e01 (CONDITIONAL_JUMP)  ; LAB_00492e01
    PUSH EAX                            ; 00492df5
    PUSH ECX                            ; 00492df6
    PUSH EDX                            ; 00492df7
    CALL engine_mini3d.cpp_drawHLine_FUN_005182e0 ; 00492df8
        ;   XREF to: 005182e0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_drawHLine_FUN_005182e0(int x1, int y, int x2)
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

