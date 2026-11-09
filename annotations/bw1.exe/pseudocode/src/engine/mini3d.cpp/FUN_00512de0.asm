; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_00512de0(float *param_1,int param_2,ushort *param_3,int param_4)
;
; Local Variables:
; undefined        Stack[-0x124]:1  local_124
; undefined        Stack[-0x64]:1  local_64
; undefined8       Stack[-0x24]:8  local_24
; undefined8       Stack[-0x1c]:8  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   engine_font.cpp_FUN_004c2750 at 004c27eb
;   engine_mini3d.cpp_FUN_00518010 at 00518260
;
; Referenced Globals:
;   TerminatedCString s_engine_mini3d_cpp_005e8e37
;   TerminatedCString s_CMini3D_polyList_Too_man_005e8e4c
;   undefined4 DAT_005e8e7b
;   undefined4 DAT_01c50948
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01d224b4
;   undefined4 DAT_01d224dc
;   undefined4 DAT_01d224e0
;   undefined4 DAT_01d224e4
;   undefined4 DAT_01d224e8
;   undefined4 DAT_01d22544
;   undefined4 DAT_01d227e0
;   undefined4 DAT_01d25f14
;   ... and 3 more
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   engine_mini3d.cpp_FUN_005124f0
;   engine_mini3d.cpp_FUN_00512670
;   engine_mini3d.cpp_FUN_005159c0
;   engine_mini3d.cpp_FUN_00515ae0
;   engine_mini3d.cpp_FUN_005168c0
;   engine_mini3d.cpp_FUN_00516c60
;   engine_mini3d.cpp_FUN_00516cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00512de0
        ;   Label: engine_mini3d.cpp_FUN_00512de0
    PUSH ESI                            ; 00512de1
    PUSH EDI                            ; 00512de2
    PUSH EBP                            ; 00512de3
    SUB ESP,0x114                       ; 00512de4
    MOV EBX,dword ptr [ESP + 0x128]     ; 00512dea
    MOV EAX,dword ptr [ESP + 0x134]     ; 00512df1
    MOV EDX,dword ptr [0x01e7dac8]      ; 00512df8 | DAT_01e7dac8
    MOV ECX,dword ptr [0x01d224b4]      ; 00512dfe | DAT_01d224b4
    ADD EDX,EAX                         ; 00512e04
    MOV EAX,dword ptr [ESP + 0x12c]     ; 00512e06
    MOV ESI,dword ptr [0x01d25f14]      ; 00512e0d | DAT_01d25f14
    ADD ECX,EAX                         ; 00512e13
    MOV dword ptr [0x01e7dac8],EDX      ; 00512e15 | DAT_01e7dac8
    MOV dword ptr [0x01d224b4],ECX      ; 00512e1b | DAT_01d224b4
    TEST ESI,ESI                        ; 00512e21
    JNZ 0x005130ca                      ; 00512e23
        ;   XREF to: 005130ca (CONDITIONAL_JUMP)  ; LAB_005130ca
    CALL engine_mini3d.cpp_FUN_005124f0 ; 00512e29
        ;   XREF to: 005124f0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_005124f0()
    CALL engine_mini3d.cpp_FUN_00516c60 ; 00512e2e
        ;   XREF to: 00516c60 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00516c60()
    CMP dword ptr [0x02c8346c],0x0      ; 00512e33 | DAT_02c8346c
    JZ 0x00512e49                       ; 00512e3a
        ;   XREF to: 00512e49 (CONDITIONAL_JUMP)  ; LAB_00512e49
    CMP dword ptr [0x01c50948],0x0      ; 00512e3c | DAT_01c50948
    JNZ 0x005130e6                      ; 00512e43
        ;   XREF to: 005130e6 (CONDITIONAL_JUMP)  ; LAB_005130e6
    CALL engine_mini3d.cpp_FUN_00512670 ; 00512e49
        ;   XREF to: 00512670 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00512670()
        ;   Label: LAB_00512e49
    MOV EAX,dword ptr [ESP + 0x12c]     ; 00512e4e
    CMP EAX,0x2710                      ; 00512e55
    JLE 0x00512e80                      ; 00512e5a
        ;   XREF to: 00512e80 (CONDITIONAL_JUMP)  ; LAB_00512e80
    PUSH EAX                            ; 00512e5c
    MOV EDX,0x5e8e37                    ; 00512e5d | = "..\\engine\\mini3d.cpp"
    MOV ECX,0x844                       ; 00512e62
    PUSH 0x5e8e4c                       ; 00512e67 | = "CMini3D::polyList - Too many verticie..."
    MOV dword ptr [0x01d1d400],EDX      ; 00512e6c | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00512e72 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00512e78
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 00512e7d
    MOV EDI,dword ptr [ESP + 0x12c]     ; 00512e80
        ;   Label: LAB_00512e80
    MOV EDX,dword ptr [0x01d227e0]      ; 00512e87 | DAT_01d227e0
    MOV ECX,EBX                         ; 00512e8d
    XOR EBP,EBP                         ; 00512e8f
    XOR EBX,EBX                         ; 00512e91
    TEST EDI,EDI                        ; 00512e93
    JLE 0x00513006                      ; 00512e95
        ;   XREF to: 00513006 (CONDITIONAL_JUMP)  ; LAB_00513006
    FLD float ptr [0x01d22544]          ; 00512e9b | DAT_01d22544
        ;   Label: LAB_00512e9b
    FLD float ptr [ECX]                 ; 00512ea1
    FMUL ST1                            ; 00512ea3
    FSUB float ptr [0x01d224e4]         ; 00512ea5 | DAT_01d224e4
    FMUL float ptr [ECX + 0x8]          ; 00512eab
    FDIV float ptr [0x01d224dc]         ; 00512eae | DAT_01d224dc
    FSTP float ptr [EDX]                ; 00512eb4
    FMUL float ptr [ECX + 0x4]          ; 00512eb6
    FSUB float ptr [0x01d224e8]         ; 00512eb9 | DAT_01d224e8
    FMUL float ptr [ECX + 0x8]          ; 00512ebf
    FDIV float ptr [0x01d224e0]         ; 00512ec2 | DAT_01d224e0
    FSTP float ptr [EDX + 0x4]          ; 00512ec8
    MOV EAX,dword ptr [ECX + 0x8]       ; 00512ecb
    MOV dword ptr [EDX + 0x8],EAX       ; 00512ece
    FLD float ptr [ECX + 0xc]           ; 00512ed1
    MOV dword ptr [EDX + 0x10],0x0      ; 00512ed4
    FLD float ptr [EDX]                 ; 00512edb
    FXCH                                ; 00512edd
    FSTP float ptr [EDX + 0xc]          ; 00512edf
    FCOMP float ptr [EDX + 0x8]         ; 00512ee2
    FNSTSW AX                           ; 00512ee5
    SAHF                                ; 00512ee7
    JBE 0x00512eee                      ; 00512ee8
        ;   XREF to: 00512eee (CONDITIONAL_JUMP)  ; LAB_00512eee
    OR byte ptr [EDX + 0x10],0x1        ; 00512eea
    FLD float ptr [EDX + 0x8]           ; 00512eee
        ;   Label: LAB_00512eee
    FCHS                                ; 00512ef1
    FCOMP float ptr [EDX]               ; 00512ef3
    FNSTSW AX                           ; 00512ef5
    SAHF                                ; 00512ef7
    JBE 0x00512efe                      ; 00512ef8
        ;   XREF to: 00512efe (CONDITIONAL_JUMP)  ; LAB_00512efe
    OR byte ptr [EDX + 0x10],0x2        ; 00512efa
    FLD float ptr [EDX + 0x4]           ; 00512efe
        ;   Label: LAB_00512efe
    FCOMP float ptr [EDX + 0x8]         ; 00512f01
    FNSTSW AX                           ; 00512f04
    SAHF                                ; 00512f06
    JBE 0x00512f0d                      ; 00512f07
        ;   XREF to: 00512f0d (CONDITIONAL_JUMP)  ; LAB_00512f0d
    OR byte ptr [EDX + 0x10],0x4        ; 00512f09
    FLD float ptr [EDX + 0x8]           ; 00512f0d
        ;   Label: LAB_00512f0d
    FCHS                                ; 00512f10
    FCOMP float ptr [EDX + 0x4]         ; 00512f12
    FNSTSW AX                           ; 00512f15
    SAHF                                ; 00512f17
    JBE 0x00512f1e                      ; 00512f18
        ;   XREF to: 00512f1e (CONDITIONAL_JUMP)  ; LAB_00512f1e
    OR byte ptr [EDX + 0x10],0x8        ; 00512f1a
    FLDZ                                ; 00512f1e
        ;   Label: LAB_00512f1e
    FCOMP float ptr [EDX + 0x8]         ; 00512f20
    FNSTSW AX                           ; 00512f23
    SAHF                                ; 00512f25
    JC 0x00512f2c                       ; 00512f26
        ;   XREF to: 00512f2c (CONDITIONAL_JUMP)  ; LAB_00512f2c
    OR byte ptr [EDX + 0x10],0x10       ; 00512f28
    FLD float ptr [0x01d22544]          ; 00512f2c | DAT_01d22544
        ;   Label: LAB_00512f2c
    FLD float ptr [ECX]                 ; 00512f32
    FMUL ST1                            ; 00512f34
    MOV EAX,dword ptr [EDX + 0x10]      ; 00512f36
    FSTP float ptr [EDX + 0x14]         ; 00512f39
    FMUL float ptr [ECX + 0x4]          ; 00512f3c
    OR EBP,EAX                          ; 00512f3f
    FSTP float ptr [EDX + 0x18]         ; 00512f41
    MOV EAX,dword ptr [ECX + 0x18]      ; 00512f44
    MOV dword ptr [EDX + 0x1c],EAX      ; 00512f47
    MOV EAX,dword ptr [ECX + 0x1c]      ; 00512f4a
    MOV dword ptr [EDX + 0x20],EAX      ; 00512f4d
    MOV EAX,dword ptr [ECX + 0x10]      ; 00512f50
    MOV ESI,EAX                         ; 00512f53
    XOR EDI,EDI                         ; 00512f55
    AND ESI,0xff                        ; 00512f57
    MOV dword ptr [ESP + 0x104],EDI     ; 00512f5d
    MOV dword ptr [ESP + 0x100],ESI     ; 00512f64
    MOV ESI,EAX                         ; 00512f6b
    FILD qword ptr [ESP + 0x100]        ; 00512f6d
    SHR ESI,0x8                         ; 00512f74
    FLD float ptr [0x005e8e7b]          ; 00512f77 | DAT_005e8e7b
    FXCH                                ; 00512f7d
    FMUL ST1                            ; 00512f7f
    AND ESI,0xff                        ; 00512f81
    MOV dword ptr [ESP + 0x104],EDI     ; 00512f87
    MOV dword ptr [ESP + 0x100],ESI     ; 00512f8e
    FILD qword ptr [ESP + 0x100]        ; 00512f95
    FMUL ST2                            ; 00512f9c
    MOV dword ptr [ESP + 0x104],EDI     ; 00512f9e
    MOV ESI,EAX                         ; 00512fa5
    MOV dword ptr [ESP + 0x10c],EDI     ; 00512fa7
    SHR ESI,0x10                        ; 00512fae
    SHR EAX,0x18                        ; 00512fb1
    AND ESI,0xff                        ; 00512fb4
    AND EAX,0xff                        ; 00512fba
    MOV dword ptr [ESP + 0x100],ESI     ; 00512fbf
    MOV dword ptr [ESP + 0x108],EAX     ; 00512fc6
    FILD qword ptr [ESP + 0x100]        ; 00512fcd
    FMUL ST3                            ; 00512fd4
    FILD qword ptr [ESP + 0x108]        ; 00512fd6
    FMULP ST4                           ; 00512fdd
    ADD EDX,0x40                        ; 00512fdf
    INC EBX                             ; 00512fe2
    ADD ECX,0x20                        ; 00512fe3
    MOV dword ptr [EDX + -0xc],EDI      ; 00512fe6
    MOV EDI,dword ptr [ESP + 0x12c]     ; 00512fe9
    FXCH ST2                            ; 00512ff0
    FSTP float ptr [EDX + -0x1c]        ; 00512ff2
    FSTP float ptr [EDX + -0x18]        ; 00512ff5
    FSTP float ptr [EDX + -0x14]        ; 00512ff8
    FSTP float ptr [EDX + -0x10]        ; 00512ffb
    CMP EBX,EDI                         ; 00512ffe
    JL 0x00512e9b                       ; 00513000
        ;   XREF to: 00512e9b (CONDITIONAL_JUMP)  ; LAB_00512e9b
    CMP dword ptr [0x01c50948],0x0      ; 00513006 | DAT_01c50948
        ;   Label: LAB_00513006
    JNZ 0x0051312b                      ; 0051300d
        ;   XREF to: 0051312b (CONDITIONAL_JUMP)  ; LAB_0051312b
    CMP dword ptr [ESP + 0x12c],0x4     ; 00513013
    JNZ 0x0051312b                      ; 0051301b
        ;   XREF to: 0051312b (CONDITIONAL_JUMP)  ; LAB_0051312b
    CMP dword ptr [ESP + 0x134],0x2     ; 00513021
    JNZ 0x0051312b                      ; 00513029
        ;   XREF to: 0051312b (CONDITIONAL_JUMP)  ; LAB_0051312b
    MOV EAX,[0x01d2adfc]                ; 0051302f | DAT_01d2adfc
    MOV EDX,dword ptr [ESP + 0x130]     ; 00513034
    MOV dword ptr [ESP + 0x110],EAX     ; 0051303b
    XOR EAX,EAX                         ; 00513042
    XOR EBX,EBX                         ; 00513044
        ;   Label: LAB_00513044
    MOV BX,word ptr [EDX]               ; 00513046
    MOV ESI,EBX                         ; 00513049
    MOV ECX,dword ptr [0x01d227e0]      ; 0051304b | DAT_01d227e0
    SHL ESI,0x6                         ; 00513051
    LEA EDI,[ESP + EAX*0x1]             ; 00513054
    ADD ESI,ECX                         ; 00513057
    MOV ECX,0x10                        ; 00513059
    MOVSD.REP ES:EDI,ESI                ; 0051305e
    ADD EAX,0x40                        ; 00513060
    MOV CL,0x1                          ; 00513063
    ADD EDX,0x2                         ; 00513065
    MOV byte ptr [ESP + EBX*0x1 + 0x110],CL ; 00513068
    CMP EAX,0xc0                        ; 0051306f
    JNZ 0x00513044                      ; 00513074
        ;   XREF to: 00513044 (CONDITIONAL_JUMP)  ; LAB_00513044
    MOV CH,byte ptr [ESP + 0x110]       ; 00513076
    XOR EAX,EAX                         ; 0051307d
    TEST CH,CH                          ; 0051307f
    JZ 0x00513093                       ; 00513081
        ;   XREF to: 00513093 (CONDITIONAL_JUMP)  ; LAB_00513093
    INC EAX                             ; 00513083
        ;   Label: LAB_00513083
    CMP EAX,0x4                         ; 00513084
    JGE 0x005130ac                      ; 00513087
        ;   XREF to: 005130ac (CONDITIONAL_JUMP)  ; LAB_005130ac
    CMP byte ptr [ESP + EAX*0x1 + 0x110],0x0 ; 00513089
    JNZ 0x00513083                      ; 00513091
        ;   XREF to: 00513083 (CONDITIONAL_JUMP)  ; LAB_00513083
    MOV ECX,0x10                        ; 00513093
        ;   Label: LAB_00513093
    MOV ESI,dword ptr [0x01d227e0]      ; 00513098 | DAT_01d227e0
    SHL EAX,0x6                         ; 0051309e
    LEA EDI,[ESP + 0xc0]                ; 005130a1
    ADD ESI,EAX                         ; 005130a8
    MOVSD.REP ES:EDI,ESI                ; 005130aa
    TEST EBP,EBP                        ; 005130ac
        ;   Label: LAB_005130ac
    JNZ 0x00513111                      ; 005130ae
        ;   XREF to: 00513111 (CONDITIONAL_JUMP)  ; LAB_00513111
    PUSH 0x4                            ; 005130b0
    LEA EAX,[ESP + 0x4]                 ; 005130b2
    PUSH EAX                            ; 005130b6
    CALL engine_mini3d.cpp_FUN_005168c0 ; 005130b7
        ;   XREF to: 005168c0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_005168c0()
    ADD ESP,0x8                         ; 005130bc
    ADD ESP,0x114                       ; 005130bf
        ;   Label: LAB_005130bf
    POP EBP                             ; 005130c5
    POP EDI                             ; 005130c6
    POP ESI                             ; 005130c7
    POP EBX                             ; 005130c8
    RET                                 ; 005130c9
    MOV ESI,dword ptr [ESP + 0x134]     ; 005130ca
        ;   Label: LAB_005130ca
    PUSH ESI                            ; 005130d1
    MOV EDI,dword ptr [ESP + 0x134]     ; 005130d2
    PUSH EDI                            ; 005130d9
    PUSH EAX                            ; 005130da
    PUSH EBX                            ; 005130db
    CALL engine_mini3d.cpp_FUN_00516cc0 ; 005130dc
        ;   XREF to: 00516cc0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00516cc0()
    ADD ESP,0x10                        ; 005130e1
    JMP 0x005130bf                      ; 005130e4
        ;   XREF to: 005130bf (UNCONDITIONAL_JUMP)  ; LAB_005130bf
    MOV EBP,dword ptr [0x01c51d14]      ; 005130e6 | DAT_01c51d14
        ;   Label: LAB_005130e6
    PUSH EBP                            ; 005130ec
    MOV EAX,dword ptr [ESP + 0x138]     ; 005130ed
    PUSH EAX                            ; 005130f4
    MOV EDX,dword ptr [ESP + 0x138]     ; 005130f5
    PUSH EDX                            ; 005130fc
    MOV ECX,dword ptr [ESP + 0x138]     ; 005130fd
    PUSH ECX                            ; 00513104
    PUSH EBX                            ; 00513105
    CALL dword ptr [0x02c8346c]         ; 00513106 | DAT_02c8346c
    ADD ESP,0x14                        ; 0051310c
    JMP 0x005130bf                      ; 0051310f
        ;   XREF to: 005130bf (UNCONDITIONAL_JUMP)  ; LAB_005130bf
    PUSH 0x4                            ; 00513111
        ;   Label: LAB_00513111
    LEA EAX,[ESP + 0x4]                 ; 00513113
    PUSH EAX                            ; 00513117
    CALL engine_mini3d.cpp_FUN_005159c0 ; 00513118
        ;   XREF to: 005159c0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_005159c0()
    ADD ESP,0x8                         ; 0051311d
    ADD ESP,0x114                       ; 00513120
    POP EBP                             ; 00513126
    POP EDI                             ; 00513127
    POP ESI                             ; 00513128
    POP EBX                             ; 00513129
    RET                                 ; 0051312a
    PUSH EBP                            ; 0051312b
        ;   Label: LAB_0051312b
    MOV EBX,dword ptr [ESP + 0x138]     ; 0051312c
    PUSH EBX                            ; 00513133
    MOV ESI,dword ptr [ESP + 0x138]     ; 00513134
    PUSH ESI                            ; 0051313b
    MOV EDI,dword ptr [ESP + 0x138]     ; 0051313c
    PUSH EDI                            ; 00513143
    MOV EBP,dword ptr [0x01d227e0]      ; 00513144 | DAT_01d227e0
    PUSH EBP                            ; 0051314a
    CALL engine_mini3d.cpp_FUN_00515ae0 ; 0051314b
        ;   XREF to: 00515ae0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00515ae0()
    ADD ESP,0x14                        ; 00513150
    ADD ESP,0x114                       ; 00513153
    POP EBP                             ; 00513159
    POP EDI                             ; 0051315a
    POP ESI                             ; 0051315b
    POP EBX                             ; 0051315c
    RET                                 ; 0051315d

