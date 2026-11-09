; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModel_rotateAndLightVertices_FUN_0044e720(CKeyFramedModel *this_ptr,int frame_index,CKeyFramedModelInstance *instance)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   frame_index
; CKeyFramedModelInstance * Stack[0xc]:4   instance
;
; XREF[1]:
;   core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_0044e6a0 at 0044e6bf
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_0044e6e0
;   core_set.cpp_CDemonSet_lightVerticies_FUN_00532190
;   core_set.cpp_CDemonSet_rotateVerticies_FUN_00531e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044e720
        ;   Label: core_dmodel.cpp_CKeyFramedModel_rotateAndLightVertices_FUN_0044e720
    PUSH ESI                            ; 0044e721
    PUSH EDI                            ; 0044e722
    PUSH EBP                            ; 0044e723
    MOV EBX,dword ptr [ESP + 0x14]      ; 0044e724
    CMP dword ptr [EBX + 0x110],0x1     ; 0044e728
    JGE 0x0044e736                      ; 0044e72f
        ;   XREF to: 0044e736 (CONDITIONAL_JUMP)  ; LAB_0044e736
    POP EBP                             ; 0044e731
    POP EDI                             ; 0044e732
    POP ESI                             ; 0044e733
    POP EBX                             ; 0044e734
    RET                                 ; 0044e735
    MOV ECX,dword ptr [ESP + 0x18]      ; 0044e736
        ;   Label: LAB_0044e736
    PUSH ECX                            ; 0044e73a
    PUSH EBX                            ; 0044e73b
    CALL core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_0044e6e0 ; 0044e73c
        ;   XREF to: 0044e6e0 (UNCONDITIONAL_CALL)  ; CVector3i * core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_0044e6e0(CKeyFramedModel * this_ptr, int frame_index)
    ADD ESP,0x8                         ; 0044e741
    PUSH EAX                            ; 0044e744
    MOV EDI,dword ptr [EBX + 0x104]     ; 0044e745
    PUSH EDI                            ; 0044e74b
    MOV EBP,dword ptr [0x0061b5a8]      ; 0044e74c | g_CDemonSetPtr
    PUSH EBP                            ; 0044e752 | g_CDemonSetInstance
    MOV ESI,EAX                         ; 0044e753
    CALL core_set.cpp_CDemonSet_rotateVerticies_FUN_00531e90 ; 0044e755
        ;   XREF to: 00531e90 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_rotateVerticies_FUN_00531e90(CDemonSet * this_ptr, int vertex_count, CVector3i * input_vertices)
    MOV EAX,dword ptr [EBX + 0x108]     ; 0044e75a
    ADD ESP,0xc                         ; 0044e760
    TEST EAX,EAX                        ; 0044e763
    JZ 0x0044e794                       ; 0044e765
        ;   XREF to: 0044e794 (CONDITIONAL_JUMP)  ; LAB_0044e794
    PUSH EAX                            ; 0044e767
    PUSH 0x4                            ; 0044e768
    PUSH ESI                            ; 0044e76a
    MOV EAX,dword ptr [EBX + 0x114]     ; 0044e76b
    PUSH EAX                            ; 0044e771
    MOV EDX,dword ptr [EBX + 0x110]     ; 0044e772
    PUSH EDX                            ; 0044e778
    MOV ECX,dword ptr [EBX + 0x104]     ; 0044e779
    PUSH ECX                            ; 0044e77f
    MOV EBX,dword ptr [0x0061b5a8]      ; 0044e780 | g_CDemonSetPtr
    PUSH EBX                            ; 0044e786 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_lightVerticies_FUN_00532190 ; 0044e787
        ;   XREF to: 00532190 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVerticies_FUN_00532190(CDemonSet * this_ptr, int vertex_count, int tri_count, void * face_data, ...)
    ADD ESP,0x1c                        ; 0044e78c
    POP EBP                             ; 0044e78f
    POP EDI                             ; 0044e790
    POP ESI                             ; 0044e791
    POP EBX                             ; 0044e792
    RET                                 ; 0044e793
    PUSH EAX                            ; 0044e794
        ;   Label: LAB_0044e794
    PUSH 0x4                            ; 0044e795
    PUSH ESI                            ; 0044e797
    MOV EDX,dword ptr [EBX + 0x114]     ; 0044e798
    PUSH EDX                            ; 0044e79e
    MOV ECX,dword ptr [EBX + 0x110]     ; 0044e79f
    PUSH ECX                            ; 0044e7a5
    MOV ESI,dword ptr [EBX + 0x104]     ; 0044e7a6
    PUSH ESI                            ; 0044e7ac
    MOV EDI,dword ptr [0x0061b5a8]      ; 0044e7ad | g_CDemonSetPtr
    PUSH EDI                            ; 0044e7b3 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_lightVerticies_FUN_00532190 ; 0044e7b4
        ;   XREF to: 00532190 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVerticies_FUN_00532190(CDemonSet * this_ptr, int vertex_count, int tri_count, void * face_data, ...)
    ADD ESP,0x1c                        ; 0044e7b9
    POP EBP                             ; 0044e7bc
    POP EDI                             ; 0044e7bd
    POP ESI                             ; 0044e7be
    POP EBX                             ; 0044e7bf
    RET                                 ; 0044e7c0

