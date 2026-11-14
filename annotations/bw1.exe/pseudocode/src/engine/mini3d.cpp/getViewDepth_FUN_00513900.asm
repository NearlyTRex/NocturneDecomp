; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl engine_mini3d_cpp_getViewDepth_FUN_00513900(CVector3f *point)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   point
;
; Referenced Globals:
;   undefined4 DAT_01d2257c
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00513900
        ;   Label: engine_mini3d.cpp_getViewDepth_FUN_00513900
    MOV EDX,dword ptr [ESP + 0x8]       ; 00513903
    MOV EAX,[0x01d2257c]                ; 00513907 | DAT_01d2257c
    FLD float ptr [EDX + 0x4]           ; 0051390c
    FSUB float ptr [EAX + 0x28]         ; 0051390f
    FMUL float ptr [EAX + 0x14]         ; 00513912
    FLD float ptr [EDX]                 ; 00513915
    FSUB float ptr [EAX + 0x24]         ; 00513917
    FMUL float ptr [EAX + 0x8]          ; 0051391a
    FADDP                               ; 0051391d
    FLD float ptr [EDX + 0x8]           ; 0051391f
    FSUB float ptr [EAX + 0x2c]         ; 00513922
    FMUL float ptr [EAX + 0x20]         ; 00513925
    FADDP                               ; 00513928
    FSTP float ptr [ESP]                ; 0051392a
    MOV EAX,dword ptr [ESP]             ; 0051392d
    ADD ESP,0x4                         ; 00513930
    RET                                 ; 00513933

