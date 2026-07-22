; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bugs_cpp_CBugs_updateBugRenderingData_FUN_00422c70(int param_1,int param_2,float param_3)
;
; Local Variables:
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined        Stack[-0xa8]:1  local_a8
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
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
; undefined        Stack[-0x48]:1  local_48
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_bugs.cpp_CBugs_attackSwarmTarget_FUN_00422370 at 004224db
;
; Referenced Globals:
;   double DOUBLE_00579d6d = 1.58735232019473E-314
;   double DOUBLE_00579d75 = 0.00100000000000000
;   undefined4 DAT_0059ae98
;   undefined4 DAT_0059aeac
;
; Called Functions:
;   core_bugs.cpp_CBugs_updateBugPathfinding_FUN_004227b0
;   core_bugs.cpp_FUN_00423480
;   core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
;   core_xform.cpp_transformVector3x4_FUN_0055a8b0
;   core_xform.cpp_transformVector3x4InPlace_FUN_0055a910
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00422c70
        ;   Label: core_bugs.cpp_CBugs_updateBugRenderingData_FUN_00422c70
    PUSH ESI                            ; 00422c71
    PUSH EDI                            ; 00422c72
    PUSH EBP                            ; 00422c73
    MOV EBP,ESP                         ; 00422c74
    SUB ESP,0x104                       ; 00422c76
    AND ESP,0xfffffff8                  ; 00422c7c
    MOV EDI,dword ptr [EBP + 0x14]      ; 00422c7f
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00422c82
    MOV ESI,dword ptr [EBP + 0x18]      ; 00422c85
    MOV dword ptr [ESP],EAX             ; 00422c88
    CMP dword ptr [ESI + 0x2c],0x0      ; 00422c8b
    JL 0x0042332b                       ; 00422c8f
        ;   XREF to: 0042332b (CONDITIONAL_JUMP)  ; LAB_0042332b
    FLD float ptr [ESI + 0x38]          ; 00422c95
    FLDZ                                ; 00422c98
    FCOMPP                              ; 00422c9a
    FNSTSW AX                           ; 00422c9c
    SAHF                                ; 00422c9e
    JNC 0x004233c2                      ; 00422c9f
        ;   XREF to: 004233c2 (CONDITIONAL_JUMP)  ; LAB_004233c2
    FLD float ptr [0x0059aeac]          ; 00422ca5 | DAT_0059aeac
    FDIV float ptr [ESI + 0x38]         ; 00422cab
    XOR EBX,EBX                         ; 00422cae
    FSTP float ptr [ESP + 0x8]          ; 00422cb0
    FLD float ptr [ESP]                 ; 00422cb4
        ;   Label: LAB_00422cb4
    MOV EAX,dword ptr [ESI + 0x34]      ; 00422cb7
    FMUL float ptr [ESP + 0x8]          ; 00422cba
    MOV dword ptr [ESP + 0xc],EAX       ; 00422cbe
    FADD float ptr [ESP + 0xc]          ; 00422cc2
    FST float ptr [ESI + 0x34]          ; 00422cc6
    FLD1                                ; 00422cc9
    FCOMPP                              ; 00422ccb
    FNSTSW AX                           ; 00422ccd
    SAHF                                ; 00422ccf
    JBE 0x004233d8                      ; 00422cd0
        ;   XREF to: 004233d8 (CONDITIONAL_JUMP)  ; LAB_004233d8
    FLD float ptr [ESI + 0x34]          ; 00422cd6
        ;   Label: LAB_00422cd6
    FLDZ                                ; 00422cd9
    FCOMPP                              ; 00422cdb
    FNSTSW AX                           ; 00422cdd
    SAHF                                ; 00422cdf
    JBE 0x00422ce9                      ; 00422ce0
        ;   XREF to: 00422ce9 (CONDITIONAL_JUMP)  ; LAB_00422ce9
    MOV dword ptr [ESI + 0x34],0x0      ; 00422ce2
    FLD float ptr [ESI + 0x34]          ; 00422ce9
        ;   Label: LAB_00422ce9
    FLD1                                ; 00422cec
    FCOMPP                              ; 00422cee
    FNSTSW AX                           ; 00422cf0
    SAHF                                ; 00422cf2
    JNC 0x00422cfc                      ; 00422cf3
        ;   XREF to: 00422cfc (CONDITIONAL_JUMP)  ; LAB_00422cfc
    MOV dword ptr [ESI + 0x34],0x3f800000 ; 00422cf5
    MOV EDX,dword ptr [ESI + 0x2c]      ; 00422cfc
        ;   Label: LAB_00422cfc
    LEA EAX,[EDX*0x4 + 0x0]             ; 00422cff
    SUB EAX,EDX                         ; 00422d06
    MOV EBX,dword ptr [EDI + 0x12964]   ; 00422d08
    SHL EAX,0x2                         ; 00422d0e
    MOV EDX,dword ptr [EBX + 0x2234]    ; 00422d11
    LEA EBX,[ESP + 0x94]                ; 00422d17
    ADD EAX,EDX                         ; 00422d1e
    FILD dword ptr [EAX]                ; 00422d20
    FMUL float ptr [0x0059ae98]         ; 00422d22 | DAT_0059ae98
    FSTP float ptr [EBX]                ; 00422d28
    FILD dword ptr [EAX + 0x4]          ; 00422d2a
    FMUL float ptr [0x0059ae98]         ; 00422d2d | DAT_0059ae98
    FSTP float ptr [EBX + 0x4]          ; 00422d33
    FILD dword ptr [EAX + 0x8]          ; 00422d36
    FMUL float ptr [0x0059ae98]         ; 00422d39 | DAT_0059ae98
    FSTP float ptr [EBX + 0x8]          ; 00422d3f
    MOV EDX,dword ptr [ESI + 0x30]      ; 00422d42
    LEA EAX,[EDX*0x4 + 0x0]             ; 00422d45
    SUB EAX,EDX                         ; 00422d4c
    MOV EBX,dword ptr [EDI + 0x12964]   ; 00422d4e
    SHL EAX,0x2                         ; 00422d54
    MOV EDX,dword ptr [EBX + 0x2234]    ; 00422d57
    LEA EBX,[ESP + 0xe8]                ; 00422d5d
    ADD EAX,EDX                         ; 00422d64
    FILD dword ptr [EAX]                ; 00422d66
    FMUL float ptr [0x0059ae98]         ; 00422d68 | DAT_0059ae98
    FSTP float ptr [EBX]                ; 00422d6e
    FILD dword ptr [EAX + 0x4]          ; 00422d70
    FMUL float ptr [0x0059ae98]         ; 00422d73 | DAT_0059ae98
    FSTP float ptr [EBX + 0x4]          ; 00422d79
    FILD dword ptr [EAX + 0x8]          ; 00422d7c
    FMUL float ptr [0x0059ae98]         ; 00422d7f | DAT_0059ae98
    FSTP float ptr [EBX + 0x8]          ; 00422d85
    LEA EAX,[ESI + 0x34]                ; 00422d88
    FLD float ptr [ESP + 0xe8]          ; 00422d8b
    FMUL float ptr [EAX]                ; 00422d92
    FLD float ptr [ESP + 0xec]          ; 00422d94
    FXCH                                ; 00422d9b
    FSTP float ptr [ESP + 0x64]         ; 00422d9d
    FMUL float ptr [EAX]                ; 00422da1
    FLD float ptr [ESP + 0xf0]          ; 00422da3
    FXCH                                ; 00422daa
    FSTP float ptr [ESP + 0x68]         ; 00422dac
    FMUL float ptr [EAX]                ; 00422db0
    FLD1                                ; 00422db2
    FXCH                                ; 00422db4
    FSTP float ptr [ESP + 0x6c]         ; 00422db6
    FSUB float ptr [ESI + 0x34]         ; 00422dba
    FLD float ptr [ESP + 0x94]          ; 00422dbd
    FXCH                                ; 00422dc4
    FSTP float ptr [ESP + 0xfc]         ; 00422dc6
    FMUL float ptr [ESP + 0xfc]         ; 00422dcd
    FLD float ptr [ESP + 0x98]          ; 00422dd4
    FMUL float ptr [ESP + 0xfc]         ; 00422ddb
    FLD float ptr [ESP + 0x9c]          ; 00422de2
    LEA EAX,[EDI + 0x12968]             ; 00422de9
    FMUL float ptr [ESP + 0xfc]         ; 00422def
    PUSH EAX                            ; 00422df6
    LEA EAX,[ESP + 0xe0]                ; 00422df7
    LEA EBX,[ESI + 0x8]                 ; 00422dfe
    PUSH EAX                            ; 00422e01
    FXCH ST2                            ; 00422e02
    FSTP float ptr [ESP + 0xa8]         ; 00422e04
    FSTP float ptr [ESP + 0xac]         ; 00422e0b
    FSTP float ptr [ESP + 0xb0]         ; 00422e12
    FLD float ptr [ESP + 0xa8]          ; 00422e19
    FLD float ptr [ESP + 0xac]          ; 00422e20
    LEA EAX,[ESP + 0x78]                ; 00422e27
    FLD float ptr [ESP + 0xb0]          ; 00422e2b
    PUSH EAX                            ; 00422e32
    FXCH ST2                            ; 00422e33
    FADD float ptr [ESP + 0x70]         ; 00422e35
    FXCH                                ; 00422e39
    FADD float ptr [ESP + 0x74]         ; 00422e3b
    FXCH ST2                            ; 00422e3f
    FADD float ptr [ESP + 0x78]         ; 00422e41
    FXCH                                ; 00422e45
    FSTP float ptr [ESP + 0xe8]         ; 00422e47
    FXCH                                ; 00422e4e
    FSTP float ptr [ESP + 0xec]         ; 00422e50
    FSTP float ptr [ESP + 0xf0]         ; 00422e57
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 00422e5e
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4_FUN_0055a8b0()
    ADD ESP,0xc                         ; 00422e63
    CMP EBX,EAX                         ; 00422e66
    JZ 0x00422e7a                       ; 00422e68
        ;   XREF to: 00422e7a (CONDITIONAL_JUMP)  ; LAB_00422e7a
    MOV EDX,dword ptr [EAX]             ; 00422e6a
    MOV dword ptr [EBX],EDX             ; 00422e6c
    MOV EDX,dword ptr [EAX + 0x4]       ; 00422e6e
    MOV dword ptr [EBX + 0x4],EDX       ; 00422e71
    MOV EDX,dword ptr [EAX + 0x8]       ; 00422e74
    MOV dword ptr [EBX + 0x8],EDX       ; 00422e77
    FLD float ptr [ESP + 0xe8]          ; 00422e7a
        ;   Label: LAB_00422e7a
    FLD float ptr [ESP + 0xec]          ; 00422e81
    FLD float ptr [ESP + 0xf0]          ; 00422e88
    FXCH ST2                            ; 00422e8f
    FSUB float ptr [ESP + 0x94]         ; 00422e91
    FXCH                                ; 00422e98
    FSUB float ptr [ESP + 0x98]         ; 00422e9a
    FXCH ST2                            ; 00422ea1
    FSUB float ptr [ESP + 0x9c]         ; 00422ea3
    FXCH                                ; 00422eaa
    FSTP float ptr [ESP + 0x40]         ; 00422eac
    FXCH                                ; 00422eb0
    FSTP float ptr [ESP + 0x44]         ; 00422eb2
    FSTP float ptr [ESP + 0x48]         ; 00422eb6
    MOV EDX,dword ptr [ESI + 0x2c]      ; 00422eba
    LEA EAX,[EDX*0x4 + 0x0]             ; 00422ebd
    MOV ECX,dword ptr [EDI + 0x12964]   ; 00422ec4
    ADD EAX,EDX                         ; 00422eca
    PUSH ECX                            ; 00422ecc
    MOV EDX,dword ptr [EDI + EAX*0x8 + 0x129a4] ; 00422ecd
    MOV EAX,dword ptr [EDI + 0x12998]   ; 00422ed4
    LEA EBX,[EDX*0x8 + 0x0]             ; 00422eda
    SHL EAX,0x2                         ; 00422ee1
    ADD EBX,EDX                         ; 00422ee4
    MOV dword ptr [ESP + 0x104],EAX     ; 00422ee6
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020 ; 00422eed
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020()
    ADD ESP,0x4                         ; 00422ef2
    ADD EAX,dword ptr [ESP + 0x100]     ; 00422ef5
    ADD EBX,EBX                         ; 00422efc
    MOV EDX,dword ptr [EAX + 0x7c]      ; 00422efe
    ADD EDX,EBX                         ; 00422f01
    XOR EBX,EBX                         ; 00422f03
    MOV BX,word ptr [EDX]               ; 00422f05
    LEA EAX,[EBX*0x4 + 0x0]             ; 00422f08
    MOV ECX,dword ptr [EDI + 0x12964]   ; 00422f0f
    SUB EAX,EBX                         ; 00422f15
    MOV ECX,dword ptr [ECX + 0x2234]    ; 00422f17
    SHL EAX,0x2                         ; 00422f1d
    LEA EBX,[ESP + 0x94]                ; 00422f20
    ADD EAX,ECX                         ; 00422f27
    FILD dword ptr [EAX]                ; 00422f29
    FMUL float ptr [0x0059ae98]         ; 00422f2b | DAT_0059ae98
    FSTP float ptr [EBX]                ; 00422f31
    FILD dword ptr [EAX + 0x4]          ; 00422f33
    FMUL float ptr [0x0059ae98]         ; 00422f36 | DAT_0059ae98
    FSTP float ptr [EBX + 0x4]          ; 00422f3c
    FILD dword ptr [EAX + 0x8]          ; 00422f3f
    FMUL float ptr [0x0059ae98]         ; 00422f42 | DAT_0059ae98
    FSTP float ptr [EBX + 0x8]          ; 00422f48
    XOR EBX,EBX                         ; 00422f4b
    MOV BX,word ptr [EDX + 0x2]         ; 00422f4d
    LEA EAX,[EBX*0x4 + 0x0]             ; 00422f51
    SUB EAX,EBX                         ; 00422f58
    MOV ECX,dword ptr [EDI + 0x12964]   ; 00422f5a
    LEA EBX,[EAX*0x4 + 0x0]             ; 00422f60
    MOV EAX,dword ptr [ECX + 0x2234]    ; 00422f67
    ADD EAX,EBX                         ; 00422f6d
    LEA EBX,[ESP + 0xe8]                ; 00422f6f
    FILD dword ptr [EAX]                ; 00422f76
    FMUL float ptr [0x0059ae98]         ; 00422f78 | DAT_0059ae98
    FSTP float ptr [EBX]                ; 00422f7e
    FILD dword ptr [EAX + 0x4]          ; 00422f80
    FMUL float ptr [0x0059ae98]         ; 00422f83 | DAT_0059ae98
    FSTP float ptr [EBX + 0x4]          ; 00422f89
    FILD dword ptr [EAX + 0x8]          ; 00422f8c
    FMUL float ptr [0x0059ae98]         ; 00422f8f | DAT_0059ae98
    FSTP float ptr [EBX + 0x8]          ; 00422f95
    MOV EBX,dword ptr [EDI + 0x12964]   ; 00422f98
    MOV DX,word ptr [EDX + 0x4]         ; 00422f9e
    AND EDX,0xffff                      ; 00422fa2
    LEA EAX,[EDX*0x4 + 0x0]             ; 00422fa8
    SUB EAX,EDX                         ; 00422faf
    SHL EAX,0x2                         ; 00422fb1
    MOV EDX,dword ptr [EBX + 0x2234]    ; 00422fb4
    LEA EBX,[ESP + 0xb8]                ; 00422fba
    ADD EAX,EDX                         ; 00422fc1
    FILD dword ptr [EAX]                ; 00422fc3
    FMUL float ptr [0x0059ae98]         ; 00422fc5 | DAT_0059ae98
    FSTP float ptr [EBX]                ; 00422fcb
    FILD dword ptr [EAX + 0x4]          ; 00422fcd
    FMUL float ptr [0x0059ae98]         ; 00422fd0 | DAT_0059ae98
    FSTP float ptr [EBX + 0x4]          ; 00422fd6
    FILD dword ptr [EAX + 0x8]          ; 00422fd9
    FMUL float ptr [0x0059ae98]         ; 00422fdc | DAT_0059ae98
    FSTP float ptr [EBX + 0x8]          ; 00422fe2
    FLD float ptr [ESP + 0xc0]          ; 00422fe5
    FLD float ptr [ESP + 0xec]          ; 00422fec
    FSUB float ptr [ESP + 0x98]         ; 00422ff3
    FXCH                                ; 00422ffa
    FSUB float ptr [ESP + 0xf0]         ; 00422ffc
    FXCH                                ; 00423003
    FSTP float ptr [ESP + 0xc8]         ; 00423005
    FSTP float ptr [ESP + 0x84]         ; 0042300c
    FLD float ptr [ESP + 0xc8]          ; 00423013
    FMUL float ptr [ESP + 0x84]         ; 0042301a
    FLD float ptr [ESP + 0xb8]          ; 00423021
    FLD float ptr [ESP + 0xf0]          ; 00423028
    FSUB float ptr [ESP + 0x9c]         ; 0042302f
    FXCH                                ; 00423036
    FSUB float ptr [ESP + 0xe8]         ; 00423038
    FXCH                                ; 0042303f
    FSTP float ptr [ESP + 0xcc]         ; 00423041
    FSTP float ptr [ESP + 0x7c]         ; 00423048
    FLD float ptr [ESP + 0xcc]          ; 0042304c
    FMUL float ptr [ESP + 0x7c]         ; 00423053
    FLD float ptr [ESP + 0xbc]          ; 00423057
    FLD float ptr [ESP + 0xe8]          ; 0042305e
    FSUB float ptr [ESP + 0x94]         ; 00423065
    FXCH                                ; 0042306c
    FSUB float ptr [ESP + 0xec]         ; 0042306e
    FXCH                                ; 00423075
    FSTP float ptr [ESP + 0xc4]         ; 00423077
    FSTP float ptr [ESP + 0x80]         ; 0042307e
    FLD float ptr [ESP + 0xc4]          ; 00423085
    FMUL float ptr [ESP + 0x80]         ; 0042308c
    FLD float ptr [ESP + 0xcc]          ; 00423093
    FMUL float ptr [ESP + 0x80]         ; 0042309a
    FLD float ptr [ESP + 0xc4]          ; 004230a1
    FMUL float ptr [ESP + 0x84]         ; 004230a8
    FLD float ptr [ESP + 0xc8]          ; 004230af
    FXCH                                ; 004230b6
    FSUBP ST4,ST0                       ; 004230b8
    FMUL float ptr [ESP + 0x7c]         ; 004230ba
    FXCH ST3                            ; 004230be
    FST float ptr [ESP + 0x5c]          ; 004230c0
    FMUL float ptr [ESP + 0x48]         ; 004230c4
    FXCH ST3                            ; 004230c8
    FSUBP ST2,ST0                       ; 004230ca
    FSUBP ST3,ST0                       ; 004230cc
    FST float ptr [ESP + 0x60]          ; 004230ce
    FMUL float ptr [ESP + 0x40]         ; 004230d2
    FXCH ST2                            ; 004230d6
    FST float ptr [ESP + 0x58]          ; 004230d8
    FMUL float ptr [ESP + 0x44]         ; 004230dc
    FLD float ptr [ESP + 0x60]          ; 004230e0
    FMUL float ptr [ESP + 0x44]         ; 004230e4
    FLD float ptr [ESP + 0x58]          ; 004230e8
    FMUL float ptr [ESP + 0x48]         ; 004230ec
    FLD float ptr [ESP + 0x5c]          ; 004230f0
    FMUL float ptr [ESP + 0x40]         ; 004230f4
    FLD float ptr [ESP + 0x44]          ; 004230f8
    FXCH                                ; 004230fc
    FSUBP ST4,ST0                       ; 004230fe
    FXCH ST2                            ; 00423100
    FSUBP ST4,ST0                       ; 00423102
    FXCH ST2                            ; 00423104
    FSTP float ptr [ESP + 0x90]         ; 00423106
    FMUL float ptr [ESP + 0x90]         ; 0042310d
    FXCH ST2                            ; 00423114
    FSTP float ptr [ESP + 0x88]         ; 00423116
    FLD float ptr [ESP + 0x48]          ; 0042311d
    FMUL float ptr [ESP + 0x88]         ; 00423121
    FXCH                                ; 00423128
    FSUBP ST3,ST0                       ; 0042312a
    FLD float ptr [ESP + 0x40]          ; 0042312c
    FXCH ST3                            ; 00423130
    FSTP float ptr [ESP + 0x8c]         ; 00423132
    FXCH ST2                            ; 00423139
    FMUL float ptr [ESP + 0x8c]         ; 0042313b
    FLD float ptr [ESP + 0x48]          ; 00423142
    FMUL float ptr [ESP + 0x8c]         ; 00423146
    FLD float ptr [ESP + 0x40]          ; 0042314d
    FMUL float ptr [ESP + 0x90]         ; 00423151
    FLD float ptr [ESP + 0x44]          ; 00423158
    FMUL float ptr [ESP + 0x88]         ; 0042315c
    LEA EAX,[ESP + 0x4c]                ; 00423163
    LEA EDX,[ESP + 0x58]                ; 00423167
    FXCH ST2                            ; 0042316b
    FSUBP ST4,ST0                       ; 0042316d
    FSUBP ST4,ST0                       ; 0042316f
    FSUBP                               ; 00423171
    FXCH                                ; 00423173
    FSTP float ptr [ESP + 0x4c]         ; 00423175
    FXCH                                ; 00423179
    FSTP float ptr [ESP + 0x50]         ; 0042317b
    FSTP float ptr [ESP + 0x54]         ; 0042317f
    CMP EDX,EAX                         ; 00423183
    JZ 0x0042319f                       ; 00423185
        ;   XREF to: 0042319f (CONDITIONAL_JUMP)  ; LAB_0042319f
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00423187
    MOV dword ptr [ESP + 0x58],EAX      ; 0042318b
    MOV EAX,dword ptr [ESP + 0x50]      ; 0042318f
    MOV dword ptr [ESP + 0x5c],EAX      ; 00423193
    MOV EAX,dword ptr [ESP + 0x54]      ; 00423197
    MOV dword ptr [ESP + 0x60],EAX      ; 0042319b
    FLD float ptr [ESP + 0x5c]          ; 0042319f
        ;   Label: LAB_0042319f
    FMUL ST0                            ; 004231a3
    FLD float ptr [ESP + 0x58]          ; 004231a5
    FMUL ST0                            ; 004231a9
    FADDP                               ; 004231ab
    FLD float ptr [ESP + 0x60]          ; 004231ad
    FMUL ST0                            ; 004231b1
    FADDP                               ; 004231b3
    FSQRT                               ; 004231b5
    FST float ptr [ESP + 0x10]          ; 004231b7
    FLDZ                                ; 004231bb
    FCOMPP                              ; 004231bd
    FNSTSW AX                           ; 004231bf
    SAHF                                ; 004231c1
    JNC 0x00423426                      ; 004231c2
        ;   XREF to: 00423426 (CONDITIONAL_JUMP)  ; LAB_00423426
    FLD1                                ; 004231c8
    FLD float ptr [ESP + 0x58]          ; 004231ca
    FXCH                                ; 004231ce
    FDIV float ptr [ESP + 0x10]         ; 004231d0
    FXCH                                ; 004231d4
    FMUL ST1                            ; 004231d6
    FLD float ptr [ESP + 0x5c]          ; 004231d8
    FMUL ST2                            ; 004231dc
    FLD float ptr [ESP + 0x60]          ; 004231de
    FMULP ST3                           ; 004231e2
    FXCH                                ; 004231e4
    FSTP float ptr [ESP + 0x58]         ; 004231e6
    FSTP float ptr [ESP + 0x5c]         ; 004231ea
    FSTP float ptr [ESP + 0x60]         ; 004231ee
    FLD float ptr [ESP + 0x8c]          ; 004231f2
        ;   Label: LAB_004231f2
    FMUL ST0                            ; 004231f9
    FLD float ptr [ESP + 0x88]          ; 004231fb
    FMUL ST0                            ; 00423202
    FADDP                               ; 00423204
    FLD float ptr [ESP + 0x90]          ; 00423206
    FMUL ST0                            ; 0042320d
    FADDP                               ; 0042320f
    FSQRT                               ; 00423211
    FST float ptr [ESP + 0x4]           ; 00423213
    FLDZ                                ; 00423217
    FCOMPP                              ; 00423219
    FNSTSW AX                           ; 0042321b
    SAHF                                ; 0042321d
    JNC 0x00423439                      ; 0042321e
        ;   XREF to: 00423439 (CONDITIONAL_JUMP)  ; LAB_00423439
    FLD1                                ; 00423224
    FLD float ptr [ESP + 0x88]          ; 00423226
    FXCH                                ; 0042322d
    FDIV float ptr [ESP + 0x4]          ; 0042322f
    FXCH                                ; 00423233
    FMUL ST1                            ; 00423235
    FLD float ptr [ESP + 0x8c]          ; 00423237
    FMUL ST2                            ; 0042323e
    FLD float ptr [ESP + 0x90]          ; 00423240
    FMULP ST3                           ; 00423247
    FXCH                                ; 00423249
    FSTP float ptr [ESP + 0x88]         ; 0042324b
    FSTP float ptr [ESP + 0x8c]         ; 00423252
    FSTP float ptr [ESP + 0x90]         ; 00423259
    FLD float ptr [ESP + 0x44]          ; 00423260
        ;   Label: LAB_00423260
    FMUL ST0                            ; 00423264
    FLD float ptr [ESP + 0x40]          ; 00423266
    FMUL ST0                            ; 0042326a
    FADDP                               ; 0042326c
    FLD float ptr [ESP + 0x48]          ; 0042326e
    FMUL ST0                            ; 00423272
    FADDP                               ; 00423274
    FSQRT                               ; 00423276
    FST float ptr [ESP + 0x14]          ; 00423278
    FLDZ                                ; 0042327c
    FCOMPP                              ; 0042327e
    FNSTSW AX                           ; 00423280
    SAHF                                ; 00423282
    JNC 0x00423455                      ; 00423283
        ;   XREF to: 00423455 (CONDITIONAL_JUMP)  ; LAB_00423455
    FLD1                                ; 00423289
    FLD float ptr [ESP + 0x40]          ; 0042328b
    FXCH                                ; 0042328f
    FDIV float ptr [ESP + 0x14]         ; 00423291
    FXCH                                ; 00423295
    FMUL ST1                            ; 00423297
    FLD float ptr [ESP + 0x44]          ; 00423299
    FMUL ST2                            ; 0042329d
    FLD float ptr [ESP + 0x48]          ; 0042329f
    FMULP ST3                           ; 004232a3
    FXCH                                ; 004232a5
    FSTP float ptr [ESP + 0x40]         ; 004232a7
    FSTP float ptr [ESP + 0x44]         ; 004232ab
    FSTP float ptr [ESP + 0x48]         ; 004232af
    MOV EAX,dword ptr [ESP + 0x88]      ; 004232b3
        ;   Label: LAB_004232b3
    MOV dword ptr [ESP + 0x18],EAX      ; 004232ba
    MOV EAX,dword ptr [ESP + 0x58]      ; 004232be
    MOV dword ptr [ESP + 0x1c],EAX      ; 004232c2
    MOV EAX,dword ptr [ESP + 0x40]      ; 004232c6
    MOV dword ptr [ESP + 0x20],EAX      ; 004232ca
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004232ce
    MOV dword ptr [ESP + 0x24],EAX      ; 004232d5
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004232d9
    MOV dword ptr [ESP + 0x28],EAX      ; 004232dd
    MOV EAX,dword ptr [ESP + 0x44]      ; 004232e1
    MOV dword ptr [ESP + 0x2c],EAX      ; 004232e5
    MOV EAX,dword ptr [ESP + 0x90]      ; 004232e9
    MOV dword ptr [ESP + 0x30],EAX      ; 004232f0
    MOV EAX,dword ptr [ESP + 0x60]      ; 004232f4
    MOV dword ptr [ESP + 0x34],EAX      ; 004232f8
    MOV EAX,dword ptr [ESP + 0x48]      ; 004232fc
    MOV dword ptr [ESP + 0x38],EAX      ; 00423300
    LEA EAX,[ESP + 0xd0]                ; 00423304
    PUSH EAX                            ; 0042330b
    LEA EAX,[ESP + 0x1c]                ; 0042330c
    PUSH EAX                            ; 00423310
    ADD ESI,0x14                        ; 00423311
    CALL core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0 ; 00423314
        ;   XREF to: 0044dbd0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0()
    ADD ESP,0x8                         ; 00423319
    CMP ESI,EAX                         ; 0042331c
    JNZ 0x00423468                      ; 0042331e
        ;   XREF to: 00423468 (CONDITIONAL_JUMP)  ; LAB_00423468
    MOV ESP,EBP                         ; 00423324
        ;   Label: LAB_00423324
    POP EBP                             ; 00423326
    POP EDI                             ; 00423327
    POP ESI                             ; 00423328
    POP EBX                             ; 00423329
    RET                                 ; 0042332a
    MOV EDX,dword ptr [ESI + 0x30]      ; 0042332b
        ;   Label: LAB_0042332b
    LEA EAX,[EDX*0x4 + 0x0]             ; 0042332e
    SUB EAX,EDX                         ; 00423335
    MOV EBX,dword ptr [EDI + 0x12964]   ; 00423337
    LEA EDX,[EAX*0x4 + 0x0]             ; 0042333d
    MOV EAX,dword ptr [EBX + 0x2234]    ; 00423344
    LEA EBX,[ESP + 0xac]                ; 0042334a
    ADD EAX,EDX                         ; 00423351
    FILD dword ptr [EAX]                ; 00423353
    FMUL float ptr [0x0059ae98]         ; 00423355 | DAT_0059ae98
    FSTP float ptr [EBX]                ; 0042335b
    FILD dword ptr [EAX + 0x4]          ; 0042335d
    FMUL float ptr [0x0059ae98]         ; 00423360 | DAT_0059ae98
    FSTP float ptr [EBX + 0x4]          ; 00423366
    FILD dword ptr [EAX + 0x8]          ; 00423369
    FMUL float ptr [0x0059ae98]         ; 0042336c | DAT_0059ae98
    FSTP float ptr [EBX + 0x8]          ; 00423372
    LEA EAX,[EDI + 0x12968]             ; 00423375
    PUSH EAX                            ; 0042337b
    LEA EAX,[ESP + 0xb0]                ; 0042337c
    PUSH EAX                            ; 00423383
    CALL core_xform.cpp_transformVector3x4InPlace_FUN_0055a910 ; 00423384
        ;   XREF to: 0055a910 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4InPlace_FUN_0055a910()
    ADD ESP,0x8                         ; 00423389
    LEA EAX,[ESP + 0xac]                ; 0042338c
    PUSH EAX                            ; 00423393
    PUSH dword ptr [ESP + 0x4]          ; 00423394
    PUSH ESI                            ; 00423398
    PUSH EDI                            ; 00423399
    CALL core_bugs.cpp_CBugs_updateBugPathfinding_FUN_004227b0 ; 0042339a
        ;   XREF to: 004227b0 (UNCONDITIONAL_CALL)  ; undefined core_bugs.cpp_CBugs_updateBugPathfinding_FUN_004227b0()
    ADD ESP,0x10                        ; 0042339f
    TEST EAX,EAX                        ; 004233a2
    JZ 0x00423324                       ; 004233a4
        ;   XREF to: 00423324 (CONDITIONAL_JUMP)  ; LAB_00423324
    PUSH ESI                            ; 004233aa
    PUSH EDI                            ; 004233ab
    CALL core_bugs.cpp_FUN_00423480     ; 004233ac
        ;   XREF to: 00423480 (UNCONDITIONAL_CALL)  ; undefined core_bugs.cpp_FUN_00423480()
    ADD ESP,0x8                         ; 004233b1
    MOV dword ptr [ESI + 0x34],0x0      ; 004233b4
    MOV ESP,EBP                         ; 004233bb
    POP EBP                             ; 004233bd
    POP EDI                             ; 004233be
    POP ESI                             ; 004233bf
    POP EBX                             ; 004233c0
    RET                                 ; 004233c1
    PUSH ESI                            ; 004233c2
        ;   Label: LAB_004233c2
    PUSH EDI                            ; 004233c3
    CALL core_bugs.cpp_FUN_00423480     ; 004233c4
        ;   XREF to: 00423480 (UNCONDITIONAL_CALL)  ; undefined core_bugs.cpp_FUN_00423480()
    ADD ESP,0x8                         ; 004233c9
    MOV dword ptr [ESI + 0x34],0x0      ; 004233cc
    JMP 0x00422cfc                      ; 004233d3
        ;   XREF to: 00422cfc (UNCONDITIONAL_JUMP)  ; LAB_00422cfc
    PUSH ESI                            ; 004233d8
        ;   Label: LAB_004233d8
    PUSH EDI                            ; 004233d9
    CALL core_bugs.cpp_FUN_00423480     ; 004233da
        ;   XREF to: 00423480 (UNCONDITIONAL_CALL)  ; undefined core_bugs.cpp_FUN_00423480()
    ADD ESP,0x8                         ; 004233df
    FLD float ptr [ESP + 0xc]           ; 004233e2
    FLD1                                ; 004233e6
    FSUBRP                              ; 004233e8
    FDIV float ptr [ESP + 0x8]          ; 004233ea
    FLD float ptr [ESI + 0x34]          ; 004233ee
    FADD float ptr [0x00579d6d]         ; 004233f1 | DOUBLE_00579d6d
    FLD float ptr [ESP]                 ; 004233f7
    FXCH ST2                            ; 004233fa
    FSUBR ST0,ST2                       ; 004233fc
    FXCH                                ; 004233fe
    FSTP float ptr [ESI + 0x34]         ; 00423400
    FSTP ST1                            ; 00423403
    FST float ptr [ESP]                 ; 00423405
    FCOMP double ptr [0x00579d75]       ; 00423408 | DOUBLE_00579d75
    FNSTSW AX                           ; 0042340e
    SAHF                                ; 00423410
    JC 0x00422cd6                       ; 00423411
        ;   XREF to: 00422cd6 (CONDITIONAL_JUMP)  ; LAB_00422cd6
    INC EBX                             ; 00423417
    CMP EBX,0x3                         ; 00423418
    JL 0x00422cb4                       ; 0042341b
        ;   XREF to: 00422cb4 (CONDITIONAL_JUMP)  ; LAB_00422cb4
    JMP 0x00422cd6                      ; 00423421
        ;   XREF to: 00422cd6 (UNCONDITIONAL_JUMP)  ; LAB_00422cd6
    XOR ECX,ECX                         ; 00423426
        ;   Label: LAB_00423426
    MOV dword ptr [ESP + 0x5c],ECX      ; 00423428
    MOV dword ptr [ESP + 0x58],ECX      ; 0042342c
    MOV dword ptr [ESP + 0x60],ECX      ; 00423430
    JMP 0x004231f2                      ; 00423434
        ;   XREF to: 004231f2 (UNCONDITIONAL_JUMP)  ; LAB_004231f2
    XOR EAX,EAX                         ; 00423439
        ;   Label: LAB_00423439
    MOV dword ptr [ESP + 0x8c],EAX      ; 0042343b
    MOV dword ptr [ESP + 0x88],EAX      ; 00423442
    MOV dword ptr [ESP + 0x90],EAX      ; 00423449
    JMP 0x00423260                      ; 00423450
        ;   XREF to: 00423260 (UNCONDITIONAL_JUMP)  ; LAB_00423260
    XOR EBX,EBX                         ; 00423455
        ;   Label: LAB_00423455
    MOV dword ptr [ESP + 0x44],EBX      ; 00423457
    MOV dword ptr [ESP + 0x40],EBX      ; 0042345b
    MOV dword ptr [ESP + 0x48],EBX      ; 0042345f
    JMP 0x004232b3                      ; 00423463
        ;   XREF to: 004232b3 (UNCONDITIONAL_JUMP)  ; LAB_004232b3
    MOV EDX,dword ptr [EAX]             ; 00423468
        ;   Label: LAB_00423468
    MOV dword ptr [ESI],EDX             ; 0042346a
    MOV EDX,dword ptr [EAX + 0x4]       ; 0042346c
    MOV dword ptr [ESI + 0x4],EDX       ; 0042346f
    MOV EDX,dword ptr [EAX + 0x8]       ; 00423472
    MOV dword ptr [ESI + 0x8],EDX       ; 00423475
    MOV ESP,EBP                         ; 00423478
    POP EBP                             ; 0042347a
    POP EDI                             ; 0042347b
    POP ESI                             ; 0042347c
    POP EBX                             ; 0042347d
    RET                                 ; 0042347e

