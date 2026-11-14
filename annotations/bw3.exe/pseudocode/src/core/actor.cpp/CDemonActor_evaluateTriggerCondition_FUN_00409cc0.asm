; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409cc0(CDemonActor *this_ptr,CDemonActor *querying_actor,CVector3f *query_position)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   querying_actor
; CVector3f *      Stack[0xc]:4   query_position
;
; *****************************************************************************

section .text

    MOV EDX,0xbf800000                  ; 00409cc0
        ;   Label: core_actor.cpp_CDemonActor_evaluateTriggerCondition_FUN_00409cc0
    MOV EAX,EDX                         ; 00409cc5
    RET                                 ; 00409cc7

