; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_doc_cpp_FUN_0045d2c0(CCharacter *param_1)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_doc.cpp_FUN_00450c60 at 00451ac2
;
; Referenced Globals:
;   void* switchdataD_0045d27c = 0045d3c3
;   undefined4 s_swordswing0_wav_005d07de+1
;   undefined4 DAT_005d07f7
;   undefined4 DAT_005d07ff
;   undefined4 DAT_0061c068
;   undefined4 g_CAmmoClassInfo.name_hash
;   undefined4 g_CWeaponClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_ammo.cpp_FUN_0040e450
;   core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
;   core_sound.cpp_CSound_playActorSound_FUN_0055ae50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045d2c0
        ;   Label: core_doc.cpp_FUN_0045d2c0
    PUSH ESI                            ; 0045d2c1
    PUSH EDI                            ; 0045d2c2
    PUSH EBP                            ; 0045d2c3
    MOV EBP,ESP                         ; 0045d2c4
    SUB ESP,0xc                         ; 0045d2c6
    MOV EBX,dword ptr [EBP + 0x14]      ; 0045d2c9
    MOV EDX,dword ptr [EBX + 0x10a74]   ; 0045d2cc
    MOV dword ptr [EBX + 0x256a0],0x0   ; 0045d2d2
    TEST EDX,EDX                        ; 0045d2dc
    JZ 0x0045d3e7                       ; 0045d2de
        ;   XREF to: 0045d3e7 (CONDITIONAL_JUMP)  ; LAB_0045d3e7
    CMP dword ptr [EBX + 0x276c],0x0    ; 0045d2e4
    JNZ 0x0045d3e7                      ; 0045d2eb
        ;   XREF to: 0045d3e7 (CONDITIONAL_JUMP)  ; LAB_0045d3e7
    CMP dword ptr [EBX + 0x256a4],0x0   ; 0045d2f1
    JNZ 0x0045d3e7                      ; 0045d2f8
        ;   XREF to: 0045d3e7 (CONDITIONAL_JUMP)  ; LAB_0045d3e7
    TEST EDX,EDX                        ; 0045d2fe
    JZ 0x0045d30f                       ; 0045d300
        ;   XREF to: 0045d30f (CONDITIONAL_JUMP)  ; LAB_0045d30f
    CMP dword ptr [EBX + 0x25640],0x0   ; 0045d302
    JZ 0x0045d3e7                       ; 0045d309
        ;   XREF to: 0045d3e7 (CONDITIONAL_JUMP)  ; LAB_0045d3e7
    MOV ESI,dword ptr [EBX + 0x25698]   ; 0045d30f
        ;   Label: LAB_0045d30f
    TEST ESI,ESI                        ; 0045d315
    JNZ 0x0045d3ee                      ; 0045d317
        ;   XREF to: 0045d3ee (CONDITIONAL_JUMP)  ; LAB_0045d3ee
    MOV ESI,dword ptr [EBX + 0x2698]    ; 0045d31d
    TEST ESI,ESI                        ; 0045d323
        ;   Label: LAB_0045d323
    JNZ 0x0045d41d                      ; 0045d325
        ;   XREF to: 0045d41d (CONDITIONAL_JUMP)  ; LAB_0045d41d
    MOV EDX,dword ptr [EBX + 0x25698]   ; 0045d32b
        ;   Label: LAB_0045d32b
    TEST EDX,EDX                        ; 0045d331
    JZ 0x0045d3e7                       ; 0045d333
        ;   XREF to: 0045d3e7 (CONDITIONAL_JUMP)  ; LAB_0045d3e7
    MOV ECX,dword ptr [EDX + 0x43c]     ; 0045d339
    MOV EAX,EDX                         ; 0045d33f
    CMP ECX,0x3                         ; 0045d341
    JZ 0x0045d3e7                       ; 0045d344
        ;   XREF to: 0045d3e7 (CONDITIONAL_JUMP)  ; LAB_0045d3e7
    CMP dword ptr [EBX + 0x24378],0x0   ; 0045d34a
    JNZ 0x0045d395                      ; 0045d351
        ;   XREF to: 0045d395 (CONDITIONAL_JUMP)  ; LAB_0045d395
    TEST ECX,ECX                        ; 0045d353
    JNZ 0x0045d395                      ; 0045d355
        ;   XREF to: 0045d395 (CONDITIONAL_JUMP)  ; LAB_0045d395
    LEA EAX,[EBX + 0x25654]             ; 0045d357
    MOV EDX,dword ptr [EBX + 0x2569c]   ; 0045d35d
    LEA ESI,[EBX + 0x25674]             ; 0045d363
    TEST EDX,EDX                        ; 0045d369
    JZ 0x0045d547                       ; 0045d36b
        ;   XREF to: 0045d547 (CONDITIONAL_JUMP)  ; LAB_0045d547
    MOV EDX,ESI                         ; 0045d371
    MOV ECX,dword ptr [EAX + 0x1c]      ; 0045d373
        ;   Label: LAB_0045d373
    CMP ECX,0x2                         ; 0045d376
    JNZ 0x0045d395                      ; 0045d379
        ;   XREF to: 0045d395 (CONDITIONAL_JUMP)  ; LAB_0045d395
    CMP ECX,dword ptr [EDX + 0x1c]      ; 0045d37b
    JZ 0x0045d395                       ; 0045d37e
        ;   XREF to: 0045d395 (CONDITIONAL_JUMP)  ; LAB_0045d395
    CMP dword ptr [EBX + 0x2569c],0x0   ; 0045d380
    SETZ AL                             ; 0045d387
    AND EAX,0xff                        ; 0045d38a
    MOV dword ptr [EBX + 0x2569c],EAX   ; 0045d38f
    MOV EAX,dword ptr [EBX + 0x25698]   ; 0045d395
        ;   Label: LAB_0045d395
    MOV dword ptr [EBX + 0x2569c],0x1   ; 0045d39b
    TEST EAX,EAX                        ; 0045d3a5
    JZ 0x0045d582                       ; 0045d3a7
        ;   XREF to: 0045d582 (CONDITIONAL_JUMP)  ; caseD_c
    MOV EAX,dword ptr [EAX + 0x43c]     ; 0045d3ad
    CMP EAX,0xd                         ; 0045d3b3
    JA 0x0045d582                       ; 0045d3b6
        ;   XREF to: 0045d582 (CONDITIONAL_JUMP)  ; caseD_c
    JMP dword ptr [EAX*0x4 + 0x45d27c]  ; 0045d3bc | caseD_5 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,0x2                         ; 0045d3c3
        ;   Label: caseD_0
    PUSH EAX                            ; 0045d3c8
        ;   Label: LAB_0045d3c8
    PUSH EBX                            ; 0045d3c9
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0 ; 0045d3ca
        ;   XREF to: 0042a5a0 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(CCharacter * this_ptr, int state_index)
    MOV dword ptr [EBP + -0x4],EAX      ; 0045d3cf
    ADD ESP,0x8                         ; 0045d3d2
    FLD float ptr [EBP + -0x4]          ; 0045d3d5
    FCOMP double ptr [0x005d07f7]       ; 0045d3d8 | DAT_005d07f7
    FNSTSW AX                           ; 0045d3de
    SAHF                                ; 0045d3e0
    JNC 0x0045d589                      ; 0045d3e1
        ;   XREF to: 0045d589 (CONDITIONAL_JUMP)  ; LAB_0045d589
    MOV ESP,EBP                         ; 0045d3e7
        ;   Label: LAB_0045d3e7
    POP EBP                             ; 0045d3e9
    POP EDI                             ; 0045d3ea
    POP ESI                             ; 0045d3eb
    POP EBX                             ; 0045d3ec
    RET                                 ; 0045d3ed
    MOV EDX,dword ptr [ESI + 0x43c]     ; 0045d3ee
        ;   Label: LAB_0045d3ee
    CMP EDX,0x7                         ; 0045d3f4
    JZ 0x0045d323                       ; 0045d3f7
        ;   XREF to: 0045d323 (CONDITIONAL_JUMP)  ; LAB_0045d323
    CMP EDX,0x6                         ; 0045d3fd
    JZ 0x0045d323                       ; 0045d400
        ;   XREF to: 0045d323 (CONDITIONAL_JUMP)  ; LAB_0045d323
    CMP EDX,0x8                         ; 0045d406
    JZ 0x0045d323                       ; 0045d409
        ;   XREF to: 0045d323 (CONDITIONAL_JUMP)  ; LAB_0045d323
    CMP EDX,0xd                         ; 0045d40f
    JZ 0x0045d323                       ; 0045d412
        ;   XREF to: 0045d323 (CONDITIONAL_JUMP)  ; LAB_0045d323
    JMP 0x0045d32b                      ; 0045d418
        ;   XREF to: 0045d32b (UNCONDITIONAL_JUMP)  ; LAB_0045d32b
    PUSH ESI                            ; 0045d41d
        ;   Label: LAB_0045d41d
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 0045d41e
    CALL dword ptr [EAX + 0x7c]         ; 0045d424
    ADD ESP,0x4                         ; 0045d427
    MOV dword ptr [EBP + -0xc],EAX      ; 0045d42a
    TEST EAX,EAX                        ; 0045d42d
    JZ 0x0045d32b                       ; 0045d42f
        ;   XREF to: 0045d32b (CONDITIONAL_JUMP)  ; LAB_0045d32b
    MOV EAX,[0x02661f38]                ; 0045d435 | g_CWeaponClassInfo.name_hash
    PUSH EAX                            ; 0045d43a
    PUSH ESI                            ; 0045d43b
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0045d43c
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 0045d441
    MOV EDX,EAX                         ; 0045d444
    TEST EAX,EAX                        ; 0045d446
    JZ 0x0045d3e7                       ; 0045d448
        ;   XREF to: 0045d3e7 (CONDITIONAL_JUMP)  ; LAB_0045d3e7
    CMP dword ptr [EAX + 0x43c],0x6     ; 0045d44a
    JNZ 0x0045d48e                      ; 0045d451
        ;   XREF to: 0045d48e (CONDITIONAL_JUMP)  ; LAB_0045d48e
    XOR EDI,EDI                         ; 0045d453
    XOR ECX,ECX                         ; 0045d455
    MOV ESI,dword ptr [EBX + 0x256a8]   ; 0045d457
        ;   Label: LAB_0045d457
    INC ESI                             ; 0045d45d
    MOV dword ptr [EBX + 0x256a8],ESI   ; 0045d45e
    CMP ECX,ESI                         ; 0045d464
    JLE 0x0045d4cb                      ; 0045d466
        ;   XREF to: 0045d4cb (CONDITIONAL_JUMP)  ; LAB_0045d4cb
    MOV dword ptr [EBX + 0x256a8],ECX   ; 0045d468
        ;   Label: LAB_0045d468
    MOV EAX,dword ptr [EBX + 0x256a8]   ; 0045d46e
        ;   Label: LAB_0045d46e
    ADD EAX,0x4                         ; 0045d474
    MOV ESI,ECX                         ; 0045d477
    CMP EAX,0x5                         ; 0045d479
    JNC 0x0045d4d2                      ; 0045d47c
        ;   XREF to: 0045d4d2 (CONDITIONAL_JUMP)  ; LAB_0045d4d2
    CMP EAX,0x4                         ; 0045d47e
    JNZ 0x0045d4d9                      ; 0045d481
        ;   XREF to: 0045d4d9 (CONDITIONAL_JUMP)  ; LAB_0045d4d9
    CMP ECX,dword ptr [EBP + -0xc]      ; 0045d483
        ;   Label: LAB_0045d483
    JNZ 0x0045d4df                      ; 0045d486
        ;   XREF to: 0045d4df (CONDITIONAL_JUMP)  ; LAB_0045d4df
    INC EDI                             ; 0045d488
        ;   Label: LAB_0045d488
    CMP EDI,0x14                        ; 0045d489
    JL 0x0045d457                       ; 0045d48c
        ;   XREF to: 0045d457 (CONDITIONAL_JUMP)  ; LAB_0045d457
    MOV ECX,dword ptr [EDX + 0x43c]     ; 0045d48e
        ;   Label: LAB_0045d48e
    CMP ECX,0x8                         ; 0045d494
    JZ 0x0045d522                       ; 0045d497
        ;   XREF to: 0045d522 (CONDITIONAL_JUMP)  ; LAB_0045d522
    CMP ECX,0xd                         ; 0045d49d
    JNZ 0x0045d3e7                      ; 0045d4a0
        ;   XREF to: 0045d3e7 (CONDITIONAL_JUMP)  ; LAB_0045d3e7
    MOV dword ptr [EBX + 0x2d08],0x0    ; 0045d4a6
    MOV dword ptr [EBX + 0x256a4],0x7   ; 0045d4b0
    MOV dword ptr [EBX + 0x2d04],0x8    ; 0045d4ba
    MOV ESP,EBP                         ; 0045d4c4
    POP EBP                             ; 0045d4c6
    POP EDI                             ; 0045d4c7
    POP ESI                             ; 0045d4c8
    POP EBX                             ; 0045d4c9
    RET                                 ; 0045d4ca
    CMP ESI,0x2                         ; 0045d4cb
        ;   Label: LAB_0045d4cb
    JL 0x0045d46e                       ; 0045d4ce
        ;   XREF to: 0045d46e (CONDITIONAL_JUMP)  ; LAB_0045d46e
    JMP 0x0045d468                      ; 0045d4d0
        ;   XREF to: 0045d468 (UNCONDITIONAL_JUMP)  ; LAB_0045d468
    JBE 0x0045d483                      ; 0045d4d2
        ;   XREF to: 0045d483 (CONDITIONAL_JUMP)  ; LAB_0045d483
        ;   Label: LAB_0045d4d2
    CMP EAX,0x6                         ; 0045d4d4
    JZ 0x0045d483                       ; 0045d4d7
        ;   XREF to: 0045d483 (CONDITIONAL_JUMP)  ; LAB_0045d483
    TEST ESI,ESI                        ; 0045d4d9
        ;   Label: LAB_0045d4d9
    JNZ 0x0045d483                      ; 0045d4db
        ;   XREF to: 0045d483 (CONDITIONAL_JUMP)  ; LAB_0045d483
    JMP 0x0045d488                      ; 0045d4dd
        ;   XREF to: 0045d488 (UNCONDITIONAL_JUMP)  ; LAB_0045d488
    MOV EAX,dword ptr [EBX + 0x256a8]   ; 0045d4df
        ;   Label: LAB_0045d4df
    ADD EAX,0x4                         ; 0045d4e5
    MOV dword ptr [EBX + 0x2d04],EAX    ; 0045d4e8
    LEA EAX,[EBX + 0x20]                ; 0045d4ee
    PUSH EAX                            ; 0045d4f1
    PUSH 0x5d07df                       ; 0045d4f2 | s_swordswing0_wav_005d07de+1
    PUSH EBX                            ; 0045d4f7
    MOV EDX,dword ptr [0x0061c068]      ; 0045d4f8 | DAT_0061c068
    MOV dword ptr [EBX + 0x2d08],0x0    ; 0045d4fe
    PUSH EDX                            ; 0045d508
    MOV dword ptr [EBX + 0x256a4],0x7   ; 0045d509
    CALL core_sound.cpp_CSound_playActorSound_FUN_0055ae50 ; 0045d513
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0055ae50(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 0045d518
    MOV ESP,EBP                         ; 0045d51b
    POP EBP                             ; 0045d51d
    POP EDI                             ; 0045d51e
    POP ESI                             ; 0045d51f
    POP EBX                             ; 0045d520
    RET                                 ; 0045d521
    MOV dword ptr [EBX + 0x2d08],0x0    ; 0045d522
        ;   Label: LAB_0045d522
    MOV dword ptr [EBX + 0x256a4],0x7   ; 0045d52c
    MOV dword ptr [EBX + 0x2d04],0x7    ; 0045d536
    MOV ESP,EBP                         ; 0045d540
    POP EBP                             ; 0045d542
    POP EDI                             ; 0045d543
    POP ESI                             ; 0045d544
    POP EBX                             ; 0045d545
    RET                                 ; 0045d546
    MOV EDX,EAX                         ; 0045d547
        ;   Label: LAB_0045d547
    MOV EAX,ESI                         ; 0045d549
    JMP 0x0045d373                      ; 0045d54b
        ;   XREF to: 0045d373 (UNCONDITIONAL_JUMP)  ; LAB_0045d373
    MOV EAX,0xb                         ; 0045d550
        ;   Label: caseD_1
    JMP 0x0045d3c8                      ; 0045d555
        ;   XREF to: 0045d3c8 (UNCONDITIONAL_JUMP)  ; LAB_0045d3c8
    MOV EAX,0xe                         ; 0045d55a
        ;   Label: caseD_a
    JMP 0x0045d3c8                      ; 0045d55f
        ;   XREF to: 0045d3c8 (UNCONDITIONAL_JUMP)  ; LAB_0045d3c8
    MOV EAX,0xa                         ; 0045d564
        ;   Label: caseD_4
    JMP 0x0045d3c8                      ; 0045d569
        ;   XREF to: 0045d3c8 (UNCONDITIONAL_JUMP)  ; LAB_0045d3c8
    MOV EAX,0x9                         ; 0045d56e
        ;   Label: caseD_2
    JMP 0x0045d3c8                      ; 0045d573
        ;   XREF to: 0045d3c8 (UNCONDITIONAL_JUMP)  ; LAB_0045d3c8
    MOV EAX,0x6                         ; 0045d578
        ;   Label: caseD_6
    JMP 0x0045d3c8                      ; 0045d57d
        ;   XREF to: 0045d3c8 (UNCONDITIONAL_JUMP)  ; LAB_0045d3c8
    XOR EAX,EAX                         ; 0045d582
        ;   Label: caseD_3
    JMP 0x0045d3c8                      ; 0045d584
        ;   XREF to: 0045d3c8 (UNCONDITIONAL_JUMP)  ; LAB_0045d3c8
    PUSH 0x12                           ; 0045d589
        ;   Label: LAB_0045d589
    PUSH EBX                            ; 0045d58b
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0 ; 0045d58c
        ;   XREF to: 0042a5a0 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(CCharacter * this_ptr, int state_index)
    MOV dword ptr [EBP + -0x4],EAX      ; 0045d591
    ADD ESP,0x8                         ; 0045d594
    FLD float ptr [EBP + -0x4]          ; 0045d597
    FCOMP double ptr [0x005d07ff]       ; 0045d59a | DAT_005d07ff
    FNSTSW AX                           ; 0045d5a0
    SAHF                                ; 0045d5a2
    JA 0x0045d3e7                       ; 0045d5a3
        ;   XREF to: 0045d3e7 (CONDITIONAL_JUMP)  ; LAB_0045d3e7
    LEA EDX,[EBX + 0x25674]             ; 0045d5a9
    FLD float ptr [EDX + 0x14]          ; 0045d5af
    FLD1                                ; 0045d5b2
    FCOMPP                              ; 0045d5b4
    FNSTSW AX                           ; 0045d5b6
    SAHF                                ; 0045d5b8
    JA 0x0045d3e7                       ; 0045d5b9
        ;   XREF to: 0045d3e7 (CONDITIONAL_JUMP)  ; LAB_0045d3e7
    FLD float ptr [EDX + 0x10]          ; 0045d5bf
    FLDZ                                ; 0045d5c2
    FCOMPP                              ; 0045d5c4
    FNSTSW AX                           ; 0045d5c6
    SAHF                                ; 0045d5c8
    JC 0x0045d3e7                       ; 0045d5c9
        ;   XREF to: 0045d3e7 (CONDITIONAL_JUMP)  ; LAB_0045d3e7
    MOV EAX,dword ptr [EBX + 0x25698]   ; 0045d5cf
    PUSH EAX                            ; 0045d5d5
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0045d5d6
    CALL dword ptr [EDX + 0xf0]         ; 0045d5dc
    ADD ESP,0x4                         ; 0045d5e2
    TEST EAX,EAX                        ; 0045d5e5
    JZ 0x0045d3e7                       ; 0045d5e7
        ;   XREF to: 0045d3e7 (CONDITIONAL_JUMP)  ; LAB_0045d3e7
    MOV EAX,dword ptr [EBX + 0x25698]   ; 0045d5ed
    MOV dword ptr [EBX + 0x256a0],0x0   ; 0045d5f3
    PUSH EAX                            ; 0045d5fd
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0045d5fe
    CALL dword ptr [EDX + 0xec]         ; 0045d604
    ADD ESP,0x4                         ; 0045d60a
    TEST EAX,EAX                        ; 0045d60d
    JNZ 0x0045d659                      ; 0045d60f
        ;   XREF to: 0045d659 (CONDITIONAL_JUMP)  ; LAB_0045d659
    LEA EAX,[EBX + 0x2437c]             ; 0045d611
    XOR EDI,EDI                         ; 0045d617
    XOR EDX,EDX                         ; 0045d619
    MOV dword ptr [EBP + -0x8],EAX      ; 0045d61b
    MOV ESI,EAX                         ; 0045d61e
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045d620
        ;   Label: LAB_0045d620
    MOV EAX,dword ptr [EAX + 0x10]      ; 0045d623
    CMP EDI,EAX                         ; 0045d626
    JGE 0x0045d66e                      ; 0045d628
        ;   XREF to: 0045d66e (CONDITIONAL_JUMP)  ; LAB_0045d66e
    MOV EAX,[0x007bc3a4]                ; 0045d62a | g_CAmmoClassInfo.name_hash
    MOV EDX,dword ptr [EBP + -0x8]      ; 0045d62f
    PUSH EAX                            ; 0045d632
    MOV ECX,dword ptr [EDX + 0x468]     ; 0045d633
    CMP ECX,dword ptr [ESI + 0x46c]     ; 0045d639
    JNZ 0x0045d66a                      ; 0045d63f
        ;   XREF to: 0045d66a (CONDITIONAL_JUMP)  ; LAB_0045d66a
    MOV EAX,dword ptr [ESI + 0x14]      ; 0045d641
    PUSH EAX                            ; 0045d644
        ;   Label: LAB_0045d644
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0045d645
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 0045d64a
    MOV EDX,EAX                         ; 0045d64d
    TEST EAX,EAX                        ; 0045d64f
    JNZ 0x0045d66e                      ; 0045d651
        ;   XREF to: 0045d66e (CONDITIONAL_JUMP)  ; LAB_0045d66e
    INC EDI                             ; 0045d653
    ADD ESI,0x4                         ; 0045d654
    JMP 0x0045d620                      ; 0045d657
        ;   XREF to: 0045d620 (UNCONDITIONAL_JUMP)  ; LAB_0045d620
    MOV dword ptr [EBX + 0x256a0],0x1   ; 0045d659
        ;   Label: LAB_0045d659
    MOV ESP,EBP                         ; 0045d663
    POP EBP                             ; 0045d665
    POP EDI                             ; 0045d666
    POP ESI                             ; 0045d667
    POP EBX                             ; 0045d668
    RET                                 ; 0045d669
    XOR EAX,EAX                         ; 0045d66a
        ;   Label: LAB_0045d66a
    JMP 0x0045d644                      ; 0045d66c
        ;   XREF to: 0045d644 (UNCONDITIONAL_JUMP)  ; LAB_0045d644
    TEST EDX,EDX                        ; 0045d66e
        ;   Label: LAB_0045d66e
    JZ 0x0045d3e7                       ; 0045d670
        ;   XREF to: 0045d3e7 (CONDITIONAL_JUMP)  ; LAB_0045d3e7
    PUSH EBX                            ; 0045d676
    PUSH EDX                            ; 0045d677
    CALL core_ammo.cpp_FUN_0040e450     ; 0045d678
        ;   XREF to: 0040e450 (UNCONDITIONAL_CALL)  ; undefined core_ammo.cpp_FUN_0040e450()
    ADD ESP,0x8                         ; 0045d67d
    TEST EAX,EAX                        ; 0045d680
    JZ 0x0045d3e7                       ; 0045d682
        ;   XREF to: 0045d3e7 (CONDITIONAL_JUMP)  ; LAB_0045d3e7
    MOV EAX,dword ptr [EBX + 0x25698]   ; 0045d688
    MOV dword ptr [EAX + 0x6c4],0x6     ; 0045d68e
    MOV dword ptr [EBX + 0x2d04],0xf    ; 0045d698
    MOV dword ptr [EBX + 0x2d08],0x0    ; 0045d6a2
    MOV ESP,EBP                         ; 0045d6ac
    POP EBP                             ; 0045d6ae
    POP EDI                             ; 0045d6af
    POP ESI                             ; 0045d6b0
    POP EBX                             ; 0045d6b1
    RET                                 ; 0045d6b2

