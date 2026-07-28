; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_zombie_cpp_FUN_00560cd0(int param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0x16c]:1  local_16c
; undefined        Stack[-0x13c]:1  local_13c
; undefined        Stack[-0x10c]:1  local_10c
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined        Stack[-0xc4]:1  local_c4
; undefined        Stack[-0xac]:1  local_ac
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined        Stack[-0x88]:1  local_88
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
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined        Stack[-0xc]:1  local_c
;
; Referenced Globals:
;   TerminatedCString s_new_0059877e
;   float FLOAT_00598782 = 0.5
;   double DOUBLE_00598786 = 0.400000000000000
;   undefined4 DAT_02dd1184
;
; Called Functions:
;   core_actor.cpp_CVector_ctor_FUN_0040e160
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
;   core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00
;   core_xform.cpp_transformVector3x4_FUN_0055a8b0
;   crt_string.c__strnicmp_FUN_00564bc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00560cd0
        ;   Label: core_zombie.cpp_FUN_00560cd0
    PUSH EDI                            ; 00560cd1
    PUSH EBP                            ; 00560cd2
    MOV EBP,ESP                         ; 00560cd3
    SUB ESP,0x160                       ; 00560cd5
    SUB EBP,0x7a                        ; 00560cdb
    MOV EBX,ESI                         ; 00560cde
    MOV EDX,dword ptr [EBP + 0x8e]      ; 00560ce0
    MOV EAX,EDX                         ; 00560ce6
    SHL EAX,0x4                         ; 00560ce8
    ADD EAX,EDX                         ; 00560ceb
    MOV EDX,dword ptr [EBP + 0x8a]      ; 00560ced
    SHL EAX,0x2                         ; 00560cf3
    ADD EAX,EDX                         ; 00560cf6
    MOV ESI,dword ptr [EAX + 0x24ac]    ; 00560cf8
    MOV EAX,dword ptr [EAX + 0x24a4]    ; 00560cfe
    MOV dword ptr [EBP + 0x76],EAX      ; 00560d04
    MOV EAX,dword ptr [EDX + 0xbd38]    ; 00560d07
    CMP EAX,0x1                         ; 00560d0d
    JC 0x00560f48                       ; 00560d10
        ;   XREF to: 00560f48 (CONDITIONAL_JUMP)  ; LAB_00560f48
    JA 0x00560f3f                       ; 00560d16
        ;   XREF to: 00560f3f (CONDITIONAL_JUMP)  ; LAB_00560f3f
    PUSH 0x3                            ; 00560d1c
        ;   Label: LAB_00560d1c
    MOV EAX,dword ptr [EBP + 0x8a]      ; 00560d1e
    PUSH 0x59877e                       ; 00560d24 | = "new"
    ADD EAX,0x23b0                      ; 00560d29
    PUSH EAX                            ; 00560d2e
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 00560d2f
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00560d34
    TEST EAX,EAX                        ; 00560d37
    JNZ 0x00560f25                      ; 00560d39
        ;   XREF to: 00560f25 (CONDITIONAL_JUMP)  ; LAB_00560f25
    MOV ECX,0xbf7c6a90                  ; 00560d3f
    MOV EDI,0x3f7343c8                  ; 00560d44
    MOV EDX,0xbf93b0b4                  ; 00560d49
    MOV dword ptr [EBP + -0x6],ECX      ; 00560d4e
    MOV dword ptr [EBP + -0xa],EDI      ; 00560d51
    MOV dword ptr [EBP + -0xe],EDX      ; 00560d54
    LEA EAX,[EBP + -0xe]                ; 00560d57
        ;   Label: LAB_00560d57
    PUSH EAX                            ; 00560d5a
    PUSH 0x2dd1184                      ; 00560d5b | DAT_02dd1184
    LEA EAX,[EBP + 0xffffff1a]          ; 00560d60
    PUSH EAX                            ; 00560d66
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 00560d67
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0()
    ADD ESP,0xc                         ; 00560d6c
    LEA EAX,[EBP + -0x56]               ; 00560d6f
    PUSH EAX                            ; 00560d72
    MOV EDX,dword ptr [ESI + 0x14c]     ; 00560d73
    PUSH ESI                            ; 00560d79
    CALL dword ptr [EDX + 0x14]         ; 00560d7a
    ADD ESP,0x8                         ; 00560d7d
    LEA EAX,[EBP + 0x6a]                ; 00560d80
    PUSH EAX                            ; 00560d83
    CALL core_actor.cpp_CVector_ctor_FUN_0040e160 ; 00560d84
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CVector_ctor_FUN_0040e160()
    FLD float ptr [EBP + -0x56]         ; 00560d89
    FLD float ptr [EBP + -0x52]         ; 00560d8c
    FLD float ptr [EBP + -0x4e]         ; 00560d8f
    LEA EAX,[EBP + 0xa]                 ; 00560d92
    ADD ESP,0x4                         ; 00560d95
    FXCH ST2                            ; 00560d98
    FADD float ptr [EBP + -0x4a]        ; 00560d9a
    FXCH                                ; 00560d9d
    FADD float ptr [EBP + -0x46]        ; 00560d9f
    FXCH ST2                            ; 00560da2
    FADD float ptr [EBP + -0x42]        ; 00560da4
    PUSH EAX                            ; 00560da7
    FXCH                                ; 00560da8
    FSTP float ptr [EBP + 0x6a]         ; 00560daa
    FXCH                                ; 00560dad
    FSTP float ptr [EBP + 0x6e]         ; 00560daf
    FSTP float ptr [EBP + 0x72]         ; 00560db2
    CALL core_actor.cpp_CVector_ctor_FUN_0040e160 ; 00560db5
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CVector_ctor_FUN_0040e160()
    FLD float ptr [0x00598782]          ; 00560dba | FLOAT_00598782
    FLD float ptr [EBP + 0x6a]          ; 00560dc0
    FMUL ST1                            ; 00560dc3
    FLD float ptr [EBP + 0x6e]          ; 00560dc5
    FMULP ST2                           ; 00560dc8
    FLD float ptr [EBP + -0x4e]         ; 00560dca
    LEA EAX,[EBP + 0xa]                 ; 00560dcd
    LEA EDX,[EBP + 0x22]                ; 00560dd0
    ADD ESP,0x4                         ; 00560dd3
    FADD double ptr [0x00598786]        ; 00560dd6 | DOUBLE_00598786
    FXCH                                ; 00560ddc
    FSTP float ptr [EBP + 0xa]          ; 00560dde
    FXCH                                ; 00560de1
    FSTP float ptr [EBP + 0xe]          ; 00560de3
    FSTP float ptr [EBP + 0x12]         ; 00560de6
    CMP EDX,EAX                         ; 00560de9
    JZ 0x00560dff                       ; 00560deb
        ;   XREF to: 00560dff (CONDITIONAL_JUMP)  ; LAB_00560dff
    MOV EAX,dword ptr [EBP + 0xa]       ; 00560ded
    MOV dword ptr [EBP + 0x22],EAX      ; 00560df0
    MOV EAX,dword ptr [EBP + 0xe]       ; 00560df3
    MOV dword ptr [EBP + 0x26],EAX      ; 00560df6
    MOV EAX,dword ptr [EBP + 0x12]      ; 00560df9
    MOV dword ptr [EBP + 0x2a],EAX      ; 00560dfc
    MOV EDX,dword ptr [EBP + 0x76]      ; 00560dff
        ;   Label: LAB_00560dff
    LEA EAX,[EDX*0x4 + 0x0]             ; 00560e02
    MOV ESI,dword ptr [EBP + 0x8a]      ; 00560e09
    SUB EAX,EDX                         ; 00560e0f
    ADD ESI,0xfd0                       ; 00560e11
    SHL EAX,0x4                         ; 00560e17
    ADD EAX,ESI                         ; 00560e1a
    MOV ESI,dword ptr [EBP + 0x8a]      ; 00560e1c
    CMP EDX,dword ptr [ESI + 0xbdb8]    ; 00560e22
    JNZ 0x00560fe4                      ; 00560e28
        ;   XREF to: 00560fe4 (CONDITIONAL_JUMP)  ; LAB_00560fe4
    MOV EDX,0xbecccccd                  ; 00560e2e
    PUSH EAX                            ; 00560e33
    LEA EAX,[EBP + 0x16]                ; 00560e34
    XOR ECX,ECX                         ; 00560e37
    PUSH EAX                            ; 00560e39
    LEA EAX,[EBP + -0x2]                ; 00560e3a
    MOV dword ptr [EBP + 0x16],EDX      ; 00560e3d
    PUSH EAX                            ; 00560e40
    MOV dword ptr [EBP + 0x1a],ECX      ; 00560e41
    MOV dword ptr [EBP + 0x1e],ECX      ; 00560e44
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 00560e47
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_0055a8b0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
        ;   Label: LAB_00560e47
    MOV EDX,EAX                         ; 00560e4c
    LEA EAX,[EBP + 0x46]                ; 00560e4e
    ADD ESP,0xc                         ; 00560e51
    CMP EAX,EDX                         ; 00560e54
    JZ 0x00560e69                       ; 00560e56
        ;   XREF to: 00560e69 (CONDITIONAL_JUMP)  ; LAB_00560e69
    MOV EAX,dword ptr [EDX]             ; 00560e58
    MOV dword ptr [EBP + 0x46],EAX      ; 00560e5a
    MOV EAX,dword ptr [EDX + 0x4]       ; 00560e5d
    MOV dword ptr [EBP + 0x4a],EAX      ; 00560e60
    MOV EAX,dword ptr [EDX + 0x8]       ; 00560e63
    MOV dword ptr [EBP + 0x4e],EAX      ; 00560e66
    MOV EDX,dword ptr [EBP + 0x76]      ; 00560e69
        ;   Label: LAB_00560e69
    LEA EAX,[EDX*0x4 + 0x0]             ; 00560e6c
    SUB EAX,EDX                         ; 00560e73
    MOV EDX,dword ptr [EBP + 0x8a]      ; 00560e75
    SHL EAX,0x4                         ; 00560e7b
    ADD EDX,0xfd0                       ; 00560e7e
    ADD EAX,EDX                         ; 00560e84
    PUSH EAX                            ; 00560e86
    LEA EAX,[EBP + 0xffffff1a]          ; 00560e87
    PUSH EAX                            ; 00560e8d
    LEA ESI,[EBP + 0xffffff4a]          ; 00560e8e
    LEA EDI,[EBP + 0xffffff7a]          ; 00560e94
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 00560e9a
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    ADD ESP,0x8                         ; 00560e9f
    LEA EAX,[EBP + 0xffffff7a]          ; 00560ea2
    MOV ECX,0xc                         ; 00560ea8
    PUSH EAX                            ; 00560ead
    LEA EAX,[EBP + 0x22]                ; 00560eae
    LEA ESI,[EBP + 0xffffff4a]          ; 00560eb1
    PUSH EAX                            ; 00560eb7
    LEA EAX,[EBP + -0x26]               ; 00560eb8
    MOVSD.REP ES:EDI,ESI                ; 00560ebb
    PUSH EAX                            ; 00560ebd
    LEA ESI,[EBP + 0xffffff7a]          ; 00560ebe
    MOV EDI,EBX                         ; 00560ec4
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 00560ec6
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_0055a8b0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    FLD float ptr [EBP + 0x46]          ; 00560ecb
    FLD float ptr [EBP + 0x4a]          ; 00560ece
    FLD float ptr [EBP + 0x4e]          ; 00560ed1
    FLD float ptr [EBP + -0x7a]         ; 00560ed4
    FLD float ptr [EBP + -0x6a]         ; 00560ed7
    FLD float ptr [EBP + -0x5a]         ; 00560eda
    MOV ECX,0xc                         ; 00560edd
    FXCH ST5                            ; 00560ee2
    FSUB float ptr [EAX]                ; 00560ee4
    ADD ESP,0xc                         ; 00560ee6
    FSTP float ptr [EBP + -0x1a]        ; 00560ee9
    FXCH ST3                            ; 00560eec
    FSUB float ptr [EAX + 0x4]          ; 00560eee
    FXCH                                ; 00560ef1
    FADD float ptr [EBP + -0x1a]        ; 00560ef3
    FXCH                                ; 00560ef6
    FSTP float ptr [EBP + -0x16]        ; 00560ef8
    FXCH                                ; 00560efb
    FSUB float ptr [EAX + 0x8]          ; 00560efd
    FXCH ST2                            ; 00560f00
    FADD float ptr [EBP + -0x16]        ; 00560f02
    FXCH ST2                            ; 00560f05
    FSTP float ptr [EBP + -0x12]        ; 00560f07
    FSTP float ptr [EBP + -0x7a]        ; 00560f0a
    FXCH                                ; 00560f0d
    FADD float ptr [EBP + -0x12]        ; 00560f0f
    FXCH                                ; 00560f12
    FSTP float ptr [EBP + -0x6a]        ; 00560f14
    FSTP float ptr [EBP + -0x5a]        ; 00560f17
    MOVSD.REP ES:EDI,ESI                ; 00560f1a
    MOV EAX,EBX                         ; 00560f1c
    LEA ESP,[EBP + 0x7a]                ; 00560f1e
    POP EBP                             ; 00560f21
    POP EDI                             ; 00560f22
    POP EBX                             ; 00560f23
    RET                                 ; 00560f24
    MOV EAX,0x3f676c8b                  ; 00560f25
        ;   Label: LAB_00560f25
    XOR EDI,EDI                         ; 00560f2a
    MOV ECX,0x3e1eb852                  ; 00560f2c
    MOV dword ptr [EBP + -0x6],EDI      ; 00560f31
    MOV dword ptr [EBP + -0xa],EAX      ; 00560f34
    MOV dword ptr [EBP + -0xe],ECX      ; 00560f37
    JMP 0x00560d57                      ; 00560f3a
        ;   XREF to: 00560d57 (UNCONDITIONAL_JUMP)  ; LAB_00560d57
    CMP EAX,0x3                         ; 00560f3f
        ;   Label: LAB_00560f3f
    JZ 0x00560d1c                       ; 00560f42
        ;   XREF to: 00560d1c (CONDITIONAL_JUMP)  ; LAB_00560d1c
    LEA EAX,[EBP + -0x3e]               ; 00560f48
        ;   Label: LAB_00560f48
    PUSH EAX                            ; 00560f4b
    MOV EDX,dword ptr [ESI + 0x14c]     ; 00560f4c
    PUSH ESI                            ; 00560f52
    CALL dword ptr [EDX + 0x14]         ; 00560f53
    LEA EDX,[EAX + 0xc]                 ; 00560f56
    FLD float ptr [EAX]                 ; 00560f59
    FADD float ptr [EDX]                ; 00560f5b
    FST float ptr [EBP + 0x52]          ; 00560f5d
    FLD float ptr [EAX + 0x4]           ; 00560f60
    FADD float ptr [EDX + 0x4]          ; 00560f63
    FXCH                                ; 00560f66
    FLD float ptr [0x00598782]          ; 00560f68 | FLOAT_00598782
    FXCH                                ; 00560f6e
    FMUL ST1                            ; 00560f70
    FXCH ST2                            ; 00560f72
    FST float ptr [EBP + 0x56]          ; 00560f74
    FLD float ptr [EAX + 0x8]           ; 00560f77
    FADD float ptr [EDX + 0x8]          ; 00560f7a
    FXCH                                ; 00560f7d
    FMUL ST2                            ; 00560f7f
    FXCH                                ; 00560f81
    FST float ptr [EBP + 0x5a]          ; 00560f83
    FMULP ST2                           ; 00560f86
    ADD ESP,0x8                         ; 00560f88
    LEA EAX,[EBP + 0x3a]                ; 00560f8b
    FXCH ST2                            ; 00560f8e
    FSTP float ptr [EBP + 0x3a]         ; 00560f90
    FXCH                                ; 00560f93
    FSTP float ptr [EBP + 0x3e]         ; 00560f95
    LEA EDX,[EBP + 0x22]                ; 00560f98
    FSTP float ptr [EBP + 0x42]         ; 00560f9b
    CMP EDX,EAX                         ; 00560f9e
    JZ 0x00560fb4                       ; 00560fa0
        ;   XREF to: 00560fb4 (CONDITIONAL_JUMP)  ; LAB_00560fb4
    MOV EAX,dword ptr [EBP + 0x3a]      ; 00560fa2
    MOV dword ptr [EBP + 0x22],EAX      ; 00560fa5
    MOV EAX,dword ptr [EBP + 0x3e]      ; 00560fa8
    MOV dword ptr [EBP + 0x26],EAX      ; 00560fab
    MOV EAX,dword ptr [EBP + 0x42]      ; 00560fae
    MOV dword ptr [EBP + 0x2a],EAX      ; 00560fb1
    MOV EDX,dword ptr [EBP + 0x8e]      ; 00560fb4
        ;   Label: LAB_00560fb4
    MOV EAX,EDX                         ; 00560fba
    SHL EAX,0x4                         ; 00560fbc
    ADD EAX,EDX                         ; 00560fbf
    MOV EDX,dword ptr [EBP + 0x8a]      ; 00560fc1
    SHL EAX,0x2                         ; 00560fc7
    ADD EAX,EDX                         ; 00560fca
    MOV ECX,0xc                         ; 00560fcc
    LEA EDI,[EBP + 0xffffff1a]          ; 00560fd1
    LEA ESI,[EAX + 0x24b0]              ; 00560fd7
    MOVSD.REP ES:EDI,ESI                ; 00560fdd
    JMP 0x00560dff                      ; 00560fdf
        ;   XREF to: 00560dff (UNCONDITIONAL_JUMP)  ; LAB_00560dff
    MOV ESI,0x3ecccccd                  ; 00560fe4
        ;   Label: LAB_00560fe4
    PUSH EAX                            ; 00560fe9
    LEA EAX,[EBP + 0x2e]                ; 00560fea
    XOR EDI,EDI                         ; 00560fed
    PUSH EAX                            ; 00560fef
    LEA EAX,[EBP + 0x5e]                ; 00560ff0
    MOV dword ptr [EBP + 0x2e],ESI      ; 00560ff3
    PUSH EAX                            ; 00560ff6
    MOV dword ptr [EBP + 0x32],EDI      ; 00560ff7
    MOV dword ptr [EBP + 0x36],EDI      ; 00560ffa
    JMP 0x00560e47                      ; 00560ffd
        ;   XREF to: 00560e47 (UNCONDITIONAL_JUMP)  ; LAB_00560e47

