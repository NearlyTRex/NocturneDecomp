; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0047a960(int param_1,int param_2,int param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_01c25f84
;
; Called Functions:
;   engine_2d.c_drawVLine_FUN_00403040
;   engine_mini3d.cpp_FUN_004f93b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0047a960
        ;   Label: shape_edittool.cpp_FUN_0047a960
    MOV ECX,dword ptr [ESP + 0x8]       ; 0047a964
    MOV EAX,dword ptr [ESP + 0xc]       ; 0047a968
    CMP dword ptr [0x01c25f84],0x0      ; 0047a96c | DAT_01c25f84
    JZ 0x0047a981                       ; 0047a973
        ;   XREF to: 0047a981 (CONDITIONAL_JUMP)  ; LAB_0047a981
    PUSH EAX                            ; 0047a975
    PUSH ECX                            ; 0047a976
    PUSH EDX                            ; 0047a977
    CALL engine_mini3d.cpp_FUN_004f93b0 ; 0047a978
        ;   XREF to: 004f93b0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f93b0()
    ADD ESP,0xc                         ; 0047a97d
    RET                                 ; 0047a980
    PUSH EAX                            ; 0047a981
        ;   Label: LAB_0047a981
    PUSH ECX                            ; 0047a982
    PUSH EDX                            ; 0047a983
    CALL engine_2d.c_drawVLine_FUN_00403040 ; 0047a984
        ;   XREF to: 00403040 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawVLine_FUN_00403040(int x, int y1, int y2)
    ADD ESP,0xc                         ; 0047a989
    RET                                 ; 0047a98c

