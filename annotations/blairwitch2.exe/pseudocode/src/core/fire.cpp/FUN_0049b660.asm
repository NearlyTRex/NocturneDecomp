; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_0049b660(CParticle *param_1,CVector3f *param_2,CParticle *param_3,CVector3f *param_4,undefined4 param_5)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_fire.cpp_FUN_0049e970 at 0049e99f
;
; Called Functions:
;   core_actor.cpp_FUN_0040cf60
;   core_particle.cpp_CParticle_setup_FUN_00510e00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049b660
        ;   Label: core_fire.cpp_FUN_0049b660
    PUSH ESI                            ; 0049b661
    SUB ESP,0x4                         ; 0049b662
    MOV EBX,dword ptr [ESP + 0x10]      ; 0049b665
    MOV ESI,dword ptr [ESP + 0x18]      ; 0049b669
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0049b66d
    PUSH EDX                            ; 0049b671
    MOV ECX,dword ptr [ESP + 0x18]      ; 0049b672
    PUSH ECX                            ; 0049b676
    PUSH EBX                            ; 0049b677
    CALL core_particle.cpp_CParticle_setup_FUN_00510e00 ; 0049b678
        ;   XREF to: 00510e00 (UNCONDITIONAL_CALL)  ; void core_particle.cpp_CParticle_setup_FUN_00510e00(CParticle * this_ptr, CVector3f * position, CVector3f * velocity)
    LEA EAX,[EBX + 0x40]                ; 0049b67d
    ADD ESP,0xc                         ; 0049b680
    CMP EAX,ESI                         ; 0049b683
    JZ 0x0049b697                       ; 0049b685
        ;   XREF to: 0049b697 (CONDITIONAL_JUMP)  ; LAB_0049b697
    MOV EDX,dword ptr [ESI]             ; 0049b687
    MOV dword ptr [EAX],EDX             ; 0049b689
    MOV EDX,dword ptr [ESI + 0x4]       ; 0049b68b
    MOV dword ptr [EAX + 0x4],EDX       ; 0049b68e
    MOV EDX,dword ptr [ESI + 0x8]       ; 0049b691
    MOV dword ptr [EAX + 0x8],EDX       ; 0049b694
    PUSH 0x40c90fdb                     ; 0049b697
        ;   Label: LAB_0049b697
    MOV EAX,dword ptr [ESP + 0x24]      ; 0049b69c
    PUSH 0xc0c90fdb                     ; 0049b6a0
    MOV dword ptr [EBX + 0x5c],EAX      ; 0049b6a5
    CALL core_actor.cpp_FUN_0040cf60    ; 0049b6a8
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [ESP + 0x8],EAX       ; 0049b6ad
    FLD float ptr [ESP + 0x8]           ; 0049b6b1
    ADD ESP,0x8                         ; 0049b6b5
    PUSH 0x40490fdb                     ; 0049b6b8
    PUSH 0xc0490fdb                     ; 0049b6bd
    FSTP float ptr [EBX + 0x4c]         ; 0049b6c2
    CALL core_actor.cpp_FUN_0040cf60    ; 0049b6c5
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [EBX + 0x58],0x0      ; 0049b6ca
    MOV dword ptr [ESP + 0x8],EAX       ; 0049b6d1
    MOV dword ptr [EBX + 0x24],0x40400000 ; 0049b6d5
    MOV EAX,dword ptr [ESP + 0x8]       ; 0049b6dc
    MOV dword ptr [EBX + 0x50],EAX      ; 0049b6e0
    ADD ESP,0x8                         ; 0049b6e3
    ADD ESP,0x4                         ; 0049b6e6
    POP ESI                             ; 0049b6e9
    POP EBX                             ; 0049b6ea
    RET                                 ; 0049b6eb

