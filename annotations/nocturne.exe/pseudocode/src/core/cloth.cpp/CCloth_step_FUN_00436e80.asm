; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CCloth_step_FUN_00436e80(CCloth *this_ptr,CVector3f *position,CVector3f *euler,float delta_time,float floor_y ,CDeformableModelInstance *model_ptr)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   euler
; float            Stack[0x10]:4   delta_time
; float            Stack[0x14]:4   floor_y
; CDeformableModelInstance * Stack[0x18]:4   model_ptr
; Local Variables:
; undefined4       Stack[-0x1e0]:4  local_1e0
; undefined4       Stack[-0x1dc]:4  local_1dc
; undefined        Stack[-0x1d8]:1  local_1d8
; undefined4       Stack[-0x1d0]:4  local_1d0
; undefined4       Stack[-0x1c4]:4  local_1c4
; undefined4       Stack[-0x1b8]:4  local_1b8
; undefined4       Stack[-0x1b0]:4  local_1b0
; undefined4       Stack[-0x1ac]:4  local_1ac
; undefined4       Stack[-0x1a8]:4  local_1a8
; undefined4       Stack[-0x1a4]:4  local_1a4
; undefined4       Stack[-0x1a0]:4  local_1a0
; undefined4       Stack[-0x19c]:4  local_19c
; undefined4       Stack[-0x198]:4  local_198
; undefined4       Stack[-0x194]:4  local_194
; undefined4       Stack[-0x190]:4  local_190
; undefined4       Stack[-0x18c]:4  local_18c
; undefined4       Stack[-0x188]:4  local_188
; undefined4       Stack[-0x184]:4  local_184
; undefined4       Stack[-0x180]:4  local_180
; undefined4       Stack[-0x17c]:4  local_17c
; undefined4       Stack[-0x178]:4  local_178
; undefined4       Stack[-0x174]:4  local_174
; undefined4       Stack[-0x170]:4  local_170
; undefined4       Stack[-0x16c]:4  local_16c
; undefined4       Stack[-0x168]:4  local_168
; undefined4       Stack[-0x164]:4  local_164
; undefined4       Stack[-0x160]:4  local_160
; undefined4       Stack[-0x15c]:4  local_15c
; undefined4       Stack[-0x158]:4  local_158
; undefined4       Stack[-0x154]:4  local_154
; undefined4       Stack[-0x150]:4  local_150
; undefined4       Stack[-0x14c]:4  local_14c
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0x144]:4  local_144
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
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
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined        Stack[-0xcc]:1  local_cc
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined        Stack[-0xa8]:1  local_a8
; undefined        Stack[-0x9c]:1  local_9c
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
;
; XREF[1]:
;   core_cloth.cpp_CCloth_process_FUN_00436e50 at 00436e6e
;
; Referenced Globals:
;   double DOUBLE_0057ae25 = 9999
;   double DOUBLE_0057ae2d = 0.0100000000000000
;   undefined4 DAT_0057ae35
;   undefined4 DAT_0059b360
;   undefined4 DAT_005be368
;   undefined4 DAT_01fb1afc
;   undefined4 DAT_01fb1b00
;   undefined4 DAT_01fb1b04
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00
;   core_cloth.cpp_CCloth_applyConstraints_FUN_004366f0
;   core_cloth.cpp_CCloth_computeBoneTransform_FUN_00436580
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
;   core_xform.cpp_transformVector3x4_FUN_0055a8b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00436e80
        ;   Label: core_cloth.cpp_CCloth_step_FUN_00436e80
    PUSH ESI                            ; 00436e81
    PUSH EDI                            ; 00436e82
    PUSH EBP                            ; 00436e83
    MOV EBP,ESP                         ; 00436e84
    SUB ESP,0x1d0                       ; 00436e86
    AND ESP,0xfffffff8                  ; 00436e8c
    MOV EDI,dword ptr [EBP + 0x14]      ; 00436e8f
    FLD float ptr [EBP + 0x24]          ; 00436e92
    FCOMP double ptr [0x0057ae25]       ; 00436e95 | DOUBLE_0057ae25
    FNSTSW AX                           ; 00436e9b
    SAHF                                ; 00436e9d
    JNC 0x004377a7                      ; 00436e9e
        ;   XREF to: 004377a7 (CONDITIONAL_JUMP)  ; LAB_004377a7
    FLD float ptr [EBP + 0x20]          ; 00436ea4
        ;   Label: LAB_00436ea4
    FCOMP double ptr [0x0057ae2d]       ; 00436ea7 | DOUBLE_0057ae2d
    FNSTSW AX                           ; 00436ead
    SAHF                                ; 00436eaf
    JNC 0x00436eb9                      ; 00436eb0
        ;   XREF to: 00436eb9 (CONDITIONAL_JUMP)  ; LAB_00436eb9
    MOV dword ptr [EBP + 0x20],0x3c23d70a ; 00436eb2
    FLD float ptr [EBP + 0x20]          ; 00436eb9
        ;   Label: LAB_00436eb9
    FLD1                                ; 00436ebc
    FDIVRP                              ; 00436ebe
    MOV EAX,dword ptr [EBP + 0x18]      ; 00436ec0
    FSTP float ptr [EDI + 0x3ab00]      ; 00436ec3
    FLD float ptr [EAX + 0x4]           ; 00436ec9
    FSUBR float ptr [EBP + 0x24]        ; 00436ecc
    MOV EBX,dword ptr [EBP + 0x28]      ; 00436ecf
    FSTP float ptr [EDI + 0x3ab04]      ; 00436ed2
    TEST EBX,EBX                        ; 00436ed8
    JZ 0x00437070                       ; 00436eda
        ;   XREF to: 00437070 (CONDITIONAL_JUMP)  ; LAB_00437070
    XOR ESI,ESI                         ; 00436ee0
    MOV EAX,dword ptr [EDI + 0x39ce8]   ; 00436ee2
    MOV dword ptr [ESP + 0x1a0],ESI     ; 00436ee8
    TEST EAX,EAX                        ; 00436eef
    JLE 0x0043704b                      ; 00436ef1
        ;   XREF to: 0043704b (CONDITIONAL_JUMP)  ; LAB_0043704b
    LEA EAX,[EBX + 0xe80]               ; 00436ef7
    MOV dword ptr [ESP + 0x1a8],EAX     ; 00436efd
    LEA EAX,[EDI + 0x398]               ; 00436f04
    MOV dword ptr [ESP + 0x1c4],EAX     ; 00436f0a
    MOV dword ptr [ESP + 0x198],EDI     ; 00436f11
    MOV EAX,dword ptr [ESP + 0x198]     ; 00436f18
        ;   Label: LAB_00436f18
    IMUL EBX,dword ptr [EAX + 0x39cec],0x11c ; 00436f1f
    ADD EBX,dword ptr [ESP + 0x1c4]     ; 00436f29
    XOR ESI,ESI                         ; 00436f30
    MOV dword ptr [EBX + 0x8],0x0       ; 00436f32
    MOV dword ptr [ESP + 0x1b4],ESI     ; 00436f39
    MOV EAX,dword ptr [EBX + 0xdc]      ; 00436f40
    MOV EDX,dword ptr [EBX + 0x8]       ; 00436f46
    MOV dword ptr [EBX + 0x4],EDX       ; 00436f49
    MOV EDX,dword ptr [EBX + 0x4]       ; 00436f4c
    MOV dword ptr [EBX],EDX             ; 00436f4f
    TEST EAX,EAX                        ; 00436f51
    JLE 0x0043701d                      ; 00436f53
        ;   XREF to: 0043701d (CONDITIONAL_JUMP)  ; LAB_0043701d
    LEA ESI,[EBX + 0x110]               ; 00436f59
    LEA EAX,[EBX + 0xec]                ; 00436f5f
    MOV dword ptr [ESP + 0x1b8],EAX     ; 00436f65
    MOV dword ptr [ESP + 0x1b0],EBX     ; 00436f6c
    MOV EAX,dword ptr [ESP + 0x1b0]     ; 00436f73
        ;   Label: LAB_00436f73
    IMUL EAX,dword ptr [EAX + 0xe0],0x30 ; 00436f7a
    ADD EAX,dword ptr [ESP + 0x1a8]     ; 00436f81
    PUSH EAX                            ; 00436f88
    MOV EAX,dword ptr [ESP + 0x1bc]     ; 00436f89
    PUSH EAX                            ; 00436f90
    LEA EAX,[ESP + 0x14c]               ; 00436f91
    PUSH EAX                            ; 00436f98
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 00436f99
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_0055a8b0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    FLD float ptr [EAX]                 ; 00436f9e
    FMUL float ptr [ESI]                ; 00436fa0
    ADD ESP,0xc                         ; 00436fa2
    FSTP float ptr [ESP + 0x6c]         ; 00436fa5
    FLD float ptr [EAX + 0x4]           ; 00436fa9
    FMUL float ptr [ESI]                ; 00436fac
    FSTP float ptr [ESP + 0x70]         ; 00436fae
    FLD float ptr [EAX + 0x8]           ; 00436fb2
    FMUL float ptr [ESI]                ; 00436fb5
    ADD ESI,0x4                         ; 00436fb7
    MOV EDX,dword ptr [ESP + 0x1b8]     ; 00436fba
    MOV ECX,dword ptr [ESP + 0x1b0]     ; 00436fc1
    ADD EDX,0xc                         ; 00436fc8
    ADD ECX,0x4                         ; 00436fcb
    MOV dword ptr [ESP + 0x1b8],EDX     ; 00436fce
    MOV dword ptr [ESP + 0x1b0],ECX     ; 00436fd5
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 00436fdc
    FSTP float ptr [ESP + 0x74]         ; 00436fe3
    INC EAX                             ; 00436fe7
    FLD float ptr [EBX + 0x4]           ; 00436fe8
    FLD float ptr [EBX]                 ; 00436feb
    FADD float ptr [ESP + 0x6c]         ; 00436fed
    FLD float ptr [EBX + 0x8]           ; 00436ff1
    FXCH                                ; 00436ff4
    FSTP float ptr [EBX]                ; 00436ff6
    FXCH                                ; 00436ff8
    FADD float ptr [ESP + 0x70]         ; 00436ffa
    MOV dword ptr [ESP + 0x1b4],EAX     ; 00436ffe
    FSTP float ptr [EBX + 0x4]          ; 00437005
    FADD float ptr [ESP + 0x74]         ; 00437008
    MOV EDX,dword ptr [EBX + 0xdc]      ; 0043700c
    FSTP float ptr [EBX + 0x8]          ; 00437012
    CMP EAX,EDX                         ; 00437015
    JL 0x00436f73                       ; 00437017
        ;   XREF to: 00436f73 (CONDITIONAL_JUMP)  ; LAB_00436f73
    MOV EDX,dword ptr [ESP + 0x198]     ; 0043701d
        ;   Label: LAB_0043701d
    MOV ECX,dword ptr [ESP + 0x1a0]     ; 00437024
    MOV EBX,dword ptr [EDI + 0x39ce8]   ; 0043702b
    ADD EDX,0x4                         ; 00437031
    INC ECX                             ; 00437034
    MOV dword ptr [ESP + 0x198],EDX     ; 00437035
    MOV dword ptr [ESP + 0x1a0],ECX     ; 0043703c
    CMP ECX,EBX                         ; 00437043
    JL 0x00436f18                       ; 00437045
        ;   XREF to: 00436f18 (CONDITIONAL_JUMP)  ; LAB_00436f18
    MOV ESI,dword ptr [EDI + 0x37b4c]   ; 0043704b
        ;   Label: LAB_0043704b
    XOR EBX,EBX                         ; 00437051
    TEST ESI,ESI                        ; 00437053
    JLE 0x00437070                      ; 00437055
        ;   XREF to: 00437070 (CONDITIONAL_JUMP)  ; LAB_00437070
    MOV EDX,dword ptr [EBP + 0x28]      ; 00437057
        ;   Label: LAB_00437057
    PUSH EDX                            ; 0043705a
    PUSH EBX                            ; 0043705b
    PUSH EDI                            ; 0043705c
    CALL core_cloth.cpp_CCloth_computeBoneTransform_FUN_00436580 ; 0043705d
        ;   XREF to: 00436580 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_computeBoneTransform_FUN_00436580(CCloth * this_ptr, int bone_index, CDeformableModelInstance * model_ptr)
    INC EBX                             ; 00437062
    MOV ECX,dword ptr [EDI + 0x37b4c]   ; 00437063
    ADD ESP,0xc                         ; 00437069
    CMP EBX,ECX                         ; 0043706c
    JL 0x00437057                       ; 0043706e
        ;   XREF to: 00437057 (CONDITIONAL_JUMP)  ; LAB_00437057
    MOV ECX,dword ptr [EDI + 0x104]     ; 00437070
        ;   Label: LAB_00437070
    XOR ESI,ESI                         ; 00437076
    TEST ECX,ECX                        ; 00437078
    JLE 0x00437183                      ; 0043707a
        ;   XREF to: 00437183 (CONDITIONAL_JUMP)  ; LAB_00437183
    LEA EAX,[EDI + 0x37b50]             ; 00437080
    MOV dword ptr [ESP + 0x1bc],EAX     ; 00437086
    LEA EAX,[EDI + 0x398]               ; 0043708d
    MOV dword ptr [ESP + 0x1c0],EAX     ; 00437093
    MOV dword ptr [ESP + 0x15c],EDI     ; 0043709a
    IMUL EAX,ESI,0x11c                  ; 004370a1
        ;   Label: LAB_004370a1
    MOV dword ptr [ESP + 0x17c],EAX     ; 004370a7
    MOV EAX,dword ptr [ESP + 0x15c]     ; 004370ae
    MOV EAX,dword ptr [EAX + 0x470]     ; 004370b5
    CMP EAX,-0x1                        ; 004370bb
    JZ 0x00437160                       ; 004370be
        ;   XREF to: 00437160 (CONDITIONAL_JUMP)  ; LAB_00437160
    IMUL EAX,EAX,0xac                   ; 004370c4
    MOV EBX,dword ptr [ESP + 0x1bc]     ; 004370ca
    ADD EBX,EAX                         ; 004370d1
    MOV EAX,dword ptr [EBX + 0x44]      ; 004370d3
    MOV dword ptr [ESP + 0x160],EAX     ; 004370d6
    XOR EAX,EAX                         ; 004370dd
    MOV dword ptr [ESP + 0x78],EAX      ; 004370df
    MOV dword ptr [ESP + 0x7c],EAX      ; 004370e3
    MOV EAX,dword ptr [ESP + 0x160]     ; 004370e7
    MOV dword ptr [ESP + 0x80],EAX      ; 004370ee
    LEA EAX,[ESP + 0x78]                ; 004370f5
    PUSH EAX                            ; 004370f9
    LEA EAX,[ESP + 0x118]               ; 004370fa
    PUSH EAX                            ; 00437101
    LEA EAX,[EBX + 0x78]                ; 00437102
    PUSH EAX                            ; 00437105
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 00437106
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    FLD float ptr [EBX + 0xa0]          ; 0043710b
    FADD float ptr [EAX]                ; 00437111
    ADD ESP,0xc                         ; 00437113
    FSTP float ptr [ESP + 0x54]         ; 00437116
    FLD float ptr [EBX + 0xa4]          ; 0043711a
    FADD float ptr [EAX + 0x4]          ; 00437120
    MOV ECX,dword ptr [ESP + 0x17c]     ; 00437123
    FSTP float ptr [ESP + 0x58]         ; 0043712a
    FLD float ptr [EBX + 0xa8]          ; 0043712e
    MOV EBX,dword ptr [ESP + 0x1c0]     ; 00437134
    FADD float ptr [EAX + 0x8]          ; 0043713b
    ADD EBX,ECX                         ; 0043713e
    LEA EAX,[ESP + 0x54]                ; 00437140
    FSTP float ptr [ESP + 0x5c]         ; 00437144
    CMP EBX,EAX                         ; 00437148
    JZ 0x00437160                       ; 0043714a
        ;   XREF to: 00437160 (CONDITIONAL_JUMP)  ; LAB_00437160
    MOV EAX,dword ptr [ESP + 0x54]      ; 0043714c
    MOV dword ptr [EBX],EAX             ; 00437150
    MOV EAX,dword ptr [ESP + 0x58]      ; 00437152
    MOV dword ptr [EBX + 0x4],EAX       ; 00437156
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00437159
    MOV dword ptr [EBX + 0x8],EAX       ; 0043715d
    MOV EBX,dword ptr [ESP + 0x15c]     ; 00437160
        ;   Label: LAB_00437160
    INC ESI                             ; 00437167
    ADD EBX,0x11c                       ; 00437168
    MOV EAX,dword ptr [EDI + 0x104]     ; 0043716e
    MOV dword ptr [ESP + 0x15c],EBX     ; 00437174
    CMP ESI,EAX                         ; 0043717b
    JL 0x004370a1                       ; 0043717d
        ;   XREF to: 004370a1 (CONDITIONAL_JUMP)  ; LAB_004370a1
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00437183
        ;   Label: LAB_00437183
    PUSH EDX                            ; 00437186
    LEA EAX,[ESP + 0xc]                 ; 00437187
    PUSH EAX                            ; 0043718b
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 0043718c
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00437191
    MOV EAX,dword ptr [ESP + 0x10]      ; 00437194
    MOV dword ptr [ESP + 0xcc],EAX      ; 00437198
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0043719f
    MOV dword ptr [ESP + 0xd0],EAX      ; 004371a3
    MOV EAX,dword ptr [ESP + 0x28]      ; 004371aa
    MOV EDX,dword ptr [0x005be368]      ; 004371ae | DAT_005be368
    MOV dword ptr [ESP + 0xd4],EAX      ; 004371b4
    MOV EAX,dword ptr [EDX + 0x15a878]  ; 004371bb | DAT_01fb1afc
    ADD EDX,0x15a878                    ; 004371c1
    MOV dword ptr [ESP + 0x150],EAX     ; 004371c7
    LEA EAX,[EDX + 0x4]                 ; 004371ce
    MOV EAX,dword ptr [EAX]             ; 004371d1 | DAT_01fb1b00
    MOV dword ptr [ESP + 0x154],EAX     ; 004371d3
    FLD float ptr [ESP + 0x154]         ; 004371da
    FMUL ST0                            ; 004371e1
    LEA EAX,[EDX + 0x8]                 ; 004371e3
    FLD float ptr [ESP + 0x150]         ; 004371e6
    FMUL ST0                            ; 004371ed
    MOV EAX,dword ptr [EAX]             ; 004371ef | DAT_01fb1b04
    FADDP                               ; 004371f1
    MOV dword ptr [ESP + 0x158],EAX     ; 004371f3
    FLD float ptr [ESP + 0x158]         ; 004371fa
    FMUL ST0                            ; 00437201
    FADDP                               ; 00437203
    FSQRT                               ; 00437205
    FST float ptr [ESP + 0x4]           ; 00437207
    FLDZ                                ; 0043720b
    FCOMPP                              ; 0043720d
    FNSTSW AX                           ; 0043720f
    SAHF                                ; 00437211
    JNC 0x004377b3                      ; 00437212
        ;   XREF to: 004377b3 (CONDITIONAL_JUMP)  ; LAB_004377b3
    FLD1                                ; 00437218
    FLD float ptr [ESP + 0x150]         ; 0043721a
    FXCH                                ; 00437221
    FDIV float ptr [ESP + 0x4]          ; 00437223
    FXCH                                ; 00437227
    FMUL ST1                            ; 00437229
    FLD float ptr [ESP + 0x154]         ; 0043722b
    FMUL ST2                            ; 00437232
    FLD float ptr [ESP + 0x158]         ; 00437234
    FMULP ST3                           ; 0043723b
    FXCH                                ; 0043723d
    FSTP float ptr [ESP + 0x150]        ; 0043723f
    FSTP float ptr [ESP + 0x154]        ; 00437246
    FSTP float ptr [ESP + 0x158]        ; 0043724d
    FLD float ptr [ESP + 0x154]         ; 00437254
        ;   Label: LAB_00437254
    FMUL float ptr [ESP + 0xd0]         ; 0043725b
    FLD float ptr [ESP + 0x150]         ; 00437262
    FMUL float ptr [ESP + 0xcc]         ; 00437269
    FADDP                               ; 00437270
    FLD float ptr [ESP + 0x158]         ; 00437272
    FMUL float ptr [ESP + 0xd4]         ; 00437279
    FADDP                               ; 00437280
    FST float ptr [ESP + 0x1c8]         ; 00437282
    MOV EAX,dword ptr [ESP + 0x1c8]     ; 00437289
    FLDZ                                ; 00437290
    MOV dword ptr [ESP],EAX             ; 00437292
    FCOMPP                              ; 00437295
    FNSTSW AX                           ; 00437297
    SAHF                                ; 00437299
    JNC 0x004372a1                      ; 0043729a
        ;   XREF to: 004372a1 (CONDITIONAL_JUMP)  ; LAB_004372a1
    XOR EAX,EAX                         ; 0043729c
    MOV dword ptr [ESP],EAX             ; 0043729e
    FLD float ptr [ESP]                 ; 004372a1
        ;   Label: LAB_004372a1
    MOV EAX,[0x005be368]                ; 004372a4 | DAT_005be368
    FMUL double ptr [0x0057ae35]        ; 004372a9 | DAT_0057ae35
    FLD float ptr [EAX + 0x15a878]      ; 004372af | DAT_01fb1afc
    FXCH                                ; 004372b5
    FSTP float ptr [ESP]                ; 004372b7
    FMUL float ptr [ESP]                ; 004372ba
    FSTP float ptr [ESP + 0x108]        ; 004372bd
    FLD float ptr [EAX + 0x15a87c]      ; 004372c4 | DAT_01fb1b00
    FMUL float ptr [ESP]                ; 004372ca
    FSTP float ptr [ESP + 0x10c]        ; 004372cd
    FLD float ptr [EAX + 0x15a880]      ; 004372d4 | DAT_01fb1b04
    LEA EAX,[ESP + 0x108]               ; 004372da
    FMUL float ptr [ESP]                ; 004372e1
    PUSH EAX                            ; 004372e4
    LEA EAX,[ESP + 0x13c]               ; 004372e5
    PUSH EAX                            ; 004372ec
    LEA EAX,[ESP + 0x10]                ; 004372ed
    LEA EBX,[EDI + 0x3ab24]             ; 004372f1
    PUSH EAX                            ; 004372f7
    FSTP float ptr [ESP + 0x11c]        ; 004372f8
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0 ; 004372ff
        ;   XREF to: 0044daa0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    FLD float ptr [EAX]                 ; 00437304
    FADD float ptr [EBX]                ; 00437306
    ADD ESP,0xc                         ; 00437308
    FSTP float ptr [ESP + 0x48]         ; 0043730b
    FLD float ptr [EAX + 0x4]           ; 0043730f
    FADD float ptr [EBX + 0x4]          ; 00437312
    FSTP float ptr [ESP + 0x4c]         ; 00437315
    FLD float ptr [EAX + 0x8]           ; 00437319
    FADD float ptr [EBX + 0x8]          ; 0043731c
    MOV EDX,dword ptr [EBP + 0x18]      ; 0043731f
    FSTP float ptr [ESP + 0x50]         ; 00437322
    MOV dword ptr [EBX + 0x8],0x0       ; 00437326
    LEA EAX,[EDI + 0x3ab08]             ; 0043732d
    MOV ECX,dword ptr [EBX + 0x8]       ; 00437333
    MOV dword ptr [EBX + 0x4],ECX       ; 00437336
    MOV ECX,dword ptr [EBX + 0x4]       ; 00437339
    MOV dword ptr [EBX],ECX             ; 0043733c
    FLD float ptr [EDX]                 ; 0043733e
    FSUB float ptr [EAX]                ; 00437340
    FSTP float ptr [ESP + 0x90]         ; 00437342
    FLD float ptr [EDX + 0x4]           ; 00437349
    FSUB float ptr [EAX + 0x4]          ; 0043734c
    FSTP float ptr [ESP + 0x94]         ; 0043734f
    FLD float ptr [EDX + 0x8]           ; 00437356
    FSUB float ptr [EAX + 0x8]          ; 00437359
    FSTP float ptr [ESP + 0x98]         ; 0043735c
    CMP EAX,EDX                         ; 00437363
    JZ 0x00437377                       ; 00437365
        ;   XREF to: 00437377 (CONDITIONAL_JUMP)  ; LAB_00437377
    MOV ECX,dword ptr [EDX]             ; 00437367
    MOV dword ptr [EAX],ECX             ; 00437369
    MOV ECX,dword ptr [EDX + 0x4]       ; 0043736b
    MOV dword ptr [EAX + 0x4],ECX       ; 0043736e
    MOV ECX,dword ptr [EDX + 0x8]       ; 00437371
    MOV dword ptr [EAX + 0x8],ECX       ; 00437374
    LEA EAX,[ESP + 0x90]                ; 00437377
        ;   Label: LAB_00437377
    PUSH EAX                            ; 0043737e
    LEA EAX,[ESP + 0x88]                ; 0043737f
    PUSH EAX                            ; 00437386
    LEA EAX,[ESP + 0x10]                ; 00437387
    PUSH EAX                            ; 0043738b
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0 ; 0043738c
        ;   XREF to: 0044daa0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 00437391
    FLD1                                ; 00437394
    FLD float ptr [ESP + 0x84]          ; 00437396
    FXCH                                ; 0043739d
    FDIV float ptr [EBP + 0x20]         ; 0043739f
    FXCH                                ; 004373a2
    FMUL ST1                            ; 004373a4
    FLD float ptr [ESP + 0x88]          ; 004373a6
    FMUL ST2                            ; 004373ad
    FLD float ptr [ESP + 0x8c]          ; 004373af
    FXCH ST2                            ; 004373b6
    FST float ptr [ESP + 0x12c]         ; 004373b8
    FSUB float ptr [ESP + 0x48]         ; 004373bf
    FXCH ST2                            ; 004373c3
    FMUL ST3                            ; 004373c5
    FXCH ST2                            ; 004373c7
    FST float ptr [ESP + 0x60]          ; 004373c9
    FMUL ST3                            ; 004373cd
    FXCH                                ; 004373cf
    FSTP float ptr [ESP + 0x130]        ; 004373d1
    FXCH                                ; 004373d8
    FST float ptr [ESP + 0x134]         ; 004373da
    FLD float ptr [ESP + 0x130]         ; 004373e1
    FSUB float ptr [ESP + 0x4c]         ; 004373e8
    FXCH                                ; 004373ec
    FSUB float ptr [ESP + 0x50]         ; 004373ee
    FXCH                                ; 004373f2
    FST float ptr [ESP + 0x64]          ; 004373f4
    FMUL ST3                            ; 004373f8
    FXCH                                ; 004373fa
    FST float ptr [ESP + 0x68]          ; 004373fc
    FMULP ST3                           ; 00437400
    LEA EAX,[EDI + 0x3ab14]             ; 00437402
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00437408
    FXCH                                ; 0043740b
    FSTP float ptr [ESP + 0xd8]         ; 0043740d
    FSTP float ptr [ESP + 0xdc]         ; 00437414
    FSTP float ptr [ESP + 0xe0]         ; 0043741b
    FLD float ptr [EDX]                 ; 00437422
    FSUB float ptr [EAX]                ; 00437424
    FSTP float ptr [ESP + 0xfc]         ; 00437426
    FLD float ptr [EDX + 0x4]           ; 0043742d
    FSUB float ptr [EAX + 0x4]          ; 00437430
    FSTP float ptr [ESP + 0x100]        ; 00437433
    FLD float ptr [EDX + 0x8]           ; 0043743a
    FSUB float ptr [EAX + 0x8]          ; 0043743d
    FSTP float ptr [ESP + 0x104]        ; 00437440
    CMP EAX,EDX                         ; 00437447
    JZ 0x0043745b                       ; 00437449
        ;   XREF to: 0043745b (CONDITIONAL_JUMP)  ; LAB_0043745b
    MOV ECX,dword ptr [EDX]             ; 0043744b
    MOV dword ptr [EAX],ECX             ; 0043744d
    MOV ECX,dword ptr [EDX + 0x4]       ; 0043744f
    MOV dword ptr [EAX + 0x4],ECX       ; 00437452
    MOV ECX,dword ptr [EDX + 0x8]       ; 00437455
    MOV dword ptr [EAX + 0x8],ECX       ; 00437458
    PUSH dword ptr [ESP + 0x100]        ; 0043745b
        ;   Label: LAB_0043745b
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 00437462
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040df00(float angle_radians)
    MOV dword ptr [ESP + 0x1d0],EAX     ; 00437467
    FLD float ptr [ESP + 0x1d0]         ; 0043746e
    ADD ESP,0x4                         ; 00437475
    FLD1                                ; 00437478
    FDIV float ptr [EBP + 0x20]         ; 0043747a
    FXCH                                ; 0043747d
    FMUL ST1                            ; 0043747f
    FMULP                               ; 00437481
    MOV EBX,dword ptr [EDI + 0x104]     ; 00437483
    XOR EDX,EDX                         ; 00437489
    FSTP float ptr [ESP + 0x168]        ; 0043748b
    TEST EBX,EBX                        ; 00437492
    JLE 0x00437541                      ; 00437494
        ;   XREF to: 00437541 (CONDITIONAL_JUMP)  ; LAB_00437541
    LEA EAX,[EDI + 0x398]               ; 0043749a
    MOV dword ptr [ESP + 0x174],EAX     ; 004374a0
    LEA EAX,[EDI + 0x464]               ; 004374a7
    MOV dword ptr [ESP + 0x194],EAX     ; 004374ad
    MOV ESI,EDI                         ; 004374b4
    LEA EAX,[EDI + 0x3a4]               ; 004374b6
    IMUL EBX,EDX,0x11c                  ; 004374bc
        ;   Label: LAB_004374bc
    MOV dword ptr [EAX + 0x8],0x0       ; 004374c2
    MOV ECX,dword ptr [ESP + 0x174]     ; 004374c9
    FLD float ptr [EAX + 0x8]           ; 004374d0
    FST float ptr [EAX + 0x4]           ; 004374d3
    FSTP float ptr [EAX]                ; 004374d6
    MOV dword ptr [ESI + 0x450],0x0     ; 004374d8
    ADD EBX,ECX                         ; 004374e2
    MOV ECX,dword ptr [ESP + 0x194]     ; 004374e4
    MOV dword ptr [ESI + 0x454],0x0     ; 004374eb
    CMP EBX,ECX                         ; 004374f5
    JZ 0x00437513                       ; 004374f7
        ;   XREF to: 00437513 (CONDITIONAL_JUMP)  ; LAB_00437513
    MOV ECX,dword ptr [EBX]             ; 004374f9
    MOV dword ptr [EAX + 0xc0],ECX      ; 004374fb
    MOV ECX,dword ptr [EBX + 0x4]       ; 00437501
    MOV dword ptr [EAX + 0xc4],ECX      ; 00437504
    MOV ECX,dword ptr [EBX + 0x8]       ; 0043750a
    MOV dword ptr [EAX + 0xc8],ECX      ; 0043750d
    MOV EBX,dword ptr [ESP + 0x194]     ; 00437513
        ;   Label: LAB_00437513
    ADD ESI,0x11c                       ; 0043751a
    ADD EAX,0x11c                       ; 00437520
    INC EDX                             ; 00437525
    ADD EBX,0x11c                       ; 00437526
    MOV ECX,dword ptr [EDI + 0x104]     ; 0043752c
    MOV dword ptr [ESP + 0x194],EBX     ; 00437532
    CMP EDX,ECX                         ; 00437539
    JL 0x004374bc                       ; 0043753b
        ;   XREF to: 004374bc (CONDITIONAL_JUMP)  ; LAB_004374bc
    FLD float ptr [EDI + 0x37b18]       ; 00437541
        ;   Label: LAB_00437541
    FCHS                                ; 00437547
    FSTP float ptr [ESP + 0x1cc]        ; 00437549
    MOV EAX,dword ptr [ESP + 0x1cc]     ; 00437550
    MOV dword ptr [ESP + 0xac],EAX      ; 00437557
    LEA EAX,[ESP + 0xa8]                ; 0043755e
    PUSH EAX                            ; 00437565
    LEA EAX,[ESP + 0xa0]                ; 00437566
    PUSH EAX                            ; 0043756d
    LEA EAX,[ESP + 0x10]                ; 0043756e
    XOR EBX,EBX                         ; 00437572
    PUSH EAX                            ; 00437574
    MOV dword ptr [ESP + 0xb4],EBX      ; 00437575
    MOV dword ptr [ESP + 0xbc],EBX      ; 0043757c
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0 ; 00437583
        ;   XREF to: 0044daa0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    FLD float ptr [EDI + 0x37b18]       ; 00437588
    FDIV float ptr [EDI + 0x37b1c]      ; 0043758e
    ADD ESP,0xc                         ; 00437594
    MOV EDX,dword ptr [EDI + 0x104]     ; 00437597
    MOV dword ptr [ESP + 0x19c],EBX     ; 0043759d
    FSTP float ptr [ESP + 0x1a4]        ; 004375a4
    TEST EDX,EDX                        ; 004375ab
    JLE 0x00437647                      ; 004375ad
        ;   XREF to: 00437647 (CONDITIONAL_JUMP)  ; LAB_00437647
    FLD float ptr [ESP + 0x168]         ; 004375b3
    LEA EAX,[EDI + 0x37b20]             ; 004375ba
    FMUL float ptr [ESP + 0x1a4]        ; 004375c0
    MOV dword ptr [ESP + 0x184],EAX     ; 004375c7
    LEA EAX,[EDI + 0x37b30]             ; 004375ce
    MOV dword ptr [ESP + 0x188],EBX     ; 004375d4
    MOV dword ptr [ESP + 0x18c],EAX     ; 004375db
    LEA EAX,[EDI + 0x398]               ; 004375e2
    FSTP float ptr [ESP + 0x178]        ; 004375e8
    MOV dword ptr [ESP + 0x16c],EAX     ; 004375ef
    MOV ESI,dword ptr [ESP + 0x188]     ; 004375f6
        ;   Label: LAB_004375f6
    MOV EAX,dword ptr [EDI + 0x3aafc]   ; 004375fd
    ADD EAX,ESI                         ; 00437603
    IMUL EBX,dword ptr [EAX],0x11c      ; 00437605
    ADD EBX,dword ptr [ESP + 0x16c]     ; 0043760b
    MOV ESI,dword ptr [EBX + 0x74]      ; 00437612
    TEST ESI,ESI                        ; 00437615
    JZ 0x004377cf                       ; 00437617
        ;   XREF to: 004377cf (CONDITIONAL_JUMP)  ; LAB_004377cf
    MOV EBX,dword ptr [ESP + 0x188]     ; 0043761d
        ;   Label: LAB_0043761d
    MOV ESI,dword ptr [ESP + 0x19c]     ; 00437624
    MOV EDX,dword ptr [EDI + 0x104]     ; 0043762b
    ADD EBX,0x4                         ; 00437631
    INC ESI                             ; 00437634
    MOV dword ptr [ESP + 0x188],EBX     ; 00437635
    MOV dword ptr [ESP + 0x19c],ESI     ; 0043763c
    CMP ESI,EDX                         ; 00437643
    JL 0x004375f6                       ; 00437645
        ;   XREF to: 004375f6 (CONDITIONAL_JUMP)  ; LAB_004375f6
    LEA EAX,[EDI + 0x398]               ; 00437647
        ;   Label: LAB_00437647
    XOR ECX,ECX                         ; 0043764d
    MOV dword ptr [ESP + 0x1ac],EAX     ; 0043764f
    MOV dword ptr [ESP + 0x190],ECX     ; 00437656
    MOV EBX,dword ptr [EDI + 0x104]     ; 0043765d
        ;   Label: LAB_0043765d
    XOR ESI,ESI                         ; 00437663
    TEST EBX,EBX                        ; 00437665
    JLE 0x00437697                      ; 00437667
        ;   XREF to: 00437697 (CONDITIONAL_JUMP)  ; LAB_00437697
    XOR EBX,EBX                         ; 00437669
    MOV EAX,dword ptr [EDI + 0x3aafc]   ; 0043766b
        ;   Label: LAB_0043766b
    IMUL EAX,dword ptr [EBX + EAX*0x1],0x11c ; 00437671
    ADD EAX,dword ptr [ESP + 0x1ac]     ; 00437678
    CMP dword ptr [EAX + 0x74],0x0      ; 0043767f
    JZ 0x00437a4b                       ; 00437683
        ;   XREF to: 00437a4b (CONDITIONAL_JUMP)  ; LAB_00437a4b
    INC ESI                             ; 00437689
        ;   Label: LAB_00437689
    MOV EAX,dword ptr [EDI + 0x104]     ; 0043768a
    ADD EBX,0x4                         ; 00437690
    CMP ESI,EAX                         ; 00437693
    JL 0x0043766b                       ; 00437695
        ;   XREF to: 0043766b (CONDITIONAL_JUMP)  ; LAB_0043766b
    MOV EDX,dword ptr [ESP + 0x190]     ; 00437697
        ;   Label: LAB_00437697
    INC EDX                             ; 0043769e
    MOV dword ptr [ESP + 0x190],EDX     ; 0043769f
    CMP EDX,0x5                         ; 004376a6
    JL 0x0043765d                       ; 004376a9
        ;   XREF to: 0043765d (CONDITIONAL_JUMP)  ; LAB_0043765d
    MOV EBX,dword ptr [EDI + 0x104]     ; 004376ab
    XOR ECX,ECX                         ; 004376b1
    TEST EBX,EBX                        ; 004376b3
    JLE 0x0043774c                      ; 004376b5
        ;   XREF to: 0043774c (CONDITIONAL_JUMP)  ; LAB_0043774c
    LEA EAX,[EDI + 0x37b2c]             ; 004376bb
    LEA EDX,[EDI + 0x37b28]             ; 004376c1
    MOV dword ptr [ESP + 0x180],EAX     ; 004376c7
    LEA EAX,[EDI + 0x398]               ; 004376ce
    XOR ESI,ESI                         ; 004376d4
    MOV dword ptr [ESP + 0x170],EAX     ; 004376d6
    MOV EAX,dword ptr [EDI + 0x3aafc]   ; 004376dd
        ;   Label: LAB_004376dd
    IMUL EAX,dword ptr [ESI + EAX*0x1],0x11c ; 004376e3
    MOV EBX,dword ptr [ESP + 0x170]     ; 004376ea
    ADD EBX,EAX                         ; 004376f1
    CMP dword ptr [EBX + 0xb8],0x0      ; 004376f3
    JZ 0x00437715                       ; 004376fa
        ;   XREF to: 00437715 (CONDITIONAL_JUMP)  ; LAB_00437715
    LEA EAX,[EBX + 0x24]                ; 004376fc
    FLD float ptr [EDX]                 ; 004376ff
    FMUL float ptr [EAX]                ; 00437701
    FSTP float ptr [EAX]                ; 00437703
    FLD float ptr [EDX]                 ; 00437705
    FMUL float ptr [EAX + 0x4]          ; 00437707
    FSTP float ptr [EAX + 0x4]          ; 0043770a
    FLD float ptr [EDX]                 ; 0043770d
    FMUL float ptr [EAX + 0x8]          ; 0043770f
    FSTP float ptr [EAX + 0x8]          ; 00437712
    CMP dword ptr [EBX + 0xbc],0x0      ; 00437715
        ;   Label: LAB_00437715
    JZ 0x0043773e                       ; 0043771c
        ;   XREF to: 0043773e (CONDITIONAL_JUMP)  ; LAB_0043773e
    LEA EAX,[EBX + 0x24]                ; 0043771e
    MOV EBX,dword ptr [ESP + 0x180]     ; 00437721
    FLD float ptr [EBX]                 ; 00437728
    FMUL float ptr [EAX]                ; 0043772a
    FSTP float ptr [EAX]                ; 0043772c
    FLD float ptr [EBX]                 ; 0043772e
    FMUL float ptr [EAX + 0x4]          ; 00437730
    FSTP float ptr [EAX + 0x4]          ; 00437733
    FLD float ptr [EBX]                 ; 00437736
    FMUL float ptr [EAX + 0x8]          ; 00437738
    FSTP float ptr [EAX + 0x8]          ; 0043773b
    INC ECX                             ; 0043773e
        ;   Label: LAB_0043773e
    MOV EBX,dword ptr [EDI + 0x104]     ; 0043773f
    ADD ESI,0x4                         ; 00437745
    CMP ECX,EBX                         ; 00437748
    JL 0x004376dd                       ; 0043774a
        ;   XREF to: 004376dd (CONDITIONAL_JUMP)  ; LAB_004376dd
    MOV ESI,dword ptr [EDI + 0x104]     ; 0043774c
        ;   Label: LAB_0043774c
    XOR ECX,ECX                         ; 00437752
    TEST ESI,ESI                        ; 00437754
    JLE 0x004377a0                      ; 00437756
        ;   XREF to: 004377a0 (CONDITIONAL_JUMP)  ; LAB_004377a0
    LEA ESI,[EDI + 0x398]               ; 00437758
    XOR EDX,EDX                         ; 0043775e
    MOV EBX,dword ptr [EDI + 0x10c]     ; 00437760
        ;   Label: LAB_00437760
    MOV EAX,ESI                         ; 00437766
    ADD EBX,EDX                         ; 00437768
    INC ECX                             ; 0043776a
    FLD float ptr [EAX]                 ; 0043776b
    FMUL float ptr [0x0059b360]         ; 0043776d | DAT_0059b360
    FISTP dword ptr [EBX]               ; 00437773
    FLD float ptr [EAX + 0x4]           ; 00437775
    FMUL float ptr [0x0059b360]         ; 00437778 | DAT_0059b360
    FISTP dword ptr [EBX + 0x4]         ; 0043777e
    FLD float ptr [EAX + 0x8]           ; 00437781
    FMUL float ptr [0x0059b360]         ; 00437784 | DAT_0059b360
    FISTP dword ptr [EBX + 0x8]         ; 0043778a
    ADD ESI,0x11c                       ; 0043778d
    MOV EBX,dword ptr [EDI + 0x104]     ; 00437793
    ADD EDX,0xc                         ; 00437799
    CMP ECX,EBX                         ; 0043779c
    JL 0x00437760                       ; 0043779e
        ;   XREF to: 00437760 (CONDITIONAL_JUMP)  ; LAB_00437760
    MOV ESP,EBP                         ; 004377a0
        ;   Label: LAB_004377a0
    POP EBP                             ; 004377a2
    POP EDI                             ; 004377a3
    POP ESI                             ; 004377a4
    POP EBX                             ; 004377a5
    RET                                 ; 004377a6
    MOV dword ptr [EBP + 0x24],0xc61c3c00 ; 004377a7
        ;   Label: LAB_004377a7
    JMP 0x00436ea4                      ; 004377ae
        ;   XREF to: 00436ea4 (UNCONDITIONAL_JUMP)  ; LAB_00436ea4
    XOR ECX,ECX                         ; 004377b3
        ;   Label: LAB_004377b3
    MOV dword ptr [ESP + 0x154],ECX     ; 004377b5
    MOV dword ptr [ESP + 0x150],ECX     ; 004377bc
    MOV dword ptr [ESP + 0x158],ECX     ; 004377c3
    JMP 0x00437254                      ; 004377ca
        ;   XREF to: 00437254 (UNCONDITIONAL_JUMP)  ; LAB_00437254
    MOV EDX,dword ptr [ESP + 0x184]     ; 004377cf
        ;   Label: LAB_004377cf
    LEA EAX,[EBX + 0x24]                ; 004377d6
    FLD float ptr [EDX]                 ; 004377d9
    FMUL float ptr [EAX]                ; 004377db
    FSTP float ptr [EAX]                ; 004377dd
    FLD float ptr [EDX]                 ; 004377df
    FMUL float ptr [EAX + 0x4]          ; 004377e1
    FSTP float ptr [EAX + 0x4]          ; 004377e4
    FLD float ptr [EDX]                 ; 004377e7
    FMUL float ptr [EAX + 0x8]          ; 004377e9
    FSTP float ptr [EAX + 0x8]          ; 004377ec
    FLD float ptr [ESP + 0x1a4]         ; 004377ef
    FLD float ptr [ESP + 0xd8]          ; 004377f6
    FMUL ST1                            ; 004377fd
    FLD float ptr [ESP + 0xdc]          ; 004377ff
    FMUL ST2                            ; 00437806
    FLD float ptr [ESP + 0xe0]          ; 00437808
    FMUL ST3                            ; 0043780f
    MOV EAX,dword ptr [ESP + 0x18c]     ; 00437811
    FXCH ST2                            ; 00437818
    FSTP float ptr [ESP + 0x120]        ; 0043781a
    FSTP float ptr [ESP + 0x124]        ; 00437821
    FSTP float ptr [ESP + 0x128]        ; 00437828
    FLD float ptr [ESP + 0x120]         ; 0043782f
    FMUL float ptr [EAX]                ; 00437836
    FLD float ptr [ESP + 0x124]         ; 00437838
    FXCH                                ; 0043783f
    FSTP float ptr [ESP + 0x30]         ; 00437841
    FMUL float ptr [EAX]                ; 00437845
    FLD float ptr [ESP + 0x128]         ; 00437847
    FXCH                                ; 0043784e
    FSTP float ptr [ESP + 0x34]         ; 00437850
    FMUL float ptr [EAX]                ; 00437854
    LEA EAX,[EBX + 0xc]                 ; 00437856
    FSTP float ptr [ESP + 0x38]         ; 00437859
    FLD float ptr [EAX]                 ; 0043785d
    FSUB float ptr [ESP + 0x30]         ; 0043785f
    FLD float ptr [EAX + 0x4]           ; 00437863
    FXCH                                ; 00437866
    FSTP float ptr [EAX]                ; 00437868
    FSUB float ptr [ESP + 0x34]         ; 0043786a
    FLD float ptr [EAX + 0x8]           ; 0043786e
    FXCH                                ; 00437871
    FSTP float ptr [EAX + 0x4]          ; 00437873
    FSUB float ptr [ESP + 0x38]         ; 00437876
    FLD float ptr [EAX]                 ; 0043787a
    FXCH                                ; 0043787c
    FSTP float ptr [EAX + 0x8]          ; 0043787e
    FADD float ptr [ESP + 0x9c]         ; 00437881
    FLD float ptr [EAX + 0x4]           ; 00437888
    FXCH                                ; 0043788b
    FSTP float ptr [EAX]                ; 0043788d
    FADD float ptr [ESP + 0xa0]         ; 0043788f
    FLD float ptr [EAX + 0x8]           ; 00437896
    FXCH                                ; 00437899
    FSTP float ptr [EAX + 0x4]          ; 0043789b
    FADD float ptr [ESP + 0xa4]         ; 0043789e
    FLD float ptr [ESP + 0x178]         ; 004378a5
    FXCH                                ; 004378ac
    FSTP float ptr [EAX + 0x8]          ; 004378ae
    FMUL float ptr [EDI + 0x37b34]      ; 004378b1
    FLD1                                ; 004378b7
    FDIVRP ST2,ST0                      ; 004378b9
    FSTP float ptr [ESP + 0x164]        ; 004378bb
    MOV dword ptr [ESP + 0x3c],ESI      ; 004378c2
    MOV EDX,dword ptr [ESP + 0x164]     ; 004378c6
    MOV dword ptr [ESP + 0x44],ESI      ; 004378cd
    MOV dword ptr [ESP + 0x40],EDX      ; 004378d1
    FLDZ                                ; 004378d5
    FMUL float ptr [EBX + 0x4]          ; 004378d7
    FLD float ptr [EBX + 0x8]           ; 004378da
    FMUL float ptr [ESP + 0x164]        ; 004378dd
    FSUBP                               ; 004378e4
    FLDZ                                ; 004378e6
    FXCH                                ; 004378e8
    FSTP float ptr [ESP + 0xf0]         ; 004378ea
    FMUL float ptr [EBX + 0x8]          ; 004378f1
    FLDZ                                ; 004378f4
    FMUL float ptr [EBX]                ; 004378f6
    FSUBP                               ; 004378f8
    FSTP float ptr [ESP + 0xf4]         ; 004378fa
    FLD float ptr [EBX]                 ; 00437901
    FMUL float ptr [ESP + 0x164]        ; 00437903
    FLDZ                                ; 0043790a
    FMUL float ptr [EBX + 0x4]          ; 0043790c
    FSUBP                               ; 0043790f
    FSTP float ptr [ESP + 0xf8]         ; 00437911
    FLD float ptr [EAX + 0x4]           ; 00437918
    FLD float ptr [EAX]                 ; 0043791b
    FADD float ptr [ESP + 0xf0]         ; 0043791d
    FLD float ptr [EAX + 0x8]           ; 00437924
    FXCH                                ; 00437927
    FSTP float ptr [EAX]                ; 00437929
    FXCH                                ; 0043792b
    FADD float ptr [ESP + 0xf4]         ; 0043792d
    FLD float ptr [EAX]                 ; 00437934
    FXCH                                ; 00437936
    FSTP float ptr [EAX + 0x4]          ; 00437938
    FXCH                                ; 0043793b
    FADD float ptr [ESP + 0xf8]         ; 0043793d
    FXCH                                ; 00437944
    FMUL ST2                            ; 00437946
    FXCH                                ; 00437948
    FSTP float ptr [EAX + 0x8]          ; 0043794a
    FSTP float ptr [ESP + 0xb4]         ; 0043794d
    FLD float ptr [EAX + 0x4]           ; 00437954
    FMUL ST1                            ; 00437957
    FSTP float ptr [ESP + 0xb8]         ; 00437959
    FMUL float ptr [EAX + 0x8]          ; 00437960
    LEA ESI,[EBX + 0x18]                ; 00437963
    LEA EAX,[ESP + 0xb4]                ; 00437966
    FSTP float ptr [ESP + 0xbc]         ; 0043796d
    CMP ESI,EAX                         ; 00437974
    JZ 0x00437995                       ; 00437976
        ;   XREF to: 00437995 (CONDITIONAL_JUMP)  ; LAB_00437995
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00437978
    MOV dword ptr [ESI],EAX             ; 0043797f
    MOV EAX,dword ptr [ESP + 0xb8]      ; 00437981
    MOV dword ptr [ESI + 0x4],EAX       ; 00437988
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0043798b
    MOV dword ptr [ESI + 0x8],EAX       ; 00437992
    LEA EAX,[EBX + 0x18]                ; 00437995
        ;   Label: LAB_00437995
    FLD float ptr [EBP + 0x20]          ; 00437998
    FLD float ptr [EAX]                 ; 0043799b
    FMUL ST1                            ; 0043799d
    FSTP float ptr [ESP + 0xe4]         ; 0043799f
    FLD float ptr [EAX + 0x4]           ; 004379a6
    FMUL ST1                            ; 004379a9
    FSTP float ptr [ESP + 0xe8]         ; 004379ab
    FLD float ptr [EAX + 0x8]           ; 004379b2
    FMUL ST1                            ; 004379b5
    LEA EAX,[EBX + 0x24]                ; 004379b7
    FSTP float ptr [ESP + 0xec]         ; 004379ba
    FLD float ptr [EAX + 0x4]           ; 004379c1
    FLD float ptr [EAX]                 ; 004379c4
    FADD float ptr [ESP + 0xe4]         ; 004379c6
    FLD float ptr [EAX + 0x8]           ; 004379cd
    FXCH                                ; 004379d0
    FSTP float ptr [EAX]                ; 004379d2
    FXCH                                ; 004379d4
    FADD float ptr [ESP + 0xe8]         ; 004379d6
    FLD float ptr [EAX]                 ; 004379dd
    FXCH                                ; 004379df
    FSTP float ptr [EAX + 0x4]          ; 004379e1
    FXCH                                ; 004379e4
    FADD float ptr [ESP + 0xec]         ; 004379e6
    FXCH                                ; 004379ed
    FMUL ST2                            ; 004379ef
    FXCH                                ; 004379f1
    FSTP float ptr [EAX + 0x8]          ; 004379f3
    FSTP float ptr [ESP + 0xc0]         ; 004379f6
    FLD float ptr [EAX + 0x4]           ; 004379fd
    FMUL ST1                            ; 00437a00
    FSTP float ptr [ESP + 0xc4]         ; 00437a02
    FMUL float ptr [EAX + 0x8]          ; 00437a09
    PUSH EBX                            ; 00437a0c
    FSTP float ptr [ESP + 0xcc]         ; 00437a0d
    FLD float ptr [EBX]                 ; 00437a14
    FADD float ptr [ESP + 0xc4]         ; 00437a16
    FLD float ptr [EBX + 0x4]           ; 00437a1d
    FXCH                                ; 00437a20
    FSTP float ptr [EBX]                ; 00437a22
    FADD float ptr [ESP + 0xc8]         ; 00437a24
    FLD float ptr [EBX + 0x8]           ; 00437a2b
    FXCH                                ; 00437a2e
    FSTP float ptr [EBX + 0x4]          ; 00437a30
    FADD float ptr [ESP + 0xcc]         ; 00437a33
    PUSH EDI                            ; 00437a3a
    FSTP float ptr [EBX + 0x8]          ; 00437a3b
    CALL core_cloth.cpp_CCloth_applyConstraints_FUN_004366f0 ; 00437a3e
        ;   XREF to: 004366f0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_applyConstraints_FUN_004366f0(CCloth * this_ptr, SClothVertex * vertex)
    ADD ESP,0x8                         ; 00437a43
    JMP 0x0043761d                      ; 00437a46
        ;   XREF to: 0043761d (UNCONDITIONAL_JUMP)  ; LAB_0043761d
    PUSH EAX                            ; 00437a4b
        ;   Label: LAB_00437a4b
    PUSH EDI                            ; 00437a4c
    CALL core_cloth.cpp_CCloth_applyConstraints_FUN_004366f0 ; 00437a4d
        ;   XREF to: 004366f0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_applyConstraints_FUN_004366f0(CCloth * this_ptr, SClothVertex * vertex)
    ADD ESP,0x8                         ; 00437a52
    JMP 0x00437689                      ; 00437a55
        ;   XREF to: 00437689 (UNCONDITIONAL_JUMP)  ; LAB_00437689

