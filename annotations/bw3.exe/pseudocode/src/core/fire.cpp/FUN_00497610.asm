; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_FUN_00497610(CBulletHole *this_ptr)
;
; Parameters:
; CBulletHole *    Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined        Stack[-0x78]:1  local_78
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_fire.cpp_CFireEffect_renderDecals_FUN_004a1e90 at 004a1ecf
;   core_fire.cpp_FUN_004a1ad0 at 004a1c27
;
; Referenced Globals:
;   undefined4 DAT_005df8e4
;   undefined4 DAT_005df8e8
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005fc964
;   undefined4 DAT_005fc97c
;   undefined4 DAT_005fc994
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_0060b02c
;   undefined4 DAT_0060b030
;   undefined4 DAT_0060b034
;   undefined4 DAT_0060b038
;   undefined4 DAT_0060b03c
;   undefined4 DAT_0060b05c
;   undefined4 DAT_0060b060
;   undefined4 DAT_0060b064
;   ... and 15 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0
;   core_actor.cpp_FUN_00408b00
;   core_set.cpp_CDemonSet_computeLighting_FUN_00538400
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730
;   engine_matrix.c_pop_FUN_0046d080
;   engine_special.cpp_FUN_005632a3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00497610
        ;   Label: core_fire.cpp_FUN_00497610
    PUSH ESI                            ; 00497611
    PUSH EDI                            ; 00497612
    PUSH EBP                            ; 00497613
    SUB ESP,0x74                        ; 00497614
    MOV EBP,dword ptr [ESP + 0x88]      ; 00497617
    LEA EBX,[EBP + 0x14]                ; 0049761e
    XOR EDX,EDX                         ; 00497621
    MOV ECX,dword ptr [EBP + 0x10]      ; 00497623
    MOV dword ptr [ESP + 0x70],EDX      ; 00497626
    TEST ECX,ECX                        ; 0049762a
    JZ 0x004978c7                       ; 0049762c
        ;   XREF to: 004978c7 (CONDITIONAL_JUMP)  ; LAB_004978c7
    PUSH ECX                            ; 00497632
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0 ; 00497633
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00497638
    LEA EAX,[EBP + 0x24]                ; 0049763b
    PUSH EAX                            ; 0049763e
    PUSH EBX                            ; 0049763f
    MOV EDI,dword ptr [0x005f2afc]      ; 00497640 | DAT_005f2afc
    PUSH EDI                            ; 00497646 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 00497647
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
        ;   Label: LAB_00497647
    ADD ESP,0xc                         ; 0049764c
    MOV ECX,dword ptr [EBP + 0x3c]      ; 0049764f
    TEST ECX,ECX                        ; 00497652
    JNZ 0x004978e5                      ; 00497654
        ;   XREF to: 004978e5 (CONDITIONAL_JUMP)  ; LAB_004978e5
    PUSH 0x5fc964                       ; 0049765a | DAT_005fc964
    MOV EDX,dword ptr [0x005f2afc]      ; 0049765f | DAT_005f2afc
    PUSH EDX                            ; 00497665 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 00497666
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
        ;   Label: LAB_00497666
    ADD ESP,0x8                         ; 0049766b
    CMP dword ptr [EBP + 0x3c],0x0      ; 0049766e
        ;   Label: LAB_0049766e
    JNZ 0x00497914                      ; 00497672
        ;   XREF to: 00497914 (CONDITIONAL_JUMP)  ; LAB_00497914
    MOV EBX,dword ptr [EBP + 0x20]      ; 00497678
    AND EBX,0x1                         ; 0049767b
    MOV EAX,dword ptr [EBP + 0x20]      ; 0049767e
    SHL EBX,0x17                        ; 00497681
    AND EAX,0x2                         ; 00497684
    LEA ESI,[EBX + 0x80000]             ; 00497687
    SHL EAX,0x16                        ; 0049768d
    MOV dword ptr [0x0060b02c],ESI      ; 00497690 | DAT_0060b02c
    ADD EBX,0x780000                    ; 00497696 | DAT_00780000
    LEA ESI,[EAX + 0x780000]            ; 0049769c | DAT_00780000
    MOV dword ptr [0x0060b05c],EBX      ; 004976a2 | DAT_0060b05c
    ADD EAX,0x80000                     ; 004976a8
    MOV dword ptr [0x0060b08c],EBX      ; 004976ad | DAT_0060b08c
    MOV [0x0060b090],EAX                ; 004976b3 | DAT_0060b090
    MOV EAX,[0x0060b02c]                ; 004976b8 | DAT_0060b02c
    MOV dword ptr [0x0060b030],ESI      ; 004976bd | DAT_0060b030
    MOV [0x0060b0bc],EAX                ; 004976c3 | DAT_0060b0bc
    MOV EAX,[0x0060b090]                ; 004976c8 | DAT_0060b090
    MOV dword ptr [0x0060b060],ESI      ; 004976cd | DAT_0060b060
    MOV [0x0060b0c0],EAX                ; 004976d3 | DAT_0060b0c0
    MOV EDI,dword ptr [EBP + 0x3c]      ; 004976d8
        ;   Label: LAB_004976d8
    TEST EDI,EDI                        ; 004976db
    JNZ 0x00497953                      ; 004976dd
        ;   XREF to: 00497953 (CONDITIONAL_JUMP)  ; LAB_00497953
    MOV dword ptr [ESP + 0x70],0x3e2e147b ; 004976e3
    FLD float ptr [ESP + 0x70]          ; 004976eb
        ;   Label: LAB_004976eb
    LEA EBX,[ESP + 0x18]                ; 004976ef
    MOV ESI,dword ptr [0x005f2afc]      ; 004976f3 | DAT_005f2afc
    FCHS                                ; 004976f9
    FSTP float ptr [ESP + 0x24]         ; 004976fb
    MOV EAX,dword ptr [ESP + 0x24]      ; 004976ff
    XOR EDI,EDI                         ; 00497703
    MOV dword ptr [ESP + 0x6c],EAX      ; 00497705
    MOV dword ptr [ESP + 0x28],EAX      ; 00497709
    LEA EAX,[ESP + 0x24]                ; 0049770d
    MOV dword ptr [ESP + 0x2c],EDI      ; 00497711
    FLD float ptr [EAX]                 ; 00497715
    FMUL float ptr [0x005df8e4]         ; 00497717 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 0049771d
    FLD float ptr [EAX + 0x4]           ; 0049771f
    FMUL float ptr [0x005df8e4]         ; 00497722 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 00497728
    FLD float ptr [EAX + 0x8]           ; 0049772b
    FMUL float ptr [0x005df8e4]         ; 0049772e | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 00497734
    LEA EAX,[ESP + 0x18]                ; 00497737
    PUSH EAX                            ; 0049773b
    MOV EAX,dword ptr [ESI]             ; 0049773c | DAT_01bdd7e4
    PUSH EAX                            ; 0049773e
    CALL engine_special.cpp_FUN_005632a3 ; 0049773f
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00497744
    MOV EAX,dword ptr [ESP + 0x70]      ; 00497747
    LEA EBX,[ESP + 0x3c]                ; 0049774b
    MOV dword ptr [ESP + 0x24],EAX      ; 0049774f
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00497753
    MOV ESI,dword ptr [0x005f2afc]      ; 00497757 | DAT_005f2afc
    MOV dword ptr [ESP + 0x28],EAX      ; 0049775d
    LEA EAX,[ESP + 0x24]                ; 00497761
    MOV dword ptr [ESP + 0x2c],EDI      ; 00497765
    FLD float ptr [EAX]                 ; 00497769
    FMUL float ptr [0x005df8e4]         ; 0049776b | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 00497771
    FLD float ptr [EAX + 0x4]           ; 00497773
    FMUL float ptr [0x005df8e4]         ; 00497776 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049777c
    FLD float ptr [EAX + 0x8]           ; 0049777f
    FMUL float ptr [0x005df8e4]         ; 00497782 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 00497788
    LEA EAX,[ESP + 0x3c]                ; 0049778b
    PUSH EAX                            ; 0049778f
    MOV EAX,dword ptr [ESI]             ; 00497790 | DAT_01bdd7e4
    ADD EAX,0x30                        ; 00497792
    PUSH EAX                            ; 00497795
    CALL engine_special.cpp_FUN_005632a3 ; 00497796
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0049779b
    MOV EBX,ESP                         ; 0049779e
    MOV EAX,dword ptr [ESP + 0x70]      ; 004977a0
    MOV ESI,dword ptr [0x005f2afc]      ; 004977a4 | DAT_005f2afc
    MOV dword ptr [ESP + 0x24],EAX      ; 004977aa
    MOV dword ptr [ESP + 0x28],EAX      ; 004977ae
    LEA EAX,[ESP + 0x24]                ; 004977b2
    MOV dword ptr [ESP + 0x2c],EDI      ; 004977b6
    FLD float ptr [EAX]                 ; 004977ba
    FMUL float ptr [0x005df8e4]         ; 004977bc | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 004977c2
    FLD float ptr [EAX + 0x4]           ; 004977c4
    FMUL float ptr [0x005df8e4]         ; 004977c7 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 004977cd
    FLD float ptr [EAX + 0x8]           ; 004977d0
    FMUL float ptr [0x005df8e4]         ; 004977d3 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 004977d9
    MOV EAX,ESP                         ; 004977dc
    PUSH EAX                            ; 004977de
    MOV EAX,dword ptr [ESI]             ; 004977df | DAT_01bdd7e4
    ADD EAX,0x60                        ; 004977e1
    PUSH EAX                            ; 004977e4
    CALL engine_special.cpp_FUN_005632a3 ; 004977e5
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004977ea
    MOV EAX,dword ptr [ESP + 0x6c]      ; 004977ed
    LEA EBX,[ESP + 0x30]                ; 004977f1
    MOV dword ptr [ESP + 0x24],EAX      ; 004977f5
    MOV EAX,dword ptr [ESP + 0x70]      ; 004977f9
    MOV ESI,dword ptr [0x005f2afc]      ; 004977fd | DAT_005f2afc
    MOV dword ptr [ESP + 0x28],EAX      ; 00497803
    LEA EAX,[ESP + 0x24]                ; 00497807
    MOV dword ptr [ESP + 0x2c],EDI      ; 0049780b
    FLD float ptr [EAX]                 ; 0049780f
    FMUL float ptr [0x005df8e4]         ; 00497811 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 00497817
    FLD float ptr [EAX + 0x4]           ; 00497819
    FMUL float ptr [0x005df8e4]         ; 0049781c | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 00497822
    FLD float ptr [EAX + 0x8]           ; 00497825
    FMUL float ptr [0x005df8e4]         ; 00497828 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049782e
    LEA EAX,[ESP + 0x30]                ; 00497831
    PUSH EAX                            ; 00497835
    MOV EAX,dword ptr [ESI]             ; 00497836 | DAT_01bdd7e4
    ADD EAX,0x90                        ; 00497838
    PUSH EAX                            ; 0049783d
    CALL engine_special.cpp_FUN_005632a3 ; 0049783e
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    MOV EBX,dword ptr [EBP + 0x10]      ; 00497843
    ADD ESP,0x8                         ; 00497846
    TEST EBX,EBX                        ; 00497849
    JNZ 0x0049797b                      ; 0049784b
        ;   XREF to: 0049797b (CONDITIONAL_JUMP)  ; LAB_0049797b
    MOV EAX,0xffff                      ; 00497851
    MOV [0x0060b038],EAX                ; 00497856 | DAT_0060b038
    MOV [0x0060b03c],EAX                ; 0049785b | DAT_0060b03c
    MOV [0x0060b064],EAX                ; 00497860 | DAT_0060b064
    MOV [0x0060b068],EAX                ; 00497865 | DAT_0060b068
    MOV [0x0060b06c],EAX                ; 0049786a | DAT_0060b06c
    MOV [0x0060b094],EAX                ; 0049786f | DAT_0060b094
    MOV [0x0060b098],EAX                ; 00497874 | DAT_0060b098
    MOV [0x0060b09c],EAX                ; 00497879 | DAT_0060b09c
    MOV [0x0060b0c4],EAX                ; 0049787e | DAT_0060b0c4
    MOV [0x0060b0c8],EAX                ; 00497883 | DAT_0060b0c8
    MOV [0x0060b0cc],EAX                ; 00497888 | DAT_0060b0cc
    MOV [0x0060b034],EAX                ; 0049788d | DAT_0060b034
    PUSH 0x1c73670                      ; 00497892
        ;   Label: LAB_00497892
    MOV EAX,[0x005f2afc]                ; 00497897 | DAT_005f2afc
    PUSH EAX                            ; 0049789c | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730 ; 0049789d
        ;   XREF to: 0046c730 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    MOV EDX,dword ptr [EBP + 0x10]      ; 004978a2
    ADD ESP,0x8                         ; 004978a5
    TEST EDX,EDX                        ; 004978a8
    JNZ 0x00497a0b                      ; 004978aa
        ;   XREF to: 00497a0b (CONDITIONAL_JUMP)  ; LAB_00497a0b
    MOV ESI,dword ptr [0x005f2afc]      ; 004978b0 | DAT_005f2afc
    PUSH ESI                            ; 004978b6 | DAT_01bdd7e4
    CALL engine_matrix.c_pop_FUN_0046d080 ; 004978b7
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 004978bc
    ADD ESP,0x74                        ; 004978bf
    POP EBP                             ; 004978c2
    POP EDI                             ; 004978c3
    POP ESI                             ; 004978c4
    POP EBX                             ; 004978c5
    RET                                 ; 004978c6
    PUSH EBP                            ; 004978c7
        ;   Label: LAB_004978c7
    MOV EAX,[0x005f2afc]                ; 004978c8 | DAT_005f2afc
    PUSH EAX                            ; 004978cd | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 004978ce
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004978d3
    PUSH 0x0                            ; 004978d6
    PUSH EBX                            ; 004978d8
    MOV EDX,dword ptr [0x005f2afc]      ; 004978d9 | DAT_005f2afc
    PUSH EDX                            ; 004978df | DAT_01bdd7e4
    JMP 0x00497647                      ; 004978e0
        ;   XREF to: 00497647 (UNCONDITIONAL_JUMP)  ; LAB_00497647
    CMP ECX,0x1                         ; 004978e5
        ;   Label: LAB_004978e5
    JZ 0x00497904                       ; 004978e8
        ;   XREF to: 00497904 (CONDITIONAL_JUMP)  ; LAB_00497904
    CMP ECX,0x2                         ; 004978ea
    JNZ 0x0049766e                      ; 004978ed
        ;   XREF to: 0049766e (CONDITIONAL_JUMP)  ; LAB_0049766e
    PUSH 0x5fc994                       ; 004978f3 | DAT_005fc994
    MOV EDI,dword ptr [0x005f2afc]      ; 004978f8 | DAT_005f2afc
    PUSH EDI                            ; 004978fe | DAT_01bdd7e4
    JMP 0x00497666                      ; 004978ff
        ;   XREF to: 00497666 (UNCONDITIONAL_JUMP)  ; LAB_00497666
    PUSH 0x5fc97c                       ; 00497904 | DAT_005fc97c
        ;   Label: LAB_00497904
    MOV EAX,[0x005f2afc]                ; 00497909 | DAT_005f2afc
    PUSH EAX                            ; 0049790e | DAT_01bdd7e4
    JMP 0x00497666                      ; 0049790f
        ;   XREF to: 00497666 (UNCONDITIONAL_JUMP)  ; LAB_00497666
    MOV ESI,0xfe0000                    ; 00497914
        ;   Label: LAB_00497914
    MOV EBX,0x20000                     ; 00497919
    MOV dword ptr [0x0060b030],ESI      ; 0049791e | DAT_0060b030
    MOV dword ptr [0x0060b05c],ESI      ; 00497924 | DAT_0060b05c
    MOV dword ptr [0x0060b060],ESI      ; 0049792a | DAT_0060b060
    MOV dword ptr [0x0060b08c],ESI      ; 00497930 | DAT_0060b08c
    MOV dword ptr [0x0060b090],EBX      ; 00497936 | DAT_0060b090
    MOV dword ptr [0x0060b0bc],EBX      ; 0049793c | DAT_0060b0bc
    MOV dword ptr [0x0060b0c0],EBX      ; 00497942 | DAT_0060b0c0
    MOV dword ptr [0x0060b02c],EBX      ; 00497948 | DAT_0060b02c
    JMP 0x004976d8                      ; 0049794e
        ;   XREF to: 004976d8 (UNCONDITIONAL_JUMP)  ; LAB_004976d8
    CMP EDI,0x1                         ; 00497953
        ;   Label: LAB_00497953
    JNZ 0x00497965                      ; 00497956
        ;   XREF to: 00497965 (CONDITIONAL_JUMP)  ; LAB_00497965
    MOV dword ptr [ESP + 0x70],0x3f800000 ; 00497958
    JMP 0x004976eb                      ; 00497960
        ;   XREF to: 004976eb (UNCONDITIONAL_JUMP)  ; LAB_004976eb
    CMP EDI,0x2                         ; 00497965
        ;   Label: LAB_00497965
    JNZ 0x004976eb                      ; 00497968
        ;   XREF to: 004976eb (CONDITIONAL_JUMP)  ; LAB_004976eb
    MOV dword ptr [ESP + 0x70],0x3f000000 ; 0049796e
    JMP 0x004976eb                      ; 00497976
        ;   XREF to: 004976eb (UNCONDITIONAL_JUMP)  ; LAB_004976eb
    LEA EAX,[EBP + 0x30]                ; 0049797b
        ;   Label: LAB_0049797b
    PUSH EAX                            ; 0049797e
    PUSH EBX                            ; 0049797f
    LEA ESI,[ESP + 0x14]                ; 00497980
    LEA EDI,[ESP + 0x5c]                ; 00497984
    CALL core_actor.cpp_FUN_00408b00    ; 00497988
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0x14]                ; 0049798d
    LEA EBX,[ESP + 0x68]                ; 00497991
    ADD ESP,0x8                         ; 00497995
    MOV EAX,EBP                         ; 00497998
    MOVSD ES:EDI,ESI                    ; 0049799a
    MOVSD ES:EDI,ESI                    ; 0049799b
    MOVSD ES:EDI,ESI                    ; 0049799c
    FLD float ptr [EAX]                 ; 0049799d
    FMUL float ptr [0x005df8e4]         ; 0049799f | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 004979a5
    FLD float ptr [EAX + 0x4]           ; 004979a7
    FMUL float ptr [0x005df8e4]         ; 004979aa | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 004979b0
    FLD float ptr [EAX + 0x8]           ; 004979b3
    FMUL float ptr [0x005df8e4]         ; 004979b6 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 004979bc
    LEA EBX,[ESP + 0x48]                ; 004979bf
    LEA EAX,[ESP + 0x54]                ; 004979c3
    FLD float ptr [EAX]                 ; 004979c7
    FMUL float ptr [0x005df8e8]         ; 004979c9 | DAT_005df8e8
    FISTP dword ptr [EBX]               ; 004979cf
    FLD float ptr [EAX + 0x4]           ; 004979d1
    FMUL float ptr [0x005df8e8]         ; 004979d4 | DAT_005df8e8
    FISTP dword ptr [EBX + 0x4]         ; 004979da
    FLD float ptr [EAX + 0x8]           ; 004979dd
    FMUL float ptr [0x005df8e8]         ; 004979e0 | DAT_005df8e8
    FISTP dword ptr [EBX + 0x8]         ; 004979e6
    PUSH 0x4                            ; 004979e9
    PUSH 0x0                            ; 004979eb
    LEA EAX,[ESP + 0x50]                ; 004979ed
    PUSH EAX                            ; 004979f1
    LEA EAX,[ESP + 0x6c]                ; 004979f2
    PUSH EAX                            ; 004979f6
    MOV EDI,dword ptr [0x00603b28]      ; 004979f7 | g_CDemonSetPtr
    PUSH EDI                            ; 004979fd | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_00538400 ; 004979fe
        ;   XREF to: 00538400 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_computeLighting_FUN_00538400(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    ADD ESP,0x14                        ; 00497a03
    JMP 0x00497892                      ; 00497a06
        ;   XREF to: 00497892 (UNCONDITIONAL_JUMP)  ; LAB_00497892
    PUSH EDX                            ; 00497a0b
        ;   Label: LAB_00497a0b
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 00497a0c
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00497a11
    MOV EBX,dword ptr [0x005f2afc]      ; 00497a14 | DAT_005f2afc
    PUSH EBX                            ; 00497a1a | DAT_01bdd7e4
    CALL engine_matrix.c_pop_FUN_0046d080 ; 00497a1b
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 00497a20
    ADD ESP,0x74                        ; 00497a23
    POP EBP                             ; 00497a26
    POP EDI                             ; 00497a27
    POP ESI                             ; 00497a28
    POP EBX                             ; 00497a29
    RET                                 ; 00497a2a

