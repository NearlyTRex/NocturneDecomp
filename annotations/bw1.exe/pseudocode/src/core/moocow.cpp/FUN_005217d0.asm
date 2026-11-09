; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_moocow_cpp_FUN_005217d0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_modelName_005ea3c2
;   TerminatedCString s_motion_state_005ea3cc
;
; Called Functions:
;   core_actor.cpp_FUN_0040b7f0
;   core_actor.cpp_FUN_0040b870
;   core_charactr.cpp_FUN_0042c7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005217d0
        ;   Label: core_moocow.cpp_FUN_005217d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005217d1
    PUSH EBX                            ; 005217d5
    CALL core_charactr.cpp_FUN_0042c7f0 ; 005217d6
        ;   XREF to: 0042c7f0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042c7f0()
    ADD ESP,0x4                         ; 005217db
    PUSH 0x5ea3c2                       ; 005217de | = "modelName"
    ADD EBX,0x158                       ; 005217e3
    PUSH EBX                            ; 005217e9
    CALL core_actor.cpp_FUN_0040b7f0    ; 005217ea
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040b7f0(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 005217ef
    PUSH 0x5ea3cc                       ; 005217f2 | = "motion state"
    PUSH EBX                            ; 005217f7
    CALL core_actor.cpp_FUN_0040b870    ; 005217f8
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040b870(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 005217fd
    POP EBX                             ; 00521800
    RET                                 ; 00521801

