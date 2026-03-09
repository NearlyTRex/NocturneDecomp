; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_emitter_cpp_CEmitter_process_FUN_004a8070(CEmitter *this_ptr,float delta_time)
;
; Parameters:
; CEmitter *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined8       Stack[-0x108]:8  local_108
; undefined8       Stack[-0x100]:8  local_100
; undefined8       Stack[-0xf8]:8  local_f8
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined1       Stack[-0xb8]:1  local_b8
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined1       Stack[-0xa0]:1  local_a0
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   void* switchdataD_004a8044 = 004a8178
;   TerminatedCString s_none_0062409e
;   TerminatedCString s_mob_006240a3
;   float FLOAT_006240aa = 0.5
;   double DOUBLE_006240b2 = 0.5
;   double DOUBLE_006240ba = 2.5
;   CEventList* g_CEventListPtr = 02d05310
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CGame* g_CGamePtr = 02d81a9c
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CEventList g_CEventListInstance
;   CFireEffect g_CFireEffectInstance
;   CGame g_CGameInstance
;   undefined4 DAT_02d81ab8
;   CHero*[4] g_HeroActors
;   ... and 2 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_actor.cpp_getRandomInt_FUN_0040cc70
;   core_charactr.cpp_CCharacter_igniteBone_FUN_0042b5b0
;   core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360
;   core_dglobe.cpp_CDemonGlobe_setPosition_FUN_00471310
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   core_emitter.cpp_CEmitter_getRandomBoundingBoxPoint_FUN_004a8d20
;   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
;   core_fire.cpp_CFireEffect_createGunFlames_FUN_004c8ef0
;   core_fire.cpp_CFireEffect_createLightningBolt_FUN_004c8f50
;   core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_004c8fd0
;   core_fire.cpp_CFireEffect_createPopcorn_FUN_004c9240
;   core_fire.cpp_CFireEffect_createRock_FUN_004c7e60
;   ... and 9 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a8070
        ;   Label: core_emitter.cpp_CEmitter_process_FUN_004a8070
    PUSH ESI                            ; 004a8071
    PUSH EDI                            ; 004a8072
    PUSH EBP                            ; 004a8073
    MOV EBP,ESP                         ; 004a8074
    SUB ESP,0xd8                        ; 004a8076
    AND ESP,0xfffffff8                  ; 004a807c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004a807f
    PUSH 0x62409e                       ; 004a8082 | = "none"
    LEA EDI,[EBX + 0x16c]               ; 004a8087
    PUSH EDI                            ; 004a808d
    MOV ESI,dword ptr [EBX + 0x48c]     ; 004a808e
    CALL crt_string.c__strcmp_FUN_005fef20 ; 004a8094
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a8099
    TEST EAX,EAX                        ; 004a809c
    JNZ 0x004a826a                      ; 004a809e
        ;   XREF to: 004a826a (CONDITIONAL_JUMP)  ; LAB_004a826a
    LEA EAX,[EBX + 0x1d0]               ; 004a80a4
        ;   Label: LAB_004a80a4
    PUSH EAX                            ; 004a80aa
    MOV EDI,dword ptr [0x006793d0]      ; 004a80ab | g_CEventListPtr
    PUSH EDI                            ; 004a80b1 | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 004a80b2
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004a80b7
    TEST EAX,EAX                        ; 004a80ba
    JZ 0x004a80c8                       ; 004a80bc
        ;   XREF to: 004a80c8 (CONDITIONAL_JUMP)  ; LAB_004a80c8
    MOV dword ptr [EBX + 0x168],0x0     ; 004a80be
    CMP dword ptr [EBX + 0x158],0xa     ; 004a80c8
        ;   Label: LAB_004a80c8
    JNZ 0x004a811d                      ; 004a80cf
        ;   XREF to: 004a811d (CONDITIONAL_JUMP)  ; LAB_004a811d
    PUSH 0x40490000                     ; 004a80d1
    XOR ESI,ESI                         ; 004a80d6
    PUSH ESI                            ; 004a80d8
    SUB ESP,0x8                         ; 004a80d9
    FLD float ptr [EBX + 0x28]          ; 004a80dc
    FSTP double ptr [ESP]               ; 004a80df
    SUB ESP,0x8                         ; 004a80e2
    FLD float ptr [EBX + 0x24]          ; 004a80e5
    FSTP double ptr [ESP]               ; 004a80e8
    SUB ESP,0x8                         ; 004a80eb
    FLD float ptr [EBX + 0x20]          ; 004a80ee
    FSTP double ptr [ESP]               ; 004a80f1
    CALL sound_sndmain.cpp_isWithinListenerRadius_FUN_005aa290 ; 004a80f4
        ;   XREF to: 005aa290 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isWithinListenerRadius_FUN_005aa290(double pos_x, double pos_y, double pos_z, double radius)
    ADD ESP,0x20                        ; 004a80f9
    TEST EAX,EAX                        ; 004a80fc
    JZ 0x004a8115                       ; 004a80fe
        ;   XREF to: 004a8115 (CONDITIONAL_JUMP)  ; LAB_004a8115
    MOV EAX,[0x0067b654]                ; 004a8100 | g_CGamePtr | g_CGameInstance
    MOV EDX,dword ptr [EAX + 0x1c]      ; 004a8105 | DAT_02d81ab8
    MOV ESI,0x1                         ; 004a8108
    TEST EDX,EDX                        ; 004a810d
    JZ 0x004a82b2                       ; 004a810f
        ;   XREF to: 004a82b2 (CONDITIONAL_JUMP)  ; LAB_004a82b2
    TEST ESI,ESI                        ; 004a8115
        ;   Label: LAB_004a8115
    JZ 0x004a82d2                       ; 004a8117
        ;   XREF to: 004a82d2 (CONDITIONAL_JUMP)  ; LAB_004a82d2
    CMP dword ptr [EBX + 0x168],0x0     ; 004a811d
        ;   Label: LAB_004a811d
    JZ 0x004a87a5                       ; 004a8124
        ;   XREF to: 004a87a5 (CONDITIONAL_JUMP)  ; LAB_004a87a5
    FLD float ptr [EBX + 0x440]         ; 004a812a
    FADD float ptr [EBP + 0x18]         ; 004a8130
    FST float ptr [EBX + 0x440]         ; 004a8133
    FCOMP float ptr [EBX + 0x444]       ; 004a8139
    FNSTSW AX                           ; 004a813f
    SAHF                                ; 004a8141
    JC 0x004a8221                       ; 004a8142
        ;   XREF to: 004a8221 (CONDITIONAL_JUMP)  ; LAB_004a8221
    FLD float ptr [EBX + 0x444]         ; 004a8148
    FSUBR float ptr [EBX + 0x440]       ; 004a814e
    FSTP float ptr [EBX + 0x440]        ; 004a8154
    TEST ESI,ESI                        ; 004a815a
    JZ 0x004a8221                       ; 004a815c
        ;   XREF to: 004a8221 (CONDITIONAL_JUMP)  ; LAB_004a8221
    MOV EAX,dword ptr [EBX + 0x158]     ; 004a8162
    CMP EAX,0xa                         ; 004a8168
    JA 0x004a8201                       ; 004a816b
        ;   XREF to: 004a8201 (CONDITIONAL_JUMP)  ; caseD_a
    JMP dword ptr [EAX*0x4 + 0x4a8044]  ; 004a8171 | caseD_0 | caseD_1 | caseD_a
        ;   Label: switchD
    PUSH 0xffff                         ; 004a8178
        ;   Label: caseD_0
    PUSH 0x0                            ; 004a817d
    PUSH 0x10000                        ; 004a817f
    PUSH 0x4000                         ; 004a8184
    PUSH 0x0                            ; 004a8189
    LEA ESI,[EBX + 0x20]                ; 004a818b
    PUSH ESI                            ; 004a818e
    MOV EAX,[0x0067a3d0]                ; 004a818f | g_CFireEffectPtr | g_CFireEffectInstance
    PUSH EAX                            ; 004a8194 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_004c79d0 ; 004a8195
        ;   XREF to: 004c79d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_004c79d0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 004a819a
    PUSH ESI                            ; 004a819d
    LEA ESI,[EBX + 0x44c]               ; 004a819e
    PUSH ESI                            ; 004a81a4
    CALL core_dglobe.cpp_CDemonGlobe_setPosition_FUN_00471310 ; 004a81a5
        ;   XREF to: 00471310 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_setPosition_FUN_00471310(CDemonGlobe * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 004a81aa
    PUSH 0x7fff                         ; 004a81ad
    PUSH 0x0                            ; 004a81b2
    CALL core_actor.cpp_getRandomInt_FUN_0040cc70 ; 004a81b4
        ;   XREF to: 0040cc70 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)
    MOV EDX,EAX                         ; 004a81b9
    SAR EDX,0x1f                        ; 004a81bb
    MOV dword ptr [ESI + 0x3c],EAX      ; 004a81be
    SHL EDX,0x8                         ; 004a81c1
    SBB EAX,EDX                         ; 004a81c4
    SAR EAX,0x8                         ; 004a81c6
    MOV EDX,EAX                         ; 004a81c9
    SAR EDX,0x1f                        ; 004a81cb
    SHL EDX,0x2                         ; 004a81ce
    SBB EAX,EDX                         ; 004a81d1
    SAR EAX,0x2                         ; 004a81d3
    ADD ESP,0x8                         ; 004a81d6
    PUSH 0x41200000                     ; 004a81d9
    PUSH ESI                            ; 004a81de
    MOV byte ptr [ESI + 0x1c],AL        ; 004a81df
    CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360 ; 004a81e2
        ;   XREF to: 00471360 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360(CDemonGlobe * this_ptr, float radius)
        ;   Label: LAB_004a81e2
    ADD ESP,0x8                         ; 004a81e7
    PUSH ESI                            ; 004a81ea
    MOV EDX,dword ptr [0x006810c8]      ; 004a81eb | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH EDX                            ; 004a81f1 | g_CDemonSetInstance
    MOV dword ptr [ESI + 0x20],0x0      ; 004a81f2
    CALL core_set.cpp_CDemonSet_addCoronaGlobe_FUN_0056d110 ; 004a81f9
        ;   XREF to: 0056d110 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addCoronaGlobe_FUN_0056d110(CDemonSet * this_ptr, CDemonGlobe * globe)
    ADD ESP,0x8                         ; 004a81fe
    CMP byte ptr [EBX + 0x3d4],0x0      ; 004a8201
        ;   Label: caseD_2
    JZ 0x004a8221                       ; 004a8208
        ;   XREF to: 004a8221 (CONDITIONAL_JUMP)  ; LAB_004a8221
    MOV ECX,dword ptr [EBX + 0x438]     ; 004a820a
    PUSH ECX                            ; 004a8210
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 004a8211
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 004a8216
    TEST EAX,EAX                        ; 004a8219
    JZ 0x004a8770                       ; 004a821b
        ;   XREF to: 004a8770 (CONDITIONAL_JUMP)  ; LAB_004a8770
    MOV EAX,dword ptr [EBX + 0x168]     ; 004a8221
        ;   Label: LAB_004a8221
    MOV dword ptr [EBX + 0x490],EAX     ; 004a8227
    CMP dword ptr [EBX + 0x3c8],0x0     ; 004a822d
    JZ 0x004a880f                       ; 004a8234
        ;   XREF to: 004a880f (CONDITIONAL_JUMP)  ; LAB_004a880f
    CMP dword ptr [EBX + 0x168],0x0     ; 004a823a
    JNZ 0x004a87d6                      ; 004a8241
        ;   XREF to: 004a87d6 (CONDITIONAL_JUMP)  ; LAB_004a87d6
    FLD float ptr [EBX + 0x448]         ; 004a8247
    FSUB float ptr [EBP + 0x18]         ; 004a824d
    FST float ptr [EBX + 0x448]         ; 004a8250
    FLDZ                                ; 004a8256
    FCOMPP                              ; 004a8258
    FNSTSW AX                           ; 004a825a
    SAHF                                ; 004a825c
    JNC 0x004a87b9                      ; 004a825d
        ;   XREF to: 004a87b9 (CONDITIONAL_JUMP)  ; LAB_004a87b9
    MOV ESP,EBP                         ; 004a8263
        ;   Label: LAB_004a8263
    POP EBP                             ; 004a8265
    POP EDI                             ; 004a8266
    POP ESI                             ; 004a8267
    POP EBX                             ; 004a8268
    RET                                 ; 004a8269
    PUSH EDI                            ; 004a826a
        ;   Label: LAB_004a826a
    MOV EDX,dword ptr [0x006793d0]      ; 004a826b | g_CEventListPtr
    PUSH EDX                            ; 004a8271 | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 004a8272
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004a8277
    TEST EAX,EAX                        ; 004a827a
    JZ 0x004a80a4                       ; 004a827c
        ;   XREF to: 004a80a4 (CONDITIONAL_JUMP)  ; LAB_004a80a4
    FLD float ptr [EBX + 0x234]         ; 004a8282
    MOV ESI,0x1                         ; 004a8288
    PUSH EBX                            ; 004a828d
    MOV ECX,dword ptr [0x006810c8]      ; 004a828e | g_CDemonSetPtr | g_CDemonSetInstance
    MOV dword ptr [EBX + 0x168],0x1     ; 004a8294
    PUSH ECX                            ; 004a829e | g_CDemonSetInstance
    FSTP float ptr [EBX + 0x448]        ; 004a829f
    CALL core_set.cpp_CDemonSet_snapshotActorTransformState_FUN_0056ade0 ; 004a82a5
        ;   XREF to: 0056ade0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_snapshotActorTransformState_FUN_0056ade0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004a82aa
    JMP 0x004a80a4                      ; 004a82ad
        ;   XREF to: 004a80a4 (UNCONDITIONAL_JUMP)  ; LAB_004a80a4
    PUSH 0x3                            ; 004a82b2
        ;   Label: LAB_004a82b2
    PUSH 0x6240a3                       ; 004a82b4 | = "mob"
    LEA EAX,[EBX + 0x3d4]               ; 004a82b9
    PUSH EAX                            ; 004a82bf
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 004a82c0
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004a82c5
    TEST EAX,EAX                        ; 004a82c8
    JNZ 0x004a8115                      ; 004a82ca
        ;   XREF to: 004a8115 (CONDITIONAL_JUMP)  ; LAB_004a8115
    XOR ESI,ESI                         ; 004a82d0
    MOV ECX,dword ptr [EBX + 0x438]     ; 004a82d2
        ;   Label: LAB_004a82d2
    PUSH ECX                            ; 004a82d8
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 004a82d9
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 004a82de
    JMP 0x004a811d                      ; 004a82e1
        ;   XREF to: 004a811d (UNCONDITIONAL_JUMP)  ; LAB_004a811d
    LEA ESI,[EBX + 0x20]                ; 004a82e6
        ;   Label: caseD_1
    XOR EDI,EDI                         ; 004a82e9
    LEA EAX,[ESP + 0x78]                ; 004a82eb
        ;   Label: LAB_004a82eb
    CMP EAX,ESI                         ; 004a82ef
    JZ 0x004a830a                       ; 004a82f1
        ;   XREF to: 004a830a (CONDITIONAL_JUMP)  ; LAB_004a830a
    MOV EAX,dword ptr [ESI]             ; 004a82f3
    MOV dword ptr [ESP + 0x78],EAX      ; 004a82f5
    MOV EAX,dword ptr [ESI + 0x4]       ; 004a82f9
    MOV dword ptr [ESP + 0x7c],EAX      ; 004a82fc
    MOV EAX,dword ptr [ESI + 0x8]       ; 004a8300
    MOV dword ptr [ESP + 0x80],EAX      ; 004a8303
    PUSH 0x3f000000                     ; 004a830a
        ;   Label: LAB_004a830a
    PUSH 0xbf000000                     ; 004a830f
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004a8314
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0xdc],EAX      ; 004a8319
    FLD float ptr [ESP + 0xdc]          ; 004a8320
    ADD ESP,0x8                         ; 004a8327
    FMUL float ptr [EBX + 0x15c]        ; 004a832a
    PUSH 0x3f000000                     ; 004a8330
    FADD float ptr [ESP + 0x7c]         ; 004a8335
    PUSH 0xbf000000                     ; 004a8339
    FSTP float ptr [ESP + 0x80]         ; 004a833e
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004a8345
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0xdc],EAX      ; 004a834a
    FLD float ptr [ESP + 0xdc]          ; 004a8351
    FMUL float ptr [EBX + 0x164]        ; 004a8358
    ADD ESP,0x8                         ; 004a835e
    XOR ECX,ECX                         ; 004a8361
    FADD float ptr [ESP + 0x80]         ; 004a8363
    MOV dword ptr [ESP + 0x18],ECX      ; 004a836a
    FSTP float ptr [ESP + 0x80]         ; 004a836e
    MOV EAX,dword ptr [EBX + 0x160]     ; 004a8375
    PUSH 0xffff                         ; 004a837b
    MOV dword ptr [ESP + 0x20],EAX      ; 004a8380
    LEA EAX,[ESP + 0x1c]                ; 004a8384
    PUSH EAX                            ; 004a8388
    LEA EAX,[ESP + 0x80]                ; 004a8389
    PUSH 0x3f800000                     ; 004a8390
    PUSH EAX                            ; 004a8395
    MOV EDX,dword ptr [0x0067a3d0]      ; 004a8396 | g_CFireEffectPtr | g_CFireEffectInstance
    PUSH EDX                            ; 004a839c | g_CFireEffectInstance
    INC EDI                             ; 004a839d
    MOV dword ptr [ESP + 0x34],ECX      ; 004a839e
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20 ; 004a83a2
        ;   XREF to: 004c7b20 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD ESP,0x14                        ; 004a83a7
    CMP EDI,0x4                         ; 004a83aa
    JGE 0x004a8201                      ; 004a83ad
        ;   XREF to: 004a8201 (CONDITIONAL_JUMP)  ; caseD_a
    JMP 0x004a82eb                      ; 004a83b3
        ;   XREF to: 004a82eb (UNCONDITIONAL_JUMP)  ; LAB_004a82eb
    PUSH 0x3fc90fdb                     ; 004a83b8
        ;   Label: caseD_4
    PUSH 0x3f490fdb                     ; 004a83bd
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004a83c2
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0xdc],EAX      ; 004a83c7
    FLD float ptr [ESP + 0xdc]          ; 004a83ce
    ADD ESP,0x8                         ; 004a83d5
    PUSH 0x40c90fdb                     ; 004a83d8
    PUSH 0x0                            ; 004a83dd
    FSTP float ptr [ESP + 0xc8]         ; 004a83df
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004a83e6
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0xdc],EAX      ; 004a83eb
    FLD float ptr [ESP + 0xdc]          ; 004a83f2
    ADD ESP,0x8                         ; 004a83f9
    MOV EAX,dword ptr [EBX + 0x3c4]     ; 004a83fc
    FLD float ptr [ESP + 0xc0]          ; 004a8402
    MOV dword ptr [ESP + 0xbc],EAX      ; 004a8409
    FLD ST0                             ; 004a8410
    FCOS                                ; 004a8412
    FLD ST2                             ; 004a8414
    FCOS                                ; 004a8416
    FXCH ST2                            ; 004a8418
    FSIN                                ; 004a841a
    FXCH ST3                            ; 004a841c
    FSIN                                ; 004a841e
    FLD float ptr [ESP + 0xbc]          ; 004a8420
    FMULP ST3                           ; 004a8427
    FLD float ptr [ESP + 0xbc]          ; 004a8429
    FMULP ST4                           ; 004a8430
    FMUL float ptr [ESP + 0xbc]         ; 004a8432
    FXCH ST2                            ; 004a8439
    FMUL ST1                            ; 004a843b
    LEA EAX,[EBX + 0x248]               ; 004a843d
    FXCH ST2                            ; 004a8443
    FMULP                               ; 004a8445
    PUSH EAX                            ; 004a8447
    FXCH ST2                            ; 004a8448
    FSTP float ptr [ESP + 0x5c]         ; 004a844a
    FSTP float ptr [ESP + 0x58]         ; 004a844e
    FSTP float ptr [ESP + 0x60]         ; 004a8452
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 004a8456
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004a845b
    PUSH EAX                            ; 004a845e
    LEA EAX,[ESP + 0x58]                ; 004a845f
    PUSH EAX                            ; 004a8463
    LEA EAX,[EBX + 0x20]                ; 004a8464
    PUSH EAX                            ; 004a8467
    MOV EDI,dword ptr [0x0067a3d0]      ; 004a8468 | g_CFireEffectPtr
    PUSH EDI                            ; 004a846e | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_createRock_FUN_004c7e60 ; 004a846f
        ;   XREF to: 004c7e60 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createRock_FUN_004c7e60(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, CKeyFramedModel * model_ptr)
    ADD ESP,0x10                        ; 004a8474
    JMP 0x004a8201                      ; 004a8477
        ;   XREF to: 004a8201 (UNCONDITIONAL_JUMP)  ; caseD_a
    LEA EAX,[ESP + 0x30]                ; 004a847c
        ;   Label: caseD_5
    PUSH EAX                            ; 004a8480
    PUSH EBX                            ; 004a8481
    CALL core_emitter.cpp_CEmitter_getRandomBoundingBoxPoint_FUN_004a8d20 ; 004a8482
        ;   XREF to: 004a8d20 (UNCONDITIONAL_CALL)  ; CVector3f * core_emitter.cpp_CEmitter_getRandomBoundingBoxPoint_FUN_004a8d20(CEmitter * this_ptr, CVector3f * out_point)
    ADD ESP,0x8                         ; 004a8487
    PUSH 0x1                            ; 004a848a
    PUSH 0x2                            ; 004a848c
    LEA EAX,[EBX + 0x30]                ; 004a848e
    PUSH EAX                            ; 004a8491
    LEA EAX,[ESP + 0x3c]                ; 004a8492
    PUSH EAX                            ; 004a8496
    MOV ECX,dword ptr [0x0067a3d0]      ; 004a8497 | g_CFireEffectPtr | g_CFireEffectInstance
    PUSH ECX                            ; 004a849d | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_createGunFlames_FUN_004c8ef0 ; 004a849e
        ;   XREF to: 004c8ef0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createGunFlames_FUN_004c8ef0(CFireEffect * this_ptr, CVector3f * position, CVector3f * euler_angles, int flame_count, ...)
    MOV ESI,dword ptr [0x02db87d0]      ; 004a84a3 | g_LocalHeroIndex
    MOV ESI,dword ptr [ESI*0x4 + 0x2db87c0] ; 004a84a9 | g_HeroActors
    LEA EAX,[ESI + 0x20]                ; 004a84b0
    LEA EDX,[EBX + 0x20]                ; 004a84b3
    FLD float ptr [EAX]                 ; 004a84b6
    FSUB float ptr [EDX]                ; 004a84b8
    ADD ESP,0x14                        ; 004a84ba
    FSTP float ptr [ESP + 0x3c]         ; 004a84bd
    FLD float ptr [EAX + 0x4]           ; 004a84c1
    FSUB float ptr [EDX + 0x4]          ; 004a84c4
    FST float ptr [ESP + 0x40]          ; 004a84c7
    FMUL float ptr [ESP + 0x40]         ; 004a84cb
    FLD float ptr [ESP + 0x3c]          ; 004a84cf
    FMUL ST0                            ; 004a84d3
    FLD float ptr [EAX + 0x8]           ; 004a84d5
    FSUB float ptr [EDX + 0x8]          ; 004a84d8
    FXCH                                ; 004a84db
    FADDP ST2,ST0                       ; 004a84dd
    FST float ptr [ESP + 0x44]          ; 004a84df
    FMUL float ptr [ESP + 0x44]         ; 004a84e3
    FADDP                               ; 004a84e7
    FSQRT                               ; 004a84e9
    FCOMP double ptr [0x006240ba]       ; 004a84eb | DOUBLE_006240ba
    FNSTSW AX                           ; 004a84f1
    SAHF                                ; 004a84f3
    JNC 0x004a8201                      ; 004a84f4
        ;   XREF to: 004a8201 (CONDITIONAL_JUMP)  ; caseD_a
    PUSH EDX                            ; 004a84fa
    LEA EAX,[ESP + 0x4c]                ; 004a84fb
    PUSH EAX                            ; 004a84ff
    PUSH ESI                            ; 004a8500
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 004a8501
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 004a8506
    PUSH 0x1                            ; 004a8509
    PUSH 0x3f800000                     ; 004a850b
    PUSH 0x0                            ; 004a8510
    PUSH 0x0                            ; 004a8512
    LEA EAX,[ESP + 0x58]                ; 004a8514
    PUSH EAX                            ; 004a8518
    MOV EAX,[0x02db87d0]                ; 004a8519 | g_LocalHeroIndex
    MOV ESI,dword ptr [EAX*0x4 + 0x2db87c0] ; 004a851e | g_HeroActors
    PUSH ESI                            ; 004a8525
    CALL core_charactr.cpp_CCharacter_igniteBone_FUN_0042b5b0 ; 004a8526
        ;   XREF to: 0042b5b0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_igniteBone_FUN_0042b5b0(CCharacter * this_ptr, CVector3f * position, int fire_type, float spread_rate, ...)
    ADD ESP,0x18                        ; 004a852b
    JMP 0x004a8201                      ; 004a852e
        ;   XREF to: 004a8201 (UNCONDITIONAL_JUMP)  ; caseD_a
    PUSH 0x0                            ; 004a8533
        ;   Label: caseD_6
    LEA ESI,[EBX + 0x20]                ; 004a8535
    PUSH ESI                            ; 004a8538
    MOV ECX,dword ptr [0x0067a3d0]      ; 004a8539 | g_CFireEffectPtr | g_CFireEffectInstance
    PUSH ECX                            ; 004a853f | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_createPopcorn_FUN_004c9240 ; 004a8540
        ;   XREF to: 004c9240 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createPopcorn_FUN_004c9240(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity)
    ADD ESP,0xc                         ; 004a8545
    PUSH 0x0                            ; 004a8548
    PUSH ESI                            ; 004a854a
    MOV EDI,dword ptr [0x0067a3d0]      ; 004a854b | g_CFireEffectPtr
    PUSH EDI                            ; 004a8551 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_createPopcorn_FUN_004c9240 ; 004a8552
        ;   XREF to: 004c9240 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createPopcorn_FUN_004c9240(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity)
    ADD ESP,0xc                         ; 004a8557
    PUSH 0x0                            ; 004a855a
    PUSH ESI                            ; 004a855c
    MOV EAX,[0x0067a3d0]                ; 004a855d | g_CFireEffectPtr | g_CFireEffectInstance
    PUSH EAX                            ; 004a8562 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_createPopcorn_FUN_004c9240 ; 004a8563
        ;   XREF to: 004c9240 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createPopcorn_FUN_004c9240(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity)
    ADD ESP,0xc                         ; 004a8568
    PUSH 0x0                            ; 004a856b
    PUSH ESI                            ; 004a856d
    MOV EDX,dword ptr [0x0067a3d0]      ; 004a856e | g_CFireEffectPtr | g_CFireEffectInstance
    PUSH EDX                            ; 004a8574 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_createPopcorn_FUN_004c9240 ; 004a8575
        ;   XREF to: 004c9240 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createPopcorn_FUN_004c9240(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity)
    ADD ESP,0xc                         ; 004a857a
    JMP 0x004a8201                      ; 004a857d
        ;   XREF to: 004a8201 (UNCONDITIONAL_JUMP)  ; caseD_a
    FLD float ptr [EBX + 0x15c]         ; 004a8582
        ;   Label: caseD_7
    FMUL double ptr [0x006240b2]        ; 004a8588 | DOUBLE_006240b2
    SUB ESP,0x4                         ; 004a858e
    FSTP float ptr [ESP]                ; 004a8591
    PUSH 0x0                            ; 004a8594
    LEA ESI,[EBX + 0x20]                ; 004a8596
    PUSH dword ptr [EBX + 0x160]        ; 004a8599
    PUSH ESI                            ; 004a859f
    MOV EAX,[0x0067a3d0]                ; 004a85a0 | g_CFireEffectPtr | g_CFireEffectInstance
    PUSH EAX                            ; 004a85a5 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_createLightningBolt_FUN_004c8f50 ; 004a85a6
        ;   XREF to: 004c8f50 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLightningBolt_FUN_004c8f50(CFireEffect * this_ptr, CVector3f * start_position, float start_width, int enable_camera_shake, ...)
    LEA EAX,[ESP + 0xb0]                ; 004a85ab
    ADD ESP,0x14                        ; 004a85b2
    CMP EAX,ESI                         ; 004a85b5
    JZ 0x004a85d6                       ; 004a85b7
        ;   XREF to: 004a85d6 (CONDITIONAL_JUMP)  ; LAB_004a85d6
    MOV EAX,dword ptr [ESI]             ; 004a85b9
    MOV dword ptr [ESP + 0x9c],EAX      ; 004a85bb
    MOV EAX,dword ptr [ESI + 0x4]       ; 004a85c2
    MOV dword ptr [ESP + 0xa0],EAX      ; 004a85c5
    MOV EAX,dword ptr [ESI + 0x8]       ; 004a85cc
    MOV dword ptr [ESP + 0xa4],EAX      ; 004a85cf
    FLD float ptr [EBX + 0x160]         ; 004a85d6
        ;   Label: LAB_004a85d6
    FMUL double ptr [0x006240b2]        ; 004a85dc | DOUBLE_006240b2
    LEA EAX,[ESP + 0x9c]                ; 004a85e2
    LEA ESI,[EBX + 0x44c]               ; 004a85e9
    PUSH EAX                            ; 004a85ef
    FLD float ptr [ESP + 0xa4]          ; 004a85f0
    FXCH                                ; 004a85f7
    FADD ST0,ST1                        ; 004a85f9
    PUSH ESI                            ; 004a85fb
    FSTP ST1                            ; 004a85fc
    FSTP float ptr [ESP + 0xa8]         ; 004a85fe
    CALL core_dglobe.cpp_CDemonGlobe_setPosition_FUN_00471310 ; 004a8605
        ;   XREF to: 00471310 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_setPosition_FUN_00471310(CDemonGlobe * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 004a860a
    PUSH 0x7fff                         ; 004a860d
    PUSH 0x0                            ; 004a8612
    CALL core_actor.cpp_getRandomInt_FUN_0040cc70 ; 004a8614
        ;   XREF to: 0040cc70 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)
    MOV EDX,EAX                         ; 004a8619
    SAR EDX,0x1f                        ; 004a861b
    MOV dword ptr [ESI + 0x3c],EAX      ; 004a861e
    SHL EDX,0x8                         ; 004a8621
    SBB EAX,EDX                         ; 004a8624
    SAR EAX,0x8                         ; 004a8626
    MOV EDX,EAX                         ; 004a8629
    SAR EDX,0x1f                        ; 004a862b
    SHL EDX,0x2                         ; 004a862e
    SBB EAX,EDX                         ; 004a8631
    SAR EAX,0x2                         ; 004a8633
    ADD ESP,0x8                         ; 004a8636
    MOV byte ptr [ESI + 0x1c],AL        ; 004a8639
    PUSH dword ptr [EBX + 0x160]        ; 004a863c
    PUSH ESI                            ; 004a8642
    JMP 0x004a81e2                      ; 004a8643
        ;   XREF to: 004a81e2 (UNCONDITIONAL_JUMP)  ; LAB_004a81e2
    PUSH 0xffff                         ; 004a8648
        ;   Label: caseD_8
    PUSH 0x1                            ; 004a864d
    PUSH 0x10000                        ; 004a864f
    PUSH 0x4000                         ; 004a8654
    PUSH 0x0                            ; 004a8659
    LEA EAX,[EBX + 0x20]                ; 004a865b
    PUSH EAX                            ; 004a865e
    MOV EDI,dword ptr [0x0067a3d0]      ; 004a865f | g_CFireEffectPtr
    PUSH EDI                            ; 004a8665 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_004c79d0 ; 004a8666
        ;   XREF to: 004c79d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_004c79d0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 004a866b
    JMP 0x004a8201                      ; 004a866e
        ;   XREF to: 004a8201 (UNCONDITIONAL_JUMP)  ; caseD_a
    MOV EDX,dword ptr [EBX + 0x3d0]     ; 004a8673
        ;   Label: caseD_9
    TEST EDX,EDX                        ; 004a8679
    JZ 0x004a8201                       ; 004a867b
        ;   XREF to: 004a8201 (CONDITIONAL_JUMP)  ; caseD_a
    MOV EAX,EDX                         ; 004a8681
    MOV ESI,dword ptr [EDX + 0x154]     ; 004a8683
    MOV EDX,ESP                         ; 004a8689
    PUSH EDX                            ; 004a868b
    PUSH EAX                            ; 004a868c
    CALL dword ptr [ESI + 0x14]         ; 004a868d
    LEA EDX,[EAX + 0xc]                 ; 004a8690
    FLD float ptr [EAX]                 ; 004a8693
    FADD float ptr [EDX]                ; 004a8695
    ADD ESP,0x8                         ; 004a8697
    FST float ptr [ESP + 0x24]          ; 004a869a
    FLD float ptr [EAX + 0x4]           ; 004a869e
    FADD float ptr [EDX + 0x4]          ; 004a86a1
    FXCH                                ; 004a86a4
    FLD float ptr [0x006240aa]          ; 004a86a6 | FLOAT_006240aa
    FXCH                                ; 004a86ac
    FMUL ST1                            ; 004a86ae
    FXCH ST2                            ; 004a86b0
    FST float ptr [ESP + 0x28]          ; 004a86b2
    FLD float ptr [EAX + 0x8]           ; 004a86b6
    FADD float ptr [EDX + 0x8]          ; 004a86b9
    FXCH                                ; 004a86bc
    FMUL ST2                            ; 004a86be
    FXCH                                ; 004a86c0
    FST float ptr [ESP + 0x2c]          ; 004a86c2
    FMULP ST2                           ; 004a86c6
    LEA EAX,[ESP + 0x60]                ; 004a86c8
    FXCH ST2                            ; 004a86cc
    FSTP float ptr [ESP + 0x60]         ; 004a86ce
    PUSH EAX                            ; 004a86d2
    LEA EAX,[ESP + 0x88]                ; 004a86d3
    FXCH                                ; 004a86da
    FSTP float ptr [ESP + 0x68]         ; 004a86dc
    PUSH EAX                            ; 004a86e0
    FSTP float ptr [ESP + 0x70]         ; 004a86e1
    MOV ECX,dword ptr [EBX + 0x3d0]     ; 004a86e5
    PUSH ECX                            ; 004a86eb
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 004a86ec
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    MOV EDX,dword ptr [EBX + 0x3d0]     ; 004a86f1
    FLD float ptr [EDX + 0x20]          ; 004a86f7
    FADD float ptr [EAX]                ; 004a86fa
    ADD ESP,0xc                         ; 004a86fc
    FSTP float ptr [ESP + 0x6c]         ; 004a86ff
    FLD float ptr [EDX + 0x24]          ; 004a8703
    FADD float ptr [EAX + 0x4]          ; 004a8706
    FSTP float ptr [ESP + 0x70]         ; 004a8709
    FLD float ptr [EDX + 0x28]          ; 004a870d
    LEA EDX,[ESP + 0x90]                ; 004a8710
    FADD float ptr [EAX + 0x8]          ; 004a8717
    LEA EAX,[ESP + 0x6c]                ; 004a871a
    FSTP float ptr [ESP + 0x74]         ; 004a871e
    CMP EDX,EAX                         ; 004a8722
    JZ 0x004a8747                       ; 004a8724
        ;   XREF to: 004a8747 (CONDITIONAL_JUMP)  ; LAB_004a8747
    MOV EAX,dword ptr [ESP + 0x6c]      ; 004a8726
    MOV dword ptr [ESP + 0x90],EAX      ; 004a872a
    MOV EAX,dword ptr [ESP + 0x70]      ; 004a8731
    MOV dword ptr [ESP + 0x94],EAX      ; 004a8735
    MOV EAX,dword ptr [ESP + 0x74]      ; 004a873c
    MOV dword ptr [ESP + 0x98],EAX      ; 004a8740
    PUSH 0x40800000                     ; 004a8747
        ;   Label: LAB_004a8747
    PUSH 0x0                            ; 004a874c
    PUSH 0x0                            ; 004a874e
    LEA EAX,[ESP + 0x9c]                ; 004a8750
    PUSH EAX                            ; 004a8757
    LEA EAX,[EBX + 0x20]                ; 004a8758
    PUSH EAX                            ; 004a875b
    MOV ESI,dword ptr [0x0067a3d0]      ; 004a875c | g_CFireEffectPtr
    PUSH ESI                            ; 004a8762 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_004c8fd0 ; 004a8763
        ;   XREF to: 004c8fd0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_004c8fd0(CFireEffect * this_ptr, CVector3f * start_position, CVector3f * end_position, int enable_camera_shake, ...)
    ADD ESP,0x18                        ; 004a8768
    JMP 0x004a8201                      ; 004a876b
        ;   XREF to: 004a8201 (UNCONDITIONAL_JUMP)  ; caseD_a
    CMP dword ptr [EBX + 0x43c],0x1     ; 004a8770
        ;   Label: LAB_004a8770
    JNZ 0x004a8786                      ; 004a8777
        ;   XREF to: 004a8786 (CONDITIONAL_JUMP)  ; LAB_004a8786
    CMP dword ptr [EBX + 0x490],0x0     ; 004a8779
    JNZ 0x004a8221                      ; 004a8780
        ;   XREF to: 004a8221 (CONDITIONAL_JUMP)  ; LAB_004a8221
    LEA EAX,[EBX + 0x3d4]               ; 004a8786
        ;   Label: LAB_004a8786
    PUSH EAX                            ; 004a878c
    MOV EDX,dword ptr [EBX + 0x154]     ; 004a878d
    PUSH EBX                            ; 004a8793
    CALL dword ptr [EDX + 0x24]         ; 004a8794
    ADD ESP,0x8                         ; 004a8797
    MOV dword ptr [EBX + 0x438],EAX     ; 004a879a
    JMP 0x004a8221                      ; 004a87a0
        ;   XREF to: 004a8221 (UNCONDITIONAL_JUMP)  ; LAB_004a8221
    MOV EAX,dword ptr [EBX + 0x438]     ; 004a87a5
        ;   Label: LAB_004a87a5
    PUSH EAX                            ; 004a87ab
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 004a87ac
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 004a87b1
    JMP 0x004a8221                      ; 004a87b4
        ;   XREF to: 004a8221 (UNCONDITIONAL_JUMP)  ; LAB_004a8221
    MOV dword ptr [EBX + 0x168],0x1     ; 004a87b9
        ;   Label: LAB_004a87b9
    MOV EAX,dword ptr [EBX + 0x234]     ; 004a87c3
    MOV dword ptr [EBX + 0x448],EAX     ; 004a87c9
    MOV ESP,EBP                         ; 004a87cf
    POP EBP                             ; 004a87d1
    POP EDI                             ; 004a87d2
    POP ESI                             ; 004a87d3
    POP EBX                             ; 004a87d4
    RET                                 ; 004a87d5
    FLD float ptr [EBX + 0x448]         ; 004a87d6
        ;   Label: LAB_004a87d6
    FSUB float ptr [EBP + 0x18]         ; 004a87dc
    FST float ptr [EBX + 0x448]         ; 004a87df
    FLDZ                                ; 004a87e5
    FCOMPP                              ; 004a87e7
    FNSTSW AX                           ; 004a87e9
    SAHF                                ; 004a87eb
    JC 0x004a8263                       ; 004a87ec
        ;   XREF to: 004a8263 (CONDITIONAL_JUMP)  ; LAB_004a8263
    MOV dword ptr [EBX + 0x168],0x0     ; 004a87f2
    MOV EAX,dword ptr [EBX + 0x3cc]     ; 004a87fc
    MOV dword ptr [EBX + 0x448],EAX     ; 004a8802
    MOV ESP,EBP                         ; 004a8808
    POP EBP                             ; 004a880a
    POP EDI                             ; 004a880b
    POP ESI                             ; 004a880c
    POP EBX                             ; 004a880d
    RET                                 ; 004a880e
    FLD float ptr [EBX + 0x234]         ; 004a880f
        ;   Label: LAB_004a880f
    FLDZ                                ; 004a8815
    FCOMPP                              ; 004a8817
    FNSTSW AX                           ; 004a8819
    SAHF                                ; 004a881b
    JNC 0x004a8263                      ; 004a881c
        ;   XREF to: 004a8263 (CONDITIONAL_JUMP)  ; LAB_004a8263
    FLD float ptr [EBX + 0x448]         ; 004a8822
    FSUB float ptr [EBP + 0x18]         ; 004a8828
    FST float ptr [EBX + 0x448]         ; 004a882b
    FLDZ                                ; 004a8831
    FCOMPP                              ; 004a8833
    FNSTSW AX                           ; 004a8835
    SAHF                                ; 004a8837
    JC 0x004a8263                       ; 004a8838
        ;   XREF to: 004a8263 (CONDITIONAL_JUMP)  ; LAB_004a8263
    MOV dword ptr [EBX + 0x448],0x0     ; 004a883e
    MOV dword ptr [EBX + 0x168],0x0     ; 004a8848
    MOV ESP,EBP                         ; 004a8852
    POP EBP                             ; 004a8854
    POP EDI                             ; 004a8855
    POP ESI                             ; 004a8856
    POP EBX                             ; 004a8857
    RET                                 ; 004a8858

