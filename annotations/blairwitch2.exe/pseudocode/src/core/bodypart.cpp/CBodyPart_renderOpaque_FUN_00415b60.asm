; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_bodypart_cpp_CBodyPart_renderOpaque_FUN_00415b60(CBodyPart *this_ptr)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_01ba5c50
;   undefined4 g_CDemonSetInstance.disable_directional_lighting
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
;   core_bodypart.cpp_CBodyPart_renderGeometry_FUN_004159e0
;   core_box.cpp_FUN_0041a840
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960
;   engine_matrix.c_pop_FUN_0046b4a0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00415b60
        ;   Label: core_bodypart.cpp_CBodyPart_renderOpaque_FUN_00415b60
    SUB ESP,0x34                        ; 00415b61
    MOV EBP,dword ptr [ESP + 0x3c]      ; 00415b64
    CMP dword ptr [EBP + 0x2b4],0x1     ; 00415b68
    JLE 0x00415b94                      ; 00415b6f
        ;   XREF to: 00415b94 (CONDITIONAL_JUMP)  ; LAB_00415b94
    CMP dword ptr [EBP + 0x1340],0x0    ; 00415b71
    JZ 0x00415b8d                       ; 00415b78
        ;   XREF to: 00415b8d (CONDITIONAL_JUMP)  ; LAB_00415b8d
    CMP dword ptr [EBP + 0x8a8],0x0     ; 00415b7a
    JLE 0x00415b8d                      ; 00415b81
        ;   XREF to: 00415b8d (CONDITIONAL_JUMP)  ; LAB_00415b8d
    MOV EAX,0x1                         ; 00415b83
    ADD ESP,0x34                        ; 00415b88
    POP EBP                             ; 00415b8b
    RET                                 ; 00415b8c
    XOR EAX,EAX                         ; 00415b8d
        ;   Label: LAB_00415b8d
    ADD ESP,0x34                        ; 00415b8f
    POP EBP                             ; 00415b92
    RET                                 ; 00415b93
    PUSH EDI                            ; 00415b94
        ;   Label: LAB_00415b94
    PUSH ESI                            ; 00415b95
    PUSH EBX                            ; 00415b96
    MOV EAX,[0x0061b5a8]                ; 00415b97 | g_CDemonSetPtr
    MOV EBX,dword ptr [EBP + 0x10c4]    ; 00415b9c
    PUSH EBP                            ; 00415ba2
    MOV dword ptr [EAX + 0x15ac98],EBX  ; 00415ba3 | g_CDemonSetInstance.disable_directional_lighting
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 00415ba9
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00415bae
    PUSH 0x0                            ; 00415bb1
    MOV EAX,dword ptr [EBP + 0x2b0]     ; 00415bb3
    PUSH EBP                            ; 00415bb9
    LEA ESI,[ESP + 0x14]                ; 00415bba
    LEA EDI,[ESP + 0x2c]                ; 00415bbe
    CALL dword ptr [EAX + 0x24]         ; 00415bc2
    MOV ECX,0x6                         ; 00415bc5
    ADD ESP,0x4                         ; 00415bca
    LEA EAX,[ESP + 0x28]                ; 00415bcd
    LEA ESI,[ESP + 0x10]                ; 00415bd1
    PUSH EAX                            ; 00415bd5
    MOVSD.REP ES:EDI,ESI                ; 00415bd6
    CALL core_box.cpp_FUN_0041a840      ; 00415bd8
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 00415bdd
    MOV dword ptr [EBP + 0x1340],EAX    ; 00415be0
    TEST EAX,EAX                        ; 00415be6
    JZ 0x00415c80                       ; 00415be8
        ;   XREF to: 00415c80 (CONDITIONAL_JUMP)  ; LAB_00415c80
    CMP dword ptr [EBP + 0x10c8],0x0    ; 00415bee
    JNZ 0x00415cac                      ; 00415bf5
        ;   XREF to: 00415cac (CONDITIONAL_JUMP)  ; LAB_00415cac
    PUSH -0x1                           ; 00415bfb
        ;   Label: LAB_00415bfb
    PUSH EBP                            ; 00415bfd
    CALL core_bodypart.cpp_CBodyPart_renderGeometry_FUN_004159e0 ; 00415bfe
        ;   XREF to: 004159e0 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_renderGeometry_FUN_004159e0(CBodyPart * this_ptr, int render_flags)
    ADD ESP,0x8                         ; 00415c03
    MOV EDI,dword ptr [EBP + 0x3e8]     ; 00415c06
        ;   Label: LAB_00415c06
    XOR EBX,EBX                         ; 00415c0c
    TEST EDI,EDI                        ; 00415c0e
    JLE 0x00415c80                      ; 00415c10
        ;   XREF to: 00415c80 (CONDITIONAL_JUMP)  ; LAB_00415c80
    LEA EAX,[EBP + 0x3ec]               ; 00415c12
    LEA ESI,[EBP + 0x404]               ; 00415c18
    MOV dword ptr [ESP + 0x3c],EAX      ; 00415c1e
    LEA EDI,[EBP + 0x3f8]               ; 00415c22
    IMUL EAX,EBX,0x194                  ; 00415c28
        ;   Label: LAB_00415c28
    ADD EAX,dword ptr [ESP + 0x3c]      ; 00415c2e
    PUSH EAX                            ; 00415c32
    PUSH EDI                            ; 00415c33
    MOV EAX,[0x0060b280]                ; 00415c34 | DAT_0060b280
    PUSH EAX                            ; 00415c39 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 00415c3a
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 00415c3f
    PUSH -0x1                           ; 00415c42
    PUSH 0x0                            ; 00415c44
    PUSH ESI                            ; 00415c46
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0 ; 00415c47
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00415c4c
    MOV EDX,dword ptr [0x0060b280]      ; 00415c4f | DAT_0060b280
    INC EBX                             ; 00415c55
    PUSH EDX                            ; 00415c56 | DAT_01ba5c50
    ADD EDI,0x194                       ; 00415c57
    ADD ESI,0x194                       ; 00415c5d
    CALL engine_matrix.c_pop_FUN_0046b4a0 ; 00415c63
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046b4a0()
    MOV ECX,dword ptr [EBP + 0x3e8]     ; 00415c68
    ADD ESP,0x4                         ; 00415c6e
    CMP EBX,ECX                         ; 00415c71
    JL 0x00415c28                       ; 00415c73
        ;   XREF to: 00415c28 (CONDITIONAL_JUMP)  ; LAB_00415c28
    LEA EAX,[EAX]                       ; 00415c75
    LEA EDX,[EDX]                       ; 00415c7b
    MOV EBX,EBX                         ; 00415c7e
    MOV EBX,dword ptr [0x0060b280]      ; 00415c80 | DAT_0060b280
        ;   Label: LAB_00415c80
    PUSH EBX                            ; 00415c86 | DAT_01ba5c50
    CALL engine_matrix.c_pop_FUN_0046b4a0 ; 00415c87
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046b4a0()
    MOV EAX,[0x0061b5a8]                ; 00415c8c | g_CDemonSetPtr
    MOV dword ptr [EAX + 0x15ac98],0x0  ; 00415c91 | g_CDemonSetInstance.disable_directional_lighting
    ADD ESP,0x4                         ; 00415c9b
    MOV EAX,dword ptr [EBP + 0x1340]    ; 00415c9e
    POP EBX                             ; 00415ca4
    POP ESI                             ; 00415ca5
    POP EDI                             ; 00415ca6
    ADD ESP,0x34                        ; 00415ca7
    POP EBP                             ; 00415caa
    RET                                 ; 00415cab
    MOV ESI,dword ptr [0x0060b280]      ; 00415cac | DAT_0060b280
        ;   Label: LAB_00415cac
    PUSH ESI                            ; 00415cb2 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 00415cb3
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00415cb8
    TEST EAX,EAX                        ; 00415cbb
    JNZ 0x00415bfb                      ; 00415cbd
        ;   XREF to: 00415bfb (CONDITIONAL_JUMP)  ; LAB_00415bfb
    JMP 0x00415c06                      ; 00415cc3
        ;   XREF to: 00415c06 (UNCONDITIONAL_JUMP)  ; LAB_00415c06

