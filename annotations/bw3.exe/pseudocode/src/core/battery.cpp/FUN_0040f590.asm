; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_battery_cpp_FUN_0040f590(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;
; Called Functions:
;   core_box.cpp_FUN_0041daf0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
;   engine_matrix.c_pop_FUN_0046d080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f590
        ;   Label: core_battery.cpp_FUN_0040f590
    PUSH ESI                            ; 0040f591
    PUSH EDI                            ; 0040f592
    SUB ESP,0x30                        ; 0040f593
    MOV EBX,dword ptr [ESP + 0x40]      ; 0040f596
    LEA EAX,[EBX + 0x20]                ; 0040f59a
    PUSH EAX                            ; 0040f59d
    MOV EDX,dword ptr [0x005f2afc]      ; 0040f59e | DAT_005f2afc
    PUSH EDX                            ; 0040f5a4
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 0040f5a5
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0040f5aa
    PUSH 0x0                            ; 0040f5ad
    LEA EAX,[EBX + 0x30]                ; 0040f5af
    PUSH EAX                            ; 0040f5b2
    MOV ECX,dword ptr [0x005f2afc]      ; 0040f5b3 | DAT_005f2afc
    PUSH ECX                            ; 0040f5b9
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 0040f5ba
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0040f5bf
    PUSH 0x0                            ; 0040f5c2
    MOV EAX,dword ptr [EBX + 0x154]     ; 0040f5c4
    PUSH EBX                            ; 0040f5ca
    LEA ESI,[ESP + 0x20]                ; 0040f5cb
    LEA EDI,[ESP + 0x8]                 ; 0040f5cf
    CALL dword ptr [EAX + 0x1c]         ; 0040f5d3
    MOV ECX,0x6                         ; 0040f5d6
    ADD ESP,0x4                         ; 0040f5db
    LEA EAX,[ESP + 0x4]                 ; 0040f5de
    LEA ESI,[ESP + 0x1c]                ; 0040f5e2
    PUSH EAX                            ; 0040f5e6
    MOVSD.REP ES:EDI,ESI                ; 0040f5e7
    CALL core_box.cpp_FUN_0041daf0      ; 0040f5e9
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 0040f5ee
    MOV ESI,EAX                         ; 0040f5f1
    TEST EAX,EAX                        ; 0040f5f3
    JNZ 0x0040f60f                      ; 0040f5f5
        ;   XREF to: 0040f60f (CONDITIONAL_JUMP)  ; LAB_0040f60f
    MOV EBX,dword ptr [0x005f2afc]      ; 0040f5f7 | DAT_005f2afc
        ;   Label: LAB_0040f5f7
    PUSH EBX                            ; 0040f5fd
    CALL engine_matrix.c_pop_FUN_0046d080 ; 0040f5fe
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 0040f603
    MOV EAX,ESI                         ; 0040f606
    ADD ESP,0x30                        ; 0040f608
    POP EDI                             ; 0040f60b
    POP ESI                             ; 0040f60c
    POP EBX                             ; 0040f60d
    RET                                 ; 0040f60e
    PUSH -0x1                           ; 0040f60f
        ;   Label: LAB_0040f60f
    ADD EBX,0x158                       ; 0040f611
    PUSH 0x0                            ; 0040f617
    PUSH EBX                            ; 0040f619
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540 ; 0040f61a
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0040f61f
    JMP 0x0040f5f7                      ; 0040f622
        ;   XREF to: 0040f5f7 (UNCONDITIONAL_JUMP)  ; LAB_0040f5f7

