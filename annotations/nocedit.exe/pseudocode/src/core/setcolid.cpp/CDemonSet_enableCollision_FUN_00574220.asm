; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_CDemonSet_enableCollision_FUN_00574220(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_actor.cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0 at 00408df8
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00574220
        ;   Label: core_setcolid.cpp_CDemonSet_enableCollision_FUN_00574220
    MOV dword ptr [EAX + 0x15f698],0x1  ; 00574224
    RET                                 ; 0057422e

