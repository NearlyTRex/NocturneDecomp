; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_CMirrorHack_setup_FUN_005064a0(CMirrorHack *this_ptr)
;
; Parameters:
; CMirrorHack *    Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408850
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005064a0
        ;   Label: core_manpuz.cpp_CMirrorHack_setup_FUN_005064a0
    PUSH EDX                            ; 005064a4
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408850 ; 005064a5
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408850(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005064aa
    MOV EAX,dword ptr [ESP + 0x4]       ; 005064ad
    ADD EAX,0x158                       ; 005064b1
    PUSH EAX                            ; 005064b6
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 005064b7
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005064bc
    RET                                 ; 005064bf

