; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * core_dcamera_cpp_FUN_00454cc0(int param_1)
;
;
; XREF[1]:
;   core_set.cpp_FUN_0054e69e at 0054e9f4
;
; Referenced Globals:
;   undefined4 DAT_005fe604
;   undefined4 DAT_02c8af28
;   undefined4 DAT_02c8af2c
;   undefined4 DAT_02c8af30
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_expand_FUN_00420500
;   core_dcamera.cpp_FUN_0044dd70
;   core_dcamera.cpp_FUN_0044de40
;   core_dirmat.cpp_FUN_0045f700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00454cc0
        ;   Label: core_dcamera.cpp_FUN_00454cc0
    PUSH EDI                            ; 00454cc1
    PUSH EBP                            ; 00454cc2
    SUB ESP,0x110                       ; 00454cc3
    MOV EBP,dword ptr [ESP + 0x120]     ; 00454cc9
    MOV dword ptr [ESP + 0xe8],ESI      ; 00454cd0
    LEA EAX,[ESP + 0xc]                 ; 00454cd7
    CMP EAX,0x2c8af28                   ; 00454cdb
    JNZ 0x00454db5                      ; 00454ce0
        ;   XREF to: 00454db5 (CONDITIONAL_JUMP)  ; LAB_00454db5
    MOV EAX,ESP                         ; 00454ce6
        ;   Label: LAB_00454ce6
    LEA EBX,[ESP + 0xc]                 ; 00454ce8
    CMP EAX,EBX                         ; 00454cec
    JNZ 0x00454dd5                      ; 00454cee
        ;   XREF to: 00454dd5 (CONDITIONAL_JUMP)  ; LAB_00454dd5
    MOV EDX,0x1                         ; 00454cf4
        ;   Label: LAB_00454cf4
    LEA EAX,[EBP + 0x4]                 ; 00454cf9
    XOR ECX,ECX                         ; 00454cfc
    MOV dword ptr [ESP + 0x100],EAX     ; 00454cfe
    MOV dword ptr [ESP + 0xe4],ECX      ; 00454d05
    LEA EAX,[EBP + 0x10]                ; 00454d0c
    MOV dword ptr [ESP + 0x108],EDX     ; 00454d0f
    MOV dword ptr [ESP + 0xec],EAX      ; 00454d16
    MOV EAX,dword ptr [EBP + 0x148]     ; 00454d1d
        ;   Label: LAB_00454d1d
    MOV EBX,dword ptr [ESP + 0x108]     ; 00454d23
    DEC EAX                             ; 00454d2a
    CMP EAX,EBX                         ; 00454d2b
    JLE 0x004550d2                      ; 00454d2d
        ;   XREF to: 004550d2 (CONDITIONAL_JUMP)  ; LAB_004550d2
    MOV ESI,0x1                         ; 00454d33
    LEA EAX,[EBX + ESI*0x1]             ; 00454d38
    MOV dword ptr [ESP + 0xfc],EAX      ; 00454d3b
    MOV EAX,dword ptr [ESP + 0xe4]      ; 00454d42
    XOR EDI,EDI                         ; 00454d49
    MOV dword ptr [ESP + 0xf0],EAX      ; 00454d4b
    MOV EAX,dword ptr [ESP + 0xfc]      ; 00454d52
    MOV dword ptr [ESP + 0x104],EDI     ; 00454d59
    MOV dword ptr [ESP + 0xf4],EAX      ; 00454d60
    MOV EAX,dword ptr [ESP + 0xe4]      ; 00454d67
    MOV dword ptr [ESP + 0x10c],ESI     ; 00454d6e
    MOV dword ptr [ESP + 0xf8],EAX      ; 00454d75
    MOV EAX,dword ptr [EBP + 0x144]     ; 00454d7c
        ;   Label: LAB_00454d7c
    MOV EDX,dword ptr [ESP + 0x10c]     ; 00454d82
    DEC EAX                             ; 00454d89
    CMP EAX,EDX                         ; 00454d8a
    JG 0x00454df1                       ; 00454d8c
        ;   XREF to: 00454df1 (CONDITIONAL_JUMP)  ; LAB_00454df1
    MOV EBX,dword ptr [ESP + 0x108]     ; 00454d92
    MOV ECX,dword ptr [ESP + 0xe4]      ; 00454d99
    INC EBX                             ; 00454da0
    INC ECX                             ; 00454da1
    MOV dword ptr [ESP + 0x108],EBX     ; 00454da2
    MOV dword ptr [ESP + 0xe4],ECX      ; 00454da9
    JMP 0x00454d1d                      ; 00454db0
        ;   XREF to: 00454d1d (UNCONDITIONAL_JUMP)  ; LAB_00454d1d
    MOV EAX,[0x02c8af28]                ; 00454db5 | DAT_02c8af28
        ;   Label: LAB_00454db5
    MOV dword ptr [ESP + 0xc],EAX       ; 00454dba
    MOV EAX,[0x02c8af2c]                ; 00454dbe | DAT_02c8af2c
    MOV dword ptr [ESP + 0x10],EAX      ; 00454dc3
    MOV EAX,[0x02c8af30]                ; 00454dc7 | DAT_02c8af30
    MOV dword ptr [ESP + 0x14],EAX      ; 00454dcc
    JMP 0x00454ce6                      ; 00454dd0
        ;   XREF to: 00454ce6 (UNCONDITIONAL_JUMP)  ; LAB_00454ce6
    MOV EAX,dword ptr [ESP + 0xc]       ; 00454dd5
        ;   Label: LAB_00454dd5
    MOV dword ptr [ESP],EAX             ; 00454dd9
    MOV EAX,dword ptr [ESP + 0x10]      ; 00454ddc
    MOV dword ptr [ESP + 0x4],EAX       ; 00454de0
    MOV EAX,dword ptr [ESP + 0x14]      ; 00454de4
    MOV dword ptr [ESP + 0x8],EAX       ; 00454de8
    JMP 0x00454cf4                      ; 00454dec
        ;   XREF to: 00454cf4 (UNCONDITIONAL_JUMP)  ; LAB_00454cf4
    MOV ESI,dword ptr [ESP + 0x108]     ; 00454df1
        ;   Label: LAB_00454df1
    PUSH ESI                            ; 00454df8
    PUSH EDX                            ; 00454df9
    PUSH EBP                            ; 00454dfa
    LEA ESI,[ESP + 0x48]                ; 00454dfb
    LEA EDI,[ESP + 0xd8]                ; 00454dff
    CALL core_dcamera.cpp_FUN_0044dd70  ; 00454e06
        ;   XREF to: 0044dd70 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0044dd70()
    LEA ESI,[ESP + 0x48]                ; 00454e0b
    ADD ESP,0xc                         ; 00454e0f
    MOVSD ES:EDI,ESI                    ; 00454e12
    MOVSD ES:EDI,ESI                    ; 00454e13
    MOVSD ES:EDI,ESI                    ; 00454e14
    CMP dword ptr [ESP + 0xd4],0x1f400  ; 00454e15
    JLE 0x00454e8a                      ; 00454e20
        ;   XREF to: 00454e8a (CONDITIONAL_JUMP)  ; LAB_00454e8a
    MOV EDX,dword ptr [ESP + 0x10c]     ; 00454e22
    XOR EBX,EBX                         ; 00454e29
    CMP EDX,0x1                         ; 00454e2b
    JG 0x00454f8a                       ; 00454e2e
        ;   XREF to: 00454f8a (CONDITIONAL_JUMP)  ; LAB_00454f8a
    INC EBX                             ; 00454e34
        ;   Label: LAB_00454e34
    CMP dword ptr [ESP + 0x10c],0x1     ; 00454e35
        ;   Label: LAB_00454e35
    JG 0x00454fd9                       ; 00454e3d
        ;   XREF to: 00454fd9 (CONDITIONAL_JUMP)  ; LAB_00454fd9
    INC EBX                             ; 00454e43
        ;   Label: LAB_00454e43
    MOV EAX,dword ptr [EBP + 0x144]     ; 00454e44
        ;   Label: LAB_00454e44
    MOV EDX,dword ptr [ESP + 0x10c]     ; 00454e4a
    SUB EAX,0x2                         ; 00454e51
    CMP EAX,EDX                         ; 00454e54
    JG 0x0045502c                       ; 00454e56
        ;   XREF to: 0045502c (CONDITIONAL_JUMP)  ; LAB_0045502c
    INC EBX                             ; 00454e5c
        ;   Label: LAB_00454e5c
    MOV EAX,dword ptr [EBP + 0x144]     ; 00454e5d
        ;   Label: LAB_00454e5d
    MOV EDX,dword ptr [ESP + 0x10c]     ; 00454e63
    SUB EAX,0x2                         ; 00454e6a
    CMP EAX,EDX                         ; 00454e6d
    JG 0x0045507d                       ; 00454e6f
        ;   XREF to: 0045507d (CONDITIONAL_JUMP)  ; LAB_0045507d
    INC EBX                             ; 00454e75
        ;   Label: LAB_00454e75
    CMP EBX,0x4                         ; 00454e76
        ;   Label: LAB_00454e76
    JL 0x00454f67                       ; 00454e79
        ;   XREF to: 00454f67 (CONDITIONAL_JUMP)  ; LAB_00454f67
    MOV dword ptr [ESP + 0xd4],0x1f400  ; 00454e7f
    LEA EAX,[ESP + 0xcc]                ; 00454e8a
        ;   Label: LAB_00454e8a
    PUSH EAX                            ; 00454e91
    LEA ESI,[ESP + 0x7c]                ; 00454e92
    PUSH EBP                            ; 00454e96
    LEA EDI,[ESP + 0xe0]                ; 00454e97
    LEA EBX,[ESP + 0xc8]                ; 00454e9e
    CALL core_dcamera.cpp_FUN_0044de40  ; 00454ea5
        ;   XREF to: 0044de40 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0044de40()
    LEA ESI,[ESP + 0x80]                ; 00454eaa
    ADD ESP,0x8                         ; 00454eb1
    LEA EAX,[ESP + 0xd8]                ; 00454eb4
    MOV EDX,dword ptr [ESP + 0xec]      ; 00454ebb
    MOVSD ES:EDI,ESI                    ; 00454ec2
    MOVSD ES:EDI,ESI                    ; 00454ec3
    MOVSD ES:EDI,ESI                    ; 00454ec4
    FILD dword ptr [EAX]                ; 00454ec5
    FMUL float ptr [0x005fe604]         ; 00454ec7 | DAT_005fe604
    FSTP float ptr [EBX]                ; 00454ecd
    FILD dword ptr [EAX + 0x4]          ; 00454ecf
    FMUL float ptr [0x005fe604]         ; 00454ed2 | DAT_005fe604
    FSTP float ptr [EBX + 0x4]          ; 00454ed8
    FILD dword ptr [EAX + 0x8]          ; 00454edb
    FMUL float ptr [0x005fe604]         ; 00454ede | DAT_005fe604
    FSTP float ptr [EBX + 0x8]          ; 00454ee4
    FLD float ptr [ESP + 0xc0]          ; 00454ee7
    FLD float ptr [ESP + 0xc4]          ; 00454eee
    FLD float ptr [ESP + 0xc8]          ; 00454ef5
    MOV EAX,dword ptr [ESP + 0x100]     ; 00454efc
    LEA EDI,[ESP + 0x30]                ; 00454f03
    LEA ESI,[ESP + 0x9c]                ; 00454f07
    FXCH ST2                            ; 00454f0e
    FSUB float ptr [EAX]                ; 00454f10
    FXCH                                ; 00454f12
    FSUB float ptr [EAX + 0x4]          ; 00454f14
    FXCH ST2                            ; 00454f17
    FSUB float ptr [EAX + 0x8]          ; 00454f19
    FXCH                                ; 00454f1c
    FSTP float ptr [ESP + 0x9c]         ; 00454f1e
    FXCH                                ; 00454f25
    FSTP float ptr [ESP + 0xa0]         ; 00454f27
    LEA EAX,[ESP + 0x30]                ; 00454f2e
    FSTP float ptr [ESP + 0xa4]         ; 00454f32
    PUSH EAX                            ; 00454f39
    MOVSD ES:EDI,ESI                    ; 00454f3a
    MOVSD ES:EDI,ESI                    ; 00454f3b
    MOVSD ES:EDI,ESI                    ; 00454f3c
    PUSH EDX                            ; 00454f3d
    LEA ESI,[ESP + 0x5c]                ; 00454f3e
    CALL core_dirmat.cpp_FUN_0045f700   ; 00454f42
        ;   XREF to: 0045f700 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f700()
    ADD ESP,0x8                         ; 00454f47
    LEA EAX,[ESP + 0x24]                ; 00454f4a
    LEA EDI,[ESP + 0x24]                ; 00454f4e
    PUSH EAX                            ; 00454f52
    LEA EAX,[ESP + 0x4]                 ; 00454f53
    LEA ESI,[ESP + 0x58]                ; 00454f57
    PUSH EAX                            ; 00454f5b
    MOVSD ES:EDI,ESI                    ; 00454f5c
    MOVSD ES:EDI,ESI                    ; 00454f5d
    MOVSD ES:EDI,ESI                    ; 00454f5e
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420500 ; 00454f5f
        ;   XREF to: 00420500 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_00420500(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 00454f64
    MOV EBX,dword ptr [ESP + 0x10c]     ; 00454f67
        ;   Label: LAB_00454f67
    MOV ECX,dword ptr [ESP + 0x104]     ; 00454f6e
    INC EBX                             ; 00454f75
    INC ECX                             ; 00454f76
    MOV dword ptr [ESP + 0x10c],EBX     ; 00454f77
    MOV dword ptr [ESP + 0x104],ECX     ; 00454f7e
    JMP 0x00454d7c                      ; 00454f85
        ;   XREF to: 00454d7c (UNCONDITIONAL_JUMP)  ; LAB_00454d7c
    CMP dword ptr [ESP + 0x108],0x1     ; 00454f8a
        ;   Label: LAB_00454f8a
    JLE 0x00454e34                      ; 00454f92
        ;   XREF to: 00454e34 (CONDITIONAL_JUMP)  ; LAB_00454e34
    MOV ESI,dword ptr [ESP + 0xf8]      ; 00454f98
    PUSH ESI                            ; 00454f9f
    MOV EDI,dword ptr [ESP + 0x108]     ; 00454fa0
    PUSH EDI                            ; 00454fa7
    PUSH EBP                            ; 00454fa8
    LEA ESI,[ESP + 0xb4]                ; 00454fa9
    LEA EDI,[ESP + 0x54]                ; 00454fb0
    CALL core_dcamera.cpp_FUN_0044dd70  ; 00454fb4
        ;   XREF to: 0044dd70 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0044dd70()
    LEA ESI,[ESP + 0xb4]                ; 00454fb9
    ADD ESP,0xc                         ; 00454fc0
    MOVSD ES:EDI,ESI                    ; 00454fc3
    MOVSD ES:EDI,ESI                    ; 00454fc4
    MOVSD ES:EDI,ESI                    ; 00454fc5
    CMP dword ptr [ESP + 0x50],0x1f400  ; 00454fc6
    JG 0x00454e34                       ; 00454fce
        ;   XREF to: 00454e34 (CONDITIONAL_JUMP)  ; LAB_00454e34
    JMP 0x00454e35                      ; 00454fd4
        ;   XREF to: 00454e35 (UNCONDITIONAL_JUMP)  ; LAB_00454e35
    MOV EAX,dword ptr [EBP + 0x148]     ; 00454fd9
        ;   Label: LAB_00454fd9
    MOV ECX,dword ptr [ESP + 0x108]     ; 00454fdf
    SUB EAX,0x2                         ; 00454fe6
    CMP EAX,ECX                         ; 00454fe9
    JLE 0x00454e43                      ; 00454feb
        ;   XREF to: 00454e43 (CONDITIONAL_JUMP)  ; LAB_00454e43
    MOV ESI,dword ptr [ESP + 0xf4]      ; 00454ff1
    PUSH ESI                            ; 00454ff8
    MOV EDI,dword ptr [ESP + 0x108]     ; 00454ff9
    PUSH EDI                            ; 00455000
    PUSH EBP                            ; 00455001
    LEA ESI,[ESP + 0x24]                ; 00455002
    LEA EDI,[ESP + 0x6c]                ; 00455006
    CALL core_dcamera.cpp_FUN_0044dd70  ; 0045500a
        ;   XREF to: 0044dd70 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0044dd70()
    LEA ESI,[ESP + 0x24]                ; 0045500f
    ADD ESP,0xc                         ; 00455013
    MOVSD ES:EDI,ESI                    ; 00455016
    MOVSD ES:EDI,ESI                    ; 00455017
    MOVSD ES:EDI,ESI                    ; 00455018
    CMP dword ptr [ESP + 0x68],0x1f400  ; 00455019
    JG 0x00454e43                       ; 00455021
        ;   XREF to: 00454e43 (CONDITIONAL_JUMP)  ; LAB_00454e43
    JMP 0x00454e44                      ; 00455027
        ;   XREF to: 00454e44 (UNCONDITIONAL_JUMP)  ; LAB_00454e44
    CMP dword ptr [ESP + 0x108],0x1     ; 0045502c
        ;   Label: LAB_0045502c
    JLE 0x00454e5c                      ; 00455034
        ;   XREF to: 00454e5c (CONDITIONAL_JUMP)  ; LAB_00454e5c
    MOV ESI,dword ptr [ESP + 0xf0]      ; 0045503a
    PUSH ESI                            ; 00455041
    LEA EAX,[EDX + 0x1]                 ; 00455042
    PUSH EAX                            ; 00455045
    PUSH EBP                            ; 00455046
    LEA ESI,[ESP + 0xc0]                ; 00455047
    LEA EDI,[ESP + 0x90]                ; 0045504e
    CALL core_dcamera.cpp_FUN_0044dd70  ; 00455055
        ;   XREF to: 0044dd70 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0044dd70()
    LEA ESI,[ESP + 0xc0]                ; 0045505a
    ADD ESP,0xc                         ; 00455061
    MOVSD ES:EDI,ESI                    ; 00455064
    MOVSD ES:EDI,ESI                    ; 00455065
    MOVSD ES:EDI,ESI                    ; 00455066
    CMP dword ptr [ESP + 0x8c],0x1f400  ; 00455067
    JG 0x00454e5c                       ; 00455072
        ;   XREF to: 00454e5c (CONDITIONAL_JUMP)  ; LAB_00454e5c
    JMP 0x00454e5d                      ; 00455078
        ;   XREF to: 00454e5d (UNCONDITIONAL_JUMP)  ; LAB_00454e5d
    MOV EAX,dword ptr [EBP + 0x148]     ; 0045507d
        ;   Label: LAB_0045507d
    MOV ECX,dword ptr [ESP + 0x108]     ; 00455083
    SUB EAX,0x2                         ; 0045508a
    CMP EAX,ECX                         ; 0045508d
    JLE 0x00454e75                      ; 0045508f
        ;   XREF to: 00454e75 (CONDITIONAL_JUMP)  ; LAB_00454e75
    MOV ESI,dword ptr [ESP + 0xfc]      ; 00455095
    PUSH ESI                            ; 0045509c
    LEA EAX,[EDX + 0x1]                 ; 0045509d
    PUSH EAX                            ; 004550a0
    PUSH EBP                            ; 004550a1
    LEA ESI,[ESP + 0x78]                ; 004550a2
    LEA EDI,[ESP + 0x9c]                ; 004550a6
    CALL core_dcamera.cpp_FUN_0044dd70  ; 004550ad
        ;   XREF to: 0044dd70 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0044dd70()
    LEA ESI,[ESP + 0x78]                ; 004550b2
    ADD ESP,0xc                         ; 004550b6
    MOVSD ES:EDI,ESI                    ; 004550b9
    MOVSD ES:EDI,ESI                    ; 004550ba
    MOVSD ES:EDI,ESI                    ; 004550bb
    CMP dword ptr [ESP + 0x98],0x1f400  ; 004550bc
    JG 0x00454e75                       ; 004550c7
        ;   XREF to: 00454e75 (CONDITIONAL_JUMP)  ; LAB_00454e75
    JMP 0x00454e76                      ; 004550cd
        ;   XREF to: 00454e76 (UNCONDITIONAL_JUMP)  ; LAB_00454e76
    MOV ECX,0x6                         ; 004550d2
        ;   Label: LAB_004550d2
    MOV EDI,dword ptr [ESP + 0xe8]      ; 004550d7
    MOV ESI,ESP                         ; 004550de
    MOVSD.REP ES:EDI,ESI                ; 004550e0
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004550e2
    ADD ESP,0x110                       ; 004550e9
    POP EBP                             ; 004550ef
    POP EDI                             ; 004550f0
    POP EBX                             ; 004550f1
    RET                                 ; 004550f2

