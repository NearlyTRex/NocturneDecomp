; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CShell_setup_FUN_004c6170(CShell *this_ptr,CVector3f *position,CVector3f *euler_angles,CVector3f *velocity,CKeyFramedModel *model_ptr)
;
; Parameters:
; CShell *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   euler_angles
; CVector3f *      Stack[0x10]:4   velocity
; CKeyFramedModel * Stack[0x14]:4   model_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createShell_FUN_004c91e0 at 004c9214
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_particle.cpp_CParticle_setup_FUN_00545680
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c6170
        ;   Label: core_fire.cpp_CShell_setup_FUN_004c6170
    PUSH ESI                            ; 004c6171
    SUB ESP,0x4                         ; 004c6172
    MOV EBX,dword ptr [ESP + 0x10]      ; 004c6175
    MOV ESI,dword ptr [ESP + 0x18]      ; 004c6179
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004c617d
    PUSH EDX                            ; 004c6181
    MOV ECX,dword ptr [ESP + 0x18]      ; 004c6182
    PUSH ECX                            ; 004c6186
    PUSH EBX                            ; 004c6187
    CALL core_particle.cpp_CParticle_setup_FUN_00545680 ; 004c6188
        ;   XREF to: 00545680 (UNCONDITIONAL_CALL)  ; void core_particle.cpp_CParticle_setup_FUN_00545680(CParticle * this_ptr, CVector3f * position, CVector3f * velocity)
    LEA EAX,[EBX + 0x38]                ; 004c618d
    ADD ESP,0xc                         ; 004c6190
    CMP EAX,ESI                         ; 004c6193
    JZ 0x004c61a7                       ; 004c6195
        ;   XREF to: 004c61a7 (CONDITIONAL_JUMP)  ; LAB_004c61a7
    MOV EDX,dword ptr [ESI]             ; 004c6197
    MOV dword ptr [EAX],EDX             ; 004c6199
    MOV EDX,dword ptr [ESI + 0x4]       ; 004c619b
    MOV dword ptr [EAX + 0x4],EDX       ; 004c619e
    MOV EDX,dword ptr [ESI + 0x8]       ; 004c61a1
    MOV dword ptr [EAX + 0x8],EDX       ; 004c61a4
    PUSH 0x40c90fdb                     ; 004c61a7
        ;   Label: LAB_004c61a7
    MOV EAX,dword ptr [ESP + 0x24]      ; 004c61ac
    PUSH 0xc0c90fdb                     ; 004c61b0
    MOV dword ptr [EBX + 0x54],EAX      ; 004c61b5
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004c61b8
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)

