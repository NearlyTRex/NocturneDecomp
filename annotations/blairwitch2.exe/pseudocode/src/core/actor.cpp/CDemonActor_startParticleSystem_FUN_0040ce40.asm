; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CDemonActor_startParticleSystem_FUN_0040ce40(CDemonActor *this_ptr,int index,int reset_fade)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   index
; int              Stack[0xc]:4   reset_fade
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00522350 at 00527653
;
; Called Functions:
;   core_bwspart.cpp_CSimpleParticleSystem_start_FUN_005a80d0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0xc]       ; 0040ce40
        ;   Label: core_actor.cpp_CDemonActor_startParticleSystem_FUN_0040ce40
    PUSH EDX                            ; 0040ce44
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040ce45
    MOV EAX,EDX                         ; 0040ce49
    SHL EAX,0x4                         ; 0040ce4b
    ADD EAX,EDX                         ; 0040ce4e
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040ce50
    SHL EAX,0x2                         ; 0040ce54
    ADD EDX,0x154                       ; 0040ce57
    ADD EAX,EDX                         ; 0040ce5d
    PUSH EAX                            ; 0040ce5f
    CALL core_bwspart.cpp_CSimpleParticleSystem_start_FUN_005a80d0 ; 0040ce60
        ;   XREF to: 005a80d0 (UNCONDITIONAL_CALL)  ; void core_bwspart.cpp_CSimpleParticleSystem_start_FUN_005a80d0(CSimpleParticleSystem * this_ptr, int param_2)
    ADD ESP,0x8                         ; 0040ce65
    RET                                 ; 0040ce68

