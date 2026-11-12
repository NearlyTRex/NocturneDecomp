; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_setcolid_cpp_FUN_0053de10(CDemonSet *param_1,float param_2,float param_3,float param_4,float param_5,float param_6,float param_7,float param_8)
;
; Local Variables:
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
; undefined4       Stack[-0x14c]:4  local_14c
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0x144]:4  local_144
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[8]:
;   core_charactr.cpp_FUN_0042c230 at 0042c4cb
;   core_demnfolk.cpp_FUN_00455080 at 0045625d
;   core_ghoul.cpp_CGhoul_process_FUN_004c6eb0 at 004c7d05
;   core_kedward.cpp_CKedward_process_FUN_00590010 at 00590a42
;   core_prye.cpp_FUN_00521880 at 00521d33
;   core_spawner.cpp_FUN_00563970 at 00563b14
;   core_trash.cpp_CTrash_process_FUN_0056d360 at 0056da02
;   core_zombie.cpp_CZombie_process_FUN_00588ee0 at 0058a08e
;
; Referenced Globals:
;   TerminatedCString s_core_setcolid_cpp_005d0ade
;   TerminatedCString s_info_keyFramedModelInsta_005d0af3
;   TerminatedCString s_core_setcolid_cpp_005d0b3f
;   TerminatedCString s_Invalid_collision_type_005d0b54
;   undefined4 DAT_005d0b6e
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bf0
;   core_actor.cpp_FUN_00408f00
;   core_box.cpp_FUN_0041e910
;   core_dmodel.cpp_CKeyFramedModel_intersectCylinder_FUN_00461e00
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;   core_dtrace.cpp_CDemonRaytrace_testCylinderCollision_FUN_00474e80
;   core_dtrace.cpp_initIntersectionCylinder_FUN_00474db0
;   core_main.c_FUN_004e4330
;   core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_0053d770
;   core_setcolid.cpp_FUN_0053da90
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_0053ed80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053de10
        ;   Label: core_setcolid.cpp_FUN_0053de10
    PUSH ESI                            ; 0053de11
    PUSH EDI                            ; 0053de12
    PUSH EBP                            ; 0053de13
    MOV EBP,ESP                         ; 0053de14
    SUB ESP,0x2f0                       ; 0053de16
    AND ESP,0xfffffff8                  ; 0053de1c
    PUSH dword ptr [EBP + 0x30]         ; 0053de1f
    PUSH dword ptr [EBP + 0x2c]         ; 0053de22
    PUSH dword ptr [EBP + 0x28]         ; 0053de25
    PUSH dword ptr [EBP + 0x24]         ; 0053de28
    PUSH dword ptr [EBP + 0x20]         ; 0053de2b
    PUSH dword ptr [EBP + 0x1c]         ; 0053de2e
    LEA EAX,[ESP + 0x170]               ; 0053de31
    PUSH dword ptr [EBP + 0x18]         ; 0053de38
    PUSH EAX                            ; 0053de3b
    CALL core_dtrace.cpp_initIntersectionCylinder_FUN_00474db0 ; 0053de3c
        ;   XREF to: 00474db0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_initIntersectionCylinder_FUN_00474db0(SIntersectXZCylinder * this_ptr, float start_x, float start_z, float dir_x, ...)
    ADD ESP,0x20                        ; 0053de41
    TEST dword ptr [EBP + 0x20],0x7fffffff ; 0053de44
    JNZ 0x0053de56                      ; 0053de4b
        ;   XREF to: 0053de56 (CONDITIONAL_JUMP)  ; LAB_0053de56
    TEST dword ptr [EBP + 0x24],0x7fffffff ; 0053de4d
    JZ 0x0053de6b                       ; 0053de54
        ;   XREF to: 0053de6b (CONDITIONAL_JUMP)  ; LAB_0053de6b
    LEA EAX,[ESP + 0x158]               ; 0053de56
        ;   Label: LAB_0053de56
    PUSH EAX                            ; 0053de5d
    PUSH 0x203b37c                      ; 0053de5e | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_CDemonRaytrace_testCylinderCollision_FUN_00474e80 ; 0053de63
        ;   XREF to: 00474e80 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_testCylinderCollision_FUN_00474e80(CDemonRaytrace * this_ptr, SIntersectXZCylinder * cylinder)
    ADD ESP,0x8                         ; 0053de68
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053de6b
        ;   Label: LAB_0053de6b
    MOV dword ptr [EAX + 0x14d134],0x1  ; 0053de6e
    MOV dword ptr [EAX + 0x14d148],0xffffffff ; 0053de78
    MOV dword ptr [EAX + 0x14d14c],0xffffffff ; 0053de82
    MOV EBX,dword ptr [EAX + 0x15f6ac]  ; 0053de8c
    MOV dword ptr [EAX + 0x14d144],0x0  ; 0053de92
    TEST EBX,EBX                        ; 0053de9c
    JL 0x0053e03c                       ; 0053de9e
        ;   XREF to: 0053e03c (CONDITIONAL_JUMP)  ; LAB_0053e03c
    FLD float ptr [ESP + 0x168]         ; 0053dea4
    FLD ST0                             ; 0053deab
    FLD float ptr [ESP + 0x170]         ; 0053dead
    FLDZ                                ; 0053deb4
    FXCH ST3                            ; 0053deb6
    FSUB float ptr [ESP + 0x178]        ; 0053deb8
    FXCH ST2                            ; 0053debf
    FADD float ptr [ESP + 0x178]        ; 0053dec1
    FXCH ST2                            ; 0053dec8
    FSTP float ptr [ESP + 0x224]        ; 0053deca
    FXCH                                ; 0053ded1
    FSTP float ptr [ESP + 0x230]        ; 0053ded3
    FXCH                                ; 0053deda
    FCOMPP                              ; 0053dedc
    FNSTSW AX                           ; 0053dede
    SAHF                                ; 0053dee0
    JNC 0x0053e0c5                      ; 0053dee1
        ;   XREF to: 0053e0c5 (CONDITIONAL_JUMP)  ; LAB_0053e0c5
    FLD float ptr [ESP + 0x230]         ; 0053dee7
    FADD float ptr [ESP + 0x170]        ; 0053deee
    FSTP float ptr [ESP + 0x230]        ; 0053def5
    FLD float ptr [ESP + 0x16c]         ; 0053defc
        ;   Label: LAB_0053defc
    FLD ST0                             ; 0053df03
    FLD float ptr [ESP + 0x174]         ; 0053df05
    MOV EAX,dword ptr [ESP + 0x180]     ; 0053df0c
    FLDZ                                ; 0053df13
    MOV dword ptr [ESP + 0x228],EAX     ; 0053df15
    FXCH ST3                            ; 0053df1c
    FSUB float ptr [ESP + 0x178]        ; 0053df1e
    FXCH ST2                            ; 0053df25
    FADD float ptr [ESP + 0x178]        ; 0053df27
    FXCH ST2                            ; 0053df2e
    FSTP float ptr [ESP + 0x22c]        ; 0053df30
    MOV EAX,dword ptr [ESP + 0x17c]     ; 0053df37
    FXCH                                ; 0053df3e
    FSTP float ptr [ESP + 0x238]        ; 0053df40
    MOV dword ptr [ESP + 0x234],EAX     ; 0053df47
    FXCH                                ; 0053df4e
    FCOMPP                              ; 0053df50
    FNSTSW AX                           ; 0053df52
    SAHF                                ; 0053df54
    JNC 0x0053e0df                      ; 0053df55
        ;   XREF to: 0053e0df (CONDITIONAL_JUMP)  ; LAB_0053e0df
    FLD float ptr [ESP + 0x238]         ; 0053df5b
    FADD float ptr [ESP + 0x174]        ; 0053df62
    FSTP float ptr [ESP + 0x238]        ; 0053df69
    LEA EAX,[ESP + 0x1b4]               ; 0053df70
        ;   Label: LAB_0053df70
    PUSH EAX                            ; 0053df77
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_0053ed80 ; 0053df78
        ;   XREF to: 0053ed80 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_0053ed80(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 0053df7d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053df80
    MOV EAX,dword ptr [EAX + 0x15f698]  ; 0053df83
    MOV dword ptr [ESP + 0x1b4],EAX     ; 0053df89
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053df90
    MOV EAX,dword ptr [EAX + 0x15f69c]  ; 0053df93
    MOV dword ptr [ESP + 0x1b8],EAX     ; 0053df99
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053dfa0
    MOV EAX,dword ptr [EAX + 0x15f6a0]  ; 0053dfa3
    MOV dword ptr [ESP + 0x1bc],EAX     ; 0053dfa9
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053dfb0
    MOV EAX,dword ptr [EAX + 0x15f6a4]  ; 0053dfb3
    MOV dword ptr [ESP + 0x1c0],EAX     ; 0053dfb9
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053dfc0
    MOV EAX,dword ptr [EAX + 0x15f6a8]  ; 0053dfc3
    MOV dword ptr [ESP + 0x1c4],EAX     ; 0053dfc9
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053dfd0
    XOR ESI,ESI                         ; 0053dfd3
    MOV EDI,dword ptr [EAX + 0x156db8]  ; 0053dfd5
    MOV dword ptr [ESP + 0x2e4],ESI     ; 0053dfdb
    TEST EDI,EDI                        ; 0053dfe2
    JLE 0x0053e03c                      ; 0053dfe4
        ;   XREF to: 0053e03c (CONDITIONAL_JUMP)  ; LAB_0053e03c
    MOV dword ptr [ESP + 0x2e8],EAX     ; 0053dfe6
    MOV EBX,dword ptr [ESP + 0x2e8]     ; 0053dfed
        ;   Label: LAB_0053dfed
    MOV EBX,dword ptr [EBX + 0x156dbc]  ; 0053dff4
    PUSH EBX                            ; 0053dffa
    MOV ESI,dword ptr [EBP + 0x14]      ; 0053dffb
    PUSH ESI                            ; 0053dffe
    CALL core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_0053d770 ; 0053dfff
        ;   XREF to: 0053d770 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_0053d770(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0053e004
    TEST EAX,EAX                        ; 0053e007
    JZ 0x0053e0f9                       ; 0053e009
        ;   XREF to: 0053e0f9 (CONDITIONAL_JUMP)  ; LAB_0053e0f9
    MOV EAX,dword ptr [ESP + 0x2e8]     ; 0053e00f
        ;   Label: LAB_0053e00f
    MOV EDX,dword ptr [ESP + 0x2e4]     ; 0053e016
    MOV EBX,dword ptr [EBP + 0x14]      ; 0053e01d
    ADD EAX,0x4                         ; 0053e020
    INC EDX                             ; 0053e023
    MOV ECX,dword ptr [EBX + 0x156db8]  ; 0053e024
    MOV dword ptr [ESP + 0x2e8],EAX     ; 0053e02a
    MOV dword ptr [ESP + 0x2e4],EDX     ; 0053e031
    CMP EDX,ECX                         ; 0053e038
    JL 0x0053dfed                       ; 0053e03a
        ;   XREF to: 0053dfed (CONDITIONAL_JUMP)  ; LAB_0053dfed
    FLD float ptr [ESP + 0x158]         ; 0053e03c
        ;   Label: LAB_0053e03c
    FLD1                                ; 0053e043
    FCOMPP                              ; 0053e045
    FNSTSW AX                           ; 0053e047
    SAHF                                ; 0053e049
    JC 0x0053e0b7                       ; 0053e04a
        ;   XREF to: 0053e0b7 (CONDITIONAL_JUMP)  ; LAB_0053e0b7
    FLD float ptr [ESP + 0x15c]         ; 0053e04c
    FMUL ST0                            ; 0053e053
    FLD float ptr [ESP + 0x160]         ; 0053e055
    FMUL ST0                            ; 0053e05c
    FADDP                               ; 0053e05e
    FLD float ptr [ESP + 0x164]         ; 0053e060
    FMUL ST0                            ; 0053e067
    FADDP                               ; 0053e069
    FSQRT                               ; 0053e06b
    FLDZ                                ; 0053e06d
    FXCH                                ; 0053e06f
    FSTP float ptr [ESP + 0x2e0]        ; 0053e071
    FCOMP float ptr [ESP + 0x2e0]       ; 0053e078
    FNSTSW AX                           ; 0053e07f
    SAHF                                ; 0053e081
    JC 0x0053e7fe                       ; 0053e082
        ;   XREF to: 0053e7fe (CONDITIONAL_JUMP)  ; LAB_0053e7fe
    XOR EBX,EBX                         ; 0053e088
    MOV dword ptr [ESP + 0x160],EBX     ; 0053e08a
    MOV dword ptr [ESP + 0x15c],EBX     ; 0053e091
    MOV dword ptr [ESP + 0x164],EBX     ; 0053e098
    MOV EBX,dword ptr [EBP + 0x14]      ; 0053e09f
        ;   Label: LAB_0053e09f
    LEA EAX,[ESP + 0x15c]               ; 0053e0a2
    ADD EBX,0x14d128                    ; 0053e0a9
    CMP EBX,EAX                         ; 0053e0af
    JNZ 0x0053e842                      ; 0053e0b1
        ;   XREF to: 0053e842 (CONDITIONAL_JUMP)  ; LAB_0053e842
    MOV EAX,dword ptr [ESP + 0x158]     ; 0053e0b7
        ;   Label: LAB_0053e0b7
    MOV ESP,EBP                         ; 0053e0be
    POP EBP                             ; 0053e0c0
    POP EDI                             ; 0053e0c1
    POP ESI                             ; 0053e0c2
    POP EBX                             ; 0053e0c3
    RET                                 ; 0053e0c4
    FLD float ptr [ESP + 0x224]         ; 0053e0c5
        ;   Label: LAB_0053e0c5
    FADD float ptr [ESP + 0x170]        ; 0053e0cc
    FSTP float ptr [ESP + 0x224]        ; 0053e0d3
    JMP 0x0053defc                      ; 0053e0da
        ;   XREF to: 0053defc (UNCONDITIONAL_JUMP)  ; LAB_0053defc
    FLD float ptr [ESP + 0x22c]         ; 0053e0df
        ;   Label: LAB_0053e0df
    FADD float ptr [ESP + 0x174]        ; 0053e0e6
    FSTP float ptr [ESP + 0x22c]        ; 0053e0ed
    JMP 0x0053df70                      ; 0053e0f4
        ;   XREF to: 0053df70 (UNCONDITIONAL_JUMP)  ; LAB_0053df70
    MOV dword ptr [ESP + 0x1d4],EAX     ; 0053e0f9
        ;   Label: LAB_0053e0f9
    MOV dword ptr [ESP + 0x1d8],EAX     ; 0053e100
    LEA EAX,[ESP + 0x1b4]               ; 0053e107
    PUSH EAX                            ; 0053e10e
    MOV ESI,dword ptr [EBX + 0x154]     ; 0053e10f
    PUSH EBX                            ; 0053e115
    CALL dword ptr [ESI + 0x3c]         ; 0053e116
    MOV dword ptr [ESP + 0x2f4],EAX     ; 0053e119
    ADD ESP,0x8                         ; 0053e120
    TEST EAX,EAX                        ; 0053e123
    JZ 0x0053e00f                       ; 0053e125
        ;   XREF to: 0053e00f (CONDITIONAL_JUMP)  ; LAB_0053e00f
    PUSH EAX                            ; 0053e12b
    LEA EAX,[ESP + 0x1b8]               ; 0053e12c
    PUSH EAX                            ; 0053e133
    PUSH EBX                            ; 0053e134
    LEA ESI,[ESP + 0x248]               ; 0053e135
    LEA EDI,[ESP + 0x218]               ; 0053e13c
    CALL core_actor.cpp_FUN_00408f00    ; 0053e143
        ;   XREF to: 00408f00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408f00()
    ADD ESP,0xc                         ; 0053e148
    LEA EAX,[ESP + 0x20c]               ; 0053e14b
    MOV ECX,0x6                         ; 0053e152
    PUSH EAX                            ; 0053e157
    LEA EAX,[ESP + 0x228]               ; 0053e158
    LEA ESI,[ESP + 0x240]               ; 0053e15f
    PUSH EAX                            ; 0053e166
    MOVSD.REP ES:EDI,ESI                ; 0053e167
    CALL core_box.cpp_FUN_0041e910      ; 0053e169
        ;   XREF to: 0041e910 (UNCONDITIONAL_CALL)  ; int core_box.cpp_FUN_0041e910(CBoundingBox3D * this_ptr, CBoundingBox3D * other)
    ADD ESP,0x8                         ; 0053e16e
    TEST EAX,EAX                        ; 0053e171
    JZ 0x0053e00f                       ; 0053e173
        ;   XREF to: 0053e00f (CONDITIONAL_JUMP)  ; LAB_0053e00f
    MOV ESI,dword ptr [ESP + 0x1d8]     ; 0053e179
    TEST ESI,ESI                        ; 0053e180
    JZ 0x0053e7b1                       ; 0053e182
        ;   XREF to: 0053e7b1 (CONDITIONAL_JUMP)  ; LAB_0053e7b1
    PUSH ESI                            ; 0053e188
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 0053e189
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0053e18e
    MOV EDI,dword ptr [EAX + 0x358]     ; 0053e191
    MOV ESI,EAX                         ; 0053e197
    TEST EDI,EDI                        ; 0053e199
    JNZ 0x0053e1c1                      ; 0053e19b
        ;   XREF to: 0053e1c1 (CONDITIONAL_JUMP)  ; LAB_0053e1c1
    PUSH EAX                            ; 0053e19d
    MOV EDX,0x5d0ade                    ; 0053e19e | = "..\\core\\setcolid.cpp"
    MOV ECX,0x389                       ; 0053e1a3
    PUSH 0x5d0af3                       ; 0053e1a8 | = "info.keyFramedModelInstancePtr != NUL..."
    MOV dword ptr [0x01d71de0],EDX      ; 0053e1ad | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0053e1b3 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0053e1b9
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 0053e1be
    FLD float ptr [EBP + 0x30]          ; 0053e1c1
        ;   Label: LAB_0053e1c1
    SUB ESP,0x4                         ; 0053e1c4
    FSUB float ptr [EBX + 0x24]         ; 0053e1c7
    FLD float ptr [EBP + 0x2c]          ; 0053e1ca
    FXCH                                ; 0053e1cd
    FSTP float ptr [ESP]                ; 0053e1cf
    FSUB float ptr [EBX + 0x24]         ; 0053e1d2
    SUB ESP,0x4                         ; 0053e1d5
    FSTP float ptr [ESP]                ; 0053e1d8
    PUSH dword ptr [EBP + 0x28]         ; 0053e1db
    PUSH dword ptr [ESP + 0x180]        ; 0053e1de
    FLD float ptr [ESP + 0x17c]         ; 0053e1e5
    PUSH dword ptr [ESP + 0x180]        ; 0053e1ec
    FSUB float ptr [EBX + 0x28]         ; 0053e1f3
    SUB ESP,0x4                         ; 0053e1f6
    FSTP float ptr [ESP]                ; 0053e1f9
    FLD float ptr [ESP + 0x180]         ; 0053e1fc
    SUB ESP,0x4                         ; 0053e203
    FSUB float ptr [EBX + 0x20]         ; 0053e206
    LEA EAX,[ESP + 0x118]               ; 0053e209
    FSTP float ptr [ESP]                ; 0053e210
    PUSH EAX                            ; 0053e213
    CALL core_dtrace.cpp_initIntersectionCylinder_FUN_00474db0 ; 0053e214
        ;   XREF to: 00474db0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_initIntersectionCylinder_FUN_00474db0(SIntersectXZCylinder * this_ptr, float start_x, float start_z, float dir_x, ...)
    ADD ESP,0x20                        ; 0053e219
    MOV EAX,dword ptr [ESP + 0x158]     ; 0053e21c
    MOV dword ptr [ESP + 0xfc],EAX      ; 0053e223
    LEA EAX,[EBX + 0x30]                ; 0053e22a
    PUSH EAX                            ; 0053e22d
    LEA EAX,[ESP + 0x100]               ; 0053e22e
    PUSH EAX                            ; 0053e235
    PUSH 0x0                            ; 0053e236
    PUSH ESI                            ; 0053e238
    CALL core_dmodel.cpp_CKeyFramedModel_intersectCylinder_FUN_00461e00 ; 0053e239
        ;   XREF to: 00461e00 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_intersectCylinder_FUN_00461e00(CKeyFramedModel * this_ptr, int frame_index, SIntersectXZCylinder * cylinder, CVector3f * transform_vector)
    ADD ESP,0x10                        ; 0053e23e
    FLD float ptr [ESP + 0xfc]          ; 0053e241
    FCOMP float ptr [ESP + 0x158]       ; 0053e248
    FNSTSW AX                           ; 0053e24f
    SAHF                                ; 0053e251
    JNC 0x0053e00f                      ; 0053e252
        ;   XREF to: 0053e00f (CONDITIONAL_JUMP)  ; LAB_0053e00f
    MOV EAX,dword ptr [ESP + 0xfc]      ; 0053e258
    LEA ESI,[ESP + 0x100]               ; 0053e25f
    MOV dword ptr [ESP + 0x158],EAX     ; 0053e266
    LEA EAX,[ESP + 0x15c]               ; 0053e26d
    CMP EAX,ESI                         ; 0053e274
    JZ 0x0053e2a2                       ; 0053e276
        ;   XREF to: 0053e2a2 (CONDITIONAL_JUMP)  ; LAB_0053e2a2
    MOV EAX,dword ptr [ESP + 0x100]     ; 0053e278
    MOV dword ptr [ESP + 0x15c],EAX     ; 0053e27f
    MOV EAX,dword ptr [ESP + 0x104]     ; 0053e286
    MOV dword ptr [ESP + 0x160],EAX     ; 0053e28d
    MOV EAX,dword ptr [ESP + 0x108]     ; 0053e294
    MOV dword ptr [ESP + 0x164],EAX     ; 0053e29b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053e2a2
        ;   Label: LAB_0053e2a2
    MOV dword ptr [EAX + 0x14d144],EBX  ; 0053e2a5
    JMP 0x0053e00f                      ; 0053e2ab
        ;   XREF to: 0053e00f (UNCONDITIONAL_JUMP)  ; LAB_0053e00f
    LEA EAX,[EBX + 0x3c]                ; 0053e2b0
        ;   Label: LAB_0053e2b0
    PUSH EAX                            ; 0053e2b3
    LEA EAX,[EBX + 0x20]                ; 0053e2b4
    PUSH EAX                            ; 0053e2b7
    PUSH EBX                            ; 0053e2b8
    MOV EAX,dword ptr [EBX + 0x154]     ; 0053e2b9
    LEA ESI,[ESP + 0x1e8]               ; 0053e2bf
    CALL dword ptr [EAX + 0x1c]         ; 0053e2c6
    ADD ESP,0x4                         ; 0053e2c9
    LEA EAX,[ESP + 0x1fc]               ; 0053e2cc
    LEA EDI,[ESP + 0x1fc]               ; 0053e2d3
    PUSH EAX                            ; 0053e2da
    LEA EAX,[ESP + 0x164]               ; 0053e2db
    MOV ECX,0x6                         ; 0053e2e2
    PUSH EAX                            ; 0053e2e7
    MOV EDX,dword ptr [EBP + 0x14]      ; 0053e2e8
    LEA ESI,[ESP + 0x1ec]               ; 0053e2eb
    PUSH EDX                            ; 0053e2f2
    MOVSD.REP ES:EDI,ESI                ; 0053e2f3
    CALL core_setcolid.cpp_FUN_0053da90 ; 0053e2f5
        ;   XREF to: 0053da90 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_FUN_0053da90(CDemonSet * this_ptr, SIntersectXZCylinder * cylinder, CBoundingBox3D * bounding_box, CVector3f * position, ...)
    ADD ESP,0x14                        ; 0053e2fa
    TEST EAX,EAX                        ; 0053e2fd
    JZ 0x0053e00f                       ; 0053e2ff
        ;   XREF to: 0053e00f (CONDITIONAL_JUMP)  ; LAB_0053e00f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053e305
    MOV dword ptr [EAX + 0x14d144],EBX  ; 0053e308
    JMP 0x0053e00f                      ; 0053e30e
        ;   XREF to: 0053e00f (UNCONDITIONAL_JUMP)  ; LAB_0053e00f
    FLD float ptr [ESP + 0x1c8]         ; 0053e313
        ;   Label: LAB_0053e313
    FADD float ptr [EBX + 0x24]         ; 0053e31a
    FLD float ptr [ESP + 0x1cc]         ; 0053e31d
    FXCH                                ; 0053e324
    FSTP float ptr [ESP + 0x1c8]        ; 0053e326
    FADD float ptr [EBX + 0x24]         ; 0053e32d
    FSTP float ptr [ESP + 0x1cc]        ; 0053e330
    MOV EAX,dword ptr [EBX + 0x20]      ; 0053e337
    MOV dword ptr [ESP + 0x98],EAX      ; 0053e33a
    MOV EAX,dword ptr [EBX + 0x28]      ; 0053e341
    FLD float ptr [ESP + 0x17c]         ; 0053e344
    MOV dword ptr [ESP + 0x9c],EAX      ; 0053e34b
    FCOMP float ptr [ESP + 0x1c8]       ; 0053e352
    FNSTSW AX                           ; 0053e359
    SAHF                                ; 0053e35b
    JBE 0x0053e00f                      ; 0053e35c
        ;   XREF to: 0053e00f (CONDITIONAL_JUMP)  ; LAB_0053e00f
    FLD float ptr [ESP + 0x180]         ; 0053e362
    FCOMP float ptr [ESP + 0x1cc]       ; 0053e369
    FNSTSW AX                           ; 0053e370
    SAHF                                ; 0053e372
    JNC 0x0053e00f                      ; 0053e373
        ;   XREF to: 0053e00f (CONDITIONAL_JUMP)  ; LAB_0053e00f
    FLD float ptr [ESP + 0x98]          ; 0053e379
    FSUB float ptr [ESP + 0x168]        ; 0053e380
    FST double ptr [ESP + 0x50]         ; 0053e387
    FMUL double ptr [ESP + 0x50]        ; 0053e38b
    FLD float ptr [ESP + 0x1d0]         ; 0053e38f
    FLD float ptr [ESP + 0x9c]          ; 0053e396
    FSUB float ptr [ESP + 0x16c]        ; 0053e39d
    FXCH                                ; 0053e3a4
    FADD float ptr [ESP + 0x178]        ; 0053e3a6
    FXCH                                ; 0053e3ad
    FST double ptr [ESP + 0x60]         ; 0053e3af
    FMUL double ptr [ESP + 0x60]        ; 0053e3b3
    FXCH                                ; 0053e3b7
    FST double ptr [ESP + 0x78]         ; 0053e3b9
    FMUL double ptr [ESP + 0x78]        ; 0053e3bd
    FXCH                                ; 0053e3c1
    FADDP ST2,ST0                       ; 0053e3c3
    FSTP double ptr [ESP + 0x80]        ; 0053e3c5
    FST double ptr [ESP + 0x20]         ; 0053e3cc
    FCOMP double ptr [ESP + 0x80]       ; 0053e3d0
    FNSTSW AX                           ; 0053e3d7
    SAHF                                ; 0053e3d9
    JNC 0x0053e461                      ; 0053e3da
        ;   XREF to: 0053e461 (CONDITIONAL_JUMP)  ; LAB_0053e461
    FLD double ptr [ESP + 0x20]         ; 0053e3e0
    FSQRT                               ; 0053e3e4
    FSUB double ptr [ESP + 0x78]        ; 0053e3e6
    FST double ptr [ESP + 0x58]         ; 0053e3ea
    FCOMP double ptr [0x005d0b6e]       ; 0053e3ee | DAT_005d0b6e
    FNSTSW AX                           ; 0053e3f4
    SAHF                                ; 0053e3f6
    JBE 0x0053e40b                      ; 0053e3f7
        ;   XREF to: 0053e40b (CONDITIONAL_JUMP)  ; LAB_0053e40b
    MOV EAX,0xd2f1a9fc                  ; 0053e3f9
    MOV EDX,0xbf50624d                  ; 0053e3fe
    MOV dword ptr [ESP + 0x58],EAX      ; 0053e403
    MOV dword ptr [ESP + 0x5c],EDX      ; 0053e407
    FLD float ptr [ESP + 0x158]         ; 0053e40b
        ;   Label: LAB_0053e40b
    FCOMP double ptr [ESP + 0x58]       ; 0053e412
    FNSTSW AX                           ; 0053e416
    SAHF                                ; 0053e418
    JBE 0x0053e00f                      ; 0053e419
        ;   XREF to: 0053e00f (CONDITIONAL_JUMP)  ; LAB_0053e00f
    FLD double ptr [ESP + 0x58]         ; 0053e41f
    FLD double ptr [ESP + 0x50]         ; 0053e423
    FLD double ptr [ESP + 0x60]         ; 0053e427
    FXCH ST2                            ; 0053e42b
    FSTP float ptr [ESP + 0x158]        ; 0053e42d
    FCHS                                ; 0053e434
    FXCH                                ; 0053e436
    FCHS                                ; 0053e438
    XOR ECX,ECX                         ; 0053e43a
    FXCH                                ; 0053e43c
    FSTP float ptr [ESP + 0x15c]        ; 0053e43e
    FSTP float ptr [ESP + 0x164]        ; 0053e445
    MOV dword ptr [ESP + 0x160],ECX     ; 0053e44c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053e453
    MOV dword ptr [EAX + 0x14d144],EBX  ; 0053e456
    JMP 0x0053e00f                      ; 0053e45c
        ;   XREF to: 0053e00f (UNCONDITIONAL_JUMP)  ; LAB_0053e00f
    FLD double ptr [ESP + 0x50]         ; 0053e461
        ;   Label: LAB_0053e461
    FLD float ptr [ESP + 0x18c]         ; 0053e465
    FSTP double ptr [ESP + 0x28]        ; 0053e46c
    FMUL double ptr [ESP + 0x28]        ; 0053e470
    FLD float ptr [ESP + 0x190]         ; 0053e474
    FSTP double ptr [ESP + 0x30]        ; 0053e47b
    FLD double ptr [ESP + 0x60]         ; 0053e47f
    FMUL double ptr [ESP + 0x30]        ; 0053e483
    FADDP                               ; 0053e487
    FLDZ                                ; 0053e489
    FXCH                                ; 0053e48b
    FSTP double ptr [ESP + 0x38]        ; 0053e48d
    FCOMP double ptr [ESP + 0x38]       ; 0053e491
    FNSTSW AX                           ; 0053e495
    SAHF                                ; 0053e497
    JNC 0x0053e00f                      ; 0053e498
        ;   XREF to: 0053e00f (CONDITIONAL_JUMP)  ; LAB_0053e00f
    FLD double ptr [ESP + 0x38]         ; 0053e49e
    FLD double ptr [ESP + 0x28]         ; 0053e4a2
    FMUL ST1                            ; 0053e4a6
    FLD double ptr [ESP + 0x30]         ; 0053e4a8
    FMULP ST2                           ; 0053e4ac
    FLD float ptr [ESP + 0x168]         ; 0053e4ae
    FSTP double ptr [ESP + 0x40]        ; 0053e4b5
    FADD double ptr [ESP + 0x40]        ; 0053e4b9
    FLD float ptr [ESP + 0x98]          ; 0053e4bd
    FXCH                                ; 0053e4c4
    FSTP double ptr [ESP + 0x70]        ; 0053e4c6
    FSUB double ptr [ESP + 0x70]        ; 0053e4ca
    FMUL ST0                            ; 0053e4ce
    FLD float ptr [ESP + 0x16c]         ; 0053e4d0
    FSTP double ptr [ESP + 0x18]        ; 0053e4d7
    FXCH                                ; 0053e4db
    FADD double ptr [ESP + 0x18]        ; 0053e4dd
    FLD float ptr [ESP + 0x9c]          ; 0053e4e1
    FXCH                                ; 0053e4e8
    FSTP double ptr [ESP + 0x8]         ; 0053e4ea
    FSUB double ptr [ESP + 0x8]         ; 0053e4ee
    FMUL ST0                            ; 0053e4f2
    FADDP                               ; 0053e4f4
    FST double ptr [ESP + 0x48]         ; 0053e4f6
    FCOMP double ptr [ESP + 0x80]       ; 0053e4fa
    FNSTSW AX                           ; 0053e501
    SAHF                                ; 0053e503
    JNC 0x0053e00f                      ; 0053e504
        ;   XREF to: 0053e00f (CONDITIONAL_JUMP)  ; LAB_0053e00f
    FLD float ptr [ESP + 0x170]         ; 0053e50a
    FST double ptr [ESP + 0x88]         ; 0053e511
    FABS                                ; 0053e518
    FLD double ptr [ESP + 0x80]         ; 0053e51a
    FSUB double ptr [ESP + 0x48]        ; 0053e521
    FSQRT                               ; 0053e525
    FLD float ptr [ESP + 0x174]         ; 0053e527
    FST double ptr [ESP]                ; 0053e52e
    FABS                                ; 0053e531
    FLD double ptr [ESP + 0x28]         ; 0053e533
    FMUL ST2                            ; 0053e537
    FLD double ptr [ESP + 0x30]         ; 0053e539
    FMULP ST3                           ; 0053e53d
    FLD double ptr [ESP + 0x8]          ; 0053e53f
    FLD double ptr [ESP + 0x70]         ; 0053e543
    FSUBRP ST2,ST0                      ; 0053e547
    FSUBRP ST3,ST0                      ; 0053e549
    FSTP double ptr [ESP + 0x68]        ; 0053e54b
    FXCH                                ; 0053e54f
    FSTP double ptr [ESP + 0x10]        ; 0053e551
    FCOMPP                              ; 0053e555
    FNSTSW AX                           ; 0053e557
    SAHF                                ; 0053e559
    JNC 0x0053e600                      ; 0053e55a
        ;   XREF to: 0053e600 (CONDITIONAL_JUMP)  ; LAB_0053e600
    FLD double ptr [ESP + 0x68]         ; 0053e560
    FSUB double ptr [ESP + 0x40]        ; 0053e564
    FDIV double ptr [ESP + 0x88]        ; 0053e568
    FSTP double ptr [ESP + 0x90]        ; 0053e56f
        ;   Label: LAB_0053e56f
    FLDZ                                ; 0053e576
    FCOMP double ptr [ESP + 0x90]       ; 0053e578
    FNSTSW AX                           ; 0053e57f
    SAHF                                ; 0053e581
    JA 0x0053e00f                       ; 0053e582
        ;   XREF to: 0053e00f (CONDITIONAL_JUMP)  ; LAB_0053e00f
    FLD float ptr [ESP + 0x158]         ; 0053e588
    FCOMP double ptr [ESP + 0x90]       ; 0053e58f
    FNSTSW AX                           ; 0053e596
    SAHF                                ; 0053e598
    JBE 0x0053e00f                      ; 0053e599
        ;   XREF to: 0053e00f (CONDITIONAL_JUMP)  ; LAB_0053e00f
    FLD1                                ; 0053e59f
    FCOMP double ptr [ESP + 0x90]       ; 0053e5a1
    FNSTSW AX                           ; 0053e5a8
    SAHF                                ; 0053e5aa
    JC 0x0053e00f                       ; 0053e5ab
        ;   XREF to: 0053e00f (CONDITIONAL_JUMP)  ; LAB_0053e00f
    FLD double ptr [ESP + 0x90]         ; 0053e5b1
    FLD float ptr [ESP + 0x98]          ; 0053e5b8
    FLD float ptr [ESP + 0x9c]          ; 0053e5bf
    FXCH ST2                            ; 0053e5c6
    FSTP float ptr [ESP + 0x158]        ; 0053e5c8
    XOR EDI,EDI                         ; 0053e5cf
    FSUBR double ptr [ESP + 0x68]       ; 0053e5d1
    FXCH                                ; 0053e5d5
    FSUBR double ptr [ESP + 0x10]       ; 0053e5d7
    MOV dword ptr [ESP + 0x160],EDI     ; 0053e5db
    FXCH                                ; 0053e5e2
    FSTP float ptr [ESP + 0x15c]        ; 0053e5e4
    FSTP float ptr [ESP + 0x164]        ; 0053e5eb
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053e5f2
    MOV dword ptr [EAX + 0x14d144],EBX  ; 0053e5f5
    JMP 0x0053e00f                      ; 0053e5fb
        ;   XREF to: 0053e00f (UNCONDITIONAL_JUMP)  ; LAB_0053e00f
    FLD double ptr [ESP + 0x10]         ; 0053e600
        ;   Label: LAB_0053e600
    FSUB double ptr [ESP + 0x18]        ; 0053e604
    FDIV double ptr [ESP]               ; 0053e608
    JMP 0x0053e56f                      ; 0053e60b
        ;   XREF to: 0053e56f (UNCONDITIONAL_JUMP)  ; LAB_0053e56f
    MOV EAX,dword ptr [ESP + 0x168]     ; 0053e610
        ;   Label: LAB_0053e610
    MOV dword ptr [ESP + 0x260],EAX     ; 0053e617
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0053e61e
    MOV dword ptr [ESP + 0x268],EAX     ; 0053e625
    LEA EAX,[ESP + 0x260]               ; 0053e62c
    PUSH EAX                            ; 0053e633
    PUSH EBX                            ; 0053e634
    MOV dword ptr [ESP + 0x26c],ESI     ; 0053e635
    LEA ESI,[ESP + 0x280]               ; 0053e63c
    CALL core_actor.cpp_FUN_00408bf0    ; 0053e643
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    ADD ESP,0x8                         ; 0053e648
    LEA EDI,[ESP + 0x254]               ; 0053e64b
    MOV EAX,dword ptr [ESP + 0x170]     ; 0053e652
    LEA ESI,[ESP + 0x278]               ; 0053e659
    MOV dword ptr [ESP + 0x2a8],EAX     ; 0053e660
    MOV EAX,dword ptr [ESP + 0x174]     ; 0053e667
    MOVSD ES:EDI,ESI                    ; 0053e66e
    MOVSD ES:EDI,ESI                    ; 0053e66f
    MOVSD ES:EDI,ESI                    ; 0053e670
    MOV dword ptr [ESP + 0x2b0],EAX     ; 0053e671
    LEA EAX,[ESP + 0x2a8]               ; 0053e678
    XOR ESI,ESI                         ; 0053e67f
    PUSH EAX                            ; 0053e681
    MOV dword ptr [ESP + 0x2b0],ESI     ; 0053e682
    PUSH EBX                            ; 0053e689
    LEA ESI,[ESP + 0x298]               ; 0053e68a
    LEA EDI,[ESP + 0x28c]               ; 0053e691
    CALL core_actor.cpp_FUN_00408b40    ; 0053e698
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 0053e69d
    LEA ESI,[ESP + 0x290]               ; 0053e6a0
    FLD float ptr [EBP + 0x30]          ; 0053e6a7
    MOVSD ES:EDI,ESI                    ; 0053e6aa
    MOVSD ES:EDI,ESI                    ; 0053e6ab
    MOVSD ES:EDI,ESI                    ; 0053e6ac
    SUB ESP,0x4                         ; 0053e6ad
    FSUB float ptr [EBX + 0x24]         ; 0053e6b0
    FLD float ptr [EBP + 0x2c]          ; 0053e6b3
    FXCH                                ; 0053e6b6
    FSTP float ptr [ESP]                ; 0053e6b8
    FSUB float ptr [EBX + 0x24]         ; 0053e6bb
    SUB ESP,0x4                         ; 0053e6be
    FSTP float ptr [ESP]                ; 0053e6c1
    PUSH dword ptr [EBP + 0x28]         ; 0053e6c4
    PUSH dword ptr [ESP + 0x298]        ; 0053e6c7
    PUSH dword ptr [ESP + 0x294]        ; 0053e6ce
    PUSH dword ptr [ESP + 0x270]        ; 0053e6d5
    LEA EAX,[ESP + 0xb8]                ; 0053e6dc
    PUSH dword ptr [ESP + 0x26c]        ; 0053e6e3
    PUSH EAX                            ; 0053e6ea
    CALL core_dtrace.cpp_initIntersectionCylinder_FUN_00474db0 ; 0053e6eb
        ;   XREF to: 00474db0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_initIntersectionCylinder_FUN_00474db0(SIntersectXZCylinder * this_ptr, float start_x, float start_z, float dir_x, ...)
    ADD ESP,0x20                        ; 0053e6f0
    MOV EAX,dword ptr [ESP + 0x158]     ; 0053e6f3
    MOV dword ptr [ESP + 0xa0],EAX      ; 0053e6fa
    LEA EAX,[ESP + 0xa0]                ; 0053e701
    PUSH EAX                            ; 0053e708
    MOV ESI,dword ptr [EBX + 0x154]     ; 0053e709
    PUSH EBX                            ; 0053e70f
    CALL dword ptr [ESI + 0xbc]         ; 0053e710
    ADD ESP,0x8                         ; 0053e716
    FLD float ptr [ESP + 0xa0]          ; 0053e719
    FCOMP float ptr [ESP + 0x158]       ; 0053e720
    FNSTSW AX                           ; 0053e727
    SAHF                                ; 0053e729
    JNC 0x0053e00f                      ; 0053e72a
        ;   XREF to: 0053e00f (CONDITIONAL_JUMP)  ; LAB_0053e00f
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0053e730
    MOV dword ptr [ESP + 0x158],EAX     ; 0053e737
    LEA EAX,[ESP + 0xa4]                ; 0053e73e
    PUSH EAX                            ; 0053e745
    PUSH EBX                            ; 0053e746
    LEA ESI,[ESP + 0x274]               ; 0053e747
    LEA EDI,[ESP + 0x2a4]               ; 0053e74e
    CALL core_actor.cpp_FUN_00408b00    ; 0053e755
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0x274]               ; 0053e75a
    ADD ESP,0x8                         ; 0053e761
    MOVSD ES:EDI,ESI                    ; 0053e764
    MOVSD ES:EDI,ESI                    ; 0053e765
    MOVSD ES:EDI,ESI                    ; 0053e766
    LEA EAX,[ESP + 0x29c]               ; 0053e767
    LEA ESI,[ESP + 0x15c]               ; 0053e76e
    CMP ESI,EAX                         ; 0053e775
    JZ 0x0053e7a3                       ; 0053e777
        ;   XREF to: 0053e7a3 (CONDITIONAL_JUMP)  ; LAB_0053e7a3
    MOV EAX,dword ptr [ESP + 0x29c]     ; 0053e779
    MOV dword ptr [ESP + 0x15c],EAX     ; 0053e780
    MOV EAX,dword ptr [ESP + 0x2a0]     ; 0053e787
    MOV dword ptr [ESP + 0x160],EAX     ; 0053e78e
    MOV EAX,dword ptr [ESP + 0x2a4]     ; 0053e795
    MOV dword ptr [ESP + 0x164],EAX     ; 0053e79c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053e7a3
        ;   Label: LAB_0053e7a3
    MOV dword ptr [EAX + 0x14d144],EBX  ; 0053e7a6
    JMP 0x0053e00f                      ; 0053e7ac
        ;   XREF to: 0053e00f (UNCONDITIONAL_JUMP)  ; LAB_0053e00f
    MOV EDI,dword ptr [ESP + 0x2ec]     ; 0053e7b1
        ;   Label: LAB_0053e7b1
    CMP EDI,0x2                         ; 0053e7b8
    JNC 0x0053e7c8                      ; 0053e7bb
        ;   XREF to: 0053e7c8 (CONDITIONAL_JUMP)  ; LAB_0053e7c8
    CMP EDI,0x1                         ; 0053e7bd
    JZ 0x0053e2b0                       ; 0053e7c0
        ;   XREF to: 0053e2b0 (CONDITIONAL_JUMP)  ; LAB_0053e2b0
    JMP 0x0053e7d7                      ; 0053e7c6
        ;   XREF to: 0053e7d7 (UNCONDITIONAL_JUMP)  ; LAB_0053e7d7
    JBE 0x0053e313                      ; 0053e7c8
        ;   XREF to: 0053e313 (CONDITIONAL_JUMP)  ; LAB_0053e313
        ;   Label: LAB_0053e7c8
    CMP EDI,0x3                         ; 0053e7ce
    JZ 0x0053e610                       ; 0053e7d1
        ;   XREF to: 0053e610 (CONDITIONAL_JUMP)  ; LAB_0053e610
    MOV EDI,0x5d0b3f                    ; 0053e7d7 | = "..\\core\\setcolid.cpp"
        ;   Label: LAB_0053e7d7
    MOV EAX,0x3f1                       ; 0053e7dc
    PUSH 0x5d0b54                       ; 0053e7e1 | = "Invalid collision type!"
    MOV dword ptr [0x01d71de0],EDI      ; 0053e7e6 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 0053e7ec | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0053e7f1
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0053e7f6
    JMP 0x0053e00f                      ; 0053e7f9
        ;   XREF to: 0053e00f (UNCONDITIONAL_JUMP)  ; LAB_0053e00f
    FLD1                                ; 0053e7fe
        ;   Label: LAB_0053e7fe
    FLD float ptr [ESP + 0x15c]         ; 0053e800
    FXCH                                ; 0053e807
    FDIV float ptr [ESP + 0x2e0]        ; 0053e809
    FXCH                                ; 0053e810
    FMUL ST1                            ; 0053e812
    FLD float ptr [ESP + 0x160]         ; 0053e814
    FMUL ST2                            ; 0053e81b
    FLD float ptr [ESP + 0x164]         ; 0053e81d
    FMULP ST3                           ; 0053e824
    FXCH                                ; 0053e826
    FSTP float ptr [ESP + 0x15c]        ; 0053e828
    FSTP float ptr [ESP + 0x160]        ; 0053e82f
    FSTP float ptr [ESP + 0x164]        ; 0053e836
    JMP 0x0053e09f                      ; 0053e83d
        ;   XREF to: 0053e09f (UNCONDITIONAL_JUMP)  ; LAB_0053e09f
    MOV EAX,dword ptr [ESP + 0x15c]     ; 0053e842
        ;   Label: LAB_0053e842
    MOV dword ptr [EBX],EAX             ; 0053e849
    MOV EAX,dword ptr [ESP + 0x160]     ; 0053e84b
    MOV dword ptr [EBX + 0x4],EAX       ; 0053e852
    MOV EAX,dword ptr [ESP + 0x164]     ; 0053e855
    MOV dword ptr [EBX + 0x8],EAX       ; 0053e85c
    MOV EAX,dword ptr [ESP + 0x158]     ; 0053e85f
    MOV ESP,EBP                         ; 0053e866
    POP EBP                             ; 0053e868
    POP EDI                             ; 0053e869
    POP ESI                             ; 0053e86a
    POP EBX                             ; 0053e86b
    RET                                 ; 0053e86c

