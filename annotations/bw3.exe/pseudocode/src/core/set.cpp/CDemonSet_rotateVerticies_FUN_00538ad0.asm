; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_rotateVerticies_FUN_00538ad0(CDemonSet *this_ptr,int vertex_count,CVector3i *input_vertices)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   vertex_count
; CVector3i *      Stack[0xc]:4   input_vertices
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[11]:
;   core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00414a60 at 00414a80
;   core_box.cpp_FUN_0041e9b0 at 0041ea3a
;   core_cloth.cpp_CCloth_render_FUN_0043f460 at 0043f484
;   core_curtain.cpp_CCurtain_renderMesh_FUN_00448060 at 0044816f
;   core_dmodel.cpp_CKeyFramedModel_rotateAndLightVertices_FUN_00460fa0 at 00460fd5
;   core_dpart.cpp_FUN_0046682e at 0046688f
;   core_glass.cpp_FUN_004ca5a0 at 004ca69f
;   core_glass.cpp_FUN_004ca770 at 004ca86e
;   core_glass.cpp_FUN_004cab40 at 004cac41
;   core_skeleton.cpp_CDeformableModel_rotateVertices_FUN_00548ba0 at 00548bbf
;   ... and 1 more
;
; Referenced Globals:
;   TerminatedCString s_core_set_cpp_005d06b7
;   TerminatedCString s_CDemonSet_rotateVerticie_005d06c7
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   core_set.cpp_CDemonSet_pushScreenBoundsToCamera_FUN_005388e0
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500
;   engine_special.cpp_FUN_005632a3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00538ad0
        ;   Label: core_set.cpp_CDemonSet_rotateVerticies_FUN_00538ad0
    PUSH ESI                            ; 00538ad1
    PUSH EDI                            ; 00538ad2
    PUSH EBP                            ; 00538ad3
    SUB ESP,0x4                         ; 00538ad4
    MOV EBP,dword ptr [ESP + 0x20]      ; 00538ad7
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00538adb
    CMP EDX,0x61a8                      ; 00538adf
    JG 0x00538b5a                       ; 00538ae5
        ;   XREF to: 00538b5a (CONDITIONAL_JUMP)  ; LAB_00538b5a
    PUSH 0x1                            ; 00538aeb
        ;   Label: LAB_00538aeb
    MOV EDI,dword ptr [0x005f2afc]      ; 00538aed | DAT_005f2afc
    PUSH EDI                            ; 00538af3 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500 ; 00538af4
        ;   XREF to: 0046d500 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(CDemonRenderer * this_ptr, int enabled)
    MOV ESI,dword ptr [0x005f2afc]      ; 00538af9 | DAT_005f2afc
    ADD ESP,0x8                         ; 00538aff
    XOR EAX,EAX                         ; 00538b02
    XOR EDI,EDI                         ; 00538b04
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00538b06
    MOV dword ptr [ESP],EAX             ; 00538b0a
    MOV ESI,dword ptr [ESI]             ; 00538b0d | DAT_01bdd7e4
    TEST EDX,EDX                        ; 00538b0f
    JLE 0x00538b37                      ; 00538b11
        ;   XREF to: 00538b37 (CONDITIONAL_JUMP)  ; LAB_00538b37
    PUSH EBP                            ; 00538b13
        ;   Label: LAB_00538b13
    PUSH ESI                            ; 00538b14
    CALL engine_special.cpp_FUN_005632a3 ; 00538b15
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    MOV AH,byte ptr [ESI + 0x13]        ; 00538b1a
    ADD ESP,0x8                         ; 00538b1d
    TEST AH,0x80                        ; 00538b20
    JNZ 0x00538b28                      ; 00538b23
        ;   XREF to: 00538b28 (CONDITIONAL_JUMP)  ; LAB_00538b28
    INC dword ptr [ESP]                 ; 00538b25
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00538b28
        ;   Label: LAB_00538b28
    ADD ESI,0x30                        ; 00538b2c
    INC EDI                             ; 00538b2f
    ADD EBP,0xc                         ; 00538b30
    CMP EDI,ECX                         ; 00538b33
    JL 0x00538b13                       ; 00538b35
        ;   XREF to: 00538b13 (CONDITIONAL_JUMP)  ; LAB_00538b13
    MOV ESI,dword ptr [ESP]             ; 00538b37
        ;   Label: LAB_00538b37
    CMP ESI,dword ptr [ESP + 0x1c]      ; 00538b3a
    JZ 0x00538b88                       ; 00538b3e
        ;   XREF to: 00538b88 (CONDITIONAL_JUMP)  ; LAB_00538b88
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00538b40
        ;   Label: LAB_00538b40
    PUSH EDX                            ; 00538b44
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00538b45
    PUSH ECX                            ; 00538b49
    CALL core_set.cpp_CDemonSet_pushScreenBoundsToCamera_FUN_005388e0 ; 00538b4a
        ;   XREF to: 005388e0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_pushScreenBoundsToCamera_FUN_005388e0(CDemonSet * this_ptr, int vertex_count)
    ADD ESP,0x8                         ; 00538b4f
    ADD ESP,0x4                         ; 00538b52
    POP EBP                             ; 00538b55
    POP EDI                             ; 00538b56
    POP ESI                             ; 00538b57
    POP EBX                             ; 00538b58
    RET                                 ; 00538b59
    PUSH 0x61a8                         ; 00538b5a
        ;   Label: LAB_00538b5a
    PUSH EDX                            ; 00538b5f
    MOV ECX,0x5d06b7                    ; 00538b60 | = "..\\core\\set.cpp"
    MOV EBX,0xea9                       ; 00538b65
    PUSH 0x5d06c7                       ; 00538b6a | = "CDemonSet::rotateVerticies - tried to..."
    MOV dword ptr [0x01d71de0],ECX      ; 00538b6f | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 00538b75 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00538b7b
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0xc                         ; 00538b80
    JMP 0x00538aeb                      ; 00538b83
        ;   XREF to: 00538aeb (UNCONDITIONAL_JUMP)  ; LAB_00538aeb
    PUSH 0x0                            ; 00538b88
        ;   Label: LAB_00538b88
    MOV ESI,dword ptr [0x005f2afc]      ; 00538b8a | DAT_005f2afc
    PUSH ESI                            ; 00538b90 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500 ; 00538b91
        ;   XREF to: 0046d500 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00538b96
    JMP 0x00538b40                      ; 00538b99
        ;   XREF to: 00538b40 (UNCONDITIONAL_JUMP)  ; LAB_00538b40

