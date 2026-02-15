; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorphModel_FUN_0052a8d0(CMorphModel *this_ptr,CKeyFramedModel *model_ptr,int frame_index)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
; CKeyFramedModel * Stack[0x8]:4   model_ptr
; int              Stack[0xc]:4   frame_index
;
; XREF[2]:
;   core_morph.cpp_CMorph_FUN_0052b470 at 0052b4a0
;   core_morph.cpp_CMorph_FUN_0052b580 at 0052b5a7
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00477890
;   core_morph.cpp_CMorphModel_addPart_FUN_0052a580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052a8d0
        ;   Label: core_morph.cpp_CMorphModel_FUN_0052a8d0
    PUSH EBP                            ; 0052a8d1
    MOV EBP,ESP                         ; 0052a8d2
    MOV EBX,dword ptr [EBP + 0x10]      ; 0052a8d4
    MOV EAX,dword ptr [EBX + 0x118]     ; 0052a8d7
    PUSH EAX                            ; 0052a8dd
    LEA EAX,[EBX + 0x124]               ; 0052a8de
    PUSH EAX                            ; 0052a8e4
    PUSH 0x48                           ; 0052a8e5
    MOV EAX,dword ptr [EBX + 0x114]     ; 0052a8e7
    PUSH EAX                            ; 0052a8ed
    MOV EAX,dword ptr [EBX + 0x110]     ; 0052a8ee
    PUSH EAX                            ; 0052a8f4
    MOV EDX,dword ptr [EBP + 0x14]      ; 0052a8f5
    PUSH EDX                            ; 0052a8f8
    PUSH EBX                            ; 0052a8f9
    CALL core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00477890 ; 0052a8fa
        ;   XREF to: 00477890 (UNCONDITIONAL_CALL)  ; CVector3i * core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00477890(CKeyFramedModel * this_ptr, int frame_index)
    ADD ESP,0x8                         ; 0052a8ff
    PUSH EAX                            ; 0052a902
    MOV EAX,dword ptr [EBX + 0x104]     ; 0052a903
    PUSH EAX                            ; 0052a909
    MOV ECX,dword ptr [EBP + 0xc]       ; 0052a90a
    PUSH ECX                            ; 0052a90d
    CALL core_morph.cpp_CMorphModel_addPart_FUN_0052a580 ; 0052a90e
        ;   XREF to: 0052a580 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_addPart_FUN_0052a580(CMorphModel * this_ptr)
    ADD ESP,0x20                        ; 0052a913
    POP EBP                             ; 0052a916
    POP EBX                             ; 0052a917
    RET                                 ; 0052a918

