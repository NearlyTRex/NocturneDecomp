; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_dcube_cpp_intersectTriangleWithXZCylinder_FUN_00455a30(STriangleRef *triangle,SIntersectXZCylinder *cylinder)
;
; Parameters:
; STriangleRef *   Stack[0x4]:4   triangle
; SIntersectXZCylinder * Stack[0x8]:4   cylinder
; Local Variables:
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[1]:
;   core_dcube.cpp_CDemonCube_testCylinderCollision_FUN_00457a90 at 00457ab3
;
; Called Functions:
;   core_dcube.cpp_intersectXZCylinder_FUN_004556b0
;   core_dcube.cpp_intersectXZCylinderWithHeight_FUN_00455990
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00455a30
        ;   Label: core_dcube.cpp_intersectTriangleWithXZCylinder_FUN_00455a30
    PUSH ESI                            ; 00455a31
    PUSH EDI                            ; 00455a32
    PUSH EBP                            ; 00455a33
    SUB ESP,0x74                        ; 00455a34
    MOV ESI,dword ptr [ESP + 0x88]      ; 00455a37
    MOV EBX,dword ptr [ESP + 0x8c]      ; 00455a3e
    FLD float ptr [ESI + 0xc]           ; 00455a45
    FMUL float ptr [EBX + 0x18]         ; 00455a48
    FLD float ptr [ESI + 0x14]          ; 00455a4b
    FMUL float ptr [EBX + 0x1c]         ; 00455a4e
    FADDP                               ; 00455a51
    FLDZ                                ; 00455a53
    FCOMPP                              ; 00455a55
    FNSTSW AX                           ; 00455a57
    SAHF                                ; 00455a59
    JNC 0x00455e33                      ; 00455a5a
        ;   XREF to: 00455e33 (CONDITIONAL_JUMP)  ; LAB_00455e33
    MOV EBP,dword ptr [ESI]             ; 00455a60
    FLD float ptr [EBP + 0x8]           ; 00455a62
    FMUL float ptr [EBX + 0x1c]         ; 00455a65
    MOV EDI,dword ptr [ESI + 0x4]       ; 00455a68
    MOV EAX,dword ptr [ESI + 0x8]       ; 00455a6b
    FLD float ptr [EDI + 0x8]           ; 00455a6e
    FMUL float ptr [EBX + 0x1c]         ; 00455a71
    FLD float ptr [EAX + 0x8]           ; 00455a74
    FMUL float ptr [EBX + 0x1c]         ; 00455a77
    FLD float ptr [EBP]                 ; 00455a7a
    FMUL float ptr [EBX + 0x18]         ; 00455a7d
    FLD float ptr [EDI]                 ; 00455a80
    FMUL float ptr [EBX + 0x18]         ; 00455a82
    FLD float ptr [EAX]                 ; 00455a85
    FMUL float ptr [EBX + 0x18]         ; 00455a87
    MOV dword ptr [ESP + 0x50],EAX      ; 00455a8a
    FXCH ST2                            ; 00455a8e
    FADDP ST5,ST0                       ; 00455a90
    FADDP ST3,ST0                       ; 00455a92
    FADDP                               ; 00455a94
    FXCH ST2                            ; 00455a96
    FSTP float ptr [ESP + 0x54]         ; 00455a98
    FSTP float ptr [ESP + 0x64]         ; 00455a9c
    FSTP float ptr [ESP + 0x4c]         ; 00455aa0
    FLD float ptr [ESP + 0x54]          ; 00455aa4
    FCOMP float ptr [ESP + 0x64]        ; 00455aa8
    FNSTSW AX                           ; 00455aac
    SAHF                                ; 00455aae
    JA 0x00455e3d                       ; 00455aaf
        ;   XREF to: 00455e3d (CONDITIONAL_JUMP)  ; LAB_00455e3d
    FLD float ptr [ESP + 0x64]          ; 00455ab5
        ;   Label: LAB_00455ab5
    FCOMP float ptr [ESP + 0x4c]        ; 00455ab9
    FNSTSW AX                           ; 00455abd
    SAHF                                ; 00455abf
    JBE 0x00455ae4                      ; 00455ac0
        ;   XREF to: 00455ae4 (CONDITIONAL_JUMP)  ; LAB_00455ae4
    MOV EAX,dword ptr [ESP + 0x64]      ; 00455ac2
    MOV dword ptr [ESP + 0x40],EAX      ; 00455ac6
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00455aca
    MOV dword ptr [ESP + 0x64],EAX      ; 00455ace
    MOV EAX,dword ptr [ESP + 0x40]      ; 00455ad2
    MOV dword ptr [ESP + 0x4c],EAX      ; 00455ad6
    MOV EAX,EDI                         ; 00455ada
    MOV EDI,dword ptr [ESP + 0x50]      ; 00455adc
    MOV dword ptr [ESP + 0x50],EAX      ; 00455ae0
    FLD float ptr [ESP + 0x54]          ; 00455ae4
        ;   Label: LAB_00455ae4
    FCOMP float ptr [ESP + 0x64]        ; 00455ae8
    FNSTSW AX                           ; 00455aec
    SAHF                                ; 00455aee
    JBE 0x00455aff                      ; 00455aef
        ;   XREF to: 00455aff (CONDITIONAL_JUMP)  ; LAB_00455aff
    MOV EAX,dword ptr [ESP + 0x64]      ; 00455af1
    MOV dword ptr [ESP + 0x54],EAX      ; 00455af5
    MOV EAX,EBP                         ; 00455af9
    MOV EBP,EDI                         ; 00455afb
    MOV EDI,EAX                         ; 00455afd
    FLD float ptr [ESP + 0x4c]          ; 00455aff
        ;   Label: LAB_00455aff
    FCOMP float ptr [EBX + 0x2c]        ; 00455b03
    FNSTSW AX                           ; 00455b06
    SAHF                                ; 00455b08
    JC 0x00455e33                       ; 00455b09
        ;   XREF to: 00455e33 (CONDITIONAL_JUMP)  ; LAB_00455e33
    FLD float ptr [ESP + 0x54]          ; 00455b0f
    FCOMP float ptr [EBX + 0x30]        ; 00455b13
    FNSTSW AX                           ; 00455b16
    SAHF                                ; 00455b18
    JA 0x00455e33                       ; 00455b19
        ;   XREF to: 00455e33 (CONDITIONAL_JUMP)  ; LAB_00455e33
    MOV EAX,dword ptr [ESI]             ; 00455b1f
    XOR EDX,EDX                         ; 00455b21
    FLD float ptr [EAX + 0x4]           ; 00455b23
    MOV dword ptr [ESP + 0x58],EDX      ; 00455b26
    FCOMP float ptr [EBX + 0x24]        ; 00455b2a
    FNSTSW AX                           ; 00455b2d
    SAHF                                ; 00455b2f
    JC 0x00455b3a                       ; 00455b30
        ;   XREF to: 00455b3a (CONDITIONAL_JUMP)  ; LAB_00455b3a
    MOV dword ptr [ESP + 0x58],0x1      ; 00455b32
    MOV EAX,dword ptr [ESI]             ; 00455b3a
        ;   Label: LAB_00455b3a
    FLD float ptr [EAX + 0x4]           ; 00455b3c
    FCOMP float ptr [EBX + 0x28]        ; 00455b3f
    FNSTSW AX                           ; 00455b42
    SAHF                                ; 00455b44
    JA 0x00455b4c                       ; 00455b45
        ;   XREF to: 00455b4c (CONDITIONAL_JUMP)  ; LAB_00455b4c
    OR byte ptr [ESP + 0x58],0x2        ; 00455b47
    XOR EAX,EAX                         ; 00455b4c
        ;   Label: LAB_00455b4c
    MOV dword ptr [ESP + 0x5c],EAX      ; 00455b4e
    MOV EAX,dword ptr [ESI + 0x4]       ; 00455b52
    FLD float ptr [EAX + 0x4]           ; 00455b55
    FCOMP float ptr [EBX + 0x24]        ; 00455b58
    FNSTSW AX                           ; 00455b5b
    SAHF                                ; 00455b5d
    JC 0x00455b68                       ; 00455b5e
        ;   XREF to: 00455b68 (CONDITIONAL_JUMP)  ; LAB_00455b68
    MOV dword ptr [ESP + 0x5c],0x1      ; 00455b60
    MOV EAX,dword ptr [ESI + 0x4]       ; 00455b68
        ;   Label: LAB_00455b68
    FLD float ptr [EAX + 0x4]           ; 00455b6b
    FCOMP float ptr [EBX + 0x28]        ; 00455b6e
    FNSTSW AX                           ; 00455b71
    SAHF                                ; 00455b73
    JA 0x00455b7b                       ; 00455b74
        ;   XREF to: 00455b7b (CONDITIONAL_JUMP)  ; LAB_00455b7b
    OR byte ptr [ESP + 0x5c],0x2        ; 00455b76
    MOV EAX,dword ptr [ESI + 0x8]       ; 00455b7b
        ;   Label: LAB_00455b7b
    XOR ECX,ECX                         ; 00455b7e
    FLD float ptr [EAX + 0x4]           ; 00455b80
    MOV dword ptr [ESP + 0x60],ECX      ; 00455b83
    FCOMP float ptr [EBX + 0x24]        ; 00455b87
    FNSTSW AX                           ; 00455b8a
    SAHF                                ; 00455b8c
    JC 0x00455b97                       ; 00455b8d
        ;   XREF to: 00455b97 (CONDITIONAL_JUMP)  ; LAB_00455b97
    MOV dword ptr [ESP + 0x60],0x1      ; 00455b8f
    MOV EAX,dword ptr [ESI + 0x8]       ; 00455b97
        ;   Label: LAB_00455b97
    FLD float ptr [EAX + 0x4]           ; 00455b9a
    FCOMP float ptr [EBX + 0x28]        ; 00455b9d
    FNSTSW AX                           ; 00455ba0
    SAHF                                ; 00455ba2
    JA 0x00455baa                       ; 00455ba3
        ;   XREF to: 00455baa (CONDITIONAL_JUMP)  ; LAB_00455baa
    OR byte ptr [ESP + 0x60],0x2        ; 00455ba5
    MOV EAX,dword ptr [ESP + 0x58]      ; 00455baa
        ;   Label: LAB_00455baa
    MOV EDX,dword ptr [ESP + 0x5c]      ; 00455bae
    MOV ECX,dword ptr [ESP + 0x60]      ; 00455bb2
    AND EAX,EDX                         ; 00455bb6
    TEST EAX,ECX                        ; 00455bb8
    JNZ 0x00455e33                      ; 00455bba
        ;   XREF to: 00455e33 (CONDITIONAL_JUMP)  ; LAB_00455e33
    FLDZ                                ; 00455bc0
    FCOMP float ptr [ESI + 0x10]        ; 00455bc2
    FNSTSW AX                           ; 00455bc5
    SAHF                                ; 00455bc7
    JA 0x00455cf6                       ; 00455bc8
        ;   XREF to: 00455cf6 (CONDITIONAL_JUMP)  ; LAB_00455cf6
    MOV EDX,dword ptr [ESP + 0x58]      ; 00455bce
    XOR EDX,dword ptr [ESP + 0x5c]      ; 00455bd2
    XOR EAX,EAX                         ; 00455bd6
    TEST DL,0x1                         ; 00455bd8
    JZ 0x00455c19                       ; 00455bdb
        ;   XREF to: 00455c19 (CONDITIONAL_JUMP)  ; LAB_00455c19
    MOV EDX,dword ptr [ESI + 0x4]       ; 00455bdd
    MOV EAX,dword ptr [ESI]             ; 00455be0
    FLD float ptr [EDX + 0x4]           ; 00455be2
    FSUB float ptr [EAX + 0x4]          ; 00455be5
    FLD float ptr [EDX]                 ; 00455be8
    FLD float ptr [EBX + 0x24]          ; 00455bea
    FSUB float ptr [EAX + 0x4]          ; 00455bed
    FXCH                                ; 00455bf0
    FSUB float ptr [EAX]                ; 00455bf2
    FXCH                                ; 00455bf4
    FDIVRP ST2,ST0                      ; 00455bf6
    FMUL ST1                            ; 00455bf8
    FADD float ptr [EAX]                ; 00455bfa
    FSTP float ptr [ESP + 0x18]         ; 00455bfc
    MOV EDX,dword ptr [ESI + 0x4]       ; 00455c00
    MOV EAX,dword ptr [ESI]             ; 00455c03
    FLD float ptr [EDX + 0x8]           ; 00455c05
    FSUB float ptr [EAX + 0x8]          ; 00455c08
    FMULP                               ; 00455c0b
    FADD float ptr [EAX + 0x8]          ; 00455c0d
    FSTP float ptr [ESP + 0xc]          ; 00455c10
    MOV EAX,0x1                         ; 00455c14
    MOV EDX,dword ptr [ESP + 0x5c]      ; 00455c19
        ;   Label: LAB_00455c19
    XOR EDX,dword ptr [ESP + 0x60]      ; 00455c1d
    TEST DL,0x1                         ; 00455c21
    JZ 0x00455c70                       ; 00455c24
        ;   XREF to: 00455c70 (CONDITIONAL_JUMP)  ; LAB_00455c70
    MOV ECX,dword ptr [ESI + 0x8]       ; 00455c26
    MOV EDX,dword ptr [ESI + 0x4]       ; 00455c29
    FLD float ptr [ECX + 0x4]           ; 00455c2c
    FSUB float ptr [EDX + 0x4]          ; 00455c2f
    FLD float ptr [ECX]                 ; 00455c32
    FLD float ptr [EBX + 0x24]          ; 00455c34
    FSUB float ptr [EDX + 0x4]          ; 00455c37
    FXCH                                ; 00455c3a
    FSUB float ptr [EDX]                ; 00455c3c
    FXCH                                ; 00455c3e
    FDIVRP ST2,ST0                      ; 00455c40
    FMUL ST1                            ; 00455c42
    FADD float ptr [EDX]                ; 00455c44
    FSTP float ptr [ESP + EAX*0x4 + 0x18] ; 00455c46
    MOV ECX,dword ptr [ESI + 0x8]       ; 00455c4a
    MOV dword ptr [ESP + 0x68],ECX      ; 00455c4d
    MOV ECX,dword ptr [ESI + 0x4]       ; 00455c51
    MOV dword ptr [ESP + 0x30],ECX      ; 00455c54
    MOV ECX,dword ptr [ESP + 0x68]      ; 00455c58
    FLD float ptr [ECX + 0x8]           ; 00455c5c
    MOV ECX,dword ptr [ESP + 0x30]      ; 00455c5f
    FSUB float ptr [ECX + 0x8]          ; 00455c63
    FMULP                               ; 00455c66
    FADD float ptr [ECX + 0x8]          ; 00455c68
    INC EAX                             ; 00455c6b
    FSTP float ptr [ESP + EAX*0x4 + 0x8] ; 00455c6c
    MOV EDX,dword ptr [ESP + 0x60]      ; 00455c70
        ;   Label: LAB_00455c70
    XOR EDX,dword ptr [ESP + 0x58]      ; 00455c74
    TEST DL,0x1                         ; 00455c78
    JZ 0x00455cc4                       ; 00455c7b
        ;   XREF to: 00455cc4 (CONDITIONAL_JUMP)  ; LAB_00455cc4
    MOV ECX,dword ptr [ESI]             ; 00455c7d
    MOV EDX,dword ptr [ESI + 0x8]       ; 00455c7f
    FLD float ptr [ECX + 0x4]           ; 00455c82
    FSUB float ptr [EDX + 0x4]          ; 00455c85
    FLD float ptr [ECX]                 ; 00455c88
    FLD float ptr [EBX + 0x24]          ; 00455c8a
    FSUB float ptr [EDX + 0x4]          ; 00455c8d
    FXCH                                ; 00455c90
    FSUB float ptr [EDX]                ; 00455c92
    FXCH                                ; 00455c94
    FDIVRP ST2,ST0                      ; 00455c96
    FMUL ST1                            ; 00455c98
    FADD float ptr [EDX]                ; 00455c9a
    LEA EDX,[EAX*0x4 + 0x0]             ; 00455c9c
    FSTP float ptr [ESP + EDX*0x1 + 0x18] ; 00455ca3
    MOV ECX,dword ptr [ESI]             ; 00455ca7
    MOV dword ptr [ESP + 0x68],EDX      ; 00455ca9
    MOV EDX,dword ptr [ESI + 0x8]       ; 00455cad
    FLD float ptr [ECX + 0x8]           ; 00455cb0
    FSUB float ptr [EDX + 0x8]          ; 00455cb3
    FMULP                               ; 00455cb6
    FADD float ptr [EDX + 0x8]          ; 00455cb8
    MOV EDX,dword ptr [ESP + 0x68]      ; 00455cbb
    INC EAX                             ; 00455cbf
    FSTP float ptr [ESP + EDX*0x1 + 0xc] ; 00455cc0
    CMP EAX,0x2                         ; 00455cc4
        ;   Label: LAB_00455cc4
    JL 0x00455cf6                       ; 00455cc7
        ;   XREF to: 00455cf6 (CONDITIONAL_JUMP)  ; LAB_00455cf6
    MOV EAX,dword ptr [ESP + 0x18]      ; 00455cc9
    MOV dword ptr [EBX + 0x3c],EAX      ; 00455ccd
    MOV EAX,dword ptr [ESP + 0xc]       ; 00455cd0
    MOV dword ptr [EBX + 0x40],EAX      ; 00455cd4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00455cd7
    MOV dword ptr [EBX + 0x44],EAX      ; 00455cdb
    MOV EAX,dword ptr [ESP + 0x10]      ; 00455cde
    PUSH EBX                            ; 00455ce2
    MOV dword ptr [EBX + 0x48],EAX      ; 00455ce3
    CALL core_dcube.cpp_intersectXZCylinder_FUN_004556b0 ; 00455ce6
        ;   XREF to: 004556b0 (UNCONDITIONAL_CALL)  ; int core_dcube.cpp_intersectXZCylinder_FUN_004556b0(SIntersectXZCylinder * cylinder)
    ADD ESP,0x4                         ; 00455ceb
    TEST EAX,EAX                        ; 00455cee
    JNZ 0x00455df4                      ; 00455cf0
        ;   XREF to: 00455df4 (CONDITIONAL_JUMP)  ; LAB_00455df4
    FLDZ                                ; 00455cf6
        ;   Label: LAB_00455cf6
    FCOMP float ptr [ESI + 0x10]        ; 00455cf8
    FNSTSW AX                           ; 00455cfb
    SAHF                                ; 00455cfd
    JC 0x00455ea0                       ; 00455cfe
        ;   XREF to: 00455ea0 (CONDITIONAL_JUMP)  ; LAB_00455ea0
    MOV EDX,dword ptr [ESP + 0x58]      ; 00455d04
    XOR EDX,dword ptr [ESP + 0x5c]      ; 00455d08
    XOR EAX,EAX                         ; 00455d0c
    TEST DL,0x2                         ; 00455d0e
    JNZ 0x00455e60                      ; 00455d11
        ;   XREF to: 00455e60 (CONDITIONAL_JUMP)  ; LAB_00455e60
    MOV EDX,dword ptr [ESP + 0x5c]      ; 00455d17
        ;   Label: LAB_00455d17
    XOR EDX,dword ptr [ESP + 0x60]      ; 00455d1b
    TEST DL,0x2                         ; 00455d1f
    JZ 0x00455d6c                       ; 00455d22
        ;   XREF to: 00455d6c (CONDITIONAL_JUMP)  ; LAB_00455d6c
    MOV ECX,dword ptr [ESI + 0x8]       ; 00455d24
    MOV EDX,dword ptr [ESI + 0x4]       ; 00455d27
    FLD float ptr [ECX + 0x4]           ; 00455d2a
    FSUB float ptr [EDX + 0x4]          ; 00455d2d
    FLD float ptr [ECX]                 ; 00455d30
    FLD float ptr [EBX + 0x28]          ; 00455d32
    FSUB float ptr [EDX + 0x4]          ; 00455d35
    FXCH                                ; 00455d38
    FSUB float ptr [EDX]                ; 00455d3a
    FXCH                                ; 00455d3c
    FDIVRP ST2,ST0                      ; 00455d3e
    FMUL ST1                            ; 00455d40
    FADD float ptr [EDX]                ; 00455d42
    LEA EDX,[EAX*0x4 + 0x0]             ; 00455d44
    FSTP float ptr [ESP + EDX*0x1 + 0x24] ; 00455d4b
    MOV ECX,dword ptr [ESI + 0x8]       ; 00455d4f
    MOV dword ptr [ESP + 0x68],EDX      ; 00455d52
    MOV EDX,dword ptr [ESI + 0x4]       ; 00455d56
    FLD float ptr [ECX + 0x8]           ; 00455d59
    FSUB float ptr [EDX + 0x8]          ; 00455d5c
    FMULP                               ; 00455d5f
    FADD float ptr [EDX + 0x8]          ; 00455d61
    MOV EDX,dword ptr [ESP + 0x68]      ; 00455d64
    INC EAX                             ; 00455d68
    FSTP float ptr [ESP + EDX*0x1]      ; 00455d69
    MOV EDX,dword ptr [ESP + 0x60]      ; 00455d6c
        ;   Label: LAB_00455d6c
    XOR EDX,dword ptr [ESP + 0x58]      ; 00455d70
    TEST DL,0x2                         ; 00455d74
    JZ 0x00455dbf                       ; 00455d77
        ;   XREF to: 00455dbf (CONDITIONAL_JUMP)  ; LAB_00455dbf
    MOV ECX,dword ptr [ESI]             ; 00455d79
    MOV EDX,dword ptr [ESI + 0x8]       ; 00455d7b
    FLD float ptr [ECX + 0x4]           ; 00455d7e
    FSUB float ptr [EDX + 0x4]          ; 00455d81
    FLD float ptr [ECX]                 ; 00455d84
    FLD float ptr [EBX + 0x28]          ; 00455d86
    FSUB float ptr [EDX + 0x4]          ; 00455d89
    FXCH                                ; 00455d8c
    FSUB float ptr [EDX]                ; 00455d8e
    FXCH                                ; 00455d90
    FDIVRP ST2,ST0                      ; 00455d92
    FMUL ST1                            ; 00455d94
    FADD float ptr [EDX]                ; 00455d96
    LEA EDX,[EAX*0x4 + 0x0]             ; 00455d98
    FSTP float ptr [ESP + EDX*0x1 + 0x24] ; 00455d9f
    MOV ECX,dword ptr [ESI]             ; 00455da3
    MOV dword ptr [ESP + 0x68],EDX      ; 00455da5
    MOV EDX,dword ptr [ESI + 0x8]       ; 00455da9
    FLD float ptr [ECX + 0x8]           ; 00455dac
    FSUB float ptr [EDX + 0x8]          ; 00455daf
    FMULP                               ; 00455db2
    FADD float ptr [EDX + 0x8]          ; 00455db4
    MOV EDX,dword ptr [ESP + 0x68]      ; 00455db7
    INC EAX                             ; 00455dbb
    FSTP float ptr [ESP + EDX*0x1]      ; 00455dbc
    CMP EAX,0x2                         ; 00455dbf
        ;   Label: LAB_00455dbf
    JL 0x00455ea0                       ; 00455dc2
        ;   XREF to: 00455ea0 (CONDITIONAL_JUMP)  ; LAB_00455ea0
    MOV EAX,dword ptr [ESP + 0x24]      ; 00455dc8
    MOV dword ptr [EBX + 0x3c],EAX      ; 00455dcc
    MOV EAX,dword ptr [ESP]             ; 00455dcf
    MOV dword ptr [EBX + 0x40],EAX      ; 00455dd2
    MOV EAX,dword ptr [ESP + 0x28]      ; 00455dd5
    MOV dword ptr [EBX + 0x44],EAX      ; 00455dd9
    MOV EAX,dword ptr [ESP + 0x4]       ; 00455ddc
    PUSH EBX                            ; 00455de0
    MOV dword ptr [EBX + 0x48],EAX      ; 00455de1
    CALL core_dcube.cpp_intersectXZCylinder_FUN_004556b0 ; 00455de4
        ;   XREF to: 004556b0 (UNCONDITIONAL_CALL)  ; int core_dcube.cpp_intersectXZCylinder_FUN_004556b0(SIntersectXZCylinder * cylinder)
    ADD ESP,0x4                         ; 00455de9
    TEST EAX,EAX                        ; 00455dec
    JZ 0x00455ea0                       ; 00455dee
        ;   XREF to: 00455ea0 (CONDITIONAL_JUMP)  ; LAB_00455ea0
    FLD float ptr [EBX + 0x18]          ; 00455df4
        ;   Label: LAB_00455df4
    FMUL float ptr [EBX + 0x4c]         ; 00455df7
    FLD float ptr [EBX + 0x1c]          ; 00455dfa
    FMUL float ptr [EBX + 0x4c]         ; 00455dfd
    FLD float ptr [EBX + 0x4c]          ; 00455e00
    MOV dword ptr [EBX + 0x8],0x0       ; 00455e03
    MOV EAX,0x1                         ; 00455e0a
    FSTP float ptr [EBX]                ; 00455e0f
    FXCH                                ; 00455e11
    FADD float ptr [EBX + 0x10]         ; 00455e13
    FXCH                                ; 00455e16
    FADD float ptr [EBX + 0x14]         ; 00455e18
    FLD float ptr [EBX + 0x54]          ; 00455e1b
    FLD float ptr [EBX + 0x58]          ; 00455e1e
    FSUBP ST2,ST0                       ; 00455e21
    FSUBP ST2,ST0                       ; 00455e23
    FSTP float ptr [EBX + 0xc]          ; 00455e25
    FSTP float ptr [EBX + 0x4]          ; 00455e28
    ADD ESP,0x74                        ; 00455e2b
    POP EBP                             ; 00455e2e
    POP EDI                             ; 00455e2f
    POP ESI                             ; 00455e30
    POP EBX                             ; 00455e31
    RET                                 ; 00455e32
    XOR EAX,EAX                         ; 00455e33
        ;   Label: LAB_00455e33
    ADD ESP,0x74                        ; 00455e35
    POP EBP                             ; 00455e38
    POP EDI                             ; 00455e39
    POP ESI                             ; 00455e3a
    POP EBX                             ; 00455e3b
    RET                                 ; 00455e3c
    MOV EAX,dword ptr [ESP + 0x54]      ; 00455e3d
        ;   Label: LAB_00455e3d
    MOV dword ptr [ESP + 0x34],EAX      ; 00455e41
    MOV EAX,dword ptr [ESP + 0x64]      ; 00455e45
    MOV dword ptr [ESP + 0x54],EAX      ; 00455e49
    MOV EAX,dword ptr [ESP + 0x34]      ; 00455e4d
    MOV dword ptr [ESP + 0x64],EAX      ; 00455e51
    MOV EAX,EBP                         ; 00455e55
    MOV EBP,EDI                         ; 00455e57
    MOV EDI,EAX                         ; 00455e59
    JMP 0x00455ab5                      ; 00455e5b
        ;   XREF to: 00455ab5 (UNCONDITIONAL_JUMP)  ; LAB_00455ab5
    MOV EDX,dword ptr [ESI + 0x4]       ; 00455e60
        ;   Label: LAB_00455e60
    MOV EAX,dword ptr [ESI]             ; 00455e63
    FLD float ptr [EDX + 0x4]           ; 00455e65
    FSUB float ptr [EAX + 0x4]          ; 00455e68
    FLD float ptr [EDX]                 ; 00455e6b
    FLD float ptr [EBX + 0x28]          ; 00455e6d
    FSUB float ptr [EAX + 0x4]          ; 00455e70
    FXCH                                ; 00455e73
    FSUB float ptr [EAX]                ; 00455e75
    FXCH                                ; 00455e77
    FDIVRP ST2,ST0                      ; 00455e79
    FMUL ST1                            ; 00455e7b
    FADD float ptr [EAX]                ; 00455e7d
    FSTP float ptr [ESP + 0x24]         ; 00455e7f
    MOV EDX,dword ptr [ESI + 0x4]       ; 00455e83
    MOV EAX,dword ptr [ESI]             ; 00455e86
    FLD float ptr [EDX + 0x8]           ; 00455e88
    FSUB float ptr [EAX + 0x8]          ; 00455e8b
    FMULP                               ; 00455e8e
    FADD float ptr [EAX + 0x8]          ; 00455e90
    FSTP float ptr [ESP]                ; 00455e93
    MOV EAX,0x1                         ; 00455e96
    JMP 0x00455d17                      ; 00455e9b
        ;   XREF to: 00455d17 (UNCONDITIONAL_JUMP)  ; LAB_00455d17
    PUSH EDI                            ; 00455ea0
        ;   Label: LAB_00455ea0
    PUSH EBP                            ; 00455ea1
    PUSH EBX                            ; 00455ea2
    CALL core_dcube.cpp_intersectXZCylinderWithHeight_FUN_00455990 ; 00455ea3
        ;   XREF to: 00455990 (UNCONDITIONAL_CALL)  ; int core_dcube.cpp_intersectXZCylinderWithHeight_FUN_00455990(SIntersectXZCylinder * cylinder, CVector3f * segment_start, CVector3f * segment_end)
    ADD ESP,0xc                         ; 00455ea8
    MOV EDI,dword ptr [ESP + 0x50]      ; 00455eab
    PUSH EDI                            ; 00455eaf
    PUSH EBP                            ; 00455eb0
    PUSH EBX                            ; 00455eb1
    MOV ESI,EAX                         ; 00455eb2
    CALL core_dcube.cpp_intersectXZCylinderWithHeight_FUN_00455990 ; 00455eb4
        ;   XREF to: 00455990 (UNCONDITIONAL_CALL)  ; int core_dcube.cpp_intersectXZCylinderWithHeight_FUN_00455990(SIntersectXZCylinder * cylinder, CVector3f * segment_start, CVector3f * segment_end)
    ADD ESP,0xc                         ; 00455eb9
    OR EAX,ESI                          ; 00455ebc
    ADD ESP,0x74                        ; 00455ebe
    POP EBP                             ; 00455ec1
    POP EDI                             ; 00455ec2
    POP ESI                             ; 00455ec3
    POP EBX                             ; 00455ec4
    RET                                 ; 00455ec5

