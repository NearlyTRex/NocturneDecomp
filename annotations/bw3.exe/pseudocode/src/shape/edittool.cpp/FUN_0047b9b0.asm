; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0047b9b0(int param_1,int param_2,int param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_01c5baec
;
; Called Functions:
;   engine_2d.c_drawVLine_FUN_00403040
;   engine_mini3d.cpp_drawVLine_FUN_004f3ad0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0047b9b0
        ;   Label: shape_edittool.cpp_FUN_0047b9b0
    MOV ECX,dword ptr [ESP + 0x8]       ; 0047b9b4
    MOV EAX,dword ptr [ESP + 0xc]       ; 0047b9b8
    CMP dword ptr [0x01c5baec],0x0      ; 0047b9bc | DAT_01c5baec
    JZ 0x0047b9d1                       ; 0047b9c3
        ;   XREF to: 0047b9d1 (CONDITIONAL_JUMP)  ; LAB_0047b9d1
    PUSH EAX                            ; 0047b9c5
    PUSH ECX                            ; 0047b9c6
    PUSH EDX                            ; 0047b9c7
    CALL engine_mini3d.cpp_drawVLine_FUN_004f3ad0 ; 0047b9c8
        ;   XREF to: 004f3ad0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_drawVLine_FUN_004f3ad0(int x, int y1, int y2)
    ADD ESP,0xc                         ; 0047b9cd
    RET                                 ; 0047b9d0
    PUSH EAX                            ; 0047b9d1
        ;   Label: LAB_0047b9d1
    PUSH ECX                            ; 0047b9d2
    PUSH EDX                            ; 0047b9d3
    CALL engine_2d.c_drawVLine_FUN_00403040 ; 0047b9d4
        ;   XREF to: 00403040 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawVLine_FUN_00403040(int x, int y1, int y2)
    ADD ESP,0xc                         ; 0047b9d9
    RET                                 ; 0047b9dc

