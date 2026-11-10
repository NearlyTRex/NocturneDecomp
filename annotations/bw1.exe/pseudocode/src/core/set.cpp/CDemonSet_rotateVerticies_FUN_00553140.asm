; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_rotateVerticies_FUN_00553140(CDemonSet *this_ptr,int vertex_count,CVector3i *input_vertices)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   vertex_count
; CVector3i *      Stack[0xc]:4   input_vertices
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[11]:
;   core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00418e50 at 00418e70
;   core_box.cpp_FUN_00421670 at 004216fa
;   core_cloth.cpp_CCloth_render_FUN_00441800 at 00441824
;   core_curtain.cpp_CCurtain_renderMesh_FUN_0044bf20 at 0044c02f
;   core_dmodel.cpp_CKeyFramedModel_rotateAndLightVertices_FUN_004672f0 at 00467325
;   core_dpart.cpp_FUN_00479f5e at 00479fbf
;   core_glass.cpp_CGlass_renderBackground_FUN_004e1fb0 at 004e20b1
;   core_glass.cpp_CGlass_renderOpaque_FUN_004e1a10 at 004e1b0f
;   core_glass.cpp_CGlass_renderTransparent_FUN_004e1be0 at 004e1cde
;   core_skeleton.cpp_CDeformableModel_rotateVertices_FUN_00564000 at 0056401f
;   ... and 1 more
;
; Referenced Globals:
;   TerminatedCString s_core_set_cpp_005f0a0e
;   TerminatedCString s_CDemonSet_rotateVerticie_005f0a1e
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   core_set.cpp_CDemonSet_pushScreenBoundsToCamera_FUN_00552f50
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20
;   engine_special.cpp_FUN_00580173
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00553140
        ;   Label: core_set.cpp_CDemonSet_rotateVerticies_FUN_00553140
    PUSH ESI                            ; 00553141
    PUSH EDI                            ; 00553142
    PUSH EBP                            ; 00553143
    SUB ESP,0x4                         ; 00553144
    MOV EBP,dword ptr [ESP + 0x20]      ; 00553147
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0055314b
    CMP EDX,0x4e20                      ; 0055314f
    JG 0x005531ca                       ; 00553155
        ;   XREF to: 005531ca (CONDITIONAL_JUMP)  ; LAB_005531ca
    PUSH 0x1                            ; 0055315b
        ;   Label: LAB_0055315b
    MOV EDI,dword ptr [0x00612560]      ; 0055315d | DAT_00612560
    PUSH EDI                            ; 00553163 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20 ; 00553164
        ;   XREF to: 00483e20 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(CDemonRenderer * this_ptr, int enabled)
    MOV ESI,dword ptr [0x00612560]      ; 00553169 | DAT_00612560
    ADD ESP,0x8                         ; 0055316f
    XOR EAX,EAX                         ; 00553172
    XOR EDI,EDI                         ; 00553174
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00553176
    MOV dword ptr [ESP],EAX             ; 0055317a
    MOV ESI,dword ptr [ESI]             ; 0055317d | DAT_01bc120c
    TEST EDX,EDX                        ; 0055317f
    JLE 0x005531a7                      ; 00553181
        ;   XREF to: 005531a7 (CONDITIONAL_JUMP)  ; LAB_005531a7
    PUSH EBP                            ; 00553183
        ;   Label: LAB_00553183
    PUSH ESI                            ; 00553184
    CALL engine_special.cpp_FUN_00580173 ; 00553185
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV AH,byte ptr [ESI + 0x13]        ; 0055318a
    ADD ESP,0x8                         ; 0055318d
    TEST AH,0x80                        ; 00553190
    JNZ 0x00553198                      ; 00553193
        ;   XREF to: 00553198 (CONDITIONAL_JUMP)  ; LAB_00553198
    INC dword ptr [ESP]                 ; 00553195
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00553198
        ;   Label: LAB_00553198
    ADD ESI,0x30                        ; 0055319c
    INC EDI                             ; 0055319f
    ADD EBP,0xc                         ; 005531a0
    CMP EDI,ECX                         ; 005531a3
    JL 0x00553183                       ; 005531a5
        ;   XREF to: 00553183 (CONDITIONAL_JUMP)  ; LAB_00553183
    MOV ESI,dword ptr [ESP]             ; 005531a7
        ;   Label: LAB_005531a7
    CMP ESI,dword ptr [ESP + 0x1c]      ; 005531aa
    JZ 0x005531f8                       ; 005531ae
        ;   XREF to: 005531f8 (CONDITIONAL_JUMP)  ; LAB_005531f8
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005531b0
        ;   Label: LAB_005531b0
    PUSH EDX                            ; 005531b4
    MOV ECX,dword ptr [ESP + 0x1c]      ; 005531b5
    PUSH ECX                            ; 005531b9
    CALL core_set.cpp_CDemonSet_pushScreenBoundsToCamera_FUN_00552f50 ; 005531ba
        ;   XREF to: 00552f50 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_pushScreenBoundsToCamera_FUN_00552f50(CDemonSet * this_ptr, int vertex_count)
    ADD ESP,0x8                         ; 005531bf
    ADD ESP,0x4                         ; 005531c2
    POP EBP                             ; 005531c5
    POP EDI                             ; 005531c6
    POP ESI                             ; 005531c7
    POP EBX                             ; 005531c8
    RET                                 ; 005531c9
    PUSH 0x4e20                         ; 005531ca
        ;   Label: LAB_005531ca
    PUSH EDX                            ; 005531cf
    MOV ECX,0x5f0a0e                    ; 005531d0 | = "..\\core\\set.cpp"
    MOV EBX,0xe91                       ; 005531d5
    PUSH 0x5f0a1e                       ; 005531da | = "CDemonSet::rotateVerticies - tried to..."
    MOV dword ptr [0x01d1d400],ECX      ; 005531df | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 005531e5 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005531eb
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0xc                         ; 005531f0
    JMP 0x0055315b                      ; 005531f3
        ;   XREF to: 0055315b (UNCONDITIONAL_JUMP)  ; LAB_0055315b
    PUSH 0x0                            ; 005531f8
        ;   Label: LAB_005531f8
    MOV ESI,dword ptr [0x00612560]      ; 005531fa | DAT_00612560
    PUSH ESI                            ; 00553200 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20 ; 00553201
        ;   XREF to: 00483e20 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00553206
    JMP 0x005531b0                      ; 00553209
        ;   XREF to: 005531b0 (UNCONDITIONAL_JUMP)  ; LAB_005531b0

