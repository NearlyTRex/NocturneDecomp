; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_prye_cpp_FUN_005263c0(CPrye *param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_prye.cpp_FUN_00518cd0 at 00519e51
;
; Referenced Globals:
;   void* switchdataD_0052636c = 005265aa
;   void* switchdataD_00526380 = 00526455
;   undefined4 s_wp_holystaff_wav_005cd96e+1
;   undefined4 DAT_005cd987
;   undefined4 g_CFirestaffClassInfo.name_hash
;   undefined4 g_CLightStaffClassInfo.name_hash
;   undefined4 g_CWeaponClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60
;   core_prye.cpp_CPrye_updateWeaponPosition_FUN_0051f360
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005263c0
        ;   Label: core_prye.cpp_FUN_005263c0
    PUSH ESI                            ; 005263c1
    PUSH EDI                            ; 005263c2
    PUSH EBP                            ; 005263c3
    SUB ESP,0x4                         ; 005263c4
    MOV EBX,dword ptr [ESP + 0x18]      ; 005263c7
    MOV EDX,dword ptr [EBX + 0xcde0]    ; 005263cb
    MOV dword ptr [EBX + 0x20c2c],0x0   ; 005263d1
    TEST EDX,EDX                        ; 005263db
    JZ 0x0052651b                       ; 005263dd
        ;   XREF to: 0052651b (CONDITIONAL_JUMP)  ; LAB_0052651b
    CMP dword ptr [EBX + 0x26fc],0x0    ; 005263e3
    JNZ 0x0052651b                      ; 005263ea
        ;   XREF to: 0052651b (CONDITIONAL_JUMP)  ; LAB_0052651b
    CMP dword ptr [EBX + 0x20b64],0x0   ; 005263f0
    JNZ 0x0052651b                      ; 005263f7
        ;   XREF to: 0052651b (CONDITIONAL_JUMP)  ; LAB_0052651b
    CMP dword ptr [EBX + 0x20bcc],0x0   ; 005263fd
    JZ 0x0052651b                       ; 00526404
        ;   XREF to: 0052651b (CONDITIONAL_JUMP)  ; LAB_0052651b
    MOV EAX,dword ptr [EBX + 0x20c24]   ; 0052640a
    TEST EAX,EAX                        ; 00526410
    JNZ 0x00526523                      ; 00526412
        ;   XREF to: 00526523 (CONDITIONAL_JUMP)  ; LAB_00526523
    MOV EAX,dword ptr [EBX + 0x2628]    ; 00526418
    TEST EAX,EAX                        ; 0052641e
        ;   Label: LAB_0052641e
    JNZ 0x00526535                      ; 00526420
        ;   XREF to: 00526535 (CONDITIONAL_JUMP)  ; LAB_00526535
    MOV EAX,dword ptr [EBX + 0x20c24]   ; 00526426
        ;   Label: LAB_00526426
    TEST EAX,EAX                        ; 0052642c
    JZ 0x0052651b                       ; 0052642e
        ;   XREF to: 0052651b (CONDITIONAL_JUMP)  ; LAB_0052651b
    MOV EDX,dword ptr [EAX + 0x2e0]     ; 00526434
    CMP EDX,0x3                         ; 0052643a
    JZ 0x0052651b                       ; 0052643d
        ;   XREF to: 0052651b (CONDITIONAL_JUMP)  ; LAB_0052651b
    MOV EAX,EDX                         ; 00526443
    CMP EDX,0xe                         ; 00526445
    JA 0x0052666c                       ; 00526448
        ;   XREF to: 0052666c (CONDITIONAL_JUMP)  ; caseD_b
    JMP dword ptr [EAX*0x4 + 0x526380]  ; 0052644e | caseD_5 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,0x2                         ; 00526455
        ;   Label: caseD_0
    PUSH EAX                            ; 0052645a
        ;   Label: LAB_0052645a
    PUSH EBX                            ; 0052645b
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60 ; 0052645c
        ;   XREF to: 00433a60 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60(CCharacter * this_ptr, int state_index)
    MOV dword ptr [ESP + 0x8],EAX       ; 00526461
    FLD float ptr [ESP + 0x8]           ; 00526465
    ADD ESP,0x8                         ; 00526469
    FCOMP double ptr [0x005cd987]       ; 0052646c | DAT_005cd987
    FNSTSW AX                           ; 00526472
    SAHF                                ; 00526474
    JC 0x0052651b                       ; 00526475
        ;   XREF to: 0052651b (CONDITIONAL_JUMP)  ; LAB_0052651b
    LEA EDX,[EBX + 0x20be0]             ; 0052647b
    FLD float ptr [EDX + 0x14]          ; 00526481
    FLD1                                ; 00526484
    FCOMPP                              ; 00526486
    FNSTSW AX                           ; 00526488
    SAHF                                ; 0052648a
    JA 0x0052651b                       ; 0052648b
        ;   XREF to: 0052651b (CONDITIONAL_JUMP)  ; LAB_0052651b
    FLD float ptr [EDX + 0x10]          ; 00526491
    FLDZ                                ; 00526494
    FCOMPP                              ; 00526496
    FNSTSW AX                           ; 00526498
    SAHF                                ; 0052649a
    JC 0x0052651b                       ; 0052649b
        ;   XREF to: 0052651b (CONDITIONAL_JUMP)  ; LAB_0052651b
    FLDZ                                ; 005264a1
    FCOMP float ptr [EBX + 0x3254]      ; 005264a3
    FNSTSW AX                           ; 005264a9
    SAHF                                ; 005264ab
    JC 0x00526673                       ; 005264ac
        ;   XREF to: 00526673 (CONDITIONAL_JUMP)  ; LAB_00526673
    MOV dword ptr [EBX + 0x20b60],0x0   ; 005264b2
    MOV EAX,dword ptr [EBX + 0x20c24]   ; 005264bc
        ;   Label: LAB_005264bc
    PUSH EAX                            ; 005264c2
    MOV EDX,dword ptr [EAX + 0x154]     ; 005264c3
    CALL dword ptr [EDX + 0xe8]         ; 005264c9
    ADD ESP,0x4                         ; 005264cf
    TEST EAX,EAX                        ; 005264d2
    JZ 0x0052651b                       ; 005264d4
        ;   XREF to: 0052651b (CONDITIONAL_JUMP)  ; LAB_0052651b
    MOV EAX,dword ptr [EBX + 0x20c24]   ; 005264d6
    MOV ESI,dword ptr [EAX + 0x2e0]     ; 005264dc
    CMP ESI,0xc                         ; 005264e2
    JZ 0x0052668f                       ; 005264e5
        ;   XREF to: 0052668f (CONDITIONAL_JUMP)  ; LAB_0052668f
    CMP ESI,0xd                         ; 005264eb
    JZ 0x0052670d                       ; 005264ee
        ;   XREF to: 0052670d (CONDITIONAL_JUMP)  ; LAB_0052670d
    CMP ESI,0xe                         ; 005264f4
    JNZ 0x00526733                      ; 005264f7
        ;   XREF to: 00526733 (CONDITIONAL_JUMP)  ; LAB_00526733
    MOV dword ptr [EBX + 0x2f04],0x0    ; 005264fd
    MOV dword ptr [EBX + 0x20b64],0xd   ; 00526507
    MOV dword ptr [EBX + 0x2f00],0x20   ; 00526511
    ADD ESP,0x4                         ; 0052651b
        ;   Label: LAB_0052651b
    POP EBP                             ; 0052651e
    POP EDI                             ; 0052651f
    POP ESI                             ; 00526520
    POP EBX                             ; 00526521
    RET                                 ; 00526522
    CMP dword ptr [EAX + 0x2e0],0x7     ; 00526523
        ;   Label: LAB_00526523
    JZ 0x0052641e                       ; 0052652a
        ;   XREF to: 0052641e (CONDITIONAL_JUMP)  ; LAB_0052641e
    JMP 0x00526426                      ; 00526530
        ;   XREF to: 00526426 (UNCONDITIONAL_JUMP)  ; LAB_00526426
    PUSH EAX                            ; 00526535
        ;   Label: LAB_00526535
    MOV EDX,dword ptr [EAX + 0x154]     ; 00526536
    CALL dword ptr [EDX + 0x74]         ; 0052653c
    ADD ESP,0x4                         ; 0052653f
    MOV EBP,EAX                         ; 00526542
    TEST EAX,EAX                        ; 00526544
    JZ 0x00526426                       ; 00526546
        ;   XREF to: 00526426 (CONDITIONAL_JUMP)  ; LAB_00526426
    PUSH 0x3                            ; 0052654c
    PUSH 0x0                            ; 0052654e
    XOR EDI,EDI                         ; 00526550
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00526552
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00526557
    MOV dword ptr [EBX + 0x20c30],EAX   ; 0052655a
    MOV EAX,dword ptr [EBX + 0x20c30]   ; 00526560
        ;   Label: LAB_00526560
    INC EAX                             ; 00526566
    MOV dword ptr [EBX + 0x20c30],EAX   ; 00526567
    TEST EAX,EAX                        ; 0052656d
    JL 0x00526576                       ; 0052656f
        ;   XREF to: 00526576 (CONDITIONAL_JUMP)  ; LAB_00526576
    CMP EAX,0x3                         ; 00526571
    JL 0x00526580                       ; 00526574
        ;   XREF to: 00526580 (CONDITIONAL_JUMP)  ; LAB_00526580
    MOV dword ptr [EBX + 0x20c30],0x0   ; 00526576
        ;   Label: LAB_00526576
    MOV EAX,[0x02d0c150]                ; 00526580 | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_00526580
    PUSH EAX                            ; 00526585
    MOV EDX,dword ptr [EBX + 0x20c24]   ; 00526586
    PUSH EDX                            ; 0052658c
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0052658d
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EDX,dword ptr [EBX + 0x20c30]   ; 00526592
    XOR ESI,ESI                         ; 00526598
    INC EDX                             ; 0052659a
    ADD ESP,0x8                         ; 0052659b
    CMP EDX,0x4                         ; 0052659e
    JA 0x005265c2                       ; 005265a1
        ;   XREF to: 005265c2 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x52636c]  ; 005265a3 | caseD_ffffffff | caseD_3 | switchdataD_0052636c
        ;   Label: switchD
    TEST EAX,EAX                        ; 005265aa
        ;   Label: caseD_ffffffff
    JZ 0x005265db                       ; 005265ac
        ;   XREF to: 005265db (CONDITIONAL_JUMP)  ; caseD_3
    MOV EAX,dword ptr [EBX + 0x20c24]   ; 005265ae
    CMP dword ptr [EAX + 0x56c],0x9     ; 005265b4
    JNZ 0x005265d4                      ; 005265bb
        ;   XREF to: 005265d4 (CONDITIONAL_JUMP)  ; LAB_005265d4
    MOV ESI,0x8                         ; 005265bd
    TEST ESI,EBP                        ; 005265c2
        ;   Label: default
    JNZ 0x005265e2                      ; 005265c4
        ;   XREF to: 005265e2 (CONDITIONAL_JUMP)  ; LAB_005265e2
    INC EDI                             ; 005265c6
    CMP EDI,0x14                        ; 005265c7
    JL 0x00526560                       ; 005265ca
        ;   XREF to: 00526560 (CONDITIONAL_JUMP)  ; LAB_00526560
    ADD ESP,0x4                         ; 005265cc
    POP EBP                             ; 005265cf
    POP EDI                             ; 005265d0
    POP ESI                             ; 005265d1
    POP EBX                             ; 005265d2
    RET                                 ; 005265d3
    MOV ESI,0x1                         ; 005265d4
        ;   Label: LAB_005265d4
    JMP 0x005265c2                      ; 005265d9
        ;   XREF to: 005265c2 (UNCONDITIONAL_JUMP)  ; default
    MOV ESI,0x2                         ; 005265db
        ;   Label: caseD_0
    JMP 0x005265c2                      ; 005265e0
        ;   XREF to: 005265c2 (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBX + 0x20c30]   ; 005265e2
        ;   Label: LAB_005265e2
    MOV dword ptr [EBX + 0x2f04],0x0    ; 005265e8
    ADD EAX,0xd                         ; 005265f2
    PUSH 0x5cd96f                       ; 005265f5 | s_wp_holystaff_wav_005cd96e+1
    MOV dword ptr [EBX + 0x2f00],EAX    ; 005265fa
    PUSH EBX                            ; 00526600
    MOV EAX,dword ptr [EBX + 0x154]     ; 00526601
    MOV dword ptr [EBX + 0x20b64],0x7   ; 00526607
    CALL dword ptr [EAX + 0x2c]         ; 00526611
    ADD ESP,0x8                         ; 00526614
    ADD ESP,0x4                         ; 00526617
    POP EBP                             ; 0052661a
    POP EDI                             ; 0052661b
    POP ESI                             ; 0052661c
    POP EBX                             ; 0052661d
    RET                                 ; 0052661e
    MOV EAX,0x4                         ; 0052661f
        ;   Label: caseD_1
    JMP 0x0052645a                      ; 00526624
        ;   XREF to: 0052645a (UNCONDITIONAL_JUMP)  ; LAB_0052645a
    MOV EAX,0xe                         ; 00526629
        ;   Label: caseD_9
    JMP 0x0052645a                      ; 0052662e
        ;   XREF to: 0052645a (UNCONDITIONAL_JUMP)  ; LAB_0052645a
    MOV EAX,0x7                         ; 00526633
        ;   Label: caseD_4
    JMP 0x0052645a                      ; 00526638
        ;   XREF to: 0052645a (UNCONDITIONAL_JUMP)  ; LAB_0052645a
    MOV EAX,0x5                         ; 0052663d
        ;   Label: caseD_2
    JMP 0x0052645a                      ; 00526642
        ;   XREF to: 0052645a (UNCONDITIONAL_JUMP)  ; LAB_0052645a
    MOV EAX,0x8                         ; 00526647
        ;   Label: caseD_7
    JMP 0x0052645a                      ; 0052664c
        ;   XREF to: 0052645a (UNCONDITIONAL_JUMP)  ; LAB_0052645a
    MOV EAX,0x11                        ; 00526651
        ;   Label: caseD_d
    JMP 0x0052645a                      ; 00526656
        ;   XREF to: 0052645a (UNCONDITIONAL_JUMP)  ; LAB_0052645a
    MOV EAX,0x12                        ; 0052665b
        ;   Label: caseD_e
    JMP 0x0052645a                      ; 00526660
        ;   XREF to: 0052645a (UNCONDITIONAL_JUMP)  ; LAB_0052645a
    XOR EAX,EDX                         ; 00526665
        ;   Label: caseD_8
    JMP 0x0052645a                      ; 00526667
        ;   XREF to: 0052645a (UNCONDITIONAL_JUMP)  ; LAB_0052645a
    XOR EAX,EAX                         ; 0052666c
        ;   Label: caseD_3
    JMP 0x0052645a                      ; 0052666e
        ;   XREF to: 0052645a (UNCONDITIONAL_JUMP)  ; LAB_0052645a
    CMP dword ptr [EBX + 0x3258],0x4    ; 00526673
        ;   Label: LAB_00526673
    JNZ 0x005264bc                      ; 0052667a
        ;   XREF to: 005264bc (CONDITIONAL_JUMP)  ; LAB_005264bc
    MOV dword ptr [EBX + 0x20b60],0x1   ; 00526680
    JMP 0x005264bc                      ; 0052668a
        ;   XREF to: 005264bc (UNCONDITIONAL_JUMP)  ; LAB_005264bc
    MOV ESI,dword ptr [0x01d70c94]      ; 0052668f | g_CLightStaffClassInfo.name_hash
        ;   Label: LAB_0052668f
    PUSH ESI                            ; 00526695
    PUSH EAX                            ; 00526696
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00526697
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0052669c
    TEST EAX,EAX                        ; 0052669f
    JZ 0x005266c9                       ; 005266a1
        ;   XREF to: 005266c9 (CONDITIONAL_JUMP)  ; LAB_005266c9
    MOV dword ptr [EBX + 0x2f04],0x0    ; 005266a3
    MOV dword ptr [EBX + 0x20b64],0xa   ; 005266ad
    MOV dword ptr [EBX + 0x2f00],0x1c   ; 005266b7
    ADD ESP,0x4                         ; 005266c1
    POP EBP                             ; 005266c4
    POP EDI                             ; 005266c5
    POP ESI                             ; 005266c6
    POP EBX                             ; 005266c7
    RET                                 ; 005266c8
    MOV EDI,dword ptr [0x01d0cee8]      ; 005266c9 | g_CFirestaffClassInfo.name_hash
        ;   Label: LAB_005266c9
    PUSH EDI                            ; 005266cf
    MOV EBP,dword ptr [EBX + 0x20c24]   ; 005266d0
    PUSH EBP                            ; 005266d6
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 005266d7
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005266dc
    TEST EAX,EAX                        ; 005266df
    JZ 0x0052651b                       ; 005266e1
        ;   XREF to: 0052651b (CONDITIONAL_JUMP)  ; LAB_0052651b
    MOV dword ptr [EBX + 0x2f04],0x0    ; 005266e7
    MOV dword ptr [EBX + 0x20b64],0xb   ; 005266f1
    MOV dword ptr [EBX + 0x2f00],0x1b   ; 005266fb
    ADD ESP,0x4                         ; 00526705
    POP EBP                             ; 00526708
    POP EDI                             ; 00526709
    POP ESI                             ; 0052670a
    POP EBX                             ; 0052670b
    RET                                 ; 0052670c
    MOV dword ptr [EBX + 0x2f04],0x0    ; 0052670d
        ;   Label: LAB_0052670d
    MOV dword ptr [EBX + 0x20b64],0xc   ; 00526717
    MOV dword ptr [EBX + 0x2f00],0x1f   ; 00526721
    ADD ESP,0x4                         ; 0052672b
    POP EBP                             ; 0052672e
    POP EDI                             ; 0052672f
    POP ESI                             ; 00526730
    POP EBX                             ; 00526731
    RET                                 ; 00526732
    PUSH EAX                            ; 00526733
        ;   Label: LAB_00526733
    MOV EDX,dword ptr [EAX + 0x154]     ; 00526734
    CALL dword ptr [EDX + 0xe4]         ; 0052673a
    ADD ESP,0x4                         ; 00526740
    PUSH 0x0                            ; 00526743
    PUSH EBX                            ; 00526745
    CALL core_prye.cpp_CPrye_updateWeaponPosition_FUN_0051f360 ; 00526746
        ;   XREF to: 0051f360 (UNCONDITIONAL_CALL)  ; void core_prye.cpp_CPrye_updateWeaponPosition_FUN_0051f360(CPrye * this_ptr, int hand_index)
    MOV EAX,dword ptr [EBX + 0x20c24]   ; 0052674b
    MOV EDX,dword ptr [EAX + 0x2dc]     ; 00526751
    ADD ESP,0x8                         ; 00526757
    CMP EDX,0x2                         ; 0052675a
    JNZ 0x00526773                      ; 0052675d
        ;   XREF to: 00526773 (CONDITIONAL_JUMP)  ; LAB_00526773
    MOV dword ptr [EBX + 0x2f04],0x0    ; 0052675f
    MOV dword ptr [EBX + 0x2f00],0x8    ; 00526769
    MOV EAX,dword ptr [EBX + 0x20c24]   ; 00526773
        ;   Label: LAB_00526773
    CMP dword ptr [EAX + 0x2dc],0x1     ; 00526779
    JNZ 0x0052651b                      ; 00526780
        ;   XREF to: 0052651b (CONDITIONAL_JUMP)  ; LAB_0052651b
    MOV dword ptr [EBX + 0x2f04],0x0    ; 00526786
    MOV dword ptr [EBX + 0x2f00],0x19   ; 00526790
    ADD ESP,0x4                         ; 0052679a
    POP EBP                             ; 0052679d
    POP EDI                             ; 0052679e
    POP ESI                             ; 0052679f
    POP EBX                             ; 005267a0
    RET                                 ; 005267a1

