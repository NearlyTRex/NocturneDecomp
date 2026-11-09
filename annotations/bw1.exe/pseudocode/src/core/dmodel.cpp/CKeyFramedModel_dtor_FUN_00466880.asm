; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CKeyFramedModel * __cdecl core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00466880(CKeyFramedModel *this_ptr,uint flags)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[2]:
;   core_cloth.cpp_FUN_0043e620 at 0043e634
;   core_moon.cpp_CMoon_dtor_FUN_00521c00 at 00521c17
;
; Called Functions:
;   core_dmodel.cpp_FUN_00467160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00466880
        ;   Label: core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00466880
    MOV EBX,dword ptr [ESP + 0x8]       ; 00466881
    PUSH EBX                            ; 00466885
    CALL core_dmodel.cpp_FUN_00467160   ; 00466886
        ;   XREF to: 00467160 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_FUN_00467160()
    ADD ESP,0x4                         ; 0046688b
    MOV EAX,EBX                         ; 0046688e
    POP EBX                             ; 00466890
    RET                                 ; 00466891

