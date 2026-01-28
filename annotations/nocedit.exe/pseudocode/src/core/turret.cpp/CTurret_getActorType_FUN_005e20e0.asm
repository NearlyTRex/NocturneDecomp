; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * __cdecl core_turret_cpp_CTurret_getActorType_FUN_005e20e0(CTurret *this_ptr)
;
; Parameters:
; CTurret *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CTurretClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x3f874a4                   ; 005e20e0 | g_CTurretClassInfo
        ;   Label: core_turret.cpp_CTurret_getActorType_FUN_005e20e0
    RET                                 ; 005e20e5

