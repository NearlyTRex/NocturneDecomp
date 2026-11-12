; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_004a2090(CFireEffect *param_1,CVector3f *param_2,undefined4 param_3,undefined4 param_4,int param_5,int param_6)
;
; Local Variables:
; undefined        Stack[-0x70]:1  local_70
; undefined4       Stack[-0x3c]:4  local_3c
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
;
; XREF[8]:
;   core_blundrbs.cpp_CBlunderbus_fire_FUN_00410490 at 00411444
;   core_burncrss.cpp_CBurncross_fire_FUN_00424550 at 00424dcd
;   core_elephant.cpp_CElephantGun_fire_FUN_00486d40 at 0048754b
;   core_flintlck.cpp_CFlintlock_fire_FUN_004ae850 at 004aef94
;   core_gun.cpp_CGun_fire_FUN_004d0fc0 at 004d1865
;   core_lightsta.cpp_FUN_004e1070 at 004e1ffd
;   core_rifle.cpp_CRifle_fire_FUN_00527d70 at 005284b7
;   core_tommygun.cpp_CTommyGun_fire_FUN_0056b410 at 0056bcfa
;
; Referenced Globals:
;   undefined1* switchdataD_004a2034 = 004a21d0
;   undefined1* switchdataD_004a205c = 004a21f1
;   TerminatedCString s_ric_s_wav_005c0980
;   TerminatedCString s_ric_s_wav_005c098d
;   TerminatedCString s_ric_s_wav_005c099a
;   TerminatedCString s_ric_s_wav_005c09a7
;   undefined4 DAT_005c09b8
;   undefined4 DAT_005fdbf8
;   undefined2 DAT_005fdbfc
;   undefined4 DAT_006045f8
;   undefined4 DAT_01c74e9c
;   undefined4 DAT_01c74ea0
;   undefined4 DAT_01c8aea0
;   undefined4 DAT_01c8aea8
;   undefined4 DAT_01c8aeac
;   ... and 4 more
;
; Called Functions:
;   core_actor.cpp_randomChance_FUN_0040cf40
;   core_dcamera.cpp_CDemonCamera_isSphereVisible_FUN_0044f4d0
;   core_fire.cpp_allocateBulletHole_FUN_004a1420
;   core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0
;   core_fire.cpp_CSmokeParticle_init_FUN_00496d60
;   core_fire.cpp_FUN_00497290
;   core_ground.cpp_getGroundTypeCode_FUN_004cf9a0
;   core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70
;   crt_unknown.c_sprintf_FUN_005a28c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a2090
        ;   Label: core_fire.cpp_FUN_004a2090
    PUSH ESI                            ; 004a2091
    PUSH EDI                            ; 004a2092
    PUSH EBP                            ; 004a2093
    MOV EBP,ESP                         ; 004a2094
    SUB ESP,0x60                        ; 004a2096
    AND ESP,0xfffffff8                  ; 004a2099
    MOV EBX,dword ptr [EBP + 0x18]      ; 004a209c
    MOV ECX,0x1                         ; 004a209f
    MOV EDX,0x1c8aea8                   ; 004a20a4
    MOV ESI,dword ptr [EBP + 0x24]      ; 004a20a9
    MOV dword ptr [ESP + 0x58],ECX      ; 004a20ac
    MOV dword ptr [ESP + 0x5c],EDX      ; 004a20b0
    TEST ESI,ESI                        ; 004a20b4
    JNZ 0x004a2202                      ; 004a20b6
        ;   XREF to: 004a2202 (CONDITIONAL_JUMP)  ; LAB_004a2202
    CMP dword ptr [ESP + 0x58],0x0      ; 004a20bc
        ;   Label: LAB_004a20bc
    JZ 0x004a2236                       ; 004a20c1
        ;   XREF to: 004a2236 (CONDITIONAL_JUMP)  ; LAB_004a2236
    MOV EDX,dword ptr [EBP + 0x28]      ; 004a20c7
    TEST EDX,EDX                        ; 004a20ca
    JNZ 0x004a2236                      ; 004a20cc
        ;   XREF to: 004a2236 (CONDITIONAL_JUMP)  ; LAB_004a2236
    CMP dword ptr [0x01c8aea0],0x0      ; 004a20d2 | DAT_01c8aea0
    JLE 0x004a2236                      ; 004a20d9
        ;   XREF to: 004a2236 (CONDITIONAL_JUMP)  ; LAB_004a2236
    FLD float ptr [EBX]                 ; 004a20df
        ;   Label: LAB_004a20df
    FLD float ptr [EBX + 0x4]           ; 004a20e1
    FLD float ptr [EBX + 0x8]           ; 004a20e4
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004a20e7
    LEA EDI,[ESP + 0x40]                ; 004a20eb
    LEA ESI,[ESP + 0x34]                ; 004a20ef
    FXCH ST2                            ; 004a20f3
    FSUB float ptr [EAX]                ; 004a20f5 | DAT_01c8aea8 | DAT_01c8aee8
    FXCH                                ; 004a20f7
    FSUB float ptr [EAX + 0x4]          ; 004a20f9 | DAT_01c8aeac | DAT_01c8aeec
    FXCH ST2                            ; 004a20fc
    FSUB float ptr [EAX + 0x8]          ; 004a20fe | DAT_01c8aeb0 | DAT_01c8aef0
    FXCH ST2                            ; 004a2101
    FSTP float ptr [ESP + 0x38]         ; 004a2103
    FXCH                                ; 004a2107
    FSTP float ptr [ESP + 0x3c]         ; 004a2109
    FSTP float ptr [ESP + 0x34]         ; 004a210d
    MOVSD ES:EDI,ESI                    ; 004a2111
    MOVSD ES:EDI,ESI                    ; 004a2112
    MOVSD ES:EDI,ESI                    ; 004a2113
    LEA EAX,[ESP + 0x4c]                ; 004a2114
    LEA ESI,[ESP + 0x40]                ; 004a2118
    CMP EAX,ESI                         ; 004a211c
    JZ 0x004a2138                       ; 004a211e
        ;   XREF to: 004a2138 (CONDITIONAL_JUMP)  ; LAB_004a2138
    MOV EAX,dword ptr [ESP + 0x40]      ; 004a2120
    MOV dword ptr [ESP + 0x4c],EAX      ; 004a2124
    MOV EAX,dword ptr [ESP + 0x44]      ; 004a2128
    MOV dword ptr [ESP + 0x50],EAX      ; 004a212c
    MOV EAX,dword ptr [ESP + 0x48]      ; 004a2130
    MOV dword ptr [ESP + 0x54],EAX      ; 004a2134
    FLD float ptr [ESP + 0x50]          ; 004a2138
        ;   Label: LAB_004a2138
    FMUL ST0                            ; 004a213c
    FLD float ptr [ESP + 0x4c]          ; 004a213e
    FMUL ST0                            ; 004a2142
    FADDP                               ; 004a2144
    FLD float ptr [ESP + 0x54]          ; 004a2146
    FMUL ST0                            ; 004a214a
    FADDP                               ; 004a214c
    FCOMP double ptr [0x005c09b8]       ; 004a214e | DAT_005c09b8
    FNSTSW AX                           ; 004a2154
    SAHF                                ; 004a2156
    JNC 0x004a221c                      ; 004a2157
        ;   XREF to: 004a221c (CONDITIONAL_JUMP)  ; LAB_004a221c
    PUSH 0x3f000000                     ; 004a215d
        ;   Label: LAB_004a215d
    PUSH EBX                            ; 004a2162
    PUSH 0x2038f4c                      ; 004a2163
    CALL core_dcamera.cpp_CDemonCamera_isSphereVisible_FUN_0044f4d0 ; 004a2168
        ;   XREF to: 0044f4d0 (UNCONDITIONAL_CALL)  ; int core_dcamera.cpp_CDemonCamera_isSphereVisible_FUN_0044f4d0(CDemonCamera * this_ptr, CVector3f * position, float radius)
    ADD ESP,0xc                         ; 004a216d
    TEST EAX,EAX                        ; 004a2170
    JZ 0x004a21d0                       ; 004a2172
        ;   XREF to: 004a21d0 (CONDITIONAL_JUMP)  ; caseD_9
    XOR ESI,ESI                         ; 004a2174
    MOV EDI,dword ptr [0x01c74e9c]      ; 004a2176 | DAT_01c74e9c
        ;   Label: LAB_004a2176
    IMUL EAX,EDI,0x2c                   ; 004a217c
    LEA EDX,[EDI + 0x1]                 ; 004a217f
    ADD EAX,0x1c74ea0                   ; 004a2182
    MOV dword ptr [0x01c74e9c],EDX      ; 004a2187 | DAT_01c74e9c
    CMP EDX,0x800                       ; 004a218d
    JL 0x004a219d                       ; 004a2193
        ;   XREF to: 004a219d (CONDITIONAL_JUMP)  ; LAB_004a219d
    XOR EDI,EDI                         ; 004a2195
    MOV dword ptr [0x01c74e9c],EDI      ; 004a2197 | DAT_01c74e9c
    PUSH 0xffff                         ; 004a219d
        ;   Label: LAB_004a219d
    PUSH 0x0                            ; 004a21a2
    PUSH 0x3e99999a                     ; 004a21a4
    PUSH EBX                            ; 004a21a9
    PUSH EAX                            ; 004a21aa | DAT_01c74ea0
    INC ESI                             ; 004a21ab
    CALL core_fire.cpp_CSmokeParticle_init_FUN_00496d60 ; 004a21ac
        ;   XREF to: 00496d60 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CSmokeParticle_init_FUN_00496d60(CSmokeParticle * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD ESP,0x14                        ; 004a21b1
    CMP ESI,0x8                         ; 004a21b4
    JL 0x004a2176                       ; 004a21b7
        ;   XREF to: 004a2176 (CONDITIONAL_JUMP)  ; LAB_004a2176
    MOV EAX,dword ptr [EBP + 0x20]      ; 004a21b9
    CMP EAX,0x9                         ; 004a21bc
    JA 0x004a21d0                       ; 004a21bf
        ;   XREF to: 004a21d0 (CONDITIONAL_JUMP)  ; caseD_9
    JMP dword ptr [EAX*0x4 + 0x4a2034]  ; 004a21c1 | caseD_9 | caseD_8 | switchdataD_004a2034
        ;   Label: switchD
    MOV ECX,0xc                         ; 004a21d0
        ;   Label: caseD_0
    MOV EDI,ESP                         ; 004a21d5
    MOV ESI,0x5fdbf8                    ; 004a21d7 | DAT_005fdbf8
    MOVSD.REP ES:EDI,ESI                ; 004a21dc | DAT_005fdbf8 | DAT_005fdbfc
    MOVSW ES:EDI,ESI                    ; 004a21de | DAT_005fdbfc
    MOV ECX,dword ptr [EBP + 0x20]      ; 004a21e0
    CMP ECX,0x9                         ; 004a21e3
    JA 0x004a21f1                       ; 004a21e6
        ;   XREF to: 004a21f1 (CONDITIONAL_JUMP)  ; caseD_9
    MOV EAX,ECX                         ; 004a21e8
    JMP dword ptr [EAX*0x4 + 0x4a205c]  ; 004a21ea | caseD_9 | caseD_8 | caseD_4
        ;   Label: switchD
    CMP byte ptr [ESP],0x0              ; 004a21f1
        ;   Label: caseD_0
    JNZ 0x004a2392                      ; 004a21f5
        ;   XREF to: 004a2392 (CONDITIONAL_JUMP)  ; LAB_004a2392
    MOV ESP,EBP                         ; 004a21fb
    POP EBP                             ; 004a21fd
    POP EDI                             ; 004a21fe
    POP ESI                             ; 004a21ff
    POP EBX                             ; 004a2200
    RET                                 ; 004a2201
    PUSH ESI                            ; 004a2202
        ;   Label: LAB_004a2202
    MOV EAX,dword ptr [ESI + 0x154]     ; 004a2203
    CALL dword ptr [EAX + 0x4c]         ; 004a2209
    ADD ESP,0x4                         ; 004a220c
    TEST EAX,EAX                        ; 004a220f
    JNZ 0x004a20bc                      ; 004a2211
        ;   XREF to: 004a20bc (CONDITIONAL_JUMP)  ; LAB_004a20bc
    JMP 0x004a215d                      ; 004a2217
        ;   XREF to: 004a215d (UNCONDITIONAL_JUMP)  ; LAB_004a215d
    MOV ESI,dword ptr [ESP + 0x5c]      ; 004a221c
        ;   Label: LAB_004a221c
    MOV EDI,dword ptr [0x01c8aea0]      ; 004a2220 | DAT_01c8aea0
    ADD ESI,0x40                        ; 004a2226
    INC EDX                             ; 004a2229
    MOV dword ptr [ESP + 0x5c],ESI      ; 004a222a
    CMP EDX,EDI                         ; 004a222e
    JL 0x004a20df                       ; 004a2230
        ;   XREF to: 004a20df (CONDITIONAL_JUMP)  ; LAB_004a20df
    CMP dword ptr [ESP + 0x58],0x0      ; 004a2236
        ;   Label: LAB_004a2236
    JZ 0x004a215d                       ; 004a223b
        ;   XREF to: 004a215d (CONDITIONAL_JUMP)  ; LAB_004a215d
    CALL core_fire.cpp_allocateBulletHole_FUN_004a1420 ; 004a2241
        ;   XREF to: 004a1420 (UNCONDITIONAL_CALL)  ; CBulletHole * core_fire.cpp_allocateBulletHole_FUN_004a1420()
    MOV EDX,dword ptr [EBP + 0x28]      ; 004a2246
    PUSH EDX                            ; 004a2249
    MOV ECX,dword ptr [EBP + 0x24]      ; 004a224a
    PUSH ECX                            ; 004a224d
    MOV ESI,dword ptr [EBP + 0x1c]      ; 004a224e
    PUSH ESI                            ; 004a2251
    PUSH EBX                            ; 004a2252
    PUSH EAX                            ; 004a2253
    CALL core_fire.cpp_FUN_00497290     ; 004a2254
        ;   XREF to: 00497290 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_00497290()
    ADD ESP,0x14                        ; 004a2259
    JMP 0x004a215d                      ; 004a225c
        ;   XREF to: 004a215d (UNCONDITIONAL_JUMP)  ; LAB_004a215d
    XOR ESI,ESI                         ; 004a2261
        ;   Label: caseD_2
    PUSH 0xffff                         ; 004a2263
        ;   Label: LAB_004a2263
    PUSH 0x0                            ; 004a2268
    PUSH 0x10000                        ; 004a226a
    PUSH 0x20000                        ; 004a226f
    PUSH 0x0                            ; 004a2274
    PUSH EBX                            ; 004a2276
    MOV EDX,dword ptr [EBP + 0x14]      ; 004a2277
    PUSH EDX                            ; 004a227a
    INC ESI                             ; 004a227b
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0 ; 004a227c
        ;   XREF to: 004a23c0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 004a2281
    CMP ESI,0x8                         ; 004a2284
    JL 0x004a2263                       ; 004a2287
        ;   XREF to: 004a2263 (CONDITIONAL_JUMP)  ; LAB_004a2263
    JMP 0x004a21d0                      ; 004a2289
        ;   XREF to: 004a21d0 (UNCONDITIONAL_JUMP)  ; caseD_9
    PUSH 0x3e2aaaab                     ; 004a228e
        ;   Label: caseD_2
    CALL core_actor.cpp_randomChance_FUN_0040cf40 ; 004a2293
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 004a2298
    TEST EAX,EAX                        ; 004a229b
    JZ 0x004a21f1                       ; 004a229d
        ;   XREF to: 004a21f1 (CONDITIONAL_JUMP)  ; caseD_9
    PUSH 0x2                            ; 004a22a3
    CALL core_ground.cpp_getGroundTypeCode_FUN_004cf9a0 ; 004a22a5
        ;   XREF to: 004cf9a0 (UNCONDITIONAL_CALL)  ; char * core_ground.cpp_getGroundTypeCode_FUN_004cf9a0(EGroundType type)
    ADD ESP,0x4                         ; 004a22aa
    PUSH EAX                            ; 004a22ad
    PUSH 0x5c0980                       ; 004a22ae | = "ric-%s!?.wav"
    LEA EAX,[ESP + 0x8]                 ; 004a22b3
    PUSH EAX                            ; 004a22b7
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004a22b8
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004a22bd
    CMP byte ptr [ESP],0x0              ; 004a22c0
    JNZ 0x004a2392                      ; 004a22c4
        ;   XREF to: 004a2392 (CONDITIONAL_JUMP)  ; LAB_004a2392
    MOV ESP,EBP                         ; 004a22ca
    POP EBP                             ; 004a22cc
    POP EDI                             ; 004a22cd
    POP ESI                             ; 004a22ce
    POP EBX                             ; 004a22cf
    RET                                 ; 004a22d0
    PUSH 0x3e2aaaab                     ; 004a22d1
        ;   Label: caseD_5
    CALL core_actor.cpp_randomChance_FUN_0040cf40 ; 004a22d6
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 004a22db
    TEST EAX,EAX                        ; 004a22de
    JZ 0x004a21f1                       ; 004a22e0
        ;   XREF to: 004a21f1 (CONDITIONAL_JUMP)  ; caseD_9
    PUSH 0x5                            ; 004a22e6
    CALL core_ground.cpp_getGroundTypeCode_FUN_004cf9a0 ; 004a22e8
        ;   XREF to: 004cf9a0 (UNCONDITIONAL_CALL)  ; char * core_ground.cpp_getGroundTypeCode_FUN_004cf9a0(EGroundType type)
    ADD ESP,0x4                         ; 004a22ed
    PUSH EAX                            ; 004a22f0
    PUSH 0x5c098d                       ; 004a22f1 | = "ric-%s!?.wav"
    LEA EAX,[ESP + 0x8]                 ; 004a22f6
    PUSH EAX                            ; 004a22fa
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004a22fb
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004a2300
    CMP byte ptr [ESP],0x0              ; 004a2303
    JNZ 0x004a2392                      ; 004a2307
        ;   XREF to: 004a2392 (CONDITIONAL_JUMP)  ; LAB_004a2392
    MOV ESP,EBP                         ; 004a230d
    POP EBP                             ; 004a230f
    POP EDI                             ; 004a2310
    POP ESI                             ; 004a2311
    POP EBX                             ; 004a2312
    RET                                 ; 004a2313
    PUSH 0x3e2aaaab                     ; 004a2314
        ;   Label: caseD_7
    CALL core_actor.cpp_randomChance_FUN_0040cf40 ; 004a2319
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 004a231e
    TEST EAX,EAX                        ; 004a2321
    JZ 0x004a21f1                       ; 004a2323
        ;   XREF to: 004a21f1 (CONDITIONAL_JUMP)  ; caseD_9
    PUSH 0x7                            ; 004a2329
    CALL core_ground.cpp_getGroundTypeCode_FUN_004cf9a0 ; 004a232b
        ;   XREF to: 004cf9a0 (UNCONDITIONAL_CALL)  ; char * core_ground.cpp_getGroundTypeCode_FUN_004cf9a0(EGroundType type)
    ADD ESP,0x4                         ; 004a2330
    PUSH EAX                            ; 004a2333
    PUSH 0x5c099a                       ; 004a2334 | = "ric-%s!?.wav"
    LEA EAX,[ESP + 0x8]                 ; 004a2339
    PUSH EAX                            ; 004a233d
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004a233e
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004a2343
    CMP byte ptr [ESP],0x0              ; 004a2346
    JNZ 0x004a2392                      ; 004a234a
        ;   XREF to: 004a2392 (CONDITIONAL_JUMP)  ; LAB_004a2392
    MOV ESP,EBP                         ; 004a234c
    POP EBP                             ; 004a234e
    POP EDI                             ; 004a234f
    POP ESI                             ; 004a2350
    POP EBX                             ; 004a2351
    RET                                 ; 004a2352
    PUSH 0x3e2aaaab                     ; 004a2353
        ;   Label: caseD_3
    CALL core_actor.cpp_randomChance_FUN_0040cf40 ; 004a2358
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 004a235d
    TEST EAX,EAX                        ; 004a2360
    JZ 0x004a21f1                       ; 004a2362
        ;   XREF to: 004a21f1 (CONDITIONAL_JUMP)  ; caseD_9
    PUSH 0x3                            ; 004a2368
    CALL core_ground.cpp_getGroundTypeCode_FUN_004cf9a0 ; 004a236a
        ;   XREF to: 004cf9a0 (UNCONDITIONAL_CALL)  ; char * core_ground.cpp_getGroundTypeCode_FUN_004cf9a0(EGroundType type)
    ADD ESP,0x4                         ; 004a236f
    PUSH EAX                            ; 004a2372
    PUSH 0x5c09a7                       ; 004a2373 | = "ric-%s.wav"
    LEA EAX,[ESP + 0x8]                 ; 004a2378
    PUSH EAX                            ; 004a237c
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004a237d
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004a2382
    CMP byte ptr [ESP],0x0              ; 004a2385
    JNZ 0x004a2392                      ; 004a2389
        ;   XREF to: 004a2392 (CONDITIONAL_JUMP)  ; LAB_004a2392
    MOV ESP,EBP                         ; 004a238b
    POP EBP                             ; 004a238d
    POP EDI                             ; 004a238e
    POP ESI                             ; 004a238f
    POP EBX                             ; 004a2390
    RET                                 ; 004a2391
    PUSH 0x3e2e147b                     ; 004a2392
        ;   Label: LAB_004a2392
    PUSH EBX                            ; 004a2397
    LEA EAX,[ESP + 0x8]                 ; 004a2398
    PUSH EAX                            ; 004a239c
    PUSH 0x0                            ; 004a239d
    MOV EBX,dword ptr [0x006045f8]      ; 004a239f | DAT_006045f8
    PUSH EBX                            ; 004a23a5
    CALL core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70 ; 004a23a6
        ;   XREF to: 00560a70 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position, ...)
    ADD ESP,0x14                        ; 004a23ab
    MOV ESP,EBP                         ; 004a23ae
    POP EBP                             ; 004a23b0
    POP EDI                             ; 004a23b1
    POP ESI                             ; 004a23b2
    POP EBX                             ; 004a23b3
    RET                                 ; 004a23b4

