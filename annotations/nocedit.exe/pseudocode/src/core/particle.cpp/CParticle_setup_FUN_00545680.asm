; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_particle_cpp_CParticle_setup_FUN_00545680(CParticle *this_ptr,CVector3f *position,CVector3f *velocity)
;
; Parameters:
; CParticle *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   velocity
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[3]:
;   core_fire.cpp_CRock_setup_FUN_004c17c0 at 004c17d6
;   core_fire.cpp_CShell_setup_FUN_004c6170 at 004c6188
;   core_gore.cpp_CBloodParticle_setup_FUN_004eb9a0 at 004eb9c6
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00545680
        ;   Label: core_particle.cpp_CParticle_setup_FUN_00545680
    SUB ESP,0x28                        ; 00545681
    MOV EBX,dword ptr [ESP + 0x30]      ; 00545684
    MOV EAX,dword ptr [ESP + 0x34]      ; 00545688
    MOV EDX,dword ptr [ESP + 0x38]      ; 0054568c
    MOV dword ptr [EBX + 0x1c],0xc2000000 ; 00545690
    CMP EBX,EAX                         ; 00545697
    JNZ 0x005456b9                      ; 00545699
        ;   XREF to: 005456b9 (CONDITIONAL_JUMP)  ; LAB_005456b9
    TEST EDX,EDX                        ; 0054569b
        ;   Label: LAB_0054569b
    JZ 0x005456dd                       ; 0054569d
        ;   XREF to: 005456dd (CONDITIONAL_JUMP)  ; LAB_005456dd
    LEA EAX,[EBX + 0xc]                 ; 0054569f
    CMP EAX,EDX                         ; 005456a2
    JNZ 0x005456cb                      ; 005456a4
        ;   XREF to: 005456cb (CONDITIONAL_JUMP)  ; LAB_005456cb
    MOV dword ptr [EBX + 0x18],0x40a00000 ; 005456a6
        ;   Label: LAB_005456a6
    MOV dword ptr [EBX + 0x30],0x0      ; 005456ad
    ADD ESP,0x28                        ; 005456b4
    POP EBX                             ; 005456b7
    RET                                 ; 005456b8
    MOV ECX,dword ptr [EAX]             ; 005456b9
        ;   Label: LAB_005456b9
    MOV dword ptr [EBX],ECX             ; 005456bb
    MOV ECX,dword ptr [EAX + 0x4]       ; 005456bd
    MOV dword ptr [EBX + 0x4],ECX       ; 005456c0
    MOV ECX,dword ptr [EAX + 0x8]       ; 005456c3
    MOV dword ptr [EBX + 0x8],ECX       ; 005456c6
    JMP 0x0054569b                      ; 005456c9
        ;   XREF to: 0054569b (UNCONDITIONAL_JUMP)  ; LAB_0054569b
    MOV ECX,dword ptr [EDX]             ; 005456cb
        ;   Label: LAB_005456cb
    MOV dword ptr [EAX],ECX             ; 005456cd
    MOV ECX,dword ptr [EDX + 0x4]       ; 005456cf
    MOV dword ptr [EAX + 0x4],ECX       ; 005456d2
    MOV ECX,dword ptr [EDX + 0x8]       ; 005456d5
    MOV dword ptr [EAX + 0x8],ECX       ; 005456d8
    JMP 0x005456a6                      ; 005456db
        ;   XREF to: 005456a6 (UNCONDITIONAL_JUMP)  ; LAB_005456a6
    PUSH 0x3fc90fdb                     ; 005456dd
        ;   Label: LAB_005456dd
    PUSH 0x3f490fdb                     ; 005456e2
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 005456e7
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)

