; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_processActors_FUN_00509140(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[1]:
;   core_game.cpp_CGame_process_FUN_004a6010 at 004a63f6
;
; Referenced Globals:
;   TerminatedCString s_d_s_3_2f_ms_005904a6
;   TerminatedCString s_Process_time_d_actors_3_005904b9
;   double DOUBLE_005904e2 = 0.0555555555555556
;   double DOUBLE_005904ea = 0.0000152587890625
;   double DOUBLE_005904f2 = 1000
;   CConsole* g_CConsole_PTR_005ad350 = 0077ad0c
;   CFireEffect* g_CFireEffect_PTR_005b80f0 = 01c08d04
;   CGame* g_CGame_PTR_005b9354 = 01c775ec
;   undefined4 DAT_00763e44
;   undefined4 g_CCharacterActorType_00765a60.name_hash
;   CConsole g_CConsole_0077ad0c
;   undefined4 g_CFlameCanActorType_01c70654.name_hash
;   undefined4 g_CGame_01c775ec.profile_mode
;   undefined4 g_CGame_01c775ec.delta_time_float
;   undefined4 g_CGlassActorType_01c78c40.name_hash
;   ... and 3 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0
;   core_fire.cpp_CFireEffect_getExplosionEffect_FUN_0048c160
;   core_flamecan.cpp_CFlameCan_ignite_FUN_0048e550
;   core_glass.cpp_CGlass_shatter_FUN_004ada20
;   core_glass.cpp_FUN_004aded0
;   core_path.cpp_CPathMap_updateIfNeeded_FUN_004f0360
;   core_setcolid.cpp_CDemonSet_buildCollidableActorList_FUN_005119b0
;   core_trigger.cpp_CTrigger_applyDamage_FUN_005485e0
;   engine_console.cpp_CConsole_printf_FUN_0043ac60
;   wincore_winrun.cpp_getTime_FUN_00558a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00509140
        ;   Label: core_set.cpp_CDemonSet_processActors_FUN_00509140
    PUSH ESI                            ; 00509141
    PUSH EDI                            ; 00509142
    PUSH EBP                            ; 00509143
    MOV EBP,ESP                         ; 00509144
    SUB ESP,0x94                        ; 00509146
    AND ESP,0xfffffff8                  ; 0050914c
    MOV EDX,dword ptr [EBP + 0x14]      ; 0050914f
    MOV ECX,dword ptr [EDX + 0x14cd6c]  ; 00509152
    XOR EAX,EAX                         ; 00509158
    TEST ECX,ECX                        ; 0050915a
    JLE 0x00509170                      ; 0050915c
        ;   XREF to: 00509170 (CONDITIONAL_JUMP)  ; LAB_00509170
    MOV EDX,dword ptr [EBP + 0x14]      ; 0050915e
    INC EAX                             ; 00509161
        ;   Label: LAB_00509161
    CMP EAX,dword ptr [EDX + 0x14cd6c]  ; 00509162
    JL 0x00509161                       ; 00509168
        ;   XREF to: 00509161 (CONDITIONAL_JUMP)  ; LAB_00509161
    LEA EAX,[EAX]                       ; 0050916a
    MOV EAX,[0x005b9354]                ; 00509170 | g_CGame_PTR_005b9354
        ;   Label: LAB_00509170
    CMP dword ptr [EAX + 0x20c],0x0     ; 00509175 | g_CGame_01c775ec.profile_mode
    JNZ 0x0050926d                      ; 0050917c
        ;   XREF to: 0050926d (CONDITIONAL_JUMP)  ; LAB_0050926d
    XOR EAX,EAX                         ; 00509182
        ;   Label: LAB_00509182
    MOV [0x01fba2d8],EAX                ; 00509184 | DAT_01fba2d8
    MOV [0x01fba2ec],EAX                ; 00509189 | DAT_01fba2ec
    MOV EAX,[0x005b9354]                ; 0050918e | g_CGame_PTR_005b9354
    MOV EAX,dword ptr [EAX + 0x264]     ; 00509193 | g_CGame_01c775ec.delta_time_float
    MOV dword ptr [ESP + 0x58],EAX      ; 00509199
    MOV dword ptr [ESP],EAX             ; 0050919d
    FLD float ptr [ESP + 0x58]          ; 005091a0
    FLDZ                                ; 005091a4
    FCOMPP                              ; 005091a6
    FNSTSW AX                           ; 005091a8
    SAHF                                ; 005091aa
    JNC 0x00509750                      ; 005091ab
        ;   XREF to: 00509750 (CONDITIONAL_JUMP)  ; LAB_00509750
    MOV ECX,dword ptr [EBP + 0x14]      ; 005091b1
    PUSH ECX                            ; 005091b4
    CALL core_setcolid.cpp_CDemonSet_buildCollidableActorList_FUN_005119b0 ; 005091b5
        ;   XREF to: 005119b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_buildCollidableActorList_FUN_005119b0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005091ba
    MOV EDX,dword ptr [EBP + 0x14]      ; 005091bd
    MOV EBX,dword ptr [EDX + 0x14cd6c]  ; 005091c0
    XOR EAX,EAX                         ; 005091c6
    TEST EBX,EBX                        ; 005091c8
    JLE 0x005091f0                      ; 005091ca
        ;   XREF to: 005091f0 (CONDITIONAL_JUMP)  ; LAB_005091f0
    MOV ECX,dword ptr [EDX + 0x14cd70]  ; 005091cc
        ;   Label: LAB_005091cc
    MOV dword ptr [ECX + 0x6c],EAX      ; 005091d2
    MOV ECX,dword ptr [EBP + 0x14]      ; 005091d5
    INC EAX                             ; 005091d8
    MOV ESI,dword ptr [ECX + 0x14cd6c]  ; 005091d9
    ADD EDX,0x4                         ; 005091df
    CMP EAX,ESI                         ; 005091e2
    JL 0x005091cc                       ; 005091e4
        ;   XREF to: 005091cc (CONDITIONAL_JUMP)  ; LAB_005091cc
    LEA EAX,[EAX]                       ; 005091e6
    LEA EDX,[EDX]                       ; 005091ec
    FLD float ptr [ESP]                 ; 005091f0
        ;   Label: LAB_005091f0
    FLDZ                                ; 005091f3
    FCOMPP                              ; 005091f5
    FNSTSW AX                           ; 005091f7
    SAHF                                ; 005091f9
    JNC 0x005093d4                      ; 005091fa
        ;   XREF to: 005093d4 (CONDITIONAL_JUMP)  ; LAB_005093d4
    MOV dword ptr [ESP + 0x84],0xfff0bdc1 ; 00509200
    MOV dword ptr [ESP + 0x8c],0xf423f  ; 0050920b
        ;   Label: LAB_0050920b
    MOV EAX,dword ptr [EBP + 0x14]      ; 00509216
    MOV EDX,dword ptr [EAX + 0x14cd6c]  ; 00509219
    XOR EDI,EDI                         ; 0050921f
    TEST EDX,EDX                        ; 00509221
    JLE 0x00509251                      ; 00509223
        ;   XREF to: 00509251 (CONDITIONAL_JUMP)  ; LAB_00509251
    MOV EBX,dword ptr [ESP + 0x88]      ; 00509225
    MOV ESI,EAX                         ; 0050922c
    SHL EBX,0x2                         ; 0050922e
    MOV EAX,dword ptr [ESI + 0x14cd70]  ; 00509231
        ;   Label: LAB_00509231
    CMP dword ptr [EAX + 0x104],0x0     ; 00509237
    JZ 0x00509284                       ; 0050923e
        ;   XREF to: 00509284 (CONDITIONAL_JUMP)  ; LAB_00509284
    MOV EAX,dword ptr [EBP + 0x14]      ; 00509240
        ;   Label: LAB_00509240
    INC EDI                             ; 00509243
    MOV ECX,dword ptr [EAX + 0x14cd6c]  ; 00509244
    ADD ESI,0x4                         ; 0050924a
    CMP EDI,ECX                         ; 0050924d
    JL 0x00509231                       ; 0050924f
        ;   XREF to: 00509231 (CONDITIONAL_JUMP)  ; LAB_00509231
    MOV EBX,dword ptr [ESP + 0x8c]      ; 00509251
        ;   Label: LAB_00509251
    CMP EBX,0xf423f                     ; 00509258
    JGE 0x005093d4                      ; 0050925e
        ;   XREF to: 005093d4 (CONDITIONAL_JUMP)  ; LAB_005093d4
    MOV dword ptr [ESP + 0x84],EBX      ; 00509264
    JMP 0x0050920b                      ; 0050926b
        ;   XREF to: 0050920b (UNCONDITIONAL_JUMP)  ; LAB_0050920b
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 0050926d
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_00558a30()
        ;   Label: LAB_0050926d
    XOR EDI,EDI                         ; 00509272
    MOV dword ptr [ESP + 0x64],EAX      ; 00509274
    MOV dword ptr [ESP + 0x88],EDI      ; 00509278
    JMP 0x00509182                      ; 0050927f
        ;   XREF to: 00509182 (UNCONDITIONAL_JUMP)  ; LAB_00509182
    MOV ECX,dword ptr [ESP + 0x84]      ; 00509284
        ;   Label: LAB_00509284
    MOV EDX,dword ptr [EAX + 0x64]      ; 0050928b
    CMP EDX,ECX                         ; 0050928e
    JNZ 0x005093b5                      ; 00509290
        ;   XREF to: 005093b5 (CONDITIONAL_JUMP)  ; LAB_005093b5
    MOV [0x00763e44],EAX                ; 00509296 | DAT_00763e44
    LEA EDX,[EAX + 0x30]                ; 0050929b
    MOV EAX,dword ptr [EDX]             ; 0050929e
    MOV dword ptr [ESP + 0x4c],EAX      ; 005092a0
    LEA EAX,[EDX + 0x4]                 ; 005092a4
    MOV EAX,dword ptr [EAX]             ; 005092a7
    MOV dword ptr [ESP + 0x50],EAX      ; 005092a9
    LEA EAX,[EDX + 0x8]                 ; 005092ad
    MOV EAX,dword ptr [EAX]             ; 005092b0
    MOV dword ptr [ESP + 0x54],EAX      ; 005092b2
    MOV EAX,[0x005b9354]                ; 005092b6 | g_CGame_PTR_005b9354
    CMP dword ptr [EAX + 0x20c],0x2     ; 005092bb | g_CGame_01c775ec.profile_mode
    JNZ 0x005092d0                      ; 005092c2
        ;   XREF to: 005092d0 (CONDITIONAL_JUMP)  ; LAB_005092d0
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 005092c4
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_00558a30()
    MOV dword ptr [ESP + 0x80],EAX      ; 005092c9
    MOV EAX,[0x00763e44]                ; 005092d0 | DAT_00763e44
        ;   Label: LAB_005092d0
    PUSH dword ptr [ESP]                ; 005092d5
    PUSH EAX                            ; 005092d8
    MOV EDX,dword ptr [EAX + 0x14c]     ; 005092d9
    CALL dword ptr [EDX + 0x4]          ; 005092df
    MOV EAX,[0x005b9354]                ; 005092e2 | g_CGame_PTR_005b9354
    MOV ECX,dword ptr [EAX + 0x20c]     ; 005092e7 | g_CGame_01c775ec.profile_mode
    ADD ESP,0x8                         ; 005092ed
    CMP ECX,0x2                         ; 005092f0
    JNZ 0x00509314                      ; 005092f3
        ;   XREF to: 00509314 (CONDITIONAL_JUMP)  ; LAB_00509314
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 005092f5
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_00558a30()
    MOV EDX,dword ptr [ESP + 0x80]      ; 005092fa
    SUB EAX,EDX                         ; 00509301
    MOV dword ptr [EBX + 0x1ffb078],EAX ; 00509303
    MOV EAX,[0x00763e44]                ; 00509309 | DAT_00763e44
    MOV dword ptr [EBX + 0x1ffcfb8],EAX ; 0050930e
    MOV EAX,[0x005b9354]                ; 00509314 | g_CGame_PTR_005b9354
        ;   Label: LAB_00509314
    CMP dword ptr [EAX + 0x20c],0x0     ; 00509319 | g_CGame_01c775ec.profile_mode
    JZ 0x00509334                       ; 00509320
        ;   XREF to: 00509334 (CONDITIONAL_JUMP)  ; LAB_00509334
    MOV EAX,dword ptr [ESP + 0x88]      ; 00509322
    INC EAX                             ; 00509329
    ADD EBX,0x4                         ; 0050932a
    MOV dword ptr [ESP + 0x88],EAX      ; 0050932d
    MOV EAX,[0x00763e44]                ; 00509334 | DAT_00763e44
        ;   Label: LAB_00509334
    PUSH EAX                            ; 00509339
    MOV EDX,dword ptr [EAX + 0x14c]     ; 0050933a
    CALL dword ptr [EDX + 0xbc]         ; 00509340
    ADD ESP,0x4                         ; 00509346
    TEST EAX,EAX                        ; 00509349
    JZ 0x00509362                       ; 0050934b
        ;   XREF to: 00509362 (CONDITIONAL_JUMP)  ; LAB_00509362
    MOV EDX,dword ptr [0x00763e44]      ; 0050934d | DAT_00763e44
    PUSH 0x0                            ; 00509353
    ADD EDX,0x20                        ; 00509355
    PUSH EDX                            ; 00509358
    PUSH EAX                            ; 00509359
    CALL core_path.cpp_CPathMap_updateIfNeeded_FUN_004f0360 ; 0050935a
        ;   XREF to: 004f0360 (UNCONDITIONAL_CALL)  ; void core_path.cpp_CPathMap_updateIfNeeded_FUN_004f0360(CPathMap * this_ptr, CVector3f * source_position, int force_update)
    ADD ESP,0xc                         ; 0050935f
    MOV EDX,dword ptr [0x00763e44]      ; 00509362 | DAT_00763e44
        ;   Label: LAB_00509362
    FLD float ptr [ESP + 0x50]          ; 00509368
    FCOMP float ptr [EDX + 0x34]        ; 0050936c
    FNSTSW AX                           ; 0050936f
    SAHF                                ; 00509371
    JZ 0x00509390                       ; 00509372
        ;   XREF to: 00509390 (CONDITIONAL_JUMP)  ; LAB_00509390
    MOV EDX,dword ptr [0x00763e44]      ; 00509374 | DAT_00763e44
        ;   Label: LAB_00509374
    PUSH EDX                            ; 0050937a
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000 ; 0050937b
        ;   XREF to: 0040a000 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00509380
    XOR ECX,ECX                         ; 00509383
    MOV dword ptr [0x00763e44],ECX      ; 00509385 | DAT_00763e44
    JMP 0x00509240                      ; 0050938b
        ;   XREF to: 00509240 (UNCONDITIONAL_JUMP)  ; LAB_00509240
    FLD float ptr [ESP + 0x4c]          ; 00509390
        ;   Label: LAB_00509390
    FCOMP float ptr [EDX + 0x30]        ; 00509394
    FNSTSW AX                           ; 00509397
    SAHF                                ; 00509399
    JNZ 0x00509374                      ; 0050939a
        ;   XREF to: 00509374 (CONDITIONAL_JUMP)  ; LAB_00509374
    FLD float ptr [ESP + 0x54]          ; 0050939c
    FCOMP float ptr [EDX + 0x38]        ; 005093a0
    FNSTSW AX                           ; 005093a3
    SAHF                                ; 005093a5
    JNZ 0x00509374                      ; 005093a6
        ;   XREF to: 00509374 (CONDITIONAL_JUMP)  ; LAB_00509374
    XOR ECX,ECX                         ; 005093a8
    MOV dword ptr [0x00763e44],ECX      ; 005093aa | DAT_00763e44
    JMP 0x00509240                      ; 005093b0
        ;   XREF to: 00509240 (UNCONDITIONAL_JUMP)  ; LAB_00509240
    JLE 0x00509240                      ; 005093b5
        ;   XREF to: 00509240 (CONDITIONAL_JUMP)  ; LAB_00509240
        ;   Label: LAB_005093b5
    CMP EDX,dword ptr [ESP + 0x8c]      ; 005093bb
    JGE 0x00509240                      ; 005093c2
        ;   XREF to: 00509240 (CONDITIONAL_JUMP)  ; LAB_00509240
    MOV dword ptr [ESP + 0x8c],EDX      ; 005093c8
    JMP 0x00509240                      ; 005093cf
        ;   XREF to: 00509240 (UNCONDITIONAL_JUMP)  ; LAB_00509240
    MOV EAX,dword ptr [EBP + 0x14]      ; 005093d4
        ;   Label: LAB_005093d4
    MOV EBX,dword ptr [EAX + 0x14cd6c]  ; 005093d7
    XOR EDI,EDI                         ; 005093dd
    TEST EBX,EBX                        ; 005093df
    JLE 0x005095bb                      ; 005093e1
        ;   XREF to: 005095bb (CONDITIONAL_JUMP)  ; LAB_005095bb
    MOV ESI,EAX                         ; 005093e7
    MOV EDX,dword ptr [0x00765a98]      ; 005093e9 | g_CCharacterActorType_00765a60.name_hash
        ;   Label: LAB_005093e9
    PUSH EDX                            ; 005093ef
    MOV ECX,dword ptr [ESI + 0x14cd70]  ; 005093f0
    PUSH ECX                            ; 005093f6
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 005093f7
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005093fc
    MOV EBX,EAX                         ; 005093ff
    MOV dword ptr [ESP + 0x70],EAX      ; 00509401
    TEST EAX,EAX                        ; 00509405
    JZ 0x005094ab                       ; 00509407
        ;   XREF to: 005094ab (CONDITIONAL_JUMP)  ; LAB_005094ab
    PUSH EBX                            ; 0050940d
    MOV EAX,dword ptr [EAX + 0x14c]     ; 0050940e
    CALL dword ptr [EAX + 0x104]        ; 00509414
    ADD ESP,0x4                         ; 0050941a
    TEST EAX,EAX                        ; 0050941d
    JNZ 0x005094ab                      ; 0050941f
        ;   XREF to: 005094ab (CONDITIONAL_JUMP)  ; LAB_005094ab
    MOV dword ptr [ESP + 0x60],EAX      ; 00509425
    LEA EAX,[ESP + 0x60]                ; 00509429
    PUSH EAX                            ; 0050942d
    LEA EAX,[ESP + 0x44]                ; 0050942e
    PUSH EAX                            ; 00509432
    ADD EBX,0x20                        ; 00509433
    PUSH 0x0                            ; 00509436
    PUSH EBX                            ; 00509438
    MOV EDX,dword ptr [0x005b80f0]      ; 00509439 | g_CFireEffect_PTR_005b80f0
    PUSH EDX                            ; 0050943f
    CALL core_fire.cpp_CFireEffect_getExplosionEffect_FUN_0048c160 ; 00509440
        ;   XREF to: 0048c160 (UNCONDITIONAL_CALL)  ; int core_fire.cpp_CFireEffect_getExplosionEffect_FUN_0048c160(CFireEffect * this_ptr, CVector3f * position, float radius, CVector3f * out_force_dir, ...)
    ADD ESP,0x14                        ; 00509445
    TEST EAX,EAX                        ; 00509448
    JZ 0x005094ab                       ; 0050944a
        ;   XREF to: 005094ab (CONDITIONAL_JUMP)  ; LAB_005094ab
    LEA EAX,[ESP + 0x4]                 ; 0050944c
    PUSH EAX                            ; 00509450
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 00509451
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00509456
    MOV ECX,0x4                         ; 00509459
    MOV EAX,dword ptr [ESP + 0x60]      ; 0050945e
    LEA EDX,[ESP + 0x40]                ; 00509462
    MOV dword ptr [ESP + 0x8],EAX       ; 00509466
    LEA EAX,[ESP + 0x10]                ; 0050946a
    MOV dword ptr [ESP + 0x34],ECX      ; 0050946e
    CMP EAX,EDX                         ; 00509472
    JZ 0x0050948e                       ; 00509474
        ;   XREF to: 0050948e (CONDITIONAL_JUMP)  ; LAB_0050948e
    MOV EAX,dword ptr [ESP + 0x40]      ; 00509476
    MOV dword ptr [ESP + 0x10],EAX      ; 0050947a
    MOV EAX,dword ptr [ESP + 0x44]      ; 0050947e
    MOV dword ptr [ESP + 0x14],EAX      ; 00509482
    MOV EAX,dword ptr [ESP + 0x48]      ; 00509486
    MOV dword ptr [ESP + 0x18],EAX      ; 0050948a
    LEA EAX,[ESP + 0x4]                 ; 0050948e
        ;   Label: LAB_0050948e
    MOV EDX,dword ptr [ESP + 0x70]      ; 00509492
    PUSH EAX                            ; 00509496
    MOV EBX,dword ptr [ESP + 0x74]      ; 00509497
    MOV EDX,dword ptr [EDX + 0x14c]     ; 0050949b
    PUSH EBX                            ; 005094a1
    CALL dword ptr [EDX + 0x100]        ; 005094a2
    ADD ESP,0x8                         ; 005094a8
    MOV EAX,[0x01c78c78]                ; 005094ab | g_CGlassActorType_01c78c40.name_hash
        ;   Label: LAB_005094ab
    PUSH EAX                            ; 005094b0
    MOV EDX,dword ptr [ESI + 0x14cd70]  ; 005094b1
    PUSH EDX                            ; 005094b7
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 005094b8
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 005094bd
    ADD ESP,0x8                         ; 005094bf
    TEST EAX,EAX                        ; 005094c2
    JZ 0x00509504                       ; 005094c4
        ;   XREF to: 00509504 (CONDITIONAL_JUMP)  ; LAB_00509504
    PUSH 0x0                            ; 005094c6
    PUSH 0x0                            ; 005094c8
    ADD EAX,0x20                        ; 005094ca
    PUSH 0x0                            ; 005094cd
    PUSH EAX                            ; 005094cf
    MOV dword ptr [ESP + 0x84],EAX      ; 005094d0
    MOV EAX,[0x005b80f0]                ; 005094d7 | g_CFireEffect_PTR_005b80f0
    PUSH EAX                            ; 005094dc
    CALL core_fire.cpp_CFireEffect_getExplosionEffect_FUN_0048c160 ; 005094dd
        ;   XREF to: 0048c160 (UNCONDITIONAL_CALL)  ; int core_fire.cpp_CFireEffect_getExplosionEffect_FUN_0048c160(CFireEffect * this_ptr, CVector3f * position, float radius, CVector3f * out_force_dir, ...)
    ADD ESP,0x14                        ; 005094e2
    TEST EAX,EAX                        ; 005094e5
    JZ 0x00509504                       ; 005094e7
        ;   XREF to: 00509504 (CONDITIONAL_JUMP)  ; LAB_00509504
    PUSH EBX                            ; 005094e9
    CALL core_glass.cpp_FUN_004aded0    ; 005094ea
        ;   XREF to: 004aded0 (UNCONDITIONAL_CALL)  ; int core_glass.cpp_FUN_004aded0(CGlass * this_ptr)
    ADD ESP,0x4                         ; 005094ef
    TEST EAX,EAX                        ; 005094f2
    JZ 0x00509504                       ; 005094f4
        ;   XREF to: 00509504 (CONDITIONAL_JUMP)  ; LAB_00509504
    MOV EDX,dword ptr [ESP + 0x74]      ; 005094f6
    PUSH EDX                            ; 005094fa
    PUSH EBX                            ; 005094fb
    CALL core_glass.cpp_CGlass_shatter_FUN_004ada20 ; 005094fc
        ;   XREF to: 004ada20 (UNCONDITIONAL_CALL)  ; void core_glass.cpp_CGlass_shatter_FUN_004ada20(CGlass * this_ptr, CVector3f * location)
    ADD ESP,0x8                         ; 00509501
    MOV ECX,dword ptr [0x02dd10bc]      ; 00509504 | g_CTriggerActorType_02dd1084.name_hash
        ;   Label: LAB_00509504
    PUSH ECX                            ; 0050950a
    MOV EBX,dword ptr [ESI + 0x14cd70]  ; 0050950b
    PUSH EBX                            ; 00509511
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 00509512
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 00509517
    ADD ESP,0x8                         ; 00509519
    TEST EAX,EAX                        ; 0050951c
    JZ 0x00509564                       ; 0050951e
        ;   XREF to: 00509564 (CONDITIONAL_JUMP)  ; LAB_00509564
    CMP dword ptr [EAX + 0x16c],0x7     ; 00509520
    JNZ 0x00509564                      ; 00509527
        ;   XREF to: 00509564 (CONDITIONAL_JUMP)  ; LAB_00509564
    CMP byte ptr [EBX + 0x2fc],0x0      ; 00509529
    JNZ 0x00509564                      ; 00509530
        ;   XREF to: 00509564 (CONDITIONAL_JUMP)  ; LAB_00509564
    LEA EAX,[ESP + 0x5c]                ; 00509532
    PUSH EAX                            ; 00509536
    XOR EDX,EDX                         ; 00509537
    PUSH EDX                            ; 00509539
    LEA EAX,[EBX + 0x20]                ; 0050953a
    PUSH 0x0                            ; 0050953d
    PUSH EAX                            ; 0050953f
    MOV ECX,dword ptr [0x005b80f0]      ; 00509540 | g_CFireEffect_PTR_005b80f0
    PUSH ECX                            ; 00509546
    MOV dword ptr [ESP + 0x70],EDX      ; 00509547
    CALL core_fire.cpp_CFireEffect_getExplosionEffect_FUN_0048c160 ; 0050954b
        ;   XREF to: 0048c160 (UNCONDITIONAL_CALL)  ; int core_fire.cpp_CFireEffect_getExplosionEffect_FUN_0048c160(CFireEffect * this_ptr, CVector3f * position, float radius, CVector3f * out_force_dir, ...)
    ADD ESP,0x14                        ; 00509550
    TEST EAX,EAX                        ; 00509553
    JZ 0x00509564                       ; 00509555
        ;   XREF to: 00509564 (CONDITIONAL_JUMP)  ; LAB_00509564
    PUSH dword ptr [ESP + 0x5c]         ; 00509557
    PUSH EBX                            ; 0050955b
    CALL core_trigger.cpp_CTrigger_applyDamage_FUN_005485e0 ; 0050955c
        ;   XREF to: 005485e0 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_applyDamage_FUN_005485e0(CTrigger * this_ptr, float hit_points)
    ADD ESP,0x8                         ; 00509561
    MOV EBX,dword ptr [0x01c7068c]      ; 00509564 | g_CFlameCanActorType_01c70654.name_hash
        ;   Label: LAB_00509564
    PUSH EBX                            ; 0050956a
    MOV EAX,dword ptr [ESI + 0x14cd70]  ; 0050956b
    PUSH EAX                            ; 00509571
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 00509572
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 00509577
    ADD ESP,0x8                         ; 00509579
    TEST EAX,EAX                        ; 0050957c
    JZ 0x005095a6                       ; 0050957e
        ;   XREF to: 005095a6 (CONDITIONAL_JUMP)  ; LAB_005095a6
    PUSH 0x0                            ; 00509580
    PUSH 0x0                            ; 00509582
    ADD EAX,0x20                        ; 00509584
    PUSH 0x0                            ; 00509587
    PUSH EAX                            ; 00509589
    MOV EDX,dword ptr [0x005b80f0]      ; 0050958a | g_CFireEffect_PTR_005b80f0
    PUSH EDX                            ; 00509590
    CALL core_fire.cpp_CFireEffect_getExplosionEffect_FUN_0048c160 ; 00509591
        ;   XREF to: 0048c160 (UNCONDITIONAL_CALL)  ; int core_fire.cpp_CFireEffect_getExplosionEffect_FUN_0048c160(CFireEffect * this_ptr, CVector3f * position, float radius, CVector3f * out_force_dir, ...)
    ADD ESP,0x14                        ; 00509596
    TEST EAX,EAX                        ; 00509599
    JZ 0x005095a6                       ; 0050959b
        ;   XREF to: 005095a6 (CONDITIONAL_JUMP)  ; LAB_005095a6
    PUSH EBX                            ; 0050959d
    CALL core_flamecan.cpp_CFlameCan_ignite_FUN_0048e550 ; 0050959e
        ;   XREF to: 0048e550 (UNCONDITIONAL_CALL)  ; void core_flamecan.cpp_CFlameCan_ignite_FUN_0048e550(CFlameCan * this_ptr)
    ADD ESP,0x4                         ; 005095a3
    MOV EAX,dword ptr [EBP + 0x14]      ; 005095a6
        ;   Label: LAB_005095a6
    INC EDI                             ; 005095a9
    MOV EDX,dword ptr [EAX + 0x14cd6c]  ; 005095aa
    ADD ESI,0x4                         ; 005095b0
    CMP EDI,EDX                         ; 005095b3
    JL 0x005093e9                       ; 005095b5
        ;   XREF to: 005093e9 (CONDITIONAL_JUMP)  ; LAB_005093e9
    MOV EAX,[0x005b9354]                ; 005095bb | g_CGame_PTR_005b9354
        ;   Label: LAB_005095bb
    MOV ECX,dword ptr [EAX + 0x20c]     ; 005095c0 | g_CGame_01c775ec.profile_mode
    TEST ECX,ECX                        ; 005095c6
    JZ 0x00509730                       ; 005095c8
        ;   XREF to: 00509730 (CONDITIONAL_JUMP)  ; LAB_00509730
    CMP ECX,0x2                         ; 005095ce
    JNZ 0x005096e0                      ; 005095d1
        ;   XREF to: 005096e0 (CONDITIONAL_JUMP)  ; LAB_005096e0
    MOV EAX,dword ptr [ESP + 0x88]      ; 005095d7
    XOR ESI,ESI                         ; 005095de
    DEC EAX                             ; 005095e0
    MOV dword ptr [ESP + 0x78],ESI      ; 005095e1
    MOV dword ptr [ESP + 0x7c],ESI      ; 005095e5
    MOV dword ptr [ESP + 0x6c],EAX      ; 005095e9
    TEST EAX,EAX                        ; 005095ed
    JLE 0x00509682                      ; 005095ef
        ;   XREF to: 00509682 (CONDITIONAL_JUMP)  ; LAB_00509682
    MOV EAX,dword ptr [ESP + 0x88]      ; 005095f5
    SHL EAX,0x2                         ; 005095fc
    MOV dword ptr [ESP + 0x68],EAX      ; 005095ff
    MOV EBX,dword ptr [ESP + 0x7c]      ; 00509603
        ;   Label: LAB_00509603
    MOV EDX,dword ptr [ESP + 0x88]      ; 00509607
    INC EBX                             ; 0050960e
    CMP EBX,EDX                         ; 0050960f
    JGE 0x00509666                      ; 00509611
        ;   XREF to: 00509666 (CONDITIONAL_JUMP)  ; LAB_00509666
    MOV ECX,dword ptr [ESP + 0x68]      ; 00509613
    MOV EDX,dword ptr [ESP + 0x78]      ; 00509617
    LEA EAX,[EBX*0x4 + 0x0]             ; 0050961b
    MOV EDI,dword ptr [EAX + 0x1ffb078] ; 00509622
        ;   Label: LAB_00509622
    MOV ESI,dword ptr [EDX + 0x1ffb078] ; 00509628
    CMP ESI,EDI                         ; 0050962e
    JGE 0x0050965e                      ; 00509630
        ;   XREF to: 0050965e (CONDITIONAL_JUMP)  ; LAB_0050965e
    MOV EDI,ESI                         ; 00509632
    MOV ESI,dword ptr [EAX + 0x1ffb078] ; 00509634
    MOV dword ptr [EDX + 0x1ffb078],ESI ; 0050963a
    MOV dword ptr [EAX + 0x1ffb078],EDI ; 00509640
    MOV EDI,dword ptr [EAX + 0x1ffcfb8] ; 00509646
    MOV ESI,dword ptr [EDX + 0x1ffcfb8] ; 0050964c
    MOV dword ptr [EDX + 0x1ffcfb8],EDI ; 00509652
    MOV dword ptr [EAX + 0x1ffcfb8],ESI ; 00509658
    ADD EAX,0x4                         ; 0050965e
        ;   Label: LAB_0050965e
    INC EBX                             ; 00509661
    CMP EAX,ECX                         ; 00509662
    JL 0x00509622                       ; 00509664
        ;   XREF to: 00509622 (CONDITIONAL_JUMP)  ; LAB_00509622
    MOV ECX,dword ptr [ESP + 0x78]      ; 00509666
        ;   Label: LAB_00509666
    MOV EBX,dword ptr [ESP + 0x7c]      ; 0050966a
    MOV ESI,dword ptr [ESP + 0x6c]      ; 0050966e
    ADD ECX,0x4                         ; 00509672
    INC EBX                             ; 00509675
    MOV dword ptr [ESP + 0x78],ECX      ; 00509676
    MOV dword ptr [ESP + 0x7c],EBX      ; 0050967a
    CMP EBX,ESI                         ; 0050967e
    JL 0x00509603                       ; 00509680
        ;   XREF to: 00509603 (CONDITIONAL_JUMP)  ; LAB_00509603
    MOV EAX,dword ptr [ESP + 0x88]      ; 00509682
        ;   Label: LAB_00509682
    MOV EDI,0x14                        ; 00509689
    CMP EAX,EDI                         ; 0050968e
    JGE 0x00509694                      ; 00509690
        ;   XREF to: 00509694 (CONDITIONAL_JUMP)  ; LAB_00509694
    MOV EDI,EAX                         ; 00509692
    XOR EBX,EBX                         ; 00509694
        ;   Label: LAB_00509694
    TEST EDI,EDI                        ; 00509696
    JLE 0x005096e0                      ; 00509698
        ;   XREF to: 005096e0 (CONDITIONAL_JUMP)  ; LAB_005096e0
    XOR ESI,ESI                         ; 0050969a
    FILD dword ptr [ESI + 0x1ffb078]    ; 0050969c
        ;   Label: LAB_0050969c
    FMUL double ptr [0x005904e2]        ; 005096a2 | DOUBLE_005904e2
    FMUL double ptr [0x005904ea]        ; 005096a8 | DOUBLE_005904ea
    FMUL double ptr [0x005904f2]        ; 005096ae | DOUBLE_005904f2
    FDIV float ptr [ESP]                ; 005096b4
    SUB ESP,0x8                         ; 005096b7
    FSTP double ptr [ESP]               ; 005096ba
    MOV ECX,dword ptr [ESI + 0x1ffcfb8] ; 005096bd
    PUSH ECX                            ; 005096c3
    PUSH EBX                            ; 005096c4
    PUSH 0x5904a6                       ; 005096c5 | = "%d. %s : %3.2f ms\n"
    MOV EAX,[0x005ad350]                ; 005096ca | g_CConsole_PTR_005ad350
    PUSH EAX                            ; 005096cf | g_CConsole_0077ad0c
    ADD ESI,0x4                         ; 005096d0
    INC EBX                             ; 005096d3
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 005096d4
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0x18                        ; 005096d9
    CMP EBX,EDI                         ; 005096dc
    JL 0x0050969c                       ; 005096de
        ;   XREF to: 0050969c (CONDITIONAL_JUMP)  ; LAB_0050969c
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 005096e0
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_00558a30()
        ;   Label: LAB_005096e0
    MOV EDX,dword ptr [ESP + 0x64]      ; 005096e5
    SUB EAX,EDX                         ; 005096e9
    MOV dword ptr [ESP + 0x90],EAX      ; 005096eb
    FILD dword ptr [ESP + 0x90]         ; 005096f2
    FMUL double ptr [0x005904e2]        ; 005096f9 | DOUBLE_005904e2
    FMUL double ptr [0x005904ea]        ; 005096ff | DOUBLE_005904ea
    FMUL double ptr [0x005904f2]        ; 00509705 | DOUBLE_005904f2
    FDIV float ptr [ESP]                ; 0050970b
    SUB ESP,0x8                         ; 0050970e
    MOV ECX,dword ptr [ESP + 0x90]      ; 00509711
    FSTP double ptr [ESP]               ; 00509718
    PUSH ECX                            ; 0050971b
    PUSH 0x5904b9                       ; 0050971c | = "Process time (%d actors) : %3.2f ms\n"
    MOV EBX,dword ptr [0x005ad350]      ; 00509721 | g_CConsole_PTR_005ad350
    PUSH EBX                            ; 00509727 | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 00509728
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0x14                        ; 0050972d
    MOV EDX,dword ptr [EBP + 0x14]      ; 00509730
        ;   Label: LAB_00509730
    MOV ESI,dword ptr [EDX + 0x14cd6c]  ; 00509733
    XOR EAX,EAX                         ; 00509739
    TEST ESI,ESI                        ; 0050973b
    JLE 0x00509750                      ; 0050973d
        ;   XREF to: 00509750 (CONDITIONAL_JUMP)  ; LAB_00509750
    MOV EDX,dword ptr [EBP + 0x14]      ; 0050973f
    INC EAX                             ; 00509742
        ;   Label: LAB_00509742
    CMP EAX,dword ptr [EDX + 0x14cd6c]  ; 00509743
    JL 0x00509742                       ; 00509749
        ;   XREF to: 00509742 (CONDITIONAL_JUMP)  ; LAB_00509742
    LEA EAX,[EAX]                       ; 0050974b
    MOV ECX,ECX                         ; 0050974e
    MOV ESP,EBP                         ; 00509750
        ;   Label: LAB_00509750
    POP EBP                             ; 00509752
    POP EDI                             ; 00509753
    POP ESI                             ; 00509754
    POP EBX                             ; 00509755
    RET                                 ; 00509756

