; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * core_actor_cpp_CVector3f_ctor_FUN_0040d340(CVector3f *this_ptr)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   this_ptr
;
; XREF[8]:
;   core_boneguy.cpp_FUN_00417e20 at 00417e56
;   core_boneguy.cpp_FUN_004192a0 at 00419325
;   core_lightgun.cpp_FUN_004e2e70 at 004e352f
;   core_mobster.cpp_FUN_004fd6e0 at 004fd716
;   core_script.cpp_FUN_00522350 at 00524c61
;   core_zombie.cpp_FUN_00595810 at 00595846
;   core_zombie.cpp_FUN_00595f30 at 0059766a
;   core_zombie.cpp_FUN_005980a0 at 00598169
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040d340
        ;   Label: core_actor.cpp_CVector3f_ctor_FUN_0040d340
    RET                                 ; 0040d344

