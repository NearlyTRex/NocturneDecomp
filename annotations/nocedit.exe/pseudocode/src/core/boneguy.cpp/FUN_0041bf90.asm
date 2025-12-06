; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_boneguy.cpp_FUN_0041bf90()
;
; Local Variables:
; undefined1       Stack[-0x1bc]:1  local_1bc
; undefined4       Stack[-0x1b8]:4  local_1b8
; undefined4       Stack[-0x188]:4  local_188
; undefined4       Stack[-0x184]:4  local_184
; undefined1       Stack[-0x180]:1  local_180
; undefined4       Stack[-0x17c]:4  local_17c
; undefined4       Stack[-0x14c]:4  local_14c
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0x144]:4  local_144
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined1       Stack[-0x12c]:1  local_12c
; undefined1       Stack[-0x11c]:1  local_11c
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined1       Stack[-0xe8]:1  local_e8
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined1       Stack[-0xa0]:1  local_a0
; undefined1       Stack[-0x94]:1  local_94
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined1       Stack[-0x58]:1  local_58
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined1       Stack[-0x10]:1  local_10
;
; Referenced Globals:
;   undefined4 DAT_00002424
;   void* switchdataD_0041bf70 = 0041c850
;   TerminatedCString s_s_confused_while_walking_006160b7
;   TerminatedCString s_s_gave_up_chase_I_m_conf_006160e1
;   TerminatedCString s_boneguy_swing_wav_00616102
;   TerminatedCString s_boneGuy_walkloop_wav_00616115
;   double DOUBLE_0061612d = 0.5
;   double DOUBLE_00616135 = 2.5
;   double DOUBLE_0061613d = 3.14159265350000
;   double DOUBLE_00616145 = 0.25
;   float FLOAT_0061614d = 0.5
;   double DOUBLE_00616155 = 32
;   double DOUBLE_0061615d = 6.28318530700000
;   undefined4 DAT_0065af58
;   undefined4 DAT_0065af5c
;   ... and 11 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_boneguy.cpp_CBoneGuy_FUN_0041d680
;   core_boneguy.cpp_FUN_0041cc40
;   core_boneguy.cpp_FUN_0041d8a0
;   core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
;   core_charactr.cpp_CCharacter_FUN_00428f40
;   core_charactr.cpp_CCharacter_FUN_004297e0
;   core_charactr.cpp_CCharacter_FUN_00429820
;   core_charactr.cpp_CCharacter_FUN_00429870
;   core_charactr.cpp_CCharacter_FUN_0042ca70
;   core_charactr.cpp_CCharacter_FUN_0042ec40
;   core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
;   ... and 22 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041bf90
        ;   Label: core_boneguy.cpp_FUN_0041bf90
    PUSH ESI                            ; 0041bf91
    PUSH EDI                            ; 0041bf92
    PUSH EBP                            ; 0041bf93
    MOV EBP,ESP                         ; 0041bf94
    SUB ESP,0x1ac                       ; 0041bf96
    SUB EBP,0x7a                        ; 0041bf9c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0041bf9f
    LEA EAX,[EBX + 0xbed0]              ; 0041bfa5
    PUSH EAX                            ; 0041bfab
    MOV EDX,dword ptr [0x006793d0]      ; 0041bfac | CEventList * g_CEventListPtr
    PUSH EDX                            ; 0041bfb2 | CEventList g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 0041bfb3 | int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0041bfb8
    TEST EAX,EAX                        ; 0041bfbb
    JZ 0x0041c003                       ; 0041bfbd | LAB_0041c003
        ;   XREF to: 0041c003 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x243c],0x0    ; 0041bfbf
    MOV dword ptr [EBX + 0xbe28],0x1    ; 0041bfc9
    MOV ECX,dword ptr [EBX + 0xc4dc]    ; 0041bfd3
    MOV dword ptr [EBX + 0xc4e0],0x0    ; 0041bfd9
    TEST ECX,ECX                        ; 0041bfe3
    JNZ 0x0041bff0                      ; 0041bfe5 | LAB_0041bff0
        ;   XREF to: 0041bff0 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 0041bfe7
    CALL core_boneguy.cpp_CBoneGuy_FUN_0041d680 ; 0041bfe8 | void core_boneguy.cpp_CBoneGuy_FUN_0041d680(CBoneGuy * this_ptr)
        ;   XREF to: 0041d680 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0041bfed
    PUSH 0x0                            ; 0041bff0
        ;   Label: LAB_0041bff0
    PUSH 0x5                            ; 0041bff2
    LEA EAX,[EBX + 0x158]               ; 0041bff4
    PUSH EAX                            ; 0041bffa
    CALL core_motion.cpp_CMotionController_jumpToMotion_FUN_0052dde0 ; 0041bffb | void core_motion.cpp_CMotionController_jumpToMotion_FUN_0052dde0(CMotionController * this_ptr, int target_motion_index, float target_frame_number)
        ;   XREF to: 0052dde0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0041c000
    PUSH dword ptr [EBP + 0x92]         ; 0041c003
        ;   Label: LAB_0041c003
    PUSH EBX                            ; 0041c009
    CALL core_charactr.cpp_CCharacter_FUN_00429870 ; 0041c00a | int core_charactr.cpp_CCharacter_FUN_00429870(CCharacter * this_ptr)
        ;   XREF to: 00429870 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0041c00f
    TEST EAX,EAX                        ; 0041c012
    JZ 0x0041c220                       ; 0041c014 | LAB_0041c220
        ;   XREF to: 0041c220 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0xc4dc],0x1    ; 0041c01a
    JNZ 0x0041c05c                      ; 0041c021 | LAB_0041c05c
        ;   XREF to: 0041c05c (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0x243c]        ; 0041c023
    FLDZ                                ; 0041c029
    FCOMPP                              ; 0041c02b
    FNSTSW AX                           ; 0041c02d
    SAHF                                ; 0041c02f
    JNC 0x0041c05c                      ; 0041c030 | LAB_0041c05c
        ;   XREF to: 0041c05c (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0xc4e0]        ; 0041c032
    FADD float ptr [EBP + 0x92]         ; 0041c038
    FST float ptr [EBX + 0xc4e0]        ; 0041c03e
    FCOMP float ptr [EBX + 0xbf34]      ; 0041c044
    FNSTSW AX                           ; 0041c04a
    SAHF                                ; 0041c04c
    JBE 0x0041c218                      ; 0041c04d | LAB_0041c218
        ;   XREF to: 0041c218 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 0041c053
    CALL core_boneguy.cpp_FUN_0041d8a0  ; 0041c054 | undefined core_boneguy.cpp_FUN_0041d8a0()
        ;   XREF to: 0041d8a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0041c059
    CMP dword ptr [EBX + 0xc4dc],0x2    ; 0041c05c
        ;   Label: LAB_0041c05c
    JNZ 0x0041c2d5                      ; 0041c063 | LAB_0041c2d5
        ;   XREF to: 0041c2d5 (CONDITIONAL_JUMP)
    FLD float ptr [EBP + 0x92]          ; 0041c069
    FDIV float ptr [0x0065af68]         ; 0041c06f | DAT_0065af68
    FADD float ptr [EBX + 0xc4e0]       ; 0041c075
    FST float ptr [EBX + 0xc4e0]        ; 0041c07b
    FLD1                                ; 0041c081
    FCOMPP                              ; 0041c083
    FNSTSW AX                           ; 0041c085
    SAHF                                ; 0041c087
    JBE 0x0041c24d                      ; 0041c088 | LAB_0041c24d
        ;   XREF to: 0041c24d (CONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 0041c08e
    MOV ECX,dword ptr [EBX + 0xbf38]    ; 0041c090
    MOV dword ptr [EBP + 0x6e],EDX      ; 0041c096
    TEST ECX,ECX                        ; 0041c099
    JLE 0x0041c218                      ; 0041c09b | LAB_0041c218
        ;   XREF to: 0041c218 (CONDITIONAL_JUMP)
    LEA EAX,[EBX + 0xbf3c]              ; 0041c0a1
    MOV dword ptr [EBP + 0x5e],EAX      ; 0041c0a7
    LEA EAX,[EBX + 0xc4e0]              ; 0041c0aa
    MOV dword ptr [EBP + 0x66],EAX      ; 0041c0b0
    LEA EAX,[EBX + 0xbf54]              ; 0041c0b3
    MOV dword ptr [EBP + 0x62],EAX      ; 0041c0b9
    LEA EAX,[EBX + 0xbf64]              ; 0041c0bc
    MOV dword ptr [EBP + 0x6a],EAX      ; 0041c0c2
    LEA EAX,[EBX + 0xbf74]              ; 0041c0c5
    MOV dword ptr [EBP + 0x72],EAX      ; 0041c0cb
    IMUL EAX,dword ptr [EBP + 0x6e],0x48 ; 0041c0ce
        ;   Label: LAB_0041c0ce
    ADD EAX,dword ptr [EBP + 0x5e]      ; 0041c0d2
    MOV EDX,dword ptr [EAX + 0x44]      ; 0041c0d5
    MOV dword ptr [EBP + 0x46],EDX      ; 0041c0d8
    MOV EDX,dword ptr [EBP + 0x72]      ; 0041c0db
    FLD float ptr [EAX]                 ; 0041c0de
    FSUB float ptr [EDX]                ; 0041c0e0
    FSTP float ptr [EBP + 0x1a]         ; 0041c0e2
    FLD float ptr [EAX + 0x4]           ; 0041c0e5
    FSUB float ptr [EDX + 0x4]          ; 0041c0e8
    FLD float ptr [EBP + 0x1a]          ; 0041c0eb
    FXCH                                ; 0041c0ee
    FSTP float ptr [EBP + 0x1e]         ; 0041c0f0
    FLD float ptr [EAX + 0x8]           ; 0041c0f3
    FSUB float ptr [EDX + 0x8]          ; 0041c0f6
    MOV EAX,dword ptr [EBP + 0x66]      ; 0041c0f9
    FSTP float ptr [EBP + 0x22]         ; 0041c0fc
    FMUL float ptr [EAX]                ; 0041c0ff
    FLD float ptr [EBP + 0x1e]          ; 0041c101
    FXCH                                ; 0041c104
    FSTP float ptr [EBP + -0x2e]        ; 0041c106
    FMUL float ptr [EAX]                ; 0041c109
    FLD float ptr [EBP + 0x22]          ; 0041c10b
    FXCH                                ; 0041c10e
    FSTP float ptr [EBP + -0x2a]        ; 0041c110
    FMUL float ptr [EAX]                ; 0041c113
    FSTP float ptr [EBP + -0x26]        ; 0041c115
    FLD float ptr [EDX]                 ; 0041c118
    FADD float ptr [EBP + -0x2e]        ; 0041c11a
    FSTP float ptr [EBP + -0x22]        ; 0041c11d
    FLD float ptr [EDX + 0x4]           ; 0041c120
    FADD float ptr [EBP + -0x2a]        ; 0041c123
    FSTP float ptr [EBP + -0x1e]        ; 0041c126
    FLD float ptr [EDX + 0x8]           ; 0041c129
    FADD float ptr [EBP + -0x26]        ; 0041c12c
    MOV EDI,dword ptr [EBP + 0x6a]      ; 0041c12f
    FSTP float ptr [EBP + -0x1a]        ; 0041c132
    PUSH dword ptr [EBX + 0xc4e0]       ; 0041c135
    PUSH EDI                            ; 0041c13b
    MOV EAX,dword ptr [EBP + 0x62]      ; 0041c13c
    PUSH EAX                            ; 0041c13f
    LEA ESI,[EBP + 0xffffff6e]          ; 0041c140
    CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0 ; 0041c146 | CQuaternion4f * core_xform.cpp_slerpQuaternion_FUN_005f77e0(CQuaternion4f * result_out, CQuaternion4f * quat1_ptr, CQuaternion4f * quat2_ptr, float t)
        ;   XREF to: 005f77e0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0041c14b
    LEA EAX,[EBP + 0xffffff5e]          ; 0041c14e
    LEA EDI,[EBP + 0xffffff5e]          ; 0041c154
    PUSH EAX                            ; 0041c15a
    LEA EAX,[EBP + 0x2]                 ; 0041c15b
    LEA ESI,[EBP + 0xffffff6e]          ; 0041c15e
    PUSH EAX                            ; 0041c164
    MOVSD ES:EDI,ESI                    ; 0041c165
    MOVSD ES:EDI,ESI                    ; 0041c166
    MOVSD ES:EDI,ESI                    ; 0041c167
    MOVSD ES:EDI,ESI                    ; 0041c168
    CALL core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0 ; 0041c169 | CVector3f * core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0(CVector3f * euler_out, CQuaternion4f * quat_ptr)
        ;   XREF to: 005f7ac0 (UNCONDITIONAL_CALL)
    FLD float ptr [EBX + 0xc4e0]        ; 0041c16e
    FMUL double ptr [0x0061615d]        ; 0041c174 | double DOUBLE_0061615d
    MOV ESI,dword ptr [EBP + 0x46]      ; 0041c17a
    FLD float ptr [EBP + 0x2]           ; 0041c17d
    FXCH                                ; 0041c180
    FADD ST0,ST1                        ; 0041c182
    MOV EAX,dword ptr [EBP + -0x22]     ; 0041c184
    FSTP ST1                            ; 0041c187
    FSTP float ptr [EBP + 0x2]          ; 0041c189
    MOV dword ptr [ESI + 0x20],EAX      ; 0041c18c
    MOV EAX,dword ptr [EBP + -0x1e]     ; 0041c18f
    MOV dword ptr [ESI + 0x24],EAX      ; 0041c192
    MOV EAX,dword ptr [EBP + -0x1a]     ; 0041c195
    LEA EDX,[ESI + 0x30]                ; 0041c198
    MOV dword ptr [ESI + 0x28],EAX      ; 0041c19b
    LEA EAX,[EBP + 0x2]                 ; 0041c19e
    ADD ESP,0x8                         ; 0041c1a1
    CMP EDX,EAX                         ; 0041c1a4
    JNZ 0x0041c237                      ; 0041c1a6 | LAB_0041c237
        ;   XREF to: 0041c237 (CONDITIONAL_JUMP)
    LEA EAX,[EBP + -0x22]               ; 0041c1ac
        ;   Label: LAB_0041c1ac
    LEA EDX,[ESI + 0xccc]               ; 0041c1af
    CMP EDX,EAX                         ; 0041c1b5
    JZ 0x0041c1ca                       ; 0041c1b7 | LAB_0041c1ca
        ;   XREF to: 0041c1ca (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x22]     ; 0041c1b9
    MOV dword ptr [EDX],EAX             ; 0041c1bc
    MOV EAX,dword ptr [EBP + -0x1e]     ; 0041c1be
    MOV dword ptr [EDX + 0x4],EAX       ; 0041c1c1
    MOV EAX,dword ptr [EBP + -0x1a]     ; 0041c1c4
    MOV dword ptr [EDX + 0x8],EAX       ; 0041c1c7
    LEA EAX,[EBP + 0x2]                 ; 0041c1ca
        ;   Label: LAB_0041c1ca
    LEA EDX,[ESI + 0xcd8]               ; 0041c1cd
    CMP EDX,EAX                         ; 0041c1d3
    JZ 0x0041c1e8                       ; 0041c1d5 | LAB_0041c1e8
        ;   XREF to: 0041c1e8 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x2]       ; 0041c1d7
    MOV dword ptr [EDX],EAX             ; 0041c1da
    MOV EAX,dword ptr [EBP + 0x6]       ; 0041c1dc
    MOV dword ptr [EDX + 0x4],EAX       ; 0041c1df
    MOV EAX,dword ptr [EBP + 0xa]       ; 0041c1e2
    MOV dword ptr [EDX + 0x8],EAX       ; 0041c1e5
    MOV EDX,dword ptr [EBP + 0x62]      ; 0041c1e8
        ;   Label: LAB_0041c1e8
    MOV ECX,dword ptr [EBP + 0x6a]      ; 0041c1eb
    MOV ESI,dword ptr [EBP + 0x72]      ; 0041c1ee
    MOV EDI,dword ptr [EBP + 0x6e]      ; 0041c1f1
    ADD EDX,0x48                        ; 0041c1f4
    ADD ECX,0x48                        ; 0041c1f7
    ADD ESI,0x48                        ; 0041c1fa
    INC EDI                             ; 0041c1fd
    MOV dword ptr [EBP + 0x62],EDX      ; 0041c1fe
    MOV dword ptr [EBP + 0x6a],ECX      ; 0041c201
    MOV dword ptr [EBP + 0x72],ESI      ; 0041c204
    MOV EDX,dword ptr [EBX + 0xbf38]    ; 0041c207
    MOV dword ptr [EBP + 0x6e],EDI      ; 0041c20d
    CMP EDI,EDX                         ; 0041c210
    JL 0x0041c0ce                       ; 0041c212 | LAB_0041c0ce
        ;   XREF to: 0041c0ce (CONDITIONAL_JUMP)
    LEA ESP,[EBP + 0x7a]                ; 0041c218
        ;   Label: LAB_0041c218
    POP EBP                             ; 0041c21b
    POP EDI                             ; 0041c21c
    POP ESI                             ; 0041c21d
    POP EBX                             ; 0041c21e
    RET                                 ; 0041c21f
    MOV ESI,dword ptr [EBX + 0xbecc]    ; 0041c220
        ;   Label: LAB_0041c220
    PUSH ESI                            ; 0041c226
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 0041c227 | int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0041c22c
    LEA ESP,[EBP + 0x7a]                ; 0041c22f
    POP EBP                             ; 0041c232
    POP EDI                             ; 0041c233
    POP ESI                             ; 0041c234
    POP EBX                             ; 0041c235
    RET                                 ; 0041c236
    MOV EAX,dword ptr [EBP + 0x2]       ; 0041c237
        ;   Label: LAB_0041c237
    MOV dword ptr [EDX],EAX             ; 0041c23a
    MOV EAX,dword ptr [EBP + 0x6]       ; 0041c23c
    MOV dword ptr [EDX + 0x4],EAX       ; 0041c23f
    MOV EAX,dword ptr [EBP + 0xa]       ; 0041c242
    MOV dword ptr [EDX + 0x8],EAX       ; 0041c245
    JMP 0x0041c1ac                      ; 0041c248 | LAB_0041c1ac
        ;   XREF to: 0041c1ac (UNCONDITIONAL_JUMP)
    LEA EAX,[EBX + 0x158]               ; 0041c24d
        ;   Label: LAB_0041c24d
    PUSH EAX                            ; 0041c253
    XOR EDI,EDI                         ; 0041c254
    CALL core_skeleton.cpp_CDeformableModelInstance_showAllParts_FUN_005a0410 ; 0041c256 | void core_skeleton.cpp_CDeformableModelInstance_showAllParts_FUN_005a0410(CDeformableModelInstance * this_ptr)
        ;   XREF to: 005a0410 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBX + 0xbf38]    ; 0041c25b
    ADD ESP,0x4                         ; 0041c261
    TEST EAX,EAX                        ; 0041c264
    JLE 0x0041c2a0                      ; 0041c266 | LAB_0041c2a0
        ;   XREF to: 0041c2a0 (CONDITIONAL_JUMP)
    MOV ESI,EBX                         ; 0041c268
    PUSH 0x1                            ; 0041c26a
        ;   Label: LAB_0041c26a
    MOV EAX,dword ptr [ESI + 0xbf80]    ; 0041c26c
    PUSH EAX                            ; 0041c272
    MOV EDX,dword ptr [0x0067d550]      ; 0041c273 | CDemonMission g_CDemonMissionInstance | CDemonMission * g_CDemonMissionPtr
    PUSH EDX                            ; 0041c279 | CDemonMission g_CDemonMissionInstance
    ADD ESI,0x48                        ; 0041c27a
    CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0 ; 0041c27d | void core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0(CDemonMission * this_ptr)
        ;   XREF to: 005240a0 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESI + 0xbf38],0x0    ; 0041c282
    INC EDI                             ; 0041c28c
    MOV ECX,dword ptr [EBX + 0xbf38]    ; 0041c28d
    ADD ESP,0xc                         ; 0041c293
    CMP EDI,ECX                         ; 0041c296
    JL 0x0041c26a                       ; 0041c298 | LAB_0041c26a
        ;   XREF to: 0041c26a (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 0041c29a
    FLD float ptr [EBX + 0xbf34]        ; 0041c2a0
        ;   Label: LAB_0041c2a0
    MOV dword ptr [EBX + 0xc4dc],0x0    ; 0041c2a6
    FLD ST0                             ; 0041c2b0
    FMUL double ptr [0x0061612d]        ; 0041c2b2 | double DOUBLE_0061612d
    MOV dword ptr [EBX + 0x243c],0x42c80000 ; 0041c2b8
    FSTP ST1                            ; 0041c2c2
    FST float ptr [EBX + 0xbf34]        ; 0041c2c4
    FCOMP double ptr [0x00616135]       ; 0041c2ca | double DOUBLE_00616135
    FNSTSW AX                           ; 0041c2d0
    SAHF                                ; 0041c2d2
    JBE 0x0041c32c                      ; 0041c2d3 | LAB_0041c32c
        ;   XREF to: 0041c32c (CONDITIONAL_JUMP)
    LEA EAX,[EBX + 0x23ac]              ; 0041c2d5
        ;   Label: LAB_0041c2d5
    MOV dword ptr [EAX + 0x8],0x0       ; 0041c2db
    FLD float ptr [EBP + 0x92]          ; 0041c2e2
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041c2e8
    MOV dword ptr [EAX + 0x4],EDX       ; 0041c2eb
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041c2ee
    MOV dword ptr [EAX],EDX             ; 0041c2f1
    FMUL float ptr [EBX + 0xbe24]       ; 0041c2f3
    LEA ESI,[EBX + 0x158]               ; 0041c2f9
    FSTP float ptr [EBP + 0x52]         ; 0041c2ff
    FLD float ptr [EBP + 0x52]          ; 0041c302
        ;   Label: LAB_0041c302
    FLDZ                                ; 0041c305
    FCOMPP                              ; 0041c307
    FNSTSW AX                           ; 0041c309
    SAHF                                ; 0041c30b
    JNC 0x0041c35f                      ; 0041c30c | LAB_0041c35f
        ;   XREF to: 0041c35f (CONDITIONAL_JUMP)
    LEA EAX,[EBP + 0x52]                ; 0041c30e
    PUSH EAX                            ; 0041c311
    PUSH ESI                            ; 0041c312
    CALL core_motion.cpp_CMotionController_advance_FUN_0052d610 ; 0041c313 | int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr)
        ;   XREF to: 0052d610 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0041c318
    CMP EAX,0x64                        ; 0041c31b
    JZ 0x0041c338                       ; 0041c31e | LAB_0041c338
        ;   XREF to: 0041c338 (CONDITIONAL_JUMP)
    PUSH EAX                            ; 0041c320
    PUSH EBX                            ; 0041c321
    CALL core_charactr.cpp_CCharacter_FUN_0042ec40 ; 0041c322 | void core_charactr.cpp_CCharacter_FUN_0042ec40(CCharacter * this_ptr)
        ;   XREF to: 0042ec40 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0041c327
    JMP 0x0041c302                      ; 0041c32a | LAB_0041c302
        ;   XREF to: 0041c302 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0xbf34],0x40200000 ; 0041c32c
        ;   Label: LAB_0041c32c
    JMP 0x0041c2d5                      ; 0041c336 | LAB_0041c2d5
        ;   XREF to: 0041c2d5 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0xbec8]    ; 0041c338
        ;   Label: LAB_0041c338
    TEST EAX,EAX                        ; 0041c33e
    JZ 0x0041c302                       ; 0041c340 | LAB_0041c302
        ;   XREF to: 0041c302 (CONDITIONAL_JUMP)
    PUSH 0x3e4ccccd                     ; 0041c342
    PUSH EAX                            ; 0041c347
    PUSH 0x1                            ; 0041c348
    PUSH EBX                            ; 0041c34a
    MOV dword ptr [EBX + 0xbec8],0x0    ; 0041c34b
    CALL core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0 ; 0041c355 | void core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0(CCharacter * this_ptr)
        ;   XREF to: 0042cdb0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0041c35a
    JMP 0x0041c302                      ; 0041c35d | LAB_0041c302
        ;   XREF to: 0041c302 (UNCONDITIONAL_JUMP)
    FLD float ptr [EBX + 0xbe24]        ; 0041c35f
        ;   Label: LAB_0041c35f
    FLD float ptr [EBP + 0x92]          ; 0041c365
    FMUL double ptr [0x0061613d]        ; 0041c36b | double DOUBLE_0061613d
    FMULP                               ; 0041c371
    FMUL double ptr [0x00616145]        ; 0041c373 | double DOUBLE_00616145
    FLD float ptr [EBX + 0x23b4]        ; 0041c379
    PUSH ESI                            ; 0041c37f
    FSTP float ptr [EBX + 0x2434]       ; 0041c380
    FSTP float ptr [EBX + 0x2438]       ; 0041c386
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 0041c38c | SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0041c391
    PUSH dword ptr [EBP + 0x92]         ; 0041c394
    MOV EDI,dword ptr [EAX + 0x24]      ; 0041c39a
    PUSH EBX                            ; 0041c39d
    MOV dword ptr [EBP + 0x56],EDI      ; 0041c39e
    CALL core_charactr.cpp_CCharacter_FUN_0042ca70 ; 0041c3a1 | int core_charactr.cpp_CCharacter_FUN_0042ca70(CCharacter * this_ptr)
        ;   XREF to: 0042ca70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0041c3a6
    TEST EAX,EAX                        ; 0041c3a9
    JZ 0x0041ca2d                       ; 0041c3ab | LAB_0041ca2d
        ;   XREF to: 0041ca2d (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x25b0]    ; 0041c3b1
    CMP EAX,0x2                         ; 0041c3b7
    JNC 0x0041c601                      ; 0041c3ba | LAB_0041c601
        ;   XREF to: 0041c601 (CONDITIONAL_JUMP)
    CMP EAX,0x1                         ; 0041c3c0
    JNZ 0x0041c60c                      ; 0041c3c3 | LAB_0041c60c
        ;   XREF to: 0041c60c (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 0041c3c9
        ;   Label: LAB_0041c3c9
    PUSH 0x1                            ; 0041c3cb
    LEA EAX,[EBX + 0x158]               ; 0041c3cd
        ;   Label: LAB_0041c3cd
    PUSH EAX                            ; 0041c3d3
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0041c3d4 | void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0041c3d9
        ;   Label: LAB_0041c3d9
    LEA EAX,[EBX + 0x23ac]              ; 0041c3dc
    MOV dword ptr [EAX + 0x8],0x0       ; 0041c3e2
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041c3e9
    MOV dword ptr [EAX + 0x4],EDX       ; 0041c3ec
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041c3ef
    MOV dword ptr [EAX],EDX             ; 0041c3f2
    FLD float ptr [EBX + 0xbe38]        ; 0041c3f4
        ;   Label: caseD_3
    FLDZ                                ; 0041c3fa
    FCOMPP                              ; 0041c3fc
    FNSTSW AX                           ; 0041c3fe
    SAHF                                ; 0041c400
    JNC 0x0041c415                      ; 0041c401 | LAB_0041c415
        ;   XREF to: 0041c415 (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0xbe38]        ; 0041c403
    FSUB float ptr [EBP + 0x92]         ; 0041c409
    FSTP float ptr [EBX + 0xbe38]       ; 0041c40f
    PUSH EBX                            ; 0041c415
        ;   Label: LAB_0041c415
    CALL core_charactr.cpp_CCharacter_FUN_004297e0 ; 0041c416 | int core_charactr.cpp_CCharacter_FUN_004297e0(CCharacter * this_ptr)
        ;   XREF to: 004297e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0041c41b
    TEST EAX,EAX                        ; 0041c41e
    JZ 0x0041c512                       ; 0041c420 | LAB_0041c512
        ;   XREF to: 0041c512 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [EBX + 0xbe3c]    ; 0041c426
    TEST EDI,EDI                        ; 0041c42c
    JZ 0x0041c45a                       ; 0041c42e | LAB_0041c45a
        ;   XREF to: 0041c45a (CONDITIONAL_JUMP)
    PUSH EDI                            ; 0041c430
    MOV EDX,dword ptr [EDI + 0x154]     ; 0041c431
    CALL dword ptr [EDX + 0x108]        ; 0041c437
    ADD ESP,0x4                         ; 0041c43d
    CMP EAX,EBX                         ; 0041c440
    JNZ 0x0041c45a                      ; 0041c442 | LAB_0041c45a
        ;   XREF to: 0041c45a (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 0041c444
    PUSH EAX                            ; 0041c44a
    MOV EDX,dword ptr [0x006810c8]      ; 0041c44b | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
    PUSH EDX                            ; 0041c451 | CDemonSet g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 0041c452 | void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0041c457
    FLD float ptr [EBP + 0x92]          ; 0041c45a
        ;   Label: LAB_0041c45a
    FLD ST0                             ; 0041c460
    FMUL double ptr [0x00616155]        ; 0041c462 | double DOUBLE_00616155
    FLD float ptr [EBX + 0x242c]        ; 0041c468
    FXCH                                ; 0041c46e
    FSUBR ST0,ST1                       ; 0041c470
    LEA ESI,[EBX + 0x2428]              ; 0041c472
    FSTP ST1                            ; 0041c478
    FSTP float ptr [EBX + 0x242c]       ; 0041c47a
    FLD float ptr [ESI]                 ; 0041c480
    FMUL ST1                            ; 0041c482
    FSTP float ptr [EBP + 0x26]         ; 0041c484
    FLD float ptr [ESI + 0x4]           ; 0041c487
    FMUL ST1                            ; 0041c48a
    LEA EDX,[EBX + 0x241c]              ; 0041c48c
    FSTP float ptr [EBP + 0x2a]         ; 0041c492
    FMUL float ptr [ESI + 0x8]          ; 0041c495
    LEA EAX,[EBX + 0x23ac]              ; 0041c498
    FLD float ptr [EBP + 0x26]          ; 0041c49e
    FXCH                                ; 0041c4a1
    FSTP float ptr [EBP + 0x2e]         ; 0041c4a3
    FADD float ptr [EDX]                ; 0041c4a6
    FLD float ptr [EBP + 0x2a]          ; 0041c4a8
    FXCH                                ; 0041c4ab
    FSTP float ptr [EBP + 0xe]          ; 0041c4ad
    FADD float ptr [EDX + 0x4]          ; 0041c4b0
    FLD float ptr [EBP + 0x2e]          ; 0041c4b3
    FXCH                                ; 0041c4b6
    FSTP float ptr [EBP + 0x12]         ; 0041c4b8
    FADD float ptr [EDX + 0x8]          ; 0041c4bb | DAT_00002424
    FLD float ptr [EBP + 0xe]           ; 0041c4be
    FXCH                                ; 0041c4c1
    FSTP float ptr [EBP + 0x16]         ; 0041c4c3
    FADD float ptr [EAX]                ; 0041c4c6
    FLD float ptr [EBP + 0x12]          ; 0041c4c8
    FXCH                                ; 0041c4cb
    FSTP float ptr [EBP + -0x52]        ; 0041c4cd
    FADD float ptr [EAX + 0x4]          ; 0041c4d0
    FLD float ptr [EBP + 0x16]          ; 0041c4d3
    FXCH                                ; 0041c4d6
    FSTP float ptr [EBP + -0x4e]        ; 0041c4d8
    FADD float ptr [EAX + 0x8]          ; 0041c4db
    FSTP float ptr [EBP + -0x4a]        ; 0041c4de
    MOV dword ptr [EDX + 0x8],0x0       ; 0041c4e1 | DAT_00002424
    MOV ECX,dword ptr [EDX + 0x8]       ; 0041c4e8 | DAT_00002424
    MOV dword ptr [EDX + 0x4],ECX       ; 0041c4eb
    MOV ECX,dword ptr [EDX + 0x4]       ; 0041c4ee
    MOV dword ptr [EDX],ECX             ; 0041c4f1
    MOV dword ptr [EAX + 0x8],0x0       ; 0041c4f3
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041c4fa
    MOV dword ptr [EAX + 0x4],EDX       ; 0041c4fd
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041c500
    MOV dword ptr [EAX],EDX             ; 0041c503
    LEA EAX,[EBP + -0x52]               ; 0041c505
    PUSH EAX                            ; 0041c508
    PUSH EBX                            ; 0041c509
    CALL core_charactr.cpp_CCharacter_FUN_00428f40 ; 0041c50a | void core_charactr.cpp_CCharacter_FUN_00428f40(CCharacter * this_ptr)
        ;   XREF to: 00428f40 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0041c50f
    PUSH EBX                            ; 0041c512
        ;   Label: LAB_0041c512
    CALL core_charactr.cpp_CCharacter_FUN_00429820 ; 0041c513 | void core_charactr.cpp_CCharacter_FUN_00429820(CCharacter * this_ptr)
        ;   XREF to: 00429820 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0041c518
    LEA EAX,[EBX + 0x158]               ; 0041c51b
    PUSH EAX                            ; 0041c521
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 ; 0041c522 | void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr)
        ;   XREF to: 0059e020 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0041c527
    PUSH dword ptr [EBP + 0x92]         ; 0041c52a
    PUSH EBX                            ; 0041c530
    CALL core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0 ; 0041c531 | void core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(CCharacter * this_ptr)
        ;   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [EBP + 0x56]      ; 0041c536
    ADD ESP,0x8                         ; 0041c539
    CMP ECX,0x1                         ; 0041c53c
    JNZ 0x0041c220                      ; 0041c53f | LAB_0041c220
        ;   XREF to: 0041c220 (CONDITIONAL_JUMP)
    PUSH 0x40590000                     ; 0041c545
    PUSH 0x0                            ; 0041c54a
    SUB ESP,0x8                         ; 0041c54c
    FLD float ptr [EBX + 0x28]          ; 0041c54f
    FSTP double ptr [ESP]               ; 0041c552
    SUB ESP,0x8                         ; 0041c555
    FLD float ptr [EBX + 0x24]          ; 0041c558
    FSTP double ptr [ESP]               ; 0041c55b
    SUB ESP,0x8                         ; 0041c55e
    FLD float ptr [EBX + 0x20]          ; 0041c561
    FSTP double ptr [ESP]               ; 0041c564
    CALL sound_sndmain.cpp_isWithinListenerRadius_FUN_005aa290 ; 0041c567 | int sound_sndmain.cpp_isWithinListenerRadius_FUN_005aa290(double pos_x, double pos_y, double pos_z, double radius)
        ;   XREF to: 005aa290 (UNCONDITIONAL_CALL)
    ADD ESP,0x20                        ; 0041c56c
    TEST EAX,EAX                        ; 0041c56f
    JZ 0x0041c220                       ; 0041c571 | LAB_0041c220
        ;   XREF to: 0041c220 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [EBX + 0xbecc]    ; 0041c577
    PUSH EDI                            ; 0041c57d
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 0041c57e | int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0041c583
    TEST EAX,EAX                        ; 0041c586
    JNZ 0x0041c218                      ; 0041c588 | LAB_0041c218
        ;   XREF to: 0041c218 (CONDITIONAL_JUMP)
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30 ; 0041c58e | void sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30()
        ;   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
    PUSH 0x2                            ; 0041c593
    PUSH 0x3f800000                     ; 0041c595
    PUSH 0x0                            ; 0041c59a
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 0041c59c | float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0041c5a1
    MOV dword ptr [EBP + 0x76],EAX      ; 0041c5a4
    SUB ESP,0x8                         ; 0041c5a7
    FLD float ptr [EBP + 0x76]          ; 0041c5aa
    FSTP double ptr [ESP]               ; 0041c5ad
    CALL sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005a8be0 ; 0041c5b0 | void sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005a8be0(double trigger_time, int trigger_id)
        ;   XREF to: 005a8be0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0041c5b5
    PUSH 0x616115                       ; 0041c5b8 | = "boneGuy-walkloop.wav" | s_boneGuy_walkloop_wav_00616115 = boneGuy-walkloop.wav
    MOV EAX,dword ptr [EBX + 0x154]     ; 0041c5bd
    PUSH EBX                            ; 0041c5c3
    CALL dword ptr [EAX + 0x28]         ; 0041c5c4
    ADD ESP,0x8                         ; 0041c5c7
    MOV dword ptr [EBX + 0xbecc],EAX    ; 0041c5ca
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0 ; 0041c5d0 | void sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0()
        ;   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
    LEA ESP,[EBP + 0x7a]                ; 0041c5d5
    POP EBP                             ; 0041c5d8
    POP EDI                             ; 0041c5d9
    POP ESI                             ; 0041c5da
    POP EBX                             ; 0041c5db
    RET                                 ; 0041c5dc
    PUSH 0x1                            ; 0041c5dd
        ;   Label: LAB_0041c5dd
    PUSH 0x0                            ; 0041c5df
    PUSH ESI                            ; 0041c5e1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0041c5e2 | void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0041c5e7
    PUSH EBX                            ; 0041c5ea
    PUSH 0x6160b7                       ; 0041c5eb | = "%s confused while walking to scriptDe..." | s_s_confused_while_walking_006160b7 = %s confused while walking to scriptDest!

    MOV ESI,dword ptr [0x0066e8e0]      ; 0041c5f0 | CConsole * g_CConsolePtr
    PUSH ESI                            ; 0041c5f6 | CConsole g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 0041c5f7 | void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)
    JMP 0x0041c3d9                      ; 0041c5fc | LAB_0041c3d9
        ;   XREF to: 0041c3d9 (UNCONDITIONAL_JUMP)
    JBE 0x0041c3c9                      ; 0041c601 | LAB_0041c3c9
        ;   Label: LAB_0041c601
        ;   XREF to: 0041c3c9 (CONDITIONAL_JUMP)
    CMP EAX,0x3                         ; 0041c607
    JZ 0x0041c5dd                       ; 0041c60a | LAB_0041c5dd
        ;   XREF to: 0041c5dd (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 0041c60c
        ;   Label: LAB_0041c60c
    PUSH 0x0                            ; 0041c60e
    JMP 0x0041c3cd                      ; 0041c610 | LAB_0041c3cd
        ;   XREF to: 0041c3cd (UNCONDITIONAL_JUMP)
    LEA EAX,[EBP + 0xffffff0a]          ; 0041c615
        ;   Label: caseD_2
    PUSH EAX                            ; 0041c61b
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 0041c61c | SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0041c621
    PUSH 0x41700000                     ; 0041c624
    PUSH 0x40e00000                     ; 0041c629
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 0041c62e | float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
    MOV dword ptr [EBP + 0x76],EAX      ; 0041c633
    ADD ESP,0x8                         ; 0041c636
    LEA EAX,[EBP + 0xffffff0a]          ; 0041c639
    MOV EDX,dword ptr [0x00822944]      ; 0041c63f | undefined4 DAT_00822944
    PUSH EAX                            ; 0041c645
    LEA EAX,[EDX*0x4 + 0x0]             ; 0041c646
    MOV dword ptr [EBP + 0xffffff3e],EBX ; 0041c64d
    SUB EAX,EDX                         ; 0041c653
    MOV dword ptr [EBP + 0xffffff42],EBX ; 0041c655
    SHL EAX,0x4                         ; 0041c65b
    LEA EDX,[EBX + 0xfd8]               ; 0041c65e
    ADD EAX,EDX                         ; 0041c664
    PUSH 0x3ecccccd                     ; 0041c666
    PUSH EAX                            ; 0041c66b
    PUSH 0x3f87558                      ; 0041c66c | CVector3f g_ZeroVector
    LEA EAX,[EBP + -0xa]                ; 0041c671
    FLD float ptr [EBP + 0x76]          ; 0041c674
    PUSH EAX                            ; 0041c677
    FSTP float ptr [EBP + 0xffffff0e]   ; 0041c678
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 0041c67e | CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0041c683
    PUSH EAX                            ; 0041c686
    LEA EAX,[EBP + -0x5e]               ; 0041c687
    PUSH EAX                            ; 0041c68a
    PUSH EBX                            ; 0041c68b
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0041c68c | CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0041c691
    PUSH EAX                            ; 0041c694
    PUSH EBX                            ; 0041c695
    CALL core_enemy.cpp_FUN_004a9880    ; 0041c696 | undefined core_enemy.cpp_FUN_004a9880()
        ;   XREF to: 004a9880 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0041c69b
    JMP 0x0041c3f4                      ; 0041c69e | caseD_4
        ;   XREF to: 0041c3f4 (UNCONDITIONAL_JUMP)
    MOV ESI,dword ptr [EBX + 0x24f8]    ; 0041c6a3
        ;   Label: caseD_6
    TEST ESI,ESI                        ; 0041c6a9
    JZ 0x0041c3f4                       ; 0041c6ab | caseD_4
        ;   XREF to: 0041c3f4 (CONDITIONAL_JUMP)
    MOV EAX,ESI                         ; 0041c6b1
    MOV EDX,dword ptr [ESI + 0x154]     ; 0041c6b3
    LEA ESI,[EBP + 0xffffff46]          ; 0041c6b9
    PUSH ESI                            ; 0041c6bf
    PUSH EAX                            ; 0041c6c0
    CALL dword ptr [EDX + 0x14]         ; 0041c6c1
    FLD float ptr [EBP + 0xffffff46]    ; 0041c6c4
    FADD float ptr [EBP + 0xffffff52]   ; 0041c6ca
    FST float ptr [EBP + 0xffffff7e]    ; 0041c6d0
    FLD float ptr [0x0061614d]          ; 0041c6d6 | float FLOAT_0061614d
    FXCH                                ; 0041c6dc
    FMUL ST1                            ; 0041c6de
    FLD float ptr [EBP + 0xffffff4e]    ; 0041c6e0
    FLD float ptr [EBP + 0xffffff4a]    ; 0041c6e6
    FADD float ptr [EBP + 0xffffff56]   ; 0041c6ec
    FXCH                                ; 0041c6f2
    FADD float ptr [EBP + 0xffffff5a]   ; 0041c6f4
    FXCH                                ; 0041c6fa
    FST float ptr [EBP + -0x7e]         ; 0041c6fc
    FMUL ST3                            ; 0041c6ff
    FXCH                                ; 0041c701
    FST float ptr [EBP + -0x7a]         ; 0041c703
    FMULP ST3                           ; 0041c706
    LEA EDX,[EBP + -0x3a]               ; 0041c708
    LEA EAX,[EBP + -0x6a]               ; 0041c70b
    ADD ESP,0x8                         ; 0041c70e
    FXCH                                ; 0041c711
    FSTP float ptr [EBP + -0x3a]        ; 0041c713
    FSTP float ptr [EBP + -0x36]        ; 0041c716
    FSTP float ptr [EBP + -0x32]        ; 0041c719
    CMP EAX,EDX                         ; 0041c71c
    JNZ 0x0041c810                      ; 0041c71e | LAB_0041c810
        ;   XREF to: 0041c810 (CONDITIONAL_JUMP)
    LEA EAX,[EBP + -0x76]               ; 0041c724
        ;   Label: LAB_0041c724
    LEA EDX,[EBP + -0x6a]               ; 0041c727
    CMP EAX,EDX                         ; 0041c72a
    JZ 0x0041c740                       ; 0041c72c | LAB_0041c740
        ;   XREF to: 0041c740 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x6a]     ; 0041c72e
    MOV dword ptr [EBP + -0x76],EAX     ; 0041c731
    MOV EAX,dword ptr [EBP + -0x66]     ; 0041c734
    MOV dword ptr [EBP + -0x72],EAX     ; 0041c737
    MOV EAX,dword ptr [EBP + -0x62]     ; 0041c73a
    MOV dword ptr [EBP + -0x6e],EAX     ; 0041c73d
    MOV EAX,dword ptr [EBP + 0xffffff4e] ; 0041c740
        ;   Label: LAB_0041c740
    MOV dword ptr [EBP + -0x6e],EAX     ; 0041c746
    MOV EAX,dword ptr [EBP + 0xffffff5a] ; 0041c749
    MOV dword ptr [EBP + -0x62],EAX     ; 0041c74f
    LEA EAX,[EBP + -0x76]               ; 0041c752
    PUSH EAX                            ; 0041c755
    LEA EAX,[EBP + -0x16]               ; 0041c756
    PUSH EAX                            ; 0041c759
    MOV EDI,dword ptr [EBX + 0x24f8]    ; 0041c75a
    PUSH EDI                            ; 0041c760
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0041c761 | CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
    MOV EDX,EAX                         ; 0041c766
    LEA EAX,[EBP + -0x76]               ; 0041c768
    ADD ESP,0xc                         ; 0041c76b
    CMP EAX,EDX                         ; 0041c76e
    JZ 0x0041c783                       ; 0041c770 | LAB_0041c783
        ;   XREF to: 0041c783 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EDX]             ; 0041c772
    MOV dword ptr [EBP + -0x76],EAX     ; 0041c774
    MOV EAX,dword ptr [EDX + 0x4]       ; 0041c777
    MOV dword ptr [EBP + -0x72],EAX     ; 0041c77a
    MOV EAX,dword ptr [EDX + 0x8]       ; 0041c77d
    MOV dword ptr [EBP + -0x6e],EAX     ; 0041c780
    LEA EAX,[EBP + -0x6a]               ; 0041c783
        ;   Label: LAB_0041c783
    PUSH EAX                            ; 0041c786
    LEA EAX,[EBP + 0x32]                ; 0041c787
    PUSH EAX                            ; 0041c78a
    MOV EAX,dword ptr [EBX + 0x24f8]    ; 0041c78b
    PUSH EAX                            ; 0041c791
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0041c792 | CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
    MOV EDX,EAX                         ; 0041c797
    LEA EAX,[EBP + -0x6a]               ; 0041c799
    ADD ESP,0xc                         ; 0041c79c
    CMP EAX,EDX                         ; 0041c79f
    JZ 0x0041c7b4                       ; 0041c7a1 | LAB_0041c7b4
        ;   XREF to: 0041c7b4 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EDX]             ; 0041c7a3
    MOV dword ptr [EBP + -0x6a],EAX     ; 0041c7a5
    MOV EAX,dword ptr [EDX + 0x4]       ; 0041c7a8
    MOV dword ptr [EBP + -0x66],EAX     ; 0041c7ab
    MOV EAX,dword ptr [EDX + 0x8]       ; 0041c7ae
    MOV dword ptr [EBP + -0x62],EAX     ; 0041c7b1
    LEA EAX,[EBP + 0xfffffece]          ; 0041c7b4
        ;   Label: LAB_0041c7b4
    PUSH EAX                            ; 0041c7ba
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 0041c7bb | SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0041c7c0
    PUSH 0x41c80000                     ; 0041c7c3
    PUSH 0x41700000                     ; 0041c7c8
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 0041c7cd | float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
    MOV dword ptr [EBP + 0x76],EAX      ; 0041c7d2
    MOV EAX,dword ptr [EBP + 0x76]      ; 0041c7d5
    MOV dword ptr [EBP + 0xfffffed2],EAX ; 0041c7d8
    MOV EAX,dword ptr [EBX + 0x24f8]    ; 0041c7de
    ADD ESP,0x8                         ; 0041c7e4
    MOV dword ptr [EBP + 0xffffff02],EAX ; 0041c7e7
    LEA EAX,[EBP + 0xfffffece]          ; 0041c7ed
    PUSH EAX                            ; 0041c7f3
    LEA EAX,[EBP + -0x6a]               ; 0041c7f4
    PUSH EAX                            ; 0041c7f7
    LEA EAX,[EBP + -0x76]               ; 0041c7f8
    PUSH EAX                            ; 0041c7fb
    PUSH EBX                            ; 0041c7fc
    MOV dword ptr [EBP + 0xffffff06],EBX ; 0041c7fd
    CALL core_enemy.cpp_FUN_004a9930    ; 0041c803 | undefined core_enemy.cpp_FUN_004a9930()
        ;   XREF to: 004a9930 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0041c808
    JMP 0x0041c3f4                      ; 0041c80b | caseD_4
        ;   XREF to: 0041c3f4 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x3a]     ; 0041c810
        ;   Label: LAB_0041c810
    MOV dword ptr [EBP + -0x6a],EAX     ; 0041c813
    MOV EAX,dword ptr [EBP + -0x36]     ; 0041c816
    MOV dword ptr [EBP + -0x66],EAX     ; 0041c819
    MOV EAX,dword ptr [EBP + -0x32]     ; 0041c81c
    MOV dword ptr [EBP + -0x62],EAX     ; 0041c81f
    JMP 0x0041c724                      ; 0041c822 | LAB_0041c724
        ;   XREF to: 0041c724 (UNCONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0xbe28],0x0    ; 0041c827
        ;   Label: caseD_5
    JNZ 0x0041c3f4                      ; 0041c82e | caseD_4
        ;   XREF to: 0041c3f4 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0xdc],0x0      ; 0041c834
    JNZ 0x0041c3f4                      ; 0041c83b | caseD_4
        ;   XREF to: 0041c3f4 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0xbe28],0x1    ; 0041c841
    JMP 0x0041c3f4                      ; 0041c84b | caseD_4
        ;   XREF to: 0041c3f4 (UNCONDITIONAL_JUMP)
    PUSH dword ptr [EBP + 0x92]         ; 0041c850
        ;   Label: caseD_0
    PUSH EBX                            ; 0041c856
    CALL core_enemy.cpp_CEnemy_FUN_004a9fd0 ; 0041c857 | void core_enemy.cpp_CEnemy_FUN_004a9fd0(CEnemy * this_ptr)
        ;   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0041c85c
    TEST EAX,EAX                        ; 0041c85f
    JZ 0x0041c875                       ; 0041c861 | LAB_0041c875
        ;   XREF to: 0041c875 (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 0041c863
    PUSH 0x1                            ; 0041c865
    PUSH ESI                            ; 0041c867
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0041c868 | void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0041c86d
    JMP 0x0041c3f4                      ; 0041c870 | caseD_4
        ;   XREF to: 0041c3f4 (UNCONDITIONAL_JUMP)
    PUSH dword ptr [EBP + 0x92]         ; 0041c875
        ;   Label: LAB_0041c875
    MOV EAX,dword ptr [EBX + 0x154]     ; 0041c87b
    PUSH EBX                            ; 0041c881
    CALL dword ptr [EAX + 0x158]        ; 0041c882
    MOV ECX,dword ptr [EBX + 0xbe3c]    ; 0041c888
    ADD ESP,0x8                         ; 0041c88e
    TEST ECX,ECX                        ; 0041c891
    JZ 0x0041c3f4                       ; 0041c893 | caseD_4
        ;   XREF to: 0041c3f4 (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 0041c899
    PUSH 0x1                            ; 0041c89b
    PUSH ESI                            ; 0041c89d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0041c89e | void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0041c8a3
    JMP 0x0041c3f4                      ; 0041c8a6 | caseD_4
        ;   XREF to: 0041c3f4 (UNCONDITIONAL_JUMP)
    PUSH dword ptr [EBP + 0x92]         ; 0041c8ab
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x154]     ; 0041c8b1
    PUSH EBX                            ; 0041c8b7
    CALL dword ptr [EAX + 0x158]        ; 0041c8b8
    MOV EDI,dword ptr [EBX + 0xbe3c]    ; 0041c8be
    ADD ESP,0x8                         ; 0041c8c4
    TEST EDI,EDI                        ; 0041c8c7
    JNZ 0x0041c8f3                      ; 0041c8c9 | LAB_0041c8f3
        ;   XREF to: 0041c8f3 (CONDITIONAL_JUMP)
    PUSH dword ptr [EBP + 0x92]         ; 0041c8cb
    PUSH EBX                            ; 0041c8d1
    CALL core_enemy.cpp_CEnemy_FUN_004a9fd0 ; 0041c8d2 | void core_enemy.cpp_CEnemy_FUN_004a9fd0(CEnemy * this_ptr)
        ;   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0041c8d7
    TEST EAX,EAX                        ; 0041c8da
    JNZ 0x0041c3f4                      ; 0041c8dc | caseD_4
        ;   XREF to: 0041c3f4 (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 0041c8e2
    PUSH EDI                            ; 0041c8e4
    PUSH ESI                            ; 0041c8e5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0041c8e6 | void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0041c8eb
    JMP 0x0041c3f4                      ; 0041c8ee | caseD_4
        ;   XREF to: 0041c3f4 (UNCONDITIONAL_JUMP)
    PUSH dword ptr [EBP + 0x92]         ; 0041c8f3
        ;   Label: LAB_0041c8f3
    PUSH EBX                            ; 0041c8f9
    CALL core_boneguy.cpp_FUN_0041cc40  ; 0041c8fa | undefined core_boneguy.cpp_FUN_0041cc40()
        ;   XREF to: 0041cc40 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0041c8ff
    TEST EAX,EAX                        ; 0041c902
    JNZ 0x0041c3f4                      ; 0041c904 | caseD_4
        ;   XREF to: 0041c3f4 (CONDITIONAL_JUMP)
    MOV EAX,[0x0065af58]                ; 0041c90a | undefined4 DAT_0065af58
    MOV dword ptr [EBP + 0x5a],EAX      ; 0041c90f
    CMP dword ptr [EBX + 0x24f8],0x0    ; 0041c912
    JZ 0x0041c923                       ; 0041c919 | LAB_0041c923
        ;   XREF to: 0041c923 (CONDITIONAL_JUMP)
    MOV EAX,[0x0065af5c]                ; 0041c91b | undefined4 DAT_0065af5c
    MOV dword ptr [EBP + 0x5a],EAX      ; 0041c920
    PUSH 0x3e32b8c2                     ; 0041c923
        ;   Label: LAB_0041c923
    PUSH 0x3f000000                     ; 0041c928
    XOR EDX,EDX                         ; 0041c92d
    MOV EAX,dword ptr [EBP + 0x5a]      ; 0041c92f
    MOV dword ptr [EBP + -0x46],EDX     ; 0041c932
    MOV dword ptr [EBP + -0x3e],EAX     ; 0041c935
    LEA EAX,[EBP + -0x46]               ; 0041c938
    MOV dword ptr [EBP + -0x42],EDX     ; 0041c93b
    PUSH EAX                            ; 0041c93e
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 0041c93f
    PUSH EAX                            ; 0041c945
    MOV EDX,dword ptr [EAX + 0x154]     ; 0041c946
    CALL dword ptr [EDX + 0xbc]         ; 0041c94c
    ADD ESP,0x4                         ; 0041c952
    PUSH EAX                            ; 0041c955
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 0041c956
    ADD EAX,0x20                        ; 0041c95c
    PUSH EAX                            ; 0041c95f
    PUSH EBX                            ; 0041c960
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 ; 0041c961 | int core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter * this_ptr)
        ;   XREF to: 004286e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 0041c966
    LEA ESI,[EBX + 0x158]               ; 0041c969
    TEST EAX,EAX                        ; 0041c96f
    JL 0x0041ca00                       ; 0041c971 | LAB_0041ca00
        ;   XREF to: 0041ca00 (CONDITIONAL_JUMP)
    LEA EDX,[EBX + 0x20]                ; 0041c977
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 0041c97a
    FLD float ptr [EDX]                 ; 0041c980
    FSUB float ptr [EAX + 0x20]         ; 0041c982
    FMUL ST0                            ; 0041c985
    FLD float ptr [EDX + 0x8]           ; 0041c987
    FSUB float ptr [EAX + 0x28]         ; 0041c98a
    FMUL ST0                            ; 0041c98d
    FADDP                               ; 0041c98f
    FSQRT                               ; 0041c991
    FLD float ptr [EBP + 0x5a]          ; 0041c993
    FADD double ptr [0x0061612d]        ; 0041c996 | double DOUBLE_0061612d
    FCOMPP                              ; 0041c99c
    FNSTSW AX                           ; 0041c99e
    SAHF                                ; 0041c9a0
    JC 0x0041c3f4                       ; 0041c9a1 | caseD_4
        ;   XREF to: 0041c3f4 (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0xbe38]        ; 0041c9a7
    FLDZ                                ; 0041c9ad
    FCOMPP                              ; 0041c9af
    FNSTSW AX                           ; 0041c9b1
    SAHF                                ; 0041c9b3
    JC 0x0041c3f4                       ; 0041c9b4 | caseD_4
        ;   XREF to: 0041c3f4 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x24f8],0x0    ; 0041c9ba
    JNZ 0x0041ca27                      ; 0041c9c1 | LAB_0041ca27
        ;   XREF to: 0041ca27 (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 0041c9c3
    PUSH 0x2                            ; 0041c9c5
    PUSH ESI                            ; 0041c9c7
        ;   Label: LAB_0041c9c7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0041c9c8 | void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0041c9cd
    MOV EAX,dword ptr [EBX + 0xbecc]    ; 0041c9d0
    PUSH EAX                            ; 0041c9d6
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 0041c9d7 | int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0041c9dc
    PUSH 0x616102                       ; 0041c9df | = "boneguy-swing?.wav" | s_boneguy_swing_wav_00616102 = boneguy-swing?.wav
    MOV EAX,dword ptr [EBX + 0x154]     ; 0041c9e4
    PUSH EBX                            ; 0041c9ea
    CALL dword ptr [EAX + 0x24]         ; 0041c9eb
    ADD ESP,0x8                         ; 0041c9ee
    MOV dword ptr [EBX + 0xbe38],0x3f800000 ; 0041c9f1
    JMP 0x0041c3f4                      ; 0041c9fb | caseD_4
        ;   XREF to: 0041c3f4 (UNCONDITIONAL_JUMP)
    PUSH EBX                            ; 0041ca00
        ;   Label: LAB_0041ca00
    PUSH 0x6160e1                       ; 0041ca01 | = "%s gave up chase - I'm confused\n" | s_s_gave_up_chase_I_m_conf_006160e1 = %s gave up chase - I'm confused

    MOV EDX,dword ptr [0x0066e8e0]      ; 0041ca06 | CConsole * g_CConsolePtr
    PUSH EDX                            ; 0041ca0c | CConsole g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 0041ca0d | void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0041ca12
    PUSH 0x1                            ; 0041ca15
    PUSH 0x0                            ; 0041ca17
    PUSH ESI                            ; 0041ca19
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0041ca1a | void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0041ca1f
    JMP 0x0041c3f4                      ; 0041ca22 | caseD_4
        ;   XREF to: 0041c3f4 (UNCONDITIONAL_JUMP)
    PUSH 0x1                            ; 0041ca27
        ;   Label: LAB_0041ca27
    PUSH 0x6                            ; 0041ca29
    JMP 0x0041c9c7                      ; 0041ca2b | LAB_0041c9c7
        ;   XREF to: 0041c9c7 (UNCONDITIONAL_JUMP)
    CMP EDI,0x6                         ; 0041ca2d
        ;   Label: LAB_0041ca2d
    JA 0x0041c3f4                       ; 0041ca30 | caseD_4
        ;   XREF to: 0041c3f4 (CONDITIONAL_JUMP)
    JMP dword ptr [EDI*0x4 + 0x41bf70]  ; 0041ca36 | pointer switchdataD_0041bf70
        ;   Label: switchD

