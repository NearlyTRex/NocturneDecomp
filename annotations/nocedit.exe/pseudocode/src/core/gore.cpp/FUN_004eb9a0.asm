; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_gore.cpp_FUN_004eb9a0()
;
;
; XREF[1]:
;   core_gore.cpp_FUN_004edaa0 at 004edae3
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cc70
;   core_particle.cpp_CParticle_setup_FUN_00545680
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eb9a0
        ;   Label: core_gore.cpp_FUN_004eb9a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004eb9a1
    PUSH 0xf                            ; 004eb9a5
    MOV EAX,dword ptr [ESP + 0x18]      ; 004eb9a7
    PUSH 0x0                            ; 004eb9ab
    MOV dword ptr [EBX + 0x38],EAX      ; 004eb9ad
    CALL core_actor.cpp_getRandomInt_FUN_0040cc70 ; 004eb9b0
        ;   XREF to: 0040cc70 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)
    ADD ESP,0x8                         ; 004eb9b5
    MOV EDX,dword ptr [ESP + 0x10]      ; 004eb9b8
    PUSH EDX                            ; 004eb9bc
    MOV ECX,dword ptr [ESP + 0x10]      ; 004eb9bd
    PUSH ECX                            ; 004eb9c1
    PUSH EBX                            ; 004eb9c2
    MOV dword ptr [EBX + 0x3c],EAX      ; 004eb9c3
    CALL core_particle.cpp_CParticle_setup_FUN_00545680 ; 004eb9c6
        ;   XREF to: 00545680 (UNCONDITIONAL_CALL)  ; void core_particle.cpp_CParticle_setup_FUN_00545680(CParticle * this_ptr, CVector3f * position, CVector3f * velocity)
    ADD ESP,0xc                         ; 004eb9cb
    POP EBX                             ; 004eb9ce
    RET                                 ; 004eb9cf

