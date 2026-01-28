; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * __cdecl core_wateract_cpp_CWaterActor_getActorType_FUN_005ea890(CWaterActor *this_ptr)
;
; Parameters:
; CWaterActor *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CWaterActorClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x3f93968                   ; 005ea890 | g_CWaterActorClassInfo
        ;   Label: core_wateract.cpp_CWaterActor_getActorType_FUN_005ea890
    RET                                 ; 005ea895

