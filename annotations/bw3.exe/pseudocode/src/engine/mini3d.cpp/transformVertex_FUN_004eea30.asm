; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_transformVertex_FUN_004eea30(CVector3f *point,float *out)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   point
; float *          Stack[0x8]:4   out
;
; XREF[3]:
;   engine_mini3d.cpp_polyListD3DL_FUN_004ee1a0 at 004ee254
;   engine_mini3d.cpp_polyListL_FUN_004ee430 at 004ee4d2
;   engine_mini3d.cpp_polyList_FUN_004edea0 at 004ee056
;
; Referenced Globals:
;   undefined4 DAT_01d76c5c
;   undefined4 DAT_01d76c60
;   undefined4 DAT_01d76c64
;   undefined4 DAT_01d76c68
;   undefined4 DAT_01d76cfc
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 004eea30
        ;   Label: engine_mini3d.cpp_transformVertex_FUN_004eea30
    MOV ECX,dword ptr [ESP + 0x10]      ; 004eea33
    MOV EDX,dword ptr [ESP + 0x14]      ; 004eea37
    MOV EAX,[0x01d76cfc]                ; 004eea3b | DAT_01d76cfc
    FLD float ptr [ECX + 0x4]           ; 004eea40
    FSUB float ptr [EAX + 0x28]         ; 004eea43
    FLD ST0                             ; 004eea46
    FMUL float ptr [EAX + 0xc]          ; 004eea48
    FLD float ptr [ECX]                 ; 004eea4b
    FSUB float ptr [EAX + 0x24]         ; 004eea4d
    FLD ST0                             ; 004eea50
    FMUL float ptr [EAX]                ; 004eea52
    FLD float ptr [ECX + 0x8]           ; 004eea54
    FXCH                                ; 004eea57
    FADDP ST3,ST0                       ; 004eea59
    FSUB float ptr [EAX + 0x2c]         ; 004eea5b
    FLD ST0                             ; 004eea5e
    FMUL float ptr [EAX + 0x18]         ; 004eea60
    FADDP ST3,ST0                       ; 004eea63
    FLD ST1                             ; 004eea65
    FXCH ST3                            ; 004eea67
    FSTP float ptr [EDX]                ; 004eea69
    FXCH ST2                            ; 004eea6b
    FMUL float ptr [EAX + 0x4]          ; 004eea6d
    FLD ST3                             ; 004eea70
    FMUL float ptr [EAX + 0x10]         ; 004eea72
    FADDP                               ; 004eea75
    FLD ST2                             ; 004eea77
    FMUL float ptr [EAX + 0x1c]         ; 004eea79
    FADDP                               ; 004eea7c
    FSTP float ptr [EDX + 0x4]          ; 004eea7e
    FMUL float ptr [EAX + 0x8]          ; 004eea81
    FXCH ST2                            ; 004eea84
    FMUL float ptr [EAX + 0x14]         ; 004eea86
    FADDP ST2,ST0                       ; 004eea89
    FMUL float ptr [EAX + 0x20]         ; 004eea8b
    MOV dword ptr [EDX + 0x10],0x0      ; 004eea8e
    FADDP                               ; 004eea95
    FLD float ptr [EDX]                 ; 004eea97
    FXCH                                ; 004eea99
    FSTP float ptr [EDX + 0x8]          ; 004eea9b
    FCOMP float ptr [EDX + 0x8]         ; 004eea9e
    FNSTSW AX                           ; 004eeaa1
    SAHF                                ; 004eeaa3
    JA 0x004eeaea                       ; 004eeaa4
        ;   XREF to: 004eeaea (CONDITIONAL_JUMP)  ; LAB_004eeaea
    FLD float ptr [EDX + 0x8]           ; 004eeaa6
        ;   Label: LAB_004eeaa6
    FCHS                                ; 004eeaa9
    FCOMP float ptr [EDX]               ; 004eeaab
    FNSTSW AX                           ; 004eeaad
    SAHF                                ; 004eeaaf
    JBE 0x004eeab6                      ; 004eeab0
        ;   XREF to: 004eeab6 (CONDITIONAL_JUMP)  ; LAB_004eeab6
    OR byte ptr [EDX + 0x10],0x2        ; 004eeab2
    FLD float ptr [EDX + 0x4]           ; 004eeab6
        ;   Label: LAB_004eeab6
    FCOMP float ptr [EDX + 0x8]         ; 004eeab9
    FNSTSW AX                           ; 004eeabc
    SAHF                                ; 004eeabe
    JBE 0x004eeac5                      ; 004eeabf
        ;   XREF to: 004eeac5 (CONDITIONAL_JUMP)  ; LAB_004eeac5
    OR byte ptr [EDX + 0x10],0x4        ; 004eeac1
    FLD float ptr [EDX + 0x8]           ; 004eeac5
        ;   Label: LAB_004eeac5
    FCHS                                ; 004eeac8
    FCOMP float ptr [EDX + 0x4]         ; 004eeaca
    FNSTSW AX                           ; 004eeacd
    SAHF                                ; 004eeacf
    JBE 0x004eead6                      ; 004eead0
        ;   XREF to: 004eead6 (CONDITIONAL_JUMP)  ; LAB_004eead6
    OR byte ptr [EDX + 0x10],0x8        ; 004eead2
    FLDZ                                ; 004eead6
        ;   Label: LAB_004eead6
    FCOMP float ptr [EDX + 0x8]         ; 004eead8
    FNSTSW AX                           ; 004eeadb
    SAHF                                ; 004eeadd
    JNC 0x004eeb31                      ; 004eeade
        ;   XREF to: 004eeb31 (CONDITIONAL_JUMP)  ; LAB_004eeb31
    CMP dword ptr [EDX + 0x10],0x0      ; 004eeae0
    JZ 0x004eeaf0                       ; 004eeae4
        ;   XREF to: 004eeaf0 (CONDITIONAL_JUMP)  ; LAB_004eeaf0
    ADD ESP,0xc                         ; 004eeae6
    RET                                 ; 004eeae9
    OR byte ptr [EDX + 0x10],0x1        ; 004eeaea
        ;   Label: LAB_004eeaea
    JMP 0x004eeaa6                      ; 004eeaee
        ;   XREF to: 004eeaa6 (UNCONDITIONAL_JUMP)  ; LAB_004eeaa6
    FLD float ptr [EDX + 0x8]           ; 004eeaf0
        ;   Label: LAB_004eeaf0
    FLD1                                ; 004eeaf3
    FDIVRP                              ; 004eeaf5
    FLD float ptr [EDX]                 ; 004eeaf7
    FMUL float ptr [0x01d76c5c]         ; 004eeaf9 | DAT_01d76c5c
    FLD float ptr [EDX + 0x4]           ; 004eeaff
    FMUL float ptr [0x01d76c60]         ; 004eeb02 | DAT_01d76c60
    FXCH ST2                            ; 004eeb08
    FSTP float ptr [EDX + 0xc]          ; 004eeb0a
    FMUL float ptr [EDX + 0xc]          ; 004eeb0d
    FXCH                                ; 004eeb10
    FMUL float ptr [EDX + 0xc]          ; 004eeb12
    FLD float ptr [0x01d76c68]          ; 004eeb15 | DAT_01d76c68
    FLD float ptr [0x01d76c64]          ; 004eeb1b | DAT_01d76c64
    FADDP ST3,ST0                       ; 004eeb21
    FADDP                               ; 004eeb23
    FXCH                                ; 004eeb25
    FSTP float ptr [EDX + 0x14]         ; 004eeb27
    FSTP float ptr [EDX + 0x18]         ; 004eeb2a
    ADD ESP,0xc                         ; 004eeb2d
    RET                                 ; 004eeb30
    OR byte ptr [EDX + 0x10],0x10       ; 004eeb31
        ;   Label: LAB_004eeb31
    ADD ESP,0xc                         ; 004eeb35
    RET                                 ; 004eeb38

