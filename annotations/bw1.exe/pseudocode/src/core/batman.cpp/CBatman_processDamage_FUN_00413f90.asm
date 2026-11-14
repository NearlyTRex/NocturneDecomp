; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_batman_cpp_CBatman_processDamage_FUN_00413f90(CBatman *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CBatman *        Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   undefined4 s_s_4_batman_die_wav_005d3b67+2
;   TerminatedCString s_batman_hurt_wav_005d3b78
;   undefined4 DAT_005d3b89
;   undefined4 DAT_0061c010
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_getRandomInt_FUN_0040cc60
;   core_batman.cpp_CBatman_processDismemberment_FUN_00413c40
;   core_charactr.cpp_CCharacter_igniteBone_FUN_004308a0
;   core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00
;   core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
;   sound_sndmain.cpp_isSfxPlaying_FUN_005735a0
;   sound_sndmain.cpp_killSfx_FUN_00573a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00413f90
        ;   Label: core_batman.cpp_CBatman_processDamage_FUN_00413f90
    PUSH ESI                            ; 00413f91
    PUSH EDI                            ; 00413f92
    PUSH EBP                            ; 00413f93
    SUB ESP,0x50                        ; 00413f94
    MOV EBP,dword ptr [ESP + 0x64]      ; 00413f97
    MOV EDX,dword ptr [EBP + 0xc324]    ; 00413f9b
    PUSH EDX                            ; 00413fa1
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 00413fa2
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 00413fa7
    MOV ECX,dword ptr [EBP + 0xc31c]    ; 00413faa
    PUSH ECX                            ; 00413fb0
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 00413fb1
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 00413fb6
    MOV EAX,dword ptr [ESP + 0x68]      ; 00413fb9
    CMP dword ptr [EAX + 0x28],0x7      ; 00413fbd
    JZ 0x004140df                       ; 00413fc1
        ;   XREF to: 004140df (CONDITIONAL_JUMP)  ; LAB_004140df
    LEA EAX,[EAX]                       ; 00413fc7
    LEA EDX,[EDX]                       ; 00413fcd
    MOV EAX,dword ptr [ESP + 0x68]      ; 00413fd0
        ;   Label: LAB_00413fd0
    CMP dword ptr [EAX + 0x30],0x6c     ; 00413fd4
    JNZ 0x00414030                      ; 00413fd8
        ;   XREF to: 00414030 (CONDITIONAL_JUMP)  ; LAB_00414030
    PUSH 0x0                            ; 00413fda
    LEA EAX,[EBP + 0x158]               ; 00413fdc
    PUSH EAX                            ; 00413fe2
    LEA ESI,[ESP + 0x14]                ; 00413fe3
    LEA EDI,[ESP + 0x44]                ; 00413fe7
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130 ; 00413feb
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    ADD ESP,0x8                         ; 00413ff0
    LEA EAX,[ESP + 0x3c]                ; 00413ff3
    LEA ESI,[ESP + 0xc]                 ; 00413ff7
    PUSH EAX                            ; 00413ffb
    MOVSD ES:EDI,ESI                    ; 00413ffc
    MOVSD ES:EDI,ESI                    ; 00413ffd
    MOVSD ES:EDI,ESI                    ; 00413ffe
    PUSH EBP                            ; 00413fff
    LEA ESI,[ESP + 0x20]                ; 00414000
    CALL core_actor.cpp_FUN_00408b40    ; 00414004
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 00414009
    PUSH 0x0                            ; 0041400c
    PUSH 0x41200000                     ; 0041400e
    PUSH 0x0                            ; 00414013
    PUSH 0x0                            ; 00414015
    LEA EAX,[ESP + 0x40]                ; 00414017
    PUSH EAX                            ; 0041401b
    LEA EDI,[ESP + 0x44]                ; 0041401c
    LEA ESI,[ESP + 0x2c]                ; 00414020
    PUSH EBP                            ; 00414024
    MOVSD ES:EDI,ESI                    ; 00414025
    MOVSD ES:EDI,ESI                    ; 00414026
    MOVSD ES:EDI,ESI                    ; 00414027
    CALL core_charactr.cpp_CCharacter_igniteBone_FUN_004308a0 ; 00414028
        ;   XREF to: 004308a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_igniteBone_FUN_004308a0(CCharacter * this_ptr, CVector3f * position, int fire_type, int flame_type, ...)
    ADD ESP,0x18                        ; 0041402d
    MOV ECX,dword ptr [ESP + 0x68]      ; 00414030
        ;   Label: LAB_00414030
    PUSH ECX                            ; 00414034
    PUSH EBP                            ; 00414035
    CALL core_batman.cpp_CBatman_processDismemberment_FUN_00413c40 ; 00414036
        ;   XREF to: 00413c40 (UNCONDITIONAL_CALL)  ; void core_batman.cpp_CBatman_processDismemberment_FUN_00413c40(CBatman * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0041403b
    MOV EAX,dword ptr [ESP + 0x68]      ; 0041403e
    FLD float ptr [EAX + 0x4]           ; 00414042
    FSUBR float ptr [EBP + 0x2538]      ; 00414045
    LEA EBX,[EBP + 0x158]               ; 0041404b
    FST float ptr [EBP + 0x2538]        ; 00414051
    FLDZ                                ; 00414057
    FCOMPP                              ; 00414059
    FNSTSW AX                           ; 0041405b
    SAHF                                ; 0041405d
    JNC 0x0041413f                      ; 0041405e
        ;   XREF to: 0041413f (CONDITIONAL_JUMP)  ; LAB_0041413f
    PUSH 0x2                            ; 00414064
    PUSH 0x0                            ; 00414066
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 00414068
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 0041406d
    MOV ESI,EAX                         ; 00414070
    TEST EAX,EAX                        ; 00414072
    JNZ 0x00414083                      ; 00414074
        ;   XREF to: 00414083 (CONDITIONAL_JUMP)  ; LAB_00414083
    PUSH 0x1                            ; 00414076
    PUSH 0x4                            ; 00414078
    PUSH EBX                            ; 0041407a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0041407b
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00414080
    CMP ESI,0x1                         ; 00414083
        ;   Label: LAB_00414083
    JNZ 0x0041409a                      ; 00414086
        ;   XREF to: 0041409a (CONDITIONAL_JUMP)  ; LAB_0041409a
    PUSH ESI                            ; 00414088
    PUSH 0x5                            ; 00414089
    LEA EAX,[EBP + 0x158]               ; 0041408b
    PUSH EAX                            ; 00414091
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00414092
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00414097
    CMP ESI,0x2                         ; 0041409a
        ;   Label: LAB_0041409a
    JNZ 0x004140b2                      ; 0041409d
        ;   XREF to: 004140b2 (CONDITIONAL_JUMP)  ; LAB_004140b2
    PUSH 0x1                            ; 0041409f
    PUSH 0x6                            ; 004140a1
    LEA EAX,[EBP + 0x158]               ; 004140a3
    PUSH EAX                            ; 004140a9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004140aa
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004140af
    MOV EBX,dword ptr [EBP + 0xc320]    ; 004140b2
        ;   Label: LAB_004140b2
    PUSH EBX                            ; 004140b8
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005735a0 ; 004140b9
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 004140be
    TEST EAX,EAX                        ; 004140c1
    JZ 0x004141a0                       ; 004140c3
        ;   XREF to: 004141a0 (CONDITIONAL_JUMP)  ; LAB_004141a0
    MOV EDI,dword ptr [ESP + 0x68]      ; 004140c9
        ;   Label: LAB_004140c9
    PUSH EDI                            ; 004140cd
    PUSH EBP                            ; 004140ce
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00 ; 004140cf
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004140d4
    ADD ESP,0x50                        ; 004140d7
    POP EBP                             ; 004140da
    POP EDI                             ; 004140db
    POP ESI                             ; 004140dc
    POP EBX                             ; 004140dd
    RET                                 ; 004140de
    FLD float ptr [EAX + 0x4]           ; 004140df
        ;   Label: LAB_004140df
    ADD EAX,0x1c                        ; 004140e2
    FLD ST0                             ; 004140e5
    FMUL double ptr [0x005d3b89]        ; 004140e7 | DAT_005d3b89
    PUSH EAX                            ; 004140ed
    LEA ESI,[ESP + 0x28]                ; 004140ee
    LEA EDI,[ESP + 0x4]                 ; 004140f2
    PUSH EBP                            ; 004140f6
    FSTP ST1                            ; 004140f7
    FSTP float ptr [EAX + -0x18]        ; 004140f9
    CALL core_actor.cpp_FUN_00408b40    ; 004140fc
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x2c]                ; 00414101
    ADD ESP,0x8                         ; 00414105
    XOR EBX,EBX                         ; 00414108
    MOVSD ES:EDI,ESI                    ; 0041410a
    MOVSD ES:EDI,ESI                    ; 0041410b
    MOVSD ES:EDI,ESI                    ; 0041410c
    XOR ESI,ESI                         ; 0041410d
    PUSH 0xffff                         ; 0041410f
        ;   Label: LAB_0041410f
    PUSH ESI                            ; 00414114
    PUSH 0x4000                         ; 00414115
    PUSH 0x4000                         ; 0041411a
    PUSH ESI                            ; 0041411f
    LEA EAX,[ESP + 0x14]                ; 00414120
    PUSH EAX                            ; 00414124
    MOV EDI,dword ptr [0x0061c010]      ; 00414125 | DAT_0061c010
    PUSH EDI                            ; 0041412b
    INC EBX                             ; 0041412c
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0 ; 0041412d
        ;   XREF to: 004b59e0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 00414132
    CMP EBX,0x5                         ; 00414135
    JL 0x0041410f                       ; 00414138
        ;   XREF to: 0041410f (CONDITIONAL_JUMP)  ; LAB_0041410f
    JMP 0x00413fd0                      ; 0041413a
        ;   XREF to: 00413fd0 (UNCONDITIONAL_JUMP)  ; LAB_00413fd0
    PUSH EBX                            ; 0041413f
        ;   Label: LAB_0041413f
    MOV dword ptr [EBP + 0x2538],0x0    ; 00414140
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0041414a
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0041414f
    ADD ESP,0x4                         ; 00414152
    CMP EAX,0x7                         ; 00414155
    JZ 0x004140c9                       ; 00414158
        ;   XREF to: 004140c9 (CONDITIONAL_JUMP)  ; LAB_004140c9
    CMP EAX,0x8                         ; 0041415e
    JZ 0x004140c9                       ; 00414161
        ;   XREF to: 004140c9 (CONDITIONAL_JUMP)  ; LAB_004140c9
    PUSH 0x1                            ; 00414167
    PUSH 0x7                            ; 00414169
    PUSH EBX                            ; 0041416b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0041416c
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00414171
    MOV ESI,dword ptr [EBP + 0xc320]    ; 00414174
    PUSH ESI                            ; 0041417a
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 0041417b
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 00414180
    PUSH 0x5d3b69                       ; 00414183 | s_s_4_batman_die_wav_005d3b67+2
    MOV EAX,dword ptr [EBP + 0x154]     ; 00414188
    PUSH EBP                            ; 0041418e
    CALL dword ptr [EAX + 0x2c]         ; 0041418f
    ADD ESP,0x8                         ; 00414192
    MOV dword ptr [EBP + 0xc320],EAX    ; 00414195
    JMP 0x004140c9                      ; 0041419b
        ;   XREF to: 004140c9 (UNCONDITIONAL_JUMP)  ; LAB_004140c9
    PUSH 0x5d3b78                       ; 004141a0 | = "batman-hurt?.wav"
        ;   Label: LAB_004141a0
    MOV EAX,dword ptr [EBP + 0x154]     ; 004141a5
    PUSH EBP                            ; 004141ab
    CALL dword ptr [EAX + 0x2c]         ; 004141ac
    ADD ESP,0x8                         ; 004141af
    MOV dword ptr [EBP + 0xc320],EAX    ; 004141b2
    JMP 0x004140c9                      ; 004141b8
        ;   XREF to: 004140c9 (UNCONDITIONAL_JUMP)  ; LAB_004140c9

