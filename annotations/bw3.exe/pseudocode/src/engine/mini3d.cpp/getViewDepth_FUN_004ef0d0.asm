; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl engine_mini3d_cpp_getViewDepth_FUN_004ef0d0(CVector3f *point)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   point
;
; Referenced Globals:
;   undefined4 DAT_01d76cfc
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 004ef0d0
        ;   Label: engine_mini3d.cpp_getViewDepth_FUN_004ef0d0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004ef0d3
    MOV EAX,[0x01d76cfc]                ; 004ef0d7 | DAT_01d76cfc
    FLD float ptr [EDX + 0x4]           ; 004ef0dc
    FSUB float ptr [EAX + 0x28]         ; 004ef0df
    FMUL float ptr [EAX + 0x14]         ; 004ef0e2
    FLD float ptr [EDX]                 ; 004ef0e5
    FSUB float ptr [EAX + 0x24]         ; 004ef0e7
    FMUL float ptr [EAX + 0x8]          ; 004ef0ea
    FADDP                               ; 004ef0ed
    FLD float ptr [EDX + 0x8]           ; 004ef0ef
    FSUB float ptr [EAX + 0x2c]         ; 004ef0f2
    FMUL float ptr [EAX + 0x20]         ; 004ef0f5
    FADDP                               ; 004ef0f8
    FSTP float ptr [ESP]                ; 004ef0fa
    MOV EAX,dword ptr [ESP]             ; 004ef0fd
    ADD ESP,0x4                         ; 004ef100
    RET                                 ; 004ef103

