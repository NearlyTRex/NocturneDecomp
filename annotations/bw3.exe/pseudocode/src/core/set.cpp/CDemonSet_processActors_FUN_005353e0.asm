; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_processActors_FUN_005353e0(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xb0]:4  local_b0
; undefined        Stack[-0x64]:1  local_64
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_game.cpp_CGame_process_FUN_004bf4b0 at 004bf9da
;
; Referenced Globals:
;   TerminatedCString s_d_s_3_2f_ms_005d04ed
;   TerminatedCString s_Process_time_d_actors_3_005d0500
;   undefined4 DAT_005d0527
;   undefined4 DAT_005d052f
;   undefined4 DAT_005d0537
;   CConsole* g_CConsolePtr = 007f7ea4
;   undefined4 DAT_005fc5a0
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 DAT_007df974
;   undefined4 g_CCharacterClassInfo.name_hash
;   CConsole g_CConsoleInstance
;   undefined4 g_CFlameCanClassInfo.name_hash
;   undefined4 g_CGameInstance.profile_mode
;   undefined4 g_CGameInstance.delta_time_float
;   undefined4 g_CGlassClassInfo.name_hash
;   ... and 4 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0
;   core_fire.cpp_FUN_004a3790
;   core_flamecan.cpp_CFlameCan_ignite_FUN_004a7110
;   core_glass.cpp_CGlass_checkBreakableCondition_FUN_004cc5d0
;   core_glass.cpp_FUN_004cc040
;   core_path.cpp_CPathMap_updateIfNeeded_FUN_0050b1d0
;   core_setcolid.cpp_CDemonSet_buildCollidableActorList_FUN_0053eda0
;   core_trigger.cpp_CTrigger_applyDamage_FUN_0056ee20
;   engine_console.cpp_FUN_00441ff0
;   wincore_winrun.cpp_getTime_FUN_005806a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005353e0
        ;   Label: core_set.cpp_CDemonSet_processActors_FUN_005353e0
    PUSH ESI                            ; 005353e1
    PUSH EDI                            ; 005353e2
    PUSH EBP                            ; 005353e3
    MOV EBP,ESP                         ; 005353e4
    SUB ESP,0xa0                        ; 005353e6
    AND ESP,0xfffffff8                  ; 005353ec
    MOV EDX,dword ptr [EBP + 0x14]      ; 005353ef
    MOV ECX,dword ptr [EDX + 0x14d164]  ; 005353f2
    XOR EAX,EAX                         ; 005353f8
    TEST ECX,ECX                        ; 005353fa
    JLE 0x00535410                      ; 005353fc
        ;   XREF to: 00535410 (CONDITIONAL_JUMP)  ; LAB_00535410
    MOV EDX,dword ptr [EBP + 0x14]      ; 005353fe
    INC EAX                             ; 00535401
        ;   Label: LAB_00535401
    CMP EAX,dword ptr [EDX + 0x14d164]  ; 00535402
    JL 0x00535401                       ; 00535408
        ;   XREF to: 00535401 (CONDITIONAL_JUMP)  ; LAB_00535401
    LEA EAX,[EAX]                       ; 0053540a
    MOV EAX,[0x005fe9dc]                ; 00535410 | g_CGamePtr
        ;   Label: LAB_00535410
    CMP dword ptr [EAX + 0x230],0x0     ; 00535415 | g_CGameInstance.profile_mode
    JNZ 0x0053553f                      ; 0053541c
        ;   XREF to: 0053553f (CONDITIONAL_JUMP)  ; LAB_0053553f
    XOR EAX,EAX                         ; 00535422
        ;   Label: LAB_00535422
    MOV [0x0203ad1c],EAX                ; 00535424 | DAT_0203ad1c
    MOV [0x0203ad30],EAX                ; 00535429 | DAT_0203ad30
    MOV EAX,[0x005fe9dc]                ; 0053542e | g_CGamePtr
    MOV EAX,dword ptr [EAX + 0x314]     ; 00535433 | g_CGameInstance.delta_time_float
    MOV dword ptr [ESP + 0x58],EAX      ; 00535439
    MOV dword ptr [ESP],EAX             ; 0053543d
    FLD float ptr [ESP + 0x58]          ; 00535440
    FLDZ                                ; 00535444
    FCOMPP                              ; 00535446
    FNSTSW AX                           ; 00535448
    SAHF                                ; 0053544a
    JNC 0x005359f0                      ; 0053544b
        ;   XREF to: 005359f0 (CONDITIONAL_JUMP)  ; LAB_005359f0
    MOV ECX,dword ptr [EBP + 0x14]      ; 00535451
    PUSH ECX                            ; 00535454
    CALL core_setcolid.cpp_CDemonSet_buildCollidableActorList_FUN_0053eda0 ; 00535455
        ;   XREF to: 0053eda0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_buildCollidableActorList_FUN_0053eda0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0053545a
    MOV EDX,dword ptr [EBP + 0x14]      ; 0053545d
    MOV EBX,dword ptr [EDX + 0x14d164]  ; 00535460
    XOR EAX,EAX                         ; 00535466
    TEST EBX,EBX                        ; 00535468
    JLE 0x00535490                      ; 0053546a
        ;   XREF to: 00535490 (CONDITIONAL_JUMP)  ; LAB_00535490
    MOV ECX,dword ptr [EDX + 0x14d168]  ; 0053546c
        ;   Label: LAB_0053546c
    MOV dword ptr [ECX + 0x6c],EAX      ; 00535472
    MOV ECX,dword ptr [EBP + 0x14]      ; 00535475
    INC EAX                             ; 00535478
    MOV ESI,dword ptr [ECX + 0x14d164]  ; 00535479
    ADD EDX,0x4                         ; 0053547f
    CMP EAX,ESI                         ; 00535482
    JL 0x0053546c                       ; 00535484
        ;   XREF to: 0053546c (CONDITIONAL_JUMP)  ; LAB_0053546c
    LEA EAX,[EAX]                       ; 00535486
    LEA EDX,[EDX]                       ; 0053548c
    FLD float ptr [ESP]                 ; 00535490
        ;   Label: LAB_00535490
    FLDZ                                ; 00535493
    FCOMPP                              ; 00535495
    FNSTSW AX                           ; 00535497
    SAHF                                ; 00535499
    JNC 0x00535695                      ; 0053549a
        ;   XREF to: 00535695 (CONDITIONAL_JUMP)  ; LAB_00535695
    MOV dword ptr [ESP + 0x88],0xfff0bdc1 ; 005354a0
    MOV dword ptr [ESP + 0x90],0xf423f  ; 005354ab
        ;   Label: LAB_005354ab
    MOV EAX,dword ptr [EBP + 0x14]      ; 005354b6
    XOR EDX,EDX                         ; 005354b9
    MOV ECX,dword ptr [EAX + 0x14d164]  ; 005354bb
    MOV dword ptr [ESP + 0x98],EDX      ; 005354c1
    TEST ECX,ECX                        ; 005354c8
    JLE 0x00535520                      ; 005354ca
        ;   XREF to: 00535520 (CONDITIONAL_JUMP)  ; LAB_00535520
    MOV EBX,dword ptr [ESP + 0x8c]      ; 005354cc
    MOV dword ptr [ESP + 0x94],EAX      ; 005354d3
    SHL EBX,0x2                         ; 005354da
    MOV ESI,dword ptr [ESP + 0x94]      ; 005354dd
        ;   Label: LAB_005354dd
    MOV ESI,dword ptr [ESI + 0x14d168]  ; 005354e4
    CMP dword ptr [ESI + 0x104],0x0     ; 005354ea
    JZ 0x00535556                       ; 005354f1
        ;   XREF to: 00535556 (CONDITIONAL_JUMP)  ; LAB_00535556
    MOV ESI,dword ptr [ESP + 0x94]      ; 005354f3
        ;   Label: LAB_005354f3
    MOV EDI,dword ptr [ESP + 0x98]      ; 005354fa
    MOV EDX,dword ptr [EBP + 0x14]      ; 00535501
    ADD ESI,0x4                         ; 00535504
    INC EDI                             ; 00535507
    MOV ECX,dword ptr [EDX + 0x14d164]  ; 00535508
    MOV dword ptr [ESP + 0x94],ESI      ; 0053550e
    MOV dword ptr [ESP + 0x98],EDI      ; 00535515
    CMP EDI,ECX                         ; 0053551c
    JL 0x005354dd                       ; 0053551e
        ;   XREF to: 005354dd (CONDITIONAL_JUMP)  ; LAB_005354dd
    MOV EBX,dword ptr [ESP + 0x90]      ; 00535520
        ;   Label: LAB_00535520
    CMP EBX,0xf423f                     ; 00535527
    JGE 0x00535695                      ; 0053552d
        ;   XREF to: 00535695 (CONDITIONAL_JUMP)  ; LAB_00535695
    MOV dword ptr [ESP + 0x88],EBX      ; 00535533
    JMP 0x005354ab                      ; 0053553a
        ;   XREF to: 005354ab (UNCONDITIONAL_JUMP)  ; LAB_005354ab
    CALL wincore_winrun.cpp_getTime_FUN_005806a0 ; 0053553f
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_005806a0()
        ;   Label: LAB_0053553f
    XOR EDI,EDI                         ; 00535544
    MOV dword ptr [ESP + 0x68],EAX      ; 00535546
    MOV dword ptr [ESP + 0x8c],EDI      ; 0053554a
    JMP 0x00535422                      ; 00535551
        ;   XREF to: 00535422 (UNCONDITIONAL_JUMP)  ; LAB_00535422
    MOV EDX,dword ptr [ESP + 0x88]      ; 00535556
        ;   Label: LAB_00535556
    MOV EAX,dword ptr [ESI + 0x64]      ; 0053555d
    CMP EAX,EDX                         ; 00535560
    JNZ 0x00535676                      ; 00535562
        ;   XREF to: 00535676 (CONDITIONAL_JUMP)  ; LAB_00535676
    LEA EDI,[ESP + 0x4c]                ; 00535568
    MOV dword ptr [0x007df974],ESI      ; 0053556c | DAT_007df974
    LEA ESI,[ESI + 0x30]                ; 00535572
    MOV EAX,[0x005fe9dc]                ; 00535575 | g_CGamePtr
    MOVSD ES:EDI,ESI                    ; 0053557a
    MOVSD ES:EDI,ESI                    ; 0053557b
    MOVSD ES:EDI,ESI                    ; 0053557c
    CMP dword ptr [EAX + 0x230],0x2     ; 0053557d | g_CGameInstance.profile_mode
    JNZ 0x00535592                      ; 00535584
        ;   XREF to: 00535592 (CONDITIONAL_JUMP)  ; LAB_00535592
    CALL wincore_winrun.cpp_getTime_FUN_005806a0 ; 00535586
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_005806a0()
    MOV dword ptr [ESP + 0x84],EAX      ; 0053558b
    MOV EAX,[0x007df974]                ; 00535592 | DAT_007df974
        ;   Label: LAB_00535592
    PUSH dword ptr [ESP]                ; 00535597
    PUSH EAX                            ; 0053559a
    MOV EDX,dword ptr [EAX + 0x154]     ; 0053559b
    CALL dword ptr [EDX + 0xc]          ; 005355a1
    MOV EAX,[0x005fe9dc]                ; 005355a4 | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x230]     ; 005355a9 | g_CGameInstance.profile_mode
    ADD ESP,0x8                         ; 005355af
    CMP EDX,0x2                         ; 005355b2
    JNZ 0x005355d6                      ; 005355b5
        ;   XREF to: 005355d6 (CONDITIONAL_JUMP)  ; LAB_005355d6
    CALL wincore_winrun.cpp_getTime_FUN_005806a0 ; 005355b7
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_005806a0()
    MOV ECX,dword ptr [ESP + 0x84]      ; 005355bc
    SUB EAX,ECX                         ; 005355c3
    MOV dword ptr [EBX + 0x207bad8],EAX ; 005355c5
    MOV EAX,[0x007df974]                ; 005355cb | DAT_007df974
    MOV dword ptr [EBX + 0x207da18],EAX ; 005355d0
    MOV EAX,[0x005fe9dc]                ; 005355d6 | g_CGamePtr
        ;   Label: LAB_005355d6
    CMP dword ptr [EAX + 0x230],0x0     ; 005355db | g_CGameInstance.profile_mode
    JZ 0x005355f6                       ; 005355e2
        ;   XREF to: 005355f6 (CONDITIONAL_JUMP)  ; LAB_005355f6
    MOV EDI,dword ptr [ESP + 0x8c]      ; 005355e4
    INC EDI                             ; 005355eb
    ADD EBX,0x4                         ; 005355ec
    MOV dword ptr [ESP + 0x8c],EDI      ; 005355ef
    MOV EAX,[0x007df974]                ; 005355f6 | DAT_007df974
        ;   Label: LAB_005355f6
    PUSH EAX                            ; 005355fb
    MOV EDX,dword ptr [EAX + 0x154]     ; 005355fc
    CALL dword ptr [EDX + 0xc4]         ; 00535602
    ADD ESP,0x4                         ; 00535608
    TEST EAX,EAX                        ; 0053560b
    JZ 0x00535624                       ; 0053560d
        ;   XREF to: 00535624 (CONDITIONAL_JUMP)  ; LAB_00535624
    MOV EDX,dword ptr [0x007df974]      ; 0053560f | DAT_007df974
    PUSH 0x0                            ; 00535615
    ADD EDX,0x20                        ; 00535617
    PUSH EDX                            ; 0053561a
    PUSH EAX                            ; 0053561b
    CALL core_path.cpp_CPathMap_updateIfNeeded_FUN_0050b1d0 ; 0053561c
        ;   XREF to: 0050b1d0 (UNCONDITIONAL_CALL)  ; void core_path.cpp_CPathMap_updateIfNeeded_FUN_0050b1d0(CPathMap * this_ptr, CVector3f * source_position, int force_update)
    ADD ESP,0xc                         ; 00535621
    MOV EDX,dword ptr [0x007df974]      ; 00535624 | DAT_007df974
        ;   Label: LAB_00535624
    FLD float ptr [ESP + 0x50]          ; 0053562a
    FCOMP float ptr [EDX + 0x34]        ; 0053562e
    FNSTSW AX                           ; 00535631
    SAHF                                ; 00535633
    JZ 0x00535651                       ; 00535634
        ;   XREF to: 00535651 (CONDITIONAL_JUMP)  ; LAB_00535651
    MOV EAX,[0x007df974]                ; 00535636 | DAT_007df974
        ;   Label: LAB_00535636
    PUSH EAX                            ; 0053563b
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0 ; 0053563c
        ;   XREF to: 004088f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00535641
    XOR EDX,EDX                         ; 00535644
    MOV dword ptr [0x007df974],EDX      ; 00535646 | DAT_007df974
    JMP 0x005354f3                      ; 0053564c
        ;   XREF to: 005354f3 (UNCONDITIONAL_JUMP)  ; LAB_005354f3
    FLD float ptr [ESP + 0x4c]          ; 00535651
        ;   Label: LAB_00535651
    FCOMP float ptr [EDX + 0x30]        ; 00535655
    FNSTSW AX                           ; 00535658
    SAHF                                ; 0053565a
    JNZ 0x00535636                      ; 0053565b
        ;   XREF to: 00535636 (CONDITIONAL_JUMP)  ; LAB_00535636
    FLD float ptr [ESP + 0x54]          ; 0053565d
    FCOMP float ptr [EDX + 0x38]        ; 00535661
    FNSTSW AX                           ; 00535664
    SAHF                                ; 00535666
    JNZ 0x00535636                      ; 00535667
        ;   XREF to: 00535636 (CONDITIONAL_JUMP)  ; LAB_00535636
    XOR EDX,EDX                         ; 00535669
    MOV dword ptr [0x007df974],EDX      ; 0053566b | DAT_007df974
    JMP 0x005354f3                      ; 00535671
        ;   XREF to: 005354f3 (UNCONDITIONAL_JUMP)  ; LAB_005354f3
    JLE 0x005354f3                      ; 00535676
        ;   XREF to: 005354f3 (CONDITIONAL_JUMP)  ; LAB_005354f3
        ;   Label: LAB_00535676
    CMP EAX,dword ptr [ESP + 0x90]      ; 0053567c
    JGE 0x005354f3                      ; 00535683
        ;   XREF to: 005354f3 (CONDITIONAL_JUMP)  ; LAB_005354f3
    MOV dword ptr [ESP + 0x90],EAX      ; 00535689
    JMP 0x005354f3                      ; 00535690
        ;   XREF to: 005354f3 (UNCONDITIONAL_JUMP)  ; LAB_005354f3
    MOV EAX,dword ptr [EBP + 0x14]      ; 00535695
        ;   Label: LAB_00535695
    MOV ECX,dword ptr [EAX + 0x14d164]  ; 00535698
    XOR EDI,EDI                         ; 0053569e
    TEST ECX,ECX                        ; 005356a0
    JLE 0x00535843                      ; 005356a2
        ;   XREF to: 00535843 (CONDITIONAL_JUMP)  ; LAB_00535843
    MOV ESI,EAX                         ; 005356a8
    MOV EBX,dword ptr [0x007e2cec]      ; 005356aa | g_CCharacterClassInfo.name_hash
        ;   Label: LAB_005356aa
    PUSH EBX                            ; 005356b0
    MOV EAX,dword ptr [ESI + 0x14d168]  ; 005356b1
    PUSH EAX                            ; 005356b7
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 005356b8
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 005356bd
    MOV EBX,EAX                         ; 005356c0
    MOV dword ptr [ESP + 0x78],EAX      ; 005356c2
    TEST EAX,EAX                        ; 005356c6
    JZ 0x0053572e                       ; 005356c8
        ;   XREF to: 0053572e (CONDITIONAL_JUMP)  ; LAB_0053572e
    PUSH EBX                            ; 005356ca
    MOV EAX,dword ptr [EAX + 0x154]     ; 005356cb
    CALL dword ptr [EAX + 0x10c]        ; 005356d1
    ADD ESP,0x4                         ; 005356d7
    TEST EAX,EAX                        ; 005356da
    JNZ 0x0053572e                      ; 005356dc
        ;   XREF to: 0053572e (CONDITIONAL_JUMP)  ; LAB_0053572e
    MOV dword ptr [ESP + 0x5c],EAX      ; 005356de
    LEA EAX,[ESP + 0x64]                ; 005356e2
    PUSH EAX                            ; 005356e6
    LEA EAX,[ESP + 0x60]                ; 005356e7
    PUSH EAX                            ; 005356eb
    LEA EAX,[ESP + 0x48]                ; 005356ec
    PUSH EAX                            ; 005356f0
    LEA EAX,[EBX + 0x20]                ; 005356f1
    PUSH 0x0                            ; 005356f4
    PUSH EAX                            ; 005356f6
    MOV ECX,dword ptr [0x005fc5a0]      ; 005356f7 | DAT_005fc5a0
    PUSH ECX                            ; 005356fd
    CALL core_fire.cpp_FUN_004a3790     ; 005356fe
        ;   XREF to: 004a3790 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a3790()
    ADD ESP,0x18                        ; 00535703
    TEST EAX,EAX                        ; 00535706
    JZ 0x0053572e                       ; 00535708
        ;   XREF to: 0053572e (CONDITIONAL_JUMP)  ; LAB_0053572e
    MOV EAX,dword ptr [ESP + 0x64]      ; 0053570a
    CMP EAX,0x1                         ; 0053570e
    JNZ 0x00535a0c                      ; 00535711
        ;   XREF to: 00535a0c (CONDITIONAL_JUMP)  ; LAB_00535a0c
    MOV EAX,[0x01d5ba70]                ; 00535717 | g_CHeroClassInfo.name_hash
    PUSH EAX                            ; 0053571c
    PUSH EBX                            ; 0053571d
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0053571e
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 00535723
    TEST EAX,EAX                        ; 00535726
    JZ 0x005359f7                       ; 00535728
        ;   XREF to: 005359f7 (CONDITIONAL_JUMP)  ; LAB_005359f7
    MOV EDX,dword ptr [0x01d22e04]      ; 0053572e | g_CGlassClassInfo.name_hash
        ;   Label: LAB_0053572e
    PUSH EDX                            ; 00535734
    MOV ECX,dword ptr [ESI + 0x14d168]  ; 00535735
    PUSH ECX                            ; 0053573b
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0053573c
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV EBX,EAX                         ; 00535741
    ADD ESP,0x8                         ; 00535743
    TEST EAX,EAX                        ; 00535746
    JZ 0x0053578b                       ; 00535748
        ;   XREF to: 0053578b (CONDITIONAL_JUMP)  ; LAB_0053578b
    PUSH 0x0                            ; 0053574a
    PUSH 0x0                            ; 0053574c
    PUSH 0x0                            ; 0053574e
    ADD EAX,0x20                        ; 00535750
    PUSH 0x0                            ; 00535753
    PUSH EAX                            ; 00535755
    MOV EDX,dword ptr [0x005fc5a0]      ; 00535756 | DAT_005fc5a0
    PUSH EDX                            ; 0053575c
    MOV dword ptr [ESP + 0x8c],EAX      ; 0053575d
    CALL core_fire.cpp_FUN_004a3790     ; 00535764
        ;   XREF to: 004a3790 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a3790()
    ADD ESP,0x18                        ; 00535769
    TEST EAX,EAX                        ; 0053576c
    JZ 0x0053578b                       ; 0053576e
        ;   XREF to: 0053578b (CONDITIONAL_JUMP)  ; LAB_0053578b
    PUSH EBX                            ; 00535770
    CALL core_glass.cpp_CGlass_checkBreakableCondition_FUN_004cc5d0 ; 00535771
        ;   XREF to: 004cc5d0 (UNCONDITIONAL_CALL)  ; int core_glass.cpp_CGlass_checkBreakableCondition_FUN_004cc5d0(CGlass * this_ptr)
    ADD ESP,0x4                         ; 00535776
    TEST EAX,EAX                        ; 00535779
    JZ 0x0053578b                       ; 0053577b
        ;   XREF to: 0053578b (CONDITIONAL_JUMP)  ; LAB_0053578b
    MOV ECX,dword ptr [ESP + 0x74]      ; 0053577d
    PUSH ECX                            ; 00535781
    PUSH EBX                            ; 00535782
    CALL core_glass.cpp_FUN_004cc040    ; 00535783
        ;   XREF to: 004cc040 (UNCONDITIONAL_CALL)  ; undefined core_glass.cpp_FUN_004cc040()
    ADD ESP,0x8                         ; 00535788
    MOV EBX,dword ptr [0x02cfd894]      ; 0053578b | g_CTriggerClassInfo.name_hash
        ;   Label: LAB_0053578b
    PUSH EBX                            ; 00535791
    MOV EAX,dword ptr [ESI + 0x14d168]  ; 00535792
    PUSH EAX                            ; 00535798
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00535799
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV EBX,EAX                         ; 0053579e
    ADD ESP,0x8                         ; 005357a0
    TEST EAX,EAX                        ; 005357a3
    JZ 0x005357eb                       ; 005357a5
        ;   XREF to: 005357eb (CONDITIONAL_JUMP)  ; LAB_005357eb
    CMP dword ptr [EAX + 0x174],0x7     ; 005357a7
    JNZ 0x005357eb                      ; 005357ae
        ;   XREF to: 005357eb (CONDITIONAL_JUMP)  ; LAB_005357eb
    CMP byte ptr [EAX + 0x308],0x0      ; 005357b0
    JNZ 0x005357eb                      ; 005357b7
        ;   XREF to: 005357eb (CONDITIONAL_JUMP)  ; LAB_005357eb
    XOR ECX,ECX                         ; 005357b9
    PUSH ECX                            ; 005357bb
    LEA EAX,[ESP + 0x64]                ; 005357bc
    PUSH EAX                            ; 005357c0
    PUSH ECX                            ; 005357c1
    LEA EAX,[EBX + 0x20]                ; 005357c2
    PUSH 0x0                            ; 005357c5
    PUSH EAX                            ; 005357c7
    MOV EAX,[0x005fc5a0]                ; 005357c8 | DAT_005fc5a0
    PUSH EAX                            ; 005357cd
    MOV dword ptr [ESP + 0x78],ECX      ; 005357ce
    CALL core_fire.cpp_FUN_004a3790     ; 005357d2
        ;   XREF to: 004a3790 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a3790()
    ADD ESP,0x18                        ; 005357d7
    TEST EAX,EAX                        ; 005357da
    JZ 0x005357eb                       ; 005357dc
        ;   XREF to: 005357eb (CONDITIONAL_JUMP)  ; LAB_005357eb
    PUSH dword ptr [ESP + 0x60]         ; 005357de
    PUSH EBX                            ; 005357e2
    CALL core_trigger.cpp_CTrigger_applyDamage_FUN_0056ee20 ; 005357e3
        ;   XREF to: 0056ee20 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_applyDamage_FUN_0056ee20(CTrigger * this_ptr, float hit_points)
    ADD ESP,0x8                         ; 005357e8
    MOV EDX,dword ptr [0x01d0cf60]      ; 005357eb | g_CFlameCanClassInfo.name_hash
        ;   Label: LAB_005357eb
    PUSH EDX                            ; 005357f1
    MOV ECX,dword ptr [ESI + 0x14d168]  ; 005357f2
    PUSH ECX                            ; 005357f8
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 005357f9
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV EBX,EAX                         ; 005357fe
    ADD ESP,0x8                         ; 00535800
    TEST EAX,EAX                        ; 00535803
    JZ 0x0053582e                       ; 00535805
        ;   XREF to: 0053582e (CONDITIONAL_JUMP)  ; LAB_0053582e
    PUSH 0x0                            ; 00535807
    PUSH 0x0                            ; 00535809
    PUSH 0x0                            ; 0053580b
    ADD EAX,0x20                        ; 0053580d
    PUSH 0x0                            ; 00535810
    PUSH EAX                            ; 00535812
    MOV EAX,[0x005fc5a0]                ; 00535813 | DAT_005fc5a0
    PUSH EAX                            ; 00535818
    CALL core_fire.cpp_FUN_004a3790     ; 00535819
        ;   XREF to: 004a3790 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a3790()
    ADD ESP,0x18                        ; 0053581e
    TEST EAX,EAX                        ; 00535821
    JZ 0x0053582e                       ; 00535823
        ;   XREF to: 0053582e (CONDITIONAL_JUMP)  ; LAB_0053582e
    PUSH EBX                            ; 00535825
    CALL core_flamecan.cpp_CFlameCan_ignite_FUN_004a7110 ; 00535826
        ;   XREF to: 004a7110 (UNCONDITIONAL_CALL)  ; void core_flamecan.cpp_CFlameCan_ignite_FUN_004a7110(CFlameCan * this_ptr)
    ADD ESP,0x4                         ; 0053582b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053582e
        ;   Label: LAB_0053582e
    INC EDI                             ; 00535831
    MOV EBX,dword ptr [EAX + 0x14d164]  ; 00535832
    ADD ESI,0x4                         ; 00535838
    CMP EDI,EBX                         ; 0053583b
    JL 0x005356aa                       ; 0053583d
        ;   XREF to: 005356aa (CONDITIONAL_JUMP)  ; LAB_005356aa
    MOV EAX,[0x005fe9dc]                ; 00535843 | g_CGamePtr
        ;   Label: LAB_00535843
    MOV ESI,dword ptr [EAX + 0x230]     ; 00535848 | g_CGameInstance.profile_mode
    TEST ESI,ESI                        ; 0053584e
    JZ 0x005359d0                       ; 00535850
        ;   XREF to: 005359d0 (CONDITIONAL_JUMP)  ; LAB_005359d0
    CMP ESI,0x2                         ; 00535856
    JNZ 0x00535980                      ; 00535859
        ;   XREF to: 00535980 (CONDITIONAL_JUMP)  ; LAB_00535980
    XOR EAX,EAX                         ; 0053585f
    MOV dword ptr [ESP + 0x80],EAX      ; 00535861
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00535868
    XOR EDX,EDX                         ; 0053586f
    DEC EAX                             ; 00535871
    MOV dword ptr [ESP + 0x7c],EDX      ; 00535872
    MOV dword ptr [ESP + 0x70],EAX      ; 00535876
    TEST EAX,EAX                        ; 0053587a
    JLE 0x0053591c                      ; 0053587c
        ;   XREF to: 0053591c (CONDITIONAL_JUMP)  ; LAB_0053591c
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00535882
    SHL EAX,0x2                         ; 00535889
    MOV dword ptr [ESP + 0x6c],EAX      ; 0053588c
    MOV EBX,dword ptr [ESP + 0x80]      ; 00535890
        ;   Label: LAB_00535890
    MOV EDI,dword ptr [ESP + 0x8c]      ; 00535897
    INC EBX                             ; 0053589e
    CMP EBX,EDI                         ; 0053589f
    JGE 0x005358f6                      ; 005358a1
        ;   XREF to: 005358f6 (CONDITIONAL_JUMP)  ; LAB_005358f6
    MOV EDI,dword ptr [ESP + 0x6c]      ; 005358a3
    MOV EDX,dword ptr [ESP + 0x7c]      ; 005358a7
    LEA EAX,[EBX*0x4 + 0x0]             ; 005358ab
    MOV ECX,dword ptr [EAX + 0x207bad8] ; 005358b2
        ;   Label: LAB_005358b2
    MOV ESI,dword ptr [EDX + 0x207bad8] ; 005358b8
    CMP ESI,ECX                         ; 005358be
    JGE 0x005358ee                      ; 005358c0
        ;   XREF to: 005358ee (CONDITIONAL_JUMP)  ; LAB_005358ee
    MOV ECX,ESI                         ; 005358c2
    MOV ESI,dword ptr [EAX + 0x207bad8] ; 005358c4
    MOV dword ptr [EDX + 0x207bad8],ESI ; 005358ca
    MOV ESI,dword ptr [EAX + 0x207da18] ; 005358d0
    MOV dword ptr [EAX + 0x207bad8],ECX ; 005358d6
    MOV ECX,dword ptr [EDX + 0x207da18] ; 005358dc
    MOV dword ptr [EDX + 0x207da18],ESI ; 005358e2
    MOV dword ptr [EAX + 0x207da18],ECX ; 005358e8
    ADD EAX,0x4                         ; 005358ee
        ;   Label: LAB_005358ee
    INC EBX                             ; 005358f1
    CMP EAX,EDI                         ; 005358f2
    JL 0x005358b2                       ; 005358f4
        ;   XREF to: 005358b2 (CONDITIONAL_JUMP)  ; LAB_005358b2
    MOV EDX,dword ptr [ESP + 0x7c]      ; 005358f6
        ;   Label: LAB_005358f6
    MOV ECX,dword ptr [ESP + 0x80]      ; 005358fa
    MOV EBX,dword ptr [ESP + 0x70]      ; 00535901
    ADD EDX,0x4                         ; 00535905
    INC ECX                             ; 00535908
    MOV dword ptr [ESP + 0x7c],EDX      ; 00535909
    MOV dword ptr [ESP + 0x80],ECX      ; 0053590d
    CMP ECX,EBX                         ; 00535914
    JL 0x00535890                       ; 00535916
        ;   XREF to: 00535890 (CONDITIONAL_JUMP)  ; LAB_00535890
    MOV ESI,dword ptr [ESP + 0x8c]      ; 0053591c
        ;   Label: LAB_0053591c
    MOV EDI,0x14                        ; 00535923
    CMP ESI,EDI                         ; 00535928
    JGE 0x0053592e                      ; 0053592a
        ;   XREF to: 0053592e (CONDITIONAL_JUMP)  ; LAB_0053592e
    MOV EDI,ESI                         ; 0053592c
    XOR ESI,ESI                         ; 0053592e
        ;   Label: LAB_0053592e
    TEST EDI,EDI                        ; 00535930
    JLE 0x00535980                      ; 00535932
        ;   XREF to: 00535980 (CONDITIONAL_JUMP)  ; LAB_00535980
    XOR EBX,EBX                         ; 00535934
    FILD dword ptr [EBX + 0x207bad8]    ; 00535936
        ;   Label: LAB_00535936
    FMUL double ptr [0x005d0527]        ; 0053593c | DAT_005d0527
    FMUL double ptr [0x005d052f]        ; 00535942 | DAT_005d052f
    FMUL double ptr [0x005d0537]        ; 00535948 | DAT_005d0537
    FDIV float ptr [ESP]                ; 0053594e
    SUB ESP,0x8                         ; 00535951
    FSTP double ptr [ESP]               ; 00535954
    MOV EAX,dword ptr [EBX + 0x207da18] ; 00535957
    PUSH EAX                            ; 0053595d
    PUSH ESI                            ; 0053595e
    PUSH 0x5d04ed                       ; 0053595f | = "%d. %s : %3.2f ms\n"
    MOV EDX,dword ptr [0x005f1690]      ; 00535964 | g_CConsolePtr
    PUSH EDX                            ; 0053596a | g_CConsoleInstance
    ADD EBX,0x4                         ; 0053596b
    INC ESI                             ; 0053596e
    CALL engine_console.cpp_FUN_00441ff0 ; 0053596f
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0x18                        ; 00535974
    CMP ESI,EDI                         ; 00535977
    JL 0x00535936                       ; 00535979
        ;   XREF to: 00535936 (CONDITIONAL_JUMP)  ; LAB_00535936
    LEA EAX,[EAX]                       ; 0053597b
    MOV ECX,ECX                         ; 0053597e
    MOV EBX,dword ptr [ESP + 0x68]      ; 00535980
        ;   Label: LAB_00535980
    CALL wincore_winrun.cpp_getTime_FUN_005806a0 ; 00535984
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_005806a0()
    SUB EAX,EBX                         ; 00535989
    MOV dword ptr [ESP + 0x9c],EAX      ; 0053598b
    FILD dword ptr [ESP + 0x9c]         ; 00535992
    FMUL double ptr [0x005d0527]        ; 00535999 | DAT_005d0527
    FMUL double ptr [0x005d052f]        ; 0053599f | DAT_005d052f
    FMUL double ptr [0x005d0537]        ; 005359a5 | DAT_005d0537
    FDIV float ptr [ESP]                ; 005359ab
    SUB ESP,0x8                         ; 005359ae
    MOV ESI,dword ptr [ESP + 0x94]      ; 005359b1
    FSTP double ptr [ESP]               ; 005359b8
    PUSH ESI                            ; 005359bb
    PUSH 0x5d0500                       ; 005359bc | = "Process time (%d actors) : %3.2f ms\n"
    MOV EDI,dword ptr [0x005f1690]      ; 005359c1 | g_CConsolePtr
    PUSH EDI                            ; 005359c7 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 005359c8
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0x14                        ; 005359cd
    MOV EDX,dword ptr [EBP + 0x14]      ; 005359d0
        ;   Label: LAB_005359d0
    MOV ECX,dword ptr [EDX + 0x14d164]  ; 005359d3
    XOR EAX,EAX                         ; 005359d9
    TEST ECX,ECX                        ; 005359db
    JLE 0x005359f0                      ; 005359dd
        ;   XREF to: 005359f0 (CONDITIONAL_JUMP)  ; LAB_005359f0
    MOV EDX,dword ptr [EBP + 0x14]      ; 005359df
    INC EAX                             ; 005359e2
        ;   Label: LAB_005359e2
    CMP EAX,dword ptr [EDX + 0x14d164]  ; 005359e3
    JL 0x005359e2                       ; 005359e9
        ;   XREF to: 005359e2 (CONDITIONAL_JUMP)  ; LAB_005359e2
    LEA EAX,[EAX]                       ; 005359eb
    MOV ECX,ECX                         ; 005359ee
    MOV ESP,EBP                         ; 005359f0
        ;   Label: LAB_005359f0
    POP EBP                             ; 005359f2
    POP EDI                             ; 005359f3
    POP ESI                             ; 005359f4
    POP EBX                             ; 005359f5
    RET                                 ; 005359f6
    MOV dword ptr [EBX + 0x3254],0x41200000 ; 005359f7
        ;   Label: LAB_005359f7
    MOV dword ptr [EBX + 0x3258],EAX    ; 00535a01
    JMP 0x0053572e                      ; 00535a07
        ;   XREF to: 0053572e (UNCONDITIONAL_JUMP)  ; LAB_0053572e
    TEST EAX,EAX                        ; 00535a0c
        ;   Label: LAB_00535a0c
    JNZ 0x0053572e                      ; 00535a0e
        ;   XREF to: 0053572e (CONDITIONAL_JUMP)  ; LAB_0053572e
    LEA EAX,[ESP + 0x4]                 ; 00535a14
    PUSH EAX                            ; 00535a18
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 00535a19
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00535a1e
    MOV ECX,0x4                         ; 00535a21
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00535a26
    LEA EDX,[ESP + 0x40]                ; 00535a2a
    MOV dword ptr [ESP + 0x8],EAX       ; 00535a2e
    LEA EAX,[ESP + 0x10]                ; 00535a32
    MOV dword ptr [ESP + 0x34],ECX      ; 00535a36
    CMP EAX,EDX                         ; 00535a3a
    JZ 0x00535a56                       ; 00535a3c
        ;   XREF to: 00535a56 (CONDITIONAL_JUMP)  ; LAB_00535a56
    MOV EAX,dword ptr [ESP + 0x40]      ; 00535a3e
    MOV dword ptr [ESP + 0x10],EAX      ; 00535a42
    MOV EAX,dword ptr [ESP + 0x44]      ; 00535a46
    MOV dword ptr [ESP + 0x14],EAX      ; 00535a4a
    MOV EAX,dword ptr [ESP + 0x48]      ; 00535a4e
    MOV dword ptr [ESP + 0x18],EAX      ; 00535a52
    LEA EDX,[ESP + 0x4]                 ; 00535a56
        ;   Label: LAB_00535a56
    MOV EAX,dword ptr [ESP + 0x78]      ; 00535a5a
    PUSH EDX                            ; 00535a5e
    MOV EBX,dword ptr [ESP + 0x7c]      ; 00535a5f
    MOV EAX,dword ptr [EAX + 0x154]     ; 00535a63
    PUSH EBX                            ; 00535a69
    CALL dword ptr [EAX + 0x108]        ; 00535a6a
    ADD ESP,0x8                         ; 00535a70
    JMP 0x0053572e                      ; 00535a73
        ;   XREF to: 0053572e (UNCONDITIONAL_JUMP)  ; LAB_0053572e

