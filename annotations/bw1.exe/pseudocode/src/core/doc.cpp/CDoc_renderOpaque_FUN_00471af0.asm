; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_doc_cpp_CDoc_renderOpaque_FUN_00471af0(CDoc *this_ptr)
;
; Parameters:
; CDoc *           Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined1* switchdataD_00471ab8 = 00471ced
;   TerminatedCString s_CGasMask_005da291
;   TerminatedCString s_CGoggles_005da29a
;   undefined4 DAT_005da2a4
;   undefined4 DAT_005da2ac
;   undefined4 DAT_00612560
;   undefined4 DAT_0061c010
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_01b68814
;   undefined4 DAT_01b6884c
;   undefined4 DAT_01b6886c
;   undefined4 DAT_01bc120c
;   undefined4 g_CGasMaskClassInfo.name_hash
;   undefined4 g_CGogglesClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   ... and 1 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
;   core_actor.cpp_FUN_00408ac0
;   core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_0042f240
;   core_cloth.cpp_CClothList_reset_FUN_00441d70
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
;   core_doc.cpp_FUN_0046f610
;   core_doc.cpp_FUN_004742a0
;   core_fire.cpp_CFireEffect_createLaserPath_FUN_004b6140
;   core_inv.cpp_FUN_004f8c90
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00559250
;   core_setcolid.cpp_CDemonSet_init_FUN_00559220
;   core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0
;   ... and 8 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00471af0
        ;   Label: core_doc.cpp_CDoc_renderOpaque_FUN_00471af0
    PUSH ESI                            ; 00471af1
    PUSH EDI                            ; 00471af2
    PUSH EBP                            ; 00471af3
    MOV EBP,ESP                         ; 00471af4
    SUB ESP,0x31c                       ; 00471af6
    SUB EBP,0x82                        ; 00471afc
    MOV EBX,dword ptr [EBP + 0x96]      ; 00471b02
    PUSH EBX                            ; 00471b08
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_0042f240 ; 00471b09
        ;   XREF to: 0042f240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_0042f240(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00471b0e
    TEST EAX,EAX                        ; 00471b11
    JNZ 0x00471b20                      ; 00471b13
        ;   XREF to: 00471b20 (CONDITIONAL_JUMP)  ; LAB_00471b20
    LEA ESP,[EBP + 0x82]                ; 00471b15
    POP EBP                             ; 00471b1b
    POP EDI                             ; 00471b1c
    POP ESI                             ; 00471b1d
    POP EBX                             ; 00471b1e
    RET                                 ; 00471b1f
    PUSH 0x6                            ; 00471b20
        ;   Label: LAB_00471b20
    PUSH EBX                            ; 00471b22
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590 ; 00471b23
        ;   XREF to: 00434590 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590(CCharacter * this_ptr, int state_index)
    MOV dword ptr [EBP + 0x7e],EAX      ; 00471b28
    ADD ESP,0x8                         ; 00471b2b
    FLD float ptr [EBP + 0x7e]          ; 00471b2e
    FCOMP double ptr [0x005da2a4]       ; 00471b31 | DAT_005da2a4
    FNSTSW AX                           ; 00471b37
    SAHF                                ; 00471b39
    JBE 0x00471c7f                      ; 00471b3a
        ;   XREF to: 00471c7f (CONDITIONAL_JUMP)  ; LAB_00471c7f
    XOR EDX,EDX                         ; 00471b40
    MOV ECX,dword ptr [EBX + 0x2628]    ; 00471b42
    MOV dword ptr [EBP + 0x7a],EDX      ; 00471b48
    TEST ECX,ECX                        ; 00471b4b
    JZ 0x00471b55                       ; 00471b4d
        ;   XREF to: 00471b55 (CONDITIONAL_JUMP)  ; LAB_00471b55
    LEA EAX,[ECX + 0x20]                ; 00471b4f
    MOV dword ptr [EBP + 0x7a],EAX      ; 00471b52
    MOV ESI,dword ptr [EBX + 0x20004]   ; 00471b55
        ;   Label: LAB_00471b55
    TEST ESI,ESI                        ; 00471b5b
    JZ 0x00471b65                       ; 00471b5d
        ;   XREF to: 00471b65 (CONDITIONAL_JUMP)  ; LAB_00471b65
    LEA EAX,[ESI + 0x20]                ; 00471b5f
    MOV dword ptr [EBP + 0x7a],EAX      ; 00471b62
    CMP dword ptr [EBP + 0x7a],0x0      ; 00471b65
        ;   Label: LAB_00471b65
    JZ 0x00471c7f                       ; 00471b69
        ;   XREF to: 00471c7f (CONDITIONAL_JUMP)  ; LAB_00471c7f
    MOV EAX,[0x00622c18]                ; 00471b6f | g_CDemonSetPtr
    PUSH EAX                            ; 00471b74 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 00471b75
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00471b7a
    PUSH 0x1                            ; 00471b7d
    MOV EDX,dword ptr [0x00622c18]      ; 00471b7f | g_CDemonSetPtr
    PUSH EDX                            ; 00471b85 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0 ; 00471b86
        ;   XREF to: 005592d0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 00471b8b
    PUSH EBX                            ; 00471b8e
    MOV ECX,dword ptr [0x00622c18]      ; 00471b8f | g_CDemonSetPtr
    PUSH ECX                            ; 00471b95 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 00471b96
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00471b9b
    MOV ESI,dword ptr [EBX + 0x20004]   ; 00471b9e
    PUSH ESI                            ; 00471ba4
    MOV EDI,dword ptr [0x00622c18]      ; 00471ba5 | g_CDemonSetPtr
    PUSH EDI                            ; 00471bab | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 00471bac
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00471bb1
    MOV EAX,dword ptr [EBX + 0x2628]    ; 00471bb4
    PUSH EAX                            ; 00471bba
    MOV EDX,dword ptr [0x00622c18]      ; 00471bbb | g_CDemonSetPtr
    PUSH EDX                            ; 00471bc1 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 00471bc2
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00471bc7
    PUSH EBX                            ; 00471bca
    LEA ESI,[EBP + -0x42]               ; 00471bcb
    LEA EDI,[EBP + -0x66]               ; 00471bce
    CALL core_doc.cpp_FUN_004742a0      ; 00471bd1
        ;   XREF to: 004742a0 (UNCONDITIONAL_CALL)  ; undefined core_doc.cpp_FUN_004742a0()
    ADD ESP,0x4                         ; 00471bd6
    LEA EAX,[EBP + -0x66]               ; 00471bd9
    LEA ESI,[EBP + -0x42]               ; 00471bdc
    PUSH EAX                            ; 00471bdf
    MOVSD ES:EDI,ESI                    ; 00471be0
    MOVSD ES:EDI,ESI                    ; 00471be1
    MOVSD ES:EDI,ESI                    ; 00471be2
    PUSH EBX                            ; 00471be3
    LEA ESI,[EBP + 0xffffff52]          ; 00471be4
    LEA EDI,[EBP + 0xffffff76]          ; 00471bea
    CALL core_actor.cpp_FUN_00408ac0    ; 00471bf0
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA ESI,[EBP + 0xffffff52]          ; 00471bf5
    ADD ESP,0x8                         ; 00471bfb
    LEA EAX,[EBP + 0xffffff76]          ; 00471bfe
    MOV ECX,dword ptr [EBP + 0x7a]      ; 00471c04
    PUSH EAX                            ; 00471c07
    MOVSD ES:EDI,ESI                    ; 00471c08
    MOVSD ES:EDI,ESI                    ; 00471c09
    MOVSD ES:EDI,ESI                    ; 00471c0a
    PUSH ECX                            ; 00471c0b
    MOV ESI,dword ptr [0x00622c18]      ; 00471c0c | g_CDemonSetPtr
    PUSH ESI                            ; 00471c12 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00557630 ; 00471c13
        ;   XREF to: 00557630 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00557630()
    FLDZ                                ; 00471c18
    MOV dword ptr [EBP + 0x7e],EAX      ; 00471c1a
    ADD ESP,0xc                         ; 00471c1d
    MOV EAX,dword ptr [EBP + 0x7e]      ; 00471c20
    MOV dword ptr [EBP + 0x76],EAX      ; 00471c23
    FCOMP float ptr [EBP + 0x76]        ; 00471c26
    FNSTSW AX                           ; 00471c29
    SAHF                                ; 00471c2b
    JBE 0x00471c35                      ; 00471c2c
        ;   XREF to: 00471c35 (CONDITIONAL_JUMP)  ; LAB_00471c35
    MOV dword ptr [EBP + 0x76],0x41200000 ; 00471c2e
    PUSH 0x0                            ; 00471c35
        ;   Label: LAB_00471c35
    PUSH 0x0                            ; 00471c37
    MOV EAX,[0x00622c18]                ; 00471c39 | g_CDemonSetPtr
    PUSH 0xff                           ; 00471c3e
    ADD EAX,0x14d128                    ; 00471c43
    PUSH dword ptr [EBP + 0x76]         ; 00471c48
    PUSH EAX                            ; 00471c4b | g_CDemonSetInstance.collision_normal.x
    PUSH 0x3f800000                     ; 00471c4c
    LEA EAX,[EBP + 0xffffff76]          ; 00471c51
    PUSH 0x3f800000                     ; 00471c57
    PUSH EAX                            ; 00471c5c
    MOV EAX,dword ptr [EBP + 0x7a]      ; 00471c5d
    PUSH EAX                            ; 00471c60
    MOV EDX,dword ptr [0x0061c010]      ; 00471c61 | DAT_0061c010
    PUSH EDX                            ; 00471c67
    CALL core_fire.cpp_CFireEffect_createLaserPath_FUN_004b6140 ; 00471c68
        ;   XREF to: 004b6140 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLaserPath_FUN_004b6140(CFireEffect * this_ptr, CVector3f * start_position, CVector3f * velocity, float beam_width, ...)
    ADD ESP,0x28                        ; 00471c6d
    MOV ECX,dword ptr [0x00622c18]      ; 00471c70 | g_CDemonSetPtr
    PUSH ECX                            ; 00471c76 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 00471c77
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00471c7c
    MOV ESI,dword ptr [EBX + 0x20004]   ; 00471c7f
        ;   Label: LAB_00471c7f
    TEST ESI,ESI                        ; 00471c85
    JZ 0x00471d62                       ; 00471c87
        ;   XREF to: 00471d62 (CONDITIONAL_JUMP)  ; LAB_00471d62
    CMP ESI,dword ptr [EBX + 0x25b0]    ; 00471c8d
    JZ 0x00471d62                       ; 00471c93
        ;   XREF to: 00471d62 (CONDITIONAL_JUMP)  ; LAB_00471d62
    CMP ESI,dword ptr [EBX + 0x2628]    ; 00471c99
    JZ 0x00471d62                       ; 00471c9f
        ;   XREF to: 00471d62 (CONDITIONAL_JUMP)  ; LAB_00471d62
    MOV EAX,[0x01b6886c]                ; 00471ca5 | DAT_01b6886c
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00471caa
    JZ 0x00471d62                       ; 00471cb2
        ;   XREF to: 00471d62 (CONDITIONAL_JUMP)  ; LAB_00471d62
    MOV EAX,ESI                         ; 00471cb8
    PUSH EAX                            ; 00471cba
    MOV ESI,dword ptr [ESI + 0x154]     ; 00471cbb
    CALL dword ptr [ESI + 0x10]         ; 00471cc1
    ADD ESP,0x4                         ; 00471cc4
    MOV EAX,dword ptr [EBX + 0x20004]   ; 00471cc7
    XOR ESI,ESI                         ; 00471ccd
    TEST EAX,EAX                        ; 00471ccf
    JZ 0x004720df                       ; 00471cd1
        ;   XREF to: 004720df (CONDITIONAL_JUMP)  ; caseD_8
    MOV EAX,dword ptr [EAX + 0x2e0]     ; 00471cd7
    CMP EAX,0xa                         ; 00471cdd
    JA 0x004720df                       ; 00471ce0
        ;   XREF to: 004720df (CONDITIONAL_JUMP)  ; caseD_8
    JMP dword ptr [EAX*0x4 + 0x471ab8]  ; 00471ce6 | caseD_5 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,0x2                         ; 00471ced
        ;   Label: caseD_0
    PUSH EAX                            ; 00471cf2
        ;   Label: LAB_00471cf2
    PUSH EBX                            ; 00471cf3
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590 ; 00471cf4
        ;   XREF to: 00434590 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590(CCharacter * this_ptr, int state_index)
    MOV dword ptr [EBP + 0x7e],EAX      ; 00471cf9
    ADD ESP,0x8                         ; 00471cfc
    FLD float ptr [EBP + 0x7e]          ; 00471cff
    FCOMP double ptr [0x005da2ac]       ; 00471d02 | DAT_005da2ac
    FNSTSW AX                           ; 00471d08
    SAHF                                ; 00471d0a
    JBE 0x00471d12                      ; 00471d0b
        ;   XREF to: 00471d12 (CONDITIONAL_JUMP)  ; LAB_00471d12
    MOV ESI,0x1                         ; 00471d0d
    MOV EAX,dword ptr [EBX + 0x20004]   ; 00471d12
        ;   Label: LAB_00471d12
    MOV EDI,dword ptr [EAX + 0x2e0]     ; 00471d18
    CMP EDI,0x1                         ; 00471d1e
    JNZ 0x00471d2e                      ; 00471d21
        ;   XREF to: 00471d2e (CONDITIONAL_JUMP)  ; LAB_00471d2e
    CMP dword ptr [EBX + 0x2c98],0x8    ; 00471d23
    JNZ 0x00471d2e                      ; 00471d2a
        ;   XREF to: 00471d2e (CONDITIONAL_JUMP)  ; LAB_00471d2e
    MOV ESI,EDI                         ; 00471d2c
    MOV EAX,dword ptr [EBX + 0x20004]   ; 00471d2e
        ;   Label: LAB_00471d2e
    CMP dword ptr [EAX + 0x2e0],0x9     ; 00471d34
    JNZ 0x004720e6                      ; 00471d3b
        ;   XREF to: 004720e6 (CONDITIONAL_JUMP)  ; LAB_004720e6
    MOV EAX,dword ptr [EBX + 0x20004]   ; 00471d41
        ;   Label: LAB_00471d41
    PUSH EAX                            ; 00471d47
    MOV ESI,dword ptr [EAX + 0x154]     ; 00471d48
    CALL dword ptr [ESI + 0xf0]         ; 00471d4e
    ADD ESP,0x4                         ; 00471d54
    PUSH 0x0                            ; 00471d57
        ;   Label: LAB_00471d57
    PUSH EBX                            ; 00471d59
    CALL core_doc.cpp_FUN_0046f610      ; 00471d5a
        ;   XREF to: 0046f610 (UNCONDITIONAL_CALL)  ; undefined core_doc.cpp_FUN_0046f610()
    ADD ESP,0x8                         ; 00471d5f
    CMP dword ptr [EBX + 0x1ff54],0x0   ; 00471d62
        ;   Label: LAB_00471d62
    JZ 0x00471ed8                       ; 00471d69
        ;   XREF to: 00471ed8 (CONDITIONAL_JUMP)  ; LAB_00471ed8
    MOV EAX,[0x01b6886c]                ; 00471d6f | DAT_01b6886c
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00471d74
    JZ 0x00471ed8                       ; 00471d7c
        ;   XREF to: 00471ed8 (CONDITIONAL_JUMP)  ; LAB_00471ed8
    MOV EDI,dword ptr [0x01cd0d40]      ; 00471d82 | g_CGasMaskClassInfo.name_hash
    PUSH EDI                            ; 00471d88
    PUSH 0x5da291                       ; 00471d89 | = "CGasMask"
    LEA EAX,[EBX + 0x1fae8]             ; 00471d8e
    PUSH EAX                            ; 00471d94
    CALL core_inv.cpp_FUN_004f8c90      ; 00471d95
        ;   XREF to: 004f8c90 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_FUN_004f8c90(CInventory * this_ptr, char * class_name)
    ADD ESP,0x8                         ; 00471d9a
    PUSH EAX                            ; 00471d9d
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00471d9e
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 00471da3
    MOV dword ptr [EBP + 0x6a],EAX      ; 00471da6
    TEST EAX,EAX                        ; 00471da9
    JZ 0x00471ed8                       ; 00471dab
        ;   XREF to: 00471ed8 (CONDITIONAL_JUMP)  ; LAB_00471ed8
    PUSH EBX                            ; 00471db1
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 00471db2
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    LEA EAX,[EBX + 0xfd8]               ; 00471db7
    MOV dword ptr [EBP + 0x72],EAX      ; 00471dbd
    MOV EAX,dword ptr [EBX + 0x1ff54]   ; 00471dc0
    ADD ESP,0x4                         ; 00471dc6
    CMP EAX,0x2                         ; 00471dc9
    JNZ 0x004720f3                      ; 00471dcc
        ;   XREF to: 004720f3 (CONDITIONAL_JUMP)  ; LAB_004720f3
    MOV ESI,0xbe0fd3f6                  ; 00471dd2
    MOV EAX,0xc04507c8                  ; 00471dd7
    MOV EDX,0x3bc63091                  ; 00471ddc
    MOV ECX,0x3e9135db                  ; 00471de1
    XOR EDI,EDI                         ; 00471de6
    MOV dword ptr [EBP + -0x36],ESI     ; 00471de8
    MOV dword ptr [EBP + -0x2e],EDI     ; 00471deb
    MOV dword ptr [EBP + -0x32],EAX     ; 00471dee
    MOV dword ptr [EBP + -0x2a],EDX     ; 00471df1
    LEA EDI,[EBP + -0x6]                ; 00471df4
    LEA EAX,[EBP + -0x6]                ; 00471df7
    LEA ESI,[EBP + -0x36]               ; 00471dfa
    PUSH EAX                            ; 00471dfd
    LEA EAX,[EBP + -0x2a]               ; 00471dfe
    MOVSD ES:EDI,ESI                    ; 00471e01
    MOVSD ES:EDI,ESI                    ; 00471e02
    MOVSD ES:EDI,ESI                    ; 00471e03
    PUSH EAX                            ; 00471e04
    LEA EAX,[EBP + 0xfffffe86]          ; 00471e05
    MOV ESI,0x3f09a30a                  ; 00471e0b
    PUSH EAX                            ; 00471e10
    MOV dword ptr [EBP + -0x26],ECX     ; 00471e11
    MOV dword ptr [EBP + -0x22],ESI     ; 00471e14
    CALL core_xform.cpp_FUN_005b5760    ; 00471e17
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5760(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    MOV ESI,dword ptr [0x01b68814]      ; 00471e1c | DAT_01b68814
    LEA EAX,[ESI*0x4 + 0x0]             ; 00471e22
    SUB EAX,ESI                         ; 00471e29
    MOV EDI,dword ptr [EBP + 0x72]      ; 00471e2b
    SHL EAX,0x4                         ; 00471e2e
    ADD ESP,0xc                         ; 00471e31
    ADD EAX,EDI                         ; 00471e34
    PUSH EAX                            ; 00471e36
    LEA EAX,[EBP + 0xfffffe86]          ; 00471e37
    PUSH EAX                            ; 00471e3d
    LEA ESI,[EBP + 0xfffffdf6]          ; 00471e3e
    LEA EDI,[EBP + 0xfffffd96]          ; 00471e44
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 00471e4a
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 00471e4f
    LEA ESI,[EBP + 0xfffffdf6]          ; 00471e54
    ADD ESP,0x8                         ; 00471e5a
        ;   Label: LAB_00471e5a
    MOVSD.REP ES:EDI,ESI                ; 00471e5d
    LEA EAX,[EBP + 0xfffffd96]          ; 00471e5f
    PUSH EAX                            ; 00471e65
    LEA ESI,[EBP + 0x1e]                ; 00471e66
    LEA EDI,[EBP + 0x6]                 ; 00471e69
    CALL core_xform.cpp_matrixToEulerAngles_FUN_005b5930 ; 00471e6c
        ;   XREF to: 005b5930 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_matrixToEulerAngles_FUN_005b5930()
    LEA ESI,[EBP + 0x1e]                ; 00471e71
    LEA EAX,[EBP + 0xfffffd96]          ; 00471e74
    ADD ESP,0x4                         ; 00471e7a
    MOVSD ES:EDI,ESI                    ; 00471e7d
    MOVSD ES:EDI,ESI                    ; 00471e7e
    MOVSD ES:EDI,ESI                    ; 00471e7f
    PUSH EAX                            ; 00471e80
    LEA ESI,[EBP + 0x12]                ; 00471e81
    CALL core_xform.cpp_FUN_005b6270    ; 00471e84
        ;   XREF to: 005b6270 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b6270()
    ADD ESP,0x4                         ; 00471e89
    LEA EAX,[EBP + 0x42]                ; 00471e8c
    PUSH EAX                            ; 00471e8f
    LEA EAX,[EBP + 0x6]                 ; 00471e90
    LEA EDI,[EBP + 0x42]                ; 00471e93
    PUSH EAX                            ; 00471e96
    MOV EAX,[0x00612560]                ; 00471e97 | DAT_00612560
    LEA ESI,[EBP + 0x12]                ; 00471e9c
    PUSH EAX                            ; 00471e9f | DAT_01bc120c
    MOVSD ES:EDI,ESI                    ; 00471ea0
    MOVSD ES:EDI,ESI                    ; 00471ea1
    MOVSD ES:EDI,ESI                    ; 00471ea2
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 00471ea3
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 00471ea8
    MOV EAX,dword ptr [EBP + 0x6a]      ; 00471eab
    PUSH -0x1                           ; 00471eae
    ADD EAX,0x158                       ; 00471eb0
    PUSH 0x0                            ; 00471eb5
    PUSH EAX                            ; 00471eb7
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0 ; 00471eb8
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00471ebd
    MOV EDX,dword ptr [0x00612560]      ; 00471ec0 | DAT_00612560
    PUSH EDX                            ; 00471ec6 | DAT_01bc120c
    CALL engine_drender.cpp_pop_FUN_004839a0 ; 00471ec7
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 00471ecc
    PUSH EBX                            ; 00471ecf
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 00471ed0
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00471ed5
    CMP dword ptr [EBX + 0x1ff58],0x0   ; 00471ed8
        ;   Label: LAB_00471ed8
    JZ 0x00472063                       ; 00471edf
        ;   XREF to: 00472063 (CONDITIONAL_JUMP)  ; LAB_00472063
    MOV EAX,[0x01b6886c]                ; 00471ee5 | DAT_01b6886c
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00471eea
    JZ 0x00472063                       ; 00471ef2
        ;   XREF to: 00472063 (CONDITIONAL_JUMP)  ; LAB_00472063
    MOV EDI,dword ptr [0x01cd0e38]      ; 00471ef8 | g_CGogglesClassInfo.name_hash
    PUSH EDI                            ; 00471efe
    PUSH 0x5da29a                       ; 00471eff | = "CGoggles"
    LEA EAX,[EBX + 0x1fae8]             ; 00471f04
    PUSH EAX                            ; 00471f0a
    CALL core_inv.cpp_FUN_004f8c90      ; 00471f0b
        ;   XREF to: 004f8c90 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_FUN_004f8c90(CInventory * this_ptr, char * class_name)
    ADD ESP,0x8                         ; 00471f10
    PUSH EAX                            ; 00471f13
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00471f14
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 00471f19
    MOV dword ptr [EBP + 0x66],EAX      ; 00471f1c
    TEST EAX,EAX                        ; 00471f1f
    JZ 0x00472063                       ; 00471f21
        ;   XREF to: 00472063 (CONDITIONAL_JUMP)  ; LAB_00472063
    PUSH EBX                            ; 00471f27
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 00471f28
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    LEA EAX,[EBX + 0xfd8]               ; 00471f2d
    MOV dword ptr [EBP + 0x6e],EAX      ; 00471f33
    MOV EAX,dword ptr [EBX + 0x1ff58]   ; 00471f36
    ADD ESP,0x4                         ; 00471f3c
    CMP EAX,0x2                         ; 00471f3f
    JNZ 0x0047218f                      ; 00471f42
        ;   XREF to: 0047218f (CONDITIONAL_JUMP)  ; LAB_0047218f
    MOV ESI,0x3da9307b                  ; 00471f48
    MOV EDI,0x3c518d91                  ; 00471f4d
    MOV EAX,0x404904ab                  ; 00471f52
    MOV EDX,0x3c17ff3b                  ; 00471f57
    MOV ECX,0x3eac59da                  ; 00471f5c
    MOV dword ptr [EBP + 0xffffff5e],ESI ; 00471f61
    MOV dword ptr [EBP + 0xffffff66],EDI ; 00471f67
    MOV dword ptr [EBP + 0xffffff62],EAX ; 00471f6d
    MOV dword ptr [EBP + 0x2a],EDX      ; 00471f73
    LEA EDI,[EBP + 0xffffff46]          ; 00471f76
    LEA EAX,[EBP + 0xffffff46]          ; 00471f7c
    LEA ESI,[EBP + 0xffffff5e]          ; 00471f82
    PUSH EAX                            ; 00471f88
    LEA EAX,[EBP + 0x2a]                ; 00471f89
    MOVSD ES:EDI,ESI                    ; 00471f8c
    MOVSD ES:EDI,ESI                    ; 00471f8d
    MOVSD ES:EDI,ESI                    ; 00471f8e
    PUSH EAX                            ; 00471f8f
    LEA EAX,[EBP + 0xfffffe56]          ; 00471f90
    MOV ESI,0x3e5903ea                  ; 00471f96
    PUSH EAX                            ; 00471f9b
    MOV dword ptr [EBP + 0x2e],ECX      ; 00471f9c
    MOV dword ptr [EBP + 0x32],ESI      ; 00471f9f
    CALL core_xform.cpp_FUN_005b5760    ; 00471fa2
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5760(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    MOV ESI,dword ptr [0x01b68814]      ; 00471fa7 | DAT_01b68814
    LEA EAX,[ESI*0x4 + 0x0]             ; 00471fad
    SUB EAX,ESI                         ; 00471fb4
    MOV EDI,dword ptr [EBP + 0x6e]      ; 00471fb6
    SHL EAX,0x4                         ; 00471fb9
    ADD ESP,0xc                         ; 00471fbc
    ADD EAX,EDI                         ; 00471fbf
    PUSH EAX                            ; 00471fc1
    LEA EAX,[EBP + 0xfffffe56]          ; 00471fc2
    PUSH EAX                            ; 00471fc8
    LEA ESI,[EBP + 0xfffffdc6]          ; 00471fc9
    LEA EDI,[EBP + 0xfffffe26]          ; 00471fcf
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 00471fd5
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 00471fda
    LEA ESI,[EBP + 0xfffffdc6]          ; 00471fdf
    ADD ESP,0x8                         ; 00471fe5
        ;   Label: LAB_00471fe5
    MOVSD.REP ES:EDI,ESI                ; 00471fe8
    LEA EAX,[EBP + 0xfffffe26]          ; 00471fea
    PUSH EAX                            ; 00471ff0
    LEA ESI,[EBP + -0x1e]               ; 00471ff1
    LEA EDI,[EBP + -0x7e]               ; 00471ff4
    CALL core_xform.cpp_matrixToEulerAngles_FUN_005b5930 ; 00471ff7
        ;   XREF to: 005b5930 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_matrixToEulerAngles_FUN_005b5930()
    LEA ESI,[EBP + -0x1e]               ; 00471ffc
    LEA EAX,[EBP + 0xfffffe26]          ; 00471fff
    ADD ESP,0x4                         ; 00472005
    MOVSD ES:EDI,ESI                    ; 00472008
    MOVSD ES:EDI,ESI                    ; 00472009
    MOVSD ES:EDI,ESI                    ; 0047200a
    PUSH EAX                            ; 0047200b
    LEA ESI,[EBP + 0x4e]                ; 0047200c
    CALL core_xform.cpp_FUN_005b6270    ; 0047200f
        ;   XREF to: 005b6270 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b6270()
    ADD ESP,0x4                         ; 00472014
    LEA EAX,[EBP + -0x72]               ; 00472017
    PUSH EAX                            ; 0047201a
    LEA EAX,[EBP + -0x7e]               ; 0047201b
    LEA EDI,[EBP + -0x72]               ; 0047201e
    PUSH EAX                            ; 00472021
    MOV EAX,[0x00612560]                ; 00472022 | DAT_00612560
    LEA ESI,[EBP + 0x4e]                ; 00472027
    PUSH EAX                            ; 0047202a | DAT_01bc120c
    MOVSD ES:EDI,ESI                    ; 0047202b
    MOVSD ES:EDI,ESI                    ; 0047202c
    MOVSD ES:EDI,ESI                    ; 0047202d
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 0047202e
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 00472033
    MOV EAX,dword ptr [EBP + 0x66]      ; 00472036
    PUSH -0x1                           ; 00472039
    ADD EAX,0x158                       ; 0047203b
    PUSH 0x0                            ; 00472040
    PUSH EAX                            ; 00472042
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0 ; 00472043
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00472048
    MOV EDX,dword ptr [0x00612560]      ; 0047204b | DAT_00612560
    PUSH EDX                            ; 00472051 | DAT_01bc120c
    CALL engine_drender.cpp_pop_FUN_004839a0 ; 00472052
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 00472057
    PUSH EBX                            ; 0047205a
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 0047205b
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00472060
    MOV EAX,[0x01b6886c]                ; 00472063 | DAT_01b6886c
        ;   Label: LAB_00472063
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00472068
    JNZ 0x0047209d                      ; 00472070
        ;   XREF to: 0047209d (CONDITIONAL_JUMP)  ; LAB_0047209d
    MOV ESI,dword ptr [0x00612560]      ; 00472072 | DAT_00612560
    PUSH ESI                            ; 00472078 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 00472079
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0047207e
    TEST EAX,EAX                        ; 00472081
    JNZ 0x0047209d                      ; 00472083
        ;   XREF to: 0047209d (CONDITIONAL_JUMP)  ; LAB_0047209d
    CMP dword ptr [EBX + 0x2ca0],0x0    ; 00472085
    JLE 0x0047209d                      ; 0047208c
        ;   XREF to: 0047209d (CONDITIONAL_JUMP)  ; LAB_0047209d
    ADD EBX,0x2ca0                      ; 0047208e
    PUSH EBX                            ; 00472094
    CALL core_cloth.cpp_CClothList_reset_FUN_00441d70 ; 00472095
        ;   XREF to: 00441d70 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_reset_FUN_00441d70(CClothList * this_ptr)
    ADD ESP,0x4                         ; 0047209a
    MOV EAX,0x1                         ; 0047209d
        ;   Label: LAB_0047209d
    LEA ESP,[EBP + 0x82]                ; 004720a2
    POP EBP                             ; 004720a8
    POP EDI                             ; 004720a9
    POP ESI                             ; 004720aa
    POP EBX                             ; 004720ab
    RET                                 ; 004720ac
    MOV EAX,0x4                         ; 004720ad
        ;   Label: caseD_1
    JMP 0x00471cf2                      ; 004720b2
        ;   XREF to: 00471cf2 (UNCONDITIONAL_JUMP)  ; LAB_00471cf2
    MOV EAX,0xe                         ; 004720b7
        ;   Label: caseD_9
    JMP 0x00471cf2                      ; 004720bc
        ;   XREF to: 00471cf2 (UNCONDITIONAL_JUMP)  ; LAB_00471cf2
    MOV EAX,0x7                         ; 004720c1
        ;   Label: caseD_4
    JMP 0x00471cf2                      ; 004720c6
        ;   XREF to: 00471cf2 (UNCONDITIONAL_JUMP)  ; LAB_00471cf2
    MOV EAX,0x5                         ; 004720cb
        ;   Label: caseD_2
    JMP 0x00471cf2                      ; 004720d0
        ;   XREF to: 00471cf2 (UNCONDITIONAL_JUMP)  ; LAB_00471cf2
    MOV EAX,0x8                         ; 004720d5
        ;   Label: caseD_7
    JMP 0x00471cf2                      ; 004720da
        ;   XREF to: 00471cf2 (UNCONDITIONAL_JUMP)  ; LAB_00471cf2
    XOR EAX,EAX                         ; 004720df
        ;   Label: caseD_3
    JMP 0x00471cf2                      ; 004720e1
        ;   XREF to: 00471cf2 (UNCONDITIONAL_JUMP)  ; LAB_00471cf2
    TEST ESI,ESI                        ; 004720e6
        ;   Label: LAB_004720e6
    JNZ 0x00471d41                      ; 004720e8
        ;   XREF to: 00471d41 (CONDITIONAL_JUMP)  ; LAB_00471d41
    JMP 0x00471d57                      ; 004720ee
        ;   XREF to: 00471d57 (UNCONDITIONAL_JUMP)  ; LAB_00471d57
    MOV EDX,0x3f94bac7                  ; 004720f3
        ;   Label: LAB_004720f3
    MOV ECX,0x3d488e0e                  ; 004720f8
    MOV ESI,0x3ebc7410                  ; 004720fd
    LEA EDI,[EBP + -0x12]               ; 00472102
    LEA EAX,[EBP + -0x12]               ; 00472105
    MOV dword ptr [EBP + -0x4e],EDX     ; 00472108
    MOV dword ptr [EBP + -0x46],ECX     ; 0047210b
    MOV dword ptr [EBP + -0x4a],ESI     ; 0047210e
    PUSH EAX                            ; 00472111
    LEA ESI,[EBP + -0x4e]               ; 00472112
    MOV EAX,0xbca5f882                  ; 00472115
    MOV EDX,0x3e05d9a1                  ; 0047211a
    MOV dword ptr [EBP + 0xffffff6e],EAX ; 0047211f
    LEA EAX,[EBP + 0xffffff6a]          ; 00472125
    MOVSD ES:EDI,ESI                    ; 0047212b
    MOVSD ES:EDI,ESI                    ; 0047212c
    MOVSD ES:EDI,ESI                    ; 0047212d
    PUSH EAX                            ; 0047212e
    LEA EAX,[EBP + 0xfffffeb6]          ; 0047212f
    MOV EDI,0x3f033b43                  ; 00472135
    PUSH EAX                            ; 0047213a
    MOV dword ptr [EBP + 0xffffff72],EDX ; 0047213b
    MOV dword ptr [EBP + 0xffffff6a],EDI ; 00472141
    CALL core_xform.cpp_FUN_005b5760    ; 00472147
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5760(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    MOV ESI,dword ptr [0x01b6884c]      ; 0047214c | DAT_01b6884c
    LEA EAX,[ESI*0x4 + 0x0]             ; 00472152
    SUB EAX,ESI                         ; 00472159
    MOV ECX,dword ptr [EBP + 0x72]      ; 0047215b
    SHL EAX,0x4                         ; 0047215e
    ADD ESP,0xc                         ; 00472161
    ADD EAX,ECX                         ; 00472164
    PUSH EAX                            ; 00472166
    LEA EAX,[EBP + 0xfffffeb6]          ; 00472167
    PUSH EAX                            ; 0047216d
    LEA ESI,[EBP + 0xfffffd66]          ; 0047216e
    LEA EDI,[EBP + 0xfffffd96]          ; 00472174
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 0047217a
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 0047217f
    LEA ESI,[EBP + 0xfffffd66]          ; 00472184
    JMP 0x00471e5a                      ; 0047218a
        ;   XREF to: 00471e5a (UNCONDITIONAL_JUMP)  ; LAB_00471e5a
    MOV EDX,0xbe59e27a                  ; 0047218f
        ;   Label: LAB_0047218f
    MOV ECX,0xbf8480c7                  ; 00472194
    MOV ESI,0x3eeac8e7                  ; 00472199
    LEA EDI,[EBP + 0x5a]                ; 0047219e
    LEA EAX,[EBP + 0x5a]                ; 004721a1
    MOV dword ptr [EBP + -0x5a],EDX     ; 004721a4
    MOV dword ptr [EBP + -0x52],ECX     ; 004721a7
    MOV dword ptr [EBP + -0x56],ESI     ; 004721aa
    PUSH EAX                            ; 004721ad
    LEA ESI,[EBP + -0x5a]               ; 004721ae
    MOV EAX,0xbe996873                  ; 004721b1
    MOV EDX,0xbce677ce                  ; 004721b6
    MOV dword ptr [EBP + 0x3a],EAX      ; 004721bb
    LEA EAX,[EBP + 0x36]                ; 004721be
    MOVSD ES:EDI,ESI                    ; 004721c1
    MOVSD ES:EDI,ESI                    ; 004721c2
    MOVSD ES:EDI,ESI                    ; 004721c3
    PUSH EAX                            ; 004721c4
    LEA EAX,[EBP + 0xfffffee6]          ; 004721c5
    MOV EDI,0x3e87a398                  ; 004721cb
    PUSH EAX                            ; 004721d0
    MOV dword ptr [EBP + 0x3e],EDX      ; 004721d1
    MOV dword ptr [EBP + 0x36],EDI      ; 004721d4
    CALL core_xform.cpp_FUN_005b5760    ; 004721d7
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5760(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    MOV ESI,dword ptr [0x01b6884c]      ; 004721dc | DAT_01b6884c
    LEA EAX,[ESI*0x4 + 0x0]             ; 004721e2
    SUB EAX,ESI                         ; 004721e9
    MOV ECX,dword ptr [EBP + 0x6e]      ; 004721eb
    SHL EAX,0x4                         ; 004721ee
    ADD ESP,0xc                         ; 004721f1
    ADD EAX,ECX                         ; 004721f4
    PUSH EAX                            ; 004721f6
    LEA EAX,[EBP + 0xfffffee6]          ; 004721f7
    PUSH EAX                            ; 004721fd
    LEA ESI,[EBP + 0xffffff16]          ; 004721fe
    LEA EDI,[EBP + 0xfffffe26]          ; 00472204
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 0047220a
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 0047220f
    LEA ESI,[EBP + 0xffffff16]          ; 00472214
    JMP 0x00471fe5                      ; 0047221a
        ;   XREF to: 00471fe5 (UNCONDITIONAL_JUMP)  ; LAB_00471fe5

