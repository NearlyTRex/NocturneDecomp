; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CKeyFramedModelInstance * __cdecl core_dmodel_cpp_CKeyFramedModelInstance_init_FUN_00462520(CKeyFramedModelInstance *this_ptr)
;
; Parameters:
; CKeyFramedModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500 at 00462514
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 at 00462622
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00462520
        ;   Label: core_dmodel.cpp_CKeyFramedModelInstance_init_FUN_00462520
    MOV EAX,EDX                         ; 00462524
    ADD EDX,0x78                        ; 00462526
    MOV dword ptr [EAX],0x1             ; 00462529
        ;   Label: LAB_00462529
    ADD EAX,0x4                         ; 0046252f
    CMP EAX,EDX                         ; 00462532
    JNZ 0x00462529                      ; 00462534
        ;   XREF to: 00462529 (CONDITIONAL_JUMP)  ; LAB_00462529
    RET                                 ; 00462536

