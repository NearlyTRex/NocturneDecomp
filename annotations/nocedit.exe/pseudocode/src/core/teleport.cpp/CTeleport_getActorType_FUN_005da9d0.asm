; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_teleport.cpp_CTeleport_getActorType_FUN_005da9d0(CTeleport * this_ptr)
;
; Parameters:
; CTeleport *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CTeleportClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x3f6cccc                   ; 005da9d0 | g_CTeleportClassInfo
        ;   Label: core_teleport.cpp_CTeleport_getActorType_FUN_005da9d0
    RET                                 ; 005da9d5

