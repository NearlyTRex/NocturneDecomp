; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00492e10(int param_1,int param_2,int param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_01c3f544
;
; Called Functions:
;   engine_2d.c_drawVLine_FUN_00403040
;   engine_mini3d.cpp_FUN_00518300
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00492e10
        ;   Label: shape_edittool.cpp_FUN_00492e10
    MOV ECX,dword ptr [ESP + 0x8]       ; 00492e14
    MOV EAX,dword ptr [ESP + 0xc]       ; 00492e18
    CMP dword ptr [0x01c3f544],0x0      ; 00492e1c | DAT_01c3f544
    JZ 0x00492e31                       ; 00492e23
        ;   XREF to: 00492e31 (CONDITIONAL_JUMP)  ; LAB_00492e31
    PUSH EAX                            ; 00492e25
    PUSH ECX                            ; 00492e26
    PUSH EDX                            ; 00492e27
    CALL engine_mini3d.cpp_FUN_00518300 ; 00492e28
        ;   XREF to: 00518300 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00518300()
    ADD ESP,0xc                         ; 00492e2d
    RET                                 ; 00492e30
    PUSH EAX                            ; 00492e31
        ;   Label: LAB_00492e31
    PUSH ECX                            ; 00492e32
    PUSH EDX                            ; 00492e33
    CALL engine_2d.c_drawVLine_FUN_00403040 ; 00492e34
        ;   XREF to: 00403040 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawVLine_FUN_00403040(int x, int y1, int y2)
    ADD ESP,0xc                         ; 00492e39
    RET                                 ; 00492e3c

