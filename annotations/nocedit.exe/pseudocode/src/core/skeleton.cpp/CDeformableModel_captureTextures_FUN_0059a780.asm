; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_skeleton_cpp_CDeformableModel_captureTextures_FUN_0059a780(CDeformableModel *this_ptr)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0059d460 at 0059d4ac
;   core_skeleton.cpp_getDeformableModel_FUN_005a1cf0 at 005a1da6
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_bindSkeleton_FUN_0059c1f0
;   core_skeleton.cpp_loadSkeleton_FUN_005a1df0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059a780
        ;   Label: core_skeleton.cpp_CDeformableModel_captureTextures_FUN_0059a780
    PUSH ESI                            ; 0059a781
    PUSH EDI                            ; 0059a782
    PUSH EBP                            ; 0059a783
    SUB ESP,0x4                         ; 0059a784
    MOV EDI,dword ptr [ESP + 0x18]      ; 0059a787
    LEA EAX,[EDI + 0x8f5c]              ; 0059a78b
    PUSH EAX                            ; 0059a791
    CALL core_skeleton.cpp_loadSkeleton_FUN_005a1df0 ; 0059a792
        ;   XREF to: 005a1df0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_loadSkeleton_FUN_005a1df0(char * filename)
    ADD ESP,0x4                         ; 0059a797
    PUSH EAX                            ; 0059a79a
    PUSH EDI                            ; 0059a79b
    XOR EBP,EBP                         ; 0059a79c
    CALL core_skeleton.cpp_CDeformableModel_bindSkeleton_FUN_0059c1f0 ; 0059a79e
        ;   XREF to: 0059c1f0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_bindSkeleton_FUN_0059c1f0(CDeformableModel * this_ptr, CSkeleton * skeleton_ptr)
    MOV EDX,dword ptr [EDI + 0xb8]      ; 0059a7a3
    ADD ESP,0x8                         ; 0059a7a9
    TEST EDX,EDX                        ; 0059a7ac
    JLE 0x0059a7fc                      ; 0059a7ae
        ;   XREF to: 0059a7fc (CONDITIONAL_JUMP)  ; LAB_0059a7fc
    LEA EAX,[EDI + 0xc0]                ; 0059a7b0
    MOV dword ptr [ESP],EAX             ; 0059a7b6
    MOV ESI,dword ptr [EDI + 0xbc]      ; 0059a7b9
        ;   Label: LAB_0059a7b9
    XOR EBX,EBX                         ; 0059a7bf
    TEST ESI,ESI                        ; 0059a7c1
    JLE 0x0059a7e5                      ; 0059a7c3
        ;   XREF to: 0059a7e5 (CONDITIONAL_JUMP)  ; LAB_0059a7e5
    MOV ESI,dword ptr [ESP]             ; 0059a7c5
    PUSH ESI                            ; 0059a7c8
        ;   Label: LAB_0059a7c8
    MOV EAX,[0x006703ec]                ; 0059a7c9 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EAX                            ; 0059a7ce | g_CDemonRendererInstance
    INC EBX                             ; 0059a7cf
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 0059a7d0
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESI,0x48                        ; 0059a7d5
    MOV EDX,dword ptr [EDI + 0xbc]      ; 0059a7d8
    ADD ESP,0x8                         ; 0059a7de
    CMP EBX,EDX                         ; 0059a7e1
    JL 0x0059a7c8                       ; 0059a7e3
        ;   XREF to: 0059a7c8 (CONDITIONAL_JUMP)  ; LAB_0059a7c8
    MOV ECX,dword ptr [ESP]             ; 0059a7e5
        ;   Label: LAB_0059a7e5
    INC EBP                             ; 0059a7e8
    ADD ECX,0x1680                      ; 0059a7e9
    MOV EBX,dword ptr [EDI + 0xb8]      ; 0059a7ef
    MOV dword ptr [ESP],ECX             ; 0059a7f5
    CMP EBP,EBX                         ; 0059a7f8
    JL 0x0059a7b9                       ; 0059a7fa
        ;   XREF to: 0059a7b9 (CONDITIONAL_JUMP)  ; LAB_0059a7b9
    ADD ESP,0x4                         ; 0059a7fc
        ;   Label: LAB_0059a7fc
    POP EBP                             ; 0059a7ff
    POP EDI                             ; 0059a800
    POP ESI                             ; 0059a801
    POP EBX                             ; 0059a802
    RET                                 ; 0059a803

