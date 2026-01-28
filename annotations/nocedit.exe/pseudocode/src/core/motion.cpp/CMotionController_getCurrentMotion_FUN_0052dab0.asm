; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SMotion * __cdecl core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController *this_ptr)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
;
; XREF[106]:
;   core_actor.cpp_CActorProperty_FUN_0040ea50 at 0040ec43
;   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 at 0040fae2
;   core_armour.cpp_CArmour_process_FUN_00412260 at 004122e1
;   core_baron.cpp_CBaronWeapon_FUN_00413e30 at 00413e73
;   core_baron.cpp_CBaron_process_FUN_00412e80 at 00413449
;   core_baron.cpp_CBaron_renderTransparent_FUN_00413ae0 at 00413b0c
;   core_batcreat.cpp_CBatCreature_process_FUN_00415470 at 00415506
;   core_batcreat.cpp_FUN_00416030 at 004161b4
;   core_batman.cpp_CBatman_process_FUN_00416870 at 00416906
;   core_batman.cpp_FUN_004179a0 at 00417b24
;   ... and 96 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0052dab0
        ;   Label: core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
    IMUL EDX,dword ptr [EAX + 0x4],0x54c ; 0052dab4
    MOV EAX,dword ptr [EAX]             ; 0052dabb
    ADD EAX,0x968                       ; 0052dabd
    ADD EAX,EDX                         ; 0052dac2
    RET                                 ; 0052dac4

