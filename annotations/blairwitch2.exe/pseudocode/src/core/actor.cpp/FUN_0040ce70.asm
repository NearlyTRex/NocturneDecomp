; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_actor_cpp_FUN_0040ce70(int param_1,int param_2,int param_3)
;
;
; XREF[1]:
;   core_script.cpp_FUN_00522350 at 00527734
;
; Called Functions:
;   core_bwspart.cpp_CSimpleParticleSystem_stop_FUN_005a8100
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0xc]       ; 0040ce70
        ;   Label: core_actor.cpp_FUN_0040ce70
    PUSH EDX                            ; 0040ce74
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040ce75
    MOV EAX,EDX                         ; 0040ce79
    SHL EAX,0x4                         ; 0040ce7b
    ADD EAX,EDX                         ; 0040ce7e
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040ce80
    SHL EAX,0x2                         ; 0040ce84
    ADD EDX,0x154                       ; 0040ce87
    ADD EAX,EDX                         ; 0040ce8d
    PUSH EAX                            ; 0040ce8f
    CALL core_bwspart.cpp_CSimpleParticleSystem_stop_FUN_005a8100 ; 0040ce90
        ;   XREF to: 005a8100 (UNCONDITIONAL_CALL)  ; void core_bwspart.cpp_CSimpleParticleSystem_stop_FUN_005a8100(CSimpleParticleSystem * this_ptr, int param_2)
    ADD ESP,0x8                         ; 0040ce95
    RET                                 ; 0040ce98

