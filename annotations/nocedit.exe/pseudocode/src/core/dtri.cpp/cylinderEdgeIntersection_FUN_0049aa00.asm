; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dtri_cpp_cylinderEdgeIntersection_FUN_0049aa00(SIntersectXZCylinder *cylinder)
;
; Parameters:
; SIntersectXZCylinder * Stack[0x4]:4   cylinder
; Local Variables:
; float            Stack[-0x3c]:4  local_3c
; float            Stack[-0x14]:4  local_14
; float            Stack[-0x10]:4  local_10
;
; XREF[2]:
;   core_dtri.cpp_cylinderEdgeTestWithHeight_FUN_0049ace0 at 0049ad09
;   core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80 at 0049afe6
;
; Referenced Globals:
;   float g_CylinderScale2 = -2
;   float g_CylinderScale1 = 4
;   float g_CylinderInvScale = 2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049aa00
        ;   Label: core_dtri.cpp_cylinderEdgeIntersection_FUN_0049aa00
    PUSH EBP                            ; 0049aa01
    MOV EBP,ESP                         ; 0049aa02
    SUB ESP,0x58                        ; 0049aa04
    AND ESP,0xfffffff8                  ; 0049aa07
    MOV EDX,dword ptr [EBP + 0xc]       ; 0049aa0a
    FLD float ptr [EDX + 0x44]          ; 0049aa0d
    FLD float ptr [EDX + 0x48]          ; 0049aa10
    FSUB float ptr [EDX + 0x40]         ; 0049aa13
    FXCH                                ; 0049aa16
    FSUB float ptr [EDX + 0x3c]         ; 0049aa18
    FXCH                                ; 0049aa1b
    FST float ptr [ESP + 0x1c]          ; 0049aa1d
    FCHS                                ; 0049aa21
    FST float ptr [ESP + 0x50]          ; 0049aa23
    FMUL float ptr [ESP + 0x50]         ; 0049aa27
    FXCH                                ; 0049aa2b
    FST float ptr [ESP + 0x20]          ; 0049aa2d
    FMUL float ptr [ESP + 0x20]         ; 0049aa31
    FADDP                               ; 0049aa35
    FLDZ                                ; 0049aa37
    FXCH                                ; 0049aa39
    FSTP double ptr [ESP + 0x10]        ; 0049aa3b
    FCOMP double ptr [ESP + 0x10]       ; 0049aa3f
    FNSTSW AX                           ; 0049aa43
    SAHF                                ; 0049aa45
    JNC 0x0049ac60                      ; 0049aa46
        ;   XREF to: 0049ac60 (CONDITIONAL_JUMP)  ; LAB_0049ac60
    FLD double ptr [ESP + 0x10]         ; 0049aa4c
    FSQRT                               ; 0049aa50
    FLD float ptr [ESP + 0x50]          ; 0049aa52
    FLD1                                ; 0049aa56
    FDIVRP ST2,ST0                      ; 0049aa58
    FMUL ST1                            ; 0049aa5a
    FLD float ptr [EDX + 0x10]          ; 0049aa5c
    FSUB float ptr [EDX + 0x3c]         ; 0049aa5f
    FXCH                                ; 0049aa62
    FSTP float ptr [ESP + 0x50]         ; 0049aa64
    FMUL float ptr [ESP + 0x50]         ; 0049aa68
    FLD float ptr [ESP + 0x20]          ; 0049aa6c
    FMULP ST2                           ; 0049aa70
    FLD float ptr [EDX + 0x14]          ; 0049aa72
    FSUB float ptr [EDX + 0x40]         ; 0049aa75
    FXCH ST2                            ; 0049aa78
    FSTP float ptr [ESP + 0x4c]         ; 0049aa7a
    FXCH                                ; 0049aa7e
    FMUL float ptr [ESP + 0x4c]         ; 0049aa80
    FADDP                               ; 0049aa84
    FLDZ                                ; 0049aa86
    FCOMPP                              ; 0049aa88
    FNSTSW AX                           ; 0049aa8a
    SAHF                                ; 0049aa8c
    JC 0x0049ac67                       ; 0049aa8d
        ;   XREF to: 0049ac67 (CONDITIONAL_JUMP)  ; LAB_0049ac67
    FLD float ptr [EDX + 0x18]          ; 0049aa93
        ;   Label: LAB_0049aa93
    FMUL float ptr [ESP + 0x50]         ; 0049aa96
    FLD float ptr [EDX + 0x1c]          ; 0049aa9a
    FMUL float ptr [ESP + 0x4c]         ; 0049aa9d
    FADDP                               ; 0049aaa1
    FST float ptr [ESP + 0x28]          ; 0049aaa3
    FLDZ                                ; 0049aaa7
    FCOMPP                              ; 0049aaa9
    FNSTSW AX                           ; 0049aaab
    SAHF                                ; 0049aaad
    JNC 0x0049ac60                      ; 0049aaae
        ;   XREF to: 0049ac60 (CONDITIONAL_JUMP)  ; LAB_0049ac60
    FLD float ptr [ESP + 0x50]          ; 0049aab4
    FLD float ptr [EDX + 0x3c]          ; 0049aab8
    FMUL ST1                            ; 0049aabb
    FLD float ptr [EDX + 0x10]          ; 0049aabd
    FMULP ST2                           ; 0049aac0
    FLD float ptr [ESP + 0x4c]          ; 0049aac2
    FLD float ptr [EDX + 0x40]          ; 0049aac6
    FMUL ST1                            ; 0049aac9
    FLD float ptr [EDX + 0x14]          ; 0049aacb
    FMULP ST2                           ; 0049aace
    FADDP ST2,ST0                       ; 0049aad0
    FADDP ST2,ST0                       ; 0049aad2
    FSTP float ptr [ESP + 0x40]         ; 0049aad4
    FCOMP float ptr [ESP + 0x40]        ; 0049aad8
    FNSTSW AX                           ; 0049aadc
    SAHF                                ; 0049aade
    JA 0x0049ac60                       ; 0049aadf
        ;   XREF to: 0049ac60 (CONDITIONAL_JUMP)  ; LAB_0049ac60
    FLD float ptr [ESP + 0x50]          ; 0049aae5
    FLD ST0                             ; 0049aae9
    FMUL float ptr [EDX + 0x20]         ; 0049aaeb
    FLD float ptr [ESP + 0x4c]          ; 0049aaee
    FLD ST0                             ; 0049aaf2
    FMUL float ptr [EDX + 0x20]         ; 0049aaf4
    FXCH ST2                            ; 0049aaf7
    FADD float ptr [EDX + 0x10]         ; 0049aaf9
    FXCH ST2                            ; 0049aafc
    FADD float ptr [EDX + 0x14]         ; 0049aafe
    FXCH ST2                            ; 0049ab01
    FST float ptr [ESP + 0x3c]          ; 0049ab03
    FMULP ST3                           ; 0049ab07
    FXCH                                ; 0049ab09
    FST float ptr [ESP + 0x44]          ; 0049ab0b
    FMULP                               ; 0049ab0f
    FADDP                               ; 0049ab11
    FSUBR float ptr [ESP + 0x40]        ; 0049ab13
    FST float ptr [ESP + 0x24]          ; 0049ab17
    FCOMP float ptr [ESP + 0x28]        ; 0049ab1b
    FNSTSW AX                           ; 0049ab1f
    SAHF                                ; 0049ab21
    JA 0x0049ac60                       ; 0049ab22
        ;   XREF to: 0049ac60 (CONDITIONAL_JUMP)  ; LAB_0049ac60
    FLD float ptr [ESP + 0x24]          ; 0049ab28
    FDIV float ptr [ESP + 0x28]         ; 0049ab2c
    FST float ptr [ESP + 0x24]          ; 0049ab30
    FCOMP float ptr [EDX]               ; 0049ab34
    FNSTSW AX                           ; 0049ab36
    SAHF                                ; 0049ab38
    JNC 0x0049ac60                      ; 0049ab39
        ;   XREF to: 0049ac60 (CONDITIONAL_JUMP)  ; LAB_0049ac60
    FLD float ptr [ESP + 0x20]          ; 0049ab3f
    FABS                                ; 0049ab43
    FLD float ptr [ESP + 0x1c]          ; 0049ab45
    FABS                                ; 0049ab49
    FLD float ptr [ESP + 0x24]          ; 0049ab4b
    FLD float ptr [EDX + 0x18]          ; 0049ab4f
    FMUL ST1                            ; 0049ab52
    FLD float ptr [EDX + 0x1c]          ; 0049ab54
    FMULP ST2                           ; 0049ab57
    FADD float ptr [ESP + 0x3c]         ; 0049ab59
    FXCH                                ; 0049ab5d
    FADD float ptr [ESP + 0x44]         ; 0049ab5f
    FXCH                                ; 0049ab63
    FSTP float ptr [EDX + 0x54]         ; 0049ab65
    FSTP float ptr [EDX + 0x58]         ; 0049ab68
    FCOMPP                              ; 0049ab6b
    FNSTSW AX                           ; 0049ab6d
    SAHF                                ; 0049ab6f
    JNC 0x0049ac82                      ; 0049ab70
        ;   XREF to: 0049ac82 (CONDITIONAL_JUMP)  ; LAB_0049ac82
    FLD float ptr [EDX + 0x54]          ; 0049ab76
    FSUB float ptr [EDX + 0x3c]         ; 0049ab79
    FDIV float ptr [ESP + 0x20]         ; 0049ab7c
    FSTP float ptr [EDX + 0x50]         ; 0049ab80
        ;   Label: LAB_0049ab80
    FLDZ                                ; 0049ab83
    FLD float ptr [EDX + 0x50]          ; 0049ab85
    FSTP double ptr [ESP + 0x8]         ; 0049ab88
    FCOMP double ptr [ESP + 0x8]        ; 0049ab8c
    FNSTSW AX                           ; 0049ab90
    SAHF                                ; 0049ab92
    JBE 0x0049ac91                      ; 0049ab93
        ;   XREF to: 0049ac91 (CONDITIONAL_JUMP)  ; LAB_0049ac91
    MOV dword ptr [EDX + 0x50],0x0      ; 0049ab99
    FLD float ptr [EDX + 0x3c]          ; 0049aba0
    MOV EAX,dword ptr [EDX + 0x40]      ; 0049aba3
    MOV dword ptr [EDX + 0x58],EAX      ; 0049aba6
        ;   Label: LAB_0049aba6
    FSTP float ptr [EDX + 0x54]         ; 0049aba9
    FLD float ptr [EDX + 0x18]          ; 0049abac
    FMUL ST0                            ; 0049abaf
    FLD float ptr [EDX + 0x18]          ; 0049abb1
    FLD float ptr [EDX + 0x54]          ; 0049abb4
    FSUB float ptr [EDX + 0x10]         ; 0049abb7
    FXCH                                ; 0049abba
    FMUL ST1                            ; 0049abbc
    FLD float ptr [EDX + 0x1c]          ; 0049abbe
    FMUL ST0                            ; 0049abc1
    FLD ST2                             ; 0049abc3
    FMULP ST3                           ; 0049abc5
    FLD float ptr [EDX + 0x58]          ; 0049abc7
    FSUB float ptr [EDX + 0x14]         ; 0049abca
    FLD float ptr [EDX + 0x1c]          ; 0049abcd
    FMUL ST1                            ; 0049abd0
    FLD ST1                             ; 0049abd2
    FXCH ST3                            ; 0049abd4
    FADDP ST6,ST0                       ; 0049abd6
    FXCH ST2                            ; 0049abd8
    FMULP                               ; 0049abda
    FXCH ST4                            ; 0049abdc
    FST float ptr [ESP + 0x38]          ; 0049abde
    FMUL float ptr [0x00622dfe]         ; 0049abe2 | g_CylinderScale1
    FXCH ST4                            ; 0049abe8
    FADDP ST3,ST0                       ; 0049abea
    FADDP                               ; 0049abec
    FLD float ptr [EDX + 0x20]          ; 0049abee
    FMUL ST0                            ; 0049abf1
    FXCH                                ; 0049abf3
    FMUL float ptr [0x00622dfa]         ; 0049abf5 | g_CylinderScale2
    FXCH                                ; 0049abfb
    FSUBP ST2,ST0                       ; 0049abfd
    FXCH ST2                            ; 0049abff
    FMULP                               ; 0049ac01
    FXCH                                ; 0049ac03
    FST float ptr [ESP + 0x48]          ; 0049ac05
    FMUL float ptr [ESP + 0x48]         ; 0049ac09
    FSUBRP                              ; 0049ac0d
    FLDZ                                ; 0049ac0f
    FXCH                                ; 0049ac11
    FSTP float ptr [ESP + 0x18]         ; 0049ac13
    FCOMP float ptr [ESP + 0x18]        ; 0049ac17
    FNSTSW AX                           ; 0049ac1b
    SAHF                                ; 0049ac1d
    JA 0x0049ac60                       ; 0049ac1e
        ;   XREF to: 0049ac60 (CONDITIONAL_JUMP)  ; LAB_0049ac60
    FLD float ptr [ESP + 0x48]          ; 0049ac20
    FCHS                                ; 0049ac24
    FLD float ptr [ESP + 0x18]          ; 0049ac26
    FSQRT                               ; 0049ac2a
    FSUBP                               ; 0049ac2c
    FLD float ptr [ESP + 0x38]          ; 0049ac2e
    FMUL float ptr [0x00622e02]         ; 0049ac32 | g_CylinderInvScale
    FDIVP                               ; 0049ac38
    FLDZ                                ; 0049ac3a
    FXCH                                ; 0049ac3c
    FST float ptr [EDX + 0x4c]          ; 0049ac3e
    FSTP double ptr [ESP]               ; 0049ac41
    FCOMP double ptr [ESP]              ; 0049ac44
    FNSTSW AX                           ; 0049ac47
    SAHF                                ; 0049ac49
    JA 0x0049ac60                       ; 0049ac4a
        ;   XREF to: 0049ac60 (CONDITIONAL_JUMP)  ; LAB_0049ac60
    FLD1                                ; 0049ac4c
    FCOMP double ptr [ESP]              ; 0049ac4e
    FNSTSW AX                           ; 0049ac51
    SAHF                                ; 0049ac53
    JC 0x0049ac60                       ; 0049ac54
        ;   XREF to: 0049ac60 (CONDITIONAL_JUMP)  ; LAB_0049ac60
    FLD float ptr [EDX + 0x4c]          ; 0049ac56
    FCOMP float ptr [EDX]               ; 0049ac59
    FNSTSW AX                           ; 0049ac5b
    SAHF                                ; 0049ac5d
    JC 0x0049acc8                       ; 0049ac5e
        ;   XREF to: 0049acc8 (CONDITIONAL_JUMP)  ; LAB_0049acc8
    XOR EAX,EAX                         ; 0049ac60
        ;   Label: LAB_0049ac60
    MOV ESP,EBP                         ; 0049ac62
    POP EBP                             ; 0049ac64
    POP EBX                             ; 0049ac65
    RET                                 ; 0049ac66
    MOV BL,byte ptr [ESP + 0x4f]        ; 0049ac67
        ;   Label: LAB_0049ac67
    MOV AH,byte ptr [ESP + 0x53]        ; 0049ac6b
    XOR BL,0x80                         ; 0049ac6f
    XOR AH,0x80                         ; 0049ac72
    MOV byte ptr [ESP + 0x4f],BL        ; 0049ac75
    MOV byte ptr [ESP + 0x53],AH        ; 0049ac79
    JMP 0x0049aa93                      ; 0049ac7d
        ;   XREF to: 0049aa93 (UNCONDITIONAL_JUMP)  ; LAB_0049aa93
    FLD float ptr [EDX + 0x58]          ; 0049ac82
        ;   Label: LAB_0049ac82
    FSUB float ptr [EDX + 0x40]         ; 0049ac85
    FDIV float ptr [ESP + 0x1c]         ; 0049ac88
    JMP 0x0049ab80                      ; 0049ac8c
        ;   XREF to: 0049ab80 (UNCONDITIONAL_JUMP)  ; LAB_0049ab80
    FLD1                                ; 0049ac91
        ;   Label: LAB_0049ac91
    FCOMP double ptr [ESP + 0x8]        ; 0049ac93
    FNSTSW AX                           ; 0049ac97
    SAHF                                ; 0049ac99
    JNC 0x0049acae                      ; 0049ac9a
        ;   XREF to: 0049acae (CONDITIONAL_JUMP)  ; LAB_0049acae
    MOV dword ptr [EDX + 0x50],0x3f800000 ; 0049ac9c
    FLD float ptr [EDX + 0x44]          ; 0049aca3
    MOV EAX,dword ptr [EDX + 0x48]      ; 0049aca6
    JMP 0x0049aba6                      ; 0049aca9
        ;   XREF to: 0049aba6 (UNCONDITIONAL_JUMP)  ; LAB_0049aba6
    FLD float ptr [ESP + 0x24]          ; 0049acae
        ;   Label: LAB_0049acae
    FLDZ                                ; 0049acb2
    FCOMPP                              ; 0049acb4
    FNSTSW AX                           ; 0049acb6
    SAHF                                ; 0049acb8
    JBE 0x0049acc1                      ; 0049acb9
        ;   XREF to: 0049acc1 (CONDITIONAL_JUMP)  ; LAB_0049acc1
    XOR ECX,ECX                         ; 0049acbb
    MOV dword ptr [ESP + 0x24],ECX      ; 0049acbd
    MOV EAX,dword ptr [ESP + 0x24]      ; 0049acc1
        ;   Label: LAB_0049acc1
    MOV dword ptr [EDX + 0x4c],EAX      ; 0049acc5
    MOV EAX,0x1                         ; 0049acc8
        ;   Label: LAB_0049acc8
    MOV ESP,EBP                         ; 0049accd
    POP EBP                             ; 0049accf
    POP EBX                             ; 0049acd0
    RET                                 ; 0049acd1

