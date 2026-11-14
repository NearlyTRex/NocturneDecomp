; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[37]:
;   core_actor.cpp_CDemonActor_processFootstepAtOffset_FUN_0040c990 at 0040ca62
;   core_actor.cpp_CDemonActor_processFootstep_FUN_0040c8e0 at 0040c95f
;   core_blundrbs.cpp_CBlunderbus_fire_FUN_00410490 at 00410744
;   core_burncrss.cpp_CBurncross_fire_FUN_00424550 at 0042476c
;   core_carved.cpp_CCarved_process_FUN_00425da0 at 00426072
;   core_charactr.cpp_FUN_0042c230 at 0042c713
;   core_charactr.cpp_FUN_00432330 at 0043298d
;   core_demnfolk.cpp_CDemnfolk_process_FUN_00455080 at 004561ee
;   core_elephant.cpp_CElephantGun_fire_FUN_00486d40 at 00486fea
;   core_emitter.cpp_CEmitter_renderOpaque_FUN_004889b0 at 004889f1
;   ... and 27 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0053ebe0
        ;   Label: core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0
    MOV dword ptr [EAX + 0x15f6ac],0x0  ; 0053ebe4
    MOV dword ptr [EAX + 0x15f6b0],0x0  ; 0053ebee
    MOV dword ptr [EAX + 0x15f6f4],0x0  ; 0053ebf8
    MOV dword ptr [EAX + 0x15f698],0x0  ; 0053ec02
    RET                                 ; 0053ec0c

