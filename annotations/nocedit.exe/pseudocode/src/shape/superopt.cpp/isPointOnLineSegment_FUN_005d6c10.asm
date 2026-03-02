; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_superopt_cpp_isPointOnLineSegment_FUN_005d6c10(CVector3d *point,CVector3d *seg_start,CVector3d *seg_end)
;
; Parameters:
; CVector3d *      Stack[0x4]:4   point
; CVector3d *      Stack[0x8]:4   seg_start
; CVector3d *      Stack[0xc]:4   seg_end
; Local Variables:
; undefined8       Stack[-0x100]:8  local_100
; undefined8       Stack[-0xf8]:8  local_f8
; undefined8       Stack[-0xf0]:8  local_f0
; undefined8       Stack[-0xe8]:8  local_e8
; undefined8       Stack[-0xe0]:8  local_e0
; undefined8       Stack[-0xd8]:8  local_d8
; undefined8       Stack[-0xd0]:8  local_d0
; undefined8       Stack[-0xc8]:8  local_c8
; undefined8       Stack[-0xc0]:8  local_c0
; undefined8       Stack[-0xb8]:8  local_b8
; undefined8       Stack[-0xb0]:8  local_b0
; undefined8       Stack[-0xa8]:8  local_a8
; undefined8       Stack[-0xa0]:8  local_a0
; undefined8       Stack[-0x98]:8  local_98
; undefined8       Stack[-0x90]:8  local_90
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined8       Stack[-0x40]:8  local_40
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_superopt.cpp_CObj_removeTJunctions_FUN_005d47b0 at 005d54e5
;
; Referenced Globals:
;   double DOUBLE_00654562 = -0.000100000000000000
;   double DOUBLE_0065456a = 0.000100000000000000
;
; Called Functions:
;   shape_superopt.cpp_areVectorsCollinear_FUN_005d66e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d6c10
        ;   Label: shape_superopt.cpp_isPointOnLineSegment_FUN_005d6c10
    PUSH ESI                            ; 005d6c11
    PUSH EDI                            ; 005d6c12
    PUSH EBP                            ; 005d6c13
    MOV EBP,ESP                         ; 005d6c14
    SUB ESP,0xf0                        ; 005d6c16
    AND ESP,0xfffffff8                  ; 005d6c1c
    MOV EBX,dword ptr [EBP + 0x14]      ; 005d6c1f
    MOV ECX,dword ptr [EBP + 0x18]      ; 005d6c22
    MOV EDX,dword ptr [EBP + 0x1c]      ; 005d6c25
    FLD double ptr [EBX]                ; 005d6c28
    FCOMP double ptr [ECX]              ; 005d6c2a
    FNSTSW AX                           ; 005d6c2c
    SAHF                                ; 005d6c2e
    JZ 0x005d6d9b                       ; 005d6c2f
        ;   XREF to: 005d6d9b (CONDITIONAL_JUMP)  ; LAB_005d6d9b
    FLD double ptr [EBX]                ; 005d6c35
        ;   Label: LAB_005d6c35
    FCOMP double ptr [EDX]              ; 005d6c37
    FNSTSW AX                           ; 005d6c39
    SAHF                                ; 005d6c3b
    JZ 0x005d6dc5                       ; 005d6c3c
        ;   XREF to: 005d6dc5 (CONDITIONAL_JUMP)  ; LAB_005d6dc5
    FLD double ptr [ECX]                ; 005d6c42
        ;   Label: LAB_005d6c42
    FCOMP double ptr [EDX]              ; 005d6c44
    FNSTSW AX                           ; 005d6c46
    SAHF                                ; 005d6c48
    JC 0x005d6def                       ; 005d6c49
        ;   XREF to: 005d6def (CONDITIONAL_JUMP)  ; LAB_005d6def
    MOV EAX,dword ptr [EDX]             ; 005d6c4f
    MOV dword ptr [ESP + 0x50],EAX      ; 005d6c51
    MOV EAX,dword ptr [EDX + 0x4]       ; 005d6c55
    MOV dword ptr [ESP + 0x54],EAX      ; 005d6c58
        ;   Label: LAB_005d6c58
    FLD double ptr [ESP + 0x50]         ; 005d6c5c
    FADD double ptr [0x00654562]        ; 005d6c60 | DOUBLE_00654562
    FLD double ptr [ECX + 0x8]          ; 005d6c66
    FXCH                                ; 005d6c69
    FSTP double ptr [ESP + 0x18]        ; 005d6c6b
    FCOMP double ptr [EDX + 0x8]        ; 005d6c6f
    FNSTSW AX                           ; 005d6c72
    SAHF                                ; 005d6c74
    JNC 0x005d6dfd                      ; 005d6c75
        ;   XREF to: 005d6dfd (CONDITIONAL_JUMP)  ; LAB_005d6dfd
    MOV EAX,dword ptr [ECX + 0x8]       ; 005d6c7b
    MOV dword ptr [ESP + 0x40],EAX      ; 005d6c7e
    MOV EAX,dword ptr [ECX + 0xc]       ; 005d6c82
    MOV dword ptr [ESP + 0x44],EAX      ; 005d6c85
        ;   Label: LAB_005d6c85
    FLD double ptr [ESP + 0x40]         ; 005d6c89
    FADD double ptr [0x00654562]        ; 005d6c8d | DOUBLE_00654562
    FLD double ptr [ECX + 0x10]         ; 005d6c93
    FXCH                                ; 005d6c96
    FSTP double ptr [ESP + 0x28]        ; 005d6c98
    FCOMP double ptr [EDX + 0x10]       ; 005d6c9c
    FNSTSW AX                           ; 005d6c9f
    SAHF                                ; 005d6ca1
    JNC 0x005d6e0c                      ; 005d6ca2
        ;   XREF to: 005d6e0c (CONDITIONAL_JUMP)  ; LAB_005d6e0c
    MOV EAX,dword ptr [ECX + 0x10]      ; 005d6ca8
    MOV dword ptr [ESP + 0x8],EAX       ; 005d6cab
    MOV EAX,dword ptr [ECX + 0x14]      ; 005d6caf
    MOV dword ptr [ESP + 0xc],EAX       ; 005d6cb2
        ;   Label: LAB_005d6cb2
    FLD double ptr [ESP + 0x8]          ; 005d6cb6
    FADD double ptr [0x00654562]        ; 005d6cba | DOUBLE_00654562
    FLD double ptr [ECX]                ; 005d6cc0
    FXCH                                ; 005d6cc2
    FSTP double ptr [ESP]               ; 005d6cc4
    FCOMP double ptr [EDX]              ; 005d6cc7
    FNSTSW AX                           ; 005d6cc9
    SAHF                                ; 005d6ccb
    JBE 0x005d6e1b                      ; 005d6ccc
        ;   XREF to: 005d6e1b (CONDITIONAL_JUMP)  ; LAB_005d6e1b
    MOV EAX,dword ptr [ECX]             ; 005d6cd2
    MOV dword ptr [ESP + 0x58],EAX      ; 005d6cd4
    MOV EAX,dword ptr [ECX + 0x4]       ; 005d6cd8
    MOV dword ptr [ESP + 0x5c],EAX      ; 005d6cdb
        ;   Label: LAB_005d6cdb
    FLD double ptr [ESP + 0x58]         ; 005d6cdf
    FADD double ptr [0x0065456a]        ; 005d6ce3 | DOUBLE_0065456a
    FLD double ptr [ECX + 0x8]          ; 005d6ce9
    FXCH                                ; 005d6cec
    FSTP double ptr [ESP + 0x20]        ; 005d6cee
    FCOMP double ptr [EDX + 0x8]        ; 005d6cf2
    FNSTSW AX                           ; 005d6cf5
    SAHF                                ; 005d6cf7
    JBE 0x005d6e29                      ; 005d6cf8
        ;   XREF to: 005d6e29 (CONDITIONAL_JUMP)  ; LAB_005d6e29
    MOV EAX,dword ptr [ECX + 0x8]       ; 005d6cfe
    MOV dword ptr [ESP + 0x10],EAX      ; 005d6d01
    MOV EAX,dword ptr [ECX + 0xc]       ; 005d6d05
    MOV dword ptr [ESP + 0x14],EAX      ; 005d6d08
        ;   Label: LAB_005d6d08
    FLD double ptr [ESP + 0x10]         ; 005d6d0c
    FADD double ptr [0x0065456a]        ; 005d6d10 | DOUBLE_0065456a
    FLD double ptr [ECX + 0x10]         ; 005d6d16
    FXCH                                ; 005d6d19
    FSTP double ptr [ESP + 0x30]        ; 005d6d1b
    FCOMP double ptr [EDX + 0x10]       ; 005d6d1f
    FNSTSW AX                           ; 005d6d22
    SAHF                                ; 005d6d24
    JBE 0x005d6e38                      ; 005d6d25
        ;   XREF to: 005d6e38 (CONDITIONAL_JUMP)  ; LAB_005d6e38
    MOV EAX,dword ptr [ECX + 0x10]      ; 005d6d2b
    MOV dword ptr [ESP + 0x48],EAX      ; 005d6d2e
    MOV EAX,dword ptr [ECX + 0x14]      ; 005d6d32
    MOV dword ptr [ESP + 0x4c],EAX      ; 005d6d35
        ;   Label: LAB_005d6d35
    FLD double ptr [ESP + 0x48]         ; 005d6d39
    FADD double ptr [0x0065456a]        ; 005d6d3d | DOUBLE_0065456a
    FLD double ptr [EBX]                ; 005d6d43
    FXCH                                ; 005d6d45
    FSTP double ptr [ESP + 0x38]        ; 005d6d47
    FCOMP double ptr [ESP + 0x18]       ; 005d6d4b
    FNSTSW AX                           ; 005d6d4f
    SAHF                                ; 005d6d51
    JC 0x005d6d92                       ; 005d6d52
        ;   XREF to: 005d6d92 (CONDITIONAL_JUMP)  ; LAB_005d6d92
    FLD double ptr [EBX]                ; 005d6d54
    FCOMP double ptr [ESP + 0x20]       ; 005d6d56
    FNSTSW AX                           ; 005d6d5a
    SAHF                                ; 005d6d5c
    JA 0x005d6d92                       ; 005d6d5d
        ;   XREF to: 005d6d92 (CONDITIONAL_JUMP)  ; LAB_005d6d92
    FLD double ptr [EBX + 0x8]          ; 005d6d5f
    FCOMP double ptr [ESP + 0x28]       ; 005d6d62
    FNSTSW AX                           ; 005d6d66
    SAHF                                ; 005d6d68
    JC 0x005d6d92                       ; 005d6d69
        ;   XREF to: 005d6d92 (CONDITIONAL_JUMP)  ; LAB_005d6d92
    FLD double ptr [EBX + 0x8]          ; 005d6d6b
    FCOMP double ptr [ESP + 0x30]       ; 005d6d6e
    FNSTSW AX                           ; 005d6d72
    SAHF                                ; 005d6d74
    JA 0x005d6d92                       ; 005d6d75
        ;   XREF to: 005d6d92 (CONDITIONAL_JUMP)  ; LAB_005d6d92
    FLD double ptr [EBX + 0x10]         ; 005d6d77
    FCOMP double ptr [ESP]              ; 005d6d7a
    FNSTSW AX                           ; 005d6d7d
    SAHF                                ; 005d6d7f
    JC 0x005d6d92                       ; 005d6d80
        ;   XREF to: 005d6d92 (CONDITIONAL_JUMP)  ; LAB_005d6d92
    FLD double ptr [EBX + 0x10]         ; 005d6d82
    FCOMP double ptr [ESP + 0x38]       ; 005d6d85
    FNSTSW AX                           ; 005d6d89
    SAHF                                ; 005d6d8b
    JBE 0x005d6e47                      ; 005d6d8c
        ;   XREF to: 005d6e47 (CONDITIONAL_JUMP)  ; LAB_005d6e47
    XOR EAX,EAX                         ; 005d6d92
        ;   Label: LAB_005d6d92
    MOV ESP,EBP                         ; 005d6d94
    POP EBP                             ; 005d6d96
    POP EDI                             ; 005d6d97
    POP ESI                             ; 005d6d98
    POP EBX                             ; 005d6d99
    RET                                 ; 005d6d9a
    FLD double ptr [EBX + 0x8]          ; 005d6d9b
        ;   Label: LAB_005d6d9b
    FCOMP double ptr [ECX + 0x8]        ; 005d6d9e
    FNSTSW AX                           ; 005d6da1
    SAHF                                ; 005d6da3
    JNZ 0x005d6c35                      ; 005d6da4
        ;   XREF to: 005d6c35 (CONDITIONAL_JUMP)  ; LAB_005d6c35
    FLD double ptr [EBX + 0x10]         ; 005d6daa
    FCOMP double ptr [ECX + 0x10]       ; 005d6dad
    FNSTSW AX                           ; 005d6db0
    SAHF                                ; 005d6db2
    JNZ 0x005d6c35                      ; 005d6db3
        ;   XREF to: 005d6c35 (CONDITIONAL_JUMP)  ; LAB_005d6c35
    MOV EAX,0x1                         ; 005d6db9
    MOV ESP,EBP                         ; 005d6dbe
    POP EBP                             ; 005d6dc0
    POP EDI                             ; 005d6dc1
    POP ESI                             ; 005d6dc2
    POP EBX                             ; 005d6dc3
    RET                                 ; 005d6dc4
    FLD double ptr [EBX + 0x8]          ; 005d6dc5
        ;   Label: LAB_005d6dc5
    FCOMP double ptr [EDX + 0x8]        ; 005d6dc8
    FNSTSW AX                           ; 005d6dcb
    SAHF                                ; 005d6dcd
    JNZ 0x005d6c42                      ; 005d6dce
        ;   XREF to: 005d6c42 (CONDITIONAL_JUMP)  ; LAB_005d6c42
    FLD double ptr [EBX + 0x10]         ; 005d6dd4
    FCOMP double ptr [EDX + 0x10]       ; 005d6dd7
    FNSTSW AX                           ; 005d6dda
    SAHF                                ; 005d6ddc
    JNZ 0x005d6c42                      ; 005d6ddd
        ;   XREF to: 005d6c42 (CONDITIONAL_JUMP)  ; LAB_005d6c42
    MOV EAX,0x1                         ; 005d6de3
    MOV ESP,EBP                         ; 005d6de8
    POP EBP                             ; 005d6dea
    POP EDI                             ; 005d6deb
    POP ESI                             ; 005d6dec
    POP EBX                             ; 005d6ded
    RET                                 ; 005d6dee
    MOV EAX,dword ptr [ECX]             ; 005d6def
        ;   Label: LAB_005d6def
    MOV dword ptr [ESP + 0x50],EAX      ; 005d6df1
    MOV EAX,dword ptr [ECX + 0x4]       ; 005d6df5
    JMP 0x005d6c58                      ; 005d6df8
        ;   XREF to: 005d6c58 (UNCONDITIONAL_JUMP)  ; LAB_005d6c58
    MOV EAX,dword ptr [EDX + 0x8]       ; 005d6dfd
        ;   Label: LAB_005d6dfd
    MOV dword ptr [ESP + 0x40],EAX      ; 005d6e00
    MOV EAX,dword ptr [EDX + 0xc]       ; 005d6e04
    JMP 0x005d6c85                      ; 005d6e07
        ;   XREF to: 005d6c85 (UNCONDITIONAL_JUMP)  ; LAB_005d6c85
    MOV EAX,dword ptr [EDX + 0x10]      ; 005d6e0c
        ;   Label: LAB_005d6e0c
    MOV dword ptr [ESP + 0x8],EAX       ; 005d6e0f
    MOV EAX,dword ptr [EDX + 0x14]      ; 005d6e13
    JMP 0x005d6cb2                      ; 005d6e16
        ;   XREF to: 005d6cb2 (UNCONDITIONAL_JUMP)  ; LAB_005d6cb2
    MOV EAX,dword ptr [EDX]             ; 005d6e1b
        ;   Label: LAB_005d6e1b
    MOV dword ptr [ESP + 0x58],EAX      ; 005d6e1d
    MOV EAX,dword ptr [EDX + 0x4]       ; 005d6e21
    JMP 0x005d6cdb                      ; 005d6e24
        ;   XREF to: 005d6cdb (UNCONDITIONAL_JUMP)  ; LAB_005d6cdb
    MOV EAX,dword ptr [EDX + 0x8]       ; 005d6e29
        ;   Label: LAB_005d6e29
    MOV dword ptr [ESP + 0x10],EAX      ; 005d6e2c
    MOV EAX,dword ptr [EDX + 0xc]       ; 005d6e30
    JMP 0x005d6d08                      ; 005d6e33
        ;   XREF to: 005d6d08 (UNCONDITIONAL_JUMP)  ; LAB_005d6d08
    MOV EAX,dword ptr [EDX + 0x10]      ; 005d6e38
        ;   Label: LAB_005d6e38
    MOV dword ptr [ESP + 0x48],EAX      ; 005d6e3b
    MOV EAX,dword ptr [EDX + 0x14]      ; 005d6e3f
    JMP 0x005d6d35                      ; 005d6e42
        ;   XREF to: 005d6d35 (UNCONDITIONAL_JUMP)  ; LAB_005d6d35
    FLD double ptr [EBX]                ; 005d6e47
        ;   Label: LAB_005d6e47
    FLD double ptr [EBX + 0x8]          ; 005d6e49
    FLD double ptr [EBX + 0x10]         ; 005d6e4c
    LEA EDI,[ESP + 0xa8]                ; 005d6e4f
    LEA ESI,[ESP + 0x60]                ; 005d6e56
    FXCH ST2                            ; 005d6e5a
    FSUB double ptr [ECX]               ; 005d6e5c
    FXCH                                ; 005d6e5e
    FSUB double ptr [ECX + 0x8]         ; 005d6e60
    FXCH ST2                            ; 005d6e63
    FSUB double ptr [ECX + 0x10]        ; 005d6e65
    FXCH                                ; 005d6e68
    FSTP double ptr [ESP + 0x60]        ; 005d6e6a
    FXCH                                ; 005d6e6e
    FSTP double ptr [ESP + 0x68]        ; 005d6e70
    MOV ECX,0x6                         ; 005d6e74
    FSTP double ptr [ESP + 0x70]        ; 005d6e79
    MOVSD.REP ES:EDI,ESI                ; 005d6e7d
    MOV EAX,dword ptr [ESP + 0xa8]      ; 005d6e7f
    MOV dword ptr [ESP + 0x78],EAX      ; 005d6e86
    MOV EAX,dword ptr [ESP + 0xac]      ; 005d6e8a
    MOV dword ptr [ESP + 0x7c],EAX      ; 005d6e91
    MOV EAX,dword ptr [ESP + 0xb0]      ; 005d6e95
    MOV dword ptr [ESP + 0x80],EAX      ; 005d6e9c
    MOV EAX,dword ptr [ESP + 0xb4]      ; 005d6ea3
    MOV dword ptr [ESP + 0x84],EAX      ; 005d6eaa
    MOV EAX,dword ptr [ESP + 0xb8]      ; 005d6eb1
    MOV ECX,0x6                         ; 005d6eb8
    MOV dword ptr [ESP + 0x88],EAX      ; 005d6ebd
    MOV EAX,dword ptr [ESP + 0xbc]      ; 005d6ec4
    LEA EDI,[ESP + 0x90]                ; 005d6ecb
    MOV dword ptr [ESP + 0x8c],EAX      ; 005d6ed2
    LEA ESI,[ESP + 0xc0]                ; 005d6ed9
    FLD double ptr [EBX]                ; 005d6ee0
    FLD double ptr [EBX + 0x8]          ; 005d6ee2
    FLD double ptr [EBX + 0x10]         ; 005d6ee5
    FXCH ST2                            ; 005d6ee8
    FSUB double ptr [EDX]               ; 005d6eea
    FXCH                                ; 005d6eec
    FSUB double ptr [EDX + 0x8]         ; 005d6eee
    FXCH ST2                            ; 005d6ef1
    FSUB double ptr [EDX + 0x10]        ; 005d6ef3
    FXCH                                ; 005d6ef6
    FSTP double ptr [ESP + 0xc0]        ; 005d6ef8
    FXCH                                ; 005d6eff
    FSTP double ptr [ESP + 0xc8]        ; 005d6f01
    FSTP double ptr [ESP + 0xd0]        ; 005d6f08
    MOVSD.REP ES:EDI,ESI                ; 005d6f0f
    MOV EAX,dword ptr [ESP + 0x90]      ; 005d6f11
    MOV dword ptr [ESP + 0xd8],EAX      ; 005d6f18
    MOV EAX,dword ptr [ESP + 0x94]      ; 005d6f1f
    MOV dword ptr [ESP + 0xdc],EAX      ; 005d6f26
    MOV EAX,dword ptr [ESP + 0x98]      ; 005d6f2d
    MOV dword ptr [ESP + 0xe0],EAX      ; 005d6f34
    MOV EAX,dword ptr [ESP + 0x9c]      ; 005d6f3b
    MOV dword ptr [ESP + 0xe4],EAX      ; 005d6f42
    MOV EAX,dword ptr [ESP + 0xa0]      ; 005d6f49
    MOV dword ptr [ESP + 0xe8],EAX      ; 005d6f50
    MOV EAX,dword ptr [ESP + 0xa4]      ; 005d6f57
    MOV dword ptr [ESP + 0xec],EAX      ; 005d6f5e
    LEA EAX,[ESP + 0xd8]                ; 005d6f65
    PUSH EAX                            ; 005d6f6c
    LEA EAX,[ESP + 0x7c]                ; 005d6f6d
    PUSH EAX                            ; 005d6f71
    CALL shape_superopt.cpp_areVectorsCollinear_FUN_005d66e0 ; 005d6f72
        ;   XREF to: 005d66e0 (UNCONDITIONAL_CALL)  ; int shape_superopt.cpp_areVectorsCollinear_FUN_005d66e0(CVector3d * vec1, CVector3d * vec2)
    ADD ESP,0x8                         ; 005d6f77
    MOV ESP,EBP                         ; 005d6f7a
    POP EBP                             ; 005d6f7c
    POP EDI                             ; 005d6f7d
    POP ESI                             ; 005d6f7e
    POP EBX                             ; 005d6f7f
    RET                                 ; 005d6f80

