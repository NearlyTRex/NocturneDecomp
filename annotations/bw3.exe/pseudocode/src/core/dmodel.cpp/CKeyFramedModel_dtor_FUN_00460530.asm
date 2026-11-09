; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CKeyFramedModel * __cdecl core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00460530(CKeyFramedModel *this_ptr,uint flags)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[2]:
;   core_cloth.cpp_FUN_0043c280 at 0043c294
;   core_moon.cpp_CMoon_dtor_FUN_004f9450 at 004f9467
;
; Called Functions:
;   core_dmodel.cpp_FUN_00460e10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460530
        ;   Label: core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00460530
    MOV EBX,dword ptr [ESP + 0x8]       ; 00460531
    PUSH EBX                            ; 00460535
    CALL core_dmodel.cpp_FUN_00460e10   ; 00460536
        ;   XREF to: 00460e10 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_FUN_00460e10()
    ADD ESP,0x4                         ; 0046053b
    MOV EAX,EBX                         ; 0046053e
    POP EBX                             ; 00460540
    RET                                 ; 00460541

