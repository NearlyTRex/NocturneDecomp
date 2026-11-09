; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_crate_cpp_FUN_0043a130(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
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

    PUSH EBX                            ; 0043a130
        ;   Label: core_crate.cpp_FUN_0043a130
    PUSH ESI                            ; 0043a131
    PUSH EDI                            ; 0043a132
    SUB ESP,0x30                        ; 0043a133
    MOV EBX,dword ptr [ESP + 0x40]      ; 0043a136
    LEA EAX,[EBX + 0x20]                ; 0043a13a
    PUSH EAX                            ; 0043a13d
    MOV EDX,dword ptr [0x0060b280]      ; 0043a13e | DAT_0060b280
    PUSH EDX                            ; 0043a144 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 0043a145
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0043a14a
    PUSH 0x0                            ; 0043a14d
    LEA EAX,[EBX + 0x30]                ; 0043a14f
    PUSH EAX                            ; 0043a152
    MOV ECX,dword ptr [0x0060b280]      ; 0043a153 | DAT_0060b280
    PUSH ECX                            ; 0043a159 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 0043a15a
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0043a15f
    PUSH 0x0                            ; 0043a162
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0043a164
    PUSH EBX                            ; 0043a16a
    LEA ESI,[ESP + 0x20]                ; 0043a16b
    LEA EDI,[ESP + 0x8]                 ; 0043a16f
    CALL dword ptr [EAX + 0x24]         ; 0043a173
    MOV ECX,0x6                         ; 0043a176
    ADD ESP,0x4                         ; 0043a17b
    LEA EAX,[ESP + 0x4]                 ; 0043a17e
    LEA ESI,[ESP + 0x1c]                ; 0043a182
    PUSH EAX                            ; 0043a186
    MOVSD.REP ES:EDI,ESI                ; 0043a187
    CALL core_box.cpp_FUN_0041a840      ; 0043a189
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 0043a18e
    MOV ESI,EAX                         ; 0043a191
    TEST EAX,EAX                        ; 0043a193
    JNZ 0x0043a1b1                      ; 0043a195
        ;   XREF to: 0043a1b1 (CONDITIONAL_JUMP)  ; LAB_0043a1b1
    MOV EBX,dword ptr [0x0060b280]      ; 0043a197 | DAT_0060b280
        ;   Label: LAB_0043a197
    PUSH EBX                            ; 0043a19d | DAT_01ba5c50
    CALL engine_matrix.c_pop_FUN_0046b4a0 ; 0043a19e
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 0043a1a3
    MOV EAX,ESI                         ; 0043a1a6
    ADD ESP,0x30                        ; 0043a1a8
    POP EDI                             ; 0043a1ab
    POP ESI                             ; 0043a1ac
    POP EBX                             ; 0043a1ad
    MOV EAX,EAX                         ; 0043a1ae
    PUSH -0x1                           ; 0043a1b1
        ;   Label: LAB_0043a1b1
    ADD EBX,0x2b4                       ; 0043a1b3
    PUSH 0x0                            ; 0043a1b9
    PUSH EBX                            ; 0043a1bb
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0 ; 0043a1bc
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0043a1c1
    JMP 0x0043a197                      ; 0043a1c4
        ;   XREF to: 0043a197 (UNCONDITIONAL_JUMP)  ; LAB_0043a197

