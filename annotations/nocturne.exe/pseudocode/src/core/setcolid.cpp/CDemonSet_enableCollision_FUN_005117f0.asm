; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_CDemonSet_enableCollision_FUN_005117f0(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_actor.cpp_CDemonActor_cylinderGroundCheck_FUN_0040a140 at 0040a175
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005117f0
        ;   Label: core_setcolid.cpp_CDemonSet_enableCollision_FUN_005117f0
    MOV dword ptr [EAX + 0x15f2b0],0x1  ; 005117f4
    RET                                 ; 005117fe

