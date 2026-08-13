; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_bugs_cpp_CBugs_renderOpaque_FUN_00421540(CBugs *this_ptr)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x44]:1  local_44
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   undefined4 DAT_01b4d738
;   CDemonSet g_CDemonSet_01e57284
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
;   core_set.cpp_CDemonSet_FUN_0050e370
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00421540
        ;   Label: core_bugs.cpp_CBugs_renderOpaque_FUN_00421540
    SUB ESP,0x40                        ; 00421541
    MOV EAX,dword ptr [ESP + 0x48]      ; 00421544
    CMP dword ptr [EAX + 0x2404],0x0    ; 00421548
    JZ 0x00421558                       ; 0042154f
        ;   XREF to: 00421558 (CONDITIONAL_JUMP)  ; LAB_00421558
    XOR EAX,EAX                         ; 00421551
        ;   Label: LAB_00421551
    ADD ESP,0x40                        ; 00421553
    POP EBP                             ; 00421556
    RET                                 ; 00421557
    MOV ECX,dword ptr [0x005ae704]      ; 00421558 | g_CDemonRenderer_PTR_005ae704
        ;   Label: LAB_00421558
    PUSH ECX                            ; 0042155e | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 0042155f
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00421564
    TEST EAX,EAX                        ; 00421567
    JNZ 0x00421551                      ; 00421569
        ;   XREF to: 00421551 (CONDITIONAL_JUMP)  ; LAB_00421551
    PUSH EBX                            ; 0042156b
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0042156c
    PUSH EBX                            ; 00421570
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 00421571
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor * actor)
    ADD ESP,0x4                         ; 00421576
    PUSH 0x0                            ; 00421579
    LEA EDX,[ESP + 0x8]                 ; 0042157b
    PUSH EDX                            ; 0042157f
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00421580
    PUSH EBX                            ; 00421586
    CALL dword ptr [EAX + 0x14]         ; 00421587
    ADD ESP,0x8                         ; 0042158a
    PUSH EAX                            ; 0042158d
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 0042158e
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x8                         ; 00421593
    MOV dword ptr [ESP + 0x34],EAX      ; 00421596
    TEST EAX,EAX                        ; 0042159a
    JZ 0x004216b9                       ; 0042159c
        ;   XREF to: 004216b9 (CONDITIONAL_JUMP)  ; LAB_004216b9
    PUSH EDI                            ; 004215a2
    PUSH ESI                            ; 004215a3
    MOV EDI,dword ptr [EBX + 0xbd28]    ; 004215a4
    XOR ESI,ESI                         ; 004215aa
    TEST EDI,EDI                        ; 004215ac
    JLE 0x004216a6                      ; 004215ae
        ;   XREF to: 004216a6 (CONDITIONAL_JUMP)  ; LAB_004216a6
    LEA EAX,[EBX + 0x12130]             ; 004215b4
    MOV dword ptr [ESP + 0x40],EAX      ; 004215ba
    LEA EAX,[EBX + 0xbd2c]              ; 004215be
    LEA EDI,[EBX + 0x20]                ; 004215c4
    LEA EBP,[EBX + 0xbd40]              ; 004215c7
    MOV dword ptr [ESP + 0x44],EAX      ; 004215cd
    ADD EBX,0xbd34                      ; 004215d1
    MOV EDX,dword ptr [ESP + 0x44]      ; 004215d7
        ;   Label: LAB_004215d7
    MOV EAX,ESI                         ; 004215db
    PUSH EBX                            ; 004215dd
    SHL EAX,0x6                         ; 004215de
    PUSH EBP                            ; 004215e1
    ADD EDX,EAX                         ; 004215e2
    MOV EAX,[0x005ae704]                ; 004215e4 | g_CDemonRenderer_PTR_005ae704
    PUSH EAX                            ; 004215e9 | DAT_01b4d738
    MOV dword ptr [ESP + 0x54],EDX      ; 004215ea
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 004215ee
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    FLD float ptr [EDI]                 ; 004215f3
    FADD float ptr [EBX]                ; 004215f5
    ADD ESP,0xc                         ; 004215f7
    FSTP float ptr [ESP + 0x30]         ; 004215fa
    FLD float ptr [EDI + 0x4]           ; 004215fe
    FADD float ptr [EBX + 0x4]          ; 00421601
    LEA EDX,[ESP + 0x30]                ; 00421604
    FSTP float ptr [ESP + 0x34]         ; 00421608
    FLD float ptr [EDI + 0x8]           ; 0042160c
    FADD float ptr [EBX + 0x8]          ; 0042160f
    LEA EAX,[ESP + 0x24]                ; 00421612
    FSTP float ptr [ESP + 0x38]         ; 00421616
    CMP EAX,EDX                         ; 0042161a
    JZ 0x00421636                       ; 0042161c
        ;   XREF to: 00421636 (CONDITIONAL_JUMP)  ; LAB_00421636
    MOV EAX,dword ptr [ESP + 0x30]      ; 0042161e
    MOV dword ptr [ESP + 0x24],EAX      ; 00421622
    MOV EAX,dword ptr [ESP + 0x34]      ; 00421626
    MOV dword ptr [ESP + 0x28],EAX      ; 0042162a
    MOV EAX,dword ptr [ESP + 0x38]      ; 0042162e
    MOV dword ptr [ESP + 0x2c],EAX      ; 00421632
    LEA EAX,[ESP + 0x24]                ; 00421636
        ;   Label: LAB_00421636
    PUSH EAX                            ; 0042163a
    MOV EAX,[0x005be368]                ; 0042163b | g_CDemonSet_PTR_005be368
    PUSH EAX                            ; 00421640 | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_FUN_0050e370 ; 00421641
        ;   XREF to: 0050e370 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0050e370(CDemonSet * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 00421646
    PUSH 0xffff                         ; 00421649
    MOV EDX,dword ptr [0x005ae704]      ; 0042164e | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 00421654 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 00421655
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0042165a
    MOV EAX,dword ptr [ESP + 0x48]      ; 0042165d
    IMUL EAX,dword ptr [EAX + 0x4],0x17c ; 00421661
    MOV EDX,dword ptr [ESP + 0x40]      ; 00421668
    PUSH 0x2e7                          ; 0042166c
    ADD EAX,EDX                         ; 00421671
    PUSH 0x0                            ; 00421673
    PUSH EAX                            ; 00421675
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 00421676
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0042167b
    MOV ECX,dword ptr [0x005ae704]      ; 0042167e | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 00421684 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 00421685
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0042168a
    MOV EAX,dword ptr [ESP + 0x54]      ; 0042168d
    ADD EBP,0x40                        ; 00421691
    INC ESI                             ; 00421694
    MOV EDX,dword ptr [EAX + 0xbd28]    ; 00421695
    ADD EBX,0x40                        ; 0042169b
    CMP ESI,EDX                         ; 0042169e
    JL 0x004215d7                       ; 004216a0
        ;   XREF to: 004215d7 (CONDITIONAL_JUMP)  ; LAB_004215d7
    PUSH 0x0                            ; 004216a6
        ;   Label: LAB_004216a6
    MOV ECX,dword ptr [0x005be368]      ; 004216a8 | g_CDemonSet_PTR_005be368
    PUSH ECX                            ; 004216ae | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_FUN_0050e370 ; 004216af
        ;   XREF to: 0050e370 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0050e370(CDemonSet * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 004216b4
    POP ESI                             ; 004216b7
    POP EDI                             ; 004216b8
    MOV EDX,dword ptr [ESP + 0x4c]      ; 004216b9
        ;   Label: LAB_004216b9
    PUSH EDX                            ; 004216bd
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 004216be
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004216c3
    MOV EAX,dword ptr [ESP + 0x34]      ; 004216c6
    POP EBX                             ; 004216ca
    ADD ESP,0x40                        ; 004216cb
    POP EBP                             ; 004216ce
    RET                                 ; 004216cf

