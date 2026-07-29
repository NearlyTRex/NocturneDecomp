; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_rotateVerticies_FUN_0056e7c0(CDemonSet *this_ptr,int vertex_count,CVector3i *input_vertices)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   vertex_count
; CVector3i *      Stack[0xc]:4   input_vertices
; Local Variables:
; int              Stack[-0x14]:4  local_14
;
; XREF[11]:
;   core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00419340 at 00419360
;   core_box.cpp_CBoundingBox3D_render_FUN_004210b0 at 0042111b
;   core_cloth.cpp_CCloth_render_FUN_0043bae0 at 0043bb04
;   core_curtain.cpp_CCurtain_renderMesh_FUN_0044b060 at 0044b15f
;   core_dmodel.cpp_CKeyFramedModel_rotateAndLightVertices_FUN_004778d0 at 00477905
;   core_dpart.cpp_CDemonPart_renderFaces_FUN_004828b0 at 0048290f
;   core_glass.cpp_CGlass_renderBackground_FUN_004e9e90 at 004e9f71
;   core_glass.cpp_CGlass_renderOpaque_FUN_004e9930 at 004e9a1f
;   core_glass.cpp_CGlass_renderTransparent_FUN_004e9af0 at 004e9bce
;   core_skeleton.cpp_CDeformableModel_rotateVertices_FUN_0059ab20 at 0059ab3f
;   ... and 1 more
;
; Referenced Globals:
;   TerminatedCString s_core_set_cpp_00645e93
;   TerminatedCString s_CDemonSet_rotateVerticie_00645ea3
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_set.cpp_CDemonSet_pushScreenBoundsToCamera_FUN_0056e5d0
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
;   engine_special.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056e7c0
        ;   Label: core_set.cpp_CDemonSet_rotateVerticies_FUN_0056e7c0
    PUSH ESI                            ; 0056e7c1
    PUSH EDI                            ; 0056e7c2
    PUSH EBP                            ; 0056e7c3
    SUB ESP,0x4                         ; 0056e7c4
    MOV EBP,dword ptr [ESP + 0x20]      ; 0056e7c7
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0056e7cb
    CMP EDX,0x4e20                      ; 0056e7cf
    JG 0x0056e84a                       ; 0056e7d5
        ;   XREF to: 0056e84a (CONDITIONAL_JUMP)  ; LAB_0056e84a
    PUSH 0x1                            ; 0056e7db
        ;   Label: LAB_0056e7db
    MOV EDI,dword ptr [0x006703ec]      ; 0056e7dd | g_CDemonRendererPtr2
    PUSH EDI                            ; 0056e7e3 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0 ; 0056e7e4
        ;   XREF to: 0048caa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(CDemonRenderer * this_ptr, int enabled)
    MOV ESI,dword ptr [0x006703ec]      ; 0056e7e9 | g_CDemonRendererPtr2
    ADD ESP,0x8                         ; 0056e7ef
    XOR EAX,EAX                         ; 0056e7f2
    XOR EDI,EDI                         ; 0056e7f4
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0056e7f6
    MOV dword ptr [ESP],EAX             ; 0056e7fa
    MOV ESI,dword ptr [ESI]             ; 0056e7fd | g_CDemonRendererInstance
    TEST EDX,EDX                        ; 0056e7ff
    JLE 0x0056e827                      ; 0056e801
        ;   XREF to: 0056e827 (CONDITIONAL_JUMP)  ; LAB_0056e827
    PUSH EBP                            ; 0056e803
        ;   Label: LAB_0056e803
    PUSH ESI                            ; 0056e804
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 0056e805
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV AH,byte ptr [ESI + 0x13]        ; 0056e80a
    ADD ESP,0x8                         ; 0056e80d
    TEST AH,0x80                        ; 0056e810
    JNZ 0x0056e818                      ; 0056e813
        ;   XREF to: 0056e818 (CONDITIONAL_JUMP)  ; LAB_0056e818
    INC dword ptr [ESP]                 ; 0056e815
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0056e818
        ;   Label: LAB_0056e818
    ADD ESI,0x30                        ; 0056e81c
    INC EDI                             ; 0056e81f
    ADD EBP,0xc                         ; 0056e820
    CMP EDI,ECX                         ; 0056e823
    JL 0x0056e803                       ; 0056e825
        ;   XREF to: 0056e803 (CONDITIONAL_JUMP)  ; LAB_0056e803
    MOV ESI,dword ptr [ESP]             ; 0056e827
        ;   Label: LAB_0056e827
    CMP ESI,dword ptr [ESP + 0x1c]      ; 0056e82a
    JZ 0x0056e878                       ; 0056e82e
        ;   XREF to: 0056e878 (CONDITIONAL_JUMP)  ; LAB_0056e878
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0056e830
        ;   Label: LAB_0056e830
    PUSH EDX                            ; 0056e834
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0056e835
    PUSH ECX                            ; 0056e839
    CALL core_set.cpp_CDemonSet_pushScreenBoundsToCamera_FUN_0056e5d0 ; 0056e83a
        ;   XREF to: 0056e5d0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_pushScreenBoundsToCamera_FUN_0056e5d0(CDemonSet * this_ptr, int vertex_count)
    ADD ESP,0x8                         ; 0056e83f
    ADD ESP,0x4                         ; 0056e842
    POP EBP                             ; 0056e845
    POP EDI                             ; 0056e846
    POP ESI                             ; 0056e847
    POP EBX                             ; 0056e848
    RET                                 ; 0056e849
    PUSH 0x4e20                         ; 0056e84a
        ;   Label: LAB_0056e84a
    PUSH EDX                            ; 0056e84f
    MOV ECX,0x645e93                    ; 0056e850 | = "..\\core\\set.cpp"
    MOV EBX,0xd94                       ; 0056e855
    PUSH 0x645ea3                       ; 0056e85a | = "CDemonSet::rotateVerticies - tried to..."
    MOV dword ptr [0x02f0ca48],ECX      ; 0056e85f | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0056e865 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0056e86b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 0056e870
    JMP 0x0056e7db                      ; 0056e873
        ;   XREF to: 0056e7db (UNCONDITIONAL_JUMP)  ; LAB_0056e7db
    PUSH 0x0                            ; 0056e878
        ;   Label: LAB_0056e878
    MOV ESI,dword ptr [0x006703ec]      ; 0056e87a | g_CDemonRendererPtr2
    PUSH ESI                            ; 0056e880 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0 ; 0056e881
        ;   XREF to: 0048caa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0056e886
    JMP 0x0056e830                      ; 0056e889
        ;   XREF to: 0056e830 (UNCONDITIONAL_JUMP)  ; LAB_0056e830

