; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_renderAttachedModels_FUN_0042a420(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; CMatrix3x4f      Stack[-0x8c]:48  local_8c
; CMatrix3x3f      Stack[-0x5c]:36  local_5c
; int              Stack[-0x30]:4  local_30
; CVector3f        Stack[-0x2c]:12  local_2c
; CVector3i        Stack[-0x20]:12  local_20
; CMatrix3x4f *    Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_charactr.cpp_CCharacter_renderCharacter_FUN_00429aa0 at 00429aec
;   core_mimic.cpp_CMimic_renderMirrored_FUN_005205f0 at 00520803
;   core_vampboss.cpp_CVampireBoss_renderOpaque_FUN_005e6da0 at 005e6e37
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CKeyFramedModelInstance CKeyFramedModelInstance_00823a98
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
;   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
;   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042a420
        ;   Label: core_charactr.cpp_CCharacter_renderAttachedModels_FUN_0042a420
    PUSH ESI                            ; 0042a421
    PUSH EDI                            ; 0042a422
    PUSH EBP                            ; 0042a423
    SUB ESP,0x7c                        ; 0042a424
    MOV EAX,dword ptr [ESP + 0x90]      ; 0042a427
    MOV EDX,dword ptr [EAX + 0x2df4]    ; 0042a42e
    XOR EBP,EBP                         ; 0042a434
    TEST EDX,EDX                        ; 0042a436
    JLE 0x0042a47c                      ; 0042a438
        ;   XREF to: 0042a47c (CONDITIONAL_JUMP)  ; LAB_0042a47c
    ADD EAX,0xfd8                       ; 0042a43a
    MOV EBX,dword ptr [ESP + 0x90]      ; 0042a43f
    MOV dword ptr [ESP + 0x78],EAX      ; 0042a446
    ADD EBX,0x2df8                      ; 0042a44a
    MOV EAX,dword ptr [EBX]             ; 0042a450
        ;   Label: LAB_0042a450
    MOV ESI,dword ptr [ESP + 0x90]      ; 0042a452
    SHL EAX,0x2                         ; 0042a459
    ADD EAX,ESI                         ; 0042a45c
    CMP dword ptr [EAX + 0x2298],0x0    ; 0042a45e
    JNZ 0x0042a484                      ; 0042a465
        ;   XREF to: 0042a484 (CONDITIONAL_JUMP)  ; LAB_0042a484
    MOV EAX,dword ptr [ESP + 0x90]      ; 0042a467
        ;   Label: LAB_0042a467
    INC EBP                             ; 0042a46e
    MOV ECX,dword ptr [EAX + 0x2df4]    ; 0042a46f
    ADD EBX,0x38                        ; 0042a475
    CMP EBP,ECX                         ; 0042a478
    JL 0x0042a450                       ; 0042a47a
        ;   XREF to: 0042a450 (CONDITIONAL_JUMP)  ; LAB_0042a450
    ADD ESP,0x7c                        ; 0042a47c
        ;   Label: LAB_0042a47c
    POP EBP                             ; 0042a47f
    POP EDI                             ; 0042a480
    POP ESI                             ; 0042a481
    POP EBX                             ; 0042a482
    RET                                 ; 0042a483
    IMUL EAX,dword ptr [EBX + 0x4],0x30 ; 0042a484
        ;   Label: LAB_0042a484
    ADD EAX,dword ptr [ESP + 0x78]      ; 0042a488
    PUSH EAX                            ; 0042a48c
    LEA EAX,[EBX + 0x8]                 ; 0042a48d
    PUSH EAX                            ; 0042a490
    LEA ESI,[ESP + 0x8]                 ; 0042a491
    LEA EDI,[ESP + 0x38]                ; 0042a495
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 0042a499
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    ADD ESP,0x8                         ; 0042a49e
    LEA EAX,[ESP + 0x60]                ; 0042a4a1
    MOV ECX,0xc                         ; 0042a4a5
    PUSH EAX                            ; 0042a4aa
    LEA EAX,[ESP + 0x34]                ; 0042a4ab
    LEA ESI,[ESP + 0x4]                 ; 0042a4af
    PUSH EAX                            ; 0042a4b3
    MOVSD.REP ES:EDI,ESI                ; 0042a4b4
    CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690 ; 0042a4b6
        ;   XREF to: 005f5690 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_005f5690(CMatrix3x3f * matrix_in, CVector3f * euler_out)
    ADD ESP,0x8                         ; 0042a4bb
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0042a4be
    MOV dword ptr [ESP + 0x6c],EAX      ; 0042a4c2
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0042a4c6
    MOV dword ptr [ESP + 0x70],EAX      ; 0042a4ca
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0042a4ce
    MOV dword ptr [ESP + 0x74],EAX      ; 0042a4d2
    LEA EAX,[ESP + 0x6c]                ; 0042a4d6
    PUSH EAX                            ; 0042a4da
    LEA EAX,[ESP + 0x64]                ; 0042a4db
    PUSH EAX                            ; 0042a4df
    MOV ESI,dword ptr [0x006703ec]      ; 0042a4e0 | g_CDemonRendererPtr2
    PUSH ESI                            ; 0042a4e6 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 0042a4e7
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 0042a4ec
    PUSH -0x1                           ; 0042a4ef
    PUSH 0x0                            ; 0042a4f1
    PUSH 0x823a98                       ; 0042a4f3 | CKeyFramedModelInstance_00823a98
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 0042a4f8
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0042a4fd
    MOV EDI,dword ptr [0x006703ec]      ; 0042a500 | g_CDemonRendererPtr2
    PUSH EDI                            ; 0042a506 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 0042a507
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()

