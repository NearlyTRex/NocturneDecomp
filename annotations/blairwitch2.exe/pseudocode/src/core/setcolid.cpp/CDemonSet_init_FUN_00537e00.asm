; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_CDemonSet_init_FUN_00537e00(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[39]:
;   core_actor.cpp_CDemonActor_processFootstepAtOffset_FUN_0040ca40 at 0040cb12
;   core_actor.cpp_CDemonActor_processFootstep_FUN_0040c990 at 0040ca0f
;   core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_00429420 at 00429650
;   core_charactr.cpp_FUN_00423a60 at 00423f46
;   core_confedrt.cpp_FUN_005a14e0 at 005a17e4
;   core_crossbow.cpp_CCrossbow_fire_FUN_0043a7a0 at 0043a952
;   core_doc.cpp_CDoc_renderOpaque_FUN_004599a0 at 00459a26
;   core_doc.cpp_FUN_00459555 at 00459626
;   core_doc.cpp_FUN_00459ff0 at 0045a868
;   core_doc.cpp_FUN_0045ab40 at 0045acf1
;   ... and 29 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00537e00
        ;   Label: core_setcolid.cpp_CDemonSet_init_FUN_00537e00
    MOV dword ptr [EAX + 0x15f6a8],0x0  ; 00537e04
    MOV dword ptr [EAX + 0x15f6ac],0x0  ; 00537e0e
    MOV dword ptr [EAX + 0x15f6f0],0x0  ; 00537e18
    MOV dword ptr [EAX + 0x15f694],0x0  ; 00537e22
    RET                                 ; 00537e2c

