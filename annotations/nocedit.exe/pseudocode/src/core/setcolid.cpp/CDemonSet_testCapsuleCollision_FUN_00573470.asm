; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float __cdecl core_setcolid_cpp_CDemonSet_testCapsuleCollision_FUN_00573470(CDemonSet *this_ptr,float start_x,float start_z,float dir_x,float dir_z,float radius,void *user_data1,void *user_data2)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   start_x
; float            Stack[0xc]:4   start_z
; float            Stack[0x10]:4   dir_x
; float            Stack[0x14]:4   dir_z
; float            Stack[0x18]:4   radius
; void *           Stack[0x1c]:4   user_data1
; void *           Stack[0x20]:4   user_data2
; Local Variables:
; undefined4       Stack[-0x208]:4  local_208
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
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40 at 004291bc
;   core_ghoul.cpp_CGhoul_process_FUN_004e6600 at 004e7301
;   core_stranger.cpp_CStranger_FUN_005c2850 at 005c2e1e
;   core_zombie.cpp_CZombie_process_FUN_005f9470 at 005fa414
;
; Referenced Globals:
;   TerminatedCString s_core_setcolid_cpp_00646266
;   TerminatedCString s_info_keyFramedModelInsta_0064627b
;   TerminatedCString s_core_setcolid_cpp_006462c7
;   TerminatedCString s_Invalid_collision_type_006462dc
;   double DOUBLE_006462f6 = -0.00100000000000000
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_getWorldBoundingBox_FUN_00409270
;   core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_box.cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010
;   core_dmodel.cpp_CKeyFramedModel_intersectCylinder_FUN_00478650
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   core_dtrace.cpp_CDemonRaytrace_testCapsuleCollision_FUN_00496c60
;   core_dtrace.cpp_initCapsuleCollisionData_FUN_00496b90
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_00572e20
;   core_setcolid.cpp_CDemonSet_testOBBCylinderCollision_FUN_00573140
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00573470
        ;   Label: core_setcolid.cpp_CDemonSet_testCapsuleCollision_FUN_00573470
    PUSH ESI                            ; 00573471
    PUSH EDI                            ; 00573472
    PUSH EBP                            ; 00573473
    MOV EBP,ESP                         ; 00573474
    SUB ESP,0x298                       ; 00573476
    AND ESP,0xfffffff8                  ; 0057347c
    MOV EDI,dword ptr [EBP + 0x14]      ; 0057347f
    PUSH dword ptr [EBP + 0x30]         ; 00573482
    PUSH dword ptr [EBP + 0x2c]         ; 00573485
    PUSH dword ptr [EBP + 0x28]         ; 00573488
    PUSH dword ptr [EBP + 0x24]         ; 0057348b
    PUSH dword ptr [EBP + 0x20]         ; 0057348e
    PUSH dword ptr [EBP + 0x1c]         ; 00573491
    LEA EAX,[ESP + 0x174]               ; 00573494
    PUSH dword ptr [EBP + 0x18]         ; 0057349b
    PUSH EAX                            ; 0057349e
    CALL core_dtrace.cpp_initCapsuleCollisionData_FUN_00496b90 ; 0057349f
        ;   XREF to: 00496b90 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_initCapsuleCollisionData_FUN_00496b90(SCapsuleCollision * out_data, float start_x, float start_z, float dir_x, ...)
    ADD ESP,0x20                        ; 005734a4
    TEST dword ptr [EBP + 0x20],0x7fffffff ; 005734a7
    JNZ 0x005734b9                      ; 005734ae
        ;   XREF to: 005734b9 (CONDITIONAL_JUMP)  ; LAB_005734b9
    TEST dword ptr [EBP + 0x24],0x7fffffff ; 005734b0
    JZ 0x005734ce                       ; 005734b7
        ;   XREF to: 005734ce (CONDITIONAL_JUMP)  ; LAB_005734ce
    LEA EAX,[ESP + 0x15c]               ; 005734b9
        ;   Label: LAB_005734b9
    PUSH EAX                            ; 005734c0
    PUSH 0x3277d14                      ; 005734c1 | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_CDemonRaytrace_testCapsuleCollision_FUN_00496c60 ; 005734c6
        ;   XREF to: 00496c60 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_testCapsuleCollision_FUN_00496c60(CDemonRaytrace * this_ptr, SCapsuleCollision * capsule_data)
    ADD ESP,0x8                         ; 005734cb
    MOV dword ptr [EDI + 0x14d134],0x1  ; 005734ce
        ;   Label: LAB_005734ce
    MOV dword ptr [EDI + 0x14d148],0xffffffff ; 005734d8
    MOV dword ptr [EDI + 0x14d14c],0xffffffff ; 005734e2
    MOV EBX,dword ptr [EDI + 0x15f694]  ; 005734ec
    MOV dword ptr [EDI + 0x14d144],0x0  ; 005734f2
    TEST EBX,EBX                        ; 005734fc
    JL 0x00573684                       ; 005734fe
        ;   XREF to: 00573684 (CONDITIONAL_JUMP)  ; LAB_00573684
    FLD float ptr [ESP + 0x16c]         ; 00573504
    FLD ST0                             ; 0057350b
    FLD float ptr [ESP + 0x174]         ; 0057350d
    FLDZ                                ; 00573514
    FXCH ST3                            ; 00573516
    FSUB float ptr [ESP + 0x17c]        ; 00573518
    FXCH ST2                            ; 0057351f
    FADD float ptr [ESP + 0x17c]        ; 00573521
    FXCH ST2                            ; 00573528
    FSTP float ptr [ESP + 0x210]        ; 0057352a
    FXCH                                ; 00573531
    FSTP float ptr [ESP + 0x21c]        ; 00573533
    FXCH                                ; 0057353a
    FCOMPP                              ; 0057353c
    FNSTSW AX                           ; 0057353e
    SAHF                                ; 00573540
    JNC 0x00573703                      ; 00573541
        ;   XREF to: 00573703 (CONDITIONAL_JUMP)  ; LAB_00573703
    FLD float ptr [ESP + 0x21c]         ; 00573547
    FADD float ptr [ESP + 0x174]        ; 0057354e
    FSTP float ptr [ESP + 0x21c]        ; 00573555
    FLD float ptr [ESP + 0x170]         ; 0057355c
        ;   Label: LAB_0057355c
    FLD ST0                             ; 00573563
    FLD float ptr [ESP + 0x178]         ; 00573565
    MOV EAX,dword ptr [ESP + 0x184]     ; 0057356c
    FLDZ                                ; 00573573
    MOV dword ptr [ESP + 0x214],EAX     ; 00573575
    FXCH ST3                            ; 0057357c
    FSUB float ptr [ESP + 0x17c]        ; 0057357e
    FXCH ST2                            ; 00573585
    FADD float ptr [ESP + 0x17c]        ; 00573587
    FXCH ST2                            ; 0057358e
    FSTP float ptr [ESP + 0x218]        ; 00573590
    MOV EAX,dword ptr [ESP + 0x180]     ; 00573597
    FXCH                                ; 0057359e
    FSTP float ptr [ESP + 0x224]        ; 005735a0
    MOV dword ptr [ESP + 0x220],EAX     ; 005735a7
    FXCH                                ; 005735ae
    FCOMPP                              ; 005735b0
    FNSTSW AX                           ; 005735b2
    SAHF                                ; 005735b4
    JNC 0x0057371d                      ; 005735b5
        ;   XREF to: 0057371d (CONDITIONAL_JUMP)  ; LAB_0057371d
    FLD float ptr [ESP + 0x224]         ; 005735bb
    FADD float ptr [ESP + 0x178]        ; 005735c2
    FSTP float ptr [ESP + 0x224]        ; 005735c9
    LEA EAX,[ESP + 0x1b8]               ; 005735d0
        ;   Label: LAB_005735d0
    PUSH EAX                            ; 005735d7
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0 ; 005735d8
        ;   XREF to: 005743c0 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 005735dd
    MOV EAX,dword ptr [EDI + 0x15f680]  ; 005735e0
    MOV dword ptr [ESP + 0x1b8],EAX     ; 005735e6
    MOV EAX,dword ptr [EDI + 0x15f684]  ; 005735ed
    MOV dword ptr [ESP + 0x1bc],EAX     ; 005735f3
    MOV EAX,dword ptr [EDI + 0x15f688]  ; 005735fa
    MOV dword ptr [ESP + 0x1c0],EAX     ; 00573600
    MOV EAX,dword ptr [EDI + 0x15f68c]  ; 00573607
    MOV dword ptr [ESP + 0x1c4],EAX     ; 0057360d
    MOV EAX,dword ptr [EDI + 0x15f690]  ; 00573614
    MOV dword ptr [ESP + 0x1c8],EAX     ; 0057361a
    XOR ESI,ESI                         ; 00573621
    MOV EAX,dword ptr [EDI + 0x156da8]  ; 00573623
    MOV dword ptr [ESP + 0x294],ESI     ; 00573629
    TEST EAX,EAX                        ; 00573630
    JLE 0x00573684                      ; 00573632
        ;   XREF to: 00573684 (CONDITIONAL_JUMP)  ; LAB_00573684
    MOV dword ptr [ESP + 0x290],EDI     ; 00573634
    MOV EBX,dword ptr [ESP + 0x290]     ; 0057363b
        ;   Label: LAB_0057363b
    MOV EBX,dword ptr [EBX + 0x156dac]  ; 00573642
    PUSH EBX                            ; 00573648
    PUSH EDI                            ; 00573649
    CALL core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_00572e20 ; 0057364a
        ;   XREF to: 00572e20 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_00572e20(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0057364f
    TEST EAX,EAX                        ; 00573652
    JZ 0x00573737                       ; 00573654
        ;   XREF to: 00573737 (CONDITIONAL_JUMP)  ; LAB_00573737
    MOV EDX,dword ptr [ESP + 0x290]     ; 0057365a
        ;   Label: LAB_0057365a
    MOV ECX,dword ptr [ESP + 0x294]     ; 00573661
    MOV EBX,dword ptr [EDI + 0x156da8]  ; 00573668
    ADD EDX,0x4                         ; 0057366e
    INC ECX                             ; 00573671
    MOV dword ptr [ESP + 0x290],EDX     ; 00573672
    MOV dword ptr [ESP + 0x294],ECX     ; 00573679
    CMP ECX,EBX                         ; 00573680
    JL 0x0057363b                       ; 00573682
        ;   XREF to: 0057363b (CONDITIONAL_JUMP)  ; LAB_0057363b
    FLD float ptr [ESP + 0x15c]         ; 00573684
        ;   Label: LAB_00573684
    FLD1                                ; 0057368b
    FCOMPP                              ; 0057368d
    FNSTSW AX                           ; 0057368f
    SAHF                                ; 00573691
    JC 0x005736f5                       ; 00573692
        ;   XREF to: 005736f5 (CONDITIONAL_JUMP)  ; LAB_005736f5
    FLD float ptr [ESP + 0x160]         ; 00573694
    FMUL ST0                            ; 0057369b
    FLD float ptr [ESP + 0x164]         ; 0057369d
    FMUL ST0                            ; 005736a4
    FADDP                               ; 005736a6
    FLD float ptr [ESP + 0x168]         ; 005736a8
    FMUL ST0                            ; 005736af
    FADDP                               ; 005736b1
    FSQRT                               ; 005736b3
    FST float ptr [ESP + 0xa0]          ; 005736b5
    FLDZ                                ; 005736bc
    FCOMPP                              ; 005736be
    FNSTSW AX                           ; 005736c0
    SAHF                                ; 005736c2
    JC 0x00573d96                       ; 005736c3
        ;   XREF to: 00573d96 (CONDITIONAL_JUMP)  ; LAB_00573d96
    XOR ECX,ECX                         ; 005736c9
    MOV dword ptr [ESP + 0x164],ECX     ; 005736cb
    MOV dword ptr [ESP + 0x160],ECX     ; 005736d2
    MOV dword ptr [ESP + 0x168],ECX     ; 005736d9
    LEA EAX,[ESP + 0x160]               ; 005736e0
        ;   Label: LAB_005736e0
    ADD EDI,0x14d128                    ; 005736e7
    CMP EDI,EAX                         ; 005736ed
    JNZ 0x00573dda                      ; 005736ef
        ;   XREF to: 00573dda (CONDITIONAL_JUMP)  ; LAB_00573dda
    MOV EAX,dword ptr [ESP + 0x15c]     ; 005736f5
        ;   Label: LAB_005736f5
    MOV ESP,EBP                         ; 005736fc
    POP EBP                             ; 005736fe
    POP EDI                             ; 005736ff
    POP ESI                             ; 00573700
    POP EBX                             ; 00573701
    RET                                 ; 00573702
    FLD float ptr [ESP + 0x210]         ; 00573703
        ;   Label: LAB_00573703
    FADD float ptr [ESP + 0x174]        ; 0057370a
    FSTP float ptr [ESP + 0x210]        ; 00573711
    JMP 0x0057355c                      ; 00573718
        ;   XREF to: 0057355c (UNCONDITIONAL_JUMP)  ; LAB_0057355c
    FLD float ptr [ESP + 0x218]         ; 0057371d
        ;   Label: LAB_0057371d
    FADD float ptr [ESP + 0x178]        ; 00573724
    FSTP float ptr [ESP + 0x218]        ; 0057372b
    JMP 0x005735d0                      ; 00573732
        ;   XREF to: 005735d0 (UNCONDITIONAL_JUMP)  ; LAB_005735d0
    MOV dword ptr [ESP + 0x1d8],EAX     ; 00573737
        ;   Label: LAB_00573737
    MOV dword ptr [ESP + 0x1dc],EAX     ; 0057373e
    LEA EAX,[ESP + 0x1b8]               ; 00573745
    PUSH EAX                            ; 0057374c
    MOV ESI,dword ptr [EBX + 0x154]     ; 0057374d
    PUSH EBX                            ; 00573753
    CALL dword ptr [ESI + 0x34]         ; 00573754
    MOV ESI,EAX                         ; 00573757
    ADD ESP,0x8                         ; 00573759
    TEST EAX,EAX                        ; 0057375c
    JZ 0x0057365a                       ; 0057375e
        ;   XREF to: 0057365a (CONDITIONAL_JUMP)  ; LAB_0057365a
    PUSH EAX                            ; 00573764
    LEA EAX,[ESP + 0x1bc]               ; 00573765
    PUSH EAX                            ; 0057376c
    LEA EAX,[ESP + 0x200]               ; 0057376d
    PUSH EAX                            ; 00573774
    PUSH EBX                            ; 00573775
    CALL core_actor.cpp_CDemonActor_getWorldBoundingBox_FUN_00409270 ; 00573776
        ;   XREF to: 00409270 (UNCONDITIONAL_CALL)  ; CBoundingBox3D * core_actor.cpp_CDemonActor_getWorldBoundingBox_FUN_00409270(CDemonActor * this_ptr, CBoundingBox3D * output_bbox, SCollisionInfo * collision_info, int bounding_box_type)
    ADD ESP,0x10                        ; 0057377b
    PUSH EAX                            ; 0057377e
    LEA EAX,[ESP + 0x214]               ; 0057377f
    PUSH EAX                            ; 00573786
    CALL core_box.cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010 ; 00573787
        ;   XREF to: 00421010 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010(CBoundingBox3D * this_ptr, CBoundingBox3D * other)
    ADD ESP,0x8                         ; 0057378c
    TEST EAX,EAX                        ; 0057378f
    JZ 0x0057365a                       ; 00573791
        ;   XREF to: 0057365a (CONDITIONAL_JUMP)  ; LAB_0057365a
    MOV EDX,dword ptr [ESP + 0x1dc]     ; 00573797
    TEST EDX,EDX                        ; 0057379e
    JZ 0x00573d50                       ; 005737a0
        ;   XREF to: 00573d50 (CONDITIONAL_JUMP)  ; LAB_00573d50
    PUSH EDX                            ; 005737a6
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 005737a7
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005737ac
    MOV EDX,dword ptr [EAX + 0x5698]    ; 005737af
    MOV ESI,EAX                         ; 005737b5
    TEST EDX,EDX                        ; 005737b7
    JNZ 0x005737df                      ; 005737b9
        ;   XREF to: 005737df (CONDITIONAL_JUMP)  ; LAB_005737df
    PUSH EAX                            ; 005737bb
    MOV ECX,0x646266                    ; 005737bc | = "..\\core\\setcolid.cpp"
    MOV EDX,0x389                       ; 005737c1
    PUSH 0x64627b                       ; 005737c6 | = "info.keyFramedModelInstancePtr != NUL..."
    MOV dword ptr [0x02f0ca48],ECX      ; 005737cb | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 005737d1 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005737d7
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 005737dc
    FLD float ptr [EBP + 0x30]          ; 005737df
        ;   Label: LAB_005737df
    SUB ESP,0x4                         ; 005737e2
    FSUB float ptr [EBX + 0x24]         ; 005737e5
    FLD float ptr [EBP + 0x2c]          ; 005737e8
    FXCH                                ; 005737eb
    FSTP float ptr [ESP]                ; 005737ed
    FSUB float ptr [EBX + 0x24]         ; 005737f0
    SUB ESP,0x4                         ; 005737f3
    FSTP float ptr [ESP]                ; 005737f6
    PUSH dword ptr [EBP + 0x28]         ; 005737f9
    PUSH dword ptr [ESP + 0x184]        ; 005737fc
    FLD float ptr [ESP + 0x180]         ; 00573803
    PUSH dword ptr [ESP + 0x184]        ; 0057380a
    FSUB float ptr [EBX + 0x28]         ; 00573811
    SUB ESP,0x4                         ; 00573814
    FSTP float ptr [ESP]                ; 00573817
    FLD float ptr [ESP + 0x184]         ; 0057381a
    SUB ESP,0x4                         ; 00573821
    FSUB float ptr [EBX + 0x20]         ; 00573824
    LEA EAX,[ESP + 0xc0]                ; 00573827
    FSTP float ptr [ESP]                ; 0057382e
    PUSH EAX                            ; 00573831
    CALL core_dtrace.cpp_initCapsuleCollisionData_FUN_00496b90 ; 00573832
        ;   XREF to: 00496b90 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_initCapsuleCollisionData_FUN_00496b90(SCapsuleCollision * out_data, float start_x, float start_z, float dir_x, ...)
    ADD ESP,0x20                        ; 00573837
    MOV EAX,dword ptr [ESP + 0x15c]     ; 0057383a
    MOV dword ptr [ESP + 0xa4],EAX      ; 00573841
    LEA EAX,[EBX + 0x30]                ; 00573848
    PUSH EAX                            ; 0057384b
    LEA EAX,[ESP + 0xa8]                ; 0057384c
    PUSH EAX                            ; 00573853
    PUSH 0x0                            ; 00573854
    PUSH ESI                            ; 00573856
    CALL core_dmodel.cpp_CKeyFramedModel_intersectCylinder_FUN_00478650 ; 00573857
        ;   XREF to: 00478650 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_intersectCylinder_FUN_00478650(CKeyFramedModel * this_ptr, int frame_index, SIntersectXZCylinder * cylinder, CVector3f * transform_vector)
    ADD ESP,0x10                        ; 0057385c
    FLD float ptr [ESP + 0xa4]          ; 0057385f
    FCOMP float ptr [ESP + 0x15c]       ; 00573866
    FNSTSW AX                           ; 0057386d
    SAHF                                ; 0057386f
    JNC 0x0057365a                      ; 00573870
        ;   XREF to: 0057365a (CONDITIONAL_JUMP)  ; LAB_0057365a
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00573876
    LEA ESI,[ESP + 0xa8]                ; 0057387d
    MOV dword ptr [ESP + 0x15c],EAX     ; 00573884
    LEA EAX,[ESP + 0x160]               ; 0057388b
    CMP EAX,ESI                         ; 00573892
    JZ 0x005738c0                       ; 00573894
        ;   XREF to: 005738c0 (CONDITIONAL_JUMP)  ; LAB_005738c0
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00573896
    MOV dword ptr [ESP + 0x160],EAX     ; 0057389d
    MOV EAX,dword ptr [ESP + 0xac]      ; 005738a4
    MOV dword ptr [ESP + 0x164],EAX     ; 005738ab
    MOV EAX,dword ptr [ESP + 0xb0]      ; 005738b2
    MOV dword ptr [ESP + 0x168],EAX     ; 005738b9
    MOV dword ptr [EDI + 0x14d144],EBX  ; 005738c0
        ;   Label: LAB_005738c0
    JMP 0x0057365a                      ; 005738c6
        ;   XREF to: 0057365a (UNCONDITIONAL_JUMP)  ; LAB_0057365a
    LEA EAX,[EBX + 0x3c]                ; 005738cb
        ;   Label: LAB_005738cb
    PUSH EAX                            ; 005738ce
    LEA EAX,[EBX + 0x20]                ; 005738cf
    PUSH EAX                            ; 005738d2
    LEA ESI,[ESP + 0x1e8]               ; 005738d3
    PUSH ESI                            ; 005738da
    MOV EAX,dword ptr [EBX + 0x154]     ; 005738db
    PUSH EBX                            ; 005738e1
    CALL dword ptr [EAX + 0x14]         ; 005738e2
    ADD ESP,0x8                         ; 005738e5
    PUSH EAX                            ; 005738e8
    LEA EAX,[ESP + 0x168]               ; 005738e9
    PUSH EAX                            ; 005738f0
    PUSH EDI                            ; 005738f1
    CALL core_setcolid.cpp_CDemonSet_testOBBCylinderCollision_FUN_00573140 ; 005738f2
        ;   XREF to: 00573140 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_testOBBCylinderCollision_FUN_00573140(CDemonSet * this_ptr, CBoundingBox3D * bounding_box, CMatrix3x3f * orientation_matrix, SIntersectXZCylinder * cylinder1, ...)
    ADD ESP,0x14                        ; 005738f7
    TEST EAX,EAX                        ; 005738fa
    JZ 0x0057365a                       ; 005738fc
        ;   XREF to: 0057365a (CONDITIONAL_JUMP)  ; LAB_0057365a
    MOV dword ptr [EDI + 0x14d144],EBX  ; 00573902
    JMP 0x0057365a                      ; 00573908
        ;   XREF to: 0057365a (UNCONDITIONAL_JUMP)  ; LAB_0057365a
    FLD float ptr [ESP + 0x1cc]         ; 0057390d
        ;   Label: LAB_0057390d
    FADD float ptr [EBX + 0x24]         ; 00573914
    FLD float ptr [ESP + 0x1d0]         ; 00573917
    FXCH                                ; 0057391e
    FSTP float ptr [ESP + 0x1cc]        ; 00573920
    FADD float ptr [EBX + 0x24]         ; 00573927
    FSTP float ptr [ESP + 0x1d0]        ; 0057392a
    MOV EAX,dword ptr [EBX + 0x20]      ; 00573931
    MOV dword ptr [ESP + 0x98],EAX      ; 00573934
    MOV EAX,dword ptr [EBX + 0x28]      ; 0057393b
    FLD float ptr [ESP + 0x180]         ; 0057393e
    MOV dword ptr [ESP + 0x9c],EAX      ; 00573945
    FCOMP float ptr [ESP + 0x1cc]       ; 0057394c
    FNSTSW AX                           ; 00573953
    SAHF                                ; 00573955
    JBE 0x0057365a                      ; 00573956
        ;   XREF to: 0057365a (CONDITIONAL_JUMP)  ; LAB_0057365a
    FLD float ptr [ESP + 0x184]         ; 0057395c
    FCOMP float ptr [ESP + 0x1d0]       ; 00573963
    FNSTSW AX                           ; 0057396a
    SAHF                                ; 0057396c
    JNC 0x0057365a                      ; 0057396d
        ;   XREF to: 0057365a (CONDITIONAL_JUMP)  ; LAB_0057365a
    FLD float ptr [ESP + 0x98]          ; 00573973
    FSUB float ptr [ESP + 0x16c]        ; 0057397a
    FST double ptr [ESP + 0x28]         ; 00573981
    FMUL double ptr [ESP + 0x28]        ; 00573985
    FLD float ptr [ESP + 0x1d4]         ; 00573989
    FLD float ptr [ESP + 0x9c]          ; 00573990
    FSUB float ptr [ESP + 0x170]        ; 00573997
    FXCH                                ; 0057399e
    FADD float ptr [ESP + 0x17c]        ; 005739a0
    FXCH                                ; 005739a7
    FST double ptr [ESP + 0x38]         ; 005739a9
    FMUL double ptr [ESP + 0x38]        ; 005739ad
    FXCH                                ; 005739b1
    FST double ptr [ESP + 0x20]         ; 005739b3
    FMUL double ptr [ESP + 0x20]        ; 005739b7
    FXCH                                ; 005739bb
    FADDP ST2,ST0                       ; 005739bd
    FSTP double ptr [ESP + 0x8]         ; 005739bf
    FST double ptr [ESP + 0x80]         ; 005739c3
    FCOMP double ptr [ESP + 0x8]        ; 005739ca
    FNSTSW AX                           ; 005739ce
    SAHF                                ; 005739d0
    JNC 0x00573a58                      ; 005739d1
        ;   XREF to: 00573a58 (CONDITIONAL_JUMP)  ; LAB_00573a58
    FLD double ptr [ESP + 0x80]         ; 005739d7
    FSQRT                               ; 005739de
    FSUB double ptr [ESP + 0x20]        ; 005739e0
    FST double ptr [ESP + 0x30]         ; 005739e4
    FCOMP double ptr [0x006462f6]       ; 005739e8 | DOUBLE_006462f6
    FNSTSW AX                           ; 005739ee
    SAHF                                ; 005739f0
    JBE 0x00573a05                      ; 005739f1
        ;   XREF to: 00573a05 (CONDITIONAL_JUMP)  ; LAB_00573a05
    MOV EDX,0xd2f1a9fc                  ; 005739f3
    MOV ECX,0xbf50624d                  ; 005739f8
    MOV dword ptr [ESP + 0x30],EDX      ; 005739fd
    MOV dword ptr [ESP + 0x34],ECX      ; 00573a01
    FLD float ptr [ESP + 0x15c]         ; 00573a05
        ;   Label: LAB_00573a05
    FCOMP double ptr [ESP + 0x30]       ; 00573a0c
    FNSTSW AX                           ; 00573a10
    SAHF                                ; 00573a12
    JBE 0x0057365a                      ; 00573a13
        ;   XREF to: 0057365a (CONDITIONAL_JUMP)  ; LAB_0057365a
    FLD double ptr [ESP + 0x30]         ; 00573a19
    FLD double ptr [ESP + 0x28]         ; 00573a1d
    FLD double ptr [ESP + 0x38]         ; 00573a21
    FXCH ST2                            ; 00573a25
    FSTP float ptr [ESP + 0x15c]        ; 00573a27
    FCHS                                ; 00573a2e
    FXCH                                ; 00573a30
    FCHS                                ; 00573a32
    XOR ESI,ESI                         ; 00573a34
    FXCH                                ; 00573a36
    FSTP float ptr [ESP + 0x160]        ; 00573a38
    FSTP float ptr [ESP + 0x168]        ; 00573a3f
    MOV dword ptr [ESP + 0x164],ESI     ; 00573a46
    MOV dword ptr [EDI + 0x14d144],EBX  ; 00573a4d
    JMP 0x0057365a                      ; 00573a53
        ;   XREF to: 0057365a (UNCONDITIONAL_JUMP)  ; LAB_0057365a
    FLD double ptr [ESP + 0x28]         ; 00573a58
        ;   Label: LAB_00573a58
    FLD float ptr [ESP + 0x190]         ; 00573a5c
    FSTP double ptr [ESP + 0x58]        ; 00573a63
    FMUL double ptr [ESP + 0x58]        ; 00573a67
    FLD float ptr [ESP + 0x194]         ; 00573a6b
    FSTP double ptr [ESP + 0x60]        ; 00573a72
    FLD double ptr [ESP + 0x38]         ; 00573a76
    FMUL double ptr [ESP + 0x60]        ; 00573a7a
    FADDP                               ; 00573a7e
    FLDZ                                ; 00573a80
    FXCH                                ; 00573a82
    FSTP double ptr [ESP + 0x18]        ; 00573a84
    FCOMP double ptr [ESP + 0x18]       ; 00573a88
    FNSTSW AX                           ; 00573a8c
    SAHF                                ; 00573a8e
    JNC 0x0057365a                      ; 00573a8f
        ;   XREF to: 0057365a (CONDITIONAL_JUMP)  ; LAB_0057365a
    FLD double ptr [ESP + 0x18]         ; 00573a95
    FLD double ptr [ESP + 0x58]         ; 00573a99
    FMUL ST1                            ; 00573a9d
    FLD double ptr [ESP + 0x60]         ; 00573a9f
    FMULP ST2                           ; 00573aa3
    FLD float ptr [ESP + 0x16c]         ; 00573aa5
    FSTP double ptr [ESP + 0x10]        ; 00573aac
    FADD double ptr [ESP + 0x10]        ; 00573ab0
    FLD float ptr [ESP + 0x98]          ; 00573ab4
    FXCH                                ; 00573abb
    FSTP double ptr [ESP + 0x78]        ; 00573abd
    FSUB double ptr [ESP + 0x78]        ; 00573ac1
    FMUL ST0                            ; 00573ac5
    FLD float ptr [ESP + 0x170]         ; 00573ac7
    FSTP double ptr [ESP + 0x50]        ; 00573ace
    FXCH                                ; 00573ad2
    FADD double ptr [ESP + 0x50]        ; 00573ad4
    FLD float ptr [ESP + 0x9c]          ; 00573ad8
    FXCH                                ; 00573adf
    FSTP double ptr [ESP + 0x68]        ; 00573ae1
    FSUB double ptr [ESP + 0x68]        ; 00573ae5
    FMUL ST0                            ; 00573ae9
    FADDP                               ; 00573aeb
    FST double ptr [ESP + 0x70]         ; 00573aed
    FCOMP double ptr [ESP + 0x8]        ; 00573af1
    FNSTSW AX                           ; 00573af5
    SAHF                                ; 00573af7
    JNC 0x0057365a                      ; 00573af8
        ;   XREF to: 0057365a (CONDITIONAL_JUMP)  ; LAB_0057365a
    FLD float ptr [ESP + 0x174]         ; 00573afe
    FST double ptr [ESP + 0x90]         ; 00573b05
    FABS                                ; 00573b0c
    FLD double ptr [ESP + 0x8]          ; 00573b0e
    FSUB double ptr [ESP + 0x70]        ; 00573b12
    FSQRT                               ; 00573b16
    FLD float ptr [ESP + 0x178]         ; 00573b18
    FST double ptr [ESP + 0x88]         ; 00573b1f
    FABS                                ; 00573b26
    FLD double ptr [ESP + 0x58]         ; 00573b28
    FMUL ST2                            ; 00573b2c
    FLD double ptr [ESP + 0x60]         ; 00573b2e
    FMULP ST3                           ; 00573b32
    FLD double ptr [ESP + 0x68]         ; 00573b34
    FLD double ptr [ESP + 0x78]         ; 00573b38
    FSUBRP ST2,ST0                      ; 00573b3c
    FSUBRP ST3,ST0                      ; 00573b3e
    FSTP double ptr [ESP]               ; 00573b40
    FXCH                                ; 00573b43
    FSTP double ptr [ESP + 0x40]        ; 00573b45
    FCOMPP                              ; 00573b49
    FNSTSW AX                           ; 00573b4b
    SAHF                                ; 00573b4d
    JNC 0x00573be0                      ; 00573b4e
        ;   XREF to: 00573be0 (CONDITIONAL_JUMP)  ; LAB_00573be0
    FLD double ptr [ESP]                ; 00573b54
    FSUB double ptr [ESP + 0x10]        ; 00573b57
    FDIV double ptr [ESP + 0x90]        ; 00573b5b
    FSTP double ptr [ESP + 0x48]        ; 00573b62
        ;   Label: LAB_00573b62
    FLDZ                                ; 00573b66
    FCOMP double ptr [ESP + 0x48]       ; 00573b68
    FNSTSW AX                           ; 00573b6c
    SAHF                                ; 00573b6e
    JA 0x0057365a                       ; 00573b6f
        ;   XREF to: 0057365a (CONDITIONAL_JUMP)  ; LAB_0057365a
    FLD float ptr [ESP + 0x15c]         ; 00573b75
    FCOMP double ptr [ESP + 0x48]       ; 00573b7c
    FNSTSW AX                           ; 00573b80
    SAHF                                ; 00573b82
    JBE 0x0057365a                      ; 00573b83
        ;   XREF to: 0057365a (CONDITIONAL_JUMP)  ; LAB_0057365a
    FLD1                                ; 00573b89
    FCOMP double ptr [ESP + 0x48]       ; 00573b8b
    FNSTSW AX                           ; 00573b8f
    SAHF                                ; 00573b91
    JC 0x0057365a                       ; 00573b92
        ;   XREF to: 0057365a (CONDITIONAL_JUMP)  ; LAB_0057365a
    FLD double ptr [ESP + 0x48]         ; 00573b98
    FLD float ptr [ESP + 0x98]          ; 00573b9c
    FLD float ptr [ESP + 0x9c]          ; 00573ba3
    FXCH ST2                            ; 00573baa
    FSTP float ptr [ESP + 0x15c]        ; 00573bac
    XOR EAX,EAX                         ; 00573bb3
    FSUBR double ptr [ESP]              ; 00573bb5
    FXCH                                ; 00573bb8
    FSUBR double ptr [ESP + 0x40]       ; 00573bba
    MOV dword ptr [ESP + 0x164],EAX     ; 00573bbe
    FXCH                                ; 00573bc5
    FSTP float ptr [ESP + 0x160]        ; 00573bc7
    FSTP float ptr [ESP + 0x168]        ; 00573bce
    MOV dword ptr [EDI + 0x14d144],EBX  ; 00573bd5
    JMP 0x0057365a                      ; 00573bdb
        ;   XREF to: 0057365a (UNCONDITIONAL_JUMP)  ; LAB_0057365a
    FLD double ptr [ESP + 0x40]         ; 00573be0
        ;   Label: LAB_00573be0
    FSUB double ptr [ESP + 0x50]        ; 00573be4
    FDIV double ptr [ESP + 0x88]        ; 00573be8
    JMP 0x00573b62                      ; 00573bef
        ;   XREF to: 00573b62 (UNCONDITIONAL_JUMP)  ; LAB_00573b62
    MOV EAX,dword ptr [ESP + 0x16c]     ; 00573bf4
        ;   Label: LAB_00573bf4
    MOV dword ptr [ESP + 0x240],EAX     ; 00573bfb
    MOV EAX,dword ptr [ESP + 0x170]     ; 00573c02
    MOV dword ptr [ESP + 0x248],EAX     ; 00573c09
    LEA EAX,[ESP + 0x240]               ; 00573c10
    PUSH EAX                            ; 00573c17
    LEA EAX,[ESP + 0x22c]               ; 00573c18
    PUSH EAX                            ; 00573c1f
    PUSH EBX                            ; 00573c20
    MOV dword ptr [ESP + 0x250],EDX     ; 00573c21
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 00573c28
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 00573c2d
    MOV EAX,dword ptr [ESP + 0x174]     ; 00573c30
    MOV dword ptr [ESP + 0x234],EAX     ; 00573c37
    MOV EAX,dword ptr [ESP + 0x178]     ; 00573c3e
    MOV dword ptr [ESP + 0x23c],EAX     ; 00573c45
    LEA EAX,[ESP + 0x234]               ; 00573c4c
    PUSH EAX                            ; 00573c53
    LEA EAX,[ESP + 0x250]               ; 00573c54
    PUSH EAX                            ; 00573c5b
    XOR ESI,ESI                         ; 00573c5c
    PUSH EBX                            ; 00573c5e
    MOV dword ptr [ESP + 0x244],ESI     ; 00573c5f
    CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0 ; 00573c66
        ;   XREF to: 00408ea0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0(CDemonActor * this_ptr, CVector3f * output_vector, CVector3f * input_vector)
    ADD ESP,0xc                         ; 00573c6b
    FLD float ptr [EBP + 0x30]          ; 00573c6e
    SUB ESP,0x4                         ; 00573c71
    FSUB float ptr [EBX + 0x24]         ; 00573c74
    FLD float ptr [EBP + 0x2c]          ; 00573c77
    FXCH                                ; 00573c7a
    FSTP float ptr [ESP]                ; 00573c7c
    FSUB float ptr [EBX + 0x24]         ; 00573c7f
    SUB ESP,0x4                         ; 00573c82
    FSTP float ptr [ESP]                ; 00573c85
    PUSH dword ptr [EBP + 0x28]         ; 00573c88
    PUSH dword ptr [ESP + 0x260]        ; 00573c8b
    PUSH dword ptr [ESP + 0x25c]        ; 00573c92
    PUSH dword ptr [ESP + 0x244]        ; 00573c99
    LEA EAX,[ESP + 0x118]               ; 00573ca0
    PUSH dword ptr [ESP + 0x240]        ; 00573ca7
    PUSH EAX                            ; 00573cae
    CALL core_dtrace.cpp_initCapsuleCollisionData_FUN_00496b90 ; 00573caf
        ;   XREF to: 00496b90 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_initCapsuleCollisionData_FUN_00496b90(SCapsuleCollision * out_data, float start_x, float start_z, float dir_x, ...)
    ADD ESP,0x20                        ; 00573cb4
    MOV EAX,dword ptr [ESP + 0x15c]     ; 00573cb7
    MOV dword ptr [ESP + 0x100],EAX     ; 00573cbe
    LEA EAX,[ESP + 0x100]               ; 00573cc5
    PUSH EAX                            ; 00573ccc
    MOV ESI,dword ptr [EBX + 0x154]     ; 00573ccd
    PUSH EBX                            ; 00573cd3
    CALL dword ptr [ESI + 0xb4]         ; 00573cd4
    ADD ESP,0x8                         ; 00573cda
    FLD float ptr [ESP + 0x100]         ; 00573cdd
    FCOMP float ptr [ESP + 0x15c]       ; 00573ce4
    FNSTSW AX                           ; 00573ceb
    SAHF                                ; 00573ced
    JNC 0x0057365a                      ; 00573cee
        ;   XREF to: 0057365a (CONDITIONAL_JUMP)  ; LAB_0057365a
    MOV EAX,dword ptr [ESP + 0x100]     ; 00573cf4
    MOV dword ptr [ESP + 0x15c],EAX     ; 00573cfb
    LEA EAX,[ESP + 0x104]               ; 00573d02
    PUSH EAX                            ; 00573d09
    LEA EAX,[ESP + 0x25c]               ; 00573d0a
    PUSH EAX                            ; 00573d11
    PUSH EBX                            ; 00573d12
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 00573d13
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    MOV ESI,EAX                         ; 00573d18
    LEA EAX,[ESP + 0x16c]               ; 00573d1a
    ADD ESP,0xc                         ; 00573d21
    CMP EAX,ESI                         ; 00573d24
    JZ 0x00573d45                       ; 00573d26
        ;   XREF to: 00573d45 (CONDITIONAL_JUMP)  ; LAB_00573d45
    MOV EAX,dword ptr [ESI]             ; 00573d28
    MOV dword ptr [ESP + 0x160],EAX     ; 00573d2a
    MOV EAX,dword ptr [ESI + 0x4]       ; 00573d31
    MOV dword ptr [ESP + 0x164],EAX     ; 00573d34
    MOV EAX,dword ptr [ESI + 0x8]       ; 00573d3b
    MOV dword ptr [ESP + 0x168],EAX     ; 00573d3e
    MOV dword ptr [EDI + 0x14d144],EBX  ; 00573d45
        ;   Label: LAB_00573d45
    JMP 0x0057365a                      ; 00573d4b
        ;   XREF to: 0057365a (UNCONDITIONAL_JUMP)  ; LAB_0057365a
    CMP ESI,0x2                         ; 00573d50
        ;   Label: LAB_00573d50
    JNC 0x00573d60                      ; 00573d53
        ;   XREF to: 00573d60 (CONDITIONAL_JUMP)  ; LAB_00573d60
    CMP ESI,0x1                         ; 00573d55
    JZ 0x005738cb                       ; 00573d58
        ;   XREF to: 005738cb (CONDITIONAL_JUMP)  ; LAB_005738cb
    JMP 0x00573d6f                      ; 00573d5e
        ;   XREF to: 00573d6f (UNCONDITIONAL_JUMP)  ; LAB_00573d6f
    JBE 0x0057390d                      ; 00573d60
        ;   XREF to: 0057390d (CONDITIONAL_JUMP)  ; LAB_0057390d
        ;   Label: LAB_00573d60
    CMP ESI,0x3                         ; 00573d66
    JZ 0x00573bf4                       ; 00573d69
        ;   XREF to: 00573bf4 (CONDITIONAL_JUMP)  ; LAB_00573bf4
    MOV EAX,0x6462c7                    ; 00573d6f | = "..\\core\\setcolid.cpp"
        ;   Label: LAB_00573d6f
    MOV EDX,0x3f1                       ; 00573d74
    PUSH 0x6462dc                       ; 00573d79 | = "Invalid collision type!"
    MOV [0x02f0ca48],EAX                ; 00573d7e | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00573d83 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00573d89
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00573d8e
    JMP 0x0057365a                      ; 00573d91
        ;   XREF to: 0057365a (UNCONDITIONAL_JUMP)  ; LAB_0057365a
    FLD1                                ; 00573d96
        ;   Label: LAB_00573d96
    FLD float ptr [ESP + 0x160]         ; 00573d98
    FXCH                                ; 00573d9f
    FDIV float ptr [ESP + 0xa0]         ; 00573da1
    FXCH                                ; 00573da8
    FMUL ST1                            ; 00573daa
    FLD float ptr [ESP + 0x164]         ; 00573dac
    FMUL ST2                            ; 00573db3
    FLD float ptr [ESP + 0x168]         ; 00573db5
    FMULP ST3                           ; 00573dbc
    FXCH                                ; 00573dbe
    FSTP float ptr [ESP + 0x160]        ; 00573dc0
    FSTP float ptr [ESP + 0x164]        ; 00573dc7
    FSTP float ptr [ESP + 0x168]        ; 00573dce
    JMP 0x005736e0                      ; 00573dd5
        ;   XREF to: 005736e0 (UNCONDITIONAL_JUMP)  ; LAB_005736e0
    MOV EAX,dword ptr [ESP + 0x160]     ; 00573dda
        ;   Label: LAB_00573dda
    MOV dword ptr [EDI],EAX             ; 00573de1
    MOV EAX,dword ptr [ESP + 0x164]     ; 00573de3
    MOV dword ptr [EDI + 0x4],EAX       ; 00573dea
    MOV EAX,dword ptr [ESP + 0x168]     ; 00573ded
    MOV dword ptr [EDI + 0x8],EAX       ; 00573df4
    MOV EAX,dword ptr [ESP + 0x15c]     ; 00573df7
    MOV ESP,EBP                         ; 00573dfe
    POP EBP                             ; 00573e00
    POP EDI                             ; 00573e01
    POP ESI                             ; 00573e02
    POP EBX                             ; 00573e03
    RET                                 ; 00573e04

