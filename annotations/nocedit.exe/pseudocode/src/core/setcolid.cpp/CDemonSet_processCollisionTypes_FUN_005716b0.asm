; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float __cdecl core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0 (CDemonSet *this_ptr,CVector3f *position,float radius)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; float            Stack[0xc]:4   radius
; Local Variables:
; undefined4       Stack[-0x158]:4  local_158
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[7]:
;   core_actor.cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0 at 00408e0f
;   core_actor.cpp_CDemonActor_processFootstepAt_FUN_0040c8f0 at 0040c981
;   core_actor.cpp_CDemonActor_processFootstep_FUN_0040c830 at 0040c8ab
;   core_fire.cpp_CCrater_FUN_004c4200 at 004c4255
;   core_gore.cpp_FUN_004ed0d0 at 004ed0fb
;   core_msnedit.cpp_CDemonMission_FUN_0053c8d0 at 0053c8fe
;   core_stranger.cpp_CStranger_FUN_005c2850 at 005c2e86
;
; Referenced Globals:
;   TerminatedCString s_core_setcolid_cpp_006461b6
;   TerminatedCString s_info_keyFramedModelInsta_006461cb
;   TerminatedCString s_core_setcolid_cpp_00646217
;   TerminatedCString s_Invalid_collision_type_0064622c
;   float FLOAT_00646246 = 2
;   float FLOAT_0064624a = -10
;   WatcomTypeInfo g_CVectorTypeInfo
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   CDemonRaytrace g_CDemonRaytraceInstance
;   undefined4 g_CSpikeClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_getWorldBoundingBox_FUN_00409270
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_box.cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010
;   core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
;   core_dmodel.cpp_CKeyFramedModel_getFloorHeight_FUN_00478740
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   core_dtrace.cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00496950
;   core_dtrace.cpp_CDemonRaytrace_getGroundHeight_FUN_004966f0
;   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
;   core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_00572e20
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005716b0
        ;   Label: core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0
    PUSH ESI                            ; 005716b1
    PUSH EDI                            ; 005716b2
    PUSH EBP                            ; 005716b3
    SUB ESP,0x2f8                       ; 005716b4
    MOV EBX,dword ptr [ESP + 0x310]     ; 005716ba
    FLD float ptr [ESP + 0x314]         ; 005716c1
    MOV ESI,dword ptr [ESP + 0x30c]     ; 005716c8
    MOV EDX,dword ptr [ESP + 0x30c]     ; 005716cf
    FLDZ                                ; 005716d6
    ADD ESI,0x14d134                    ; 005716d8
    ADD EDX,0x14d128                    ; 005716de
    FCOMPP                              ; 005716e4
    FNSTSW AX                           ; 005716e6
    SAHF                                ; 005716e8
    JC 0x00571945                       ; 005716e9
        ;   XREF to: 00571945 (CONDITIONAL_JUMP)  ; LAB_00571945
    PUSH EDX                            ; 005716ef
    PUSH ESI                            ; 005716f0
    PUSH EBX                            ; 005716f1
    PUSH 0x3277d14                      ; 005716f2 | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_CDemonRaytrace_getGroundHeight_FUN_004966f0 ; 005716f7
        ;   XREF to: 004966f0 (UNCONDITIONAL_CALL)  ; float core_dtrace.cpp_CDemonRaytrace_getGroundHeight_FUN_004966f0(CDemonRaytrace * this_ptr, CVector3f * pos, int * hit_flag, CVector3f * normal_out)
    MOV dword ptr [ESP + 0x304],EAX     ; 005716fc
    FLD float ptr [ESP + 0x304]         ; 00571703
    ADD ESP,0x10                        ; 0057170a
    FSTP float ptr [ESP + 0x2e0]        ; 0057170d
        ;   Label: LAB_0057170d
    MOV EAX,dword ptr [ESP + 0x30c]     ; 00571714
    CMP dword ptr [EAX + 0x14d134],0x0  ; 0057171b
    JNZ 0x00571737                      ; 00571722
        ;   XREF to: 00571737 (CONDITIONAL_JUMP)  ; LAB_00571737
    MOV EDX,dword ptr [ESP + 0x30c]     ; 00571724
    MOV EAX,dword ptr [EAX + 0x15f67c]  ; 0057172b
    MOV dword ptr [EDX + 0x14d134],EAX  ; 00571731
    LEA EAX,[ESP + 0x220]               ; 00571737
        ;   Label: LAB_00571737
    CMP EAX,EBX                         ; 0057173e
    JZ 0x0057175f                       ; 00571740
        ;   XREF to: 0057175f (CONDITIONAL_JUMP)  ; LAB_0057175f
    MOV EAX,dword ptr [EBX]             ; 00571742
    MOV dword ptr [ESP + 0x220],EAX     ; 00571744
    MOV EAX,dword ptr [EBX + 0x4]       ; 0057174b
    MOV dword ptr [ESP + 0x224],EAX     ; 0057174e
    MOV EAX,dword ptr [EBX + 0x8]       ; 00571755
    MOV dword ptr [ESP + 0x228],EAX     ; 00571758
    FLD float ptr [ESP + 0x224]         ; 0057175f
        ;   Label: LAB_0057175f
    FADD float ptr [0x00646246]         ; 00571766 | FLOAT_00646246
    MOV EAX,dword ptr [ESP + 0x30c]     ; 0057176c
    FSTP float ptr [ESP + 0x224]        ; 00571773
    MOV dword ptr [EAX + 0x14d144],0x0  ; 0057177a
    MOV dword ptr [EAX + 0x14d148],0xffffffff ; 00571784
    MOV ECX,dword ptr [EAX + 0x15f694]  ; 0057178e
    MOV dword ptr [EAX + 0x14d14c],0xffffffff ; 00571794
    TEST ECX,ECX                        ; 0057179e
    JL 0x00571933                       ; 005717a0
        ;   XREF to: 00571933 (CONDITIONAL_JUMP)  ; LAB_00571933
    LEA EDX,[ESP + 0x214]               ; 005717a6
    LEA EAX,[ESP + 0x220]               ; 005717ad
    CMP EDX,EAX                         ; 005717b4
    JZ 0x005717e2                       ; 005717b6
        ;   XREF to: 005717e2 (CONDITIONAL_JUMP)  ; LAB_005717e2
    MOV EAX,dword ptr [ESP + 0x220]     ; 005717b8
    MOV dword ptr [ESP + 0x214],EAX     ; 005717bf
    MOV EAX,dword ptr [ESP + 0x224]     ; 005717c6
    MOV dword ptr [ESP + 0x218],EAX     ; 005717cd
    MOV EAX,dword ptr [ESP + 0x228]     ; 005717d4
    MOV dword ptr [ESP + 0x21c],EAX     ; 005717db
    FLD float ptr [ESP + 0x208]         ; 005717e2
        ;   Label: LAB_005717e2
    FLD float ptr [ESP + 0x210]         ; 005717e9
    FLD float ptr [ESP + 0x214]         ; 005717f0
    FLD float ptr [ESP + 0x21c]         ; 005717f7
    LEA EAX,[ESP + 0x214]               ; 005717fe
    LEA EDX,[ESP + 0x208]               ; 00571805
    FXCH ST3                            ; 0057180c
    FLD float ptr [ESP + 0x314]         ; 0057180e
    FXCH                                ; 00571815
    FSUB ST0,ST1                        ; 00571817
    FXCH ST3                            ; 00571819
    FSUB ST0,ST1                        ; 0057181b
    FXCH ST2                            ; 0057181d
    FADD ST0,ST1                        ; 0057181f
    FXCH ST4                            ; 00571821
    FADDP                               ; 00571823
    FXCH                                ; 00571825
    FSTP float ptr [ESP + 0x210]        ; 00571827
    FXCH ST2                            ; 0057182e
    FSTP float ptr [ESP + 0x214]        ; 00571830
    FXCH                                ; 00571837
    FSTP float ptr [ESP + 0x21c]        ; 00571839
    FSTP float ptr [ESP + 0x208]        ; 00571840
    CMP EDX,EAX                         ; 00571847
    JZ 0x00571875                       ; 00571849
        ;   XREF to: 00571875 (CONDITIONAL_JUMP)  ; LAB_00571875
    MOV EAX,dword ptr [ESP + 0x214]     ; 0057184b
    MOV dword ptr [ESP + 0x208],EAX     ; 00571852
    MOV EAX,dword ptr [ESP + 0x218]     ; 00571859
    MOV dword ptr [ESP + 0x20c],EAX     ; 00571860
    MOV EAX,dword ptr [ESP + 0x21c]     ; 00571867
    MOV dword ptr [ESP + 0x210],EAX     ; 0057186e
    FLD float ptr [ESP + 0x20c]         ; 00571875
        ;   Label: LAB_00571875
    LEA EAX,[ESP + 0x1b0]               ; 0057187c
    FADD float ptr [0x0064624a]         ; 00571883 | FLOAT_0064624a
    PUSH EAX                            ; 00571889
    FSTP float ptr [ESP + 0x210]        ; 0057188a
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0 ; 00571891
        ;   XREF to: 005743c0 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 00571896
    XOR EBX,EBX                         ; 00571899
    MOV EAX,dword ptr [ESP + 0x30c]     ; 0057189b
    MOV dword ptr [ESP + 0x1b0],EBX     ; 005718a2
    MOV EDI,dword ptr [EAX + 0x156da8]  ; 005718a9
    MOV dword ptr [ESP + 0x2ec],EBX     ; 005718af
    TEST EDI,EDI                        ; 005718b6
    JLE 0x0057191e                      ; 005718b8
        ;   XREF to: 0057191e (CONDITIONAL_JUMP)  ; LAB_0057191e
    LEA EBP,[EAX + 0x14d128]            ; 005718ba
    MOV dword ptr [ESP + 0x2f0],EAX     ; 005718c0
    MOV EDI,dword ptr [ESP + 0x2f0]     ; 005718c7
        ;   Label: LAB_005718c7
    MOV EDI,dword ptr [EDI + 0x156dac]  ; 005718ce
    PUSH EDI                            ; 005718d4
    MOV ESI,dword ptr [ESP + 0x310]     ; 005718d5
    PUSH ESI                            ; 005718dc
    CALL core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_00572e20 ; 005718dd
        ;   XREF to: 00572e20 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_00572e20(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005718e2
    TEST EAX,EAX                        ; 005718e5
    JZ 0x0057196f                       ; 005718e7
        ;   XREF to: 0057196f (CONDITIONAL_JUMP)  ; LAB_0057196f
    MOV EAX,dword ptr [ESP + 0x2f0]     ; 005718ed
        ;   Label: LAB_005718ed
    MOV EDX,dword ptr [ESP + 0x2ec]     ; 005718f4
    ADD EAX,0x4                         ; 005718fb
    INC EDX                             ; 005718fe
    MOV dword ptr [ESP + 0x2f0],EAX     ; 005718ff
    MOV dword ptr [ESP + 0x2ec],EDX     ; 00571906
    MOV EAX,EDX                         ; 0057190d
    MOV EDX,dword ptr [ESP + 0x30c]     ; 0057190f
    CMP EAX,dword ptr [EDX + 0x156da8]  ; 00571916
    JL 0x005718c7                       ; 0057191c
        ;   XREF to: 005718c7 (CONDITIONAL_JUMP)  ; LAB_005718c7
    MOV EAX,dword ptr [ESP + 0x30c]     ; 0057191e
        ;   Label: LAB_0057191e
    MOV EBX,dword ptr [EAX + 0x14d144]  ; 00571925
    TEST EBX,EBX                        ; 0057192b
    JNZ 0x00572314                      ; 0057192d
        ;   XREF to: 00572314 (CONDITIONAL_JUMP)  ; LAB_00572314
    MOV EAX,dword ptr [ESP + 0x2e0]     ; 00571933
        ;   Label: LAB_00571933
    ADD ESP,0x2f8                       ; 0057193a
    POP EBP                             ; 00571940
    POP EDI                             ; 00571941
    POP ESI                             ; 00571942
    POP EBX                             ; 00571943
    RET                                 ; 00571944
    PUSH EDX                            ; 00571945
        ;   Label: LAB_00571945
    PUSH ESI                            ; 00571946
    PUSH dword ptr [ESP + 0x31c]        ; 00571947
    PUSH EBX                            ; 0057194e
    PUSH 0x3277d14                      ; 0057194f | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00496950 ; 00571954
        ;   XREF to: 00496950 (UNCONDITIONAL_CALL)  ; float core_dtrace.cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00496950(CDemonRaytrace * this_ptr, CVector3f * pos, float radius, int * hit_flag, ...)
    MOV dword ptr [ESP + 0x308],EAX     ; 00571959
    FLD float ptr [ESP + 0x308]         ; 00571960
    ADD ESP,0x14                        ; 00571967
    JMP 0x0057170d                      ; 0057196a
        ;   XREF to: 0057170d (UNCONDITIONAL_JUMP)  ; LAB_0057170d
    MOV EAX,[0x03f6b9dc]                ; 0057196f | g_CSpikeClassInfo.name_hash
        ;   Label: LAB_0057196f
    PUSH EAX                            ; 00571974
    PUSH EDI                            ; 00571975
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 00571976
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0057197b
    TEST EAX,EAX                        ; 0057197e
    JNZ 0x005718ed                      ; 00571980
        ;   XREF to: 005718ed (CONDITIONAL_JUMP)  ; LAB_005718ed
    MOV dword ptr [ESP + 0x1d0],EAX     ; 00571986
    MOV dword ptr [ESP + 0x1d4],EAX     ; 0057198d
    LEA EAX,[ESP + 0x1b0]               ; 00571994
    PUSH EAX                            ; 0057199b
    MOV EDX,dword ptr [EDI + 0x154]     ; 0057199c
    PUSH EDI                            ; 005719a2
    CALL dword ptr [EDX + 0x34]         ; 005719a3
    ADD ESP,0x8                         ; 005719a6
    MOV EBX,EAX                         ; 005719a9
    TEST EAX,EAX                        ; 005719ab
    JZ 0x005718ed                       ; 005719ad
        ;   XREF to: 005718ed (CONDITIONAL_JUMP)  ; LAB_005718ed
    PUSH EAX                            ; 005719b3
    LEA EAX,[ESP + 0x1b4]               ; 005719b4
    PUSH EAX                            ; 005719bb
    LEA EAX,[ESP + 0x1f8]               ; 005719bc
    PUSH EAX                            ; 005719c3
    PUSH EDI                            ; 005719c4
    CALL core_actor.cpp_CDemonActor_getWorldBoundingBox_FUN_00409270 ; 005719c5
        ;   XREF to: 00409270 (UNCONDITIONAL_CALL)  ; CBoundingBox3D * core_actor.cpp_CDemonActor_getWorldBoundingBox_FUN_00409270(CDemonActor * this_ptr, CBoundingBox3D * output_bbox, SCollisionInfo * collision_info, int bounding_box_type)
    ADD ESP,0x10                        ; 005719ca
    PUSH EAX                            ; 005719cd
    LEA EAX,[ESP + 0x20c]               ; 005719ce
    PUSH EAX                            ; 005719d5
    CALL core_box.cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010 ; 005719d6
        ;   XREF to: 00421010 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010(CBoundingBox3D * this_ptr, CBoundingBox3D * other)
    ADD ESP,0x8                         ; 005719db
    TEST EAX,EAX                        ; 005719de
    JZ 0x005718ed                       ; 005719e0
        ;   XREF to: 005718ed (CONDITIONAL_JUMP)  ; LAB_005718ed
    CMP dword ptr [ESI + 0x15f6dc],0x0  ; 005719e6
    JZ 0x005720f8                       ; 005719ed
        ;   XREF to: 005720f8 (CONDITIONAL_JUMP)  ; LAB_005720f8
    CMP EBX,0x2                         ; 005719f3
        ;   Label: LAB_005719f3
    JNC 0x005722dd                      ; 005719f6
        ;   XREF to: 005722dd (CONDITIONAL_JUMP)  ; LAB_005722dd
    CMP EBX,0x1                         ; 005719fc
    JNZ 0x005722ec                      ; 005719ff
        ;   XREF to: 005722ec (CONDITIONAL_JUMP)  ; LAB_005722ec
    PUSH 0x6598c0                       ; 00571a05 | g_CVectorTypeInfo
    PUSH 0x8                            ; 00571a0a
    LEA EAX,[ESP + 0x8]                 ; 00571a0c
    PUSH EAX                            ; 00571a10
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 00571a11
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00571a16
    LEA EDX,[ESP + 0x1d8]               ; 00571a19
    PUSH EDX                            ; 00571a20
    MOV EAX,dword ptr [EDI + 0x154]     ; 00571a21
    PUSH EDI                            ; 00571a27
    LEA EBX,[ESP + 0x8]                 ; 00571a28
    XOR ESI,ESI                         ; 00571a2c
    CALL dword ptr [EAX + 0x14]         ; 00571a2e
    ADD ESP,0x8                         ; 00571a31
    PUSH ESI                            ; 00571a34
        ;   Label: LAB_00571a34
    LEA EAX,[ESP + 0x29c]               ; 00571a35
    PUSH EAX                            ; 00571a3c
    LEA EAX,[ESP + 0x1e0]               ; 00571a3d
    PUSH EAX                            ; 00571a44
    CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0 ; 00571a45
        ;   XREF to: 004202b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0(CBoundingBox3D * this_ptr, CVector3f * out_point, uint corner_index)
    ADD ESP,0xc                         ; 00571a4a
    PUSH EAX                            ; 00571a4d
    LEA EAX,[ESP + 0x290]               ; 00571a4e
    PUSH EAX                            ; 00571a55
    PUSH EDI                            ; 00571a56
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00571a57
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00571a5c
    CMP EBX,EAX                         ; 00571a5f
    JZ 0x00571a73                       ; 00571a61
        ;   XREF to: 00571a73 (CONDITIONAL_JUMP)  ; LAB_00571a73
    MOV EDX,dword ptr [EAX]             ; 00571a63
    MOV dword ptr [EBX],EDX             ; 00571a65
    MOV EDX,dword ptr [EAX + 0x4]       ; 00571a67
    MOV dword ptr [EBX + 0x4],EDX       ; 00571a6a
    MOV EDX,dword ptr [EAX + 0x8]       ; 00571a6d
    MOV dword ptr [EBX + 0x8],EDX       ; 00571a70
    INC ESI                             ; 00571a73
        ;   Label: LAB_00571a73
    ADD EBX,0xc                         ; 00571a74
    CMP ESI,0x8                         ; 00571a77
    JL 0x00571a34                       ; 00571a7a
        ;   XREF to: 00571a34 (CONDITIONAL_JUMP)  ; LAB_00571a34
    LEA EAX,[ESP + 0x48]                ; 00571a7c
    PUSH EAX                            ; 00571a80
    LEA EAX,[ESP + 0x34]                ; 00571a81
    PUSH EAX                            ; 00571a85
    LEA EAX,[ESP + 0x8]                 ; 00571a86
    PUSH EAX                            ; 00571a8a
    LEA EAX,[ESP + 0xa4]                ; 00571a8b
    PUSH EAX                            ; 00571a92
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790 ; 00571a93
        ;   XREF to: 0049a790 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00571a98
    LEA EAX,[ESP + 0x2e0]               ; 00571a9b
    PUSH EAX                            ; 00571aa2
    LEA EAX,[ESP + 0x224]               ; 00571aa3
    PUSH dword ptr [ESP + 0x318]        ; 00571aaa
    PUSH EAX                            ; 00571ab1
    LEA EAX,[ESP + 0xa4]                ; 00571ab2
    PUSH EAX                            ; 00571ab9
    CALL core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0 ; 00571aba
        ;   XREF to: 0049b2f0 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0(CDemonTriangle * triangle, float x, float z, float * out_height)
    ADD ESP,0x10                        ; 00571abf
    MOV ESI,EAX                         ; 00571ac2
    LEA EAX,[ESP + 0x18]                ; 00571ac4
    PUSH EAX                            ; 00571ac8
    LEA EAX,[ESP + 0x4c]                ; 00571ac9
    PUSH EAX                            ; 00571acd
    LEA EAX,[ESP + 0x8]                 ; 00571ace
    PUSH EAX                            ; 00571ad2
    LEA EAX,[ESP + 0xa4]                ; 00571ad3
    PUSH EAX                            ; 00571ada
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790 ; 00571adb
        ;   XREF to: 0049a790 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00571ae0
    LEA EAX,[ESP + 0x2e0]               ; 00571ae3
    PUSH EAX                            ; 00571aea
    LEA EAX,[ESP + 0x224]               ; 00571aeb
    PUSH dword ptr [ESP + 0x318]        ; 00571af2
    PUSH EAX                            ; 00571af9
    LEA EAX,[ESP + 0xa4]                ; 00571afa
    PUSH EAX                            ; 00571b01
    XOR EBX,EBX                         ; 00571b02
    CALL core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0 ; 00571b04
        ;   XREF to: 0049b2f0 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0(CDemonTriangle * triangle, float x, float z, float * out_height)
    ADD ESP,0x10                        ; 00571b09
    OR ESI,EAX                          ; 00571b0c
    JZ 0x00571b86                       ; 00571b0e
        ;   XREF to: 00571b86 (CONDITIONAL_JUMP)  ; LAB_00571b86
    FLD float ptr [ESP + 0xbc]          ; 00571b10
    FLD float ptr [ESP + 0xc0]          ; 00571b17
    FLD float ptr [ESP + 0xc4]          ; 00571b1e
    LEA EAX,[ESP + 0x268]               ; 00571b25
    LEA EDX,[ESP + 0x2a4]               ; 00571b2c
    FXCH ST2                            ; 00571b33
    FCHS                                ; 00571b35
    FXCH                                ; 00571b37
    FCHS                                ; 00571b39
    FXCH ST2                            ; 00571b3b
    FCHS                                ; 00571b3d
    FXCH ST2                            ; 00571b3f
    FSTP float ptr [ESP + 0x26c]        ; 00571b41
    FXCH                                ; 00571b48
    FSTP float ptr [ESP + 0x270]        ; 00571b4a
    FSTP float ptr [ESP + 0x268]        ; 00571b51
    CMP EDX,EAX                         ; 00571b58
    JZ 0x00571b86                       ; 00571b5a
        ;   XREF to: 00571b86 (CONDITIONAL_JUMP)  ; LAB_00571b86
    MOV EAX,dword ptr [ESP + 0x268]     ; 00571b5c
    MOV dword ptr [ESP + 0x2a4],EAX     ; 00571b63
    MOV EAX,dword ptr [ESP + 0x26c]     ; 00571b6a
    MOV dword ptr [ESP + 0x2a8],EAX     ; 00571b71
    MOV EAX,dword ptr [ESP + 0x270]     ; 00571b78
    MOV dword ptr [ESP + 0x2ac],EAX     ; 00571b7f
    LEA EAX,[ESP + 0x54]                ; 00571b86
        ;   Label: LAB_00571b86
    PUSH EAX                            ; 00571b8a
    LEA EAX,[ESP + 0x28]                ; 00571b8b
    PUSH EAX                            ; 00571b8f
    LEA EAX,[ESP + 0x14]                ; 00571b90
    PUSH EAX                            ; 00571b94
    LEA EAX,[ESP + 0x14c]               ; 00571b95
    PUSH EAX                            ; 00571b9c
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790 ; 00571b9d
        ;   XREF to: 0049a790 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00571ba2
    LEA EAX,[ESP + 0x2e0]               ; 00571ba5
    PUSH EAX                            ; 00571bac
    LEA EAX,[ESP + 0x224]               ; 00571bad
    PUSH dword ptr [ESP + 0x318]        ; 00571bb4
    PUSH EAX                            ; 00571bbb
    LEA EAX,[ESP + 0x14c]               ; 00571bbc
    PUSH EAX                            ; 00571bc3
    OR EBX,ESI                          ; 00571bc4
    CALL core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0 ; 00571bc6
        ;   XREF to: 0049b2f0 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0(CDemonTriangle * triangle, float x, float z, float * out_height)
    ADD ESP,0x10                        ; 00571bcb
    MOV ESI,EAX                         ; 00571bce
    LEA EAX,[ESP + 0x3c]                ; 00571bd0
    PUSH EAX                            ; 00571bd4
    LEA EAX,[ESP + 0x58]                ; 00571bd5
    PUSH EAX                            ; 00571bd9
    LEA EAX,[ESP + 0x14]                ; 00571bda
    PUSH EAX                            ; 00571bde
    LEA EAX,[ESP + 0x14c]               ; 00571bdf
    PUSH EAX                            ; 00571be6
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790 ; 00571be7
        ;   XREF to: 0049a790 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00571bec
    LEA EAX,[ESP + 0x2e0]               ; 00571bef
    PUSH EAX                            ; 00571bf6
    LEA EAX,[ESP + 0x224]               ; 00571bf7
    PUSH dword ptr [ESP + 0x318]        ; 00571bfe
    PUSH EAX                            ; 00571c05
    LEA EAX,[ESP + 0x14c]               ; 00571c06
    PUSH EAX                            ; 00571c0d
    CALL core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0 ; 00571c0e
        ;   XREF to: 0049b2f0 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0(CDemonTriangle * triangle, float x, float z, float * out_height)
    ADD ESP,0x10                        ; 00571c13
    OR ESI,EAX                          ; 00571c16
    JZ 0x00571c90                       ; 00571c18
        ;   XREF to: 00571c90 (CONDITIONAL_JUMP)  ; LAB_00571c90
    FLD float ptr [ESP + 0x164]         ; 00571c1a
    FLD float ptr [ESP + 0x168]         ; 00571c21
    FLD float ptr [ESP + 0x16c]         ; 00571c28
    LEA EAX,[ESP + 0x2c8]               ; 00571c2f
    LEA EDX,[ESP + 0x2a4]               ; 00571c36
    FXCH ST2                            ; 00571c3d
    FCHS                                ; 00571c3f
    FXCH                                ; 00571c41
    FCHS                                ; 00571c43
    FXCH ST2                            ; 00571c45
    FCHS                                ; 00571c47
    FXCH ST2                            ; 00571c49
    FSTP float ptr [ESP + 0x2cc]        ; 00571c4b
    FXCH                                ; 00571c52
    FSTP float ptr [ESP + 0x2d0]        ; 00571c54
    FSTP float ptr [ESP + 0x2c8]        ; 00571c5b
    CMP EDX,EAX                         ; 00571c62
    JZ 0x00571c90                       ; 00571c64
        ;   XREF to: 00571c90 (CONDITIONAL_JUMP)  ; LAB_00571c90
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 00571c66
    MOV dword ptr [ESP + 0x2a4],EAX     ; 00571c6d
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 00571c74
    MOV dword ptr [ESP + 0x2a8],EAX     ; 00571c7b
    MOV EAX,dword ptr [ESP + 0x2d0]     ; 00571c82
    MOV dword ptr [ESP + 0x2ac],EAX     ; 00571c89
    LEA EAX,[ESP + 0x3c]                ; 00571c90
        ;   Label: LAB_00571c90
    PUSH EAX                            ; 00571c94
    LEA EAX,[ESP + 0x10]                ; 00571c95
    PUSH EAX                            ; 00571c99
    LEA EAX,[ESP + 0x8]                 ; 00571c9a
    PUSH EAX                            ; 00571c9e
    LEA EAX,[ESP + 0x114]               ; 00571c9f
    PUSH EAX                            ; 00571ca6
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790 ; 00571ca7
        ;   XREF to: 0049a790 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00571cac
    LEA EAX,[ESP + 0x2e0]               ; 00571caf
    PUSH EAX                            ; 00571cb6
    LEA EAX,[ESP + 0x224]               ; 00571cb7
    PUSH dword ptr [ESP + 0x318]        ; 00571cbe
    PUSH EAX                            ; 00571cc5
    LEA EAX,[ESP + 0x114]               ; 00571cc6
    PUSH EAX                            ; 00571ccd
    OR EBX,ESI                          ; 00571cce
    CALL core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0 ; 00571cd0
        ;   XREF to: 0049b2f0 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0(CDemonTriangle * triangle, float x, float z, float * out_height)
    ADD ESP,0x10                        ; 00571cd5
    MOV ESI,EAX                         ; 00571cd8
    LEA EAX,[ESP + 0x30]                ; 00571cda
    PUSH EAX                            ; 00571cde
    LEA EAX,[ESP + 0x40]                ; 00571cdf
    PUSH EAX                            ; 00571ce3
    LEA EAX,[ESP + 0x8]                 ; 00571ce4
    PUSH EAX                            ; 00571ce8
    LEA EAX,[ESP + 0x114]               ; 00571ce9
    PUSH EAX                            ; 00571cf0
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790 ; 00571cf1
        ;   XREF to: 0049a790 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00571cf6
    LEA EAX,[ESP + 0x2e0]               ; 00571cf9
    PUSH EAX                            ; 00571d00
    LEA EAX,[ESP + 0x224]               ; 00571d01
    PUSH dword ptr [ESP + 0x318]        ; 00571d08
    PUSH EAX                            ; 00571d0f
    LEA EAX,[ESP + 0x114]               ; 00571d10
    PUSH EAX                            ; 00571d17
    CALL core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0 ; 00571d18
        ;   XREF to: 0049b2f0 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0(CDemonTriangle * triangle, float x, float z, float * out_height)
    ADD ESP,0x10                        ; 00571d1d
    OR ESI,EAX                          ; 00571d20
    JZ 0x00571d9a                       ; 00571d22
        ;   XREF to: 00571d9a (CONDITIONAL_JUMP)  ; LAB_00571d9a
    FLD float ptr [ESP + 0x12c]         ; 00571d24
    FLD float ptr [ESP + 0x130]         ; 00571d2b
    FLD float ptr [ESP + 0x134]         ; 00571d32
    LEA EAX,[ESP + 0x2d4]               ; 00571d39
    LEA EDX,[ESP + 0x2a4]               ; 00571d40
    FXCH ST2                            ; 00571d47
    FCHS                                ; 00571d49
    FXCH                                ; 00571d4b
    FCHS                                ; 00571d4d
    FXCH ST2                            ; 00571d4f
    FCHS                                ; 00571d51
    FXCH ST2                            ; 00571d53
    FSTP float ptr [ESP + 0x2d8]        ; 00571d55
    FXCH                                ; 00571d5c
    FSTP float ptr [ESP + 0x2dc]        ; 00571d5e
    FSTP float ptr [ESP + 0x2d4]        ; 00571d65
    CMP EDX,EAX                         ; 00571d6c
    JZ 0x00571d9a                       ; 00571d6e
        ;   XREF to: 00571d9a (CONDITIONAL_JUMP)  ; LAB_00571d9a
    MOV EAX,dword ptr [ESP + 0x2d4]     ; 00571d70
    MOV dword ptr [ESP + 0x2a4],EAX     ; 00571d77
    MOV EAX,dword ptr [ESP + 0x2d8]     ; 00571d7e
    MOV dword ptr [ESP + 0x2a8],EAX     ; 00571d85
    MOV EAX,dword ptr [ESP + 0x2dc]     ; 00571d8c
    MOV dword ptr [ESP + 0x2ac],EAX     ; 00571d93
    LEA EAX,[ESP + 0x54]                ; 00571d9a
        ;   Label: LAB_00571d9a
    PUSH EAX                            ; 00571d9e
    LEA EAX,[ESP + 0x4c]                ; 00571d9f
    PUSH EAX                            ; 00571da3
    LEA EAX,[ESP + 0x20]                ; 00571da4
    PUSH EAX                            ; 00571da8
    LEA EAX,[ESP + 0x184]               ; 00571da9
    PUSH EAX                            ; 00571db0
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790 ; 00571db1
        ;   XREF to: 0049a790 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00571db6
    LEA EAX,[ESP + 0x2e0]               ; 00571db9
    PUSH EAX                            ; 00571dc0
    LEA EAX,[ESP + 0x224]               ; 00571dc1
    PUSH dword ptr [ESP + 0x318]        ; 00571dc8
    PUSH EAX                            ; 00571dcf
    LEA EAX,[ESP + 0x184]               ; 00571dd0
    PUSH EAX                            ; 00571dd7
    OR EBX,ESI                          ; 00571dd8
    CALL core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0 ; 00571dda
        ;   XREF to: 0049b2f0 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0(CDemonTriangle * triangle, float x, float z, float * out_height)
    ADD ESP,0x10                        ; 00571ddf
    MOV ESI,EAX                         ; 00571de2
    LEA EAX,[ESP + 0x24]                ; 00571de4
    PUSH EAX                            ; 00571de8
    LEA EAX,[ESP + 0x58]                ; 00571de9
    PUSH EAX                            ; 00571ded
    LEA EAX,[ESP + 0x20]                ; 00571dee
    PUSH EAX                            ; 00571df2
    LEA EAX,[ESP + 0x184]               ; 00571df3
    PUSH EAX                            ; 00571dfa
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790 ; 00571dfb
        ;   XREF to: 0049a790 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00571e00
    LEA EAX,[ESP + 0x2e0]               ; 00571e03
    PUSH EAX                            ; 00571e0a
    LEA EAX,[ESP + 0x224]               ; 00571e0b
    PUSH dword ptr [ESP + 0x318]        ; 00571e12
    PUSH EAX                            ; 00571e19
    LEA EAX,[ESP + 0x184]               ; 00571e1a
    PUSH EAX                            ; 00571e21
    CALL core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0 ; 00571e22
        ;   XREF to: 0049b2f0 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0(CDemonTriangle * triangle, float x, float z, float * out_height)
    ADD ESP,0x10                        ; 00571e27
    OR ESI,EAX                          ; 00571e2a
    JZ 0x00571ea4                       ; 00571e2c
        ;   XREF to: 00571ea4 (CONDITIONAL_JUMP)  ; LAB_00571ea4
    FLD float ptr [ESP + 0x19c]         ; 00571e2e
    FLD float ptr [ESP + 0x1a0]         ; 00571e35
    FLD float ptr [ESP + 0x1a4]         ; 00571e3c
    LEA EDX,[ESP + 0x22c]               ; 00571e43
    LEA EAX,[ESP + 0x2a4]               ; 00571e4a
    FXCH ST2                            ; 00571e51
    FCHS                                ; 00571e53
    FXCH                                ; 00571e55
    FCHS                                ; 00571e57
    FXCH ST2                            ; 00571e59
    FCHS                                ; 00571e5b
    FXCH ST2                            ; 00571e5d
    FSTP float ptr [ESP + 0x230]        ; 00571e5f
    FXCH                                ; 00571e66
    FSTP float ptr [ESP + 0x234]        ; 00571e68
    FSTP float ptr [ESP + 0x22c]        ; 00571e6f
    CMP EAX,EDX                         ; 00571e76
    JZ 0x00571ea4                       ; 00571e78
        ;   XREF to: 00571ea4 (CONDITIONAL_JUMP)  ; LAB_00571ea4
    MOV EAX,dword ptr [ESP + 0x22c]     ; 00571e7a
    MOV dword ptr [ESP + 0x2a4],EAX     ; 00571e81
    MOV EAX,dword ptr [ESP + 0x230]     ; 00571e88
    MOV dword ptr [ESP + 0x2a8],EAX     ; 00571e8f
    MOV EAX,dword ptr [ESP + 0x234]     ; 00571e96
    MOV dword ptr [ESP + 0x2ac],EAX     ; 00571e9d
    LEA EAX,[ESP + 0x24]                ; 00571ea4
        ;   Label: LAB_00571ea4
    PUSH EAX                            ; 00571ea8
    LEA EAX,[ESP + 0x1c]                ; 00571ea9
    PUSH EAX                            ; 00571ead
    LEA EAX,[ESP + 0x8]                 ; 00571eae
    PUSH EAX                            ; 00571eb2
    LEA EAX,[ESP + 0x6c]                ; 00571eb3
    PUSH EAX                            ; 00571eb7
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790 ; 00571eb8
        ;   XREF to: 0049a790 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00571ebd
    LEA EAX,[ESP + 0x2e0]               ; 00571ec0
    PUSH EAX                            ; 00571ec7
    LEA EAX,[ESP + 0x224]               ; 00571ec8
    PUSH dword ptr [ESP + 0x318]        ; 00571ecf
    PUSH EAX                            ; 00571ed6
    LEA EAX,[ESP + 0x6c]                ; 00571ed7
    PUSH EAX                            ; 00571edb
    OR EBX,ESI                          ; 00571edc
    CALL core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0 ; 00571ede
        ;   XREF to: 0049b2f0 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0(CDemonTriangle * triangle, float x, float z, float * out_height)
    ADD ESP,0x10                        ; 00571ee3
    MOV ESI,EAX                         ; 00571ee6
    LEA EAX,[ESP + 0xc]                 ; 00571ee8
    PUSH EAX                            ; 00571eec
    LEA EAX,[ESP + 0x28]                ; 00571eed
    PUSH EAX                            ; 00571ef1
    LEA EAX,[ESP + 0x8]                 ; 00571ef2
    PUSH EAX                            ; 00571ef6
    LEA EAX,[ESP + 0x6c]                ; 00571ef7
    PUSH EAX                            ; 00571efb
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790 ; 00571efc
        ;   XREF to: 0049a790 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00571f01
    LEA EAX,[ESP + 0x2e0]               ; 00571f04
    PUSH EAX                            ; 00571f0b
    LEA EAX,[ESP + 0x224]               ; 00571f0c
    PUSH dword ptr [ESP + 0x318]        ; 00571f13
    PUSH EAX                            ; 00571f1a
    LEA EAX,[ESP + 0x6c]                ; 00571f1b
    PUSH EAX                            ; 00571f1f
    CALL core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0 ; 00571f20
        ;   XREF to: 0049b2f0 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0(CDemonTriangle * triangle, float x, float z, float * out_height)
    ADD ESP,0x10                        ; 00571f25
    OR ESI,EAX                          ; 00571f28
    JZ 0x00571fa2                       ; 00571f2a
        ;   XREF to: 00571fa2 (CONDITIONAL_JUMP)  ; LAB_00571fa2
    FLD float ptr [ESP + 0x84]          ; 00571f2c
    FLD float ptr [ESP + 0x88]          ; 00571f33
    FLD float ptr [ESP + 0x8c]          ; 00571f3a
    LEA EDX,[ESP + 0x274]               ; 00571f41
    LEA EAX,[ESP + 0x2a4]               ; 00571f48
    FXCH ST2                            ; 00571f4f
    FCHS                                ; 00571f51
    FXCH                                ; 00571f53
    FCHS                                ; 00571f55
    FXCH ST2                            ; 00571f57
    FCHS                                ; 00571f59
    FXCH ST2                            ; 00571f5b
    FSTP float ptr [ESP + 0x278]        ; 00571f5d
    FXCH                                ; 00571f64
    FSTP float ptr [ESP + 0x27c]        ; 00571f66
    FSTP float ptr [ESP + 0x274]        ; 00571f6d
    CMP EAX,EDX                         ; 00571f74
    JZ 0x00571fa2                       ; 00571f76
        ;   XREF to: 00571fa2 (CONDITIONAL_JUMP)  ; LAB_00571fa2
    MOV EAX,dword ptr [ESP + 0x274]     ; 00571f78
    MOV dword ptr [ESP + 0x2a4],EAX     ; 00571f7f
    MOV EAX,dword ptr [ESP + 0x278]     ; 00571f86
    MOV dword ptr [ESP + 0x2a8],EAX     ; 00571f8d
    MOV EAX,dword ptr [ESP + 0x27c]     ; 00571f94
    MOV dword ptr [ESP + 0x2ac],EAX     ; 00571f9b
    LEA EAX,[ESP + 0x54]                ; 00571fa2
        ;   Label: LAB_00571fa2
    PUSH EAX                            ; 00571fa6
    LEA EAX,[ESP + 0x40]                ; 00571fa7
    PUSH EAX                            ; 00571fab
    LEA EAX,[ESP + 0x38]                ; 00571fac
    PUSH EAX                            ; 00571fb0
    LEA EAX,[ESP + 0xdc]                ; 00571fb1
    PUSH EAX                            ; 00571fb8
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790 ; 00571fb9
        ;   XREF to: 0049a790 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00571fbe
    LEA EAX,[ESP + 0x2e0]               ; 00571fc1
    PUSH EAX                            ; 00571fc8
    LEA EAX,[ESP + 0x224]               ; 00571fc9
    PUSH dword ptr [ESP + 0x318]        ; 00571fd0
    PUSH EAX                            ; 00571fd7
    LEA EAX,[ESP + 0xdc]                ; 00571fd8
    PUSH EAX                            ; 00571fdf
    OR EBX,ESI                          ; 00571fe0
    CALL core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0 ; 00571fe2
        ;   XREF to: 0049b2f0 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0(CDemonTriangle * triangle, float x, float z, float * out_height)
    ADD ESP,0x10                        ; 00571fe7
    MOV ESI,EAX                         ; 00571fea
    LEA EAX,[ESP + 0x48]                ; 00571fec
    PUSH EAX                            ; 00571ff0
    LEA EAX,[ESP + 0x58]                ; 00571ff1
    PUSH EAX                            ; 00571ff5
    LEA EAX,[ESP + 0x38]                ; 00571ff6
    PUSH EAX                            ; 00571ffa
    LEA EAX,[ESP + 0xdc]                ; 00571ffb
    PUSH EAX                            ; 00572002
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790 ; 00572003
        ;   XREF to: 0049a790 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00572008
    LEA EAX,[ESP + 0x2e0]               ; 0057200b
    PUSH EAX                            ; 00572012
    LEA EAX,[ESP + 0x224]               ; 00572013
    PUSH dword ptr [ESP + 0x318]        ; 0057201a
    PUSH EAX                            ; 00572021
    LEA EAX,[ESP + 0xdc]                ; 00572022
    PUSH EAX                            ; 00572029
    CALL core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0 ; 0057202a
        ;   XREF to: 0049b2f0 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0(CDemonTriangle * triangle, float x, float z, float * out_height)
    ADD ESP,0x10                        ; 0057202f
    OR ESI,EAX                          ; 00572032
    JZ 0x005720ac                       ; 00572034
        ;   XREF to: 005720ac (CONDITIONAL_JUMP)  ; LAB_005720ac
    FLD float ptr [ESP + 0xf4]          ; 00572036
    FLD float ptr [ESP + 0xf8]          ; 0057203d
    FLD float ptr [ESP + 0xfc]          ; 00572044
    LEA EDX,[ESP + 0x244]               ; 0057204b
    LEA EAX,[ESP + 0x2a4]               ; 00572052
    FXCH ST2                            ; 00572059
    FCHS                                ; 0057205b
    FXCH                                ; 0057205d
    FCHS                                ; 0057205f
    FXCH ST2                            ; 00572061
    FCHS                                ; 00572063
    FXCH ST2                            ; 00572065
    FSTP float ptr [ESP + 0x248]        ; 00572067
    FXCH                                ; 0057206e
    FSTP float ptr [ESP + 0x24c]        ; 00572070
    FSTP float ptr [ESP + 0x244]        ; 00572077
    CMP EAX,EDX                         ; 0057207e
    JZ 0x005720ac                       ; 00572080
        ;   XREF to: 005720ac (CONDITIONAL_JUMP)  ; LAB_005720ac
    MOV EAX,dword ptr [ESP + 0x244]     ; 00572082
    MOV dword ptr [ESP + 0x2a4],EAX     ; 00572089
    MOV EAX,dword ptr [ESP + 0x248]     ; 00572090
    MOV dword ptr [ESP + 0x2a8],EAX     ; 00572097
    MOV EAX,dword ptr [ESP + 0x24c]     ; 0057209e
    MOV dword ptr [ESP + 0x2ac],EAX     ; 005720a5
    OR EBX,ESI                          ; 005720ac
        ;   Label: LAB_005720ac
    JZ 0x005718ed                       ; 005720ae
        ;   XREF to: 005718ed (CONDITIONAL_JUMP)  ; LAB_005718ed
    MOV EAX,dword ptr [ESP + 0x30c]     ; 005720b4
    MOV dword ptr [EAX + 0x14d144],EDI  ; 005720bb
    LEA EAX,[ESP + 0x2a4]               ; 005720c1
    PUSH EAX                            ; 005720c8
    LEA EAX,[ESP + 0x254]               ; 005720c9
    PUSH EAX                            ; 005720d0
    PUSH EDI                            ; 005720d1
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 005720d2
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 005720d7
    CMP EBP,EAX                         ; 005720da
    JZ 0x005718ed                       ; 005720dc
        ;   XREF to: 005718ed (CONDITIONAL_JUMP)  ; LAB_005718ed
    MOV EDX,dword ptr [EAX]             ; 005720e2
    MOV dword ptr [EBP],EDX             ; 005720e4
    MOV EDX,dword ptr [EAX + 0x4]       ; 005720e7
    MOV dword ptr [EBP + 0x4],EDX       ; 005720ea
    MOV EDX,dword ptr [EAX + 0x8]       ; 005720ed
    MOV dword ptr [EBP + 0x8],EDX       ; 005720f0
    JMP 0x005718ed                      ; 005720f3
        ;   XREF to: 005718ed (UNCONDITIONAL_JUMP)  ; LAB_005718ed
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 005720f8
        ;   Label: LAB_005720f8
    TEST EAX,EAX                        ; 005720ff
    JZ 0x005719f3                       ; 00572101
        ;   XREF to: 005719f3 (CONDITIONAL_JUMP)  ; LAB_005719f3
    PUSH EAX                            ; 00572107
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 00572108
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0057210d
    MOV ECX,dword ptr [EAX + 0x5698]    ; 00572110
    MOV EBX,EAX                         ; 00572116
    TEST ECX,ECX                        ; 00572118
    JNZ 0x00572140                      ; 0057211a
        ;   XREF to: 00572140 (CONDITIONAL_JUMP)  ; LAB_00572140
    PUSH EAX                            ; 0057211c
    MOV ESI,0x6461b6                    ; 0057211d | = "..\\core\\setcolid.cpp"
    MOV EDX,0xcb                        ; 00572122
    PUSH 0x6461cb                       ; 00572127 | = "info.keyFramedModelInstancePtr != NUL..."
    MOV dword ptr [0x02f0ca48],ESI      ; 0057212c | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00572132 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00572138
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0057213d
    LEA EAX,[EDI + 0x20]                ; 00572140
        ;   Label: LAB_00572140
    FLD float ptr [ESP + 0x220]         ; 00572143
    FSUB float ptr [EAX]                ; 0057214a
    FLD float ptr [ESP + 0x224]         ; 0057214c
    FXCH                                ; 00572153
    FSTP float ptr [ESP + 0x2b0]        ; 00572155
    FSUB float ptr [EAX + 0x4]          ; 0057215c
    FLD float ptr [ESP + 0x228]         ; 0057215f
    FXCH                                ; 00572166
    FSTP float ptr [ESP + 0x2b4]        ; 00572168
    FSUB float ptr [EAX + 0x8]          ; 0057216f
    LEA EAX,[EDI + 0x30]                ; 00572172
    PUSH EAX                            ; 00572175
    LEA EAX,[ESP + 0x2e8]               ; 00572176
    PUSH EAX                            ; 0057217d
    PUSH dword ptr [ESP + 0x31c]        ; 0057217e
    LEA EAX,[ESP + 0x2bc]               ; 00572185
    FLD float ptr [ESP + 0x2ec]         ; 0057218c
    PUSH EAX                            ; 00572193
    FXCH                                ; 00572194
    FSTP float ptr [ESP + 0x2c8]        ; 00572196
    PUSH 0x0                            ; 0057219d
    FSUB float ptr [EDI + 0x24]         ; 0057219f
    PUSH EBX                            ; 005721a2
    FSTP float ptr [ESP + 0x2fc]        ; 005721a3
    CALL core_dmodel.cpp_CKeyFramedModel_getFloorHeight_FUN_00478740 ; 005721aa
        ;   XREF to: 00478740 (UNCONDITIONAL_CALL)  ; int core_dmodel.cpp_CKeyFramedModel_getFloorHeight_FUN_00478740(CKeyFramedModel * this_ptr, int frame_index, float x, float z, ...)
    ADD ESP,0x18                        ; 005721af
    TEST EAX,EAX                        ; 005721b2
    JZ 0x005718ed                       ; 005721b4
        ;   XREF to: 005718ed (CONDITIONAL_JUMP)  ; LAB_005718ed
    MOV EAX,dword ptr [ESP + 0x30c]     ; 005721ba
    MOV EBX,0x3f800000                  ; 005721c1
    MOV dword ptr [EAX + 0x14d144],EDI  ; 005721c6
    XOR ECX,ECX                         ; 005721cc
    FLD float ptr [ESP + 0x2e4]         ; 005721ce
    FADD float ptr [EDI + 0x24]         ; 005721d5
    LEA EAX,[ESP + 0x238]               ; 005721d8
    FSTP float ptr [ESP + 0x2e0]        ; 005721df
    MOV dword ptr [ESP + 0x238],ECX     ; 005721e6
    MOV dword ptr [ESP + 0x23c],EBX     ; 005721ed
    MOV dword ptr [ESP + 0x240],ECX     ; 005721f4
    CMP EBP,EAX                         ; 005721fb
    JZ 0x005718ed                       ; 005721fd
        ;   XREF to: 005718ed (CONDITIONAL_JUMP)  ; LAB_005718ed
    MOV dword ptr [EBP],ECX             ; 00572203
    MOV EAX,dword ptr [ESP + 0x23c]     ; 00572206
    MOV dword ptr [EBP + 0x4],EAX       ; 0057220d
    MOV EAX,dword ptr [ESP + 0x240]     ; 00572210
    MOV dword ptr [EBP + 0x8],EAX       ; 00572217
    JMP 0x005718ed                      ; 0057221a
        ;   XREF to: 005718ed (UNCONDITIONAL_JUMP)  ; LAB_005718ed
    LEA EAX,[ESP + 0x220]               ; 0057221f
        ;   Label: LAB_0057221f
    PUSH EAX                            ; 00572226
    LEA EAX,[ESP + 0x2c0]               ; 00572227
    PUSH EAX                            ; 0057222e
    PUSH EDI                            ; 0057222f
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 00572230
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 00572235
    LEA EAX,[ESP + 0x2e8]               ; 00572238
    PUSH EAX                            ; 0057223f
    FLD float ptr [ESP + 0x2e4]         ; 00572240
    PUSH dword ptr [ESP + 0x318]        ; 00572247
    LEA EAX,[ESP + 0x2c4]               ; 0057224e
    FSUB float ptr [EDI + 0x24]         ; 00572255
    PUSH EAX                            ; 00572258
    FSTP float ptr [ESP + 0x2f4]        ; 00572259
    MOV EDX,dword ptr [EDI + 0x154]     ; 00572260
    PUSH EDI                            ; 00572266
    CALL dword ptr [EDX + 0xb8]         ; 00572267
    ADD ESP,0x10                        ; 0057226d
    TEST EAX,EAX                        ; 00572270
    JZ 0x005718ed                       ; 00572272
        ;   XREF to: 005718ed (CONDITIONAL_JUMP)  ; LAB_005718ed
    MOV EAX,dword ptr [ESP + 0x30c]     ; 00572278
    MOV dword ptr [EAX + 0x14d144],EDI  ; 0057227f
    FLD float ptr [ESP + 0x2e8]         ; 00572285
    FADD float ptr [EDI + 0x24]         ; 0057228c
    MOV EAX,0x3f800000                  ; 0057228f
    FSTP float ptr [ESP + 0x2e0]        ; 00572294
    MOV dword ptr [ESP + 0x284],EAX     ; 0057229b
    XOR EDI,EDI                         ; 005722a2
    LEA EAX,[ESP + 0x280]               ; 005722a4
    MOV dword ptr [ESP + 0x280],EDI     ; 005722ab
    MOV dword ptr [ESP + 0x288],EDI     ; 005722b2
    CMP EBP,EAX                         ; 005722b9
    JZ 0x005718ed                       ; 005722bb
        ;   XREF to: 005718ed (CONDITIONAL_JUMP)  ; LAB_005718ed
    MOV dword ptr [EBP],EDI             ; 005722c1
    MOV EAX,dword ptr [ESP + 0x284]     ; 005722c4
    MOV dword ptr [EBP + 0x4],EAX       ; 005722cb
    MOV EAX,dword ptr [ESP + 0x288]     ; 005722ce
    MOV dword ptr [EBP + 0x8],EAX       ; 005722d5
    JMP 0x005718ed                      ; 005722d8
        ;   XREF to: 005718ed (UNCONDITIONAL_JUMP)  ; LAB_005718ed
    JBE 0x005718ed                      ; 005722dd
        ;   XREF to: 005718ed (CONDITIONAL_JUMP)  ; LAB_005718ed
        ;   Label: LAB_005722dd
    CMP EBX,0x3                         ; 005722e3
    JZ 0x0057221f                       ; 005722e6
        ;   XREF to: 0057221f (CONDITIONAL_JUMP)  ; LAB_0057221f
    MOV ECX,0x646217                    ; 005722ec | = "..\\core\\setcolid.cpp"
        ;   Label: LAB_005722ec
    MOV EBX,0x12b                       ; 005722f1
    PUSH 0x64622c                       ; 005722f6 | = "Invalid collision type!"
    MOV dword ptr [0x02f0ca48],ECX      ; 005722fb | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 00572301 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00572307
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0057230c
    JMP 0x005718ed                      ; 0057230f
        ;   XREF to: 005718ed (UNCONDITIONAL_JUMP)  ; LAB_005718ed
    PUSH EBX                            ; 00572314
        ;   Label: LAB_00572314
    MOV EDX,dword ptr [EBX + 0x154]     ; 00572315
    CALL dword ptr [EDX + 0x3c]         ; 0057231b
    ADD ESP,0x4                         ; 0057231e
    MOV EDX,dword ptr [ESP + 0x30c]     ; 00572321
    MOV dword ptr [EDX + 0x14d134],EAX  ; 00572328
    MOV EAX,dword ptr [ESP + 0x2e0]     ; 0057232e
    ADD ESP,0x2f8                       ; 00572335
    POP EBP                             ; 0057233b
    POP EDI                             ; 0057233c
    POP ESI                             ; 0057233d
    POP EBX                             ; 0057233e
    RET                                 ; 0057233f

