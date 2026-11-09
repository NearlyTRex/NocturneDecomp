; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl unkafter_dpart_cpp_FUN_00466d50(int *vertex_indices,int vertex_count)
;
; Parameters:
; int *            Stack[0x4]:4   vertex_indices
; int              Stack[0x8]:4   vertex_count
; Local Variables:
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160 at 0046b1ca
;   engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0046dbd0 at 0046dd61
;   engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_0046d960 at 0046db0c
;
; Referenced Globals:
;   undefined4 DAT_0060b014
;   undefined4 DAT_0060b01c
;   undefined4 DAT_0060b020
;   undefined4 DAT_0060b024
;   undefined4 DAT_0060b028
;   undefined4 DAT_0060b02c
;   undefined4 DAT_0060b030
;   undefined4 DAT_0060b034
;   undefined4 DAT_0060b038
;   undefined4 DAT_0060b03c
;   undefined4 DAT_0060b040
;   undefined4 DAT_007303f4
;   undefined4 DAT_007303fc
;   undefined4 DAT_01bdcfd4
;   undefined4 DAT_01bdcfd8
;   ... and 8 more
;
; Called Functions:
;   engine_prim.c_calculateTriangleWindingOrder_FUN_00515ac0
;   engine_special.cpp_drawPolygon2_FUN_00565c40
;   engine_special.cpp_FUN_00563257
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00466d50
        ;   Label: unkafter_dpart.cpp_FUN_00466d50
    PUSH ESI                            ; 00466d51
    PUSH EDI                            ; 00466d52
    PUSH EBP                            ; 00466d53
    SUB ESP,0x5c                        ; 00466d54
    MOV EBP,dword ptr [0x01bdcfd4]      ; 00466d57 | DAT_01bdcfd4
    CMP dword ptr [0x007303fc],0x0      ; 00466d5d | DAT_007303fc
    JNZ 0x00466de7                      ; 00466d64
        ;   XREF to: 00466de7 (CONDITIONAL_JUMP)  ; LAB_00466de7
    MOV ECX,dword ptr [0x01ed3198]      ; 00466d6a | DAT_01ed3198
        ;   Label: LAB_00466d6a
    MOV EBX,dword ptr [0x01c6cee8]      ; 00466d70 | DAT_01c6cee8
    INC ECX                             ; 00466d76
    MOV EBP,dword ptr [0x01bdcfd4]      ; 00466d77 | DAT_01bdcfd4
    MOV dword ptr [0x01ed3198],ECX      ; 00466d7d | DAT_01ed3198
    TEST EBX,EBX                        ; 00466d83
    JZ 0x00466e4f                       ; 00466d85
        ;   XREF to: 00466e4f (CONDITIONAL_JUMP)  ; LAB_00466e4f
    CMP dword ptr [0x007303f4],0x0      ; 00466d8b | DAT_007303f4
    JNZ 0x00466e4f                      ; 00466d92
        ;   XREF to: 00466e4f (CONDITIONAL_JUMP)  ; LAB_00466e4f
    MOV ECX,dword ptr [ESP + 0x74]      ; 00466d98
    XOR EBX,EBX                         ; 00466d9c
    TEST ECX,ECX                        ; 00466d9e
    JLE 0x00466dc0                      ; 00466da0
        ;   XREF to: 00466dc0 (CONDITIONAL_JUMP)  ; LAB_00466dc0
    MOV EAX,dword ptr [ESP + 0x70]      ; 00466da2
    IMUL EDX,dword ptr [EAX],0x30       ; 00466da6
        ;   Label: LAB_00466da6
    INC EBX                             ; 00466da9
    ADD EDX,0x60b014                    ; 00466daa | DAT_0060b014
    MOV dword ptr [ESP + EBX*0x4 + -0x4],EDX ; 00466db0
    MOV EDX,dword ptr [ESP + 0x74]      ; 00466db4
    ADD EAX,0x4                         ; 00466db8
    CMP EBX,EDX                         ; 00466dbb
    JL 0x00466da6                       ; 00466dbd
        ;   XREF to: 00466da6 (CONDITIONAL_JUMP)  ; LAB_00466da6
    NOP                                 ; 00466dbf
    MOV ECX,dword ptr [0x01c6e2b4]      ; 00466dc0 | DAT_01c6e2b4
        ;   Label: LAB_00466dc0
    PUSH ECX                            ; 00466dc6
    MOV EBX,dword ptr [ESP + 0x78]      ; 00466dc7
    PUSH EBX                            ; 00466dcb
    LEA EAX,[ESP + 0x8]                 ; 00466dcc
    PUSH EAX                            ; 00466dd0
    CALL engine_special.cpp_drawPolygon2_FUN_00565c40 ; 00466dd1
        ;   XREF to: 00565c40 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_drawPolygon2_FUN_00565c40()
    ADD ESP,0xc                         ; 00466dd6
    MOV EBP,dword ptr [0x01bdcfd4]      ; 00466dd9 | DAT_01bdcfd4
        ;   Label: LAB_00466dd9
    ADD ESP,0x5c                        ; 00466ddf
    POP EBP                             ; 00466de2
    POP EDI                             ; 00466de3
    POP ESI                             ; 00466de4
    POP EBX                             ; 00466de5
    RET                                 ; 00466de6
    MOV EDX,dword ptr [ESP + 0x70]      ; 00466de7
        ;   Label: LAB_00466de7
    MOV EDX,dword ptr [EDX + 0x8]       ; 00466deb
    LEA EAX,[EDX*0x4 + 0x0]             ; 00466dee
    SUB EAX,EDX                         ; 00466df5
    SHL EAX,0x4                         ; 00466df7
    MOV EDX,dword ptr [ESP + 0x70]      ; 00466dfa
    ADD EAX,0x60b014                    ; 00466dfe | DAT_0060b014
    MOV EDX,dword ptr [EDX + 0x4]       ; 00466e03
    PUSH EAX                            ; 00466e06
    LEA EAX,[EDX*0x4 + 0x0]             ; 00466e07
    SUB EAX,EDX                         ; 00466e0e
    SHL EAX,0x4                         ; 00466e10
    MOV EDX,dword ptr [ESP + 0x74]      ; 00466e13
    ADD EAX,0x60b014                    ; 00466e17 | DAT_0060b014
    MOV EDX,dword ptr [EDX]             ; 00466e1c
    PUSH EAX                            ; 00466e1e
    LEA EAX,[EDX*0x4 + 0x0]             ; 00466e1f
    SUB EAX,EDX                         ; 00466e26
    SHL EAX,0x4                         ; 00466e28
    ADD EAX,0x60b014                    ; 00466e2b | DAT_0060b014
    PUSH EAX                            ; 00466e30
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00515ac0 ; 00466e31
        ;   XREF to: 00515ac0 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_calculateTriangleWindingOrder_FUN_00515ac0()
    ADD ESP,0xc                         ; 00466e36
    TEST EAX,EAX                        ; 00466e39
    JNZ 0x00466d6a                      ; 00466e3b
        ;   XREF to: 00466d6a (CONDITIONAL_JUMP)  ; LAB_00466d6a
    MOV EBP,dword ptr [0x01bdcfd4]      ; 00466e41 | DAT_01bdcfd4
    ADD ESP,0x5c                        ; 00466e47
    POP EBP                             ; 00466e4a
    POP EDI                             ; 00466e4b
    POP ESI                             ; 00466e4c
    POP EBX                             ; 00466e4d
    RET                                 ; 00466e4e
    MOV EDI,0x4b0                       ; 00466e4f
        ;   Label: LAB_00466e4f
    XOR EBP,EBP                         ; 00466e54
    MOV EDX,dword ptr [ESP + 0x74]      ; 00466e56
    MOV dword ptr [0x01bdd4dc],EBP      ; 00466e5a | DAT_01bdd4dc
    MOV dword ptr [ESP + 0x48],EBP      ; 00466e60
    MOV dword ptr [0x01bdd4d8],EDI      ; 00466e64 | DAT_01bdd4d8
    TEST EDX,EDX                        ; 00466e6a
    JLE 0x00466eda                      ; 00466e6c
        ;   XREF to: 00466eda (CONDITIONAL_JUMP)  ; LAB_00466eda
    MOV EAX,dword ptr [ESP + 0x70]      ; 00466e6e
    MOV dword ptr [ESP + 0x44],EAX      ; 00466e72
    MOV EAX,dword ptr [ESP + 0x48]      ; 00466e76
        ;   Label: LAB_00466e76
    MOV EDX,dword ptr [ESP + 0x74]      ; 00466e7a
    INC EAX                             ; 00466e7e
    CMP EAX,EDX                         ; 00466e7f
    JL 0x00466e85                       ; 00466e81
        ;   XREF to: 00466e85 (CONDITIONAL_JUMP)  ; LAB_00466e85
    XOR EAX,EAX                         ; 00466e83
    MOV ECX,dword ptr [ESP + 0x70]      ; 00466e85
        ;   Label: LAB_00466e85
    SHL EAX,0x2                         ; 00466e89
    ADD EAX,ECX                         ; 00466e8c
    IMUL ECX,dword ptr [EAX],0x30       ; 00466e8e
    MOV EAX,dword ptr [ESP + 0x44]      ; 00466e91
    IMUL EBX,dword ptr [EAX],0x30       ; 00466e95
    ADD ECX,0x60b014                    ; 00466e98 | DAT_0060b014
    ADD EBX,0x60b014                    ; 00466e9e | DAT_0060b014
    MOV dword ptr [ESP + 0x50],ECX      ; 00466ea4
    MOV EDX,dword ptr [ECX + 0x14]      ; 00466ea8 | DAT_0060b028
    MOV EAX,dword ptr [EBX + 0x14]      ; 00466eab | DAT_0060b028
    SAR EDX,0x10                        ; 00466eae
    SAR EAX,0x10                        ; 00466eb1
    MOV ESI,EBX                         ; 00466eb4
    CMP EAX,EDX                         ; 00466eb6
    JNZ 0x004670c8                      ; 00466eb8
        ;   XREF to: 004670c8 (CONDITIONAL_JUMP)  ; LAB_004670c8
    MOV EBX,dword ptr [ESP + 0x44]      ; 00466ebe
        ;   Label: LAB_00466ebe
    MOV ESI,dword ptr [ESP + 0x48]      ; 00466ec2
    MOV EDI,dword ptr [ESP + 0x74]      ; 00466ec6
    ADD EBX,0x4                         ; 00466eca
    INC ESI                             ; 00466ecd
    MOV dword ptr [ESP + 0x44],EBX      ; 00466ece
    MOV dword ptr [ESP + 0x48],ESI      ; 00466ed2
    CMP ESI,EDI                         ; 00466ed6
    JL 0x00466e76                       ; 00466ed8
        ;   XREF to: 00466e76 (CONDITIONAL_JUMP)  ; LAB_00466e76
    MOV EBX,0x1bdcfd8                   ; 00466eda
        ;   Label: LAB_00466eda
    XOR EAX,EAX                         ; 00466edf
    MOV ESI,dword ptr [0x01bdd4d8]      ; 00466ee1 | DAT_01bdd4d8
    MOV [0x01bdd814],EAX                ; 00466ee7 | DAT_01bdd814
    TEST EBP,EBP                        ; 00466eec
    JLE 0x0046733d                      ; 00466eee
        ;   XREF to: 0046733d (CONDITIONAL_JUMP)  ; LAB_0046733d
    CMP ESI,dword ptr [EBX]             ; 00466ef4 | DAT_01bdcfd8 | DAT_01bdd028
        ;   Label: LAB_00466ef4
    JNZ 0x00467331                      ; 00466ef6
        ;   XREF to: 00467331 (CONDITIONAL_JUMP)  ; LAB_00467331
    TEST EBX,EBX                        ; 00466efc
    JZ 0x00467331                       ; 00466efe
        ;   XREF to: 00467331 (CONDITIONAL_JUMP)  ; LAB_00467331
    MOV dword ptr [ESP + 0x54],EBX      ; 00466f04 | DAT_01bdcfd8 | DAT_01bdd028
        ;   Label: LAB_00466f04
    MOV dword ptr [0x01bdcfd4],EBP      ; 00466f08 | DAT_01bdcfd4
    TEST EBX,EBX                        ; 00466f0e
    JZ 0x00466dd9                       ; 00466f10
        ;   XREF to: 00466dd9 (CONDITIONAL_JUMP)  ; LAB_00466dd9
    MOV EAX,0x1bdcfd8                   ; 00466f16
    MOV ECX,dword ptr [0x01bdd4d8]      ; 00466f1b | DAT_01bdd4d8
    XOR EDX,EDX                         ; 00466f21
    TEST EBP,EBP                        ; 00466f23
    JLE 0x00467350                      ; 00466f25
        ;   XREF to: 00467350 (CONDITIONAL_JUMP)  ; LAB_00467350
    CMP ECX,dword ptr [EAX]             ; 00466f2b | DAT_01bdcfd8 | DAT_01bdd028
        ;   Label: LAB_00466f2b
    JNZ 0x00467344                      ; 00466f2d
        ;   XREF to: 00467344 (CONDITIONAL_JUMP)  ; LAB_00467344
    CMP EAX,EBX                         ; 00466f33
    JZ 0x00467344                       ; 00466f35
        ;   XREF to: 00467344 (CONDITIONAL_JUMP)  ; LAB_00467344
    MOV dword ptr [ESP + 0x58],EAX      ; 00466f3b | DAT_01bdcfd8 | DAT_01bdd028
        ;   Label: LAB_00466f3b
    MOV dword ptr [0x01bdcfd4],EBP      ; 00466f3f | DAT_01bdcfd4
    TEST EAX,EAX                        ; 00466f45
    JZ 0x00466dd9                       ; 00466f47
        ;   XREF to: 00466dd9 (CONDITIONAL_JUMP)  ; LAB_00466dd9
    MOV EAX,[0x01bdd4d8]                ; 00466f4d | DAT_01bdd4d8
    MOV dword ptr [ESP + 0x4c],EAX      ; 00466f52
    MOV EDX,dword ptr [ESP + 0x54]      ; 00466f56
        ;   Label: LAB_00466f56
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00466f5a
    MOV ESI,dword ptr [EDX + 0x4]       ; 00466f5e
    MOV dword ptr [0x01bdcfd4],EBP      ; 00466f61 | DAT_01bdcfd4
    CMP EAX,ESI                         ; 00466f67
    JL 0x00466fa8                       ; 00466f69
        ;   XREF to: 00466fa8 (CONDITIONAL_JUMP)  ; LAB_00466fa8
    MOV ECX,dword ptr [ESP + 0x58]      ; 00466f6b
    MOV EBX,EAX                         ; 00466f6f
    MOV dword ptr [EDX],0xffffffff      ; 00466f71
    MOV EAX,0x1bdcfd8                   ; 00466f77
    XOR EDX,EDX                         ; 00466f7c
    TEST EBP,EBP                        ; 00466f7e
    JLE 0x00467363                      ; 00466f80
        ;   XREF to: 00467363 (CONDITIONAL_JUMP)  ; LAB_00467363
    CMP EBX,dword ptr [EAX]             ; 00466f86 | DAT_01bdcfd8 | DAT_01bdd028
        ;   Label: LAB_00466f86
    JNZ 0x00467357                      ; 00466f88
        ;   XREF to: 00467357 (CONDITIONAL_JUMP)  ; LAB_00467357
    CMP EAX,ECX                         ; 00466f8e
    JZ 0x00467357                       ; 00466f90
        ;   XREF to: 00467357 (CONDITIONAL_JUMP)  ; LAB_00467357
    MOV dword ptr [ESP + 0x54],EAX      ; 00466f96 | DAT_01bdcfd8 | DAT_01bdd028
        ;   Label: LAB_00466f96
    MOV dword ptr [0x01bdcfd4],EBP      ; 00466f9a | DAT_01bdcfd4
    TEST EAX,EAX                        ; 00466fa0
    JZ 0x00466dd9                       ; 00466fa2
        ;   XREF to: 00466dd9 (CONDITIONAL_JUMP)  ; LAB_00466dd9
    MOV EDX,dword ptr [ESP + 0x58]      ; 00466fa8
        ;   Label: LAB_00466fa8
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00466fac
    CMP EAX,dword ptr [EDX + 0x4]       ; 00466fb0
    JL 0x00466ff8                       ; 00466fb3
        ;   XREF to: 00466ff8 (CONDITIONAL_JUMP)  ; LAB_00466ff8
    MOV ECX,dword ptr [ESP + 0x54]      ; 00466fb5
    MOV EBP,dword ptr [0x01bdcfd4]      ; 00466fb9 | DAT_01bdcfd4
    MOV EBX,EAX                         ; 00466fbf
    MOV dword ptr [EDX],0xffffffff      ; 00466fc1
    MOV EAX,0x1bdcfd8                   ; 00466fc7
    XOR EDX,EDX                         ; 00466fcc
    TEST EBP,EBP                        ; 00466fce
    JLE 0x00467376                      ; 00466fd0
        ;   XREF to: 00467376 (CONDITIONAL_JUMP)  ; LAB_00467376
    CMP EBX,dword ptr [EAX]             ; 00466fd6 | DAT_01bdcfd8 | DAT_01bdd028
        ;   Label: LAB_00466fd6
    JNZ 0x0046736a                      ; 00466fd8
        ;   XREF to: 0046736a (CONDITIONAL_JUMP)  ; LAB_0046736a
    CMP EAX,ECX                         ; 00466fde
    JZ 0x0046736a                       ; 00466fe0
        ;   XREF to: 0046736a (CONDITIONAL_JUMP)  ; LAB_0046736a
    MOV dword ptr [ESP + 0x58],EAX      ; 00466fe6 | DAT_01bdd028 | DAT_01bdcfd8
        ;   Label: LAB_00466fe6
    MOV dword ptr [0x01bdcfd4],EBP      ; 00466fea | DAT_01bdcfd4
    TEST EAX,EAX                        ; 00466ff0
    JZ 0x00466dd9                       ; 00466ff2
        ;   XREF to: 00466dd9 (CONDITIONAL_JUMP)  ; LAB_00466dd9
    MOV EDI,dword ptr [ESP + 0x58]      ; 00466ff8
        ;   Label: LAB_00466ff8
    MOV ESI,dword ptr [ESP + 0x54]      ; 00466ffc
    MOV EBX,dword ptr [ESP + 0x4c]      ; 00467000
    CALL engine_special.cpp_FUN_00563257 ; 00467004
        ;   XREF to: 00563257 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_00563257()
    CMP dword ptr [0x01bdd814],0x0      ; 00467009 | DAT_01bdd814
    JNZ 0x00466dd9                      ; 00467010
        ;   XREF to: 00466dd9 (CONDITIONAL_JUMP)  ; LAB_00466dd9
    MOV EDX,dword ptr [ESP + 0x54]      ; 00467016
    MOV EAX,dword ptr [ESP + 0x54]      ; 0046701a
    MOV ECX,dword ptr [EDX + 0x8]       ; 0046701e
    MOV EAX,dword ptr [EAX + 0xc]       ; 00467021
    MOV EBX,dword ptr [EDX + 0x18]      ; 00467024
    ADD ECX,EAX                         ; 00467027
    MOV EAX,dword ptr [EDX + 0x1c]      ; 00467029
    MOV dword ptr [EDX + 0x8],ECX       ; 0046702c
    ADD EBX,EAX                         ; 0046702f
    MOV dword ptr [EDX + 0x18],EBX      ; 00467031
    MOV ESI,dword ptr [EDX + 0x20]      ; 00467034
    MOV EDI,dword ptr [EDX + 0x10]      ; 00467037
    MOV ECX,dword ptr [EDX + 0x28]      ; 0046703a
    MOV EAX,dword ptr [EDX + 0x24]      ; 0046703d
    MOV EBX,dword ptr [EDX + 0x30]      ; 00467040
    ADD ESI,EAX                         ; 00467043
    MOV EAX,dword ptr [EDX + 0x14]      ; 00467045
    MOV dword ptr [EDX + 0x20],ESI      ; 00467048
    ADD EDI,EAX                         ; 0046704b
    MOV EAX,dword ptr [EDX + 0x2c]      ; 0046704d
    MOV dword ptr [EDX + 0x10],EDI      ; 00467050
    ADD ECX,EAX                         ; 00467053
    MOV EAX,dword ptr [EDX + 0x34]      ; 00467055
    MOV dword ptr [EDX + 0x28],ECX      ; 00467058
    ADD EBX,EAX                         ; 0046705b
    MOV EAX,dword ptr [ESP + 0x58]      ; 0046705d
    MOV dword ptr [EDX + 0x30],EBX      ; 00467061
    MOV EDX,dword ptr [ESP + 0x58]      ; 00467064
    MOV EAX,dword ptr [EAX + 0xc]       ; 00467068
    MOV ESI,dword ptr [EDX + 0x8]       ; 0046706b
    MOV EDI,dword ptr [EDX + 0x18]      ; 0046706e
    ADD ESI,EAX                         ; 00467071
    MOV EAX,dword ptr [EDX + 0x1c]      ; 00467073
    MOV dword ptr [EDX + 0x8],ESI       ; 00467076
    ADD EDI,EAX                         ; 00467079
    MOV dword ptr [EDX + 0x18],EDI      ; 0046707b
    MOV ECX,dword ptr [EDX + 0x20]      ; 0046707e
    MOV EBX,dword ptr [EDX + 0x10]      ; 00467081
    MOV ESI,dword ptr [EDX + 0x28]      ; 00467084
    MOV EAX,dword ptr [EDX + 0x24]      ; 00467087
    MOV EDI,dword ptr [EDX + 0x30]      ; 0046708a
    ADD ECX,EAX                         ; 0046708d
    MOV EAX,dword ptr [EDX + 0x14]      ; 0046708f
    MOV dword ptr [EDX + 0x20],ECX      ; 00467092
    ADD EBX,EAX                         ; 00467095
    MOV EAX,dword ptr [EDX + 0x2c]      ; 00467097
    MOV dword ptr [EDX + 0x10],EBX      ; 0046709a
    ADD ESI,EAX                         ; 0046709d
    MOV EAX,dword ptr [EDX + 0x34]      ; 0046709f
    MOV dword ptr [EDX + 0x28],ESI      ; 004670a2
    ADD EDI,EAX                         ; 004670a5
    MOV dword ptr [EDX + 0x30],EDI      ; 004670a7
    MOV DL,byte ptr [0x01c6e2b5]        ; 004670aa | DAT_01c6e2b5
    MOV EBP,dword ptr [0x01bdcfd4]      ; 004670b0 | DAT_01bdcfd4
    TEST DL,0x2                         ; 004670b6
    JNZ 0x0046737d                      ; 004670b9
        ;   XREF to: 0046737d (CONDITIONAL_JUMP)  ; LAB_0046737d
    INC dword ptr [ESP + 0x4c]          ; 004670bf
    JMP 0x00466f56                      ; 004670c3
        ;   XREF to: 00466f56 (UNCONDITIONAL_JUMP)  ; LAB_00466f56
    MOV EDI,dword ptr [EBX + 0x14]      ; 004670c8 | DAT_0060b028
        ;   Label: LAB_004670c8
    CMP EDI,dword ptr [ECX + 0x14]      ; 004670cb | DAT_0060b028
    JLE 0x004670dc                      ; 004670ce
        ;   XREF to: 004670dc (CONDITIONAL_JUMP)  ; LAB_004670dc
    MOV ESI,ECX                         ; 004670d0
    MOV dword ptr [ESP + 0x50],EBX      ; 004670d2
    MOV ECX,EAX                         ; 004670d6
    MOV EAX,EDX                         ; 004670d8
    MOV EDX,ECX                         ; 004670da
    IMUL ECX,EBP,0x50                   ; 004670dc
        ;   Label: LAB_004670dc
    ADD ECX,0x1bdcfd8                   ; 004670df
    MOV dword ptr [ECX],EAX             ; 004670e5 | DAT_01bdcfd8
    MOV EDI,dword ptr [0x01bdd4d8]      ; 004670e7 | DAT_01bdd4d8
    MOV dword ptr [ECX + 0x4],EDX       ; 004670ed
    CMP EAX,EDI                         ; 004670f0
    JGE 0x004670f9                      ; 004670f2
        ;   XREF to: 004670f9 (CONDITIONAL_JUMP)  ; LAB_004670f9
    MOV [0x01bdd4d8],EAX                ; 004670f4 | DAT_01bdd4d8
    CMP EDX,dword ptr [0x01bdd4dc]      ; 004670f9 | DAT_01bdd4dc
        ;   Label: LAB_004670f9
    JLE 0x00467107                      ; 004670ff
        ;   XREF to: 00467107 (CONDITIONAL_JUMP)  ; LAB_00467107
    MOV dword ptr [0x01bdd4dc],EDX      ; 00467101 | DAT_01bdd4dc
    MOV EBX,dword ptr [ESP + 0x50]      ; 00467107
        ;   Label: LAB_00467107
    MOV EDX,dword ptr [ESI + 0x14]      ; 0046710b | DAT_0060b028
    MOV EBX,dword ptr [EBX + 0x14]      ; 0046710e | DAT_0060b028
    SUB EBX,EDX                         ; 00467111
    CMP EBX,0x10000                     ; 00467113
    JNC 0x004672e8                      ; 00467119
        ;   XREF to: 004672e8 (CONDITIONAL_JUMP)  ; LAB_004672e8
    MOV dword ptr [0x01bdcfd4],EBP      ; 0046711f | DAT_01bdcfd4
    XOR EBX,EBX                         ; 00467125
    MOV EAX,dword ptr [ESP + 0x50]      ; 00467127
        ;   Label: LAB_00467127
    MOV EDX,dword ptr [ESI + 0x10]      ; 0046712b | DAT_0060b024
    MOV EAX,dword ptr [EAX + 0x10]      ; 0046712e | DAT_0060b024
    MOV EDI,dword ptr [ESI + 0x14]      ; 00467131 | DAT_0060b028
    SUB EAX,EDX                         ; 00467134
    AND EDI,0xffff                      ; 00467136
    MOV EDX,EAX                         ; 0046713c
    MOV EAX,EBX                         ; 0046713e
    XOR DI,0xffff                       ; 00467140
    IMUL EDX                            ; 00467144
    SHRD EAX,EDX,0x10                   ; 00467146
    MOV EDX,EAX                         ; 0046714a
    MOV dword ptr [ECX + 0xc],EAX       ; 0046714c
    MOV EAX,EDI                         ; 0046714f
    IMUL EDX                            ; 00467151
    SHRD EAX,EDX,0x10                   ; 00467153
    MOV dword ptr [ESP + 0x40],EAX      ; 00467157
    MOV EDX,dword ptr [ESP + 0x40]      ; 0046715b
    MOV EAX,dword ptr [ESI + 0x10]      ; 0046715f | DAT_0060b024
    ADD EAX,EDX                         ; 00467162
    MOV dword ptr [ECX + 0x8],EAX       ; 00467164
    MOV EAX,dword ptr [ESP + 0x50]      ; 00467167
    MOV EDX,dword ptr [ESI + 0x18]      ; 0046716b | DAT_0060b02c
    MOV EAX,dword ptr [EAX + 0x18]      ; 0046716e | DAT_0060b02c
    SUB EAX,EDX                         ; 00467171
    MOV EDX,EAX                         ; 00467173
    MOV EAX,EBX                         ; 00467175
    IMUL EDX                            ; 00467177
    SHRD EAX,EDX,0x10                   ; 00467179
    MOV EDX,EAX                         ; 0046717d
    MOV dword ptr [ECX + 0x1c],EAX      ; 0046717f
    MOV EAX,EDI                         ; 00467182
    IMUL EDX                            ; 00467184
    SHRD EAX,EDX,0x10                   ; 00467186
    MOV dword ptr [ESP + 0x40],EAX      ; 0046718a
    MOV EDX,dword ptr [ESP + 0x40]      ; 0046718e
    MOV EAX,dword ptr [ESI + 0x18]      ; 00467192 | DAT_0060b02c
    ADD EAX,EDX                         ; 00467195
    MOV dword ptr [ECX + 0x18],EAX      ; 00467197
    MOV EAX,dword ptr [ESP + 0x50]      ; 0046719a
    MOV EDX,dword ptr [ESI + 0x1c]      ; 0046719e | DAT_0060b030
    MOV EAX,dword ptr [EAX + 0x1c]      ; 004671a1 | DAT_0060b030
    SUB EAX,EDX                         ; 004671a4
    MOV EDX,EAX                         ; 004671a6
    MOV EAX,EBX                         ; 004671a8
    IMUL EDX                            ; 004671aa
    SHRD EAX,EDX,0x10                   ; 004671ac
    MOV EDX,EAX                         ; 004671b0
    MOV dword ptr [ECX + 0x24],EAX      ; 004671b2
    MOV EAX,EDI                         ; 004671b5
    IMUL EDX                            ; 004671b7
    SHRD EAX,EDX,0x10                   ; 004671b9
    MOV dword ptr [ESP + 0x40],EAX      ; 004671bd
    MOV EDX,dword ptr [ESP + 0x40]      ; 004671c1
    MOV EAX,dword ptr [ESI + 0x1c]      ; 004671c5 | DAT_0060b030
    ADD EAX,EDX                         ; 004671c8
    MOV dword ptr [ECX + 0x20],EAX      ; 004671ca
    MOV EAX,dword ptr [ESP + 0x50]      ; 004671cd
    MOV EDX,dword ptr [ESI + 0x20]      ; 004671d1 | DAT_0060b034
    MOV EAX,dword ptr [EAX + 0x20]      ; 004671d4 | DAT_0060b034
    SUB EAX,EDX                         ; 004671d7
    MOV EDX,EAX                         ; 004671d9
    MOV EAX,EBX                         ; 004671db
    IMUL EDX                            ; 004671dd
    SHRD EAX,EDX,0x10                   ; 004671df
    MOV EDX,EAX                         ; 004671e3
    MOV dword ptr [ECX + 0x14],EAX      ; 004671e5
    MOV EAX,EDI                         ; 004671e8
    IMUL EDX                            ; 004671ea
    SHRD EAX,EDX,0x10                   ; 004671ec
    MOV dword ptr [ESP + 0x40],EAX      ; 004671f0
    MOV EDX,dword ptr [ESP + 0x40]      ; 004671f4
    MOV EAX,dword ptr [ESI + 0x20]      ; 004671f8 | DAT_0060b034
    ADD EAX,EDX                         ; 004671fb
    MOV dword ptr [ECX + 0x10],EAX      ; 004671fd
    MOV EAX,dword ptr [ESP + 0x50]      ; 00467200
    MOV EDX,dword ptr [ESI + 0x2c]      ; 00467204 | DAT_0060b040
    MOV EAX,dword ptr [EAX + 0x2c]      ; 00467207 | DAT_0060b040
    SUB EAX,EDX                         ; 0046720a
    MOV EDX,EAX                         ; 0046720c
    MOV EAX,EBX                         ; 0046720e
    IMUL EDX                            ; 00467210
    SHRD EAX,EDX,0x10                   ; 00467212
    MOV EDX,EAX                         ; 00467216
    MOV dword ptr [ECX + 0x34],EAX      ; 00467218
    MOV EAX,EDI                         ; 0046721b
    IMUL EDX                            ; 0046721d
    SHRD EAX,EDX,0x10                   ; 0046721f
    MOV dword ptr [ESP + 0x40],EAX      ; 00467223
    MOV EDX,dword ptr [ESP + 0x40]      ; 00467227
    MOV EAX,dword ptr [ESI + 0x2c]      ; 0046722b | DAT_0060b040
    ADD EAX,EDX                         ; 0046722e
    MOV dword ptr [ECX + 0x30],EAX      ; 00467230
    CMP dword ptr [0x007303f4],0x0      ; 00467233 | DAT_007303f4
    JZ 0x004672fe                       ; 0046723a
        ;   XREF to: 004672fe (CONDITIONAL_JUMP)  ; LAB_004672fe
    MOV EAX,dword ptr [ESP + 0x50]      ; 00467240
    MOV EDX,dword ptr [ESI + 0x8]       ; 00467244 | DAT_0060b01c
    MOV EAX,dword ptr [EAX + 0x8]       ; 00467247 | DAT_0060b01c
    SUB EAX,EDX                         ; 0046724a
    MOV EDX,EAX                         ; 0046724c
    MOV EAX,EBX                         ; 0046724e
    IMUL EDX                            ; 00467250
    SHRD EAX,EDX,0x10                   ; 00467252
    MOV EDX,EAX                         ; 00467256
    MOV dword ptr [ECX + 0x2c],EAX      ; 00467258
    MOV EAX,EDI                         ; 0046725b
    IMUL EDX                            ; 0046725d
    SHRD EAX,EDX,0x10                   ; 0046725f
    MOV dword ptr [ESP + 0x40],EAX      ; 00467263
    MOV EDX,dword ptr [ESP + 0x40]      ; 00467267
    MOV EAX,dword ptr [ESI + 0x8]       ; 0046726b | DAT_0060b01c
    ADD EAX,EDX                         ; 0046726e
        ;   Label: LAB_0046726e
    MOV dword ptr [ECX + 0x28],EAX      ; 00467270
    TEST byte ptr [0x01c6e2b5],0x2      ; 00467273 | DAT_01c6e2b5
    JZ 0x004672dc                       ; 0046727a
        ;   XREF to: 004672dc (CONDITIONAL_JUMP)  ; LAB_004672dc
    MOV EAX,dword ptr [ESP + 0x50]      ; 0046727c
    MOV EDX,dword ptr [ESI + 0x24]      ; 00467280 | DAT_0060b038
    MOV EAX,dword ptr [EAX + 0x24]      ; 00467283 | DAT_0060b038
    SUB EAX,EDX                         ; 00467286
    MOV EDX,EAX                         ; 00467288
    MOV EAX,EBX                         ; 0046728a
    IMUL EDX                            ; 0046728c
    SHRD EAX,EDX,0x10                   ; 0046728e
    MOV EDX,EAX                         ; 00467292
    MOV dword ptr [ECX + 0x3c],EAX      ; 00467294
    MOV EAX,EDI                         ; 00467297
    IMUL EDX                            ; 00467299
    SHRD EAX,EDX,0x10                   ; 0046729b
    MOV dword ptr [ESP + 0x40],EAX      ; 0046729f
    MOV EDX,dword ptr [ESP + 0x40]      ; 004672a3
    MOV EAX,dword ptr [ESI + 0x24]      ; 004672a7 | DAT_0060b038
    ADD EAX,EDX                         ; 004672aa
    MOV dword ptr [ECX + 0x38],EAX      ; 004672ac
    MOV EAX,dword ptr [ESP + 0x50]      ; 004672af
    MOV EDX,dword ptr [ESI + 0x28]      ; 004672b3 | DAT_0060b03c
    MOV EAX,dword ptr [EAX + 0x28]      ; 004672b6 | DAT_0060b03c
    SUB EAX,EDX                         ; 004672b9
    MOV EDX,EAX                         ; 004672bb
    MOV EAX,EBX                         ; 004672bd
    IMUL EDX                            ; 004672bf
    SHRD EAX,EDX,0x10                   ; 004672c1
    MOV EDX,EAX                         ; 004672c5
    MOV dword ptr [ECX + 0x44],EAX      ; 004672c7
    MOV EAX,EDI                         ; 004672ca
    IMUL EDX                            ; 004672cc
    SHRD EAX,EDX,0x10                   ; 004672ce
    MOV EDX,EAX                         ; 004672d2
    MOV EAX,dword ptr [ESI + 0x28]      ; 004672d4 | DAT_0060b03c
    ADD EAX,EDX                         ; 004672d7
    MOV dword ptr [ECX + 0x40],EAX      ; 004672d9
    MOV EBP,dword ptr [0x01bdcfd4]      ; 004672dc | DAT_01bdcfd4
        ;   Label: LAB_004672dc
    INC EBP                             ; 004672e2
    JMP 0x00466ebe                      ; 004672e3
        ;   XREF to: 00466ebe (UNCONDITIONAL_JUMP)  ; LAB_00466ebe
    MOV EAX,0xffffffff                  ; 004672e8
        ;   Label: LAB_004672e8
    XOR EDX,EDX                         ; 004672ed
    DIV EBX                             ; 004672ef
    MOV dword ptr [0x01bdcfd4],EBP      ; 004672f1 | DAT_01bdcfd4
    MOV EBX,EAX                         ; 004672f7
    JMP 0x00467127                      ; 004672f9
        ;   XREF to: 00467127 (UNCONDITIONAL_JUMP)  ; LAB_00467127
    MOV EAX,dword ptr [ESP + 0x50]      ; 004672fe
        ;   Label: LAB_004672fe
    MOV EDX,dword ptr [ESI + 0xc]       ; 00467302 | DAT_0060b020
    MOV EAX,dword ptr [EAX + 0xc]       ; 00467305 | DAT_0060b020
    SUB EAX,EDX                         ; 00467308
    MOV EDX,EAX                         ; 0046730a
    MOV EAX,EBX                         ; 0046730c
    IMUL EDX                            ; 0046730e
    SHRD EAX,EDX,0x10                   ; 00467310
    MOV EDX,EAX                         ; 00467314
    MOV dword ptr [ECX + 0x2c],EAX      ; 00467316
    MOV EAX,EDI                         ; 00467319
    IMUL EDX                            ; 0046731b
    SHRD EAX,EDX,0x10                   ; 0046731d
    MOV dword ptr [ESP + 0x40],EAX      ; 00467321
    MOV EDX,dword ptr [ESP + 0x40]      ; 00467325
    MOV EAX,dword ptr [ESI + 0xc]       ; 00467329 | DAT_0060b020
    JMP 0x0046726e                      ; 0046732c
        ;   XREF to: 0046726e (UNCONDITIONAL_JUMP)  ; LAB_0046726e
    INC EAX                             ; 00467331
        ;   Label: LAB_00467331
    ADD EBX,0x50                        ; 00467332
    CMP EAX,EBP                         ; 00467335
    JL 0x00466ef4                       ; 00467337
        ;   XREF to: 00466ef4 (CONDITIONAL_JUMP)  ; LAB_00466ef4
    XOR EBX,EBX                         ; 0046733d
        ;   Label: LAB_0046733d
    JMP 0x00466f04                      ; 0046733f
        ;   XREF to: 00466f04 (UNCONDITIONAL_JUMP)  ; LAB_00466f04
    INC EDX                             ; 00467344
        ;   Label: LAB_00467344
    ADD EAX,0x50                        ; 00467345
    CMP EDX,EBP                         ; 00467348
    JL 0x00466f2b                       ; 0046734a
        ;   XREF to: 00466f2b (CONDITIONAL_JUMP)  ; LAB_00466f2b
    XOR EAX,EAX                         ; 00467350
        ;   Label: LAB_00467350
    JMP 0x00466f3b                      ; 00467352
        ;   XREF to: 00466f3b (UNCONDITIONAL_JUMP)  ; LAB_00466f3b
    INC EDX                             ; 00467357
        ;   Label: LAB_00467357
    ADD EAX,0x50                        ; 00467358
    CMP EDX,EBP                         ; 0046735b
    JL 0x00466f86                       ; 0046735d
        ;   XREF to: 00466f86 (CONDITIONAL_JUMP)  ; LAB_00466f86
    XOR EAX,EAX                         ; 00467363
        ;   Label: LAB_00467363
    JMP 0x00466f96                      ; 00467365
        ;   XREF to: 00466f96 (UNCONDITIONAL_JUMP)  ; LAB_00466f96
    INC EDX                             ; 0046736a
        ;   Label: LAB_0046736a
    ADD EAX,0x50                        ; 0046736b
    CMP EDX,EBP                         ; 0046736e
    JL 0x00466fd6                       ; 00467370
        ;   XREF to: 00466fd6 (CONDITIONAL_JUMP)  ; LAB_00466fd6
    XOR EAX,EAX                         ; 00467376
        ;   Label: LAB_00467376
    JMP 0x00466fe6                      ; 00467378
        ;   XREF to: 00466fe6 (UNCONDITIONAL_JUMP)  ; LAB_00466fe6
    MOV EDX,dword ptr [ESP + 0x54]      ; 0046737d
        ;   Label: LAB_0046737d
    MOV EAX,dword ptr [ESP + 0x54]      ; 00467381
    MOV ECX,dword ptr [EDX + 0x38]      ; 00467385
    MOV EAX,dword ptr [EAX + 0x3c]      ; 00467388
    MOV EBX,dword ptr [EDX + 0x40]      ; 0046738b
    ADD ECX,EAX                         ; 0046738e
    MOV EAX,dword ptr [EDX + 0x44]      ; 00467390
    MOV dword ptr [EDX + 0x38],ECX      ; 00467393
    ADD EBX,EAX                         ; 00467396
    MOV EAX,dword ptr [ESP + 0x58]      ; 00467398
    MOV dword ptr [EDX + 0x40],EBX      ; 0046739c
    MOV EDX,dword ptr [ESP + 0x58]      ; 0046739f
    MOV EAX,dword ptr [EAX + 0x3c]      ; 004673a3
    MOV ESI,dword ptr [EDX + 0x38]      ; 004673a6
    MOV EDI,dword ptr [EDX + 0x40]      ; 004673a9
    ADD ESI,EAX                         ; 004673ac
    MOV EAX,dword ptr [EDX + 0x44]      ; 004673ae
    MOV dword ptr [EDX + 0x38],ESI      ; 004673b1
    ADD EDI,EAX                         ; 004673b4
    MOV dword ptr [EDX + 0x40],EDI      ; 004673b6
    INC dword ptr [ESP + 0x4c]          ; 004673b9
    JMP 0x00466f56                      ; 004673bd
        ;   XREF to: 00466f56 (UNCONDITIONAL_JUMP)  ; LAB_00466f56

