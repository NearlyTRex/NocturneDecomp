; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_CDemonSet_skipExactCollisions_FUN_00537df0(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a050 at 0040a85b
;   core_lightgun.cpp_CLightGun_fire_FUN_004e2e70 at 004e300c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00537df0
        ;   Label: core_setcolid.cpp_CDemonSet_skipExactCollisions_FUN_00537df0
    MOV dword ptr [EAX + 0x15f6f0],0x1  ; 00537df4
    RET                                 ; 00537dfe

