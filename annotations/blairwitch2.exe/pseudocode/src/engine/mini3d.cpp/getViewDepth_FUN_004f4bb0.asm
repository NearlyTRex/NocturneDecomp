; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl engine_mini3d_cpp_getViewDepth_FUN_004f4bb0(CVector3f *point)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   point
;
; Referenced Globals:
;   undefined4 DAT_01d09918
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 004f4bb0
        ;   Label: engine_mini3d.cpp_getViewDepth_FUN_004f4bb0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004f4bb3
    MOV EAX,[0x01d09918]                ; 004f4bb7 | DAT_01d09918
    FLD float ptr [EDX + 0x4]           ; 004f4bbc
    FSUB float ptr [EAX + 0x28]         ; 004f4bbf
    FMUL float ptr [EAX + 0x14]         ; 004f4bc2
    FLD float ptr [EDX]                 ; 004f4bc5
    FSUB float ptr [EAX + 0x24]         ; 004f4bc7
    FMUL float ptr [EAX + 0x8]          ; 004f4bca
    FADDP                               ; 004f4bcd
    FLD float ptr [EDX + 0x8]           ; 004f4bcf
    FSUB float ptr [EAX + 0x2c]         ; 004f4bd2
    FMUL float ptr [EAX + 0x20]         ; 004f4bd5
    FADDP                               ; 004f4bd8
    FSTP float ptr [ESP]                ; 004f4bda
    MOV EAX,dword ptr [ESP]             ; 004f4bdd
    ADD ESP,0x4                         ; 004f4be0
    RET                                 ; 004f4be3

