; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorphModel_animateFromKeyframedModel_FUN_0052aa80(CMorphModel *this_ptr,int part_index,CKeyFramedModel *model_ptr,int frame_index)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   part_index
; CKeyFramedModel * Stack[0xc]:4   model_ptr
; int              Stack[0x10]:4   frame_index
;
; XREF[1]:
;   core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_0052b640 at 0052b66d
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00477890
;   core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_0052a920
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052aa80
        ;   Label: core_morph.cpp_CMorphModel_animateFromKeyframedModel_FUN_0052aa80
    PUSH ESI                            ; 0052aa81
    MOV EDX,dword ptr [ESP + 0x14]      ; 0052aa82
    MOV EAX,dword ptr [EDX + 0x104]     ; 0052aa86
    PUSH EAX                            ; 0052aa8c
    PUSH 0x0                            ; 0052aa8d
    MOV ECX,dword ptr [ESP + 0x20]      ; 0052aa8f
    PUSH ECX                            ; 0052aa93
    PUSH EDX                            ; 0052aa94
    CALL core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00477890 ; 0052aa95
        ;   XREF to: 00477890 (UNCONDITIONAL_CALL)  ; CVector3i * core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00477890(CKeyFramedModel * this_ptr, int frame_index)
    ADD ESP,0x8                         ; 0052aa9a
    PUSH EAX                            ; 0052aa9d
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0052aa9e
    PUSH EBX                            ; 0052aaa2
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0052aaa3
    PUSH ESI                            ; 0052aaa7
    CALL core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_0052a920 ; 0052aaa8
        ;   XREF to: 0052a920 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_0052a920(CMorphModel * this_ptr, int part_index, CVector3i * vertex_buffer, int start_offset, ...)
    ADD ESP,0x14                        ; 0052aaad
    POP ESI                             ; 0052aab0
    POP EBX                             ; 0052aab1
    RET                                 ; 0052aab2

