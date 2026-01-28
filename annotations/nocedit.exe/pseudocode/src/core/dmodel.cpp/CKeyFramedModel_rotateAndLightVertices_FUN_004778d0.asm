; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dmodel_cpp_CKeyFramedModel_rotateAndLightVertices_FUN_004778d0 (CKeyFramedModel *this_ptr,CKeyFramedModelInstance *instance,int frame_index)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; CKeyFramedModelInstance * Stack[0x8]:4   instance
; int              Stack[0xc]:4   frame_index
;
; XREF[1]:
;   core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850 at 0047786f
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00477890
;   core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0
;   core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004778d0
        ;   Label: core_dmodel.cpp_CKeyFramedModel_rotateAndLightVertices_FUN_004778d0
    PUSH ESI                            ; 004778d1
    PUSH EDI                            ; 004778d2
    PUSH EBP                            ; 004778d3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004778d4
    CMP dword ptr [EBX + 0x110],0x1     ; 004778d8
    JGE 0x004778e6                      ; 004778df
        ;   XREF to: 004778e6 (CONDITIONAL_JUMP)  ; LAB_004778e6
    POP EBP                             ; 004778e1
    POP EDI                             ; 004778e2
    POP ESI                             ; 004778e3
    POP EBX                             ; 004778e4
    RET                                 ; 004778e5
    MOV ECX,dword ptr [ESP + 0x18]      ; 004778e6
        ;   Label: LAB_004778e6
    PUSH ECX                            ; 004778ea
    PUSH EBX                            ; 004778eb
    CALL core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00477890 ; 004778ec
        ;   XREF to: 00477890 (UNCONDITIONAL_CALL)  ; CVector3i * core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00477890(CKeyFramedModel * this_ptr, int frame_index)
    ADD ESP,0x8                         ; 004778f1
    PUSH EAX                            ; 004778f4
    MOV EDI,dword ptr [EBX + 0x104]     ; 004778f5
    PUSH EDI                            ; 004778fb
    MOV EBP,dword ptr [0x006810c8]      ; 004778fc | g_CDemonSetPtr
    PUSH EBP                            ; 00477902 | g_CDemonSetInstance
    MOV ESI,EAX                         ; 00477903
    CALL core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0 ; 00477905
        ;   XREF to: 0056e7c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0(CDemonSet * this_ptr, int vertex_count, int * input_vertices)
    MOV EAX,dword ptr [EBX + 0x108]     ; 0047790a
    ADD ESP,0xc                         ; 00477910
    TEST EAX,EAX                        ; 00477913
    JZ 0x00477944                       ; 00477915
        ;   XREF to: 00477944 (CONDITIONAL_JUMP)  ; LAB_00477944
    PUSH EAX                            ; 00477917
    PUSH 0x4                            ; 00477918
    PUSH ESI                            ; 0047791a
    MOV EAX,dword ptr [EBX + 0x114]     ; 0047791b
    PUSH EAX                            ; 00477921
    MOV EDX,dword ptr [EBX + 0x110]     ; 00477922
    PUSH EDX                            ; 00477928
    MOV ECX,dword ptr [EBX + 0x104]     ; 00477929
    PUSH ECX                            ; 0047792f
    MOV EBX,dword ptr [0x006810c8]      ; 00477930 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EBX                            ; 00477936 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0 ; 00477937
        ;   XREF to: 0056eac0 (UNCONDITIONAL_CALL)  ; float core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0(CDemonSet * this_ptr, int vertex_count, int tri_count, SInputFace * tri_data_ptr, ...)
    ADD ESP,0x1c                        ; 0047793c
    POP EBP                             ; 0047793f
    POP EDI                             ; 00477940
    POP ESI                             ; 00477941
    POP EBX                             ; 00477942
    RET                                 ; 00477943
    PUSH EAX                            ; 00477944
        ;   Label: LAB_00477944
    PUSH 0x4                            ; 00477945
    PUSH ESI                            ; 00477947
    MOV EDX,dword ptr [EBX + 0x114]     ; 00477948
    PUSH EDX                            ; 0047794e
    MOV ECX,dword ptr [EBX + 0x110]     ; 0047794f
    PUSH ECX                            ; 00477955
    MOV ESI,dword ptr [EBX + 0x104]     ; 00477956
    PUSH ESI                            ; 0047795c
    MOV EDI,dword ptr [0x006810c8]      ; 0047795d | g_CDemonSetPtr
    PUSH EDI                            ; 00477963 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0 ; 00477964
        ;   XREF to: 0056eac0 (UNCONDITIONAL_CALL)  ; float core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0(CDemonSet * this_ptr, int vertex_count, int tri_count, SInputFace * tri_data_ptr, ...)
    ADD ESP,0x1c                        ; 00477969
    POP EBP                             ; 0047796c
    POP EDI                             ; 0047796d
    POP ESI                             ; 0047796e
    POP EBX                             ; 0047796f
    RET                                 ; 00477970

