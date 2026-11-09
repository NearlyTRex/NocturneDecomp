; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0047b4de(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01c5baec
;
; Called Functions:
;   engine_2d.c_plotPixel_FUN_00401130
;   engine_mini3d.cpp_FUN_004f36e0
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 0047b4de
        ;   Label: shape_edittool.cpp_FUN_0047b4de
    MOV EAX,dword ptr [ESP + 0x4]       ; 0047b4e0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0047b4e4
    CMP dword ptr [0x01c5baec],0x0      ; 0047b4e8 | DAT_01c5baec
    JZ 0x0047b4fc                       ; 0047b4ef
        ;   XREF to: 0047b4fc (CONDITIONAL_JUMP)  ; LAB_0047b4fc
    PUSH EDX                            ; 0047b4f1
    PUSH EAX                            ; 0047b4f2
    CALL engine_mini3d.cpp_FUN_004f36e0 ; 0047b4f3
        ;   XREF to: 004f36e0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f36e0()
    ADD ESP,0x8                         ; 0047b4f8
    RET                                 ; 0047b4fb
    PUSH EDX                            ; 0047b4fc
        ;   Label: LAB_0047b4fc
    PUSH EAX                            ; 0047b4fd
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 0047b4fe
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 0047b503
    RET                                 ; 0047b506

