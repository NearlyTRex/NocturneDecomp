; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorphModel_addPartFromPolygon_FUN_005221d0(CMorphModel *this_ptr,int vertex_count,CVector3i *vertex_data,int poly_count,SMRGLHeaderPrimitive *poly_data,int poly_stride,SMRGLTextureModel *texture_list,int *texture_index_list)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   vertex_count
; CVector3i *      Stack[0xc]:4   vertex_data
; int              Stack[0x10]:4   poly_count
; SMRGLHeaderPrimitive * Stack[0x14]:4   poly_data
; int              Stack[0x18]:4   poly_stride
; SMRGLTextureModel * Stack[0x1c]:4   texture_list
; int *            Stack[0x20]:4   texture_index_list
;
; XREF[4]:
;   core_morph.cpp_CMorphModel_addPartFromKeyFramedModel_FUN_005224f0 at 0052252e
;   core_morph.cpp_CMorph_addQuadPartToModel_FUN_00523190 at 005231d0
;   core_morph.cpp_CMorph_addTriPartToModel_FUN_00523140 at 00523180
;   core_morph.cpp_CMorph_setupModelFromTriPolygons_FUN_00523000 at 00523049
;
; Referenced Globals:
;   TerminatedCString s_core_morph_cpp_005ea5ea
;   TerminatedCString s_CMorphModel_addPart_too_005ea5fc
;   TerminatedCString s_core_morph_cpp_005ea623
;   TerminatedCString s_CMorphModel_setup_out_of_005ea635
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_00522540
;   core_morph.cpp_CMorphModel_setFaceListFromPolygon_FUN_005226e0
;   crt_memory.c_realloc_FUN_005c10d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005221d0
        ;   Label: core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_005221d0
    PUSH ESI                            ; 005221d1
    PUSH EDI                            ; 005221d2
    PUSH EBP                            ; 005221d3
    MOV ESI,dword ptr [ESP + 0x14]      ; 005221d4
    MOV EBP,dword ptr [ESP + 0x24]      ; 005221d8
    CMP dword ptr [ESI],0x5             ; 005221dc
    JGE 0x005222e6                      ; 005221df
        ;   XREF to: 005222e6 (CONDITIONAL_JUMP)  ; LAB_005222e6
    MOV EDI,dword ptr [ESP + 0x28]      ; 005221e5
        ;   Label: LAB_005221e5
    MOV EAX,dword ptr [ESP + 0x20]      ; 005221e9
    MOV EDX,EBP                         ; 005221ed
    XOR ECX,ECX                         ; 005221ef
    TEST EAX,EAX                        ; 005221f1
    JLE 0x00522210                      ; 005221f3
        ;   XREF to: 00522210 (CONDITIONAL_JUMP)  ; LAB_00522210
    MOV EBX,dword ptr [EDX + 0x4]       ; 005221f5
        ;   Label: LAB_005221f5
    DEC EAX                             ; 005221f8
    SUB EBX,0x2                         ; 005221f9
    ADD EDX,EDI                         ; 005221fc
    ADD ECX,EBX                         ; 005221fe
    TEST EAX,EAX                        ; 00522200
    JG 0x005221f5                       ; 00522202
        ;   XREF to: 005221f5 (CONDITIONAL_JUMP)  ; LAB_005221f5
    LEA EAX,[EAX]                       ; 00522204
    LEA EDX,[EDX]                       ; 0052220a
    MOV EAX,dword ptr [ESI]             ; 00522210
        ;   Label: LAB_00522210
    SHL EAX,0x4                         ; 00522212
    LEA EDX,[ESI + EAX*0x1]             ; 00522215
    MOV EAX,dword ptr [ESI + 0x54]      ; 00522218
    MOV dword ptr [EDX + 0xc],EAX       ; 0052221b
    MOV EAX,dword ptr [ESI]             ; 0052221e
    SHL EAX,0x4                         ; 00522220
    MOV EDX,dword ptr [ESP + 0x18]      ; 00522223
    MOV dword ptr [ESI + EAX*0x1 + 0x4],EDX ; 00522227
    MOV EAX,dword ptr [ESI]             ; 0052222b
    SHL EAX,0x4                         ; 0052222d
    MOV EDX,dword ptr [ESI + 0x5c]      ; 00522230
    MOV dword ptr [ESI + EAX*0x1 + 0x10],EDX ; 00522233
    MOV EAX,dword ptr [ESI]             ; 00522237
    SHL EAX,0x4                         ; 00522239
    MOV dword ptr [ESI + EAX*0x1 + 0x8],ECX ; 0052223c
    MOV EAX,dword ptr [ESI]             ; 00522240
    SHL EAX,0x4                         ; 00522242
    MOV EDI,dword ptr [ESI + 0x54]      ; 00522245
    ADD EDI,dword ptr [ESI + EAX*0x1 + 0x4] ; 00522248
    MOV EAX,dword ptr [ESI]             ; 0052224c
    MOV dword ptr [ESI + 0x54],EDI      ; 0052224e
    SHL EAX,0x4                         ; 00522251
    MOV EDX,dword ptr [ESI + 0x5c]      ; 00522254
    ADD EDX,dword ptr [ESI + EAX*0x1 + 0x8] ; 00522257
    MOV EAX,dword ptr [ESI + 0x54]      ; 0052225b
    SHL EAX,0x4                         ; 0052225e
    PUSH EAX                            ; 00522261
    MOV ECX,dword ptr [ESI + 0x58]      ; 00522262
    PUSH ECX                            ; 00522265
    MOV dword ptr [ESI + 0x5c],EDX      ; 00522266
    CALL crt_memory.c_realloc_FUN_005c10d0 ; 00522269
        ;   XREF to: 005c10d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005c10d0(void * ptr, ulong new_size)
    MOV dword ptr [ESI + 0x58],EAX      ; 0052226e
    MOV EAX,dword ptr [ESI + 0x5c]      ; 00522271
    SHL EAX,0x2                         ; 00522274
    MOV EDX,EAX                         ; 00522277
    SHL EAX,0x4                         ; 00522279
    ADD ESP,0x8                         ; 0052227c
    SUB EAX,EDX                         ; 0052227f
    PUSH EAX                            ; 00522281
    MOV EBX,dword ptr [ESI + 0x60]      ; 00522282
    PUSH EBX                            ; 00522285
    CALL crt_memory.c_realloc_FUN_005c10d0 ; 00522286
        ;   XREF to: 005c10d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005c10d0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 0052228b
    MOV EDI,dword ptr [ESI]             ; 0052228e
    MOV dword ptr [ESI + 0x60],EAX      ; 00522290
    INC EDI                             ; 00522293
    MOV EAX,dword ptr [ESI + 0x58]      ; 00522294
    MOV dword ptr [ESI],EDI             ; 00522297
    TEST EAX,EAX                        ; 00522299
    JNZ 0x0052230e                      ; 0052229b
        ;   XREF to: 0052230e (CONDITIONAL_JUMP)  ; LAB_0052230e
    MOV ECX,0x5ea623                    ; 0052229d | = "..\\core\\morph.cpp"
        ;   Label: LAB_0052229d
    MOV EBX,0x90                        ; 005222a2
    PUSH 0x5ea635                       ; 005222a7 | = "CMorphModel::setup - out of memory!"
    MOV dword ptr [0x01d1d400],ECX      ; 005222ac | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 005222b2 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005222b8
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005222bd
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005222c0
        ;   Label: LAB_005222c0
    TEST EDI,EDI                        ; 005222c4
    JZ 0x005222dd                       ; 005222c6
        ;   XREF to: 005222dd (CONDITIONAL_JUMP)  ; LAB_005222dd
    MOV EAX,dword ptr [ESP + 0x18]      ; 005222c8
    PUSH EAX                            ; 005222cc
    PUSH 0x0                            ; 005222cd
    MOV EAX,dword ptr [ESI]             ; 005222cf
    PUSH EDI                            ; 005222d1
    DEC EAX                             ; 005222d2
    PUSH EAX                            ; 005222d3
    PUSH ESI                            ; 005222d4
    CALL core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_00522540 ; 005222d5
        ;   XREF to: 00522540 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_00522540(CMorphModel * this_ptr, int part_index, CVector3i * vertex_buffer, int start_offset, ...)
    ADD ESP,0x14                        ; 005222da
    TEST EBP,EBP                        ; 005222dd
        ;   Label: LAB_005222dd
    JNZ 0x00522316                      ; 005222df
        ;   XREF to: 00522316 (CONDITIONAL_JUMP)  ; LAB_00522316
    POP EBP                             ; 005222e1
    POP EDI                             ; 005222e2
    POP ESI                             ; 005222e3
    POP EBX                             ; 005222e4
    RET                                 ; 005222e5
    MOV ECX,0x5ea5ea                    ; 005222e6 | = "..\\core\\morph.cpp"
        ;   Label: LAB_005222e6
    MOV EBX,0x77                        ; 005222eb
    PUSH 0x5ea5fc                       ; 005222f0 | = "CMorphModel::addPart - too many parts!"
    MOV dword ptr [0x01d1d400],ECX      ; 005222f5 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 005222fb | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00522301
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00522306
    JMP 0x005221e5                      ; 00522309
        ;   XREF to: 005221e5 (UNCONDITIONAL_JUMP)  ; LAB_005221e5
    CMP dword ptr [ESI + 0x60],0x0      ; 0052230e
        ;   Label: LAB_0052230e
    JZ 0x0052229d                       ; 00522312
        ;   XREF to: 0052229d (CONDITIONAL_JUMP)  ; LAB_0052229d
    JMP 0x005222c0                      ; 00522314
        ;   XREF to: 005222c0 (UNCONDITIONAL_JUMP)  ; LAB_005222c0
    MOV ECX,dword ptr [ESP + 0x20]      ; 00522316
        ;   Label: LAB_00522316
    PUSH ECX                            ; 0052231a
    PUSH 0x0                            ; 0052231b
    MOV EBX,dword ptr [ESP + 0x38]      ; 0052231d
    PUSH EBX                            ; 00522321
    MOV EDI,dword ptr [ESP + 0x38]      ; 00522322
    PUSH EDI                            ; 00522326
    MOV EAX,dword ptr [ESP + 0x38]      ; 00522327
    PUSH EAX                            ; 0052232b
    MOV EAX,dword ptr [ESI]             ; 0052232c
    PUSH EBP                            ; 0052232e
    DEC EAX                             ; 0052232f
    PUSH EAX                            ; 00522330
    PUSH ESI                            ; 00522331
    CALL core_morph.cpp_CMorphModel_setFaceListFromPolygon_FUN_005226e0 ; 00522332
        ;   XREF to: 005226e0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_setFaceListFromPolygon_FUN_005226e0(CMorphModel * this_ptr, int part_index, SMRGLHeaderPrimitive * poly_data, int poly_stride, ...)
    ADD ESP,0x20                        ; 00522337
    POP EBP                             ; 0052233a
    POP EDI                             ; 0052233b
    POP ESI                             ; 0052233c
    POP EBX                             ; 0052233d
    RET                                 ; 0052233e

