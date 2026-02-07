; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_mimic_cpp_CMimic_FUN_0051fcc0(CMimic *this_ptr)
;
; Parameters:
; CMimic *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x1e4]:1  local_1e4
; undefined4       Stack[-0x1e0]:4  local_1e0
; undefined4       Stack[-0x1b0]:4  local_1b0
; undefined4       Stack[-0x1ac]:4  local_1ac
; undefined1       Stack[-0x1a8]:1  local_1a8
; undefined1       Stack[-0x178]:1  local_178
; undefined1       Stack[-0x148]:1  local_148
; undefined1       Stack[-0x130]:1  local_130
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined1       Stack[-0x118]:1  local_118
; undefined4       Stack[-0x110]:4  local_110
; undefined1       Stack[-0x10c]:1  local_10c
; undefined1       Stack[-0x100]:1  local_100
; undefined1       Stack[-0xfd]:1  local_fd
; undefined1       Stack[-0xf4]:1  local_f4
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined1       Stack[-0xc4]:1  local_c4
; undefined1       Stack[-0xc1]:1  local_c1
; undefined1       Stack[-0xb8]:1  local_b8
; undefined1       Stack[-0xac]:1  local_ac
; undefined1       Stack[-0xa9]:1  local_a9
; undefined1       Stack[-0xa0]:1  local_a0
; undefined1       Stack[-0x94]:1  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x80]:4  local_80
; undefined1       Stack[-0x7c]:1  local_7c
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined1       Stack[-0x58]:1  local_58
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined8       Stack[-0x38]:8  local_38
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined1       Stack[-0x10]:1  local_10
;
; XREF[1]:
;   core_mimic.cpp_CMimic_process_FUN_0051f780 at 0051f802
;
; Referenced Globals:
;   undefined4 DAT_00002424
;   TerminatedCString s_gh_alrt_1_4_wav_0063873c
;   double DOUBLE_00638763 = 2
;   float FLOAT_0063876b = 4.242857
;   float FLOAT_0063876f = 12.22222
;   double DOUBLE_00638773 = 1.57079632675000
;   double DOUBLE_0063877b = 0.785398163375000
;   double DOUBLE_00638783 = 15
;   double DOUBLE_0063878b = 0.636619772385777
;   double DOUBLE_00638793 = 25
;   double DOUBLE_0063879b = 30
;   double DOUBLE_006387a3 = 3.14159265350000
;   double DOUBLE_006387ab = 32
;   float FLOAT_00661408 = 2.5
;   CGame* g_CGamePtr = 02d81a9c
;   ... and 10 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_charactr.cpp_CCharacter_FUN_00428f40
;   core_charactr.cpp_CCharacter_FUN_00429820
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
;   core_cloth.cpp_CCloth_process_FUN_0043ab80
;   core_gore.cpp_CGore_FUN_004ede30
;   core_mimic.cpp_CMimic_beginMorph_FUN_00520a80
;   core_motion.cpp_CMotionController_advance_FUN_0052d610
;   core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051fcc0
        ;   Label: core_mimic.cpp_CMimic_FUN_0051fcc0
    PUSH ESI                            ; 0051fcc1
    PUSH EDI                            ; 0051fcc2
    PUSH EBP                            ; 0051fcc3
    MOV EBP,ESP                         ; 0051fcc4
    SUB ESP,0x1d4                       ; 0051fcc6
    SUB EBP,0x7a                        ; 0051fccc
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0051fccf
    PUSH 0x0                            ; 0051fcd5
    LEA EAX,[EBP + 0xffffff7e]          ; 0051fcd7
    PUSH EAX                            ; 0051fcdd
    MOV EAX,[0x02db87d0]                ; 0051fcde | g_LocalHeroIndex
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 0051fce3 | g_HeroActors
    ADD EAX,0x158                       ; 0051fcea
    PUSH EAX                            ; 0051fcef
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 0051fcf0
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 0051fcf5
    PUSH EAX                            ; 0051fcf8
    LEA EAX,[EBP + -0xa]                ; 0051fcf9
    PUSH EAX                            ; 0051fcfc
    MOV EAX,[0x02db87d0]                ; 0051fcfd | g_LocalHeroIndex
    MOV EDX,dword ptr [EAX*0x4 + 0x2db87c0] ; 0051fd02 | g_HeroActors
    PUSH EDX                            ; 0051fd09
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0051fd0a
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    MOV EAX,[0x02db87d0]                ; 0051fd0f | g_LocalHeroIndex
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 0051fd14 | g_HeroActors
    MOV EAX,dword ptr [EAX + 0x24]      ; 0051fd1b
    ADD ESP,0xc                         ; 0051fd1e
    MOV dword ptr [EBP + -0x6],EAX      ; 0051fd21
    LEA EAX,[EBP + -0xa]                ; 0051fd24
    PUSH EAX                            ; 0051fd27
    LEA EAX,[EBP + 0x2]                 ; 0051fd28
    PUSH EAX                            ; 0051fd2b
    PUSH EBX                            ; 0051fd2c
    MOV ESI,0xbf800000                  ; 0051fd2d
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 0051fd32
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    MOV EAX,dword ptr [EBP + 0x2]       ; 0051fd37
    MOV dword ptr [EBP + 0x6e],ESI      ; 0051fd3a
    MOV dword ptr [EBP + 0x1a],EAX      ; 0051fd3d
    MOV EAX,dword ptr [EBP + 0xa]       ; 0051fd40
    ADD ESP,0xc                         ; 0051fd43
    MOV dword ptr [EBP + 0x22],EAX      ; 0051fd46
    LEA EAX,[EBX + 0x158]               ; 0051fd49
    XOR ECX,ECX                         ; 0051fd4f
    PUSH EAX                            ; 0051fd51
    MOV dword ptr [EBP + 0x1e],ECX      ; 0051fd52
    MOV dword ptr [EBP + 0x72],EAX      ; 0051fd55
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 0051fd58
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV ESI,dword ptr [0x02db87d0]      ; 0051fd5d | g_LocalHeroIndex
    ADD ESP,0x4                         ; 0051fd63
    MOV EAX,dword ptr [EAX + 0x24]      ; 0051fd66
    SHL ESI,0x2                         ; 0051fd69
    CMP EAX,0x2                         ; 0051fd6c
    JNC 0x0052029d                      ; 0051fd6f
        ;   XREF to: 0052029d (CONDITIONAL_JUMP)  ; LAB_0052029d
    TEST EAX,EAX                        ; 0051fd75
    JBE 0x0051fe9d                      ; 0051fd77
        ;   XREF to: 0051fe9d (CONDITIONAL_JUMP)  ; LAB_0051fe9d
    MOV EAX,[0x02db87d0]                ; 0051fd7d | g_LocalHeroIndex
        ;   Label: LAB_0051fd7d
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 0051fd82 | g_HeroActors
    PUSH EAX                            ; 0051fd89
    MOV EDX,dword ptr [EAX + 0x154]     ; 0051fd8a
    CALL dword ptr [EDX + 0x120]        ; 0051fd90
    ADD ESP,0x4                         ; 0051fd96
    TEST EAX,EAX                        ; 0051fd99
    JZ 0x0051fff9                       ; 0051fd9b
        ;   XREF to: 0051fff9 (CONDITIONAL_JUMP)  ; LAB_0051fff9
    PUSH 0x1                            ; 0051fda1
        ;   Label: LAB_0051fda1
    PUSH 0x0                            ; 0051fda3
    LEA EAX,[EBX + 0x158]               ; 0051fda5
        ;   Label: LAB_0051fda5
    PUSH EAX                            ; 0051fdab
        ;   Label: LAB_0051fdab
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0051fdac
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_0051fdac
    ADD ESP,0xc                         ; 0051fdb1
    FLD float ptr [EBP + 0x6e]          ; 0051fdb4
        ;   Label: LAB_0051fdb4
    FLDZ                                ; 0051fdb7
    FCOMPP                              ; 0051fdb9
    FNSTSW AX                           ; 0051fdbb
    SAHF                                ; 0051fdbd
    JBE 0x005202c0                      ; 0051fdbe
        ;   XREF to: 005202c0 (CONDITIONAL_JUMP)  ; LAB_005202c0
    FLD float ptr [EBP + 0x92]          ; 0051fdc4
        ;   Label: LAB_0051fdc4
    FMUL float ptr [EBX + 0xbe24]       ; 0051fdca
    LEA ESI,[EBX + 0x158]               ; 0051fdd0
    FSTP float ptr [EBP + 0x5e]         ; 0051fdd6
    FLD float ptr [EBP + 0x5e]          ; 0051fdd9
        ;   Label: LAB_0051fdd9
    FLDZ                                ; 0051fddc
    FCOMPP                              ; 0051fdde
    FNSTSW AX                           ; 0051fde0
    SAHF                                ; 0051fde2
    JNC 0x00520398                      ; 0051fde3
        ;   XREF to: 00520398 (CONDITIONAL_JUMP)  ; LAB_00520398
    LEA EAX,[EBP + 0x5e]                ; 0051fde9
    PUSH EAX                            ; 0051fdec
    PUSH ESI                            ; 0051fded
    CALL core_motion.cpp_CMotionController_advance_FUN_0052d610 ; 0051fdee
        ;   XREF to: 0052d610 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr)
    ADD ESP,0x8                         ; 0051fdf3
    CMP EAX,0x1                         ; 0051fdf6
    JC 0x0051fdd9                       ; 0051fdf9
        ;   XREF to: 0051fdd9 (CONDITIONAL_JUMP)  ; LAB_0051fdd9
    JA 0x0052038e                       ; 0051fdfb
        ;   XREF to: 0052038e (CONDITIONAL_JUMP)  ; LAB_0052038e
    CMP dword ptr [EBX + 0x2410],0x0    ; 0051fe01
    JZ 0x0051fdd9                       ; 0051fe08
        ;   XREF to: 0051fdd9 (CONDITIONAL_JUMP)  ; LAB_0051fdd9
    MOV EDX,dword ptr [0x02f33394]      ; 0051fe0a | INT_02f33394
    PUSH EDX                            ; 0051fe10
    LEA EAX,[EBP + -0x3a]               ; 0051fe11
    PUSH EAX                            ; 0051fe14
    PUSH ESI                            ; 0051fe15
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 0051fe16
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 0051fe1b
    MOV DH,byte ptr [EBP + -0x37]       ; 0051fe1e
    LEA EAX,[EBP + -0x3a]               ; 0051fe21
    PUSH 0x3f800000                     ; 0051fe24
    XOR DH,0x80                         ; 0051fe29
    PUSH EAX                            ; 0051fe2c
    MOV byte ptr [EBP + -0x37],DH       ; 0051fe2d
    PUSH EBX                            ; 0051fe30
    MOV EDX,dword ptr [EBX + 0x154]     ; 0051fe31
    CALL dword ptr [EDX + 0x1c]         ; 0051fe37
    ADD ESP,0xc                         ; 0051fe3a
    JMP 0x0051fdd9                      ; 0051fe3d
        ;   XREF to: 0051fdd9 (UNCONDITIONAL_JUMP)  ; LAB_0051fdd9
    MOV EDX,dword ptr [EBX + 0xbe28]    ; 0051fe3f
        ;   Label: LAB_0051fe3f
    TEST EDX,EDX                        ; 0051fe45
    JNZ 0x0051fdb4                      ; 0051fe47
        ;   XREF to: 0051fdb4 (CONDITIONAL_JUMP)  ; LAB_0051fdb4
    CMP dword ptr [EBX + 0xdc],0x0      ; 0051fe4d
    JNZ 0x0051fdb4                      ; 0051fe54
        ;   XREF to: 0051fdb4 (CONDITIONAL_JUMP)  ; LAB_0051fdb4
    PUSH EDX                            ; 0051fe5a
    LEA EAX,[EBP + -0x16]               ; 0051fe5b
    PUSH EAX                            ; 0051fe5e
    MOV ESI,dword ptr [EBP + 0x72]      ; 0051fe5f
    PUSH ESI                            ; 0051fe62
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 0051fe63
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 0051fe68
    PUSH EAX                            ; 0051fe6b
    LEA EAX,[EBP + 0xe]                 ; 0051fe6c
    PUSH EAX                            ; 0051fe6f
    PUSH EBX                            ; 0051fe70
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0051fe71
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0051fe76
    PUSH 0x0                            ; 0051fe79
    LEA EAX,[EBP + 0xe]                 ; 0051fe7b
    PUSH EAX                            ; 0051fe7e
    MOV EDI,dword ptr [0x0067b9a0]      ; 0051fe7f | g_CGorePtr
    PUSH EDI                            ; 0051fe85 | g_CGoreInstance
    CALL core_gore.cpp_CGore_FUN_004ede30 ; 0051fe86
        ;   XREF to: 004ede30 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_FUN_004ede30(CGore * this_ptr)
    ADD ESP,0xc                         ; 0051fe8b
    MOV dword ptr [EBX + 0xbe28],0x1    ; 0051fe8e
    JMP 0x0051fdb4                      ; 0051fe98
        ;   XREF to: 0051fdb4 (UNCONDITIONAL_JUMP)  ; LAB_0051fdb4
    MOV EAX,dword ptr [ESI + 0x2db87c0] ; 0051fe9d | g_HeroActors
        ;   Label: LAB_0051fe9d
    PUSH EAX                            ; 0051fea3
    MOV EDX,dword ptr [EAX + 0x154]     ; 0051fea4
    CALL dword ptr [EDX + 0x120]        ; 0051feaa
    ADD ESP,0x4                         ; 0051feb0
    TEST EAX,EAX                        ; 0051feb3
    JNZ 0x0051fdb4                      ; 0051feb5
        ;   XREF to: 0051fdb4 (CONDITIONAL_JUMP)  ; LAB_0051fdb4
    MOV EAX,[0x0067b654]                ; 0051febb | g_CGamePtr
    CMP dword ptr [EAX + 0x1d4],0x0     ; 0051fec0 | DAT_02d81c70
    JNZ 0x0051fdb4                      ; 0051fec7
        ;   XREF to: 0051fdb4 (CONDITIONAL_JUMP)  ; LAB_0051fdb4
    MOV EAX,[0x02db87d0]                ; 0051fecd | g_LocalHeroIndex
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 0051fed2 | g_HeroActors
    FLD float ptr [EBX + 0x24]          ; 0051fed9
    FSUB float ptr [EAX + 0x24]         ; 0051fedc
    FABS                                ; 0051fedf
    FCOMP double ptr [0x00638783]       ; 0051fee1 | DOUBLE_00638783
    FNSTSW AX                           ; 0051fee7
    SAHF                                ; 0051fee9
    JA 0x0051fdb4                       ; 0051feea
        ;   XREF to: 0051fdb4 (CONDITIONAL_JUMP)  ; LAB_0051fdb4
    LEA EAX,[EBP + 0x1a]                ; 0051fef0
    PUSH EAX                            ; 0051fef3
    LEA EAX,[EBP + 0x32]                ; 0051fef4
    PUSH EAX                            ; 0051fef7
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 0051fef8
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 0051fefd
    PUSH dword ptr [EAX + 0x4]          ; 0051ff00
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 0051ff03
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 0051ff08
    FLD float ptr [EBP + 0x76]          ; 0051ff0b
    FABS                                ; 0051ff0e
    FLD float ptr [EBP + 0x1e]          ; 0051ff10
    FMUL ST0                            ; 0051ff13
    FLD float ptr [EBP + 0x1a]          ; 0051ff15
    FMUL ST0                            ; 0051ff18
    FADDP                               ; 0051ff1a
    FLD float ptr [EBP + 0x22]          ; 0051ff1c
    FMUL ST0                            ; 0051ff1f
    FADDP                               ; 0051ff21
    FSQRT                               ; 0051ff23
    FXCH                                ; 0051ff25
    FMUL double ptr [0x0063878b]        ; 0051ff27 | DOUBLE_0063878b
    FLD1                                ; 0051ff2d
    FSUBRP                              ; 0051ff2f
    FMUL double ptr [0x00638793]        ; 0051ff31 | DOUBLE_00638793
    FADD double ptr [0x0063879b]        ; 0051ff37 | DOUBLE_0063879b
    ADD ESP,0x4                         ; 0051ff3d
    FXCH                                ; 0051ff40
    FCOMPP                              ; 0051ff42
    FNSTSW AX                           ; 0051ff44
    SAHF                                ; 0051ff46
    JNC 0x0051fdb4                      ; 0051ff47
        ;   XREF to: 0051fdb4 (CONDITIONAL_JUMP)  ; LAB_0051fdb4
    MOV ECX,dword ptr [0x02f33378]      ; 0051ff4d | INT_02f33378
    PUSH ECX                            ; 0051ff53
    MOV ESI,dword ptr [EBP + 0x72]      ; 0051ff54
    PUSH ESI                            ; 0051ff57
    LEA ESI,[EBP + 0xfffffee2]          ; 0051ff58
    LEA EDI,[EBP + 0xffffff12]          ; 0051ff5e
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820 ; 0051ff64
        ;   XREF to: 0059f820 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820(CDeformableModelInstance * this_ptr, int bone_index, CMatrix3x4f * out_matrix)
    MOV ECX,0xc                         ; 0051ff69
    ADD ESP,0x8                         ; 0051ff6e
    LEA EAX,[EBP + 0xffffff12]          ; 0051ff71
    LEA ESI,[EBP + 0xfffffee2]          ; 0051ff77
    PUSH EAX                            ; 0051ff7d
    MOV EAX,0x3f333333                  ; 0051ff7e
    MOV EDX,0x3e99999a                  ; 0051ff83
    MOV dword ptr [EBP + 0x42],EAX      ; 0051ff88
    LEA EAX,[EBP + 0x3e]                ; 0051ff8b
    MOVSD.REP ES:EDI,ESI                ; 0051ff8e
    PUSH EAX                            ; 0051ff90
    LEA EAX,[EBP + -0x2e]               ; 0051ff91
    XOR EDI,EDI                         ; 0051ff94
    PUSH EAX                            ; 0051ff96
    MOV dword ptr [EBP + 0x46],EDX      ; 0051ff97
    MOV dword ptr [EBP + 0x3e],EDI      ; 0051ff9a
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 0051ff9d
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 0051ffa2
    PUSH EAX                            ; 0051ffa5
    LEA EAX,[EBP + -0x6a]               ; 0051ffa6
    PUSH EAX                            ; 0051ffa9
    PUSH EBX                            ; 0051ffaa
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0051ffab
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0051ffb0
    LEA EAX,[EBP + -0xa]                ; 0051ffb3
    PUSH EAX                            ; 0051ffb6
    LEA EAX,[EBP + -0x6a]               ; 0051ffb7
    PUSH EAX                            ; 0051ffba
    MOV ECX,dword ptr [0x006810c8]      ; 0051ffbb | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH ECX                            ; 0051ffc1 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_testVoxelRaycast_FUN_00572510 ; 0051ffc2
        ;   XREF to: 00572510 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_testVoxelRaycast_FUN_00572510(CDemonSet * this_ptr, CVector3f * start_pos, CVector3f * end_pos)
    ADD ESP,0xc                         ; 0051ffc7
    TEST EAX,EAX                        ; 0051ffca
    JNZ 0x0051fdb4                      ; 0051ffcc
        ;   XREF to: 0051fdb4 (CONDITIONAL_JUMP)  ; LAB_0051fdb4
    PUSH 0x1                            ; 0051ffd2
    PUSH 0x2                            ; 0051ffd4
    MOV ESI,dword ptr [EBP + 0x72]      ; 0051ffd6
    PUSH ESI                            ; 0051ffd9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0051ffda
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0051ffdf
    PUSH 0x63873c                       ; 0051ffe2 | = "gh-alrt[1,4].wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0051ffe7
    PUSH EBX                            ; 0051ffed
    CALL dword ptr [EAX + 0x24]         ; 0051ffee
    ADD ESP,0x8                         ; 0051fff1
    JMP 0x0051fdb4                      ; 0051fff4
        ;   XREF to: 0051fdb4 (UNCONDITIONAL_JUMP)  ; LAB_0051fdb4
    MOV EAX,[0x0067b654]                ; 0051fff9 | g_CGamePtr
        ;   Label: LAB_0051fff9
    CMP dword ptr [EAX + 0x1d4],0x0     ; 0051fffe | DAT_02d81c70
    JNZ 0x0051fda1                      ; 00520005
        ;   XREF to: 0051fda1 (CONDITIONAL_JUMP)  ; LAB_0051fda1
    LEA EAX,[EBX + 0x20]                ; 0052000b
    PUSH EAX                            ; 0052000e
    LEA EAX,[EBP + 0xffffff72]          ; 0052000f
    PUSH EAX                            ; 00520015
    MOV ECX,dword ptr [EBX + 0x4bdf8]   ; 00520016
    PUSH ECX                            ; 0052001c
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 0052001d
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 00520022
    LEA EAX,[EBP + 0xffffff42]          ; 00520025
    PUSH EAX                            ; 0052002b
    MOV EDX,dword ptr [EBX + 0x154]     ; 0052002c
    PUSH EBX                            ; 00520032
    CALL dword ptr [EDX + 0x14]         ; 00520033
    LEA EDX,[EAX + 0xc]                 ; 00520036
    FLD float ptr [EDX]                 ; 00520039
    FSUB float ptr [EAX]                ; 0052003b
    FSTP float ptr [EBP + -0x52]        ; 0052003d
    FLD float ptr [EDX + 0x4]           ; 00520040
    FSUB float ptr [EAX + 0x4]          ; 00520043
    FLD float ptr [EBP + -0x52]         ; 00520046
    FXCH                                ; 00520049
    FSTP float ptr [EBP + -0x4e]        ; 0052004b
    FLD float ptr [EDX + 0x8]           ; 0052004e
    FSUB float ptr [EAX + 0x8]          ; 00520051
    FXCH                                ; 00520054
    FMUL float ptr [EBP + -0x52]        ; 00520056
    FXCH                                ; 00520059
    FST float ptr [EBP + -0x4a]         ; 0052005b
    FMUL float ptr [EBP + -0x4a]        ; 0052005e
    FADDP                               ; 00520061
    FSQRT                               ; 00520063
    XOR ESI,ESI                         ; 00520065
    FLD float ptr [EBP + 0xffffff7a]    ; 00520067
    ADD ESP,0x8                         ; 0052006d
    FCHS                                ; 00520070
    MOV dword ptr [EBP + -0x4e],ESI     ; 00520072
    FXCH                                ; 00520075
    FCOMPP                              ; 00520077
    FNSTSW AX                           ; 00520079
    SAHF                                ; 0052007b
    JNC 0x0052008c                      ; 0052007c
        ;   XREF to: 0052008c (CONDITIONAL_JUMP)  ; LAB_0052008c
    PUSH EBX                            ; 0052007e
    CALL core_mimic.cpp_CMimic_beginMorph_FUN_00520a80 ; 0052007f
        ;   XREF to: 00520a80 (UNCONDITIONAL_CALL)  ; void core_mimic.cpp_CMimic_beginMorph_FUN_00520a80(CMimic * this_ptr)
    ADD ESP,0x4                         ; 00520084
    JMP 0x0051fdb4                      ; 00520087
        ;   XREF to: 0051fdb4 (UNCONDITIONAL_JUMP)  ; LAB_0051fdb4
    PUSH 0x1                            ; 0052008c
        ;   Label: LAB_0052008c
    LEA ESI,[EBX + 0x158]               ; 0052008e
    PUSH ESI                            ; 00520094
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 00520095
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [EBP + 0x76],EAX      ; 0052009a
    ADD ESP,0x8                         ; 0052009d
    FLD float ptr [EBP + 0x76]          ; 005200a0
    PUSH 0x2                            ; 005200a3
    FMUL float ptr [0x0063876b]         ; 005200a5 | FLOAT_0063876b
    PUSH ESI                            ; 005200ab
    FSTP float ptr [EBX + 0x2434]       ; 005200ac
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 005200b2
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    FLD float ptr [EBX + 0xbe24]        ; 005200b7
    MOV dword ptr [EBP + 0x76],EAX      ; 005200bd
    FLD float ptr [EBP + 0x92]          ; 005200c0
    FXCH                                ; 005200c6
    FMUL ST1                            ; 005200c8
    FLD float ptr [EBP + 0x76]          ; 005200ca
    FMUL float ptr [0x0063876f]         ; 005200cd | FLOAT_0063876f
    FLD float ptr [EBX + 0xbe24]        ; 005200d3
    FXCH ST3                            ; 005200d9
    FMUL double ptr [0x00638773]        ; 005200db | DOUBLE_00638773
    FXCH                                ; 005200e1
    FADD float ptr [EBX + 0x2434]       ; 005200e3
    FXCH                                ; 005200e9
    FMULP ST3                           ; 005200eb
    FSTP float ptr [EBX + 0x2434]       ; 005200ed
    FMUL float ptr [EBX + 0x2434]       ; 005200f3
    ADD ESP,0x8                         ; 005200f9
    MOV EAX,[0x00661408]                ; 005200fc | FLOAT_00661408
    PUSH 0x3e32b8c2                     ; 00520101
    FXCH                                ; 00520106
    FSTP float ptr [EBX + 0x2438]       ; 00520108
    FSTP float ptr [EBX + 0x2434]       ; 0052010e
    MOV dword ptr [EBP + -0x56],EAX     ; 00520114
    LEA EAX,[EBP + -0x5e]               ; 00520117
    PUSH 0x3f800000                     ; 0052011a
    PUSH EAX                            ; 0052011f
    MOV EAX,[0x02db87d0]                ; 00520120 | g_LocalHeroIndex
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 00520125 | g_HeroActors
    LEA EDX,[EAX + 0xbe58]              ; 0052012c
    PUSH EDX                            ; 00520132
    ADD EAX,0x20                        ; 00520133
    PUSH EAX                            ; 00520136
    XOR EDI,EDI                         ; 00520137
    PUSH EBX                            ; 00520139
    MOV dword ptr [EBP + -0x5e],EDI     ; 0052013a
    MOV dword ptr [EBP + -0x5a],EDI     ; 0052013d
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 ; 00520140
        ;   XREF to: 004286e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter * this_ptr)
    ADD ESP,0x18                        ; 00520145
    TEST EAX,EAX                        ; 00520148
    JL 0x0052015c                       ; 0052014a
        ;   XREF to: 0052015c (CONDITIONAL_JUMP)  ; LAB_0052015c
    JLE 0x00520165                      ; 0052014c
        ;   XREF to: 00520165 (CONDITIONAL_JUMP)  ; LAB_00520165
    PUSH EBX                            ; 0052014e
    CALL core_mimic.cpp_CMimic_beginMorph_FUN_00520a80 ; 0052014f
        ;   XREF to: 00520a80 (UNCONDITIONAL_CALL)  ; void core_mimic.cpp_CMimic_beginMorph_FUN_00520a80(CMimic * this_ptr)
    ADD ESP,0x4                         ; 00520154
    JMP 0x0051fdb4                      ; 00520157
        ;   XREF to: 0051fdb4 (UNCONDITIONAL_JUMP)  ; LAB_0051fdb4
    PUSH 0x1                            ; 0052015c
        ;   Label: LAB_0052015c
    PUSH EDI                            ; 0052015e
    PUSH ESI                            ; 0052015f
    JMP 0x0051fdac                      ; 00520160
        ;   XREF to: 0051fdac (UNCONDITIONAL_JUMP)  ; LAB_0051fdac
    FLD float ptr [EBP + 0x92]          ; 00520165
        ;   Label: LAB_00520165
    FMUL float ptr [EBX + 0xbe24]       ; 0052016b
    FLD float ptr [EBX + 0x2418]        ; 00520171
    FABS                                ; 00520177
    FDIVRP                              ; 00520179
    FCOMP double ptr [0x0063877b]       ; 0052017b | DOUBLE_0063877b
    FNSTSW AX                           ; 00520181
    SAHF                                ; 00520183
    JBE 0x00520190                      ; 00520184
        ;   XREF to: 00520190 (CONDITIONAL_JUMP)  ; LAB_00520190
    PUSH 0x1                            ; 00520186
    PUSH 0x1                            ; 00520188
    PUSH ESI                            ; 0052018a
    JMP 0x0051fdac                      ; 0052018b
        ;   XREF to: 0051fdac (UNCONDITIONAL_JUMP)  ; LAB_0051fdac
    PUSH 0x1                            ; 00520190
        ;   Label: LAB_00520190
    PUSH 0x2                            ; 00520192
    PUSH ESI                            ; 00520194
    JMP 0x0051fdac                      ; 00520195
        ;   XREF to: 0051fdac (UNCONDITIONAL_JUMP)  ; LAB_0051fdac
    MOV EAX,dword ptr [ESI + 0x2db87c0] ; 0052019a | g_HeroActors
        ;   Label: LAB_0052019a
    CMP dword ptr [EAX + 0x2598],0x0    ; 005201a0
    JZ 0x005201b5                       ; 005201a7
        ;   XREF to: 005201b5 (CONDITIONAL_JUMP)  ; LAB_005201b5
    PUSH 0x1                            ; 005201a9
    PUSH 0x0                            ; 005201ab
    MOV EAX,dword ptr [EBP + 0x72]      ; 005201ad
    JMP 0x0051fdab                      ; 005201b0
        ;   XREF to: 0051fdab (UNCONDITIONAL_JUMP)  ; LAB_0051fdab
    MOV ECX,dword ptr [EBP + 0x72]      ; 005201b5
        ;   Label: LAB_005201b5
    PUSH ECX                            ; 005201b8
    CALL core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0 ; 005201b9
        ;   XREF to: 0052e2b0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 005201be
    ADD ESP,0x4                         ; 005201c1
    MOV EAX,dword ptr [EBP + 0x76]      ; 005201c4
    MOV dword ptr [EBP + 0x6a],EAX      ; 005201c7
    FLD float ptr [EBP + 0x6a]          ; 005201ca
    FST double ptr [EBP + 0x52]         ; 005201cd
    FCOMP double ptr [0x00638763]       ; 005201d0 | DOUBLE_00638763
    FNSTSW AX                           ; 005201d6
    SAHF                                ; 005201d8
    JA 0x0051fdb4                       ; 005201d9
        ;   XREF to: 0051fdb4 (CONDITIONAL_JUMP)  ; LAB_0051fdb4
    MOV EAX,[0x00661408]                ; 005201df | FLOAT_00661408
    FLD1                                ; 005201e4
    MOV dword ptr [EBP + 0x6e],EAX      ; 005201e6
    FCOMP double ptr [EBP + 0x52]       ; 005201e9
    FNSTSW AX                           ; 005201ec
    SAHF                                ; 005201ee
    JA 0x0051fdb4                       ; 005201ef
        ;   XREF to: 0051fdb4 (CONDITIONAL_JUMP)  ; LAB_0051fdb4
    PUSH 0x41700000                     ; 005201f5
    PUSH 0x40e00000                     ; 005201fa
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 005201ff
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    JBE 0x0051fd7d                      ; 0052029d
        ;   XREF to: 0051fd7d (CONDITIONAL_JUMP)  ; LAB_0051fd7d
        ;   Label: LAB_0052029d
    CMP EAX,0xc                         ; 005202a3
    JC 0x005202b7                       ; 005202a6
        ;   XREF to: 005202b7 (CONDITIONAL_JUMP)  ; LAB_005202b7
    JBE 0x0051fe3f                      ; 005202a8
        ;   XREF to: 0051fe3f (CONDITIONAL_JUMP)  ; LAB_0051fe3f
    CMP EAX,0x13                        ; 005202ae
    JZ 0x0052019a                       ; 005202b1
        ;   XREF to: 0052019a (CONDITIONAL_JUMP)  ; LAB_0052019a
    PUSH 0x1                            ; 005202b7
        ;   Label: LAB_005202b7
    PUSH 0x2                            ; 005202b9
    JMP 0x0051fda5                      ; 005202bb
        ;   XREF to: 0051fda5 (UNCONDITIONAL_JUMP)  ; LAB_0051fda5
    FLD float ptr [EBX + 0xbe24]        ; 005202c0
        ;   Label: LAB_005202c0
    FLD ST0                             ; 005202c6
    FLD float ptr [EBP + 0x92]          ; 005202c8
    FLD ST0                             ; 005202ce
    FMUL double ptr [0x006387a3]        ; 005202d0 | DOUBLE_006387a3
    FXCH ST3                            ; 005202d6
    FMULP                               ; 005202d8
    FXCH ST2                            ; 005202da
    FMULP                               ; 005202dc
    PUSH 0x3f060a92                     ; 005202de
    MOV EAX,dword ptr [EBP + 0x6e]      ; 005202e3
    FXCH                                ; 005202e6
    FSTP float ptr [EBX + 0x2434]       ; 005202e8
    FSTP float ptr [EBX + 0x2438]       ; 005202ee
    MOV dword ptr [EBP + 0x2e],EAX      ; 005202f4
    LEA EAX,[EBP + 0x26]                ; 005202f7
    PUSH 0x40400000                     ; 005202fa
    PUSH EAX                            ; 005202ff
    MOV EAX,[0x02db87d0]                ; 00520300 | g_LocalHeroIndex
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 00520305 | g_HeroActors
    LEA EDX,[EAX + 0xbe58]              ; 0052030c
    PUSH EDX                            ; 00520312
    ADD EAX,0x20                        ; 00520313
    PUSH EAX                            ; 00520316
    XOR EDI,EDI                         ; 00520317
    PUSH EBX                            ; 00520319
    MOV dword ptr [EBP + 0x26],EDI      ; 0052031a
    MOV dword ptr [EBP + 0x2a],EDI      ; 0052031d
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 ; 00520320
        ;   XREF to: 004286e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter * this_ptr)
    ADD ESP,0x18                        ; 00520325
    CMP EAX,0x1                         ; 00520328
    JZ 0x0051fdc4                       ; 0052032b
        ;   XREF to: 0051fdc4 (CONDITIONAL_JUMP)  ; LAB_0051fdc4
    PUSH 0x1                            ; 00520331
    PUSH 0x2                            ; 00520333
    LEA EAX,[EBX + 0x158]               ; 00520335
    PUSH EAX                            ; 0052033b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0052033c
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00520341
    JMP 0x0051fdc4                      ; 00520344
        ;   XREF to: 0051fdc4 (UNCONDITIONAL_JUMP)  ; LAB_0051fdc4
    CMP dword ptr [EBX + 0x2410],0x0    ; 00520349
        ;   Label: LAB_00520349
    JZ 0x0051fdd9                       ; 00520350
        ;   XREF to: 0051fdd9 (CONDITIONAL_JUMP)  ; LAB_0051fdd9
    MOV EDI,dword ptr [0x02f33398]      ; 00520356 | INT_02f33398
    PUSH EDI                            ; 0052035c
    LEA EAX,[EBP + -0x76]               ; 0052035d
    PUSH EAX                            ; 00520360
    PUSH ESI                            ; 00520361
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 00520362
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    MOV DL,byte ptr [EBP + -0x73]       ; 00520367
    XOR DL,0x80                         ; 0052036a
    ADD ESP,0xc                         ; 0052036d
    MOV byte ptr [EBP + -0x73],DL       ; 00520370
    LEA EDX,[EBP + -0x76]               ; 00520373
    PUSH 0x3f800000                     ; 00520376
    PUSH EDX                            ; 0052037b
    MOV EAX,dword ptr [EBX + 0x154]     ; 0052037c
    PUSH EBX                            ; 00520382
    CALL dword ptr [EAX + 0x1c]         ; 00520383
    ADD ESP,0xc                         ; 00520386
    JMP 0x0051fdd9                      ; 00520389
        ;   XREF to: 0051fdd9 (UNCONDITIONAL_JUMP)  ; LAB_0051fdd9
    CMP EAX,0x7                         ; 0052038e
        ;   Label: LAB_0052038e
    JZ 0x00520349                       ; 00520391
        ;   XREF to: 00520349 (CONDITIONAL_JUMP)  ; LAB_00520349
    JMP 0x0051fdd9                      ; 00520393
        ;   XREF to: 0051fdd9 (UNCONDITIONAL_JUMP)  ; LAB_0051fdd9
    PUSH EBX                            ; 00520398
        ;   Label: LAB_00520398
    CALL core_charactr.cpp_CCharacter_FUN_00429820 ; 00520399
        ;   XREF to: 00429820 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_00429820(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0052039e
    PUSH ESI                            ; 005203a1
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005203a2
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EDX,dword ptr [EAX + 0x24]      ; 005203a7
    ADD ESP,0x4                         ; 005203aa
    MOV EAX,EDX                         ; 005203ad
    CMP EDX,0xc                         ; 005203af
    JZ 0x005204c6                       ; 005203b2
        ;   XREF to: 005204c6 (CONDITIONAL_JUMP)  ; LAB_005204c6
    TEST EDX,EDX                        ; 005203b8
    JZ 0x005204c6                       ; 005203ba
        ;   XREF to: 005204c6 (CONDITIONAL_JUMP)  ; LAB_005204c6
    FLD float ptr [EBP + 0x92]          ; 005203c0
        ;   Label: LAB_005203c0
    FLD ST0                             ; 005203c6
    FMUL double ptr [0x006387ab]        ; 005203c8 | DOUBLE_006387ab
    FLD float ptr [EBX + 0x242c]        ; 005203ce
    FXCH                                ; 005203d4
    FSUBR ST0,ST1                       ; 005203d6
    LEA EDX,[EBX + 0x2428]              ; 005203d8
    FSTP ST1                            ; 005203de
    FSTP float ptr [EBX + 0x242c]       ; 005203e0
    FLD float ptr [EDX]                 ; 005203e6
    FMUL ST1                            ; 005203e8
    FSTP float ptr [EBP + -0x46]        ; 005203ea
    FLD float ptr [EDX + 0x4]           ; 005203ed
    FMUL ST1                            ; 005203f0
    FSTP float ptr [EBP + -0x42]        ; 005203f2
    FMUL float ptr [EDX + 0x8]          ; 005203f5
    LEA ESI,[EBX + 0x241c]              ; 005203f8
    FLD float ptr [EBP + -0x46]         ; 005203fe
    FXCH                                ; 00520401
    FSTP float ptr [EBP + -0x3e]        ; 00520403
    FADD float ptr [ESI]                ; 00520406
    FLD float ptr [EBP + -0x42]         ; 00520408
    FXCH                                ; 0052040b
    FSTP float ptr [EBP + 0xffffff66]   ; 0052040d
    FADD float ptr [ESI + 0x4]          ; 00520413
    FLD float ptr [EBP + -0x3e]         ; 00520416
    FXCH                                ; 00520419
    FSTP float ptr [EBP + 0xffffff6a]   ; 0052041b
    FADD float ptr [ESI + 0x8]          ; 00520421 | DAT_00002424
    FSTP float ptr [EBP + 0xffffff6e]   ; 00520424
    CMP EAX,0x3                         ; 0052042a
    JNC 0x005204d5                      ; 0052042d
        ;   XREF to: 005204d5 (CONDITIONAL_JUMP)  ; LAB_005204d5
    CMP EAX,0x1                         ; 00520433
    JNC 0x00520472                      ; 00520436
        ;   XREF to: 00520472 (CONDITIONAL_JUMP)  ; LAB_00520472
    TEST EAX,EAX                        ; 00520438
    JZ 0x00520472                       ; 0052043a
        ;   XREF to: 00520472 (CONDITIONAL_JUMP)  ; LAB_00520472
        ;   Label: LAB_0052043a
    LEA EAX,[EBX + 0x23ac]              ; 0052043c
        ;   Label: LAB_0052043c
    FLD float ptr [EBP + 0xffffff66]    ; 00520442
    FADD float ptr [EAX]                ; 00520448
    FLD float ptr [EBP + 0xffffff6a]    ; 0052044a
    FXCH                                ; 00520450
    FSTP float ptr [EBP + 0xffffff66]   ; 00520452
    FADD float ptr [EAX + 0x4]          ; 00520458
    FLD float ptr [EBP + 0xffffff6e]    ; 0052045b
    FXCH                                ; 00520461
    FSTP float ptr [EBP + 0xffffff6a]   ; 00520463
    FADD float ptr [EAX + 0x8]          ; 00520469
    FSTP float ptr [EBP + 0xffffff6e]   ; 0052046c
    LEA EAX,[EBP + 0xffffff66]          ; 00520472
        ;   Label: LAB_00520472
    PUSH EAX                            ; 00520478
    PUSH EBX                            ; 00520479
    CALL core_charactr.cpp_CCharacter_FUN_00428f40 ; 0052047a
        ;   XREF to: 00428f40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_00428f40(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 0052047f
    LEA ESI,[EBX + 0x158]               ; 00520482
        ;   Label: LAB_00520482
    PUSH ESI                            ; 00520488
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 ; 00520489
        ;   XREF to: 0059e020 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0052048e
    PUSH ESI                            ; 00520491
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40 ; 00520492
        ;   XREF to: 0059fb40 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00520497
    PUSH ESI                            ; 0052049a
    PUSH dword ptr [EBX + 0x2414]       ; 0052049b
    LEA EAX,[EBX + 0x30]                ; 005204a1
    PUSH dword ptr [EBP + 0x92]         ; 005204a4
    PUSH EAX                            ; 005204aa
    LEA EAX,[EBX + 0x20]                ; 005204ab
    PUSH EAX                            ; 005204ae
    ADD EBX,0xbf84                      ; 005204af
    PUSH EBX                            ; 005204b5
    CALL core_cloth.cpp_CCloth_process_FUN_0043ab80 ; 005204b6
        ;   XREF to: 0043ab80 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_process_FUN_0043ab80(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 005204bb
    LEA ESP,[EBP + 0x7a]                ; 005204be
    POP EBP                             ; 005204c1
    POP EDI                             ; 005204c2
    POP ESI                             ; 005204c3
    POP EBX                             ; 005204c4
    RET                                 ; 005204c5
    CMP dword ptr [EBX + 0xdc],0x0      ; 005204c6
        ;   Label: LAB_005204c6
    JNZ 0x005203c0                      ; 005204cd
        ;   XREF to: 005203c0 (CONDITIONAL_JUMP)  ; LAB_005203c0
    JMP 0x00520482                      ; 005204d3
        ;   XREF to: 00520482 (UNCONDITIONAL_JUMP)  ; LAB_00520482
    JBE 0x00520472                      ; 005204d5
        ;   XREF to: 00520472 (CONDITIONAL_JUMP)  ; LAB_00520472
        ;   Label: LAB_005204d5
    CMP EAX,0x11                        ; 005204d7
    JNC 0x005204e4                      ; 005204da
        ;   XREF to: 005204e4 (CONDITIONAL_JUMP)  ; LAB_005204e4
    CMP EAX,0x10                        ; 005204dc
    JMP 0x0052043a                      ; 005204df
        ;   XREF to: 0052043a (UNCONDITIONAL_JUMP)  ; LAB_0052043a
    JBE 0x00520472                      ; 005204e4
        ;   XREF to: 00520472 (CONDITIONAL_JUMP)  ; LAB_00520472
        ;   Label: LAB_005204e4
    CMP EAX,0x14                        ; 005204e6
    JC 0x0052043c                       ; 005204e9
        ;   XREF to: 0052043c (CONDITIONAL_JUMP)  ; LAB_0052043c
    JBE 0x00520472                      ; 005204ef
        ;   XREF to: 00520472 (CONDITIONAL_JUMP)  ; LAB_00520472
    CMP EAX,0x15                        ; 005204f1
    JMP 0x0052043a                      ; 005204f4
        ;   XREF to: 0052043a (UNCONDITIONAL_JUMP)  ; LAB_0052043a

