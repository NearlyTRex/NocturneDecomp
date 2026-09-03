; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_rotateVerticies_FUN_0050c200(CDemonSet *this_ptr,int vertex_count,CVector3i *input_vertices)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   vertex_count
; CVector3i *      Stack[0xc]:4   input_vertices
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[11]:
;   core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00416030 at 00416050
;   core_box.cpp_CBoundingBox3D_render_FUN_0041dcc0 at 0041dd2b
;   core_cloth.cpp_CCloth_render_FUN_00437db0 at 00437dd4
;   core_curtain.cpp_CCurtain_renderMesh_FUN_0043f330 at 0043f42f
;   core_dmodel.cpp_CKeyFramedModel_rotateAndLightVertices_FUN_004530c0 at 004530f5
;   core_dpart.cpp_CDemonPart_renderFaces_FUN_004574e0 at 0045753f
;   core_glass.cpp_CGlass_renderBackground_FUN_004ac9b0 at 004acaa1
;   core_glass.cpp_CGlass_renderOpaque_FUN_004ac440 at 004ac52f
;   core_glass.cpp_CGlass_renderTransparent_FUN_004ac600 at 004ac6ee
;   core_skeleton.cpp_CDeformableModel_rotateVertices_FUN_00518440 at 0051845f
;   ... and 1 more
;
; Referenced Globals:
;   TerminatedCString s_core_set_cpp_00590652
;   TerminatedCString s_CDemonSet_rotateVerticie_00590662
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   undefined4 DAT_01b4d738
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   core_set.cpp_CDemonSet_pushScreenBoundsToCamera_FUN_0050c010
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050
;   engine_special.cpp_transformAndProjectPoint_FUN_0053075c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050c200
        ;   Label: core_set.cpp_CDemonSet_rotateVerticies_FUN_0050c200
    PUSH ESI                            ; 0050c201
    PUSH EDI                            ; 0050c202
    PUSH EBP                            ; 0050c203
    SUB ESP,0x4                         ; 0050c204
    MOV EBP,dword ptr [ESP + 0x20]      ; 0050c207
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0050c20b
    CMP EDX,0x4e20                      ; 0050c20f
    JG 0x0050c28a                       ; 0050c215
        ;   XREF to: 0050c28a (CONDITIONAL_JUMP)  ; LAB_0050c28a
    PUSH 0x1                            ; 0050c21b
        ;   Label: LAB_0050c21b
    MOV EDI,dword ptr [0x005ae704]      ; 0050c21d | g_CDemonRenderer_PTR_005ae704
    PUSH EDI                            ; 0050c223 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050 ; 0050c224
        ;   XREF to: 00461050 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(CDemonRenderer * this_ptr, int enabled)
    MOV ESI,dword ptr [0x005ae704]      ; 0050c229 | g_CDemonRenderer_PTR_005ae704
    ADD ESP,0x8                         ; 0050c22f
    XOR EAX,EAX                         ; 0050c232
    XOR EDI,EDI                         ; 0050c234
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0050c236
    MOV dword ptr [ESP],EAX             ; 0050c23a
    MOV ESI,dword ptr [ESI]             ; 0050c23d | DAT_01b4d738
    TEST EDX,EDX                        ; 0050c23f
    JLE 0x0050c267                      ; 0050c241
        ;   XREF to: 0050c267 (CONDITIONAL_JUMP)  ; LAB_0050c267
    PUSH EBP                            ; 0050c243
        ;   Label: LAB_0050c243
    PUSH ESI                            ; 0050c244
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 0050c245
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    MOV AH,byte ptr [ESI + 0x13]        ; 0050c24a
    ADD ESP,0x8                         ; 0050c24d
    TEST AH,0x80                        ; 0050c250
    JNZ 0x0050c258                      ; 0050c253
        ;   XREF to: 0050c258 (CONDITIONAL_JUMP)  ; LAB_0050c258
    INC dword ptr [ESP]                 ; 0050c255
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0050c258
        ;   Label: LAB_0050c258
    ADD ESI,0x30                        ; 0050c25c
    INC EDI                             ; 0050c25f
    ADD EBP,0xc                         ; 0050c260
    CMP EDI,ECX                         ; 0050c263
    JL 0x0050c243                       ; 0050c265
        ;   XREF to: 0050c243 (CONDITIONAL_JUMP)  ; LAB_0050c243
    MOV ESI,dword ptr [ESP]             ; 0050c267
        ;   Label: LAB_0050c267
    CMP ESI,dword ptr [ESP + 0x1c]      ; 0050c26a
    JZ 0x0050c2b8                       ; 0050c26e
        ;   XREF to: 0050c2b8 (CONDITIONAL_JUMP)  ; LAB_0050c2b8
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0050c270
        ;   Label: LAB_0050c270
    PUSH EDX                            ; 0050c274
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0050c275
    PUSH ECX                            ; 0050c279
    CALL core_set.cpp_CDemonSet_pushScreenBoundsToCamera_FUN_0050c010 ; 0050c27a
        ;   XREF to: 0050c010 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_pushScreenBoundsToCamera_FUN_0050c010(CDemonSet * this_ptr, int vertex_count)
    ADD ESP,0x8                         ; 0050c27f
    ADD ESP,0x4                         ; 0050c282
    POP EBP                             ; 0050c285
    POP EDI                             ; 0050c286
    POP ESI                             ; 0050c287
    POP EBX                             ; 0050c288
    RET                                 ; 0050c289
    PUSH 0x4e20                         ; 0050c28a
        ;   Label: LAB_0050c28a
    PUSH EDX                            ; 0050c28f
    MOV ECX,0x590652                    ; 0050c290 | = "..\\core\\set.cpp"
    MOV EBX,0xce7                       ; 0050c295
    PUSH 0x590662                       ; 0050c29a | = "CDemonSet::rotateVerticies - tried to..."
    MOV dword ptr [0x01cc4800],ECX      ; 0050c29f | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EBX      ; 0050c2a5 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0050c2ab
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0xc                         ; 0050c2b0
    JMP 0x0050c21b                      ; 0050c2b3
        ;   XREF to: 0050c21b (UNCONDITIONAL_JUMP)  ; LAB_0050c21b
    PUSH 0x0                            ; 0050c2b8
        ;   Label: LAB_0050c2b8
    MOV ESI,dword ptr [0x005ae704]      ; 0050c2ba | g_CDemonRenderer_PTR_005ae704
    PUSH ESI                            ; 0050c2c0 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050 ; 0050c2c1
        ;   XREF to: 00461050 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0050c2c6
    JMP 0x0050c270                      ; 0050c2c9
        ;   XREF to: 0050c270 (UNCONDITIONAL_JUMP)  ; LAB_0050c270

