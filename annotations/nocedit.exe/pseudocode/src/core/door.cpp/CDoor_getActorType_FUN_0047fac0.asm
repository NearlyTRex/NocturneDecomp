; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * __cdecl core_door_cpp_CDoor_getActorType_FUN_0047fac0(CDoor *this_ptr)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CDoorClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x2c14cdc                   ; 0047fac0 | g_CDoorClassInfo
        ;   Label: core_door.cpp_CDoor_getActorType_FUN_0047fac0
    RET                                 ; 0047fac5

