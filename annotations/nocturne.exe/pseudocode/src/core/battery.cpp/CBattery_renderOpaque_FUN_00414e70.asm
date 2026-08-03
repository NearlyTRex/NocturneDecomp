; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_battery_cpp_CBattery_renderOpaque_FUN_00414e70(CBattery *this_ptr)
;
; Parameters:
; CBattery *       Stack[0x4]:4   this_ptr
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

    PUSH EBX                            ; 00414e70
        ;   Label: core_battery.cpp_CBattery_renderOpaque_FUN_00414e70
    PUSH ESI                            ; 00414e71
    SUB ESP,0x18                        ; 00414e72
    MOV EBX,dword ptr [ESP + 0x24]      ; 00414e75
    LEA EAX,[EBX + 0x20]                ; 00414e79
    PUSH EAX                            ; 00414e7c
    MOV EDX,dword ptr [0x005ae704]      ; 00414e7d | DAT_005ae704
    PUSH EDX                            ; 00414e83 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 00414e84
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00414e89
    PUSH 0x0                            ; 00414e8c
    LEA EAX,[EBX + 0x30]                ; 00414e8e
    PUSH EAX                            ; 00414e91
    MOV ECX,dword ptr [0x005ae704]      ; 00414e92 | DAT_005ae704
    PUSH ECX                            ; 00414e98 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 00414e99
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 00414e9e
    PUSH 0x0                            ; 00414ea1
    LEA EAX,[ESP + 0x4]                 ; 00414ea3
    PUSH EAX                            ; 00414ea7
    MOV ESI,dword ptr [EBX + 0x14c]     ; 00414ea8
    PUSH EBX                            ; 00414eae
    CALL dword ptr [ESI + 0x14]         ; 00414eaf
    ADD ESP,0x8                         ; 00414eb2
    PUSH EAX                            ; 00414eb5
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 00414eb6
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x8                         ; 00414ebb
    MOV ESI,EAX                         ; 00414ebe
    TEST EAX,EAX                        ; 00414ec0
    JNZ 0x00414edb                      ; 00414ec2
        ;   XREF to: 00414edb (CONDITIONAL_JUMP)  ; LAB_00414edb
    MOV EBX,dword ptr [0x005ae704]      ; 00414ec4 | DAT_005ae704
        ;   Label: LAB_00414ec4
    PUSH EBX                            ; 00414eca | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 00414ecb
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 00414ed0
    MOV EAX,ESI                         ; 00414ed3
    ADD ESP,0x18                        ; 00414ed5
    POP ESI                             ; 00414ed8
    POP EBX                             ; 00414ed9
    RET                                 ; 00414eda
    PUSH -0x1                           ; 00414edb
        ;   Label: LAB_00414edb
    ADD EBX,0x150                       ; 00414edd
    PUSH 0x0                            ; 00414ee3
    PUSH EBX                            ; 00414ee5
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 00414ee6
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00414eeb
    JMP 0x00414ec4                      ; 00414eee
        ;   XREF to: 00414ec4 (UNCONDITIONAL_JUMP)  ; LAB_00414ec4

