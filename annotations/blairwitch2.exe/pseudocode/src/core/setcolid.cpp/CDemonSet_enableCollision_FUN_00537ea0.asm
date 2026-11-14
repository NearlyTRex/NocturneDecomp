; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_CDemonSet_enableCollision_FUN_00537ea0(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_actor.cpp_CDemonActor_cylinderGroundCheck_FUN_00408c30 at 00408c65
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00537ea0
        ;   Label: core_setcolid.cpp_CDemonSet_enableCollision_FUN_00537ea0
    MOV dword ptr [EAX + 0x15f6ac],0x1  ; 00537ea4
    RET                                 ; 00537eae

