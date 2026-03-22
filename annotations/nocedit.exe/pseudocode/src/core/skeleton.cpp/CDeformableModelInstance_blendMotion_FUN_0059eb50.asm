; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50(CDeformableModelInstance *this_ptr,int target_motion_index,float target_frame_number ,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *callback_func)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   target_motion_index
; float            Stack[0xc]:4   target_frame_number
; float            Stack[0x10]:4   blend_weight
; int              Stack[0x14]:4   bone_index
; CDeformableModel_MotionBlendWeightFunc * Stack[0x18]:4   callback_func
; Local Variables:
; float[1020]      Stack[-0x1940]:4080  afStackY_1940
; float            Stack[-0x938]:4  local_938
; CQuaternion4f[100] Stack[-0x934]:1600  local_934
; int[100]         Stack[-0x2f4]:400  aiStack_2f4
; float            Stack[-0x164]:4  fStack_164
; float[3]         Stack[-0x160]:12  afStack_160
; CQuaternion4f    Stack[-0x154]:16  CStack_154
; CQuaternion4f    Stack[-0x144]:16  CStack_144
; CQuaternion4f    Stack[-0x134]:16  local_134
; undefined4       Stack[-0x124]:4  local_124
; float[3]         Stack[-0x120]:12  afStack_120
; CQuaternion4f    Stack[-0x114]:16  local_114
; CQuaternion4f    Stack[-0x104]:16  local_104
; float            Stack[-0xf4]:4  local_f4
; float[3]         Stack[-0xf0]:12  afStack_f0
; CQuaternion4f    Stack[-0xe4]:16  local_e4
; CQuaternion4f    Stack[-0xd4]:16  local_d4
; CQuaternion4f    Stack[-0xc4]:16  local_c4
; CQuaternion4f[4] Stack[-0xb4]:64  local_b4
; float[3]         Stack[-0x68]:12  afStack_68
; int              Stack[-0x5c]:4  local_5c
; int[3]           Stack[-0x58]:12  local_58
; CQuaternion4f *  Stack[-0x4c]:4  local_4c
; int              Stack[-0x48]:4  local_48
; int              Stack[-0x44]:4  local_44
; CQuaternion4f *  Stack[-0x40]:4  local_40
; int              Stack[-0x3c]:4  local_3c
; CDeformableModelInstance * Stack[-0x38]:4  local_38
; CDeformableModelInstance * Stack[-0x34]:4  local_34
; CSkeleton *      Stack[-0x30]:4  local_30
; CQuaternion4f *  Stack[-0x2c]:4  local_2c
; int              Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
;
; XREF[14]:
;   core_charactr.cpp_CCharacter_applyGesture_FUN_0042d3d0 at 0042d495
;   core_charactr.cpp_CCharacter_blendLayerActionMotion_FUN_0042e570 at 0042e5b8
;   core_gabriela.cpp_CGabriella_binarySearchClavicleBlend_FUN_004d6f80 at 004d7050
;   core_gabriela.cpp_CGabriella_updateClavicleCollisionAvoidance_FUN_004d6d40 at 004d6f65
;   core_gabriela.cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004d4d80 at 004d5329
;   core_ghoul.cpp_CGhoul_process_FUN_004e6600 at 004e6906
;   core_hostage.cpp_CHostage_process_FUN_004f4bd0 at 004f5f18
;   core_icepick.cpp_CIcePick_updateShootBlend_FUN_004f8810 at 004f8890
;   core_mobster.cpp_CMobster_aimTommyGun_FUN_005267a0 at 005269f2
;   core_scat.cpp_CScat_blendLayerAction_FUN_005582c0 at 0055845b
;   ... and 4 more
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_0064edd0
;   TerminatedCString s_Write_me_0064ede5
;   double DOUBLE_0064edf0 = 0.00100000000000000
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_motion.cpp_CMotionController_getFramesForInterpolation_FUN_0052e4c0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
;   core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
;   core_xform.cpp_multiplyQuaternion_FUN_005f7640
;   core_xform.cpp_negateFirstComponent_FUN_005f75e0
;   core_xform.cpp_slerpQuaternion_FUN_005f77e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059eb50
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
    PUSH ESI                            ; 0059eb51
    PUSH EDI                            ; 0059eb52
    PUSH EBP                            ; 0059eb53
    MOV EBP,ESP                         ; 0059eb54
    SUB ESP,0x924                       ; 0059eb56
    AND ESP,0xfffffff8                  ; 0059eb5c
    FLD float ptr [EBP + 0x20]          ; 0059eb5f
    FCOMP double ptr [0x0064edf0]       ; 0059eb62 | DOUBLE_0064edf0
    FNSTSW AX                           ; 0059eb68
    SAHF                                ; 0059eb6a
    JA 0x0059eb74                       ; 0059eb6b
        ;   XREF to: 0059eb74 (CONDITIONAL_JUMP)  ; LAB_0059eb74
    MOV ESP,EBP                         ; 0059eb6d
        ;   Label: LAB_0059eb6d
    POP EBP                             ; 0059eb6f
    POP EDI                             ; 0059eb70
    POP ESI                             ; 0059eb71
    POP EBX                             ; 0059eb72
    RET                                 ; 0059eb73
    MOV EAX,ESP                         ; 0059eb74
        ;   Label: LAB_0059eb74
    PUSH EAX                            ; 0059eb76
    LEA EAX,[ESP + 0x8e0]               ; 0059eb77
    PUSH EAX                            ; 0059eb7e
    LEA EAX,[ESP + 0x8e8]               ; 0059eb7f
    PUSH EAX                            ; 0059eb86
    MOV EDX,dword ptr [EBP + 0x18]      ; 0059eb87
    PUSH dword ptr [EBP + 0x1c]         ; 0059eb8a
    PUSH EDX                            ; 0059eb8d
    MOV ECX,dword ptr [EBP + 0x14]      ; 0059eb8e
    PUSH ECX                            ; 0059eb91
    CALL core_motion.cpp_CMotionController_getFramesForInterpolation_FUN_0052e4c0 ; 0059eb92
        ;   XREF to: 0052e4c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_getFramesForInterpolation_FUN_0052e4c0(CMotionController * this_ptr, int motion_index, float frame_number, int * out_frame1, ...)
    ADD ESP,0x18                        ; 0059eb97
    MOV EBX,dword ptr [EBP + 0x14]      ; 0059eb9a
    PUSH EBX                            ; 0059eb9d
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 0059eb9e
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059eba3
    MOV ESI,dword ptr [EBP + 0x14]      ; 0059eba6
    MOV EDI,dword ptr [ESI + 0x2250]    ; 0059eba9
    MOV EBX,EAX                         ; 0059ebaf
    TEST EDI,EDI                        ; 0059ebb1
    JNZ 0x0059eefc                      ; 0059ebb3
        ;   XREF to: 0059eefc (CONDITIONAL_JUMP)  ; LAB_0059eefc
    MOV ESI,dword ptr [EAX + 0x28558]   ; 0059ebb9
    MOV dword ptr [ESP + 0x91c],EDI     ; 0059ebbf
    TEST ESI,ESI                        ; 0059ebc6
    JLE 0x0059ecd9                      ; 0059ebc8
        ;   XREF to: 0059ecd9 (CONDITIONAL_JUMP)  ; LAB_0059ecd9
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059ebce
    MOV ESI,dword ptr [EBP + 0x14]      ; 0059ebd1
    ADD EAX,0x6b0                       ; 0059ebd4
    MOV dword ptr [ESP + 0x904],ESI     ; 0059ebd9
    MOV dword ptr [ESP + 0x90c],EAX     ; 0059ebe0
    MOV ESI,dword ptr [EBP + 0x24]      ; 0059ebe7
        ;   Label: LAB_0059ebe7
    PUSH ESI                            ; 0059ebea
    MOV EDI,dword ptr [ESP + 0x920]     ; 0059ebeb
    PUSH EDI                            ; 0059ebf2
    PUSH EBX                            ; 0059ebf3
    CALL core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100 ; 0059ebf4
        ;   XREF to: 0059a100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100(CSkeleton * this_ptr, int start_bone_index, int target_bone_index)
    ADD ESP,0xc                         ; 0059ebf9
    TEST EAX,EAX                        ; 0059ebfc
    JL 0x0059ec9a                       ; 0059ebfe
        ;   XREF to: 0059ec9a (CONDITIONAL_JUMP)  ; LAB_0059ec9a
    MOV EDX,dword ptr [EBP + 0x14]      ; 0059ec04
    PUSH EDX                            ; 0059ec07
    PUSH EAX                            ; 0059ec08
    PUSH dword ptr [EBP + 0x20]         ; 0059ec09
    PUSH ESI                            ; 0059ec0c
    PUSH EDI                            ; 0059ec0d
    CALL dword ptr [EBP + 0x28]         ; 0059ec0e
    MOV dword ptr [ESP + 0x934],EAX     ; 0059ec11
    FLD float ptr [ESP + 0x934]         ; 0059ec18
    ADD ESP,0x14                        ; 0059ec1f
    SUB ESP,0x4                         ; 0059ec22
    MOV ESI,EDI                         ; 0059ec25
    FSTP float ptr [ESP]                ; 0059ec27
    MOV EDI,dword ptr [ESP + 0x8e0]     ; 0059ec2a
    PUSH dword ptr [ESP + 0x4]          ; 0059ec31
    PUSH EDI                            ; 0059ec35
    MOV EAX,dword ptr [ESP + 0x8ec]     ; 0059ec36
    PUSH EAX                            ; 0059ec3d
    MOV EDX,ESI                         ; 0059ec3e
    PUSH EDX                            ; 0059ec40
    PUSH EBX                            ; 0059ec41
    LEA ESI,[ESP + 0x7ec]               ; 0059ec42
    LEA EDI,[ESP + 0x80c]               ; 0059ec49
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070 ; 0059ec50
        ;   XREF to: 0059a070 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070(CSkeleton * this_ptr, int bone_index, int frame_index_1, int frame_index_2, ...)
    LEA ESI,[ESP + 0x7ec]               ; 0059ec55
    ADD ESP,0x14                        ; 0059ec5c
    LEA EAX,[ESP + 0x7f8]               ; 0059ec5f
    MOV ECX,dword ptr [ESP + 0x910]     ; 0059ec66
    PUSH EAX                            ; 0059ec6d
    JMP 0x0060e45a                      ; 0059ec6e
        ;   XREF to: 0060e45a (UNCONDITIONAL_JUMP)  ; LAB_0060e45a
    LEA ESI,[ESP + 0x7f0]               ; 0059ec73
        ;   Label: LAB_0059ec73
    CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0 ; 0059ec7a
        ;   XREF to: 005f77e0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_slerpQuaternion_FUN_005f77e0(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, float t, CQuaternion4f * quat_out)
    ADD ESP,0xc                         ; 0059ec7f
    MOV EDI,dword ptr [ESP + 0x904]     ; 0059ec82
    LEA ESI,[ESP + 0x7e4]               ; 0059ec89
    JMP 0x0060fc36                      ; 0059ec90
        ;   XREF to: 0060fc36 (UNCONDITIONAL_JUMP)  ; LAB_0060fc36
    MOV EDI,dword ptr [ESP + 0x904]     ; 0059ec9a
        ;   Label: LAB_0059ec9a
    MOV EAX,dword ptr [ESP + 0x90c]     ; 0059eca1
    MOV EDX,dword ptr [ESP + 0x91c]     ; 0059eca8
    MOV ECX,dword ptr [EBX + 0x28558]   ; 0059ecaf
    ADD EDI,0x10                        ; 0059ecb5
    ADD EAX,0x10                        ; 0059ecb8
    INC EDX                             ; 0059ecbb
    MOV dword ptr [ESP + 0x904],EDI     ; 0059ecbc
    MOV dword ptr [ESP + 0x90c],EAX     ; 0059ecc3
    MOV dword ptr [ESP + 0x91c],EDX     ; 0059ecca
    CMP EDX,ECX                         ; 0059ecd1
    JL 0x0059ebe7                       ; 0059ecd3
        ;   XREF to: 0059ebe7 (CONDITIONAL_JUMP)  ; LAB_0059ebe7
    CMP dword ptr [EBP + 0x24],0x0      ; 0059ecd9
        ;   Label: LAB_0059ecd9
    JGE 0x0059eb6d                      ; 0059ecdd
        ;   XREF to: 0059eb6d (CONDITIONAL_JUMP)  ; LAB_0059eb6d
    MOV ESI,dword ptr [ESP + 0x8dc]     ; 0059ece3
    LEA EAX,[ESI*0x4 + 0x0]             ; 0059ecea
    SUB EAX,ESI                         ; 0059ecf1
    LEA ESI,[EAX*0x4 + 0x0]             ; 0059ecf3
    MOV EAX,dword ptr [EBX + 0x29374]   ; 0059ecfa
    FLD float ptr [ESI + EAX*0x1]       ; 0059ed00
    FMUL float ptr [ESP]                ; 0059ed03
    FSTP float ptr [ESP + 0x8b8]        ; 0059ed06
    FLD float ptr [ESI + EAX*0x1 + 0x4] ; 0059ed0d
    FMUL float ptr [ESP]                ; 0059ed11
    FSTP float ptr [ESP + 0x8bc]        ; 0059ed14
    FLD float ptr [ESI + EAX*0x1 + 0x8] ; 0059ed1b
    FMUL float ptr [ESP]                ; 0059ed1f
    MOV ESI,dword ptr [ESP + 0x8e0]     ; 0059ed22
    FLD float ptr [ESP]                 ; 0059ed29
    LEA EAX,[ESI*0x4 + 0x0]             ; 0059ed2c
    FLD1                                ; 0059ed33
    SUB EAX,ESI                         ; 0059ed35
    FSUBRP                              ; 0059ed37
    LEA ESI,[EAX*0x4 + 0x0]             ; 0059ed39
    FXCH                                ; 0059ed40
    FSTP float ptr [ESP + 0x8c0]        ; 0059ed42
    MOV EAX,dword ptr [EBX + 0x29374]   ; 0059ed49
    FSTP float ptr [ESP + 0x8e4]        ; 0059ed4f
    FLD float ptr [ESI + EAX*0x1]       ; 0059ed56
    FMUL float ptr [ESP + 0x8e4]        ; 0059ed59
    FSTP float ptr [ESP + 0x8ac]        ; 0059ed60
    FLD float ptr [ESI + EAX*0x1 + 0x4] ; 0059ed67
    FMUL float ptr [ESP + 0x8e4]        ; 0059ed6b
    FSTP float ptr [ESP + 0x8b0]        ; 0059ed72
    FLD float ptr [ESI + EAX*0x1 + 0x8] ; 0059ed79
    FMUL float ptr [ESP + 0x8e4]        ; 0059ed7d
    FLD float ptr [ESP + 0x8ac]         ; 0059ed84
    FADD float ptr [ESP + 0x8b8]        ; 0059ed8b
    FLD float ptr [ESP + 0x8b0]         ; 0059ed92
    FXCH                                ; 0059ed99
    FSTP float ptr [ESP + 0x8c4]        ; 0059ed9b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059eda2
    FLD float ptr [ESP + 0x8c4]         ; 0059eda5
    FXCH                                ; 0059edac
    FADD float ptr [ESP + 0x8bc]        ; 0059edae
    FXCH ST2                            ; 0059edb5
    FST float ptr [ESP + 0x8b4]         ; 0059edb7
    FADD float ptr [ESP + 0x8c0]        ; 0059edbe
    FXCH ST2                            ; 0059edc5
    FSTP float ptr [ESP + 0x8c8]        ; 0059edc7
    FXCH                                ; 0059edce
    FSTP float ptr [ESP + 0x8cc]        ; 0059edd0
    FMUL float ptr [EAX + 0x508]        ; 0059edd7
    FLD float ptr [ESP + 0x8c8]         ; 0059eddd
    FXCH                                ; 0059ede4
    FSTP float ptr [ESP + 0x8c4]        ; 0059ede6
    FMUL float ptr [EAX + 0x50c]        ; 0059eded
    FLD float ptr [EBP + 0x20]          ; 0059edf3
    FLD float ptr [ESP + 0x8c4]         ; 0059edf6
    FMUL ST1                            ; 0059edfd
    FLD float ptr [ESP + 0x8cc]         ; 0059edff
    FXCH ST3                            ; 0059ee06
    FSTP float ptr [ESP + 0x8c8]        ; 0059ee08
    FXCH ST2                            ; 0059ee0f
    FMUL float ptr [EAX + 0x510]        ; 0059ee11
    FLD float ptr [ESP + 0x8c8]         ; 0059ee17
    FMUL ST2                            ; 0059ee1e
    FLD ST2                             ; 0059ee20
    FLD1                                ; 0059ee22
    FSUBRP                              ; 0059ee24
    FXCH ST2                            ; 0059ee26
    FST float ptr [ESP + 0x8cc]         ; 0059ee28
    FMULP ST3                           ; 0059ee2f
    FXCH                                ; 0059ee31
    FSTP float ptr [ESP + 0x8e8]        ; 0059ee33
    LEA EBX,[EAX + 0x6a4]               ; 0059ee3a
    FXCH ST2                            ; 0059ee40
    FSTP float ptr [ESP + 0x8a0]        ; 0059ee42
    FXCH                                ; 0059ee49
    FSTP float ptr [ESP + 0x8a4]        ; 0059ee4b
    FSTP float ptr [ESP + 0x8a8]        ; 0059ee52
    FLD float ptr [EBX]                 ; 0059ee59
    FMUL float ptr [ESP + 0x8e8]        ; 0059ee5b
    FSTP float ptr [ESP + 0x894]        ; 0059ee62
    FLD float ptr [EBX + 0x4]           ; 0059ee69
    FMUL float ptr [ESP + 0x8e8]        ; 0059ee6c
    FSTP float ptr [ESP + 0x898]        ; 0059ee73
    FLD float ptr [EBX + 0x8]           ; 0059ee7a
    FMUL float ptr [ESP + 0x8e8]        ; 0059ee7d
    LEA EAX,[ESP + 0x8d0]               ; 0059ee84
    FLD float ptr [ESP + 0x894]         ; 0059ee8b
    FADD float ptr [ESP + 0x8a0]        ; 0059ee92
    FLD float ptr [ESP + 0x898]         ; 0059ee99
    FXCH                                ; 0059eea0
    FSTP float ptr [ESP + 0x8d0]        ; 0059eea2
    FADD float ptr [ESP + 0x8a4]        ; 0059eea9
    FXCH                                ; 0059eeb0
    FST float ptr [ESP + 0x89c]         ; 0059eeb2
    FADD float ptr [ESP + 0x8a8]        ; 0059eeb9
    FXCH                                ; 0059eec0
    FSTP float ptr [ESP + 0x8d4]        ; 0059eec2
    FSTP float ptr [ESP + 0x8d8]        ; 0059eec9
    CMP EBX,EAX                         ; 0059eed0
    JZ 0x0059eb6d                       ; 0059eed2
        ;   XREF to: 0059eb6d (CONDITIONAL_JUMP)  ; LAB_0059eb6d
    MOV EAX,dword ptr [ESP + 0x8d0]     ; 0059eed8
    MOV dword ptr [EBX],EAX             ; 0059eedf
    MOV EAX,dword ptr [ESP + 0x8d4]     ; 0059eee1
    MOV dword ptr [EBX + 0x4],EAX       ; 0059eee8
    MOV EAX,dword ptr [ESP + 0x8d8]     ; 0059eeeb
    MOV dword ptr [EBX + 0x8],EAX       ; 0059eef2
    MOV ESP,EBP                         ; 0059eef5
    POP EBP                             ; 0059eef7
    POP EDI                             ; 0059eef8
    POP ESI                             ; 0059eef9
    POP EBX                             ; 0059eefa
    RET                                 ; 0059eefb
    CMP EDI,0x1                         ; 0059eefc
        ;   Label: LAB_0059eefc
    JNZ 0x0059f1fa                      ; 0059eeff
        ;   XREF to: 0059f1fa (CONDITIONAL_JUMP)  ; LAB_0059f1fa
    XOR EDI,EDI                         ; 0059ef05
    MOV EDX,dword ptr [EAX + 0x28558]   ; 0059ef07
    MOV dword ptr [ESP + 0x918],EDI     ; 0059ef0d
    TEST EDX,EDX                        ; 0059ef14
    JLE 0x0059ef8c                      ; 0059ef16
        ;   XREF to: 0059ef8c (CONDITIONAL_JUMP)  ; LAB_0059ef8c
    MOV dword ptr [ESP + 0x8f4],EDI     ; 0059ef18
    MOV dword ptr [ESP + 0x910],EDI     ; 0059ef1f
    MOV EAX,dword ptr [EBP + 0x24]      ; 0059ef26
        ;   Label: LAB_0059ef26
    PUSH EAX                            ; 0059ef29
    MOV EDX,dword ptr [ESP + 0x91c]     ; 0059ef2a
    PUSH EDX                            ; 0059ef31
    PUSH EBX                            ; 0059ef32
    CALL core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100 ; 0059ef33
        ;   XREF to: 0059a100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100(CSkeleton * this_ptr, int start_bone_index, int target_bone_index)
    ADD ESP,0xc                         ; 0059ef38
    MOV ESI,dword ptr [ESP + 0x910]     ; 0059ef3b
    MOV dword ptr [ESP + ESI*0x1 + 0x644],EAX ; 0059ef42
    TEST EAX,EAX                        ; 0059ef49
    JGE 0x0059f10b                      ; 0059ef4b
        ;   XREF to: 0059f10b (CONDITIONAL_JUMP)  ; LAB_0059f10b
    MOV EDI,dword ptr [ESP + 0x910]     ; 0059ef51
        ;   Label: LAB_0059ef51
    MOV EAX,dword ptr [ESP + 0x8f4]     ; 0059ef58
    MOV EDX,dword ptr [ESP + 0x918]     ; 0059ef5f
    MOV ECX,dword ptr [EBX + 0x28558]   ; 0059ef66
    ADD EDI,0x4                         ; 0059ef6c
    ADD EAX,0x10                        ; 0059ef6f
    INC EDX                             ; 0059ef72
    MOV dword ptr [ESP + 0x910],EDI     ; 0059ef73
    MOV dword ptr [ESP + 0x8f4],EAX     ; 0059ef7a
    MOV dword ptr [ESP + 0x918],EDX     ; 0059ef81
    CMP EDX,ECX                         ; 0059ef88
    JL 0x0059ef26                       ; 0059ef8a
        ;   XREF to: 0059ef26 (CONDITIONAL_JUMP)  ; LAB_0059ef26
    MOV ESI,dword ptr [EBP + 0x24]      ; 0059ef8c
        ;   Label: LAB_0059ef8c
    LEA EAX,[ESI*0x8 + 0x0]             ; 0059ef8f
    ADD EAX,ESI                         ; 0059ef96
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x2857c] ; 0059ef98
    TEST EDI,EDI                        ; 0059ef9f
    JL 0x0059efd9                       ; 0059efa1
        ;   XREF to: 0059efd9 (CONDITIONAL_JUMP)  ; LAB_0059efd9
    MOV ESI,dword ptr [ESP + 0x8dc]     ; 0059efa3
    PUSH dword ptr [ESP]                ; 0059efaa
    PUSH ESI                            ; 0059efad
    MOV EAX,dword ptr [ESP + 0x8e8]     ; 0059efae
    PUSH EAX                            ; 0059efb5
    PUSH EDI                            ; 0059efb6
    PUSH EBX                            ; 0059efb7
    LEA ESI,[ESP + 0x858]               ; 0059efb8
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070 ; 0059efbf
        ;   XREF to: 0059a070 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070(CSkeleton * this_ptr, int bone_index, int frame_index_1, int frame_index_2, ...)
    SHL EDI,0x4                         ; 0059efc4
    ADD ESP,0x14                        ; 0059efc7
    LEA ESI,[ESP + 0x844]               ; 0059efca
    JMP 0x0060fc5d                      ; 0059efd1
        ;   XREF to: 0060fc5d (UNCONDITIONAL_JUMP)  ; LAB_0060fc5d
    XOR EDX,EDX                         ; 0059efd9
        ;   Label: LAB_0059efd9
    MOV ECX,dword ptr [EBX + 0x28558]   ; 0059efdb
    MOV dword ptr [ESP + 0x914],EDX     ; 0059efe1
    TEST ECX,ECX                        ; 0059efe8
    JLE 0x0059ecd9                      ; 0059efea
        ;   XREF to: 0059ecd9 (CONDITIONAL_JUMP)  ; LAB_0059ecd9
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059eff0
    ADD EAX,0x6b0                       ; 0059eff3
    MOV dword ptr [ESP + 0x8ec],EAX     ; 0059eff8
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059efff
    MOV dword ptr [ESP + 0x8fc],EDX     ; 0059f002
    MOV dword ptr [ESP + 0x900],EAX     ; 0059f009
    MOV EAX,dword ptr [ESP + 0x8ec]     ; 0059f010
    MOV dword ptr [ESP + 0x908],EBX     ; 0059f017
    MOV dword ptr [ESP + 0x8f8],EAX     ; 0059f01e
    MOV EAX,dword ptr [ESP + 0x8fc]     ; 0059f025
        ;   Label: LAB_0059f025
    CMP dword ptr [ESP + EAX*0x1 + 0x644],0x0 ; 0059f02c
    JL 0x0059f0a5                       ; 0059f034
        ;   XREF to: 0059f0a5 (CONDITIONAL_JUMP)  ; LAB_0059f0a5
    MOV ESI,dword ptr [ESP + 0x914]     ; 0059f036
    MOV EAX,dword ptr [ESP + 0x908]     ; 0059f03d
    SHL ESI,0x4                         ; 0059f044
    MOV EAX,dword ptr [EAX + 0x2857c]   ; 0059f047
    MOV dword ptr [ESP + 0x8f0],ESI     ; 0059f04d
    TEST EAX,EAX                        ; 0059f054
    JGE 0x0059f151                      ; 0059f056
        ;   XREF to: 0059f151 (CONDITIONAL_JUMP)  ; LAB_0059f151
    LEA EDI,[ESP + 0x864]               ; 0059f05c
    LEA ESI,[ESP + ESI*0x1 + 0x4]       ; 0059f063
    JMP 0x006055be                      ; 0059f067
        ;   XREF to: 006055be (UNCONDITIONAL_JUMP)  ; LAB_006055be
        ;   Label: LAB_0059f067
    PUSH dword ptr [EBP + 0x20]         ; 0059f072
        ;   Label: LAB_0059f072
    PUSH EAX                            ; 0059f075
    MOV ESI,dword ptr [ESP + 0x900]     ; 0059f076
    PUSH ESI                            ; 0059f07d
    LEA ESI,[ESP + 0x810]               ; 0059f07e
    CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0 ; 0059f085
        ;   XREF to: 005f77e0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_slerpQuaternion_FUN_005f77e0(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, float t, CQuaternion4f * quat_out)
    ADD ESP,0xc                         ; 0059f08a
    MOV EDI,dword ptr [ESP + 0x900]     ; 0059f08d
    LEA ESI,[ESP + 0x804]               ; 0059f094
    JMP 0x0060fc82                      ; 0059f09b
        ;   XREF to: 0060fc82 (UNCONDITIONAL_JUMP)  ; LAB_0060fc82
    MOV EDX,dword ptr [ESP + 0x8fc]     ; 0059f0a5
        ;   Label: LAB_0059f0a5
    MOV ECX,dword ptr [ESP + 0x908]     ; 0059f0ac
    MOV ESI,dword ptr [ESP + 0x900]     ; 0059f0b3
    MOV EDI,dword ptr [ESP + 0x8f8]     ; 0059f0ba
    MOV EAX,dword ptr [ESP + 0x914]     ; 0059f0c1
    ADD EDX,0x4                         ; 0059f0c8
    ADD ECX,0x24                        ; 0059f0cb
    ADD ESI,0x10                        ; 0059f0ce
    ADD EDI,0x10                        ; 0059f0d1
    INC EAX                             ; 0059f0d4
    MOV dword ptr [ESP + 0x8fc],EDX     ; 0059f0d5
    MOV dword ptr [ESP + 0x908],ECX     ; 0059f0dc
    MOV dword ptr [ESP + 0x900],ESI     ; 0059f0e3
    MOV dword ptr [ESP + 0x8f8],EDI     ; 0059f0ea
    MOV EDX,dword ptr [EBX + 0x28558]   ; 0059f0f1
    MOV dword ptr [ESP + 0x914],EAX     ; 0059f0f7
    CMP EAX,EDX                         ; 0059f0fe
    JGE 0x0059ecd9                      ; 0059f100
        ;   XREF to: 0059ecd9 (CONDITIONAL_JUMP)  ; LAB_0059ecd9
    JMP 0x0059f025                      ; 0059f106
        ;   XREF to: 0059f025 (UNCONDITIONAL_JUMP)  ; LAB_0059f025
    MOV ESI,dword ptr [ESP + 0x8dc]     ; 0059f10b
        ;   Label: LAB_0059f10b
    PUSH dword ptr [ESP]                ; 0059f112
    PUSH ESI                            ; 0059f115
    MOV EDI,dword ptr [ESP + 0x8e8]     ; 0059f116
    PUSH EDI                            ; 0059f11d
    MOV EAX,dword ptr [ESP + 0x924]     ; 0059f11e
    PUSH EAX                            ; 0059f125
    PUSH EBX                            ; 0059f126
    LEA ESI,[ESP + 0x828]               ; 0059f127
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070 ; 0059f12e
        ;   XREF to: 0059a070 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070(CSkeleton * this_ptr, int bone_index, int frame_index_1, int frame_index_2, ...)
    ADD ESP,0x14                        ; 0059f133
    MOV EDI,dword ptr [ESP + 0x8f4]     ; 0059f136
    LEA ESI,[ESP + 0x814]               ; 0059f13d
    JMP 0x006055e6                      ; 0059f144
        ;   XREF to: 006055e6 (UNCONDITIONAL_JUMP)  ; LAB_006055e6
    JMP 0x0059ef51                      ; 0059f14c
        ;   XREF to: 0059ef51 (UNCONDITIONAL_JUMP)  ; LAB_0059ef51
        ;   Label: LAB_0059f14c
    SHL EAX,0x4                         ; 0059f151
        ;   Label: LAB_0059f151
    MOV dword ptr [ESP + 0x920],EAX     ; 0059f154
    LEA EAX,[ESP + 0x4]                 ; 0059f15b
    ADD EAX,dword ptr [ESP + 0x920]     ; 0059f15f
    PUSH EAX                            ; 0059f166
    LEA ESI,[ESP + 0x858]               ; 0059f167
    LEA EDI,[ESP + 0x888]               ; 0059f16e
    CALL core_xform.cpp_negateFirstComponent_FUN_005f75e0 ; 0059f175
        ;   XREF to: 005f75e0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_negateFirstComponent_FUN_005f75e0(CQuaternion4f * vector_in, CQuaternion4f * vector_out)
    ADD ESP,0x4                         ; 0059f17a
    LEA EAX,[ESP + 0x884]               ; 0059f17d
    MOV EDX,dword ptr [ESP + 0x8f0]     ; 0059f184
    PUSH EAX                            ; 0059f18b
    LEA EAX,[ESP + 0x8]                 ; 0059f18c
    LEA ESI,[ESP + 0x858]               ; 0059f190
    JMP 0x0060560b                      ; 0059f197
        ;   XREF to: 0060560b (UNCONDITIONAL_JUMP)  ; LAB_0060560b
    PUSH EAX                            ; 0059f19d
        ;   Label: LAB_0059f19d
    LEA ESI,[ESP + 0x87c]               ; 0059f19e
    CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640 ; 0059f1a5
        ;   XREF to: 005f7640 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_005f7640(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, CQuaternion4f * quat_out)
    ADD ESP,0x8                         ; 0059f1aa
    MOV EAX,dword ptr [ESP + 0x8ec]     ; 0059f1ad
    MOV ECX,dword ptr [ESP + 0x920]     ; 0059f1b4
    LEA EDI,[ESP + 0x824]               ; 0059f1bb
    ADD EAX,ECX                         ; 0059f1c2
    LEA ESI,[ESP + 0x874]               ; 0059f1c4
    PUSH EAX                            ; 0059f1cb
    JMP 0x0060562e                      ; 0059f1cc
        ;   XREF to: 0060562e (UNCONDITIONAL_JUMP)  ; LAB_0060562e
    PUSH EAX                            ; 0059f1d7
        ;   Label: LAB_0059f1d7
    LEA ESI,[ESP + 0x83c]               ; 0059f1d8
    LEA EDI,[ESP + 0x86c]               ; 0059f1df
    CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640 ; 0059f1e6
        ;   XREF to: 005f7640 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_005f7640(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x83c]               ; 0059f1eb
    ADD ESP,0x8                         ; 0059f1f2
    JMP 0x0059f067                      ; 0059f1f5
        ;   XREF to: 0059f067 (UNCONDITIONAL_JUMP)  ; LAB_0059f067
    MOV ECX,0x64edd0                    ; 0059f1fa | = "..\\core\\skeleton.cpp"
        ;   Label: LAB_0059f1fa
    MOV ESI,0xa82                       ; 0059f1ff
    PUSH 0x64ede5                       ; 0059f204 | = "Write me!"
    MOV dword ptr [0x02f0ca48],ECX      ; 0059f209 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0059f20f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0059f215
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0059f21a
    JMP 0x0059ecd9                      ; 0059f21d
        ;   XREF to: 0059ecd9 (UNCONDITIONAL_JUMP)  ; LAB_0059ecd9
    MOV ECX,dword ptr [ESI]             ; 006055be
        ;   Label: LAB_006055be
    MOV dword ptr [EDI],ECX             ; 006055c0
    MOV ECX,dword ptr [ESI + 0x4]       ; 006055c2
    MOV dword ptr [EDI + 0x4],ECX       ; 006055c5
    MOV ECX,dword ptr [ESI + 0x8]       ; 006055c8
    MOV dword ptr [EDI + 0x8],ECX       ; 006055cb
    MOV ECX,dword ptr [ESI + 0xc]       ; 006055ce
    MOV dword ptr [EDI + 0xc],ECX       ; 006055d1
    ADD ESI,0x10                        ; 006055d4
    ADD EDI,0x10                        ; 006055d7
    LEA EAX,[ESP + 0x864]               ; 006055da
    JMP 0x0059f072                      ; 006055e1
        ;   XREF to: 0059f072 (UNCONDITIONAL_JUMP)  ; LAB_0059f072
    LEA EDI,[ESP + EDI*0x1 + 0x4]       ; 006055e6
        ;   Label: LAB_006055e6
    MOV ECX,dword ptr [ESI]             ; 006055ea
    MOV dword ptr [EDI],ECX             ; 006055ec
    MOV ECX,dword ptr [ESI + 0x4]       ; 006055ee
    MOV dword ptr [EDI + 0x4],ECX       ; 006055f1
    MOV ECX,dword ptr [ESI + 0x8]       ; 006055f4
    MOV dword ptr [EDI + 0x8],ECX       ; 006055f7
    MOV ECX,dword ptr [ESI + 0xc]       ; 006055fa
    MOV dword ptr [EDI + 0xc],ECX       ; 006055fd
    ADD ESI,0x10                        ; 00605600
    ADD EDI,0x10                        ; 00605603
    JMP 0x0059f14c                      ; 00605606
        ;   XREF to: 0059f14c (UNCONDITIONAL_JUMP)  ; LAB_0059f14c
    ADD EAX,EDX                         ; 0060560b
        ;   Label: LAB_0060560b
    MOV ECX,dword ptr [ESI]             ; 0060560d
    MOV dword ptr [EDI],ECX             ; 0060560f
    MOV ECX,dword ptr [ESI + 0x4]       ; 00605611
    MOV dword ptr [EDI + 0x4],ECX       ; 00605614
    MOV ECX,dword ptr [ESI + 0x8]       ; 00605617
    MOV dword ptr [EDI + 0x8],ECX       ; 0060561a
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060561d
    MOV dword ptr [EDI + 0xc],ECX       ; 00605620
    ADD ESI,0x10                        ; 00605623
    ADD EDI,0x10                        ; 00605626
    JMP 0x0059f19d                      ; 00605629
        ;   XREF to: 0059f19d (UNCONDITIONAL_JUMP)  ; LAB_0059f19d
    LEA EAX,[ESP + 0x828]               ; 0060562e
        ;   Label: LAB_0060562e
    MOV ECX,dword ptr [ESI]             ; 00605635
    MOV dword ptr [EDI],ECX             ; 00605637
    MOV ECX,dword ptr [ESI + 0x4]       ; 00605639
    MOV dword ptr [EDI + 0x4],ECX       ; 0060563c
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060563f
    MOV dword ptr [EDI + 0x8],ECX       ; 00605642
    MOV ECX,dword ptr [ESI + 0xc]       ; 00605645
    MOV dword ptr [EDI + 0xc],ECX       ; 00605648
    ADD ESI,0x10                        ; 0060564b
    ADD EDI,0x10                        ; 0060564e
    JMP 0x0059f1d7                      ; 00605651
        ;   XREF to: 0059f1d7 (UNCONDITIONAL_JUMP)  ; LAB_0059f1d7
    MOV ECX,dword ptr [ESI]             ; 0060e45a
        ;   Label: LAB_0060e45a
    MOV dword ptr [EDI],ECX             ; 0060e45c
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060e45e
    MOV dword ptr [EDI + 0x4],ECX       ; 0060e461
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060e464
    MOV dword ptr [EDI + 0x8],ECX       ; 0060e467
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060e46a
    MOV dword ptr [EDI + 0xc],ECX       ; 0060e46d
    ADD ESI,0x10                        ; 0060e470
    ADD EDI,0x10                        ; 0060e473
    PUSH ECX                            ; 0060e476
    JMP 0x0059ec73                      ; 0060e477
        ;   XREF to: 0059ec73 (UNCONDITIONAL_JUMP)  ; LAB_0059ec73
    LEA EDI,[EDI + 0x6b0]               ; 0060fc36
        ;   Label: LAB_0060fc36
    MOV ECX,dword ptr [ESI]             ; 0060fc3c
    MOV dword ptr [EDI],ECX             ; 0060fc3e
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060fc40
    MOV dword ptr [EDI + 0x4],ECX       ; 0060fc43
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060fc46
    MOV dword ptr [EDI + 0x8],ECX       ; 0060fc49
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060fc4c
    MOV dword ptr [EDI + 0xc],ECX       ; 0060fc4f
    ADD ESI,0x10                        ; 0060fc52
    ADD EDI,0x10                        ; 0060fc55
    JMP 0x0059ec9a                      ; 0060fc58
        ;   XREF to: 0059ec9a (UNCONDITIONAL_JUMP)  ; LAB_0059ec9a
    LEA EDI,[ESP + EDI*0x1 + 0x4]       ; 0060fc5d
        ;   Label: LAB_0060fc5d
    MOV ECX,dword ptr [ESI]             ; 0060fc61
    MOV dword ptr [EDI],ECX             ; 0060fc63
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060fc65
    MOV dword ptr [EDI + 0x4],ECX       ; 0060fc68
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060fc6b
    MOV dword ptr [EDI + 0x8],ECX       ; 0060fc6e
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060fc71
    MOV dword ptr [EDI + 0xc],ECX       ; 0060fc74
    ADD ESI,0x10                        ; 0060fc77
    ADD EDI,0x10                        ; 0060fc7a
    JMP 0x0059efd9                      ; 0060fc7d
        ;   XREF to: 0059efd9 (UNCONDITIONAL_JUMP)  ; LAB_0059efd9
    LEA EDI,[EDI + 0x6b0]               ; 0060fc82
        ;   Label: LAB_0060fc82
    MOV ECX,dword ptr [ESI]             ; 0060fc88
    MOV dword ptr [EDI],ECX             ; 0060fc8a
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060fc8c
    MOV dword ptr [EDI + 0x4],ECX       ; 0060fc8f
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060fc92
    MOV dword ptr [EDI + 0x8],ECX       ; 0060fc95
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060fc98
    MOV dword ptr [EDI + 0xc],ECX       ; 0060fc9b
    ADD ESI,0x10                        ; 0060fc9e
    ADD EDI,0x10                        ; 0060fca1
    JMP 0x0059f0a5                      ; 0060fca4
        ;   XREF to: 0059f0a5 (UNCONDITIONAL_JUMP)  ; LAB_0059f0a5

