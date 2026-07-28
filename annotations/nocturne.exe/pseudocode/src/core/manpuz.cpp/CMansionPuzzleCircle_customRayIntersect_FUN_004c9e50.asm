; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_manpuz_cpp_CMansionPuzzleCircle_customRayIntersect_FUN_004c9e50(int param_1,float *param_2,undefined4 param_3,float *param_4)
;
; Local Variables:
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
; undefined        Stack[-0x90]:1  local_90
; undefined        Stack[-0x84]:1  local_84
; undefined        Stack[-0x78]:1  local_78
; undefined        Stack[-0x6c]:1  local_6c
; undefined        Stack[-0x60]:1  local_60
; undefined        Stack[-0x54]:1  local_54
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined        Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_0041d550
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;   core_dtri.cpp_rayTriangleIntersection_FUN_0046c620
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c9e50
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_customRayIntersect_FUN_004c9e50
    PUSH ESI                            ; 004c9e51
    PUSH EDI                            ; 004c9e52
    PUSH EBP                            ; 004c9e53
    MOV EBP,ESP                         ; 004c9e54
    SUB ESP,0xc4                        ; 004c9e56
    AND ESP,0xfffffff8                  ; 004c9e5c
    MOV EBX,dword ptr [EBP + 0x20]      ; 004c9e5f
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c9e62
    ADD EAX,0x150                       ; 004c9e65
    PUSH EAX                            ; 004c9e6a
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 004c9e6b
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(CKeyFramedModelInstance * this_ptr)
    LEA ESI,[EAX + 0x338]               ; 004c9e70
    ADD ESP,0x4                         ; 004c9e76
    MOV EAX,dword ptr [ESI]             ; 004c9e79
    MOV dword ptr [ESP + 0xc],EAX       ; 004c9e7b
    LEA EAX,[ESI + 0x4]                 ; 004c9e7f
    MOV EAX,dword ptr [EAX]             ; 004c9e82
    MOV dword ptr [ESP + 0x10],EAX      ; 004c9e84
    LEA EAX,[ESI + 0x8]                 ; 004c9e88
    MOV EAX,dword ptr [EAX]             ; 004c9e8b
    MOV dword ptr [ESP + 0x14],EAX      ; 004c9e8d
    MOV EAX,dword ptr [ESI + 0xc]       ; 004c9e91
    ADD ESI,0xc                         ; 004c9e94
    MOV dword ptr [ESP + 0x18],EAX      ; 004c9e97
    LEA EAX,[ESI + 0x4]                 ; 004c9e9b
    MOV EAX,dword ptr [EAX]             ; 004c9e9e
    MOV dword ptr [ESP + 0x1c],EAX      ; 004c9ea0
    LEA EAX,[ESI + 0x8]                 ; 004c9ea4
    MOV EAX,dword ptr [EAX]             ; 004c9ea7
    MOV dword ptr [ESP + 0x20],EAX      ; 004c9ea9
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c9ead
    MOV EDX,0x3f8147ae                  ; 004c9eb0
    ADD EAX,0xa98                       ; 004c9eb5
    XOR ECX,ECX                         ; 004c9eba
    MOV dword ptr [ESP + 0xb0],EAX      ; 004c9ebc
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c9ec3
    MOV dword ptr [ESP + 0xbc],EDX      ; 004c9ec6
    ADD EAX,0x5e8                       ; 004c9ecd
    MOV dword ptr [ESP + 0xb8],ECX      ; 004c9ed2
    MOV dword ptr [ESP + 0xac],EAX      ; 004c9ed9
    MOV EAX,dword ptr [ESP + 0xac]      ; 004c9ee0
        ;   Label: LAB_004c9ee0
    CMP dword ptr [EAX],0x0             ; 004c9ee7
    JNZ 0x004ca06b                      ; 004c9eea
        ;   XREF to: 004ca06b (CONDITIONAL_JUMP)  ; LAB_004ca06b
    MOV EAX,dword ptr [ESP + 0xb0]      ; 004c9ef0
        ;   Label: LAB_004c9ef0
    ADD EAX,dword ptr [ESP + 0xb8]      ; 004c9ef7
    XOR ESI,ESI                         ; 004c9efe
    MOV dword ptr [ESP + 0xa8],EAX      ; 004c9f00
    MOV ECX,dword ptr [EBP + 0x1c]      ; 004c9f07
        ;   Label: LAB_004c9f07
    PUSH ECX                            ; 004c9f0a
    MOV EDI,dword ptr [EBP + 0x18]      ; 004c9f0b
    PUSH EDI                            ; 004c9f0e
    MOV EDI,dword ptr [ESP + 0xb0]      ; 004c9f0f
    ADD EDI,0x3c                        ; 004c9f16
    ADD EDI,ESI                         ; 004c9f19
    PUSH EDI                            ; 004c9f1b
    CALL core_dtri.cpp_rayTriangleIntersection_FUN_0046c620 ; 004c9f1c
        ;   XREF to: 0046c620 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_rayTriangleIntersection_FUN_0046c620()
    MOV dword ptr [ESP + 0xcc],EAX      ; 004c9f21
    FLD float ptr [ESP + 0xcc]          ; 004c9f28
    ADD ESP,0xc                         ; 004c9f2f
    FST float ptr [ESP + 0x4]           ; 004c9f32
    FLDZ                                ; 004c9f36
    FCOMPP                              ; 004c9f38
    FNSTSW AX                           ; 004c9f3a
    SAHF                                ; 004c9f3c
    JA 0x004c9fa8                       ; 004c9f3d
        ;   XREF to: 004c9fa8 (CONDITIONAL_JUMP)  ; LAB_004c9fa8
    FLD float ptr [ESP + 0x4]           ; 004c9f3f
    FCOMP float ptr [ESP + 0xbc]        ; 004c9f43
    FNSTSW AX                           ; 004c9f4a
    SAHF                                ; 004c9f4c
    JNC 0x004c9fa8                      ; 004c9f4d
        ;   XREF to: 004c9fa8 (CONDITIONAL_JUMP)  ; LAB_004c9fa8
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c9f4f
    MOV dword ptr [ESP + 0xbc],EAX      ; 004c9f53
    LEA EAX,[EDI + 0x24]                ; 004c9f5a
    FLD float ptr [EAX]                 ; 004c9f5d
    FCHS                                ; 004c9f5f
    FSTP float ptr [ESP + 0x90]         ; 004c9f61
    FLD float ptr [EAX + 0x4]           ; 004c9f68
    FCHS                                ; 004c9f6b
    FSTP float ptr [ESP + 0x94]         ; 004c9f6d
    FLD float ptr [EAX + 0x8]           ; 004c9f74
    FCHS                                ; 004c9f77
    LEA EAX,[ESP + 0x90]                ; 004c9f79
    FSTP float ptr [ESP + 0x98]         ; 004c9f80
    CMP EBX,EAX                         ; 004c9f87
    JZ 0x004c9fa8                       ; 004c9f89
        ;   XREF to: 004c9fa8 (CONDITIONAL_JUMP)  ; LAB_004c9fa8
    MOV EAX,dword ptr [ESP + 0x90]      ; 004c9f8b
    MOV dword ptr [EBX],EAX             ; 004c9f92
    MOV EAX,dword ptr [ESP + 0x94]      ; 004c9f94
    MOV dword ptr [EBX + 0x4],EAX       ; 004c9f9b
    MOV EAX,dword ptr [ESP + 0x98]      ; 004c9f9e
    MOV dword ptr [EBX + 0x8],EAX       ; 004c9fa5
    ADD ESI,0x38                        ; 004c9fa8
        ;   Label: LAB_004c9fa8
    CMP ESI,0x70                        ; 004c9fab
    JNZ 0x004c9f07                      ; 004c9fae
        ;   XREF to: 004c9f07 (CONDITIONAL_JUMP)  ; LAB_004c9f07
    MOV EDX,dword ptr [ESP + 0xb8]      ; 004c9fb4
    MOV EAX,dword ptr [ESP + 0xac]      ; 004c9fbb
    ADD EDX,0xb8                        ; 004c9fc2
    ADD EAX,0x64                        ; 004c9fc8
    MOV dword ptr [ESP + 0xb8],EDX      ; 004c9fcb
    MOV dword ptr [ESP + 0xac],EAX      ; 004c9fd2
    CMP EDX,0x8a0                       ; 004c9fd9
    JNZ 0x004c9ee0                      ; 004c9fdf
        ;   XREF to: 004c9ee0 (CONDITIONAL_JUMP)  ; LAB_004c9ee0
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c9fe5
    ADD EAX,0x448                       ; 004c9fe8
    PUSH EAX                            ; 004c9fed
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 004c9fee
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(CKeyFramedModelInstance * this_ptr)
    LEA ESI,[EAX + 0x338]               ; 004c9ff3
    ADD ESP,0x4                         ; 004c9ff9
    LEA EAX,[ESP + 0xc]                 ; 004c9ffc
    MOV EDI,ESI                         ; 004ca000
    CMP EAX,ESI                         ; 004ca002
    JZ 0x004ca01a                       ; 004ca004
        ;   XREF to: 004ca01a (CONDITIONAL_JUMP)  ; LAB_004ca01a
    MOV EAX,dword ptr [ESI]             ; 004ca006
    MOV dword ptr [ESP + 0xc],EAX       ; 004ca008
    MOV EAX,dword ptr [ESI + 0x4]       ; 004ca00c
    MOV dword ptr [ESP + 0x10],EAX      ; 004ca00f
    MOV EAX,dword ptr [ESI + 0x8]       ; 004ca013
    MOV dword ptr [ESP + 0x14],EAX      ; 004ca016
    LEA EAX,[ESP + 0x18]                ; 004ca01a
        ;   Label: LAB_004ca01a
    LEA ESI,[EDI + 0xc]                 ; 004ca01e
    CMP EAX,ESI                         ; 004ca021
    JNZ 0x004ca147                      ; 004ca023
        ;   XREF to: 004ca147 (CONDITIONAL_JUMP)  ; LAB_004ca147
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ca029
        ;   Label: LAB_004ca029
    ADD EAX,0x1338                      ; 004ca02c
    MOV ESI,EAX                         ; 004ca031
    ADD EAX,0xc0                        ; 004ca033
    MOV dword ptr [ESP + 0xb4],EAX      ; 004ca038
    FLD float ptr [ESI + 0x18]          ; 004ca03f
        ;   Label: LAB_004ca03f
    FLDZ                                ; 004ca042
    FCOMPP                              ; 004ca044
    FNSTSW AX                           ; 004ca046
    SAHF                                ; 004ca048
    JC 0x004ca160                       ; 004ca049
        ;   XREF to: 004ca160 (CONDITIONAL_JUMP)  ; LAB_004ca160
    MOV EDX,dword ptr [ESP + 0xb4]      ; 004ca04f
        ;   Label: LAB_004ca04f
    ADD ESI,0x60                        ; 004ca056
    CMP ESI,EDX                         ; 004ca059
    JNZ 0x004ca03f                      ; 004ca05b
        ;   XREF to: 004ca03f (CONDITIONAL_JUMP)  ; LAB_004ca03f
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004ca05d
    MOV ESP,EBP                         ; 004ca064
    POP EBP                             ; 004ca066
    POP EDI                             ; 004ca067
    POP ESI                             ; 004ca068
    POP EBX                             ; 004ca069
    RET                                 ; 004ca06a
    MOV ESI,dword ptr [EBP + 0x18]      ; 004ca06b
        ;   Label: LAB_004ca06b
    FLD float ptr [ESI]                 ; 004ca06e
    FSUB float ptr [EAX + 0xc]          ; 004ca070
    FSTP float ptr [ESP + 0x24]         ; 004ca073
    FLD float ptr [ESI + 0x4]           ; 004ca077
    FSUB float ptr [EAX + 0x10]         ; 004ca07a
    FSTP float ptr [ESP + 0x28]         ; 004ca07d
    FLD float ptr [ESI + 0x8]           ; 004ca081
    FSUB float ptr [EAX + 0x14]         ; 004ca084
    LEA EAX,[ESP + 0x24]                ; 004ca087
    PUSH EAX                            ; 004ca08b
    LEA EAX,[ESP + 0x70]                ; 004ca08c
    MOV ESI,dword ptr [ESP + 0xb0]      ; 004ca090
    PUSH EAX                            ; 004ca097
    ADD ESI,0x24                        ; 004ca098
    PUSH ESI                            ; 004ca09b
    FSTP float ptr [ESP + 0x38]         ; 004ca09c
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0 ; 004ca0a0
        ;   XREF to: 0044daa0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0()
    ADD ESP,0xc                         ; 004ca0a5
    MOV EDI,dword ptr [EBP + 0x1c]      ; 004ca0a8
    PUSH EDI                            ; 004ca0ab
    LEA EAX,[ESP + 0xa0]                ; 004ca0ac
    PUSH EAX                            ; 004ca0b3
    PUSH ESI                            ; 004ca0b4
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0 ; 004ca0b5
        ;   XREF to: 0044daa0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0()
    ADD ESP,0xc                         ; 004ca0ba
    LEA EAX,[ESP + 0x30]                ; 004ca0bd
    PUSH EAX                            ; 004ca0c1
    LEA EAX,[ESP + 0xa0]                ; 004ca0c2
    PUSH EAX                            ; 004ca0c9
    LEA EAX,[ESP + 0x74]                ; 004ca0ca
    PUSH EAX                            ; 004ca0ce
    LEA EAX,[ESP + 0x18]                ; 004ca0cf
    PUSH EAX                            ; 004ca0d3
    CALL core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_0041d550 ; 004ca0d4
        ;   XREF to: 0041d550 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_0041d550()
    MOV dword ptr [ESP + 0xd0],EAX      ; 004ca0d9
    FLD float ptr [ESP + 0xd0]          ; 004ca0e0
    ADD ESP,0x10                        ; 004ca0e7
    FST float ptr [ESP]                 ; 004ca0ea
    FLDZ                                ; 004ca0ed
    FCOMPP                              ; 004ca0ef
    FNSTSW AX                           ; 004ca0f1
    SAHF                                ; 004ca0f3
    JA 0x004c9ef0                       ; 004ca0f4
        ;   XREF to: 004c9ef0 (CONDITIONAL_JUMP)  ; LAB_004c9ef0
    FLD float ptr [ESP]                 ; 004ca0fa
    FCOMP float ptr [ESP + 0xbc]        ; 004ca0fd
    FNSTSW AX                           ; 004ca104
    SAHF                                ; 004ca106
    JNC 0x004c9ef0                      ; 004ca107
        ;   XREF to: 004c9ef0 (CONDITIONAL_JUMP)  ; LAB_004c9ef0
    MOV EAX,dword ptr [ESP]             ; 004ca10d
    MOV dword ptr [ESP + 0xbc],EAX      ; 004ca110
    LEA EAX,[ESP + 0x30]                ; 004ca117
    PUSH EAX                            ; 004ca11b
    LEA EAX,[ESP + 0x4c]                ; 004ca11c
    PUSH EAX                            ; 004ca120
    PUSH ESI                            ; 004ca121
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 004ca122
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40()
    ADD ESP,0xc                         ; 004ca127
    CMP EBX,EAX                         ; 004ca12a
    JZ 0x004c9ef0                       ; 004ca12c
        ;   XREF to: 004c9ef0 (CONDITIONAL_JUMP)  ; LAB_004c9ef0
    MOV EDX,dword ptr [EAX]             ; 004ca132
    MOV dword ptr [EBX],EDX             ; 004ca134
    MOV EDX,dword ptr [EAX + 0x4]       ; 004ca136
    MOV dword ptr [EBX + 0x4],EDX       ; 004ca139
    MOV EDX,dword ptr [EAX + 0x8]       ; 004ca13c
    MOV dword ptr [EBX + 0x8],EDX       ; 004ca13f
    JMP 0x004c9ef0                      ; 004ca142
        ;   XREF to: 004c9ef0 (UNCONDITIONAL_JUMP)  ; LAB_004c9ef0
    MOV EAX,dword ptr [ESI]             ; 004ca147
        ;   Label: LAB_004ca147
    MOV dword ptr [ESP + 0x18],EAX      ; 004ca149
    MOV EAX,dword ptr [ESI + 0x4]       ; 004ca14d
    MOV dword ptr [ESP + 0x1c],EAX      ; 004ca150
    MOV EAX,dword ptr [ESI + 0x8]       ; 004ca154
    MOV dword ptr [ESP + 0x20],EAX      ; 004ca157
    JMP 0x004ca029                      ; 004ca15b
        ;   XREF to: 004ca029 (UNCONDITIONAL_JUMP)  ; LAB_004ca029
    MOV EDI,dword ptr [EBP + 0x18]      ; 004ca160
        ;   Label: LAB_004ca160
    LEA EAX,[ESI + 0x1c]                ; 004ca163
    FLD float ptr [EDI]                 ; 004ca166
    FSUB float ptr [EAX]                ; 004ca168
    FSTP float ptr [ESP + 0x3c]         ; 004ca16a
    FLD float ptr [EDI + 0x4]           ; 004ca16e
    FSUB float ptr [EAX + 0x4]          ; 004ca171
    FSTP float ptr [ESP + 0x40]         ; 004ca174
    FLD float ptr [EDI + 0x8]           ; 004ca178
    FSUB float ptr [EAX + 0x8]          ; 004ca17b
    LEA EAX,[ESP + 0x3c]                ; 004ca17e
    PUSH EAX                            ; 004ca182
    LEA EAX,[ESP + 0x7c]                ; 004ca183
    PUSH EAX                            ; 004ca187
    LEA EDI,[ESI + 0x34]                ; 004ca188
    PUSH EDI                            ; 004ca18b
    FSTP float ptr [ESP + 0x50]         ; 004ca18c
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0 ; 004ca190
        ;   XREF to: 0044daa0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0()
    ADD ESP,0xc                         ; 004ca195
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004ca198
    PUSH EAX                            ; 004ca19b
    LEA EAX,[ESP + 0x64]                ; 004ca19c
    PUSH EAX                            ; 004ca1a0
    PUSH EDI                            ; 004ca1a1
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0 ; 004ca1a2
        ;   XREF to: 0044daa0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0()
    ADD ESP,0xc                         ; 004ca1a7
    LEA EAX,[ESP + 0x84]                ; 004ca1aa
    PUSH EAX                            ; 004ca1b1
    LEA EAX,[ESP + 0x64]                ; 004ca1b2
    PUSH EAX                            ; 004ca1b6
    LEA EAX,[ESP + 0x80]                ; 004ca1b7
    PUSH EAX                            ; 004ca1be
    LEA EAX,[ESP + 0x18]                ; 004ca1bf
    PUSH EAX                            ; 004ca1c3
    CALL core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_0041d550 ; 004ca1c4
        ;   XREF to: 0041d550 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_0041d550()
    MOV dword ptr [ESP + 0xd0],EAX      ; 004ca1c9
    FLD float ptr [ESP + 0xd0]          ; 004ca1d0
    ADD ESP,0x10                        ; 004ca1d7
    FST float ptr [ESP + 0x8]           ; 004ca1da
    FLDZ                                ; 004ca1de
    FCOMPP                              ; 004ca1e0
    FNSTSW AX                           ; 004ca1e2
    SAHF                                ; 004ca1e4
    JA 0x004ca04f                       ; 004ca1e5
        ;   XREF to: 004ca04f (CONDITIONAL_JUMP)  ; LAB_004ca04f
    FLD float ptr [ESP + 0x8]           ; 004ca1eb
    FCOMP float ptr [ESP + 0xbc]        ; 004ca1ef
    FNSTSW AX                           ; 004ca1f6
    SAHF                                ; 004ca1f8
    JNC 0x004ca04f                      ; 004ca1f9
        ;   XREF to: 004ca04f (CONDITIONAL_JUMP)  ; LAB_004ca04f
    MOV EAX,dword ptr [ESP + 0x8]       ; 004ca1ff
    MOV dword ptr [ESP + 0xbc],EAX      ; 004ca203
    LEA EAX,[ESP + 0x84]                ; 004ca20a
    PUSH EAX                            ; 004ca211
    LEA EAX,[ESP + 0x58]                ; 004ca212
    PUSH EAX                            ; 004ca216
    PUSH EDI                            ; 004ca217
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 004ca218
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40()
    ADD ESP,0xc                         ; 004ca21d
    CMP EBX,EAX                         ; 004ca220
    JZ 0x004ca04f                       ; 004ca222
        ;   XREF to: 004ca04f (CONDITIONAL_JUMP)  ; LAB_004ca04f
    MOV EDX,dword ptr [EAX]             ; 004ca228
    MOV dword ptr [EBX],EDX             ; 004ca22a
    MOV EDX,dword ptr [EAX + 0x4]       ; 004ca22c
    MOV dword ptr [EBX + 0x4],EDX       ; 004ca22f
    MOV EDX,dword ptr [EAX + 0x8]       ; 004ca232
    MOV dword ptr [EBX + 0x8],EDX       ; 004ca235
    JMP 0x004ca04f                      ; 004ca238
        ;   XREF to: 004ca04f (UNCONDITIONAL_JUMP)  ; LAB_004ca04f

