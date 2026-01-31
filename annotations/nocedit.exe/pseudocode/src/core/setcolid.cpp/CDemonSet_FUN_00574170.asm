; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_setcolid_cpp_CDemonSet_FUN_00574170(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210 at 0040a70b
;   core_lightgun.cpp_CLightGun_FUN_00505c70 at 00505e2b
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00574170
        ;   Label: core_setcolid.cpp_CDemonSet_FUN_00574170
    MOV dword ptr [EAX + 0x15f6dc],0x1  ; 00574174
    RET                                 ; 0057417e

