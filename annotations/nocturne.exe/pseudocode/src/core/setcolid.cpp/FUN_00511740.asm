; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_FUN_00511740(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040b300 at 0040b7e8
;   core_lightgun.cpp_FUN_004c71a0 at 004c7352
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00511740
        ;   Label: core_setcolid.cpp_FUN_00511740
    MOV dword ptr [EAX + 0x15f2f4],0x1  ; 00511744
    RET                                 ; 0051174e

