; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CLeaf_render_FUN_0049a2c0(CLeaf *this_ptr)
;
; Parameters:
; CLeaf *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_01bdd7e4
;   CDemonSet g_CDemonSetInstance
;   undefined4 DAT_02cfd900
;
; Called Functions:
;   core_box.cpp_FUN_0041daf0
;   core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00460f20
;   core_set.cpp_CDemonSet_setLightingParameters_FUN_005375c0
;   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
;   engine_matrix.c_pop_FUN_0046d080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049a2c0
        ;   Label: core_fire.cpp_CLeaf_render_FUN_0049a2c0
    PUSH ESI                            ; 0049a2c1
    PUSH EDI                            ; 0049a2c2
    PUSH EBP                            ; 0049a2c3
    SUB ESP,0x18                        ; 0049a2c4
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0049a2c7
    PUSH EBX                            ; 0049a2cb
    MOV EDX,dword ptr [0x005f2afc]      ; 0049a2cc | DAT_005f2afc
    PUSH EDX                            ; 0049a2d2 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 0049a2d3
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0049a2d8
    PUSH 0x0                            ; 0049a2db
    LEA EAX,[EBX + 0x44]                ; 0049a2dd
    PUSH EAX                            ; 0049a2e0
    MOV ECX,dword ptr [0x005f2afc]      ; 0049a2e1 | DAT_005f2afc
    PUSH ECX                            ; 0049a2e7 | DAT_01bdd7e4
    LEA EDI,[ESP + 0xc]                 ; 0049a2e8
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0 ; 0049a2ec
        ;   XREF to: 0046cee0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 0049a2f1
    MOV ECX,0x6                         ; 0049a2f4
    MOV ESI,dword ptr [EBX + 0x50]      ; 0049a2f9
    PUSH 0x0                            ; 0049a2fc
    LEA EAX,[ESP + 0x4]                 ; 0049a2fe
    MOV ESI,dword ptr [ESI + 0x350]     ; 0049a302
    PUSH EAX                            ; 0049a308
    MOVSD.REP ES:EDI,ESI                ; 0049a309
    CALL core_box.cpp_FUN_0041daf0      ; 0049a30b
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 0049a310
    TEST EAX,EAX                        ; 0049a313
    JNZ 0x0049a32d                      ; 0049a315
        ;   XREF to: 0049a32d (CONDITIONAL_JUMP)  ; LAB_0049a32d
    MOV EAX,[0x005f2afc]                ; 0049a317 | DAT_005f2afc
        ;   Label: LAB_0049a317
    PUSH EAX                            ; 0049a31c | DAT_01bdd7e4
    CALL engine_matrix.c_pop_FUN_0046d080 ; 0049a31d
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 0049a322
    ADD ESP,0x18                        ; 0049a325
    POP EBP                             ; 0049a328
    POP EDI                             ; 0049a329
    POP ESI                             ; 0049a32a
    POP EBX                             ; 0049a32b
    RET                                 ; 0049a32c
    PUSH 0x0                            ; 0049a32d
        ;   Label: LAB_0049a32d
    LEA EAX,[ESP + 0x10]                ; 0049a32f
    PUSH EAX                            ; 0049a333
    LEA EAX,[ESP + 0x8]                 ; 0049a334
    PUSH EAX                            ; 0049a338
    PUSH 0x2cfd900                      ; 0049a339 | DAT_02cfd900
    PUSH EBX                            ; 0049a33e
    MOV ESI,dword ptr [0x00603b28]      ; 0049a33f | g_CDemonSetPtr
    PUSH ESI                            ; 0049a345 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setLightingParameters_FUN_005375c0 ; 0049a346
        ;   XREF to: 005375c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setLightingParameters_FUN_005375c0(CDemonSet * this_ptr, CVector3f * position, UOrientationVector * orientation, CVector3f * aabb_min, ...)
    ADD ESP,0x18                        ; 0049a34b
    PUSH 0xffff                         ; 0049a34e
    MOV EDI,dword ptr [0x005f2afc]      ; 0049a353 | DAT_005f2afc
    PUSH EDI                            ; 0049a359 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 0049a35a
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0049a35f
    PUSH 0x2e7                          ; 0049a362
    PUSH 0x0                            ; 0049a367
    PUSH 0x0                            ; 0049a369
    MOV EBP,dword ptr [EBX + 0x50]      ; 0049a36b
    PUSH EBP                            ; 0049a36e
    CALL core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00460f20 ; 0049a36f
        ;   XREF to: 00460f20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00460f20(CKeyFramedModel * this_ptr, int frame_index, CKeyFramedModelInstance * instance, int render_flags)
    ADD ESP,0x10                        ; 0049a374
    JMP 0x0049a317                      ; 0049a377
        ;   XREF to: 0049a317 (UNCONDITIONAL_JUMP)  ; LAB_0049a317

