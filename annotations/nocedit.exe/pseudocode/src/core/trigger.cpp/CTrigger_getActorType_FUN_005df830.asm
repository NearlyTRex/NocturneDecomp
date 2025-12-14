; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_trigger.cpp_CTrigger_getActorType_FUN_005df830(CTrigger * this_ptr)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CTriggerClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x3f87458                   ; 005df830 | g_CTriggerClassInfo
        ;   Label: core_trigger.cpp_CTrigger_getActorType_FUN_005df830
    RET                                 ; 005df835

