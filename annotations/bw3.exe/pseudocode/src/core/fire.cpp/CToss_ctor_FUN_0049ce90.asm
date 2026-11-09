; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CToss * __cdecl core_fire_cpp_CToss_ctor_FUN_0049ce90(CToss *this_ptr)
;
; Parameters:
; CToss *          Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_box.cpp_CBox_ctor_FUN_0041ad40
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0049ce90
        ;   Label: core_fire.cpp_CToss_ctor_FUN_0049ce90
    ADD EAX,0x4                         ; 0049ce94
    PUSH EAX                            ; 0049ce97
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500 ; 0049ce98
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0049ce9d
    ADD EAX,0x17c                       ; 0049cea0
    PUSH EAX                            ; 0049cea5
    CALL core_box.cpp_CBox_ctor_FUN_0041ad40 ; 0049cea6
        ;   XREF to: 0041ad40 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_ctor_FUN_0041ad40(CBox * this_ptr)
    ADD ESP,0x4                         ; 0049ceab
    MOV dword ptr [EAX + 0x25c],0x0     ; 0049ceae
    SUB EAX,0x180                       ; 0049ceb8
    RET                                 ; 0049cebd

