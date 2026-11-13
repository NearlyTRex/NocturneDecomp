; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0047b980(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c5baec
;
; Called Functions:
;   engine_2d.c_drawHLine_FUN_00402f30
;   engine_mini3d.cpp_drawHLine_FUN_004f3ab0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0047b980
        ;   Label: shape_edittool.cpp_FUN_0047b980
    MOV ECX,dword ptr [ESP + 0x8]       ; 0047b984
    MOV EAX,dword ptr [ESP + 0xc]       ; 0047b988
    CMP dword ptr [0x01c5baec],0x0      ; 0047b98c | DAT_01c5baec
    JZ 0x0047b9a1                       ; 0047b993
        ;   XREF to: 0047b9a1 (CONDITIONAL_JUMP)  ; LAB_0047b9a1
    PUSH EAX                            ; 0047b995
    PUSH ECX                            ; 0047b996
    PUSH EDX                            ; 0047b997
    CALL engine_mini3d.cpp_drawHLine_FUN_004f3ab0 ; 0047b998
        ;   XREF to: 004f3ab0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_drawHLine_FUN_004f3ab0(int x1, int y, int x2)
    ADD ESP,0xc                         ; 0047b99d
    RET                                 ; 0047b9a0
    PUSH EAX                            ; 0047b9a1
        ;   Label: LAB_0047b9a1
    PUSH ECX                            ; 0047b9a2
    PUSH EDX                            ; 0047b9a3
    CALL engine_2d.c_drawHLine_FUN_00402f30 ; 0047b9a4
        ;   XREF to: 00402f30 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402f30(int x1, int y, int x2)
    ADD ESP,0xc                         ; 0047b9a9
    RET                                 ; 0047b9ac

