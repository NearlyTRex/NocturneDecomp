; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorphModel_addPartFromKeyFramedModel_FUN_004f9df0(CMorphModel *this_ptr,CKeyFramedModel *model_ptr,int frame_index)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
; CKeyFramedModel * Stack[0x8]:4   model_ptr
; int              Stack[0xc]:4   frame_index
;
; XREF[1]:
;   core_morph.cpp_CMorph_addPartFromKeyframedModel_FUN_004fab10 at 004fab37
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00460f60
;   core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_004f9ad0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f9df0
        ;   Label: core_morph.cpp_CMorphModel_addPartFromKeyFramedModel_FUN_004f9df0
    PUSH EBP                            ; 004f9df1
    MOV EBP,ESP                         ; 004f9df2
    MOV EBX,dword ptr [EBP + 0x10]      ; 004f9df4
    MOV EAX,dword ptr [EBX + 0x118]     ; 004f9df7
    PUSH EAX                            ; 004f9dfd
    LEA EAX,[EBX + 0x124]               ; 004f9dfe
    PUSH EAX                            ; 004f9e04
    PUSH 0x48                           ; 004f9e05
    MOV EAX,dword ptr [EBX + 0x114]     ; 004f9e07
    PUSH EAX                            ; 004f9e0d
    MOV EAX,dword ptr [EBX + 0x110]     ; 004f9e0e
    PUSH EAX                            ; 004f9e14
    MOV EDX,dword ptr [EBP + 0x14]      ; 004f9e15
    PUSH EDX                            ; 004f9e18
    PUSH EBX                            ; 004f9e19
    CALL core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00460f60 ; 004f9e1a
        ;   XREF to: 00460f60 (UNCONDITIONAL_CALL)  ; CVector3i * core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00460f60(CKeyFramedModel * this_ptr, int frame_index)
    ADD ESP,0x8                         ; 004f9e1f
    PUSH EAX                            ; 004f9e22
    MOV EAX,dword ptr [EBX + 0x104]     ; 004f9e23
    PUSH EAX                            ; 004f9e29
    MOV ECX,dword ptr [EBP + 0xc]       ; 004f9e2a
    PUSH ECX                            ; 004f9e2d
    CALL core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_004f9ad0 ; 004f9e2e
        ;   XREF to: 004f9ad0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_004f9ad0(CMorphModel * this_ptr, int vertex_count, CVector3i * vertex_data, int poly_count, ...)
    ADD ESP,0x20                        ; 004f9e33
    POP EBP                             ; 004f9e36
    POP EBX                             ; 004f9e37
    RET                                 ; 004f9e38

