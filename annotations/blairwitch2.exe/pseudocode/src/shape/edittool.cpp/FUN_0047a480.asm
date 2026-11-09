; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0047a480(int param_1,int param_2,int param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_01c25f84
;   undefined4 DAT_01c35e48
;   undefined4 DAT_01c35e4c
;   undefined4 DAT_01c35e50
;   undefined4 DAT_01c35e54
;
; Called Functions:
;   engine_2d.c_plotPixel_FUN_00401130
;   engine_mini3d.cpp_FUN_004f8fe0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0047a480
        ;   Label: shape_edittool.cpp_FUN_0047a480
    MOV EDX,dword ptr [ESP + 0x8]       ; 0047a484
    TEST EAX,EAX                        ; 0047a488
    JL 0x0047a4da                       ; 0047a48a
        ;   XREF to: 0047a4da (CONDITIONAL_JUMP)  ; LAB_0047a4da
    TEST EDX,EDX                        ; 0047a48c
    JL 0x0047a4da                       ; 0047a48e
        ;   XREF to: 0047a4da (CONDITIONAL_JUMP)  ; LAB_0047a4da
    CMP EAX,dword ptr [0x006141b8]      ; 0047a490 | DAT_006141b8
    JGE 0x0047a4da                      ; 0047a496
        ;   XREF to: 0047a4da (CONDITIONAL_JUMP)  ; LAB_0047a4da
    CMP EDX,dword ptr [0x006141bc]      ; 0047a498 | DAT_006141bc
    JGE 0x0047a4da                      ; 0047a49e
        ;   XREF to: 0047a4da (CONDITIONAL_JUMP)  ; LAB_0047a4da
    CMP dword ptr [ESP + 0xc],0x0       ; 0047a4a0
    JZ 0x0047a4c7                       ; 0047a4a5
        ;   XREF to: 0047a4c7 (CONDITIONAL_JUMP)  ; LAB_0047a4c7
    CMP EAX,dword ptr [0x01c35e48]      ; 0047a4a7 | DAT_01c35e48
    JL 0x0047a4da                       ; 0047a4ad
        ;   XREF to: 0047a4da (CONDITIONAL_JUMP)  ; LAB_0047a4da
    CMP EAX,dword ptr [0x01c35e50]      ; 0047a4af | DAT_01c35e50
    JGE 0x0047a4da                      ; 0047a4b5
        ;   XREF to: 0047a4da (CONDITIONAL_JUMP)  ; LAB_0047a4da
    CMP EDX,dword ptr [0x01c35e4c]      ; 0047a4b7 | DAT_01c35e4c
    JL 0x0047a4da                       ; 0047a4bd
        ;   XREF to: 0047a4da (CONDITIONAL_JUMP)  ; LAB_0047a4da
    CMP EDX,dword ptr [0x01c35e54]      ; 0047a4bf | DAT_01c35e54
    JGE 0x0047a4da                      ; 0047a4c5
        ;   XREF to: 0047a4da (CONDITIONAL_JUMP)  ; LAB_0047a4da
    CMP dword ptr [0x01c25f84],0x0      ; 0047a4c7 | DAT_01c25f84
        ;   Label: LAB_0047a4c7
    JZ 0x0047a4db                       ; 0047a4ce
        ;   XREF to: 0047a4db (CONDITIONAL_JUMP)  ; LAB_0047a4db
    PUSH EDX                            ; 0047a4d0
    PUSH EAX                            ; 0047a4d1
    CALL engine_mini3d.cpp_FUN_004f8fe0 ; 0047a4d2
        ;   XREF to: 004f8fe0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8fe0()
    ADD ESP,0x8                         ; 0047a4d7
    RET                                 ; 0047a4da
        ;   Label: LAB_0047a4da
    PUSH EDX                            ; 0047a4db
        ;   Label: LAB_0047a4db
    PUSH EAX                            ; 0047a4dc
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 0047a4dd
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 0047a4e2
    RET                                 ; 0047a4e5

