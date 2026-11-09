; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_004a0960(CParticle *param_1,CVector3f *param_2,CParticle *param_3,CVector3f *param_4,undefined4 param_5)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createShell_FUN_004a3e70 at 004a3e9f
;
; Called Functions:
;   core_actor.cpp_FUN_0040ce40
;   core_particle.cpp_CParticle_setup_FUN_00509e40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a0960
        ;   Label: core_fire.cpp_FUN_004a0960
    PUSH ESI                            ; 004a0961
    SUB ESP,0x4                         ; 004a0962
    MOV EBX,dword ptr [ESP + 0x10]      ; 004a0965
    MOV ESI,dword ptr [ESP + 0x18]      ; 004a0969
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004a096d
    PUSH EDX                            ; 004a0971
    MOV ECX,dword ptr [ESP + 0x18]      ; 004a0972
    PUSH ECX                            ; 004a0976
    PUSH EBX                            ; 004a0977
    CALL core_particle.cpp_CParticle_setup_FUN_00509e40 ; 004a0978
        ;   XREF to: 00509e40 (UNCONDITIONAL_CALL)  ; void core_particle.cpp_CParticle_setup_FUN_00509e40(CParticle * this_ptr, CVector3f * position, CVector3f * velocity)
    LEA EAX,[EBX + 0x40]                ; 004a097d
    ADD ESP,0xc                         ; 004a0980
    CMP EAX,ESI                         ; 004a0983
    JZ 0x004a0997                       ; 004a0985
        ;   XREF to: 004a0997 (CONDITIONAL_JUMP)  ; LAB_004a0997
    MOV EDX,dword ptr [ESI]             ; 004a0987
    MOV dword ptr [EAX],EDX             ; 004a0989
    MOV EDX,dword ptr [ESI + 0x4]       ; 004a098b
    MOV dword ptr [EAX + 0x4],EDX       ; 004a098e
    MOV EDX,dword ptr [ESI + 0x8]       ; 004a0991
    MOV dword ptr [EAX + 0x8],EDX       ; 004a0994
    PUSH 0x40c90fdb                     ; 004a0997
        ;   Label: LAB_004a0997
    MOV EAX,dword ptr [ESP + 0x24]      ; 004a099c
    PUSH 0xc0c90fdb                     ; 004a09a0
    MOV dword ptr [EBX + 0x5c],EAX      ; 004a09a5
    CALL core_actor.cpp_FUN_0040ce40    ; 004a09a8
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0x8],EAX       ; 004a09ad
    FLD float ptr [ESP + 0x8]           ; 004a09b1
    ADD ESP,0x8                         ; 004a09b5
    PUSH 0x40490fdb                     ; 004a09b8
    PUSH 0xc0490fdb                     ; 004a09bd
    FSTP float ptr [EBX + 0x4c]         ; 004a09c2
    CALL core_actor.cpp_FUN_0040ce40    ; 004a09c5
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [EBX + 0x58],0x0      ; 004a09ca
    MOV dword ptr [ESP + 0x8],EAX       ; 004a09d1
    MOV dword ptr [EBX + 0x24],0x40400000 ; 004a09d5
    MOV EAX,dword ptr [ESP + 0x8]       ; 004a09dc
    MOV dword ptr [EBX + 0x50],EAX      ; 004a09e0
    ADD ESP,0x8                         ; 004a09e3
    ADD ESP,0x4                         ; 004a09e6
    POP ESI                             ; 004a09e9
    POP EBX                             ; 004a09ea
    RET                                 ; 004a09eb

