; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_dtri_cpp_rayTriangleIntersection_FUN_00477a50(CDemonTriangle *triangle,CVector3f *rayOrigin,CVector3f *rayDirection)
;
; Parameters:
; CDemonTriangle * Stack[0x4]:4   triangle
; CVector3f *      Stack[0x8]:4   rayOrigin
; CVector3f *      Stack[0xc]:4   rayDirection
; Local Variables:
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[6]:
;   core_dmodel.cpp_FUN_0044f020 at 0044f24a
;   core_dtri.cpp_FUN_00478550 at 00478773
;   core_manpuz.cpp_CMansionPuzzleCircle_customRayIntersect_FUN_004e5970 at 004e5a23
;   core_skeleton.cpp_FUN_00543a40 at 00543bb8
;   core_stairs.cpp_CStairs_customRayIntersect_FUN_005620b0 at 005620fb
;   core_wateract.cpp_CWaterActor_customRayIntersect_FUN_00587900 at 005879f3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00477a50
        ;   Label: core_dtri.cpp_rayTriangleIntersection_FUN_00477a50
    PUSH EBP                            ; 00477a51
    MOV EBP,ESP                         ; 00477a52
    SUB ESP,0x3c                        ; 00477a54
    AND ESP,0xfffffff8                  ; 00477a57
    MOV EDX,dword ptr [EBP + 0xc]       ; 00477a5a
    MOV EBX,dword ptr [EBP + 0x10]      ; 00477a5d
    MOV ECX,dword ptr [EBP + 0x14]      ; 00477a60
    FLD float ptr [EDX + 0x28]          ; 00477a63
    FMUL float ptr [ECX + 0x4]          ; 00477a66
    FLD float ptr [EDX + 0x24]          ; 00477a69
    FMUL float ptr [ECX]                ; 00477a6c
    FADDP                               ; 00477a6e
    FLD float ptr [EDX + 0x2c]          ; 00477a70
    FMUL float ptr [ECX + 0x8]          ; 00477a73
    FADDP                               ; 00477a76
    FST float ptr [ESP]                 ; 00477a78
    FLDZ                                ; 00477a7b
    FCOMPP                              ; 00477a7d
    FNSTSW AX                           ; 00477a7f
    SAHF                                ; 00477a81
    JNC 0x00477bde                      ; 00477a82
        ;   XREF to: 00477bde (CONDITIONAL_JUMP)  ; LAB_00477bde
    FLD float ptr [EDX + 0x24]          ; 00477a88
    FMUL float ptr [EBX]                ; 00477a8b
    FADD float ptr [EDX + 0x30]         ; 00477a8d
    FLD float ptr [EDX + 0x28]          ; 00477a90
    FMUL float ptr [EBX + 0x4]          ; 00477a93
    FADDP                               ; 00477a96
    FLD float ptr [EDX + 0x2c]          ; 00477a98
    FMUL float ptr [EBX + 0x8]          ; 00477a9b
    FADDP                               ; 00477a9e
    FCHS                                ; 00477aa0
    FST float ptr [ESP + 0x4]           ; 00477aa2
    FLDZ                                ; 00477aa6
    FCOMPP                              ; 00477aa8
    FNSTSW AX                           ; 00477aaa
    SAHF                                ; 00477aac
    JA 0x00477bde                       ; 00477aad
        ;   XREF to: 00477bde (CONDITIONAL_JUMP)  ; LAB_00477bde
    FLD float ptr [ESP + 0x4]           ; 00477ab3
    FCOMP float ptr [ESP]               ; 00477ab7
    FNSTSW AX                           ; 00477aba
    SAHF                                ; 00477abc
    JA 0x00477bde                       ; 00477abd
        ;   XREF to: 00477bde (CONDITIONAL_JUMP)  ; LAB_00477bde
    FLD float ptr [ESP + 0x4]           ; 00477ac3
    FDIV float ptr [ESP]                ; 00477ac7
    FST float ptr [ESP + 0x4]           ; 00477aca
    FMUL float ptr [ECX]                ; 00477ace
    FLD float ptr [ESP + 0x4]           ; 00477ad0
    FMUL float ptr [ECX + 0x4]          ; 00477ad4
    FLD float ptr [ESP + 0x4]           ; 00477ad7
    FMUL float ptr [ECX + 0x8]          ; 00477adb
    MOV EAX,dword ptr [EDX + 0x34]      ; 00477ade
    FXCH ST2                            ; 00477ae1
    FADD float ptr [EBX]                ; 00477ae3
    FXCH                                ; 00477ae5
    FADD float ptr [EBX + 0x4]          ; 00477ae7
    FXCH ST2                            ; 00477aea
    FADD float ptr [EBX + 0x8]          ; 00477aec
    FXCH                                ; 00477aef
    FSTP float ptr [ESP + 0x10]         ; 00477af1
    FXCH                                ; 00477af5
    FSTP float ptr [ESP + 0x14]         ; 00477af7
    FSTP float ptr [ESP + 0x18]         ; 00477afb
    CMP EAX,0x1                         ; 00477aff
    JNC 0x00477c48                      ; 00477b02
        ;   XREF to: 00477c48 (CONDITIONAL_JUMP)  ; LAB_00477c48
    TEST EAX,EAX                        ; 00477b08
    JNZ 0x00477b5e                      ; 00477b0a
        ;   XREF to: 00477b5e (CONDITIONAL_JUMP)  ; LAB_00477b5e
    FLD float ptr [ESP + 0x14]          ; 00477b0c
    FLD float ptr [ESP + 0x18]          ; 00477b10
    FLD float ptr [EDX + 0x10]          ; 00477b14
    FLD float ptr [EDX + 0x1c]          ; 00477b17
    FLD float ptr [EDX + 0x14]          ; 00477b1a
    FLD float ptr [EDX + 0x20]          ; 00477b1d
    FXCH ST5                            ; 00477b20
    FSUB float ptr [EDX + 0x4]          ; 00477b22
    FXCH ST3                            ; 00477b25
    FSUB float ptr [EDX + 0x4]          ; 00477b27
    FXCH ST2                            ; 00477b2a
    FSUB float ptr [EDX + 0x4]          ; 00477b2c
    FXCH ST4                            ; 00477b2f
        ;   Label: LAB_00477b2f
    FSUB float ptr [EDX + 0x8]          ; 00477b31
    FXCH                                ; 00477b34
    FSUB float ptr [EDX + 0x8]          ; 00477b36
    FXCH ST5                            ; 00477b39
    FSUB float ptr [EDX + 0x8]          ; 00477b3b
    FXCH ST2                            ; 00477b3e
        ;   Label: LAB_00477b3e
    FSTP float ptr [ESP + 0x20]         ; 00477b40
    FXCH ST3                            ; 00477b44
    FSTP float ptr [ESP + 0x24]         ; 00477b46
    FXCH ST2                            ; 00477b4a
    FSTP float ptr [ESP + 0x38]         ; 00477b4c
    FXCH ST2                            ; 00477b50
    FSTP float ptr [ESP + 0x34]         ; 00477b52
    FSTP float ptr [ESP + 0x1c]         ; 00477b56
    FSTP float ptr [ESP + 0x28]         ; 00477b5a
    FLD float ptr [ESP + 0x1c]          ; 00477b5e
        ;   Label: LAB_00477b5e
    FLD float ptr [ESP + 0x20]          ; 00477b62
    FMUL ST1                            ; 00477b66
    FLD float ptr [ESP + 0x24]          ; 00477b68
    FLD float ptr [ESP + 0x34]          ; 00477b6c
    FMUL ST1                            ; 00477b70
    FSUBP ST2,ST0                       ; 00477b72
    FLD1                                ; 00477b74
    FDIVRP ST2,ST0                      ; 00477b76
    FLD float ptr [ESP + 0x28]          ; 00477b78
    FMULP ST3                           ; 00477b7c
    FMUL float ptr [ESP + 0x38]         ; 00477b7e
    FSUBP ST2,ST0                       ; 00477b82
    FSTP float ptr [ESP + 0x30]         ; 00477b84
    FMUL float ptr [ESP + 0x30]         ; 00477b88
    FST float ptr [ESP + 0x8]           ; 00477b8c
    FLDZ                                ; 00477b90
    FCOMPP                              ; 00477b92
    FNSTSW AX                           ; 00477b94
    SAHF                                ; 00477b96
    JA 0x00477bde                       ; 00477b97
        ;   XREF to: 00477bde (CONDITIONAL_JUMP)  ; LAB_00477bde
    FLD float ptr [ESP + 0x20]          ; 00477b99
    FMUL float ptr [ESP + 0x38]         ; 00477b9d
    FLD float ptr [ESP + 0x34]          ; 00477ba1
    FMUL float ptr [ESP + 0x28]         ; 00477ba5
    FSUBP                               ; 00477ba9
    FMUL float ptr [ESP + 0x30]         ; 00477bab
    FST float ptr [ESP + 0xc]           ; 00477baf
    FLDZ                                ; 00477bb3
    FCOMPP                              ; 00477bb5
    FNSTSW AX                           ; 00477bb7
    SAHF                                ; 00477bb9
    JA 0x00477bde                       ; 00477bba
        ;   XREF to: 00477bde (CONDITIONAL_JUMP)  ; LAB_00477bde
    FLD float ptr [ESP + 0x8]           ; 00477bbc
    FADD float ptr [ESP + 0xc]          ; 00477bc0
    FLD1                                ; 00477bc4
    FCOMPP                              ; 00477bc6
    FNSTSW AX                           ; 00477bc8
    SAHF                                ; 00477bca
    JC 0x00477bde                       ; 00477bcb
        ;   XREF to: 00477bde (CONDITIONAL_JUMP)  ; LAB_00477bde
    MOV EAX,dword ptr [ESP + 0x4]       ; 00477bcd
    MOV dword ptr [ESP + 0x2c],EAX      ; 00477bd1
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00477bd5
    MOV ESP,EBP                         ; 00477bd9
    POP EBP                             ; 00477bdb
    POP EBX                             ; 00477bdc
    RET                                 ; 00477bdd
    MOV dword ptr [ESP + 0x2c],0xbf800000 ; 00477bde
        ;   Label: LAB_00477bde
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00477be6
    MOV ESP,EBP                         ; 00477bea
    POP EBP                             ; 00477bec
    POP EBX                             ; 00477bed
    RET                                 ; 00477bee
    FLD float ptr [ESP + 0x10]          ; 00477bef
        ;   Label: LAB_00477bef
    FLD float ptr [ESP + 0x18]          ; 00477bf3
    FLD float ptr [EDX + 0xc]           ; 00477bf7
    FLD float ptr [EDX + 0x18]          ; 00477bfa
    FLD float ptr [EDX + 0x14]          ; 00477bfd
    FLD float ptr [EDX + 0x20]          ; 00477c00
    FXCH ST5                            ; 00477c03
    FSUB float ptr [EDX]                ; 00477c05
    FXCH ST3                            ; 00477c07
    FSUB float ptr [EDX]                ; 00477c09
    FXCH ST2                            ; 00477c0b
    FSUB float ptr [EDX]                ; 00477c0d
    JMP 0x00477b2f                      ; 00477c0f
        ;   XREF to: 00477b2f (UNCONDITIONAL_JUMP)  ; LAB_00477b2f
    FLD float ptr [ESP + 0x10]          ; 00477c14
        ;   Label: LAB_00477c14
    FLD float ptr [ESP + 0x14]          ; 00477c18
    FLD float ptr [EDX + 0xc]           ; 00477c1c
    FLD float ptr [EDX + 0x18]          ; 00477c1f
    FLD float ptr [EDX + 0x10]          ; 00477c22
    FLD float ptr [EDX + 0x1c]          ; 00477c25
    FXCH ST5                            ; 00477c28
    FSUB float ptr [EDX]                ; 00477c2a
    FXCH ST3                            ; 00477c2c
    FSUB float ptr [EDX]                ; 00477c2e
    FXCH ST2                            ; 00477c30
    FSUB float ptr [EDX]                ; 00477c32
    FXCH ST4                            ; 00477c34
    FSUB float ptr [EDX + 0x4]          ; 00477c36
    FXCH                                ; 00477c39
    FSUB float ptr [EDX + 0x4]          ; 00477c3b
    FXCH ST5                            ; 00477c3e
    FSUB float ptr [EDX + 0x4]          ; 00477c40
    JMP 0x00477b3e                      ; 00477c43
        ;   XREF to: 00477b3e (UNCONDITIONAL_JUMP)  ; LAB_00477b3e
    JBE 0x00477bef                      ; 00477c48
        ;   XREF to: 00477bef (CONDITIONAL_JUMP)  ; LAB_00477bef
        ;   Label: LAB_00477c48
    CMP EAX,0x2                         ; 00477c4a
    JZ 0x00477c14                       ; 00477c4d
        ;   XREF to: 00477c14 (CONDITIONAL_JUMP)  ; LAB_00477c14
    JMP 0x00477b5e                      ; 00477c4f
        ;   XREF to: 00477b5e (UNCONDITIONAL_JUMP)  ; LAB_00477b5e

