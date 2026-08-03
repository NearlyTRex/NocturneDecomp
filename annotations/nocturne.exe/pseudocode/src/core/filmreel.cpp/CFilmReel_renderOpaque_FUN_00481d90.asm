; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_filmreel_cpp_CFilmReel_renderOpaque_FUN_00481d90(CFilmReel *this_ptr)
;
; Parameters:
; CFilmReel *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x20]:1  local_20
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481d90
        ;   Label: core_filmreel.cpp_CFilmReel_renderOpaque_FUN_00481d90
    PUSH ESI                            ; 00481d91
    SUB ESP,0x18                        ; 00481d92
    MOV EBX,dword ptr [ESP + 0x24]      ; 00481d95
    LEA EAX,[EBX + 0x20]                ; 00481d99
    PUSH EAX                            ; 00481d9c
    MOV EDX,dword ptr [0x005ae704]      ; 00481d9d | DAT_005ae704
    PUSH EDX                            ; 00481da3 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 00481da4
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00481da9
    PUSH 0x0                            ; 00481dac
    LEA EAX,[EBX + 0x30]                ; 00481dae
    PUSH EAX                            ; 00481db1
    MOV ECX,dword ptr [0x005ae704]      ; 00481db2 | DAT_005ae704
    PUSH ECX                            ; 00481db8 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 00481db9
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 00481dbe
    PUSH 0x0                            ; 00481dc1
    LEA EAX,[ESP + 0x4]                 ; 00481dc3
    PUSH EAX                            ; 00481dc7
    MOV ESI,dword ptr [EBX + 0x14c]     ; 00481dc8
    PUSH EBX                            ; 00481dce
    CALL dword ptr [ESI + 0x14]         ; 00481dcf
    ADD ESP,0x8                         ; 00481dd2
    PUSH EAX                            ; 00481dd5
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 00481dd6
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x8                         ; 00481ddb
    MOV ESI,EAX                         ; 00481dde
    TEST EAX,EAX                        ; 00481de0
    JNZ 0x00481e01                      ; 00481de2
        ;   XREF to: 00481e01 (CONDITIONAL_JUMP)  ; LAB_00481e01
    MOV EBX,dword ptr [0x005ae704]      ; 00481de4 | DAT_005ae704
        ;   Label: LAB_00481de4
    PUSH EBX                            ; 00481dea | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 00481deb
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 00481df0
    MOV EAX,ESI                         ; 00481df3
    ADD ESP,0x18                        ; 00481df5
    POP ESI                             ; 00481df8
    POP EBX                             ; 00481df9
    LEA EAX,[EAX]                       ; 00481dfa
    PUSH -0x1                           ; 00481e01
        ;   Label: LAB_00481e01
    ADD EBX,0x150                       ; 00481e03
    PUSH 0x0                            ; 00481e09
    PUSH EBX                            ; 00481e0b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 00481e0c
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00481e11
    JMP 0x00481de4                      ; 00481e14
        ;   XREF to: 00481de4 (UNCONDITIONAL_JUMP)  ; LAB_00481de4

