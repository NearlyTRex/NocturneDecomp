; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_trap_cpp_CTrap_renderOpaque_FUN_00546ab0(CTrap *this_ptr)
;
; Parameters:
; CTrap *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
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

    PUSH EBX                            ; 00546ab0
        ;   Label: core_trap.cpp_CTrap_renderOpaque_FUN_00546ab0
    PUSH ESI                            ; 00546ab1
    PUSH EDI                            ; 00546ab2
    PUSH EBP                            ; 00546ab3
    SUB ESP,0x18                        ; 00546ab4
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00546ab7
    LEA EAX,[EBX + 0x20]                ; 00546abb
    PUSH EAX                            ; 00546abe
    MOV EDX,dword ptr [0x005ae704]      ; 00546abf | DAT_005ae704
    PUSH EDX                            ; 00546ac5 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 00546ac6
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00546acb
    PUSH 0x0                            ; 00546ace
    LEA EAX,[EBX + 0x30]                ; 00546ad0
    PUSH EAX                            ; 00546ad3
    MOV ECX,dword ptr [0x005ae704]      ; 00546ad4 | DAT_005ae704
    PUSH ECX                            ; 00546ada | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 00546adb
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 00546ae0
    PUSH 0x0                            ; 00546ae3
    LEA EAX,[ESP + 0x4]                 ; 00546ae5
    PUSH EAX                            ; 00546ae9
    MOV ESI,dword ptr [EBX + 0x14c]     ; 00546aea
    PUSH EBX                            ; 00546af0
    CALL dword ptr [ESI + 0x14]         ; 00546af1
    ADD ESP,0x8                         ; 00546af4
    PUSH EAX                            ; 00546af7
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 00546af8
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x8                         ; 00546afd
    MOV ESI,EAX                         ; 00546b00
    TEST EAX,EAX                        ; 00546b02
    JZ 0x00546b26                       ; 00546b04
        ;   XREF to: 00546b26 (CONDITIONAL_JUMP)  ; LAB_00546b26
    MOV EDI,dword ptr [EBX + 0x2d0]     ; 00546b06
    LEA EAX,[EBX + 0x150]               ; 00546b0c
    TEST EDI,EDI                        ; 00546b12
    JZ 0x00546b3f                       ; 00546b14
        ;   XREF to: 00546b3f (CONDITIONAL_JUMP)  ; LAB_00546b3f
    PUSH -0x1                           ; 00546b16
    PUSH 0x40400000                     ; 00546b18
    PUSH EAX                            ; 00546b1d
        ;   Label: LAB_00546b1d
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 00546b1e
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00546b23
    MOV EBP,dword ptr [0x005ae704]      ; 00546b26 | DAT_005ae704
        ;   Label: LAB_00546b26
    PUSH EBP                            ; 00546b2c | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 00546b2d
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 00546b32
    MOV EAX,ESI                         ; 00546b35
    ADD ESP,0x18                        ; 00546b37
    POP EBP                             ; 00546b3a
    POP EDI                             ; 00546b3b
    POP ESI                             ; 00546b3c
    POP EBX                             ; 00546b3d
    RET                                 ; 00546b3e
    PUSH -0x1                           ; 00546b3f
        ;   Label: LAB_00546b3f
    PUSH 0x0                            ; 00546b41
    JMP 0x00546b1d                      ; 00546b43
        ;   XREF to: 00546b1d (UNCONDITIONAL_JUMP)  ; LAB_00546b1d

