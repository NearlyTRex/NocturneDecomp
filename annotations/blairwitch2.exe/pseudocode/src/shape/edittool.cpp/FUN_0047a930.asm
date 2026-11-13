; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0047a930(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c25f84
;
; Called Functions:
;   engine_2d.c_drawHLine_FUN_00402f30
;   engine_mini3d.cpp_drawHLine_FUN_004f9390
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0047a930
        ;   Label: shape_edittool.cpp_FUN_0047a930
    MOV ECX,dword ptr [ESP + 0x8]       ; 0047a934
    MOV EAX,dword ptr [ESP + 0xc]       ; 0047a938
    CMP dword ptr [0x01c25f84],0x0      ; 0047a93c | DAT_01c25f84
    JZ 0x0047a951                       ; 0047a943
        ;   XREF to: 0047a951 (CONDITIONAL_JUMP)  ; LAB_0047a951
    PUSH EAX                            ; 0047a945
    PUSH ECX                            ; 0047a946
    PUSH EDX                            ; 0047a947
    CALL engine_mini3d.cpp_drawHLine_FUN_004f9390 ; 0047a948
        ;   XREF to: 004f9390 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_drawHLine_FUN_004f9390(int x1, int y, int x2)
    ADD ESP,0xc                         ; 0047a94d
    RET                                 ; 0047a950
    PUSH EAX                            ; 0047a951
        ;   Label: LAB_0047a951
    PUSH ECX                            ; 0047a952
    PUSH EDX                            ; 0047a953
    CALL engine_2d.c_drawHLine_FUN_00402f30 ; 0047a954
        ;   XREF to: 00402f30 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402f30(int x1, int y, int x2)
    ADD ESP,0xc                         ; 0047a959
    RET                                 ; 0047a95c

