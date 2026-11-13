; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl engine_mini3d_cpp_getProjectedSize_FUN_005137c0(float size,CVector3f *point)
;
; Parameters:
; float            Stack[0x4]:4   size
; CVector3f *      Stack[0x8]:4   point
;
; Referenced Globals:
;   undefined4 DAT_005e8e7f
;   undefined4 DAT_01d224d0
;   undefined4 DAT_01d224d8
;   undefined4 DAT_01d22528
;   undefined4 DAT_01d2257c
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 005137c0
        ;   Label: engine_mini3d.cpp_getProjectedSize_FUN_005137c0
    MOV EDX,dword ptr [ESP + 0x10]      ; 005137c3
    TEST EDX,EDX                        ; 005137c7
    JZ 0x00513812                       ; 005137c9
        ;   XREF to: 00513812 (CONDITIONAL_JUMP)  ; LAB_00513812
    MOV EAX,[0x01d2257c]                ; 005137cb | DAT_01d2257c
    FLD float ptr [EDX + 0x4]           ; 005137d0
    FSUB float ptr [EAX + 0x28]         ; 005137d3
    FMUL float ptr [EAX + 0x14]         ; 005137d6
    FLD float ptr [EDX]                 ; 005137d9
    FSUB float ptr [EAX + 0x24]         ; 005137db
    FMUL float ptr [EAX + 0x8]          ; 005137de
    FADDP                               ; 005137e1
    FLD float ptr [EDX + 0x8]           ; 005137e3
    FSUB float ptr [EAX + 0x2c]         ; 005137e6
    FMUL float ptr [EAX + 0x20]         ; 005137e9
    FADDP                               ; 005137ec
    FSTP float ptr [ESP + 0x4]          ; 005137ee
        ;   Label: LAB_005137ee
    CMP dword ptr [ESP + 0x4],0x3f800000 ; 005137f2
    JGE 0x00513831                      ; 005137fa
        ;   XREF to: 00513831 (CONDITIONAL_JUMP)  ; LAB_00513831
    FLD float ptr [0x01d224d8]          ; 005137fc | DAT_01d224d8
    FSUB float ptr [0x01d224d0]         ; 00513802 | DAT_01d224d0
    FSTP float ptr [ESP]                ; 00513808
    MOV EAX,dword ptr [ESP]             ; 0051380b
    ADD ESP,0x8                         ; 0051380e
    RET                                 ; 00513811
    MOV EAX,[0x01d2257c]                ; 00513812 | DAT_01d2257c
        ;   Label: LAB_00513812
    FLD float ptr [EAX + 0x24]          ; 00513817
    FCHS                                ; 0051381a
    FMUL float ptr [EAX + 0x8]          ; 0051381c
    FLD float ptr [EAX + 0x28]          ; 0051381f
    FMUL float ptr [EAX + 0x14]         ; 00513822
    FSUBP                               ; 00513825
    FLD float ptr [EAX + 0x2c]          ; 00513827
    FMUL float ptr [EAX + 0x20]         ; 0051382a
    FSUBP                               ; 0051382d
    JMP 0x005137ee                      ; 0051382f
        ;   XREF to: 005137ee (UNCONDITIONAL_JUMP)  ; LAB_005137ee
    FLD float ptr [ESP + 0xc]           ; 00513831
        ;   Label: LAB_00513831
    FDIV float ptr [ESP + 0x4]          ; 00513835
    FMUL float ptr [0x005e8e7f]         ; 00513839 | DAT_005e8e7f
    FMUL float ptr [0x01d22528]         ; 0051383f | DAT_01d22528
    FSTP float ptr [ESP]                ; 00513845
    MOV EAX,dword ptr [ESP]             ; 00513848
    ADD ESP,0x8                         ; 0051384b
    RET                                 ; 0051384e

