; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_filmreel_cpp_FUN_00492a90(int param_1)
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

    PUSH EBX                            ; 00492a90
        ;   Label: core_filmreel.cpp_FUN_00492a90
    PUSH ESI                            ; 00492a91
    PUSH EDI                            ; 00492a92
    SUB ESP,0x30                        ; 00492a93
    MOV EBX,dword ptr [ESP + 0x40]      ; 00492a96
    LEA EAX,[EBX + 0x20]                ; 00492a9a
    PUSH EAX                            ; 00492a9d
    MOV EDX,dword ptr [0x0060b280]      ; 00492a9e | DAT_0060b280
    PUSH EDX                            ; 00492aa4 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 00492aa5
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00492aaa
    PUSH 0x0                            ; 00492aad
    LEA EAX,[EBX + 0x30]                ; 00492aaf
    PUSH EAX                            ; 00492ab2
    MOV ECX,dword ptr [0x0060b280]      ; 00492ab3 | DAT_0060b280
    PUSH ECX                            ; 00492ab9 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 00492aba
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 00492abf
    PUSH 0x0                            ; 00492ac2
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00492ac4
    PUSH EBX                            ; 00492aca
    LEA ESI,[ESP + 0x20]                ; 00492acb
    LEA EDI,[ESP + 0x8]                 ; 00492acf
    CALL dword ptr [EAX + 0x24]         ; 00492ad3
    MOV ECX,0x6                         ; 00492ad6
    ADD ESP,0x4                         ; 00492adb
    LEA EAX,[ESP + 0x4]                 ; 00492ade
    LEA ESI,[ESP + 0x1c]                ; 00492ae2
    PUSH EAX                            ; 00492ae6
    MOVSD.REP ES:EDI,ESI                ; 00492ae7
    CALL core_box.cpp_FUN_0041a840      ; 00492ae9
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 00492aee
    MOV ESI,EAX                         ; 00492af1
    TEST EAX,EAX                        ; 00492af3
    JNZ 0x00492b11                      ; 00492af5
        ;   XREF to: 00492b11 (CONDITIONAL_JUMP)  ; LAB_00492b11
    MOV EBX,dword ptr [0x0060b280]      ; 00492af7 | DAT_0060b280
        ;   Label: LAB_00492af7
    PUSH EBX                            ; 00492afd | DAT_01ba5c50
    CALL engine_matrix.c_pop_FUN_0046b4a0 ; 00492afe
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 00492b03
    MOV EAX,ESI                         ; 00492b06
    ADD ESP,0x30                        ; 00492b08
    POP EDI                             ; 00492b0b
    POP ESI                             ; 00492b0c
    POP EBX                             ; 00492b0d
    MOV EAX,EAX                         ; 00492b0e
    PUSH -0x1                           ; 00492b11
        ;   Label: LAB_00492b11
    ADD EBX,0x2b4                       ; 00492b13
    PUSH 0x0                            ; 00492b19
    PUSH EBX                            ; 00492b1b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0 ; 00492b1c
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00492b21
    JMP 0x00492af7                      ; 00492b24
        ;   XREF to: 00492af7 (UNCONDITIONAL_JUMP)  ; LAB_00492af7

