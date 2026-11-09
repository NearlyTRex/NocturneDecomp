; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CKeyFramedModelInstance * __cdecl core_dmodel_cpp_CKeyFramedModelInstance_init_FUN_00468880(CKeyFramedModelInstance *this_ptr)
;
; Parameters:
; CKeyFramedModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860 at 00468874
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 at 00468982
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00468880
        ;   Label: core_dmodel.cpp_CKeyFramedModelInstance_init_FUN_00468880
    MOV EAX,EDX                         ; 00468884
    ADD EDX,0x78                        ; 00468886
    MOV dword ptr [EAX],0x1             ; 00468889
        ;   Label: LAB_00468889
    ADD EAX,0x4                         ; 0046888f
    CMP EAX,EDX                         ; 00468892
    JNZ 0x00468889                      ; 00468894
        ;   XREF to: 00468889 (CONDITIONAL_JUMP)  ; LAB_00468889
    RET                                 ; 00468896

