; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_charactr_cpp_CCharacter_renderOpaque_FUN_00426440(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x20]:1  local_20
;
; XREF[12]:
;   core_boneguy.cpp_CBoneGuy_renderOpaque_FUN_00419bf0 at 00419c09
;   core_colonel.cpp_CColonel_renderOpaque_FUN_0043a9f0 at 0043a9f5
;   core_gabriela.cpp_CGabriella_renderOpaque_FUN_00498cc0 at 00498cca
;   core_gargoyle.cpp_CGargoyle_renderOpaque_FUN_004a8260 at 004a8265
;   core_haystack.cpp_CHaystack_renderOpaque_FUN_004b3ff0 at 004b3ff5
;   core_hostage.cpp_CHostage_renderOpaque_FUN_004b6cf0 at 004b6d36
;   core_icepick.cpp_CIcePick_renderOpaque_FUN_004bb4d0 at 004bb4d5
;   core_scat.cpp_CScat_renderOpaque_FUN_004fcb20 at 004fcb29
;   core_stranger.cpp_CStranger_renderOpaque_FUN_0053d100 at 0053d116
;   core_svetlana.cpp_CSvetlana_renderOpaque_FUN_00542d20 at 00542d54
;   ... and 2 more
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01cd4318
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   core_charactr.cpp_CCharacter_renderCharacter_FUN_00425c20
;   core_motion.cpp_CMotionController_render_FUN_004e22b0
;   engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_004613b0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00426440
        ;   Label: core_charactr.cpp_CCharacter_renderOpaque_FUN_00426440
    PUSH EBP                            ; 00426441
    SUB ESP,0x18                        ; 00426442
    MOV EBX,dword ptr [ESP + 0x24]      ; 00426445
    MOV EDX,dword ptr [0x005ae704]      ; 00426449 | DAT_005ae704
    PUSH EDX                            ; 0042644f | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_004613b0 ; 00426450
        ;   XREF to: 004613b0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_004613b0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00426455
    TEST EAX,EAX                        ; 00426458
    JZ 0x004264fb                       ; 0042645a
        ;   XREF to: 004264fb (CONDITIONAL_JUMP)  ; LAB_004264fb
    CMP dword ptr [EBX + 0x2404],0x0    ; 00426460
        ;   Label: LAB_00426460
    JNZ 0x00426506                      ; 00426467
        ;   XREF to: 00426506 (CONDITIONAL_JUMP)  ; LAB_00426506
    PUSH EDI                            ; 0042646d
    PUSH ESI                            ; 0042646e
    PUSH EBX                            ; 0042646f
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 00426470
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor * actor)
    ADD ESP,0x4                         ; 00426475
    PUSH 0x0                            ; 00426478
    LEA EDX,[ESP + 0xc]                 ; 0042647a
    PUSH EDX                            ; 0042647e
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0042647f
    PUSH EBX                            ; 00426485
    CALL dword ptr [EAX + 0x14]         ; 00426486
    ADD ESP,0x8                         ; 00426489
    PUSH EAX                            ; 0042648c
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 0042648d
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x8                         ; 00426492
    MOV ESI,EAX                         ; 00426495
    TEST EAX,EAX                        ; 00426497
    JZ 0x004264e8                       ; 00426499
        ;   XREF to: 004264e8 (CONDITIONAL_JUMP)  ; LAB_004264e8
    PUSH EBX                            ; 0042649b
    MOV dword ptr [EBX + 0x2618],0x1    ; 0042649c
    CALL core_charactr.cpp_CCharacter_renderCharacter_FUN_00425c20 ; 004264a6
        ;   XREF to: 00425c20 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_renderCharacter_FUN_00425c20(CCharacter * this_ptr)
    MOV EDI,dword ptr [0x01cd4318]      ; 004264ab | DAT_01cd4318
    ADD ESP,0x4                         ; 004264b1
    TEST EDI,EDI                        ; 004264b4
    JZ 0x004264e8                       ; 004264b6
        ;   XREF to: 004264e8 (CONDITIONAL_JUMP)  ; LAB_004264e8
    MOV EBP,dword ptr [0x005ae704]      ; 004264b8 | DAT_005ae704
    PUSH EBP                            ; 004264be | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 004264bf
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004264c4
    TEST EAX,EAX                        ; 004264c7
    JNZ 0x004264e8                      ; 004264c9
        ;   XREF to: 004264e8 (CONDITIONAL_JUMP)  ; LAB_004264e8
    PUSH EBX                            ; 004264cb
    LEA EAX,[EBX + 0x150]               ; 004264cc
    PUSH EAX                            ; 004264d2
    CALL core_motion.cpp_CMotionController_render_FUN_004e22b0 ; 004264d3
        ;   XREF to: 004e22b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_render_FUN_004e22b0(CMotionController * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004264d8
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004264db
    PUSH EBX                            ; 004264e1
    CALL dword ptr [EAX + 0x50]         ; 004264e2
    ADD ESP,0x4                         ; 004264e5
    PUSH EBX                            ; 004264e8
        ;   Label: LAB_004264e8
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 004264e9
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004264ee
    MOV EAX,ESI                         ; 004264f1
    POP ESI                             ; 004264f3
    POP EDI                             ; 004264f4
    ADD ESP,0x18                        ; 004264f5
    POP EBP                             ; 004264f8
    POP EBX                             ; 004264f9
    RET                                 ; 004264fa
    MOV dword ptr [EBX + 0x2618],EAX    ; 004264fb
        ;   Label: LAB_004264fb
    JMP 0x00426460                      ; 00426501
        ;   XREF to: 00426460 (UNCONDITIONAL_JUMP)  ; LAB_00426460
    XOR EAX,EAX                         ; 00426506
        ;   Label: LAB_00426506
    ADD ESP,0x18                        ; 00426508
    POP EBP                             ; 0042650b
    POP EBX                             ; 0042650c
    RET                                 ; 0042650d

