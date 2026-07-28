; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CMuzzleFlash_render_FUN_00484f00(CMuzzleFlash *this_ptr)
;
; Parameters:
; CMuzzleFlash *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_render_FUN_0048a650 at 0048a7ad
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_005be368
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01fb1b1c
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
;   crt_stdlib.c_rand_FUN_0056488c
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00484f00
        ;   Label: core_fire.cpp_CMuzzleFlash_render_FUN_00484f00
    PUSH EBP                            ; 00484f01
    SUB ESP,0x2c                        ; 00484f02
    MOV EBX,dword ptr [ESP + 0x38]      ; 00484f05
    CMP dword ptr [EBX],0x2             ; 00484f09
    JZ 0x00484f14                       ; 00484f0c
        ;   XREF to: 00484f14 (CONDITIONAL_JUMP)  ; LAB_00484f14
    ADD ESP,0x2c                        ; 00484f0e
    POP EBP                             ; 00484f11
    POP EBX                             ; 00484f12
    RET                                 ; 00484f13
    PUSH EDI                            ; 00484f14
        ;   Label: LAB_00484f14
    PUSH ESI                            ; 00484f15
    LEA EAX,[EBX + 0x4]                 ; 00484f16
    PUSH EAX                            ; 00484f19
    MOV ECX,dword ptr [0x005ae704]      ; 00484f1a | DAT_005ae704
    PUSH ECX                            ; 00484f20 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 00484f21
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00484f26
    PUSH 0x0                            ; 00484f29
    LEA EAX,[EBX + 0x10]                ; 00484f2b
    PUSH EAX                            ; 00484f2e
    MOV EBX,dword ptr [0x005ae704]      ; 00484f2f | DAT_005ae704
    PUSH EBX                            ; 00484f35 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 00484f36
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 00484f3b
    PUSH 0x40c90fdb                     ; 00484f3e
    PUSH 0x0                            ; 00484f43
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00484f45
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x38],EAX      ; 00484f4a
    FLD float ptr [ESP + 0x38]          ; 00484f4e
    ADD ESP,0x8                         ; 00484f52
    XOR ESI,ESI                         ; 00484f55
    FSTP float ptr [ESP + 0x2c]         ; 00484f57
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00484f5b
    PUSH ESI                            ; 00484f5f
    MOV dword ptr [ESP + 0x20],EAX      ; 00484f60
    LEA EAX,[ESP + 0x18]                ; 00484f64
    PUSH EAX                            ; 00484f68
    MOV EBP,dword ptr [0x005ae704]      ; 00484f69 | DAT_005ae704
    PUSH EBP                            ; 00484f6f | DAT_01b4d738
    MOV dword ptr [ESP + 0x20],ESI      ; 00484f70
    MOV dword ptr [ESP + 0x24],ESI      ; 00484f74
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 00484f78
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 00484f7d
    MOV EAX,[0x005be368]                ; 00484f80 | DAT_005be368
    PUSH 0x1                            ; 00484f85
    MOV dword ptr [EAX + 0x15a898],0x1  ; 00484f87 | DAT_01fb1b1c
    MOV EAX,[0x005ae704]                ; 00484f91 | DAT_005ae704
    PUSH EAX                            ; 00484f96 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 00484f97
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00484f9c
    CALL crt_stdlib.c_rand_FUN_0056488c ; 00484f9f
        ;   XREF to: 0056488c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_0056488c()
    AND EAX,0x3fff                      ; 00484fa4
    ADD EAX,0x1800                      ; 00484fa9
    PUSH EAX                            ; 00484fae
    MOV EDX,dword ptr [0x005ae704]      ; 00484faf | DAT_005ae704
    PUSH EDX                            ; 00484fb5 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 00484fb6
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00484fbb
    PUSH 0x63                           ; 00484fbe
    PUSH 0x0                            ; 00484fc0
    PUSH 0x1c09338                      ; 00484fc2
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 00484fc7
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00484fcc
    MOV dword ptr [ESP + 0x20],ESI      ; 00484fcf
    MOV dword ptr [ESP + 0x24],ESI      ; 00484fd3
    MOV dword ptr [ESP + 0x28],0x3fc90fdb ; 00484fd7
    PUSH 0x0                            ; 00484fdf
    LEA EAX,[ESP + 0x24]                ; 00484fe1
    PUSH EAX                            ; 00484fe5
    MOV EDI,dword ptr [0x005ae704]      ; 00484fe6 | DAT_005ae704
    PUSH EDI                            ; 00484fec | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 00484fed
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 00484ff2
    PUSH 0x63                           ; 00484ff5
    PUSH 0x0                            ; 00484ff7
    PUSH 0x1c09338                      ; 00484ff9
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 00484ffe
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00485003
    MOV EBP,dword ptr [0x005ae704]      ; 00485006 | DAT_005ae704
    PUSH EBP                            ; 0048500c | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 0048500d
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 00485012
    XOR EAX,EAX                         ; 00485015
    MOV dword ptr [ESP + 0x8],EAX       ; 00485017
    PUSH EAX                            ; 0048501b
    MOV dword ptr [ESP + 0x10],EAX      ; 0048501c
    LEA EAX,[ESP + 0xc]                 ; 00485020
    PUSH EAX                            ; 00485024
    MOV EBX,dword ptr [0x005ae704]      ; 00485025 | DAT_005ae704
    MOV ECX,0x3f490fdb                  ; 0048502b
    PUSH EBX                            ; 00485030 | DAT_01b4d738
    MOV dword ptr [ESP + 0x1c],ECX      ; 00485031
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 00485035
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 0048503a
    PUSH 0x63                           ; 0048503d
    PUSH 0x0                            ; 0048503f
    PUSH 0x1c09338                      ; 00485041
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 00485046
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0048504b
    MOV ESI,dword ptr [0x005ae704]      ; 0048504e | DAT_005ae704
    PUSH ESI                            ; 00485054 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 00485055
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 0048505a
    MOV EDI,dword ptr [0x005ae704]      ; 0048505d | DAT_005ae704
    MOV EAX,[0x005be368]                ; 00485063 | DAT_005be368
    PUSH EDI                            ; 00485068 | DAT_01b4d738
    MOV dword ptr [EAX + 0x15a898],0x0  ; 00485069 | DAT_01fb1b1c
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 00485073
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 00485078
    MOV EBP,dword ptr [0x005ae704]      ; 0048507b | DAT_005ae704
    PUSH EBP                            ; 00485081 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 00485082
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 00485087
    PUSH 0x0                            ; 0048508a
    MOV EAX,[0x005ae704]                ; 0048508c | DAT_005ae704
    PUSH EAX                            ; 00485091 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 00485092
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00485097
    POP ESI                             ; 0048509a
    POP EDI                             ; 0048509b
    ADD ESP,0x2c                        ; 0048509c
    POP EBP                             ; 0048509f
    POP EBX                             ; 004850a0
    RET                                 ; 004850a1

