; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_teleport.cpp_CTeleportDest_getActorType_FUN_005da760(CTeleportDest * this_ptr)
;
; Parameters:
; CTeleportDest *  Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CTeleportDestClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x3f6cc90                   ; 005da760 | CDemonActorType g_CTeleportDestClassInfo
        ;   Label: core_teleport.cpp_CTeleportDest_getActorType_FUN_005da760
    RET                                 ; 005da765

