; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_mimic_cpp_CMimic_renderMirrored_FUN_004f1890(CMimic *this_ptr)
;
; Parameters:
; CMimic *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x130]:1  local_130
; undefined        Stack[-0x100]:1  local_100
; undefined        Stack[-0xd0]:1  local_d0
; undefined        Stack[-0xa0]:1  local_a0
; undefined        Stack[-0x88]:1  local_88
; undefined        Stack[-0x70]:1  local_70
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined        Stack[-0x4c]:1  local_4c
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x34]:1  local_34
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   core_mimic.cpp_CMimic_renderOpaque_FUN_004f1b40 at 004f1b51
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01ba5c68
;   undefined4 DAT_01c38b6c
;   undefined4 DAT_01c38b90
;   undefined4 DAT_01c38b9c
;   undefined4 DAT_01c38ba0
;   undefined4 DAT_01c38ba4
;   undefined4 DAT_01cedef4
;   undefined4 DAT_01d097c4
;   undefined4 DAT_01d1cdc8
;   undefined4 g_CStrangerClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
;   core_box.cpp_FUN_0041a840
;   core_charactr.cpp_CCharacter_renderAttachedModels_FUN_00425aa0
;   core_cloth.cpp_CCloth_render_FUN_005b0fe0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
;   core_morph.cpp_CMorph_render_FUN_005b76a0
;   core_motion.cpp_FUN_005035c0
;   core_motion.cpp_FUN_005042e0
;   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170
;   core_xform.cpp_FUN_00591c10
;   core_xform.cpp_FUN_00591de0
;   core_xform.cpp_FUN_00592720
;   core_xform.cpp_multiplyMatrix3x4_FUN_005916b0
;   ... and 5 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f1890
        ;   Label: core_mimic.cpp_CMimic_renderMirrored_FUN_004f1890
    PUSH ESI                            ; 004f1891
    PUSH EDI                            ; 004f1892
    PUSH EBP                            ; 004f1893
    MOV EBP,ESP                         ; 004f1894
    SUB ESP,0x120                       ; 004f1896
    SUB EBP,0x7e                        ; 004f189c
    MOV EBX,dword ptr [EBP + 0x92]      ; 004f189f
    CMP dword ptr [EBX + 0x2568],0x0    ; 004f18a5
    JZ 0x004f18b8                       ; 004f18ac
        ;   XREF to: 004f18b8 (CONDITIONAL_JUMP)  ; LAB_004f18b8
    XOR EAX,EAX                         ; 004f18ae
    LEA ESP,[EBP + 0x7e]                ; 004f18b0
    POP EBP                             ; 004f18b3
    POP EDI                             ; 004f18b4
    POP ESI                             ; 004f18b5
    POP EBX                             ; 004f18b6
    RET                                 ; 004f18b7
    PUSH EBX                            ; 004f18b8
        ;   Label: LAB_004f18b8
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 004f18b9
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004f18be
    PUSH 0x0                            ; 004f18c1
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004f18c3
    PUSH EBX                            ; 004f18c9
    LEA ESI,[EBP + 0x6]                 ; 004f18ca
    LEA EDI,[EBP + -0x12]               ; 004f18cd
    CALL dword ptr [EAX + 0x24]         ; 004f18d0
    MOV ECX,0x6                         ; 004f18d3
    ADD ESP,0x4                         ; 004f18d8
    LEA EAX,[EBP + -0x12]               ; 004f18db
    LEA ESI,[EBP + 0x6]                 ; 004f18de
    PUSH EAX                            ; 004f18e1
    MOVSD.REP ES:EDI,ESI                ; 004f18e2
    CALL core_box.cpp_FUN_0041a840      ; 004f18e4
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 004f18e9
    MOV dword ptr [EBP + 0x76],EAX      ; 004f18ec
    TEST EAX,EAX                        ; 004f18ef
    JZ 0x004f1917                       ; 004f18f1
        ;   XREF to: 004f1917 (CONDITIONAL_JUMP)  ; LAB_004f1917
    FLD float ptr [EBX + 0x4c34c]       ; 004f18f3
    FLDZ                                ; 004f18f9
    FCOMPP                              ; 004f18fb
    FNSTSW AX                           ; 004f18fd
    SAHF                                ; 004f18ff
    JA 0x004f192b                       ; 004f1900
        ;   XREF to: 004f192b (CONDITIONAL_JUMP)  ; LAB_004f192b
    LEA EAX,[EBX + 0x4b720]             ; 004f1902
    PUSH dword ptr [EBX + 0x4c34c]      ; 004f1908
    PUSH EAX                            ; 004f190e
    CALL core_morph.cpp_CMorph_render_FUN_005b76a0 ; 004f190f
        ;   XREF to: 005b76a0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_render_FUN_005b76a0(CMorph * this_ptr, float morph_t)
    ADD ESP,0x8                         ; 004f1914
        ;   Label: LAB_004f1914
    PUSH EBX                            ; 004f1917
        ;   Label: LAB_004f1917
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 004f1918
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    MOV EAX,dword ptr [EBP + 0x76]      ; 004f191d
    ADD ESP,0x4                         ; 004f1920
    LEA ESP,[EBP + 0x7e]                ; 004f1923
    POP EBP                             ; 004f1926
    POP EDI                             ; 004f1927
    POP ESI                             ; 004f1928
    POP EBX                             ; 004f1929
    RET                                 ; 004f192a
    MOV EAX,[0x0060b280]                ; 004f192b | DAT_0060b280
        ;   Label: LAB_004f192b
    MOV EAX,dword ptr [EAX + 0x18]      ; 004f1930 | DAT_01ba5c68
    MOV dword ptr [EBP + 0x72],EAX      ; 004f1933
    TEST EAX,EAX                        ; 004f1936
    SETZ AL                             ; 004f1938
    AND EAX,0xff                        ; 004f193b
    PUSH EAX                            ; 004f1940
    MOV ECX,dword ptr [0x0060b280]      ; 004f1941 | DAT_0060b280
    PUSH ECX                            ; 004f1947 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_0046bc90 ; 004f1948
        ;   XREF to: 0046bc90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_0046bc90(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 004f194d
    CALL engine_matrix.c_matrixPush_FUN_004e9710 ; 004f1950
        ;   XREF to: 004e9710 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_matrixPush_FUN_004e9710()
    PUSH 0x0                            ; 004f1955
    MOV ESI,dword ptr [0x01c38b6c]      ; 004f1957 | DAT_01c38b6c
    MOV EDI,dword ptr [0x01c38b90]      ; 004f195d | DAT_01c38b90
    MOV EAX,[0x01c38b9c]                ; 004f1963 | DAT_01c38b9c
    MOV EDX,dword ptr [0x01c38ba0]      ; 004f1968 | DAT_01c38ba0
    MOV ECX,dword ptr [0x01c38ba4]      ; 004f196e | DAT_01c38ba4
    PUSH 0x1                            ; 004f1974
    NEG ESI                             ; 004f1976
    NEG EDI                             ; 004f1978
    NEG EAX                             ; 004f197a
    NEG EDX                             ; 004f197c
    NEG ECX                             ; 004f197e
    PUSH -0x1                           ; 004f1980
    MOV dword ptr [0x01c38b6c],ESI      ; 004f1982 | DAT_01c38b6c
    MOV [0x01c38b9c],EAX                ; 004f1988 | DAT_01c38b9c
    PUSH -0x1                           ; 004f198d
    LEA EAX,[EBX + 0x2b4]               ; 004f198f
    MOV dword ptr [0x01c38b90],EDI      ; 004f1995 | DAT_01c38b90
    PUSH EAX                            ; 004f199b
    MOV dword ptr [0x01c38ba0],EDX      ; 004f199c | DAT_01c38ba0
    MOV dword ptr [0x01c38ba4],ECX      ; 004f19a2 | DAT_01c38ba4
    CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170 ; 004f19a8
        ;   XREF to: 00547170 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
    ADD ESP,0x14                        ; 004f19ad
    PUSH 0x0                            ; 004f19b0
    LEA EAX,[EBX + 0x10bc0]             ; 004f19b2
    PUSH EAX                            ; 004f19b8
    CALL core_cloth.cpp_CCloth_render_FUN_005b0fe0 ; 004f19b9
        ;   XREF to: 005b0fe0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_render_FUN_005b0fe0(CCloth * this_ptr, CDeformableModelInstance * deformable_model)
    ADD ESP,0x8                         ; 004f19be
    MOV ESI,dword ptr [0x0264bec4]      ; 004f19c1 | g_CStrangerClassInfo.name_hash
    MOV EAX,[0x01cedef4]                ; 004f19c7 | DAT_01cedef4
    PUSH ESI                            ; 004f19cc
    MOV EDI,dword ptr [EAX*0x4 + 0x1cedee4] ; 004f19cd
    PUSH EDI                            ; 004f19d4
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004f19d5
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    MOV dword ptr [EBP + 0x7a],EAX      ; 004f19da
    ADD ESP,0x8                         ; 004f19dd
    TEST EAX,EAX                        ; 004f19e0
    JZ 0x004f1ad5                       ; 004f19e2
        ;   XREF to: 004f1ad5 (CONDITIONAL_JUMP)  ; LAB_004f1ad5
    MOV ESI,0x40490fdb                  ; 004f19e8
    LEA EDI,[EBP + 0x66]                ; 004f19ed
    XOR EDX,EDX                         ; 004f19f0
    LEA EAX,[EBP + 0x66]                ; 004f19f2
    MOV dword ptr [EBP + 0x2a],EDX      ; 004f19f5
    MOV dword ptr [EBP + 0x32],EDX      ; 004f19f8
    MOV dword ptr [EBP + 0x2e],ESI      ; 004f19fb
    PUSH EAX                            ; 004f19fe
    MOV dword ptr [EBP + 0x36],EDX      ; 004f19ff
    MOV EAX,0x3f38263b                  ; 004f1a02
    LEA ESI,[EBP + 0x2a]                ; 004f1a07
    MOV dword ptr [EBP + 0x3a],EAX      ; 004f1a0a
    LEA EAX,[EBP + 0x36]                ; 004f1a0d
    MOV EDX,0x3e3d70a4                  ; 004f1a10
    PUSH EAX                            ; 004f1a15
    LEA EAX,[EBP + -0x42]               ; 004f1a16
    MOV dword ptr [EBP + 0x3e],EDX      ; 004f1a19
    PUSH EAX                            ; 004f1a1c
    MOVSD ES:EDI,ESI                    ; 004f1a1d
    MOVSD ES:EDI,ESI                    ; 004f1a1e
    MOVSD ES:EDI,ESI                    ; 004f1a1f
    CALL core_xform.cpp_FUN_00591c10    ; 004f1a20
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591c10()
    MOV ESI,dword ptr [0x01d097c4]      ; 004f1a25 | DAT_01d097c4
    LEA EAX,[ESI*0x4 + 0x0]             ; 004f1a2b
    SUB EAX,ESI                         ; 004f1a32
    MOV ESI,EAX                         ; 004f1a34
    SHL ESI,0x4                         ; 004f1a36
    LEA EAX,[EBX + 0x1134]              ; 004f1a39
    ADD ESP,0xc                         ; 004f1a3f
    ADD EAX,ESI                         ; 004f1a42
    PUSH EAX                            ; 004f1a44
    LEA EAX,[EBP + -0x42]               ; 004f1a45
    PUSH EAX                            ; 004f1a48
    LEA ESI,[EBP + -0x72]               ; 004f1a49
    LEA EDI,[EBP + 0xffffff5e]          ; 004f1a4c
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 004f1a52
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005916b0()
    MOV ECX,0xc                         ; 004f1a57
    LEA ESI,[EBP + -0x72]               ; 004f1a5c
    LEA EAX,[EBP + 0xffffff5e]          ; 004f1a5f
    ADD ESP,0x8                         ; 004f1a65
    MOVSD.REP ES:EDI,ESI                ; 004f1a68
    PUSH EAX                            ; 004f1a6a
    LEA ESI,[EBP + 0x4e]                ; 004f1a6b
    LEA EDI,[EBP + 0x5a]                ; 004f1a6e
    CALL core_xform.cpp_FUN_00592720    ; 004f1a71
        ;   XREF to: 00592720 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00592720()
    LEA ESI,[EBP + 0x4e]                ; 004f1a76
    LEA EAX,[EBP + 0xffffff5e]          ; 004f1a79
    ADD ESP,0x4                         ; 004f1a7f
    MOVSD ES:EDI,ESI                    ; 004f1a82
    MOVSD ES:EDI,ESI                    ; 004f1a83
    MOVSD ES:EDI,ESI                    ; 004f1a84
    PUSH EAX                            ; 004f1a85
    LEA ESI,[EBP + 0x1e]                ; 004f1a86
    CALL core_xform.cpp_FUN_00591de0    ; 004f1a89
        ;   XREF to: 00591de0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591de0()
    ADD ESP,0x4                         ; 004f1a8e
    LEA EAX,[EBP + 0x5a]                ; 004f1a91
    PUSH EAX                            ; 004f1a94
    LEA EAX,[EBP + 0x42]                ; 004f1a95
    LEA EDI,[EBP + 0x42]                ; 004f1a98
    PUSH EAX                            ; 004f1a9b
    MOV ECX,dword ptr [0x0060b280]      ; 004f1a9c | DAT_0060b280
    LEA ESI,[EBP + 0x1e]                ; 004f1aa2
    PUSH ECX                            ; 004f1aa5 | DAT_01ba5c50
    MOVSD ES:EDI,ESI                    ; 004f1aa6
    MOVSD ES:EDI,ESI                    ; 004f1aa7
    MOVSD ES:EDI,ESI                    ; 004f1aa8
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 004f1aa9
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 004f1aae
    MOV EAX,dword ptr [EBP + 0x7a]      ; 004f1ab1
    PUSH -0x1                           ; 004f1ab4
    ADD EAX,0x25744                     ; 004f1ab6
    PUSH 0x0                            ; 004f1abb
    PUSH EAX                            ; 004f1abd
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0 ; 004f1abe
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004f1ac3
    MOV ESI,dword ptr [0x0060b280]      ; 004f1ac6 | DAT_0060b280
    PUSH ESI                            ; 004f1acc | DAT_01ba5c50
    CALL engine_matrix.c_pop_FUN_0046b4a0 ; 004f1acd
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 004f1ad2
    PUSH EBX                            ; 004f1ad5
        ;   Label: LAB_004f1ad5
    CALL core_charactr.cpp_CCharacter_renderAttachedModels_FUN_00425aa0 ; 004f1ad6
        ;   XREF to: 00425aa0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_renderAttachedModels_FUN_00425aa0(CCharacter * this_ptr)
    MOV EDI,dword ptr [0x01d1cdc8]      ; 004f1adb | DAT_01d1cdc8
    ADD ESP,0x4                         ; 004f1ae1
    TEST EDI,EDI                        ; 004f1ae4
    JZ 0x004f1b13                       ; 004f1ae6
        ;   XREF to: 004f1b13 (CONDITIONAL_JUMP)  ; LAB_004f1b13
    MOV EAX,[0x0060b280]                ; 004f1ae8 | DAT_0060b280
    PUSH EAX                            ; 004f1aed | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 004f1aee
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004f1af3
    TEST EAX,EAX                        ; 004f1af6
    JNZ 0x004f1b13                      ; 004f1af8
        ;   XREF to: 004f1b13 (CONDITIONAL_JUMP)  ; LAB_004f1b13
    PUSH EBX                            ; 004f1afa
    LEA ESI,[EBX + 0x2b4]               ; 004f1afb
    PUSH ESI                            ; 004f1b01
    CALL core_motion.cpp_FUN_005042e0   ; 004f1b02
        ;   XREF to: 005042e0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_FUN_005042e0(CMotionController * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004f1b07
    PUSH ESI                            ; 004f1b0a
    CALL core_motion.cpp_FUN_005035c0   ; 004f1b0b
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    ADD ESP,0x4                         ; 004f1b10
    MOV EDX,dword ptr [0x0060b280]      ; 004f1b13 | DAT_0060b280
        ;   Label: LAB_004f1b13
    PUSH EDX                            ; 004f1b19 | DAT_01ba5c50
    CALL engine_matrix.c_pop_FUN_0046b4a0 ; 004f1b1a
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 004f1b1f
    MOV ECX,dword ptr [EBP + 0x72]      ; 004f1b22
    PUSH ECX                            ; 004f1b25
    MOV ESI,dword ptr [0x0060b280]      ; 004f1b26 | DAT_0060b280
    PUSH ESI                            ; 004f1b2c | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_0046bc90 ; 004f1b2d
        ;   XREF to: 0046bc90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_0046bc90(CDemonRenderer * this_ptr, int enabled)
    JMP 0x004f1914                      ; 004f1b32
        ;   XREF to: 004f1914 (UNCONDITIONAL_JUMP)  ; LAB_004f1914

