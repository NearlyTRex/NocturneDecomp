; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_anvil_cpp_FUN_0040ec10(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;
; Called Functions:
;   core_box.cpp_FUN_0041a840
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
;   engine_matrix.c_pop_FUN_0046b4a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040ec10
        ;   Label: core_anvil.cpp_FUN_0040ec10
    SUB ESP,0x30                        ; 0040ec11
    MOV EBX,dword ptr [ESP + 0x38]      ; 0040ec14
    CMP dword ptr [EBX + 0x498],0x0     ; 0040ec18
    JNZ 0x0040ec28                      ; 0040ec1f
        ;   XREF to: 0040ec28 (CONDITIONAL_JUMP)  ; LAB_0040ec28
    XOR EAX,EAX                         ; 0040ec21
    ADD ESP,0x30                        ; 0040ec23
    POP EBX                             ; 0040ec26
    RET                                 ; 0040ec27
    PUSH EDI                            ; 0040ec28
        ;   Label: LAB_0040ec28
    PUSH ESI                            ; 0040ec29
    LEA EAX,[EBX + 0x20]                ; 0040ec2a
    PUSH EAX                            ; 0040ec2d
    MOV ECX,dword ptr [0x0060b280]      ; 0040ec2e | DAT_0060b280
    PUSH ECX                            ; 0040ec34
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 0040ec35
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0040ec3a
    PUSH 0x0                            ; 0040ec3d
    LEA EAX,[EBX + 0x30]                ; 0040ec3f
    PUSH EAX                            ; 0040ec42
    MOV ESI,dword ptr [0x0060b280]      ; 0040ec43 | DAT_0060b280
    PUSH ESI                            ; 0040ec49
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 0040ec4a
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0040ec4f
    PUSH 0x0                            ; 0040ec52
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0040ec54
    PUSH EBX                            ; 0040ec5a
    LEA ESI,[ESP + 0x28]                ; 0040ec5b
    LEA EDI,[ESP + 0x10]                ; 0040ec5f
    CALL dword ptr [EAX + 0x24]         ; 0040ec63
    MOV ECX,0x6                         ; 0040ec66
    ADD ESP,0x4                         ; 0040ec6b
    LEA EAX,[ESP + 0xc]                 ; 0040ec6e
    LEA ESI,[ESP + 0x24]                ; 0040ec72
    PUSH EAX                            ; 0040ec76
    MOVSD.REP ES:EDI,ESI                ; 0040ec77
    CALL core_box.cpp_FUN_0041a840      ; 0040ec79
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 0040ec7e
    MOV ESI,EAX                         ; 0040ec81
    TEST EAX,EAX                        ; 0040ec83
    JZ 0x0040ec9a                       ; 0040ec85
        ;   XREF to: 0040ec9a (CONDITIONAL_JUMP)  ; LAB_0040ec9a
    PUSH -0x1                           ; 0040ec87
    ADD EBX,0x2b4                       ; 0040ec89
    PUSH 0x0                            ; 0040ec8f
    PUSH EBX                            ; 0040ec91
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0 ; 0040ec92
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0040ec97
    MOV EDI,dword ptr [0x0060b280]      ; 0040ec9a | DAT_0060b280
        ;   Label: LAB_0040ec9a
    PUSH EDI                            ; 0040eca0
    CALL engine_matrix.c_pop_FUN_0046b4a0 ; 0040eca1
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 0040eca6
    MOV EAX,ESI                         ; 0040eca9
    POP ESI                             ; 0040ecab
    POP EDI                             ; 0040ecac
    ADD ESP,0x30                        ; 0040ecad
    POP EBX                             ; 0040ecb0
    RET                                 ; 0040ecb1

