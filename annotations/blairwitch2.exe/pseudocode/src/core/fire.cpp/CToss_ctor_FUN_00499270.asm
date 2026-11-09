; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CToss * __cdecl core_fire_cpp_CToss_ctor_FUN_00499270(CToss *this_ptr)
;
; Parameters:
; CToss *          Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_box.cpp_CBox_ctor_FUN_005b1bc0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00499270
        ;   Label: core_fire.cpp_CToss_ctor_FUN_00499270
    ADD EAX,0x4                         ; 00499274
    PUSH EAX                            ; 00499277
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80 ; 00499278
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0049927d
    ADD EAX,0x17c                       ; 00499280
    PUSH EAX                            ; 00499285
    CALL core_box.cpp_CBox_ctor_FUN_005b1bc0 ; 00499286
        ;   XREF to: 005b1bc0 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_ctor_FUN_005b1bc0(CBox * this_ptr)
    ADD ESP,0x4                         ; 0049928b
    MOV dword ptr [EAX + 0x25c],0x0     ; 0049928e
    SUB EAX,0x180                       ; 00499298
    RET                                 ; 0049929d

