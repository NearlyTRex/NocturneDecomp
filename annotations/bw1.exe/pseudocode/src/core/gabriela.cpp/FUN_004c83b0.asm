; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gabriela_cpp_FUN_004c83b0(CGabriella *param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0xf0]:1  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined        Stack[-0xb4]:1  local_b4
; undefined        Stack[-0xa8]:1  local_a8
; undefined        Stack[-0x9c]:1  local_9c
; undefined        Stack[-0x90]:1  local_90
; undefined        Stack[-0x78]:1  local_78
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined        Stack[-0x54]:1  local_54
; undefined        Stack[-0x48]:1  local_48
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_gabriela.cpp_CGabriella_process_FUN_004c65f0 at 004c66b0
;
; Referenced Globals:
;   undefined1* switchdataD_004c8350 = 004c83f6
;   TerminatedCString s_kick1_wav_005e1074
;   TerminatedCString s_hit_gh_4_7_wav_005e107e
;   TerminatedCString s_gb_fall1_wav_005e108e
;   undefined4 DAT_005e109c
;   undefined4 DAT_005e10a4
;   CGore* g_CGorePtr = 01cd0e3c
;   undefined4 DAT_007c5330
;   undefined4 g_CEnemyClassInfo.name_hash
;   undefined4 DAT_01cc9124
;   undefined4 DAT_01cc9128
;   undefined4 DAT_01cc9138
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_charactr.cpp_CCharacter_processMotion_FUN_00434a80
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010
;   core_gabriela.cpp_CGabriella_collectAmmo_FUN_004c9990
;   core_gore.cpp_CGore_spawnBloodBurst_FUN_004e6060
;   core_hero.cpp_CHero_addCarriedItemToInventory_FUN_004ec2c0
;   core_hero.cpp_CHero_tryOpenDoor_FUN_004eb5e0
;   core_hero.cpp_FUN_004ec280
;   core_motion.cpp_CMotionController_advance_FUN_00524270
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;   core_motion.cpp_FUN_00524a40
;   core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c83b0
        ;   Label: core_gabriela.cpp_FUN_004c83b0
    PUSH ESI                            ; 004c83b1
    PUSH EDI                            ; 004c83b2
    PUSH EBP                            ; 004c83b3
    MOV EBP,ESP                         ; 004c83b4
    SUB ESP,0xe4                        ; 004c83b6
    AND ESP,0xfffffff8                  ; 004c83bc
    MOV EBX,dword ptr [EBP + 0x14]      ; 004c83bf
    LEA EAX,[EBX + 0x158]               ; 004c83c2
    MOV dword ptr [ESP + 0xdc],EAX      ; 004c83c8
    LEA EAX,[EBP + 0x18]                ; 004c83cf
        ;   Label: LAB_004c83cf
    PUSH EAX                            ; 004c83d2
    MOV EDX,dword ptr [ESP + 0xe0]      ; 004c83d3
    PUSH EDX                            ; 004c83da
    CALL core_motion.cpp_CMotionController_advance_FUN_00524270 ; 004c83db
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_00524270(CMotionController * this_ptr, float * delta_time)
    MOV ESI,EAX                         ; 004c83e0
    DEC EAX                             ; 004c83e2
    ADD ESP,0x8                         ; 004c83e3
    CMP EAX,0x15                        ; 004c83e6
    JA 0x004c8883                       ; 004c83e9
        ;   XREF to: 004c8883 (CONDITIONAL_JUMP)  ; caseD_10
    JMP dword ptr [EAX*0x4 + 0x4c8350]  ; 004c83ef | caseD_7 | caseD_2 | caseD_3
        ;   Label: switchD
    CMP ESI,0x7                         ; 004c83f6
        ;   Label: caseD_1
    JNZ 0x004c853b                      ; 004c83f9
        ;   XREF to: 004c853b (CONDITIONAL_JUMP)  ; LAB_004c853b
    MOV EAX,[0x01cc9128]                ; 004c83ff | DAT_01cc9128
    PUSH EAX                            ; 004c8404
        ;   Label: LAB_004c8404
    MOV ECX,dword ptr [ESP + 0xe0]      ; 004c8405
    PUSH ECX                            ; 004c840c
    LEA ESI,[ESP + 0x70]                ; 004c840d
    LEA EDI,[ESP + 0xb8]                ; 004c8411
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040 ; 004c8418
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0x70]                ; 004c841d
    ADD ESP,0x8                         ; 004c8421
    MOVSD ES:EDI,ESI                    ; 004c8424
    MOVSD ES:EDI,ESI                    ; 004c8425
    MOVSD ES:EDI,ESI                    ; 004c8426
    MOV ESI,dword ptr [EBX + 0x1ff84]   ; 004c8427
    TEST ESI,ESI                        ; 004c842d
    JZ 0x004c8545                       ; 004c842f
        ;   XREF to: 004c8545 (CONDITIONAL_JUMP)  ; LAB_004c8545
    MOV EAX,dword ptr [EBX + 0x154]     ; 004c8435
    MOV dword ptr [ESP + 0xe0],EAX      ; 004c843b
    MOV EAX,ESI                         ; 004c8442
    PUSH 0x3f800000                     ; 004c8444
    PUSH EAX                            ; 004c8449
    MOV ESI,dword ptr [ESI + 0x154]     ; 004c844a
    CALL dword ptr [ESI + 0x44]         ; 004c8450
    ADD ESP,0x4                         ; 004c8453
    PUSH EAX                            ; 004c8456
    LEA EAX,[ESP + 0xb8]                ; 004c8457
    PUSH EAX                            ; 004c845e
    PUSH EBX                            ; 004c845f
    LEA ESI,[ESP + 0x84]                ; 004c8460
    CALL core_actor.cpp_FUN_00408b40    ; 004c8467
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 004c846c
    LEA EAX,[ESP + 0xa0]                ; 004c846f
    LEA EDI,[ESP + 0xa0]                ; 004c8476
    PUSH EAX                            ; 004c847d
    LEA ESI,[ESP + 0x80]                ; 004c847e
    MOV EAX,dword ptr [ESP + 0xec]      ; 004c8485
    PUSH EBX                            ; 004c848c
    MOVSD ES:EDI,ESI                    ; 004c848d
    MOVSD ES:EDI,ESI                    ; 004c848e
    MOVSD ES:EDI,ESI                    ; 004c848f
    CALL dword ptr [EAX + 0x28]         ; 004c8490
    ADD ESP,0x10                        ; 004c8493
    FLD float ptr [EBP + 0x18]          ; 004c8496
        ;   Label: caseD_12
    FLDZ                                ; 004c8499
    FCOMPP                              ; 004c849b
    FNSTSW AX                           ; 004c849d
    SAHF                                ; 004c849f
    JC 0x004c83cf                       ; 004c84a0
        ;   XREF to: 004c83cf (CONDITIONAL_JUMP)  ; LAB_004c83cf
    MOV ESP,EBP                         ; 004c84a6
    POP EBP                             ; 004c84a8
    POP EDI                             ; 004c84a9
    POP ESI                             ; 004c84aa
    POP EBX                             ; 004c84ab
    RET                                 ; 004c84ac
    MOV ESI,dword ptr [0x007c5330]      ; 004c84ad | DAT_007c5330
        ;   Label: caseD_2
    PUSH ESI                            ; 004c84b3
    MOV EDI,dword ptr [EBX + 0x1ff78]   ; 004c84b4
    PUSH EDI                            ; 004c84ba
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004c84bb
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004c84c0
    TEST EAX,EAX                        ; 004c84c3
    JZ 0x004c84da                       ; 004c84c5
        ;   XREF to: 004c84da (CONDITIONAL_JUMP)  ; caseD_14
    CMP dword ptr [EAX + 0x678],0x1     ; 004c84c7
    JNZ 0x004c84e7                      ; 004c84ce
        ;   XREF to: 004c84e7 (CONDITIONAL_JUMP)  ; LAB_004c84e7
    MOV dword ptr [EBX + 0x1ffc0],0x3ea0d97c ; 004c84d0
    PUSH 0x0                            ; 004c84da
        ;   Label: caseD_14
    PUSH EBX                            ; 004c84dc
    CALL core_hero.cpp_FUN_004ec280     ; 004c84dd
        ;   XREF to: 004ec280 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_FUN_004ec280(CHero * this_ptr, int hand_index)
    ADD ESP,0x8                         ; 004c84e2
    JMP 0x004c8496                      ; 004c84e5
        ;   XREF to: 004c8496 (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV dword ptr [EBX + 0x1ffc0],0xbf060a92 ; 004c84e7
        ;   Label: LAB_004c84e7
    PUSH 0x0                            ; 004c84f1
    PUSH EBX                            ; 004c84f3
    CALL core_hero.cpp_FUN_004ec280     ; 004c84f4
        ;   XREF to: 004ec280 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_FUN_004ec280(CHero * this_ptr, int hand_index)
    ADD ESP,0x8                         ; 004c84f9
    JMP 0x004c8496                      ; 004c84fc
        ;   XREF to: 004c8496 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x0                            ; 004c84fe
        ;   Label: caseD_3
    PUSH 0x0                            ; 004c8500
    MOV EAX,dword ptr [EBX + 0x154]     ; 004c8502
    PUSH EBX                            ; 004c8508
    CALL dword ptr [EAX + 0x128]        ; 004c8509
    ADD ESP,0xc                         ; 004c850f
    PUSH 0x1                            ; 004c8512
    PUSH 0x0                            ; 004c8514
    MOV ECX,dword ptr [ESP + 0xe4]      ; 004c8516
    PUSH ECX                            ; 004c851d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004c851e
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c8523
    JMP 0x004c8496                      ; 004c8526
        ;   XREF to: 004c8496 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x0                            ; 004c852b
        ;   Label: caseD_15
    PUSH EBX                            ; 004c852d
    CALL core_hero.cpp_CHero_addCarriedItemToInventory_FUN_004ec2c0 ; 004c852e
        ;   XREF to: 004ec2c0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_addCarriedItemToInventory_FUN_004ec2c0(CHero * this_ptr, int hand_index)
    ADD ESP,0x8                         ; 004c8533
    JMP 0x004c8496                      ; 004c8536
        ;   XREF to: 004c8496 (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV EAX,[0x01cc9124]                ; 004c853b | DAT_01cc9124
        ;   Label: LAB_004c853b
    JMP 0x004c8404                      ; 004c8540
        ;   XREF to: 004c8404 (UNCONDITIONAL_JUMP)  ; LAB_004c8404
    CMP dword ptr [EBX + 0x2500],0x0    ; 004c8545
        ;   Label: LAB_004c8545
    JZ 0x004c8496                       ; 004c854c
        ;   XREF to: 004c8496 (CONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x2                            ; 004c8552
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004c8554
    PUSH EAX                            ; 004c855b
    CALL core_motion.cpp_FUN_00524a40   ; 004c855c
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0xe8],EAX      ; 004c8561
    FLD float ptr [ESP + 0xe8]          ; 004c8568
    ADD ESP,0x8                         ; 004c856f
    FCOMP double ptr [0x005e10a4]       ; 004c8572 | DAT_005e10a4
    FNSTSW AX                           ; 004c8578
    SAHF                                ; 004c857a
    JA 0x004c85c7                       ; 004c857b
        ;   XREF to: 004c85c7 (CONDITIONAL_JUMP)  ; LAB_004c85c7
    PUSH 0x1                            ; 004c857d
    MOV EDX,dword ptr [ESP + 0xe0]      ; 004c857f
    PUSH EDX                            ; 004c8586
    CALL core_motion.cpp_FUN_00524a40   ; 004c8587
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0xe8],EAX      ; 004c858c
    FLD float ptr [ESP + 0xe8]          ; 004c8593
    ADD ESP,0x8                         ; 004c859a
    FCOMP double ptr [0x005e10a4]       ; 004c859d | DAT_005e10a4
    FNSTSW AX                           ; 004c85a3
    SAHF                                ; 004c85a5
    JBE 0x004c85e6                      ; 004c85a6
        ;   XREF to: 004c85e6 (CONDITIONAL_JUMP)  ; LAB_004c85e6
    LEA EAX,[ESP + 0xb0]                ; 004c85a8
    PUSH 0x3f800000                     ; 004c85af
    PUSH EAX                            ; 004c85b4
    MOV ESI,dword ptr [EBX + 0x154]     ; 004c85b5
    PUSH EBX                            ; 004c85bb
    CALL dword ptr [ESI + 0x24]         ; 004c85bc
    ADD ESP,0xc                         ; 004c85bf
    JMP 0x004c8496                      ; 004c85c2
        ;   XREF to: 004c8496 (UNCONDITIONAL_JUMP)  ; caseD_12
    LEA ESI,[ESP + 0xb0]                ; 004c85c7
        ;   Label: LAB_004c85c7
    PUSH 0x3fd9999a                     ; 004c85ce
    PUSH ESI                            ; 004c85d3
    MOV EAX,dword ptr [EBX + 0x154]     ; 004c85d4
    PUSH EBX                            ; 004c85da
    CALL dword ptr [EAX + 0x24]         ; 004c85db
    ADD ESP,0xc                         ; 004c85de
    JMP 0x004c8496                      ; 004c85e1
        ;   XREF to: 004c8496 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x3                            ; 004c85e6
        ;   Label: LAB_004c85e6
    MOV ECX,dword ptr [ESP + 0xe0]      ; 004c85e8
    PUSH ECX                            ; 004c85ef
    CALL core_motion.cpp_FUN_00524a40   ; 004c85f0
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0xe8],EAX      ; 004c85f5
    FLD float ptr [ESP + 0xe8]          ; 004c85fc
    ADD ESP,0x8                         ; 004c8603
    FCOMP double ptr [0x005e10a4]       ; 004c8606 | DAT_005e10a4
    FNSTSW AX                           ; 004c860c
    SAHF                                ; 004c860e
    JBE 0x004c8496                      ; 004c860f
        ;   XREF to: 004c8496 (CONDITIONAL_JUMP)  ; caseD_12
    LEA EAX,[ESP + 0xb0]                ; 004c8615
    PUSH 0x3f800000                     ; 004c861c
    PUSH EAX                            ; 004c8621
    MOV ESI,dword ptr [EBX + 0x154]     ; 004c8622
    PUSH EBX                            ; 004c8628
    CALL dword ptr [ESI + 0x24]         ; 004c8629
    ADD ESP,0xc                         ; 004c862c
    JMP 0x004c8496                      ; 004c862f
        ;   XREF to: 004c8496 (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV EDI,dword ptr [0x01c3f6a0]      ; 004c8634 | g_CEnemyClassInfo.name_hash
        ;   Label: caseD_6
    PUSH EDI                            ; 004c863a
    MOV EAX,dword ptr [EBX + 0x26fc]    ; 004c863b
    PUSH EAX                            ; 004c8641
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004c8642
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0xe0],EAX      ; 004c8647
    ADD ESP,0x8                         ; 004c864e
    MOV dword ptr [ESP + 0xd4],EAX      ; 004c8651
    TEST EAX,EAX                        ; 004c8658
    JNZ 0x004c866b                      ; 004c865a
        ;   XREF to: 004c866b (CONDITIONAL_JUMP)  ; LAB_004c866b
    MOV dword ptr [EBX + 0x26fc],0x0    ; 004c865c
        ;   Label: LAB_004c865c
    JMP 0x004c8496                      ; 004c8666
        ;   XREF to: 004c8496 (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV ECX,dword ptr [0x01cc9138]      ; 004c866b | DAT_01cc9138
        ;   Label: LAB_004c866b
    PUSH ECX                            ; 004c8671
    MOV ESI,dword ptr [ESP + 0xe0]      ; 004c8672
    PUSH ESI                            ; 004c8679
    LEA ESI,[ESP + 0xc4]                ; 004c867a
    LEA EDI,[ESP + 0x88]                ; 004c8681
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040 ; 004c8688
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    ADD ESP,0x8                         ; 004c868d
    LEA EAX,[ESP + 0x80]                ; 004c8690
    LEA ESI,[ESP + 0xbc]                ; 004c8697
    PUSH EAX                            ; 004c869e
    MOVSD ES:EDI,ESI                    ; 004c869f
    MOVSD ES:EDI,ESI                    ; 004c86a0
    MOVSD ES:EDI,ESI                    ; 004c86a1
    PUSH EBX                            ; 004c86a2
    LEA ESI,[ESP + 0xac]                ; 004c86a3
    LEA EDI,[ESP + 0x4c]                ; 004c86aa
    CALL core_actor.cpp_FUN_00408b40    ; 004c86ae
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 004c86b3
    LEA EAX,[ESP + 0x8]                 ; 004c86b6
    LEA ESI,[ESP + 0xa4]                ; 004c86ba
    PUSH EAX                            ; 004c86c1
    MOVSD ES:EDI,ESI                    ; 004c86c2
    MOVSD ES:EDI,ESI                    ; 004c86c3
    MOVSD ES:EDI,ESI                    ; 004c86c4
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 004c86c5
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004c86ca
    PUSH 0x41700000                     ; 004c86cd
    PUSH 0x41200000                     ; 004c86d2
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004c86d7
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0xe8],EAX      ; 004c86dc
    FLD float ptr [ESP + 0xe8]          ; 004c86e3
    ADD ESP,0x8                         ; 004c86ea
    LEA EAX,[ESP + 0x44]                ; 004c86ed
    PUSH EAX                            ; 004c86f1
    MOV EDI,dword ptr [ESP + 0xdc]      ; 004c86f2
    LEA ESI,[ESP + 0x54]                ; 004c86f9
    PUSH EDI                            ; 004c86fd
    FSTP float ptr [ESP + 0x14]         ; 004c86fe
    CALL core_actor.cpp_FUN_00408bb0    ; 004c8702
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA EDI,[ESP + 0x94]                ; 004c8707
    LEA ESI,[ESP + 0x58]                ; 004c870e
    ADD ESP,0x8                         ; 004c8712
    MOVSD ES:EDI,ESI                    ; 004c8715
    MOVSD ES:EDI,ESI                    ; 004c8716
    MOVSD ES:EDI,ESI                    ; 004c8717
    LEA EAX,[ESP + 0x8c]                ; 004c8718
    LEA ESI,[ESP + 0x24]                ; 004c871f
    CMP ESI,EAX                         ; 004c8723
    JZ 0x004c8748                       ; 004c8725
        ;   XREF to: 004c8748 (CONDITIONAL_JUMP)  ; LAB_004c8748
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004c8727
    MOV dword ptr [ESP + 0x24],EAX      ; 004c872e
    MOV EAX,dword ptr [ESP + 0x90]      ; 004c8732
    MOV dword ptr [ESP + 0x28],EAX      ; 004c8739
    MOV EAX,dword ptr [ESP + 0x94]      ; 004c873d
    MOV dword ptr [ESP + 0x2c],EAX      ; 004c8744
    MOV ESI,dword ptr [ESP + 0xd4]      ; 004c8748
        ;   Label: LAB_004c8748
    LEA EAX,[ESP + 0x8]                 ; 004c874f
    MOV dword ptr [ESP + 0x3c],EBX      ; 004c8753
    MOV dword ptr [ESP + 0x40],EBX      ; 004c8757
    PUSH EAX                            ; 004c875b
    MOV EAX,dword ptr [ESP + 0xd8]      ; 004c875c
    MOV ESI,dword ptr [ESI + 0x154]     ; 004c8763
    PUSH EAX                            ; 004c8769
    CALL dword ptr [ESI + 0x108]        ; 004c876a
    ADD ESP,0x8                         ; 004c8770
    FLDZ                                ; 004c8773
    FLD float ptr [ESP + 0xc]           ; 004c8775
    FSTP double ptr [ESP]               ; 004c8779
    FCOMP double ptr [ESP]              ; 004c877c
    FNSTSW AX                           ; 004c877f
    SAHF                                ; 004c8781
    JNC 0x004c865c                      ; 004c8782
        ;   XREF to: 004c865c (CONDITIONAL_JUMP)  ; LAB_004c865c
    FLD double ptr [ESP]                ; 004c8788
    FMUL double ptr [0x005e109c]        ; 004c878b | DAT_005e109c
    CALL crt_math.c_round_FUN_005c03a0  ; 004c8791
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0xe0]        ; 004c8796
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004c879d
    PUSH 0x0                            ; 004c87a4
    INC EAX                             ; 004c87a6
    PUSH EAX                            ; 004c87a7
    PUSH 0x0                            ; 004c87a8
    LEA EAX,[ESP + 0x50]                ; 004c87aa
    PUSH EAX                            ; 004c87ae
    MOV EDX,dword ptr [0x0061dca4]      ; 004c87af | g_CGorePtr
    PUSH EDX                            ; 004c87b5
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004e6060 ; 004c87b6
        ;   XREF to: 004e6060 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004e6060(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 004c87bb
    PUSH 0x5e1074                       ; 004c87be | = "kick1.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004c87c3
    PUSH EBX                            ; 004c87c9
    CALL dword ptr [EAX + 0x2c]         ; 004c87ca
    ADD ESP,0x8                         ; 004c87cd
    MOV dword ptr [EBX + 0x26fc],0x0    ; 004c87d0
    JMP 0x004c8496                      ; 004c87da
        ;   XREF to: 004c8496 (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV ESI,dword ptr [EBX + 0x26fc]    ; 004c87df
        ;   Label: caseD_f
    TEST ESI,ESI                        ; 004c87e5
    JZ 0x004c8496                       ; 004c87e7
        ;   XREF to: 004c8496 (CONDITIONAL_JUMP)  ; caseD_12
    LEA EAX,[ESI + 0x20]                ; 004c87ed
    PUSH EAX                            ; 004c87f0
    PUSH EBX                            ; 004c87f1
    LEA ESI,[ESP + 0x64]                ; 004c87f2
    LEA EDI,[ESP + 0xd0]                ; 004c87f6
    CALL core_actor.cpp_FUN_00408bb0    ; 004c87fd
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x64]                ; 004c8802
    ADD ESP,0x8                         ; 004c8806
    MOVSD ES:EDI,ESI                    ; 004c8809
    MOVSD ES:EDI,ESI                    ; 004c880a
    MOVSD ES:EDI,ESI                    ; 004c880b
    FLDZ                                ; 004c880c
    FCOMP float ptr [ESP + 0xd0]        ; 004c880e
    FNSTSW AX                           ; 004c8815
    SAHF                                ; 004c8817
    JNC 0x004c8496                      ; 004c8818
        ;   XREF to: 004c8496 (CONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x5e107e                       ; 004c881e | = "hit-gh[4,7].wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004c8823
    PUSH EBX                            ; 004c8829
    CALL dword ptr [EAX + 0x2c]         ; 004c882a
    ADD ESP,0x8                         ; 004c882d
    JMP 0x004c8496                      ; 004c8830
        ;   XREF to: 004c8496 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x5e108e                       ; 004c8835 | = "gb-fall1.wav"
        ;   Label: caseD_11
    MOV EAX,dword ptr [EBX + 0x154]     ; 004c883a
    PUSH EBX                            ; 004c8840
    CALL dword ptr [EAX + 0x2c]         ; 004c8841
    ADD ESP,0x8                         ; 004c8844
    JMP 0x004c8496                      ; 004c8847
        ;   XREF to: 004c8496 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH EBX                            ; 004c884c
        ;   Label: caseD_13
    CALL core_gabriela.cpp_CGabriella_collectAmmo_FUN_004c9990 ; 004c884d
        ;   XREF to: 004c9990 (UNCONDITIONAL_CALL)  ; void core_gabriela.cpp_CGabriella_collectAmmo_FUN_004c9990(CGabriella * this_ptr)
    ADD ESP,0x4                         ; 004c8852
    JMP 0x004c8496                      ; 004c8855
        ;   XREF to: 004c8496 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH EBX                            ; 004c885a
        ;   Label: caseD_16
    CALL core_hero.cpp_CHero_tryOpenDoor_FUN_004eb5e0 ; 004c885b
        ;   XREF to: 004eb5e0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryOpenDoor_FUN_004eb5e0(CHero * this_ptr)
    ADD ESP,0x4                         ; 004c8860
    TEST EAX,EAX                        ; 004c8863
    JNZ 0x004c8496                      ; 004c8865
        ;   XREF to: 004c8496 (CONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x1                            ; 004c886b
    PUSH EAX                            ; 004c886d
    MOV ECX,dword ptr [ESP + 0xe4]      ; 004c886e
    PUSH ECX                            ; 004c8875
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004c8876
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c887b
    JMP 0x004c8496                      ; 004c887e
        ;   XREF to: 004c8496 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH ESI                            ; 004c8883
        ;   Label: caseD_4
    PUSH EBX                            ; 004c8884
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 004c8885
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004c888a
    JMP 0x004c8496                      ; 004c888d
        ;   XREF to: 004c8496 (UNCONDITIONAL_JUMP)  ; caseD_12

