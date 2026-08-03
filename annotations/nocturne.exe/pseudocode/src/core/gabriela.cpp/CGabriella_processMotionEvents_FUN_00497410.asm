; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gabriela_cpp_CGabriella_processMotionEvents_FUN_00497410(CGabriella *this_ptr,float delta_time)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined        Stack[-0xa0]:1  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined        Stack[-0x64]:1  local_64
; undefined        Stack[-0x58]:1  local_58
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x34]:1  local_34
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_gabriela.cpp_CGabriella_process_FUN_00495a20 at 00495ac0
;
; Referenced Globals:
;   undefined1* switchdataD_004973b4 = 00497448
;   TerminatedCString s_kick1_wav_005820ba
;   TerminatedCString s_hit_gh_4_7_wav_005820c4
;   TerminatedCString s_gb_fall1_wav_005820d4
;   double DOUBLE_005820e2 = 0.200000000000000
;   double DOUBLE_005820ea = 0.400000000000000
;   CGore* g_CGore_PTR_005b96c4 = 01c78c7c
;   undefined4 g_CLightActorActorType_00764a9c.name_hash
;   undefined4 g_CEnemyActorType_01bcdebc.name_hash
;   undefined4 DAT_01c713b4
;   undefined4 DAT_01c713b8
;   undefined4 DAT_01c713c8
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042add0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0
;   core_gabriela.cpp_CGabriella_collectAmmo_FUN_00498790
;   core_gore.cpp_CGore_spawnBloodBurst_FUN_004b0200
;   core_hero.cpp_CHero_addCarriedItemToInventory_FUN_004b5c70
;   core_hero.cpp_CHero_executeObjectPickup_FUN_004b5c30
;   core_hero.cpp_CHero_tryOpenDoor_FUN_004b5270
;   core_motion.cpp_CMotionController_advance_FUN_004e11c0
;   core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00497410
        ;   Label: core_gabriela.cpp_CGabriella_processMotionEvents_FUN_00497410
    PUSH ESI                            ; 00497411
    PUSH EDI                            ; 00497412
    PUSH EBP                            ; 00497413
    MOV EBP,ESP                         ; 00497414
    SUB ESP,0x94                        ; 00497416
    AND ESP,0xfffffff8                  ; 0049741c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0049741f
    LEA ESI,[EBX + 0x150]               ; 00497422
    LEA EAX,[EBP + 0x18]                ; 00497428
        ;   Label: LAB_00497428
    PUSH EAX                            ; 0049742b
    PUSH ESI                            ; 0049742c
    CALL core_motion.cpp_CMotionController_advance_FUN_004e11c0 ; 0049742d
        ;   XREF to: 004e11c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004e11c0(CMotionController * this_ptr, float * delta_time)
    MOV EDI,EAX                         ; 00497432
    DEC EAX                             ; 00497434
    ADD ESP,0x8                         ; 00497435
    CMP EAX,0x15                        ; 00497438
    JA 0x004977fd                       ; 0049743b
        ;   XREF to: 004977fd (CONDITIONAL_JUMP)  ; caseD_10
    JMP dword ptr [EAX*0x4 + 0x4973b4]  ; 00497441 | caseD_7 | caseD_2 | caseD_3
        ;   Label: switchD
    CMP EDI,0x7                         ; 00497448
        ;   Label: caseD_1
    JNZ 0x00497545                      ; 0049744b
        ;   XREF to: 00497545 (CONDITIONAL_JUMP)  ; LAB_00497545
    MOV EAX,[0x01c713b8]                ; 00497451 | DAT_01c713b8
    PUSH EAX                            ; 00497456
        ;   Label: LAB_00497456
    LEA EAX,[ESP + 0x54]                ; 00497457
    PUSH EAX                            ; 0049745b
    PUSH ESI                            ; 0049745c
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0 ; 0049745d
        ;   XREF to: 0051d2a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    MOV ECX,dword ptr [EBX + 0x1fa14]   ; 00497462
    ADD ESP,0xc                         ; 00497468
    TEST ECX,ECX                        ; 0049746b
    JZ 0x0049754f                       ; 0049746d
        ;   XREF to: 0049754f (CONDITIONAL_JUMP)  ; LAB_0049754f
    PUSH 0x3f800000                     ; 00497473
    MOV EDX,dword ptr [ECX + 0x14c]     ; 00497478
    PUSH ECX                            ; 0049747e
    MOV EDI,dword ptr [EBX + 0x14c]     ; 0049747f
    CALL dword ptr [EDX + 0x3c]         ; 00497485
    ADD ESP,0x4                         ; 00497488
    PUSH EAX                            ; 0049748b
    LEA EAX,[ESP + 0x58]                ; 0049748c
    PUSH EAX                            ; 00497490
    LEA EAX,[ESP + 0x68]                ; 00497491
    PUSH EAX                            ; 00497495
    PUSH EBX                            ; 00497496
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00497497
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0049749c
    PUSH EAX                            ; 0049749f
    PUSH EBX                            ; 004974a0
    CALL dword ptr [EDI + 0x20]         ; 004974a1
    ADD ESP,0x10                        ; 004974a4
    FLD float ptr [EBP + 0x18]          ; 004974a7
        ;   Label: caseD_12
    FLDZ                                ; 004974aa
    FCOMPP                              ; 004974ac
    FNSTSW AX                           ; 004974ae
    SAHF                                ; 004974b0
    JC 0x00497428                       ; 004974b1
        ;   XREF to: 00497428 (CONDITIONAL_JUMP)  ; LAB_00497428
    MOV ESP,EBP                         ; 004974b7
    POP EBP                             ; 004974b9
    POP EDI                             ; 004974ba
    POP ESI                             ; 004974bb
    POP EBX                             ; 004974bc
    RET                                 ; 004974bd
    MOV EDI,dword ptr [0x00764ad4]      ; 004974be | g_CLightActorActorType_00764a9c.name_hash
        ;   Label: caseD_2
    PUSH EDI                            ; 004974c4
    MOV EAX,dword ptr [EBX + 0x1fa08]   ; 004974c5
    PUSH EAX                            ; 004974cb
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004974cc
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004974d1
    TEST EAX,EAX                        ; 004974d4
    JZ 0x004974eb                       ; 004974d6
        ;   XREF to: 004974eb (CONDITIONAL_JUMP)  ; caseD_14
    CMP dword ptr [EAX + 0x664],0x1     ; 004974d8
    JNZ 0x004974f8                      ; 004974df
        ;   XREF to: 004974f8 (CONDITIONAL_JUMP)  ; LAB_004974f8
    MOV dword ptr [EBX + 0x1fa50],0x3ea0d97c ; 004974e1
    PUSH 0x0                            ; 004974eb
        ;   Label: caseD_14
    PUSH EBX                            ; 004974ed
    CALL core_hero.cpp_CHero_executeObjectPickup_FUN_004b5c30 ; 004974ee
        ;   XREF to: 004b5c30 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_executeObjectPickup_FUN_004b5c30(CHero * this_ptr, int hand_index)
    ADD ESP,0x8                         ; 004974f3
    JMP 0x004974a7                      ; 004974f6
        ;   XREF to: 004974a7 (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV dword ptr [EBX + 0x1fa50],0xbf060a92 ; 004974f8
        ;   Label: LAB_004974f8
    PUSH 0x0                            ; 00497502
    PUSH EBX                            ; 00497504
    CALL core_hero.cpp_CHero_executeObjectPickup_FUN_004b5c30 ; 00497505
        ;   XREF to: 004b5c30 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_executeObjectPickup_FUN_004b5c30(CHero * this_ptr, int hand_index)
    ADD ESP,0x8                         ; 0049750a
    JMP 0x004974a7                      ; 0049750d
        ;   XREF to: 004974a7 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x0                            ; 0049750f
        ;   Label: caseD_3
    PUSH 0x0                            ; 00497511
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00497513
    PUSH EBX                            ; 00497519
    CALL dword ptr [EAX + 0x120]        ; 0049751a
    ADD ESP,0xc                         ; 00497520
    PUSH 0x1                            ; 00497523
    PUSH 0x0                            ; 00497525
    PUSH ESI                            ; 00497527
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00497528
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0049752d
    JMP 0x004974a7                      ; 00497530
        ;   XREF to: 004974a7 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x0                            ; 00497535
        ;   Label: caseD_15
    PUSH EBX                            ; 00497537
    CALL core_hero.cpp_CHero_addCarriedItemToInventory_FUN_004b5c70 ; 00497538
        ;   XREF to: 004b5c70 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_addCarriedItemToInventory_FUN_004b5c70(CHero * this_ptr, int hand_index)
    ADD ESP,0x8                         ; 0049753d
    JMP 0x004974a7                      ; 00497540
        ;   XREF to: 004974a7 (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV EAX,[0x01c713b4]                ; 00497545 | DAT_01c713b4
        ;   Label: LAB_00497545
    JMP 0x00497456                      ; 0049754a
        ;   XREF to: 00497456 (UNCONDITIONAL_JUMP)  ; LAB_00497456
    CMP dword ptr [EBX + 0x2408],0x0    ; 0049754f
        ;   Label: LAB_0049754f
    JZ 0x004974a7                       ; 00497556
        ;   XREF to: 004974a7 (CONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x2                            ; 0049755c
    PUSH ESI                            ; 0049755e
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 0049755f
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x98],EAX      ; 00497564
    FLD float ptr [ESP + 0x98]          ; 0049756b
    ADD ESP,0x8                         ; 00497572
    FCOMP double ptr [0x005820ea]       ; 00497575 | DOUBLE_005820ea
    FNSTSW AX                           ; 0049757b
    SAHF                                ; 0049757d
    JA 0x004975c0                       ; 0049757e
        ;   XREF to: 004975c0 (CONDITIONAL_JUMP)  ; LAB_004975c0
    PUSH 0x1                            ; 00497580
    PUSH ESI                            ; 00497582
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 00497583
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x98],EAX      ; 00497588
    FLD float ptr [ESP + 0x98]          ; 0049758f
    ADD ESP,0x8                         ; 00497596
    FCOMP double ptr [0x005820ea]       ; 00497599 | DOUBLE_005820ea
    FNSTSW AX                           ; 0049759f
    SAHF                                ; 004975a1
    JBE 0x004975dc                      ; 004975a2
        ;   XREF to: 004975dc (CONDITIONAL_JUMP)  ; LAB_004975dc
    LEA EAX,[ESP + 0x50]                ; 004975a4
    PUSH 0x3f800000                     ; 004975a8
    PUSH EAX                            ; 004975ad
    MOV EDX,dword ptr [EBX + 0x14c]     ; 004975ae
    PUSH EBX                            ; 004975b4
    CALL dword ptr [EDX + 0x1c]         ; 004975b5
    ADD ESP,0xc                         ; 004975b8
    JMP 0x004974a7                      ; 004975bb
        ;   XREF to: 004974a7 (UNCONDITIONAL_JUMP)  ; caseD_12
    LEA EAX,[ESP + 0x50]                ; 004975c0
        ;   Label: LAB_004975c0
    PUSH 0x3fd9999a                     ; 004975c4
    PUSH EAX                            ; 004975c9
    MOV EDX,dword ptr [EBX + 0x14c]     ; 004975ca
    PUSH EBX                            ; 004975d0
    CALL dword ptr [EDX + 0x1c]         ; 004975d1
    ADD ESP,0xc                         ; 004975d4
    JMP 0x004974a7                      ; 004975d7
        ;   XREF to: 004974a7 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x3                            ; 004975dc
        ;   Label: LAB_004975dc
    PUSH ESI                            ; 004975de
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 004975df
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x98],EAX      ; 004975e4
    FLD float ptr [ESP + 0x98]          ; 004975eb
    ADD ESP,0x8                         ; 004975f2
    FCOMP double ptr [0x005820ea]       ; 004975f5 | DOUBLE_005820ea
    FNSTSW AX                           ; 004975fb
    SAHF                                ; 004975fd
    JBE 0x004974a7                      ; 004975fe
        ;   XREF to: 004974a7 (CONDITIONAL_JUMP)  ; caseD_12
    LEA EDX,[ESP + 0x50]                ; 00497604
    PUSH 0x3f800000                     ; 00497608
    PUSH EDX                            ; 0049760d
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0049760e
    PUSH EBX                            ; 00497614
    CALL dword ptr [EAX + 0x1c]         ; 00497615
    ADD ESP,0xc                         ; 00497618
    JMP 0x004974a7                      ; 0049761b
        ;   XREF to: 004974a7 (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV ECX,dword ptr [0x01bcdef4]      ; 00497620 | g_CEnemyActorType_01bcdebc.name_hash
        ;   Label: caseD_6
    PUSH ECX                            ; 00497626
    MOV EDI,dword ptr [EBX + 0x2590]    ; 00497627
    PUSH EDI                            ; 0049762d
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0049762e
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00497633
    MOV EDI,EAX                         ; 00497636
    MOV dword ptr [ESP + 0x8c],EAX      ; 00497638
    TEST EAX,EAX                        ; 0049763f
    JNZ 0x00497652                      ; 00497641
        ;   XREF to: 00497652 (CONDITIONAL_JUMP)  ; LAB_00497652
    MOV dword ptr [EBX + 0x2590],0x0    ; 00497643
        ;   Label: LAB_00497643
    JMP 0x004974a7                      ; 0049764d
        ;   XREF to: 004974a7 (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV EAX,[0x01c713c8]                ; 00497652 | DAT_01c713c8
        ;   Label: LAB_00497652
    PUSH EAX                            ; 00497657
    LEA EAX,[ESP + 0x6c]                ; 00497658
    PUSH EAX                            ; 0049765c
    PUSH ESI                            ; 0049765d
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0 ; 0049765e
        ;   XREF to: 0051d2a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 00497663
    PUSH EAX                            ; 00497666
    LEA EAX,[ESP + 0x48]                ; 00497667
    PUSH EAX                            ; 0049766b
    PUSH EBX                            ; 0049766c
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0049766d
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00497672
    LEA EAX,[ESP + 0x8]                 ; 00497675
    PUSH EAX                            ; 00497679
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 0049767a
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0049767f
    PUSH 0x41700000                     ; 00497682
    PUSH 0x41200000                     ; 00497687
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0049768c
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x98],EAX      ; 00497691
    FLD float ptr [ESP + 0x98]          ; 00497698
    ADD ESP,0x8                         ; 0049769f
    LEA EAX,[ESP + 0x44]                ; 004976a2
    PUSH EAX                            ; 004976a6
    LEA EAX,[ESP + 0x78]                ; 004976a7
    PUSH EAX                            ; 004976ab
    PUSH EDI                            ; 004976ac
    FSTP float ptr [ESP + 0x18]         ; 004976ad
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 004976b1
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    MOV EDX,EAX                         ; 004976b6
    LEA EAX,[ESP + 0x30]                ; 004976b8
    ADD ESP,0xc                         ; 004976bc
    CMP EAX,EDX                         ; 004976bf
    JZ 0x004976d7                       ; 004976c1
        ;   XREF to: 004976d7 (CONDITIONAL_JUMP)  ; LAB_004976d7
    MOV EAX,dword ptr [EDX]             ; 004976c3
    MOV dword ptr [ESP + 0x24],EAX      ; 004976c5
    MOV EAX,dword ptr [EDX + 0x4]       ; 004976c9
    MOV dword ptr [ESP + 0x28],EAX      ; 004976cc
    MOV EAX,dword ptr [EDX + 0x8]       ; 004976d0
    MOV dword ptr [ESP + 0x2c],EAX      ; 004976d3
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004976d7
        ;   Label: LAB_004976d7
    LEA EDX,[ESP + 0x8]                 ; 004976de
    MOV dword ptr [ESP + 0x3c],EBX      ; 004976e2
    MOV dword ptr [ESP + 0x40],EBX      ; 004976e6
    PUSH EDX                            ; 004976ea
    MOV EDX,dword ptr [ESP + 0x90]      ; 004976eb
    MOV EAX,dword ptr [EAX + 0x14c]     ; 004976f2
    PUSH EDX                            ; 004976f8
    CALL dword ptr [EAX + 0x100]        ; 004976f9
    ADD ESP,0x8                         ; 004976ff
    FLDZ                                ; 00497702
    FLD float ptr [ESP + 0xc]           ; 00497704
    FSTP double ptr [ESP]               ; 00497708
    FCOMP double ptr [ESP]              ; 0049770b
    FNSTSW AX                           ; 0049770e
    SAHF                                ; 00497710
    JNC 0x00497643                      ; 00497711
        ;   XREF to: 00497643 (CONDITIONAL_JUMP)  ; LAB_00497643
    FLD double ptr [ESP]                ; 00497717
    FMUL double ptr [0x005820e2]        ; 0049771a | DOUBLE_005820e2
    CALL crt_math.c_round_FUN_00563a30  ; 00497720
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x90]        ; 00497725
    MOV EAX,dword ptr [ESP + 0x90]      ; 0049772c
    PUSH 0x0                            ; 00497733
    INC EAX                             ; 00497735
    PUSH EAX                            ; 00497736
    PUSH 0x0                            ; 00497737
    LEA EAX,[ESP + 0x50]                ; 00497739
    PUSH EAX                            ; 0049773d
    MOV ECX,dword ptr [0x005b96c4]      ; 0049773e | g_CGore_PTR_005b96c4
    PUSH ECX                            ; 00497744
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004b0200 ; 00497745
        ;   XREF to: 004b0200 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004b0200(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 0049774a
    PUSH 0x5820ba                       ; 0049774d | = "kick1.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00497752
    PUSH EBX                            ; 00497758
    CALL dword ptr [EAX + 0x24]         ; 00497759
    ADD ESP,0x8                         ; 0049775c
    MOV dword ptr [EBX + 0x2590],0x0    ; 0049775f
    JMP 0x004974a7                      ; 00497769
        ;   XREF to: 004974a7 (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV EDX,dword ptr [EBX + 0x2590]    ; 0049776e
        ;   Label: caseD_f
    TEST EDX,EDX                        ; 00497774
    JZ 0x004974a7                       ; 00497776
        ;   XREF to: 004974a7 (CONDITIONAL_JUMP)  ; caseD_12
    LEA EAX,[EDX + 0x20]                ; 0049777c
    PUSH EAX                            ; 0049777f
    LEA EAX,[ESP + 0x84]                ; 00497780
    PUSH EAX                            ; 00497787
    PUSH EBX                            ; 00497788
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 00497789
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    FLDZ                                ; 0049778e
    ADD ESP,0xc                         ; 00497790
    FCOMP float ptr [EAX + 0x8]         ; 00497793
    FNSTSW AX                           ; 00497796
    SAHF                                ; 00497798
    JNC 0x004974a7                      ; 00497799
        ;   XREF to: 004974a7 (CONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x5820c4                       ; 0049779f | = "hit-gh[4,7].wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004977a4
    PUSH EBX                            ; 004977aa
    CALL dword ptr [EAX + 0x24]         ; 004977ab
    ADD ESP,0x8                         ; 004977ae
    JMP 0x004974a7                      ; 004977b1
        ;   XREF to: 004974a7 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x5820d4                       ; 004977b6 | = "gb-fall1.wav"
        ;   Label: caseD_11
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004977bb
    PUSH EBX                            ; 004977c1
    CALL dword ptr [EAX + 0x24]         ; 004977c2
    ADD ESP,0x8                         ; 004977c5
    JMP 0x004974a7                      ; 004977c8
        ;   XREF to: 004974a7 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH EBX                            ; 004977cd
        ;   Label: caseD_13
    CALL core_gabriela.cpp_CGabriella_collectAmmo_FUN_00498790 ; 004977ce
        ;   XREF to: 00498790 (UNCONDITIONAL_CALL)  ; void core_gabriela.cpp_CGabriella_collectAmmo_FUN_00498790(CGabriella * this_ptr)
    ADD ESP,0x4                         ; 004977d3
    JMP 0x004974a7                      ; 004977d6
        ;   XREF to: 004974a7 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH EBX                            ; 004977db
        ;   Label: caseD_16
    CALL core_hero.cpp_CHero_tryOpenDoor_FUN_004b5270 ; 004977dc
        ;   XREF to: 004b5270 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryOpenDoor_FUN_004b5270(CHero * this_ptr)
    ADD ESP,0x4                         ; 004977e1
    TEST EAX,EAX                        ; 004977e4
    JNZ 0x004974a7                      ; 004977e6
        ;   XREF to: 004974a7 (CONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x1                            ; 004977ec
    PUSH EAX                            ; 004977ee
    PUSH ESI                            ; 004977ef
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004977f0
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004977f5
    JMP 0x004974a7                      ; 004977f8
        ;   XREF to: 004974a7 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH EDI                            ; 004977fd
        ;   Label: caseD_4
    PUSH EBX                            ; 004977fe
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042add0 ; 004977ff
        ;   XREF to: 0042add0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042add0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00497804
    JMP 0x004974a7                      ; 00497807
        ;   XREF to: 004974a7 (UNCONDITIONAL_JUMP)  ; caseD_12

