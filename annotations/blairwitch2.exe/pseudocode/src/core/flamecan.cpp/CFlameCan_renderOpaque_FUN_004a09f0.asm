; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_flamecan_cpp_CFlameCan_renderOpaque_FUN_004a09f0(CFlameCan *this_ptr)
;
; Parameters:
; CFlameCan *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;
; Called Functions:
;   core_box.cpp_FUN_0041a840
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
;   engine_drender.cpp_pop_FUN_0046b4a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a09f0
        ;   Label: core_flamecan.cpp_CFlameCan_renderOpaque_FUN_004a09f0
    PUSH ESI                            ; 004a09f1
    PUSH EDI                            ; 004a09f2
    SUB ESP,0x30                        ; 004a09f3
    MOV EBX,dword ptr [ESP + 0x40]      ; 004a09f6
    LEA EAX,[EBX + 0x20]                ; 004a09fa
    PUSH EAX                            ; 004a09fd
    MOV EDX,dword ptr [0x0060b280]      ; 004a09fe | DAT_0060b280
    PUSH EDX                            ; 004a0a04
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 004a0a05
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004a0a0a
    PUSH 0x0                            ; 004a0a0d
    LEA EAX,[EBX + 0x30]                ; 004a0a0f
    PUSH EAX                            ; 004a0a12
    MOV ECX,dword ptr [0x0060b280]      ; 004a0a13 | DAT_0060b280
    PUSH ECX                            ; 004a0a19
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 004a0a1a
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 004a0a1f
    PUSH 0x0                            ; 004a0a22
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004a0a24
    PUSH EBX                            ; 004a0a2a
    LEA ESI,[ESP + 0x20]                ; 004a0a2b
    LEA EDI,[ESP + 0x8]                 ; 004a0a2f
    CALL dword ptr [EAX + 0x24]         ; 004a0a33
    MOV ECX,0x6                         ; 004a0a36
    ADD ESP,0x4                         ; 004a0a3b
    LEA EAX,[ESP + 0x4]                 ; 004a0a3e
    LEA ESI,[ESP + 0x1c]                ; 004a0a42
    PUSH EAX                            ; 004a0a46
    MOVSD.REP ES:EDI,ESI                ; 004a0a47
    CALL core_box.cpp_FUN_0041a840      ; 004a0a49
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 004a0a4e
    MOV ESI,EAX                         ; 004a0a51
    MOV dword ptr [EBX + 0x89c],EAX     ; 004a0a53
    TEST EAX,EAX                        ; 004a0a59
    JNZ 0x004a0a75                      ; 004a0a5b
        ;   XREF to: 004a0a75 (CONDITIONAL_JUMP)  ; LAB_004a0a75
    MOV EBX,dword ptr [0x0060b280]      ; 004a0a5d | DAT_0060b280
        ;   Label: LAB_004a0a5d
    PUSH EBX                            ; 004a0a63
    CALL engine_drender.cpp_pop_FUN_0046b4a0 ; 004a0a64
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 004a0a69
    MOV EAX,ESI                         ; 004a0a6c
    ADD ESP,0x30                        ; 004a0a6e
    POP EDI                             ; 004a0a71
    POP ESI                             ; 004a0a72
    POP EBX                             ; 004a0a73
    RET                                 ; 004a0a74
    PUSH -0x1                           ; 004a0a75
        ;   Label: LAB_004a0a75
    ADD EBX,0x2b4                       ; 004a0a77
    PUSH 0x0                            ; 004a0a7d
    PUSH EBX                            ; 004a0a7f
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0 ; 004a0a80
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004a0a85
    JMP 0x004a0a5d                      ; 004a0a88
        ;   XREF to: 004a0a5d (UNCONDITIONAL_JUMP)  ; LAB_004a0a5d

