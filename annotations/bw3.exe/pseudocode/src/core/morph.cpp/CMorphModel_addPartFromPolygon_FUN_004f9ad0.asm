; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorphModel_addPartFromPolygon_FUN_004f9ad0(CMorphModel *this_ptr,int vertex_count,CVector3i *vertex_data,int poly_count,SMRGLHeaderPrimitive *poly_data,int poly_stride,SMRGLTextureModel *texture_list,int *texture_index_list)
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
; XREF[2]:
;   core_morph.cpp_CMorphModel_addPartFromKeyFramedModel_FUN_004f9df0 at 004f9e2e
;   core_morph.cpp_CMorph_setupModelFromTriPolygons_FUN_004fa900 at 004fa949
;
; Referenced Globals:
;   TerminatedCString s_core_morph_cpp_005c93fb
;   TerminatedCString s_CMorphModel_addPart_too_005c940d
;   TerminatedCString s_core_morph_cpp_005c9434
;   TerminatedCString s_CMorphModel_setup_out_of_005c9446
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_004f9e40
;   core_morph.cpp_CMorphModel_setFaceListFromPolygon_FUN_004f9fe0
;   crt_memory.c_realloc_FUN_005a3e50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f9ad0
        ;   Label: core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_004f9ad0
    PUSH ESI                            ; 004f9ad1
    PUSH EDI                            ; 004f9ad2
    PUSH EBP                            ; 004f9ad3
    MOV ESI,dword ptr [ESP + 0x14]      ; 004f9ad4
    MOV EBP,dword ptr [ESP + 0x24]      ; 004f9ad8
    CMP dword ptr [ESI],0x5             ; 004f9adc
    JGE 0x004f9be6                      ; 004f9adf
        ;   XREF to: 004f9be6 (CONDITIONAL_JUMP)  ; LAB_004f9be6
    MOV EDI,dword ptr [ESP + 0x28]      ; 004f9ae5
        ;   Label: LAB_004f9ae5
    MOV EAX,dword ptr [ESP + 0x20]      ; 004f9ae9
    MOV EDX,EBP                         ; 004f9aed
    XOR ECX,ECX                         ; 004f9aef
    TEST EAX,EAX                        ; 004f9af1
    JLE 0x004f9b10                      ; 004f9af3
        ;   XREF to: 004f9b10 (CONDITIONAL_JUMP)  ; LAB_004f9b10
    MOV EBX,dword ptr [EDX + 0x4]       ; 004f9af5
        ;   Label: LAB_004f9af5
    DEC EAX                             ; 004f9af8
    SUB EBX,0x2                         ; 004f9af9
    ADD EDX,EDI                         ; 004f9afc
    ADD ECX,EBX                         ; 004f9afe
    TEST EAX,EAX                        ; 004f9b00
    JG 0x004f9af5                       ; 004f9b02
        ;   XREF to: 004f9af5 (CONDITIONAL_JUMP)  ; LAB_004f9af5
    LEA EAX,[EAX]                       ; 004f9b04
    LEA EDX,[EDX]                       ; 004f9b0a
    MOV EAX,dword ptr [ESI]             ; 004f9b10
        ;   Label: LAB_004f9b10
    SHL EAX,0x4                         ; 004f9b12
    LEA EDX,[ESI + EAX*0x1]             ; 004f9b15
    MOV EAX,dword ptr [ESI + 0x54]      ; 004f9b18
    MOV dword ptr [EDX + 0xc],EAX       ; 004f9b1b
    MOV EAX,dword ptr [ESI]             ; 004f9b1e
    SHL EAX,0x4                         ; 004f9b20
    MOV EDX,dword ptr [ESP + 0x18]      ; 004f9b23
    MOV dword ptr [ESI + EAX*0x1 + 0x4],EDX ; 004f9b27
    MOV EAX,dword ptr [ESI]             ; 004f9b2b
    SHL EAX,0x4                         ; 004f9b2d
    MOV EDX,dword ptr [ESI + 0x5c]      ; 004f9b30
    MOV dword ptr [ESI + EAX*0x1 + 0x10],EDX ; 004f9b33
    MOV EAX,dword ptr [ESI]             ; 004f9b37
    SHL EAX,0x4                         ; 004f9b39
    MOV dword ptr [ESI + EAX*0x1 + 0x8],ECX ; 004f9b3c
    MOV EAX,dword ptr [ESI]             ; 004f9b40
    SHL EAX,0x4                         ; 004f9b42
    MOV EDI,dword ptr [ESI + 0x54]      ; 004f9b45
    ADD EDI,dword ptr [ESI + EAX*0x1 + 0x4] ; 004f9b48
    MOV EAX,dword ptr [ESI]             ; 004f9b4c
    MOV dword ptr [ESI + 0x54],EDI      ; 004f9b4e
    SHL EAX,0x4                         ; 004f9b51
    MOV EDX,dword ptr [ESI + 0x5c]      ; 004f9b54
    ADD EDX,dword ptr [ESI + EAX*0x1 + 0x8] ; 004f9b57
    MOV EAX,dword ptr [ESI + 0x54]      ; 004f9b5b
    SHL EAX,0x4                         ; 004f9b5e
    PUSH EAX                            ; 004f9b61
    MOV ECX,dword ptr [ESI + 0x58]      ; 004f9b62
    PUSH ECX                            ; 004f9b65
    MOV dword ptr [ESI + 0x5c],EDX      ; 004f9b66
    CALL crt_memory.c_realloc_FUN_005a3e50 ; 004f9b69
        ;   XREF to: 005a3e50 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005a3e50(void * ptr, ulong new_size)
    MOV dword ptr [ESI + 0x58],EAX      ; 004f9b6e
    MOV EAX,dword ptr [ESI + 0x5c]      ; 004f9b71
    SHL EAX,0x2                         ; 004f9b74
    MOV EDX,EAX                         ; 004f9b77
    SHL EAX,0x4                         ; 004f9b79
    ADD ESP,0x8                         ; 004f9b7c
    SUB EAX,EDX                         ; 004f9b7f
    PUSH EAX                            ; 004f9b81
    MOV EBX,dword ptr [ESI + 0x60]      ; 004f9b82
    PUSH EBX                            ; 004f9b85
    CALL crt_memory.c_realloc_FUN_005a3e50 ; 004f9b86
        ;   XREF to: 005a3e50 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005a3e50(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 004f9b8b
    MOV EDI,dword ptr [ESI]             ; 004f9b8e
    MOV dword ptr [ESI + 0x60],EAX      ; 004f9b90
    INC EDI                             ; 004f9b93
    MOV EAX,dword ptr [ESI + 0x58]      ; 004f9b94
    MOV dword ptr [ESI],EDI             ; 004f9b97
    TEST EAX,EAX                        ; 004f9b99
    JNZ 0x004f9c0e                      ; 004f9b9b
        ;   XREF to: 004f9c0e (CONDITIONAL_JUMP)  ; LAB_004f9c0e
    MOV ECX,0x5c9434                    ; 004f9b9d | = "..\\core\\morph.cpp"
        ;   Label: LAB_004f9b9d
    MOV EBX,0x90                        ; 004f9ba2
    PUSH 0x5c9446                       ; 004f9ba7 | = "CMorphModel::setup - out of memory!"
    MOV dword ptr [0x01d71de0],ECX      ; 004f9bac | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 004f9bb2 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004f9bb8
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004f9bbd
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004f9bc0
        ;   Label: LAB_004f9bc0
    TEST EDI,EDI                        ; 004f9bc4
    JZ 0x004f9bdd                       ; 004f9bc6
        ;   XREF to: 004f9bdd (CONDITIONAL_JUMP)  ; LAB_004f9bdd
    MOV EAX,dword ptr [ESP + 0x18]      ; 004f9bc8
    PUSH EAX                            ; 004f9bcc
    PUSH 0x0                            ; 004f9bcd
    MOV EAX,dword ptr [ESI]             ; 004f9bcf
    PUSH EDI                            ; 004f9bd1
    DEC EAX                             ; 004f9bd2
    PUSH EAX                            ; 004f9bd3
    PUSH ESI                            ; 004f9bd4
    CALL core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_004f9e40 ; 004f9bd5
        ;   XREF to: 004f9e40 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_004f9e40(CMorphModel * this_ptr, int part_index, CVector3i * vertex_buffer, int start_offset, ...)
    ADD ESP,0x14                        ; 004f9bda
    TEST EBP,EBP                        ; 004f9bdd
        ;   Label: LAB_004f9bdd
    JNZ 0x004f9c16                      ; 004f9bdf
        ;   XREF to: 004f9c16 (CONDITIONAL_JUMP)  ; LAB_004f9c16
    POP EBP                             ; 004f9be1
    POP EDI                             ; 004f9be2
    POP ESI                             ; 004f9be3
    POP EBX                             ; 004f9be4
    RET                                 ; 004f9be5
    MOV ECX,0x5c93fb                    ; 004f9be6 | = "..\\core\\morph.cpp"
        ;   Label: LAB_004f9be6
    MOV EBX,0x77                        ; 004f9beb
    PUSH 0x5c940d                       ; 004f9bf0 | = "CMorphModel::addPart - too many parts!"
    MOV dword ptr [0x01d71de0],ECX      ; 004f9bf5 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 004f9bfb | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004f9c01
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004f9c06
    JMP 0x004f9ae5                      ; 004f9c09
        ;   XREF to: 004f9ae5 (UNCONDITIONAL_JUMP)  ; LAB_004f9ae5
    CMP dword ptr [ESI + 0x60],0x0      ; 004f9c0e
        ;   Label: LAB_004f9c0e
    JZ 0x004f9b9d                       ; 004f9c12
        ;   XREF to: 004f9b9d (CONDITIONAL_JUMP)  ; LAB_004f9b9d
    JMP 0x004f9bc0                      ; 004f9c14
        ;   XREF to: 004f9bc0 (UNCONDITIONAL_JUMP)  ; LAB_004f9bc0
    MOV ECX,dword ptr [ESP + 0x20]      ; 004f9c16
        ;   Label: LAB_004f9c16
    PUSH ECX                            ; 004f9c1a
    PUSH 0x0                            ; 004f9c1b
    MOV EBX,dword ptr [ESP + 0x38]      ; 004f9c1d
    PUSH EBX                            ; 004f9c21
    MOV EDI,dword ptr [ESP + 0x38]      ; 004f9c22
    PUSH EDI                            ; 004f9c26
    MOV EAX,dword ptr [ESP + 0x38]      ; 004f9c27
    PUSH EAX                            ; 004f9c2b
    MOV EAX,dword ptr [ESI]             ; 004f9c2c
    PUSH EBP                            ; 004f9c2e
    DEC EAX                             ; 004f9c2f
    PUSH EAX                            ; 004f9c30
    PUSH ESI                            ; 004f9c31
    CALL core_morph.cpp_CMorphModel_setFaceListFromPolygon_FUN_004f9fe0 ; 004f9c32
        ;   XREF to: 004f9fe0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_setFaceListFromPolygon_FUN_004f9fe0(CMorphModel * this_ptr, int part_index, SMRGLHeaderPrimitive * poly_data, int poly_stride, ...)
    ADD ESP,0x20                        ; 004f9c37
    POP EBP                             ; 004f9c3a
    POP EDI                             ; 004f9c3b
    POP ESI                             ; 004f9c3c
    POP EBX                             ; 004f9c3d
    RET                                 ; 004f9c3e

