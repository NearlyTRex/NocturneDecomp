; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0047b510(int param_1,int param_2,int param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_01c5baec
;   undefined4 DAT_01c6b5a8
;   undefined4 DAT_01c6b5ac
;   undefined4 DAT_01c6b5b0
;   undefined4 DAT_01c6b5b4
;
; Called Functions:
;   engine_2d.c_plotPixel_FUN_00401130
;   engine_mini3d.cpp_drawPixel_FUN_004f36e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0047b510
        ;   Label: shape_edittool.cpp_FUN_0047b510
    MOV EDX,dword ptr [ESP + 0x8]       ; 0047b514
    TEST EAX,EAX                        ; 0047b518
    JL 0x0047b56a                       ; 0047b51a
        ;   XREF to: 0047b56a (CONDITIONAL_JUMP)  ; LAB_0047b56a
    TEST EDX,EDX                        ; 0047b51c
    JL 0x0047b56a                       ; 0047b51e
        ;   XREF to: 0047b56a (CONDITIONAL_JUMP)  ; LAB_0047b56a
    CMP EAX,dword ptr [0x005fba18]      ; 0047b520 | DAT_005fba18
    JGE 0x0047b56a                      ; 0047b526
        ;   XREF to: 0047b56a (CONDITIONAL_JUMP)  ; LAB_0047b56a
    CMP EDX,dword ptr [0x005fba1c]      ; 0047b528 | DAT_005fba1c
    JGE 0x0047b56a                      ; 0047b52e
        ;   XREF to: 0047b56a (CONDITIONAL_JUMP)  ; LAB_0047b56a
    CMP dword ptr [ESP + 0xc],0x0       ; 0047b530
    JZ 0x0047b557                       ; 0047b535
        ;   XREF to: 0047b557 (CONDITIONAL_JUMP)  ; LAB_0047b557
    CMP EAX,dword ptr [0x01c6b5a8]      ; 0047b537 | DAT_01c6b5a8
    JL 0x0047b56a                       ; 0047b53d
        ;   XREF to: 0047b56a (CONDITIONAL_JUMP)  ; LAB_0047b56a
    CMP EAX,dword ptr [0x01c6b5b0]      ; 0047b53f | DAT_01c6b5b0
    JGE 0x0047b56a                      ; 0047b545
        ;   XREF to: 0047b56a (CONDITIONAL_JUMP)  ; LAB_0047b56a
    CMP EDX,dword ptr [0x01c6b5ac]      ; 0047b547 | DAT_01c6b5ac
    JL 0x0047b56a                       ; 0047b54d
        ;   XREF to: 0047b56a (CONDITIONAL_JUMP)  ; LAB_0047b56a
    CMP EDX,dword ptr [0x01c6b5b4]      ; 0047b54f | DAT_01c6b5b4
    JGE 0x0047b56a                      ; 0047b555
        ;   XREF to: 0047b56a (CONDITIONAL_JUMP)  ; LAB_0047b56a
    CMP dword ptr [0x01c5baec],0x0      ; 0047b557 | DAT_01c5baec
        ;   Label: LAB_0047b557
    JZ 0x0047b56b                       ; 0047b55e
        ;   XREF to: 0047b56b (CONDITIONAL_JUMP)  ; LAB_0047b56b
    PUSH EDX                            ; 0047b560
    PUSH EAX                            ; 0047b561
    CALL engine_mini3d.cpp_drawPixel_FUN_004f36e0 ; 0047b562
        ;   XREF to: 004f36e0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_drawPixel_FUN_004f36e0(int x, int y)
    ADD ESP,0x8                         ; 0047b567
    RET                                 ; 0047b56a
        ;   Label: LAB_0047b56a
    PUSH EDX                            ; 0047b56b
        ;   Label: LAB_0047b56b
    PUSH EAX                            ; 0047b56c
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 0047b56d
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 0047b572
    RET                                 ; 0047b575

