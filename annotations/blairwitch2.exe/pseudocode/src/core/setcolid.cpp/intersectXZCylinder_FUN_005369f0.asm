; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_setcolid_cpp_intersectXZCylinder_FUN_005369f0(SIntersectXZCylinder *cylinder,float obstacle_x,float obstacle_y,SCollisionInfo *collision_info)
;
; Parameters:
; SIntersectXZCylinder * Stack[0x4]:4   cylinder
; float            Stack[0x8]:4   obstacle_x
; float            Stack[0xc]:4   obstacle_y
; SCollisionInfo * Stack[0x10]:4   collision_info
;
; Referenced Globals:
;   undefined4 DAT_005e5dbd
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005369f0
        ;   Label: core_setcolid.cpp_intersectXZCylinder_FUN_005369f0
    PUSH EBP                            ; 005369f1
    MOV EBP,ESP                         ; 005369f2
    SUB ESP,0xc0                        ; 005369f4
    AND ESP,0xfffffff8                  ; 005369fa
    MOV EDX,dword ptr [EBP + 0xc]       ; 005369fd
    MOV ECX,dword ptr [EBP + 0x18]      ; 00536a00
    FLD float ptr [EDX + 0x24]          ; 00536a03
    FCOMP float ptr [ECX + 0x14]        ; 00536a06
    FNSTSW AX                           ; 00536a09
    SAHF                                ; 00536a0b
    JBE 0x00536a9c                      ; 00536a0c
        ;   XREF to: 00536a9c (CONDITIONAL_JUMP)  ; LAB_00536a9c
    FLD float ptr [EDX + 0x28]          ; 00536a12
    FCOMP float ptr [ECX + 0x18]        ; 00536a15
    FNSTSW AX                           ; 00536a18
    SAHF                                ; 00536a1a
    JNC 0x00536a9c                      ; 00536a1b
        ;   XREF to: 00536a9c (CONDITIONAL_JUMP)  ; LAB_00536a9c
    FLD float ptr [EBP + 0x10]          ; 00536a21
    FSUB float ptr [EDX + 0x10]         ; 00536a24
    FST double ptr [ESP + 0x78]         ; 00536a27
    FMUL double ptr [ESP + 0x78]        ; 00536a2b
    FLD float ptr [ECX + 0x1c]          ; 00536a2f
    FLD float ptr [EBP + 0x14]          ; 00536a32
    FSUB float ptr [EDX + 0x14]         ; 00536a35
    FXCH                                ; 00536a38
    FADD float ptr [EDX + 0x20]         ; 00536a3a
    FXCH                                ; 00536a3d
    FST double ptr [ESP + 0x30]         ; 00536a3f
    FMUL double ptr [ESP + 0x30]        ; 00536a43
    FXCH                                ; 00536a47
    FST double ptr [ESP + 0x48]         ; 00536a49
    FMUL double ptr [ESP + 0x48]        ; 00536a4d
    FXCH                                ; 00536a51
    FADDP ST2,ST0                       ; 00536a53
    FSTP double ptr [ESP + 0x58]        ; 00536a55
    FST double ptr [ESP + 0x20]         ; 00536a59
    FCOMP double ptr [ESP + 0x58]       ; 00536a5d
    FNSTSW AX                           ; 00536a61
    SAHF                                ; 00536a63
    JNC 0x00536ad2                      ; 00536a64
        ;   XREF to: 00536ad2 (CONDITIONAL_JUMP)  ; LAB_00536ad2
    FLD double ptr [ESP + 0x20]         ; 00536a66
    FSQRT                               ; 00536a6a
    FSUB double ptr [ESP + 0x48]        ; 00536a6c
    FST double ptr [ESP + 0x70]         ; 00536a70
    FCOMP double ptr [0x005e5dbd]       ; 00536a74 | DAT_005e5dbd
    FNSTSW AX                           ; 00536a7a
    SAHF                                ; 00536a7c
    JBE 0x00536a91                      ; 00536a7d
        ;   XREF to: 00536a91 (CONDITIONAL_JUMP)  ; LAB_00536a91
    MOV ECX,0xd2f1a9fc                  ; 00536a7f
    MOV EBX,0xbf50624d                  ; 00536a84
    MOV dword ptr [ESP + 0x70],ECX      ; 00536a89
    MOV dword ptr [ESP + 0x74],EBX      ; 00536a8d
    FLD float ptr [EDX]                 ; 00536a91
        ;   Label: LAB_00536a91
    FCOMP double ptr [ESP + 0x70]       ; 00536a93
    FNSTSW AX                           ; 00536a97
    SAHF                                ; 00536a99
    JA 0x00536aa3                       ; 00536a9a
        ;   XREF to: 00536aa3 (CONDITIONAL_JUMP)  ; LAB_00536aa3
    XOR EAX,EAX                         ; 00536a9c
        ;   Label: LAB_00536a9c
    MOV ESP,EBP                         ; 00536a9e
    POP EBP                             ; 00536aa0
    POP EBX                             ; 00536aa1
    RET                                 ; 00536aa2
    FLD double ptr [ESP + 0x70]         ; 00536aa3
        ;   Label: LAB_00536aa3
    FLD double ptr [ESP + 0x78]         ; 00536aa7
    FLD double ptr [ESP + 0x30]         ; 00536aab
    MOV EAX,0x1                         ; 00536aaf
    FXCH                                ; 00536ab4
    FCHS                                ; 00536ab6
    MOV dword ptr [EDX + 0x8],0x0       ; 00536ab8
    FXCH                                ; 00536abf
    FCHS                                ; 00536ac1
    FXCH ST2                            ; 00536ac3
    FSTP float ptr [EDX]                ; 00536ac5
    FSTP float ptr [EDX + 0x4]          ; 00536ac7
    FSTP float ptr [EDX + 0xc]          ; 00536aca
    MOV ESP,EBP                         ; 00536acd
    POP EBP                             ; 00536acf
    POP EBX                             ; 00536ad0
    RET                                 ; 00536ad1
    FLD double ptr [ESP + 0x78]         ; 00536ad2
        ;   Label: LAB_00536ad2
    FLD float ptr [EDX + 0x34]          ; 00536ad6
    FSTP double ptr [ESP + 0x38]        ; 00536ad9
    FMUL double ptr [ESP + 0x38]        ; 00536add
    FLD float ptr [EDX + 0x38]          ; 00536ae1
    FSTP double ptr [ESP + 0x68]        ; 00536ae4
    FLD double ptr [ESP + 0x30]         ; 00536ae8
    FMUL double ptr [ESP + 0x68]        ; 00536aec
    FADDP                               ; 00536af0
    FLDZ                                ; 00536af2
    FXCH                                ; 00536af4
    FSTP double ptr [ESP + 0x60]        ; 00536af6
    FCOMP double ptr [ESP + 0x60]       ; 00536afa
    FNSTSW AX                           ; 00536afe
    SAHF                                ; 00536b00
    JNC 0x00536a9c                      ; 00536b01
        ;   XREF to: 00536a9c (CONDITIONAL_JUMP)  ; LAB_00536a9c
    FLD double ptr [ESP + 0x60]         ; 00536b03
    FLD double ptr [ESP + 0x38]         ; 00536b07
    FMUL ST1                            ; 00536b0b
    FLD double ptr [ESP + 0x68]         ; 00536b0d
    FMULP ST2                           ; 00536b11
    FLD float ptr [EDX + 0x10]          ; 00536b13
    FSTP double ptr [ESP + 0x10]        ; 00536b16
    FADD double ptr [ESP + 0x10]        ; 00536b1a
    FLD float ptr [EBP + 0x10]          ; 00536b1e
    FXCH                                ; 00536b21
    FSTP double ptr [ESP + 0x18]        ; 00536b23
    FSUB double ptr [ESP + 0x18]        ; 00536b27
    FMUL ST0                            ; 00536b2b
    FLD float ptr [EDX + 0x14]          ; 00536b2d
    FSTP double ptr [ESP + 0x8]         ; 00536b30
    FXCH                                ; 00536b34
    FADD double ptr [ESP + 0x8]         ; 00536b36
    FLD float ptr [EBP + 0x14]          ; 00536b3a
    FXCH                                ; 00536b3d
    FSTP double ptr [ESP]               ; 00536b3f
    FSUB double ptr [ESP]               ; 00536b42
    FMUL ST0                            ; 00536b45
    FADDP                               ; 00536b47
    FST double ptr [ESP + 0x28]         ; 00536b49
    FCOMP double ptr [ESP + 0x58]       ; 00536b4d
    FNSTSW AX                           ; 00536b51
    SAHF                                ; 00536b53
    JNC 0x00536a9c                      ; 00536b54
        ;   XREF to: 00536a9c (CONDITIONAL_JUMP)  ; LAB_00536a9c
    FLD float ptr [EDX + 0x18]          ; 00536b5a
    FST double ptr [ESP + 0x40]         ; 00536b5d
    FABS                                ; 00536b61
    FLD double ptr [ESP + 0x58]         ; 00536b63
    FSUB double ptr [ESP + 0x28]        ; 00536b67
    FSQRT                               ; 00536b6b
    FLD float ptr [EDX + 0x1c]          ; 00536b6d
    FST double ptr [ESP + 0x80]         ; 00536b70
    FABS                                ; 00536b77
    FLD double ptr [ESP + 0x38]         ; 00536b79
    FMUL ST2                            ; 00536b7d
    FLD double ptr [ESP + 0x68]         ; 00536b7f
    FMULP ST3                           ; 00536b83
    FLD double ptr [ESP]                ; 00536b85
    FLD double ptr [ESP + 0x18]         ; 00536b88
    FSUBRP ST2,ST0                      ; 00536b8c
    FSUBRP ST3,ST0                      ; 00536b8e
    FSTP double ptr [ESP + 0x90]        ; 00536b90
    FXCH                                ; 00536b97
    FSTP double ptr [ESP + 0x50]        ; 00536b99
    FCOMPP                              ; 00536b9d
    FNSTSW AX                           ; 00536b9f
    SAHF                                ; 00536ba1
    JNC 0x00536bf3                      ; 00536ba2
        ;   XREF to: 00536bf3 (CONDITIONAL_JUMP)  ; LAB_00536bf3
    FLD double ptr [ESP + 0x90]         ; 00536ba4
    FSUB double ptr [ESP + 0x10]        ; 00536bab
    FDIV double ptr [ESP + 0x40]        ; 00536baf
    FSTP double ptr [ESP + 0x88]        ; 00536bb3
        ;   Label: LAB_00536bb3
    FLDZ                                ; 00536bba
    FCOMP double ptr [ESP + 0x88]       ; 00536bbc
    FNSTSW AX                           ; 00536bc3
    SAHF                                ; 00536bc5
    JA 0x00536a9c                       ; 00536bc6
        ;   XREF to: 00536a9c (CONDITIONAL_JUMP)  ; LAB_00536a9c
    FLD float ptr [EDX]                 ; 00536bcc
    FCOMP double ptr [ESP + 0x88]       ; 00536bce
    FNSTSW AX                           ; 00536bd5
    SAHF                                ; 00536bd7
    JBE 0x00536a9c                      ; 00536bd8
        ;   XREF to: 00536a9c (CONDITIONAL_JUMP)  ; LAB_00536a9c
    FLD1                                ; 00536bde
    FCOMP double ptr [ESP + 0x88]       ; 00536be0
    FNSTSW AX                           ; 00536be7
    SAHF                                ; 00536be9
    JNC 0x00536c04                      ; 00536bea
        ;   XREF to: 00536c04 (CONDITIONAL_JUMP)  ; LAB_00536c04
    XOR EAX,EAX                         ; 00536bec
    MOV ESP,EBP                         ; 00536bee
    POP EBP                             ; 00536bf0
    POP EBX                             ; 00536bf1
    RET                                 ; 00536bf2
    FLD double ptr [ESP + 0x50]         ; 00536bf3
        ;   Label: LAB_00536bf3
    FSUB double ptr [ESP + 0x8]         ; 00536bf7
    FDIV double ptr [ESP + 0x80]        ; 00536bfb
    JMP 0x00536bb3                      ; 00536c02
        ;   XREF to: 00536bb3 (UNCONDITIONAL_JUMP)  ; LAB_00536bb3
    FLD double ptr [ESP + 0x88]         ; 00536c04
        ;   Label: LAB_00536c04
    FLD float ptr [EBP + 0x10]          ; 00536c0b
    FLD float ptr [EBP + 0x14]          ; 00536c0e
    MOV dword ptr [EDX + 0x8],0x0       ; 00536c11
    MOV EAX,0x1                         ; 00536c18
    FXCH ST2                            ; 00536c1d
    FSTP float ptr [EDX]                ; 00536c1f
    FSUBR double ptr [ESP + 0x90]       ; 00536c21
    FXCH                                ; 00536c28
    FSUBR double ptr [ESP + 0x50]       ; 00536c2a
    FXCH                                ; 00536c2e
    FSTP float ptr [EDX + 0x4]          ; 00536c30
    FSTP float ptr [EDX + 0xc]          ; 00536c33
    MOV ESP,EBP                         ; 00536c36
    POP EBP                             ; 00536c38
    POP EBX                             ; 00536c39
    RET                                 ; 00536c3a

