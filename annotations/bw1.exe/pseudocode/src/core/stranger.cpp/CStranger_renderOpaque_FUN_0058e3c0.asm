; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_stranger_cpp_CStranger_renderOpaque_FUN_0058e3c0(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined1* switchdataD_0058e388 = 0058e5a6
;   undefined4 DAT_005f6eb9
;   undefined4 DAT_005f6ec1
;   undefined4 DAT_00612560
;   undefined4 DAT_0061c010
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_01bc120c
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.collision_normal.x
;   undefined4 DAT_02c83600
;   undefined4 DAT_02c83638
;   undefined4 DAT_02c83658
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
;   core_actor.cpp_FUN_00408ac0
;   core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_0042f240
;   core_cloth.cpp_CClothList_reset_FUN_00441d70
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
;   core_fire.cpp_CFireEffect_createLaserPath_FUN_004b6140
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00559250
;   core_setcolid.cpp_CDemonSet_init_FUN_00559220
;   core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0
;   core_setcolid.cpp_FUN_00557630
;   core_stranger.cpp_CStranger_updateWeaponPosition_FUN_0058aeb0
;   core_stranger.cpp_FUN_005906e0
;   core_xform.cpp_FUN_005b5760
;   ... and 6 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058e3c0
        ;   Label: core_stranger.cpp_CStranger_renderOpaque_FUN_0058e3c0
    PUSH ESI                            ; 0058e3c1
    PUSH EDI                            ; 0058e3c2
    PUSH EBP                            ; 0058e3c3
    MOV EBP,ESP                         ; 0058e3c4
    SUB ESP,0x1ac                       ; 0058e3c6
    SUB EBP,0x7e                        ; 0058e3cc
    MOV EBX,dword ptr [EBP + 0x92]      ; 0058e3cf
    PUSH EBX                            ; 0058e3d5
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_0042f240 ; 0058e3d6
        ;   XREF to: 0042f240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_0042f240(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0058e3db
    TEST EAX,EAX                        ; 0058e3de
    JNZ 0x0058e3ea                      ; 0058e3e0
        ;   XREF to: 0058e3ea (CONDITIONAL_JUMP)  ; LAB_0058e3ea
    LEA ESP,[EBP + 0x7e]                ; 0058e3e2
    POP EBP                             ; 0058e3e5
    POP EDI                             ; 0058e3e6
    POP ESI                             ; 0058e3e7
    POP EBX                             ; 0058e3e8
    RET                                 ; 0058e3e9
    PUSH 0x6                            ; 0058e3ea
        ;   Label: LAB_0058e3ea
    PUSH EBX                            ; 0058e3ec
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590 ; 0058e3ed
        ;   XREF to: 00434590 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590(CCharacter * this_ptr, int state_index)
    MOV dword ptr [EBP + 0x7a],EAX      ; 0058e3f2
    ADD ESP,0x8                         ; 0058e3f5
    FLD float ptr [EBP + 0x7a]          ; 0058e3f8
    FCOMP double ptr [0x005f6eb9]       ; 0058e3fb | DAT_005f6eb9
    FNSTSW AX                           ; 0058e401
    SAHF                                ; 0058e403
    JBE 0x0058e53a                      ; 0058e404
        ;   XREF to: 0058e53a (CONDITIONAL_JUMP)  ; LAB_0058e53a
    XOR EDX,EDX                         ; 0058e40a
    MOV ECX,dword ptr [EBX + 0x2628]    ; 0058e40c
    MOV dword ptr [EBP + 0x76],EDX      ; 0058e412
    TEST ECX,ECX                        ; 0058e415
    JZ 0x0058e41f                       ; 0058e417
        ;   XREF to: 0058e41f (CONDITIONAL_JUMP)  ; LAB_0058e41f
    LEA EAX,[ECX + 0x20]                ; 0058e419
    MOV dword ptr [EBP + 0x76],EAX      ; 0058e41c
    MOV ESI,dword ptr [EBX + 0x20004]   ; 0058e41f
        ;   Label: LAB_0058e41f
    TEST ESI,ESI                        ; 0058e425
    JZ 0x0058e42f                       ; 0058e427
        ;   XREF to: 0058e42f (CONDITIONAL_JUMP)  ; LAB_0058e42f
    LEA EAX,[ESI + 0x20]                ; 0058e429
    MOV dword ptr [EBP + 0x76],EAX      ; 0058e42c
    CMP dword ptr [EBP + 0x76],0x0      ; 0058e42f
        ;   Label: LAB_0058e42f
    JZ 0x0058e53a                       ; 0058e433
        ;   XREF to: 0058e53a (CONDITIONAL_JUMP)  ; LAB_0058e53a
    MOV EAX,[0x00622c18]                ; 0058e439 | g_CDemonSetPtr
    PUSH EAX                            ; 0058e43e | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 0058e43f
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0058e444
    PUSH 0x1                            ; 0058e447
    MOV EDX,dword ptr [0x00622c18]      ; 0058e449 | g_CDemonSetPtr
    PUSH EDX                            ; 0058e44f | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0 ; 0058e450
        ;   XREF to: 005592d0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 0058e455
    PUSH EBX                            ; 0058e458
    MOV ECX,dword ptr [0x00622c18]      ; 0058e459 | g_CDemonSetPtr
    PUSH ECX                            ; 0058e45f | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 0058e460
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0058e465
    MOV ESI,dword ptr [EBX + 0x20004]   ; 0058e468
    PUSH ESI                            ; 0058e46e
    MOV EDI,dword ptr [0x00622c18]      ; 0058e46f | g_CDemonSetPtr
    PUSH EDI                            ; 0058e475 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 0058e476
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0058e47b
    MOV EAX,dword ptr [EBX + 0x2628]    ; 0058e47e
    PUSH EAX                            ; 0058e484
    MOV EDX,dword ptr [0x00622c18]      ; 0058e485 | g_CDemonSetPtr
    PUSH EDX                            ; 0058e48b | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 0058e48c
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0058e491
    PUSH EBX                            ; 0058e494
    LEA ESI,[EBP + -0x26]               ; 0058e495
    LEA EDI,[EBP + -0x2]                ; 0058e498
    CALL core_stranger.cpp_FUN_005906e0 ; 0058e49b
        ;   XREF to: 005906e0 (UNCONDITIONAL_CALL)  ; undefined core_stranger.cpp_FUN_005906e0()
    ADD ESP,0x4                         ; 0058e4a0
    LEA EAX,[EBP + -0x2]                ; 0058e4a3
    LEA ESI,[EBP + -0x26]               ; 0058e4a6
    PUSH EAX                            ; 0058e4a9
    MOVSD ES:EDI,ESI                    ; 0058e4aa
    MOVSD ES:EDI,ESI                    ; 0058e4ab
    MOVSD ES:EDI,ESI                    ; 0058e4ac
    PUSH EBX                            ; 0058e4ad
    LEA ESI,[EBP + -0x3e]               ; 0058e4ae
    LEA EDI,[EBP + 0x22]                ; 0058e4b1
    CALL core_actor.cpp_FUN_00408ac0    ; 0058e4b4
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA ESI,[EBP + -0x3e]               ; 0058e4b9
    ADD ESP,0x8                         ; 0058e4bc
    LEA EAX,[EBP + 0x22]                ; 0058e4bf
    MOV ECX,dword ptr [EBP + 0x76]      ; 0058e4c2
    PUSH EAX                            ; 0058e4c5
    MOVSD ES:EDI,ESI                    ; 0058e4c6
    MOVSD ES:EDI,ESI                    ; 0058e4c7
    MOVSD ES:EDI,ESI                    ; 0058e4c8
    PUSH ECX                            ; 0058e4c9
    MOV ESI,dword ptr [0x00622c18]      ; 0058e4ca | g_CDemonSetPtr
    PUSH ESI                            ; 0058e4d0 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00557630 ; 0058e4d1
        ;   XREF to: 00557630 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00557630()
    FLDZ                                ; 0058e4d6
    MOV dword ptr [EBP + 0x7a],EAX      ; 0058e4d8
    ADD ESP,0xc                         ; 0058e4db
    MOV EAX,dword ptr [EBP + 0x7a]      ; 0058e4de
    MOV dword ptr [EBP + 0x72],EAX      ; 0058e4e1
    FCOMP float ptr [EBP + 0x72]        ; 0058e4e4
    FNSTSW AX                           ; 0058e4e7
    SAHF                                ; 0058e4e9
    JBE 0x0058e4f3                      ; 0058e4ea
        ;   XREF to: 0058e4f3 (CONDITIONAL_JUMP)  ; LAB_0058e4f3
    MOV dword ptr [EBP + 0x72],0x41200000 ; 0058e4ec
    PUSH 0x0                            ; 0058e4f3
        ;   Label: LAB_0058e4f3
    PUSH 0x0                            ; 0058e4f5
    MOV EAX,[0x00622c18]                ; 0058e4f7 | g_CDemonSetPtr
    PUSH 0xff                           ; 0058e4fc
    ADD EAX,0x14d128                    ; 0058e501
    PUSH dword ptr [EBP + 0x72]         ; 0058e506
    PUSH EAX                            ; 0058e509 | g_CDemonSetInstance.collision_normal.x
    PUSH 0x3f800000                     ; 0058e50a
    LEA EAX,[EBP + 0x22]                ; 0058e50f
    PUSH 0x3f800000                     ; 0058e512
    PUSH EAX                            ; 0058e517
    MOV EAX,dword ptr [EBP + 0x76]      ; 0058e518
    PUSH EAX                            ; 0058e51b
    MOV EDX,dword ptr [0x0061c010]      ; 0058e51c | DAT_0061c010
    PUSH EDX                            ; 0058e522
    CALL core_fire.cpp_CFireEffect_createLaserPath_FUN_004b6140 ; 0058e523
        ;   XREF to: 004b6140 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLaserPath_FUN_004b6140(CFireEffect * this_ptr, CVector3f * start_position, CVector3f * velocity, float beam_width, ...)
    ADD ESP,0x28                        ; 0058e528
    MOV ECX,dword ptr [0x00622c18]      ; 0058e52b | g_CDemonSetPtr
    PUSH ECX                            ; 0058e531 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 0058e532
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0058e537
    MOV ESI,dword ptr [EBX + 0x20004]   ; 0058e53a
        ;   Label: LAB_0058e53a
    TEST ESI,ESI                        ; 0058e540
    JZ 0x0058e657                       ; 0058e542
        ;   XREF to: 0058e657 (CONDITIONAL_JUMP)  ; LAB_0058e657
    CMP ESI,dword ptr [EBX + 0x25b0]    ; 0058e548
    JZ 0x0058e657                       ; 0058e54e
        ;   XREF to: 0058e657 (CONDITIONAL_JUMP)  ; LAB_0058e657
    CMP ESI,dword ptr [EBX + 0x2628]    ; 0058e554
    JZ 0x0058e657                       ; 0058e55a
        ;   XREF to: 0058e657 (CONDITIONAL_JUMP)  ; LAB_0058e657
    MOV EAX,[0x02c83658]                ; 0058e560 | DAT_02c83658
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0058e565
    JZ 0x0058e657                       ; 0058e56d
        ;   XREF to: 0058e657 (CONDITIONAL_JUMP)  ; LAB_0058e657
    PUSH ESI                            ; 0058e573
    MOV EDX,dword ptr [ESI + 0x154]     ; 0058e574
    CALL dword ptr [EDX + 0x10]         ; 0058e57a
    ADD ESP,0x4                         ; 0058e57d
    MOV EAX,dword ptr [EBX + 0x20004]   ; 0058e580
    XOR ESI,ESI                         ; 0058e586
    TEST EAX,EAX                        ; 0058e588
    JZ 0x0058e82e                       ; 0058e58a
        ;   XREF to: 0058e82e (CONDITIONAL_JUMP)  ; caseD_8
    MOV EAX,dword ptr [EAX + 0x2e0]     ; 0058e590
    CMP EAX,0xa                         ; 0058e596
    JA 0x0058e82e                       ; 0058e599
        ;   XREF to: 0058e82e (CONDITIONAL_JUMP)  ; caseD_8
    JMP dword ptr [EAX*0x4 + 0x58e388]  ; 0058e59f | caseD_5 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,0x2                         ; 0058e5a6
        ;   Label: caseD_0
    PUSH EAX                            ; 0058e5ab
        ;   Label: LAB_0058e5ab
    PUSH EBX                            ; 0058e5ac
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590 ; 0058e5ad
        ;   XREF to: 00434590 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590(CCharacter * this_ptr, int state_index)
    MOV dword ptr [EBP + 0x7a],EAX      ; 0058e5b2
    ADD ESP,0x8                         ; 0058e5b5
    FLD float ptr [EBP + 0x7a]          ; 0058e5b8
    FCOMP double ptr [0x005f6ec1]       ; 0058e5bb | DAT_005f6ec1
    FNSTSW AX                           ; 0058e5c1
    SAHF                                ; 0058e5c3
    JBE 0x0058e5cb                      ; 0058e5c4
        ;   XREF to: 0058e5cb (CONDITIONAL_JUMP)  ; LAB_0058e5cb
    MOV ESI,0x1                         ; 0058e5c6
    MOV EAX,dword ptr [EBX + 0x20004]   ; 0058e5cb
        ;   Label: LAB_0058e5cb
    MOV EDI,dword ptr [EAX + 0x2e0]     ; 0058e5d1
    CMP EDI,0x1                         ; 0058e5d7
    JNZ 0x0058e835                      ; 0058e5da
        ;   XREF to: 0058e835 (CONDITIONAL_JUMP)  ; LAB_0058e835
    CMP dword ptr [EBX + 0x2c98],0x8    ; 0058e5e0
    JNZ 0x0058e835                      ; 0058e5e7
        ;   XREF to: 0058e835 (CONDITIONAL_JUMP)  ; LAB_0058e835
    MOV ESI,EDI                         ; 0058e5ed
    MOV EAX,dword ptr [EBX + 0x20004]   ; 0058e5ef
        ;   Label: LAB_0058e5ef
    PUSH EAX                            ; 0058e5f5
    MOV EDX,dword ptr [EAX + 0x154]     ; 0058e5f6
    CALL dword ptr [EDX + 0xf0]         ; 0058e5fc
    ADD ESP,0x4                         ; 0058e602
    MOV EAX,dword ptr [EBX + 0x20004]   ; 0058e605
        ;   Label: LAB_0058e605
    CMP dword ptr [EAX + 0x2e0],0x0     ; 0058e60b
    JNZ 0x0058e64c                      ; 0058e612
        ;   XREF to: 0058e64c (CONDITIONAL_JUMP)  ; LAB_0058e64c
    PUSH 0x1                            ; 0058e614
    PUSH EBX                            ; 0058e616
    CALL core_stranger.cpp_CStranger_updateWeaponPosition_FUN_0058aeb0 ; 0058e617
        ;   XREF to: 0058aeb0 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_updateWeaponPosition_FUN_0058aeb0(CStranger * this_ptr, int hand_index)
    ADD ESP,0x8                         ; 0058e61c
    MOV EAX,dword ptr [EBX + 0x20004]   ; 0058e61f
    PUSH EAX                            ; 0058e625
    MOV EDX,dword ptr [EAX + 0x154]     ; 0058e626
    CALL dword ptr [EDX + 0x10]         ; 0058e62c
    ADD ESP,0x4                         ; 0058e62f
    TEST ESI,ESI                        ; 0058e632
    JZ 0x0058e64c                       ; 0058e634
        ;   XREF to: 0058e64c (CONDITIONAL_JUMP)  ; LAB_0058e64c
    MOV EAX,dword ptr [EBX + 0x20004]   ; 0058e636
    PUSH EAX                            ; 0058e63c
    MOV EDX,dword ptr [EAX + 0x154]     ; 0058e63d
    CALL dword ptr [EDX + 0xf0]         ; 0058e643
    ADD ESP,0x4                         ; 0058e649
    PUSH 0x0                            ; 0058e64c
        ;   Label: LAB_0058e64c
    PUSH EBX                            ; 0058e64e
    CALL core_stranger.cpp_CStranger_updateWeaponPosition_FUN_0058aeb0 ; 0058e64f
        ;   XREF to: 0058aeb0 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_updateWeaponPosition_FUN_0058aeb0(CStranger * this_ptr, int hand_index)
    ADD ESP,0x8                         ; 0058e654
    CMP dword ptr [EBX + 0x1ff54],0x0   ; 0058e657
        ;   Label: LAB_0058e657
    JZ 0x0058e7b5                       ; 0058e65e
        ;   XREF to: 0058e7b5 (CONDITIONAL_JUMP)  ; LAB_0058e7b5
    MOV EAX,[0x02c83658]                ; 0058e664 | DAT_02c83658
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0058e669
    JZ 0x0058e7b5                       ; 0058e671
        ;   XREF to: 0058e7b5 (CONDITIONAL_JUMP)  ; LAB_0058e7b5
    LEA EAX,[EBX + 0x1fae8]             ; 0058e677
    MOV EAX,dword ptr [EAX + 0x45c]     ; 0058e67d
    MOV dword ptr [EBP + 0x6a],EAX      ; 0058e683
    TEST EAX,EAX                        ; 0058e686
    JZ 0x0058e7b5                       ; 0058e688
        ;   XREF to: 0058e7b5 (CONDITIONAL_JUMP)  ; LAB_0058e7b5
    PUSH EBX                            ; 0058e68e
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 0058e68f
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0058e694
    LEA EAX,[EBX + 0xfd8]               ; 0058e697
    MOV EDI,dword ptr [EBX + 0x1ff54]   ; 0058e69d
    MOV dword ptr [EBP + 0x6e],EAX      ; 0058e6a3
    CMP EDI,0x2                         ; 0058e6a6
    JNZ 0x0058e842                      ; 0058e6a9
        ;   XREF to: 0058e842 (CONDITIONAL_JUMP)  ; LAB_0058e842
    MOV ECX,0xbe0fd3f6                  ; 0058e6af
    MOV EDI,0xc04507c8                  ; 0058e6b4
    LEA EAX,[EBP + 0x2e]                ; 0058e6b9
    MOV EDX,0x3e9135db                  ; 0058e6bc
    XOR ESI,ESI                         ; 0058e6c1
    MOV dword ptr [EBP + 0x5e],ECX      ; 0058e6c3
    MOV dword ptr [EBP + 0x66],ESI      ; 0058e6c6
    MOV dword ptr [EBP + 0x62],EDI      ; 0058e6c9
    PUSH EAX                            ; 0058e6cc
    MOV dword ptr [EBP + 0x4a],EDX      ; 0058e6cd
    LEA EDI,[EBP + 0x2e]                ; 0058e6d0
    MOV EAX,0x3bc63091                  ; 0058e6d3
    LEA ESI,[EBP + 0x5e]                ; 0058e6d8
    MOV dword ptr [EBP + 0x46],EAX      ; 0058e6db
    LEA EAX,[EBP + 0x46]                ; 0058e6de
    MOV ECX,0x3f09a30a                  ; 0058e6e1
    PUSH EAX                            ; 0058e6e6
    LEA EAX,[EBP + 0xffffff02]          ; 0058e6e7
    MOV dword ptr [EBP + 0x4e],ECX      ; 0058e6ed
    PUSH EAX                            ; 0058e6f0
    MOVSD ES:EDI,ESI                    ; 0058e6f1
    MOVSD ES:EDI,ESI                    ; 0058e6f2
    MOVSD ES:EDI,ESI                    ; 0058e6f3
    CALL core_xform.cpp_FUN_005b5760    ; 0058e6f4
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5760(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    MOV ESI,dword ptr [0x02c83600]      ; 0058e6f9 | DAT_02c83600
    LEA EAX,[ESI*0x4 + 0x0]             ; 0058e6ff
    SUB EAX,ESI                         ; 0058e706
    MOV ESI,dword ptr [EBP + 0x6e]      ; 0058e708
    SHL EAX,0x4                         ; 0058e70b
    ADD ESP,0xc                         ; 0058e70e
    ADD EAX,ESI                         ; 0058e711
    PUSH EAX                            ; 0058e713
    LEA EAX,[EBP + 0xffffff02]          ; 0058e714
    PUSH EAX                            ; 0058e71a
    LEA ESI,[EBP + 0xfffffed2]          ; 0058e71b
    LEA EDI,[EBP + 0xffffff32]          ; 0058e721
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 0058e727
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 0058e72c
    LEA ESI,[EBP + 0xfffffed2]          ; 0058e731
    ADD ESP,0x8                         ; 0058e737
        ;   Label: LAB_0058e737
    MOVSD.REP ES:EDI,ESI                ; 0058e73a
    LEA EAX,[EBP + 0xffffff32]          ; 0058e73c
    PUSH EAX                            ; 0058e742
    LEA ESI,[EBP + 0x3a]                ; 0058e743
    LEA EDI,[EBP + -0x32]               ; 0058e746
    CALL core_xform.cpp_matrixToEulerAngles_FUN_005b5930 ; 0058e749
        ;   XREF to: 005b5930 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_matrixToEulerAngles_FUN_005b5930()
    LEA ESI,[EBP + 0x3a]                ; 0058e74e
    LEA EAX,[EBP + 0xffffff32]          ; 0058e751
    ADD ESP,0x4                         ; 0058e757
    MOVSD ES:EDI,ESI                    ; 0058e75a
    MOVSD ES:EDI,ESI                    ; 0058e75b
    MOVSD ES:EDI,ESI                    ; 0058e75c
    PUSH EAX                            ; 0058e75d
    LEA ESI,[EBP + -0x1a]               ; 0058e75e
    LEA EDI,[EBP + 0x16]                ; 0058e761
    CALL core_xform.cpp_FUN_005b6270    ; 0058e764
        ;   XREF to: 005b6270 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b6270()
    ADD ESP,0x4                         ; 0058e769
    LEA EAX,[EBP + 0x16]                ; 0058e76c
    LEA ESI,[EBP + -0x1a]               ; 0058e76f
    PUSH EAX                            ; 0058e772
    LEA EAX,[EBP + -0x32]               ; 0058e773
    MOVSD ES:EDI,ESI                    ; 0058e776
    MOVSD ES:EDI,ESI                    ; 0058e777
    MOVSD ES:EDI,ESI                    ; 0058e778
    PUSH EAX                            ; 0058e779
    MOV EDI,dword ptr [0x00612560]      ; 0058e77a | DAT_00612560
    PUSH EDI                            ; 0058e780 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 0058e781
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0058e786
    MOV EAX,dword ptr [EBP + 0x6a]      ; 0058e789
    PUSH -0x1                           ; 0058e78c
    ADD EAX,0x158                       ; 0058e78e
    PUSH 0x0                            ; 0058e793
    PUSH EAX                            ; 0058e795
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0 ; 0058e796
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0058e79b
    MOV EAX,[0x00612560]                ; 0058e79e | DAT_00612560
    PUSH EAX                            ; 0058e7a3 | DAT_01bc120c
    CALL engine_matrix.c_pop_FUN_004839a0 ; 0058e7a4
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 0058e7a9
    PUSH EBX                            ; 0058e7ac
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 0058e7ad
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0058e7b2
    MOV EAX,[0x02c83658]                ; 0058e7b5 | DAT_02c83658
        ;   Label: LAB_0058e7b5
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0058e7ba
    JNZ 0x0058e7ef                      ; 0058e7c2
        ;   XREF to: 0058e7ef (CONDITIONAL_JUMP)  ; LAB_0058e7ef
    MOV ECX,dword ptr [0x00612560]      ; 0058e7c4 | DAT_00612560
    PUSH ECX                            ; 0058e7ca | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 0058e7cb
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0058e7d0
    TEST EAX,EAX                        ; 0058e7d3
    JNZ 0x0058e7ef                      ; 0058e7d5
        ;   XREF to: 0058e7ef (CONDITIONAL_JUMP)  ; LAB_0058e7ef
    CMP dword ptr [EBX + 0x2ca0],0x0    ; 0058e7d7
    JLE 0x0058e7ef                      ; 0058e7de
        ;   XREF to: 0058e7ef (CONDITIONAL_JUMP)  ; LAB_0058e7ef
    ADD EBX,0x2ca0                      ; 0058e7e0
    PUSH EBX                            ; 0058e7e6
    CALL core_cloth.cpp_CClothList_reset_FUN_00441d70 ; 0058e7e7
        ;   XREF to: 00441d70 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_reset_FUN_00441d70(CClothList * this_ptr)
    ADD ESP,0x4                         ; 0058e7ec
    MOV EAX,0x1                         ; 0058e7ef
        ;   Label: LAB_0058e7ef
    LEA ESP,[EBP + 0x7e]                ; 0058e7f4
    POP EBP                             ; 0058e7f7
    POP EDI                             ; 0058e7f8
    POP ESI                             ; 0058e7f9
    POP EBX                             ; 0058e7fa
    RET                                 ; 0058e7fb
    MOV EAX,0x4                         ; 0058e7fc
        ;   Label: caseD_1
    JMP 0x0058e5ab                      ; 0058e801
        ;   XREF to: 0058e5ab (UNCONDITIONAL_JUMP)  ; LAB_0058e5ab
    MOV EAX,0xe                         ; 0058e806
        ;   Label: caseD_9
    JMP 0x0058e5ab                      ; 0058e80b
        ;   XREF to: 0058e5ab (UNCONDITIONAL_JUMP)  ; LAB_0058e5ab
    MOV EAX,0x7                         ; 0058e810
        ;   Label: caseD_4
    JMP 0x0058e5ab                      ; 0058e815
        ;   XREF to: 0058e5ab (UNCONDITIONAL_JUMP)  ; LAB_0058e5ab
    MOV EAX,0x5                         ; 0058e81a
        ;   Label: caseD_2
    JMP 0x0058e5ab                      ; 0058e81f
        ;   XREF to: 0058e5ab (UNCONDITIONAL_JUMP)  ; LAB_0058e5ab
    MOV EAX,0x8                         ; 0058e824
        ;   Label: caseD_7
    JMP 0x0058e5ab                      ; 0058e829
        ;   XREF to: 0058e5ab (UNCONDITIONAL_JUMP)  ; LAB_0058e5ab
    XOR EAX,EAX                         ; 0058e82e
        ;   Label: caseD_3
    JMP 0x0058e5ab                      ; 0058e830
        ;   XREF to: 0058e5ab (UNCONDITIONAL_JUMP)  ; LAB_0058e5ab
    TEST ESI,ESI                        ; 0058e835
        ;   Label: LAB_0058e835
    JNZ 0x0058e5ef                      ; 0058e837
        ;   XREF to: 0058e5ef (CONDITIONAL_JUMP)  ; LAB_0058e5ef
    JMP 0x0058e605                      ; 0058e83d
        ;   XREF to: 0058e605 (UNCONDITIONAL_JUMP)  ; LAB_0058e605
    MOV EAX,0x3f94bac7                  ; 0058e842
        ;   Label: LAB_0058e842
    MOV EDX,0x3d488e0e                  ; 0058e847
    MOV ECX,0x3ebc7410                  ; 0058e84c
    LEA EDI,[EBP + 0xa]                 ; 0058e851
    LEA ESI,[EBP + 0x52]                ; 0058e854
    MOV dword ptr [EBP + 0x52],EAX      ; 0058e857
    MOV dword ptr [EBP + 0x5a],EDX      ; 0058e85a
    LEA EAX,[EBP + 0xa]                 ; 0058e85d
    MOV dword ptr [EBP + 0x56],ECX      ; 0058e860
    PUSH EAX                            ; 0058e863
    MOV EAX,0x3e05d9a1                  ; 0058e864
    MOVSD ES:EDI,ESI                    ; 0058e869
    MOVSD ES:EDI,ESI                    ; 0058e86a
    MOVSD ES:EDI,ESI                    ; 0058e86b
    MOV dword ptr [EBP + -0x6],EAX      ; 0058e86c
    LEA EAX,[EBP + -0xe]                ; 0058e86f
    MOV ESI,0x3f033b43                  ; 0058e872
    PUSH EAX                            ; 0058e877
    LEA EAX,[EBP + -0x6e]               ; 0058e878
    MOV EDI,0xbca5f882                  ; 0058e87b
    PUSH EAX                            ; 0058e880
    MOV dword ptr [EBP + -0xe],ESI      ; 0058e881
    MOV dword ptr [EBP + -0xa],EDI      ; 0058e884
    CALL core_xform.cpp_FUN_005b5760    ; 0058e887
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5760(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    MOV ESI,dword ptr [0x02c83638]      ; 0058e88c | DAT_02c83638
    LEA EAX,[ESI*0x4 + 0x0]             ; 0058e892
    SUB EAX,ESI                         ; 0058e899
    MOV EDX,dword ptr [EBP + 0x6e]      ; 0058e89b
    SHL EAX,0x4                         ; 0058e89e
    ADD ESP,0xc                         ; 0058e8a1
    ADD EAX,EDX                         ; 0058e8a4
    PUSH EAX                            ; 0058e8a6
    LEA EAX,[EBP + -0x6e]               ; 0058e8a7
    PUSH EAX                            ; 0058e8aa
    LEA ESI,[EBP + 0xffffff62]          ; 0058e8ab
    LEA EDI,[EBP + 0xffffff32]          ; 0058e8b1
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 0058e8b7
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 0058e8bc
    LEA ESI,[EBP + 0xffffff62]          ; 0058e8c1
    JMP 0x0058e737                      ; 0058e8c7
        ;   XREF to: 0058e737 (UNCONDITIONAL_JUMP)  ; LAB_0058e737

