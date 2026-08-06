; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CKeyFramedModel * __cdecl core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00452630(CKeyFramedModel *this_ptr,uint flags)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[2]:
;   core_cloth.cpp_CCloth_dtor_FUN_00435160 at 00435198
;   core_moon.cpp_CMoon_dtor_FUN_004de830 at 004de844
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_FUN_00452f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00452630
        ;   Label: core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00452630
    MOV EBX,dword ptr [ESP + 0x8]       ; 00452631
    PUSH EBX                            ; 00452635
    CALL core_dmodel.cpp_CKeyFramedModel_FUN_00452f10 ; 00452636
        ;   XREF to: 00452f10 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_FUN_00452f10(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 0045263b
    MOV EAX,EBX                         ; 0045263e
    POP EBX                             ; 00452640
    RET                                 ; 00452641

