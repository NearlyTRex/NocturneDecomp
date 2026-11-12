; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vehicle_cpp_CVehicle_process_FUN_00583f20(CVehicle *this_ptr,float delta_time)
;
; Parameters:
; CVehicle *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined4 s_model_t_horn_wav_005edc86+1
;   TerminatedCString s_core_vehicle_cpp_005edc99
;   TerminatedCString s_CMobster_process_Out_of_005edcad
;   TerminatedCString s_mobster3_dfm_005edcd0
;   TerminatedCString s_mobster4_dfm_005edcdd
;   TerminatedCString s_ext_modelt_fast_wav_005edcea
;   TerminatedCString s_skid_wav_005edd01
;   undefined4 DAT_005edd0f
;   undefined4 DAT_005edd13
;   undefined4 DAT_005edd17
;   undefined4 DAT_005edd1f
;   undefined4 DAT_005edd27
;   undefined4 DAT_005edd2f
;   undefined4 DAT_00618170
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   ... and 12 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_FUN_00408d30
;   core_actor.cpp_FUN_00408de0
;   core_actor.cpp_randomChance_FUN_0040d060
;   core_charactr.cpp_FUN_00428b10
;   core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0
;   core_course.cpp_CCourse_evaluate_FUN_00438c40
;   core_main.c_FUN_004e4500
;   core_mission.cpp_CDemonMission_addActorToList_FUN_004fc200
;   core_mission.cpp_CDemonMission_generateActorName_FUN_004fcda0
;   core_mobster.cpp_CMobster_ctor_FUN_004fd810
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_00537fa0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;   core_tommygun.cpp_CTommyGun_ctor_FUN_00575760
;   core_vehicle.cpp_CVehicle_playTrackedSound_FUN_00584d90
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00583f20
        ;   Label: core_vehicle.cpp_CVehicle_process_FUN_00583f20
    PUSH ESI                            ; 00583f21
    PUSH EDI                            ; 00583f22
    PUSH EBP                            ; 00583f23
    MOV EBP,ESP                         ; 00583f24
    SUB ESP,0x164                       ; 00583f26
    AND ESP,0xfffffff8                  ; 00583f2c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00583f2f
    LEA EAX,[EBX + 0x117c]              ; 00583f32
    MOV EDX,dword ptr [EAX]             ; 00583f38
    FLD float ptr [EBX + 0x1188]        ; 00583f3a
    MOV dword ptr [ESP + 0x160],EDX     ; 00583f40
    LEA EDX,[ESP + 0xd4]                ; 00583f47
    FILD dword ptr [ESP + 0x160]        ; 00583f4e
    PUSH EDX                            ; 00583f55
    LEA EDX,[ESP + 0xfc]                ; 00583f56
    FXCH                                ; 00583f5d
    FDIV float ptr [EBX + 0x118c]       ; 00583f5f
    FMULP                               ; 00583f65
    PUSH EDX                            ; 00583f67
    FSTP float ptr [ESP + 0x148]        ; 00583f68
    PUSH dword ptr [ESP + 0x148]        ; 00583f6f
    PUSH EAX                            ; 00583f76
    CALL core_course.cpp_CCourse_evaluate_FUN_00438c40 ; 00583f77
        ;   XREF to: 00438c40 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_evaluate_FUN_00438c40(CCourse * this_ptr, float time, CVector3f * out_pos, CVector3f * out_euler)
    ADD ESP,0x10                        ; 00583f7c
    FLD float ptr [EBX + 0x1188]        ; 00583f7f
    FADD float ptr [EBP + 0x18]         ; 00583f85
    FST float ptr [EBX + 0x1188]        ; 00583f88
    FCOMP float ptr [EBX + 0x118c]      ; 00583f8e
    FNSTSW AX                           ; 00583f94
    SAHF                                ; 00583f96
    JBE 0x00583fab                      ; 00583f97
        ;   XREF to: 00583fab (CONDITIONAL_JUMP)  ; LAB_00583fab
    FLD float ptr [EBX + 0x118c]        ; 00583f99
    FSUBR float ptr [EBX + 0x1188]      ; 00583f9f
    FSTP float ptr [EBX + 0x1188]       ; 00583fa5
    LEA EAX,[EBX + 0x117c]              ; 00583fab
        ;   Label: LAB_00583fab
    MOV EDX,dword ptr [EAX]             ; 00583fb1
    FLD float ptr [EBX + 0x1188]        ; 00583fb3
    MOV dword ptr [ESP + 0x160],EDX     ; 00583fb9
    LEA EDX,[EBX + 0x30]                ; 00583fc0
    FILD dword ptr [ESP + 0x160]        ; 00583fc3
    PUSH EDX                            ; 00583fca
    LEA ESI,[EBX + 0x20]                ; 00583fcb
    FXCH                                ; 00583fce
    FDIV float ptr [EBX + 0x118c]       ; 00583fd0
    FMULP                               ; 00583fd6
    PUSH ESI                            ; 00583fd8
    FSTP float ptr [ESP + 0x148]        ; 00583fd9
    PUSH dword ptr [ESP + 0x148]        ; 00583fe0
    PUSH EAX                            ; 00583fe7
    LEA EDI,[ESP + 0xf0]                ; 00583fe8
    CALL core_course.cpp_CCourse_evaluate_FUN_00438c40 ; 00583fef
        ;   XREF to: 00438c40 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_evaluate_FUN_00438c40(CCourse * this_ptr, float time, CVector3f * out_pos, CVector3f * out_euler)
    FLD float ptr [ESI]                 ; 00583ff4
    FLD float ptr [ESI + 0x4]           ; 00583ff6
    FLD float ptr [ESI + 0x8]           ; 00583ff9
    ADD ESP,0x10                        ; 00583ffc
    XOR EDX,EDX                         ; 00583fff
    LEA ESI,[ESP + 0xbc]                ; 00584001
    FLD float ptr [EBP + 0x18]          ; 00584008
    FLDZ                                ; 0058400b
    MOV dword ptr [ESP + 0x148],EDX     ; 0058400d
    FXCH ST4                            ; 00584014
    FSUB float ptr [ESP + 0xf8]         ; 00584016
    FXCH ST3                            ; 0058401d
    FSUB float ptr [ESP + 0xfc]         ; 0058401f
    FXCH ST2                            ; 00584026
    FSUB float ptr [ESP + 0x100]        ; 00584028
    FXCH ST3                            ; 0058402f
    FSTP float ptr [ESP + 0xbc]         ; 00584031
    FXCH                                ; 00584038
    FSTP float ptr [ESP + 0xc0]         ; 0058403a
    FXCH                                ; 00584041
    FSTP float ptr [ESP + 0xc4]         ; 00584043
    LEA EDX,[EBX + 0xa20]               ; 0058404a
    MOVSD ES:EDI,ESI                    ; 00584050
    MOVSD ES:EDI,ESI                    ; 00584051
    MOVSD ES:EDI,ESI                    ; 00584052
    FXCH                                ; 00584053
    FCOMPP                              ; 00584055
    FNSTSW AX                           ; 00584057
    SAHF                                ; 00584059
    JNC 0x005842bf                      ; 0058405a
        ;   XREF to: 005842bf (CONDITIONAL_JUMP)  ; LAB_005842bf
    FLD1                                ; 00584060
    FLD float ptr [ESP + 0xe0]          ; 00584062
    FXCH                                ; 00584069
    FDIV float ptr [EBP + 0x18]         ; 0058406b
    FXCH                                ; 0058406e
    FMUL ST1                            ; 00584070
    FLD float ptr [ESP + 0xe4]          ; 00584072
    FMUL ST2                            ; 00584079
    FLD float ptr [ESP + 0xe8]          ; 0058407b
    FMULP ST3                           ; 00584082
    LEA EDI,[ESP + 0x128]               ; 00584084
    LEA ESI,[ESP + 0xa4]                ; 0058408b
    LEA EAX,[ESP + 0x128]               ; 00584092
    FXCH                                ; 00584099
    FSTP float ptr [ESP + 0xa4]         ; 0058409b
    FSTP float ptr [ESP + 0xa8]         ; 005840a2
    FSTP float ptr [ESP + 0xac]         ; 005840a9
    MOVSD ES:EDI,ESI                    ; 005840b0
    MOVSD ES:EDI,ESI                    ; 005840b1
    MOVSD ES:EDI,ESI                    ; 005840b2
    CMP EDX,EAX                         ; 005840b3
    JZ 0x005840d4                       ; 005840b5
        ;   XREF to: 005840d4 (CONDITIONAL_JUMP)  ; LAB_005840d4
    MOV EAX,dword ptr [ESP + 0x128]     ; 005840b7
    MOV dword ptr [EDX],EAX             ; 005840be
    MOV EAX,dword ptr [ESP + 0x12c]     ; 005840c0
    MOV dword ptr [EDX + 0x4],EAX       ; 005840c7
    MOV EAX,dword ptr [ESP + 0x130]     ; 005840ca
    MOV dword ptr [EDX + 0x8],EAX       ; 005840d1
    LEA EAX,[EBX + 0xa20]               ; 005840d4
        ;   Label: LAB_005840d4
    FLD float ptr [EAX + 0x4]           ; 005840da
    FMUL ST0                            ; 005840dd
    FLD float ptr [EAX]                 ; 005840df
    FMUL ST0                            ; 005840e1
    FADDP                               ; 005840e3
    FLD float ptr [EAX + 0x8]           ; 005840e5
    FMUL ST0                            ; 005840e8
    FADDP                               ; 005840ea
    FSQRT                               ; 005840ec
    FSTP float ptr [ESP + 0x148]        ; 005840ee
    LEA EAX,[EBX + 0xa20]               ; 005840f5
        ;   Label: LAB_005840f5
    FLD float ptr [0x005edd0f]          ; 005840fb | DAT_005edd0f
    FLD float ptr [EAX]                 ; 00584101
    FMUL ST1                            ; 00584103
    FLD float ptr [EAX + 0x4]           ; 00584105
    FMUL ST2                            ; 00584108
    FLD float ptr [EAX + 0x8]           ; 0058410a
    FMULP ST3                           ; 0058410d
    LEA EDI,[ESP + 0x110]               ; 0058410f
    LEA ESI,[ESP + 0xb0]                ; 00584116
    LEA EDX,[EBX + 0x11bc]              ; 0058411d
    LEA EAX,[ESP + 0x110]               ; 00584123
    FXCH                                ; 0058412a
    FSTP float ptr [ESP + 0xb0]         ; 0058412c
    FSTP float ptr [ESP + 0xb4]         ; 00584133
    FSTP float ptr [ESP + 0xb8]         ; 0058413a
    MOVSD ES:EDI,ESI                    ; 00584141
    MOVSD ES:EDI,ESI                    ; 00584142
    MOVSD ES:EDI,ESI                    ; 00584143
    CMP EDX,EAX                         ; 00584144
    JZ 0x00584165                       ; 00584146
        ;   XREF to: 00584165 (CONDITIONAL_JUMP)  ; LAB_00584165
    MOV EAX,dword ptr [ESP + 0x110]     ; 00584148
    MOV dword ptr [EDX],EAX             ; 0058414f
    MOV EAX,dword ptr [ESP + 0x114]     ; 00584151
    MOV dword ptr [EDX + 0x4],EAX       ; 00584158
    MOV EAX,dword ptr [ESP + 0x118]     ; 0058415b
    MOV dword ptr [EDX + 0x8],EAX       ; 00584162
    LEA EAX,[EBX + 0xa20]               ; 00584165
        ;   Label: LAB_00584165
    PUSH EAX                            ; 0058416b
    PUSH EBX                            ; 0058416c
    LEA ESI,[ESP + 0x10c]               ; 0058416d
    LEA EDI,[ESP + 0xa0]                ; 00584174
    CALL core_actor.cpp_FUN_00408d30    ; 0058417b
        ;   XREF to: 00408d30 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d30()
    LEA ESI,[ESP + 0x10c]               ; 00584180
    LEA EAX,[ESP + 0xa0]                ; 00584187
    ADD ESP,0x8                         ; 0058418e
    LEA EDX,[EBX + 0xa2c]               ; 00584191
    MOVSD ES:EDI,ESI                    ; 00584197
    MOVSD ES:EDI,ESI                    ; 00584198
    MOVSD ES:EDI,ESI                    ; 00584199
    CMP EDX,EAX                         ; 0058419a
    JZ 0x005841bb                       ; 0058419c
        ;   XREF to: 005841bb (CONDITIONAL_JUMP)  ; LAB_005841bb
    MOV EAX,dword ptr [ESP + 0x98]      ; 0058419e
    MOV dword ptr [EDX],EAX             ; 005841a5
    MOV EAX,dword ptr [ESP + 0x9c]      ; 005841a7
    MOV dword ptr [EDX + 0x4],EAX       ; 005841ae
    MOV EAX,dword ptr [ESP + 0xa0]      ; 005841b1
    MOV dword ptr [EDX + 0x8],EAX       ; 005841b8
    MOV ESI,dword ptr [EBX + 0xa94]     ; 005841bb
        ;   Label: LAB_005841bb
    XOR ECX,ECX                         ; 005841c1
    TEST ESI,ESI                        ; 005841c3
    JLE 0x005841f7                      ; 005841c5
        ;   XREF to: 005841f7 (CONDITIONAL_JUMP)  ; LAB_005841f7
    FLD float ptr [ESP + 0x148]         ; 005841c7
    MOV ESI,EBX                         ; 005841ce
    FLD float ptr [ESI + 0xaa4]         ; 005841d0
        ;   Label: LAB_005841d0
    FMUL ST1                            ; 005841d6
    FADD float ptr [ESI + 0xc28]        ; 005841d8
    INC ECX                             ; 005841de
    FSTP float ptr [ESI + 0xc28]        ; 005841df
    MOV EDI,dword ptr [EBX + 0xa94]     ; 005841e5
    ADD ESI,0x1b4                       ; 005841eb
    CMP ECX,EDI                         ; 005841f1
    JL 0x005841d0                       ; 005841f3
        ;   XREF to: 005841d0 (CONDITIONAL_JUMP)  ; LAB_005841d0
    FSTP ST0                            ; 005841f5
    FLD float ptr [EBX + 0x24]          ; 005841f7
        ;   Label: LAB_005841f7
    FLD float ptr [EBX + 0x34]          ; 005841fa
    LEA ESI,[ESP + 0x80]                ; 005841fd
    LEA EDI,[ESP + 0x68]                ; 00584204
    MOV dword ptr [EBX + 0x30],0x0      ; 00584208
    PUSH EBX                            ; 0058420f
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00584210
    FXCH                                ; 00584216
    FADD float ptr [0x005edd13]         ; 00584218 | DAT_005edd13
    FXCH                                ; 0058421e
    FADD float ptr [0x005edd17]         ; 00584220 | DAT_005edd17
    FXCH                                ; 00584226
    FSTP float ptr [EBX + 0x24]         ; 00584228
    FSTP float ptr [EBX + 0x34]         ; 0058422b
    CALL dword ptr [EAX + 0x24]         ; 0058422e
    MOV ECX,0x6                         ; 00584231
    ADD ESP,0x4                         ; 00584236
    XOR EAX,EAX                         ; 00584239
    LEA ESI,[ESP + 0x80]                ; 0058423b
    MOV dword ptr [ESP + 0x158],EAX     ; 00584242
    MOV dword ptr [ESP + 0x154],EAX     ; 00584249
    MOVSD.REP ES:EDI,ESI                ; 00584250
    MOV EDX,dword ptr [0x0061b5a8]      ; 00584252 | g_CDemonSetPtr
        ;   Label: LAB_00584252
    MOV EAX,dword ptr [ESP + 0x158]     ; 00584258
    CMP EAX,dword ptr [EDX + 0x14f0a8]  ; 0058425f | g_CDemonSetInstance.character_count
    JGE 0x0058446d                      ; 00584265
        ;   XREF to: 0058446d (CONDITIONAL_JUMP)  ; LAB_0058446d
    MOV ECX,dword ptr [ESP + 0x154]     ; 0058426b
    MOV ESI,dword ptr [0x01d1c778]      ; 00584272 | g_CMobsterClassInfo.name_hash
    ADD EDX,ECX                         ; 00584278
    PUSH ESI                            ; 0058427a
    MOV EAX,dword ptr [EDX + 0x14f0ac]  ; 0058427b | g_CDemonSetInstance.characters[0]
    PUSH EAX                            ; 00584281
    MOV dword ptr [ESP + 0x164],EAX     ; 00584282
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 00584289
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0058428e
    TEST EAX,EAX                        ; 00584291
    JZ 0x005842e7                       ; 00584293
        ;   XREF to: 005842e7 (CONDITIONAL_JUMP)  ; LAB_005842e7
    CMP EBX,dword ptr [EAX + 0x10b1c]   ; 00584295
    JNZ 0x005842e7                      ; 0058429b
        ;   XREF to: 005842e7 (CONDITIONAL_JUMP)  ; LAB_005842e7
    MOV EDI,dword ptr [ESP + 0x158]     ; 0058429d
        ;   Label: LAB_0058429d
    MOV ESI,dword ptr [ESP + 0x154]     ; 005842a4
    INC EDI                             ; 005842ab
    ADD ESI,0x4                         ; 005842ac
    MOV dword ptr [ESP + 0x158],EDI     ; 005842af
    MOV dword ptr [ESP + 0x154],ESI     ; 005842b6
    JMP 0x00584252                      ; 005842bd
        ;   XREF to: 00584252 (UNCONDITIONAL_JUMP)  ; LAB_00584252
    CMP EDX,0x265370c                   ; 005842bf
        ;   Label: LAB_005842bf
    JZ 0x005840f5                       ; 005842c5
        ;   XREF to: 005840f5 (CONDITIONAL_JUMP)  ; LAB_005840f5
    MOV EAX,[0x0265370c]                ; 005842cb | DAT_0265370c
    MOV dword ptr [EDX],EAX             ; 005842d0
    MOV EAX,[0x02653710]                ; 005842d2 | DAT_02653710
    MOV dword ptr [EDX + 0x4],EAX       ; 005842d7
    MOV EAX,[0x02653714]                ; 005842da | DAT_02653714
    MOV dword ptr [EDX + 0x8],EAX       ; 005842df
    JMP 0x005840f5                      ; 005842e2
        ;   XREF to: 005840f5 (UNCONDITIONAL_JUMP)  ; LAB_005840f5
    LEA EAX,[ESP + 0x40]                ; 005842e7
        ;   Label: LAB_005842e7
    PUSH EAX                            ; 005842eb
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_00537fa0 ; 005842ec
        ;   XREF to: 00537fa0 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_00537fa0(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 005842f1
    LEA EDX,[ESP + 0x40]                ; 005842f4
    PUSH EDX                            ; 005842f8
    MOV ECX,dword ptr [ESP + 0x160]     ; 005842f9
    MOV EAX,dword ptr [ESP + 0x160]     ; 00584300
    PUSH ECX                            ; 00584307
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 00584308
    CALL dword ptr [EAX + 0x44]         ; 0058430e
    ADD ESP,0x8                         ; 00584311
    CMP EAX,0x2                         ; 00584314
    JNZ 0x0058429d                      ; 00584317
        ;   XREF to: 0058429d (CONDITIONAL_JUMP)  ; LAB_0058429d
    FLD float ptr [EBX + 0x24]          ; 00584319
    FADD float ptr [ESP + 0x78]         ; 0058431c
    MOV EAX,dword ptr [ESP + 0x15c]     ; 00584320
    FCOMP float ptr [EAX + 0x24]        ; 00584327
    FNSTSW AX                           ; 0058432a
    SAHF                                ; 0058432c
    JC 0x0058429d                       ; 0058432d
        ;   XREF to: 0058429d (CONDITIONAL_JUMP)  ; LAB_0058429d
    MOV EAX,dword ptr [ESP + 0x15c]     ; 00584333
    FLD float ptr [EAX + 0x24]          ; 0058433a
    FADD float ptr [ESP + 0x58]         ; 0058433d
    FLD float ptr [EBX + 0x24]          ; 00584341
    FADD float ptr [ESP + 0x6c]         ; 00584344
    FCOMPP                              ; 00584348
    FNSTSW AX                           ; 0058434a
    SAHF                                ; 0058434c
    JA 0x0058429d                       ; 0058434d
        ;   XREF to: 0058429d (CONDITIONAL_JUMP)  ; LAB_0058429d
    MOV EAX,dword ptr [ESP + 0x15c]     ; 00584353
    ADD EAX,0x20                        ; 0058435a
    PUSH EAX                            ; 0058435d
    PUSH EBX                            ; 0058435e
    LEA ESI,[ESP + 0xf4]                ; 0058435f
    LEA EDI,[ESP + 0x124]               ; 00584366
    CALL core_actor.cpp_FUN_00408de0    ; 0058436d
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0xf4]                ; 00584372
    ADD ESP,0x8                         ; 00584379
    MOVSD ES:EDI,ESI                    ; 0058437c
    MOVSD ES:EDI,ESI                    ; 0058437d
    MOVSD ES:EDI,ESI                    ; 0058437e
    FLD float ptr [ESP + 0x11c]         ; 0058437f
    FADD float ptr [ESP + 0x5c]         ; 00584386
    FCOMP float ptr [ESP + 0x68]        ; 0058438a
    FNSTSW AX                           ; 0058438e
    SAHF                                ; 00584390
    JC 0x0058429d                       ; 00584391
        ;   XREF to: 0058429d (CONDITIONAL_JUMP)  ; LAB_0058429d
    FLD float ptr [ESP + 0x11c]         ; 00584397
    FSUB float ptr [ESP + 0x5c]         ; 0058439e
    FCOMP float ptr [ESP + 0x74]        ; 005843a2
    FNSTSW AX                           ; 005843a6
    SAHF                                ; 005843a8
    JA 0x0058429d                       ; 005843a9
        ;   XREF to: 0058429d (CONDITIONAL_JUMP)  ; LAB_0058429d
    FLD float ptr [ESP + 0x124]         ; 005843af
    FADD float ptr [ESP + 0x5c]         ; 005843b6
    FCOMP float ptr [ESP + 0x70]        ; 005843ba
    FNSTSW AX                           ; 005843be
    SAHF                                ; 005843c0
    JC 0x0058429d                       ; 005843c1
        ;   XREF to: 0058429d (CONDITIONAL_JUMP)  ; LAB_0058429d
    FLD float ptr [ESP + 0x124]         ; 005843c7
    FSUB float ptr [ESP + 0x5c]         ; 005843ce
    FST float ptr [ESP]                 ; 005843d2
    FCOMP float ptr [ESP + 0x7c]        ; 005843d5
    FNSTSW AX                           ; 005843d9
    SAHF                                ; 005843db
    JBE 0x00584426                      ; 005843dc
        ;   XREF to: 00584426 (CONDITIONAL_JUMP)  ; LAB_00584426
    FLD float ptr [ESP]                 ; 005843de
    FLD float ptr [ESP + 0x7c]          ; 005843e1
    FADD double ptr [0x005edd2f]        ; 005843e5 | DAT_005edd2f
    FCOMPP                              ; 005843eb
    FNSTSW AX                           ; 005843ed
    SAHF                                ; 005843ef
    JBE 0x0058429d                      ; 005843f0
        ;   XREF to: 0058429d (CONDITIONAL_JUMP)  ; LAB_0058429d
    MOV ECX,dword ptr [EBX + 0x11b0]    ; 005843f6
    PUSH ECX                            ; 005843fc
    CALL sound_sndmain.cpp_FUN_00550b70 ; 005843fd
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 00584402
    TEST EAX,EAX                        ; 00584405
    JNZ 0x0058429d                      ; 00584407
        ;   XREF to: 0058429d (CONDITIONAL_JUMP)  ; LAB_0058429d
    PUSH 0x5edc87                       ; 0058440d | s_model_t_horn_wav_005edc86+1
    PUSH EBX                            ; 00584412
    CALL core_vehicle.cpp_CVehicle_playTrackedSound_FUN_00584d90 ; 00584413
        ;   XREF to: 00584d90 (UNCONDITIONAL_CALL)  ; uint core_vehicle.cpp_CVehicle_playTrackedSound_FUN_00584d90(CVehicle * this_ptr, char * sound_name)
    ADD ESP,0x8                         ; 00584418
    MOV dword ptr [EBX + 0x11b0],EAX    ; 0058441b
    JMP 0x0058429d                      ; 00584421
        ;   XREF to: 0058429d (UNCONDITIONAL_JUMP)  ; LAB_0058429d
    LEA EAX,[ESP + 0x4]                 ; 00584426
        ;   Label: LAB_00584426
    PUSH EAX                            ; 0058442a
    MOV ESI,0x4                         ; 0058442b
    MOV EDI,0x4479c000                  ; 00584430
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 00584435
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0058443a
    LEA EDX,[ESP + 0x4]                 ; 0058443d
    MOV EAX,dword ptr [ESP + 0x15c]     ; 00584441
    MOV dword ptr [ESP + 0x34],ESI      ; 00584448
    MOV dword ptr [ESP + 0x8],EDI       ; 0058444c
    PUSH EDX                            ; 00584450
    MOV EDX,dword ptr [ESP + 0x160]     ; 00584451
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 00584458
    PUSH EDX                            ; 0058445e
    CALL dword ptr [EAX + 0x110]        ; 0058445f
    ADD ESP,0x8                         ; 00584465
    JMP 0x0058429d                      ; 00584468
        ;   XREF to: 0058429d (UNCONDITIONAL_JUMP)  ; LAB_0058429d
    CMP dword ptr [EBX + 0x11c8],0x0    ; 0058446d
        ;   Label: LAB_0058446d
    JZ 0x005844d1                       ; 00584474
        ;   XREF to: 005844d1 (CONDITIONAL_JUMP)  ; LAB_005844d1
    MOV ECX,dword ptr [EBX + 0x11b4]    ; 00584476
        ;   Label: LAB_00584476
    PUSH ECX                            ; 0058447c
    CALL sound_sndmain.cpp_FUN_00550b70 ; 0058447d
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 00584482
    TEST EAX,EAX                        ; 00584485
    JNZ 0x0058449d                      ; 00584487
        ;   XREF to: 0058449d (CONDITIONAL_JUMP)  ; LAB_0058449d
    PUSH 0x5edcea                       ; 00584489 | = "ext-modelt-fast_??.wav"
    PUSH EBX                            ; 0058448e
    CALL core_vehicle.cpp_CVehicle_playTrackedSound_FUN_00584d90 ; 0058448f
        ;   XREF to: 00584d90 (UNCONDITIONAL_CALL)  ; uint core_vehicle.cpp_CVehicle_playTrackedSound_FUN_00584d90(CVehicle * this_ptr, char * sound_name)
    ADD ESP,0x8                         ; 00584494
    MOV dword ptr [EBX + 0x11b4],EAX    ; 00584497
    MOV ESI,dword ptr [EBX + 0x11b4]    ; 0058449d
        ;   Label: LAB_0058449d
    PUSH 0x3f800000                     ; 005844a3
    PUSH ESI                            ; 005844a8
    CALL sound_sndmain.cpp_FUN_00550f50 ; 005844a9
        ;   XREF to: 00550f50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550f50(uint sfx_handle, float base_frequency)
    FLD float ptr [EBX + 0xa2c]         ; 005844ae
    FABS                                ; 005844b4
    ADD ESP,0x8                         ; 005844b6
    FCOMP double ptr [0x005edd27]       ; 005844b9 | DAT_005edd27
    FNSTSW AX                           ; 005844bf
    SAHF                                ; 005844c1
    JA 0x0058482a                       ; 005844c2
        ;   XREF to: 0058482a (CONDITIONAL_JUMP)  ; LAB_0058482a
    MOV ESP,EBP                         ; 005844c8
        ;   Label: LAB_005844c8
    POP EBP                             ; 005844ca
    POP EDI                             ; 005844cb
    POP ESI                             ; 005844cc
    POP EBX                             ; 005844cd
    MOV EAX,EAX                         ; 005844ce
    RET                                 ; 005844d0
    LEA EDI,[ESP + 0x134]               ; 005844d1
        ;   Label: LAB_005844d1
    LEA ECX,[EBX + 0x20]                ; 005844d8
    LEA ESI,[ESP + 0xc8]                ; 005844db
    MOV EAX,[0x01cedef4]                ; 005844e2 | DAT_01cedef4
    FLD float ptr [ECX]                 ; 005844e7
    FLD float ptr [ECX + 0x4]           ; 005844e9
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 005844ec
    FLD float ptr [ECX + 0x8]           ; 005844f3
    FXCH ST2                            ; 005844f6
    FSUB float ptr [EAX + 0x20]         ; 005844f8
    FXCH                                ; 005844fb
    FSUB float ptr [EAX + 0x24]         ; 005844fd
    FXCH ST2                            ; 00584500
    FSUB float ptr [EAX + 0x28]         ; 00584502
    FXCH                                ; 00584505
    FSTP float ptr [ESP + 0xc8]         ; 00584507
    FXCH                                ; 0058450e
    FSTP float ptr [ESP + 0xcc]         ; 00584510
    FSTP float ptr [ESP + 0xd0]         ; 00584517
    MOVSD ES:EDI,ESI                    ; 0058451e
    MOVSD ES:EDI,ESI                    ; 0058451f
    MOVSD ES:EDI,ESI                    ; 00584520
    FLD float ptr [ESP + 0x138]         ; 00584521
    FMUL ST0                            ; 00584528
    FLD float ptr [ESP + 0x134]         ; 0058452a
    FMUL ST0                            ; 00584531
    FADDP                               ; 00584533
    FLD float ptr [ESP + 0x13c]         ; 00584535
    FMUL ST0                            ; 0058453c
    FADDP                               ; 0058453e
    FSQRT                               ; 00584540
    FCOMP double ptr [0x005edd1f]       ; 00584542 | DAT_005edd1f
    FNSTSW AX                           ; 00584548
    SAHF                                ; 0058454a
    JBE 0x00584476                      ; 0058454b
        ;   XREF to: 00584476 (CONDITIONAL_JUMP)  ; LAB_00584476
    CMP dword ptr [EDX + 0x14d164],0x672 ; 00584551 | g_CDemonSetInstance.actor_count
    JGE 0x00584476                      ; 0058455b
        ;   XREF to: 00584476 (CONDITIONAL_JUMP)  ; LAB_00584476
    XOR EAX,EAX                         ; 00584561
    XOR EDI,EDI                         ; 00584563
    XOR ESI,ESI                         ; 00584565
    MOV dword ptr [ESP + 0x14c],EAX     ; 00584567
    MOV dword ptr [ESP + 0x150],EAX     ; 0058456e
    MOV EAX,[0x0061b5a8]                ; 00584575 | g_CDemonSetPtr
        ;   Label: LAB_00584575
    CMP EDI,dword ptr [EAX + 0x150fec]  ; 0058457a | g_CDemonSetInstance.enemy_count
    JL 0x00584738                       ; 00584580
        ;   XREF to: 00584738 (CONDITIONAL_JUMP)  ; LAB_00584738
    CMP dword ptr [ESP + 0x150],0x0     ; 00584586
    JNZ 0x00584793                      ; 0058458e
        ;   XREF to: 00584793 (CONDITIONAL_JUMP)  ; LAB_00584793
    CMP dword ptr [ESP + 0x150],0x0     ; 00584594
        ;   Label: LAB_00584594
    JNZ 0x005847c3                      ; 0058459c
        ;   XREF to: 005847c3 (CONDITIONAL_JUMP)  ; LAB_005847c3
    MOV ECX,dword ptr [EBX + 0x11cc]    ; 005845a2
    TEST ECX,ECX                        ; 005845a8
    JNZ 0x005847a6                      ; 005845aa
        ;   XREF to: 005847a6 (CONDITIONAL_JUMP)  ; LAB_005847a6
    PUSH 0x10bd0                        ; 005845b0
        ;   Label: LAB_005845b0
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 005845b5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 005845ba
    TEST EAX,EAX                        ; 005845bd
    JZ 0x005845ca                       ; 005845bf
        ;   XREF to: 005845ca (CONDITIONAL_JUMP)  ; LAB_005845ca
    PUSH EAX                            ; 005845c1
    CALL core_mobster.cpp_CMobster_ctor_FUN_004fd810 ; 005845c2
        ;   XREF to: 004fd810 (UNCONDITIONAL_CALL)  ; CMobster * core_mobster.cpp_CMobster_ctor_FUN_004fd810(CMobster * this_ptr)
    ADD ESP,0x4                         ; 005845c7
    PUSH 0x6e0                          ; 005845ca
        ;   Label: LAB_005845ca
    MOV ESI,EAX                         ; 005845cf
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 005845d1
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 005845d6
    TEST EAX,EAX                        ; 005845d9
    JZ 0x005845e6                       ; 005845db
        ;   XREF to: 005845e6 (CONDITIONAL_JUMP)  ; LAB_005845e6
    PUSH EAX                            ; 005845dd
    CALL core_tommygun.cpp_CTommyGun_ctor_FUN_00575760 ; 005845de
        ;   XREF to: 00575760 (UNCONDITIONAL_CALL)  ; CTommyGun * core_tommygun.cpp_CTommyGun_ctor_FUN_00575760(CTommyGun * this_ptr)
    ADD ESP,0x4                         ; 005845e3
    MOV EDI,EAX                         ; 005845e6
        ;   Label: LAB_005845e6
    TEST ESI,ESI                        ; 005845e8
    JNZ 0x005847fe                      ; 005845ea
        ;   XREF to: 005847fe (CONDITIONAL_JUMP)  ; LAB_005847fe
    MOV EAX,0x5edc99                    ; 005845f0 | = "..\\core\\vehicle.cpp"
        ;   Label: LAB_005845f0
    MOV EDX,0x161                       ; 005845f5
    PUSH 0x5edcad                       ; 005845fa | = "CMobster::process - Out of memory!"
    MOV [0x01d046a0],EAX                ; 005845ff | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 00584604 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0058460a
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0058460f
    PUSH 0x3f000000                     ; 00584612
        ;   Label: LAB_00584612
    CALL core_actor.cpp_randomChance_FUN_0040d060 ; 00584617
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040d060(float probability_threshold)
    MOV EDX,EAX                         ; 0058461c
    ADD ESP,0x4                         ; 0058461e
    LEA EAX,[ESI + 0x2b4]               ; 00584621
    TEST EDX,EDX                        ; 00584627
    JZ 0x0058480b                       ; 00584629
        ;   XREF to: 0058480b (CONDITIONAL_JUMP)  ; LAB_0058480b
    PUSH 0x5edcd0                       ; 0058462f | = "mobster3.dfm"
    PUSH EAX                            ; 00584634
        ;   Label: LAB_00584634
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 00584635
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 0058463a
    MOV ECX,dword ptr [ESP + 0x150]     ; 0058463d
    MOV dword ptr [ESI + 0x10b1c],EBX   ; 00584644
    TEST ECX,ECX                        ; 0058464a
    JNZ 0x00584815                      ; 0058464c
        ;   XREF to: 00584815 (CONDITIONAL_JUMP)  ; LAB_00584815
    MOV dword ptr [ESI + 0x10b20],ECX   ; 00584652
    MOV dword ptr [EBX + 0x11cc],ESI    ; 00584658
    PUSH ESI                            ; 0058465e
        ;   Label: LAB_0058465e
    MOV EAX,[0x00618170]                ; 0058465f | DAT_00618170
    PUSH EAX                            ; 00584664 | DAT_01d182f0
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_004fcda0 ; 00584665
        ;   XREF to: 004fcda0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_004fcda0(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0058466a
    PUSH EDI                            ; 0058466d
    MOV EDX,dword ptr [0x00618170]      ; 0058466e | DAT_00618170
    PUSH EDX                            ; 00584674 | DAT_01d182f0
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_004fcda0 ; 00584675
        ;   XREF to: 004fcda0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_004fcda0(CDemonMission * this_ptr, CDemonActor * actor)
    LEA EDX,[EBX + 0x20]                ; 0058467a
    LEA EAX,[ESI + 0x20]                ; 0058467d
    MOV ECX,dword ptr [EDX]             ; 00584680
    MOV dword ptr [EAX],ECX             ; 00584682
    MOV ECX,dword ptr [EDX + 0x4]       ; 00584684
    MOV dword ptr [EAX + 0x4],ECX       ; 00584687
    MOV ECX,dword ptr [EDX + 0x8]       ; 0058468a
    MOV dword ptr [EAX + 0x8],ECX       ; 0058468d
    MOV EDX,dword ptr [EDX + 0xc]       ; 00584690
    MOV dword ptr [EAX + 0xc],EDX       ; 00584693
    LEA EDX,[ESI + 0x30]                ; 00584696
    LEA EAX,[EBX + 0x30]                ; 00584699
    ADD ESP,0x8                         ; 0058469c
    CMP EDX,EAX                         ; 0058469f
    JZ 0x005846b3                       ; 005846a1
        ;   XREF to: 005846b3 (CONDITIONAL_JUMP)  ; LAB_005846b3
    MOV ECX,dword ptr [EAX]             ; 005846a3
    MOV dword ptr [EDX],ECX             ; 005846a5
    MOV ECX,dword ptr [EAX + 0x4]       ; 005846a7
    MOV dword ptr [EDX + 0x4],ECX       ; 005846aa
    MOV ECX,dword ptr [EAX + 0x8]       ; 005846ad
    MOV dword ptr [EDX + 0x8],ECX       ; 005846b0
    LEA EDX,[EBX + 0x20]                ; 005846b3
        ;   Label: LAB_005846b3
    LEA EAX,[EDI + 0x20]                ; 005846b6
    MOV ECX,dword ptr [EDX]             ; 005846b9
    MOV dword ptr [EAX],ECX             ; 005846bb
    MOV ECX,dword ptr [EDX + 0x4]       ; 005846bd
    MOV dword ptr [EAX + 0x4],ECX       ; 005846c0
    MOV ECX,dword ptr [EDX + 0x8]       ; 005846c3
    MOV dword ptr [EAX + 0x8],ECX       ; 005846c6
    MOV EDX,dword ptr [EDX + 0xc]       ; 005846c9
    MOV dword ptr [EAX + 0xc],EDX       ; 005846cc
    LEA EAX,[EDI + 0x30]                ; 005846cf
    LEA EDX,[EBX + 0x30]                ; 005846d2
    CMP EAX,EDX                         ; 005846d5
    JZ 0x005846e9                       ; 005846d7
        ;   XREF to: 005846e9 (CONDITIONAL_JUMP)  ; LAB_005846e9
    MOV ECX,dword ptr [EDX]             ; 005846d9
    MOV dword ptr [EAX],ECX             ; 005846db
    MOV ECX,dword ptr [EDX + 0x4]       ; 005846dd
    MOV dword ptr [EAX + 0x4],ECX       ; 005846e0
    MOV ECX,dword ptr [EDX + 0x8]       ; 005846e3
    MOV dword ptr [EAX + 0x8],ECX       ; 005846e6
    PUSH ESI                            ; 005846e9
        ;   Label: LAB_005846e9
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 005846ea
    CALL dword ptr [EAX + 0x8]          ; 005846f0
    ADD ESP,0x4                         ; 005846f3
    MOV EAX,dword ptr [EDI + 0x2b0]     ; 005846f6
    PUSH EDI                            ; 005846fc
    CALL dword ptr [EAX + 0x8]          ; 005846fd
    ADD ESP,0x4                         ; 00584700
    PUSH 0x0                            ; 00584703
    PUSH 0x0                            ; 00584705
    PUSH EDI                            ; 00584707
    PUSH 0x1                            ; 00584708
    PUSH ESI                            ; 0058470a
    CALL core_charactr.cpp_FUN_00428b10 ; 0058470b
        ;   XREF to: 00428b10 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00428b10()
    ADD ESP,0x14                        ; 00584710
    PUSH ESI                            ; 00584713
    MOV ECX,dword ptr [0x00618170]      ; 00584714 | DAT_00618170
    PUSH ECX                            ; 0058471a | DAT_01d182f0
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_004fc200 ; 0058471b
        ;   XREF to: 004fc200 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_004fc200(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00584720
    PUSH EDI                            ; 00584723
    MOV ESI,dword ptr [0x00618170]      ; 00584724 | DAT_00618170
    PUSH ESI                            ; 0058472a | DAT_01d182f0
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_004fc200 ; 0058472b
        ;   XREF to: 004fc200 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_004fc200(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00584730
    JMP 0x00584476                      ; 00584733
        ;   XREF to: 00584476 (UNCONDITIONAL_JUMP)  ; LAB_00584476
    MOV EDX,dword ptr [0x01d1c778]      ; 00584738 | g_CMobsterClassInfo.name_hash
        ;   Label: LAB_00584738
    PUSH EDX                            ; 0058473e
    MOV ECX,dword ptr [ESI + EAX*0x1 + 0x150ff0] ; 0058473f
    PUSH ECX                            ; 00584746
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 00584747
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0058474c
    TEST EAX,EAX                        ; 0058474f
    JZ 0x0058478a                       ; 00584751
        ;   XREF to: 0058478a (CONDITIONAL_JUMP)  ; LAB_0058478a
    MOV EDX,dword ptr [EAX + 0x10b1c]   ; 00584753
    CMP EBX,EDX                         ; 00584759
    JNZ 0x0058478a                      ; 0058475b
        ;   XREF to: 0058478a (CONDITIONAL_JUMP)  ; LAB_0058478a
    CMP dword ptr [EAX + 0x10b20],0x0   ; 0058475d
    JNZ 0x00584779                      ; 00584764
        ;   XREF to: 00584779 (CONDITIONAL_JUMP)  ; LAB_00584779
    MOV dword ptr [EDX + 0x11cc],EAX    ; 00584766
    MOV dword ptr [ESP + 0x150],0x1     ; 0058476c
    JMP 0x0058478a                      ; 00584777
        ;   XREF to: 0058478a (UNCONDITIONAL_JUMP)  ; LAB_0058478a
    MOV dword ptr [EDX + 0x11d0],EAX    ; 00584779
        ;   Label: LAB_00584779
    MOV dword ptr [ESP + 0x14c],0x1     ; 0058477f
    INC EDI                             ; 0058478a
        ;   Label: LAB_0058478a
    ADD ESI,0x4                         ; 0058478b
    JMP 0x00584575                      ; 0058478e
        ;   XREF to: 00584575 (UNCONDITIONAL_JUMP)  ; LAB_00584575
    CMP dword ptr [ESP + 0x14c],0x0     ; 00584793
        ;   Label: LAB_00584793
    JZ 0x00584594                       ; 0058479b
        ;   XREF to: 00584594 (CONDITIONAL_JUMP)  ; LAB_00584594
    JMP 0x00584476                      ; 005847a1
        ;   XREF to: 00584476 (UNCONDITIONAL_JUMP)  ; LAB_00584476
    PUSH ECX                            ; 005847a6
        ;   Label: LAB_005847a6
    MOV EDX,dword ptr [ECX + 0x2b0]     ; 005847a7
    CALL dword ptr [EDX + 0x114]        ; 005847ad
    ADD ESP,0x4                         ; 005847b3
    TEST EAX,EAX                        ; 005847b6
    JZ 0x00584476                       ; 005847b8
        ;   XREF to: 00584476 (CONDITIONAL_JUMP)  ; LAB_00584476
    JMP 0x005845b0                      ; 005847be
        ;   XREF to: 005845b0 (UNCONDITIONAL_JUMP)  ; LAB_005845b0
    CMP dword ptr [ESP + 0x14c],0x0     ; 005847c3
        ;   Label: LAB_005847c3
    JNZ 0x005845b0                      ; 005847cb
        ;   XREF to: 005845b0 (CONDITIONAL_JUMP)  ; LAB_005845b0
    MOV EDX,dword ptr [EBX + 0x11d0]    ; 005847d1
    TEST EDX,EDX                        ; 005847d7
    JZ 0x005845b0                       ; 005847d9
        ;   XREF to: 005845b0 (CONDITIONAL_JUMP)  ; LAB_005845b0
    MOV EAX,EDX                         ; 005847df
    PUSH EAX                            ; 005847e1
    MOV EDX,dword ptr [EDX + 0x2b0]     ; 005847e2
    CALL dword ptr [EDX + 0x114]        ; 005847e8
    ADD ESP,0x4                         ; 005847ee
    TEST EAX,EAX                        ; 005847f1
    JZ 0x00584476                       ; 005847f3
        ;   XREF to: 00584476 (CONDITIONAL_JUMP)  ; LAB_00584476
    JMP 0x005845b0                      ; 005847f9
        ;   XREF to: 005845b0 (UNCONDITIONAL_JUMP)  ; LAB_005845b0
    TEST EAX,EAX                        ; 005847fe
        ;   Label: LAB_005847fe
    JZ 0x005845f0                       ; 00584800
        ;   XREF to: 005845f0 (CONDITIONAL_JUMP)  ; LAB_005845f0
    JMP 0x00584612                      ; 00584806
        ;   XREF to: 00584612 (UNCONDITIONAL_JUMP)  ; LAB_00584612
    PUSH 0x5edcdd                       ; 0058480b | = "mobster4.dfm"
        ;   Label: LAB_0058480b
    JMP 0x00584634                      ; 00584810
        ;   XREF to: 00584634 (UNCONDITIONAL_JUMP)  ; LAB_00584634
    MOV dword ptr [ESI + 0x10b20],0x1   ; 00584815
        ;   Label: LAB_00584815
    MOV dword ptr [EBX + 0x11d0],ESI    ; 0058481f
    JMP 0x0058465e                      ; 00584825
        ;   XREF to: 0058465e (UNCONDITIONAL_JUMP)  ; LAB_0058465e
    MOV EDI,dword ptr [EBX + 0x11b8]    ; 0058482a
        ;   Label: LAB_0058482a
    PUSH EDI                            ; 00584830
    CALL sound_sndmain.cpp_FUN_00550b70 ; 00584831
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 00584836
    TEST EAX,EAX                        ; 00584839
    JNZ 0x005844c8                      ; 0058483b
        ;   XREF to: 005844c8 (CONDITIONAL_JUMP)  ; LAB_005844c8
    PUSH 0x5edd01                       ; 00584841 | = "skid_??.wav"
    PUSH EBX                            ; 00584846
    CALL core_vehicle.cpp_CVehicle_playTrackedSound_FUN_00584d90 ; 00584847
        ;   XREF to: 00584d90 (UNCONDITIONAL_CALL)  ; uint core_vehicle.cpp_CVehicle_playTrackedSound_FUN_00584d90(CVehicle * this_ptr, char * sound_name)
    ADD ESP,0x8                         ; 0058484c
    MOV dword ptr [EBX + 0x11b8],EAX    ; 0058484f
    MOV ESP,EBP                         ; 00584855
    POP EBP                             ; 00584857
    POP EDI                             ; 00584858
    POP ESI                             ; 00584859
    POP EBX                             ; 0058485a
    RET                                 ; 0058485b

