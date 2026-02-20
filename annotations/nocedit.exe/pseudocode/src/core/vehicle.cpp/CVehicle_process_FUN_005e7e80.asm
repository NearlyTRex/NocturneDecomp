; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vehicle_cpp_CVehicle_process_FUN_005e7e80(CVehicle *this_ptr,float delta_time)
;
; Parameters:
; CVehicle *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined1       Stack[-0xa0]:1  local_a0
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined1       Stack[-0x7c]:1  local_7c
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined1       Stack[-0x4c]:1  local_4c
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_model_t_horn_wav_00656e26
;   TerminatedCString s_core_vehicle_cpp_00656e38
;   TerminatedCString s_core_vehicle_cpp_00656e4c
;   TerminatedCString s_core_vehicle_cpp_00656e60
;   TerminatedCString s_CMobster_process_Out_of__00656e74
;   TerminatedCString s_mobster3_dfm_00656e97
;   TerminatedCString s_mobster4_dfm_00656ea4
;   TerminatedCString s_ext_modelt_fast_wav_00656eb1
;   TerminatedCString s_skid_wav_00656ec8
;   float FLOAT_00656ed6 = 2
;   float FLOAT_00656eda = 3.700000
;   float FLOAT_00656ede = 1.570796
;   double DOUBLE_00656ee6 = 200
;   double DOUBLE_00656eee = 0.200000000000000
;   double DOUBLE_00656ef6 = 30
;   ... and 18 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_actor.cpp_randomChance_FUN_0040cd10
;   core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
;   core_course.cpp_CCourse_evaluate_FUN_00442710
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_mission.cpp_CDemonMission_addActorToList_FUN_00523b70
;   core_mission.cpp_CDemonMission_generateActorName_FUN_00524700
;   core_mobster.cpp_CMobster_ctor_FUN_00525200
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;   core_tommygun.cpp_CTommyGun_ctor_FUN_005dda90
;   core_vehicle.cpp_CVehicle_FUN_005e8b50
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e7e80
        ;   Label: core_vehicle.cpp_CVehicle_process_FUN_005e7e80
    PUSH ESI                            ; 005e7e81
    PUSH EDI                            ; 005e7e82
    PUSH EBP                            ; 005e7e83
    MOV EBP,ESP                         ; 005e7e84
    SUB ESP,0xf8                        ; 005e7e86
    AND ESP,0xfffffff8                  ; 005e7e8c
    MOV EBX,dword ptr [EBP + 0x14]      ; 005e7e8f
    LEA EAX,[EBX + 0x1020]              ; 005e7e92
    MOV EDX,dword ptr [EAX]             ; 005e7e98
    FLD float ptr [EBX + 0x102c]        ; 005e7e9a
    MOV dword ptr [ESP + 0xf4],EDX      ; 005e7ea0
    LEA EDX,[ESP + 0x8c]                ; 005e7ea7
    FILD dword ptr [ESP + 0xf4]         ; 005e7eae
    PUSH EDX                            ; 005e7eb5
    LEA EDX,[ESP + 0x9c]                ; 005e7eb6
    FXCH                                ; 005e7ebd
    FDIV float ptr [EBX + 0x1030]       ; 005e7ebf
    FMULP                               ; 005e7ec5
    PUSH EDX                            ; 005e7ec7
    FSTP float ptr [ESP + 0xe8]         ; 005e7ec8
    PUSH dword ptr [ESP + 0xe8]         ; 005e7ecf
    PUSH EAX                            ; 005e7ed6
    CALL core_course.cpp_CCourse_evaluate_FUN_00442710 ; 005e7ed7
        ;   XREF to: 00442710 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_evaluate_FUN_00442710(CCourse * this_ptr, float time, CVector3f * out_pos, CVector3f * out_euler)
    ADD ESP,0x10                        ; 005e7edc
    FLD float ptr [EBX + 0x102c]        ; 005e7edf
    FADD float ptr [EBP + 0x18]         ; 005e7ee5
    FST float ptr [EBX + 0x102c]        ; 005e7ee8
    FCOMP float ptr [EBX + 0x1030]      ; 005e7eee
    FNSTSW AX                           ; 005e7ef4
    SAHF                                ; 005e7ef6
    JBE 0x005e7f0b                      ; 005e7ef7
        ;   XREF to: 005e7f0b (CONDITIONAL_JUMP)  ; LAB_005e7f0b
    FLD float ptr [EBX + 0x1030]        ; 005e7ef9
    FSUBR float ptr [EBX + 0x102c]      ; 005e7eff
    FSTP float ptr [EBX + 0x102c]       ; 005e7f05
    LEA EAX,[EBX + 0x1020]              ; 005e7f0b
        ;   Label: LAB_005e7f0b
    MOV EDX,dword ptr [EAX]             ; 005e7f11
    FLD float ptr [EBX + 0x102c]        ; 005e7f13
    MOV dword ptr [ESP + 0xf4],EDX      ; 005e7f19
    LEA EDX,[EBX + 0x30]                ; 005e7f20
    FILD dword ptr [ESP + 0xf4]         ; 005e7f23
    PUSH EDX                            ; 005e7f2a
    LEA ESI,[EBX + 0x20]                ; 005e7f2b
    FXCH                                ; 005e7f2e
    FDIV float ptr [EBX + 0x1030]       ; 005e7f30
    FMULP                               ; 005e7f36
    PUSH ESI                            ; 005e7f38
    FSTP float ptr [ESP + 0xe8]         ; 005e7f39
    PUSH dword ptr [ESP + 0xe8]         ; 005e7f40
    PUSH EAX                            ; 005e7f47
    CALL core_course.cpp_CCourse_evaluate_FUN_00442710 ; 005e7f48
        ;   XREF to: 00442710 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_evaluate_FUN_00442710(CCourse * this_ptr, float time, CVector3f * out_pos, CVector3f * out_euler)
    FLD float ptr [ESI]                 ; 005e7f4d
    ADD ESP,0x10                        ; 005e7f4f
    XOR EDX,EDX                         ; 005e7f52
    FLD float ptr [EBP + 0x18]          ; 005e7f54
    FXCH                                ; 005e7f57
    FSUB float ptr [ESP + 0x98]         ; 005e7f59
    FLDZ                                ; 005e7f60
    FXCH                                ; 005e7f62
    FSTP float ptr [ESP + 0x80]         ; 005e7f64
    FLD float ptr [ESI + 0x4]           ; 005e7f6b
    FSUB float ptr [ESP + 0x9c]         ; 005e7f6e
    MOV dword ptr [ESP + 0xe4],EDX      ; 005e7f75
    FSTP float ptr [ESP + 0x84]         ; 005e7f7c
    FLD float ptr [ESI + 0x8]           ; 005e7f83
    FSUB float ptr [ESP + 0xa0]         ; 005e7f86
    LEA EDX,[EBX + 0x8c4]               ; 005e7f8d
    FSTP float ptr [ESP + 0x88]         ; 005e7f93
    FCOMPP                              ; 005e7f9a
    FNSTSW AX                           ; 005e7f9c
    SAHF                                ; 005e7f9e
    JNC 0x005e8181                      ; 005e7f9f
        ;   XREF to: 005e8181 (CONDITIONAL_JUMP)  ; LAB_005e8181
    FLD1                                ; 005e7fa5
    FLD float ptr [ESP + 0x80]          ; 005e7fa7
    FXCH                                ; 005e7fae
    FDIV float ptr [EBP + 0x18]         ; 005e7fb0
    FXCH                                ; 005e7fb3
    FMUL ST1                            ; 005e7fb5
    FLD float ptr [ESP + 0x84]          ; 005e7fb7
    FMUL ST2                            ; 005e7fbe
    FLD float ptr [ESP + 0x88]          ; 005e7fc0
    FMULP ST3                           ; 005e7fc7
    LEA EAX,[ESP + 0xb0]                ; 005e7fc9
    FXCH                                ; 005e7fd0
    FSTP float ptr [ESP + 0xb0]         ; 005e7fd2
    FSTP float ptr [ESP + 0xb4]         ; 005e7fd9
    FSTP float ptr [ESP + 0xb8]         ; 005e7fe0
    CMP EDX,EAX                         ; 005e7fe7
    JZ 0x005e8008                       ; 005e7fe9
        ;   XREF to: 005e8008 (CONDITIONAL_JUMP)  ; LAB_005e8008
    MOV EAX,dword ptr [ESP + 0xb0]      ; 005e7feb
    MOV dword ptr [EDX],EAX             ; 005e7ff2
    MOV EAX,dword ptr [ESP + 0xb4]      ; 005e7ff4
    MOV dword ptr [EDX + 0x4],EAX       ; 005e7ffb
    MOV EAX,dword ptr [ESP + 0xb8]      ; 005e7ffe
    MOV dword ptr [EDX + 0x8],EAX       ; 005e8005
    LEA EAX,[EBX + 0x8c4]               ; 005e8008
        ;   Label: LAB_005e8008
    FLD float ptr [EAX + 0x4]           ; 005e800e
    FMUL ST0                            ; 005e8011
    FLD float ptr [EAX]                 ; 005e8013
    FMUL ST0                            ; 005e8015
    FADDP                               ; 005e8017
    FLD float ptr [EAX + 0x8]           ; 005e8019
    FMUL ST0                            ; 005e801c
    FADDP                               ; 005e801e
    FSQRT                               ; 005e8020
    FSTP float ptr [ESP + 0xe4]         ; 005e8022
    LEA EAX,[EBX + 0x8c4]               ; 005e8029
        ;   Label: LAB_005e8029
    FLD float ptr [0x00656ed6]          ; 005e802f | FLOAT_00656ed6
    FLD float ptr [EAX]                 ; 005e8035
    FMUL ST1                            ; 005e8037
    FSTP float ptr [ESP + 0xd4]         ; 005e8039
    FLD float ptr [EAX + 0x4]           ; 005e8040
    FMUL ST1                            ; 005e8043
    FSTP float ptr [ESP + 0xd8]         ; 005e8045
    FMUL float ptr [EAX + 0x8]          ; 005e804c
    LEA EDX,[EBX + 0x1060]              ; 005e804f
    LEA EAX,[ESP + 0xd4]                ; 005e8055
    FSTP float ptr [ESP + 0xdc]         ; 005e805c
    CMP EDX,EAX                         ; 005e8063
    JZ 0x005e8084                       ; 005e8065
        ;   XREF to: 005e8084 (CONDITIONAL_JUMP)  ; LAB_005e8084
    MOV EAX,dword ptr [ESP + 0xd4]      ; 005e8067
    MOV dword ptr [EDX],EAX             ; 005e806e
    MOV EAX,dword ptr [ESP + 0xd8]      ; 005e8070
    MOV dword ptr [EDX + 0x4],EAX       ; 005e8077
    MOV EAX,dword ptr [ESP + 0xdc]      ; 005e807a
    MOV dword ptr [EDX + 0x8],EAX       ; 005e8081
    LEA EAX,[EBX + 0x8c4]               ; 005e8084
        ;   Label: LAB_005e8084
    PUSH EAX                            ; 005e808a
    LEA EAX,[ESP + 0xc0]                ; 005e808b
    PUSH EAX                            ; 005e8092
    PUSH EBX                            ; 005e8093
    CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0 ; 005e8094
        ;   XREF to: 00408ea0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0(CDemonActor * this_ptr, CVector3f * output_vector, CVector3f * input_vector)
    LEA EDX,[EBX + 0x8d0]               ; 005e8099
    ADD ESP,0xc                         ; 005e809f
    CMP EDX,EAX                         ; 005e80a2
    JZ 0x005e80b6                       ; 005e80a4
        ;   XREF to: 005e80b6 (CONDITIONAL_JUMP)  ; LAB_005e80b6
    MOV ECX,dword ptr [EAX]             ; 005e80a6
    MOV dword ptr [EDX],ECX             ; 005e80a8
    MOV ECX,dword ptr [EAX + 0x4]       ; 005e80aa
    MOV dword ptr [EDX + 0x4],ECX       ; 005e80ad
    MOV ECX,dword ptr [EAX + 0x8]       ; 005e80b0
    MOV dword ptr [EDX + 0x8],ECX       ; 005e80b3
    MOV ECX,dword ptr [EBX + 0x938]     ; 005e80b6
        ;   Label: LAB_005e80b6
    XOR ESI,ESI                         ; 005e80bc
    TEST ECX,ECX                        ; 005e80be
    JLE 0x005e80f1                      ; 005e80c0
        ;   XREF to: 005e80f1 (CONDITIONAL_JUMP)  ; LAB_005e80f1
    FLD float ptr [ESP + 0xe4]          ; 005e80c2
    MOV EAX,EBX                         ; 005e80c9
    FLD float ptr [EAX + 0x948]         ; 005e80cb
        ;   Label: LAB_005e80cb
    FMUL ST1                            ; 005e80d1
    FADD float ptr [EAX + 0xacc]        ; 005e80d3
    INC ESI                             ; 005e80d9
    FSTP float ptr [EAX + 0xacc]        ; 005e80da
    MOV EDI,dword ptr [EBX + 0x938]     ; 005e80e0
    ADD EAX,0x1b4                       ; 005e80e6
    CMP ESI,EDI                         ; 005e80eb
    JL 0x005e80cb                       ; 005e80ed
        ;   XREF to: 005e80cb (CONDITIONAL_JUMP)  ; LAB_005e80cb
    FSTP ST0                            ; 005e80ef
    FLD float ptr [EBX + 0x24]          ; 005e80f1
        ;   Label: LAB_005e80f1
    FLD float ptr [EBX + 0x34]          ; 005e80f4
    MOV dword ptr [EBX + 0x30],0x0      ; 005e80f7
    LEA EAX,[ESP + 0x68]                ; 005e80fe
    MOV EDX,dword ptr [EBX + 0x154]     ; 005e8102
    XOR EDI,EDI                         ; 005e8108
    PUSH EAX                            ; 005e810a
    FXCH                                ; 005e810b
    FADD float ptr [0x00656eda]         ; 005e810d | FLOAT_00656eda
    FXCH                                ; 005e8113
    FADD float ptr [0x00656ede]         ; 005e8115 | FLOAT_00656ede
    FXCH                                ; 005e811b
    FSTP float ptr [EBX + 0x24]         ; 005e811d
    PUSH EBX                            ; 005e8120
    FSTP float ptr [EBX + 0x34]         ; 005e8121
    CALL dword ptr [EDX + 0x14]         ; 005e8124
    ADD ESP,0x8                         ; 005e8127
    MOV dword ptr [ESP + 0xf0],EDI      ; 005e812a
    MOV ESI,dword ptr [0x006810c8]      ; 005e8131 | g_CDemonSetPtr
        ;   Label: LAB_005e8131
    CMP EDI,dword ptr [ESI + 0x14f098]  ; 005e8137 | g_CDemonSetInstance.character_count
    JGE 0x005e82ea                      ; 005e813d
        ;   XREF to: 005e82ea (CONDITIONAL_JUMP)  ; LAB_005e82ea
    MOV ECX,dword ptr [ESP + 0xf0]      ; 005e8143
    MOV EAX,[0x02f37f30]                ; 005e814a | g_CMobsterClassInfo.name_hash
    ADD ESI,ECX                         ; 005e814f
    PUSH EAX                            ; 005e8151
    MOV ESI,dword ptr [ESI + 0x14f09c]  ; 005e8152 | g_CDemonSetInstance.characters[0] | DAT_03263318
    PUSH ESI                            ; 005e8158
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005e8159
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005e815e
    TEST EAX,EAX                        ; 005e8161
    JZ 0x005e81a9                       ; 005e8163
        ;   XREF to: 005e81a9 (CONDITIONAL_JUMP)  ; LAB_005e81a9
    CMP EBX,dword ptr [EAX + 0xbee0]    ; 005e8165
    JNZ 0x005e81a9                      ; 005e816b
        ;   XREF to: 005e81a9 (CONDITIONAL_JUMP)  ; LAB_005e81a9
    MOV ECX,dword ptr [ESP + 0xf0]      ; 005e816d
        ;   Label: LAB_005e816d
    ADD ECX,0x4                         ; 005e8174
    INC EDI                             ; 005e8177
    MOV dword ptr [ESP + 0xf0],ECX      ; 005e8178
    JMP 0x005e8131                      ; 005e817f
        ;   XREF to: 005e8131 (UNCONDITIONAL_JUMP)  ; LAB_005e8131
    CMP EDX,0x3f87558                   ; 005e8181 | g_ZeroVector
        ;   Label: LAB_005e8181
    JZ 0x005e8029                       ; 005e8187
        ;   XREF to: 005e8029 (CONDITIONAL_JUMP)  ; LAB_005e8029
    MOV EAX,[0x03f87558]                ; 005e818d | g_ZeroVector
    MOV dword ptr [EDX],EAX             ; 005e8192
    MOV EAX,[0x03f8755c]                ; 005e8194 | g_ZeroVector.y
    MOV dword ptr [EDX + 0x4],EAX       ; 005e8199
    MOV EAX,[0x03f87560]                ; 005e819c | g_ZeroVector.z
    MOV dword ptr [EDX + 0x8],EAX       ; 005e81a1
    JMP 0x005e8029                      ; 005e81a4
        ;   XREF to: 005e8029 (UNCONDITIONAL_JUMP)  ; LAB_005e8029
    LEA EAX,[ESP + 0x40]                ; 005e81a9
        ;   Label: LAB_005e81a9
    PUSH EAX                            ; 005e81ad
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0 ; 005e81ae
        ;   XREF to: 005743c0 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 005e81b3
    LEA EDX,[ESP + 0x40]                ; 005e81b6
    PUSH EDX                            ; 005e81ba
    MOV EAX,dword ptr [ESI + 0x154]     ; 005e81bb
    PUSH ESI                            ; 005e81c1
    CALL dword ptr [EAX + 0x34]         ; 005e81c2
    ADD ESP,0x8                         ; 005e81c5
    CMP EAX,0x2                         ; 005e81c8
    JNZ 0x005e816d                      ; 005e81cb
        ;   XREF to: 005e816d (CONDITIONAL_JUMP)  ; LAB_005e816d
    FLD float ptr [EBX + 0x24]          ; 005e81cd
    FADD float ptr [ESP + 0x78]         ; 005e81d0
    FCOMP float ptr [ESI + 0x24]        ; 005e81d4
    FNSTSW AX                           ; 005e81d7
    SAHF                                ; 005e81d9
    JC 0x005e816d                       ; 005e81da
        ;   XREF to: 005e816d (CONDITIONAL_JUMP)  ; LAB_005e816d
    FLD float ptr [ESI + 0x24]          ; 005e81dc
    FADD float ptr [ESP + 0x58]         ; 005e81df
    FLD float ptr [EBX + 0x24]          ; 005e81e3
    FADD float ptr [ESP + 0x6c]         ; 005e81e6
    FCOMPP                              ; 005e81ea
    FNSTSW AX                           ; 005e81ec
    SAHF                                ; 005e81ee
    JA 0x005e816d                       ; 005e81ef
        ;   XREF to: 005e816d (CONDITIONAL_JUMP)  ; LAB_005e816d
    LEA EAX,[ESI + 0x20]                ; 005e81f5
    PUSH EAX                            ; 005e81f8
    LEA EAX,[ESP + 0xa8]                ; 005e81f9
    PUSH EAX                            ; 005e8200
    PUSH EBX                            ; 005e8201
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 005e8202
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 005e8207
    FLD float ptr [ESP + 0xa4]          ; 005e820a
    FADD float ptr [ESP + 0x5c]         ; 005e8211
    FCOMP float ptr [ESP + 0x68]        ; 005e8215
    FNSTSW AX                           ; 005e8219
    SAHF                                ; 005e821b
    JC 0x005e816d                       ; 005e821c
        ;   XREF to: 005e816d (CONDITIONAL_JUMP)  ; LAB_005e816d
    FLD float ptr [ESP + 0xa4]          ; 005e8222
    FSUB float ptr [ESP + 0x5c]         ; 005e8229
    FCOMP float ptr [ESP + 0x74]        ; 005e822d
    FNSTSW AX                           ; 005e8231
    SAHF                                ; 005e8233
    JA 0x005e816d                       ; 005e8234
        ;   XREF to: 005e816d (CONDITIONAL_JUMP)  ; LAB_005e816d
    FLD float ptr [ESP + 0xac]          ; 005e823a
    FADD float ptr [ESP + 0x5c]         ; 005e8241
    FCOMP float ptr [ESP + 0x70]        ; 005e8245
    FNSTSW AX                           ; 005e8249
    SAHF                                ; 005e824b
    JC 0x005e816d                       ; 005e824c
        ;   XREF to: 005e816d (CONDITIONAL_JUMP)  ; LAB_005e816d
    FLD float ptr [ESP + 0xac]          ; 005e8252
    FSUB float ptr [ESP + 0x5c]         ; 005e8259
    FST float ptr [ESP]                 ; 005e825d
    FCOMP float ptr [ESP + 0x7c]        ; 005e8260
    FNSTSW AX                           ; 005e8264
    SAHF                                ; 005e8266
    JBE 0x005e82b1                      ; 005e8267
        ;   XREF to: 005e82b1 (CONDITIONAL_JUMP)  ; LAB_005e82b1
    FLD float ptr [ESP]                 ; 005e8269
    FLD float ptr [ESP + 0x7c]          ; 005e826c
    FADD double ptr [0x00656ef6]        ; 005e8270 | DOUBLE_00656ef6
    FCOMPP                              ; 005e8276
    FNSTSW AX                           ; 005e8278
    SAHF                                ; 005e827a
    JBE 0x005e816d                      ; 005e827b
        ;   XREF to: 005e816d (CONDITIONAL_JUMP)  ; LAB_005e816d
    MOV EDX,dword ptr [EBX + 0x1054]    ; 005e8281
    PUSH EDX                            ; 005e8287
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 005e8288
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 005e828d
    TEST EAX,EAX                        ; 005e8290
    JNZ 0x005e816d                      ; 005e8292
        ;   XREF to: 005e816d (CONDITIONAL_JUMP)  ; LAB_005e816d
    PUSH 0x656e26                       ; 005e8298 | = "model-t-horn?.wav"
    PUSH EBX                            ; 005e829d
    CALL core_vehicle.cpp_CVehicle_FUN_005e8b50 ; 005e829e
        ;   XREF to: 005e8b50 (UNCONDITIONAL_CALL)  ; uint core_vehicle.cpp_CVehicle_FUN_005e8b50(CVehicle * this_ptr)
    ADD ESP,0x8                         ; 005e82a3
    MOV dword ptr [EBX + 0x1054],EAX    ; 005e82a6
    JMP 0x005e816d                      ; 005e82ac
        ;   XREF to: 005e816d (UNCONDITIONAL_JUMP)  ; LAB_005e816d
    LEA EAX,[ESP + 0x4]                 ; 005e82b1
        ;   Label: LAB_005e82b1
    PUSH EAX                            ; 005e82b5
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 005e82b6
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    MOV ECX,0x4                         ; 005e82bb
    ADD ESP,0x4                         ; 005e82c0
    LEA EDX,[ESP + 0x4]                 ; 005e82c3
    MOV EAX,0x4479c000                  ; 005e82c7
    PUSH EDX                            ; 005e82cc
    MOV dword ptr [ESP + 0x38],ECX      ; 005e82cd
    MOV dword ptr [ESP + 0xc],EAX       ; 005e82d1
    PUSH ESI                            ; 005e82d5
    MOV EAX,dword ptr [ESI + 0x154]     ; 005e82d6
    CALL dword ptr [EAX + 0x11c]        ; 005e82dc
    ADD ESP,0x8                         ; 005e82e2
    JMP 0x005e816d                      ; 005e82e5
        ;   XREF to: 005e816d (UNCONDITIONAL_JUMP)  ; LAB_005e816d
    MOV ECX,dword ptr [EBX + 0x106c]    ; 005e82ea
        ;   Label: LAB_005e82ea
    TEST ECX,ECX                        ; 005e82f0
    JZ 0x005e8351                       ; 005e82f2
        ;   XREF to: 005e8351 (CONDITIONAL_JUMP)  ; LAB_005e8351
    MOV ECX,dword ptr [EBX + 0x1058]    ; 005e82f4
        ;   Label: LAB_005e82f4
    PUSH ECX                            ; 005e82fa
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 005e82fb
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 005e8300
    TEST EAX,EAX                        ; 005e8303
    JNZ 0x005e831b                      ; 005e8305
        ;   XREF to: 005e831b (CONDITIONAL_JUMP)  ; LAB_005e831b
    PUSH 0x656eb1                       ; 005e8307 | = "ext-modelt-fast_??.wav"
    PUSH EBX                            ; 005e830c
    CALL core_vehicle.cpp_CVehicle_FUN_005e8b50 ; 005e830d
        ;   XREF to: 005e8b50 (UNCONDITIONAL_CALL)  ; uint core_vehicle.cpp_CVehicle_FUN_005e8b50(CVehicle * this_ptr)
    ADD ESP,0x8                         ; 005e8312
    MOV dword ptr [EBX + 0x1058],EAX    ; 005e8315
    MOV ESI,dword ptr [EBX + 0x1058]    ; 005e831b
        ;   Label: LAB_005e831b
    PUSH 0x3f800000                     ; 005e8321
    PUSH ESI                            ; 005e8326
    CALL sound_sndmain.cpp_setSfxBaseFrequency_FUN_005a9b40 ; 005e8327
        ;   XREF to: 005a9b40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSfxBaseFrequency_FUN_005a9b40(uint sfx_handle, float base_frequency)
    FLD float ptr [EBX + 0x8d0]         ; 005e832c
    FABS                                ; 005e8332
    ADD ESP,0x8                         ; 005e8334
    FCOMP double ptr [0x00656eee]       ; 005e8337 | DOUBLE_00656eee
    FNSTSW AX                           ; 005e833d
    SAHF                                ; 005e833f
    JA 0x005e869b                       ; 005e8340
        ;   XREF to: 005e869b (CONDITIONAL_JUMP)  ; LAB_005e869b
    MOV ESP,EBP                         ; 005e8346
        ;   Label: LAB_005e8346
    POP EBP                             ; 005e8348
    POP EDI                             ; 005e8349
    POP ESI                             ; 005e834a
    POP EBX                             ; 005e834b
    LEA EAX,[EAX]                       ; 005e834c
    RET                                 ; 005e8350
    MOV EAX,[0x02db87d0]                ; 005e8351 | g_LocalHeroIndex
        ;   Label: LAB_005e8351
    LEA EDX,[EBX + 0x20]                ; 005e8356
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 005e8359 | g_HeroActors
    FLD float ptr [EDX]                 ; 005e8360
    FSUB float ptr [EAX + 0x20]         ; 005e8362
    FSTP float ptr [ESP + 0xc8]         ; 005e8365
    FLD float ptr [EDX + 0x4]           ; 005e836c
    FSUB float ptr [EAX + 0x24]         ; 005e836f
    FST float ptr [ESP + 0xcc]          ; 005e8372
    FMUL float ptr [ESP + 0xcc]         ; 005e8379
    FLD float ptr [ESP + 0xc8]          ; 005e8380
    FMUL ST0                            ; 005e8387
    FLD float ptr [EDX + 0x8]           ; 005e8389
    FSUB float ptr [EAX + 0x28]         ; 005e838c
    FXCH                                ; 005e838f
    FADDP ST2,ST0                       ; 005e8391
    FST float ptr [ESP + 0xd0]          ; 005e8393
    FMUL float ptr [ESP + 0xd0]         ; 005e839a
    FADDP                               ; 005e83a1
    FSQRT                               ; 005e83a3
    FCOMP double ptr [0x00656ee6]       ; 005e83a5 | DOUBLE_00656ee6
    FNSTSW AX                           ; 005e83ab
    SAHF                                ; 005e83ad
    JBE 0x005e82f4                      ; 005e83ae
        ;   XREF to: 005e82f4 (CONDITIONAL_JUMP)  ; LAB_005e82f4
    CMP dword ptr [ESI + 0x14d154],0x672 ; 005e83b4 | g_CDemonSetInstance.actor_count
    JGE 0x005e82f4                      ; 005e83be
        ;   XREF to: 005e82f4 (CONDITIONAL_JUMP)  ; LAB_005e82f4
    MOV dword ptr [ESP + 0xe8],ECX      ; 005e83c4
    MOV dword ptr [ESP + 0xec],ECX      ; 005e83cb
    XOR EDI,EDI                         ; 005e83d2
    XOR ESI,ESI                         ; 005e83d4
    MOV EAX,[0x006810c8]                ; 005e83d6 | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_005e83d6
    CMP EDI,dword ptr [EAX + 0x150fdc]  ; 005e83db | g_CDemonSetInstance.enemy_count
    JL 0x005e85a9                       ; 005e83e1
        ;   XREF to: 005e85a9 (CONDITIONAL_JUMP)  ; LAB_005e85a9
    CMP dword ptr [ESP + 0xec],0x0      ; 005e83e7
    JNZ 0x005e8604                      ; 005e83ef
        ;   XREF to: 005e8604 (CONDITIONAL_JUMP)  ; LAB_005e8604
    CMP dword ptr [ESP + 0xec],0x0      ; 005e83f5
        ;   Label: LAB_005e83f5
    JNZ 0x005e8634                      ; 005e83fd
        ;   XREF to: 005e8634 (CONDITIONAL_JUMP)  ; LAB_005e8634
    MOV ECX,dword ptr [EBX + 0x1070]    ; 005e8403
    TEST ECX,ECX                        ; 005e8409
    JNZ 0x005e8617                      ; 005e840b
        ;   XREF to: 005e8617 (CONDITIONAL_JUMP)  ; LAB_005e8617
    PUSH 0x15d                          ; 005e8411
        ;   Label: LAB_005e8411
    PUSH 0x656e38                       ; 005e8416 | = "..\\core\\vehicle.cpp"
    PUSH 0xbf94                         ; 005e841b
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 005e8420
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 005e8425
    TEST EAX,EAX                        ; 005e8428
    JZ 0x005e8435                       ; 005e842a
        ;   XREF to: 005e8435 (CONDITIONAL_JUMP)  ; LAB_005e8435
    PUSH EAX                            ; 005e842c
    CALL core_mobster.cpp_CMobster_ctor_FUN_00525200 ; 005e842d
        ;   XREF to: 00525200 (UNCONDITIONAL_CALL)  ; CMobster * core_mobster.cpp_CMobster_ctor_FUN_00525200(CMobster * this_ptr)
    ADD ESP,0x4                         ; 005e8432
    PUSH 0x15e                          ; 005e8435
        ;   Label: LAB_005e8435
    PUSH 0x656e4c                       ; 005e843a | = "..\\core\\vehicle.cpp"
    PUSH 0x584                          ; 005e843f
    MOV ESI,EAX                         ; 005e8444
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 005e8446
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 005e844b
    TEST EAX,EAX                        ; 005e844e
    JZ 0x005e845b                       ; 005e8450
        ;   XREF to: 005e845b (CONDITIONAL_JUMP)  ; LAB_005e845b
    PUSH EAX                            ; 005e8452
    CALL core_tommygun.cpp_CTommyGun_ctor_FUN_005dda90 ; 005e8453
        ;   XREF to: 005dda90 (UNCONDITIONAL_CALL)  ; CTommyGun * core_tommygun.cpp_CTommyGun_ctor_FUN_005dda90(CTommyGun * this_ptr)
    ADD ESP,0x4                         ; 005e8458
    MOV EDI,EAX                         ; 005e845b
        ;   Label: LAB_005e845b
    TEST ESI,ESI                        ; 005e845d
    JNZ 0x005e866f                      ; 005e845f
        ;   XREF to: 005e866f (CONDITIONAL_JUMP)  ; LAB_005e866f
    MOV EAX,0x656e60                    ; 005e8465 | = "..\\core\\vehicle.cpp"
        ;   Label: LAB_005e8465
    MOV EDX,0x161                       ; 005e846a
    PUSH 0x656e74                       ; 005e846f | = "CMobster::process - Out of memory!"
    MOV [0x02f0ca48],EAX                ; 005e8474 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 005e8479 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005e847f
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005e8484
    PUSH 0x3f000000                     ; 005e8487
        ;   Label: LAB_005e8487
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 005e848c
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    MOV EDX,EAX                         ; 005e8491
    ADD ESP,0x4                         ; 005e8493
    LEA EAX,[ESI + 0x158]               ; 005e8496
    TEST EDX,EDX                        ; 005e849c
    JZ 0x005e867c                       ; 005e849e
        ;   XREF to: 005e867c (CONDITIONAL_JUMP)  ; LAB_005e867c
    PUSH 0x656e97                       ; 005e84a4 | = "mobster3.dfm"
    PUSH EAX                            ; 005e84a9
        ;   Label: LAB_005e84a9
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 005e84aa
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 005e84af
    MOV ECX,dword ptr [ESP + 0xec]      ; 005e84b2
    MOV dword ptr [ESI + 0xbee0],EBX    ; 005e84b9
    TEST ECX,ECX                        ; 005e84bf
    JNZ 0x005e8686                      ; 005e84c1
        ;   XREF to: 005e8686 (CONDITIONAL_JUMP)  ; LAB_005e8686
    MOV dword ptr [ESI + 0xbee4],ECX    ; 005e84c7
    MOV dword ptr [EBX + 0x1070],ESI    ; 005e84cd
    PUSH ESI                            ; 005e84d3
        ;   Label: LAB_005e84d3
    MOV EAX,[0x0067d550]                ; 005e84d4 | g_CDemonMissionInstance | g_CDemonMissionPtr
    PUSH EAX                            ; 005e84d9 | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_00524700 ; 005e84da
        ;   XREF to: 00524700 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_00524700(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005e84df
    PUSH EDI                            ; 005e84e2
    MOV EDX,dword ptr [0x0067d550]      ; 005e84e3 | g_CDemonMissionInstance | g_CDemonMissionPtr
    PUSH EDX                            ; 005e84e9 | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_00524700 ; 005e84ea
        ;   XREF to: 00524700 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_00524700(CDemonMission * this_ptr, CDemonActor * actor)
    LEA EAX,[EBX + 0x20]                ; 005e84ef
    LEA EDX,[ESI + 0x20]                ; 005e84f2
    MOV ECX,dword ptr [EAX]             ; 005e84f5
    MOV dword ptr [EDX],ECX             ; 005e84f7
    MOV ECX,dword ptr [EAX + 0x4]       ; 005e84f9
    MOV dword ptr [EDX + 0x4],ECX       ; 005e84fc
    MOV ECX,dword ptr [EAX + 0x8]       ; 005e84ff
    MOV dword ptr [EDX + 0x8],ECX       ; 005e8502
    MOV EAX,dword ptr [EAX + 0xc]       ; 005e8505
    MOV dword ptr [EDX + 0xc],EAX       ; 005e8508
    LEA EAX,[ESI + 0x30]                ; 005e850b
    LEA EDX,[EBX + 0x30]                ; 005e850e
    ADD ESP,0x8                         ; 005e8511
    CMP EAX,EDX                         ; 005e8514
    JZ 0x005e8528                       ; 005e8516
        ;   XREF to: 005e8528 (CONDITIONAL_JUMP)  ; LAB_005e8528
    MOV ECX,dword ptr [EDX]             ; 005e8518
    MOV dword ptr [EAX],ECX             ; 005e851a
    MOV ECX,dword ptr [EDX + 0x4]       ; 005e851c
    MOV dword ptr [EAX + 0x4],ECX       ; 005e851f
    MOV ECX,dword ptr [EDX + 0x8]       ; 005e8522
    MOV dword ptr [EAX + 0x8],ECX       ; 005e8525
    LEA EAX,[EBX + 0x20]                ; 005e8528
        ;   Label: LAB_005e8528
    LEA EDX,[EDI + 0x20]                ; 005e852b
    MOV ECX,dword ptr [EAX]             ; 005e852e
    MOV dword ptr [EDX],ECX             ; 005e8530
    MOV ECX,dword ptr [EAX + 0x4]       ; 005e8532
    MOV dword ptr [EDX + 0x4],ECX       ; 005e8535
    MOV ECX,dword ptr [EAX + 0x8]       ; 005e8538
    MOV dword ptr [EDX + 0x8],ECX       ; 005e853b
    MOV EAX,dword ptr [EAX + 0xc]       ; 005e853e
    MOV dword ptr [EDX + 0xc],EAX       ; 005e8541
    LEA EAX,[EDI + 0x30]                ; 005e8544
    LEA EDX,[EBX + 0x30]                ; 005e8547
    CMP EAX,EDX                         ; 005e854a
    JZ 0x005e855e                       ; 005e854c
        ;   XREF to: 005e855e (CONDITIONAL_JUMP)  ; LAB_005e855e
    MOV ECX,dword ptr [EDX]             ; 005e854e
    MOV dword ptr [EAX],ECX             ; 005e8550
    MOV ECX,dword ptr [EDX + 0x4]       ; 005e8552
    MOV dword ptr [EAX + 0x4],ECX       ; 005e8555
    MOV ECX,dword ptr [EDX + 0x8]       ; 005e8558
    MOV dword ptr [EAX + 0x8],ECX       ; 005e855b
    PUSH ESI                            ; 005e855e
        ;   Label: LAB_005e855e
    MOV EAX,dword ptr [ESI + 0x154]     ; 005e855f
    CALL dword ptr [EAX]                ; 005e8565
    ADD ESP,0x4                         ; 005e8567
    MOV EAX,dword ptr [EDI + 0x154]     ; 005e856a
    PUSH EDI                            ; 005e8570
    CALL dword ptr [EAX]                ; 005e8571
    ADD ESP,0x4                         ; 005e8573
    PUSH 0x0                            ; 005e8576
    PUSH EDI                            ; 005e8578
    PUSH 0x1                            ; 005e8579
    PUSH ESI                            ; 005e857b
    CALL core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0 ; 005e857c
        ;   XREF to: 0042cdb0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0(CCharacter * this_ptr, int hand_index, CDemonActor * object, float blend_time)
    ADD ESP,0x10                        ; 005e8581
    PUSH ESI                            ; 005e8584
    MOV ECX,dword ptr [0x0067d550]      ; 005e8585 | g_CDemonMissionInstance | g_CDemonMissionPtr
    PUSH ECX                            ; 005e858b | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_00523b70 ; 005e858c
        ;   XREF to: 00523b70 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_00523b70(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005e8591
    PUSH EDI                            ; 005e8594
    MOV ESI,dword ptr [0x0067d550]      ; 005e8595 | g_CDemonMissionPtr
    PUSH ESI                            ; 005e859b | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_00523b70 ; 005e859c
        ;   XREF to: 00523b70 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_00523b70(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005e85a1
    JMP 0x005e82f4                      ; 005e85a4
        ;   XREF to: 005e82f4 (UNCONDITIONAL_JUMP)  ; LAB_005e82f4
    MOV EDX,dword ptr [0x02f37f30]      ; 005e85a9 | g_CMobsterClassInfo.name_hash
        ;   Label: LAB_005e85a9
    PUSH EDX                            ; 005e85af
    MOV ECX,dword ptr [ESI + EAX*0x1 + 0x150fe0] ; 005e85b0 | DAT_03265258
    PUSH ECX                            ; 005e85b7
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005e85b8
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005e85bd
    TEST EAX,EAX                        ; 005e85c0
    JZ 0x005e85fb                       ; 005e85c2
        ;   XREF to: 005e85fb (CONDITIONAL_JUMP)  ; LAB_005e85fb
    MOV EDX,dword ptr [EAX + 0xbee0]    ; 005e85c4
    CMP EBX,EDX                         ; 005e85ca
    JNZ 0x005e85fb                      ; 005e85cc
        ;   XREF to: 005e85fb (CONDITIONAL_JUMP)  ; LAB_005e85fb
    CMP dword ptr [EAX + 0xbee4],0x0    ; 005e85ce
    JNZ 0x005e85ea                      ; 005e85d5
        ;   XREF to: 005e85ea (CONDITIONAL_JUMP)  ; LAB_005e85ea
    MOV dword ptr [EDX + 0x1070],EAX    ; 005e85d7
    MOV dword ptr [ESP + 0xec],0x1      ; 005e85dd
    JMP 0x005e85fb                      ; 005e85e8
        ;   XREF to: 005e85fb (UNCONDITIONAL_JUMP)  ; LAB_005e85fb
    MOV dword ptr [EDX + 0x1074],EAX    ; 005e85ea
        ;   Label: LAB_005e85ea
    MOV dword ptr [ESP + 0xe8],0x1      ; 005e85f0
    INC EDI                             ; 005e85fb
        ;   Label: LAB_005e85fb
    ADD ESI,0x4                         ; 005e85fc
    JMP 0x005e83d6                      ; 005e85ff
        ;   XREF to: 005e83d6 (UNCONDITIONAL_JUMP)  ; LAB_005e83d6
    CMP dword ptr [ESP + 0xe8],0x0      ; 005e8604
        ;   Label: LAB_005e8604
    JZ 0x005e83f5                       ; 005e860c
        ;   XREF to: 005e83f5 (CONDITIONAL_JUMP)  ; LAB_005e83f5
    JMP 0x005e82f4                      ; 005e8612
        ;   XREF to: 005e82f4 (UNCONDITIONAL_JUMP)  ; LAB_005e82f4
    PUSH ECX                            ; 005e8617
        ;   Label: LAB_005e8617
    MOV EDX,dword ptr [ECX + 0x154]     ; 005e8618
    CALL dword ptr [EDX + 0x120]        ; 005e861e
    ADD ESP,0x4                         ; 005e8624
    TEST EAX,EAX                        ; 005e8627
    JZ 0x005e82f4                       ; 005e8629
        ;   XREF to: 005e82f4 (CONDITIONAL_JUMP)  ; LAB_005e82f4
    JMP 0x005e8411                      ; 005e862f
        ;   XREF to: 005e8411 (UNCONDITIONAL_JUMP)  ; LAB_005e8411
    CMP dword ptr [ESP + 0xe8],0x0      ; 005e8634
        ;   Label: LAB_005e8634
    JNZ 0x005e8411                      ; 005e863c
        ;   XREF to: 005e8411 (CONDITIONAL_JUMP)  ; LAB_005e8411
    MOV EDX,dword ptr [EBX + 0x1074]    ; 005e8642
    TEST EDX,EDX                        ; 005e8648
    JZ 0x005e8411                       ; 005e864a
        ;   XREF to: 005e8411 (CONDITIONAL_JUMP)  ; LAB_005e8411
    MOV EAX,EDX                         ; 005e8650
    PUSH EAX                            ; 005e8652
    MOV EDX,dword ptr [EDX + 0x154]     ; 005e8653
    CALL dword ptr [EDX + 0x120]        ; 005e8659
    ADD ESP,0x4                         ; 005e865f
    TEST EAX,EAX                        ; 005e8662
    JZ 0x005e82f4                       ; 005e8664
        ;   XREF to: 005e82f4 (CONDITIONAL_JUMP)  ; LAB_005e82f4
    JMP 0x005e8411                      ; 005e866a
        ;   XREF to: 005e8411 (UNCONDITIONAL_JUMP)  ; LAB_005e8411
    TEST EAX,EAX                        ; 005e866f
        ;   Label: LAB_005e866f
    JZ 0x005e8465                       ; 005e8671
        ;   XREF to: 005e8465 (CONDITIONAL_JUMP)  ; LAB_005e8465
    JMP 0x005e8487                      ; 005e8677
        ;   XREF to: 005e8487 (UNCONDITIONAL_JUMP)  ; LAB_005e8487
    PUSH 0x656ea4                       ; 005e867c | = "mobster4.dfm"
        ;   Label: LAB_005e867c
    JMP 0x005e84a9                      ; 005e8681
        ;   XREF to: 005e84a9 (UNCONDITIONAL_JUMP)  ; LAB_005e84a9
    MOV dword ptr [ESI + 0xbee4],0x1    ; 005e8686
        ;   Label: LAB_005e8686
    MOV dword ptr [EBX + 0x1074],ESI    ; 005e8690
    JMP 0x005e84d3                      ; 005e8696
        ;   XREF to: 005e84d3 (UNCONDITIONAL_JUMP)  ; LAB_005e84d3
    MOV EDI,dword ptr [EBX + 0x105c]    ; 005e869b
        ;   Label: LAB_005e869b
    PUSH EDI                            ; 005e86a1
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 005e86a2
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 005e86a7
    TEST EAX,EAX                        ; 005e86aa
    JNZ 0x005e8346                      ; 005e86ac
        ;   XREF to: 005e8346 (CONDITIONAL_JUMP)  ; LAB_005e8346
    PUSH 0x656ec8                       ; 005e86b2 | = "skid_??.wav"
    PUSH EBX                            ; 005e86b7
    CALL core_vehicle.cpp_CVehicle_FUN_005e8b50 ; 005e86b8
        ;   XREF to: 005e8b50 (UNCONDITIONAL_CALL)  ; uint core_vehicle.cpp_CVehicle_FUN_005e8b50(CVehicle * this_ptr)
    ADD ESP,0x8                         ; 005e86bd
    MOV dword ptr [EBX + 0x105c],EAX    ; 005e86c0
    MOV ESP,EBP                         ; 005e86c6
    POP EBP                             ; 005e86c8
    POP EDI                             ; 005e86c9
    POP ESI                             ; 005e86ca
    POP EBX                             ; 005e86cb
    RET                                 ; 005e86cc

