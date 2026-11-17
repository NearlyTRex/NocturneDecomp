; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_renderPhantomEyes_FUN_0042b620(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x68]:1  local_68
; undefined        Stack[-0x38]:1  local_38
; undefined        Stack[-0x2c]:1  local_2c
; undefined        Stack[-0x20]:1  local_20
; undefined        Stack[-0x14]:1  local_14
;
; XREF[2]:
;   core_charactr.cpp_CCharacter_renderTransparent_FUN_004268b0 at 00426922
;   core_doc.cpp_CDoc_renderOpaque_FUN_004599a0 at 004599c8
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRenderer_PTR_0060b280 = 01ba5c50
;   CDemonRenderer g_CDemonRenderer_01ba5c50
;   CVector3f g_CVector3f_0265370c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10
;   core_charactr.cpp_CCharacter_renderEyeGlow_FUN_0042b760
;   core_xform.cpp_getTranslation_FUN_00592720
;   core_xform.cpp_matrixToEulerAngles_FUN_00591de0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
;   engine_drender.cpp_pop_FUN_0046b4a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042b620
        ;   Label: core_charactr.cpp_CCharacter_renderPhantomEyes_FUN_0042b620
    PUSH EBP                            ; 0042b621
    SUB ESP,0x60                        ; 0042b622
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0042b625
    CMP dword ptr [EBX + 0x10a28],0x0   ; 0042b629
    JNZ 0x0042b638                      ; 0042b630
        ;   XREF to: 0042b638 (CONDITIONAL_JUMP)  ; LAB_0042b638
    ADD ESP,0x60                        ; 0042b632
    POP EBP                             ; 0042b635
    POP EBX                             ; 0042b636
    RET                                 ; 0042b637
    PUSH EDI                            ; 0042b638
        ;   Label: LAB_0042b638
    PUSH ESI                            ; 0042b639
    MOV EDX,dword ptr [EBX + 0x10a24]   ; 0042b63a
    LEA EAX,[EDX*0x4 + 0x0]             ; 0042b640
    SUB EAX,EDX                         ; 0042b647
    SHL EAX,0x4                         ; 0042b649
    LEA ESI,[EBX + EAX*0x1]             ; 0042b64c
    MOV ECX,0xc                         ; 0042b64f
    LEA EDI,[ESP + 0x8]                 ; 0042b654
    LEA ESI,[ESI + 0x1134]              ; 0042b658
    LEA EAX,[ESP + 0x8]                 ; 0042b65e
    MOVSD.REP ES:EDI,ESI                ; 0042b662
    PUSH EAX                            ; 0042b664
    LEA ESI,[ESP + 0x3c]                ; 0042b665
    LEA EDI,[ESP + 0x48]                ; 0042b669
    CALL core_xform.cpp_matrixToEulerAngles_FUN_00591de0 ; 0042b66d
        ;   XREF to: 00591de0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_00591de0(CMatrix3x4f * matrix_in, CVector3f * euler_out)
    LEA ESI,[ESP + 0x3c]                ; 0042b672
    ADD ESP,0x4                         ; 0042b676
    LEA EAX,[ESP + 0x8]                 ; 0042b679
    MOVSD ES:EDI,ESI                    ; 0042b67d
    MOVSD ES:EDI,ESI                    ; 0042b67e
    MOVSD ES:EDI,ESI                    ; 0042b67f
    PUSH EAX                            ; 0042b680
    LEA ESI,[ESP + 0x60]                ; 0042b681
    CALL core_xform.cpp_getTranslation_FUN_00592720 ; 0042b685
        ;   XREF to: 00592720 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_getTranslation_FUN_00592720(CMatrix3x4f * matrix_in, CVector3f * vector_out)
    ADD ESP,0x4                         ; 0042b68a
    LEA EAX,[ESP + 0x50]                ; 0042b68d
    PUSH EAX                            ; 0042b691
    LEA EDI,[ESP + 0x54]                ; 0042b692
    PUSH 0x265370c                      ; 0042b696 | g_CVector3f_0265370c
    MOV ECX,dword ptr [0x0060b280]      ; 0042b69b | g_CDemonRenderer_PTR_0060b280
    LEA ESI,[ESP + 0x64]                ; 0042b6a1
    PUSH ECX                            ; 0042b6a5 | g_CDemonRenderer_01ba5c50
    MOVSD ES:EDI,ESI                    ; 0042b6a6
    MOVSD ES:EDI,ESI                    ; 0042b6a7
    MOVSD ES:EDI,ESI                    ; 0042b6a8
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 0042b6a9
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0042b6ae
    PUSH 0x0                            ; 0042b6b1
    LEA EAX,[ESP + 0x48]                ; 0042b6b3
    PUSH EAX                            ; 0042b6b7
    MOV ESI,dword ptr [0x0060b280]      ; 0042b6b8 | g_CDemonRenderer_PTR_0060b280
    PUSH ESI                            ; 0042b6be | g_CDemonRenderer_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 0042b6bf
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0042b6c4
    LEA EAX,[EBX + 0x10a0c]             ; 0042b6c7
    PUSH EAX                            ; 0042b6cd
    LEA EAX,[EBX + 0x10a48]             ; 0042b6ce
    PUSH EAX                            ; 0042b6d4
    MOV EDI,dword ptr [0x0060b280]      ; 0042b6d5 | g_CDemonRenderer_PTR_0060b280
    PUSH EDI                            ; 0042b6db | g_CDemonRenderer_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 0042b6dc
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0042b6e1
    PUSH 0x265370c                      ; 0042b6e4 | g_CVector3f_0265370c
    PUSH EBX                            ; 0042b6e9
    CALL core_charactr.cpp_CCharacter_renderEyeGlow_FUN_0042b760 ; 0042b6ea
        ;   XREF to: 0042b760 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_renderEyeGlow_FUN_0042b760(CCharacter * this_ptr, CVector3f * eye_position)
    ADD ESP,0x8                         ; 0042b6ef
    MOV EBP,dword ptr [0x0060b280]      ; 0042b6f2 | g_CDemonRenderer_PTR_0060b280
    PUSH EBP                            ; 0042b6f8 | g_CDemonRenderer_01ba5c50
    CALL engine_drender.cpp_pop_FUN_0046b4a0 ; 0042b6f9
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 0042b6fe
    LEA EAX,[EBX + 0x10a18]             ; 0042b701
    PUSH EAX                            ; 0042b707
    LEA EAX,[EBX + 0x10a54]             ; 0042b708
    PUSH EAX                            ; 0042b70e
    MOV EAX,[0x0060b280]                ; 0042b70f | g_CDemonRenderer_PTR_0060b280
    PUSH EAX                            ; 0042b714 | g_CDemonRenderer_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 0042b715
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0042b71a
    PUSH 0x265370c                      ; 0042b71d | g_CVector3f_0265370c
    PUSH EBX                            ; 0042b722
    CALL core_charactr.cpp_CCharacter_renderEyeGlow_FUN_0042b760 ; 0042b723
        ;   XREF to: 0042b760 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_renderEyeGlow_FUN_0042b760(CCharacter * this_ptr, CVector3f * eye_position)
    ADD ESP,0x8                         ; 0042b728
    MOV EDX,dword ptr [0x0060b280]      ; 0042b72b | g_CDemonRenderer_PTR_0060b280
    PUSH EDX                            ; 0042b731 | g_CDemonRenderer_01ba5c50
    CALL engine_drender.cpp_pop_FUN_0046b4a0 ; 0042b732
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 0042b737
    PUSH EBX                            ; 0042b73a
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 0042b73b
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0042b740
    PUSH EBX                            ; 0042b743
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 0042b744
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0042b749
    POP ESI                             ; 0042b74c
    POP EDI                             ; 0042b74d
    ADD ESP,0x60                        ; 0042b74e
    POP EBP                             ; 0042b751
    POP EBX                             ; 0042b752
    RET                                 ; 0042b753

