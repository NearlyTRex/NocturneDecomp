; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trigger_cpp_CTrigger_onProjectileHit_FUN_0056edc0(CTrigger *this_ptr)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
;
; XREF[8]:
;   core_blundrbs.cpp_FUN_00410490 at 00411168
;   core_burncrss.cpp_FUN_00424550 at 00424d11
;   core_elephant.cpp_FUN_00486d40 at 0048726a
;   core_exorcism.cpp_FUN_0048b020 at 0048b519
;   core_flintlck.cpp_FUN_004ae850 at 004af37b
;   core_gun.cpp_FUN_004d0fc0 at 004d17bc
;   core_rifle.cpp_FUN_00527d70 at 0052843f
;   core_tommygun.cpp_FUN_0056b410 at 0056bc51
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056edc0
        ;   Label: core_trigger.cpp_CTrigger_onProjectileHit_FUN_0056edc0
    CMP dword ptr [EAX + 0x174],0x4     ; 0056edc4
    JZ 0x0056edce                       ; 0056edcb
        ;   XREF to: 0056edce (CONDITIONAL_JUMP)  ; LAB_0056edce
    RET                                 ; 0056edcd
    MOV dword ptr [EAX + 0x2f0],0x1     ; 0056edce
        ;   Label: LAB_0056edce
    RET                                 ; 0056edd8

