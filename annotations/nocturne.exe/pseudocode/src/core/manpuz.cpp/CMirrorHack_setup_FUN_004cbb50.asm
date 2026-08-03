; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_CMirrorHack_setup_FUN_004cbb50(CMirrorHack *this_ptr)
;
; Parameters:
; CMirrorHack *    Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00409fc0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004cbb50
        ;   Label: core_manpuz.cpp_CMirrorHack_setup_FUN_004cbb50
    PUSH EDX                            ; 004cbb54
    CALL core_actor.cpp_CDemonActor_setup_FUN_00409fc0 ; 004cbb55
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00409fc0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004cbb5a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004cbb5d
    ADD EAX,0x150                       ; 004cbb61
    PUSH EAX                            ; 004cbb66
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510 ; 004cbb67
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004cbb6c
    RET                                 ; 004cbb6f

