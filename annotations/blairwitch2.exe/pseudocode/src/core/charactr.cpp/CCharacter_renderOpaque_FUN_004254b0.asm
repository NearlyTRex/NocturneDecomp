; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_charactr_cpp_CCharacter_renderOpaque_FUN_004254b0(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0xd8]:1  local_d8
; undefined        Stack[-0xc0]:1  local_c0
;
; XREF[16]:
;   core_basicene.cpp_CBasicEnemy_renderOpaque_FUN_0059fa20 at 0059fa33
;   core_boneguy.cpp_CBoneGuy_renderOpaque_FUN_00419b50 at 00419b69
;   core_colonel.cpp_CColonel_renderOpaque_FUN_00436490 at 00436495
;   core_construc.cpp_CConstruct_renderOpaque_FUN_00437b70 at 00437b75
;   core_doc.cpp_CDoc_renderOpaque_FUN_004599a0 at 004599aa
;   core_gabriela.cpp_CGabriella_renderOpaque_FUN_004b1060 at 004b106a
;   core_gargoyle.cpp_CGargoyle_renderOpaque_FUN_004c0b30 at 004c0b35
;   core_haystack.cpp_CHaystack_renderOpaque_FUN_004cd870 at 004cd875
;   core_icepick.cpp_CIcePick_renderOpaque_FUN_004d6360 at 004d6365
;   core_npc.cpp_CNPC_renderOpaque_FUN_00510900 at 0051094a
;   ... and 6 more
;
; Referenced Globals:
;   undefined4 DAT_005ccd26
;   undefined4 DAT_005ccd2a
;   undefined4 DAT_005f4060
;   undefined4 DAT_0060b280
;   CGameHook* g_CGameHookPtr = 02668118
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01c35e60
;   undefined4 DAT_01d1cdc8
;   undefined4 g_CGameHookInstance.debug_follow_slot_display
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
;   core_box.cpp_FUN_0041a840
;   core_charactr.cpp_CCharacter_renderCharacter_FUN_00424bd0
;   core_motion.cpp_FUN_005042e0
;   core_muzzle.cpp_FUN_0059e0f0
;   engine_2d.c_drawText_FUN_00401fe0
;   engine_3d.c_drawLine2DFromIndices_FUN_00407c40
;   engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0046bc80
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960
;   engine_special.cpp_FUN_0055d723
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004254b0
        ;   Label: core_charactr.cpp_CCharacter_renderOpaque_FUN_004254b0
    PUSH ESI                            ; 004254b1
    PUSH EDI                            ; 004254b2
    PUSH EBP                            ; 004254b3
    MOV EBP,ESP                         ; 004254b4
    SUB ESP,0xc4                        ; 004254b6
    AND ESP,0xfffffff8                  ; 004254bc
    MOV EDX,dword ptr [0x0060b280]      ; 004254bf | DAT_0060b280
    PUSH EDX                            ; 004254c5 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0046bc80 ; 004254c6
        ;   XREF to: 0046bc80 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0046bc80(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004254cb
    TEST EAX,EAX                        ; 004254ce
    JZ 0x004255c7                       ; 004254d0
        ;   XREF to: 004255c7 (CONDITIONAL_JUMP)  ; LAB_004255c7
    MOV EAX,dword ptr [EBP + 0x14]      ; 004254d6
        ;   Label: LAB_004254d6
    CMP dword ptr [EAX + 0x2568],0x0    ; 004254d9
    JNZ 0x004255d9                      ; 004254e0
        ;   XREF to: 004255d9 (CONDITIONAL_JUMP)  ; LAB_004255d9
    PUSH EAX                            ; 004254e6
    MOV EBX,EAX                         ; 004254e7
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 004254e9
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004254ee
    MOV EAX,EBX                         ; 004254f1
    PUSH 0x0                            ; 004254f3
    MOV ESI,EBX                         ; 004254f5
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 004254f7
    PUSH ESI                            ; 004254fd
    LEA ESI,[ESP + 0x20]                ; 004254fe
    LEA EDI,[ESP + 0x8]                 ; 00425502
    CALL dword ptr [EAX + 0x24]         ; 00425506
    MOV ECX,0x6                         ; 00425509
    ADD ESP,0x4                         ; 0042550e
    LEA EAX,[ESP + 0x4]                 ; 00425511
    LEA ESI,[ESP + 0x1c]                ; 00425515
    PUSH EAX                            ; 00425519
    MOVSD.REP ES:EDI,ESI                ; 0042551a
    CALL core_box.cpp_FUN_0041a840      ; 0042551c
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 00425521
    MOV dword ptr [ESP + 0xb4],EAX      ; 00425524
    TEST EAX,EAX                        ; 0042552b
    JZ 0x004255ad                       ; 0042552d
        ;   XREF to: 004255ad (CONDITIONAL_JUMP)  ; LAB_004255ad
    MOV EAX,EBX                         ; 00425533
    PUSH EAX                            ; 00425535
    MOV dword ptr [EAX + 0x2828],0x1    ; 00425536
    CALL core_charactr.cpp_CCharacter_renderCharacter_FUN_00424bd0 ; 00425540
        ;   XREF to: 00424bd0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_renderCharacter_FUN_00424bd0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00425545
    PUSH EBX                            ; 00425548
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 00425549
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0042554e
    MOV EDX,dword ptr [0x0060b280]      ; 00425551 | DAT_0060b280
    PUSH EDX                            ; 00425557 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 00425558
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0042555d
    TEST EAX,EAX                        ; 00425560
    JZ 0x004255e2                       ; 00425562
        ;   XREF to: 004255e2 (CONDITIONAL_JUMP)  ; LAB_004255e2
    MOV ESI,dword ptr [EBP + 0x14]      ; 00425568
        ;   Label: LAB_00425568
    PUSH ESI                            ; 0042556b
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 0042556c
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    MOV EDI,dword ptr [0x01d1cdc8]      ; 00425571 | DAT_01d1cdc8
    ADD ESP,0x4                         ; 00425577
    TEST EDI,EDI                        ; 0042557a
    JZ 0x004255ad                       ; 0042557c
        ;   XREF to: 004255ad (CONDITIONAL_JUMP)  ; LAB_004255ad
    MOV EAX,[0x0060b280]                ; 0042557e | DAT_0060b280
    PUSH EAX                            ; 00425583 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 00425584
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00425589
    TEST EAX,EAX                        ; 0042558c
    JNZ 0x004255ad                      ; 0042558e
        ;   XREF to: 004255ad (CONDITIONAL_JUMP)  ; LAB_004255ad
    PUSH ESI                            ; 00425590
    LEA EAX,[ESI + 0x2b4]               ; 00425591
    PUSH EAX                            ; 00425597
    CALL core_motion.cpp_FUN_005042e0   ; 00425598
        ;   XREF to: 005042e0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_FUN_005042e0(CMotionController * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0042559d
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 004255a0
    PUSH ESI                            ; 004255a6
    CALL dword ptr [EAX + 0x60]         ; 004255a7
    ADD ESP,0x4                         ; 004255aa
    MOV EBX,dword ptr [EBP + 0x14]      ; 004255ad
        ;   Label: LAB_004255ad
    PUSH EBX                            ; 004255b0
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 004255b1
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004255b6
    MOV EAX,dword ptr [ESP + 0xb4]      ; 004255b9
    MOV ESP,EBP                         ; 004255c0
    POP EBP                             ; 004255c2
    POP EDI                             ; 004255c3
    POP ESI                             ; 004255c4
    POP EBX                             ; 004255c5
    RET                                 ; 004255c6
    MOV EAX,dword ptr [EBP + 0x14]      ; 004255c7
        ;   Label: LAB_004255c7
    MOV dword ptr [EAX + 0x2828],0x0    ; 004255ca
    JMP 0x004254d6                      ; 004255d4
        ;   XREF to: 004254d6 (UNCONDITIONAL_JUMP)  ; LAB_004254d6
    XOR EAX,EAX                         ; 004255d9
        ;   Label: LAB_004255d9
    MOV ESP,EBP                         ; 004255db
    POP EBP                             ; 004255dd
    POP EDI                             ; 004255de
    POP ESI                             ; 004255df
    POP EBX                             ; 004255e0
    RET                                 ; 004255e1
    MOV EAX,[0x0061ea5c]                ; 004255e2 | g_CGameHookPtr
        ;   Label: LAB_004255e2
    CMP dword ptr [EAX + 0xc],0x0       ; 004255e7 | g_CGameHookInstance.debug_follow_slot_display
    JZ 0x00425568                       ; 004255eb
        ;   XREF to: 00425568 (CONDITIONAL_JUMP)  ; LAB_00425568
    MOV EAX,dword ptr [EBP + 0x14]      ; 004255f1
    XOR EBX,EBX                         ; 004255f4
    ADD EAX,0x3058                      ; 004255f6
    MOV dword ptr [ESP + 0x78],EBX      ; 004255fb
    PUSH EAX                            ; 004255ff
    MOV dword ptr [ESP + 0x80],EBX      ; 00425600
    MOV dword ptr [ESP + 0x84],EBX      ; 00425607
    CALL core_muzzle.cpp_FUN_0059e0f0   ; 0042560e
        ;   XREF to: 0059e0f0 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059e0f0()
    ADD ESP,0x4                         ; 00425613
    MOV dword ptr [ESP + 0xb8],EAX      ; 00425616
    MOV dword ptr [ESP + 0xbc],EAX      ; 0042561d
    TEST EAX,EAX                        ; 00425624
    JZ 0x00425568                       ; 00425626
        ;   XREF to: 00425568 (CONDITIONAL_JUMP)  ; LAB_00425568
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0042562c
        ;   Label: LAB_0042562c
    CMP dword ptr [EAX],0x0             ; 00425633
    JZ 0x00425568                       ; 00425636
        ;   XREF to: 00425568 (CONDITIONAL_JUMP)  ; LAB_00425568
    MOV ESI,EAX                         ; 0042563c
    LEA EDI,[ESP + 0x6c]                ; 0042563e
    LEA EBX,[ESP + 0x9c]                ; 00425642
    LEA ESI,[ESI + 0x8]                 ; 00425649
    MOV EDX,dword ptr [0x0060b280]      ; 0042564c | DAT_0060b280
    XOR ECX,ECX                         ; 00425652
    MOVSD ES:EDI,ESI                    ; 00425654
    MOVSD ES:EDI,ESI                    ; 00425655
    MOVSD ES:EDI,ESI                    ; 00425656
    LEA EAX,[ESP + 0x78]                ; 00425657
    MOV dword ptr [ESP + 0x70],ECX      ; 0042565b
    FLD float ptr [EAX]                 ; 0042565f
    FMUL float ptr [0x005f4060]         ; 00425661 | DAT_005f4060
    FISTP dword ptr [EBX]               ; 00425667
    FLD float ptr [EAX + 0x4]           ; 00425669
    FMUL float ptr [0x005f4060]         ; 0042566c | DAT_005f4060
    FISTP dword ptr [EBX + 0x4]         ; 00425672
    FLD float ptr [EAX + 0x8]           ; 00425675
    FMUL float ptr [0x005f4060]         ; 00425678 | DAT_005f4060
    FISTP dword ptr [EBX + 0x8]         ; 0042567e
    LEA EAX,[ESP + 0x9c]                ; 00425681
    PUSH EAX                            ; 00425688
    MOV EAX,dword ptr [EDX]             ; 00425689 | DAT_01ba5c50
    PUSH EAX                            ; 0042568b
    CALL engine_special.cpp_FUN_0055d723 ; 0042568c
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x98]                ; 00425691
    ADD ESP,0x8                         ; 00425698
    LEA EAX,[ESP + 0x6c]                ; 0042569b
    MOV EDX,dword ptr [0x0060b280]      ; 0042569f | DAT_0060b280
    FLD float ptr [EAX]                 ; 004256a5
    FMUL float ptr [0x005f4060]         ; 004256a7 | DAT_005f4060
    FISTP dword ptr [EBX]               ; 004256ad
    FLD float ptr [EAX + 0x4]           ; 004256af
    FMUL float ptr [0x005f4060]         ; 004256b2 | DAT_005f4060
    FISTP dword ptr [EBX + 0x4]         ; 004256b8
    FLD float ptr [EAX + 0x8]           ; 004256bb
    FMUL float ptr [0x005f4060]         ; 004256be | DAT_005f4060
    FISTP dword ptr [EBX + 0x8]         ; 004256c4
    LEA EAX,[ESP + 0x90]                ; 004256c7
    PUSH EAX                            ; 004256ce
    MOV EAX,dword ptr [EDX]             ; 004256cf | DAT_01ba5c50
    ADD EAX,0x30                        ; 004256d1
    PUSH EAX                            ; 004256d4
    CALL engine_special.cpp_FUN_0055d723 ; 004256d5
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004256da
    MOV EBX,0x1                         ; 004256dd
    PUSH EBX                            ; 004256e2
    PUSH 0x0                            ; 004256e3
    MOV dword ptr [0x01c35e60],EBX      ; 004256e5 | DAT_01c35e60
    CALL engine_3d.c_drawLine2DFromIndices_FUN_00407c40 ; 004256eb
        ;   XREF to: 00407c40 (UNCONDITIONAL_CALL)  ; void engine_3d.c_drawLine2DFromIndices_FUN_00407c40(int vertex_index1, int vertex_index2)
    ADD ESP,0x8                         ; 004256f0
    MOV ESI,0x2                         ; 004256f3
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004256f8
    MOV EDI,dword ptr [ESP + 0xb8]      ; 004256ff
    MOV dword ptr [0x01c35e60],ESI      ; 00425706 | DAT_01c35e60
    CMP EAX,EDI                         ; 0042570c
    JNZ 0x0042571a                      ; 0042570e
        ;   XREF to: 0042571a (CONDITIONAL_JUMP)  ; LAB_0042571a
    MOV dword ptr [0x01c35e60],0xfc     ; 00425710 | DAT_01c35e60
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0042571a
        ;   Label: LAB_0042571a
    FLD float ptr [EAX + 0x24]          ; 00425721
    FMUL float ptr [0x005ccd26]         ; 00425724 | DAT_005ccd26
    FSUBR float ptr [EAX + 0x20]        ; 0042572a
    FSIN                                ; 0042572d
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0042572f
    FMUL float ptr [EAX + 0x4]          ; 00425736
    FSTP float ptr [ESP + 0x6c]         ; 00425739
    FLD float ptr [EAX + 0x24]          ; 0042573d
    FMUL float ptr [0x005ccd26]         ; 00425740 | DAT_005ccd26
    FSUBR float ptr [EAX + 0x20]        ; 00425746
    FCOS                                ; 00425749
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0042574b
    FMUL float ptr [EAX + 0x4]          ; 00425752
    LEA EBX,[ESP + 0x30]                ; 00425755
    MOV EDX,dword ptr [0x0060b280]      ; 00425759 | DAT_0060b280
    LEA EAX,[ESP + 0x6c]                ; 0042575f
    FSTP float ptr [ESP + 0x74]         ; 00425763
    FLD float ptr [EAX]                 ; 00425767
    FMUL float ptr [0x005f4060]         ; 00425769 | DAT_005f4060
    FISTP dword ptr [EBX]               ; 0042576f
    FLD float ptr [EAX + 0x4]           ; 00425771
    FMUL float ptr [0x005f4060]         ; 00425774 | DAT_005f4060
    FISTP dword ptr [EBX + 0x4]         ; 0042577a
    FLD float ptr [EAX + 0x8]           ; 0042577d
    FMUL float ptr [0x005f4060]         ; 00425780 | DAT_005f4060
    FISTP dword ptr [EBX + 0x8]         ; 00425786
    LEA EAX,[ESP + 0x30]                ; 00425789
    PUSH EAX                            ; 0042578d
    MOV EAX,dword ptr [EDX]             ; 0042578e | DAT_01ba5c50
    ADD EAX,0x60                        ; 00425790
    PUSH EAX                            ; 00425793
    CALL engine_special.cpp_FUN_0055d723 ; 00425794
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00425799
    PUSH 0x2                            ; 0042579c
    PUSH 0x0                            ; 0042579e
    CALL engine_3d.c_drawLine2DFromIndices_FUN_00407c40 ; 004257a0
        ;   XREF to: 00407c40 (UNCONDITIONAL_CALL)  ; void engine_3d.c_drawLine2DFromIndices_FUN_00407c40(int vertex_index1, int vertex_index2)
    ADD ESP,0x8                         ; 004257a5
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004257a8
    FLD float ptr [EAX + 0x24]          ; 004257af
    FMUL float ptr [0x005ccd26]         ; 004257b2 | DAT_005ccd26
    FADD float ptr [EAX + 0x20]         ; 004257b8
    FSIN                                ; 004257bb
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004257bd
    FMUL float ptr [EAX + 0x4]          ; 004257c4
    FSTP float ptr [ESP + 0x6c]         ; 004257c7
    FLD float ptr [EAX + 0x24]          ; 004257cb
    FMUL float ptr [0x005ccd26]         ; 004257ce | DAT_005ccd26
    FADD float ptr [EAX + 0x20]         ; 004257d4
    FCOS                                ; 004257d7
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004257d9
    FMUL float ptr [EAX + 0x4]          ; 004257e0
    LEA EBX,[ESP + 0x3c]                ; 004257e3
    MOV EDX,dword ptr [0x0060b280]      ; 004257e7 | DAT_0060b280
    LEA EAX,[ESP + 0x6c]                ; 004257ed
    FSTP float ptr [ESP + 0x74]         ; 004257f1
    FLD float ptr [EAX]                 ; 004257f5
    FMUL float ptr [0x005f4060]         ; 004257f7 | DAT_005f4060
    FISTP dword ptr [EBX]               ; 004257fd
    FLD float ptr [EAX + 0x4]           ; 004257ff
    FMUL float ptr [0x005f4060]         ; 00425802 | DAT_005f4060
    FISTP dword ptr [EBX + 0x4]         ; 00425808
    FLD float ptr [EAX + 0x8]           ; 0042580b
    FMUL float ptr [0x005f4060]         ; 0042580e | DAT_005f4060
    FISTP dword ptr [EBX + 0x8]         ; 00425814
    LEA EAX,[ESP + 0x3c]                ; 00425817
    PUSH EAX                            ; 0042581b
    MOV EAX,dword ptr [EDX]             ; 0042581c | DAT_01ba5c50
    ADD EAX,0x90                        ; 0042581e
    PUSH EAX                            ; 00425823
    CALL engine_special.cpp_FUN_0055d723 ; 00425824
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00425829
    PUSH 0x3                            ; 0042582c
    PUSH 0x0                            ; 0042582e
    CALL engine_3d.c_drawLine2DFromIndices_FUN_00407c40 ; 00425830
        ;   XREF to: 00407c40 (UNCONDITIONAL_CALL)  ; void engine_3d.c_drawLine2DFromIndices_FUN_00407c40(int vertex_index1, int vertex_index2)
    ADD ESP,0x8                         ; 00425835
    MOV EDX,dword ptr [ESP + 0xbc]      ; 00425838
    LEA EAX,[ESP + 0x6c]                ; 0042583f
    ADD EDX,0x8                         ; 00425843
    CMP EAX,EDX                         ; 00425846
    JNZ 0x0042597c                      ; 00425848
        ;   XREF to: 0042597c (CONDITIONAL_JUMP)  ; LAB_0042597c
    XOR ESI,ESI                         ; 0042584e
        ;   Label: LAB_0042584e
    MOV EAX,dword ptr [ESP + 0xbc]      ; 00425850
        ;   Label: LAB_00425850
    MOV dword ptr [ESP + 0xc0],ESI      ; 00425857
    XOR EDX,EDX                         ; 0042585e
    FILD dword ptr [ESP + 0xc0]         ; 00425860
    MOV dword ptr [ESP + 0x64],EDX      ; 00425867
    FMUL float ptr [0x005ccd2a]         ; 0042586b | DAT_005ccd2a
    FLD float ptr [EAX + 0x28]          ; 00425871
    FLD ST1                             ; 00425874
    FSIN                                ; 00425876
    FXCH ST2                            ; 00425878
    FCOS                                ; 0042587a
    FXCH ST2                            ; 0042587c
    FMULP                               ; 0042587e
    FADD float ptr [ESP + 0x6c]         ; 00425880
    MOV EAX,dword ptr [ESP + 0xbc]      ; 00425884
    FSTP float ptr [ESP + 0x60]         ; 0042588b
    FMUL float ptr [EAX + 0x28]         ; 0042588f
    FADD float ptr [ESP + 0x74]         ; 00425892
    FSTP float ptr [ESP + 0x68]         ; 00425896
    TEST ESI,ESI                        ; 0042589a
    JZ 0x00425995                       ; 0042589c
        ;   XREF to: 00425995 (CONDITIONAL_JUMP)  ; LAB_00425995
    LEA EBX,[ESP + 0x84]                ; 004258a2
    LEA EAX,[ESP + 0x60]                ; 004258a9
    MOV EDX,dword ptr [0x0060b280]      ; 004258ad | DAT_0060b280
    FLD float ptr [EAX]                 ; 004258b3
    FMUL float ptr [0x005f4060]         ; 004258b5 | DAT_005f4060
    FISTP dword ptr [EBX]               ; 004258bb
    FLD float ptr [EAX + 0x4]           ; 004258bd
    FMUL float ptr [0x005f4060]         ; 004258c0 | DAT_005f4060
    FISTP dword ptr [EBX + 0x4]         ; 004258c6
    FLD float ptr [EAX + 0x8]           ; 004258c9
    FMUL float ptr [0x005f4060]         ; 004258cc | DAT_005f4060
    FISTP dword ptr [EBX + 0x8]         ; 004258d2
    LEA EAX,[ESP + 0x84]                ; 004258d5
    PUSH EAX                            ; 004258dc
    MOV EAX,dword ptr [EDX]             ; 004258dd | DAT_01ba5c50
    ADD EAX,0x30                        ; 004258df
    PUSH EAX                            ; 004258e2
    CALL engine_special.cpp_FUN_0055d723 ; 004258e3
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004258e8
    PUSH 0x1                            ; 004258eb
    MOV ECX,0x4                         ; 004258ed
    PUSH 0x0                            ; 004258f2
    LEA EBX,[ESP + 0x5c]                ; 004258f4
    MOV dword ptr [0x01c35e60],ECX      ; 004258f8 | DAT_01c35e60
    CALL engine_3d.c_drawLine2DFromIndices_FUN_00407c40 ; 004258fe
        ;   XREF to: 00407c40 (UNCONDITIONAL_CALL)  ; void engine_3d.c_drawLine2DFromIndices_FUN_00407c40(int vertex_index1, int vertex_index2)
    ADD ESP,0x8                         ; 00425903
    LEA EAX,[ESP + 0x60]                ; 00425906
    MOV EDX,dword ptr [0x0060b280]      ; 0042590a | DAT_0060b280
    FLD float ptr [EAX]                 ; 00425910
    FMUL float ptr [0x005f4060]         ; 00425912 | DAT_005f4060
    FISTP dword ptr [EBX]               ; 00425918
    FLD float ptr [EAX + 0x4]           ; 0042591a
    FMUL float ptr [0x005f4060]         ; 0042591d | DAT_005f4060
    FISTP dword ptr [EBX + 0x4]         ; 00425923
    FLD float ptr [EAX + 0x8]           ; 00425926
    FMUL float ptr [0x005f4060]         ; 00425929 | DAT_005f4060
    FISTP dword ptr [EBX + 0x8]         ; 0042592f
    LEA EAX,[ESP + 0x54]                ; 00425932
    PUSH EAX                            ; 00425936
        ;   Label: LAB_00425936
    MOV EAX,dword ptr [EDX]             ; 00425937 | DAT_01ba5c50
    PUSH EAX                            ; 00425939
    CALL engine_special.cpp_FUN_0055d723 ; 0042593a
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0042593f
    INC ESI                             ; 00425942
    CMP ESI,0x15                        ; 00425943
    JL 0x00425850                       ; 00425946
        ;   XREF to: 00425850 (CONDITIONAL_JUMP)  ; LAB_00425850
    MOV EAX,[0x0060b280]                ; 0042594c | DAT_0060b280
    MOV EAX,dword ptr [EAX]             ; 00425951 | DAT_01ba5c50
    MOV DL,byte ptr [EAX + 0x43]        ; 00425953
    ADD EAX,0x30                        ; 00425956
    TEST DL,0x80                        ; 00425959
    JZ 0x004259ce                       ; 0042595c
        ;   XREF to: 004259ce (CONDITIONAL_JUMP)  ; LAB_004259ce
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0042595e
        ;   Label: LAB_0042595e
    MOV EAX,dword ptr [EAX + 0x38]      ; 00425965
    MOV dword ptr [ESP + 0xbc],EAX      ; 00425968
    TEST EAX,EAX                        ; 0042596f
    JNZ 0x0042562c                      ; 00425971
        ;   XREF to: 0042562c (CONDITIONAL_JUMP)  ; LAB_0042562c
    JMP 0x00425568                      ; 00425977
        ;   XREF to: 00425568 (UNCONDITIONAL_JUMP)  ; LAB_00425568
    MOV EAX,dword ptr [EDX]             ; 0042597c
        ;   Label: LAB_0042597c
    MOV dword ptr [ESP + 0x6c],EAX      ; 0042597e
    MOV EAX,dword ptr [EDX + 0x4]       ; 00425982
    MOV dword ptr [ESP + 0x70],EAX      ; 00425985
    MOV EAX,dword ptr [EDX + 0x8]       ; 00425989
    MOV dword ptr [ESP + 0x74],EAX      ; 0042598c
    JMP 0x0042584e                      ; 00425990
        ;   XREF to: 0042584e (UNCONDITIONAL_JUMP)  ; LAB_0042584e
    LEA EBX,[ESP + 0x48]                ; 00425995
        ;   Label: LAB_00425995
    LEA EAX,[ESP + 0x60]                ; 00425999
    MOV EDX,dword ptr [0x0060b280]      ; 0042599d | DAT_0060b280
    FLD float ptr [EAX]                 ; 004259a3
    FMUL float ptr [0x005f4060]         ; 004259a5 | DAT_005f4060
    FISTP dword ptr [EBX]               ; 004259ab
    FLD float ptr [EAX + 0x4]           ; 004259ad
    FMUL float ptr [0x005f4060]         ; 004259b0 | DAT_005f4060
    FISTP dword ptr [EBX + 0x4]         ; 004259b6
    FLD float ptr [EAX + 0x8]           ; 004259b9
    FMUL float ptr [0x005f4060]         ; 004259bc | DAT_005f4060
    FISTP dword ptr [EBX + 0x8]         ; 004259c2
    LEA EAX,[ESP + 0x48]                ; 004259c5
    JMP 0x00425936                      ; 004259c9
        ;   XREF to: 00425936 (UNCONDITIONAL_JUMP)  ; LAB_00425936
    MOV EDX,dword ptr [EAX + 0x14]      ; 004259ce
        ;   Label: LAB_004259ce
    SAR EDX,0x10                        ; 004259d1
    MOV EAX,dword ptr [EAX + 0x10]      ; 004259d4
    PUSH EDX                            ; 004259d7
    SAR EAX,0x10                        ; 004259d8
    PUSH EAX                            ; 004259db
    MOV EAX,dword ptr [ESP + 0xc4]      ; 004259dc
    MOV EBX,dword ptr [EAX]             ; 004259e3
    PUSH EBX                            ; 004259e5
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004259e6
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004259eb
    JMP 0x0042595e                      ; 004259ee
        ;   XREF to: 0042595e (UNCONDITIONAL_JUMP)  ; LAB_0042595e

