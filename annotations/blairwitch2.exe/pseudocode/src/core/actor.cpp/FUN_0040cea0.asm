; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_actor_cpp_FUN_0040cea0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00522350 at 00527831
;
; Called Functions:
;   core_bwspart.cpp_CSimpleParticleSystem_setFade_FUN_005a8140
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0040cea0
        ;   Label: core_actor.cpp_FUN_0040cea0
    MOV EAX,EDX                         ; 0040cea4
    SHL EAX,0x4                         ; 0040cea6
    PUSH dword ptr [ESP + 0x14]         ; 0040cea9
    ADD EAX,EDX                         ; 0040cead
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040ceaf
    SHL EAX,0x2                         ; 0040ceb3
    ADD EDX,0x154                       ; 0040ceb6
    PUSH dword ptr [ESP + 0x14]         ; 0040cebc
    ADD EAX,EDX                         ; 0040cec0
    PUSH dword ptr [ESP + 0x14]         ; 0040cec2
    PUSH EAX                            ; 0040cec6
    CALL core_bwspart.cpp_CSimpleParticleSystem_setFade_FUN_005a8140 ; 0040cec7
        ;   XREF to: 005a8140 (UNCONDITIONAL_CALL)  ; void core_bwspart.cpp_CSimpleParticleSystem_setFade_FUN_005a8140(CSimpleParticleSystem * this_ptr, undefined4 param_2, undefined4 param_3, undefined4 param_4)
    ADD ESP,0x10                        ; 0040cecc
    NOP                                 ; 0040cecf

