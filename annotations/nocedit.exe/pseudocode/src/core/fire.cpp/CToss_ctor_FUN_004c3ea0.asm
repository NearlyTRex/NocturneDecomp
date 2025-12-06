; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CToss * core_fire.cpp_CToss_ctor_FUN_004c3ea0(CToss * this_ptr)
;
; Parameters:
; CToss *          Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_box.cpp_CBox_ctor_FUN_0041dc50
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c3ea0
        ;   Label: core_fire.cpp_CToss_ctor_FUN_004c3ea0
    ADD EAX,0x4                         ; 004c3ea4
    PUSH EAX                            ; 004c3ea7
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 004c3ea8 | CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004c3ead
    ADD EAX,0x17c                       ; 004c3eb0
    PUSH EAX                            ; 004c3eb5
    CALL core_box.cpp_CBox_ctor_FUN_0041dc50 ; 004c3eb6 | CBox * core_box.cpp_CBox_ctor_FUN_0041dc50(CBox * this_ptr)
        ;   XREF to: 0041dc50 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004c3ebb
    MOV dword ptr [EAX + 0x25c],0x0     ; 004c3ebe
    SUB EAX,0x180                       ; 004c3ec8
    RET                                 ; 004c3ecd

