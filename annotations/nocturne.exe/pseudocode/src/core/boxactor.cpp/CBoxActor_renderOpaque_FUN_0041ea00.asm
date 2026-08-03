; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_boxactor_cpp_CBoxActor_renderOpaque_FUN_0041ea00(CBoxActor *this_ptr)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x20]:1  local_20
;
; Referenced Globals:
;   void* PTR_DAT_005ae700 = 01b4d738
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041ea00
        ;   Label: core_boxactor.cpp_CBoxActor_renderOpaque_FUN_0041ea00
    PUSH EBP                            ; 0041ea01
    SUB ESP,0x18                        ; 0041ea02
    MOV EBX,dword ptr [ESP + 0x24]      ; 0041ea05
    LEA EAX,[EBX + 0x150]               ; 0041ea09
    PUSH EAX                            ; 0041ea0f
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 0041ea10
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(CKeyFramedModelInstance * this_ptr)
    MOV EDX,dword ptr [EAX + 0x110]     ; 0041ea15
    ADD ESP,0x4                         ; 0041ea1b
    CMP EDX,0x1                         ; 0041ea1e
    JGE 0x0041ea2b                      ; 0041ea21
        ;   XREF to: 0041ea2b (CONDITIONAL_JUMP)  ; LAB_0041ea2b
    XOR EAX,EAX                         ; 0041ea23
    ADD ESP,0x18                        ; 0041ea25
        ;   Label: LAB_0041ea25
    POP EBP                             ; 0041ea28
    POP EBX                             ; 0041ea29
    RET                                 ; 0041ea2a
    MOV ECX,dword ptr [0x005ae704]      ; 0041ea2b | DAT_005ae704
        ;   Label: LAB_0041ea2b
    PUSH ECX                            ; 0041ea31 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 0041ea32
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0041ea37
    TEST EAX,EAX                        ; 0041ea3a
    JNZ 0x0041ea47                      ; 0041ea3c
        ;   XREF to: 0041ea47 (CONDITIONAL_JUMP)  ; LAB_0041ea47
    CMP dword ptr [EBX + 0xfc],0x0      ; 0041ea3e
    JNZ 0x0041ea25                      ; 0041ea45
        ;   XREF to: 0041ea25 (CONDITIONAL_JUMP)  ; LAB_0041ea25
    CMP dword ptr [EBX + 0x5ec],0x0     ; 0041ea47
        ;   Label: LAB_0041ea47
    JZ 0x0041eace                       ; 0041ea4e
        ;   XREF to: 0041eace (CONDITIONAL_JUMP)  ; LAB_0041eace
    PUSH ESI                            ; 0041ea54
        ;   Label: LAB_0041ea54
    LEA EAX,[EBX + 0x20]                ; 0041ea55
    PUSH EAX                            ; 0041ea58
    MOV EAX,[0x005ae700]                ; 0041ea59 | PTR_DAT_005ae700
    PUSH EAX                            ; 0041ea5e | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 0041ea5f
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0041ea64
    PUSH 0x0                            ; 0041ea67
    LEA EAX,[EBX + 0x30]                ; 0041ea69
    PUSH EAX                            ; 0041ea6c
    MOV EDX,dword ptr [0x005ae700]      ; 0041ea6d | PTR_DAT_005ae700
    PUSH EDX                            ; 0041ea73 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 0041ea74
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 0041ea79
    PUSH 0x0                            ; 0041ea7c
    LEA EAX,[ESP + 0x8]                 ; 0041ea7e
    PUSH EAX                            ; 0041ea82
    MOV EDX,dword ptr [EBX + 0x14c]     ; 0041ea83
    PUSH EBX                            ; 0041ea89
    CALL dword ptr [EDX + 0x14]         ; 0041ea8a
    ADD ESP,0x8                         ; 0041ea8d
    PUSH EAX                            ; 0041ea90
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 0041ea91
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x8                         ; 0041ea96
    MOV ESI,EAX                         ; 0041ea99
    TEST EAX,EAX                        ; 0041ea9b
    JZ 0x0041eab6                       ; 0041ea9d
        ;   XREF to: 0041eab6 (CONDITIONAL_JUMP)  ; LAB_0041eab6
    PUSH -0x1                           ; 0041ea9f
    ADD EBX,0x150                       ; 0041eaa1
    PUSH dword ptr [EBX + 0x1b8]        ; 0041eaa7
    PUSH EBX                            ; 0041eaad
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 0041eaae
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0041eab3
    MOV ECX,dword ptr [0x005ae700]      ; 0041eab6 | PTR_DAT_005ae700
        ;   Label: LAB_0041eab6
    PUSH ECX                            ; 0041eabc | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 0041eabd
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 0041eac2
    MOV EAX,ESI                         ; 0041eac5
    POP ESI                             ; 0041eac7
    ADD ESP,0x18                        ; 0041eac8
    POP EBP                             ; 0041eacb
    POP EBX                             ; 0041eacc
    RET                                 ; 0041eacd
    MOV EBP,dword ptr [0x005ae704]      ; 0041eace | DAT_005ae704
        ;   Label: LAB_0041eace
    PUSH EBP                            ; 0041ead4 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 0041ead5
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0041eada
    TEST EAX,EAX                        ; 0041eadd
    JZ 0x0041ea54                       ; 0041eadf
        ;   XREF to: 0041ea54 (CONDITIONAL_JUMP)  ; LAB_0041ea54
    XOR EAX,EAX                         ; 0041eae5
    ADD ESP,0x18                        ; 0041eae7
    POP EBP                             ; 0041eaea
    POP EBX                             ; 0041eaeb
    RET                                 ; 0041eaec

