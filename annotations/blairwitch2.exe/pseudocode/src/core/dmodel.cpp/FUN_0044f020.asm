; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_dmodel_cpp_FUN_0044f020(CKeyFramedModel *param_1,int param_2,undefined4 param_3,undefined4 param_4,float *param_5)
;
; Local Variables:
; undefined8       Stack[-0x138]:8  local_138
; undefined8       Stack[-0x130]:8  local_130
; undefined8       Stack[-0x128]:8  local_128
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined        Stack[-0x118]:1  local_118
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined        Stack[-0xd4]:1  local_d4
; undefined        Stack[-0xc8]:1  local_c8
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined        Stack[-0xa4]:1  local_a4
; undefined        Stack[-0x98]:1  local_98
; undefined        Stack[-0x8c]:1  local_8c
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined        Stack[-0x5c]:1  local_5c
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
;
; XREF[2]:
;   core_actor.cpp_FUN_004093a0 at 00409721
;   core_platfrm.cpp_CPlatform_isActorOnPlatform_FUN_005197b0 at 005199bd
;
; Referenced Globals:
;   undefined4 DAT_005f50c4
;
; Called Functions:
;   core_box.cpp_FUN_0041af70
;   core_dirmat.cpp_FUN_00449530
;   core_dirmat.cpp_FUN_004495a0
;   core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_0044e6e0
;   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_004779e0
;   core_dtri.cpp_rayTriangleIntersection_FUN_00477a50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044f020
        ;   Label: core_dmodel.cpp_FUN_0044f020
    PUSH ESI                            ; 0044f021
    PUSH EDI                            ; 0044f022
    PUSH EBP                            ; 0044f023
    MOV EBP,ESP                         ; 0044f024
    SUB ESP,0x124                       ; 0044f026
    AND ESP,0xfffffff8                  ; 0044f02c
    MOV EBX,dword ptr [EBP + 0x18]      ; 0044f02f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044f032
    MOV EDX,dword ptr [EAX + 0x100]     ; 0044f035
    CMP EBX,EDX                         ; 0044f03b
    JL 0x0044f042                       ; 0044f03d
        ;   XREF to: 0044f042 (CONDITIONAL_JUMP)  ; LAB_0044f042
    LEA EBX,[EDX + -0x1]                ; 0044f03f
    TEST EBX,EBX                        ; 0044f042
        ;   Label: LAB_0044f042
    JGE 0x0044f048                      ; 0044f044
        ;   XREF to: 0044f048 (CONDITIONAL_JUMP)  ; LAB_0044f048
    XOR EBX,EBX                         ; 0044f046
    PUSH 0x0                            ; 0044f048
        ;   Label: LAB_0044f048
    MOV ECX,dword ptr [EBP + 0x20]      ; 0044f04a
    LEA EAX,[EBX*0x4 + 0x0]             ; 0044f04d
    PUSH ECX                            ; 0044f054
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0044f055
    SUB EAX,EBX                         ; 0044f058
    PUSH ESI                            ; 0044f05a
    MOV ESI,dword ptr [EBP + 0x14]      ; 0044f05b
    SHL EAX,0x3                         ; 0044f05e
    MOV ESI,dword ptr [ESI + 0x350]     ; 0044f061
    ADD EAX,ESI                         ; 0044f067
    PUSH EAX                            ; 0044f069
    CALL core_box.cpp_FUN_0041af70      ; 0044f06a
        ;   XREF to: 0041af70 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041af70()
    MOV dword ptr [ESP + 0x130],EAX     ; 0044f06f
    FLD float ptr [ESP + 0x130]         ; 0044f076
    ADD ESP,0x10                        ; 0044f07d
    FLDZ                                ; 0044f080
    FXCH                                ; 0044f082
    FSTP double ptr [ESP]               ; 0044f084
    FCOMP double ptr [ESP]              ; 0044f087
    FNSTSW AX                           ; 0044f08a
    SAHF                                ; 0044f08c
    JA 0x0044f2f5                       ; 0044f08d
        ;   XREF to: 0044f2f5 (CONDITIONAL_JUMP)  ; LAB_0044f2f5
    FLD1                                ; 0044f093
    FCOMP double ptr [ESP]              ; 0044f095
    FNSTSW AX                           ; 0044f098
    SAHF                                ; 0044f09a
    JC 0x0044f2f5                       ; 0044f09b
        ;   XREF to: 0044f2f5 (CONDITIONAL_JUMP)  ; LAB_0044f2f5
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044f0a1
    MOV EDI,0x40000000                  ; 0044f0a4
    MOV EDX,dword ptr [EAX + 0x358]     ; 0044f0a9
    MOV dword ptr [ESP + 0xf4],EDI      ; 0044f0af
    TEST EDX,EDX                        ; 0044f0b6
    JNZ 0x0044f3b3                      ; 0044f0b8
        ;   XREF to: 0044f3b3 (CONDITIONAL_JUMP)  ; LAB_0044f3b3
    PUSH EBX                            ; 0044f0be
    PUSH EAX                            ; 0044f0bf
    MOV EDI,EAX                         ; 0044f0c0
    CALL core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_0044e6e0 ; 0044f0c2
        ;   XREF to: 0044e6e0 (UNCONDITIONAL_CALL)  ; CVector3i * core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_0044e6e0(CKeyFramedModel * this_ptr, int frame_index)
    ADD ESP,0x8                         ; 0044f0c7
    MOV dword ptr [ESP + 0x110],EAX     ; 0044f0ca
    XOR EAX,EAX                         ; 0044f0d1
    MOV dword ptr [ESP + 0x104],EAX     ; 0044f0d3
    MOV EAX,EDI                         ; 0044f0da
    CMP dword ptr [EAX + 0x110],0x0     ; 0044f0dc
    JLE 0x0044f2d9                      ; 0044f0e3
        ;   XREF to: 0044f2d9 (CONDITIONAL_JUMP)  ; LAB_0044f2d9
    XOR EAX,EAX                         ; 0044f0e9
    MOV dword ptr [ESP + 0x108],EAX     ; 0044f0eb
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044f0f2
        ;   Label: LAB_0044f0f2
    MOV EBX,dword ptr [ESP + 0x108]     ; 0044f0f5
    MOV EAX,dword ptr [EAX + 0x114]     ; 0044f0fc
    ADD EBX,EAX                         ; 0044f102
    IMUL EAX,dword ptr [EBX + 0x18],0xc ; 0044f104
    MOV ECX,dword ptr [ESP + 0x110]     ; 0044f108
    MOV dword ptr [ESP + 0x114],EBX     ; 0044f10f
    LEA EBX,[ESP + 0x88]                ; 0044f116
    ADD EAX,ECX                         ; 0044f11d
    FILD dword ptr [EAX]                ; 0044f11f
    FMUL float ptr [0x005f50c4]         ; 0044f121 | DAT_005f50c4
    FSTP float ptr [EBX]                ; 0044f127
    FILD dword ptr [EAX + 0x4]          ; 0044f129
    FMUL float ptr [0x005f50c4]         ; 0044f12c | DAT_005f50c4
    FSTP float ptr [EBX + 0x4]          ; 0044f132
    FILD dword ptr [EAX + 0x8]          ; 0044f135
    FMUL float ptr [0x005f50c4]         ; 0044f138 | DAT_005f50c4
    FSTP float ptr [EBX + 0x8]          ; 0044f13e
    MOV EAX,dword ptr [ESP + 0x114]     ; 0044f141
    IMUL EAX,dword ptr [EAX + 0x24],0xc ; 0044f148
    LEA EBX,[ESP + 0xb8]                ; 0044f14c
    ADD EAX,ECX                         ; 0044f153
    FILD dword ptr [EAX]                ; 0044f155
    FMUL float ptr [0x005f50c4]         ; 0044f157 | DAT_005f50c4
    FSTP float ptr [EBX]                ; 0044f15d
    FILD dword ptr [EAX + 0x4]          ; 0044f15f
    FMUL float ptr [0x005f50c4]         ; 0044f162 | DAT_005f50c4
    FSTP float ptr [EBX + 0x4]          ; 0044f168
    FILD dword ptr [EAX + 0x8]          ; 0044f16b
    FMUL float ptr [0x005f50c4]         ; 0044f16e | DAT_005f50c4
    FSTP float ptr [EBX + 0x8]          ; 0044f174
    MOV EAX,dword ptr [ESP + 0x114]     ; 0044f177
    MOV EDI,0x2                         ; 0044f17e
    MOV EDX,dword ptr [EAX + 0x4]       ; 0044f183
    MOV dword ptr [ESP + 0x118],EDI     ; 0044f186
    CMP EDX,EDI                         ; 0044f18d
    JLE 0x0044f2a8                      ; 0044f18f
        ;   XREF to: 0044f2a8 (CONDITIONAL_JUMP)  ; LAB_0044f2a8
    ADD EAX,0x18                        ; 0044f195
    MOV dword ptr [ESP + 0x11c],EAX     ; 0044f198
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0044f19f
        ;   Label: LAB_0044f19f
    IMUL EAX,dword ptr [EAX + 0x18],0xc ; 0044f1a6
    MOV EDX,dword ptr [ESP + 0x110]     ; 0044f1aa
    LEA EBX,[ESP + 0xd0]                ; 0044f1b1
    ADD EAX,EDX                         ; 0044f1b8
    FILD dword ptr [EAX]                ; 0044f1ba
    FMUL float ptr [0x005f50c4]         ; 0044f1bc | DAT_005f50c4
    FSTP float ptr [EBX]                ; 0044f1c2
    FILD dword ptr [EAX + 0x4]          ; 0044f1c4
    FMUL float ptr [0x005f50c4]         ; 0044f1c7 | DAT_005f50c4
    FSTP float ptr [EBX + 0x4]          ; 0044f1cd
    FILD dword ptr [EAX + 0x8]          ; 0044f1d0
    FMUL float ptr [0x005f50c4]         ; 0044f1d3 | DAT_005f50c4
    FSTP float ptr [EBX + 0x8]          ; 0044f1d9
    LEA EAX,[ESP + 0xd0]                ; 0044f1dc
    PUSH EAX                            ; 0044f1e3
    LEA EAX,[ESP + 0xbc]                ; 0044f1e4
    PUSH EAX                            ; 0044f1eb
    LEA EAX,[ESP + 0x90]                ; 0044f1ec
    PUSH EAX                            ; 0044f1f3
    LEA EAX,[ESP + 0x2c]                ; 0044f1f4
    PUSH EAX                            ; 0044f1f8
    LEA EBX,[ESP + 0xe0]                ; 0044f1f9
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_004779e0 ; 0044f200
        ;   XREF to: 004779e0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_004779e0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    LEA EAX,[ESP + 0xc8]                ; 0044f205
    ADD ESP,0x10                        ; 0044f20c
    CMP EAX,EBX                         ; 0044f20f
    JZ 0x0044f23d                       ; 0044f211
        ;   XREF to: 0044f23d (CONDITIONAL_JUMP)  ; LAB_0044f23d
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0044f213
    MOV dword ptr [ESP + 0xb8],EAX      ; 0044f21a
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0044f221
    MOV dword ptr [ESP + 0xbc],EAX      ; 0044f228
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0044f22f
    MOV dword ptr [ESP + 0xc0],EAX      ; 0044f236
    MOV ECX,dword ptr [EBP + 0x20]      ; 0044f23d
        ;   Label: LAB_0044f23d
    PUSH ECX                            ; 0044f240
    MOV EBX,dword ptr [EBP + 0x1c]      ; 0044f241
    PUSH EBX                            ; 0044f244
    LEA EAX,[ESP + 0x28]                ; 0044f245
    PUSH EAX                            ; 0044f249
    CALL core_dtri.cpp_rayTriangleIntersection_FUN_00477a50 ; 0044f24a
        ;   XREF to: 00477a50 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_rayTriangleIntersection_FUN_00477a50()
    MOV dword ptr [ESP + 0x12c],EAX     ; 0044f24f
    FLD float ptr [ESP + 0x12c]         ; 0044f256
    ADD ESP,0xc                         ; 0044f25d
    FST float ptr [ESP + 0x1c]          ; 0044f260
    FCOMP float ptr [ESP + 0xf4]        ; 0044f264
    FNSTSW AX                           ; 0044f26b
    SAHF                                ; 0044f26d
    JBE 0x0044f30e                      ; 0044f26e
        ;   XREF to: 0044f30e (CONDITIONAL_JUMP)  ; LAB_0044f30e
    MOV EBX,dword ptr [ESP + 0x118]     ; 0044f274
        ;   Label: LAB_0044f274
    INC EBX                             ; 0044f27b
    MOV ECX,dword ptr [ESP + 0x11c]     ; 0044f27c
    MOV dword ptr [ESP + 0x118],EBX     ; 0044f283
    MOV EAX,EBX                         ; 0044f28a
    MOV EBX,dword ptr [ESP + 0x114]     ; 0044f28c
    ADD ECX,0xc                         ; 0044f293
    MOV ESI,dword ptr [EBX + 0x4]       ; 0044f296
    MOV dword ptr [ESP + 0x11c],ECX     ; 0044f299
    CMP EAX,ESI                         ; 0044f2a0
    JL 0x0044f19f                       ; 0044f2a2
        ;   XREF to: 0044f19f (CONDITIONAL_JUMP)  ; LAB_0044f19f
    MOV EBX,dword ptr [ESP + 0x108]     ; 0044f2a8
        ;   Label: LAB_0044f2a8
    ADD EBX,0x48                        ; 0044f2af
    MOV ESI,dword ptr [ESP + 0x104]     ; 0044f2b2
    MOV dword ptr [ESP + 0x108],EBX     ; 0044f2b9
    MOV EBX,dword ptr [EBP + 0x14]      ; 0044f2c0
    INC ESI                             ; 0044f2c3
    MOV EDI,dword ptr [EBX + 0x110]     ; 0044f2c4
    MOV dword ptr [ESP + 0x104],ESI     ; 0044f2ca
    CMP ESI,EDI                         ; 0044f2d1
    JL 0x0044f0f2                       ; 0044f2d3
        ;   XREF to: 0044f0f2 (CONDITIONAL_JUMP)  ; LAB_0044f0f2
    MOV EAX,dword ptr [ESP + 0xf4]      ; 0044f2d9
        ;   Label: LAB_0044f2d9
    MOV dword ptr [ESP + 0xf8],EAX      ; 0044f2e0
    MOV EAX,dword ptr [ESP + 0xf8]      ; 0044f2e7
    MOV ESP,EBP                         ; 0044f2ee
    POP EBP                             ; 0044f2f0
    POP EDI                             ; 0044f2f1
    POP ESI                             ; 0044f2f2
    POP EBX                             ; 0044f2f3
    RET                                 ; 0044f2f4
    MOV dword ptr [ESP + 0xf8],0x40000000 ; 0044f2f5
        ;   Label: LAB_0044f2f5
    MOV EAX,dword ptr [ESP + 0xf8]      ; 0044f300
    MOV ESP,EBP                         ; 0044f307
    POP EBP                             ; 0044f309
    POP EDI                             ; 0044f30a
    POP ESI                             ; 0044f30b
    POP EBX                             ; 0044f30c
    RET                                 ; 0044f30d
    FLD float ptr [ESP + 0x1c]          ; 0044f30e
        ;   Label: LAB_0044f30e
    FLDZ                                ; 0044f312
    FXCH                                ; 0044f314
    FSTP double ptr [ESP + 0x8]         ; 0044f316
    FCOMP double ptr [ESP + 0x8]        ; 0044f31a
    FNSTSW AX                           ; 0044f31e
    SAHF                                ; 0044f320
    JA 0x0044f274                       ; 0044f321
        ;   XREF to: 0044f274 (CONDITIONAL_JUMP)  ; LAB_0044f274
    FLD1                                ; 0044f327
    FCOMP double ptr [ESP + 0x8]        ; 0044f329
    FNSTSW AX                           ; 0044f32d
    SAHF                                ; 0044f32f
    JC 0x0044f274                       ; 0044f330
        ;   XREF to: 0044f274 (CONDITIONAL_JUMP)  ; LAB_0044f274
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0044f336
    MOV ESI,dword ptr [EBP + 0x24]      ; 0044f33a
    MOV dword ptr [ESP + 0xf4],EAX      ; 0044f33d
    TEST ESI,ESI                        ; 0044f344
    JZ 0x0044f274                       ; 0044f346
        ;   XREF to: 0044f274 (CONDITIONAL_JUMP)  ; LAB_0044f274
    FLD float ptr [ESP + 0x44]          ; 0044f34c
    FLD float ptr [ESP + 0x48]          ; 0044f350
    FLD float ptr [ESP + 0x4c]          ; 0044f354
    LEA EDI,[ESP + 0x58]                ; 0044f358
    LEA ESI,[ESP + 0xc4]                ; 0044f35c
    FXCH ST2                            ; 0044f363
    FCHS                                ; 0044f365
    FXCH                                ; 0044f367
    FCHS                                ; 0044f369
    FXCH ST2                            ; 0044f36b
    FCHS                                ; 0044f36d
    FXCH ST2                            ; 0044f36f
    FSTP float ptr [ESP + 0xc8]         ; 0044f371
    FXCH                                ; 0044f378
    FSTP float ptr [ESP + 0xcc]         ; 0044f37a
    FSTP float ptr [ESP + 0xc4]         ; 0044f381
    MOVSD ES:EDI,ESI                    ; 0044f388
    MOVSD ES:EDI,ESI                    ; 0044f389
    MOVSD ES:EDI,ESI                    ; 0044f38a
    LEA EAX,[ESP + 0x58]                ; 0044f38b
    MOV EDI,dword ptr [EBP + 0x24]      ; 0044f38f
    CMP EAX,EDI                         ; 0044f392
    JZ 0x0044f274                       ; 0044f394
        ;   XREF to: 0044f274 (CONDITIONAL_JUMP)  ; LAB_0044f274
    MOV EAX,dword ptr [ESP + 0x58]      ; 0044f39a
    MOV dword ptr [EDI],EAX             ; 0044f39e
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0044f3a0
    MOV dword ptr [EDI + 0x4],EAX       ; 0044f3a4
    MOV EAX,dword ptr [ESP + 0x60]      ; 0044f3a7
    MOV dword ptr [EDI + 0x8],EAX       ; 0044f3ab
    JMP 0x0044f274                      ; 0044f3ae
        ;   XREF to: 0044f274 (UNCONDITIONAL_JUMP)  ; LAB_0044f274
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0044f3b3
        ;   Label: LAB_0044f3b3
    PUSH ECX                            ; 0044f3b6
    ADD EAX,0x370                       ; 0044f3b7
    LEA ESI,[ESP + 0xe0]                ; 0044f3bc
    PUSH EAX                            ; 0044f3c3
    LEA EDI,[ESP + 0x6c]                ; 0044f3c4
    MOV dword ptr [ESP + 0x104],EAX     ; 0044f3c8
    CALL core_dirmat.cpp_FUN_004495a0   ; 0044f3cf
        ;   XREF to: 004495a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_004495a0()
    LEA ESI,[ESP + 0xe4]                ; 0044f3d4
    ADD ESP,0x8                         ; 0044f3db
    MOVSD ES:EDI,ESI                    ; 0044f3de
    MOVSD ES:EDI,ESI                    ; 0044f3df
    MOVSD ES:EDI,ESI                    ; 0044f3e0
    MOV EDI,dword ptr [EBP + 0x20]      ; 0044f3e1
    PUSH EDI                            ; 0044f3e4
    MOV EAX,dword ptr [ESP + 0x100]     ; 0044f3e5
    PUSH EAX                            ; 0044f3ec
    LEA ESI,[ESP + 0xa8]                ; 0044f3ed
    LEA EDI,[ESP + 0x9c]                ; 0044f3f4
    CALL core_dirmat.cpp_FUN_004495a0   ; 0044f3fb
        ;   XREF to: 004495a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_004495a0()
    ADD ESP,0x8                         ; 0044f400
    LEA ESI,[ESP + 0xa0]                ; 0044f403
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044f40a
    MOVSD ES:EDI,ESI                    ; 0044f40d
    MOVSD ES:EDI,ESI                    ; 0044f40e
    MOVSD ES:EDI,ESI                    ; 0044f40f
    MOV EDX,dword ptr [EAX + 0x354]     ; 0044f410
    MOV EAX,EBX                         ; 0044f416
    IMUL EAX,EDX                        ; 0044f418
    SHL EAX,0x3                         ; 0044f41b
    MOV EBX,EAX                         ; 0044f41e
    SHL EAX,0x3                         ; 0044f420
    SUB EAX,EBX                         ; 0044f423
    MOV EBX,EAX                         ; 0044f425
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044f427
    MOV EAX,dword ptr [EAX + 0x358]     ; 0044f42a
    ADD EBX,EAX                         ; 0044f430
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044f432
    XOR ECX,ECX                         ; 0044f435
    MOV ESI,dword ptr [EAX + 0x354]     ; 0044f437
    MOV dword ptr [ESP + 0x10c],ECX     ; 0044f43d
    TEST ESI,ESI                        ; 0044f444
    JLE 0x0044f2d9                      ; 0044f446
        ;   XREF to: 0044f2d9 (CONDITIONAL_JUMP)  ; LAB_0044f2d9
    MOV EAX,dword ptr [ESP + 0xfc]      ; 0044f44c
    MOV dword ptr [ESP + 0x100],EAX     ; 0044f453
    LEA EAX,[ESP + 0x94]                ; 0044f45a
        ;   Label: LAB_0044f45a
    PUSH EAX                            ; 0044f461
    LEA EAX,[ESP + 0x68]                ; 0044f462
    PUSH EAX                            ; 0044f466
    PUSH EBX                            ; 0044f467
    CALL core_dtri.cpp_rayTriangleIntersection_FUN_00477a50 ; 0044f468
        ;   XREF to: 00477a50 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_rayTriangleIntersection_FUN_00477a50()
    MOV dword ptr [ESP + 0x12c],EAX     ; 0044f46d
    FLD float ptr [ESP + 0x12c]         ; 0044f474
    ADD ESP,0xc                         ; 0044f47b
    FST float ptr [ESP + 0x18]          ; 0044f47e
    FCOMP float ptr [ESP + 0xf4]        ; 0044f482
    FNSTSW AX                           ; 0044f489
    SAHF                                ; 0044f48b
    JBE 0x0044f4b5                      ; 0044f48c
        ;   XREF to: 0044f4b5 (CONDITIONAL_JUMP)  ; LAB_0044f4b5
    MOV ESI,dword ptr [ESP + 0x10c]     ; 0044f48e
        ;   Label: LAB_0044f48e
    INC ESI                             ; 0044f495
    MOV dword ptr [ESP + 0x10c],ESI     ; 0044f496
    MOV EAX,ESI                         ; 0044f49d
    MOV ESI,dword ptr [EBP + 0x14]      ; 0044f49f
    MOV EDI,dword ptr [ESI + 0x354]     ; 0044f4a2
    ADD EBX,0x38                        ; 0044f4a8
    CMP EAX,EDI                         ; 0044f4ab
    JGE 0x0044f2d9                      ; 0044f4ad
        ;   XREF to: 0044f2d9 (CONDITIONAL_JUMP)  ; LAB_0044f2d9
    JMP 0x0044f45a                      ; 0044f4b3
        ;   XREF to: 0044f45a (UNCONDITIONAL_JUMP)  ; LAB_0044f45a
    FLD float ptr [ESP + 0x18]          ; 0044f4b5
        ;   Label: LAB_0044f4b5
    FLDZ                                ; 0044f4b9
    FXCH                                ; 0044f4bb
    FSTP double ptr [ESP + 0x10]        ; 0044f4bd
    FCOMP double ptr [ESP + 0x10]       ; 0044f4c1
    FNSTSW AX                           ; 0044f4c5
    SAHF                                ; 0044f4c7
    JA 0x0044f48e                       ; 0044f4c8
        ;   XREF to: 0044f48e (CONDITIONAL_JUMP)  ; LAB_0044f48e
    FLD1                                ; 0044f4ca
    FCOMP double ptr [ESP + 0x10]       ; 0044f4cc
    FNSTSW AX                           ; 0044f4d0
    SAHF                                ; 0044f4d2
    JC 0x0044f48e                       ; 0044f4d3
        ;   XREF to: 0044f48e (CONDITIONAL_JUMP)  ; LAB_0044f48e
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044f4d5
    MOV dword ptr [ESP + 0xf4],EAX      ; 0044f4d9
    CMP dword ptr [EBP + 0x24],0x0      ; 0044f4e0
    JZ 0x0044f48e                       ; 0044f4e4
        ;   XREF to: 0044f48e (CONDITIONAL_JUMP)  ; LAB_0044f48e
    LEA EDI,[ESP + 0x70]                ; 0044f4e6
    LEA EAX,[EBX + 0x24]                ; 0044f4ea
    LEA ESI,[ESP + 0xe8]                ; 0044f4ed
    MOV EDX,dword ptr [ESP + 0x100]     ; 0044f4f4
    FLD float ptr [EAX]                 ; 0044f4fb
    FLD float ptr [EAX + 0x4]           ; 0044f4fd
    FLD float ptr [EAX + 0x8]           ; 0044f500
    FXCH ST2                            ; 0044f503
    FCHS                                ; 0044f505
    FXCH                                ; 0044f507
    FCHS                                ; 0044f509
    FXCH ST2                            ; 0044f50b
    FCHS                                ; 0044f50d
    LEA EAX,[ESP + 0x70]                ; 0044f50f
    FXCH                                ; 0044f513
    FSTP float ptr [ESP + 0xe8]         ; 0044f515
    FXCH                                ; 0044f51c
    FSTP float ptr [ESP + 0xec]         ; 0044f51e
    FSTP float ptr [ESP + 0xf0]         ; 0044f525
    PUSH EAX                            ; 0044f52c
    MOVSD ES:EDI,ESI                    ; 0044f52d
    MOVSD ES:EDI,ESI                    ; 0044f52e
    MOVSD ES:EDI,ESI                    ; 0044f52f
    PUSH EDX                            ; 0044f530
    LEA ESI,[ESP + 0xb4]                ; 0044f531
    LEA EDI,[ESP + 0x84]                ; 0044f538
    CALL core_dirmat.cpp_FUN_00449530   ; 0044f53f
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    LEA ESI,[ESP + 0xb4]                ; 0044f544
    ADD ESP,0x8                         ; 0044f54b
    LEA EAX,[ESP + 0x7c]                ; 0044f54e
    MOV ECX,dword ptr [EBP + 0x24]      ; 0044f552
    MOVSD ES:EDI,ESI                    ; 0044f555
    MOVSD ES:EDI,ESI                    ; 0044f556
    MOVSD ES:EDI,ESI                    ; 0044f557
    CMP EAX,ECX                         ; 0044f558
    JZ 0x0044f48e                       ; 0044f55a
        ;   XREF to: 0044f48e (CONDITIONAL_JUMP)  ; LAB_0044f48e
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0044f560
    MOV dword ptr [ECX],EAX             ; 0044f564
    MOV EAX,dword ptr [ESP + 0x80]      ; 0044f566
    MOV dword ptr [ECX + 0x4],EAX       ; 0044f56d
    MOV EAX,dword ptr [ESP + 0x84]      ; 0044f570
    MOV dword ptr [ECX + 0x8],EAX       ; 0044f577
    JMP 0x0044f48e                      ; 0044f57a
        ;   XREF to: 0044f48e (UNCONDITIONAL_JUMP)  ; LAB_0044f48e

