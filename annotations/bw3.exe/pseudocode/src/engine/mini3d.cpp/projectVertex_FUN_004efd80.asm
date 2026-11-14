; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_projectVertex_FUN_004efd80(float *vertex)
;
; Parameters:
; float *          Stack[0x4]:4   vertex
;
; XREF[1]:
;   engine_mini3d.cpp_userClipPolyList_FUN_004f2e30 at 004f31e2
;
; Referenced Globals:
;   undefined4 DAT_01d76c5c
;   undefined4 DAT_01d76c60
;   undefined4 DAT_01d76c64
;   undefined4 DAT_01d76c68
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004efd80
        ;   Label: engine_mini3d.cpp_projectVertex_FUN_004efd80
    MOV dword ptr [EDX + 0x10],0x0      ; 004efd84
    FLD float ptr [EDX]                 ; 004efd8b
    FCOMP float ptr [EDX + 0x8]         ; 004efd8d
    FNSTSW AX                           ; 004efd90
    SAHF                                ; 004efd92
    JA 0x004efdd6                       ; 004efd93
        ;   XREF to: 004efdd6 (CONDITIONAL_JUMP)  ; LAB_004efdd6
    FLD float ptr [EDX + 0x8]           ; 004efd95
        ;   Label: LAB_004efd95
    FCHS                                ; 004efd98
    FCOMP float ptr [EDX]               ; 004efd9a
    FNSTSW AX                           ; 004efd9c
    SAHF                                ; 004efd9e
    JBE 0x004efda5                      ; 004efd9f
        ;   XREF to: 004efda5 (CONDITIONAL_JUMP)  ; LAB_004efda5
    OR byte ptr [EDX + 0x10],0x2        ; 004efda1
    FLD float ptr [EDX + 0x4]           ; 004efda5
        ;   Label: LAB_004efda5
    FCOMP float ptr [EDX + 0x8]         ; 004efda8
    FNSTSW AX                           ; 004efdab
    SAHF                                ; 004efdad
    JBE 0x004efdb4                      ; 004efdae
        ;   XREF to: 004efdb4 (CONDITIONAL_JUMP)  ; LAB_004efdb4
    OR byte ptr [EDX + 0x10],0x4        ; 004efdb0
    FLD float ptr [EDX + 0x8]           ; 004efdb4
        ;   Label: LAB_004efdb4
    FCHS                                ; 004efdb7
    FCOMP float ptr [EDX + 0x4]         ; 004efdb9
    FNSTSW AX                           ; 004efdbc
    SAHF                                ; 004efdbe
    JBE 0x004efdc5                      ; 004efdbf
        ;   XREF to: 004efdc5 (CONDITIONAL_JUMP)  ; LAB_004efdc5
    OR byte ptr [EDX + 0x10],0x8        ; 004efdc1
    FLDZ                                ; 004efdc5
        ;   Label: LAB_004efdc5
    FCOMP float ptr [EDX + 0x8]         ; 004efdc7
    FNSTSW AX                           ; 004efdca
    SAHF                                ; 004efdcc
    JNC 0x004efe1a                      ; 004efdcd
        ;   XREF to: 004efe1a (CONDITIONAL_JUMP)  ; LAB_004efe1a
    CMP dword ptr [EDX + 0x10],0x0      ; 004efdcf
    JZ 0x004efddc                       ; 004efdd3
        ;   XREF to: 004efddc (CONDITIONAL_JUMP)  ; LAB_004efddc
    RET                                 ; 004efdd5
    OR byte ptr [EDX + 0x10],0x1        ; 004efdd6
        ;   Label: LAB_004efdd6
    JMP 0x004efd95                      ; 004efdda
        ;   XREF to: 004efd95 (UNCONDITIONAL_JUMP)  ; LAB_004efd95
    FLD float ptr [EDX + 0x8]           ; 004efddc
        ;   Label: LAB_004efddc
    FLD1                                ; 004efddf
    FDIVRP                              ; 004efde1
    FLD float ptr [EDX]                 ; 004efde3
    FMUL float ptr [0x01d76c5c]         ; 004efde5 | DAT_01d76c5c
    FLD float ptr [EDX + 0x4]           ; 004efdeb
    FMUL float ptr [0x01d76c60]         ; 004efdee | DAT_01d76c60
    FXCH ST2                            ; 004efdf4
    FSTP float ptr [EDX + 0xc]          ; 004efdf6
    FMUL float ptr [EDX + 0xc]          ; 004efdf9
    FXCH                                ; 004efdfc
    FMUL float ptr [EDX + 0xc]          ; 004efdfe
    FLD float ptr [0x01d76c68]          ; 004efe01 | DAT_01d76c68
    FLD float ptr [0x01d76c64]          ; 004efe07 | DAT_01d76c64
    FADDP ST3,ST0                       ; 004efe0d
    FADDP                               ; 004efe0f
    FXCH                                ; 004efe11
    FSTP float ptr [EDX + 0x14]         ; 004efe13
    FSTP float ptr [EDX + 0x18]         ; 004efe16
    RET                                 ; 004efe19
    OR byte ptr [EDX + 0x10],0x10       ; 004efe1a
        ;   Label: LAB_004efe1a
    RET                                 ; 004efe1e

