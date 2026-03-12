; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_dcube_cpp_intersectVerticalCylinderSegment_FUN_00455ed0(CVector3f *segment_start,CVector3f *segment_end,float radius,float *out_height)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   segment_start
; CVector3f *      Stack[0x8]:4   segment_end
; float            Stack[0xc]:4   radius
; float *          Stack[0x10]:4   out_height
;
; XREF[1]:
;   core_dcube.cpp_triangleCylinderCollision_FUN_00456040 at 00456222
;
; Referenced Globals:
;   double g_IntersectionConstantTwo2 = 2
;   double g_IntersectionConstantFour2 = 4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00455ed0
        ;   Label: core_dcube.cpp_intersectVerticalCylinderSegment_FUN_00455ed0
    PUSH ESI                            ; 00455ed1
    PUSH EBP                            ; 00455ed2
    MOV EBP,ESP                         ; 00455ed3
    SUB ESP,0x50                        ; 00455ed5
    AND ESP,0xfffffff8                  ; 00455ed8
    MOV EDX,dword ptr [EBP + 0x10]      ; 00455edb
    MOV ESI,dword ptr [EBP + 0x14]      ; 00455ede
    MOV EBX,dword ptr [EBP + 0x1c]      ; 00455ee1
    FLD float ptr [ESI + 0x8]           ; 00455ee4
    FLD float ptr [ESI]                 ; 00455ee7
    FSUB float ptr [EDX]                ; 00455ee9
    FXCH                                ; 00455eeb
    FSUB float ptr [EDX + 0x8]          ; 00455eed
    FXCH                                ; 00455ef0
    FST double ptr [ESP + 0x30]         ; 00455ef2
    FMUL double ptr [ESP + 0x30]        ; 00455ef6
    FXCH                                ; 00455efa
    FST double ptr [ESP + 0x18]         ; 00455efc
    FMUL double ptr [ESP + 0x18]        ; 00455f00
    FADDP                               ; 00455f04
    FLDZ                                ; 00455f06
    FXCH                                ; 00455f08
    FSTP double ptr [ESP + 0x40]        ; 00455f0a
    FCOMP double ptr [ESP + 0x40]       ; 00455f0e
    FNSTSW AX                           ; 00455f12
    SAHF                                ; 00455f14
    JNC 0x00456035                      ; 00455f15
        ;   XREF to: 00456035 (CONDITIONAL_JUMP)  ; LAB_00456035
    FLD float ptr [EDX + 0x8]           ; 00455f1b
    FMUL double ptr [ESP + 0x18]        ; 00455f1e
    FLD float ptr [EDX + 0x8]           ; 00455f22
    FMUL ST0                            ; 00455f25
    FLD double ptr [ESP + 0x40]         ; 00455f27
    FMUL double ptr [0x0061a502]        ; 00455f2b | g_IntersectionConstantFour2
    FLD float ptr [EDX]                 ; 00455f31
    FMUL ST0                            ; 00455f33
    FLD float ptr [EDX]                 ; 00455f35
    FMUL double ptr [ESP + 0x30]        ; 00455f37
    FXCH                                ; 00455f3b
    FADDP ST3,ST0                       ; 00455f3d
    FADDP ST3,ST0                       ; 00455f3f
    FLD float ptr [EBP + 0x18]          ; 00455f41
    FMUL ST0                            ; 00455f44
    FXCH ST3                            ; 00455f46
    FMUL double ptr [0x0061a4fa]        ; 00455f48 | g_IntersectionConstantTwo2
    FXCH ST3                            ; 00455f4e
    FSUBP ST2,ST0                       ; 00455f50
    FMULP                               ; 00455f52
    FXCH                                ; 00455f54
    FST double ptr [ESP + 0x38]         ; 00455f56
    FMUL double ptr [ESP + 0x38]        ; 00455f5a
    FSUBRP                              ; 00455f5e
    FLDZ                                ; 00455f60
    FXCH                                ; 00455f62
    FSTP double ptr [ESP + 0x8]         ; 00455f64
    FCOMP double ptr [ESP + 0x8]        ; 00455f68
    FNSTSW AX                           ; 00455f6c
    SAHF                                ; 00455f6e
    JA 0x00456035                       ; 00455f6f
        ;   XREF to: 00456035 (CONDITIONAL_JUMP)  ; LAB_00456035
    FLD double ptr [ESP + 0x38]         ; 00455f75
    FCHS                                ; 00455f79
    FLD double ptr [ESP + 0x8]          ; 00455f7b
    FSQRT                               ; 00455f7f
    FSUBP                               ; 00455f81
    FLD double ptr [ESP + 0x40]         ; 00455f83
    FMUL double ptr [0x0061a4fa]        ; 00455f87 | g_IntersectionConstantTwo2
    FDIVP                               ; 00455f8d
    FLDZ                                ; 00455f8f
    XOR ECX,ECX                         ; 00455f91
    FXCH                                ; 00455f93
    FSTP double ptr [ESP + 0x10]        ; 00455f95
    FCOMP double ptr [ESP + 0x10]       ; 00455f99
    FNSTSW AX                           ; 00455f9d
    SAHF                                ; 00455f9f
    JA 0x00455fd6                       ; 00455fa0
        ;   XREF to: 00455fd6 (CONDITIONAL_JUMP)  ; LAB_00455fd6
    FLD1                                ; 00455fa2
    FCOMP double ptr [ESP + 0x10]       ; 00455fa4
    FNSTSW AX                           ; 00455fa8
    SAHF                                ; 00455faa
    JC 0x00455fd6                       ; 00455fab
        ;   XREF to: 00455fd6 (CONDITIONAL_JUMP)  ; LAB_00455fd6
    FLD float ptr [ESI + 0x4]           ; 00455fad
    FSUB float ptr [EDX + 0x4]          ; 00455fb0
    FMUL double ptr [ESP + 0x10]        ; 00455fb3
    FADD float ptr [EDX + 0x4]          ; 00455fb7
    FLD float ptr [EBX]                 ; 00455fba
    FXCH                                ; 00455fbc
    FSTP double ptr [ESP + 0x20]        ; 00455fbe
    FCOMP double ptr [ESP + 0x20]       ; 00455fc2
    FNSTSW AX                           ; 00455fc6
    SAHF                                ; 00455fc8
    JNC 0x00455fd6                      ; 00455fc9
        ;   XREF to: 00455fd6 (CONDITIONAL_JUMP)  ; LAB_00455fd6
    FLD double ptr [ESP + 0x20]         ; 00455fcb
    MOV ECX,0x1                         ; 00455fcf
    FSTP float ptr [EBX]                ; 00455fd4
    FLD double ptr [ESP + 0x8]          ; 00455fd6
        ;   Label: LAB_00455fd6
    FSQRT                               ; 00455fda
    FSUB double ptr [ESP + 0x38]        ; 00455fdc
    FLD double ptr [ESP + 0x40]         ; 00455fe0
    FMUL double ptr [0x0061a4fa]        ; 00455fe4 | g_IntersectionConstantTwo2
    FDIVP                               ; 00455fea
    FLDZ                                ; 00455fec
    FXCH                                ; 00455fee
    FSTP double ptr [ESP]               ; 00455ff0
    FCOMP double ptr [ESP]              ; 00455ff3
    FNSTSW AX                           ; 00455ff6
    SAHF                                ; 00455ff8
    JA 0x0045602d                       ; 00455ff9
        ;   XREF to: 0045602d (CONDITIONAL_JUMP)  ; LAB_0045602d
    FLD1                                ; 00455ffb
    FCOMP double ptr [ESP]              ; 00455ffd
    FNSTSW AX                           ; 00456000
    SAHF                                ; 00456002
    JC 0x0045602d                       ; 00456003
        ;   XREF to: 0045602d (CONDITIONAL_JUMP)  ; LAB_0045602d
    FLD float ptr [ESI + 0x4]           ; 00456005
    FSUB float ptr [EDX + 0x4]          ; 00456008
    FMUL double ptr [ESP]               ; 0045600b
    FADD float ptr [EDX + 0x4]          ; 0045600e
    FLD float ptr [EBX]                 ; 00456011
    FXCH                                ; 00456013
    FSTP double ptr [ESP + 0x28]        ; 00456015
    FCOMP double ptr [ESP + 0x28]       ; 00456019
    FNSTSW AX                           ; 0045601d
    SAHF                                ; 0045601f
    JNC 0x0045602d                      ; 00456020
        ;   XREF to: 0045602d (CONDITIONAL_JUMP)  ; LAB_0045602d
    FLD double ptr [ESP + 0x28]         ; 00456022
    MOV ECX,0x1                         ; 00456026
    FSTP float ptr [EBX]                ; 0045602b
    MOV EAX,ECX                         ; 0045602d
        ;   Label: LAB_0045602d
    MOV ESP,EBP                         ; 0045602f
    POP EBP                             ; 00456031
    POP ESI                             ; 00456032
    POP EBX                             ; 00456033
    RET                                 ; 00456034
    XOR EAX,EAX                         ; 00456035
        ;   Label: LAB_00456035
    MOV ESP,EBP                         ; 00456037
    POP EBP                             ; 00456039
    POP ESI                             ; 0045603a
    POP EBX                             ; 0045603b
    RET                                 ; 0045603c

