; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_doc_cpp_FUN_00474400(CCharacter *param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined        Stack[-0x74]:1  local_74
; undefined        Stack[-0x68]:1  local_68
; undefined        Stack[-0x5c]:1  local_5c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
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
;
; XREF[1]:
;   core_doc.cpp_FUN_00469550 at 0046a1da
;
; Referenced Globals:
;   void* switchdataD_0047430c = 0047495c
;   void* switchdataD_00474338 = 004749a2
;   void* switchdataD_0047435c = 004749ee
;   void* switchdataD_00474380 = 004745ab
;   void* switchdataD_004743b4 = 00474d28
;   void* switchdataD_004743d8 = 00474d72
;   TerminatedCString s_CShotgun_005da3f4
;   TerminatedCString s_CRifle_005da3fd
;   TerminatedCString s_CTrap_005da404
;   TerminatedCString s_actionPending_d_doc_cpp_005da40a
;   TerminatedCString s_CFlashlight_005da42d
;   undefined4 DAT_005da43c
;   undefined4 DAT_005da444
;   undefined4 DAT_005fecb8
;   undefined4 DAT_005fecbc
;   ... and 10 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_FUN_00408ac0
;   core_actor.cpp_FUN_0040c550
;   core_charactr.cpp_CCharacter_advanceLayerAction_FUN_004340b0
;   core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_00434610
;   core_charactr.cpp_FUN_004325b0
;   core_charactr.cpp_FUN_00434590
;   core_doc.cpp_FUN_004742a0
;   core_dynamite.cpp_CDynamite_isFuseLit_FUN_00492690
;   core_dynamite.cpp_FUN_00492640
;   core_hero.cpp_FUN_004ec2c0
;   core_inv.cpp_FUN_004f8d00
;   core_inv.cpp_FUN_004f9ed0
;   core_inv.cpp_FUN_004f9ef0
;   core_mission.cpp_CDemonMission_addActorToList_FUN_0051b160
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00474400
        ;   Label: core_doc.cpp_FUN_00474400
    PUSH ESI                            ; 00474401
    PUSH EDI                            ; 00474402
    PUSH EBP                            ; 00474403
    MOV EBP,ESP                         ; 00474404
    SUB ESP,0x6c                        ; 00474406
    AND ESP,0xfffffff8                  ; 00474409
    MOV EBX,dword ptr [EBP + 0x14]      ; 0047440c
    CMP dword ptr [EBX + 0x2c98],0xe    ; 0047440f
    JNZ 0x0047442e                      ; 00474416
        ;   XREF to: 0047442e (CONDITIONAL_JUMP)  ; LAB_0047442e
    MOV ECX,dword ptr [EBX + 0x2628]    ; 00474418
    TEST ECX,ECX                        ; 0047441e
    JNZ 0x0047442e                      ; 00474420
        ;   XREF to: 0047442e (CONDITIONAL_JUMP)  ; LAB_0047442e
    MOV dword ptr [EBX + 0x2c9c],ECX    ; 00474422
    MOV dword ptr [EBX + 0x2c98],ECX    ; 00474428
    MOV EDI,0xffffffff                  ; 0047442e
        ;   Label: LAB_0047442e
    MOV EAX,dword ptr [EBX + 0x1ff88]   ; 00474433
    XOR ESI,ESI                         ; 00474439
    MOV dword ptr [ESP + 0x3c],EDI      ; 0047443b
    MOV dword ptr [ESP + 0x5c],ESI      ; 0047443f
    TEST EAX,EAX                        ; 00474443
    JZ 0x004744b9                       ; 00474445
        ;   XREF to: 004744b9 (CONDITIONAL_JUMP)  ; LAB_004744b9
    MOV dword ptr [EBX + 0x1ffac],ESI   ; 00474447
    LEA ESI,[EBX + 0x1fae8]             ; 0047444d
        ;   Label: LAB_0047444d
    PUSH ESI                            ; 00474453
    CALL core_inv.cpp_FUN_004f9ed0      ; 00474454
        ;   XREF to: 004f9ed0 (UNCONDITIONAL_CALL)  ; CLightGun * core_inv.cpp_FUN_004f9ed0(CInventory * this_ptr)
    ADD ESP,0x4                         ; 00474459
    TEST EAX,EAX                        ; 0047445c
    SETNZ AL                            ; 0047445e
    AND EAX,0xff                        ; 00474461
    PUSH ESI                            ; 00474466
    MOV dword ptr [ESP + 0x58],EAX      ; 00474467
    CALL core_inv.cpp_FUN_004f9ef0      ; 0047446b
        ;   XREF to: 004f9ef0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004f9ef0()
    ADD ESP,0x4                         ; 00474470
    TEST EAX,EAX                        ; 00474473
    SETNZ AL                            ; 00474475
    AND EAX,0xff                        ; 00474478
    MOV dword ptr [ESP + 0x64],ESI      ; 0047447d
    XOR EDI,EDI                         ; 00474481
    MOV dword ptr [ESP + 0x58],EAX      ; 00474483
    LEA EAX,[EBX + 0x158]               ; 00474487
    MOV dword ptr [ESP + 0x44],EDI      ; 0047448d
    MOV dword ptr [ESP + 0x48],EAX      ; 00474491
    FLD float ptr [EBP + 0x18]          ; 00474495
        ;   Label: LAB_00474495
    FLDZ                                ; 00474498
    FCOMPP                              ; 0047449a
    FNSTSW AX                           ; 0047449c
    SAHF                                ; 0047449e
    JC 0x00474537                       ; 0047449f
        ;   XREF to: 00474537 (CONDITIONAL_JUMP)  ; LAB_00474537
    CMP dword ptr [EBX + 0x1ffac],0x0   ; 004744a5
        ;   Label: LAB_004744a5
    JNZ 0x00474ea4                      ; 004744ac
        ;   XREF to: 00474ea4 (CONDITIONAL_JUMP)  ; LAB_00474ea4
    MOV ESP,EBP                         ; 004744b2
        ;   Label: LAB_004744b2
    POP EBP                             ; 004744b4
    POP EDI                             ; 004744b5
    POP ESI                             ; 004744b6
    POP EBX                             ; 004744b7
    RET                                 ; 004744b8
    CMP dword ptr [EBX + 0x1ffac],0x0   ; 004744b9
        ;   Label: LAB_004744b9
    JZ 0x0047444d                       ; 004744c0
        ;   XREF to: 0047444d (CONDITIONAL_JUMP)  ; LAB_0047444d
    MOV ECX,dword ptr [EBX + 0x2628]    ; 004744c2
    TEST ECX,ECX                        ; 004744c8
    JNZ 0x004744fe                      ; 004744ca
        ;   XREF to: 004744fe (CONDITIONAL_JUMP)  ; LAB_004744fe
    LEA EAX,[EBX + 0x1fae8]             ; 004744cc
    MOV EAX,dword ptr [EAX + 0x338]     ; 004744d2
    MOV dword ptr [ESP + 0x5c],EAX      ; 004744d8
    MOV EDX,dword ptr [ESP + 0x5c]      ; 004744dc
        ;   Label: LAB_004744dc
    TEST EDX,EDX                        ; 004744e0
    JNZ 0x0047444d                      ; 004744e2
        ;   XREF to: 0047444d (CONDITIONAL_JUMP)  ; LAB_0047444d
    CMP dword ptr [ESP + 0x3c],0x0      ; 004744e8
    JGE 0x0047444d                      ; 004744ed
        ;   XREF to: 0047444d (CONDITIONAL_JUMP)  ; LAB_0047444d
    MOV dword ptr [EBX + 0x1ffac],EDX   ; 004744f3
    JMP 0x0047444d                      ; 004744f9
        ;   XREF to: 0047444d (UNCONDITIONAL_JUMP)  ; LAB_0047444d
    MOV ESI,dword ptr [0x02c99770]      ; 004744fe | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_004744fe
    PUSH ESI                            ; 00474504
    PUSH ECX                            ; 00474505
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00474506
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 0047450b
    MOV dword ptr [ESP + 0x5c],EAX      ; 0047450e
    TEST EAX,EAX                        ; 00474512
    JNZ 0x004744dc                      ; 00474514
        ;   XREF to: 004744dc (CONDITIONAL_JUMP)  ; LAB_004744dc
    MOV EAX,dword ptr [EBX + 0x2628]    ; 00474516
    PUSH EAX                            ; 0047451c
    MOV EDX,dword ptr [EAX + 0x154]     ; 0047451d
    CALL dword ptr [EDX + 0x74]         ; 00474523
    ADD ESP,0x4                         ; 00474526
    TEST AL,0xb                         ; 00474529
    JZ 0x004744dc                       ; 0047452b
        ;   XREF to: 004744dc (CONDITIONAL_JUMP)  ; LAB_004744dc
    MOV dword ptr [ESP + 0x3c],0x8      ; 0047452d
    JMP 0x004744dc                      ; 00474535
        ;   XREF to: 004744dc (UNCONDITIONAL_JUMP)  ; LAB_004744dc
    MOV EAX,dword ptr [EBX + 0x1ff5c]   ; 00474537
        ;   Label: LAB_00474537
    CMP EAX,0x1                         ; 0047453d
    JNZ 0x004747c6                      ; 00474540
        ;   XREF to: 004747c6 (CONDITIONAL_JUMP)  ; LAB_004747c6
    MOV dword ptr [ESP + 0x60],0x3      ; 00474546
        ;   Label: LAB_00474546
    MOV EDI,dword ptr [ESP + 0x60]      ; 0047454e
        ;   Label: LAB_0047454e
    MOV EAX,dword ptr [EBX + 0x2c9c]    ; 00474552
    PUSH EDI                            ; 00474558
    MOV dword ptr [ESP + 0x54],EAX      ; 00474559
    LEA EAX,[EBP + 0x18]                ; 0047455d
    PUSH EAX                            ; 00474560
    PUSH EBX                            ; 00474561
    CALL core_charactr.cpp_CCharacter_advanceLayerAction_FUN_004340b0 ; 00474562
        ;   XREF to: 004340b0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_advanceLayerAction_FUN_004340b0(CCharacter * this_ptr, float * remaining_time, int target_bone_index)
    ADD ESP,0xc                         ; 00474567
    MOV EDX,dword ptr [EBX + 0x2c98]    ; 0047456a
    MOV dword ptr [ESP + 0x38],EAX      ; 00474570
    IMUL EAX,EDX,0x38                   ; 00474574
    IMUL ESI,dword ptr [EBX + EAX*0x1 + 0x27f4],0x120 ; 00474577
    MOV EDI,dword ptr [ESP + 0x48]      ; 00474582
    PUSH EDI                            ; 00474586
    CALL core_motion.cpp_FUN_00524a00   ; 00474587
        ;   XREF to: 00524a00 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_FUN_00524a00(CMotionController * this_ptr)
    ADD EAX,0x1c28                      ; 0047458c
    ADD ESI,EAX                         ; 00474591
    MOV EAX,dword ptr [EBX + 0x2c98]    ; 00474593
    SUB EAX,0x6                         ; 00474599
    ADD ESP,0x4                         ; 0047459c
    CMP EAX,0xc                         ; 0047459f
    JA 0x004745d8                       ; 004745a2
        ;   XREF to: 004745d8 (CONDITIONAL_JUMP)  ; caseD_11
    JMP dword ptr [EAX*0x4 + 0x474380]  ; 004745a4 | caseD_6 | caseD_7 | caseD_8
        ;   Label: switchD
    MOV EDI,dword ptr [0x01c3db94]      ; 004745ab | g_CDynamiteClassInfo.name_hash
        ;   Label: caseD_6
    PUSH EDI                            ; 004745b1
    MOV EAX,dword ptr [EBX + 0x20004]   ; 004745b2
    PUSH EAX                            ; 004745b8
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004745b9
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 004745be
    MOV EDI,EAX                         ; 004745c1
    TEST EAX,EAX                        ; 004745c3
    JZ 0x004745d8                       ; 004745c5
        ;   XREF to: 004745d8 (CONDITIONAL_JUMP)  ; caseD_11
    PUSH EAX                            ; 004745c7
    CALL core_dynamite.cpp_CDynamite_isFuseLit_FUN_00492690 ; 004745c8
        ;   XREF to: 00492690 (UNCONDITIONAL_CALL)  ; int core_dynamite.cpp_CDynamite_isFuseLit_FUN_00492690(CDynamite * this_ptr)
    ADD ESP,0x4                         ; 004745cd
    TEST EAX,EAX                        ; 004745d0
    JZ 0x00474a2f                       ; 004745d2
        ;   XREF to: 00474a2f (CONDITIONAL_JUMP)  ; LAB_00474a2f
    CMP dword ptr [ESP + 0x38],0x0      ; 004745d8
        ;   Label: caseD_9
    JL 0x004747a0                       ; 004745dd
        ;   XREF to: 004747a0 (CONDITIONAL_JUMP)  ; LAB_004747a0
    MOV EDI,dword ptr [ESP + 0x5c]      ; 004745e3
    MOV EAX,dword ptr [EBX + 0x20004]   ; 004745e7
    CMP EAX,EDI                         ; 004745ed
    JZ 0x00474664                       ; 004745ef
        ;   XREF to: 00474664 (CONDITIONAL_JUMP)  ; LAB_00474664
    TEST EAX,EAX                        ; 004745f5
    JZ 0x00474627                       ; 004745f7
        ;   XREF to: 00474627 (CONDITIONAL_JUMP)  ; LAB_00474627
    JNZ 0x00474d60                      ; 004745f9
        ;   XREF to: 00474d60 (CONDITIONAL_JUMP)  ; LAB_00474d60
    CMP EAX,dword ptr [ESP + 0x38]      ; 004745ff
        ;   Label: LAB_004745ff
    JNZ 0x00474627                      ; 00474603
        ;   XREF to: 00474627 (CONDITIONAL_JUMP)  ; LAB_00474627
    PUSH 0x1                            ; 00474605
    MOV EAX,dword ptr [EBX + 0x20004]   ; 00474607
    PUSH EAX                            ; 0047460d
    MOV EDX,dword ptr [EAX + 0x154]     ; 0047460e
    CALL dword ptr [EDX + 0xdc]         ; 00474614
    ADD ESP,0x8                         ; 0047461a
    MOV dword ptr [EBX + 0x20004],0x0   ; 0047461d
    CMP dword ptr [EBX + 0x1ffac],0x0   ; 00474627
        ;   Label: LAB_00474627
    JZ 0x00474664                       ; 0047462e
        ;   XREF to: 00474664 (CONDITIONAL_JUMP)  ; LAB_00474664
    MOV EDX,dword ptr [ESP + 0x5c]      ; 00474630
    TEST EDX,EDX                        ; 00474634
    JNZ 0x00474dab                      ; 00474636
        ;   XREF to: 00474dab (CONDITIONAL_JUMP)  ; LAB_00474dab
    XOR EAX,EAX                         ; 0047463c
        ;   Label: LAB_0047463c
    CMP EAX,dword ptr [ESP + 0x38]      ; 0047463e
        ;   Label: LAB_0047463e
    JNZ 0x00474664                      ; 00474642
        ;   XREF to: 00474664 (CONDITIONAL_JUMP)  ; LAB_00474664
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00474644
    MOV dword ptr [EBX + 0x20004],EAX   ; 00474648
    TEST EAX,EAX                        ; 0047464e
    JZ 0x00474664                       ; 00474650
        ;   XREF to: 00474664 (CONDITIONAL_JUMP)  ; LAB_00474664
    PUSH 0x2                            ; 00474652
    MOV EDX,dword ptr [EAX + 0x154]     ; 00474654
    PUSH EAX                            ; 0047465a
    CALL dword ptr [EDX + 0xdc]         ; 0047465b
    ADD ESP,0x8                         ; 00474661
    MOV EDX,dword ptr [EBX + 0x1ff5c]   ; 00474664
        ;   Label: LAB_00474664
    CMP EDX,0x1                         ; 0047466a
    JNZ 0x0047468a                      ; 0047466d
        ;   XREF to: 0047468a (CONDITIONAL_JUMP)  ; LAB_0047468a
    CMP dword ptr [ESP + 0x38],0x3      ; 0047466f
    JNZ 0x0047468a                      ; 00474674
        ;   XREF to: 0047468a (CONDITIONAL_JUMP)  ; LAB_0047468a
    PUSH EDX                            ; 00474676
    PUSH EBX                            ; 00474677
    CALL core_hero.cpp_FUN_004ec2c0     ; 00474678
        ;   XREF to: 004ec2c0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_FUN_004ec2c0(CHero * this_ptr, int hand_index)
    ADD ESP,0x8                         ; 0047467d
    MOV dword ptr [EBX + 0x1ff5c],0x0   ; 00474680
    MOV ESI,dword ptr [EBX + 0x1ff8c]   ; 0047468a
        ;   Label: LAB_0047468a
    TEST ESI,ESI                        ; 00474690
    JZ 0x0047471c                       ; 00474692
        ;   XREF to: 0047471c (CONDITIONAL_JUMP)  ; LAB_0047471c
    CMP dword ptr [ESP + 0x38],0x3      ; 00474698
    JNZ 0x0047471c                      ; 0047469d
        ;   XREF to: 0047471c (CONDITIONAL_JUMP)  ; LAB_0047471c
    PUSH 0x0                            ; 0047469f
    PUSH ESI                            ; 004746a1
    MOV EDX,dword ptr [ESP + 0x6c]      ; 004746a2
    PUSH EDX                            ; 004746a6
    CALL core_inv.cpp_FUN_004f8d00      ; 004746a7
        ;   XREF to: 004f8d00 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_FUN_004f8d00(CInventory * this_ptr, CDemonActor * item_to_remove, int should_delete_actor)
    ADD ESP,0xc                         ; 004746ac
    MOV ECX,dword ptr [EBX + 0x1ff8c]   ; 004746af
    PUSH ECX                            ; 004746b5
    MOV ESI,dword ptr [0x0061f650]      ; 004746b6 | DAT_0061f650
    PUSH ESI                            ; 004746bc | DAT_01d2c900
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_0051b160 ; 004746bd
        ;   XREF to: 0051b160 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_0051b160(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004746c2
    PUSH 0x0                            ; 004746c5
    MOV EDI,dword ptr [EBX + 0x1ff8c]   ; 004746c7
    PUSH 0x0                            ; 004746cd
    PUSH EDI                            ; 004746cf
    PUSH 0x1                            ; 004746d0
    PUSH EBX                            ; 004746d2
    CALL core_charactr.cpp_FUN_004325b0 ; 004746d3
        ;   XREF to: 004325b0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004325b0()
    ADD ESP,0x14                        ; 004746d8
    PUSH 0x5da404                       ; 004746db | = "CTrap"
    MOV EAX,dword ptr [EBX + 0x1ff8c]   ; 004746e0
    PUSH EAX                            ; 004746e6
    CALL core_actor.cpp_FUN_0040c550    ; 004746e7
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004746ec
    TEST EAX,EAX                        ; 004746ef
    JZ 0x00474dbd                       ; 004746f1
        ;   XREF to: 00474dbd (CONDITIONAL_JUMP)  ; LAB_00474dbd
    PUSH 0x1                            ; 004746f7
    PUSH 0x17                           ; 004746f9
    MOV EAX,dword ptr [ESP + 0x50]      ; 004746fb
    PUSH EAX                            ; 004746ff
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00474700
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00474705
    MOV dword ptr [EBX + 0x1ff5c],0x6   ; 00474708
    MOV dword ptr [EBX + 0x1ff8c],0x0   ; 00474712
        ;   Label: LAB_00474712
    MOV EDX,dword ptr [ESP + 0x38]      ; 0047471c
        ;   Label: LAB_0047471c
    CMP EDX,0xa                         ; 00474720
    JNZ 0x00474e10                      ; 00474723
        ;   XREF to: 00474e10 (CONDITIONAL_JUMP)  ; LAB_00474e10
    CMP dword ptr [ESP + 0x54],0x0      ; 00474729
    JZ 0x00474e01                       ; 0047472e
        ;   XREF to: 00474e01 (CONDITIONAL_JUMP)  ; LAB_00474e01
    MOV dword ptr [EBX + 0x1ff54],0x2   ; 00474734
    MOV EDX,dword ptr [ESP + 0x38]      ; 0047473e
        ;   Label: LAB_0047473e
    CMP EDX,0xb                         ; 00474742
    JNZ 0x00474e5e                      ; 00474745
        ;   XREF to: 00474e5e (CONDITIONAL_JUMP)  ; LAB_00474e5e
    CMP dword ptr [ESP + 0x58],0x0      ; 0047474b
    JZ 0x00474e48                       ; 00474750
        ;   XREF to: 00474e48 (CONDITIONAL_JUMP)  ; LAB_00474e48
    PUSH 0x1                            ; 00474756
    MOV EAX,[0x0061d95c]                ; 00474758 | g_CGamePtr
    MOV dword ptr [EBX + 0x1ff58],0x2   ; 0047475d
    PUSH EAX                            ; 00474767 | g_CGameInstance
        ;   Label: LAB_00474767
    MOV EDX,dword ptr [EAX + 0xb00]     ; 00474768 | g_CGameInstance.field2816_0xb00
    CALL dword ptr [EDX]                ; 0047476e
    ADD ESP,0x8                         ; 00474770
    CMP dword ptr [EBX + 0x1ff5c],0x7   ; 00474773
        ;   Label: LAB_00474773
    JNZ 0x00474792                      ; 0047477a
        ;   XREF to: 00474792 (CONDITIONAL_JUMP)  ; LAB_00474792
    MOV ECX,dword ptr [ESP + 0x38]      ; 0047477c
    TEST ECX,ECX                        ; 00474780
    JNZ 0x00474e96                      ; 00474782
        ;   XREF to: 00474e96 (CONDITIONAL_JUMP)  ; LAB_00474e96
    MOV dword ptr [EBX + 0x1ff5c],0x0   ; 00474788
        ;   Label: LAB_00474788
    MOV EDI,dword ptr [ESP + 0x60]      ; 00474792
        ;   Label: LAB_00474792
    PUSH EDI                            ; 00474796
    PUSH EBX                            ; 00474797
    CALL core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_00434610 ; 00474798
        ;   XREF to: 00434610 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_00434610(CCharacter * this_ptr, int layer_action_index)
    ADD ESP,0x8                         ; 0047479d
    MOV EAX,dword ptr [ESP + 0x44]      ; 004747a0
        ;   Label: LAB_004747a0
    INC EAX                             ; 004747a4
    MOV dword ptr [ESP + 0x44],EAX      ; 004747a5
    CMP EAX,0x2                         ; 004747a9
    JL 0x00474495                       ; 004747ac
        ;   XREF to: 00474495 (CONDITIONAL_JUMP)  ; LAB_00474495
    CMP dword ptr [EBX + 0x1ffac],0x0   ; 004747b2
    JNZ 0x00474ea4                      ; 004747b9
        ;   XREF to: 00474ea4 (CONDITIONAL_JUMP)  ; LAB_00474ea4
    MOV ESP,EBP                         ; 004747bf
    POP EBP                             ; 004747c1
    POP EDI                             ; 004747c2
    POP ESI                             ; 004747c3
    POP EBX                             ; 004747c4
    RET                                 ; 004747c5
    MOV EDX,dword ptr [EBX + 0x1ff8c]   ; 004747c6
        ;   Label: LAB_004747c6
    TEST EDX,EDX                        ; 004747cc
    JNZ 0x00474546                      ; 004747ce
        ;   XREF to: 00474546 (CONDITIONAL_JUMP)  ; LAB_00474546
    CMP EAX,0x2                         ; 004747d4
    JNZ 0x004747e2                      ; 004747d7
        ;   XREF to: 004747e2 (CONDITIONAL_JUMP)  ; LAB_004747e2
    MOV dword ptr [ESP + 0x60],EDX      ; 004747d9
    JMP 0x0047454e                      ; 004747dd
        ;   XREF to: 0047454e (UNCONDITIONAL_JUMP)  ; LAB_0047454e
    CMP EAX,0x3                         ; 004747e2
        ;   Label: LAB_004747e2
    JZ 0x00474800                       ; 004747e5
        ;   XREF to: 00474800 (CONDITIONAL_JUMP)  ; LAB_00474800
    CMP dword ptr [ESP + 0x54],0x0      ; 004747e7
    JZ 0x0047486e                       ; 004747ec
        ;   XREF to: 0047486e (CONDITIONAL_JUMP)  ; LAB_0047486e
    CMP dword ptr [EBX + 0x1ff54],0x0   ; 004747f2
    JNZ 0x0047486e                      ; 004747f9
        ;   XREF to: 0047486e (CONDITIONAL_JUMP)  ; LAB_0047486e
    JMP 0x00474546                      ; 004747fb
        ;   XREF to: 00474546 (UNCONDITIONAL_JUMP)  ; LAB_00474546
    MOV ESI,0x6                         ; 00474800
        ;   Label: LAB_00474800
    PUSH ESI                            ; 00474805
    PUSH EBX                            ; 00474806
    CALL core_charactr.cpp_FUN_00434590 ; 00474807
        ;   XREF to: 00434590 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434590()
    MOV dword ptr [ESP + 0x70],EAX      ; 0047480c
    MOV dword ptr [ESP + 0x68],ESI      ; 00474810
    FLD float ptr [ESP + 0x70]          ; 00474814
    ADD ESP,0x8                         ; 00474818
    FCOMP double ptr [0x005da444]       ; 0047481b | DAT_005da444
    FNSTSW AX                           ; 00474821
    SAHF                                ; 00474823
    JBE 0x0047454e                      ; 00474824
        ;   XREF to: 0047454e (CONDITIONAL_JUMP)  ; LAB_0047454e
    FLD float ptr [EBP + 0x18]          ; 0047482a
    FMUL double ptr [0x005da43c]        ; 0047482d | DAT_005da43c
    FADD float ptr [EBX + 0x1ffbc]      ; 00474833
    FST float ptr [EBX + 0x1ffbc]       ; 00474839
    FCOMP float ptr [0x005fecbc]        ; 0047483f | DAT_005fecbc
    FNSTSW AX                           ; 00474845
    SAHF                                ; 00474847
    JA 0x00474861                       ; 00474848
        ;   XREF to: 00474861 (CONDITIONAL_JUMP)  ; LAB_00474861
    MOV EDI,dword ptr [EBX + 0xc1e4]    ; 0047484a
        ;   Label: LAB_0047484a
    TEST EDI,EDI                        ; 00474850
    JNZ 0x004744a5                      ; 00474852
        ;   XREF to: 004744a5 (CONDITIONAL_JUMP)  ; LAB_004744a5
    MOV dword ptr [ESP + 0x60],EDI      ; 00474858
    JMP 0x0047454e                      ; 0047485c
        ;   XREF to: 0047454e (UNCONDITIONAL_JUMP)  ; LAB_0047454e
    MOV EAX,[0x005fecbc]                ; 00474861 | DAT_005fecbc
        ;   Label: LAB_00474861
    MOV dword ptr [EBX + 0x1ffbc],EAX   ; 00474866
    JMP 0x0047484a                      ; 0047486c
        ;   XREF to: 0047484a (UNCONDITIONAL_JUMP)  ; LAB_0047484a
    CMP dword ptr [ESP + 0x54],0x0      ; 0047486e
        ;   Label: LAB_0047486e
    JZ 0x0047488b                       ; 00474873
        ;   XREF to: 0047488b (CONDITIONAL_JUMP)  ; LAB_0047488b
    CMP dword ptr [EBX + 0x1ff54],0x1   ; 00474875
    JNZ 0x0047488b                      ; 0047487c
        ;   XREF to: 0047488b (CONDITIONAL_JUMP)  ; LAB_0047488b
    MOV dword ptr [ESP + 0x60],0xa      ; 0047487e
    JMP 0x0047454e                      ; 00474886
        ;   XREF to: 0047454e (UNCONDITIONAL_JUMP)  ; LAB_0047454e
    CMP dword ptr [ESP + 0x54],0x0      ; 0047488b
        ;   Label: LAB_0047488b
    JZ 0x004748ae                       ; 00474890
        ;   XREF to: 004748ae (CONDITIONAL_JUMP)  ; LAB_004748ae
    CMP dword ptr [ESP + 0x54],0x0      ; 00474892
        ;   Label: LAB_00474892
    JZ 0x004748c4                       ; 00474897
        ;   XREF to: 004748c4 (CONDITIONAL_JUMP)  ; LAB_004748c4
    CMP dword ptr [ESP + 0x58],0x0      ; 00474899
        ;   Label: LAB_00474899
    JZ 0x004748d2                       ; 0047489e
        ;   XREF to: 004748d2 (CONDITIONAL_JUMP)  ; LAB_004748d2
    CMP dword ptr [EBX + 0x1ff58],0x0   ; 004748a0
    JNZ 0x004748d2                      ; 004748a7
        ;   XREF to: 004748d2 (CONDITIONAL_JUMP)  ; LAB_004748d2
    JMP 0x00474546                      ; 004748a9
        ;   XREF to: 00474546 (UNCONDITIONAL_JUMP)  ; LAB_00474546
    CMP dword ptr [EBX + 0x1ff54],0x2   ; 004748ae
        ;   Label: LAB_004748ae
    JNZ 0x00474892                      ; 004748b5
        ;   XREF to: 00474892 (CONDITIONAL_JUMP)  ; LAB_00474892
    MOV dword ptr [ESP + 0x60],0xa      ; 004748b7
    JMP 0x0047454e                      ; 004748bf
        ;   XREF to: 0047454e (UNCONDITIONAL_JUMP)  ; LAB_0047454e
    CMP dword ptr [EBX + 0x1ff54],0x1   ; 004748c4
        ;   Label: LAB_004748c4
    JNZ 0x00474899                      ; 004748cb
        ;   XREF to: 00474899 (CONDITIONAL_JUMP)  ; LAB_00474899
    JMP 0x00474546                      ; 004748cd
        ;   XREF to: 00474546 (UNCONDITIONAL_JUMP)  ; LAB_00474546
    CMP dword ptr [ESP + 0x58],0x0      ; 004748d2
        ;   Label: LAB_004748d2
    JZ 0x004748ef                       ; 004748d7
        ;   XREF to: 004748ef (CONDITIONAL_JUMP)  ; LAB_004748ef
    CMP dword ptr [EBX + 0x1ff58],0x1   ; 004748d9
    JNZ 0x004748ef                      ; 004748e0
        ;   XREF to: 004748ef (CONDITIONAL_JUMP)  ; LAB_004748ef
    MOV dword ptr [ESP + 0x60],0xb      ; 004748e2
    JMP 0x0047454e                      ; 004748ea
        ;   XREF to: 0047454e (UNCONDITIONAL_JUMP)  ; LAB_0047454e
    CMP dword ptr [ESP + 0x58],0x0      ; 004748ef
        ;   Label: LAB_004748ef
    JZ 0x0047490e                       ; 004748f4
        ;   XREF to: 0047490e (CONDITIONAL_JUMP)  ; LAB_0047490e
    CMP dword ptr [ESP + 0x58],0x0      ; 004748f6
        ;   Label: LAB_004748f6
    JZ 0x00474924                       ; 004748fb
        ;   XREF to: 00474924 (CONDITIONAL_JUMP)  ; LAB_00474924
    MOV EDI,dword ptr [ESP + 0x3c]      ; 004748fd
        ;   Label: LAB_004748fd
    TEST EDI,EDI                        ; 00474901
    JL 0x00474932                       ; 00474903
        ;   XREF to: 00474932 (CONDITIONAL_JUMP)  ; LAB_00474932
    MOV dword ptr [ESP + 0x60],EDI      ; 00474905
    JMP 0x0047454e                      ; 00474909
        ;   XREF to: 0047454e (UNCONDITIONAL_JUMP)  ; LAB_0047454e
    CMP dword ptr [EBX + 0x1ff58],0x2   ; 0047490e
        ;   Label: LAB_0047490e
    JNZ 0x004748f6                      ; 00474915
        ;   XREF to: 004748f6 (CONDITIONAL_JUMP)  ; LAB_004748f6
    MOV dword ptr [ESP + 0x60],0xb      ; 00474917
    JMP 0x0047454e                      ; 0047491f
        ;   XREF to: 0047454e (UNCONDITIONAL_JUMP)  ; LAB_0047454e
    CMP dword ptr [EBX + 0x1ff58],0x1   ; 00474924
        ;   Label: LAB_00474924
    JNZ 0x004748fd                      ; 0047492b
        ;   XREF to: 004748fd (CONDITIONAL_JUMP)  ; LAB_004748fd
    JMP 0x00474546                      ; 0047492d
        ;   XREF to: 00474546 (UNCONDITIONAL_JUMP)  ; LAB_00474546
    MOV EDX,dword ptr [ESP + 0x5c]      ; 00474932
        ;   Label: LAB_00474932
    MOV EAX,dword ptr [EBX + 0x20004]   ; 00474936
    CMP EAX,EDX                         ; 0047493c
    JNZ 0x00474991                      ; 0047493e
        ;   XREF to: 00474991 (CONDITIONAL_JUMP)  ; LAB_00474991
    MOV EAX,dword ptr [EBX + 0x20004]   ; 00474940
    TEST EAX,EAX                        ; 00474946
    JZ 0x0047498d                       ; 00474948
        ;   XREF to: 0047498d (CONDITIONAL_JUMP)  ; caseD_8
    MOV EAX,dword ptr [EAX + 0x2e0]     ; 0047494a
    CMP EAX,0xa                         ; 00474950
    JA 0x0047498d                       ; 00474953
        ;   XREF to: 0047498d (CONDITIONAL_JUMP)  ; caseD_8
    JMP dword ptr [EAX*0x4 + 0x47430c]  ; 00474955 | caseD_5 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,0x2                         ; 0047495c
        ;   Label: caseD_0
    MOV dword ptr [ESP + 0x60],EAX      ; 00474961
        ;   Label: LAB_00474961
    JMP 0x0047454e                      ; 00474965
        ;   XREF to: 0047454e (UNCONDITIONAL_JUMP)  ; LAB_0047454e
    MOV EAX,0x4                         ; 0047496a
        ;   Label: caseD_1
    JMP 0x00474961                      ; 0047496f
        ;   XREF to: 00474961 (UNCONDITIONAL_JUMP)  ; LAB_00474961
    MOV EAX,0xe                         ; 00474971
        ;   Label: caseD_9
    JMP 0x00474961                      ; 00474976
        ;   XREF to: 00474961 (UNCONDITIONAL_JUMP)  ; LAB_00474961
    MOV EAX,0x7                         ; 00474978
        ;   Label: caseD_4
    JMP 0x00474961                      ; 0047497d
        ;   XREF to: 00474961 (UNCONDITIONAL_JUMP)  ; LAB_00474961
    MOV EAX,0x5                         ; 0047497f
        ;   Label: caseD_2
    JMP 0x00474961                      ; 00474984
        ;   XREF to: 00474961 (UNCONDITIONAL_JUMP)  ; LAB_00474961
    MOV EAX,0x8                         ; 00474986
        ;   Label: caseD_7
    JMP 0x00474961                      ; 0047498b
        ;   XREF to: 00474961 (UNCONDITIONAL_JUMP)  ; LAB_00474961
    XOR EAX,EAX                         ; 0047498d
        ;   Label: caseD_3
    JMP 0x00474961                      ; 0047498f
        ;   XREF to: 00474961 (UNCONDITIONAL_JUMP)  ; LAB_00474961
    TEST EAX,EAX                        ; 00474991
        ;   Label: LAB_00474991
    JNZ 0x004749e3                      ; 00474993
        ;   XREF to: 004749e3 (CONDITIONAL_JUMP)  ; LAB_004749e3
    TEST EDX,EDX                        ; 00474995
    JNZ 0x004749d1                      ; 00474997
        ;   XREF to: 004749d1 (CONDITIONAL_JUMP)  ; LAB_004749d1
    MOV dword ptr [ESP + 0x60],EAX      ; 00474999
        ;   Label: LAB_00474999
    JMP 0x0047454e                      ; 0047499d
        ;   XREF to: 0047454e (UNCONDITIONAL_JUMP)  ; LAB_0047454e
    MOV EAX,0x1                         ; 004749a2
        ;   Label: caseD_0
    JMP 0x00474999                      ; 004749a7
        ;   XREF to: 00474999 (UNCONDITIONAL_JUMP)  ; LAB_00474999
    MOV ECX,dword ptr [0x01d1e2dc]      ; 004749a9 | g_CMeleeClassInfo.name_hash
        ;   Label: caseD_7
    PUSH ECX                            ; 004749af
    PUSH EDX                            ; 004749b0
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004749b1
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 004749b6
    TEST EAX,EAX                        ; 004749b9
    JZ 0x004749cd                       ; 004749bb
        ;   XREF to: 004749cd (CONDITIONAL_JUMP)  ; LAB_004749cd
    CMP dword ptr [EAX + 0x588],0x0     ; 004749bd
    JZ 0x004749cd                       ; 004749c4
        ;   XREF to: 004749cd (CONDITIONAL_JUMP)  ; LAB_004749cd
    MOV EAX,0x3                         ; 004749c6
        ;   Label: caseD_1
    JMP 0x00474999                      ; 004749cb
        ;   XREF to: 00474999 (UNCONDITIONAL_JUMP)  ; LAB_00474999
    XOR EAX,EAX                         ; 004749cd
        ;   Label: LAB_004749cd
    JMP 0x00474999                      ; 004749cf
        ;   XREF to: 00474999 (UNCONDITIONAL_JUMP)  ; LAB_00474999
    MOV EAX,dword ptr [EDX + 0x2e0]     ; 004749d1
        ;   Label: LAB_004749d1
    CMP EAX,0x8                         ; 004749d7
    JA 0x004749c6                       ; 004749da
        ;   XREF to: 004749c6 (CONDITIONAL_JUMP)  ; caseD_6
    JMP dword ptr [EAX*0x4 + 0x474338]  ; 004749dc | caseD_5 | caseD_6 | caseD_8
        ;   Label: switchD
    JNZ 0x00474a1d                      ; 004749e3
        ;   XREF to: 00474a1d (CONDITIONAL_JUMP)  ; LAB_00474a1d
        ;   Label: LAB_004749e3
    MOV dword ptr [ESP + 0x60],EAX      ; 004749e5
        ;   Label: LAB_004749e5
    JMP 0x0047454e                      ; 004749e9
        ;   XREF to: 0047454e (UNCONDITIONAL_JUMP)  ; LAB_0047454e
    MOV EAX,0x1                         ; 004749ee
        ;   Label: caseD_0
    JMP 0x004749e5                      ; 004749f3
        ;   XREF to: 004749e5 (UNCONDITIONAL_JUMP)  ; LAB_004749e5
    MOV ESI,dword ptr [0x01d1e2dc]      ; 004749f5 | g_CMeleeClassInfo.name_hash
        ;   Label: caseD_7
    PUSH ESI                            ; 004749fb
    PUSH EAX                            ; 004749fc
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004749fd
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 00474a02
    TEST EAX,EAX                        ; 00474a05
    JZ 0x00474a19                       ; 00474a07
        ;   XREF to: 00474a19 (CONDITIONAL_JUMP)  ; LAB_00474a19
    CMP dword ptr [EAX + 0x588],0x0     ; 00474a09
    JZ 0x00474a19                       ; 00474a10
        ;   XREF to: 00474a19 (CONDITIONAL_JUMP)  ; LAB_00474a19
    MOV EAX,0x3                         ; 00474a12
        ;   Label: caseD_1
    JMP 0x004749e5                      ; 00474a17
        ;   XREF to: 004749e5 (UNCONDITIONAL_JUMP)  ; LAB_004749e5
    XOR EAX,EAX                         ; 00474a19
        ;   Label: LAB_00474a19
    JMP 0x004749e5                      ; 00474a1b
        ;   XREF to: 004749e5 (UNCONDITIONAL_JUMP)  ; LAB_004749e5
    MOV EDX,dword ptr [EAX + 0x2e0]     ; 00474a1d
        ;   Label: LAB_00474a1d
    CMP EDX,0x8                         ; 00474a23
    JA 0x00474a12                       ; 00474a26
        ;   XREF to: 00474a12 (CONDITIONAL_JUMP)  ; caseD_6
    JMP dword ptr [EDX*0x4 + 0x47435c]  ; 00474a28 | caseD_5 | caseD_6 | caseD_8
        ;   Label: switchD
    MOV EAX,0xb                         ; 00474a2f
        ;   Label: LAB_00474a2f
    MOV EDX,EAX                         ; 00474a34
    MOV ECX,dword ptr [ESI + 0x64]      ; 00474a36
    SAR EDX,0x1f                        ; 00474a39
    IDIV ECX                            ; 00474a3c
    MOV dword ptr [ESP + 0x68],EAX      ; 00474a3e
    FILD dword ptr [ESP + 0x68]         ; 00474a42
    FCOMP float ptr [EBX + 0x2c9c]      ; 00474a46
    FNSTSW AX                           ; 00474a4c
    SAHF                                ; 00474a4e
    JA 0x004745d8                       ; 00474a4f
        ;   XREF to: 004745d8 (CONDITIONAL_JUMP)  ; caseD_11
    PUSH EDI                            ; 00474a55
    CALL core_dynamite.cpp_FUN_00492640 ; 00474a56
        ;   XREF to: 00492640 (UNCONDITIONAL_CALL)  ; void core_dynamite.cpp_FUN_00492640(CDynamite * this_ptr)
    ADD ESP,0x4                         ; 00474a5b
    JMP 0x004745d8                      ; 00474a5e
        ;   XREF to: 004745d8 (UNCONDITIONAL_JUMP)  ; caseD_11
    CMP dword ptr [EBX + 0x1ff5c],0x3   ; 00474a63
        ;   Label: caseD_7
    JNZ 0x00474b67                      ; 00474a6a
        ;   XREF to: 00474b67 (CONDITIONAL_JUMP)  ; LAB_00474b67
    MOV EAX,0xb                         ; 00474a70
    MOV EDX,EAX                         ; 00474a75
    MOV ECX,dword ptr [ESI + 0x64]      ; 00474a77
    SAR EDX,0x1f                        ; 00474a7a
    IDIV ECX                            ; 00474a7d
    MOV dword ptr [ESP + 0x68],EAX      ; 00474a7f
    FILD dword ptr [ESP + 0x68]         ; 00474a83
    FCOMP float ptr [EBX + 0x2c9c]      ; 00474a87
    FNSTSW AX                           ; 00474a8d
    SAHF                                ; 00474a8f
    JA 0x00474b67                       ; 00474a90
        ;   XREF to: 00474b67 (CONDITIONAL_JUMP)  ; LAB_00474b67
    PUSH EBX                            ; 00474a96
    LEA ESI,[ESP + 0x1c]                ; 00474a97
    LEA EDI,[ESP + 0x10]                ; 00474a9b
    CALL core_doc.cpp_FUN_004742a0      ; 00474a9f
        ;   XREF to: 004742a0 (UNCONDITIONAL_CALL)  ; undefined core_doc.cpp_FUN_004742a0()
    LEA ESI,[ESP + 0x1c]                ; 00474aa4
    ADD ESP,0x4                         ; 00474aa8
    MOVSD ES:EDI,ESI                    ; 00474aab
    MOVSD ES:EDI,ESI                    ; 00474aac
    MOVSD ES:EDI,ESI                    ; 00474aad
    MOV ESI,dword ptr [0x01c3db94]      ; 00474aae | g_CDynamiteClassInfo.name_hash
    PUSH ESI                            ; 00474ab4
    MOV EDI,dword ptr [EBX + 0x20004]   ; 00474ab5
    PUSH EDI                            ; 00474abb
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00474abc
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    MOV dword ptr [ESP + 0x54],EAX      ; 00474ac1
    ADD ESP,0x8                         ; 00474ac5
    MOV dword ptr [ESP + 0x40],EAX      ; 00474ac8
    TEST EAX,EAX                        ; 00474acc
    JZ 0x00474b32                       ; 00474ace
        ;   XREF to: 00474b32 (CONDITIONAL_JUMP)  ; LAB_00474b32
    LEA EAX,[ESP + 0xc]                 ; 00474ad0
    PUSH EAX                            ; 00474ad4
    PUSH EBX                            ; 00474ad5
    LEA ESI,[ESP + 0x2c]                ; 00474ad6
    LEA EDI,[ESP + 0x8]                 ; 00474ada
    CALL core_actor.cpp_FUN_00408ac0    ; 00474ade
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    ADD ESP,0x8                         ; 00474ae3
    LEA ESI,[ESP + 0x24]                ; 00474ae6
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00474aea
    MOV EAX,ESP                         ; 00474aee
    ADD EDX,0x57c                       ; 00474af0
    MOVSD ES:EDI,ESI                    ; 00474af6
    MOVSD ES:EDI,ESI                    ; 00474af7
    MOVSD ES:EDI,ESI                    ; 00474af8
    CMP EDX,EAX                         ; 00474af9
    JZ 0x00474b10                       ; 00474afb
        ;   XREF to: 00474b10 (CONDITIONAL_JUMP)  ; LAB_00474b10
    MOV EAX,dword ptr [ESP]             ; 00474afd
    MOV dword ptr [EDX],EAX             ; 00474b00
    MOV EAX,dword ptr [ESP + 0x4]       ; 00474b02
    MOV dword ptr [EDX + 0x4],EAX       ; 00474b06
    MOV EAX,dword ptr [ESP + 0x8]       ; 00474b09
    MOV dword ptr [EDX + 0x8],EAX       ; 00474b0d
    MOV EDX,dword ptr [ESP + 0x40]      ; 00474b10
        ;   Label: LAB_00474b10
    MOV EAX,dword ptr [ESP + 0x40]      ; 00474b14
    PUSH EDX                            ; 00474b18
    MOV EAX,dword ptr [EAX + 0x154]     ; 00474b19
    CALL dword ptr [EAX + 0xe4]         ; 00474b1f
    ADD ESP,0x4                         ; 00474b25
    MOV dword ptr [EBX + 0x20004],0x0   ; 00474b28
    CMP dword ptr [EBX + 0x2628],0x0    ; 00474b32
        ;   Label: LAB_00474b32
    JZ 0x00474b52                       ; 00474b39
        ;   XREF to: 00474b52 (CONDITIONAL_JUMP)  ; LAB_00474b52
    LEA EAX,[ESP + 0xc]                 ; 00474b3b
    PUSH EAX                            ; 00474b3f
    PUSH 0x1                            ; 00474b40
    MOV EDX,dword ptr [EBX + 0x154]     ; 00474b42
    PUSH EBX                            ; 00474b48
    CALL dword ptr [EDX + 0x128]        ; 00474b49
    ADD ESP,0xc                         ; 00474b4f
    MOV dword ptr [EBX + 0x1ff5c],0x0   ; 00474b52
        ;   Label: LAB_00474b52
    MOV EAX,[0x005fecb8]                ; 00474b5c | DAT_005fecb8
    MOV dword ptr [EBX + 0x1ffbc],EAX   ; 00474b61
    FLD float ptr [EBX + 0x2c9c]        ; 00474b67
        ;   Label: LAB_00474b67
    FLD1                                ; 00474b6d
    FCOMPP                              ; 00474b6f
    FNSTSW AX                           ; 00474b71
    SAHF                                ; 00474b73
    JA 0x004745d8                       ; 00474b74
        ;   XREF to: 004745d8 (CONDITIONAL_JUMP)  ; caseD_11
    MOV dword ptr [EBX + 0x2c98],0x0    ; 00474b7a
    MOV dword ptr [EBX + 0x2c9c],0x0    ; 00474b84
    JMP 0x004745d8                      ; 00474b8e
        ;   XREF to: 004745d8 (UNCONDITIONAL_JUMP)  ; caseD_11
    CMP dword ptr [ESP + 0x50],0x3f19999a ; 00474b93
        ;   Label: caseD_8
    JGE 0x004745d8                      ; 00474b9b
        ;   XREF to: 004745d8 (CONDITIONAL_JUMP)  ; caseD_11
    CMP dword ptr [EBX + 0x2c9c],0x3f19999a ; 00474ba1
    JL 0x004745d8                       ; 00474bab
        ;   XREF to: 004745d8 (CONDITIONAL_JUMP)  ; caseD_11
    PUSH 0x5da3f4                       ; 00474bb1 | = "CShotgun"
    MOV EDI,dword ptr [EBX + 0x20004]   ; 00474bb6
    PUSH EDI                            ; 00474bbc
    CALL core_actor.cpp_FUN_0040c550    ; 00474bbd
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00474bc2
    TEST EAX,EAX                        ; 00474bc5
    JZ 0x004745d8                       ; 00474bc7
        ;   XREF to: 004745d8 (CONDITIONAL_JUMP)  ; caseD_11
    MOV EAX,dword ptr [EBX + 0x20004]   ; 00474bcd
    PUSH EAX                            ; 00474bd3
    MOV EDX,dword ptr [EAX + 0x154]     ; 00474bd4
    CALL dword ptr [EDX + 0xd8]         ; 00474bda
    ADD ESP,0x4                         ; 00474be0
    JMP 0x004745d8                      ; 00474be3
        ;   XREF to: 004745d8 (UNCONDITIONAL_JUMP)  ; caseD_11
    CMP dword ptr [ESP + 0x50],0x3f4ccccd ; 00474be8
        ;   Label: caseD_12
    JGE 0x004745d8                      ; 00474bf0
        ;   XREF to: 004745d8 (CONDITIONAL_JUMP)  ; caseD_11
    CMP dword ptr [EBX + 0x2c9c],0x3f4ccccd ; 00474bf6
    JL 0x004745d8                       ; 00474c00
        ;   XREF to: 004745d8 (CONDITIONAL_JUMP)  ; caseD_11
    PUSH 0x5da3fd                       ; 00474c06 | = "CRifle"
    MOV ESI,dword ptr [EBX + 0x20004]   ; 00474c0b
    PUSH ESI                            ; 00474c11
    CALL core_actor.cpp_FUN_0040c550    ; 00474c12
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00474c17
    TEST EAX,EAX                        ; 00474c1a
    JZ 0x004745d8                       ; 00474c1c
        ;   XREF to: 004745d8 (CONDITIONAL_JUMP)  ; caseD_11
    MOV EAX,dword ptr [EBX + 0x20004]   ; 00474c22
    PUSH EAX                            ; 00474c28
    MOV EDX,dword ptr [EAX + 0x154]     ; 00474c29
    CALL dword ptr [EDX + 0xd8]         ; 00474c2f
    ADD ESP,0x4                         ; 00474c35
    JMP 0x004745d8                      ; 00474c38
        ;   XREF to: 004745d8 (UNCONDITIONAL_JUMP)  ; caseD_11
    CMP dword ptr [ESP + 0x50],0x3ebd70a4 ; 00474c3d
        ;   Label: caseD_c
    JGE 0x004745d8                      ; 00474c45
        ;   XREF to: 004745d8 (CONDITIONAL_JUMP)  ; caseD_11
    CMP dword ptr [EBX + 0x2c9c],0x3ebd70a4 ; 00474c4b
    JL 0x004745d8                       ; 00474c55
        ;   XREF to: 004745d8 (CONDITIONAL_JUMP)  ; caseD_11
    MOV ESI,dword ptr [EBX + 0x20004]   ; 00474c5b
    TEST ESI,ESI                        ; 00474c61
    JZ 0x004745d8                       ; 00474c63
        ;   XREF to: 004745d8 (CONDITIONAL_JUMP)  ; caseD_11
    MOV EDI,dword ptr [0x02c99770]      ; 00474c69 | g_CWeaponClassInfo.name_hash
    PUSH EDI                            ; 00474c6f
    PUSH ESI                            ; 00474c70
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00474c71
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 00474c76
    TEST EAX,EAX                        ; 00474c79
    JZ 0x004745d8                       ; 00474c7b
        ;   XREF to: 004745d8 (CONDITIONAL_JUMP)  ; caseD_11
    CMP dword ptr [EAX + 0x56c],0x9     ; 00474c81
    JNZ 0x00474c9e                      ; 00474c88
        ;   XREF to: 00474c9e (CONDITIONAL_JUMP)  ; LAB_00474c9e
    PUSH 0x8                            ; 00474c8a
    MOV EDX,dword ptr [EAX + 0x154]     ; 00474c8c
    PUSH EAX                            ; 00474c92
    CALL dword ptr [EDX + 0x78]         ; 00474c93
    ADD ESP,0x8                         ; 00474c96
    JMP 0x004745d8                      ; 00474c99
        ;   XREF to: 004745d8 (UNCONDITIONAL_JUMP)  ; caseD_11
    PUSH 0x1                            ; 00474c9e
        ;   Label: LAB_00474c9e
    MOV EDX,dword ptr [EAX + 0x154]     ; 00474ca0
    PUSH EAX                            ; 00474ca6
    CALL dword ptr [EDX + 0x78]         ; 00474ca7
    ADD ESP,0x8                         ; 00474caa
    JMP 0x004745d8                      ; 00474cad
        ;   XREF to: 004745d8 (UNCONDITIONAL_JUMP)  ; caseD_11
    CMP dword ptr [ESP + 0x50],0x3f000000 ; 00474cb2
        ;   Label: caseD_d
    JGE 0x004745d8                      ; 00474cba
        ;   XREF to: 004745d8 (CONDITIONAL_JUMP)  ; caseD_11
    CMP dword ptr [EBX + 0x2c9c],0x3f000000 ; 00474cc0
    JL 0x004745d8                       ; 00474cca
        ;   XREF to: 004745d8 (CONDITIONAL_JUMP)  ; caseD_11
    MOV ECX,dword ptr [0x02c99770]      ; 00474cd0 | g_CWeaponClassInfo.name_hash
    PUSH ECX                            ; 00474cd6
    MOV ESI,dword ptr [EBX + 0x20004]   ; 00474cd7
    PUSH ESI                            ; 00474cdd
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00474cde
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 00474ce3
    TEST EAX,EAX                        ; 00474ce6
    JZ 0x00474d02                       ; 00474ce8
        ;   XREF to: 00474d02 (CONDITIONAL_JUMP)  ; LAB_00474d02
    CMP dword ptr [EAX + 0x56c],0x9     ; 00474cea
    JNZ 0x00474d24                      ; 00474cf1
        ;   XREF to: 00474d24 (CONDITIONAL_JUMP)  ; LAB_00474d24
    PUSH 0x8                            ; 00474cf3
    MOV EDX,dword ptr [EAX + 0x154]     ; 00474cf5
        ;   Label: LAB_00474cf5
    PUSH EAX                            ; 00474cfb
    CALL dword ptr [EDX + 0x78]         ; 00474cfc
    ADD ESP,0x8                         ; 00474cff
    MOV EAX,dword ptr [EBX + 0x20004]   ; 00474d02
        ;   Label: LAB_00474d02
    TEST EAX,EAX                        ; 00474d08
    JZ 0x004745d8                       ; 00474d0a
        ;   XREF to: 004745d8 (CONDITIONAL_JUMP)  ; caseD_11
    PUSH 0x2                            ; 00474d10
    MOV EDX,dword ptr [EAX + 0x154]     ; 00474d12
    PUSH EAX                            ; 00474d18
    CALL dword ptr [EDX + 0x78]         ; 00474d19
    ADD ESP,0x8                         ; 00474d1c
    JMP 0x004745d8                      ; 00474d1f
        ;   XREF to: 004745d8 (UNCONDITIONAL_JUMP)  ; caseD_11
    PUSH 0x1                            ; 00474d24
        ;   Label: LAB_00474d24
    JMP 0x00474cf5                      ; 00474d26
        ;   XREF to: 00474cf5 (UNCONDITIONAL_JUMP)  ; LAB_00474cf5
    MOV EAX,0x1                         ; 00474d28
        ;   Label: caseD_0
    JMP 0x004745ff                      ; 00474d2d
        ;   XREF to: 004745ff (UNCONDITIONAL_JUMP)  ; LAB_004745ff
    MOV EDX,dword ptr [0x01d1e2dc]      ; 00474d32 | g_CMeleeClassInfo.name_hash
        ;   Label: caseD_7
    PUSH EDX                            ; 00474d38
    PUSH EAX                            ; 00474d39
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00474d3a
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 00474d3f
    TEST EAX,EAX                        ; 00474d42
    JZ 0x00474d59                       ; 00474d44
        ;   XREF to: 00474d59 (CONDITIONAL_JUMP)  ; LAB_00474d59
    CMP dword ptr [EAX + 0x588],0x0     ; 00474d46
    JZ 0x00474d59                       ; 00474d4d
        ;   XREF to: 00474d59 (CONDITIONAL_JUMP)  ; LAB_00474d59
    MOV EAX,0x3                         ; 00474d4f
        ;   Label: caseD_1
    JMP 0x004745ff                      ; 00474d54
        ;   XREF to: 004745ff (UNCONDITIONAL_JUMP)  ; LAB_004745ff
    XOR EAX,EAX                         ; 00474d59
        ;   Label: LAB_00474d59
    JMP 0x004745ff                      ; 00474d5b
        ;   XREF to: 004745ff (UNCONDITIONAL_JUMP)  ; LAB_004745ff
    MOV EDX,dword ptr [EAX + 0x2e0]     ; 00474d60
        ;   Label: LAB_00474d60
    CMP EDX,0x8                         ; 00474d66
    JA 0x00474d4f                       ; 00474d69
        ;   XREF to: 00474d4f (CONDITIONAL_JUMP)  ; caseD_6
    JMP dword ptr [EDX*0x4 + 0x4743b4]  ; 00474d6b | caseD_5 | caseD_6 | caseD_8
        ;   Label: switchD
    MOV EAX,0x1                         ; 00474d72
        ;   Label: caseD_0
    JMP 0x0047463e                      ; 00474d77
        ;   XREF to: 0047463e (UNCONDITIONAL_JUMP)  ; LAB_0047463e
    MOV ECX,dword ptr [0x01d1e2dc]      ; 00474d7c | g_CMeleeClassInfo.name_hash
        ;   Label: caseD_7
    PUSH ECX                            ; 00474d82
    PUSH EDX                            ; 00474d83
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00474d84
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 00474d89
    TEST EAX,EAX                        ; 00474d8c
    JZ 0x0047463c                       ; 00474d8e
        ;   XREF to: 0047463c (CONDITIONAL_JUMP)  ; LAB_0047463c
    CMP dword ptr [EAX + 0x588],0x0     ; 00474d94
    JZ 0x0047463c                       ; 00474d9b
        ;   XREF to: 0047463c (CONDITIONAL_JUMP)  ; LAB_0047463c
    MOV EAX,0x3                         ; 00474da1
        ;   Label: caseD_1
    JMP 0x0047463e                      ; 00474da6
        ;   XREF to: 0047463e (UNCONDITIONAL_JUMP)  ; LAB_0047463e
    MOV EAX,dword ptr [EDX + 0x2e0]     ; 00474dab
        ;   Label: LAB_00474dab
    CMP EAX,0x8                         ; 00474db1
    JA 0x00474da1                       ; 00474db4
        ;   XREF to: 00474da1 (CONDITIONAL_JUMP)  ; caseD_6
    JMP dword ptr [EAX*0x4 + 0x4743d8]  ; 00474db6 | caseD_5 | caseD_6 | caseD_8
        ;   Label: switchD
    PUSH 0x1                            ; 00474dbd
        ;   Label: LAB_00474dbd
    PUSH 0x19                           ; 00474dbf
    MOV EDX,dword ptr [ESP + 0x50]      ; 00474dc1
    PUSH EDX                            ; 00474dc5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00474dc6
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV ECX,dword ptr [EBX + 0x1ff5c]   ; 00474dcb
    ADD ESP,0xc                         ; 00474dd1
    TEST ECX,ECX                        ; 00474dd4
    JZ 0x00474df2                       ; 00474dd6
        ;   XREF to: 00474df2 (CONDITIONAL_JUMP)  ; LAB_00474df2
    PUSH 0x146a                         ; 00474dd8
    PUSH ECX                            ; 00474ddd
    PUSH 0x5da40a                       ; 00474dde | = "actionPending = %d\ndoc.cpp line %d"
    MOV EDI,dword ptr [0x0061abc0]      ; 00474de3 | g_CEditorToolsPtr
    PUSH EDI                            ; 00474de9
    CALL shape_edittool.cpp_FUN_00494340 ; 00474dea
        ;   XREF to: 00494340 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00494340()
    ADD ESP,0x10                        ; 00474def
    MOV dword ptr [EBX + 0x1ff5c],0x2   ; 00474df2
        ;   Label: LAB_00474df2
    JMP 0x00474712                      ; 00474dfc
        ;   XREF to: 00474712 (UNCONDITIONAL_JUMP)  ; LAB_00474712
    MOV dword ptr [EBX + 0x1ff54],0x1   ; 00474e01
        ;   Label: LAB_00474e01
    JMP 0x0047473e                      ; 00474e0b
        ;   XREF to: 0047473e (UNCONDITIONAL_JUMP)  ; LAB_0047473e
    CMP EDX,0x3                         ; 00474e10
        ;   Label: LAB_00474e10
    JNZ 0x0047473e                      ; 00474e13
        ;   XREF to: 0047473e (CONDITIONAL_JUMP)  ; LAB_0047473e
    CMP dword ptr [EBX + 0x1ff54],0x2   ; 00474e19
    JGE 0x0047473e                      ; 00474e20
        ;   XREF to: 0047473e (CONDITIONAL_JUMP)  ; LAB_0047473e
    MOV EDI,dword ptr [ESP + 0x54]      ; 00474e26
    TEST EDI,EDI                        ; 00474e2a
    JZ 0x00474e3d                       ; 00474e2c
        ;   XREF to: 00474e3d (CONDITIONAL_JUMP)  ; LAB_00474e3d
    MOV dword ptr [EBX + 0x1ff54],0x1   ; 00474e2e
    JMP 0x0047473e                      ; 00474e38
        ;   XREF to: 0047473e (UNCONDITIONAL_JUMP)  ; LAB_0047473e
    MOV dword ptr [EBX + 0x1ff54],EDI   ; 00474e3d
        ;   Label: LAB_00474e3d
    JMP 0x0047473e                      ; 00474e43
        ;   XREF to: 0047473e (UNCONDITIONAL_JUMP)  ; LAB_0047473e
    PUSH 0x0                            ; 00474e48
        ;   Label: LAB_00474e48
    MOV EAX,[0x0061d95c]                ; 00474e4a | g_CGamePtr
    MOV dword ptr [EBX + 0x1ff58],0x1   ; 00474e4f
    JMP 0x00474767                      ; 00474e59
        ;   XREF to: 00474767 (UNCONDITIONAL_JUMP)  ; LAB_00474767
    CMP EDX,0x3                         ; 00474e5e
        ;   Label: LAB_00474e5e
    JNZ 0x00474773                      ; 00474e61
        ;   XREF to: 00474773 (CONDITIONAL_JUMP)  ; LAB_00474773
    CMP dword ptr [EBX + 0x1ff58],0x2   ; 00474e67
    JGE 0x00474773                      ; 00474e6e
        ;   XREF to: 00474773 (CONDITIONAL_JUMP)  ; LAB_00474773
    MOV EDI,dword ptr [ESP + 0x58]      ; 00474e74
    TEST EDI,EDI                        ; 00474e78
    JZ 0x00474e8b                       ; 00474e7a
        ;   XREF to: 00474e8b (CONDITIONAL_JUMP)  ; LAB_00474e8b
    MOV dword ptr [EBX + 0x1ff58],0x1   ; 00474e7c
    JMP 0x00474773                      ; 00474e86
        ;   XREF to: 00474773 (UNCONDITIONAL_JUMP)  ; LAB_00474773
    MOV dword ptr [EBX + 0x1ff58],EDI   ; 00474e8b
        ;   Label: LAB_00474e8b
    JMP 0x00474773                      ; 00474e91
        ;   XREF to: 00474773 (UNCONDITIONAL_JUMP)  ; LAB_00474773
    CMP ECX,0x8                         ; 00474e96
        ;   Label: LAB_00474e96
    JZ 0x00474788                       ; 00474e99
        ;   XREF to: 00474788 (CONDITIONAL_JUMP)  ; LAB_00474788
    JMP 0x00474792                      ; 00474e9f
        ;   XREF to: 00474792 (UNCONDITIONAL_JUMP)  ; LAB_00474792
    PUSH 0x5da42d                       ; 00474ea4 | = "CFlashlight"
        ;   Label: LAB_00474ea4
    MOV ESI,dword ptr [EBX + 0x20004]   ; 00474ea9
    PUSH ESI                            ; 00474eaf
    CALL core_actor.cpp_FUN_0040c550    ; 00474eb0
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00474eb5
    TEST EAX,EAX                        ; 00474eb8
    JZ 0x004744b2                       ; 00474eba
        ;   XREF to: 004744b2 (CONDITIONAL_JUMP)  ; LAB_004744b2
    MOV EAX,[0x0061d95c]                ; 00474ec0 | g_CGamePtr | g_CGameInstance
    MOV EDI,dword ptr [EAX + 0x264]     ; 00474ec5 | g_CGameInstance.field612_0x264
    TEST EDI,EDI                        ; 00474ecb
    JNZ 0x004744b2                      ; 00474ecd
        ;   XREF to: 004744b2 (CONDITIONAL_JUMP)  ; LAB_004744b2
    SETZ DL                             ; 00474ed3
    AND EDX,0xff                        ; 00474ed6
    MOV dword ptr [EAX + 0x264],EDX     ; 00474edc | g_CGameInstance.field612_0x264
    MOV ESP,EBP                         ; 00474ee2
    POP EBP                             ; 00474ee4
    POP EDI                             ; 00474ee5
    POP ESI                             ; 00474ee6
    POP EBX                             ; 00474ee7
    RET                                 ; 00474ee8

