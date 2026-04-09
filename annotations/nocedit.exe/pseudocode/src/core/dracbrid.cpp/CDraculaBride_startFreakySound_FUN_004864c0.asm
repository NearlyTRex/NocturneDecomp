; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dracbrid_cpp_CDraculaBride_startFreakySound_FUN_004864c0(CDraculaBride *this_ptr,char *sound_name,float volume)
;
; Parameters:
; CDraculaBride *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   sound_name
; float            Stack[0xc]:4   volume
; Local Variables:
; char[200]        Stack[-0x174]:200  local_174
; float[8]         Stack[-0xac]:32  local_ac
; CVector3f        Stack[-0x8c]:12  local_8c
; float            Stack[-0x80]:4  local_80
; float            Stack[-0x7c]:4  local_7c
; float            Stack[-0x78]:4  local_78
; float            Stack[-0x74]:4  local_74
; float            Stack[-0x70]:4  local_70
; float            Stack[-0x6c]:4  local_6c
; float            Stack[-0x68]:4  local_68
; float            Stack[-0x64]:4  local_64
; float            Stack[-0x60]:4  local_60
; float            Stack[-0x5c]:4  local_5c
; float            Stack[-0x58]:4  local_58
; float            Stack[-0x54]:4  local_54
; CVector3f        Stack[-0x50]:12  local_50
; CVector3f        Stack[-0x44]:12  local_44
; float            Stack[-0x38]:4  local_38
; float            Stack[-0x34]:4  local_34
; float            Stack[-0x30]:4  local_30
; float            Stack[-0x2c]:4  local_2c
; float            Stack[-0x28]:4  local_28
; float            Stack[-0x24]:4  local_24
; CVector3f        Stack[-0x20]:12  local_20
; float            Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_dracbrid.cpp_CDraculaBride_processDamage_FUN_00486070 at 004861f6
;   core_dracbrid.cpp_CDraculaBride_process_FUN_00484410 at 00484967
;
; Referenced Globals:
;   CSound* g_CSoundPtr = 03f6af64
;   int[8] g_DraculaBrideIndices
;   SFreaky[6] SFreaky_ARRAY_02c6d0c0
;   undefined4 SFreaky_ARRAY_02c6d0c0[0].position.x
;   undefined4 SFreaky_ARRAY_02c6d0c0[0].position.y
;   undefined4 SFreaky_ARRAY_02c6d0c0[0].position.z
;   undefined4 SFreaky_ARRAY_02c6d0c0[0].tangent.x
;   undefined4 SFreaky_ARRAY_02c6d0c0[0].tangent.y
;   undefined4 SFreaky_ARRAY_02c6d0c0[0].tangent.z
;   undefined4 SFreaky_ARRAY_02c6d0c0[0].t
;   undefined4 SFreaky_ARRAY_02c6d0c0[0].control_points[0].x
;   undefined4 SFreaky_ARRAY_02c6d0c0[0].control_points[0].y
;   undefined4 SFreaky_ARRAY_02c6d0c0[0].control_points[0].z
;   undefined4 SFreaky_ARRAY_02c6d0c0[0].control_points[1].x
;   undefined4 SFreaky_ARRAY_02c6d0c0[0].control_points[1].y
;   ... and 13 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
;   core_sound.cpp_CSound_findRandomSoundFile_FUN_005b1ed0
;   core_spline.cpp_computeSplineBasis_FUN_005b90a0
;   core_spline.cpp_evaluateSplinePoint3D_FUN_005b92d0
;   core_spline.cpp_evaluateSplineTangent3D_FUN_005b9490
;   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
;   sound_sndmain.cpp_isSoundBusy_FUN_005ab540
;   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
;   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
;   sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_005a8940
;   sound_sndmain.cpp_setNextSfxTrackedVelocity1_FUN_005a8a00
;   sound_sndmain.cpp_setNextSfxVolume_FUN_005a8a60
;   sound_sndmain.cpp_startSfx_FUN_005a8e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004864c0
        ;   Label: core_dracbrid.cpp_CDraculaBride_startFreakySound_FUN_004864c0
    PUSH ESI                            ; 004864c1
    PUSH EDI                            ; 004864c2
    PUSH EBP                            ; 004864c3
    SUB ESP,0x164                       ; 004864c4
    MOV EBP,dword ptr [ESP + 0x178]     ; 004864ca
    PUSH 0x40e00000                     ; 004864d1
    PUSH 0x3f800000                     ; 004864d6
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004864db
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x168],EAX     ; 004864e0
    FLD float ptr [ESP + 0x168]         ; 004864e7
    ADD ESP,0x8                         ; 004864ee
    FSTP float ptr [EBP + 0xbf50]       ; 004864f1
    CALL sound_sndmain.cpp_isSoundBusy_FUN_005ab540 ; 004864f7
        ;   XREF to: 005ab540 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundBusy_FUN_005ab540()
    TEST EAX,EAX                        ; 004864fc
    JZ 0x00486521                       ; 004864fe
        ;   XREF to: 00486521 (CONDITIONAL_JUMP)  ; LAB_00486521
    MOV EBX,0x2c6d0c0                   ; 00486500 | SFreaky_ARRAY_02c6d0c0
    XOR ESI,ESI                         ; 00486505
    MOV EDX,dword ptr [EBX]             ; 00486507 | SFreaky_ARRAY_02c6d0c0 | SFreaky_ARRAY_02c6d0c0[1].sfx_handle
        ;   Label: LAB_00486507
    PUSH EDX                            ; 00486509
    MOV EDI,EBX                         ; 0048650a
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 0048650c
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 00486511
    TEST EAX,EAX                        ; 00486514
    JZ 0x0048652c                       ; 00486516
        ;   XREF to: 0048652c (CONDITIONAL_JUMP)  ; LAB_0048652c
    INC ESI                             ; 00486518
    ADD EBX,0x54                        ; 00486519 | SFreaky_ARRAY_02c6d0c0[1].sfx_handle
    CMP ESI,0x6                         ; 0048651c
    JL 0x00486507                       ; 0048651f
        ;   XREF to: 00486507 (CONDITIONAL_JUMP)  ; LAB_00486507
    ADD ESP,0x164                       ; 00486521
        ;   Label: LAB_00486521
    POP EBP                             ; 00486527
    POP EDI                             ; 00486528
    POP ESI                             ; 00486529
    POP EBX                             ; 0048652a
    RET                                 ; 0048652b
    MOV ECX,dword ptr [0x02c6d0a0]      ; 0048652c | g_DraculaBrideIndices
        ;   Label: LAB_0048652c
    PUSH ECX                            ; 00486532
    MOV dword ptr [EBX + 0x1c],EAX      ; 00486533 | SFreaky_ARRAY_02c6d0c0[0].t
    LEA EAX,[ESP + 0x134]               ; 00486536
    PUSH EAX                            ; 0048653d
    LEA EAX,[EBP + 0x158]               ; 0048653e
    PUSH EAX                            ; 00486544
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 00486545
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 0048654a
    PUSH EAX                            ; 0048654d
    LEA EAX,[ESP + 0x128]               ; 0048654e
    PUSH EAX                            ; 00486555
    PUSH EBP                            ; 00486556
    ADD EBX,0x2c                        ; 00486557 | SFreaky_ARRAY_02c6d0c0[0].control_points[1].x
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0048655a
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0048655f
    CMP EBX,EAX                         ; 00486562
    JZ 0x00486576                       ; 00486564
        ;   XREF to: 00486576 (CONDITIONAL_JUMP)  ; LAB_00486576
    MOV EDX,dword ptr [EAX]             ; 00486566
    MOV dword ptr [EBX],EDX             ; 00486568 | SFreaky_ARRAY_02c6d0c0[0].control_points[1].x
    MOV EDX,dword ptr [EAX + 0x4]       ; 0048656a
    MOV dword ptr [EBX + 0x4],EDX       ; 0048656d | SFreaky_ARRAY_02c6d0c0[0].control_points[1].y
    MOV EDX,dword ptr [EAX + 0x8]       ; 00486570
    MOV dword ptr [EBX + 0x8],EDX       ; 00486573 | SFreaky_ARRAY_02c6d0c0[0].control_points[1].z
    LEA EBX,[EDI + 0x2c]                ; 00486576 | SFreaky_ARRAY_02c6d0c0[0].control_points[1].x
        ;   Label: LAB_00486576
    MOV EAX,dword ptr [EBX]             ; 00486579 | SFreaky_ARRAY_02c6d0c0[0].control_points[1].x
    MOV dword ptr [ESP + 0x148],EAX     ; 0048657b
    LEA EAX,[EBX + 0x4]                 ; 00486582 | SFreaky_ARRAY_02c6d0c0[0].control_points[1].y
    MOV EAX,dword ptr [EAX]             ; 00486585 | SFreaky_ARRAY_02c6d0c0[0].control_points[1].y
    MOV dword ptr [ESP + 0x14c],EAX     ; 00486587
    LEA EAX,[EBX + 0x8]                 ; 0048658e | SFreaky_ARRAY_02c6d0c0[0].control_points[1].z
    PUSH 0x40a00000                     ; 00486591
    MOV EAX,dword ptr [EAX]             ; 00486596 | SFreaky_ARRAY_02c6d0c0[0].control_points[1].z
    PUSH 0xc0a00000                     ; 00486598
    MOV dword ptr [ESP + 0x158],EAX     ; 0048659d
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004865a4
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x168],EAX     ; 004865a9
    FLD float ptr [ESP + 0x168]         ; 004865b0
    ADD ESP,0x8                         ; 004865b7
    PUSH 0x40000000                     ; 004865ba
    FADD float ptr [ESP + 0x14c]        ; 004865bf
    PUSH 0xc0000000                     ; 004865c6
    FSTP float ptr [ESP + 0x150]        ; 004865cb
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004865d2
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x168],EAX     ; 004865d7
    FLD float ptr [ESP + 0x168]         ; 004865de
    ADD ESP,0x8                         ; 004865e5
    PUSH 0x40a00000                     ; 004865e8
    FADD float ptr [ESP + 0x150]        ; 004865ed
    PUSH 0xc0a00000                     ; 004865f4
    FSTP float ptr [ESP + 0x154]        ; 004865f9
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 00486600
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x168],EAX     ; 00486605
    FLD float ptr [ESP + 0x168]         ; 0048660c
    ADD ESP,0x8                         ; 00486613
    MOV EAX,dword ptr [ESP + 0x148]     ; 00486616
    FADD float ptr [ESP + 0x150]        ; 0048661d
    MOV dword ptr [ESP + 0x100],EAX     ; 00486624
    LEA EAX,[ESP + 0x148]               ; 0048662b
    FSTP float ptr [ESP + 0x150]        ; 00486632
    MOV EAX,dword ptr [EAX + 0x4]       ; 00486639
    MOV dword ptr [ESP + 0x104],EAX     ; 0048663c
    LEA EAX,[ESP + 0x148]               ; 00486643
    MOV EAX,dword ptr [EAX + 0x8]       ; 0048664a
    LEA EBX,[EDI + 0x20]                ; 0048664d | SFreaky_ARRAY_02c6d0c0[0].control_points[0].x
    MOV dword ptr [ESP + 0x108],EAX     ; 00486650
    LEA EAX,[ESP + 0x100]               ; 00486657
    CMP EBX,EAX                         ; 0048665e
    JZ 0x0048667f                       ; 00486660
        ;   XREF to: 0048667f (CONDITIONAL_JUMP)  ; LAB_0048667f
    MOV EAX,dword ptr [ESP + 0x100]     ; 00486662
    MOV dword ptr [EBX],EAX             ; 00486669 | SFreaky_ARRAY_02c6d0c0[0].control_points[0].x
    MOV EAX,dword ptr [ESP + 0x104]     ; 0048666b
    MOV dword ptr [EBX + 0x4],EAX       ; 00486672 | SFreaky_ARRAY_02c6d0c0[0].control_points[0].y
    MOV EAX,dword ptr [ESP + 0x108]     ; 00486675
    MOV dword ptr [EBX + 0x8],EAX       ; 0048667c | SFreaky_ARRAY_02c6d0c0[0].control_points[0].z
    LEA EBX,[EDI + 0x2c]                ; 0048667f | SFreaky_ARRAY_02c6d0c0[0].control_points[1].x
        ;   Label: LAB_0048667f
    MOV EAX,dword ptr [EBX]             ; 00486682 | SFreaky_ARRAY_02c6d0c0[0].control_points[1].x
    MOV dword ptr [ESP + 0xf4],EAX      ; 00486684
    LEA EAX,[EBX + 0x4]                 ; 0048668b | SFreaky_ARRAY_02c6d0c0[0].control_points[1].y
    MOV EAX,dword ptr [EAX]             ; 0048668e | SFreaky_ARRAY_02c6d0c0[0].control_points[1].y
    MOV dword ptr [ESP + 0xf8],EAX      ; 00486690
    LEA EAX,[EBX + 0x8]                 ; 00486697 | SFreaky_ARRAY_02c6d0c0[0].control_points[1].z
    PUSH 0x40a00000                     ; 0048669a
    MOV EAX,dword ptr [EAX]             ; 0048669f | SFreaky_ARRAY_02c6d0c0[0].control_points[1].z
    PUSH 0xc0a00000                     ; 004866a1
    MOV dword ptr [ESP + 0x104],EAX     ; 004866a6
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004866ad
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x168],EAX     ; 004866b2
    FLD float ptr [ESP + 0x168]         ; 004866b9
    ADD ESP,0x8                         ; 004866c0
    PUSH 0x40000000                     ; 004866c3
    FADD float ptr [ESP + 0xf8]         ; 004866c8
    PUSH 0xc0000000                     ; 004866cf
    FSTP float ptr [ESP + 0xfc]         ; 004866d4
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004866db
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x168],EAX     ; 004866e0
    FLD float ptr [ESP + 0x168]         ; 004866e7
    ADD ESP,0x8                         ; 004866ee
    PUSH 0x40a00000                     ; 004866f1
    FADD float ptr [ESP + 0xfc]         ; 004866f6
    PUSH 0xc0a00000                     ; 004866fd
    FSTP float ptr [ESP + 0x100]        ; 00486702
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 00486709
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x168],EAX     ; 0048670e
    FLD float ptr [ESP + 0x168]         ; 00486715
    ADD ESP,0x8                         ; 0048671c
    MOV EAX,dword ptr [ESP + 0xf4]      ; 0048671f
    FADD float ptr [ESP + 0xfc]         ; 00486726
    MOV dword ptr [ESP + 0x118],EAX     ; 0048672d
    LEA EAX,[ESP + 0xf4]                ; 00486734
    FSTP float ptr [ESP + 0xfc]         ; 0048673b
    MOV EAX,dword ptr [EAX + 0x4]       ; 00486742
    MOV dword ptr [ESP + 0x11c],EAX     ; 00486745
    LEA EAX,[ESP + 0xf4]                ; 0048674c
    MOV EAX,dword ptr [EAX + 0x8]       ; 00486753
    LEA EBX,[EDI + 0x38]                ; 00486756 | SFreaky_ARRAY_02c6d0c0[0].control_points[2].x
    MOV dword ptr [ESP + 0x120],EAX     ; 00486759
    LEA EAX,[ESP + 0x118]               ; 00486760
    CMP EBX,EAX                         ; 00486767
    JZ 0x00486788                       ; 00486769
        ;   XREF to: 00486788 (CONDITIONAL_JUMP)  ; LAB_00486788
    MOV EAX,dword ptr [ESP + 0x118]     ; 0048676b
    MOV dword ptr [EBX],EAX             ; 00486772 | SFreaky_ARRAY_02c6d0c0[0].control_points[2].x
    MOV EAX,dword ptr [ESP + 0x11c]     ; 00486774
    MOV dword ptr [EBX + 0x4],EAX       ; 0048677b | SFreaky_ARRAY_02c6d0c0[0].control_points[2].y
    MOV EAX,dword ptr [ESP + 0x120]     ; 0048677e
    MOV dword ptr [EBX + 0x8],EAX       ; 00486785 | SFreaky_ARRAY_02c6d0c0[0].control_points[2].z
    MOV EAX,[0x032758e8]                ; 00486788 | g_CDemonCameraInstance.base.position
        ;   Label: LAB_00486788
    MOV dword ptr [ESP + 0x10c],EAX     ; 0048678d
    MOV EAX,0x32758e8                   ; 00486794 | g_CDemonCameraInstance.base.position
    MOV EAX,dword ptr [EAX + 0x4]       ; 00486799 | g_CDemonCameraInstance.base.position+4
    MOV dword ptr [ESP + 0x110],EAX     ; 0048679c
    MOV EAX,0x32758e8                   ; 004867a3 | g_CDemonCameraInstance.base.position
    PUSH 0x40a00000                     ; 004867a8
    MOV EAX,dword ptr [EAX + 0x8]       ; 004867ad | g_CDemonCameraInstance.base.position+8
    PUSH 0xc0a00000                     ; 004867b0
    MOV dword ptr [ESP + 0x11c],EAX     ; 004867b5
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004867bc
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x168],EAX     ; 004867c1
    FLD float ptr [ESP + 0x168]         ; 004867c8
    ADD ESP,0x8                         ; 004867cf
    PUSH 0x40000000                     ; 004867d2
    FADD float ptr [ESP + 0x110]        ; 004867d7
    PUSH 0xc0000000                     ; 004867de
    FSTP float ptr [ESP + 0x114]        ; 004867e3
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004867ea
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x168],EAX     ; 004867ef
    FLD float ptr [ESP + 0x168]         ; 004867f6
    ADD ESP,0x8                         ; 004867fd
    PUSH 0x40a00000                     ; 00486800
    FADD float ptr [ESP + 0x114]        ; 00486805
    PUSH 0xc0a00000                     ; 0048680c
    FSTP float ptr [ESP + 0x118]        ; 00486811
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 00486818
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x168],EAX     ; 0048681d
    FLD float ptr [ESP + 0x168]         ; 00486824
    ADD ESP,0x8                         ; 0048682b
    MOV EAX,dword ptr [ESP + 0x10c]     ; 0048682e
    FADD float ptr [ESP + 0x114]        ; 00486835
    MOV dword ptr [ESP + 0x13c],EAX     ; 0048683c
    LEA EAX,[ESP + 0x10c]               ; 00486843
    FSTP float ptr [ESP + 0x114]        ; 0048684a
    MOV EAX,dword ptr [EAX + 0x4]       ; 00486851
    MOV dword ptr [ESP + 0x140],EAX     ; 00486854
    LEA EAX,[ESP + 0x10c]               ; 0048685b
    MOV EAX,dword ptr [EAX + 0x8]       ; 00486862
    LEA EBX,[EDI + 0x44]                ; 00486865 | SFreaky_ARRAY_02c6d0c0[0].control_points[3].x
    MOV dword ptr [ESP + 0x144],EAX     ; 00486868
    LEA EAX,[ESP + 0x13c]               ; 0048686f
    CMP EBX,EAX                         ; 00486876
    JZ 0x00486897                       ; 00486878
        ;   XREF to: 00486897 (CONDITIONAL_JUMP)  ; LAB_00486897
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0048687a
    MOV dword ptr [EBX],EAX             ; 00486881 | SFreaky_ARRAY_02c6d0c0[0].control_points[3].x
    MOV EAX,dword ptr [ESP + 0x140]     ; 00486883
    MOV dword ptr [EBX + 0x4],EAX       ; 0048688a | SFreaky_ARRAY_02c6d0c0[0].control_points[3].y
    MOV EAX,dword ptr [ESP + 0x144]     ; 0048688d
    MOV dword ptr [EBX + 0x8],EAX       ; 00486894 | SFreaky_ARRAY_02c6d0c0[0].control_points[3].z
    PUSH 0x0                            ; 00486897
        ;   Label: LAB_00486897
    LEA EAX,[ESP + 0xcc]                ; 00486899
    PUSH dword ptr [EDI + 0x1c]         ; 004868a0 | SFreaky_ARRAY_02c6d0c0[0].t
    PUSH EAX                            ; 004868a3
    CALL core_spline.cpp_computeSplineBasis_FUN_005b90a0 ; 004868a4
        ;   XREF to: 005b90a0 (UNCONDITIONAL_CALL)  ; void core_spline.cpp_computeSplineBasis_FUN_005b90a0(float * out_basis, float t, float tension)
    ADD ESP,0xc                         ; 004868a9
    LEA EAX,[EDI + 0x44]                ; 004868ac | SFreaky_ARRAY_02c6d0c0[0].control_points[3].x
    PUSH EAX                            ; 004868af | SFreaky_ARRAY_02c6d0c0[0].control_points[3].x
    LEA EAX,[EDI + 0x38]                ; 004868b0 | SFreaky_ARRAY_02c6d0c0[0].control_points[2].x
    PUSH EAX                            ; 004868b3 | SFreaky_ARRAY_02c6d0c0[0].control_points[2].x
    LEA EAX,[EDI + 0x2c]                ; 004868b4 | SFreaky_ARRAY_02c6d0c0[0].control_points[1].x
    PUSH EAX                            ; 004868b7 | SFreaky_ARRAY_02c6d0c0[0].control_points[1].x
    LEA EAX,[EDI + 0x20]                ; 004868b8 | SFreaky_ARRAY_02c6d0c0[0].control_points[0].x
    PUSH EAX                            ; 004868bb | SFreaky_ARRAY_02c6d0c0[0].control_points[0].x
    LEA EAX,[ESP + 0xf8]                ; 004868bc
    PUSH EAX                            ; 004868c3
    LEA EAX,[ESP + 0xdc]                ; 004868c4
    PUSH EAX                            ; 004868cb
    LEA EBX,[EDI + 0x4]                 ; 004868cc | SFreaky_ARRAY_02c6d0c0[0].position.x
    CALL core_spline.cpp_evaluateSplinePoint3D_FUN_005b92d0 ; 004868cf
        ;   XREF to: 005b92d0 (UNCONDITIONAL_CALL)  ; CVector3f * core_spline.cpp_evaluateSplinePoint3D_FUN_005b92d0(float * basis, CVector3f * out, CVector3f * p0, CVector3f * p1, ...)
    ADD ESP,0x18                        ; 004868d4
    CMP EBX,EAX                         ; 004868d7
    JZ 0x004868eb                       ; 004868d9
        ;   XREF to: 004868eb (CONDITIONAL_JUMP)  ; LAB_004868eb
    MOV EDX,dword ptr [EAX]             ; 004868db
    MOV dword ptr [EBX],EDX             ; 004868dd | SFreaky_ARRAY_02c6d0c0[0].position.x
    MOV EDX,dword ptr [EAX + 0x4]       ; 004868df
    MOV dword ptr [EBX + 0x4],EDX       ; 004868e2 | SFreaky_ARRAY_02c6d0c0[0].position.y
    MOV EDX,dword ptr [EAX + 0x8]       ; 004868e5
    MOV dword ptr [EBX + 0x8],EDX       ; 004868e8 | SFreaky_ARRAY_02c6d0c0[0].position.z
    LEA EAX,[EDI + 0x44]                ; 004868eb | SFreaky_ARRAY_02c6d0c0[0].control_points[3].x
        ;   Label: LAB_004868eb
    PUSH EAX                            ; 004868ee | SFreaky_ARRAY_02c6d0c0[0].control_points[3].x
    LEA EAX,[EDI + 0x38]                ; 004868ef | SFreaky_ARRAY_02c6d0c0[0].control_points[2].x
    PUSH EAX                            ; 004868f2 | SFreaky_ARRAY_02c6d0c0[0].control_points[2].x
    LEA EAX,[EDI + 0x2c]                ; 004868f3 | SFreaky_ARRAY_02c6d0c0[0].control_points[1].x
    PUSH EAX                            ; 004868f6 | SFreaky_ARRAY_02c6d0c0[0].control_points[1].x
    LEA EAX,[EDI + 0x20]                ; 004868f7 | SFreaky_ARRAY_02c6d0c0[0].control_points[0].x
    PUSH EAX                            ; 004868fa | SFreaky_ARRAY_02c6d0c0[0].control_points[0].x
    LEA EAX,[ESP + 0x164]               ; 004868fb
    PUSH EAX                            ; 00486902
    LEA EAX,[ESP + 0xdc]                ; 00486903
    PUSH EAX                            ; 0048690a
    LEA EBX,[EDI + 0x10]                ; 0048690b | SFreaky_ARRAY_02c6d0c0[0].tangent.x
    CALL core_spline.cpp_evaluateSplineTangent3D_FUN_005b9490 ; 0048690e
        ;   XREF to: 005b9490 (UNCONDITIONAL_CALL)  ; CVector3f * core_spline.cpp_evaluateSplineTangent3D_FUN_005b9490(float * basis, CVector3f * out, CVector3f * p0, CVector3f * p1, ...)
    ADD ESP,0x18                        ; 00486913
    CMP EBX,EAX                         ; 00486916
    JZ 0x0048692a                       ; 00486918
        ;   XREF to: 0048692a (CONDITIONAL_JUMP)  ; LAB_0048692a
    MOV EDX,dword ptr [EAX]             ; 0048691a
    MOV dword ptr [EBX],EDX             ; 0048691c | SFreaky_ARRAY_02c6d0c0[0].tangent.x
    MOV EDX,dword ptr [EAX + 0x4]       ; 0048691e
    MOV dword ptr [EBX + 0x4],EDX       ; 00486921 | SFreaky_ARRAY_02c6d0c0[0].tangent.y
    MOV EDX,dword ptr [EAX + 0x8]       ; 00486924
    MOV dword ptr [EBX + 0x8],EDX       ; 00486927 | SFreaky_ARRAY_02c6d0c0[0].tangent.z
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30 ; 0048692a
        ;   XREF to: 005a8c30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30()
        ;   Label: LAB_0048692a
    LEA EAX,[EDI + 0x4]                 ; 0048692f | SFreaky_ARRAY_02c6d0c0[0].position.x
    PUSH EAX                            ; 00486932 | SFreaky_ARRAY_02c6d0c0[0].position.x
    CALL sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_005a8940 ; 00486933
        ;   XREF to: 005a8940 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_005a8940(CVector3f * position_source_ptr)
    ADD ESP,0x4                         ; 00486938
    LEA EAX,[EDI + 0x10]                ; 0048693b | SFreaky_ARRAY_02c6d0c0[0].tangent.x
    PUSH EAX                            ; 0048693e | SFreaky_ARRAY_02c6d0c0[0].tangent.x
    CALL sound_sndmain.cpp_setNextSfxTrackedVelocity1_FUN_005a8a00 ; 0048693f
        ;   XREF to: 005a8a00 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxTrackedVelocity1_FUN_005a8a00(CVector3f * velocity_source_ptr)
    ADD ESP,0x4                         ; 00486944
    PUSH dword ptr [ESP + 0x180]        ; 00486947
    CALL sound_sndmain.cpp_setNextSfxVolume_FUN_005a8a60 ; 0048694e
        ;   XREF to: 005a8a60 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxVolume_FUN_005a8a60(float volume)
    ADD ESP,0x4                         ; 00486953
    MOV EBX,dword ptr [ESP + 0x17c]     ; 00486956
    PUSH EBX                            ; 0048695d
    LEA EAX,[ESP + 0x4]                 ; 0048695e
    PUSH EAX                            ; 00486962
    MOV ESI,dword ptr [0x00681ef8]      ; 00486963 | g_CSoundPtr
    PUSH ESI                            ; 00486969 | g_CSoundInstance
    CALL core_sound.cpp_CSound_findRandomSoundFile_FUN_005b1ed0 ; 0048696a
        ;   XREF to: 005b1ed0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_findRandomSoundFile_FUN_005b1ed0(CSound * this_ptr, char * out_result, char * wildcard_pattern)
    ADD ESP,0xc                         ; 0048696f
    MOV EAX,ESP                         ; 00486972
    PUSH EAX                            ; 00486974
    CALL sound_sndmain.cpp_startSfx_FUN_005a8e90 ; 00486975
        ;   XREF to: 005a8e90 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_005a8e90(char * filename)
    ADD ESP,0x4                         ; 0048697a
    MOV dword ptr [EDI],EAX             ; 0048697d | SFreaky_ARRAY_02c6d0c0
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0 ; 0048697f
        ;   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0()
    MOV dword ptr [EDI + 0x50],EBP      ; 00486984 | SFreaky_ARRAY_02c6d0c0[0].owner
    ADD ESP,0x164                       ; 00486987
    POP EBP                             ; 0048698d
    POP EDI                             ; 0048698e
    POP ESI                             ; 0048698f
    POP EBX                             ; 00486990
    RET                                 ; 00486991

