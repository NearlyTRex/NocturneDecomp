; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setdir_cpp_CDemonSet_FUN_00513720(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_setdir.cpp_CDemonSet_refreshThumbs_FUN_00513610 at 00513634
;
; Referenced Globals:
;   void* PTR_DAT_005ae700 = 01b4d738
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01bd4260
;   undefined4 DAT_020875f8
;   undefined4 DAT_020875fc
;   undefined4 DAT_020875fd
;   undefined4 DAT_020876f8
;
; Called Functions:
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00507c80
;   engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_004609d0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;   engine_drender.cpp_CDemonRenderer_popViewport_FUN_00460e70
;   engine_drender.cpp_CDemonRenderer_pushViewport_FUN_00460e40
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700
;   engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_00461070
;   engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_00460c00
;   engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00460780
;   engine_special.cpp_clearZBufferNative_FUN_0052eed4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00513720
        ;   Label: core_setdir.cpp_CDemonSet_FUN_00513720
    PUSH ESI                            ; 00513721
    PUSH EDI                            ; 00513722
    PUSH EBP                            ; 00513723
    SUB ESP,0x14                        ; 00513724
    MOV EDX,dword ptr [0x005ae704]      ; 00513727 | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 0051372d | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 0051372e
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00513733
    PUSH 0x0                            ; 00513736
    MOV ECX,dword ptr [0x005ae704]      ; 00513738 | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 0051373e | DAT_01b4d738
    MOV dword ptr [ESP + 0x8],EAX       ; 0051373f
    CALL engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_00461070 ; 00513743
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_00461070(CDemonRenderer * this_ptr, int value)
    ADD ESP,0x8                         ; 00513748
    PUSH 0x30                           ; 0051374b
    PUSH 0x40                           ; 0051374d
    PUSH 0x0                            ; 0051374f
    PUSH 0x0                            ; 00513751
    MOV EBX,dword ptr [0x005ae704]      ; 00513753 | g_CDemonRenderer_PTR_005ae704
    PUSH EBX                            ; 00513759 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_pushViewport_FUN_00460e40 ; 0051375a
        ;   XREF to: 00460e40 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_pushViewport_FUN_00460e40(CDemonRenderer * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x14                        ; 0051375f
    MOV EAX,dword ptr [ESP + 0x28]      ; 00513762
    MOV ESI,dword ptr [EAX]             ; 00513766
    XOR EBP,EBP                         ; 00513768
    TEST ESI,ESI                        ; 0051376a
    JLE 0x0051387d                      ; 0051376c
        ;   XREF to: 0051387d (CONDITIONAL_JUMP)  ; LAB_0051387d
    ADD EAX,0x4                         ; 00513772
    MOV dword ptr [ESP + 0x4],EAX       ; 00513775
    MOV EAX,dword ptr [ESP + 0x28]      ; 00513779
    ADD EAX,0x110                       ; 0051377d
    MOV dword ptr [ESP + 0x8],EAX       ; 00513782
    MOV EAX,dword ptr [ESP + 0x28]      ; 00513786
    MOV EBX,0x20875f8                   ; 0051378a
    ADD EAX,0x104                       ; 0051378f
    MOV dword ptr [ESP + 0xc],EBX       ; 00513794
    MOV dword ptr [ESP + 0x10],EAX      ; 00513798
    IMUL EBX,EBP,0x1a0                  ; 0051379c
        ;   Label: LAB_0051379c
    MOV EDI,dword ptr [ESP + 0x10]      ; 005137a2
    PUSH EDI                            ; 005137a6
    MOV EAX,[0x005ae700]                ; 005137a7 | PTR_DAT_005ae700
    PUSH EAX                            ; 005137ac | DAT_01b4d738
    MOV ESI,dword ptr [ESP + 0xc]       ; 005137ad
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700 ; 005137b1
        ;   XREF to: 00460700 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700(CDemonRenderer * this_ptr, CVector3f * point_ptr)
    ADD ESP,0x8                         ; 005137b6
    ADD EBX,ESI                         ; 005137b9
    MOV EDX,dword ptr [0x005ae700]      ; 005137bb | PTR_DAT_005ae700
    PUSH dword ptr [EBX + 0x140]        ; 005137c1
    PUSH EDX                            ; 005137c7 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_00460c00 ; 005137c8
        ;   XREF to: 00460c00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_00460c00(CDemonRenderer * this_ptr, float field_of_view)
    ADD ESP,0x8                         ; 005137cd
    MOV ECX,dword ptr [ESP + 0x8]       ; 005137d0
    PUSH ECX                            ; 005137d4
    MOV EBX,dword ptr [0x005ae700]      ; 005137d5 | PTR_DAT_005ae700
    PUSH EBX                            ; 005137db | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00460780 ; 005137dc
        ;   XREF to: 00460780 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00460780(CDemonRenderer * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 005137e1
    PUSH 0x26635f8                      ; 005137e4
    MOV ESI,dword ptr [0x005ae700]      ; 005137e9 | PTR_DAT_005ae700
    PUSH ESI                            ; 005137ef | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_004609d0 ; 005137f0
        ;   XREF to: 004609d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_004609d0(CDemonRenderer * this_ptr, CVector3f * input_point)
    ADD ESP,0x8                         ; 005137f5
    CALL engine_special.cpp_clearZBufferNative_FUN_0052eed4 ; 005137f8
        ;   XREF to: 0052eed4 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearZBufferNative_FUN_0052eed4()
    PUSH 0x0                            ; 005137fd
    MOV EDI,dword ptr [ESP + 0x2c]      ; 005137ff
    PUSH 0x461c3f9a                     ; 00513803
    PUSH EDI                            ; 00513808
    CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00507c80 ; 00513809
        ;   XREF to: 00507c80 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00507c80(CDemonSet * this_ptr, float frustum_param, int render_mode)
    ADD ESP,0xc                         ; 0051380e
    XOR EBX,EBX                         ; 00513811
    MOV EDX,dword ptr [ESP + 0xc]       ; 00513813
    MOV ECX,0x100                       ; 00513817
        ;   Label: LAB_00513817
    MOV EDI,EDX                         ; 0051381c
    MOV ESI,dword ptr [EBX + 0x1bd4260] ; 0051381e | DAT_01bd4260
    PUSH EDI                            ; 00513824
    MOV EAX,ECX                         ; 00513825
    SHR ECX,0x2                         ; 00513827
    MOVSD.REP ES:EDI,ESI                ; 0051382a | DAT_020875f8 | DAT_020875fc | DAT_020876f8
    MOV CL,AL                           ; 0051382c
    AND CL,0x3                          ; 0051382e
    MOVSB.REP ES:EDI,ESI                ; 00513831 | DAT_020875fc | DAT_020875fd
    POP EDI                             ; 00513833
    ADD EBX,0x4                         ; 00513834
    ADD EDX,0x100                       ; 00513837
    CMP EBX,0xc0                        ; 0051383d
    JNZ 0x00513817                      ; 00513843
        ;   XREF to: 00513817 (CONDITIONAL_JUMP)  ; LAB_00513817
    MOV EDI,dword ptr [ESP + 0xc]       ; 00513845
    MOV EAX,dword ptr [ESP + 0x8]       ; 00513849
    MOV EDX,dword ptr [ESP + 0x10]      ; 0051384d
    INC EBP                             ; 00513851
    ADD EAX,0x1a0                       ; 00513852
    ADD EDI,0x3000                      ; 00513857
    MOV dword ptr [ESP + 0x8],EAX       ; 0051385d
    MOV EAX,dword ptr [ESP + 0x28]      ; 00513861
    ADD EDX,0x1a0                       ; 00513865
    MOV dword ptr [ESP + 0xc],EDI       ; 0051386b
    MOV ECX,dword ptr [EAX]             ; 0051386f
    MOV dword ptr [ESP + 0x10],EDX      ; 00513871
    CMP EBP,ECX                         ; 00513875
    JL 0x0051379c                       ; 00513877
        ;   XREF to: 0051379c (CONDITIONAL_JUMP)  ; LAB_0051379c
    MOV EBP,dword ptr [0x005ae704]      ; 0051387d | g_CDemonRenderer_PTR_005ae704
        ;   Label: LAB_0051387d
    PUSH EBP                            ; 00513883 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_popViewport_FUN_00460e70 ; 00513884
        ;   XREF to: 00460e70 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_popViewport_FUN_00460e70()
    ADD ESP,0x4                         ; 00513889
    MOV EAX,dword ptr [ESP]             ; 0051388c
    PUSH EAX                            ; 0051388f
    MOV EDX,dword ptr [0x005ae704]      ; 00513890 | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 00513896 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_00461070 ; 00513897
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_00461070(CDemonRenderer * this_ptr, int value)
    ADD ESP,0x8                         ; 0051389c
    ADD ESP,0x14                        ; 0051389f
    POP EBP                             ; 005138a2
    POP EDI                             ; 005138a3
    POP ESI                             ; 005138a4
    POP EBX                             ; 005138a5
    RET                                 ; 005138a6

