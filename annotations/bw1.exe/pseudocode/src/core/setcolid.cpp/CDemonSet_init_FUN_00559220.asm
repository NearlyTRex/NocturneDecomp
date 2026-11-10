; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_CDemonSet_init_FUN_00559220(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[41]:
;   core_actor.cpp_CDemonActor_processFootstepAtOffset_FUN_0040c750 at 0040c822
;   core_actor.cpp_CDemonActor_processFootstep_FUN_0040c6a0 at 0040c71f
;   core_carved.cpp_CCarved_process_FUN_00428ae0 at 00428db8
;   core_charactr.cpp_FUN_0042d750 at 0042dc36
;   core_charactr.cpp_FUN_00432f10 at 004334c5
;   core_crossbow.cpp_CCrossbow_fire_FUN_00449a50 at 00449c02
;   core_demnfolk.cpp_CDemnfolk_process_FUN_00459100 at 0045a1e6
;   core_doc.cpp_CDoc_renderOpaque_FUN_00471af0 at 00471b75
;   core_doc.cpp_FUN_004712b0 at 00471803
;   core_doc.cpp_FUN_004724a0 at 00472cce
;   ... and 31 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00559220
        ;   Label: core_setcolid.cpp_CDemonSet_init_FUN_00559220
    MOV dword ptr [EAX + 0x15f6ac],0x0  ; 00559224
    MOV dword ptr [EAX + 0x15f6b0],0x0  ; 0055922e
    MOV dword ptr [EAX + 0x15f6f4],0x0  ; 00559238
    MOV dword ptr [EAX + 0x15f698],0x0  ; 00559242
    RET                                 ; 0055924c

