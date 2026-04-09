; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80(CDemonRenderer *this_ptr)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
;
; XREF[8]:
;   core_baron.cpp_CBaron_renderTransparent_FUN_00413ae0 at 00413c5a
;   core_batman.cpp_CBatman_renderOpaque_FUN_004173b0 at 0041753c
;   core_boneguy.cpp_CBoneGuy_renderTransparent_FUN_0041d1b0 at 0041d249
;   core_dracbrid.cpp_CDraculaBride_renderOpaque_FUN_00485be0 at 00485d7b
;   core_inv.cpp_CInventory_renderItemModel_FUN_004fee00 at 004ff170
;   core_morph.cpp_CMorphModel_renderFaces_FUN_0052b160 at 0052b23f
;   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 at 005971d9
;   core_vessel.cpp_CCryptVessel_renderOpaque_FUN_005e9750 at 005e986d
;
; Referenced Globals:
;   int g_CaptureFaceCount
;   SFace[5000] g_CapturedFaces
;   undefined4 g_CapturedFaces[0].render_flags
;   undefined4 g_CapturedFaces[0].face_data.vertex_indices.vertex_index_0
;   undefined4 g_CapturedFaces[1].texture_index
;   SFace*[5000] g_CapturedFacePointers
;   undefined4 g_CapturedFacePointers[1]
;   SMRGLTextureBasic[300] g_CapturedTextureArray
;
; Called Functions:
;   crt_stdlib.c__qsort_FUN_005fdf38
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_renderWireframeAdvanced_FUN_0048b030
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0048da80
        ;   Label: engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80
    MOV EBP,dword ptr [ESP + 0x8]       ; 0048da81
    CMP dword ptr [EBP + 0x4],0x0       ; 0048da85
    JNZ 0x0048db63                      ; 0048da89
        ;   XREF to: 0048db63 (CONDITIONAL_JUMP)  ; LAB_0048db63
    PUSH EDI                            ; 0048da8f
    PUSH ESI                            ; 0048da90
    PUSH EBX                            ; 0048da91
    MOV ECX,dword ptr [0x02c6d5ec]      ; 0048da92 | g_CaptureFaceCount
    TEST ECX,ECX                        ; 0048da98
    JLE 0x0048dac0                      ; 0048da9a
        ;   XREF to: 0048dac0 (CONDITIONAL_JUMP)  ; LAB_0048dac0
    MOV EBX,0x2c6d5f4                   ; 0048da9c | g_CapturedFaces
    LEA ESI,[ECX*0x4 + 0x0]             ; 0048daa1
    XOR EAX,EAX                         ; 0048daa8
    MOV dword ptr [EAX + 0x2c946f4],EBX ; 0048daaa | g_CapturedFacePointers | g_CapturedFacePointers[1] | g_CapturedFaces
        ;   Label: LAB_0048daaa
    ADD EAX,0x4                         ; 0048dab0
    ADD EBX,0x20                        ; 0048dab3 | g_CapturedFaces[1].texture_index
    CMP EAX,ESI                         ; 0048dab6
    JL 0x0048daaa                       ; 0048dab8
        ;   XREF to: 0048daaa (CONDITIONAL_JUMP)  ; LAB_0048daaa
    LEA EAX,[EAX]                       ; 0048daba
    CMP dword ptr [EBP + 0x1c],0x1      ; 0048dac0
        ;   Label: LAB_0048dac0
    JZ 0x0048db65                       ; 0048dac4
        ;   XREF to: 0048db65 (CONDITIONAL_JUMP)  ; LAB_0048db65
    PUSH 0x48da20                       ; 0048daca
    PUSH 0x4                            ; 0048dacf
    MOV ESI,dword ptr [0x02c6d5ec]      ; 0048dad1 | g_CaptureFaceCount
    PUSH ESI                            ; 0048dad7
    PUSH 0x2c946f4                      ; 0048dad8 | g_CapturedFacePointers
        ;   Label: LAB_0048dad8
    CALL crt_stdlib.c__qsort_FUN_005fdf38 ; 0048dadd
        ;   XREF to: 005fdf38 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__qsort_FUN_005fdf38(void * base, SIZE_T num, SIZE_T size, QSORT_COMPARATOR compar)
    ADD ESP,0x10                        ; 0048dae2
    MOV EAX,dword ptr [EBP + 0x10]      ; 0048dae5
    MOV dword ptr [EBP + 0x1c],0x0      ; 0048dae8
    TEST EAX,EAX                        ; 0048daef
    JZ 0x0048dafe                       ; 0048daf1
        ;   XREF to: 0048dafe (CONDITIONAL_JUMP)  ; LAB_0048dafe
    PUSH 0x1                            ; 0048daf3
    PUSH EBP                            ; 0048daf5
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00 ; 0048daf6
        ;   XREF to: 0048ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0048dafb
    MOV EDI,0xffffffff                  ; 0048dafe
        ;   Label: LAB_0048dafe
    MOV EDX,dword ptr [0x02c6d5ec]      ; 0048db03 | g_CaptureFaceCount
    XOR ESI,ESI                         ; 0048db09
    TEST EDX,EDX                        ; 0048db0b
    JLE 0x0048db55                      ; 0048db0d
        ;   XREF to: 0048db55 (CONDITIONAL_JUMP)  ; LAB_0048db55
    XOR EBX,EBX                         ; 0048db0f
    MOV EAX,dword ptr [EBX + 0x2c946f4] ; 0048db11 | g_CapturedFacePointers | g_CapturedFacePointers[1]
        ;   Label: LAB_0048db11
    MOV EDX,dword ptr [EAX]             ; 0048db17 | g_CapturedFaces
    CMP EDI,EDX                         ; 0048db19
    JZ 0x0048db31                       ; 0048db1b
        ;   XREF to: 0048db31 (CONDITIONAL_JUMP)  ; LAB_0048db31
    MOV EDI,EDX                         ; 0048db1d
    IMUL EAX,EDX,0x48                   ; 0048db1f
    ADD EAX,0x2c99514                   ; 0048db22 | g_CapturedTextureArray
    PUSH EAX                            ; 0048db27
    PUSH EBP                            ; 0048db28
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 0048db29
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0048db2e
    MOV EAX,dword ptr [EBX + 0x2c946f4] ; 0048db31 | g_CapturedFacePointers | g_CapturedFacePointers[1]
        ;   Label: LAB_0048db31
    MOV ECX,dword ptr [EAX + 0x4]       ; 0048db37 | g_CapturedFaces[0].render_flags
    PUSH ECX                            ; 0048db3a
    ADD EAX,0xc                         ; 0048db3b | g_CapturedFaces[0].face_data.vertex_indices.vertex_index_0
    PUSH EAX                            ; 0048db3e | g_CapturedFaces[0].face_data.vertex_indices.vertex_index_0
    PUSH EBP                            ; 0048db3f
    ADD EBX,0x4                         ; 0048db40
    INC ESI                             ; 0048db43
    CALL engine_drender.cpp_CDemonRenderer_renderWireframeAdvanced_FUN_0048b030 ; 0048db44
        ;   XREF to: 0048b030 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderWireframeAdvanced_FUN_0048b030(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * primitive, int render_flags)
    MOV EAX,[0x02c6d5ec]                ; 0048db49 | g_CaptureFaceCount
    ADD ESP,0xc                         ; 0048db4e
    CMP ESI,EAX                         ; 0048db51
    JL 0x0048db11                       ; 0048db53
        ;   XREF to: 0048db11 (CONDITIONAL_JUMP)  ; LAB_0048db11
    PUSH 0x0                            ; 0048db55
        ;   Label: LAB_0048db55
    PUSH EBP                            ; 0048db57
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00 ; 0048db58
        ;   XREF to: 0048ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0048db5d
    POP EBX                             ; 0048db60
    POP ESI                             ; 0048db61
    POP EDI                             ; 0048db62
    POP EBP                             ; 0048db63
        ;   Label: LAB_0048db63
    RET                                 ; 0048db64
    PUSH 0x48da50                       ; 0048db65
        ;   Label: LAB_0048db65
    PUSH 0x4                            ; 0048db6a
    MOV EDI,dword ptr [0x02c6d5ec]      ; 0048db6c | g_CaptureFaceCount
    PUSH EDI                            ; 0048db72
    JMP 0x0048dad8                      ; 0048db73
        ;   XREF to: 0048dad8 (UNCONDITIONAL_JUMP)  ; LAB_0048dad8

