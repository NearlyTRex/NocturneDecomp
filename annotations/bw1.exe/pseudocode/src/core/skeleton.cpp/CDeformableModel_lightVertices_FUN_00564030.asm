; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_lightVertices_FUN_00564030(CDeformableModel *this_ptr,int lod_index,CVector3i *skinned_vertices)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_index
; CVector3i *      Stack[0xc]:4   skinned_vertices
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_skinAndLightVertices_FUN_00569970 at 0056999a
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_set.cpp_CDemonSet_lightVerticies_FUN_00553440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00564030
        ;   Label: core_skeleton.cpp_CDeformableModel_lightVertices_FUN_00564030
    PUSH ESI                            ; 00564031
    PUSH EDI                            ; 00564032
    PUSH EBP                            ; 00564033
    PUSH 0x0                            ; 00564034
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00564036
    MOV ECX,dword ptr [ESP + 0x18]      ; 0056403a
    PUSH -0x3                           ; 0056403e
    SHL EAX,0x2                         ; 00564040
    MOV EDX,dword ptr [ESP + 0x24]      ; 00564043
    ADD EAX,ECX                         ; 00564047
    PUSH EDX                            ; 00564049
    MOV EBX,dword ptr [EAX + 0x7c]      ; 0056404a
    PUSH EBX                            ; 0056404d
    MOV ESI,dword ptr [EAX + 0x54]      ; 0056404e
    PUSH ESI                            ; 00564051
    MOV EDI,dword ptr [EAX + 0x2c]      ; 00564052
    PUSH EDI                            ; 00564055
    MOV EBP,dword ptr [0x00622c18]      ; 00564056 | g_CDemonSetPtr
    PUSH EBP                            ; 0056405c | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_lightVerticies_FUN_00553440 ; 0056405d
        ;   XREF to: 00553440 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVerticies_FUN_00553440(CDemonSet * this_ptr, int vertex_count, int tri_count, void * face_data, ...)
    ADD ESP,0x1c                        ; 00564062
    POP EBP                             ; 00564065
    POP EDI                             ; 00564066
    POP ESI                             ; 00564067
    POP EBX                             ; 00564068
    RET                                 ; 00564069

