; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CKeyFramedModelInstance * __cdecl core_dmodel_cpp_CKeyFramedModelInstance_init_FUN_00478d00(CKeyFramedModelInstance *this_ptr)
;
; Parameters:
; CKeyFramedModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 at 00478cf4
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 at 00478e02
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00478d00
        ;   Label: core_dmodel.cpp_CKeyFramedModelInstance_init_FUN_00478d00
    MOV EAX,EDX                         ; 00478d04
    ADD EDX,0x78                        ; 00478d06
    MOV dword ptr [EAX],0x1             ; 00478d09
        ;   Label: LAB_00478d09
    ADD EAX,0x4                         ; 00478d0f
    CMP EAX,EDX                         ; 00478d12
    JNZ 0x00478d09                      ; 00478d14
        ;   XREF to: 00478d09 (CONDITIONAL_JUMP)  ; LAB_00478d09
    RET                                 ; 00478d16

