; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CKeyFramedModel * __cdecl core_dmodel_cpp_CKeyFramedModel_dtor_FUN_0044dcb0(CKeyFramedModel *this_ptr,uint flags)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[2]:
;   core_cloth.cpp_CCloth_dtor_FUN_005ade00 at 005ade14
;   core_moon.cpp_CMoon_dtor_FUN_00502390 at 005023a7
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_free_FUN_0044e590
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044dcb0
        ;   Label: core_dmodel.cpp_CKeyFramedModel_dtor_FUN_0044dcb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0044dcb1
    PUSH EBX                            ; 0044dcb5
    CALL core_dmodel.cpp_CKeyFramedModel_free_FUN_0044e590 ; 0044dcb6
        ;   XREF to: 0044e590 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_free_FUN_0044e590(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 0044dcbb
    MOV EAX,EBX                         ; 0044dcbe
    POP EBX                             ; 0044dcc0
    RET                                 ; 0044dcc1

