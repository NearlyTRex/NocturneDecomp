; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_npc_cpp_CNPC_renderTransparent_FUN_005095f0(CNPC *this_ptr)
;
; Parameters:
; CNPC *           Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x28]:1  local_28
;
; XREF[1]:
;   core_spirindi.cpp_CSpiritIndian_renderTransparent_FUN_0059a850 at 0059a884
;
; Referenced Globals:
;   TerminatedCString s_heroCanSee_005cb5c3
;   undefined4 DAT_005cb5d0
;   undefined4 DAT_005cb5d8
;   undefined4 DAT_005cb5e0
;   undefined4 DAT_005cb5e8
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005fba60
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01d8e40c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0
;   core_box.cpp_FUN_0041daf0
;   core_cloth.cpp_CClothList_render_FUN_0043fc50
;   core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0
;   core_motion.cpp_FUN_004fcdc0
;   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_0054e3a0
;   crt_math.c_round_FUN_005a3120
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
;   engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005095f0
        ;   Label: core_npc.cpp_CNPC_renderTransparent_FUN_005095f0
    PUSH ESI                            ; 005095f1
    PUSH EDI                            ; 005095f2
    PUSH EBP                            ; 005095f3
    MOV EBP,ESP                         ; 005095f4
    SUB ESP,0x30                        ; 005095f6
    AND ESP,0xfffffff8                  ; 005095f9
    MOV EBX,dword ptr [EBP + 0x14]      ; 005095fc
    CMP dword ptr [EBX + 0x206b8],-0x1  ; 005095ff
    JNZ 0x00509615                      ; 00509606
        ;   XREF to: 00509615 (CONDITIONAL_JUMP)  ; LAB_00509615
    CMP dword ptr [EBX + 0x27a8],0x0    ; 00509608
    JZ 0x005097a1                       ; 0050960f
        ;   XREF to: 005097a1 (CONDITIONAL_JUMP)  ; LAB_005097a1
    CMP dword ptr [EBX + 0x27a8],0x0    ; 00509615
        ;   Label: LAB_00509615
    JNZ 0x005097b7                      ; 0050961c
        ;   XREF to: 005097b7 (CONDITIONAL_JUMP)  ; LAB_005097b7
    CMP dword ptr [EBX + 0x206ac],0x0   ; 00509622
        ;   Label: LAB_00509622
    JNZ 0x005097ae                      ; 00509629
        ;   XREF to: 005097ae (CONDITIONAL_JUMP)  ; LAB_005097ae
    FLD float ptr [EBX + 0x206c0]       ; 0050962f
    FLDZ                                ; 00509635
    FCOMPP                              ; 00509637
    FNSTSW AX                           ; 00509639
    SAHF                                ; 0050963b
    JNC 0x005096ae                      ; 0050963c
        ;   XREF to: 005096ae (CONDITIONAL_JUMP)  ; LAB_005096ae
    CMP dword ptr [EBX + 0x206b8],0x0   ; 0050963e
    JZ 0x005097d9                       ; 00509645
        ;   XREF to: 005097d9 (CONDITIONAL_JUMP)  ; LAB_005097d9
    FLD float ptr [EBX + 0x206c0]       ; 0050964b
    FDIV float ptr [EBX + 0x206c4]      ; 00509651
    FLD1                                ; 00509657
    FSUBRP                              ; 00509659
    FMUL double ptr [0x005cb5d8]        ; 0050965b | DAT_005cb5d8
    CALL crt_math.c_round_FUN_005a3120  ; 00509661
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
        ;   Label: LAB_00509661
    FISTP dword ptr [EBX + 0x206b4]     ; 00509666
    MOV ESI,dword ptr [EBX + 0x2f08]    ; 0050966c
    XOR EAX,EAX                         ; 00509672
    TEST ESI,ESI                        ; 00509674
    JLE 0x005096ae                      ; 00509676
        ;   XREF to: 005096ae (CONDITIONAL_JUMP)  ; LAB_005096ae
    FLD double ptr [0x005cb5e0]         ; 00509678 | DAT_005cb5e0
    FLD double ptr [0x005cb5e8]         ; 0050967e | DAT_005cb5e8
    MOV EDX,EBX                         ; 00509684
    FILD dword ptr [EBX + 0x206b4]      ; 00509686
        ;   Label: LAB_00509686
    FADD ST0,ST1                        ; 0050968c
    FMUL ST2                            ; 0050968e
    MOV ECX,dword ptr [EDX + 0x309c]    ; 00509690
    INC EAX                             ; 00509696
    FSTP float ptr [ECX + 0x37b18]      ; 00509697
    MOV EDI,dword ptr [EBX + 0x2f08]    ; 0050969d
    ADD EDX,0x4                         ; 005096a3
    CMP EAX,EDI                         ; 005096a6
    JL 0x00509686                       ; 005096a8
        ;   XREF to: 00509686 (CONDITIONAL_JUMP)  ; LAB_00509686
    FSTP ST0                            ; 005096aa
    FSTP ST0                            ; 005096ac
    PUSH EBX                            ; 005096ae
        ;   Label: LAB_005096ae
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0 ; 005096af
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005096b4
    PUSH 0x0                            ; 005096b7
    MOV EAX,dword ptr [EBX + 0x154]     ; 005096b9
    PUSH EBX                            ; 005096bf
    LEA ESI,[ESP + 0x20]                ; 005096c0
    LEA EDI,[ESP + 0x8]                 ; 005096c4
    CALL dword ptr [EAX + 0x1c]         ; 005096c8
    MOV ECX,0x6                         ; 005096cb
    ADD ESP,0x4                         ; 005096d0
    LEA EAX,[ESP + 0x4]                 ; 005096d3
    LEA ESI,[ESP + 0x1c]                ; 005096d7
    PUSH EAX                            ; 005096db
    MOVSD.REP ES:EDI,ESI                ; 005096dc
    CALL core_box.cpp_FUN_0041daf0      ; 005096de
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 005096e3
    TEST EAX,EAX                        ; 005096e6
    JZ 0x0050977a                       ; 005096e8
        ;   XREF to: 0050977a (CONDITIONAL_JUMP)  ; LAB_0050977a
    MOV EAX,dword ptr [EBX + 0x206b4]   ; 005096ee
    PUSH EAX                            ; 005096f4
    MOV EDX,dword ptr [0x005f2afc]      ; 005096f5 | DAT_005f2afc
    PUSH EDX                            ; 005096fb | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x27bc],0x1    ; 005096fc
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 00509706
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    MOV ECX,dword ptr [EBX + 0xcdc4]    ; 0050970b
    ADD ESP,0x8                         ; 00509711
    TEST ECX,ECX                        ; 00509714
    JZ 0x005097f0                       ; 00509716
        ;   XREF to: 005097f0 (CONDITIONAL_JUMP)  ; LAB_005097f0
    PUSH 0x1                            ; 0050971c
    MOV EDI,dword ptr [0x005f2afc]      ; 0050971e | DAT_005f2afc
    PUSH EDI                            ; 00509724 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 00509725
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
        ;   Label: LAB_00509725
    ADD ESP,0x8                         ; 0050972a
    PUSH 0x1                            ; 0050972d
    MOV EAX,[0x005f2afc]                ; 0050972f | DAT_005f2afc
    PUSH EAX                            ; 00509734 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120 ; 00509735
        ;   XREF to: 0046e120 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120(CDemonRenderer * this_ptr, int enable_advanced_mode)
    ADD ESP,0x8                         ; 0050973a
    PUSH 0x0                            ; 0050973d
    PUSH 0x1                            ; 0050973f
    PUSH 0x2e7                          ; 00509741
    PUSH -0x1                           ; 00509746
    LEA ESI,[EBX + 0x158]               ; 00509748
    PUSH ESI                            ; 0050974e
    CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_0054e3a0 ; 0050974f
        ;   XREF to: 0054e3a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_0054e3a0(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
    ADD ESP,0x14                        ; 00509754
    MOV EDX,dword ptr [0x005f2afc]      ; 00509757 | DAT_005f2afc
    PUSH EDX                            ; 0050975d | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0 ; 0050975e
        ;   XREF to: 0046e4e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0(CDemonRenderer * this_ptr)
    MOV ECX,dword ptr [0x01d8e40c]      ; 00509763 | DAT_01d8e40c
    ADD ESP,0x4                         ; 00509769
    TEST ECX,ECX                        ; 0050976c
    JZ 0x0050977a                       ; 0050976e
        ;   XREF to: 0050977a (CONDITIONAL_JUMP)  ; LAB_0050977a
    PUSH EBX                            ; 00509770
    PUSH ESI                            ; 00509771
    CALL core_motion.cpp_FUN_004fcdc0   ; 00509772
        ;   XREF to: 004fcdc0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_FUN_004fcdc0(CMotionController * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00509777
    PUSH 0x0                            ; 0050977a
        ;   Label: LAB_0050977a
    LEA EAX,[EBX + 0x2f08]              ; 0050977c
    PUSH EAX                            ; 00509782
    CALL core_cloth.cpp_CClothList_render_FUN_0043fc50 ; 00509783
        ;   XREF to: 0043fc50 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_render_FUN_0043fc50(CClothList * this_ptr, CDeformableModelInstance * model_ptr)
    ADD ESP,0x8                         ; 00509788
    PUSH EBX                            ; 0050978b
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 0050978c
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00509791
    MOV EAX,dword ptr [EBX + 0x27bc]    ; 00509794
    MOV ESP,EBP                         ; 0050979a
    POP EBP                             ; 0050979c
    POP EDI                             ; 0050979d
    POP ESI                             ; 0050979e
    POP EBX                             ; 0050979f
    RET                                 ; 005097a0
    CMP dword ptr [EBX + 0xcdc4],0x0    ; 005097a1
        ;   Label: LAB_005097a1
    JNZ 0x00509615                      ; 005097a8
        ;   XREF to: 00509615 (CONDITIONAL_JUMP)  ; LAB_00509615
    XOR EAX,EAX                         ; 005097ae
        ;   Label: LAB_005097ae
    MOV ESP,EBP                         ; 005097b0
    POP EBP                             ; 005097b2
    POP EDI                             ; 005097b3
    POP ESI                             ; 005097b4
    POP EBX                             ; 005097b5
    RET                                 ; 005097b6
    PUSH 0x5cb5c3                       ; 005097b7 | = "heroCanSee"
        ;   Label: LAB_005097b7
    MOV EAX,[0x005fba60]                ; 005097bc | DAT_005fba60
    PUSH EAX                            ; 005097c1
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 005097c2
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005097c7
    TEST EAX,EAX                        ; 005097ca
    JNZ 0x00509622                      ; 005097cc
        ;   XREF to: 00509622 (CONDITIONAL_JUMP)  ; LAB_00509622
    MOV ESP,EBP                         ; 005097d2
    POP EBP                             ; 005097d4
    POP EDI                             ; 005097d5
    POP ESI                             ; 005097d6
    POP EBX                             ; 005097d7
    RET                                 ; 005097d8
    FLD float ptr [EBX + 0x206c0]       ; 005097d9
        ;   Label: LAB_005097d9
    FDIV float ptr [EBX + 0x206c4]      ; 005097df
    FMUL float ptr [0x005cb5d0]         ; 005097e5 | DAT_005cb5d0
    JMP 0x00509661                      ; 005097eb
        ;   XREF to: 00509661 (UNCONDITIONAL_JUMP)  ; LAB_00509661
    PUSH ECX                            ; 005097f0
        ;   Label: LAB_005097f0
    MOV ESI,dword ptr [0x005f2afc]      ; 005097f1 | DAT_005f2afc
    PUSH ESI                            ; 005097f7 | DAT_01bdd7e4
    JMP 0x00509725                      ; 005097f8
        ;   XREF to: 00509725 (UNCONDITIONAL_JUMP)  ; LAB_00509725

