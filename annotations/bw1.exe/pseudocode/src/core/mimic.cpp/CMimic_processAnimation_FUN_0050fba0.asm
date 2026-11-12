; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mimic_cpp_CMimic_processAnimation_FUN_0050fba0(CMimic *this_ptr,float delta_time)
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
;   core_mimic.cpp_CMimic_process_FUN_0050f630 at 0050f6b2
;
; Referenced Globals:
;   TerminatedCString s_gh_alrt_1_4_wav_005e89a5
;   TerminatedCString s_gh_hits_1_4_wav_005e89b6
;   undefined4 DAT_005e89c8
;   undefined4 DAT_005e89d0
;   undefined4 DAT_005e89d4
;   undefined4 DAT_005e89d8
;   undefined4 DAT_005e89e0
;   undefined4 DAT_005e89e8
;   undefined4 DAT_005e89f0
;   undefined4 DAT_005e89f8
;   undefined4 DAT_006039c8
;   CGame* g_CGamePtr = 01ccf390
;   CGore* g_CGorePtr = 01cd0e3c
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 g_CGameInstance.freeze_enemies_enabled
;   ... and 5 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd60
;   core_charactr.cpp_CCharacter_preProcess_FUN_0042e160
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0
;   core_charactr.cpp_FUN_0042d700
;   core_charactr.cpp_FUN_0042d750
;   core_charactr.cpp_FUN_00435320
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010
;   core_cloth.cpp_CCloth_process_FUN_00440610
;   core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770
;   core_gore.cpp_CGore_createBloodPool_FUN_004e62e0
;   core_mimic.cpp_CMimic_beginMorph_FUN_00510b00
;   core_motion.cpp_CMotionController_advance_FUN_00524270
;   ... and 12 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050fba0
        ;   Label: core_mimic.cpp_CMimic_processAnimation_FUN_0050fba0
    PUSH ESI                            ; 0050fba1
    PUSH EDI                            ; 0050fba2
    PUSH EBP                            ; 0050fba3
    MOV EBP,ESP                         ; 0050fba4
    SUB ESP,0x2ac                       ; 0050fba6
    SUB EBP,0x7a                        ; 0050fbac
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0050fbaf
    MOV EAX,[0x01d06ab4]                ; 0050fbb5 | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 0050fbba
    PUSH 0x0                            ; 0050fbc1
    ADD EAX,0x158                       ; 0050fbc3
    PUSH EAX                            ; 0050fbc8
    LEA ESI,[EBP + -0x22]               ; 0050fbc9
    CALL core_skeleton.cpp_FUN_00569040 ; 0050fbcc
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    ADD ESP,0x8                         ; 0050fbd1
    LEA EAX,[EBP + 0xffffff1e]          ; 0050fbd4
    PUSH EAX                            ; 0050fbda
    MOV EAX,[0x01d06ab4]                ; 0050fbdb | DAT_01d06ab4
    LEA EDI,[EBP + 0xffffff1e]          ; 0050fbe0
    LEA ESI,[EBP + -0x22]               ; 0050fbe6
    MOV EDX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 0050fbe9
    MOVSD ES:EDI,ESI                    ; 0050fbf0
    MOVSD ES:EDI,ESI                    ; 0050fbf1
    MOVSD ES:EDI,ESI                    ; 0050fbf2
    PUSH EDX                            ; 0050fbf3
    LEA ESI,[EBP + 0xfffffe9a]          ; 0050fbf4
    CALL core_actor.cpp_FUN_00408b40    ; 0050fbfa
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    MOV EAX,[0x01d06ab4]                ; 0050fbff | DAT_01d06ab4
    LEA EDI,[EBP + 0xfffffea6]          ; 0050fc04
    LEA ESI,[EBP + 0xfffffe9a]          ; 0050fc0a
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 0050fc10
    MOVSD ES:EDI,ESI                    ; 0050fc17
    MOVSD ES:EDI,ESI                    ; 0050fc18
    MOVSD ES:EDI,ESI                    ; 0050fc19
    MOV EAX,dword ptr [EAX + 0x24]      ; 0050fc1a
    ADD ESP,0x8                         ; 0050fc1d
    MOV dword ptr [EBP + 0xfffffeaa],EAX ; 0050fc20
    LEA EAX,[EBP + 0xfffffea6]          ; 0050fc26
    PUSH EAX                            ; 0050fc2c
    PUSH EBX                            ; 0050fc2d
    LEA ESI,[EBP + 0xffffff7e]          ; 0050fc2e
    LEA EDI,[EBP + 0xfffffeca]          ; 0050fc34
    CALL core_actor.cpp_FUN_00408bb0    ; 0050fc3a
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[EBP + 0xffffff7e]          ; 0050fc3f
    MOVSD ES:EDI,ESI                    ; 0050fc45
    MOVSD ES:EDI,ESI                    ; 0050fc46
    MOVSD ES:EDI,ESI                    ; 0050fc47
    ADD ESP,0x8                         ; 0050fc48
    MOV EAX,dword ptr [EBP + 0xfffffeca] ; 0050fc4b
    XOR ECX,ECX                         ; 0050fc51
    MOV dword ptr [EBP + -0x46],EAX     ; 0050fc53
    MOV EAX,dword ptr [EBP + 0xfffffed2] ; 0050fc56
    MOV dword ptr [EBP + -0x42],ECX     ; 0050fc5c
    MOV dword ptr [EBP + -0x3e],EAX     ; 0050fc5f
    LEA EAX,[EBX + 0x158]               ; 0050fc62
    MOV ESI,0xbf800000                  ; 0050fc68
    PUSH EAX                            ; 0050fc6d
    MOV dword ptr [EBP + 0x66],ESI      ; 0050fc6e
    MOV dword ptr [EBP + 0x6a],EAX      ; 0050fc71
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0050fc74
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV ESI,dword ptr [EAX + 0x24]      ; 0050fc79
    MOV EAX,[0x01d06ab4]                ; 0050fc7c | DAT_01d06ab4
    ADD ESP,0x4                         ; 0050fc81
    SHL EAX,0x2                         ; 0050fc84
    CMP ESI,0x2                         ; 0050fc87
    JNC 0x00510282                      ; 0050fc8a
        ;   XREF to: 00510282 (CONDITIONAL_JUMP)  ; LAB_00510282
    TEST ESI,ESI                        ; 0050fc90
    JBE 0x0050fdf1                      ; 0050fc92
        ;   XREF to: 0050fdf1 (CONDITIONAL_JUMP)  ; LAB_0050fdf1
    MOV EAX,[0x01d06ab4]                ; 0050fc98 | DAT_01d06ab4
        ;   Label: LAB_0050fc98
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 0050fc9d
    PUSH EAX                            ; 0050fca4
    MOV ESI,dword ptr [EAX + 0x154]     ; 0050fca5
    CALL dword ptr [ESI + 0x10c]        ; 0050fcab
    ADD ESP,0x4                         ; 0050fcb1
    TEST EAX,EAX                        ; 0050fcb4
    JZ 0x0050ff83                       ; 0050fcb6
        ;   XREF to: 0050ff83 (CONDITIONAL_JUMP)  ; LAB_0050ff83
    PUSH 0x1                            ; 0050fcbc
        ;   Label: LAB_0050fcbc
    PUSH 0x0                            ; 0050fcbe
    LEA EAX,[EBX + 0x158]               ; 0050fcc0
        ;   Label: LAB_0050fcc0
    PUSH EAX                            ; 0050fcc6
        ;   Label: LAB_0050fcc6
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0050fcc7
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_0050fcc7
    ADD ESP,0xc                         ; 0050fccc
    FLD float ptr [EBP + 0x66]          ; 0050fccf
        ;   Label: LAB_0050fccf
    FLDZ                                ; 0050fcd2
    FCOMPP                              ; 0050fcd4
    FNSTSW AX                           ; 0050fcd6
    SAHF                                ; 0050fcd8
    JBE 0x005102a5                      ; 0050fcd9
        ;   XREF to: 005102a5 (CONDITIONAL_JUMP)  ; LAB_005102a5
    FLD float ptr [EBP + 0x92]          ; 0050fcdf
        ;   Label: LAB_0050fcdf
    LEA EAX,[EBX + 0x158]               ; 0050fce5
    FMUL float ptr [EBX + 0xc1d0]       ; 0050fceb
    MOV dword ptr [EBP + 0x72],EAX      ; 0050fcf1
    FSTP float ptr [EBP + 0x5e]         ; 0050fcf4
    FLD float ptr [EBP + 0x5e]          ; 0050fcf7
        ;   Label: LAB_0050fcf7
    FLDZ                                ; 0050fcfa
    FCOMPP                              ; 0050fcfc
    FNSTSW AX                           ; 0050fcfe
    SAHF                                ; 0050fd00
    JNC 0x00510397                      ; 0050fd01
        ;   XREF to: 00510397 (CONDITIONAL_JUMP)  ; LAB_00510397
    LEA EAX,[EBP + 0x5e]                ; 0050fd07
    PUSH EAX                            ; 0050fd0a
    MOV ESI,dword ptr [EBP + 0x72]      ; 0050fd0b
    PUSH ESI                            ; 0050fd0e
    CALL core_motion.cpp_CMotionController_advance_FUN_00524270 ; 0050fd0f
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_00524270(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 0050fd14
    CMP EAX,0x1                         ; 0050fd17
    JC 0x0050fcf7                       ; 0050fd1a
        ;   XREF to: 0050fcf7 (CONDITIONAL_JUMP)  ; LAB_0050fcf7
    JA 0x0051038d                       ; 0050fd1c
        ;   XREF to: 0051038d (CONDITIONAL_JUMP)  ; LAB_0051038d
    CMP dword ptr [EBX + 0x2500],0x0    ; 0050fd22
    JZ 0x0050fcf7                       ; 0050fd29
        ;   XREF to: 0050fcf7 (CONDITIONAL_JUMP)  ; LAB_0050fcf7
    MOV ESI,dword ptr [0x01d22440]      ; 0050fd2b | DAT_01d22440
    PUSH ESI                            ; 0050fd31
    MOV EDI,dword ptr [EBP + 0x72]      ; 0050fd32
    PUSH EDI                            ; 0050fd35
    LEA ESI,[EBP + 0xfffffebe]          ; 0050fd36
    CALL core_skeleton.cpp_FUN_00569040 ; 0050fd3c
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    LEA EDI,[EBP + 0xffffff66]          ; 0050fd41
    LEA ESI,[EBP + 0xfffffebe]          ; 0050fd47
    ADD ESP,0x8                         ; 0050fd4d
    MOVSD ES:EDI,ESI                    ; 0050fd50
    MOVSD ES:EDI,ESI                    ; 0050fd51
    MOVSD ES:EDI,ESI                    ; 0050fd52
    LEA EAX,[EBP + 0xffffff66]          ; 0050fd53
    MOV DH,byte ptr [EBP + 0xffffff69]  ; 0050fd59
    PUSH 0x3f800000                     ; 0050fd5f
    XOR DH,0x80                         ; 0050fd64
    PUSH EAX                            ; 0050fd67
    MOV byte ptr [EBP + 0xffffff69],DH  ; 0050fd68
    PUSH EBX                            ; 0050fd6e
    MOV ESI,dword ptr [EBX + 0x154]     ; 0050fd6f
    CALL dword ptr [ESI + 0x24]         ; 0050fd75
    ADD ESP,0xc                         ; 0050fd78
    JMP 0x0050fcf7                      ; 0050fd7b
        ;   XREF to: 0050fcf7 (UNCONDITIONAL_JUMP)  ; LAB_0050fcf7
    MOV EDX,dword ptr [EBX + 0xc1d4]    ; 0050fd80
        ;   Label: LAB_0050fd80
    TEST EDX,EDX                        ; 0050fd86
    JNZ 0x0050fccf                      ; 0050fd88
        ;   XREF to: 0050fccf (CONDITIONAL_JUMP)  ; LAB_0050fccf
    CMP dword ptr [EBX + 0xdc],0x0      ; 0050fd8e
    JNZ 0x0050fccf                      ; 0050fd95
        ;   XREF to: 0050fccf (CONDITIONAL_JUMP)  ; LAB_0050fccf
    PUSH EDX                            ; 0050fd9b
    MOV ESI,dword ptr [EBP + 0x6a]      ; 0050fd9c
    PUSH ESI                            ; 0050fd9f
    LEA ESI,[EBP + -0x52]               ; 0050fda0
    LEA EDI,[EBP + -0x5e]               ; 0050fda3
    CALL core_skeleton.cpp_FUN_00569040 ; 0050fda6
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    ADD ESP,0x8                         ; 0050fdab
    LEA EAX,[EBP + -0x5e]               ; 0050fdae
    LEA ESI,[EBP + -0x52]               ; 0050fdb1
    PUSH EAX                            ; 0050fdb4
    MOVSD ES:EDI,ESI                    ; 0050fdb5
    MOVSD ES:EDI,ESI                    ; 0050fdb6
    MOVSD ES:EDI,ESI                    ; 0050fdb7
    PUSH EBX                            ; 0050fdb8
    LEA ESI,[EBP + -0x3a]               ; 0050fdb9
    LEA EDI,[EBP + -0x6a]               ; 0050fdbc
    CALL core_actor.cpp_FUN_00408b40    ; 0050fdbf
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 0050fdc4
    LEA ESI,[EBP + -0x3a]               ; 0050fdc7
    LEA EAX,[EBP + -0x6a]               ; 0050fdca
    PUSH 0x0                            ; 0050fdcd
    MOVSD ES:EDI,ESI                    ; 0050fdcf
    MOVSD ES:EDI,ESI                    ; 0050fdd0
    MOVSD ES:EDI,ESI                    ; 0050fdd1
    PUSH EAX                            ; 0050fdd2
    MOV EDI,dword ptr [0x0061dca4]      ; 0050fdd3 | g_CGorePtr
    PUSH EDI                            ; 0050fdd9
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004e62e0 ; 0050fdda
        ;   XREF to: 004e62e0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004e62e0(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 0050fddf
    MOV dword ptr [EBX + 0xc1d4],0x1    ; 0050fde2
    JMP 0x0050fccf                      ; 0050fdec
        ;   XREF to: 0050fccf (UNCONDITIONAL_JUMP)  ; LAB_0050fccf
    MOV EAX,dword ptr [EAX + 0x1d06aa4] ; 0050fdf1
        ;   Label: LAB_0050fdf1
    PUSH EAX                            ; 0050fdf7
    MOV EDX,dword ptr [EAX + 0x154]     ; 0050fdf8
    CALL dword ptr [EDX + 0x10c]        ; 0050fdfe
    ADD ESP,0x4                         ; 0050fe04
    TEST EAX,EAX                        ; 0050fe07
    JNZ 0x0050fccf                      ; 0050fe09
        ;   XREF to: 0050fccf (CONDITIONAL_JUMP)  ; LAB_0050fccf
    MOV EAX,[0x0061d95c]                ; 0050fe0f | g_CGamePtr
    CMP dword ptr [EAX + 0x1f0],0x0     ; 0050fe14 | g_CGameInstance.freeze_enemies_enabled
    JNZ 0x0050fccf                      ; 0050fe1b
        ;   XREF to: 0050fccf (CONDITIONAL_JUMP)  ; LAB_0050fccf
    MOV EAX,[0x01d06ab4]                ; 0050fe21 | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 0050fe26
    FLD float ptr [EBX + 0x24]          ; 0050fe2d
    FSUB float ptr [EAX + 0x24]         ; 0050fe30
    FABS                                ; 0050fe33
    FCOMP double ptr [0x005e89e0]       ; 0050fe35 | DAT_005e89e0
    FNSTSW AX                           ; 0050fe3b
    SAHF                                ; 0050fe3d
    JA 0x0050fccf                       ; 0050fe3e
        ;   XREF to: 0050fccf (CONDITIONAL_JUMP)  ; LAB_0050fccf
    LEA EAX,[EBP + -0x46]               ; 0050fe44
    PUSH EAX                            ; 0050fe47
    LEA ESI,[EBP + 0x2]                 ; 0050fe48
    LEA EDI,[EBP + 0xfffffee2]          ; 0050fe4b
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 0050fe51
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[EBP + 0x2]                 ; 0050fe56
    ADD ESP,0x4                         ; 0050fe59
    MOVSD ES:EDI,ESI                    ; 0050fe5c
    MOVSD ES:EDI,ESI                    ; 0050fe5d
    MOVSD ES:EDI,ESI                    ; 0050fe5e
    PUSH dword ptr [EBP + 0xfffffee6]   ; 0050fe5f
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 0050fe65
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 0050fe6a
    FLD float ptr [EBP + 0x76]          ; 0050fe6d
    FABS                                ; 0050fe70
    FLD float ptr [EBP + -0x42]         ; 0050fe72
    FMUL ST0                            ; 0050fe75
    FLD float ptr [EBP + -0x46]         ; 0050fe77
    FMUL ST0                            ; 0050fe7a
    FADDP                               ; 0050fe7c
    FLD float ptr [EBP + -0x3e]         ; 0050fe7e
    FMUL ST0                            ; 0050fe81
    FADDP                               ; 0050fe83
    FSQRT                               ; 0050fe85
    FXCH                                ; 0050fe87
    FMUL double ptr [0x005e89e8]        ; 0050fe89 | DAT_005e89e8
    FLD1                                ; 0050fe8f
    FSUBRP                              ; 0050fe91
    FMUL double ptr [0x005e89f0]        ; 0050fe93 | DAT_005e89f0
    FADD double ptr [0x005e89f8]        ; 0050fe99 | DAT_005e89f8
    ADD ESP,0x4                         ; 0050fe9f
    FXCH                                ; 0050fea2
    FCOMPP                              ; 0050fea4
    FNSTSW AX                           ; 0050fea6
    SAHF                                ; 0050fea8
    JNC 0x0050fccf                      ; 0050fea9
        ;   XREF to: 0050fccf (CONDITIONAL_JUMP)  ; LAB_0050fccf
    MOV ECX,dword ptr [0x01d22424]      ; 0050feaf | DAT_01d22424
    PUSH ECX                            ; 0050feb5
    MOV ESI,dword ptr [EBP + 0x6a]      ; 0050feb6
    PUSH ESI                            ; 0050feb9
    LEA ESI,[EBP + 0xfffffe3a]          ; 0050feba
    LEA EDI,[EBP + 0xfffffe0a]          ; 0050fec0
    CALL core_skeleton.cpp_FUN_00568e30 ; 0050fec6
        ;   XREF to: 00568e30 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00568e30()
    MOV ECX,0xc                         ; 0050fecb
    LEA ESI,[EBP + 0xfffffe3a]          ; 0050fed0
    ADD ESP,0x8                         ; 0050fed6
    LEA EAX,[EBP + 0xfffffe0a]          ; 0050fed9
    MOV EDX,0x3e99999a                  ; 0050fedf
    PUSH EAX                            ; 0050fee4
    MOV dword ptr [EBP + -0x6e],EDX     ; 0050fee5
    MOVSD.REP ES:EDI,ESI                ; 0050fee8
    MOV EAX,0x3f333333                  ; 0050feea
    LEA ESI,[EBP + 0xffffff06]          ; 0050feef
    MOV dword ptr [EBP + -0x72],EAX     ; 0050fef5
    LEA EAX,[EBP + -0x76]               ; 0050fef8
    XOR EDI,EDI                         ; 0050fefb
    PUSH EAX                            ; 0050fefd
    MOV dword ptr [EBP + -0x76],EDI     ; 0050fefe
    LEA EDI,[EBP + 0xffffff5a]          ; 0050ff01
    CALL core_xform.cpp_FUN_005b5080    ; 0050ff07
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    ADD ESP,0x8                         ; 0050ff0c
    LEA EAX,[EBP + 0xffffff5a]          ; 0050ff0f
    LEA ESI,[EBP + 0xffffff06]          ; 0050ff15
    PUSH EAX                            ; 0050ff1b
    MOVSD ES:EDI,ESI                    ; 0050ff1c
    MOVSD ES:EDI,ESI                    ; 0050ff1d
    MOVSD ES:EDI,ESI                    ; 0050ff1e
    PUSH EBX                            ; 0050ff1f
    LEA ESI,[EBP + -0x16]               ; 0050ff20
    CALL core_actor.cpp_FUN_00408b40    ; 0050ff23
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 0050ff28
    LEA EAX,[EBP + 0xfffffea6]          ; 0050ff2b
    PUSH EAX                            ; 0050ff31
    LEA EAX,[EBP + 0xffffff72]          ; 0050ff32
    LEA EDI,[EBP + 0xffffff72]          ; 0050ff38
    PUSH EAX                            ; 0050ff3e
    MOV ECX,dword ptr [0x00622c18]      ; 0050ff3f | g_CDemonSetPtr
    LEA ESI,[EBP + -0x16]               ; 0050ff45
    PUSH ECX                            ; 0050ff48 | g_CDemonSetInstance
    MOVSD ES:EDI,ESI                    ; 0050ff49
    MOVSD ES:EDI,ESI                    ; 0050ff4a
    MOVSD ES:EDI,ESI                    ; 0050ff4b
    CALL core_setcolid.cpp_CDemonSet_testVoxelRaycast_FUN_005572e0 ; 0050ff4c
        ;   XREF to: 005572e0 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_testVoxelRaycast_FUN_005572e0(CDemonSet * this_ptr, CVector3f * start_pos, CVector3f * end_pos)
    ADD ESP,0xc                         ; 0050ff51
    TEST EAX,EAX                        ; 0050ff54
    JNZ 0x0050fccf                      ; 0050ff56
        ;   XREF to: 0050fccf (CONDITIONAL_JUMP)  ; LAB_0050fccf
    PUSH 0x1                            ; 0050ff5c
    PUSH 0x2                            ; 0050ff5e
    MOV ESI,dword ptr [EBP + 0x6a]      ; 0050ff60
    PUSH ESI                            ; 0050ff63
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0050ff64
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0050ff69
    PUSH 0x5e89a5                       ; 0050ff6c | = "gh-alrt[1,4].wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0050ff71
    PUSH EBX                            ; 0050ff77
    CALL dword ptr [EAX + 0x2c]         ; 0050ff78
    ADD ESP,0x8                         ; 0050ff7b
    JMP 0x0050fccf                      ; 0050ff7e
        ;   XREF to: 0050fccf (UNCONDITIONAL_JUMP)  ; LAB_0050fccf
    MOV EAX,[0x0061d95c]                ; 0050ff83 | g_CGamePtr
        ;   Label: LAB_0050ff83
    CMP dword ptr [EAX + 0x1f0],0x0     ; 0050ff88 | g_CGameInstance.freeze_enemies_enabled
    JNZ 0x0050fcbc                      ; 0050ff8f
        ;   XREF to: 0050fcbc (CONDITIONAL_JUMP)  ; LAB_0050fcbc
    LEA EAX,[EBX + 0x20]                ; 0050ff95
    PUSH EAX                            ; 0050ff98
    MOV ECX,dword ptr [EBX + 0x46e64]   ; 0050ff99
    PUSH ECX                            ; 0050ff9f
    LEA ESI,[EBP + 0xffffff2a]          ; 0050ffa0
    LEA EDI,[EBP + 0xffffff42]          ; 0050ffa6
    CALL core_actor.cpp_FUN_00408bb0    ; 0050ffac
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[EBP + 0xffffff2a]          ; 0050ffb1
    ADD ESP,0x8                         ; 0050ffb7
    MOVSD ES:EDI,ESI                    ; 0050ffba
    MOVSD ES:EDI,ESI                    ; 0050ffbb
    MOVSD ES:EDI,ESI                    ; 0050ffbc
    PUSH EBX                            ; 0050ffbd
    MOV EAX,dword ptr [EBX + 0x154]     ; 0050ffbe
    LEA ESI,[EBP + 0xfffffe6a]          ; 0050ffc4
    LEA EDI,[EBP + 0xfffffe82]          ; 0050ffca
    CALL dword ptr [EAX + 0x1c]         ; 0050ffd0
    MOV ECX,0x6                         ; 0050ffd3
    LEA ESI,[EBP + 0xfffffe6a]          ; 0050ffd8
    LEA EAX,[EBP + 0xfffffe82]          ; 0050ffde
    MOVSD.REP ES:EDI,ESI                ; 0050ffe4
    FLD float ptr [EAX + 0xc]           ; 0050ffe6
    FLD float ptr [EAX + 0x10]          ; 0050ffe9
    FLD float ptr [EAX + 0x14]          ; 0050ffec
    LEA EDI,[EBP + 0xffffff36]          ; 0050ffef
    LEA ESI,[EBP + -0x2e]               ; 0050fff5
    FXCH ST2                            ; 0050fff8
    FSUB float ptr [EBP + 0xfffffe82]   ; 0050fffa
    FXCH                                ; 00510000
    FSUB float ptr [EBP + 0xfffffe86]   ; 00510002
    FXCH ST2                            ; 00510008
    FSUB float ptr [EBP + 0xfffffe8a]   ; 0051000a
    FXCH                                ; 00510010
    FSTP float ptr [EBP + -0x2e]        ; 00510012
    FXCH                                ; 00510015
    FSTP float ptr [EBP + -0x2a]        ; 00510017
    FSTP float ptr [EBP + -0x26]        ; 0051001a
    MOVSD ES:EDI,ESI                    ; 0051001d
    MOVSD ES:EDI,ESI                    ; 0051001e
    MOVSD ES:EDI,ESI                    ; 0051001f
    FLD float ptr [EBP + 0xffffff36]    ; 00510020
    FMUL ST0                            ; 00510026
    FLD float ptr [EBP + 0xffffff3e]    ; 00510028
    FMUL ST0                            ; 0051002e
    FADDP                               ; 00510030
    FSQRT                               ; 00510032
    FLD float ptr [EBP + 0xffffff4a]    ; 00510034
    ADD ESP,0x4                         ; 0051003a
    XOR ESI,ESI                         ; 0051003d
    FCHS                                ; 0051003f
    MOV dword ptr [EBP + 0xffffff3a],ESI ; 00510041
    FXCH                                ; 00510047
    FCOMPP                              ; 00510049
    FNSTSW AX                           ; 0051004b
    SAHF                                ; 0051004d
    JNC 0x0051005e                      ; 0051004e
        ;   XREF to: 0051005e (CONDITIONAL_JUMP)  ; LAB_0051005e
    PUSH EBX                            ; 00510050
    CALL core_mimic.cpp_CMimic_beginMorph_FUN_00510b00 ; 00510051
        ;   XREF to: 00510b00 (UNCONDITIONAL_CALL)  ; void core_mimic.cpp_CMimic_beginMorph_FUN_00510b00(CMimic * this_ptr)
    ADD ESP,0x4                         ; 00510056
    JMP 0x0050fccf                      ; 00510059
        ;   XREF to: 0050fccf (UNCONDITIONAL_JUMP)  ; LAB_0050fccf
    PUSH 0x1                            ; 0051005e
        ;   Label: LAB_0051005e
    LEA ESI,[EBX + 0x158]               ; 00510060
    PUSH ESI                            ; 00510066
    CALL core_motion.cpp_FUN_00524a40   ; 00510067
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [EBP + 0x76],EAX      ; 0051006c
    ADD ESP,0x8                         ; 0051006f
    FLD float ptr [EBP + 0x76]          ; 00510072
    PUSH 0x2                            ; 00510075
    FMUL float ptr [0x005e89d0]         ; 00510077 | DAT_005e89d0
    PUSH ESI                            ; 0051007d
    FSTP float ptr [EBX + 0x2524]       ; 0051007e
    CALL core_motion.cpp_FUN_00524a40   ; 00510084
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    FLD float ptr [EBX + 0xc1d0]        ; 00510089
    MOV dword ptr [EBP + 0x76],EAX      ; 0051008f
    FLD float ptr [EBP + 0x92]          ; 00510092
    FXCH                                ; 00510098
    FMUL ST1                            ; 0051009a
    FLD float ptr [EBP + 0x76]          ; 0051009c
    FMUL float ptr [0x005e89d4]         ; 0051009f | DAT_005e89d4
    FXCH ST2                            ; 005100a5
    FMUL float ptr [EBX + 0xc1d0]       ; 005100a7
    FXCH ST2                            ; 005100ad
    FADD float ptr [EBX + 0x2524]       ; 005100af
    ADD ESP,0x8                         ; 005100b5
    FSTP float ptr [EBX + 0x2524]       ; 005100b8
    FMUL float ptr [EBX + 0x2524]       ; 005100be
    SUB ESP,0x4                         ; 005100c4
    FSTP float ptr [EBX + 0x2524]       ; 005100c7
    FSTP float ptr [ESP]                ; 005100cd
    PUSH EBX                            ; 005100d0
    CALL core_charactr.cpp_FUN_00435320 ; 005100d1
        ;   XREF to: 00435320 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00435320()
    ADD ESP,0x8                         ; 005100d6
    MOV EAX,[0x006039c8]                ; 005100d9 | DAT_006039c8
    PUSH 0x3e32b8c2                     ; 005100de
    MOV dword ptr [EBP + 0x3a],EAX      ; 005100e3
    LEA EAX,[EBP + 0x32]                ; 005100e6
    PUSH 0x3f800000                     ; 005100e9
    PUSH EAX                            ; 005100ee
    MOV EAX,[0x01d06ab4]                ; 005100ef | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 005100f4
    LEA EDX,[EAX + 0xc208]              ; 005100fb
    PUSH EDX                            ; 00510101
    ADD EAX,0x20                        ; 00510102
    PUSH EAX                            ; 00510105
    XOR EDI,EDI                         ; 00510106
    PUSH EBX                            ; 00510108
    MOV dword ptr [EBP + 0x32],EDI      ; 00510109
    MOV dword ptr [EBP + 0x36],EDI      ; 0051010c
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0 ; 0051010f
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 00510114
    TEST EAX,EAX                        ; 00510117
    JL 0x0051012b                       ; 00510119
        ;   XREF to: 0051012b (CONDITIONAL_JUMP)  ; LAB_0051012b
    JLE 0x00510134                      ; 0051011b
        ;   XREF to: 00510134 (CONDITIONAL_JUMP)  ; LAB_00510134
    PUSH EBX                            ; 0051011d
    CALL core_mimic.cpp_CMimic_beginMorph_FUN_00510b00 ; 0051011e
        ;   XREF to: 00510b00 (UNCONDITIONAL_CALL)  ; void core_mimic.cpp_CMimic_beginMorph_FUN_00510b00(CMimic * this_ptr)
    ADD ESP,0x4                         ; 00510123
    JMP 0x0050fccf                      ; 00510126
        ;   XREF to: 0050fccf (UNCONDITIONAL_JUMP)  ; LAB_0050fccf
    PUSH 0x1                            ; 0051012b
        ;   Label: LAB_0051012b
    PUSH EDI                            ; 0051012d
    PUSH ESI                            ; 0051012e
    JMP 0x0050fcc7                      ; 0051012f
        ;   XREF to: 0050fcc7 (UNCONDITIONAL_JUMP)  ; LAB_0050fcc7
    FLD float ptr [EBP + 0x92]          ; 00510134
        ;   Label: LAB_00510134
    FMUL float ptr [EBX + 0xc1d0]       ; 0051013a
    FLD float ptr [EBX + 0x2508]        ; 00510140
    FABS                                ; 00510146
    FDIVRP                              ; 00510148
    FCOMP double ptr [0x005e89d8]       ; 0051014a | DAT_005e89d8
    FNSTSW AX                           ; 00510150
    SAHF                                ; 00510152
    JBE 0x0051015f                      ; 00510153
        ;   XREF to: 0051015f (CONDITIONAL_JUMP)  ; LAB_0051015f
    PUSH 0x1                            ; 00510155
    PUSH 0x1                            ; 00510157
    PUSH ESI                            ; 00510159
    JMP 0x0050fcc7                      ; 0051015a
        ;   XREF to: 0050fcc7 (UNCONDITIONAL_JUMP)  ; LAB_0050fcc7
    PUSH 0x1                            ; 0051015f
        ;   Label: LAB_0051015f
    PUSH 0x2                            ; 00510161
    PUSH ESI                            ; 00510163
    JMP 0x0050fcc7                      ; 00510164
        ;   XREF to: 0050fcc7 (UNCONDITIONAL_JUMP)  ; LAB_0050fcc7
    MOV EAX,dword ptr [EAX + 0x1d06aa4] ; 00510169
        ;   Label: LAB_00510169
    CMP dword ptr [EAX + 0x26fc],0x0    ; 0051016f
    JZ 0x00510184                       ; 00510176
        ;   XREF to: 00510184 (CONDITIONAL_JUMP)  ; LAB_00510184
    PUSH 0x1                            ; 00510178
    PUSH 0x0                            ; 0051017a
    MOV EAX,dword ptr [EBP + 0x6a]      ; 0051017c
    JMP 0x0050fcc6                      ; 0051017f
        ;   XREF to: 0050fcc6 (UNCONDITIONAL_JUMP)  ; LAB_0050fcc6
    MOV ECX,dword ptr [EBP + 0x6a]      ; 00510184
        ;   Label: LAB_00510184
    PUSH ECX                            ; 00510187
    CALL core_motion.cpp_FUN_00525020   ; 00510188
        ;   XREF to: 00525020 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00525020(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 0051018d
    ADD ESP,0x4                         ; 00510190
    MOV EAX,dword ptr [EBP + 0x76]      ; 00510193
    MOV dword ptr [EBP + 0x62],EAX      ; 00510196
    FLD float ptr [EBP + 0x62]          ; 00510199
    FST double ptr [EBP + 0x4a]         ; 0051019c
    FCOMP double ptr [0x005e89c8]       ; 0051019f | DAT_005e89c8
    FNSTSW AX                           ; 005101a5
    SAHF                                ; 005101a7
    JA 0x0050fccf                       ; 005101a8
        ;   XREF to: 0050fccf (CONDITIONAL_JUMP)  ; LAB_0050fccf
    MOV EAX,[0x006039c8]                ; 005101ae | DAT_006039c8
    FLD1                                ; 005101b3
    MOV dword ptr [EBP + 0x66],EAX      ; 005101b5
    FCOMP double ptr [EBP + 0x4a]       ; 005101b8
    FNSTSW AX                           ; 005101bb
    SAHF                                ; 005101bd
    JA 0x0050fccf                       ; 005101be
        ;   XREF to: 0050fccf (CONDITIONAL_JUMP)  ; LAB_0050fccf
    PUSH 0x41700000                     ; 005101c4
    PUSH 0x40e00000                     ; 005101c9
    MOV EDI,dword ptr [EBP + 0x6a]      ; 005101ce
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 005101d1
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV ESI,dword ptr [0x01d22444]      ; 005101d6 | DAT_01d22444
    MOV dword ptr [EBP + 0x76],EAX      ; 005101dc
    ADD ESP,0x8                         ; 005101df
    FLD float ptr [EBP + 0x76]          ; 005101e2
    PUSH ESI                            ; 005101e5
    FSTP float ptr [EBP + 0x56]         ; 005101e6
    PUSH EDI                            ; 005101e9
    LEA ESI,[EBP + 0xe]                 ; 005101ea
    LEA EDI,[EBP + 0x26]                ; 005101ed
    CALL core_skeleton.cpp_FUN_00569130 ; 005101f0
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[EBP + 0xe]                 ; 005101f5
    MOVSD ES:EDI,ESI                    ; 005101f8
    MOVSD ES:EDI,ESI                    ; 005101f9
    MOVSD ES:EDI,ESI                    ; 005101fa
    MOV AH,byte ptr [EBP + 0x29]        ; 005101fb
    XOR AH,0x80                         ; 005101fe
    ADD ESP,0x8                         ; 00510201
    MOV byte ptr [EBP + 0x29],AH        ; 00510204
    LEA EAX,[EBP + 0xfffffdce]          ; 00510207
    PUSH EAX                            ; 0051020d
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 0051020e
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    MOV EAX,dword ptr [EBP + 0x56]      ; 00510213
    ADD ESP,0x4                         ; 00510216
    MOV dword ptr [EBP + 0xfffffdd2],EAX ; 00510219
    LEA EAX,[EBP + 0xfffffdce]          ; 0051021f
    PUSH EAX                            ; 00510225
    LEA EAX,[EBP + 0x26]                ; 00510226
    PUSH 0x3e4ccccd                     ; 00510229
    PUSH EAX                            ; 0051022e
    LEA ESI,[EBP + 0xffffff4e]          ; 0051022f
    PUSH EBX                            ; 00510235
    MOV dword ptr [EBP + 0xfffffe02],EBX ; 00510236
    MOV dword ptr [EBP + 0xfffffe06],EBX ; 0051023c
    CALL core_actor.cpp_FUN_00408b40    ; 00510242
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 00510247
    LEA EAX,[EBP + -0xa]                ; 0051024a
    PUSH EAX                            ; 0051024d
    LEA EDI,[EBP + -0xa]                ; 0051024e
    LEA ESI,[EBP + 0xffffff4e]          ; 00510251
    PUSH EBX                            ; 00510257
    MOVSD ES:EDI,ESI                    ; 00510258
    MOVSD ES:EDI,ESI                    ; 00510259
    MOVSD ES:EDI,ESI                    ; 0051025a
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770 ; 0051025b
        ;   XREF to: 004a0770 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 00510260
    TEST EAX,EAX                        ; 00510263
    JZ 0x0050fccf                       ; 00510265
        ;   XREF to: 0050fccf (CONDITIONAL_JUMP)  ; LAB_0050fccf
    PUSH 0x5e89b6                       ; 0051026b | = "gh-hits[1,4].wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00510270
    PUSH EBX                            ; 00510276
    CALL dword ptr [EAX + 0x2c]         ; 00510277
    ADD ESP,0x8                         ; 0051027a
    JMP 0x0050fccf                      ; 0051027d
        ;   XREF to: 0050fccf (UNCONDITIONAL_JUMP)  ; LAB_0050fccf
    JBE 0x0050fc98                      ; 00510282
        ;   XREF to: 0050fc98 (CONDITIONAL_JUMP)  ; LAB_0050fc98
        ;   Label: LAB_00510282
    CMP ESI,0xc                         ; 00510288
    JC 0x0051029c                       ; 0051028b
        ;   XREF to: 0051029c (CONDITIONAL_JUMP)  ; LAB_0051029c
    JBE 0x0050fd80                      ; 0051028d
        ;   XREF to: 0050fd80 (CONDITIONAL_JUMP)  ; LAB_0050fd80
    CMP ESI,0x13                        ; 00510293
    JZ 0x00510169                       ; 00510296
        ;   XREF to: 00510169 (CONDITIONAL_JUMP)  ; LAB_00510169
    PUSH 0x1                            ; 0051029c
        ;   Label: LAB_0051029c
    PUSH 0x2                            ; 0051029e
    JMP 0x0050fcc0                      ; 005102a0
        ;   XREF to: 0050fcc0 (UNCONDITIONAL_JUMP)  ; LAB_0050fcc0
    FLD float ptr [EBP + 0x92]          ; 005102a5
        ;   Label: LAB_005102a5
    FLD ST0                             ; 005102ab
    FMUL float ptr [EBX + 0xc1d0]       ; 005102ad
    FLD float ptr [EBX + 0xc1d0]        ; 005102b3
    FMULP ST2                           ; 005102b9
    SUB ESP,0x4                         ; 005102bb
    FXCH                                ; 005102be
    FSTP float ptr [EBX + 0x2524]       ; 005102c0
    FSTP float ptr [ESP]                ; 005102c6
    PUSH EBX                            ; 005102c9
    CALL core_charactr.cpp_FUN_00435320 ; 005102ca
        ;   XREF to: 00435320 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00435320()
    ADD ESP,0x8                         ; 005102cf
    MOV EAX,dword ptr [EBP + 0x66]      ; 005102d2
    PUSH 0x3f060a92                     ; 005102d5
    MOV dword ptr [EBP + 0x46],EAX      ; 005102da
    LEA EAX,[EBP + 0x3e]                ; 005102dd
    PUSH 0x40400000                     ; 005102e0
    PUSH EAX                            ; 005102e5
    MOV EAX,[0x01d06ab4]                ; 005102e6 | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 005102eb
    LEA ESI,[EAX + 0xc208]              ; 005102f2
    PUSH ESI                            ; 005102f8
    ADD EAX,0x20                        ; 005102f9
    PUSH EAX                            ; 005102fc
    XOR EDI,EDI                         ; 005102fd
    PUSH EBX                            ; 005102ff
    MOV dword ptr [EBP + 0x3e],EDI      ; 00510300
    MOV dword ptr [EBP + 0x42],EDI      ; 00510303
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0 ; 00510306
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 0051030b
    CMP EAX,0x1                         ; 0051030e
    JZ 0x0050fcdf                       ; 00510311
        ;   XREF to: 0050fcdf (CONDITIONAL_JUMP)  ; LAB_0050fcdf
    PUSH 0x1                            ; 00510317
    PUSH 0x2                            ; 00510319
    LEA EAX,[EBX + 0x158]               ; 0051031b
    PUSH EAX                            ; 00510321
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00510322
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00510327
    JMP 0x0050fcdf                      ; 0051032a
        ;   XREF to: 0050fcdf (UNCONDITIONAL_JUMP)  ; LAB_0050fcdf
    CMP dword ptr [EBX + 0x2500],0x0    ; 0051032f
        ;   Label: LAB_0051032f
    JZ 0x0050fcf7                       ; 00510336
        ;   XREF to: 0050fcf7 (CONDITIONAL_JUMP)  ; LAB_0050fcf7
    MOV EAX,[0x01d22444]                ; 0051033c | DAT_01d22444
    PUSH EAX                            ; 00510341
    PUSH ESI                            ; 00510342
    LEA ESI,[EBP + 0xfffffeee]          ; 00510343
    LEA EDI,[EBP + 0xfffffed6]          ; 00510349
    CALL core_skeleton.cpp_FUN_00569040 ; 0051034f
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    LEA ESI,[EBP + 0xfffffeee]          ; 00510354
    ADD ESP,0x8                         ; 0051035a
    MOVSD ES:EDI,ESI                    ; 0051035d
    MOVSD ES:EDI,ESI                    ; 0051035e
    MOVSD ES:EDI,ESI                    ; 0051035f
    PUSH 0x3f800000                     ; 00510360
    MOV DL,byte ptr [EBP + 0xfffffed9]  ; 00510365
    LEA ESI,[EBP + 0xfffffed6]          ; 0051036b
    XOR DL,0x80                         ; 00510371
    PUSH ESI                            ; 00510374
    MOV byte ptr [EBP + 0xfffffed9],DL  ; 00510375
    PUSH EBX                            ; 0051037b
    MOV EAX,dword ptr [EBX + 0x154]     ; 0051037c
    CALL dword ptr [EAX + 0x24]         ; 00510382
    ADD ESP,0xc                         ; 00510385
    JMP 0x0050fcf7                      ; 00510388
        ;   XREF to: 0050fcf7 (UNCONDITIONAL_JUMP)  ; LAB_0050fcf7
    CMP EAX,0x7                         ; 0051038d
        ;   Label: LAB_0051038d
    JZ 0x0051032f                       ; 00510390
        ;   XREF to: 0051032f (CONDITIONAL_JUMP)  ; LAB_0051032f
    JMP 0x0050fcf7                      ; 00510392
        ;   XREF to: 0050fcf7 (UNCONDITIONAL_JUMP)  ; LAB_0050fcf7
    PUSH EBX                            ; 00510397
        ;   Label: LAB_00510397
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_0042e160 ; 00510398
        ;   XREF to: 0042e160 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_0042e160(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0051039d
    MOV EDX,dword ptr [EBP + 0x72]      ; 005103a0
    PUSH EDX                            ; 005103a3
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 005103a4
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005103a9
    ADD ESP,0x4                         ; 005103ac
    MOV dword ptr [EBP + 0x6e],EAX      ; 005103af
    CMP EAX,0xc                         ; 005103b2
    JZ 0x005104f3                       ; 005103b5
        ;   XREF to: 005104f3 (CONDITIONAL_JUMP)  ; LAB_005104f3
    TEST EAX,EAX                        ; 005103bb
    JZ 0x005104f3                       ; 005103bd
        ;   XREF to: 005104f3 (CONDITIONAL_JUMP)  ; LAB_005104f3
    PUSH dword ptr [EBP + 0x92]         ; 005103c3
        ;   Label: LAB_005103c3
    PUSH EBX                            ; 005103c9
    LEA ESI,[EBX + 0x2518]              ; 005103ca
    CALL core_charactr.cpp_FUN_0042d700 ; 005103d0
        ;   XREF to: 0042d700 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d700()
    FLD float ptr [ESI]                 ; 005103d5
    FMUL float ptr [EBP + 0x92]         ; 005103d7
    FLD float ptr [ESI + 0x4]           ; 005103dd
    FMUL float ptr [EBP + 0x92]         ; 005103e0
    FLD float ptr [ESI + 0x8]           ; 005103e6
    FMUL float ptr [EBP + 0x92]         ; 005103e9
    LEA EDI,[EBP + 0x1a]                ; 005103ef
    LEA ESI,[EBP + 0xfffffefa]          ; 005103f2
    FXCH ST2                            ; 005103f8
    FSTP float ptr [EBP + 0xfffffefa]   ; 005103fa
    FSTP float ptr [EBP + 0xfffffefe]   ; 00510400
    FSTP float ptr [EBP + 0xffffff02]   ; 00510406
    MOVSD ES:EDI,ESI                    ; 0051040c
    MOVSD ES:EDI,ESI                    ; 0051040d
    MOVSD ES:EDI,ESI                    ; 0051040e
    LEA EAX,[EBX + 0x250c]              ; 0051040f
    FLD float ptr [EBP + 0x1a]          ; 00510415
    FLD float ptr [EBP + 0x1e]          ; 00510418
    FLD float ptr [EBP + 0x22]          ; 0051041b
    LEA EDI,[EBP + 0xffffff12]          ; 0051041e
    LEA ESI,[EBP + 0xfffffeb2]          ; 00510424
    FXCH ST2                            ; 0051042a
    FADD float ptr [EAX]                ; 0051042c
    FXCH                                ; 0051042e
    FADD float ptr [EAX + 0x4]          ; 00510430
    FXCH ST2                            ; 00510433
    FADD float ptr [EAX + 0x8]          ; 00510435
    FXCH                                ; 00510438
    FSTP float ptr [EBP + 0xfffffeb2]   ; 0051043a
    FXCH                                ; 00510440
    FSTP float ptr [EBP + 0xfffffeb6]   ; 00510442
    FSTP float ptr [EBP + 0xfffffeba]   ; 00510448
    MOVSD ES:EDI,ESI                    ; 0051044e
    MOVSD ES:EDI,ESI                    ; 0051044f
    MOVSD ES:EDI,ESI                    ; 00510450
    MOV ESI,dword ptr [EBP + 0x6e]      ; 00510451
    ADD ESP,0x8                         ; 00510454
    CMP ESI,0x3                         ; 00510457
    JNC 0x00510502                      ; 0051045a
        ;   XREF to: 00510502 (CONDITIONAL_JUMP)  ; LAB_00510502
    CMP ESI,0x1                         ; 00510460
    JNC 0x0051049f                      ; 00510463
        ;   XREF to: 0051049f (CONDITIONAL_JUMP)  ; LAB_0051049f
    TEST ESI,ESI                        ; 00510465
    JZ 0x0051049f                       ; 00510467
        ;   XREF to: 0051049f (CONDITIONAL_JUMP)  ; LAB_0051049f
        ;   Label: LAB_00510467
    LEA EAX,[EBX + 0x249c]              ; 00510469
        ;   Label: LAB_00510469
    FLD float ptr [EBP + 0xffffff12]    ; 0051046f
    FADD float ptr [EAX]                ; 00510475
    FLD float ptr [EBP + 0xffffff16]    ; 00510477
    FXCH                                ; 0051047d
    FSTP float ptr [EBP + 0xffffff12]   ; 0051047f
    FADD float ptr [EAX + 0x4]          ; 00510485
    FLD float ptr [EBP + 0xffffff1a]    ; 00510488
    FXCH                                ; 0051048e
    FSTP float ptr [EBP + 0xffffff16]   ; 00510490
    FADD float ptr [EAX + 0x8]          ; 00510496
    FSTP float ptr [EBP + 0xffffff1a]   ; 00510499
    LEA EAX,[EBP + 0xffffff12]          ; 0051049f
        ;   Label: LAB_0051049f
    PUSH EAX                            ; 005104a5
    PUSH EBX                            ; 005104a6
    CALL core_charactr.cpp_FUN_0042d750 ; 005104a7
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042d750(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 005104ac
    LEA ESI,[EBX + 0x158]               ; 005104af
        ;   Label: LAB_005104af
    PUSH ESI                            ; 005104b5
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0 ; 005104b6
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005104bb
    PUSH ESI                            ; 005104be
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180 ; 005104bf
        ;   XREF to: 00569180 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005104c4
    PUSH ESI                            ; 005104c7
    PUSH dword ptr [EBX + 0x2504]       ; 005104c8
    LEA EAX,[EBX + 0x30]                ; 005104ce
    PUSH dword ptr [EBP + 0x92]         ; 005104d1
    PUSH EAX                            ; 005104d7
    LEA EAX,[EBX + 0x20]                ; 005104d8
    PUSH EAX                            ; 005104db
    ADD EBX,0xc330                      ; 005104dc
    PUSH EBX                            ; 005104e2
    CALL core_cloth.cpp_CCloth_process_FUN_00440610 ; 005104e3
        ;   XREF to: 00440610 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_process_FUN_00440610(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 005104e8
    LEA ESP,[EBP + 0x7a]                ; 005104eb
    POP EBP                             ; 005104ee
    POP EDI                             ; 005104ef
    POP ESI                             ; 005104f0
    POP EBX                             ; 005104f1
    RET                                 ; 005104f2
    CMP dword ptr [EBX + 0xdc],0x0      ; 005104f3
        ;   Label: LAB_005104f3
    JNZ 0x005103c3                      ; 005104fa
        ;   XREF to: 005103c3 (CONDITIONAL_JUMP)  ; LAB_005103c3
    JMP 0x005104af                      ; 00510500
        ;   XREF to: 005104af (UNCONDITIONAL_JUMP)  ; LAB_005104af
    JBE 0x0051049f                      ; 00510502
        ;   XREF to: 0051049f (CONDITIONAL_JUMP)  ; LAB_0051049f
        ;   Label: LAB_00510502
    CMP ESI,0x11                        ; 00510504
    JNC 0x00510511                      ; 00510507
        ;   XREF to: 00510511 (CONDITIONAL_JUMP)  ; LAB_00510511
    CMP ESI,0x10                        ; 00510509
    JMP 0x00510467                      ; 0051050c
        ;   XREF to: 00510467 (UNCONDITIONAL_JUMP)  ; LAB_00510467
    JBE 0x0051049f                      ; 00510511
        ;   XREF to: 0051049f (CONDITIONAL_JUMP)  ; LAB_0051049f
        ;   Label: LAB_00510511
    CMP ESI,0x14                        ; 00510513
    JC 0x00510469                       ; 00510516
        ;   XREF to: 00510469 (CONDITIONAL_JUMP)  ; LAB_00510469
    JBE 0x0051049f                      ; 0051051c
        ;   XREF to: 0051049f (CONDITIONAL_JUMP)  ; LAB_0051049f
    CMP ESI,0x15                        ; 0051051e
    JMP 0x00510467                      ; 00510521
        ;   XREF to: 00510467 (UNCONDITIONAL_JUMP)  ; LAB_00510467

