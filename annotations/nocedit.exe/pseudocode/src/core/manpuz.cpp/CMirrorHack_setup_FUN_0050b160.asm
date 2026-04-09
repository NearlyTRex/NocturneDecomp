; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_CMirrorHack_setup_FUN_0050b160(CMirrorHack *this_ptr)
;
; Parameters:
; CMirrorHack *    Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0050b160
        ;   Label: core_manpuz.cpp_CMirrorHack_setup_FUN_0050b160
    PUSH EDX                            ; 0050b164
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 0050b165
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0050b16a
    MOV EAX,dword ptr [ESP + 0x4]       ; 0050b16d
    ADD EAX,0x158                       ; 0050b171
    PUSH EAX                            ; 0050b176
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 0050b177
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0050b17c
    RET                                 ; 0050b17f

