; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_renderAttachedModels_FUN_00425aa0(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x98]:1  local_98
; undefined        Stack[-0x68]:1  local_68
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x3c]:4  local_3c
; undefined        Stack[-0x38]:1  local_38
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined        Stack[-0x20]:1  local_20
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_charactr.cpp_FUN_00424bd0 at 00424c1b
;   core_mimic.cpp_CMimic_renderMirrored_FUN_004f1890 at 004f1ad6
;   core_vampboss.cpp_FUN_00582ec0 at 00582f6b
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_007bdadc
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
;   core_xform.cpp_FUN_00591de0
;   core_xform.cpp_multiplyMatrix3x4_FUN_005916b0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
;   engine_matrix.c_pop_FUN_0046b4a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00425aa0
        ;   Label: core_charactr.cpp_CCharacter_renderAttachedModels_FUN_00425aa0
    PUSH ESI                            ; 00425aa1
    PUSH EDI                            ; 00425aa2
    PUSH EBP                            ; 00425aa3
    SUB ESP,0x88                        ; 00425aa4
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00425aaa
    MOV EDX,dword ptr [EAX + 0x3448]    ; 00425ab1
    XOR EBP,EBP                         ; 00425ab7
    TEST EDX,EDX                        ; 00425ab9
    JLE 0x00425b02                      ; 00425abb
        ;   XREF to: 00425b02 (CONDITIONAL_JUMP)  ; LAB_00425b02
    ADD EAX,0x1134                      ; 00425abd
    MOV EBX,dword ptr [ESP + 0x9c]      ; 00425ac2
    MOV dword ptr [ESP + 0x84],EAX      ; 00425ac9
    ADD EBX,0x344c                      ; 00425ad0
    MOV EAX,dword ptr [EBX]             ; 00425ad6
        ;   Label: LAB_00425ad6
    MOV ESI,dword ptr [ESP + 0x9c]      ; 00425ad8
    SHL EAX,0x2                         ; 00425adf
    ADD EAX,ESI                         ; 00425ae2
    CMP dword ptr [EAX + 0x23f4],0x0    ; 00425ae4
    JNZ 0x00425b0d                      ; 00425aeb
        ;   XREF to: 00425b0d (CONDITIONAL_JUMP)  ; LAB_00425b0d
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00425aed
        ;   Label: LAB_00425aed
    INC EBP                             ; 00425af4
    MOV ECX,dword ptr [EAX + 0x3448]    ; 00425af5
    ADD EBX,0x38                        ; 00425afb
    CMP EBP,ECX                         ; 00425afe
    JL 0x00425ad6                       ; 00425b00
        ;   XREF to: 00425ad6 (CONDITIONAL_JUMP)  ; LAB_00425ad6
    ADD ESP,0x88                        ; 00425b02
        ;   Label: LAB_00425b02
    POP EBP                             ; 00425b08
    POP EDI                             ; 00425b09
    POP ESI                             ; 00425b0a
    POP EBX                             ; 00425b0b
    RET                                 ; 00425b0c
    IMUL EAX,dword ptr [EBX + 0x4],0x30 ; 00425b0d
        ;   Label: LAB_00425b0d
    ADD EAX,dword ptr [ESP + 0x84]      ; 00425b11
    PUSH EAX                            ; 00425b18
    LEA EAX,[EBX + 0x8]                 ; 00425b19
    PUSH EAX                            ; 00425b1c
    LEA ESI,[ESP + 0x8]                 ; 00425b1d
    LEA EDI,[ESP + 0x38]                ; 00425b21
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 00425b25
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005916b0()
    MOV ECX,0xc                         ; 00425b2a
    LEA ESI,[ESP + 0x8]                 ; 00425b2f
    ADD ESP,0x8                         ; 00425b33
    LEA EAX,[ESP + 0x30]                ; 00425b36
    MOVSD.REP ES:EDI,ESI                ; 00425b3a
    PUSH EAX                            ; 00425b3c
    LEA ESI,[ESP + 0x7c]                ; 00425b3d
    CALL core_xform.cpp_FUN_00591de0    ; 00425b41
        ;   XREF to: 00591de0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591de0()
    ADD ESP,0x4                         ; 00425b46
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00425b49
    MOV dword ptr [ESP + 0x6c],EAX      ; 00425b4d
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00425b51
    MOV dword ptr [ESP + 0x70],EAX      ; 00425b55
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00425b59
    LEA EDI,[ESP + 0x60]                ; 00425b5d
    MOV dword ptr [ESP + 0x74],EAX      ; 00425b61
    LEA EAX,[ESP + 0x6c]                ; 00425b65
    LEA ESI,[ESP + 0x78]                ; 00425b69
    PUSH EAX                            ; 00425b6d
    LEA EAX,[ESP + 0x64]                ; 00425b6e
    MOVSD ES:EDI,ESI                    ; 00425b72
    MOVSD ES:EDI,ESI                    ; 00425b73
    MOVSD ES:EDI,ESI                    ; 00425b74
    PUSH EAX                            ; 00425b75
    MOV ESI,dword ptr [0x0060b280]      ; 00425b76 | DAT_0060b280
    PUSH ESI                            ; 00425b7c | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 00425b7d
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 00425b82
    PUSH -0x1                           ; 00425b85
    PUSH 0x0                            ; 00425b87
    PUSH 0x7bdadc                       ; 00425b89 | DAT_007bdadc
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0 ; 00425b8e
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00425b93
    MOV EDI,dword ptr [0x0060b280]      ; 00425b96 | DAT_0060b280
    PUSH EDI                            ; 00425b9c | DAT_01ba5c50
    CALL engine_matrix.c_pop_FUN_0046b4a0 ; 00425b9d
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 00425ba2
    JMP 0x00425aed                      ; 00425ba5
        ;   XREF to: 00425aed (UNCONDITIONAL_JUMP)  ; LAB_00425aed

