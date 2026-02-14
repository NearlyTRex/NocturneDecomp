; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_skeleton_cpp_CDeformableModel_lightVertices_FUN_0059ab50(CDeformableModel *this_ptr,int lod_index,int render_flags)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_index
; int              Stack[0xc]:4   render_flags
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_skinAndLightVertices_FUN_005a02a0 at 005a02ca
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059ab50
        ;   Label: core_skeleton.cpp_CDeformableModel_lightVertices_FUN_0059ab50
    PUSH ESI                            ; 0059ab51
    PUSH EDI                            ; 0059ab52
    PUSH EBP                            ; 0059ab53
    PUSH 0x0                            ; 0059ab54
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0059ab56
    MOV ECX,dword ptr [ESP + 0x18]      ; 0059ab5a
    PUSH -0x3                           ; 0059ab5e
    SHL EAX,0x2                         ; 0059ab60
    MOV EDX,dword ptr [ESP + 0x24]      ; 0059ab63
    ADD EAX,ECX                         ; 0059ab67
    PUSH EDX                            ; 0059ab69
    MOV EBX,dword ptr [EAX + 0x7c]      ; 0059ab6a
    PUSH EBX                            ; 0059ab6d
    MOV ESI,dword ptr [EAX + 0x54]      ; 0059ab6e
    PUSH ESI                            ; 0059ab71
    MOV EDI,dword ptr [EAX + 0x2c]      ; 0059ab72
    PUSH EDI                            ; 0059ab75
    MOV EBP,dword ptr [0x006810c8]      ; 0059ab76 | g_CDemonSetPtr
    PUSH EBP                            ; 0059ab7c | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0 ; 0059ab7d
        ;   XREF to: 0056eac0 (UNCONDITIONAL_CALL)  ; float core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0(CDemonSet * this_ptr, int vertex_count, int tri_count, SInputFace * tri_data_ptr, ...)
    ADD ESP,0x1c                        ; 0059ab82
    POP EBP                             ; 0059ab85
    POP EDI                             ; 0059ab86
    POP ESI                             ; 0059ab87
    POP EBX                             ; 0059ab88
    RET                                 ; 0059ab89

