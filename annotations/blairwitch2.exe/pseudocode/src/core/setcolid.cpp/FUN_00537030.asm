; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_setcolid_cpp_FUN_00537030(CDemonSet *param_1,float param_2,float param_3,float param_4,float param_5,float param_6,float param_7,float param_8)
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
; XREF[6]:
;   core_charactr.cpp_FUN_00423a60 at 00423d01
;   core_doc.cpp_FUN_00459555 at 0045957b
;   core_ghoul.cpp_CGhoul_process_FUN_004c1bb0 at 004c29f9
;   core_stranger.cpp_CStranger_tryPlaceObject_FUN_0056acd0 at 0056b3cb
;   core_trash.cpp_CTrash_process_FUN_00576ab0 at 00577152
;   core_zombie.cpp_CZombie_process_FUN_00595f30 at 005970c1
;
; Referenced Globals:
;   TerminatedCString s_core_setcolid_cpp_005e5dc5
;   TerminatedCString s_info_keyFramedModelInsta_005e5dda
;   TerminatedCString s_core_setcolid_cpp_005e5e26
;   TerminatedCString s_Invalid_collision_type_005e5e3b
;   undefined4 DAT_005e5e55
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_actor.cpp_FUN_00408cf0
;   core_actor.cpp_FUN_00408d30
;   core_actor.cpp_FUN_00408de0
;   core_actor.cpp_FUN_004090f0
;   core_box.cpp_FUN_0041b660
;   core_dmodel.cpp_CKeyFramedModel_intersectCylinder_FUN_0044f580
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;   core_dtrace.cpp_CDemonRaytrace_testCylinderCollision_FUN_00473e10
;   core_dtrace.cpp_initIntersectionCylinder_FUN_00473d40
;   core_main.c_FUN_004e4500
;   core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_00536990
;   core_setcolid.cpp_FUN_00536cb0
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_00537fa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00537030
        ;   Label: core_setcolid.cpp_FUN_00537030
    PUSH ESI                            ; 00537031
    PUSH EDI                            ; 00537032
    PUSH EBP                            ; 00537033
    MOV EBP,ESP                         ; 00537034
    SUB ESP,0x2f0                       ; 00537036
    AND ESP,0xfffffff8                  ; 0053703c
    PUSH dword ptr [EBP + 0x30]         ; 0053703f
    PUSH dword ptr [EBP + 0x2c]         ; 00537042
    PUSH dword ptr [EBP + 0x28]         ; 00537045
    PUSH dword ptr [EBP + 0x24]         ; 00537048
    PUSH dword ptr [EBP + 0x20]         ; 0053704b
    PUSH dword ptr [EBP + 0x1c]         ; 0053704e
    LEA EAX,[ESP + 0x170]               ; 00537051
    PUSH dword ptr [EBP + 0x18]         ; 00537058
    PUSH EAX                            ; 0053705b
    CALL core_dtrace.cpp_initIntersectionCylinder_FUN_00473d40 ; 0053705c
        ;   XREF to: 00473d40 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_initIntersectionCylinder_FUN_00473d40(SIntersectXZCylinder * this_ptr, float start_x, float start_z, float dir_x, ...)
    ADD ESP,0x20                        ; 00537061
    TEST dword ptr [EBP + 0x20],0x7fffffff ; 00537064
    JNZ 0x00537076                      ; 0053706b
        ;   XREF to: 00537076 (CONDITIONAL_JUMP)  ; LAB_00537076
    TEST dword ptr [EBP + 0x24],0x7fffffff ; 0053706d
    JZ 0x0053708b                       ; 00537074
        ;   XREF to: 0053708b (CONDITIONAL_JUMP)  ; LAB_0053708b
    LEA EAX,[ESP + 0x158]               ; 00537076
        ;   Label: LAB_00537076
    PUSH EAX                            ; 0053707d
    PUSH 0x1fc9c68                      ; 0053707e | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_CDemonRaytrace_testCylinderCollision_FUN_00473e10 ; 00537083
        ;   XREF to: 00473e10 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_testCylinderCollision_FUN_00473e10(CDemonRaytrace * this_ptr, SIntersectXZCylinder * cylinder)
    ADD ESP,0x8                         ; 00537088
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053708b
        ;   Label: LAB_0053708b
    MOV dword ptr [EAX + 0x14d134],0x1  ; 0053708e
    MOV dword ptr [EAX + 0x14d148],0xffffffff ; 00537098
    MOV dword ptr [EAX + 0x14d14c],0xffffffff ; 005370a2
    MOV EBX,dword ptr [EAX + 0x15f6a8]  ; 005370ac
    MOV dword ptr [EAX + 0x14d144],0x0  ; 005370b2
    TEST EBX,EBX                        ; 005370bc
    JL 0x0053725c                       ; 005370be
        ;   XREF to: 0053725c (CONDITIONAL_JUMP)  ; LAB_0053725c
    FLD float ptr [ESP + 0x168]         ; 005370c4
    FLD ST0                             ; 005370cb
    FLD float ptr [ESP + 0x170]         ; 005370cd
    FLDZ                                ; 005370d4
    FXCH ST3                            ; 005370d6
    FSUB float ptr [ESP + 0x178]        ; 005370d8
    FXCH ST2                            ; 005370df
    FADD float ptr [ESP + 0x178]        ; 005370e1
    FXCH ST2                            ; 005370e8
    FSTP float ptr [ESP + 0x224]        ; 005370ea
    FXCH                                ; 005370f1
    FSTP float ptr [ESP + 0x230]        ; 005370f3
    FXCH                                ; 005370fa
    FCOMPP                              ; 005370fc
    FNSTSW AX                           ; 005370fe
    SAHF                                ; 00537100
    JNC 0x005372e5                      ; 00537101
        ;   XREF to: 005372e5 (CONDITIONAL_JUMP)  ; LAB_005372e5
    FLD float ptr [ESP + 0x230]         ; 00537107
    FADD float ptr [ESP + 0x170]        ; 0053710e
    FSTP float ptr [ESP + 0x230]        ; 00537115
    FLD float ptr [ESP + 0x16c]         ; 0053711c
        ;   Label: LAB_0053711c
    FLD ST0                             ; 00537123
    FLD float ptr [ESP + 0x174]         ; 00537125
    MOV EAX,dword ptr [ESP + 0x180]     ; 0053712c
    FLDZ                                ; 00537133
    MOV dword ptr [ESP + 0x228],EAX     ; 00537135
    FXCH ST3                            ; 0053713c
    FSUB float ptr [ESP + 0x178]        ; 0053713e
    FXCH ST2                            ; 00537145
    FADD float ptr [ESP + 0x178]        ; 00537147
    FXCH ST2                            ; 0053714e
    FSTP float ptr [ESP + 0x22c]        ; 00537150
    MOV EAX,dword ptr [ESP + 0x17c]     ; 00537157
    FXCH                                ; 0053715e
    FSTP float ptr [ESP + 0x238]        ; 00537160
    MOV dword ptr [ESP + 0x234],EAX     ; 00537167
    FXCH                                ; 0053716e
    FCOMPP                              ; 00537170
    FNSTSW AX                           ; 00537172
    SAHF                                ; 00537174
    JNC 0x005372ff                      ; 00537175
        ;   XREF to: 005372ff (CONDITIONAL_JUMP)  ; LAB_005372ff
    FLD float ptr [ESP + 0x238]         ; 0053717b
    FADD float ptr [ESP + 0x174]        ; 00537182
    FSTP float ptr [ESP + 0x238]        ; 00537189
    LEA EAX,[ESP + 0x1b4]               ; 00537190
        ;   Label: LAB_00537190
    PUSH EAX                            ; 00537197
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_00537fa0 ; 00537198
        ;   XREF to: 00537fa0 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_00537fa0(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 0053719d
    MOV EAX,dword ptr [EBP + 0x14]      ; 005371a0
    MOV EAX,dword ptr [EAX + 0x15f694]  ; 005371a3
    MOV dword ptr [ESP + 0x1b4],EAX     ; 005371a9
    MOV EAX,dword ptr [EBP + 0x14]      ; 005371b0
    MOV EAX,dword ptr [EAX + 0x15f698]  ; 005371b3
    MOV dword ptr [ESP + 0x1b8],EAX     ; 005371b9
    MOV EAX,dword ptr [EBP + 0x14]      ; 005371c0
    MOV EAX,dword ptr [EAX + 0x15f69c]  ; 005371c3
    MOV dword ptr [ESP + 0x1bc],EAX     ; 005371c9
    MOV EAX,dword ptr [EBP + 0x14]      ; 005371d0
    MOV EAX,dword ptr [EAX + 0x15f6a0]  ; 005371d3
    MOV dword ptr [ESP + 0x1c0],EAX     ; 005371d9
    MOV EAX,dword ptr [EBP + 0x14]      ; 005371e0
    MOV EAX,dword ptr [EAX + 0x15f6a4]  ; 005371e3
    MOV dword ptr [ESP + 0x1c4],EAX     ; 005371e9
    MOV EAX,dword ptr [EBP + 0x14]      ; 005371f0
    XOR ESI,ESI                         ; 005371f3
    MOV EDI,dword ptr [EAX + 0x156db8]  ; 005371f5
    MOV dword ptr [ESP + 0x2e4],ESI     ; 005371fb
    TEST EDI,EDI                        ; 00537202
    JLE 0x0053725c                      ; 00537204
        ;   XREF to: 0053725c (CONDITIONAL_JUMP)  ; LAB_0053725c
    MOV dword ptr [ESP + 0x2e8],EAX     ; 00537206
    MOV EBX,dword ptr [ESP + 0x2e8]     ; 0053720d
        ;   Label: LAB_0053720d
    MOV EBX,dword ptr [EBX + 0x156dbc]  ; 00537214
    PUSH EBX                            ; 0053721a
    MOV ESI,dword ptr [EBP + 0x14]      ; 0053721b
    PUSH ESI                            ; 0053721e
    CALL core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_00536990 ; 0053721f
        ;   XREF to: 00536990 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_00536990(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00537224
    TEST EAX,EAX                        ; 00537227
    JZ 0x00537319                       ; 00537229
        ;   XREF to: 00537319 (CONDITIONAL_JUMP)  ; LAB_00537319
    MOV EAX,dword ptr [ESP + 0x2e8]     ; 0053722f
        ;   Label: LAB_0053722f
    MOV EDX,dword ptr [ESP + 0x2e4]     ; 00537236
    MOV EBX,dword ptr [EBP + 0x14]      ; 0053723d
    ADD EAX,0x4                         ; 00537240
    INC EDX                             ; 00537243
    MOV ECX,dword ptr [EBX + 0x156db8]  ; 00537244
    MOV dword ptr [ESP + 0x2e8],EAX     ; 0053724a
    MOV dword ptr [ESP + 0x2e4],EDX     ; 00537251
    CMP EDX,ECX                         ; 00537258
    JL 0x0053720d                       ; 0053725a
        ;   XREF to: 0053720d (CONDITIONAL_JUMP)  ; LAB_0053720d
    FLD float ptr [ESP + 0x158]         ; 0053725c
        ;   Label: LAB_0053725c
    FLD1                                ; 00537263
    FCOMPP                              ; 00537265
    FNSTSW AX                           ; 00537267
    SAHF                                ; 00537269
    JC 0x005372d7                       ; 0053726a
        ;   XREF to: 005372d7 (CONDITIONAL_JUMP)  ; LAB_005372d7
    FLD float ptr [ESP + 0x15c]         ; 0053726c
    FMUL ST0                            ; 00537273
    FLD float ptr [ESP + 0x160]         ; 00537275
    FMUL ST0                            ; 0053727c
    FADDP                               ; 0053727e
    FLD float ptr [ESP + 0x164]         ; 00537280
    FMUL ST0                            ; 00537287
    FADDP                               ; 00537289
    FSQRT                               ; 0053728b
    FLDZ                                ; 0053728d
    FXCH                                ; 0053728f
    FSTP float ptr [ESP + 0x2e0]        ; 00537291
    FCOMP float ptr [ESP + 0x2e0]       ; 00537298
    FNSTSW AX                           ; 0053729f
    SAHF                                ; 005372a1
    JC 0x00537a1e                       ; 005372a2
        ;   XREF to: 00537a1e (CONDITIONAL_JUMP)  ; LAB_00537a1e
    XOR EBX,EBX                         ; 005372a8
    MOV dword ptr [ESP + 0x160],EBX     ; 005372aa
    MOV dword ptr [ESP + 0x15c],EBX     ; 005372b1
    MOV dword ptr [ESP + 0x164],EBX     ; 005372b8
    MOV EBX,dword ptr [EBP + 0x14]      ; 005372bf
        ;   Label: LAB_005372bf
    LEA EAX,[ESP + 0x15c]               ; 005372c2
    ADD EBX,0x14d128                    ; 005372c9
    CMP EBX,EAX                         ; 005372cf
    JNZ 0x00537a62                      ; 005372d1
        ;   XREF to: 00537a62 (CONDITIONAL_JUMP)  ; LAB_00537a62
    MOV EAX,dword ptr [ESP + 0x158]     ; 005372d7
        ;   Label: LAB_005372d7
    MOV ESP,EBP                         ; 005372de
    POP EBP                             ; 005372e0
    POP EDI                             ; 005372e1
    POP ESI                             ; 005372e2
    POP EBX                             ; 005372e3
    RET                                 ; 005372e4
    FLD float ptr [ESP + 0x224]         ; 005372e5
        ;   Label: LAB_005372e5
    FADD float ptr [ESP + 0x170]        ; 005372ec
    FSTP float ptr [ESP + 0x224]        ; 005372f3
    JMP 0x0053711c                      ; 005372fa
        ;   XREF to: 0053711c (UNCONDITIONAL_JUMP)  ; LAB_0053711c
    FLD float ptr [ESP + 0x22c]         ; 005372ff
        ;   Label: LAB_005372ff
    FADD float ptr [ESP + 0x174]        ; 00537306
    FSTP float ptr [ESP + 0x22c]        ; 0053730d
    JMP 0x00537190                      ; 00537314
        ;   XREF to: 00537190 (UNCONDITIONAL_JUMP)  ; LAB_00537190
    MOV dword ptr [ESP + 0x1d4],EAX     ; 00537319
        ;   Label: LAB_00537319
    MOV dword ptr [ESP + 0x1d8],EAX     ; 00537320
    LEA EAX,[ESP + 0x1b4]               ; 00537327
    PUSH EAX                            ; 0053732e
    MOV ESI,dword ptr [EBX + 0x2b0]     ; 0053732f
    PUSH EBX                            ; 00537335
    CALL dword ptr [ESI + 0x44]         ; 00537336
    MOV dword ptr [ESP + 0x2f4],EAX     ; 00537339
    ADD ESP,0x8                         ; 00537340
    TEST EAX,EAX                        ; 00537343
    JZ 0x0053722f                       ; 00537345
        ;   XREF to: 0053722f (CONDITIONAL_JUMP)  ; LAB_0053722f
    PUSH EAX                            ; 0053734b
    LEA EAX,[ESP + 0x1b8]               ; 0053734c
    PUSH EAX                            ; 00537353
    PUSH EBX                            ; 00537354
    LEA ESI,[ESP + 0x248]               ; 00537355
    LEA EDI,[ESP + 0x218]               ; 0053735c
    CALL core_actor.cpp_FUN_004090f0    ; 00537363
        ;   XREF to: 004090f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_004090f0()
    ADD ESP,0xc                         ; 00537368
    LEA EAX,[ESP + 0x20c]               ; 0053736b
    MOV ECX,0x6                         ; 00537372
    PUSH EAX                            ; 00537377
    LEA EAX,[ESP + 0x228]               ; 00537378
    LEA ESI,[ESP + 0x240]               ; 0053737f
    PUSH EAX                            ; 00537386
    MOVSD.REP ES:EDI,ESI                ; 00537387
    CALL core_box.cpp_FUN_0041b660      ; 00537389
        ;   XREF to: 0041b660 (UNCONDITIONAL_CALL)  ; int core_box.cpp_FUN_0041b660(CBoundingBox3D * this_ptr, CBoundingBox3D * other)
    ADD ESP,0x8                         ; 0053738e
    TEST EAX,EAX                        ; 00537391
    JZ 0x0053722f                       ; 00537393
        ;   XREF to: 0053722f (CONDITIONAL_JUMP)  ; LAB_0053722f
    MOV ESI,dword ptr [ESP + 0x1d8]     ; 00537399
    TEST ESI,ESI                        ; 005373a0
    JZ 0x005379d1                       ; 005373a2
        ;   XREF to: 005379d1 (CONDITIONAL_JUMP)  ; LAB_005379d1
    PUSH ESI                            ; 005373a8
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 005373a9
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005373ae
    MOV EDI,dword ptr [EAX + 0x358]     ; 005373b1
    MOV ESI,EAX                         ; 005373b7
    TEST EDI,EDI                        ; 005373b9
    JNZ 0x005373e1                      ; 005373bb
        ;   XREF to: 005373e1 (CONDITIONAL_JUMP)  ; LAB_005373e1
    PUSH EAX                            ; 005373bd
    MOV EDX,0x5e5dc5                    ; 005373be | = "..\\core\\setcolid.cpp"
    MOV ECX,0x389                       ; 005373c3
    PUSH 0x5e5dda                       ; 005373c8 | = "info.keyFramedModelInstancePtr != NUL..."
    MOV dword ptr [0x01d046a0],EDX      ; 005373cd | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 005373d3 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005373d9
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 005373de
    FLD float ptr [EBP + 0x30]          ; 005373e1
        ;   Label: LAB_005373e1
    SUB ESP,0x4                         ; 005373e4
    FSUB float ptr [EBX + 0x24]         ; 005373e7
    FLD float ptr [EBP + 0x2c]          ; 005373ea
    FXCH                                ; 005373ed
    FSTP float ptr [ESP]                ; 005373ef
    FSUB float ptr [EBX + 0x24]         ; 005373f2
    SUB ESP,0x4                         ; 005373f5
    FSTP float ptr [ESP]                ; 005373f8
    PUSH dword ptr [EBP + 0x28]         ; 005373fb
    PUSH dword ptr [ESP + 0x180]        ; 005373fe
    FLD float ptr [ESP + 0x17c]         ; 00537405
    PUSH dword ptr [ESP + 0x180]        ; 0053740c
    FSUB float ptr [EBX + 0x28]         ; 00537413
    SUB ESP,0x4                         ; 00537416
    FSTP float ptr [ESP]                ; 00537419
    FLD float ptr [ESP + 0x180]         ; 0053741c
    SUB ESP,0x4                         ; 00537423
    FSUB float ptr [EBX + 0x20]         ; 00537426
    LEA EAX,[ESP + 0x118]               ; 00537429
    FSTP float ptr [ESP]                ; 00537430
    PUSH EAX                            ; 00537433
    CALL core_dtrace.cpp_initIntersectionCylinder_FUN_00473d40 ; 00537434
        ;   XREF to: 00473d40 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_initIntersectionCylinder_FUN_00473d40(SIntersectXZCylinder * this_ptr, float start_x, float start_z, float dir_x, ...)
    ADD ESP,0x20                        ; 00537439
    MOV EAX,dword ptr [ESP + 0x158]     ; 0053743c
    MOV dword ptr [ESP + 0xfc],EAX      ; 00537443
    LEA EAX,[EBX + 0x30]                ; 0053744a
    PUSH EAX                            ; 0053744d
    LEA EAX,[ESP + 0x100]               ; 0053744e
    PUSH EAX                            ; 00537455
    PUSH 0x0                            ; 00537456
    PUSH ESI                            ; 00537458
    CALL core_dmodel.cpp_CKeyFramedModel_intersectCylinder_FUN_0044f580 ; 00537459
        ;   XREF to: 0044f580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_intersectCylinder_FUN_0044f580(CKeyFramedModel * this_ptr, int frame_index, SIntersectXZCylinder * cylinder, CVector3f * transform_vector)
    ADD ESP,0x10                        ; 0053745e
    FLD float ptr [ESP + 0xfc]          ; 00537461
    FCOMP float ptr [ESP + 0x158]       ; 00537468
    FNSTSW AX                           ; 0053746f
    SAHF                                ; 00537471
    JNC 0x0053722f                      ; 00537472
        ;   XREF to: 0053722f (CONDITIONAL_JUMP)  ; LAB_0053722f
    MOV EAX,dword ptr [ESP + 0xfc]      ; 00537478
    LEA ESI,[ESP + 0x100]               ; 0053747f
    MOV dword ptr [ESP + 0x158],EAX     ; 00537486
    LEA EAX,[ESP + 0x15c]               ; 0053748d
    CMP EAX,ESI                         ; 00537494
    JZ 0x005374c2                       ; 00537496
        ;   XREF to: 005374c2 (CONDITIONAL_JUMP)  ; LAB_005374c2
    MOV EAX,dword ptr [ESP + 0x100]     ; 00537498
    MOV dword ptr [ESP + 0x15c],EAX     ; 0053749f
    MOV EAX,dword ptr [ESP + 0x104]     ; 005374a6
    MOV dword ptr [ESP + 0x160],EAX     ; 005374ad
    MOV EAX,dword ptr [ESP + 0x108]     ; 005374b4
    MOV dword ptr [ESP + 0x164],EAX     ; 005374bb
    MOV EAX,dword ptr [EBP + 0x14]      ; 005374c2
        ;   Label: LAB_005374c2
    MOV dword ptr [EAX + 0x14d144],EBX  ; 005374c5
    JMP 0x0053722f                      ; 005374cb
        ;   XREF to: 0053722f (UNCONDITIONAL_JUMP)  ; LAB_0053722f
    LEA EAX,[EBX + 0x3c]                ; 005374d0
        ;   Label: LAB_005374d0
    PUSH EAX                            ; 005374d3
    LEA EAX,[EBX + 0x20]                ; 005374d4
    PUSH EAX                            ; 005374d7
    PUSH EBX                            ; 005374d8
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005374d9
    LEA ESI,[ESP + 0x1e8]               ; 005374df
    CALL dword ptr [EAX + 0x24]         ; 005374e6
    ADD ESP,0x4                         ; 005374e9
    LEA EAX,[ESP + 0x1fc]               ; 005374ec
    LEA EDI,[ESP + 0x1fc]               ; 005374f3
    PUSH EAX                            ; 005374fa
    LEA EAX,[ESP + 0x164]               ; 005374fb
    MOV ECX,0x6                         ; 00537502
    PUSH EAX                            ; 00537507
    MOV EDX,dword ptr [EBP + 0x14]      ; 00537508
    LEA ESI,[ESP + 0x1ec]               ; 0053750b
    PUSH EDX                            ; 00537512
    MOVSD.REP ES:EDI,ESI                ; 00537513
    CALL core_setcolid.cpp_FUN_00536cb0 ; 00537515
        ;   XREF to: 00536cb0 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_FUN_00536cb0(CDemonSet * this_ptr, SIntersectXZCylinder * cylinder, CBoundingBox3D * bounding_box, CVector3f * position, ...)
    ADD ESP,0x14                        ; 0053751a
    TEST EAX,EAX                        ; 0053751d
    JZ 0x0053722f                       ; 0053751f
        ;   XREF to: 0053722f (CONDITIONAL_JUMP)  ; LAB_0053722f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00537525
    MOV dword ptr [EAX + 0x14d144],EBX  ; 00537528
    JMP 0x0053722f                      ; 0053752e
        ;   XREF to: 0053722f (UNCONDITIONAL_JUMP)  ; LAB_0053722f
    FLD float ptr [ESP + 0x1c8]         ; 00537533
        ;   Label: LAB_00537533
    FADD float ptr [EBX + 0x24]         ; 0053753a
    FLD float ptr [ESP + 0x1cc]         ; 0053753d
    FXCH                                ; 00537544
    FSTP float ptr [ESP + 0x1c8]        ; 00537546
    FADD float ptr [EBX + 0x24]         ; 0053754d
    FSTP float ptr [ESP + 0x1cc]        ; 00537550
    MOV EAX,dword ptr [EBX + 0x20]      ; 00537557
    MOV dword ptr [ESP + 0x98],EAX      ; 0053755a
    MOV EAX,dword ptr [EBX + 0x28]      ; 00537561
    FLD float ptr [ESP + 0x17c]         ; 00537564
    MOV dword ptr [ESP + 0x9c],EAX      ; 0053756b
    FCOMP float ptr [ESP + 0x1c8]       ; 00537572
    FNSTSW AX                           ; 00537579
    SAHF                                ; 0053757b
    JBE 0x0053722f                      ; 0053757c
        ;   XREF to: 0053722f (CONDITIONAL_JUMP)  ; LAB_0053722f
    FLD float ptr [ESP + 0x180]         ; 00537582
    FCOMP float ptr [ESP + 0x1cc]       ; 00537589
    FNSTSW AX                           ; 00537590
    SAHF                                ; 00537592
    JNC 0x0053722f                      ; 00537593
        ;   XREF to: 0053722f (CONDITIONAL_JUMP)  ; LAB_0053722f
    FLD float ptr [ESP + 0x98]          ; 00537599
    FSUB float ptr [ESP + 0x168]        ; 005375a0
    FST double ptr [ESP + 0x50]         ; 005375a7
    FMUL double ptr [ESP + 0x50]        ; 005375ab
    FLD float ptr [ESP + 0x1d0]         ; 005375af
    FLD float ptr [ESP + 0x9c]          ; 005375b6
    FSUB float ptr [ESP + 0x16c]        ; 005375bd
    FXCH                                ; 005375c4
    FADD float ptr [ESP + 0x178]        ; 005375c6
    FXCH                                ; 005375cd
    FST double ptr [ESP + 0x60]         ; 005375cf
    FMUL double ptr [ESP + 0x60]        ; 005375d3
    FXCH                                ; 005375d7
    FST double ptr [ESP + 0x78]         ; 005375d9
    FMUL double ptr [ESP + 0x78]        ; 005375dd
    FXCH                                ; 005375e1
    FADDP ST2,ST0                       ; 005375e3
    FSTP double ptr [ESP + 0x80]        ; 005375e5
    FST double ptr [ESP + 0x20]         ; 005375ec
    FCOMP double ptr [ESP + 0x80]       ; 005375f0
    FNSTSW AX                           ; 005375f7
    SAHF                                ; 005375f9
    JNC 0x00537681                      ; 005375fa
        ;   XREF to: 00537681 (CONDITIONAL_JUMP)  ; LAB_00537681
    FLD double ptr [ESP + 0x20]         ; 00537600
    FSQRT                               ; 00537604
    FSUB double ptr [ESP + 0x78]        ; 00537606
    FST double ptr [ESP + 0x58]         ; 0053760a
    FCOMP double ptr [0x005e5e55]       ; 0053760e | DAT_005e5e55
    FNSTSW AX                           ; 00537614
    SAHF                                ; 00537616
    JBE 0x0053762b                      ; 00537617
        ;   XREF to: 0053762b (CONDITIONAL_JUMP)  ; LAB_0053762b
    MOV EAX,0xd2f1a9fc                  ; 00537619
    MOV EDX,0xbf50624d                  ; 0053761e
    MOV dword ptr [ESP + 0x58],EAX      ; 00537623
    MOV dword ptr [ESP + 0x5c],EDX      ; 00537627
    FLD float ptr [ESP + 0x158]         ; 0053762b
        ;   Label: LAB_0053762b
    FCOMP double ptr [ESP + 0x58]       ; 00537632
    FNSTSW AX                           ; 00537636
    SAHF                                ; 00537638
    JBE 0x0053722f                      ; 00537639
        ;   XREF to: 0053722f (CONDITIONAL_JUMP)  ; LAB_0053722f
    FLD double ptr [ESP + 0x58]         ; 0053763f
    FLD double ptr [ESP + 0x50]         ; 00537643
    FLD double ptr [ESP + 0x60]         ; 00537647
    FXCH ST2                            ; 0053764b
    FSTP float ptr [ESP + 0x158]        ; 0053764d
    FCHS                                ; 00537654
    FXCH                                ; 00537656
    FCHS                                ; 00537658
    XOR ECX,ECX                         ; 0053765a
    FXCH                                ; 0053765c
    FSTP float ptr [ESP + 0x15c]        ; 0053765e
    FSTP float ptr [ESP + 0x164]        ; 00537665
    MOV dword ptr [ESP + 0x160],ECX     ; 0053766c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00537673
    MOV dword ptr [EAX + 0x14d144],EBX  ; 00537676
    JMP 0x0053722f                      ; 0053767c
        ;   XREF to: 0053722f (UNCONDITIONAL_JUMP)  ; LAB_0053722f
    FLD double ptr [ESP + 0x50]         ; 00537681
        ;   Label: LAB_00537681
    FLD float ptr [ESP + 0x18c]         ; 00537685
    FSTP double ptr [ESP + 0x28]        ; 0053768c
    FMUL double ptr [ESP + 0x28]        ; 00537690
    FLD float ptr [ESP + 0x190]         ; 00537694
    FSTP double ptr [ESP + 0x30]        ; 0053769b
    FLD double ptr [ESP + 0x60]         ; 0053769f
    FMUL double ptr [ESP + 0x30]        ; 005376a3
    FADDP                               ; 005376a7
    FLDZ                                ; 005376a9
    FXCH                                ; 005376ab
    FSTP double ptr [ESP + 0x38]        ; 005376ad
    FCOMP double ptr [ESP + 0x38]       ; 005376b1
    FNSTSW AX                           ; 005376b5
    SAHF                                ; 005376b7
    JNC 0x0053722f                      ; 005376b8
        ;   XREF to: 0053722f (CONDITIONAL_JUMP)  ; LAB_0053722f
    FLD double ptr [ESP + 0x38]         ; 005376be
    FLD double ptr [ESP + 0x28]         ; 005376c2
    FMUL ST1                            ; 005376c6
    FLD double ptr [ESP + 0x30]         ; 005376c8
    FMULP ST2                           ; 005376cc
    FLD float ptr [ESP + 0x168]         ; 005376ce
    FSTP double ptr [ESP + 0x40]        ; 005376d5
    FADD double ptr [ESP + 0x40]        ; 005376d9
    FLD float ptr [ESP + 0x98]          ; 005376dd
    FXCH                                ; 005376e4
    FSTP double ptr [ESP + 0x70]        ; 005376e6
    FSUB double ptr [ESP + 0x70]        ; 005376ea
    FMUL ST0                            ; 005376ee
    FLD float ptr [ESP + 0x16c]         ; 005376f0
    FSTP double ptr [ESP + 0x18]        ; 005376f7
    FXCH                                ; 005376fb
    FADD double ptr [ESP + 0x18]        ; 005376fd
    FLD float ptr [ESP + 0x9c]          ; 00537701
    FXCH                                ; 00537708
    FSTP double ptr [ESP + 0x8]         ; 0053770a
    FSUB double ptr [ESP + 0x8]         ; 0053770e
    FMUL ST0                            ; 00537712
    FADDP                               ; 00537714
    FST double ptr [ESP + 0x48]         ; 00537716
    FCOMP double ptr [ESP + 0x80]       ; 0053771a
    FNSTSW AX                           ; 00537721
    SAHF                                ; 00537723
    JNC 0x0053722f                      ; 00537724
        ;   XREF to: 0053722f (CONDITIONAL_JUMP)  ; LAB_0053722f
    FLD float ptr [ESP + 0x170]         ; 0053772a
    FST double ptr [ESP + 0x88]         ; 00537731
    FABS                                ; 00537738
    FLD double ptr [ESP + 0x80]         ; 0053773a
    FSUB double ptr [ESP + 0x48]        ; 00537741
    FSQRT                               ; 00537745
    FLD float ptr [ESP + 0x174]         ; 00537747
    FST double ptr [ESP]                ; 0053774e
    FABS                                ; 00537751
    FLD double ptr [ESP + 0x28]         ; 00537753
    FMUL ST2                            ; 00537757
    FLD double ptr [ESP + 0x30]         ; 00537759
    FMULP ST3                           ; 0053775d
    FLD double ptr [ESP + 0x8]          ; 0053775f
    FLD double ptr [ESP + 0x70]         ; 00537763
    FSUBRP ST2,ST0                      ; 00537767
    FSUBRP ST3,ST0                      ; 00537769
    FSTP double ptr [ESP + 0x68]        ; 0053776b
    FXCH                                ; 0053776f
    FSTP double ptr [ESP + 0x10]        ; 00537771
    FCOMPP                              ; 00537775
    FNSTSW AX                           ; 00537777
    SAHF                                ; 00537779
    JNC 0x00537820                      ; 0053777a
        ;   XREF to: 00537820 (CONDITIONAL_JUMP)  ; LAB_00537820
    FLD double ptr [ESP + 0x68]         ; 00537780
    FSUB double ptr [ESP + 0x40]        ; 00537784
    FDIV double ptr [ESP + 0x88]        ; 00537788
    FSTP double ptr [ESP + 0x90]        ; 0053778f
        ;   Label: LAB_0053778f
    FLDZ                                ; 00537796
    FCOMP double ptr [ESP + 0x90]       ; 00537798
    FNSTSW AX                           ; 0053779f
    SAHF                                ; 005377a1
    JA 0x0053722f                       ; 005377a2
        ;   XREF to: 0053722f (CONDITIONAL_JUMP)  ; LAB_0053722f
    FLD float ptr [ESP + 0x158]         ; 005377a8
    FCOMP double ptr [ESP + 0x90]       ; 005377af
    FNSTSW AX                           ; 005377b6
    SAHF                                ; 005377b8
    JBE 0x0053722f                      ; 005377b9
        ;   XREF to: 0053722f (CONDITIONAL_JUMP)  ; LAB_0053722f
    FLD1                                ; 005377bf
    FCOMP double ptr [ESP + 0x90]       ; 005377c1
    FNSTSW AX                           ; 005377c8
    SAHF                                ; 005377ca
    JC 0x0053722f                       ; 005377cb
        ;   XREF to: 0053722f (CONDITIONAL_JUMP)  ; LAB_0053722f
    FLD double ptr [ESP + 0x90]         ; 005377d1
    FLD float ptr [ESP + 0x98]          ; 005377d8
    FLD float ptr [ESP + 0x9c]          ; 005377df
    FXCH ST2                            ; 005377e6
    FSTP float ptr [ESP + 0x158]        ; 005377e8
    XOR EDI,EDI                         ; 005377ef
    FSUBR double ptr [ESP + 0x68]       ; 005377f1
    FXCH                                ; 005377f5
    FSUBR double ptr [ESP + 0x10]       ; 005377f7
    MOV dword ptr [ESP + 0x160],EDI     ; 005377fb
    FXCH                                ; 00537802
    FSTP float ptr [ESP + 0x15c]        ; 00537804
    FSTP float ptr [ESP + 0x164]        ; 0053780b
    MOV EAX,dword ptr [EBP + 0x14]      ; 00537812
    MOV dword ptr [EAX + 0x14d144],EBX  ; 00537815
    JMP 0x0053722f                      ; 0053781b
        ;   XREF to: 0053722f (UNCONDITIONAL_JUMP)  ; LAB_0053722f
    FLD double ptr [ESP + 0x10]         ; 00537820
        ;   Label: LAB_00537820
    FSUB double ptr [ESP + 0x18]        ; 00537824
    FDIV double ptr [ESP]               ; 00537828
    JMP 0x0053778f                      ; 0053782b
        ;   XREF to: 0053778f (UNCONDITIONAL_JUMP)  ; LAB_0053778f
    MOV EAX,dword ptr [ESP + 0x168]     ; 00537830
        ;   Label: LAB_00537830
    MOV dword ptr [ESP + 0x260],EAX     ; 00537837
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0053783e
    MOV dword ptr [ESP + 0x268],EAX     ; 00537845
    LEA EAX,[ESP + 0x260]               ; 0053784c
    PUSH EAX                            ; 00537853
    PUSH EBX                            ; 00537854
    MOV dword ptr [ESP + 0x26c],ESI     ; 00537855
    LEA ESI,[ESP + 0x280]               ; 0053785c
    CALL core_actor.cpp_FUN_00408de0    ; 00537863
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    ADD ESP,0x8                         ; 00537868
    LEA EDI,[ESP + 0x254]               ; 0053786b
    MOV EAX,dword ptr [ESP + 0x170]     ; 00537872
    LEA ESI,[ESP + 0x278]               ; 00537879
    MOV dword ptr [ESP + 0x2a8],EAX     ; 00537880
    MOV EAX,dword ptr [ESP + 0x174]     ; 00537887
    MOVSD ES:EDI,ESI                    ; 0053788e
    MOVSD ES:EDI,ESI                    ; 0053788f
    MOVSD ES:EDI,ESI                    ; 00537890
    MOV dword ptr [ESP + 0x2b0],EAX     ; 00537891
    LEA EAX,[ESP + 0x2a8]               ; 00537898
    XOR ESI,ESI                         ; 0053789f
    PUSH EAX                            ; 005378a1
    MOV dword ptr [ESP + 0x2b0],ESI     ; 005378a2
    PUSH EBX                            ; 005378a9
    LEA ESI,[ESP + 0x298]               ; 005378aa
    LEA EDI,[ESP + 0x28c]               ; 005378b1
    CALL core_actor.cpp_FUN_00408d30    ; 005378b8
        ;   XREF to: 00408d30 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d30()
    ADD ESP,0x8                         ; 005378bd
    LEA ESI,[ESP + 0x290]               ; 005378c0
    FLD float ptr [EBP + 0x30]          ; 005378c7
    MOVSD ES:EDI,ESI                    ; 005378ca
    MOVSD ES:EDI,ESI                    ; 005378cb
    MOVSD ES:EDI,ESI                    ; 005378cc
    SUB ESP,0x4                         ; 005378cd
    FSUB float ptr [EBX + 0x24]         ; 005378d0
    FLD float ptr [EBP + 0x2c]          ; 005378d3
    FXCH                                ; 005378d6
    FSTP float ptr [ESP]                ; 005378d8
    FSUB float ptr [EBX + 0x24]         ; 005378db
    SUB ESP,0x4                         ; 005378de
    FSTP float ptr [ESP]                ; 005378e1
    PUSH dword ptr [EBP + 0x28]         ; 005378e4
    PUSH dword ptr [ESP + 0x298]        ; 005378e7
    PUSH dword ptr [ESP + 0x294]        ; 005378ee
    PUSH dword ptr [ESP + 0x270]        ; 005378f5
    LEA EAX,[ESP + 0xb8]                ; 005378fc
    PUSH dword ptr [ESP + 0x26c]        ; 00537903
    PUSH EAX                            ; 0053790a
    CALL core_dtrace.cpp_initIntersectionCylinder_FUN_00473d40 ; 0053790b
        ;   XREF to: 00473d40 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_initIntersectionCylinder_FUN_00473d40(SIntersectXZCylinder * this_ptr, float start_x, float start_z, float dir_x, ...)
    ADD ESP,0x20                        ; 00537910
    MOV EAX,dword ptr [ESP + 0x158]     ; 00537913
    MOV dword ptr [ESP + 0xa0],EAX      ; 0053791a
    LEA EAX,[ESP + 0xa0]                ; 00537921
    PUSH EAX                            ; 00537928
    MOV ESI,dword ptr [EBX + 0x2b0]     ; 00537929
    PUSH EBX                            ; 0053792f
    CALL dword ptr [ESI + 0xc4]         ; 00537930
    ADD ESP,0x8                         ; 00537936
    FLD float ptr [ESP + 0xa0]          ; 00537939
    FCOMP float ptr [ESP + 0x158]       ; 00537940
    FNSTSW AX                           ; 00537947
    SAHF                                ; 00537949
    JNC 0x0053722f                      ; 0053794a
        ;   XREF to: 0053722f (CONDITIONAL_JUMP)  ; LAB_0053722f
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00537950
    MOV dword ptr [ESP + 0x158],EAX     ; 00537957
    LEA EAX,[ESP + 0xa4]                ; 0053795e
    PUSH EAX                            ; 00537965
    PUSH EBX                            ; 00537966
    LEA ESI,[ESP + 0x274]               ; 00537967
    LEA EDI,[ESP + 0x2a4]               ; 0053796e
    CALL core_actor.cpp_FUN_00408cf0    ; 00537975
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    LEA ESI,[ESP + 0x274]               ; 0053797a
    ADD ESP,0x8                         ; 00537981
    MOVSD ES:EDI,ESI                    ; 00537984
    MOVSD ES:EDI,ESI                    ; 00537985
    MOVSD ES:EDI,ESI                    ; 00537986
    LEA EAX,[ESP + 0x29c]               ; 00537987
    LEA ESI,[ESP + 0x15c]               ; 0053798e
    CMP ESI,EAX                         ; 00537995
    JZ 0x005379c3                       ; 00537997
        ;   XREF to: 005379c3 (CONDITIONAL_JUMP)  ; LAB_005379c3
    MOV EAX,dword ptr [ESP + 0x29c]     ; 00537999
    MOV dword ptr [ESP + 0x15c],EAX     ; 005379a0
    MOV EAX,dword ptr [ESP + 0x2a0]     ; 005379a7
    MOV dword ptr [ESP + 0x160],EAX     ; 005379ae
    MOV EAX,dword ptr [ESP + 0x2a4]     ; 005379b5
    MOV dword ptr [ESP + 0x164],EAX     ; 005379bc
    MOV EAX,dword ptr [EBP + 0x14]      ; 005379c3
        ;   Label: LAB_005379c3
    MOV dword ptr [EAX + 0x14d144],EBX  ; 005379c6
    JMP 0x0053722f                      ; 005379cc
        ;   XREF to: 0053722f (UNCONDITIONAL_JUMP)  ; LAB_0053722f
    MOV EDI,dword ptr [ESP + 0x2ec]     ; 005379d1
        ;   Label: LAB_005379d1
    CMP EDI,0x2                         ; 005379d8
    JNC 0x005379e8                      ; 005379db
        ;   XREF to: 005379e8 (CONDITIONAL_JUMP)  ; LAB_005379e8
    CMP EDI,0x1                         ; 005379dd
    JZ 0x005374d0                       ; 005379e0
        ;   XREF to: 005374d0 (CONDITIONAL_JUMP)  ; LAB_005374d0
    JMP 0x005379f7                      ; 005379e6
        ;   XREF to: 005379f7 (UNCONDITIONAL_JUMP)  ; LAB_005379f7
    JBE 0x00537533                      ; 005379e8
        ;   XREF to: 00537533 (CONDITIONAL_JUMP)  ; LAB_00537533
        ;   Label: LAB_005379e8
    CMP EDI,0x3                         ; 005379ee
    JZ 0x00537830                       ; 005379f1
        ;   XREF to: 00537830 (CONDITIONAL_JUMP)  ; LAB_00537830
    MOV EDI,0x5e5e26                    ; 005379f7 | = "..\\core\\setcolid.cpp"
        ;   Label: LAB_005379f7
    MOV EAX,0x3f1                       ; 005379fc
    PUSH 0x5e5e3b                       ; 00537a01 | = "Invalid collision type!"
    MOV dword ptr [0x01d046a0],EDI      ; 00537a06 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 00537a0c | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00537a11
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00537a16
    JMP 0x0053722f                      ; 00537a19
        ;   XREF to: 0053722f (UNCONDITIONAL_JUMP)  ; LAB_0053722f
    FLD1                                ; 00537a1e
        ;   Label: LAB_00537a1e
    FLD float ptr [ESP + 0x15c]         ; 00537a20
    FXCH                                ; 00537a27
    FDIV float ptr [ESP + 0x2e0]        ; 00537a29
    FXCH                                ; 00537a30
    FMUL ST1                            ; 00537a32
    FLD float ptr [ESP + 0x160]         ; 00537a34
    FMUL ST2                            ; 00537a3b
    FLD float ptr [ESP + 0x164]         ; 00537a3d
    FMULP ST3                           ; 00537a44
    FXCH                                ; 00537a46
    FSTP float ptr [ESP + 0x15c]        ; 00537a48
    FSTP float ptr [ESP + 0x160]        ; 00537a4f
    FSTP float ptr [ESP + 0x164]        ; 00537a56
    JMP 0x005372bf                      ; 00537a5d
        ;   XREF to: 005372bf (UNCONDITIONAL_JUMP)  ; LAB_005372bf
    MOV EAX,dword ptr [ESP + 0x15c]     ; 00537a62
        ;   Label: LAB_00537a62
    MOV dword ptr [EBX],EAX             ; 00537a69
    MOV EAX,dword ptr [ESP + 0x160]     ; 00537a6b
    MOV dword ptr [EBX + 0x4],EAX       ; 00537a72
    MOV EAX,dword ptr [ESP + 0x164]     ; 00537a75
    MOV dword ptr [EBX + 0x8],EAX       ; 00537a7c
    MOV EAX,dword ptr [ESP + 0x158]     ; 00537a7f
    MOV ESP,EBP                         ; 00537a86
    POP EBP                             ; 00537a88
    POP EDI                             ; 00537a89
    POP ESI                             ; 00537a8a
    POP EBX                             ; 00537a8b
    RET                                 ; 00537a8c

