; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_crate_cpp_CCrate_canPickup_FUN_0043c940(undefined4 param_1,CDemonActor *param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_CHero_0057b43b
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;
; *****************************************************************************

section .text

    PUSH 0x57b43b                       ; 0043c940 | = "CHero"
        ;   Label: core_crate.cpp_CCrate_canPickup_FUN_0043c940
    MOV EDX,dword ptr [ESP + 0xc]       ; 0043c945
    PUSH EDX                            ; 0043c949
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 0043c94a
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040d7e0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0043c94f
    TEST EAX,EAX                        ; 0043c952
    JZ 0x0043c95b                       ; 0043c954
        ;   XREF to: 0043c95b (CONDITIONAL_JUMP)  ; LAB_0043c95b
    MOV EAX,0x4                         ; 0043c956
    RET                                 ; 0043c95b
        ;   Label: LAB_0043c95b

