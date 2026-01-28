; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl shape_superopt_cpp_segmentsIntersect2D_FUN_005d5bb0 (CVector2d *point_a,CVector2d *point_b,CVector2d *point_c,CVector2d *point_d)
;
; Parameters:
; CVector2d *      Stack[0x4]:4   point_a
; CVector2d *      Stack[0x8]:4   point_b
; CVector2d *      Stack[0xc]:4   point_c
; CVector2d *      Stack[0x10]:4   point_d
; Local Variables:
; undefined8       Stack[-0x48]:8  local_48
; undefined8       Stack[-0x40]:8  local_40
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
;
; XREF[2]:
;   shape_superopt.cpp_CPoly_hasEdgeIntersection_FUN_005d1390 at 005d17a1
;   shape_superopt.cpp_segmentIntersectsPolygon2D_FUN_005d5de0 at 005d5e34
;
; Referenced Globals:
;   double DOUBLE_0065453a = 1.00000000000000E-10
;   double DOUBLE_00654542 = 0.999999999900000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d5bb0
        ;   Label: shape_superopt.cpp_segmentsIntersect2D_FUN_005d5bb0
    PUSH ESI                            ; 005d5bb1
    PUSH EBP                            ; 005d5bb2
    MOV EBP,ESP                         ; 005d5bb3
    SUB ESP,0x38                        ; 005d5bb5
    AND ESP,0xfffffff8                  ; 005d5bb8
    MOV ECX,dword ptr [EBP + 0x10]      ; 005d5bbb
    MOV EBX,dword ptr [EBP + 0x14]      ; 005d5bbe
    MOV EDX,dword ptr [EBP + 0x18]      ; 005d5bc1
    MOV ESI,dword ptr [EBP + 0x1c]      ; 005d5bc4
    FLD double ptr [ECX]                ; 005d5bc7
    FCOMP double ptr [EDX]              ; 005d5bc9
    FNSTSW AX                           ; 005d5bcb
    SAHF                                ; 005d5bcd
    JNC 0x005d5bef                      ; 005d5bce
        ;   XREF to: 005d5bef (CONDITIONAL_JUMP)  ; LAB_005d5bef
    FLD double ptr [EBX]                ; 005d5bd0
    FCOMP double ptr [EDX]              ; 005d5bd2
    FNSTSW AX                           ; 005d5bd4
    SAHF                                ; 005d5bd6
    JNC 0x005d5bef                      ; 005d5bd7
        ;   XREF to: 005d5bef (CONDITIONAL_JUMP)  ; LAB_005d5bef
    FLD double ptr [ECX]                ; 005d5bd9
    FCOMP double ptr [ESI]              ; 005d5bdb
    FNSTSW AX                           ; 005d5bdd
    SAHF                                ; 005d5bdf
    JNC 0x005d5bef                      ; 005d5be0
        ;   XREF to: 005d5bef (CONDITIONAL_JUMP)  ; LAB_005d5bef
    FLD double ptr [EBX]                ; 005d5be2
    FCOMP double ptr [ESI]              ; 005d5be4
    FNSTSW AX                           ; 005d5be6
    SAHF                                ; 005d5be8
    JC 0x005d5da1                       ; 005d5be9
        ;   XREF to: 005d5da1 (CONDITIONAL_JUMP)  ; LAB_005d5da1
    FLD double ptr [ECX]                ; 005d5bef
        ;   Label: LAB_005d5bef
    FCOMP double ptr [EDX]              ; 005d5bf1
    FNSTSW AX                           ; 005d5bf3
    SAHF                                ; 005d5bf5
    JBE 0x005d5c17                      ; 005d5bf6
        ;   XREF to: 005d5c17 (CONDITIONAL_JUMP)  ; LAB_005d5c17
    FLD double ptr [EBX]                ; 005d5bf8
    FCOMP double ptr [EDX]              ; 005d5bfa
    FNSTSW AX                           ; 005d5bfc
    SAHF                                ; 005d5bfe
    JBE 0x005d5c17                      ; 005d5bff
        ;   XREF to: 005d5c17 (CONDITIONAL_JUMP)  ; LAB_005d5c17
    FLD double ptr [ECX]                ; 005d5c01
    FCOMP double ptr [ESI]              ; 005d5c03
    FNSTSW AX                           ; 005d5c05
    SAHF                                ; 005d5c07
    JBE 0x005d5c17                      ; 005d5c08
        ;   XREF to: 005d5c17 (CONDITIONAL_JUMP)  ; LAB_005d5c17
    FLD double ptr [EBX]                ; 005d5c0a
    FCOMP double ptr [ESI]              ; 005d5c0c
    FNSTSW AX                           ; 005d5c0e
    SAHF                                ; 005d5c10
    JA 0x005d5da1                       ; 005d5c11
        ;   XREF to: 005d5da1 (CONDITIONAL_JUMP)  ; LAB_005d5da1
    FLD double ptr [ECX + 0x8]          ; 005d5c17
        ;   Label: LAB_005d5c17
    FCOMP double ptr [EDX + 0x8]        ; 005d5c1a
    FNSTSW AX                           ; 005d5c1d
    SAHF                                ; 005d5c1f
    JNC 0x005d5c47                      ; 005d5c20
        ;   XREF to: 005d5c47 (CONDITIONAL_JUMP)  ; LAB_005d5c47
    FLD double ptr [EBX + 0x8]          ; 005d5c22
    FCOMP double ptr [EDX + 0x8]        ; 005d5c25
    FNSTSW AX                           ; 005d5c28
    SAHF                                ; 005d5c2a
    JNC 0x005d5c47                      ; 005d5c2b
        ;   XREF to: 005d5c47 (CONDITIONAL_JUMP)  ; LAB_005d5c47
    FLD double ptr [ECX + 0x8]          ; 005d5c2d
    FCOMP double ptr [ESI + 0x8]        ; 005d5c30
    FNSTSW AX                           ; 005d5c33
    SAHF                                ; 005d5c35
    JNC 0x005d5c47                      ; 005d5c36
        ;   XREF to: 005d5c47 (CONDITIONAL_JUMP)  ; LAB_005d5c47
    FLD double ptr [EBX + 0x8]          ; 005d5c38
    FCOMP double ptr [ESI + 0x8]        ; 005d5c3b
    FNSTSW AX                           ; 005d5c3e
    SAHF                                ; 005d5c40
    JC 0x005d5da1                       ; 005d5c41
        ;   XREF to: 005d5da1 (CONDITIONAL_JUMP)  ; LAB_005d5da1
    FLD double ptr [ECX + 0x8]          ; 005d5c47
        ;   Label: LAB_005d5c47
    FCOMP double ptr [EDX + 0x8]        ; 005d5c4a
    FNSTSW AX                           ; 005d5c4d
    SAHF                                ; 005d5c4f
    JBE 0x005d5c77                      ; 005d5c50
        ;   XREF to: 005d5c77 (CONDITIONAL_JUMP)  ; LAB_005d5c77
    FLD double ptr [EBX + 0x8]          ; 005d5c52
    FCOMP double ptr [EDX + 0x8]        ; 005d5c55
    FNSTSW AX                           ; 005d5c58
    SAHF                                ; 005d5c5a
    JBE 0x005d5c77                      ; 005d5c5b
        ;   XREF to: 005d5c77 (CONDITIONAL_JUMP)  ; LAB_005d5c77
    FLD double ptr [ECX + 0x8]          ; 005d5c5d
    FCOMP double ptr [ESI + 0x8]        ; 005d5c60
    FNSTSW AX                           ; 005d5c63
    SAHF                                ; 005d5c65
    JBE 0x005d5c77                      ; 005d5c66
        ;   XREF to: 005d5c77 (CONDITIONAL_JUMP)  ; LAB_005d5c77
    FLD double ptr [EBX + 0x8]          ; 005d5c68
    FCOMP double ptr [ESI + 0x8]        ; 005d5c6b
    FNSTSW AX                           ; 005d5c6e
    SAHF                                ; 005d5c70
    JA 0x005d5da1                       ; 005d5c71
        ;   XREF to: 005d5da1 (CONDITIONAL_JUMP)  ; LAB_005d5da1
    FLD double ptr [ESI + 0x8]          ; 005d5c77
        ;   Label: LAB_005d5c77
    FSUB double ptr [EDX + 0x8]         ; 005d5c7a
    FLD double ptr [EBX]                ; 005d5c7d
    FSUB double ptr [ECX]               ; 005d5c7f
    FMULP                               ; 005d5c81
    FLD double ptr [EBX + 0x8]          ; 005d5c83
    FSUB double ptr [ECX + 0x8]         ; 005d5c86
    FLD double ptr [ESI]                ; 005d5c89
    FSUB double ptr [EDX]               ; 005d5c8b
    FMULP                               ; 005d5c8d
    FSUBP                               ; 005d5c8f
    FLDZ                                ; 005d5c91
    FXCH                                ; 005d5c93
    FSTP double ptr [ESP + 0x18]        ; 005d5c95
    FCOMP double ptr [ESP + 0x18]       ; 005d5c99
    FNSTSW AX                           ; 005d5c9d
    SAHF                                ; 005d5c9f
    JA 0x005d5da9                       ; 005d5ca0
        ;   XREF to: 005d5da9 (CONDITIONAL_JUMP)  ; LAB_005d5da9
    MOV EAX,dword ptr [ESP + 0x18]      ; 005d5ca6
    MOV dword ptr [ESP + 0x10],EAX      ; 005d5caa
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005d5cae
    MOV dword ptr [ESP + 0x14],EAX      ; 005d5cb2
    FLD double ptr [ESP + 0x10]         ; 005d5cb6
        ;   Label: LAB_005d5cb6
    FCOMP double ptr [0x0065453a]       ; 005d5cba | DOUBLE_0065453a
    FNSTSW AX                           ; 005d5cc0
    SAHF                                ; 005d5cc2
    JC 0x005d5da1                       ; 005d5cc3
        ;   XREF to: 005d5da1 (CONDITIONAL_JUMP)  ; LAB_005d5da1
    FLD double ptr [ECX + 0x8]          ; 005d5cc9
    FLD double ptr [ESI]                ; 005d5ccc
    FSUB double ptr [EDX]               ; 005d5cce
    FXCH                                ; 005d5cd0
    FSUB double ptr [EDX + 0x8]         ; 005d5cd2
    FXCH                                ; 005d5cd5
    FMUL ST1                            ; 005d5cd7
    FLD double ptr [ESI + 0x8]          ; 005d5cd9
    FSUB double ptr [EDX + 0x8]         ; 005d5cdc
    FLD double ptr [ECX]                ; 005d5cdf
    FSUB double ptr [EDX]               ; 005d5ce1
    FXCH                                ; 005d5ce3
    FMUL ST1                            ; 005d5ce5
    FSUBP ST2,ST0                       ; 005d5ce7
    FLD1                                ; 005d5ce9
    FDIV double ptr [ESP + 0x18]        ; 005d5ceb
    FLD double ptr [EBX]                ; 005d5cef
    FSUB double ptr [ECX]               ; 005d5cf1
    FMULP ST4                           ; 005d5cf3
    FLD double ptr [EBX + 0x8]          ; 005d5cf5
    FSUB double ptr [ECX + 0x8]         ; 005d5cf8
    FMULP ST2                           ; 005d5cfb
    FXCH                                ; 005d5cfd
    FSUBP ST3,ST0                       ; 005d5cff
    FXCH                                ; 005d5d01
    FMUL ST1                            ; 005d5d03
    FXCH ST2                            ; 005d5d05
    FMULP                               ; 005d5d07
    FLDZ                                ; 005d5d09
    FXCH ST2                            ; 005d5d0b
    FSTP double ptr [ESP + 0x28]        ; 005d5d0d
    FSTP double ptr [ESP + 0x20]        ; 005d5d11
    FCOMP double ptr [ESP + 0x28]       ; 005d5d15
    FNSTSW AX                           ; 005d5d19
    SAHF                                ; 005d5d1b
    JA 0x005d5db8                       ; 005d5d1c
        ;   XREF to: 005d5db8 (CONDITIONAL_JUMP)  ; LAB_005d5db8
    MOV EAX,dword ptr [ESP + 0x28]      ; 005d5d22
    MOV dword ptr [ESP + 0x8],EAX       ; 005d5d26
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005d5d2a
    MOV dword ptr [ESP + 0xc],EAX       ; 005d5d2e
    FLD double ptr [ESP + 0x8]          ; 005d5d32
        ;   Label: LAB_005d5d32
    FCOMP double ptr [0x0065453a]       ; 005d5d36 | DOUBLE_0065453a
    FNSTSW AX                           ; 005d5d3c
    SAHF                                ; 005d5d3e
    JC 0x005d5da1                       ; 005d5d3f
        ;   XREF to: 005d5da1 (CONDITIONAL_JUMP)  ; LAB_005d5da1
    FLDZ                                ; 005d5d41
    FCOMP double ptr [ESP + 0x20]       ; 005d5d43
    FNSTSW AX                           ; 005d5d47
    SAHF                                ; 005d5d49
    JA 0x005d5dc7                       ; 005d5d4a
        ;   XREF to: 005d5dc7 (CONDITIONAL_JUMP)  ; LAB_005d5dc7
    MOV EAX,dword ptr [ESP + 0x20]      ; 005d5d50
    MOV dword ptr [ESP],EAX             ; 005d5d54
    MOV EAX,dword ptr [ESP + 0x24]      ; 005d5d57
    MOV dword ptr [ESP + 0x4],EAX       ; 005d5d5b
    FLD double ptr [ESP]                ; 005d5d5f
        ;   Label: LAB_005d5d5f
    FCOMP double ptr [0x0065453a]       ; 005d5d62 | DOUBLE_0065453a
    FNSTSW AX                           ; 005d5d68
    SAHF                                ; 005d5d6a
    JC 0x005d5da1                       ; 005d5d6b
        ;   XREF to: 005d5da1 (CONDITIONAL_JUMP)  ; LAB_005d5da1
    FLDZ                                ; 005d5d6d
    FCOMP double ptr [ESP + 0x28]       ; 005d5d6f
    FNSTSW AX                           ; 005d5d73
    SAHF                                ; 005d5d75
    JA 0x005d5da1                       ; 005d5d76
        ;   XREF to: 005d5da1 (CONDITIONAL_JUMP)  ; LAB_005d5da1
    FLDZ                                ; 005d5d78
    FCOMP double ptr [ESP + 0x20]       ; 005d5d7a
    FNSTSW AX                           ; 005d5d7e
    SAHF                                ; 005d5d80
    JA 0x005d5da1                       ; 005d5d81
        ;   XREF to: 005d5da1 (CONDITIONAL_JUMP)  ; LAB_005d5da1
    FLD double ptr [ESP + 0x28]         ; 005d5d83
    FCOMP double ptr [0x00654542]       ; 005d5d87 | DOUBLE_00654542
    FNSTSW AX                           ; 005d5d8d
    SAHF                                ; 005d5d8f
    JA 0x005d5da1                       ; 005d5d90
        ;   XREF to: 005d5da1 (CONDITIONAL_JUMP)  ; LAB_005d5da1
    FLD double ptr [ESP + 0x20]         ; 005d5d92
    FCOMP double ptr [0x00654542]       ; 005d5d96 | DOUBLE_00654542
    FNSTSW AX                           ; 005d5d9c
    SAHF                                ; 005d5d9e
    JBE 0x005d5dd2                      ; 005d5d9f
        ;   XREF to: 005d5dd2 (CONDITIONAL_JUMP)  ; LAB_005d5dd2
    XOR EAX,EAX                         ; 005d5da1
        ;   Label: LAB_005d5da1
    MOV ESP,EBP                         ; 005d5da3
    POP EBP                             ; 005d5da5
    POP ESI                             ; 005d5da6
    POP EBX                             ; 005d5da7
    RET                                 ; 005d5da8
    FLD double ptr [ESP + 0x18]         ; 005d5da9
        ;   Label: LAB_005d5da9
    FCHS                                ; 005d5dad
    FSTP double ptr [ESP + 0x10]        ; 005d5daf
    JMP 0x005d5cb6                      ; 005d5db3
        ;   XREF to: 005d5cb6 (UNCONDITIONAL_JUMP)  ; LAB_005d5cb6
    FLD double ptr [ESP + 0x28]         ; 005d5db8
        ;   Label: LAB_005d5db8
    FCHS                                ; 005d5dbc
    FSTP double ptr [ESP + 0x8]         ; 005d5dbe
    JMP 0x005d5d32                      ; 005d5dc2
        ;   XREF to: 005d5d32 (UNCONDITIONAL_JUMP)  ; LAB_005d5d32
    FLD double ptr [ESP + 0x20]         ; 005d5dc7
        ;   Label: LAB_005d5dc7
    FCHS                                ; 005d5dcb
    FSTP double ptr [ESP]               ; 005d5dcd
    JMP 0x005d5d5f                      ; 005d5dd0
        ;   XREF to: 005d5d5f (UNCONDITIONAL_JUMP)  ; LAB_005d5d5f
    MOV EAX,0x1                         ; 005d5dd2
        ;   Label: LAB_005d5dd2
    MOV ESP,EBP                         ; 005d5dd7
    POP EBP                             ; 005d5dd9
    POP ESI                             ; 005d5dda
    POP EBX                             ; 005d5ddb
    RET                                 ; 005d5ddc

