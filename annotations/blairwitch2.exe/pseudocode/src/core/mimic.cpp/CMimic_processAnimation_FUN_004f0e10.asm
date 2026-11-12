; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mimic_cpp_CMimic_processAnimation_FUN_004f0e10(CMimic *this_ptr,float delta_time)
;
; Parameters:
; CMimic *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined        Stack[-0x2bc]:1  local_2bc
; undefined4       Stack[-0x2b8]:4  local_2b8
; undefined4       Stack[-0x288]:4  local_288
; undefined4       Stack[-0x284]:4  local_284
; undefined        Stack[-0x280]:1  local_280
; undefined        Stack[-0x250]:1  local_250
; undefined        Stack[-0x220]:1  local_220
; undefined4       Stack[-0x208]:4  local_208
; undefined4       Stack[-0x204]:4  local_204
; undefined4       Stack[-0x200]:4  local_200
; undefined4       Stack[-0x1fc]:4  local_1fc
; undefined4       Stack[-0x1f8]:4  local_1f8
; undefined4       Stack[-0x1f4]:4  local_1f4
; undefined        Stack[-0x1f0]:1  local_1f0
; undefined        Stack[-0x1e4]:1  local_1e4
; undefined4       Stack[-0x1e0]:4  local_1e0
; undefined4       Stack[-0x1d8]:4  local_1d8
; undefined4       Stack[-0x1d4]:4  local_1d4
; undefined4       Stack[-0x1d0]:4  local_1d0
; undefined        Stack[-0x1cc]:1  local_1cc
; undefined4       Stack[-0x1c0]:4  local_1c0
; undefined4       Stack[-0x1b8]:4  local_1b8
; undefined        Stack[-0x1b4]:1  local_1b4
; undefined1       Stack[-0x1b1]:1  local_1b1
; undefined        Stack[-0x1a8]:1  local_1a8
; undefined4       Stack[-0x1a4]:4  local_1a4
; undefined        Stack[-0x19c]:1  local_19c
; undefined4       Stack[-0x190]:4  local_190
; undefined4       Stack[-0x18c]:4  local_18c
; undefined4       Stack[-0x188]:4  local_188
; undefined        Stack[-0x184]:1  local_184
; undefined4       Stack[-0x178]:4  local_178
; undefined4       Stack[-0x174]:4  local_174
; undefined4       Stack[-0x170]:4  local_170
; undefined        Stack[-0x16c]:1  local_16c
; undefined        Stack[-0x160]:1  local_160
; undefined4       Stack[-0x154]:4  local_154
; undefined4       Stack[-0x150]:4  local_150
; undefined4       Stack[-0x14c]:4  local_14c
; undefined        Stack[-0x148]:1  local_148
; undefined4       Stack[-0x140]:4  local_140
; undefined        Stack[-0x13c]:1  local_13c
; undefined        Stack[-0x130]:1  local_130
; undefined        Stack[-0x124]:1  local_124
; undefined1       Stack[-0x121]:1  local_121
; undefined        Stack[-0x118]:1  local_118
; undefined        Stack[-0x10c]:1  local_10c
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined        Stack[-0xf4]:1  local_f4
; undefined        Stack[-0xe8]:1  local_e8
; undefined        Stack[-0xdc]:1  local_dc
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined        Stack[-0xc4]:1  local_c4
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined        Stack[-0xac]:1  local_ac
; undefined        Stack[-0xa0]:1  local_a0
; undefined        Stack[-0x94]:1  local_94
; undefined        Stack[-0x88]:1  local_88
; undefined        Stack[-0x7c]:1  local_7c
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined        Stack[-0x64]:1  local_64
; undefined1       Stack[-0x61]:1  local_61
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined8       Stack[-0x40]:8  local_40
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   core_mimic.cpp_CMimic_process_FUN_004f08a0 at 004f0922
;
; Referenced Globals:
;   TerminatedCString s_gh_alrt_1_4_wav_005dd91e
;   TerminatedCString s_gh_hits_1_4_wav_005dd92f
;   undefined4 DAT_005dd941
;   undefined4 DAT_005dd949
;   undefined4 DAT_005dd94d
;   undefined4 DAT_005dd951
;   undefined4 DAT_005dd959
;   undefined4 DAT_005dd961
;   undefined4 DAT_005dd969
;   undefined4 DAT_005dd971
;   undefined4 DAT_005f9e78
;   CGame* g_CGamePtr = 01cb6900
;   CGore* g_CGorePtr = 01cb8284
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 g_CGameInstance.freeze_enemies_enabled
;   ... and 5 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_00408de0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0
;   core_charactr.cpp_CCharacter_preProcess_FUN_00424470
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000
;   core_charactr.cpp_FUN_00423a10
;   core_charactr.cpp_FUN_00423a60
;   core_charactr.cpp_FUN_0042b2a0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0
;   core_cloth.cpp_CCloth_process_FUN_005afdf0
;   core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110
;   core_gore.cpp_CGore_createBloodPool_FUN_004c9ad0
;   core_mimic.cpp_CMimic_beginMorph_FUN_004f1d70
;   core_motion.cpp_CMotionController_advance_FUN_005030c0
;   ... and 12 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f0e10
        ;   Label: core_mimic.cpp_CMimic_processAnimation_FUN_004f0e10
    PUSH ESI                            ; 004f0e11
    PUSH EDI                            ; 004f0e12
    PUSH EBP                            ; 004f0e13
    MOV EBP,ESP                         ; 004f0e14
    SUB ESP,0x2ac                       ; 004f0e16
    SUB EBP,0x7a                        ; 004f0e1c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 004f0e1f
    MOV EAX,[0x01cedef4]                ; 004f0e25 | DAT_01cedef4
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004f0e2a
    PUSH 0x0                            ; 004f0e31
    ADD EAX,0x2b4                       ; 004f0e33
    PUSH EAX                            ; 004f0e38
    LEA ESI,[EBP + -0x22]               ; 004f0e39
    CALL core_skeleton.cpp_FUN_005469a0 ; 004f0e3c
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005469a0()
    ADD ESP,0x8                         ; 004f0e41
    LEA EAX,[EBP + 0xffffff1e]          ; 004f0e44
    PUSH EAX                            ; 004f0e4a
    MOV EAX,[0x01cedef4]                ; 004f0e4b | DAT_01cedef4
    LEA EDI,[EBP + 0xffffff1e]          ; 004f0e50
    LEA ESI,[EBP + -0x22]               ; 004f0e56
    MOV EDX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004f0e59
    MOVSD ES:EDI,ESI                    ; 004f0e60
    MOVSD ES:EDI,ESI                    ; 004f0e61
    MOVSD ES:EDI,ESI                    ; 004f0e62
    PUSH EDX                            ; 004f0e63
    LEA ESI,[EBP + 0xfffffe9a]          ; 004f0e64
    CALL core_actor.cpp_FUN_00408d70    ; 004f0e6a
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    MOV EAX,[0x01cedef4]                ; 004f0e6f | DAT_01cedef4
    LEA EDI,[EBP + 0xfffffea6]          ; 004f0e74
    LEA ESI,[EBP + 0xfffffe9a]          ; 004f0e7a
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004f0e80
    MOVSD ES:EDI,ESI                    ; 004f0e87
    MOVSD ES:EDI,ESI                    ; 004f0e88
    MOVSD ES:EDI,ESI                    ; 004f0e89
    MOV EAX,dword ptr [EAX + 0x24]      ; 004f0e8a
    ADD ESP,0x8                         ; 004f0e8d
    MOV dword ptr [EBP + 0xfffffeaa],EAX ; 004f0e90
    LEA EAX,[EBP + 0xfffffea6]          ; 004f0e96
    PUSH EAX                            ; 004f0e9c
    PUSH EBX                            ; 004f0e9d
    LEA ESI,[EBP + 0xffffff7e]          ; 004f0e9e
    LEA EDI,[EBP + 0xfffffeca]          ; 004f0ea4
    CALL core_actor.cpp_FUN_00408de0    ; 004f0eaa
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[EBP + 0xffffff7e]          ; 004f0eaf
    MOVSD ES:EDI,ESI                    ; 004f0eb5
    MOVSD ES:EDI,ESI                    ; 004f0eb6
    MOVSD ES:EDI,ESI                    ; 004f0eb7
    ADD ESP,0x8                         ; 004f0eb8
    MOV EAX,dword ptr [EBP + 0xfffffeca] ; 004f0ebb
    XOR ECX,ECX                         ; 004f0ec1
    MOV dword ptr [EBP + -0x46],EAX     ; 004f0ec3
    MOV EAX,dword ptr [EBP + 0xfffffed2] ; 004f0ec6
    MOV dword ptr [EBP + -0x42],ECX     ; 004f0ecc
    MOV dword ptr [EBP + -0x3e],EAX     ; 004f0ecf
    LEA EAX,[EBX + 0x2b4]               ; 004f0ed2
    MOV ESI,0xbf800000                  ; 004f0ed8
    PUSH EAX                            ; 004f0edd
    MOV dword ptr [EBP + 0x66],ESI      ; 004f0ede
    MOV dword ptr [EBP + 0x6a],EAX      ; 004f0ee1
    CALL core_motion.cpp_FUN_005035c0   ; 004f0ee4
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV ESI,dword ptr [EAX + 0x24]      ; 004f0ee9
    MOV EAX,[0x01cedef4]                ; 004f0eec | DAT_01cedef4
    ADD ESP,0x4                         ; 004f0ef1
    SHL EAX,0x2                         ; 004f0ef4
    CMP ESI,0x2                         ; 004f0ef7
    JNC 0x004f14f2                      ; 004f0efa
        ;   XREF to: 004f14f2 (CONDITIONAL_JUMP)  ; LAB_004f14f2
    TEST ESI,ESI                        ; 004f0f00
    JBE 0x004f1061                      ; 004f0f02
        ;   XREF to: 004f1061 (CONDITIONAL_JUMP)  ; LAB_004f1061
    MOV EAX,[0x01cedef4]                ; 004f0f08 | DAT_01cedef4
        ;   Label: LAB_004f0f08
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004f0f0d
    PUSH EAX                            ; 004f0f14
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 004f0f15
    CALL dword ptr [ESI + 0x114]        ; 004f0f1b
    ADD ESP,0x4                         ; 004f0f21
    TEST EAX,EAX                        ; 004f0f24
    JZ 0x004f11f3                       ; 004f0f26
        ;   XREF to: 004f11f3 (CONDITIONAL_JUMP)  ; LAB_004f11f3
    PUSH 0x1                            ; 004f0f2c
        ;   Label: LAB_004f0f2c
    PUSH 0x0                            ; 004f0f2e
    LEA EAX,[EBX + 0x2b4]               ; 004f0f30
        ;   Label: LAB_004f0f30
    PUSH EAX                            ; 004f0f36
        ;   Label: LAB_004f0f36
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004f0f37
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_004f0f37
    ADD ESP,0xc                         ; 004f0f3c
    FLD float ptr [EBP + 0x66]          ; 004f0f3f
        ;   Label: LAB_004f0f3f
    FLDZ                                ; 004f0f42
    FCOMPP                              ; 004f0f44
    FNSTSW AX                           ; 004f0f46
    SAHF                                ; 004f0f48
    JBE 0x004f1515                      ; 004f0f49
        ;   XREF to: 004f1515 (CONDITIONAL_JUMP)  ; LAB_004f1515
    FLD float ptr [EBP + 0x92]          ; 004f0f4f
        ;   Label: LAB_004f0f4f
    LEA EAX,[EBX + 0x2b4]               ; 004f0f55
    FMUL float ptr [EBX + 0x10a60]      ; 004f0f5b
    MOV dword ptr [EBP + 0x72],EAX      ; 004f0f61
    FSTP float ptr [EBP + 0x5e]         ; 004f0f64
    FLD float ptr [EBP + 0x5e]          ; 004f0f67
        ;   Label: LAB_004f0f67
    FLDZ                                ; 004f0f6a
    FCOMPP                              ; 004f0f6c
    FNSTSW AX                           ; 004f0f6e
    SAHF                                ; 004f0f70
    JNC 0x004f1607                      ; 004f0f71
        ;   XREF to: 004f1607 (CONDITIONAL_JUMP)  ; LAB_004f1607
    LEA EAX,[EBP + 0x5e]                ; 004f0f77
    PUSH EAX                            ; 004f0f7a
    MOV ESI,dword ptr [EBP + 0x72]      ; 004f0f7b
    PUSH ESI                            ; 004f0f7e
    CALL core_motion.cpp_CMotionController_advance_FUN_005030c0 ; 004f0f7f
        ;   XREF to: 005030c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_005030c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 004f0f84
    CMP EAX,0x1                         ; 004f0f87
    JC 0x004f0f67                       ; 004f0f8a
        ;   XREF to: 004f0f67 (CONDITIONAL_JUMP)  ; LAB_004f0f67
    JA 0x004f15fd                       ; 004f0f8c
        ;   XREF to: 004f15fd (CONDITIONAL_JUMP)  ; LAB_004f15fd
    CMP dword ptr [EBX + 0x2570],0x0    ; 004f0f92
    JZ 0x004f0f67                       ; 004f0f99
        ;   XREF to: 004f0f67 (CONDITIONAL_JUMP)  ; LAB_004f0f67
    MOV ESI,dword ptr [0x01d097e0]      ; 004f0f9b | DAT_01d097e0
    PUSH ESI                            ; 004f0fa1
    MOV EDI,dword ptr [EBP + 0x72]      ; 004f0fa2
    PUSH EDI                            ; 004f0fa5
    LEA ESI,[EBP + 0xfffffebe]          ; 004f0fa6
    CALL core_skeleton.cpp_FUN_005469a0 ; 004f0fac
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005469a0()
    LEA EDI,[EBP + 0xffffff66]          ; 004f0fb1
    LEA ESI,[EBP + 0xfffffebe]          ; 004f0fb7
    ADD ESP,0x8                         ; 004f0fbd
    MOVSD ES:EDI,ESI                    ; 004f0fc0
    MOVSD ES:EDI,ESI                    ; 004f0fc1
    MOVSD ES:EDI,ESI                    ; 004f0fc2
    LEA EAX,[EBP + 0xffffff66]          ; 004f0fc3
    MOV DH,byte ptr [EBP + 0xffffff69]  ; 004f0fc9
    PUSH 0x3f800000                     ; 004f0fcf
    XOR DH,0x80                         ; 004f0fd4
    PUSH EAX                            ; 004f0fd7
    MOV byte ptr [EBP + 0xffffff69],DH  ; 004f0fd8
    PUSH EBX                            ; 004f0fde
    MOV ESI,dword ptr [EBX + 0x2b0]     ; 004f0fdf
    CALL dword ptr [ESI + 0x2c]         ; 004f0fe5
    ADD ESP,0xc                         ; 004f0fe8
    JMP 0x004f0f67                      ; 004f0feb
        ;   XREF to: 004f0f67 (UNCONDITIONAL_JUMP)  ; LAB_004f0f67
    MOV EDX,dword ptr [EBX + 0x10a64]   ; 004f0ff0
        ;   Label: LAB_004f0ff0
    TEST EDX,EDX                        ; 004f0ff6
    JNZ 0x004f0f3f                      ; 004f0ff8
        ;   XREF to: 004f0f3f (CONDITIONAL_JUMP)  ; LAB_004f0f3f
    CMP dword ptr [EBX + 0xdc],0x0      ; 004f0ffe
    JNZ 0x004f0f3f                      ; 004f1005
        ;   XREF to: 004f0f3f (CONDITIONAL_JUMP)  ; LAB_004f0f3f
    PUSH EDX                            ; 004f100b
    MOV ESI,dword ptr [EBP + 0x6a]      ; 004f100c
    PUSH ESI                            ; 004f100f
    LEA ESI,[EBP + -0x52]               ; 004f1010
    LEA EDI,[EBP + -0x5e]               ; 004f1013
    CALL core_skeleton.cpp_FUN_005469a0 ; 004f1016
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005469a0()
    ADD ESP,0x8                         ; 004f101b
    LEA EAX,[EBP + -0x5e]               ; 004f101e
    LEA ESI,[EBP + -0x52]               ; 004f1021
    PUSH EAX                            ; 004f1024
    MOVSD ES:EDI,ESI                    ; 004f1025
    MOVSD ES:EDI,ESI                    ; 004f1026
    MOVSD ES:EDI,ESI                    ; 004f1027
    PUSH EBX                            ; 004f1028
    LEA ESI,[EBP + -0x3a]               ; 004f1029
    LEA EDI,[EBP + -0x6a]               ; 004f102c
    CALL core_actor.cpp_FUN_00408d70    ; 004f102f
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 004f1034
    LEA ESI,[EBP + -0x3a]               ; 004f1037
    LEA EAX,[EBP + -0x6a]               ; 004f103a
    PUSH 0x0                            ; 004f103d
    MOVSD ES:EDI,ESI                    ; 004f103f
    MOVSD ES:EDI,ESI                    ; 004f1040
    MOVSD ES:EDI,ESI                    ; 004f1041
    PUSH EAX                            ; 004f1042
    MOV EDI,dword ptr [0x006167e0]      ; 004f1043 | g_CGorePtr
    PUSH EDI                            ; 004f1049
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004c9ad0 ; 004f104a
        ;   XREF to: 004c9ad0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004c9ad0(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 004f104f
    MOV dword ptr [EBX + 0x10a64],0x1   ; 004f1052
    JMP 0x004f0f3f                      ; 004f105c
        ;   XREF to: 004f0f3f (UNCONDITIONAL_JUMP)  ; LAB_004f0f3f
    MOV EAX,dword ptr [EAX + 0x1cedee4] ; 004f1061
        ;   Label: LAB_004f1061
    PUSH EAX                            ; 004f1067
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004f1068
    CALL dword ptr [EDX + 0x114]        ; 004f106e
    ADD ESP,0x4                         ; 004f1074
    TEST EAX,EAX                        ; 004f1077
    JNZ 0x004f0f3f                      ; 004f1079
        ;   XREF to: 004f0f3f (CONDITIONAL_JUMP)  ; LAB_004f0f3f
    MOV EAX,[0x00616494]                ; 004f107f | g_CGamePtr
    CMP dword ptr [EAX + 0x1f0],0x0     ; 004f1084 | g_CGameInstance.freeze_enemies_enabled
    JNZ 0x004f0f3f                      ; 004f108b
        ;   XREF to: 004f0f3f (CONDITIONAL_JUMP)  ; LAB_004f0f3f
    MOV EAX,[0x01cedef4]                ; 004f1091 | DAT_01cedef4
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004f1096
    FLD float ptr [EBX + 0x24]          ; 004f109d
    FSUB float ptr [EAX + 0x24]         ; 004f10a0
    FABS                                ; 004f10a3
    FCOMP double ptr [0x005dd959]       ; 004f10a5 | DAT_005dd959
    FNSTSW AX                           ; 004f10ab
    SAHF                                ; 004f10ad
    JA 0x004f0f3f                       ; 004f10ae
        ;   XREF to: 004f0f3f (CONDITIONAL_JUMP)  ; LAB_004f0f3f
    LEA EAX,[EBP + -0x46]               ; 004f10b4
    PUSH EAX                            ; 004f10b7
    LEA ESI,[EBP + 0x2]                 ; 004f10b8
    LEA EDI,[EBP + 0xfffffee2]          ; 004f10bb
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 004f10c1
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[EBP + 0x2]                 ; 004f10c6
    ADD ESP,0x4                         ; 004f10c9
    MOVSD ES:EDI,ESI                    ; 004f10cc
    MOVSD ES:EDI,ESI                    ; 004f10cd
    MOVSD ES:EDI,ESI                    ; 004f10ce
    PUSH dword ptr [EBP + 0xfffffee6]   ; 004f10cf
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 004f10d5
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 004f10da
    FLD float ptr [EBP + 0x76]          ; 004f10dd
    FABS                                ; 004f10e0
    FLD float ptr [EBP + -0x42]         ; 004f10e2
    FMUL ST0                            ; 004f10e5
    FLD float ptr [EBP + -0x46]         ; 004f10e7
    FMUL ST0                            ; 004f10ea
    FADDP                               ; 004f10ec
    FLD float ptr [EBP + -0x3e]         ; 004f10ee
    FMUL ST0                            ; 004f10f1
    FADDP                               ; 004f10f3
    FSQRT                               ; 004f10f5
    FXCH                                ; 004f10f7
    FMUL double ptr [0x005dd961]        ; 004f10f9 | DAT_005dd961
    FLD1                                ; 004f10ff
    FSUBRP                              ; 004f1101
    FMUL double ptr [0x005dd969]        ; 004f1103 | DAT_005dd969
    FADD double ptr [0x005dd971]        ; 004f1109 | DAT_005dd971
    ADD ESP,0x4                         ; 004f110f
    FXCH                                ; 004f1112
    FCOMPP                              ; 004f1114
    FNSTSW AX                           ; 004f1116
    SAHF                                ; 004f1118
    JNC 0x004f0f3f                      ; 004f1119
        ;   XREF to: 004f0f3f (CONDITIONAL_JUMP)  ; LAB_004f0f3f
    MOV ECX,dword ptr [0x01d097c4]      ; 004f111f | DAT_01d097c4
    PUSH ECX                            ; 004f1125
    MOV ESI,dword ptr [EBP + 0x6a]      ; 004f1126
    PUSH ESI                            ; 004f1129
    LEA ESI,[EBP + 0xfffffe3a]          ; 004f112a
    LEA EDI,[EBP + 0xfffffe0a]          ; 004f1130
    CALL core_skeleton.cpp_FUN_00546790 ; 004f1136
        ;   XREF to: 00546790 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546790()
    MOV ECX,0xc                         ; 004f113b
    LEA ESI,[EBP + 0xfffffe3a]          ; 004f1140
    ADD ESP,0x8                         ; 004f1146
    LEA EAX,[EBP + 0xfffffe0a]          ; 004f1149
    MOV EDX,0x3e99999a                  ; 004f114f
    PUSH EAX                            ; 004f1154
    MOV dword ptr [EBP + -0x6e],EDX     ; 004f1155
    MOVSD.REP ES:EDI,ESI                ; 004f1158
    MOV EAX,0x3f333333                  ; 004f115a
    LEA ESI,[EBP + 0xffffff06]          ; 004f115f
    MOV dword ptr [EBP + -0x72],EAX     ; 004f1165
    LEA EAX,[EBP + -0x76]               ; 004f1168
    XOR EDI,EDI                         ; 004f116b
    PUSH EAX                            ; 004f116d
    MOV dword ptr [EBP + -0x76],EDI     ; 004f116e
    LEA EDI,[EBP + 0xffffff5a]          ; 004f1171
    CALL core_xform.cpp_FUN_00591530    ; 004f1177
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 004f117c
    LEA EAX,[EBP + 0xffffff5a]          ; 004f117f
    LEA ESI,[EBP + 0xffffff06]          ; 004f1185
    PUSH EAX                            ; 004f118b
    MOVSD ES:EDI,ESI                    ; 004f118c
    MOVSD ES:EDI,ESI                    ; 004f118d
    MOVSD ES:EDI,ESI                    ; 004f118e
    PUSH EBX                            ; 004f118f
    LEA ESI,[EBP + -0x16]               ; 004f1190
    CALL core_actor.cpp_FUN_00408d70    ; 004f1193
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 004f1198
    LEA EAX,[EBP + 0xfffffea6]          ; 004f119b
    PUSH EAX                            ; 004f11a1
    LEA EAX,[EBP + 0xffffff72]          ; 004f11a2
    LEA EDI,[EBP + 0xffffff72]          ; 004f11a8
    PUSH EAX                            ; 004f11ae
    MOV ECX,dword ptr [0x0061b5a8]      ; 004f11af | g_CDemonSetPtr
    LEA ESI,[EBP + -0x16]               ; 004f11b5
    PUSH ECX                            ; 004f11b8 | g_CDemonSetInstance
    MOVSD ES:EDI,ESI                    ; 004f11b9
    MOVSD ES:EDI,ESI                    ; 004f11ba
    MOVSD ES:EDI,ESI                    ; 004f11bb
    CALL core_setcolid.cpp_CDemonSet_testVoxelRaycast_FUN_00535ec0 ; 004f11bc
        ;   XREF to: 00535ec0 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_testVoxelRaycast_FUN_00535ec0(CDemonSet * this_ptr, CVector3f * start_pos, CVector3f * end_pos)
    ADD ESP,0xc                         ; 004f11c1
    TEST EAX,EAX                        ; 004f11c4
    JNZ 0x004f0f3f                      ; 004f11c6
        ;   XREF to: 004f0f3f (CONDITIONAL_JUMP)  ; LAB_004f0f3f
    PUSH 0x1                            ; 004f11cc
    PUSH 0x2                            ; 004f11ce
    MOV ESI,dword ptr [EBP + 0x6a]      ; 004f11d0
    PUSH ESI                            ; 004f11d3
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004f11d4
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f11d9
    PUSH 0x5dd91e                       ; 004f11dc | = "gh-alrt[1,4].wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004f11e1
    PUSH EBX                            ; 004f11e7
    CALL dword ptr [EAX + 0x34]         ; 004f11e8
    ADD ESP,0x8                         ; 004f11eb
    JMP 0x004f0f3f                      ; 004f11ee
        ;   XREF to: 004f0f3f (UNCONDITIONAL_JUMP)  ; LAB_004f0f3f
    MOV EAX,[0x00616494]                ; 004f11f3 | g_CGamePtr
        ;   Label: LAB_004f11f3
    CMP dword ptr [EAX + 0x1f0],0x0     ; 004f11f8 | g_CGameInstance.freeze_enemies_enabled
    JNZ 0x004f0f2c                      ; 004f11ff
        ;   XREF to: 004f0f2c (CONDITIONAL_JUMP)  ; LAB_004f0f2c
    LEA EAX,[EBX + 0x20]                ; 004f1205
    PUSH EAX                            ; 004f1208
    MOV ECX,dword ptr [EBX + 0x4b6f4]   ; 004f1209
    PUSH ECX                            ; 004f120f
    LEA ESI,[EBP + 0xffffff2a]          ; 004f1210
    LEA EDI,[EBP + 0xffffff42]          ; 004f1216
    CALL core_actor.cpp_FUN_00408de0    ; 004f121c
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[EBP + 0xffffff2a]          ; 004f1221
    ADD ESP,0x8                         ; 004f1227
    MOVSD ES:EDI,ESI                    ; 004f122a
    MOVSD ES:EDI,ESI                    ; 004f122b
    MOVSD ES:EDI,ESI                    ; 004f122c
    PUSH EBX                            ; 004f122d
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004f122e
    LEA ESI,[EBP + 0xfffffe6a]          ; 004f1234
    LEA EDI,[EBP + 0xfffffe82]          ; 004f123a
    CALL dword ptr [EAX + 0x24]         ; 004f1240
    MOV ECX,0x6                         ; 004f1243
    LEA ESI,[EBP + 0xfffffe6a]          ; 004f1248
    LEA EAX,[EBP + 0xfffffe82]          ; 004f124e
    MOVSD.REP ES:EDI,ESI                ; 004f1254
    FLD float ptr [EAX + 0xc]           ; 004f1256
    FLD float ptr [EAX + 0x10]          ; 004f1259
    FLD float ptr [EAX + 0x14]          ; 004f125c
    LEA EDI,[EBP + 0xffffff36]          ; 004f125f
    LEA ESI,[EBP + -0x2e]               ; 004f1265
    FXCH ST2                            ; 004f1268
    FSUB float ptr [EBP + 0xfffffe82]   ; 004f126a
    FXCH                                ; 004f1270
    FSUB float ptr [EBP + 0xfffffe86]   ; 004f1272
    FXCH ST2                            ; 004f1278
    FSUB float ptr [EBP + 0xfffffe8a]   ; 004f127a
    FXCH                                ; 004f1280
    FSTP float ptr [EBP + -0x2e]        ; 004f1282
    FXCH                                ; 004f1285
    FSTP float ptr [EBP + -0x2a]        ; 004f1287
    FSTP float ptr [EBP + -0x26]        ; 004f128a
    MOVSD ES:EDI,ESI                    ; 004f128d
    MOVSD ES:EDI,ESI                    ; 004f128e
    MOVSD ES:EDI,ESI                    ; 004f128f
    FLD float ptr [EBP + 0xffffff36]    ; 004f1290
    FMUL ST0                            ; 004f1296
    FLD float ptr [EBP + 0xffffff3e]    ; 004f1298
    FMUL ST0                            ; 004f129e
    FADDP                               ; 004f12a0
    FSQRT                               ; 004f12a2
    FLD float ptr [EBP + 0xffffff4a]    ; 004f12a4
    ADD ESP,0x4                         ; 004f12aa
    XOR ESI,ESI                         ; 004f12ad
    FCHS                                ; 004f12af
    MOV dword ptr [EBP + 0xffffff3a],ESI ; 004f12b1
    FXCH                                ; 004f12b7
    FCOMPP                              ; 004f12b9
    FNSTSW AX                           ; 004f12bb
    SAHF                                ; 004f12bd
    JNC 0x004f12ce                      ; 004f12be
        ;   XREF to: 004f12ce (CONDITIONAL_JUMP)  ; LAB_004f12ce
    PUSH EBX                            ; 004f12c0
    CALL core_mimic.cpp_CMimic_beginMorph_FUN_004f1d70 ; 004f12c1
        ;   XREF to: 004f1d70 (UNCONDITIONAL_CALL)  ; void core_mimic.cpp_CMimic_beginMorph_FUN_004f1d70(CMimic * this_ptr)
    ADD ESP,0x4                         ; 004f12c6
    JMP 0x004f0f3f                      ; 004f12c9
        ;   XREF to: 004f0f3f (UNCONDITIONAL_JUMP)  ; LAB_004f0f3f
    PUSH 0x1                            ; 004f12ce
        ;   Label: LAB_004f12ce
    LEA ESI,[EBX + 0x2b4]               ; 004f12d0
    PUSH ESI                            ; 004f12d6
    CALL core_motion.cpp_FUN_005038a0   ; 004f12d7
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [EBP + 0x76],EAX      ; 004f12dc
    ADD ESP,0x8                         ; 004f12df
    FLD float ptr [EBP + 0x76]          ; 004f12e2
    PUSH 0x2                            ; 004f12e5
    FMUL float ptr [0x005dd949]         ; 004f12e7 | DAT_005dd949
    PUSH ESI                            ; 004f12ed
    FSTP float ptr [EBX + 0x2594]       ; 004f12ee
    CALL core_motion.cpp_FUN_005038a0   ; 004f12f4
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    FLD float ptr [EBX + 0x10a60]       ; 004f12f9
    MOV dword ptr [EBP + 0x76],EAX      ; 004f12ff
    FLD float ptr [EBP + 0x92]          ; 004f1302
    FXCH                                ; 004f1308
    FMUL ST1                            ; 004f130a
    FLD float ptr [EBP + 0x76]          ; 004f130c
    FMUL float ptr [0x005dd94d]         ; 004f130f | DAT_005dd94d
    FXCH ST2                            ; 004f1315
    FMUL float ptr [EBX + 0x10a60]      ; 004f1317
    FXCH ST2                            ; 004f131d
    FADD float ptr [EBX + 0x2594]       ; 004f131f
    ADD ESP,0x8                         ; 004f1325
    FSTP float ptr [EBX + 0x2594]       ; 004f1328
    FMUL float ptr [EBX + 0x2594]       ; 004f132e
    SUB ESP,0x4                         ; 004f1334
    FSTP float ptr [EBX + 0x2594]       ; 004f1337
    FSTP float ptr [ESP]                ; 004f133d
    PUSH EBX                            ; 004f1340
    CALL core_charactr.cpp_FUN_0042b2a0 ; 004f1341
        ;   XREF to: 0042b2a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042b2a0()
    ADD ESP,0x8                         ; 004f1346
    MOV EAX,[0x005f9e78]                ; 004f1349 | DAT_005f9e78
    PUSH 0x3e32b8c2                     ; 004f134e
    MOV dword ptr [EBP + 0x3a],EAX      ; 004f1353
    LEA EAX,[EBP + 0x32]                ; 004f1356
    PUSH 0x3f800000                     ; 004f1359
    PUSH EAX                            ; 004f135e
    MOV EAX,[0x01cedef4]                ; 004f135f | DAT_01cedef4
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004f1364
    LEA EDX,[EAX + 0x10a9c]             ; 004f136b
    PUSH EDX                            ; 004f1371
    ADD EAX,0x20                        ; 004f1372
    PUSH EAX                            ; 004f1375
    XOR EDI,EDI                         ; 004f1376
    PUSH EBX                            ; 004f1378
    MOV dword ptr [EBP + 0x32],EDI      ; 004f1379
    MOV dword ptr [EBP + 0x36],EDI      ; 004f137c
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000 ; 004f137f
        ;   XREF to: 00423000 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004f1384
    TEST EAX,EAX                        ; 004f1387
    JL 0x004f139b                       ; 004f1389
        ;   XREF to: 004f139b (CONDITIONAL_JUMP)  ; LAB_004f139b
    JLE 0x004f13a4                      ; 004f138b
        ;   XREF to: 004f13a4 (CONDITIONAL_JUMP)  ; LAB_004f13a4
    PUSH EBX                            ; 004f138d
    CALL core_mimic.cpp_CMimic_beginMorph_FUN_004f1d70 ; 004f138e
        ;   XREF to: 004f1d70 (UNCONDITIONAL_CALL)  ; void core_mimic.cpp_CMimic_beginMorph_FUN_004f1d70(CMimic * this_ptr)
    ADD ESP,0x4                         ; 004f1393
    JMP 0x004f0f3f                      ; 004f1396
        ;   XREF to: 004f0f3f (UNCONDITIONAL_JUMP)  ; LAB_004f0f3f
    PUSH 0x1                            ; 004f139b
        ;   Label: LAB_004f139b
    PUSH EDI                            ; 004f139d
    PUSH ESI                            ; 004f139e
    JMP 0x004f0f37                      ; 004f139f
        ;   XREF to: 004f0f37 (UNCONDITIONAL_JUMP)  ; LAB_004f0f37
    FLD float ptr [EBP + 0x92]          ; 004f13a4
        ;   Label: LAB_004f13a4
    FMUL float ptr [EBX + 0x10a60]      ; 004f13aa
    FLD float ptr [EBX + 0x2578]        ; 004f13b0
    FABS                                ; 004f13b6
    FDIVRP                              ; 004f13b8
    FCOMP double ptr [0x005dd951]       ; 004f13ba | DAT_005dd951
    FNSTSW AX                           ; 004f13c0
    SAHF                                ; 004f13c2
    JBE 0x004f13cf                      ; 004f13c3
        ;   XREF to: 004f13cf (CONDITIONAL_JUMP)  ; LAB_004f13cf
    PUSH 0x1                            ; 004f13c5
    PUSH 0x1                            ; 004f13c7
    PUSH ESI                            ; 004f13c9
    JMP 0x004f0f37                      ; 004f13ca
        ;   XREF to: 004f0f37 (UNCONDITIONAL_JUMP)  ; LAB_004f0f37
    PUSH 0x1                            ; 004f13cf
        ;   Label: LAB_004f13cf
    PUSH 0x2                            ; 004f13d1
    PUSH ESI                            ; 004f13d3
    JMP 0x004f0f37                      ; 004f13d4
        ;   XREF to: 004f0f37 (UNCONDITIONAL_JUMP)  ; LAB_004f0f37
    MOV EAX,dword ptr [EAX + 0x1cedee4] ; 004f13d9
        ;   Label: LAB_004f13d9
    CMP dword ptr [EAX + 0x276c],0x0    ; 004f13df
    JZ 0x004f13f4                       ; 004f13e6
        ;   XREF to: 004f13f4 (CONDITIONAL_JUMP)  ; LAB_004f13f4
    PUSH 0x1                            ; 004f13e8
    PUSH 0x0                            ; 004f13ea
    MOV EAX,dword ptr [EBP + 0x6a]      ; 004f13ec
    JMP 0x004f0f36                      ; 004f13ef
        ;   XREF to: 004f0f36 (UNCONDITIONAL_JUMP)  ; LAB_004f0f36
    MOV ECX,dword ptr [EBP + 0x6a]      ; 004f13f4
        ;   Label: LAB_004f13f4
    PUSH ECX                            ; 004f13f7
    CALL core_motion.cpp_FUN_00503e60   ; 004f13f8
        ;   XREF to: 00503e60 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00503e60(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 004f13fd
    ADD ESP,0x4                         ; 004f1400
    MOV EAX,dword ptr [EBP + 0x76]      ; 004f1403
    MOV dword ptr [EBP + 0x62],EAX      ; 004f1406
    FLD float ptr [EBP + 0x62]          ; 004f1409
    FST double ptr [EBP + 0x4a]         ; 004f140c
    FCOMP double ptr [0x005dd941]       ; 004f140f | DAT_005dd941
    FNSTSW AX                           ; 004f1415
    SAHF                                ; 004f1417
    JA 0x004f0f3f                       ; 004f1418
        ;   XREF to: 004f0f3f (CONDITIONAL_JUMP)  ; LAB_004f0f3f
    MOV EAX,[0x005f9e78]                ; 004f141e | DAT_005f9e78
    FLD1                                ; 004f1423
    MOV dword ptr [EBP + 0x66],EAX      ; 004f1425
    FCOMP double ptr [EBP + 0x4a]       ; 004f1428
    FNSTSW AX                           ; 004f142b
    SAHF                                ; 004f142d
    JA 0x004f0f3f                       ; 004f142e
        ;   XREF to: 004f0f3f (CONDITIONAL_JUMP)  ; LAB_004f0f3f
    PUSH 0x41700000                     ; 004f1434
    PUSH 0x40e00000                     ; 004f1439
    MOV EDI,dword ptr [EBP + 0x6a]      ; 004f143e
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004f1441
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV ESI,dword ptr [0x01d097e4]      ; 004f1446 | DAT_01d097e4
    MOV dword ptr [EBP + 0x76],EAX      ; 004f144c
    ADD ESP,0x8                         ; 004f144f
    FLD float ptr [EBP + 0x76]          ; 004f1452
    PUSH ESI                            ; 004f1455
    FSTP float ptr [EBP + 0x56]         ; 004f1456
    PUSH EDI                            ; 004f1459
    LEA ESI,[EBP + 0xe]                 ; 004f145a
    LEA EDI,[EBP + 0x26]                ; 004f145d
    CALL core_skeleton.cpp_FUN_00546a90 ; 004f1460
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    LEA ESI,[EBP + 0xe]                 ; 004f1465
    MOVSD ES:EDI,ESI                    ; 004f1468
    MOVSD ES:EDI,ESI                    ; 004f1469
    MOVSD ES:EDI,ESI                    ; 004f146a
    MOV AH,byte ptr [EBP + 0x29]        ; 004f146b
    XOR AH,0x80                         ; 004f146e
    ADD ESP,0x8                         ; 004f1471
    MOV byte ptr [EBP + 0x29],AH        ; 004f1474
    LEA EAX,[EBP + 0xfffffdce]          ; 004f1477
    PUSH EAX                            ; 004f147d
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 004f147e
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    MOV EAX,dword ptr [EBP + 0x56]      ; 004f1483
    ADD ESP,0x4                         ; 004f1486
    MOV dword ptr [EBP + 0xfffffdd2],EAX ; 004f1489
    LEA EAX,[EBP + 0xfffffdce]          ; 004f148f
    PUSH EAX                            ; 004f1495
    LEA EAX,[EBP + 0x26]                ; 004f1496
    PUSH 0x3e4ccccd                     ; 004f1499
    PUSH EAX                            ; 004f149e
    LEA ESI,[EBP + 0xffffff4e]          ; 004f149f
    PUSH EBX                            ; 004f14a5
    MOV dword ptr [EBP + 0xfffffe02],EBX ; 004f14a6
    MOV dword ptr [EBP + 0xfffffe06],EBX ; 004f14ac
    CALL core_actor.cpp_FUN_00408d70    ; 004f14b2
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 004f14b7
    LEA EAX,[EBP + -0xa]                ; 004f14ba
    PUSH EAX                            ; 004f14bd
    LEA EDI,[EBP + -0xa]                ; 004f14be
    LEA ESI,[EBP + 0xffffff4e]          ; 004f14c1
    PUSH EBX                            ; 004f14c7
    MOVSD ES:EDI,ESI                    ; 004f14c8
    MOVSD ES:EDI,ESI                    ; 004f14c9
    MOVSD ES:EDI,ESI                    ; 004f14ca
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110 ; 004f14cb
        ;   XREF to: 00488110 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 004f14d0
    TEST EAX,EAX                        ; 004f14d3
    JZ 0x004f0f3f                       ; 004f14d5
        ;   XREF to: 004f0f3f (CONDITIONAL_JUMP)  ; LAB_004f0f3f
    PUSH 0x5dd92f                       ; 004f14db | = "gh-hits[1,4].wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004f14e0
    PUSH EBX                            ; 004f14e6
    CALL dword ptr [EAX + 0x34]         ; 004f14e7
    ADD ESP,0x8                         ; 004f14ea
    JMP 0x004f0f3f                      ; 004f14ed
        ;   XREF to: 004f0f3f (UNCONDITIONAL_JUMP)  ; LAB_004f0f3f
    JBE 0x004f0f08                      ; 004f14f2
        ;   XREF to: 004f0f08 (CONDITIONAL_JUMP)  ; LAB_004f0f08
        ;   Label: LAB_004f14f2
    CMP ESI,0xc                         ; 004f14f8
    JC 0x004f150c                       ; 004f14fb
        ;   XREF to: 004f150c (CONDITIONAL_JUMP)  ; LAB_004f150c
    JBE 0x004f0ff0                      ; 004f14fd
        ;   XREF to: 004f0ff0 (CONDITIONAL_JUMP)  ; LAB_004f0ff0
    CMP ESI,0x13                        ; 004f1503
    JZ 0x004f13d9                       ; 004f1506
        ;   XREF to: 004f13d9 (CONDITIONAL_JUMP)  ; LAB_004f13d9
    PUSH 0x1                            ; 004f150c
        ;   Label: LAB_004f150c
    PUSH 0x2                            ; 004f150e
    JMP 0x004f0f30                      ; 004f1510
        ;   XREF to: 004f0f30 (UNCONDITIONAL_JUMP)  ; LAB_004f0f30
    FLD float ptr [EBP + 0x92]          ; 004f1515
        ;   Label: LAB_004f1515
    FLD ST0                             ; 004f151b
    FMUL float ptr [EBX + 0x10a60]      ; 004f151d
    FLD float ptr [EBX + 0x10a60]       ; 004f1523
    FMULP ST2                           ; 004f1529
    SUB ESP,0x4                         ; 004f152b
    FXCH                                ; 004f152e
    FSTP float ptr [EBX + 0x2594]       ; 004f1530
    FSTP float ptr [ESP]                ; 004f1536
    PUSH EBX                            ; 004f1539
    CALL core_charactr.cpp_FUN_0042b2a0 ; 004f153a
        ;   XREF to: 0042b2a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042b2a0()
    ADD ESP,0x8                         ; 004f153f
    MOV EAX,dword ptr [EBP + 0x66]      ; 004f1542
    PUSH 0x3f060a92                     ; 004f1545
    MOV dword ptr [EBP + 0x46],EAX      ; 004f154a
    LEA EAX,[EBP + 0x3e]                ; 004f154d
    PUSH 0x40400000                     ; 004f1550
    PUSH EAX                            ; 004f1555
    MOV EAX,[0x01cedef4]                ; 004f1556 | DAT_01cedef4
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004f155b
    LEA ESI,[EAX + 0x10a9c]             ; 004f1562
    PUSH ESI                            ; 004f1568
    ADD EAX,0x20                        ; 004f1569
    PUSH EAX                            ; 004f156c
    XOR EDI,EDI                         ; 004f156d
    PUSH EBX                            ; 004f156f
    MOV dword ptr [EBP + 0x3e],EDI      ; 004f1570
    MOV dword ptr [EBP + 0x42],EDI      ; 004f1573
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000 ; 004f1576
        ;   XREF to: 00423000 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004f157b
    CMP EAX,0x1                         ; 004f157e
    JZ 0x004f0f4f                       ; 004f1581
        ;   XREF to: 004f0f4f (CONDITIONAL_JUMP)  ; LAB_004f0f4f
    PUSH 0x1                            ; 004f1587
    PUSH 0x2                            ; 004f1589
    LEA EAX,[EBX + 0x2b4]               ; 004f158b
    PUSH EAX                            ; 004f1591
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004f1592
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f1597
    JMP 0x004f0f4f                      ; 004f159a
        ;   XREF to: 004f0f4f (UNCONDITIONAL_JUMP)  ; LAB_004f0f4f
    CMP dword ptr [EBX + 0x2570],0x0    ; 004f159f
        ;   Label: LAB_004f159f
    JZ 0x004f0f67                       ; 004f15a6
        ;   XREF to: 004f0f67 (CONDITIONAL_JUMP)  ; LAB_004f0f67
    MOV EAX,[0x01d097e4]                ; 004f15ac | DAT_01d097e4
    PUSH EAX                            ; 004f15b1
    PUSH ESI                            ; 004f15b2
    LEA ESI,[EBP + 0xfffffeee]          ; 004f15b3
    LEA EDI,[EBP + 0xfffffed6]          ; 004f15b9
    CALL core_skeleton.cpp_FUN_005469a0 ; 004f15bf
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005469a0()
    LEA ESI,[EBP + 0xfffffeee]          ; 004f15c4
    ADD ESP,0x8                         ; 004f15ca
    MOVSD ES:EDI,ESI                    ; 004f15cd
    MOVSD ES:EDI,ESI                    ; 004f15ce
    MOVSD ES:EDI,ESI                    ; 004f15cf
    PUSH 0x3f800000                     ; 004f15d0
    MOV DL,byte ptr [EBP + 0xfffffed9]  ; 004f15d5
    LEA ESI,[EBP + 0xfffffed6]          ; 004f15db
    XOR DL,0x80                         ; 004f15e1
    PUSH ESI                            ; 004f15e4
    MOV byte ptr [EBP + 0xfffffed9],DL  ; 004f15e5
    PUSH EBX                            ; 004f15eb
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004f15ec
    CALL dword ptr [EAX + 0x2c]         ; 004f15f2
    ADD ESP,0xc                         ; 004f15f5
    JMP 0x004f0f67                      ; 004f15f8
        ;   XREF to: 004f0f67 (UNCONDITIONAL_JUMP)  ; LAB_004f0f67
    CMP EAX,0x7                         ; 004f15fd
        ;   Label: LAB_004f15fd
    JZ 0x004f159f                       ; 004f1600
        ;   XREF to: 004f159f (CONDITIONAL_JUMP)  ; LAB_004f159f
    JMP 0x004f0f67                      ; 004f1602
        ;   XREF to: 004f0f67 (UNCONDITIONAL_JUMP)  ; LAB_004f0f67
    PUSH EBX                            ; 004f1607
        ;   Label: LAB_004f1607
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_00424470 ; 004f1608
        ;   XREF to: 00424470 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_00424470(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004f160d
    MOV EDX,dword ptr [EBP + 0x72]      ; 004f1610
    PUSH EDX                            ; 004f1613
    CALL core_motion.cpp_FUN_005035c0   ; 004f1614
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004f1619
    ADD ESP,0x4                         ; 004f161c
    MOV dword ptr [EBP + 0x6e],EAX      ; 004f161f
    CMP EAX,0xc                         ; 004f1622
    JZ 0x004f1763                       ; 004f1625
        ;   XREF to: 004f1763 (CONDITIONAL_JUMP)  ; LAB_004f1763
    TEST EAX,EAX                        ; 004f162b
    JZ 0x004f1763                       ; 004f162d
        ;   XREF to: 004f1763 (CONDITIONAL_JUMP)  ; LAB_004f1763
    PUSH dword ptr [EBP + 0x92]         ; 004f1633
        ;   Label: LAB_004f1633
    PUSH EBX                            ; 004f1639
    LEA ESI,[EBX + 0x2588]              ; 004f163a
    CALL core_charactr.cpp_FUN_00423a10 ; 004f1640
        ;   XREF to: 00423a10 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00423a10()
    FLD float ptr [ESI]                 ; 004f1645
    FMUL float ptr [EBP + 0x92]         ; 004f1647
    FLD float ptr [ESI + 0x4]           ; 004f164d
    FMUL float ptr [EBP + 0x92]         ; 004f1650
    FLD float ptr [ESI + 0x8]           ; 004f1656
    FMUL float ptr [EBP + 0x92]         ; 004f1659
    LEA EDI,[EBP + 0x1a]                ; 004f165f
    LEA ESI,[EBP + 0xfffffefa]          ; 004f1662
    FXCH ST2                            ; 004f1668
    FSTP float ptr [EBP + 0xfffffefa]   ; 004f166a
    FSTP float ptr [EBP + 0xfffffefe]   ; 004f1670
    FSTP float ptr [EBP + 0xffffff02]   ; 004f1676
    MOVSD ES:EDI,ESI                    ; 004f167c
    MOVSD ES:EDI,ESI                    ; 004f167d
    MOVSD ES:EDI,ESI                    ; 004f167e
    LEA EAX,[EBX + 0x257c]              ; 004f167f
    FLD float ptr [EBP + 0x1a]          ; 004f1685
    FLD float ptr [EBP + 0x1e]          ; 004f1688
    FLD float ptr [EBP + 0x22]          ; 004f168b
    LEA EDI,[EBP + 0xffffff12]          ; 004f168e
    LEA ESI,[EBP + 0xfffffeb2]          ; 004f1694
    FXCH ST2                            ; 004f169a
    FADD float ptr [EAX]                ; 004f169c
    FXCH                                ; 004f169e
    FADD float ptr [EAX + 0x4]          ; 004f16a0
    FXCH ST2                            ; 004f16a3
    FADD float ptr [EAX + 0x8]          ; 004f16a5
    FXCH                                ; 004f16a8
    FSTP float ptr [EBP + 0xfffffeb2]   ; 004f16aa
    FXCH                                ; 004f16b0
    FSTP float ptr [EBP + 0xfffffeb6]   ; 004f16b2
    FSTP float ptr [EBP + 0xfffffeba]   ; 004f16b8
    MOVSD ES:EDI,ESI                    ; 004f16be
    MOVSD ES:EDI,ESI                    ; 004f16bf
    MOVSD ES:EDI,ESI                    ; 004f16c0
    MOV ESI,dword ptr [EBP + 0x6e]      ; 004f16c1
    ADD ESP,0x8                         ; 004f16c4
    CMP ESI,0x3                         ; 004f16c7
    JNC 0x004f1772                      ; 004f16ca
        ;   XREF to: 004f1772 (CONDITIONAL_JUMP)  ; LAB_004f1772
    CMP ESI,0x1                         ; 004f16d0
    JNC 0x004f170f                      ; 004f16d3
        ;   XREF to: 004f170f (CONDITIONAL_JUMP)  ; LAB_004f170f
    TEST ESI,ESI                        ; 004f16d5
    JZ 0x004f170f                       ; 004f16d7
        ;   XREF to: 004f170f (CONDITIONAL_JUMP)  ; LAB_004f170f
        ;   Label: LAB_004f16d7
    LEA EAX,[EBX + 0x2508]              ; 004f16d9
        ;   Label: LAB_004f16d9
    FLD float ptr [EBP + 0xffffff12]    ; 004f16df
    FADD float ptr [EAX]                ; 004f16e5
    FLD float ptr [EBP + 0xffffff16]    ; 004f16e7
    FXCH                                ; 004f16ed
    FSTP float ptr [EBP + 0xffffff12]   ; 004f16ef
    FADD float ptr [EAX + 0x4]          ; 004f16f5
    FLD float ptr [EBP + 0xffffff1a]    ; 004f16f8
    FXCH                                ; 004f16fe
    FSTP float ptr [EBP + 0xffffff16]   ; 004f1700
    FADD float ptr [EAX + 0x8]          ; 004f1706
    FSTP float ptr [EBP + 0xffffff1a]   ; 004f1709
    LEA EAX,[EBP + 0xffffff12]          ; 004f170f
        ;   Label: LAB_004f170f
    PUSH EAX                            ; 004f1715
    PUSH EBX                            ; 004f1716
    CALL core_charactr.cpp_FUN_00423a60 ; 004f1717
        ;   XREF to: 00423a60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00423a60(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 004f171c
    LEA ESI,[EBX + 0x2b4]               ; 004f171f
        ;   Label: LAB_004f171f
    PUSH ESI                            ; 004f1725
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00 ; 004f1726
        ;   XREF to: 00544f00 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004f172b
    PUSH ESI                            ; 004f172e
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0 ; 004f172f
        ;   XREF to: 00546ae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004f1734
    PUSH ESI                            ; 004f1737
    PUSH dword ptr [EBX + 0x2574]       ; 004f1738
    LEA EAX,[EBX + 0x30]                ; 004f173e
    PUSH dword ptr [EBP + 0x92]         ; 004f1741
    PUSH EAX                            ; 004f1747
    LEA EAX,[EBX + 0x20]                ; 004f1748
    PUSH EAX                            ; 004f174b
    ADD EBX,0x10bc0                     ; 004f174c
    PUSH EBX                            ; 004f1752
    CALL core_cloth.cpp_CCloth_process_FUN_005afdf0 ; 004f1753
        ;   XREF to: 005afdf0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_process_FUN_005afdf0(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 004f1758
    LEA ESP,[EBP + 0x7a]                ; 004f175b
    POP EBP                             ; 004f175e
    POP EDI                             ; 004f175f
    POP ESI                             ; 004f1760
    POP EBX                             ; 004f1761
    RET                                 ; 004f1762
    CMP dword ptr [EBX + 0xdc],0x0      ; 004f1763
        ;   Label: LAB_004f1763
    JNZ 0x004f1633                      ; 004f176a
        ;   XREF to: 004f1633 (CONDITIONAL_JUMP)  ; LAB_004f1633
    JMP 0x004f171f                      ; 004f1770
        ;   XREF to: 004f171f (UNCONDITIONAL_JUMP)  ; LAB_004f171f
    JBE 0x004f170f                      ; 004f1772
        ;   XREF to: 004f170f (CONDITIONAL_JUMP)  ; LAB_004f170f
        ;   Label: LAB_004f1772
    CMP ESI,0x11                        ; 004f1774
    JNC 0x004f1781                      ; 004f1777
        ;   XREF to: 004f1781 (CONDITIONAL_JUMP)  ; LAB_004f1781
    CMP ESI,0x10                        ; 004f1779
    JMP 0x004f16d7                      ; 004f177c
        ;   XREF to: 004f16d7 (UNCONDITIONAL_JUMP)  ; LAB_004f16d7
    JBE 0x004f170f                      ; 004f1781
        ;   XREF to: 004f170f (CONDITIONAL_JUMP)  ; LAB_004f170f
        ;   Label: LAB_004f1781
    CMP ESI,0x14                        ; 004f1783
    JC 0x004f16d9                       ; 004f1786
        ;   XREF to: 004f16d9 (CONDITIONAL_JUMP)  ; LAB_004f16d9
    JBE 0x004f170f                      ; 004f178c
        ;   XREF to: 004f170f (CONDITIONAL_JUMP)  ; LAB_004f170f
    CMP ESI,0x15                        ; 004f178e
    JMP 0x004f16d7                      ; 004f1791
        ;   XREF to: 004f16d7 (UNCONDITIONAL_JUMP)  ; LAB_004f16d7

