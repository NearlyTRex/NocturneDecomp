; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_lightsta_cpp_CLightStaff_process_FUN_004e2050(CLightStaff *this_ptr,float delta_time)
;
; Parameters:
; CLightStaff *    Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* PTR_LAB_004e203c = 004e2d4f
;   undefined1* PTR_caseD_5_004e204c = 004e3bd8
;   undefined4 DAT_005c6a7e
;   undefined4 DAT_005c6a82
;   undefined4 DAT_005c6a86
;   undefined4 DAT_005c6a8a
;   undefined4 DAT_005c6a8e
;   undefined4 DAT_005c6a92
;   undefined4 DAT_005c6a96
;   undefined4 DAT_005c6a9a
;   undefined4 DAT_005c6a9e
;   undefined4 DAT_005c6aa2
;   undefined4 DAT_005fc5a0
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_006045f8
;   ... and 4 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0
;   core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30
;   core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045aae0
;   core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_004a3c50
;   core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0
;   core_set.cpp_CDemonSet_addCoronaGlobe_FUN_005372f0
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00548090
;   core_sound.cpp_CSound_playActorSound_FUN_005609d0
;   core_weapon.cpp_CWeapon_process_FUN_0057b160
;   crt_math.c_round_FUN_005a3120
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e2050
        ;   Label: core_lightsta.cpp_CLightStaff_process_FUN_004e2050
    PUSH ESI                            ; 004e2051
    PUSH EDI                            ; 004e2052
    PUSH EBP                            ; 004e2053
    MOV EBP,ESP                         ; 004e2054
    SUB ESP,0x7b0                       ; 004e2056
    AND ESP,0xfffffff8                  ; 004e205c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004e205f
    MOV ECX,dword ptr [0x01d5ba70]      ; 004e2062 | g_CHeroClassInfo.name_hash
    PUSH ECX                            ; 004e2068
    MOV ESI,dword ptr [EBX + 0x304]     ; 004e2069
    MOV EDX,0x1                         ; 004e206f
    PUSH ESI                            ; 004e2074
    MOV dword ptr [ESP + 0x788],EDX     ; 004e2075
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004e207c
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004e2081
    TEST EAX,EAX                        ; 004e2084
    JZ 0x004e23b1                       ; 004e2086
        ;   XREF to: 004e23b1 (CONDITIONAL_JUMP)  ; LAB_004e23b1
    MOV EDI,dword ptr [EBX + 0x58c]     ; 004e208c
    CMP EDI,dword ptr [EAX + 0x20b80]   ; 004e2092
    JLE 0x004e23b1                      ; 004e2098
        ;   XREF to: 004e23b1 (CONDITIONAL_JUMP)  ; LAB_004e23b1
    XOR EDX,EDX                         ; 004e209e
    MOV dword ptr [ESP + 0x780],EDX     ; 004e20a0
    MOV ECX,dword ptr [EBX + 0x5c4]     ; 004e20a7
        ;   Label: LAB_004e20a7
    PUSH ECX                            ; 004e20ad
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 004e20ae
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 004e20b3
    MOV dword ptr [EBX + 0x5c4],0x0     ; 004e20b6
    PUSH dword ptr [EBP + 0x18]         ; 004e20c0
        ;   Label: LAB_004e20c0
    PUSH EBX                            ; 004e20c3
    CALL core_weapon.cpp_CWeapon_process_FUN_0057b160 ; 004e20c4
        ;   XREF to: 0057b160 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_process_FUN_0057b160(CWeapon * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004e20c9
    CMP dword ptr [ESP + 0x780],0x0     ; 004e20cc
    JZ 0x004e22fa                       ; 004e20d4
        ;   XREF to: 004e22fa (CONDITIONAL_JUMP)  ; LAB_004e22fa
    CMP dword ptr [EBX + 0x2d4],0x2     ; 004e20da
    JNZ 0x004e23c4                      ; 004e20e1
        ;   XREF to: 004e23c4 (CONDITIONAL_JUMP)  ; LAB_004e23c4
    PUSH 0x3e800000                     ; 004e20e7
        ;   Label: LAB_004e20e7
    PUSH 0xbe800000                     ; 004e20ec
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004e20f1
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x774],EAX     ; 004e20f6
    ADD ESP,0x8                         ; 004e20fd
    PUSH 0x3e800000                     ; 004e2100
    PUSH 0xbe800000                     ; 004e2105
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004e210a
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x77c],EAX     ; 004e210f
    ADD ESP,0x8                         ; 004e2116
    PUSH 0x3e800000                     ; 004e2119
    PUSH 0xbe800000                     ; 004e211e
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004e2123
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x7b4],EAX     ; 004e2128
    FLD float ptr [ESP + 0x7b4]         ; 004e212f
    ADD ESP,0x8                         ; 004e2136
    LEA ESI,[ESP + 0x228]               ; 004e2139
    MOV EAX,dword ptr [ESP + 0x774]     ; 004e2140
    LEA EDI,[ESP + 0x3f0]               ; 004e2147
    MOV dword ptr [ESP + 0x77c],EAX     ; 004e214e
    MOV EAX,dword ptr [ESP + 0x76c]     ; 004e2155
    PUSH EBX                            ; 004e215c
    MOV dword ptr [ESP + 0x774],EAX     ; 004e215d
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e2164
    FSTP float ptr [ESP + 0x76c]        ; 004e216a
    CALL dword ptr [EAX + 0xe0]         ; 004e2171
    ADD ESP,0x4                         ; 004e2177
    LEA EAX,[ESP + 0x3f0]               ; 004e217a
    LEA ESI,[ESP + 0x228]               ; 004e2181
    PUSH EAX                            ; 004e2188
    MOVSD ES:EDI,ESI                    ; 004e2189
    MOVSD ES:EDI,ESI                    ; 004e218a
    MOVSD ES:EDI,ESI                    ; 004e218b
    PUSH EBX                            ; 004e218c
    LEA ESI,[ESP + 0x23c]               ; 004e218d
    LEA EDI,[ESP + 0x2fc]               ; 004e2194
    CALL core_actor.cpp_FUN_00408b80    ; 004e219b
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x23c]               ; 004e21a0
    ADD ESP,0x8                         ; 004e21a7
    LEA EAX,[ESP + 0x1b0]               ; 004e21aa
    MOVSD ES:EDI,ESI                    ; 004e21b1
    MOVSD ES:EDI,ESI                    ; 004e21b2
    MOVSD ES:EDI,ESI                    ; 004e21b3
    LEA EDX,[ESP + 0x180]               ; 004e21b4
    FLD float ptr [ESP + 0x2f4]         ; 004e21bb
    FLD float ptr [ESP + 0x2f8]         ; 004e21c2
    FLD float ptr [ESP + 0x2fc]         ; 004e21c9
    LEA EDI,[ESP + 0x1b0]               ; 004e21d0
    LEA ESI,[ESP + 0x3e4]               ; 004e21d7
    FXCH ST2                            ; 004e21de
    FADD float ptr [ESP + 0x768]        ; 004e21e0
    FXCH                                ; 004e21e7
    FADD float ptr [ESP + 0x77c]        ; 004e21e9
    FXCH ST2                            ; 004e21f0
    FADD float ptr [ESP + 0x770]        ; 004e21f2
    FXCH                                ; 004e21f9
    FSTP float ptr [ESP + 0x3e4]        ; 004e21fb
    FXCH                                ; 004e2202
    FSTP float ptr [ESP + 0x3e8]        ; 004e2204
    FSTP float ptr [ESP + 0x3ec]        ; 004e220b
    MOVSD ES:EDI,ESI                    ; 004e2212
    MOVSD ES:EDI,ESI                    ; 004e2213
    MOVSD ES:EDI,ESI                    ; 004e2214
    CMP EDX,EAX                         ; 004e2215
    JZ 0x004e2243                       ; 004e2217
        ;   XREF to: 004e2243 (CONDITIONAL_JUMP)  ; LAB_004e2243
    MOV EAX,dword ptr [ESP + 0x1b0]     ; 004e2219
    MOV dword ptr [ESP + 0x180],EAX     ; 004e2220
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 004e2227
    MOV dword ptr [ESP + 0x184],EAX     ; 004e222e
    MOV EAX,dword ptr [ESP + 0x1b8]     ; 004e2235
    MOV dword ptr [ESP + 0x188],EAX     ; 004e223c
    LEA EAX,[ESP + 0x180]               ; 004e2243
        ;   Label: LAB_004e2243
    PUSH EAX                            ; 004e224a
    LEA ESI,[EBX + 0x5c8]               ; 004e224b
    PUSH ESI                            ; 004e2251
    CALL core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045aae0 ; 004e2252
        ;   XREF to: 0045aae0 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045aae0(CDemonGlobe * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 004e2257
    PUSH 0x41080000                     ; 004e225a
    PUSH 0x40f00000                     ; 004e225f
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004e2264
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x7b4],EAX     ; 004e2269
    FLD float ptr [ESP + 0x7b4]         ; 004e2270
    ADD ESP,0x8                         ; 004e2277
    SUB ESP,0x4                         ; 004e227a
    FSTP float ptr [ESP]                ; 004e227d
    PUSH ESI                            ; 004e2280
    CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30 ; 004e2281
        ;   XREF to: 0045ab30 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30(CDemonGlobe * this_ptr, float radius)
    ADD ESP,0x8                         ; 004e2286
    PUSH 0x471c4000                     ; 004e2289
    PUSH 0x469c4000                     ; 004e228e
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004e2293
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x7b4],EAX     ; 004e2298
    FLD float ptr [ESP + 0x7b4]         ; 004e229f
    ADD ESP,0x8                         ; 004e22a6
    CALL crt_math.c_round_FUN_005a3120  ; 004e22a9
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x7ac]       ; 004e22ae
    MOV EAX,dword ptr [ESP + 0x7ac]     ; 004e22b5
    MOV EDX,EAX                         ; 004e22bc
    SAR EDX,0x1f                        ; 004e22be
    MOV dword ptr [ESI + 0x3c],EAX      ; 004e22c1
    SHL EDX,0x8                         ; 004e22c4
    SBB EAX,EDX                         ; 004e22c7
    SAR EAX,0x8                         ; 004e22c9
    MOV EDX,EAX                         ; 004e22cc
    SAR EDX,0x1f                        ; 004e22ce
    SHL EDX,0x2                         ; 004e22d1
    SBB EAX,EDX                         ; 004e22d4
    SAR EAX,0x2                         ; 004e22d6
    PUSH ESI                            ; 004e22d9
    MOV ECX,dword ptr [0x00603b28]      ; 004e22da | g_CDemonSetPtr
    PUSH ECX                            ; 004e22e0
    MOV byte ptr [ESI + 0x1c],AL        ; 004e22e1
    CALL core_set.cpp_CDemonSet_addCoronaGlobe_FUN_005372f0 ; 004e22e4
        ;   XREF to: 005372f0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addCoronaGlobe_FUN_005372f0(CDemonSet * this_ptr, CDemonGlobe * globe)
    MOV ESI,dword ptr [EBX + 0x594]     ; 004e22e9
    ADD ESP,0x8                         ; 004e22ef
    TEST ESI,ESI                        ; 004e22f2
    JZ 0x004e23e6                       ; 004e22f4
        ;   XREF to: 004e23e6 (CONDITIONAL_JUMP)  ; LAB_004e23e6
    CMP dword ptr [EBX + 0x594],0x0     ; 004e22fa
        ;   Label: LAB_004e22fa
    JZ 0x004e2b3b                       ; 004e2301
        ;   XREF to: 004e2b3b (CONDITIONAL_JUMP)  ; LAB_004e2b3b
    FLD float ptr [EBX + 0x59c]         ; 004e2307
    FSUB float ptr [EBP + 0x18]         ; 004e230d
    FLDZ                                ; 004e2310
    FXCH                                ; 004e2312
    FSTP float ptr [EBX + 0x59c]        ; 004e2314
    FCOMP float ptr [EBX + 0x59c]       ; 004e231a
    FNSTSW AX                           ; 004e2320
    SAHF                                ; 004e2322
    JC 0x004e23aa                       ; 004e2323
        ;   XREF to: 004e23aa (CONDITIONAL_JUMP)  ; LAB_004e23aa
    CMP dword ptr [EBX + 0x598],0x3     ; 004e2329
    JGE 0x004e2420                      ; 004e2330
        ;   XREF to: 004e2420 (CONDITIONAL_JUMP)  ; LAB_004e2420
    MOV EDX,0x41700000                  ; 004e2336
    LEA EAX,[EBX + 0x5a0]               ; 004e233b
    MOV EDI,dword ptr [EBX + 0x598]     ; 004e2341
    MOV dword ptr [EBX + 0x59c],0x3dcccccd ; 004e2347
    XOR ECX,ECX                         ; 004e2351
    MOV dword ptr [ESP + 0x78c],EDX     ; 004e2353
    MOV dword ptr [ESP + 0x784],ECX     ; 004e235a
    MOV dword ptr [ESP + 0x79c],ECX     ; 004e2361
    INC EDI                             ; 004e2368
    MOV dword ptr [ESP + 0x7a4],EAX     ; 004e2369
    MOV dword ptr [ESP + 0x7a0],ECX     ; 004e2370
    MOV dword ptr [EBX + 0x598],EDI     ; 004e2377
    MOV EAX,[0x00603b28]                ; 004e237d | g_CDemonSetPtr
        ;   Label: LAB_004e237d
    MOV EDX,dword ptr [ESP + 0x79c]     ; 004e2382
    CMP EDX,dword ptr [EAX + 0x14d164]  ; 004e2389
    JL 0x004e2431                       ; 004e238f
        ;   XREF to: 004e2431 (CONDITIONAL_JUMP)  ; LAB_004e2431
    MOV ESI,dword ptr [ESP + 0x784]     ; 004e2395
    TEST ESI,ESI                        ; 004e239c
    JNZ 0x004e25ff                      ; 004e239e
        ;   XREF to: 004e25ff (CONDITIONAL_JUMP)  ; LAB_004e25ff
    MOV dword ptr [EBX + 0x594],ESI     ; 004e23a4
    MOV ESP,EBP                         ; 004e23aa
        ;   Label: LAB_004e23aa
    POP EBP                             ; 004e23ac
    POP EDI                             ; 004e23ad
    POP ESI                             ; 004e23ae
    POP EBX                             ; 004e23af
    RET                                 ; 004e23b0
    CMP dword ptr [ESP + 0x780],0x0     ; 004e23b1
        ;   Label: LAB_004e23b1
    JNZ 0x004e20c0                      ; 004e23b9
        ;   XREF to: 004e20c0 (CONDITIONAL_JUMP)  ; LAB_004e20c0
    JMP 0x004e20a7                      ; 004e23bf
        ;   XREF to: 004e20a7 (UNCONDITIONAL_JUMP)  ; LAB_004e20a7
    MOV EAX,[0x01c5bc48]                ; 004e23c4 | g_CEnemyClassInfo.name_hash
        ;   Label: LAB_004e23c4
    PUSH EAX                            ; 004e23c9
    MOV EDX,dword ptr [EBX + 0x304]     ; 004e23ca
    PUSH EDX                            ; 004e23d0
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004e23d1
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004e23d6
    TEST EAX,EAX                        ; 004e23d9
    JNZ 0x004e20e7                      ; 004e23db
        ;   XREF to: 004e20e7 (CONDITIONAL_JUMP)  ; LAB_004e20e7
    JMP 0x004e22fa                      ; 004e23e1
        ;   XREF to: 004e22fa (UNCONDITIONAL_JUMP)  ; LAB_004e22fa
    MOV EDI,dword ptr [EBX + 0x5c4]     ; 004e23e6
        ;   Label: LAB_004e23e6
    PUSH EDI                            ; 004e23ec
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00556700 ; 004e23ed
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 004e23f2
    TEST EAX,EAX                        ; 004e23f5
    JNZ 0x004e22fa                      ; 004e23f7
        ;   XREF to: 004e22fa (CONDITIONAL_JUMP)  ; LAB_004e22fa
    LEA EAX,[EBX + 0x20]                ; 004e23fd
    PUSH EAX                            ; 004e2400
    PUSH 0x5c6a3e                       ; 004e2401
    PUSH EBX                            ; 004e2406
    MOV EAX,[0x006045f8]                ; 004e2407 | DAT_006045f8
    PUSH EAX                            ; 004e240c
    CALL core_sound.cpp_CSound_playActorSound_FUN_005609d0 ; 004e240d
        ;   XREF to: 005609d0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005609d0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 004e2412
    MOV dword ptr [EBX + 0x5c4],EAX     ; 004e2415
    JMP 0x004e22fa                      ; 004e241b
        ;   XREF to: 004e22fa (UNCONDITIONAL_JUMP)  ; LAB_004e22fa
    MOV dword ptr [EBX + 0x594],0x0     ; 004e2420
        ;   Label: LAB_004e2420
    MOV ESP,EBP                         ; 004e242a
    POP EBP                             ; 004e242c
    POP EDI                             ; 004e242d
    POP ESI                             ; 004e242e
    POP EBX                             ; 004e242f
    RET                                 ; 004e2430
    MOV EDI,dword ptr [ESP + 0x7a0]     ; 004e2431
        ;   Label: LAB_004e2431
    MOV ESI,dword ptr [0x007e2cec]      ; 004e2438 | g_CCharacterClassInfo.name_hash
    ADD EAX,EDI                         ; 004e243e
    PUSH ESI                            ; 004e2440
    MOV EDX,dword ptr [EAX + 0x14d168]  ; 004e2441
    PUSH EDX                            ; 004e2447
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004e2448
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004e244d
    MOV ECX,dword ptr [0x02cfd8fc]      ; 004e2450 | g_CTVBatClassInfo.name_hash
    PUSH ECX                            ; 004e2456
    PUSH EAX                            ; 004e2457
    MOV ESI,EAX                         ; 004e2458
    MOV dword ptr [ESP + 0x7b0],EAX     ; 004e245a
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004e2461
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004e2466
    TEST EAX,EAX                        ; 004e2469
    JNZ 0x004e25da                      ; 004e246b
        ;   XREF to: 004e25da (CONDITIONAL_JUMP)  ; LAB_004e25da
    TEST ESI,ESI                        ; 004e2471
    JZ 0x004e25da                       ; 004e2473
        ;   XREF to: 004e25da (CONDITIONAL_JUMP)  ; LAB_004e25da
    PUSH ESI                            ; 004e2479
    MOV EAX,dword ptr [ESI + 0x154]     ; 004e247a
    CALL dword ptr [EAX + 0x10c]        ; 004e2480
    ADD ESP,0x4                         ; 004e2486
    TEST EAX,EAX                        ; 004e2489
    JNZ 0x004e25da                      ; 004e248b
        ;   XREF to: 004e25da (CONDITIONAL_JUMP)  ; LAB_004e25da
    MOV EDI,dword ptr [0x01c5bc48]      ; 004e2491 | g_CEnemyClassInfo.name_hash
    PUSH EDI                            ; 004e2497
    PUSH ESI                            ; 004e2498
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004e2499
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004e249e
    TEST EAX,EAX                        ; 004e24a1
    JZ 0x004e25da                       ; 004e24a3
        ;   XREF to: 004e25da (CONDITIONAL_JUMP)  ; LAB_004e25da
    MOV EAX,ESP                         ; 004e24a9
    PUSH EAX                            ; 004e24ab
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 004e24ac
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004e24b1
    MOV EAX,dword ptr [ESP + 0x7a4]     ; 004e24b4
    LEA EDI,[ESP + 0x330]               ; 004e24bb
    LEA EDX,[ESP + 0x330]               ; 004e24c2
    FLD float ptr [EAX + 0x4]           ; 004e24c9
    FLD float ptr [EAX + 0x8]           ; 004e24cc
    FLD float ptr [EAX]                 ; 004e24cf
    LEA EAX,[ESP + 0x30c]               ; 004e24d1
    FSUB float ptr [ESI + 0x20]         ; 004e24d8
    FXCH ST2                            ; 004e24db
    FSUB float ptr [ESI + 0x24]         ; 004e24dd
    FXCH                                ; 004e24e0
    FSUB float ptr [ESI + 0x28]         ; 004e24e2
    FXCH ST2                            ; 004e24e5
    FSTP float ptr [ESP + 0x264]        ; 004e24e7
    FSTP float ptr [ESP + 0x268]        ; 004e24ee
    LEA ESI,[ESP + 0x264]               ; 004e24f5
    FSTP float ptr [ESP + 0x26c]        ; 004e24fc
    MOVSD ES:EDI,ESI                    ; 004e2503
    MOVSD ES:EDI,ESI                    ; 004e2504
    MOVSD ES:EDI,ESI                    ; 004e2505
    CMP EAX,EDX                         ; 004e2506
    JNZ 0x004e257d                      ; 004e2508
        ;   XREF to: 004e257d (CONDITIONAL_JUMP)  ; LAB_004e257d
    FLD float ptr [ESP + 0x310]         ; 004e250e
        ;   Label: LAB_004e250e
    FMUL ST0                            ; 004e2515
    FLD float ptr [ESP + 0x30c]         ; 004e2517
    FMUL ST0                            ; 004e251e
    FADDP                               ; 004e2520
    FLD float ptr [ESP + 0x314]         ; 004e2522
    FMUL ST0                            ; 004e2529
    FADDP                               ; 004e252b
    FSQRT                               ; 004e252d
    XOR ESI,ESI                         ; 004e252f
    FSTP float ptr [ESP + 0x778]        ; 004e2531
    MOV EAX,dword ptr [ESP + 0x778]     ; 004e2538
    FLD float ptr [ESP + 0x778]         ; 004e253f
    MOV dword ptr [ESP + 0x788],EAX     ; 004e2546
    FCOMP float ptr [ESP + 0x78c]       ; 004e254d
    FNSTSW AX                           ; 004e2554
    SAHF                                ; 004e2556
    JNC 0x004e255e                      ; 004e2557
        ;   XREF to: 004e255e (CONDITIONAL_JUMP)  ; LAB_004e255e
    MOV ESI,0x1                         ; 004e2559
    MOV EDX,dword ptr [EBX + 0x598]     ; 004e255e
        ;   Label: LAB_004e255e
    XOR EAX,EAX                         ; 004e2564
    TEST EDX,EDX                        ; 004e2566
    JLE 0x004e25ba                      ; 004e2568
        ;   XREF to: 004e25ba (CONDITIONAL_JUMP)  ; LAB_004e25ba
    MOV EDX,EBX                         ; 004e256a
    MOV EDI,dword ptr [ESP + 0x7a8]     ; 004e256c
        ;   Label: LAB_004e256c
    CMP EDI,dword ptr [EDX + 0x5ac]     ; 004e2573
    JNZ 0x004e25ac                      ; 004e2579
        ;   XREF to: 004e25ac (CONDITIONAL_JUMP)  ; LAB_004e25ac
    JMP 0x004e25da                      ; 004e257b
        ;   XREF to: 004e25da (UNCONDITIONAL_JUMP)  ; LAB_004e25da
    MOV EAX,dword ptr [ESP + 0x330]     ; 004e257d
        ;   Label: LAB_004e257d
    MOV dword ptr [ESP + 0x30c],EAX     ; 004e2584
    MOV EAX,dword ptr [ESP + 0x334]     ; 004e258b
    MOV dword ptr [ESP + 0x310],EAX     ; 004e2592
    MOV EAX,dword ptr [ESP + 0x338]     ; 004e2599
    MOV dword ptr [ESP + 0x314],EAX     ; 004e25a0
    JMP 0x004e250e                      ; 004e25a7
        ;   XREF to: 004e250e (UNCONDITIONAL_JUMP)  ; LAB_004e250e
    INC EAX                             ; 004e25ac
        ;   Label: LAB_004e25ac
    MOV EDI,dword ptr [EBX + 0x598]     ; 004e25ad
    ADD EDX,0x4                         ; 004e25b3
    CMP EAX,EDI                         ; 004e25b6
    JL 0x004e256c                       ; 004e25b8
        ;   XREF to: 004e256c (CONDITIONAL_JUMP)  ; LAB_004e256c
    TEST ESI,ESI                        ; 004e25ba
        ;   Label: LAB_004e25ba
    JZ 0x004e25da                       ; 004e25bc
        ;   XREF to: 004e25da (CONDITIONAL_JUMP)  ; LAB_004e25da
    MOV EAX,dword ptr [ESP + 0x7a8]     ; 004e25be
    MOV dword ptr [ESP + 0x784],EAX     ; 004e25c5
    MOV EAX,dword ptr [ESP + 0x788]     ; 004e25cc
    MOV dword ptr [ESP + 0x78c],EAX     ; 004e25d3
    MOV EDX,dword ptr [ESP + 0x79c]     ; 004e25da
        ;   Label: LAB_004e25da
    MOV EAX,dword ptr [ESP + 0x7a0]     ; 004e25e1
    INC EDX                             ; 004e25e8
    ADD EAX,0x4                         ; 004e25e9
    MOV dword ptr [ESP + 0x79c],EDX     ; 004e25ec
    MOV dword ptr [ESP + 0x7a0],EAX     ; 004e25f3
    JMP 0x004e237d                      ; 004e25fa
        ;   XREF to: 004e237d (UNCONDITIONAL_JUMP)  ; LAB_004e237d
    PUSH ESI                            ; 004e25ff
        ;   Label: LAB_004e25ff
    MOV EAX,dword ptr [ESI + 0x154]     ; 004e2600
    LEA ESI,[ESP + 0x94]                ; 004e2606
    LEA EDI,[ESP + 0x7c]                ; 004e260d
    CALL dword ptr [EAX + 0x1c]         ; 004e2611
    MOV ECX,0x6                         ; 004e2614
    LEA ESI,[ESP + 0x94]                ; 004e2619
    ADD ESP,0x4                         ; 004e2620
    MOVSD.REP ES:EDI,ESI                ; 004e2623
    LEA EAX,[ESP + 0x78]                ; 004e2625
    FLD float ptr [ESP + 0x78]          ; 004e2629
    FLD float ptr [ESP + 0x7c]          ; 004e262d
    FLD float ptr [ESP + 0x80]          ; 004e2631
    LEA EDI,[ESP + 0x2d0]               ; 004e2638
    LEA ESI,[ESP + 0x540]               ; 004e263f
    FXCH ST2                            ; 004e2646
    FADD float ptr [EAX + 0xc]          ; 004e2648
    FXCH                                ; 004e264b
    FADD float ptr [EAX + 0x10]         ; 004e264d
    FXCH ST2                            ; 004e2650
    FADD float ptr [EAX + 0x14]         ; 004e2652
    FXCH                                ; 004e2655
    FSTP float ptr [ESP + 0x540]        ; 004e2657
    FXCH                                ; 004e265e
    FSTP float ptr [ESP + 0x544]        ; 004e2660
    FSTP float ptr [ESP + 0x548]        ; 004e2667
    MOVSD ES:EDI,ESI                    ; 004e266e
    MOVSD ES:EDI,ESI                    ; 004e266f
    MOVSD ES:EDI,ESI                    ; 004e2670
    FLD float ptr [0x005c6aa2]          ; 004e2671 | DAT_005c6aa2
    FLD float ptr [ESP + 0x2d0]         ; 004e2677
    FMUL ST1                            ; 004e267e
    FLD float ptr [ESP + 0x2d4]         ; 004e2680
    FMUL ST2                            ; 004e2687
    FLD float ptr [ESP + 0x2d8]         ; 004e2689
    FMULP ST3                           ; 004e2690
    LEA EDX,[ESP + 0x438]               ; 004e2692
    LEA EAX,[ESP + 0x15c]               ; 004e2699
    LEA EDI,[ESP + 0x438]               ; 004e26a0
    LEA ESI,[ESP + 0x2e8]               ; 004e26a7
    FXCH                                ; 004e26ae
    FSTP float ptr [ESP + 0x2e8]        ; 004e26b0
    FSTP float ptr [ESP + 0x2ec]        ; 004e26b7
    FSTP float ptr [ESP + 0x2f0]        ; 004e26be
    MOVSD ES:EDI,ESI                    ; 004e26c5
    MOVSD ES:EDI,ESI                    ; 004e26c6
    MOVSD ES:EDI,ESI                    ; 004e26c7
    CMP EAX,EDX                         ; 004e26c8
    JZ 0x004e26f6                       ; 004e26ca
        ;   XREF to: 004e26f6 (CONDITIONAL_JUMP)  ; LAB_004e26f6
    MOV EAX,dword ptr [ESP + 0x438]     ; 004e26cc
    MOV dword ptr [ESP + 0x15c],EAX     ; 004e26d3
    MOV EAX,dword ptr [ESP + 0x43c]     ; 004e26da
    MOV dword ptr [ESP + 0x160],EAX     ; 004e26e1
    MOV EAX,dword ptr [ESP + 0x440]     ; 004e26e8
    MOV dword ptr [ESP + 0x164],EAX     ; 004e26ef
    MOV EAX,dword ptr [ESP + 0x784]     ; 004e26f6
        ;   Label: LAB_004e26f6
    LEA EDI,[ESP + 0x45c]               ; 004e26fd
    LEA ESI,[ESP + 0x5e8]               ; 004e2704
    LEA EDX,[ESP + 0x45c]               ; 004e270b
    FLD float ptr [EAX + 0x24]          ; 004e2712
    FLD float ptr [EAX + 0x28]          ; 004e2715
    FLD float ptr [EAX + 0x20]          ; 004e2718
    LEA EAX,[ESP + 0x12c]               ; 004e271b
    FADD float ptr [ESP + 0x15c]        ; 004e2722
    FXCH ST2                            ; 004e2729
    FADD float ptr [ESP + 0x160]        ; 004e272b
    FXCH                                ; 004e2732
    FADD float ptr [ESP + 0x164]        ; 004e2734
    FXCH ST2                            ; 004e273b
    FSTP float ptr [ESP + 0x5e8]        ; 004e273d
    FSTP float ptr [ESP + 0x5ec]        ; 004e2744
    FSTP float ptr [ESP + 0x5f0]        ; 004e274b
    MOVSD ES:EDI,ESI                    ; 004e2752
    MOVSD ES:EDI,ESI                    ; 004e2753
    MOVSD ES:EDI,ESI                    ; 004e2754
    CMP EAX,EDX                         ; 004e2755
    JZ 0x004e2783                       ; 004e2757
        ;   XREF to: 004e2783 (CONDITIONAL_JUMP)  ; LAB_004e2783
    MOV EAX,dword ptr [ESP + 0x45c]     ; 004e2759
    MOV dword ptr [ESP + 0x12c],EAX     ; 004e2760
    MOV EAX,dword ptr [ESP + 0x460]     ; 004e2767
    MOV dword ptr [ESP + 0x130],EAX     ; 004e276e
    MOV EAX,dword ptr [ESP + 0x464]     ; 004e2775
    MOV dword ptr [ESP + 0x134],EAX     ; 004e277c
    FLD float ptr [ESP + 0x160]         ; 004e2783
        ;   Label: LAB_004e2783
    FMUL float ptr [0x005c6aa2]         ; 004e278a | DAT_005c6aa2
    MOV ESI,dword ptr [ESP + 0x784]     ; 004e2790
    FADD float ptr [ESP + 0x130]        ; 004e2797
    MOV EAX,dword ptr [ESP + 0x784]     ; 004e279e
    FSTP float ptr [ESP + 0x130]        ; 004e27a5
    MOV DL,byte ptr [EAX + 0x24a8]      ; 004e27ac
    ADD ESI,0x158                       ; 004e27b2
    TEST DL,DL                          ; 004e27b8
    JZ 0x004e28c6                       ; 004e27ba
        ;   XREF to: 004e28c6 (CONDITIONAL_JUMP)  ; LAB_004e28c6
    PUSH ESI                            ; 004e27c0
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 004e27c1
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004e27c6
    TEST EAX,EAX                        ; 004e27c9
    JZ 0x004e28c6                       ; 004e27cb
        ;   XREF to: 004e28c6 (CONDITIONAL_JUMP)  ; LAB_004e28c6
    PUSH 0x1                            ; 004e27d1
    PUSH 0x5c6a59                       ; 004e27d3
    PUSH EAX                            ; 004e27d8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004e27d9
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004e27de
    TEST EAX,EAX                        ; 004e27e1
    JL 0x004e28c6                       ; 004e27e3
        ;   XREF to: 004e28c6 (CONDITIONAL_JUMP)  ; LAB_004e28c6
    PUSH EAX                            ; 004e27e9
    PUSH ESI                            ; 004e27ea
    LEA ESI,[ESP + 0x5cc]               ; 004e27eb
    LEA EDI,[ESP + 0xf8]                ; 004e27f2
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0 ; 004e27f9
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    ADD ESP,0x8                         ; 004e27fe
    LEA EAX,[ESP + 0xf0]                ; 004e2801
    LEA ESI,[ESP + 0x5c4]               ; 004e2808
    PUSH EAX                            ; 004e280f
    MOV EAX,dword ptr [ESP + 0x788]     ; 004e2810
    MOVSD ES:EDI,ESI                    ; 004e2817
    MOVSD ES:EDI,ESI                    ; 004e2818
    MOVSD ES:EDI,ESI                    ; 004e2819
    PUSH EAX                            ; 004e281a
    LEA ESI,[ESP + 0x140]               ; 004e281b
    LEA EDI,[ESP + 0x5a8]               ; 004e2822
    CALL core_actor.cpp_FUN_00408b80    ; 004e2829
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x140]               ; 004e282e
    LEA EAX,[ESP + 0x5a8]               ; 004e2835
    ADD ESP,0x8                         ; 004e283c
    LEA EDX,[ESP + 0x48c]               ; 004e283f
    MOVSD ES:EDI,ESI                    ; 004e2846
    MOVSD ES:EDI,ESI                    ; 004e2847
    MOVSD ES:EDI,ESI                    ; 004e2848
    CMP EDX,EAX                         ; 004e2849
    JZ 0x004e2877                       ; 004e284b
        ;   XREF to: 004e2877 (CONDITIONAL_JUMP)  ; LAB_004e2877
    MOV EAX,dword ptr [ESP + 0x5a0]     ; 004e284d
    MOV dword ptr [ESP + 0x48c],EAX     ; 004e2854
    MOV EAX,dword ptr [ESP + 0x5a4]     ; 004e285b
    MOV dword ptr [ESP + 0x490],EAX     ; 004e2862
    MOV EAX,dword ptr [ESP + 0x5a8]     ; 004e2869
    MOV dword ptr [ESP + 0x494],EAX     ; 004e2870
    FLD float ptr [ESP + 0x490]         ; 004e2877
        ;   Label: LAB_004e2877
    FCOMP float ptr [ESP + 0x130]       ; 004e287e
    FNSTSW AX                           ; 004e2885
    SAHF                                ; 004e2887
    JNC 0x004e28c6                      ; 004e2888
        ;   XREF to: 004e28c6 (CONDITIONAL_JUMP)  ; LAB_004e28c6
    LEA EAX,[ESP + 0x12c]               ; 004e288a
    LEA EDX,[ESP + 0x48c]               ; 004e2891
    CMP EAX,EDX                         ; 004e2898
    JZ 0x004e28c6                       ; 004e289a
        ;   XREF to: 004e28c6 (CONDITIONAL_JUMP)  ; LAB_004e28c6
    MOV EAX,dword ptr [ESP + 0x48c]     ; 004e289c
    MOV dword ptr [ESP + 0x12c],EAX     ; 004e28a3
    MOV EAX,dword ptr [ESP + 0x490]     ; 004e28aa
    MOV dword ptr [ESP + 0x130],EAX     ; 004e28b1
    MOV EAX,dword ptr [ESP + 0x494]     ; 004e28b8
    MOV dword ptr [ESP + 0x134],EAX     ; 004e28bf
    PUSH 0xffff                         ; 004e28c6
        ;   Label: LAB_004e28c6
    PUSH 0x3e800000                     ; 004e28cb
    PUSH 0x3                            ; 004e28d0
    PUSH 0x3f400000                     ; 004e28d2
    PUSH 0x3f400000                     ; 004e28d7
    PUSH 0x0                            ; 004e28dc
    LEA EAX,[ESP + 0x144]               ; 004e28de
    PUSH EAX                            ; 004e28e5
    LEA ESI,[EBX + 0x5a0]               ; 004e28e6
    PUSH ESI                            ; 004e28ec
    MOV EDX,dword ptr [0x005fc5a0]      ; 004e28ed | DAT_005fc5a0
    PUSH EDX                            ; 004e28f3
    CALL core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_004a3c50 ; 004e28f4
        ;   XREF to: 004a3c50 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_004a3c50(CFireEffect * this_ptr, CVector3f * start_position, CVector3f * end_position, int enable_camera_shake, ...)
    ADD ESP,0x24                        ; 004e28f9
    PUSH ESI                            ; 004e28fc
    PUSH 0x5c6a64                       ; 004e28fd
    PUSH EBX                            ; 004e2902
    MOV ECX,dword ptr [0x006045f8]      ; 004e2903 | DAT_006045f8
    PUSH ECX                            ; 004e2909
    CALL core_sound.cpp_CSound_playActorSound_FUN_005609d0 ; 004e290a
        ;   XREF to: 005609d0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005609d0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 004e290f
    MOV EAX,dword ptr [ESP + 0x784]     ; 004e2912
    MOV dword ptr [EAX + 0x3254],0x3f800000 ; 004e2919
    MOV dword ptr [EAX + 0x3258],0x1    ; 004e2923
    MOV EAX,dword ptr [EBX + 0x598]     ; 004e292d
    MOV EDX,dword ptr [ESP + 0x784]     ; 004e2933
    MOV dword ptr [EBX + EAX*0x4 + 0x5ac],EDX ; 004e293a
    LEA EAX,[ESP + 0x12c]               ; 004e2941
    CMP ESI,EAX                         ; 004e2948
    JZ 0x004e2969                       ; 004e294a
        ;   XREF to: 004e2969 (CONDITIONAL_JUMP)  ; LAB_004e2969
    MOV EAX,dword ptr [ESP + 0x12c]     ; 004e294c
    MOV dword ptr [ESI],EAX             ; 004e2953
    MOV EAX,dword ptr [ESP + 0x130]     ; 004e2955
    MOV dword ptr [ESI + 0x4],EAX       ; 004e295c
    MOV EAX,dword ptr [ESP + 0x134]     ; 004e295f
    MOV dword ptr [ESI + 0x8],EAX       ; 004e2966
    LEA EAX,[ESP + 0x3c]                ; 004e2969
        ;   Label: LAB_004e2969
    PUSH EAX                            ; 004e296d
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 004e296e
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004e2973
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e2976
    PUSH EBX                            ; 004e297c
    CALL dword ptr [EAX + 0xec]         ; 004e297d
    MOV dword ptr [ESP + 0x7b0],EAX     ; 004e2983
    FLD float ptr [ESP + 0x7b0]         ; 004e298a
    ADD ESP,0x4                         ; 004e2991
    FSTP float ptr [ESP + 0x40]         ; 004e2994
    MOV EAX,dword ptr [EBX + 0x56c]     ; 004e2998
    MOV dword ptr [ESP + 0x64],EAX      ; 004e299e
    MOV dword ptr [ESP + 0x70],EBX      ; 004e29a2
    PUSH EBX                            ; 004e29a6
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e29a7
    CALL dword ptr [EAX + 0x94]         ; 004e29ad
    ADD ESP,0x4                         ; 004e29b3
    LEA EDX,[ESP + 0x3c]                ; 004e29b6
    MOV EBX,dword ptr [ESP + 0x784]     ; 004e29ba
    PUSH EDX                            ; 004e29c1
    MOV dword ptr [ESP + 0x78],EAX      ; 004e29c2
    MOV EAX,dword ptr [ESP + 0x788]     ; 004e29c6
    PUSH EBX                            ; 004e29cd
    MOV EAX,dword ptr [EAX + 0x154]     ; 004e29ce
    CALL dword ptr [EAX + 0x108]        ; 004e29d4
    LEA EDX,[ESP + 0x134]               ; 004e29da
    LEA EAX,[ESP + 0x50c]               ; 004e29e1
    ADD ESP,0x8                         ; 004e29e8
    CMP EAX,EDX                         ; 004e29eb
    JNZ 0x004e2b0c                      ; 004e29ed
        ;   XREF to: 004e2b0c (CONDITIONAL_JUMP)  ; LAB_004e2b0c
    XOR ESI,ESI                         ; 004e29f3
        ;   Label: LAB_004e29f3
    PUSH 0x40a00000                     ; 004e29f5
        ;   Label: LAB_004e29f5
    PUSH 0xc0a00000                     ; 004e29fa
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004e29ff
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x77c],EAX     ; 004e2a04
    ADD ESP,0x8                         ; 004e2a0b
    PUSH 0x41200000                     ; 004e2a0e
    PUSH 0x0                            ; 004e2a13
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004e2a15
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x774],EAX     ; 004e2a1a
    ADD ESP,0x8                         ; 004e2a21
    PUSH 0x40a00000                     ; 004e2a24
    PUSH 0xc0a00000                     ; 004e2a29
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004e2a2e
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x7b4],EAX     ; 004e2a33
    FLD float ptr [ESP + 0x7b4]         ; 004e2a3a
    ADD ESP,0x8                         ; 004e2a41
    MOV EAX,dword ptr [ESP + 0x76c]     ; 004e2a44
    MOV dword ptr [ESP + 0x790],EAX     ; 004e2a4b
    MOV EAX,dword ptr [ESP + 0x774]     ; 004e2a52
    FSTP float ptr [ESP + 0x794]        ; 004e2a59
    MOV dword ptr [ESP + 0x798],EAX     ; 004e2a60
    MOV EAX,dword ptr [ESP + 0x794]     ; 004e2a67
    MOV dword ptr [ESP + 0x63c],EAX     ; 004e2a6e
    MOV EAX,dword ptr [ESP + 0x790]     ; 004e2a75
    MOV dword ptr [ESP + 0x640],EAX     ; 004e2a7c
    MOV EAX,dword ptr [ESP + 0x798]     ; 004e2a83
    LEA EDX,[ESP + 0x510]               ; 004e2a8a
    MOV dword ptr [ESP + 0x644],EAX     ; 004e2a91
    LEA EAX,[ESP + 0x63c]               ; 004e2a98
    CMP EDX,EAX                         ; 004e2a9f
    JZ 0x004e2acd                       ; 004e2aa1
        ;   XREF to: 004e2acd (CONDITIONAL_JUMP)  ; LAB_004e2acd
    MOV EAX,dword ptr [ESP + 0x794]     ; 004e2aa3
    MOV dword ptr [ESP + 0x510],EAX     ; 004e2aaa
    MOV EAX,dword ptr [ESP + 0x790]     ; 004e2ab1
    MOV dword ptr [ESP + 0x514],EAX     ; 004e2ab8
    MOV EAX,dword ptr [ESP + 0x798]     ; 004e2abf
    MOV dword ptr [ESP + 0x518],EAX     ; 004e2ac6
    PUSH 0xffff                         ; 004e2acd
        ;   Label: LAB_004e2acd
    PUSH 0x1                            ; 004e2ad2
    PUSH 0x10000                        ; 004e2ad4
    PUSH 0x20000                        ; 004e2ad9
    LEA EAX,[ESP + 0x520]               ; 004e2ade
    PUSH EAX                            ; 004e2ae5
    LEA EAX,[ESP + 0x518]               ; 004e2ae6
    PUSH EAX                            ; 004e2aed
    MOV ECX,dword ptr [0x005fc5a0]      ; 004e2aee | DAT_005fc5a0
    PUSH ECX                            ; 004e2af4
    INC ESI                             ; 004e2af5
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0 ; 004e2af6
        ;   XREF to: 004a23c0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 004e2afb
    CMP ESI,0x10                        ; 004e2afe
    JGE 0x004e23aa                      ; 004e2b01
        ;   XREF to: 004e23aa (CONDITIONAL_JUMP)  ; LAB_004e23aa
    JMP 0x004e29f5                      ; 004e2b07
        ;   XREF to: 004e29f5 (UNCONDITIONAL_JUMP)  ; LAB_004e29f5
    MOV EAX,dword ptr [ESP + 0x12c]     ; 004e2b0c
        ;   Label: LAB_004e2b0c
    MOV dword ptr [ESP + 0x504],EAX     ; 004e2b13
    MOV EAX,dword ptr [ESP + 0x130]     ; 004e2b1a
    MOV dword ptr [ESP + 0x508],EAX     ; 004e2b21
    MOV EAX,dword ptr [ESP + 0x134]     ; 004e2b28
    MOV dword ptr [ESP + 0x50c],EAX     ; 004e2b2f
    JMP 0x004e29f3                      ; 004e2b36
        ;   XREF to: 004e29f3 (UNCONDITIONAL_JUMP)  ; LAB_004e29f3
    CMP dword ptr [ESP + 0x780],0x0     ; 004e2b3b
        ;   Label: LAB_004e2b3b
    JZ 0x004e23aa                       ; 004e2b43
        ;   XREF to: 004e23aa (CONDITIONAL_JUMP)  ; LAB_004e23aa
    CMP dword ptr [EBX + 0x2d4],0x2     ; 004e2b49
    JNZ 0x004e2efe                      ; 004e2b50
        ;   XREF to: 004e2efe (CONDITIONAL_JUMP)  ; LAB_004e2efe
    FLD float ptr [EBX + 0x5bc]         ; 004e2b56
        ;   Label: LAB_004e2b56
    FSUB float ptr [EBP + 0x18]         ; 004e2b5c
    FLDZ                                ; 004e2b5f
    FXCH                                ; 004e2b61
    FSTP float ptr [EBX + 0x5bc]        ; 004e2b63
    FCOMP float ptr [EBX + 0x5bc]       ; 004e2b69
    FNSTSW AX                           ; 004e2b6f
    SAHF                                ; 004e2b71
    JNC 0x004e2f23                      ; 004e2b72
        ;   XREF to: 004e2f23 (CONDITIONAL_JUMP)  ; LAB_004e2f23
    MOV EAX,dword ptr [EBX + 0x5c0]     ; 004e2b78
        ;   Label: LAB_004e2b78
    CMP EAX,0x4                         ; 004e2b7e
    JA 0x004e2cff                       ; 004e2b81
        ;   XREF to: 004e2cff (CONDITIONAL_JUMP)  ; LAB_004e2cff
    JMP dword ptr [EAX*0x4 + 0x4e2028]  ; 004e2b87
    PUSH 0xffff                         ; 004e2cff
        ;   Label: LAB_004e2cff
    PUSH 0x3c23d70a                     ; 004e2d04
    PUSH 0x3                            ; 004e2d09
    PUSH 0x3e800000                     ; 004e2d0b
    PUSH 0x3e800000                     ; 004e2d10
    PUSH 0x0                            ; 004e2d15
    LEA EAX,[ESP + 0x48c]               ; 004e2d17
    PUSH EAX                            ; 004e2d1e
    LEA EAX,[ESP + 0x214]               ; 004e2d1f
    PUSH EAX                            ; 004e2d26
    MOV ESI,dword ptr [0x005fc5a0]      ; 004e2d27 | DAT_005fc5a0
    PUSH ESI                            ; 004e2d2d
    CALL core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_004a3c50 ; 004e2d2e
        ;   XREF to: 004a3c50 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_004a3c50(CFireEffect * this_ptr, CVector3f * start_position, CVector3f * end_position, int enable_camera_shake, ...)
    MOV EAX,dword ptr [EBX + 0x5c0]     ; 004e2d33
    ADD ESP,0x24                        ; 004e2d39
    DEC EAX                             ; 004e2d3c
    JNZ 0x004e3da2                      ; 004e2d3d
        ;   XREF to: 004e3da2 (CONDITIONAL_JUMP)  ; LAB_004e3da2
    MOV EAX,0x4                         ; 004e2d43
    JMP dword ptr [EAX*0x4 + 0x4e203c]  ; 004e2d48 | caseD_2 | caseD_3 | caseD_4
        ;   Label: switchD
    MOV dword ptr [ESP + 0x47c],EAX     ; 004e2eb9
        ;   Label: LAB_004e2eb9
    PUSH 0xffff                         ; 004e2ec0
        ;   Label: LAB_004e2ec0
    PUSH 0x3c23d70a                     ; 004e2ec5
    PUSH 0x3                            ; 004e2eca
    PUSH 0x3e800000                     ; 004e2ecc
    PUSH 0x3e800000                     ; 004e2ed1
    PUSH 0x0                            ; 004e2ed6
    LEA EAX,[ESP + 0x48c]               ; 004e2ed8
    PUSH EAX                            ; 004e2edf
    LEA EAX,[ESP + 0x214]               ; 004e2ee0
    PUSH EAX                            ; 004e2ee7
    MOV EDI,dword ptr [0x005fc5a0]      ; 004e2ee8 | DAT_005fc5a0
    PUSH EDI                            ; 004e2eee
    CALL core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_004a3c50 ; 004e2eef
        ;   XREF to: 004a3c50 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_004a3c50(CFireEffect * this_ptr, CVector3f * start_position, CVector3f * end_position, int enable_camera_shake, ...)
    ADD ESP,0x24                        ; 004e2ef4
    MOV ESP,EBP                         ; 004e2ef7
    POP EBP                             ; 004e2ef9
    POP EDI                             ; 004e2efa
    POP ESI                             ; 004e2efb
    POP EBX                             ; 004e2efc
    RET                                 ; 004e2efd
    MOV EDI,dword ptr [0x01c5bc48]      ; 004e2efe | g_CEnemyClassInfo.name_hash
        ;   Label: LAB_004e2efe
    PUSH EDI                            ; 004e2f04
    MOV EAX,dword ptr [EBX + 0x304]     ; 004e2f05
    PUSH EAX                            ; 004e2f0b
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004e2f0c
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004e2f11
    TEST EAX,EAX                        ; 004e2f14
    JNZ 0x004e2b56                      ; 004e2f16
        ;   XREF to: 004e2b56 (CONDITIONAL_JUMP)  ; LAB_004e2b56
    MOV ESP,EBP                         ; 004e2f1c
    POP EBP                             ; 004e2f1e
    POP EDI                             ; 004e2f1f
    POP ESI                             ; 004e2f20
    POP EBX                             ; 004e2f21
    RET                                 ; 004e2f22
    MOV EDX,dword ptr [EBX + 0x5c0]     ; 004e2f23
        ;   Label: LAB_004e2f23
    MOV dword ptr [EBX + 0x5bc],0x3dcccccd ; 004e2f29
    INC EDX                             ; 004e2f33
    MOV dword ptr [EBX + 0x5c0],EDX     ; 004e2f34
    CMP EDX,0x4                         ; 004e2f3a
    JLE 0x004e2b78                      ; 004e2f3d
        ;   XREF to: 004e2b78 (CONDITIONAL_JUMP)  ; LAB_004e2b78
    MOV dword ptr [EBX + 0x5c0],0x1     ; 004e2f43
    JMP 0x004e2b78                      ; 004e2f4d
        ;   XREF to: 004e2b78 (UNCONDITIONAL_JUMP)  ; LAB_004e2b78
    PUSH EBX                            ; 004e367a
        ;   Label: caseD_2
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e367b
    LEA ESI,[ESP + 0x664]               ; 004e3681
    LEA EDI,[ESP + 0x670]               ; 004e3688
    CALL dword ptr [EAX + 0xe0]         ; 004e368f
    LEA ESI,[ESP + 0x664]               ; 004e3695
    ADD ESP,0x4                         ; 004e369c
    LEA EAX,[ESP + 0x204]               ; 004e369f
    MOVSD ES:EDI,ESI                    ; 004e36a6
    MOVSD ES:EDI,ESI                    ; 004e36a7
    MOVSD ES:EDI,ESI                    ; 004e36a8
    PUSH EAX                            ; 004e36a9
    FLD float ptr [ESP + 0x670]         ; 004e36aa
    FLD float ptr [ESP + 0x674]         ; 004e36b1
    FLD float ptr [ESP + 0x678]         ; 004e36b8
    LEA EDI,[ESP + 0x208]               ; 004e36bf
    LEA ESI,[ESP + 0x4a8]               ; 004e36c6
    FXCH ST2                            ; 004e36cd
    FADD float ptr [0x005c6a8a]         ; 004e36cf | DAT_005c6a8a
    FXCH                                ; 004e36d5
    FADD float ptr [0x005c6a8e]         ; 004e36d7 | DAT_005c6a8e
    FXCH ST2                            ; 004e36dd
    FADD float ptr [0x005c6a92]         ; 004e36df | DAT_005c6a92
    FXCH                                ; 004e36e5
    FSTP float ptr [ESP + 0x4a8]        ; 004e36e7
    FXCH                                ; 004e36ee
    FSTP float ptr [ESP + 0x4ac]        ; 004e36f0
    FSTP float ptr [ESP + 0x4b0]        ; 004e36f7
    MOVSD ES:EDI,ESI                    ; 004e36fe
    MOVSD ES:EDI,ESI                    ; 004e36ff
    MOVSD ES:EDI,ESI                    ; 004e3700
    PUSH EBX                            ; 004e3701
    LEA ESI,[ESP + 0x44c]               ; 004e3702
    LEA EDI,[ESP + 0x590]               ; 004e3709
    CALL core_actor.cpp_FUN_00408b80    ; 004e3710
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x44c]               ; 004e3715
    LEA EDX,[ESP + 0x590]               ; 004e371c
    ADD ESP,0x8                         ; 004e3723
    LEA EAX,[ESP + 0x1f8]               ; 004e3726
    MOVSD ES:EDI,ESI                    ; 004e372d
    MOVSD ES:EDI,ESI                    ; 004e372e
    MOVSD ES:EDI,ESI                    ; 004e372f
    CMP EAX,EDX                         ; 004e3730
    JZ 0x004e375e                       ; 004e3732
        ;   XREF to: 004e375e (CONDITIONAL_JUMP)  ; LAB_004e375e
    MOV EAX,dword ptr [ESP + 0x588]     ; 004e3734
    MOV dword ptr [ESP + 0x1f8],EAX     ; 004e373b
    MOV EAX,dword ptr [ESP + 0x58c]     ; 004e3742
    MOV dword ptr [ESP + 0x1fc],EAX     ; 004e3749
    MOV EAX,dword ptr [ESP + 0x590]     ; 004e3750
    MOV dword ptr [ESP + 0x200],EAX     ; 004e3757
    PUSH EBX                            ; 004e375e
        ;   Label: LAB_004e375e
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e375f
    LEA ESI,[ESP + 0x430]               ; 004e3765
    LEA EDI,[ESP + 0x598]               ; 004e376c
    CALL dword ptr [EAX + 0xe0]         ; 004e3773
    LEA ESI,[ESP + 0x430]               ; 004e3779
    ADD ESP,0x4                         ; 004e3780
    LEA EAX,[ESP + 0x240]               ; 004e3783
    MOVSD ES:EDI,ESI                    ; 004e378a
    MOVSD ES:EDI,ESI                    ; 004e378b
    MOVSD ES:EDI,ESI                    ; 004e378c
    PUSH EAX                            ; 004e378d
    FLD float ptr [ESP + 0x598]         ; 004e378e
    FLD float ptr [ESP + 0x59c]         ; 004e3795
    FLD float ptr [ESP + 0x5a0]         ; 004e379c
    LEA EDI,[ESP + 0x244]               ; 004e37a3
    LEA ESI,[ESP + 0x2a4]               ; 004e37aa
    FXCH ST2                            ; 004e37b1
    FADD float ptr [0x005c6a9e]         ; 004e37b3 | DAT_005c6a9e
    FXCH                                ; 004e37b9
    FADD float ptr [0x005c6aa2]         ; 004e37bb | DAT_005c6aa2
    FXCH ST2                            ; 004e37c1
    FADD float ptr [0x005c6a92]         ; 004e37c3 | DAT_005c6a92
    FXCH                                ; 004e37c9
    FSTP float ptr [ESP + 0x2a4]        ; 004e37cb
    FXCH                                ; 004e37d2
    FSTP float ptr [ESP + 0x2a8]        ; 004e37d4
    FSTP float ptr [ESP + 0x2ac]        ; 004e37db
    MOVSD ES:EDI,ESI                    ; 004e37e2
    MOVSD ES:EDI,ESI                    ; 004e37e3
    MOVSD ES:EDI,ESI                    ; 004e37e4
    PUSH EBX                            ; 004e37e5
    LEA ESI,[ESP + 0x218]               ; 004e37e6
    LEA EDI,[ESP + 0x278]               ; 004e37ed
    CALL core_actor.cpp_FUN_00408b80    ; 004e37f4
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x218]               ; 004e37f9
    LEA EDX,[ESP + 0x278]               ; 004e3800
    ADD ESP,0x8                         ; 004e3807
    LEA EAX,[ESP + 0x474]               ; 004e380a
    MOVSD ES:EDI,ESI                    ; 004e3811
    MOVSD ES:EDI,ESI                    ; 004e3812
    MOVSD ES:EDI,ESI                    ; 004e3813
    CMP EAX,EDX                         ; 004e3814
    JZ 0x004e2ec0                       ; 004e3816
        ;   XREF to: 004e2ec0 (CONDITIONAL_JUMP)  ; LAB_004e2ec0
    MOV EAX,dword ptr [ESP + 0x270]     ; 004e381c
    MOV dword ptr [ESP + 0x474],EAX     ; 004e3823
    MOV EAX,dword ptr [ESP + 0x274]     ; 004e382a
    MOV dword ptr [ESP + 0x478],EAX     ; 004e3831
    MOV EAX,dword ptr [ESP + 0x278]     ; 004e3838
    JMP 0x004e2eb9                      ; 004e383f
        ;   XREF to: 004e2eb9 (UNCONDITIONAL_JUMP)  ; LAB_004e2eb9
    PUSH EBX                            ; 004e3844
        ;   Label: caseD_3
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e3845
    LEA ESI,[ESP + 0x484]               ; 004e384b
    LEA EDI,[ESP + 0x604]               ; 004e3852
    CALL dword ptr [EAX + 0xe0]         ; 004e3859
    LEA ESI,[ESP + 0x484]               ; 004e385f
    ADD ESP,0x4                         ; 004e3866
    LEA EAX,[ESP + 0x27c]               ; 004e3869
    MOVSD ES:EDI,ESI                    ; 004e3870
    MOVSD ES:EDI,ESI                    ; 004e3871
    MOVSD ES:EDI,ESI                    ; 004e3872
    PUSH EAX                            ; 004e3873
    FLD float ptr [ESP + 0x604]         ; 004e3874
    FLD float ptr [ESP + 0x608]         ; 004e387b
    FLD float ptr [ESP + 0x60c]         ; 004e3882
    LEA EDI,[ESP + 0x280]               ; 004e3889
    LEA ESI,[ESP + 0x5bc]               ; 004e3890
    FXCH ST2                            ; 004e3897
    FADD float ptr [0x005c6a9e]         ; 004e3899 | DAT_005c6a9e
    FXCH                                ; 004e389f
    FADD float ptr [0x005c6aa2]         ; 004e38a1 | DAT_005c6aa2
    FXCH ST2                            ; 004e38a7
    FADD float ptr [0x005c6a92]         ; 004e38a9 | DAT_005c6a92
    FXCH                                ; 004e38af
    FSTP float ptr [ESP + 0x5bc]        ; 004e38b1
    FXCH                                ; 004e38b8
    FSTP float ptr [ESP + 0x5c0]        ; 004e38ba
    FSTP float ptr [ESP + 0x5c4]        ; 004e38c1
    MOVSD ES:EDI,ESI                    ; 004e38c8
    MOVSD ES:EDI,ESI                    ; 004e38c9
    MOVSD ES:EDI,ESI                    ; 004e38ca
    PUSH EBX                            ; 004e38cb
    LEA ESI,[ESP + 0x620]               ; 004e38cc
    LEA EDI,[ESP + 0x2b4]               ; 004e38d3
    CALL core_actor.cpp_FUN_00408b80    ; 004e38da
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x620]               ; 004e38df
    LEA EDX,[ESP + 0x2b4]               ; 004e38e6
    ADD ESP,0x8                         ; 004e38ed
    LEA EAX,[ESP + 0x1f8]               ; 004e38f0
    MOVSD ES:EDI,ESI                    ; 004e38f7
    MOVSD ES:EDI,ESI                    ; 004e38f8
    MOVSD ES:EDI,ESI                    ; 004e38f9
    CMP EAX,EDX                         ; 004e38fa
    JZ 0x004e3928                       ; 004e38fc
        ;   XREF to: 004e3928 (CONDITIONAL_JUMP)  ; LAB_004e3928
    MOV EAX,dword ptr [ESP + 0x2ac]     ; 004e38fe
    MOV dword ptr [ESP + 0x1f8],EAX     ; 004e3905
    MOV EAX,dword ptr [ESP + 0x2b0]     ; 004e390c
    MOV dword ptr [ESP + 0x1fc],EAX     ; 004e3913
    MOV EAX,dword ptr [ESP + 0x2b4]     ; 004e391a
    MOV dword ptr [ESP + 0x200],EAX     ; 004e3921
    PUSH EBX                            ; 004e3928
        ;   Label: LAB_004e3928
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e3929
    LEA ESI,[ESP + 0x64c]               ; 004e392f
    LEA EDI,[ESP + 0x754]               ; 004e3936
    CALL dword ptr [EAX + 0xe0]         ; 004e393d
    LEA ESI,[ESP + 0x64c]               ; 004e3943
    ADD ESP,0x4                         ; 004e394a
    LEA EAX,[ESP + 0x2b8]               ; 004e394d
    MOVSD ES:EDI,ESI                    ; 004e3954
    MOVSD ES:EDI,ESI                    ; 004e3955
    MOVSD ES:EDI,ESI                    ; 004e3956
    PUSH EAX                            ; 004e3957
    FLD float ptr [ESP + 0x754]         ; 004e3958
    FLD float ptr [ESP + 0x758]         ; 004e395f
    FLD float ptr [ESP + 0x75c]         ; 004e3966
    LEA EDI,[ESP + 0x2bc]               ; 004e396d
    LEA ESI,[ESP + 0x580]               ; 004e3974
    FXCH ST2                            ; 004e397b
    FADD float ptr [0x005c6a96]         ; 004e397d | DAT_005c6a96
    FXCH                                ; 004e3983
    FADD float ptr [0x005c6a9a]         ; 004e3985 | DAT_005c6a9a
    FXCH ST2                            ; 004e398b
    FADD float ptr [0x005c6a92]         ; 004e398d | DAT_005c6a92
    FXCH                                ; 004e3993
    FSTP float ptr [ESP + 0x580]        ; 004e3995
    FXCH                                ; 004e399c
    FSTP float ptr [ESP + 0x584]        ; 004e399e
    FSTP float ptr [ESP + 0x588]        ; 004e39a5
    MOVSD ES:EDI,ESI                    ; 004e39ac
    MOVSD ES:EDI,ESI                    ; 004e39ad
    MOVSD ES:EDI,ESI                    ; 004e39ae
    PUSH EBX                            ; 004e39af
    LEA ESI,[ESP + 0x4b8]               ; 004e39b0
    LEA EDI,[ESP + 0x74c]               ; 004e39b7
    CALL core_actor.cpp_FUN_00408b80    ; 004e39be
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x4b8]               ; 004e39c3
    LEA EAX,[ESP + 0x74c]               ; 004e39ca
    ADD ESP,0x8                         ; 004e39d1
    LEA EDX,[ESP + 0x474]               ; 004e39d4
    MOVSD ES:EDI,ESI                    ; 004e39db
    MOVSD ES:EDI,ESI                    ; 004e39dc
    MOVSD ES:EDI,ESI                    ; 004e39dd
    CMP EDX,EAX                         ; 004e39de
    JZ 0x004e2ec0                       ; 004e39e0
        ;   XREF to: 004e2ec0 (CONDITIONAL_JUMP)  ; LAB_004e2ec0
    MOV EAX,dword ptr [ESP + 0x744]     ; 004e39e6
    MOV dword ptr [ESP + 0x474],EAX     ; 004e39ed
    MOV EAX,dword ptr [ESP + 0x748]     ; 004e39f4
    MOV dword ptr [ESP + 0x478],EAX     ; 004e39fb
    MOV EAX,dword ptr [ESP + 0x74c]     ; 004e3a02
    JMP 0x004e2eb9                      ; 004e3a09
        ;   XREF to: 004e2eb9 (UNCONDITIONAL_JUMP)  ; LAB_004e2eb9
    PUSH EBX                            ; 004e3a0e
        ;   Label: caseD_4
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e3a0f
    LEA ESI,[ESP + 0x4cc]               ; 004e3a15
    LEA EDI,[ESP + 0x5f8]               ; 004e3a1c
    CALL dword ptr [EAX + 0xe0]         ; 004e3a23
    LEA ESI,[ESP + 0x4cc]               ; 004e3a29
    ADD ESP,0x4                         ; 004e3a30
    LEA EAX,[ESP + 0x6f0]               ; 004e3a33
    MOVSD ES:EDI,ESI                    ; 004e3a3a
    MOVSD ES:EDI,ESI                    ; 004e3a3b
    MOVSD ES:EDI,ESI                    ; 004e3a3c
    PUSH EAX                            ; 004e3a3d
    FLD float ptr [ESP + 0x5f8]         ; 004e3a3e
    FLD float ptr [ESP + 0x5fc]         ; 004e3a45
    FLD float ptr [ESP + 0x600]         ; 004e3a4c
    LEA EDI,[ESP + 0x6f4]               ; 004e3a53
    LEA ESI,[ESP + 0x3a0]               ; 004e3a5a
    FXCH ST2                            ; 004e3a61
    FADD float ptr [0x005c6a96]         ; 004e3a63 | DAT_005c6a96
    FXCH                                ; 004e3a69
    FADD float ptr [0x005c6a9a]         ; 004e3a6b | DAT_005c6a9a
    FXCH ST2                            ; 004e3a71
    FADD float ptr [0x005c6a92]         ; 004e3a73 | DAT_005c6a92
    FXCH                                ; 004e3a79
    FSTP float ptr [ESP + 0x3a0]        ; 004e3a7b
    FXCH                                ; 004e3a82
    FSTP float ptr [ESP + 0x3a4]        ; 004e3a84
    FSTP float ptr [ESP + 0x3a8]        ; 004e3a8b
    MOVSD ES:EDI,ESI                    ; 004e3a92
    MOVSD ES:EDI,ESI                    ; 004e3a93
    MOVSD ES:EDI,ESI                    ; 004e3a94
    PUSH EBX                            ; 004e3a95
    LEA ESI,[ESP + 0x4dc]               ; 004e3a96
    LEA EDI,[ESP + 0x32c]               ; 004e3a9d
    CALL core_actor.cpp_FUN_00408b80    ; 004e3aa4
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x4dc]               ; 004e3aa9
    LEA EAX,[ESP + 0x32c]               ; 004e3ab0
    ADD ESP,0x8                         ; 004e3ab7
    LEA EDX,[ESP + 0x1f8]               ; 004e3aba
    MOVSD ES:EDI,ESI                    ; 004e3ac1
    MOVSD ES:EDI,ESI                    ; 004e3ac2
    MOVSD ES:EDI,ESI                    ; 004e3ac3
    CMP EDX,EAX                         ; 004e3ac4
    JZ 0x004e3af2                       ; 004e3ac6
        ;   XREF to: 004e3af2 (CONDITIONAL_JUMP)  ; LAB_004e3af2
    MOV EAX,dword ptr [ESP + 0x324]     ; 004e3ac8
    MOV dword ptr [ESP + 0x1f8],EAX     ; 004e3acf
    MOV EAX,dword ptr [ESP + 0x328]     ; 004e3ad6
    MOV dword ptr [ESP + 0x1fc],EAX     ; 004e3add
    MOV EAX,dword ptr [ESP + 0x32c]     ; 004e3ae4
    MOV dword ptr [ESP + 0x200],EAX     ; 004e3aeb
    PUSH EBX                            ; 004e3af2
        ;   Label: LAB_004e3af2
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e3af3
    LEA ESI,[ESP + 0x4f0]               ; 004e3af9
    LEA EDI,[ESP + 0x40c]               ; 004e3b00
    CALL dword ptr [EAX + 0xe0]         ; 004e3b07
    LEA ESI,[ESP + 0x4f0]               ; 004e3b0d
    ADD ESP,0x4                         ; 004e3b14
    LEA EAX,[ESP + 0x684]               ; 004e3b17
    MOVSD ES:EDI,ESI                    ; 004e3b1e
    MOVSD ES:EDI,ESI                    ; 004e3b1f
    MOVSD ES:EDI,ESI                    ; 004e3b20
    PUSH EAX                            ; 004e3b21
    FLD float ptr [ESP + 0x40c]         ; 004e3b22
    FLD float ptr [ESP + 0x410]         ; 004e3b29
    FLD float ptr [ESP + 0x414]         ; 004e3b30
    LEA EDI,[ESP + 0x688]               ; 004e3b37
    LEA ESI,[ESP + 0x568]               ; 004e3b3e
    FXCH ST2                            ; 004e3b45
    FADD float ptr [0x005c6a7e]         ; 004e3b47 | DAT_005c6a7e
    FXCH                                ; 004e3b4d
    FADD float ptr [0x005c6a82]         ; 004e3b4f | DAT_005c6a82
    FXCH ST2                            ; 004e3b55
    FADD float ptr [0x005c6a86]         ; 004e3b57 | DAT_005c6a86
    FXCH                                ; 004e3b5d
    FSTP float ptr [ESP + 0x568]        ; 004e3b5f
    FXCH                                ; 004e3b66
    FSTP float ptr [ESP + 0x56c]        ; 004e3b68
    FSTP float ptr [ESP + 0x570]        ; 004e3b6f
    MOVSD ES:EDI,ESI                    ; 004e3b76
    MOVSD ES:EDI,ESI                    ; 004e3b77
    MOVSD ES:EDI,ESI                    ; 004e3b78
    PUSH EBX                            ; 004e3b79
    LEA ESI,[ESP + 0x500]               ; 004e3b7a
    LEA EDI,[ESP + 0x740]               ; 004e3b81
    CALL core_actor.cpp_FUN_00408b80    ; 004e3b88
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x500]               ; 004e3b8d
    LEA EAX,[ESP + 0x740]               ; 004e3b94
    ADD ESP,0x8                         ; 004e3b9b
    LEA EDX,[ESP + 0x474]               ; 004e3b9e
    MOVSD ES:EDI,ESI                    ; 004e3ba5
    MOVSD ES:EDI,ESI                    ; 004e3ba6
    MOVSD ES:EDI,ESI                    ; 004e3ba7
    CMP EDX,EAX                         ; 004e3ba8
    JZ 0x004e2ec0                       ; 004e3baa
        ;   XREF to: 004e2ec0 (CONDITIONAL_JUMP)  ; LAB_004e2ec0
    MOV EAX,dword ptr [ESP + 0x738]     ; 004e3bb0
    MOV dword ptr [ESP + 0x474],EAX     ; 004e3bb7
    MOV EAX,dword ptr [ESP + 0x73c]     ; 004e3bbe
    MOV dword ptr [ESP + 0x478],EAX     ; 004e3bc5
    MOV EAX,dword ptr [ESP + 0x740]     ; 004e3bcc
    JMP 0x004e2eb9                      ; 004e3bd3
        ;   XREF to: 004e2eb9 (UNCONDITIONAL_JUMP)  ; LAB_004e2eb9
    PUSH EBX                            ; 004e3bd8
        ;   Label: caseD_5
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e3bd9
    LEA ESI,[ESP + 0x6b8]               ; 004e3bdf
    LEA EDI,[ESP + 0x52c]               ; 004e3be6
    CALL dword ptr [EAX + 0xe0]         ; 004e3bed
    LEA ESI,[ESP + 0x6b8]               ; 004e3bf3
    ADD ESP,0x4                         ; 004e3bfa
    LEA EAX,[ESP + 0x36c]               ; 004e3bfd
    MOVSD ES:EDI,ESI                    ; 004e3c04
    MOVSD ES:EDI,ESI                    ; 004e3c05
    MOVSD ES:EDI,ESI                    ; 004e3c06
    PUSH EAX                            ; 004e3c07
    FLD float ptr [ESP + 0x52c]         ; 004e3c08
    FLD float ptr [ESP + 0x530]         ; 004e3c0f
    FLD float ptr [ESP + 0x534]         ; 004e3c16
    LEA EDI,[ESP + 0x370]               ; 004e3c1d
    LEA ESI,[ESP + 0x538]               ; 004e3c24
    FXCH ST2                            ; 004e3c2b
    FADD float ptr [0x005c6a7e]         ; 004e3c2d | DAT_005c6a7e
    FXCH                                ; 004e3c33
    FADD float ptr [0x005c6a82]         ; 004e3c35 | DAT_005c6a82
    FXCH ST2                            ; 004e3c3b
    FADD float ptr [0x005c6a86]         ; 004e3c3d | DAT_005c6a86
    FXCH                                ; 004e3c43
    FSTP float ptr [ESP + 0x538]        ; 004e3c45
    FXCH                                ; 004e3c4c
    FSTP float ptr [ESP + 0x53c]        ; 004e3c4e
    FSTP float ptr [ESP + 0x540]        ; 004e3c55
    MOVSD ES:EDI,ESI                    ; 004e3c5c
    MOVSD ES:EDI,ESI                    ; 004e3c5d
    MOVSD ES:EDI,ESI                    ; 004e3c5e
    PUSH EBX                            ; 004e3c5f
    LEA ESI,[ESP + 0x128]               ; 004e3c60
    LEA EDI,[ESP + 0x398]               ; 004e3c67
    CALL core_actor.cpp_FUN_00408b80    ; 004e3c6e
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x128]               ; 004e3c73
    LEA EAX,[ESP + 0x398]               ; 004e3c7a
    ADD ESP,0x8                         ; 004e3c81
    LEA EDX,[ESP + 0x1f8]               ; 004e3c84
    MOVSD ES:EDI,ESI                    ; 004e3c8b
    MOVSD ES:EDI,ESI                    ; 004e3c8c
    MOVSD ES:EDI,ESI                    ; 004e3c8d
    CMP EDX,EAX                         ; 004e3c8e
    JZ 0x004e3cbc                       ; 004e3c90
        ;   XREF to: 004e3cbc (CONDITIONAL_JUMP)  ; LAB_004e3cbc
    MOV EAX,dword ptr [ESP + 0x390]     ; 004e3c92
    MOV dword ptr [ESP + 0x1f8],EAX     ; 004e3c99
    MOV EAX,dword ptr [ESP + 0x394]     ; 004e3ca0
    MOV dword ptr [ESP + 0x1fc],EAX     ; 004e3ca7
    MOV EAX,dword ptr [ESP + 0x398]     ; 004e3cae
    MOV dword ptr [ESP + 0x200],EAX     ; 004e3cb5
    PUSH EBX                            ; 004e3cbc
        ;   Label: LAB_004e3cbc
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e3cbd
    LEA ESI,[ESP + 0x520]               ; 004e3cc3
    LEA EDI,[ESP + 0x6e8]               ; 004e3cca
    CALL dword ptr [EAX + 0xe0]         ; 004e3cd1
    LEA ESI,[ESP + 0x520]               ; 004e3cd7
    ADD ESP,0x4                         ; 004e3cde
    LEA EAX,[ESP + 0x3a8]               ; 004e3ce1
    MOVSD ES:EDI,ESI                    ; 004e3ce8
    MOVSD ES:EDI,ESI                    ; 004e3ce9
    MOVSD ES:EDI,ESI                    ; 004e3cea
    PUSH EAX                            ; 004e3ceb
    FLD float ptr [ESP + 0x6e8]         ; 004e3cec
    FLD float ptr [ESP + 0x6ec]         ; 004e3cf3
    FLD float ptr [ESP + 0x6f0]         ; 004e3cfa
    LEA EDI,[ESP + 0x3ac]               ; 004e3d01
    LEA ESI,[ESP + 0x4e4]               ; 004e3d08
    FXCH ST2                            ; 004e3d0f
    FADD float ptr [0x005c6a8a]         ; 004e3d11 | DAT_005c6a8a
    FXCH                                ; 004e3d17
    FADD float ptr [0x005c6a8e]         ; 004e3d19 | DAT_005c6a8e
    FXCH ST2                            ; 004e3d1f
    FADD float ptr [0x005c6a92]         ; 004e3d21 | DAT_005c6a92
    FXCH                                ; 004e3d27
    FSTP float ptr [ESP + 0x4e4]        ; 004e3d29
    FXCH                                ; 004e3d30
    FSTP float ptr [ESP + 0x4e8]        ; 004e3d32
    FSTP float ptr [ESP + 0x4ec]        ; 004e3d39
    MOVSD ES:EDI,ESI                    ; 004e3d40
    MOVSD ES:EDI,ESI                    ; 004e3d41
    MOVSD ES:EDI,ESI                    ; 004e3d42
    PUSH EBX                            ; 004e3d43
    LEA ESI,[ESP + 0xbc]                ; 004e3d44
    LEA EDI,[ESP + 0x5e4]               ; 004e3d4b
    CALL core_actor.cpp_FUN_00408b80    ; 004e3d52
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0xbc]                ; 004e3d57
    LEA EDX,[ESP + 0x5e4]               ; 004e3d5e
    ADD ESP,0x8                         ; 004e3d65
    LEA EAX,[ESP + 0x474]               ; 004e3d68
    MOVSD ES:EDI,ESI                    ; 004e3d6f
    MOVSD ES:EDI,ESI                    ; 004e3d70
    MOVSD ES:EDI,ESI                    ; 004e3d71
    CMP EAX,EDX                         ; 004e3d72
    JZ 0x004e2ec0                       ; 004e3d74
        ;   XREF to: 004e2ec0 (CONDITIONAL_JUMP)  ; LAB_004e2ec0
    MOV EAX,dword ptr [ESP + 0x5dc]     ; 004e3d7a
    MOV dword ptr [ESP + 0x474],EAX     ; 004e3d81
    MOV EAX,dword ptr [ESP + 0x5e0]     ; 004e3d88
    MOV dword ptr [ESP + 0x478],EAX     ; 004e3d8f
    MOV EAX,dword ptr [ESP + 0x5e4]     ; 004e3d96
    JMP 0x004e2eb9                      ; 004e3d9d
        ;   XREF to: 004e2eb9 (UNCONDITIONAL_JUMP)  ; LAB_004e2eb9
    CMP EAX,0x4                         ; 004e3da2
        ;   Label: LAB_004e3da2
    JBE 0x004e2d48                      ; 004e3da5
        ;   XREF to: 004e2d48 (CONDITIONAL_JUMP)  ; switchD
    JMP 0x004e2ec0                      ; 004e3dab
        ;   XREF to: 004e2ec0 (UNCONDITIONAL_JUMP)  ; LAB_004e2ec0

