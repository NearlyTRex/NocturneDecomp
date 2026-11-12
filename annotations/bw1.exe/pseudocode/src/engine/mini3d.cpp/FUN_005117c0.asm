; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float engine_mini3d_cpp_FUN_005117c0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005e8b6b
;   undefined4 DAT_01d22528
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 005117c0
        ;   Label: engine_mini3d.cpp_FUN_005117c0
    FLD float ptr [0x01d22528]          ; 005117c3 | DAT_01d22528
    FMUL float ptr [0x005e8b6b]         ; 005117c9 | DAT_005e8b6b
    FSTP float ptr [ESP]                ; 005117cf
    MOV EAX,dword ptr [ESP]             ; 005117d2
    ADD ESP,0x4                         ; 005117d5
    RET                                 ; 005117d8

