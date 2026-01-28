; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_glass_cpp_CGlass_renderOpaque_FUN_004e9930(CGlass *this_ptr)
;
; Parameters:
; CGlass *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x28]:1  local_28
;
; Referenced Globals:
;   float FLOAT_0065eed0 = 256
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonRenderer g_CDemonRendererInstance
;   float g_PerspectiveReciprocal
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0
;   core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;   engine_drender.cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004e9930
        ;   Label: core_glass.cpp_CGlass_renderOpaque_FUN_004e9930
    PUSH EDI                            ; 004e9931
    PUSH EBP                            ; 004e9932
    SUB ESP,0x1c                        ; 004e9933
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004e9936
    CMP dword ptr [EBP + 0x370],0x0     ; 004e993a
    JNZ 0x004e9962                      ; 004e9941
        ;   XREF to: 004e9962 (CONDITIONAL_JUMP)  ; LAB_004e9962
    CMP dword ptr [EBP + 0xfc],0x0      ; 004e9943
    JNZ 0x004e9962                      ; 004e994a
        ;   XREF to: 004e9962 (CONDITIONAL_JUMP)  ; LAB_004e9962
    CMP dword ptr [EBP + 0x17c],0xfde8  ; 004e994c
    JL 0x004e9962                       ; 004e9956
        ;   XREF to: 004e9962 (CONDITIONAL_JUMP)  ; LAB_004e9962
    MOV ESI,dword ptr [EBP + 0x180]     ; 004e9958
    TEST ESI,ESI                        ; 004e995e
    JZ 0x004e996b                       ; 004e9960
        ;   XREF to: 004e996b (CONDITIONAL_JUMP)  ; LAB_004e996b
    XOR EAX,EAX                         ; 004e9962
        ;   Label: LAB_004e9962
    ADD ESP,0x1c                        ; 004e9964
    POP EBP                             ; 004e9967
    POP EDI                             ; 004e9968
    POP ESI                             ; 004e9969
    RET                                 ; 004e996a
    MOV EDI,dword ptr [0x006703ec]      ; 004e996b | g_CDemonRendererPtr2
        ;   Label: LAB_004e996b
    PUSH EDI                            ; 004e9971 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 004e9972
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004e9977
    TEST EAX,EAX                        ; 004e997a
    JNZ 0x004e9962                      ; 004e997c
        ;   XREF to: 004e9962 (CONDITIONAL_JUMP)  ; LAB_004e9962
    PUSH EBX                            ; 004e997e
    PUSH EBP                            ; 004e997f
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 004e9980
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 004e9985
    LEA EAX,[ESP + 0x4]                 ; 004e9988
    PUSH EAX                            ; 004e998c
    MOV EDX,dword ptr [EBP + 0x154]     ; 004e998d
    PUSH EBP                            ; 004e9993
    CALL dword ptr [EDX + 0x14]         ; 004e9994
    ADD ESP,0x8                         ; 004e9997
    PUSH EAX                            ; 004e999a
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 004e999b
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 004e99a0
    MOV dword ptr [ESP + 0x1c],EAX      ; 004e99a3
    LEA EAX,[EBP + 0x164]               ; 004e99a7
    PUSH EAX                            ; 004e99ad
    MOV EAX,[0x006703ec]                ; 004e99ae | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EAX                            ; 004e99b3 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 004e99b4
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    LEA EDX,[EBP + 0x38c]               ; 004e99b9
    ADD ESP,0x8                         ; 004e99bf
    LEA EDI,[EBP + 0x4b8]               ; 004e99c2
    MOV EBX,dword ptr [EBP + 0xb34]     ; 004e99c8
    MOV ECX,EDI                         ; 004e99ce
    TEST EBX,EBX                        ; 004e99d0
    JLE 0x004e9a10                      ; 004e99d2
        ;   XREF to: 004e9a10 (CONDITIONAL_JUMP)  ; LAB_004e9a10
    MOV EBX,ECX                         ; 004e99d4
        ;   Label: LAB_004e99d4
    MOV EAX,EDX                         ; 004e99d6
    FLD float ptr [EAX]                 ; 004e99d8
    FMUL float ptr [0x0065eed0]         ; 004e99da | FLOAT_0065eed0
    FISTP dword ptr [EBX]               ; 004e99e0
    FLD float ptr [EAX + 0x4]           ; 004e99e2
    FMUL float ptr [0x0065eed0]         ; 004e99e5 | FLOAT_0065eed0
    FISTP dword ptr [EBX + 0x4]         ; 004e99eb
    FLD float ptr [EAX + 0x8]           ; 004e99ee
    FMUL float ptr [0x0065eed0]         ; 004e99f1 | FLOAT_0065eed0
    FISTP dword ptr [EBX + 0x8]         ; 004e99f7
    INC ESI                             ; 004e99fa
    ADD EDX,0xc                         ; 004e99fb
    MOV EAX,dword ptr [EBP + 0xb34]     ; 004e99fe
    ADD ECX,0xc                         ; 004e9a04
    CMP ESI,EAX                         ; 004e9a07
    JL 0x004e99d4                       ; 004e9a09
        ;   XREF to: 004e99d4 (CONDITIONAL_JUMP)  ; LAB_004e99d4
    LEA EAX,[EAX]                       ; 004e9a0b
    MOV ECX,ECX                         ; 004e9a0e
    PUSH EDI                            ; 004e9a10
        ;   Label: LAB_004e9a10
    MOV EDX,dword ptr [EBP + 0xb34]     ; 004e9a11
    PUSH EDX                            ; 004e9a17
    MOV ECX,dword ptr [0x006810c8]      ; 004e9a18 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH ECX                            ; 004e9a1e | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0 ; 004e9a1f
        ;   XREF to: 0056e7c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0(CDemonSet * this_ptr, int vertex_count, int * input_vertices)
    MOV EAX,0xffff                      ; 004e9a24
    MOV EBX,dword ptr [0x02d051f4]      ; 004e9a29 | g_PerspectiveReciprocal
    ADD ESP,0xc                         ; 004e9a2f
    MOV EDX,dword ptr [EBP + 0x17c]     ; 004e9a32
    SUB EAX,EBX                         ; 004e9a38
    IMUL EDX                            ; 004e9a3a
    SHRD EAX,EDX,0x10                   ; 004e9a3c
    PUSH EAX                            ; 004e9a40
    MOV ESI,dword ptr [0x006703ec]      ; 004e9a41 | g_CDemonRendererPtr2
    PUSH ESI                            ; 004e9a47 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 004e9a48
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004e9a4d
    PUSH 0x0                            ; 004e9a50
    PUSH 0x4                            ; 004e9a52
    PUSH EDI                            ; 004e9a54
    LEA EDI,[EBP + 0x6ac]               ; 004e9a55
    PUSH EDI                            ; 004e9a5b
    MOV EAX,dword ptr [EBP + 0xb38]     ; 004e9a5c
    PUSH EAX                            ; 004e9a62
    MOV EDX,dword ptr [EBP + 0xb34]     ; 004e9a63
    PUSH EDX                            ; 004e9a69
    MOV ECX,dword ptr [0x006810c8]      ; 004e9a6a | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH ECX                            ; 004e9a70 | g_CDemonSetInstance
    XOR ESI,ESI                         ; 004e9a71
    CALL core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0 ; 004e9a73
        ;   XREF to: 0056eac0 (UNCONDITIONAL_CALL)  ; float core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0(CDemonSet * this_ptr, int vertex_count, int tri_count, SInputFace * tri_data_ptr, ...)
    MOV EBX,dword ptr [EBP + 0xb38]     ; 004e9a78
    ADD ESP,0x1c                        ; 004e9a7e
    TEST EBX,EBX                        ; 004e9a81
    JLE 0x004e9ad0                      ; 004e9a83
        ;   XREF to: 004e9ad0 (CONDITIONAL_JUMP)  ; LAB_004e9ad0
    MOV EBX,EBP                         ; 004e9a85
    MOV EAX,[0x006703ec]                ; 004e9a87 | g_CDemonRendererInstance | g_CDemonRendererPtr2
        ;   Label: LAB_004e9a87
    MOV dword ptr [EBX + 0x6b4],0x0     ; 004e9a8c
    PUSH EDI                            ; 004e9a96
    MOV dword ptr [EBX + 0x6b8],0x0     ; 004e9a97
    INC ESI                             ; 004e9aa1
    MOV dword ptr [EBX + 0x6bc],0x0     ; 004e9aa2
    PUSH EAX                            ; 004e9aac | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x6c0],0x0     ; 004e9aad
    ADD EBX,0x48                        ; 004e9ab7
    CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0 ; 004e9aba
        ;   XREF to: 0048bdc0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
    ADD EDI,0x48                        ; 004e9abf
    MOV EDX,dword ptr [EBP + 0xb38]     ; 004e9ac2
    ADD ESP,0x8                         ; 004e9ac8
    CMP ESI,EDX                         ; 004e9acb
    JL 0x004e9a87                       ; 004e9acd
        ;   XREF to: 004e9a87 (CONDITIONAL_JUMP)  ; LAB_004e9a87
    NOP                                 ; 004e9acf
    PUSH EBP                            ; 004e9ad0
        ;   Label: LAB_004e9ad0
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 004e9ad1
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e9ad6
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004e9ad9
    POP EBX                             ; 004e9add
    ADD ESP,0x1c                        ; 004e9ade
    POP EBP                             ; 004e9ae1
    POP EDI                             ; 004e9ae2
    POP ESI                             ; 004e9ae3
    RET                                 ; 004e9ae4

