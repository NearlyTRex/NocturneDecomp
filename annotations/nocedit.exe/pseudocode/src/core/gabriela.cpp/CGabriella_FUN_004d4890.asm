; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_gabriela_cpp_CGabriella_FUN_004d4890(CGabriella *this_ptr)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0xa0]:1  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined1       Stack[-0x64]:1  local_64
; undefined1       Stack[-0x58]:1  local_58
; undefined1       Stack[-0x40]:1  local_40
; undefined1       Stack[-0x34]:1  local_34
; undefined1       Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_gabriela.cpp_CGabriella_process_FUN_004d2ea0 at 004d2f40
;
; Referenced Globals:
;   void* switchdataD_004d4834 = 004d48c8
;   TerminatedCString s_kick1_wav_0062af35
;   TerminatedCString s_hit_gh_4_7_wav_0062af3f
;   TerminatedCString s_gb_fall1_wav_0062af4f
;   double DOUBLE_0062af5d = 0.200000000000000
;   double DOUBLE_0062af65 = 0.400000000000000
;   CGore* g_CGorePtr = 02d83364
;   undefined4 g_CLightActorClassInfo.name_hash
;   undefined4 g_CEnemyClassInfo.name_hash
;   int INT_02d7b864
;   int INT_02d7b868
;   int INT_02d7b878
;   CGore g_CGoreInstance
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_charactr.cpp_CCharacter_FUN_0042ec40
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
;   core_gabriela.cpp_CGabriella_FUN_004d5c10
;   core_gore.cpp_FUN_004edbb0
;   core_hero.cpp_CHero_FUN_004f2ed0
;   core_hero.cpp_CHero_FUN_004f3890
;   core_hero.cpp_CHero_FUN_004f38d0
;   core_motion.cpp_CMotionController_advance_FUN_0052d610
;   core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d4890
        ;   Label: core_gabriela.cpp_CGabriella_FUN_004d4890
    PUSH ESI                            ; 004d4891
    PUSH EDI                            ; 004d4892
    PUSH EBP                            ; 004d4893
    MOV EBP,ESP                         ; 004d4894
    SUB ESP,0x94                        ; 004d4896
    AND ESP,0xfffffff8                  ; 004d489c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004d489f
    LEA ESI,[EBX + 0x158]               ; 004d48a2
    LEA EAX,[EBP + 0x18]                ; 004d48a8
        ;   Label: LAB_004d48a8
    PUSH EAX                            ; 004d48ab
    PUSH ESI                            ; 004d48ac
    CALL core_motion.cpp_CMotionController_advance_FUN_0052d610 ; 004d48ad
        ;   XREF to: 0052d610 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr)
    MOV EDI,EAX                         ; 004d48b2
    DEC EAX                             ; 004d48b4
    ADD ESP,0x8                         ; 004d48b5
    CMP EAX,0x15                        ; 004d48b8
    JA 0x004d4c7d                       ; 004d48bb
        ;   XREF to: 004d4c7d (CONDITIONAL_JUMP)  ; caseD_10
    JMP dword ptr [EAX*0x4 + 0x4d4834]  ; 004d48c1 | caseD_7 | caseD_2 | caseD_3
        ;   Label: switchD
    CMP EDI,0x7                         ; 004d48c8
        ;   Label: caseD_1
    JNZ 0x004d49c5                      ; 004d48cb
        ;   XREF to: 004d49c5 (CONDITIONAL_JUMP)  ; LAB_004d49c5
    MOV EAX,[0x02d7b868]                ; 004d48d1 | INT_02d7b868
    PUSH EAX                            ; 004d48d6
        ;   Label: LAB_004d48d6
    LEA EAX,[ESP + 0x54]                ; 004d48d7
    PUSH EAX                            ; 004d48db
    PUSH ESI                            ; 004d48dc
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 004d48dd
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    MOV ECX,dword ptr [EBX + 0x1fbac]   ; 004d48e2
    ADD ESP,0xc                         ; 004d48e8
    TEST ECX,ECX                        ; 004d48eb
    JZ 0x004d49cf                       ; 004d48ed
        ;   XREF to: 004d49cf (CONDITIONAL_JUMP)  ; LAB_004d49cf
    PUSH 0x3f800000                     ; 004d48f3
    MOV EDX,dword ptr [ECX + 0x154]     ; 004d48f8
    PUSH ECX                            ; 004d48fe
    MOV EDI,dword ptr [EBX + 0x154]     ; 004d48ff
    CALL dword ptr [EDX + 0x3c]         ; 004d4905
    ADD ESP,0x4                         ; 004d4908
    PUSH EAX                            ; 004d490b
    LEA EAX,[ESP + 0x58]                ; 004d490c
    PUSH EAX                            ; 004d4910
    LEA EAX,[ESP + 0x68]                ; 004d4911
    PUSH EAX                            ; 004d4915
    PUSH EBX                            ; 004d4916
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004d4917
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004d491c
    PUSH EAX                            ; 004d491f
    PUSH EBX                            ; 004d4920
    CALL dword ptr [EDI + 0x20]         ; 004d4921
    ADD ESP,0x10                        ; 004d4924
    FLD float ptr [EBP + 0x18]          ; 004d4927
        ;   Label: caseD_12
    FLDZ                                ; 004d492a
    FCOMPP                              ; 004d492c
    FNSTSW AX                           ; 004d492e
    SAHF                                ; 004d4930
    JC 0x004d48a8                       ; 004d4931
        ;   XREF to: 004d48a8 (CONDITIONAL_JUMP)  ; LAB_004d48a8
    MOV ESP,EBP                         ; 004d4937
    POP EBP                             ; 004d4939
    POP EDI                             ; 004d493a
    POP ESI                             ; 004d493b
    POP EBX                             ; 004d493c
    RET                                 ; 004d493d
    MOV EDI,dword ptr [0x00822c84]      ; 004d493e | g_CLightActorClassInfo.name_hash
        ;   Label: caseD_2
    PUSH EDI                            ; 004d4944
    MOV EAX,dword ptr [EBX + 0x1fba0]   ; 004d4945
    PUSH EAX                            ; 004d494b
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004d494c
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004d4951
    TEST EAX,EAX                        ; 004d4954
    JZ 0x004d496b                       ; 004d4956
        ;   XREF to: 004d496b (CONDITIONAL_JUMP)  ; caseD_14
    CMP dword ptr [EAX + 0x66c],0x1     ; 004d4958
    JNZ 0x004d4978                      ; 004d495f
        ;   XREF to: 004d4978 (CONDITIONAL_JUMP)  ; LAB_004d4978
    MOV dword ptr [EBX + 0x1fbe8],0x3ea0d97c ; 004d4961
    PUSH 0x0                            ; 004d496b
        ;   Label: caseD_14
    PUSH EBX                            ; 004d496d
    CALL core_hero.cpp_CHero_FUN_004f3890 ; 004d496e
        ;   XREF to: 004f3890 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_FUN_004f3890(CHero * this_ptr)
    ADD ESP,0x8                         ; 004d4973
    JMP 0x004d4927                      ; 004d4976
        ;   XREF to: 004d4927 (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV dword ptr [EBX + 0x1fbe8],0xbf060a92 ; 004d4978
        ;   Label: LAB_004d4978
    PUSH 0x0                            ; 004d4982
    PUSH EBX                            ; 004d4984
    CALL core_hero.cpp_CHero_FUN_004f3890 ; 004d4985
        ;   XREF to: 004f3890 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_FUN_004f3890(CHero * this_ptr)
    ADD ESP,0x8                         ; 004d498a
    JMP 0x004d4927                      ; 004d498d
        ;   XREF to: 004d4927 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x0                            ; 004d498f
        ;   Label: caseD_3
    PUSH 0x0                            ; 004d4991
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d4993
    PUSH EBX                            ; 004d4999
    CALL dword ptr [EAX + 0x13c]        ; 004d499a
    ADD ESP,0xc                         ; 004d49a0
    PUSH 0x1                            ; 004d49a3
    PUSH 0x0                            ; 004d49a5
    PUSH ESI                            ; 004d49a7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004d49a8
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d49ad
    JMP 0x004d4927                      ; 004d49b0
        ;   XREF to: 004d4927 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x0                            ; 004d49b5
        ;   Label: caseD_15
    PUSH EBX                            ; 004d49b7
    CALL core_hero.cpp_CHero_FUN_004f38d0 ; 004d49b8
        ;   XREF to: 004f38d0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_FUN_004f38d0(CHero * this_ptr)
    ADD ESP,0x8                         ; 004d49bd
    JMP 0x004d4927                      ; 004d49c0
        ;   XREF to: 004d4927 (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV EAX,[0x02d7b864]                ; 004d49c5 | INT_02d7b864
        ;   Label: LAB_004d49c5
    JMP 0x004d48d6                      ; 004d49ca
        ;   XREF to: 004d48d6 (UNCONDITIONAL_JUMP)  ; LAB_004d48d6
    CMP dword ptr [EBX + 0x2410],0x0    ; 004d49cf
        ;   Label: LAB_004d49cf
    JZ 0x004d4927                       ; 004d49d6
        ;   XREF to: 004d4927 (CONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x2                            ; 004d49dc
    PUSH ESI                            ; 004d49de
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 004d49df
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x98],EAX      ; 004d49e4
    FLD float ptr [ESP + 0x98]          ; 004d49eb
    ADD ESP,0x8                         ; 004d49f2
    FCOMP double ptr [0x0062af65]       ; 004d49f5 | DOUBLE_0062af65
    FNSTSW AX                           ; 004d49fb
    SAHF                                ; 004d49fd
    JA 0x004d4a40                       ; 004d49fe
        ;   XREF to: 004d4a40 (CONDITIONAL_JUMP)  ; LAB_004d4a40
    PUSH 0x1                            ; 004d4a00
    PUSH ESI                            ; 004d4a02
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 004d4a03
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x98],EAX      ; 004d4a08
    FLD float ptr [ESP + 0x98]          ; 004d4a0f
    ADD ESP,0x8                         ; 004d4a16
    FCOMP double ptr [0x0062af65]       ; 004d4a19 | DOUBLE_0062af65
    FNSTSW AX                           ; 004d4a1f
    SAHF                                ; 004d4a21
    JBE 0x004d4a5c                      ; 004d4a22
        ;   XREF to: 004d4a5c (CONDITIONAL_JUMP)  ; LAB_004d4a5c
    LEA EAX,[ESP + 0x50]                ; 004d4a24
    PUSH 0x3f800000                     ; 004d4a28
    PUSH EAX                            ; 004d4a2d
    MOV EDX,dword ptr [EBX + 0x154]     ; 004d4a2e
    PUSH EBX                            ; 004d4a34
    CALL dword ptr [EDX + 0x1c]         ; 004d4a35
    ADD ESP,0xc                         ; 004d4a38
    JMP 0x004d4927                      ; 004d4a3b
        ;   XREF to: 004d4927 (UNCONDITIONAL_JUMP)  ; caseD_12
    LEA EAX,[ESP + 0x50]                ; 004d4a40
        ;   Label: LAB_004d4a40
    PUSH 0x3fd9999a                     ; 004d4a44
    PUSH EAX                            ; 004d4a49
    MOV EDX,dword ptr [EBX + 0x154]     ; 004d4a4a
    PUSH EBX                            ; 004d4a50
    CALL dword ptr [EDX + 0x1c]         ; 004d4a51
    ADD ESP,0xc                         ; 004d4a54
    JMP 0x004d4927                      ; 004d4a57
        ;   XREF to: 004d4927 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x3                            ; 004d4a5c
        ;   Label: LAB_004d4a5c
    PUSH ESI                            ; 004d4a5e
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 004d4a5f
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x98],EAX      ; 004d4a64
    FLD float ptr [ESP + 0x98]          ; 004d4a6b
    ADD ESP,0x8                         ; 004d4a72
    FCOMP double ptr [0x0062af65]       ; 004d4a75 | DOUBLE_0062af65
    FNSTSW AX                           ; 004d4a7b
    SAHF                                ; 004d4a7d
    JBE 0x004d4927                      ; 004d4a7e
        ;   XREF to: 004d4927 (CONDITIONAL_JUMP)  ; caseD_12
    LEA EDX,[ESP + 0x50]                ; 004d4a84
    PUSH 0x3f800000                     ; 004d4a88
    PUSH EDX                            ; 004d4a8d
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d4a8e
    PUSH EBX                            ; 004d4a94
    CALL dword ptr [EAX + 0x1c]         ; 004d4a95
    ADD ESP,0xc                         ; 004d4a98
    JMP 0x004d4927                      ; 004d4a9b
        ;   XREF to: 004d4927 (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV ECX,dword ptr [0x02cf2bf0]      ; 004d4aa0 | g_CEnemyClassInfo.name_hash
        ;   Label: caseD_6
    PUSH ECX                            ; 004d4aa6
    MOV EDI,dword ptr [EBX + 0x2598]    ; 004d4aa7
    PUSH EDI                            ; 004d4aad
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004d4aae
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004d4ab3
    MOV EDI,EAX                         ; 004d4ab6
    MOV dword ptr [ESP + 0x8c],EAX      ; 004d4ab8
    TEST EAX,EAX                        ; 004d4abf
    JNZ 0x004d4ad2                      ; 004d4ac1
        ;   XREF to: 004d4ad2 (CONDITIONAL_JUMP)  ; LAB_004d4ad2
    MOV dword ptr [EBX + 0x2598],0x0    ; 004d4ac3
        ;   Label: LAB_004d4ac3
    JMP 0x004d4927                      ; 004d4acd
        ;   XREF to: 004d4927 (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV EAX,[0x02d7b878]                ; 004d4ad2 | INT_02d7b878
        ;   Label: LAB_004d4ad2
    PUSH EAX                            ; 004d4ad7
    LEA EAX,[ESP + 0x6c]                ; 004d4ad8
    PUSH EAX                            ; 004d4adc
    PUSH ESI                            ; 004d4add
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 004d4ade
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 004d4ae3
    PUSH EAX                            ; 004d4ae6
    LEA EAX,[ESP + 0x48]                ; 004d4ae7
    PUSH EAX                            ; 004d4aeb
    PUSH EBX                            ; 004d4aec
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004d4aed
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004d4af2
    LEA EAX,[ESP + 0x8]                 ; 004d4af5
    PUSH EAX                            ; 004d4af9
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 004d4afa
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004d4aff
    PUSH 0x41700000                     ; 004d4b02
    PUSH 0x41200000                     ; 004d4b07
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004d4b0c
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x98],EAX      ; 004d4b11
    FLD float ptr [ESP + 0x98]          ; 004d4b18
    ADD ESP,0x8                         ; 004d4b1f
    LEA EAX,[ESP + 0x44]                ; 004d4b22
    PUSH EAX                            ; 004d4b26
    LEA EAX,[ESP + 0x78]                ; 004d4b27
    PUSH EAX                            ; 004d4b2b
    PUSH EDI                            ; 004d4b2c
    FSTP float ptr [ESP + 0x18]         ; 004d4b2d
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 004d4b31
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    MOV EDX,EAX                         ; 004d4b36
    LEA EAX,[ESP + 0x30]                ; 004d4b38
    ADD ESP,0xc                         ; 004d4b3c
    CMP EAX,EDX                         ; 004d4b3f
    JZ 0x004d4b57                       ; 004d4b41
        ;   XREF to: 004d4b57 (CONDITIONAL_JUMP)  ; LAB_004d4b57
    MOV EAX,dword ptr [EDX]             ; 004d4b43
    MOV dword ptr [ESP + 0x24],EAX      ; 004d4b45
    MOV EAX,dword ptr [EDX + 0x4]       ; 004d4b49
    MOV dword ptr [ESP + 0x28],EAX      ; 004d4b4c
    MOV EAX,dword ptr [EDX + 0x8]       ; 004d4b50
    MOV dword ptr [ESP + 0x2c],EAX      ; 004d4b53
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004d4b57
        ;   Label: LAB_004d4b57
    LEA EDX,[ESP + 0x8]                 ; 004d4b5e
    MOV dword ptr [ESP + 0x3c],EBX      ; 004d4b62
    MOV dword ptr [ESP + 0x40],EBX      ; 004d4b66
    PUSH EDX                            ; 004d4b6a
    MOV EDX,dword ptr [ESP + 0x90]      ; 004d4b6b
    MOV EAX,dword ptr [EAX + 0x154]     ; 004d4b72
    PUSH EDX                            ; 004d4b78
    CALL dword ptr [EAX + 0x11c]        ; 004d4b79
    ADD ESP,0x8                         ; 004d4b7f
    FLDZ                                ; 004d4b82
    FLD float ptr [ESP + 0xc]           ; 004d4b84
    FSTP double ptr [ESP]               ; 004d4b88
    FCOMP double ptr [ESP]              ; 004d4b8b
    FNSTSW AX                           ; 004d4b8e
    SAHF                                ; 004d4b90
    JNC 0x004d4ac3                      ; 004d4b91
        ;   XREF to: 004d4ac3 (CONDITIONAL_JUMP)  ; LAB_004d4ac3
    FLD double ptr [ESP]                ; 004d4b97
    FMUL double ptr [0x0062af5d]        ; 004d4b9a | DOUBLE_0062af5d
    CALL crt_math.c_round_FUN_005fe6b0  ; 004d4ba0
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x90]        ; 004d4ba5
    MOV EAX,dword ptr [ESP + 0x90]      ; 004d4bac
    PUSH 0x0                            ; 004d4bb3
    INC EAX                             ; 004d4bb5
    PUSH EAX                            ; 004d4bb6
    PUSH 0x0                            ; 004d4bb7
    LEA EAX,[ESP + 0x50]                ; 004d4bb9
    PUSH EAX                            ; 004d4bbd
    MOV ECX,dword ptr [0x0067b9a0]      ; 004d4bbe | g_CGorePtr | g_CGoreInstance
    PUSH ECX                            ; 004d4bc4 | g_CGoreInstance
    CALL core_gore.cpp_FUN_004edbb0     ; 004d4bc5
        ;   XREF to: 004edbb0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_FUN_004edbb0()
    ADD ESP,0x14                        ; 004d4bca
    PUSH 0x62af35                       ; 004d4bcd | = "kick1.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d4bd2
    PUSH EBX                            ; 004d4bd8
    CALL dword ptr [EAX + 0x24]         ; 004d4bd9
    ADD ESP,0x8                         ; 004d4bdc
    MOV dword ptr [EBX + 0x2598],0x0    ; 004d4bdf
    JMP 0x004d4927                      ; 004d4be9
        ;   XREF to: 004d4927 (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV EDX,dword ptr [EBX + 0x2598]    ; 004d4bee
        ;   Label: caseD_f
    TEST EDX,EDX                        ; 004d4bf4
    JZ 0x004d4927                       ; 004d4bf6
        ;   XREF to: 004d4927 (CONDITIONAL_JUMP)  ; caseD_12
    LEA EAX,[EDX + 0x20]                ; 004d4bfc
    PUSH EAX                            ; 004d4bff
    LEA EAX,[ESP + 0x84]                ; 004d4c00
    PUSH EAX                            ; 004d4c07
    PUSH EBX                            ; 004d4c08
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 004d4c09
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    FLDZ                                ; 004d4c0e
    ADD ESP,0xc                         ; 004d4c10
    FCOMP float ptr [EAX + 0x8]         ; 004d4c13
    FNSTSW AX                           ; 004d4c16
    SAHF                                ; 004d4c18
    JNC 0x004d4927                      ; 004d4c19
        ;   XREF to: 004d4927 (CONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x62af3f                       ; 004d4c1f | = "hit-gh[4,7].wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d4c24
    PUSH EBX                            ; 004d4c2a
    CALL dword ptr [EAX + 0x24]         ; 004d4c2b
    ADD ESP,0x8                         ; 004d4c2e
    JMP 0x004d4927                      ; 004d4c31
        ;   XREF to: 004d4927 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x62af4f                       ; 004d4c36 | = "gb-fall1.wav"
        ;   Label: caseD_11
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d4c3b
    PUSH EBX                            ; 004d4c41
    CALL dword ptr [EAX + 0x24]         ; 004d4c42
    ADD ESP,0x8                         ; 004d4c45
    JMP 0x004d4927                      ; 004d4c48
        ;   XREF to: 004d4927 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH EBX                            ; 004d4c4d
        ;   Label: caseD_13
    CALL core_gabriela.cpp_CGabriella_FUN_004d5c10 ; 004d4c4e
        ;   XREF to: 004d5c10 (UNCONDITIONAL_CALL)  ; void core_gabriela.cpp_CGabriella_FUN_004d5c10(CGabriella * this_ptr)
    ADD ESP,0x4                         ; 004d4c53
    JMP 0x004d4927                      ; 004d4c56
        ;   XREF to: 004d4927 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH EBX                            ; 004d4c5b
        ;   Label: caseD_16
    CALL core_hero.cpp_CHero_FUN_004f2ed0 ; 004d4c5c
        ;   XREF to: 004f2ed0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_FUN_004f2ed0(CHero * this_ptr)
    ADD ESP,0x4                         ; 004d4c61
    TEST EAX,EAX                        ; 004d4c64
    JNZ 0x004d4927                      ; 004d4c66
        ;   XREF to: 004d4927 (CONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x1                            ; 004d4c6c
    PUSH EAX                            ; 004d4c6e
    PUSH ESI                            ; 004d4c6f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004d4c70
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d4c75
    JMP 0x004d4927                      ; 004d4c78
        ;   XREF to: 004d4927 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH EDI                            ; 004d4c7d
        ;   Label: caseD_4
    PUSH EBX                            ; 004d4c7e
    CALL core_charactr.cpp_CCharacter_FUN_0042ec40 ; 004d4c7f
        ;   XREF to: 0042ec40 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_0042ec40(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 004d4c84
    JMP 0x004d4927                      ; 004d4c87
        ;   XREF to: 004d4927 (UNCONDITIONAL_JUMP)  ; caseD_12

