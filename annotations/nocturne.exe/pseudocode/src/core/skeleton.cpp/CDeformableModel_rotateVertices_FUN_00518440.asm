; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_rotateVertices_FUN_00518440(CDeformableModel *this_ptr,int lod_index,int *input_vertices)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_index
; int *            Stack[0xc]:4   input_vertices
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_0051dad0 at 0051dafa
;
; Referenced Globals:
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   CDemonSet g_CDemonSet_01e57284
;
; Called Functions:
;   core_set.cpp_CDemonSet_rotateVerticies_FUN_0050c200
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00518440
        ;   Label: core_skeleton.cpp_CDeformableModel_rotateVertices_FUN_00518440
    PUSH ESI                            ; 00518441
    MOV EAX,dword ptr [ESP + 0x10]      ; 00518442
    MOV ECX,dword ptr [ESP + 0xc]       ; 00518446
    SHL EAX,0x2                         ; 0051844a
    MOV EDX,dword ptr [ESP + 0x14]      ; 0051844d
    ADD EAX,ECX                         ; 00518451
    PUSH EDX                            ; 00518453
    MOV EBX,dword ptr [EAX + 0x2c]      ; 00518454
    PUSH EBX                            ; 00518457
    MOV ESI,dword ptr [0x005be368]      ; 00518458 | g_CDemonSet_PTR_005be368
    PUSH ESI                            ; 0051845e | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_rotateVerticies_FUN_0050c200 ; 0051845f
        ;   XREF to: 0050c200 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_rotateVerticies_FUN_0050c200(CDemonSet * this_ptr, int vertex_count, CVector3i * input_vertices)
    ADD ESP,0xc                         ; 00518464
    POP ESI                             ; 00518467
    POP EBX                             ; 00518468
    RET                                 ; 00518469

