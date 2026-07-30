; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_health_cpp_CHealthItem_canPickup_FUN_004b43d0(undefined4 param_1,CDemonActor *param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_CHero_00585670
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;
; *****************************************************************************

section .text

    PUSH 0x585670                       ; 004b43d0 | = "CHero"
        ;   Label: core_health.cpp_CHealthItem_canPickup_FUN_004b43d0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b43d5
    PUSH EDX                            ; 004b43d9
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004b43da
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040d7e0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004b43df
    TEST EAX,EAX                        ; 004b43e2
    JZ 0x004b43eb                       ; 004b43e4
        ;   XREF to: 004b43eb (CONDITIONAL_JUMP)  ; LAB_004b43eb
    MOV EAX,0x2                         ; 004b43e6
    RET                                 ; 004b43eb
        ;   Label: LAB_004b43eb

