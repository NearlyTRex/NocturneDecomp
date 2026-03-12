; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModel_scaleUniform_FUN_0047c4a0(CKeyFramedModel *this_ptr,float uniform_scale)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   uniform_scale
; Local Variables:
; CVector3f        Stack[-0xc]:12  local_c
;
; XREF[2]:
;   core_dmodel.cpp_CKeyFramedModel_scaleToHeight_FUN_0047c470 at 0047c495
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047e1a8
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_scale_FUN_0047c4d0
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 0047c4a0
        ;   Label: core_dmodel.cpp_CKeyFramedModel_scaleUniform_FUN_0047c4a0
    MOV EAX,dword ptr [ESP + 0x14]      ; 0047c4a3
    MOV dword ptr [ESP + 0x8],EAX       ; 0047c4a7
    MOV dword ptr [ESP + 0x4],EAX       ; 0047c4ab
    MOV dword ptr [ESP],EAX             ; 0047c4af
    MOV EAX,ESP                         ; 0047c4b2
    PUSH EAX                            ; 0047c4b4
    MOV EDX,dword ptr [ESP + 0x14]      ; 0047c4b5
    PUSH EDX                            ; 0047c4b9
    CALL core_dmodel.cpp_CKeyFramedModel_scale_FUN_0047c4d0 ; 0047c4ba
        ;   XREF to: 0047c4d0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_scale_FUN_0047c4d0(CKeyFramedModel * this_ptr, CVector3f * scale_factors)
    ADD ESP,0x8                         ; 0047c4bf
    ADD ESP,0xc                         ; 0047c4c2
    RET                                 ; 0047c4c5

