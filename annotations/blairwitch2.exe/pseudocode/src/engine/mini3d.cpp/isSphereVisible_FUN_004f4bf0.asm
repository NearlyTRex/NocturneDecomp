; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_mini3d_cpp_isSphereVisible_FUN_004f4bf0(CVector3f *center,float radius)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   center
; float            Stack[0x8]:4   radius
;
; Referenced Globals:
;   undefined4 DAT_005dde3c
;   undefined4 DAT_01d098c8
;   undefined4 DAT_01d09910
;   undefined4 DAT_01d09918
;
; *****************************************************************************

section .text

    SUB ESP,0x1c                        ; 004f4bf0
        ;   Label: engine_mini3d.cpp_isSphereVisible_FUN_004f4bf0
    MOV EAX,dword ptr [ESP + 0x20]      ; 004f4bf3
    FLD float ptr [ESP + 0x24]          ; 004f4bf7
    FMUL float ptr [0x005dde3c]         ; 004f4bfb | DAT_005dde3c
    FLD float ptr [EAX]                 ; 004f4c01
    MOV EDX,dword ptr [0x01d09918]      ; 004f4c03 | DAT_01d09918
    FLD float ptr [EAX + 0x4]           ; 004f4c09
    FXCH                                ; 004f4c0c
    FSUB float ptr [EDX + 0x24]         ; 004f4c0e
    FXCH                                ; 004f4c11
    FSUB float ptr [EDX + 0x28]         ; 004f4c13
    FXCH                                ; 004f4c16
    FST float ptr [ESP + 0x10]          ; 004f4c18
    FMUL float ptr [EDX + 0x8]          ; 004f4c1c
    FXCH                                ; 004f4c1f
    FST float ptr [ESP + 0x14]          ; 004f4c21
    FMUL float ptr [EDX + 0x14]         ; 004f4c25
    FLD float ptr [EAX + 0x8]           ; 004f4c28
    FSUB float ptr [EDX + 0x2c]         ; 004f4c2b
    FXCH                                ; 004f4c2e
    FADDP ST2,ST0                       ; 004f4c30
    FST float ptr [ESP + 0xc]           ; 004f4c32
    FMUL float ptr [EDX + 0x20]         ; 004f4c36
    FXCH ST2                            ; 004f4c39
    FMUL float ptr [0x01d098c8]         ; 004f4c3b | DAT_01d098c8
    FXCH ST2                            ; 004f4c41
    FADDP                               ; 004f4c43
    FXCH                                ; 004f4c45
    FSTP float ptr [ESP + 0x24]         ; 004f4c47
    FST float ptr [ESP + 0x18]          ; 004f4c4b
    FADD float ptr [ESP + 0x24]         ; 004f4c4f
    FLDZ                                ; 004f4c53
    FCOMPP                              ; 004f4c55
    FNSTSW AX                           ; 004f4c57
    SAHF                                ; 004f4c59
    JA 0x004f4cf3                       ; 004f4c5a
        ;   XREF to: 004f4cf3 (CONDITIONAL_JUMP)  ; LAB_004f4cf3
    FLD float ptr [ESP + 0x18]          ; 004f4c60
    FSUB float ptr [ESP + 0x24]         ; 004f4c64
    FCOMP float ptr [0x01d09910]        ; 004f4c68 | DAT_01d09910
    FNSTSW AX                           ; 004f4c6e
    SAHF                                ; 004f4c70
    JA 0x004f4cf3                       ; 004f4c71
        ;   XREF to: 004f4cf3 (CONDITIONAL_JUMP)  ; LAB_004f4cf3
    FLD float ptr [ESP + 0x14]          ; 004f4c77
    FMUL float ptr [EDX + 0xc]          ; 004f4c7b
    FLD float ptr [ESP + 0x10]          ; 004f4c7e
    FMUL float ptr [EDX]                ; 004f4c82
    FADDP                               ; 004f4c84
    FLD float ptr [ESP + 0xc]           ; 004f4c86
    FMUL float ptr [EDX + 0x18]         ; 004f4c8a
    FADDP                               ; 004f4c8d
    FST float ptr [ESP + 0x8]           ; 004f4c8f
    FSUB float ptr [ESP + 0x24]         ; 004f4c93
    FCOMP float ptr [ESP + 0x18]        ; 004f4c97
    FNSTSW AX                           ; 004f4c9b
    SAHF                                ; 004f4c9d
    JA 0x004f4cf3                       ; 004f4c9e
        ;   XREF to: 004f4cf3 (CONDITIONAL_JUMP)  ; LAB_004f4cf3
    FLD float ptr [ESP + 0x8]           ; 004f4ca0
    FADD float ptr [ESP + 0x24]         ; 004f4ca4
    FLD float ptr [ESP + 0x18]          ; 004f4ca8
    FCHS                                ; 004f4cac
    FSTP float ptr [ESP]                ; 004f4cae
    FCOMP float ptr [ESP]               ; 004f4cb1
    FNSTSW AX                           ; 004f4cb4
    SAHF                                ; 004f4cb6
    JC 0x004f4cf3                       ; 004f4cb7
        ;   XREF to: 004f4cf3 (CONDITIONAL_JUMP)  ; LAB_004f4cf3
    FLD float ptr [ESP + 0x10]          ; 004f4cb9
    FMUL float ptr [EDX + 0x4]          ; 004f4cbd
    FLD float ptr [ESP + 0x14]          ; 004f4cc0
    FMUL float ptr [EDX + 0x10]         ; 004f4cc4
    FADDP                               ; 004f4cc7
    FLD float ptr [ESP + 0xc]           ; 004f4cc9
    FMUL float ptr [EDX + 0x1c]         ; 004f4ccd
    FADDP                               ; 004f4cd0
    FST float ptr [ESP + 0x4]           ; 004f4cd2
    FSUB float ptr [ESP + 0x24]         ; 004f4cd6
    FCOMP float ptr [ESP + 0x18]        ; 004f4cda
    FNSTSW AX                           ; 004f4cde
    SAHF                                ; 004f4ce0
    JA 0x004f4cf3                       ; 004f4ce1
        ;   XREF to: 004f4cf3 (CONDITIONAL_JUMP)  ; LAB_004f4cf3
    FLD float ptr [ESP + 0x4]           ; 004f4ce3
    FADD float ptr [ESP + 0x24]         ; 004f4ce7
    FCOMP float ptr [ESP]               ; 004f4ceb
    FNSTSW AX                           ; 004f4cee
    SAHF                                ; 004f4cf0
    JNC 0x004f4cf9                      ; 004f4cf1
        ;   XREF to: 004f4cf9 (CONDITIONAL_JUMP)  ; LAB_004f4cf9
    XOR EAX,EAX                         ; 004f4cf3
        ;   Label: LAB_004f4cf3
    ADD ESP,0x1c                        ; 004f4cf5
    RET                                 ; 004f4cf8
    MOV EAX,0x1                         ; 004f4cf9
        ;   Label: LAB_004f4cf9
    ADD ESP,0x1c                        ; 004f4cfe
    RET                                 ; 004f4d01

