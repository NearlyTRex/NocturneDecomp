; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_actor_cpp_FUN_0040b300(int param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0x110]:1  local_110
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0x44]:4  local_44
;
; Referenced Globals:
;   TerminatedCString s_CHero_005777b9
;   TerminatedCString s_s_causing_5_2f_damage_to_005777bf
;   TerminatedCString s_CHero_005777de
;   TerminatedCString s_s_causing_5_2f_damage_to_005777e4
;   double DOUBLE_00577809 = 0.5
;   double DOUBLE_00577811 = 10
;   void* PTR_DAT_005ad350 = 0077ad0c
;   int INT_005b96c4 = 0x1c78c7c
;   undefined4 DAT_005be368
;   undefined4 CDemonActorType_00765a60.name_hash
;   undefined4 DAT_0077ad0c
;   undefined4 CDemonActorType_0077bd40.name_hash
;   undefined4 DAT_01c7068c
;   undefined4 DAT_01c78c78
;   undefined4 DAT_01e57284
;   ... and 12 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CDemonActor_transformVector_FUN_0040a200
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;   core_box.cpp_CBoundingBox3D_doesSphereIntersect_FUN_0041e200
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0
;   core_crate.cpp_CCrate_explode_FUN_0043cdb0
;   core_flamecan.cpp_CFlameCan_ignite_FUN_0048e550
;   core_gore.cpp_CGore_spawnBloodBurst_FUN_004b0200
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00511780
;   core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00
;   core_setcolid.cpp_CDemonSet_setRayType_FUN_00511800
;   core_trigger.cpp_CTrigger_applyDamage_FUN_005485e0
;   crt_math.c_round_FUN_00563a30
;   ... and 5 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040b300
        ;   Label: core_actor.cpp_FUN_0040b300
    PUSH ESI                            ; 0040b301
    PUSH EDI                            ; 0040b302
    PUSH EBP                            ; 0040b303
    MOV EBP,ESP                         ; 0040b304
    SUB ESP,0x28c                       ; 0040b306
    AND ESP,0xfffffff8                  ; 0040b30c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0040b30f
    MOV ESI,dword ptr [EBP + 0x18]      ; 0040b312
    XOR EDX,EDX                         ; 0040b315
    MOV dword ptr [ESP + 0x25c],EDX     ; 0040b317
    CMP ESI,0x1                         ; 0040b31e
    JNZ 0x0040b32a                      ; 0040b321
        ;   XREF to: 0040b32a (CONDITIONAL_JUMP)  ; LAB_0040b32a
    MOV dword ptr [ESP + 0x25c],ESI     ; 0040b323
    LEA EAX,[ESP + 0x190]               ; 0040b32a
        ;   Label: LAB_0040b32a
    XOR EDI,EDI                         ; 0040b331
    PUSH EAX                            ; 0040b333
    MOV dword ptr [ESP + 0x1d0],EDI     ; 0040b334
    MOV dword ptr [ESP + 0x1d4],EDI     ; 0040b33b
    PUSH EBX                            ; 0040b342
    MOV EDX,dword ptr [EBX + 0x14c]     ; 0040b343
    CALL dword ptr [EDX + 0x14]         ; 0040b349
    ADD ESP,0x8                         ; 0040b34c
    MOV EAX,dword ptr [EAX + 0x14]      ; 0040b34f
    MOV dword ptr [ESP + 0x1d4],EAX     ; 0040b352
    LEA EAX,[ESP + 0x1cc]               ; 0040b359
    PUSH EAX                            ; 0040b360
    LEA EAX,[ESP + 0x1dc]               ; 0040b361
    PUSH EAX                            ; 0040b368
    PUSH EBX                            ; 0040b369
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0040b36a
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 0040b36f
    CMP dword ptr [ESP + 0x25c],0x1     ; 0040b372
    JNZ 0x0040b424                      ; 0040b37a
        ;   XREF to: 0040b424 (CONDITIONAL_JUMP)  ; LAB_0040b424
    MOV dword ptr [ESP + 0x1c8],0xc0400000 ; 0040b380
    LEA EAX,[ESP + 0x1c0]               ; 0040b38b
    PUSH EAX                            ; 0040b392
    LEA EAX,[ESP + 0x200]               ; 0040b393
    PUSH EAX                            ; 0040b39a
    PUSH EBX                            ; 0040b39b
    MOV dword ptr [ESP + 0x1cc],EDI     ; 0040b39c
    MOV dword ptr [ESP + 0x1d0],EDI     ; 0040b3a3
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 0040b3aa
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_transformVector_FUN_0040a200()
    ADD ESP,0xc                         ; 0040b3af
    LEA EDX,[ESP + 0x208]               ; 0040b3b2
    FLD float ptr [ESP + 0x1d8]         ; 0040b3b9
    FADD float ptr [EAX]                ; 0040b3c0
    FLD float ptr [ESP + 0x1dc]         ; 0040b3c2
    FXCH                                ; 0040b3c9
    FSTP float ptr [ESP + 0x208]        ; 0040b3cb
    FADD float ptr [EAX + 0x4]          ; 0040b3d2
    FLD float ptr [ESP + 0x1e0]         ; 0040b3d5
    FXCH                                ; 0040b3dc
    FSTP float ptr [ESP + 0x20c]        ; 0040b3de
    FADD float ptr [EAX + 0x8]          ; 0040b3e5
    LEA EAX,[ESP + 0x1e4]               ; 0040b3e8
    FSTP float ptr [ESP + 0x210]        ; 0040b3ef
    CMP EAX,EDX                         ; 0040b3f6
    JZ 0x0040b424                       ; 0040b3f8
        ;   XREF to: 0040b424 (CONDITIONAL_JUMP)  ; LAB_0040b424
    MOV EAX,dword ptr [ESP + 0x208]     ; 0040b3fa
    MOV dword ptr [ESP + 0x1e4],EAX     ; 0040b401
    MOV EAX,dword ptr [ESP + 0x20c]     ; 0040b408
    MOV dword ptr [ESP + 0x1e8],EAX     ; 0040b40f
    MOV EAX,dword ptr [ESP + 0x210]     ; 0040b416
    MOV dword ptr [ESP + 0x1ec],EAX     ; 0040b41d
    LEA EAX,[ESP + 0x1f0]               ; 0040b424
        ;   Label: LAB_0040b424
    PUSH EAX                            ; 0040b42b
    LEA EAX,[ESP + 0x23c]               ; 0040b42c
    XOR EDX,EDX                         ; 0040b433
    PUSH EAX                            ; 0040b435
    MOV EDI,0x3f800000                  ; 0040b436
    MOV dword ptr [ESP + 0x1f8],EDX     ; 0040b43b
    PUSH EBX                            ; 0040b442
    MOV dword ptr [ESP + 0x200],EDX     ; 0040b443
    MOV dword ptr [ESP + 0x204],EDI     ; 0040b44a
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 0040b451
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_transformVector_FUN_0040a200()
    ADD ESP,0xc                         ; 0040b456
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0040b459
    PUSH EBX                            ; 0040b45f
    CALL dword ptr [EAX + 0x8c]         ; 0040b460
    ADD ESP,0x4                         ; 0040b466
    MOV dword ptr [ESP + 0x278],EAX     ; 0040b469
    MOV EAX,dword ptr [ESP + 0x25c]     ; 0040b470
    TEST EAX,EAX                        ; 0040b477
    JNZ 0x0040b7ad                      ; 0040b479
        ;   XREF to: 0040b7ad (CONDITIONAL_JUMP)  ; LAB_0040b7ad
    MOV dword ptr [ESP + 0x268],EAX     ; 0040b47f
    MOV dword ptr [ESP + 0x270],EAX     ; 0040b486
    MOV EAX,[0x005be368]                ; 0040b48d | DAT_005be368
        ;   Label: LAB_0040b48d
    MOV EDX,dword ptr [ESP + 0x268]     ; 0040b492
    CMP EDX,dword ptr [EAX + 0x14cd6c]  ; 0040b499 | DAT_01fa3ff0
    JGE 0x0040b7ad                      ; 0040b49f
        ;   XREF to: 0040b7ad (CONDITIONAL_JUMP)  ; LAB_0040b7ad
    ADD EAX,dword ptr [ESP + 0x270]     ; 0040b4a5
    MOV EAX,dword ptr [EAX + 0x14cd70]  ; 0040b4ac | DAT_01fa3ff4 | DAT_01fa3ff8
    MOV dword ptr [ESP + 0x27c],EAX     ; 0040b4b2
    CMP EBX,EAX                         ; 0040b4b9
    JNZ 0x0040b4df                      ; 0040b4bb
        ;   XREF to: 0040b4df (CONDITIONAL_JUMP)  ; LAB_0040b4df
    MOV EAX,dword ptr [ESP + 0x268]     ; 0040b4bd
        ;   Label: LAB_0040b4bd
    MOV EDI,dword ptr [ESP + 0x270]     ; 0040b4c4
    INC EAX                             ; 0040b4cb
    ADD EDI,0x4                         ; 0040b4cc
    MOV dword ptr [ESP + 0x268],EAX     ; 0040b4cf
    MOV dword ptr [ESP + 0x270],EDI     ; 0040b4d6
    JMP 0x0040b48d                      ; 0040b4dd
        ;   XREF to: 0040b48d (UNCONDITIONAL_JUMP)  ; LAB_0040b48d
    CMP EAX,dword ptr [ESP + 0x278]     ; 0040b4df
        ;   Label: LAB_0040b4df
    JZ 0x0040b4bd                       ; 0040b4e6
        ;   XREF to: 0040b4bd (CONDITIONAL_JUMP)  ; LAB_0040b4bd
    MOV EAX,[0x00765a98]                ; 0040b4e8 | CDemonActorType_00765a60.name_hash
    PUSH EAX                            ; 0040b4ed
    MOV EDX,dword ptr [ESP + 0x280]     ; 0040b4ee
    PUSH EDX                            ; 0040b4f5
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0040b4f6
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 0040b4fb
    MOV EDI,EAX                         ; 0040b4fe
    TEST EAX,EAX                        ; 0040b500
    JZ 0x0040b60d                       ; 0040b502
        ;   XREF to: 0040b60d (CONDITIONAL_JUMP)  ; LAB_0040b60d
    CMP dword ptr [ESP + 0x278],0x0     ; 0040b508
    JZ 0x0040b543                       ; 0040b510
        ;   XREF to: 0040b543 (CONDITIONAL_JUMP)  ; LAB_0040b543
    PUSH EAX                            ; 0040b512
    MOV EDX,dword ptr [EAX + 0x14c]     ; 0040b513
    CALL dword ptr [EDX + 0xd8]         ; 0040b519
    ADD ESP,0x4                         ; 0040b51f
    TEST EAX,EAX                        ; 0040b522
    JZ 0x0040b543                       ; 0040b524
        ;   XREF to: 0040b543 (CONDITIONAL_JUMP)  ; LAB_0040b543
    PUSH 0x5777b9                       ; 0040b526 | = "CHero"
    MOV ECX,dword ptr [ESP + 0x27c]     ; 0040b52b
    PUSH ECX                            ; 0040b532
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 0040b533
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 0040b538
    TEST EAX,EAX                        ; 0040b53b
    JNZ 0x0040b4bd                      ; 0040b53d
        ;   XREF to: 0040b4bd (CONDITIONAL_JUMP)  ; LAB_0040b4bd
    LEA EAX,[ESP + 0x100]               ; 0040b543
        ;   Label: LAB_0040b543
    PUSH EAX                            ; 0040b54a
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 0040b54b
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0()
    ADD ESP,0x4                         ; 0040b550
    PUSH EDI                            ; 0040b553
    LEA EDX,[ESP + 0x104]               ; 0040b554
    PUSH EDX                            ; 0040b55b
    PUSH ESI                            ; 0040b55c
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0040b55d
    PUSH EBX                            ; 0040b563
    CALL dword ptr [EAX + 0x74]         ; 0040b564
    ADD ESP,0x10                        ; 0040b567
    LEA EAX,[ESP + 0x100]               ; 0040b56a
    PUSH EAX                            ; 0040b571
    LEA EAX,[ESP + 0x1dc]               ; 0040b572
    PUSH 0x40000000                     ; 0040b579
    PUSH EAX                            ; 0040b57e
    MOV EDX,dword ptr [EDI + 0x14c]     ; 0040b57f
    PUSH EDI                            ; 0040b585
    CALL dword ptr [EDX + 0xf8]         ; 0040b586
    ADD ESP,0x10                        ; 0040b58c
    FLDZ                                ; 0040b58f
    FLD float ptr [ESP + 0x104]         ; 0040b591
    FSTP double ptr [ESP + 0x8]         ; 0040b598
    FCOMP double ptr [ESP + 0x8]        ; 0040b59c
    FNSTSW AX                           ; 0040b5a0
    SAHF                                ; 0040b5a2
    JNC 0x0040b4bd                      ; 0040b5a3
        ;   XREF to: 0040b4bd (CONDITIONAL_JUMP)  ; LAB_0040b4bd
    FLD double ptr [ESP + 0x8]          ; 0040b5a9
    FMUL double ptr [0x00577809]        ; 0040b5ad | DOUBLE_00577809
    MOV EAX,dword ptr [EDI + 0x2608]    ; 0040b5b3
    FLD1                                ; 0040b5b9
    FADDP                               ; 0040b5bb
    PUSH EAX                            ; 0040b5bd
    CALL crt_math.c_round_FUN_00563a30  ; 0040b5be
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x28c]       ; 0040b5c3
    MOV EDX,dword ptr [ESP + 0x28c]     ; 0040b5ca
    PUSH EDX                            ; 0040b5d1
    LEA EAX,[ESP + 0x240]               ; 0040b5d2
    PUSH EAX                            ; 0040b5d9
    LEA EAX,[ESP + 0x1e4]               ; 0040b5da
    PUSH EAX                            ; 0040b5e1
    MOV ECX,dword ptr [0x005b96c4]      ; 0040b5e2 | INT_005b96c4
    PUSH ECX                            ; 0040b5e8
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004b0200 ; 0040b5e9
        ;   XREF to: 004b0200 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_CGore_spawnBloodBurst_FUN_004b0200()
    ADD ESP,0x14                        ; 0040b5ee
    PUSH EDI                            ; 0040b5f1
    LEA EAX,[ESP + 0x104]               ; 0040b5f2
    PUSH EAX                            ; 0040b5f9
    PUSH ESI                            ; 0040b5fa
    MOV EDX,dword ptr [EBX + 0x14c]     ; 0040b5fb
    PUSH EBX                            ; 0040b601
    CALL dword ptr [EDX + 0x78]         ; 0040b602
    ADD ESP,0x10                        ; 0040b605
    JMP 0x0040b4bd                      ; 0040b608
        ;   XREF to: 0040b4bd (UNCONDITIONAL_JUMP)  ; LAB_0040b4bd
    MOV ECX,dword ptr [0x02dd10bc]      ; 0040b60d | DAT_02dd10bc
        ;   Label: LAB_0040b60d
    PUSH ECX                            ; 0040b613
    MOV EDI,dword ptr [ESP + 0x280]     ; 0040b614
    PUSH EDI                            ; 0040b61b
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0040b61c
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    MOV EDI,EAX                         ; 0040b621
    ADD ESP,0x8                         ; 0040b623
    TEST EAX,EAX                        ; 0040b626
    JZ 0x0040b6ec                       ; 0040b628
        ;   XREF to: 0040b6ec (CONDITIONAL_JUMP)  ; LAB_0040b6ec
    PUSH EBX                            ; 0040b62e
    PUSH EAX                            ; 0040b62f
    CALL FUN_005485a0                   ; 0040b630
        ;   XREF to: 005485a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005485a0()
    ADD ESP,0x8                         ; 0040b635
    TEST EAX,EAX                        ; 0040b638
    JZ 0x0040b4bd                       ; 0040b63a
        ;   XREF to: 0040b4bd (CONDITIONAL_JUMP)  ; LAB_0040b4bd
    LEA EAX,[ESP + 0x1d8]               ; 0040b640
    PUSH 0x40000000                     ; 0040b647
    PUSH EAX                            ; 0040b64c
    LEA EAX,[ESP + 0x234]               ; 0040b64d
    PUSH EAX                            ; 0040b654
    PUSH EDI                            ; 0040b655
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 0040b656
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290()
    ADD ESP,0xc                         ; 0040b65b
    PUSH EAX                            ; 0040b65e
    LEA EAX,[ESP + 0x180]               ; 0040b65f
    PUSH EAX                            ; 0040b666
    MOV EDX,dword ptr [EDI + 0x14c]     ; 0040b667
    PUSH EDI                            ; 0040b66d
    CALL dword ptr [EDX + 0x14]         ; 0040b66e
    ADD ESP,0x8                         ; 0040b671
    PUSH EAX                            ; 0040b674
    CALL core_box.cpp_CBoundingBox3D_doesSphereIntersect_FUN_0041e200 ; 0040b675
        ;   XREF to: 0041e200 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBoundingBox3D_doesSphereIntersect_FUN_0041e200()
    ADD ESP,0xc                         ; 0040b67a
    TEST EAX,EAX                        ; 0040b67d
    JZ 0x0040b4bd                       ; 0040b67f
        ;   XREF to: 0040b4bd (CONDITIONAL_JUMP)  ; LAB_0040b4bd
    LEA EAX,[ESP + 0x10]                ; 0040b685
    PUSH EAX                            ; 0040b689
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 0040b68a
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0()
    ADD ESP,0x4                         ; 0040b68f
    PUSH EDI                            ; 0040b692
    LEA EAX,[ESP + 0x14]                ; 0040b693
    PUSH EAX                            ; 0040b697
    PUSH ESI                            ; 0040b698
    MOV EDX,dword ptr [EBX + 0x14c]     ; 0040b699
    PUSH EBX                            ; 0040b69f
    CALL dword ptr [EDX + 0x74]         ; 0040b6a0
    ADD ESP,0x10                        ; 0040b6a3
    PUSH EDI                            ; 0040b6a6
    FLD float ptr [ESP + 0x18]          ; 0040b6a7
    SUB ESP,0x8                         ; 0040b6ab
    FSTP double ptr [ESP]               ; 0040b6ae
    PUSH EBX                            ; 0040b6b1
    PUSH 0x5777bf                       ; 0040b6b2 | = "%s causing %5.2f damage to %s\n"
    MOV ECX,dword ptr [0x005ad350]      ; 0040b6b7 | PTR_DAT_005ad350
    PUSH ECX                            ; 0040b6bd | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 0040b6be
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0x18                        ; 0040b6c3
    PUSH dword ptr [ESP + 0x14]         ; 0040b6c6
    PUSH EDI                            ; 0040b6ca
    CALL core_trigger.cpp_CTrigger_applyDamage_FUN_005485e0 ; 0040b6cb
        ;   XREF to: 005485e0 (UNCONDITIONAL_CALL)  ; undefined core_trigger.cpp_CTrigger_applyDamage_FUN_005485e0()
    ADD ESP,0x8                         ; 0040b6d0
    PUSH EDI                            ; 0040b6d3
    LEA EAX,[ESP + 0x14]                ; 0040b6d4
    PUSH EAX                            ; 0040b6d8
    PUSH ESI                            ; 0040b6d9
    MOV EDX,dword ptr [EBX + 0x14c]     ; 0040b6da
    PUSH EBX                            ; 0040b6e0
    CALL dword ptr [EDX + 0x78]         ; 0040b6e1
    ADD ESP,0x10                        ; 0040b6e4
    JMP 0x0040b4bd                      ; 0040b6e7
        ;   XREF to: 0040b4bd (UNCONDITIONAL_JUMP)  ; LAB_0040b4bd
    MOV EAX,[0x01c78c78]                ; 0040b6ec | DAT_01c78c78
        ;   Label: LAB_0040b6ec
    PUSH EAX                            ; 0040b6f1
    MOV EDX,dword ptr [ESP + 0x280]     ; 0040b6f2
    PUSH EDX                            ; 0040b6f9
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0040b6fa
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    MOV EDI,EAX                         ; 0040b6ff
    ADD ESP,0x8                         ; 0040b701
    TEST EAX,EAX                        ; 0040b704
    JZ 0x0040b4bd                       ; 0040b706
        ;   XREF to: 0040b4bd (CONDITIONAL_JUMP)  ; LAB_0040b4bd
    LEA EAX,[ESP + 0x1d8]               ; 0040b70c
    PUSH 0x40000000                     ; 0040b713
    PUSH EAX                            ; 0040b718
    LEA EAX,[ESP + 0x228]               ; 0040b719
    PUSH EAX                            ; 0040b720
    PUSH EDI                            ; 0040b721
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 0040b722
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290()
    ADD ESP,0xc                         ; 0040b727
    PUSH EAX                            ; 0040b72a
    LEA EAX,[ESP + 0x1b0]               ; 0040b72b
    PUSH EAX                            ; 0040b732
    MOV EDX,dword ptr [EDI + 0x14c]     ; 0040b733
    PUSH EDI                            ; 0040b739
    CALL dword ptr [EDX + 0x14]         ; 0040b73a
    ADD ESP,0x8                         ; 0040b73d
    PUSH EAX                            ; 0040b740
    CALL core_box.cpp_CBoundingBox3D_doesSphereIntersect_FUN_0041e200 ; 0040b741
        ;   XREF to: 0041e200 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBoundingBox3D_doesSphereIntersect_FUN_0041e200()
    ADD ESP,0xc                         ; 0040b746
    TEST EAX,EAX                        ; 0040b749
    JZ 0x0040b4bd                       ; 0040b74b
        ;   XREF to: 0040b4bd (CONDITIONAL_JUMP)  ; LAB_0040b4bd
    LEA EAX,[ESP + 0x4c]                ; 0040b751
    PUSH EAX                            ; 0040b755
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 0040b756
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0()
    ADD ESP,0x4                         ; 0040b75b
    PUSH EDI                            ; 0040b75e
    LEA EDX,[ESP + 0x50]                ; 0040b75f
    PUSH EDX                            ; 0040b763
    PUSH ESI                            ; 0040b764
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0040b765
    PUSH EBX                            ; 0040b76b
    CALL dword ptr [EAX + 0x74]         ; 0040b76c
    ADD ESP,0x10                        ; 0040b76f
    PUSH EDI                            ; 0040b772
    LEA EAX,[ESP + 0x50]                ; 0040b773
    PUSH EAX                            ; 0040b777
    PUSH ESI                            ; 0040b778
    MOV EDX,dword ptr [EBX + 0x14c]     ; 0040b779
    PUSH EBX                            ; 0040b77f
    CALL dword ptr [EDX + 0x78]         ; 0040b780
    ADD ESP,0x10                        ; 0040b783
    PUSH EDI                            ; 0040b786
    CALL FUN_004aded0                   ; 0040b787
        ;   XREF to: 004aded0 (UNCONDITIONAL_CALL)  ; undefined FUN_004aded0()
    ADD ESP,0x4                         ; 0040b78c
    TEST EAX,EAX                        ; 0040b78f
    JZ 0x0040b4bd                       ; 0040b791
        ;   XREF to: 0040b4bd (CONDITIONAL_JUMP)  ; LAB_0040b4bd
    LEA EAX,[ESP + 0x1d8]               ; 0040b797
    PUSH EAX                            ; 0040b79e
    PUSH EDI                            ; 0040b79f
    CALL FUN_004ada20                   ; 0040b7a0
        ;   XREF to: 004ada20 (UNCONDITIONAL_CALL)  ; undefined FUN_004ada20()
    ADD ESP,0x8                         ; 0040b7a5
    JMP 0x0040b4bd                      ; 0040b7a8
        ;   XREF to: 0040b4bd (UNCONDITIONAL_JUMP)  ; LAB_0040b4bd
    MOV EDX,dword ptr [ESP + 0x25c]     ; 0040b7ad
        ;   Label: LAB_0040b7ad
    CMP EDX,0x1                         ; 0040b7b4
    JZ 0x0040b7c2                       ; 0040b7b7
        ;   XREF to: 0040b7c2 (CONDITIONAL_JUMP)  ; LAB_0040b7c2
    XOR EAX,EAX                         ; 0040b7b9
        ;   Label: LAB_0040b7b9
    MOV ESP,EBP                         ; 0040b7bb
    POP EBP                             ; 0040b7bd
    POP EDI                             ; 0040b7be
    POP ESI                             ; 0040b7bf
    POP EBX                             ; 0040b7c0
    RET                                 ; 0040b7c1
    PUSH EDX                            ; 0040b7c2
        ;   Label: LAB_0040b7c2
    MOV ECX,dword ptr [0x005be368]      ; 0040b7c3 | DAT_005be368
    PUSH ECX                            ; 0040b7c9 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00511800 ; 0040b7ca
        ;   XREF to: 00511800 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_setRayType_FUN_00511800()
    ADD ESP,0x8                         ; 0040b7cf
    PUSH EBX                            ; 0040b7d2
    MOV EDI,dword ptr [0x005be368]      ; 0040b7d3 | DAT_005be368
    PUSH EDI                            ; 0040b7d9 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 0040b7da
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_ignore_FUN_00511780()
    ADD ESP,0x8                         ; 0040b7df
    MOV EAX,[0x005be368]                ; 0040b7e2 | DAT_005be368
    PUSH EAX                            ; 0040b7e7 | DAT_01e57284
    CALL FUN_00511740                   ; 0040b7e8
        ;   XREF to: 00511740 (UNCONDITIONAL_CALL)  ; undefined FUN_00511740()
    ADD ESP,0x4                         ; 0040b7ed
    MOV EDX,dword ptr [ESP + 0x278]     ; 0040b7f0
    TEST EDX,EDX                        ; 0040b7f7
    JNZ 0x0040b974                      ; 0040b7f9
        ;   XREF to: 0040b974 (CONDITIONAL_JUMP)  ; LAB_0040b974
    XOR EAX,EAX                         ; 0040b7ff
        ;   Label: LAB_0040b7ff
    MOV dword ptr [ESP + 0x26c],EAX     ; 0040b801
    LEA EAX,[ESP + 0x1d8]               ; 0040b808
        ;   Label: LAB_0040b808
    PUSH EAX                            ; 0040b80f
    LEA EAX,[ESP + 0x1e8]               ; 0040b810
    PUSH EAX                            ; 0040b817
    MOV EDX,dword ptr [0x005be368]      ; 0040b818 | DAT_005be368
    PUSH EDX                            ; 0040b81e | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00 ; 0040b81f
        ;   XREF to: 0050fb00 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00()
    MOV dword ptr [ESP + 0x294],EAX     ; 0040b824
    FLD float ptr [ESP + 0x294]         ; 0040b82b
    ADD ESP,0xc                         ; 0040b832
    FLDZ                                ; 0040b835
    FXCH                                ; 0040b837
    FSTP double ptr [ESP]               ; 0040b839
    FCOMP double ptr [ESP]              ; 0040b83c
    FNSTSW AX                           ; 0040b83f
    SAHF                                ; 0040b841
    JA 0x0040b7b9                       ; 0040b842
        ;   XREF to: 0040b7b9 (CONDITIONAL_JUMP)  ; LAB_0040b7b9
    FLD1                                ; 0040b848
    FCOMP double ptr [ESP]              ; 0040b84a
    FNSTSW AX                           ; 0040b84d
    SAHF                                ; 0040b84f
    JC 0x0040b7b9                       ; 0040b850
        ;   XREF to: 0040b7b9 (CONDITIONAL_JUMP)  ; LAB_0040b7b9
    MOV ECX,dword ptr [0x00765a98]      ; 0040b856 | CDemonActorType_00765a60.name_hash
    MOV EAX,[0x005be368]                ; 0040b85c | DAT_005be368
    PUSH ECX                            ; 0040b861
    MOV EDI,dword ptr [EAX + 0x14cd5c]  ; 0040b862 | DAT_01fa3fe0
    PUSH EDI                            ; 0040b868
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0040b869
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 0040b86e
    MOV EDI,EAX                         ; 0040b871
    TEST EAX,EAX                        ; 0040b873
    JZ 0x0040b88d                       ; 0040b875
        ;   XREF to: 0040b88d (CONDITIONAL_JUMP)  ; LAB_0040b88d
    PUSH EAX                            ; 0040b877
    MOV EDX,dword ptr [EAX + 0x14c]     ; 0040b878
    CALL dword ptr [EDX + 0x104]        ; 0040b87e
    ADD ESP,0x4                         ; 0040b884
    TEST EAX,EAX                        ; 0040b887
    JLE 0x0040b88d                      ; 0040b889
        ;   XREF to: 0040b88d (CONDITIONAL_JUMP)  ; LAB_0040b88d
    XOR EDI,EDI                         ; 0040b88b
    MOV EAX,[0x01c78c78]                ; 0040b88d | DAT_01c78c78
        ;   Label: LAB_0040b88d
    PUSH EAX                            ; 0040b892
    MOV EAX,[0x005be368]                ; 0040b893 | DAT_005be368
    MOV EDX,dword ptr [EAX + 0x14cd5c]  ; 0040b898 | DAT_01fa3fe0
    PUSH EDX                            ; 0040b89e
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0040b89f
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    MOV dword ptr [ESP + 0x28c],EAX     ; 0040b8a4
    ADD ESP,0x8                         ; 0040b8ab
    MOV ECX,dword ptr [0x02dd10bc]      ; 0040b8ae | DAT_02dd10bc
    MOV EAX,[0x005be368]                ; 0040b8b4 | DAT_005be368
    PUSH ECX                            ; 0040b8b9
    MOV EDX,dword ptr [EAX + 0x14cd5c]  ; 0040b8ba | DAT_01fa3fe0
    PUSH EDX                            ; 0040b8c0
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0040b8c1
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    MOV dword ptr [ESP + 0x288],EAX     ; 0040b8c6
    ADD ESP,0x8                         ; 0040b8cd
    MOV ECX,dword ptr [0x0077bd78]      ; 0040b8d0 | CDemonActorType_0077bd40.name_hash
    MOV dword ptr [ESP + 0x260],EAX     ; 0040b8d6
    MOV EAX,[0x005be368]                ; 0040b8dd | DAT_005be368
    PUSH ECX                            ; 0040b8e2
    MOV EDX,dword ptr [EAX + 0x14cd5c]  ; 0040b8e3 | DAT_01fa3fe0
    PUSH EDX                            ; 0040b8e9
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0040b8ea
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    MOV dword ptr [ESP + 0x26c],EAX     ; 0040b8ef
    ADD ESP,0x8                         ; 0040b8f6
    MOV ECX,dword ptr [0x01c7068c]      ; 0040b8f9 | DAT_01c7068c
    MOV EAX,[0x005be368]                ; 0040b8ff | DAT_005be368
    PUSH ECX                            ; 0040b904
    MOV EDX,dword ptr [EAX + 0x14cd5c]  ; 0040b905 | DAT_01fa3fe0
    PUSH EDX                            ; 0040b90b
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0040b90c
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 0040b911
    TEST EDI,EDI                        ; 0040b914
    JZ 0x0040bb37                       ; 0040b916
        ;   XREF to: 0040bb37 (CONDITIONAL_JUMP)  ; LAB_0040bb37
    CMP dword ptr [ESP + 0x278],0x0     ; 0040b91c
    JZ 0x0040b989                       ; 0040b924
        ;   XREF to: 0040b989 (CONDITIONAL_JUMP)  ; LAB_0040b989
    PUSH EDI                            ; 0040b926
    MOV EAX,dword ptr [EDI + 0x14c]     ; 0040b927
    CALL dword ptr [EAX + 0xd8]         ; 0040b92d
    ADD ESP,0x4                         ; 0040b933
    TEST EAX,EAX                        ; 0040b936
    JZ 0x0040b989                       ; 0040b938
        ;   XREF to: 0040b989 (CONDITIONAL_JUMP)  ; LAB_0040b989
    PUSH 0x5777de                       ; 0040b93a | = "CHero"
    MOV EDX,dword ptr [ESP + 0x27c]     ; 0040b93f
    PUSH EDX                            ; 0040b946
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 0040b947
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 0040b94c
    TEST EAX,EAX                        ; 0040b94f
    JZ 0x0040b989                       ; 0040b951
        ;   XREF to: 0040b989 (CONDITIONAL_JUMP)  ; LAB_0040b989
    MOV EDI,dword ptr [ESP + 0x26c]     ; 0040b953
        ;   Label: LAB_0040b953
    INC EDI                             ; 0040b95a
    MOV dword ptr [ESP + 0x26c],EDI     ; 0040b95b
    CMP EDI,0x4                         ; 0040b962
    JL 0x0040b808                       ; 0040b965
        ;   XREF to: 0040b808 (CONDITIONAL_JUMP)  ; LAB_0040b808
    XOR EAX,EAX                         ; 0040b96b
    MOV ESP,EBP                         ; 0040b96d
    POP EBP                             ; 0040b96f
    POP EDI                             ; 0040b970
    POP ESI                             ; 0040b971
    POP EBX                             ; 0040b972
    RET                                 ; 0040b973
    PUSH EDX                            ; 0040b974
        ;   Label: LAB_0040b974
    MOV EDI,dword ptr [0x005be368]      ; 0040b975 | DAT_005be368
    PUSH EDI                            ; 0040b97b | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 0040b97c
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_ignore_FUN_00511780()
    ADD ESP,0x8                         ; 0040b981
    JMP 0x0040b7ff                      ; 0040b984
        ;   XREF to: 0040b7ff (UNCONDITIONAL_JUMP)  ; LAB_0040b7ff
    LEA EAX,[ESP + 0x88]                ; 0040b989
        ;   Label: LAB_0040b989
    PUSH EAX                            ; 0040b990
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 0040b991
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0()
    MOV EAX,[0x005be368]                ; 0040b996 | DAT_005be368
    ADD ESP,0x4                         ; 0040b99b
    MOV EAX,dword ptr [EAX + 0x14cd60]  ; 0040b99e | DAT_01fa3fe4
    PUSH EDI                            ; 0040b9a4
    MOV dword ptr [ESP + 0x8c],EAX      ; 0040b9a5
    LEA EAX,[ESP + 0x8c]                ; 0040b9ac
    PUSH EAX                            ; 0040b9b3
    PUSH ESI                            ; 0040b9b4
    MOV EDX,dword ptr [EBX + 0x14c]     ; 0040b9b5
    PUSH EBX                            ; 0040b9bb
    CALL dword ptr [EDX + 0x74]         ; 0040b9bc
    MOV EDX,dword ptr [0x005be368]      ; 0040b9bf | DAT_005be368
    LEA EAX,[EDX + 0x14cd34]            ; 0040b9c5
    FLD float ptr [EAX]                 ; 0040b9cb | DAT_01fa3fb8
    FSUB float ptr [EDX + 0x14cd28]     ; 0040b9cd | DAT_01fa3fac
    ADD ESP,0x10                        ; 0040b9d3
    FSTP float ptr [ESP + 0x214]        ; 0040b9d6
    FLD float ptr [EAX + 0x4]           ; 0040b9dd | DAT_01fa3fbc
    FSUB float ptr [EDX + 0x14cd2c]     ; 0040b9e0 | DAT_01fa3fb0
    FST float ptr [ESP + 0x218]         ; 0040b9e6
    FMUL float ptr [ESP + 0x218]        ; 0040b9ed
    FLD float ptr [ESP + 0x214]         ; 0040b9f4
    FMUL ST0                            ; 0040b9fb
    FLD float ptr [EAX + 0x8]           ; 0040b9fd | DAT_01fa3fc0
    FSUB float ptr [EDX + 0x14cd30]     ; 0040ba00 | DAT_01fa3fb4
    FXCH                                ; 0040ba06
    FADDP ST2,ST0                       ; 0040ba08
    FST float ptr [ESP + 0x21c]         ; 0040ba0a
    FMUL float ptr [ESP + 0x21c]        ; 0040ba11
    FADDP                               ; 0040ba18
    FSQRT                               ; 0040ba1a
    FDIVR double ptr [0x00577811]       ; 0040ba1c | DOUBLE_00577811
    FLD float ptr [ESP + 0x214]         ; 0040ba22
    FXCH                                ; 0040ba29
    FSTP float ptr [ESP + 0x274]        ; 0040ba2b
    FMUL float ptr [ESP + 0x274]        ; 0040ba32
    FLD float ptr [ESP + 0x218]         ; 0040ba39
    FMUL float ptr [ESP + 0x274]        ; 0040ba40
    FLD float ptr [ESP + 0x21c]         ; 0040ba47
    FMUL float ptr [ESP + 0x274]        ; 0040ba4e
    LEA EDX,[ESP + 0x244]               ; 0040ba55
    LEA EAX,[ESP + 0x94]                ; 0040ba5c
    FXCH ST2                            ; 0040ba63
    FSTP float ptr [ESP + 0x244]        ; 0040ba65
    FSTP float ptr [ESP + 0x248]        ; 0040ba6c
    FSTP float ptr [ESP + 0x24c]        ; 0040ba73
    CMP EAX,EDX                         ; 0040ba7a
    JZ 0x0040baa8                       ; 0040ba7c
        ;   XREF to: 0040baa8 (CONDITIONAL_JUMP)  ; LAB_0040baa8
    MOV EAX,dword ptr [ESP + 0x244]     ; 0040ba7e
    MOV dword ptr [ESP + 0x94],EAX      ; 0040ba85
    MOV EAX,dword ptr [ESP + 0x248]     ; 0040ba8c
    MOV dword ptr [ESP + 0x98],EAX      ; 0040ba93
    MOV EAX,dword ptr [ESP + 0x24c]     ; 0040ba9a
    MOV dword ptr [ESP + 0x9c],EAX      ; 0040baa1
    MOV EAX,[0x005be368]                ; 0040baa8 | DAT_005be368
        ;   Label: LAB_0040baa8
    ADD EAX,0x14cd50                    ; 0040baad
    PUSH EAX                            ; 0040bab2
    LEA EAX,[ESP + 0x254]               ; 0040bab3
    PUSH EAX                            ; 0040baba
    PUSH EDI                            ; 0040babb
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 0040babc
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290()
    MOV EDX,EAX                         ; 0040bac1
    LEA EAX,[ESP + 0xb0]                ; 0040bac3
    ADD ESP,0xc                         ; 0040baca
    CMP EAX,EDX                         ; 0040bacd
    JZ 0x0040baee                       ; 0040bacf
        ;   XREF to: 0040baee (CONDITIONAL_JUMP)  ; LAB_0040baee
    MOV EAX,dword ptr [EDX]             ; 0040bad1
    MOV dword ptr [ESP + 0xa4],EAX      ; 0040bad3
    MOV EAX,dword ptr [EDX + 0x4]       ; 0040bada
    MOV dword ptr [ESP + 0xa8],EAX      ; 0040badd
    MOV EAX,dword ptr [EDX + 0x8]       ; 0040bae4
    MOV dword ptr [ESP + 0xac],EAX      ; 0040bae7
    LEA EDX,[ESP + 0x88]                ; 0040baee
        ;   Label: LAB_0040baee
    PUSH EDX                            ; 0040baf5
    MOV EAX,dword ptr [EDI + 0x14c]     ; 0040baf6
    PUSH EDI                            ; 0040bafc
    CALL dword ptr [EAX + 0x100]        ; 0040bafd
    ADD ESP,0x8                         ; 0040bb03
    PUSH EDI                            ; 0040bb06
    LEA EDX,[ESP + 0x8c]                ; 0040bb07
    PUSH EDX                            ; 0040bb0e
    PUSH ESI                            ; 0040bb0f
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0040bb10
    PUSH EBX                            ; 0040bb16
    CALL dword ptr [EAX + 0x78]         ; 0040bb17
    MOV EAX,[0x005be368]                ; 0040bb1a | DAT_005be368
    ADD ESP,0x10                        ; 0040bb1f
    MOV ECX,dword ptr [EAX + 0x14cd5c]  ; 0040bb22 | DAT_01fa3fe0
    PUSH ECX                            ; 0040bb28
    PUSH EAX                            ; 0040bb29 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 0040bb2a
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_ignore_FUN_00511780()
    ADD ESP,0x8                         ; 0040bb2f
    JMP 0x0040b953                      ; 0040bb32
        ;   XREF to: 0040b953 (UNCONDITIONAL_JUMP)  ; LAB_0040b953
    CMP dword ptr [ESP + 0x284],0x0     ; 0040bb37
        ;   Label: LAB_0040bb37
    JNZ 0x0040bb75                      ; 0040bb3f
        ;   XREF to: 0040bb75 (CONDITIONAL_JUMP)  ; LAB_0040bb75
    MOV EDI,dword ptr [ESP + 0x280]     ; 0040bb41
    TEST EDI,EDI                        ; 0040bb48
    JNZ 0x0040bbe4                      ; 0040bb4a
        ;   XREF to: 0040bbe4 (CONDITIONAL_JUMP)  ; LAB_0040bbe4
    MOV EDX,dword ptr [ESP + 0x264]     ; 0040bb50
    TEST EDX,EDX                        ; 0040bb57
    JNZ 0x0040bc86                      ; 0040bb59
        ;   XREF to: 0040bc86 (CONDITIONAL_JUMP)  ; LAB_0040bc86
    TEST EAX,EAX                        ; 0040bb5f
    JZ 0x0040b7b9                       ; 0040bb61
        ;   XREF to: 0040b7b9 (CONDITIONAL_JUMP)  ; LAB_0040b7b9
    PUSH EAX                            ; 0040bb67
    CALL core_flamecan.cpp_CFlameCan_ignite_FUN_0048e550 ; 0040bb68
        ;   XREF to: 0048e550 (UNCONDITIONAL_CALL)  ; undefined core_flamecan.cpp_CFlameCan_ignite_FUN_0048e550()
    ADD ESP,0x4                         ; 0040bb6d
    JMP 0x0040b953                      ; 0040bb70
        ;   XREF to: 0040b953 (UNCONDITIONAL_JUMP)  ; LAB_0040b953
    LEA EAX,[ESP + 0xc4]                ; 0040bb75
        ;   Label: LAB_0040bb75
    PUSH EAX                            ; 0040bb7c
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 0040bb7d
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0()
    ADD ESP,0x4                         ; 0040bb82
    MOV EDI,dword ptr [ESP + 0x284]     ; 0040bb85
    PUSH EDI                            ; 0040bb8c
    LEA EAX,[ESP + 0xc8]                ; 0040bb8d
    PUSH EAX                            ; 0040bb94
    PUSH ESI                            ; 0040bb95
    MOV EDX,dword ptr [EBX + 0x14c]     ; 0040bb96
    PUSH EBX                            ; 0040bb9c
    CALL dword ptr [EDX + 0x74]         ; 0040bb9d
    ADD ESP,0x10                        ; 0040bba0
    PUSH EDI                            ; 0040bba3
    LEA EDX,[ESP + 0xc8]                ; 0040bba4
    PUSH EDX                            ; 0040bbab
    PUSH ESI                            ; 0040bbac
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0040bbad
    PUSH EBX                            ; 0040bbb3
    CALL dword ptr [EAX + 0x78]         ; 0040bbb4
    ADD ESP,0x10                        ; 0040bbb7
    PUSH EDI                            ; 0040bbba
    CALL FUN_004aded0                   ; 0040bbbb
        ;   XREF to: 004aded0 (UNCONDITIONAL_CALL)  ; undefined FUN_004aded0()
    ADD ESP,0x4                         ; 0040bbc0
    TEST EAX,EAX                        ; 0040bbc3
    JZ 0x0040b7b9                       ; 0040bbc5
        ;   XREF to: 0040b7b9 (CONDITIONAL_JUMP)  ; LAB_0040b7b9
    MOV EAX,[0x005be368]                ; 0040bbcb | DAT_005be368
    ADD EAX,0x14cd50                    ; 0040bbd0
    PUSH EAX                            ; 0040bbd5
    PUSH EDI                            ; 0040bbd6
    CALL FUN_004ada20                   ; 0040bbd7
        ;   XREF to: 004ada20 (UNCONDITIONAL_CALL)  ; undefined FUN_004ada20()
    ADD ESP,0x8                         ; 0040bbdc
    JMP 0x0040b953                      ; 0040bbdf
        ;   XREF to: 0040b953 (UNCONDITIONAL_JUMP)  ; LAB_0040b953
    PUSH EBX                            ; 0040bbe4
        ;   Label: LAB_0040bbe4
    PUSH EDI                            ; 0040bbe5
    CALL FUN_005485a0                   ; 0040bbe6
        ;   XREF to: 005485a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005485a0()
    ADD ESP,0x8                         ; 0040bbeb
    TEST EAX,EAX                        ; 0040bbee
    JZ 0x0040bc6a                       ; 0040bbf0
        ;   XREF to: 0040bc6a (CONDITIONAL_JUMP)  ; LAB_0040bc6a
    LEA EAX,[ESP + 0x13c]               ; 0040bbf2
    PUSH EAX                            ; 0040bbf9
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 0040bbfa
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0()
    ADD ESP,0x4                         ; 0040bbff
    PUSH EDI                            ; 0040bc02
    LEA EAX,[ESP + 0x140]               ; 0040bc03
    PUSH EAX                            ; 0040bc0a
    PUSH ESI                            ; 0040bc0b
    MOV EDX,dword ptr [EBX + 0x14c]     ; 0040bc0c
    PUSH EBX                            ; 0040bc12
    CALL dword ptr [EDX + 0x74]         ; 0040bc13
    ADD ESP,0x10                        ; 0040bc16
    PUSH EDI                            ; 0040bc19
    FLD float ptr [ESP + 0x144]         ; 0040bc1a
    SUB ESP,0x8                         ; 0040bc21
    FSTP double ptr [ESP]               ; 0040bc24
    PUSH EBX                            ; 0040bc27
    PUSH 0x5777e4                       ; 0040bc28 | = "%s causing %5.2f damage to %s\n"
    MOV ECX,dword ptr [0x005ad350]      ; 0040bc2d | PTR_DAT_005ad350
    PUSH ECX                            ; 0040bc33 | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 0040bc34
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0x18                        ; 0040bc39
    PUSH dword ptr [ESP + 0x140]        ; 0040bc3c
    PUSH EDI                            ; 0040bc43
    CALL core_trigger.cpp_CTrigger_applyDamage_FUN_005485e0 ; 0040bc44
        ;   XREF to: 005485e0 (UNCONDITIONAL_CALL)  ; undefined core_trigger.cpp_CTrigger_applyDamage_FUN_005485e0()
    ADD ESP,0x8                         ; 0040bc49
    MOV EAX,dword ptr [ESP + 0x284]     ; 0040bc4c
    PUSH EAX                            ; 0040bc53
    LEA EAX,[ESP + 0x140]               ; 0040bc54
    PUSH EAX                            ; 0040bc5b
    PUSH ESI                            ; 0040bc5c
    MOV EDX,dword ptr [EBX + 0x14c]     ; 0040bc5d
    PUSH EBX                            ; 0040bc63
    CALL dword ptr [EDX + 0x78]         ; 0040bc64
    ADD ESP,0x10                        ; 0040bc67
    MOV EDX,dword ptr [ESP + 0x260]     ; 0040bc6a
        ;   Label: LAB_0040bc6a
    PUSH EDX                            ; 0040bc71
    MOV ECX,dword ptr [0x005be368]      ; 0040bc72 | DAT_005be368
    PUSH ECX                            ; 0040bc78 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 0040bc79
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_ignore_FUN_00511780()
    ADD ESP,0x8                         ; 0040bc7e
    JMP 0x0040b953                      ; 0040bc81
        ;   XREF to: 0040b953 (UNCONDITIONAL_JUMP)  ; LAB_0040b953
    PUSH EDX                            ; 0040bc86
        ;   Label: LAB_0040bc86
    CALL core_crate.cpp_CCrate_explode_FUN_0043cdb0 ; 0040bc87
        ;   XREF to: 0043cdb0 (UNCONDITIONAL_CALL)  ; undefined core_crate.cpp_CCrate_explode_FUN_0043cdb0()
    ADD ESP,0x4                         ; 0040bc8c
    JMP 0x0040b953                      ; 0040bc8f
        ;   XREF to: 0040b953 (UNCONDITIONAL_JUMP)  ; LAB_0040b953

