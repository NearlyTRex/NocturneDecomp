; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CToss * __cdecl core_fire_cpp_CToss_ctor_FUN_004b1c10(CToss *this_ptr)
;
; Parameters:
; CToss *          Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_box.cpp_CBox_ctor_FUN_0041da00
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b1c10
        ;   Label: core_fire.cpp_CToss_ctor_FUN_004b1c10
    ADD EAX,0x4                         ; 004b1c14
    PUSH EAX                            ; 004b1c17
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860 ; 004b1c18
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004b1c1d
    ADD EAX,0x17c                       ; 004b1c20
    PUSH EAX                            ; 004b1c25
    CALL core_box.cpp_CBox_ctor_FUN_0041da00 ; 004b1c26
        ;   XREF to: 0041da00 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_ctor_FUN_0041da00(CBox * this_ptr)
    ADD ESP,0x4                         ; 004b1c2b
    MOV dword ptr [EAX + 0x25c],0x0     ; 004b1c2e
    SUB EAX,0x180                       ; 004b1c38
    RET                                 ; 004b1c3d

