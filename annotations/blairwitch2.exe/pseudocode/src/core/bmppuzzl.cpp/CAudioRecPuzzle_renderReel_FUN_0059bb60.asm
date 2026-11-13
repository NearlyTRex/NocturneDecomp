; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_renderReel_FUN_0059bb60(CAudioRecPuzzle *this_ptr,int x,int y,float angle,int draw_reel)
;
; Parameters:
; CAudioRecPuzzle * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; float            Stack[0x10]:4   angle
; int              Stack[0x14]:4   draw_reel
;
; Referenced Globals:
;   undefined4 DAT_005ef5a4
;   undefined4 DAT_0060b280
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01c38aec
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.rendering_mode
;   undefined4 g_CDemonSetInstance.light_direction.x
;   undefined4 g_CDemonSetInstance.light_direction.y
;   undefined4 g_CDemonSetInstance.light_direction.z
;   undefined4 g_CDemonSetInstance.ambient_base_quick
;   undefined4 DAT_0265370c
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
;   engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0046b710
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046afb0
;   engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0046b4b0
;   engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0046b030
;   engine_drender.cpp_pop_FUN_0046b4a0
;   engine_drender.cpp_popViewport_FUN_0046b740
;   engine_special.cpp_fillDepthRegion_FUN_0055b342
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059bb60
        ;   Label: core_bmppuzzl.cpp_CAudioRecPuzzle_renderReel_FUN_0059bb60
    PUSH ESI                            ; 0059bb61
    PUSH EDI                            ; 0059bb62
    PUSH EBP                            ; 0059bb63
    SUB ESP,0x60                        ; 0059bb64
    MOV EDX,dword ptr [0x006141b8]      ; 0059bb67 | DAT_006141b8
    MOV EBP,0xfc                        ; 0059bb6d
    CMP EDX,0x280                       ; 0059bb72
    JLE 0x0059bbc8                      ; 0059bb78
        ;   XREF to: 0059bbc8 (CONDITIONAL_JUMP)  ; LAB_0059bbc8
    MOV EDX,dword ptr [ESP + 0x78]      ; 0059bb7a
    LEA EAX,[EDX*0x4 + 0x0]             ; 0059bb7e
    ADD EDX,EAX                         ; 0059bb85
    SHL EDX,0x7                         ; 0059bb87
    MOV ECX,dword ptr [0x006141b8]      ; 0059bb8a | DAT_006141b8
    MOV EAX,EDX                         ; 0059bb90
    SAR EDX,0x1f                        ; 0059bb92
    IDIV ECX                            ; 0059bb95
    MOV dword ptr [ESP + 0x78],EAX      ; 0059bb97
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0059bb9b
    SHL EAX,0x5                         ; 0059bb9f
    MOV EDX,EAX                         ; 0059bba2
    SHL EAX,0x4                         ; 0059bba4
    SUB EAX,EDX                         ; 0059bba7
    MOV EDX,EAX                         ; 0059bba9
    MOV EBX,dword ptr [0x006141bc]      ; 0059bbab | DAT_006141bc
    SAR EDX,0x1f                        ; 0059bbb1
    IDIV EBX                            ; 0059bbb4
    MOV dword ptr [ESP + 0x7c],EAX      ; 0059bbb6
    MOV EAX,0x27600                     ; 0059bbba
    MOV EDX,EAX                         ; 0059bbbf
    SAR EDX,0x1f                        ; 0059bbc1
    IDIV ECX                            ; 0059bbc4
    MOV EBP,EAX                         ; 0059bbc6
    MOV EAX,[0x0061b5a8]                ; 0059bbc8 | g_CDemonSetPtr
        ;   Label: LAB_0059bbc8
    MOV dword ptr [EAX + 0x15ae84],0x1  ; 0059bbcd | g_CDemonSetInstance.rendering_mode
    MOV dword ptr [EAX + 0x15ae88],0xffffb7d5 ; 0059bbd7 | g_CDemonSetInstance.light_direction.x
    MOV dword ptr [EAX + 0x15ae8c],0xffffb7d5 ; 0059bbe1 | g_CDemonSetInstance.light_direction.y
    MOV dword ptr [EAX + 0x15ae90],0x482b ; 0059bbeb | g_CDemonSetInstance.light_direction.z
    MOV dword ptr [EAX + 0x15ae94],0x7d00 ; 0059bbf5 | g_CDemonSetInstance.ambient_base_quick
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0059bbff
    ADD EAX,EBP                         ; 0059bc03
    DEC EAX                             ; 0059bc05
    PUSH EAX                            ; 0059bc06
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0059bc07
    MOV EDI,dword ptr [ESP + 0x80]      ; 0059bc0b
    ADD EAX,EBP                         ; 0059bc12
    PUSH EDI                            ; 0059bc14
    DEC EAX                             ; 0059bc15
    PUSH EAX                            ; 0059bc16
    MOV EAX,dword ptr [ESP + 0x84]      ; 0059bc17
    PUSH EAX                            ; 0059bc1e
    CALL engine_special.cpp_fillDepthRegion_FUN_0055b342 ; 0059bc1f
        ;   XREF to: 0055b342 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_fillDepthRegion_FUN_0055b342(int left, int right, int top, int bottom)
    ADD ESP,0x10                        ; 0059bc24
    MOV EBX,dword ptr [ESP + 0x74]      ; 0059bc27
    ADD EBX,0x574                       ; 0059bc2b
    PUSH EBX                            ; 0059bc31
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 0059bc32
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059bc37
    MOV EDI,ESP                         ; 0059bc3a
    MOV ECX,0x6                         ; 0059bc3c
    PUSH EBP                            ; 0059bc41
    MOV ESI,dword ptr [EAX + 0x350]     ; 0059bc42
    MOV EDX,dword ptr [ESP + 0x80]      ; 0059bc48
    PUSH EBP                            ; 0059bc4f
    MOVSD.REP ES:EDI,ESI                ; 0059bc50
    PUSH EDX                            ; 0059bc52
    MOV ECX,dword ptr [ESP + 0x84]      ; 0059bc53
    PUSH ECX                            ; 0059bc5a
    MOV ESI,dword ptr [0x0060b280]      ; 0059bc5b | DAT_0060b280
    PUSH ESI                            ; 0059bc61 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0046b710 ; 0059bc62
        ;   XREF to: 0046b710 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0046b710(CDemonRenderer * this_ptr, int x, int y, int width, ...)
    MOV EAX,0xc0000000                  ; 0059bc67
    ADD ESP,0x14                        ; 0059bc6c
    MOV dword ptr [ESP + 0x2c],EAX      ; 0059bc6f
    LEA EAX,[ESP + 0x24]                ; 0059bc73
    PUSH EAX                            ; 0059bc77
    MOV EDX,dword ptr [0x0060b280]      ; 0059bc78 | DAT_0060b280
    XOR EDI,EDI                         ; 0059bc7e
    PUSH EDX                            ; 0059bc80 | DAT_01ba5c50
    MOV dword ptr [ESP + 0x2c],EDI      ; 0059bc81
    MOV dword ptr [ESP + 0x30],EDI      ; 0059bc85
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046afb0 ; 0059bc89
        ;   XREF to: 0046afb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046afb0(CDemonRenderer * this_ptr, CVector3f * point_ptr)
    ADD ESP,0x8                         ; 0059bc8e
    MOV ECX,dword ptr [0x0060b280]      ; 0059bc91 | DAT_0060b280
    PUSH 0x42100000                     ; 0059bc97
    PUSH ECX                            ; 0059bc9c | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0046b4b0 ; 0059bc9d
        ;   XREF to: 0046b4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0046b4b0(CDemonRenderer * this_ptr, float field_of_view)
    ADD ESP,0x8                         ; 0059bca2
    PUSH 0x265370c                      ; 0059bca5 | DAT_0265370c
    MOV ESI,dword ptr [0x0060b280]      ; 0059bcaa | DAT_0060b280
    PUSH ESI                            ; 0059bcb0 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0046b030 ; 0059bcb1
        ;   XREF to: 0046b030 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0046b030(CDemonRenderer * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0059bcb6
    PUSH 0x265370c                      ; 0059bcb9 | DAT_0265370c
    MOV EDI,dword ptr [0x0060b280]      ; 0059bcbe | DAT_0060b280
    PUSH EDI                            ; 0059bcc4 | DAT_01ba5c50
    LEA ESI,[ESP + 0x44]                ; 0059bcc5
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 0059bcc9
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0059bcce
    LEA EDI,[ESP + 0x48]                ; 0059bcd1
    FLD float ptr [ESP]                 ; 0059bcd5
    FLD float ptr [ESP + 0x4]           ; 0059bcd8
    FLD float ptr [ESP + 0x8]           ; 0059bcdc
    FXCH ST2                            ; 0059bce0
    FADD float ptr [ESP + 0xc]          ; 0059bce2
    FXCH                                ; 0059bce6
    FADD float ptr [ESP + 0x10]         ; 0059bce8
    FXCH ST2                            ; 0059bcec
    FADD float ptr [ESP + 0x14]         ; 0059bcee
    FXCH                                ; 0059bcf2
    FSTP float ptr [ESP + 0x3c]         ; 0059bcf4
    FXCH                                ; 0059bcf8
    FSTP float ptr [ESP + 0x40]         ; 0059bcfa
    FSTP float ptr [ESP + 0x44]         ; 0059bcfe
    MOVSD ES:EDI,ESI                    ; 0059bd02
    MOVSD ES:EDI,ESI                    ; 0059bd03
    MOVSD ES:EDI,ESI                    ; 0059bd04
    FLD float ptr [0x005ef5a4]          ; 0059bd05 | DAT_005ef5a4
    FLD float ptr [ESP + 0x48]          ; 0059bd0b
    FMUL ST1                            ; 0059bd0f
    FLD float ptr [ESP + 0x4c]          ; 0059bd11
    FMUL ST2                            ; 0059bd15
    FLD float ptr [ESP + 0x50]          ; 0059bd17
    FMULP ST3                           ; 0059bd1b
    XOR EBP,EBP                         ; 0059bd1d
    MOV EAX,dword ptr [ESP + 0x80]      ; 0059bd1f
    PUSH EBP                            ; 0059bd26
    MOV dword ptr [ESP + 0x60],EAX      ; 0059bd27
    LEA EAX,[ESP + 0x58]                ; 0059bd2b
    MOV dword ptr [0x01c38aec],EBP      ; 0059bd2f | DAT_01c38aec
    PUSH EAX                            ; 0059bd35
    LEA EDI,[ESP + 0x20]                ; 0059bd36
    LEA ESI,[ESP + 0x38]                ; 0059bd3a
    MOV EAX,[0x0060b280]                ; 0059bd3e | DAT_0060b280
    FXCH                                ; 0059bd43
    FSTP float ptr [ESP + 0x38]         ; 0059bd45
    FSTP float ptr [ESP + 0x3c]         ; 0059bd49
    FSTP float ptr [ESP + 0x40]         ; 0059bd4d
    PUSH EAX                            ; 0059bd51 | DAT_01ba5c50
    MOVSD ES:EDI,ESI                    ; 0059bd52
    MOVSD ES:EDI,ESI                    ; 0059bd53
    MOVSD ES:EDI,ESI                    ; 0059bd54
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 0059bd55
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0059bd5a
    LEA EAX,[ESP + 0x18]                ; 0059bd5d
    PUSH EAX                            ; 0059bd61
    PUSH 0x265370c                      ; 0059bd62 | DAT_0265370c
    MOV EDX,dword ptr [0x0060b280]      ; 0059bd67 | DAT_0060b280
    PUSH EDX                            ; 0059bd6d | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 0059bd6e
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0059bd73
    CMP dword ptr [ESP + 0x84],0x0      ; 0059bd76
    JNZ 0x0059bdda                      ; 0059bd7e
        ;   XREF to: 0059bdda (CONDITIONAL_JUMP)  ; LAB_0059bdda
    MOV EAX,dword ptr [ESP + 0x74]      ; 0059bd80
    PUSH -0x1                           ; 0059bd84
    ADD EAX,0x6f0                       ; 0059bd86
    PUSH 0x0                            ; 0059bd8b
    PUSH EAX                            ; 0059bd8d
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0 ; 0059bd8e
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
        ;   Label: LAB_0059bd8e
    ADD ESP,0xc                         ; 0059bd93
    MOV EBX,dword ptr [0x0060b280]      ; 0059bd96 | DAT_0060b280
    PUSH EBX                            ; 0059bd9c | DAT_01ba5c50
    CALL engine_drender.cpp_pop_FUN_0046b4a0 ; 0059bd9d
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 0059bda2
    MOV ESI,dword ptr [0x0060b280]      ; 0059bda5 | DAT_0060b280
    PUSH ESI                            ; 0059bdab | DAT_01ba5c50
    CALL engine_drender.cpp_pop_FUN_0046b4a0 ; 0059bdac
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 0059bdb1
    MOV EDI,dword ptr [0x0060b280]      ; 0059bdb4 | DAT_0060b280
    PUSH EDI                            ; 0059bdba | DAT_01ba5c50
    CALL engine_drender.cpp_popViewport_FUN_0046b740 ; 0059bdbb
        ;   XREF to: 0046b740 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_popViewport_FUN_0046b740()
    MOV EAX,[0x0061b5a8]                ; 0059bdc0 | g_CDemonSetPtr | g_CDemonSetInstance
    ADD ESP,0x4                         ; 0059bdc5
    MOV dword ptr [EAX + 0x15ae84],0x0  ; 0059bdc8 | g_CDemonSetInstance.rendering_mode
    ADD ESP,0x60                        ; 0059bdd2
    POP EBP                             ; 0059bdd5
    POP EDI                             ; 0059bdd6
    POP ESI                             ; 0059bdd7
    POP EBX                             ; 0059bdd8
    RET                                 ; 0059bdd9
    PUSH -0x1                           ; 0059bdda
        ;   Label: LAB_0059bdda
    PUSH 0x0                            ; 0059bddc
    PUSH EBX                            ; 0059bdde
    JMP 0x0059bd8e                      ; 0059bddf
        ;   XREF to: 0059bd8e (UNCONDITIONAL_JUMP)  ; LAB_0059bd8e

