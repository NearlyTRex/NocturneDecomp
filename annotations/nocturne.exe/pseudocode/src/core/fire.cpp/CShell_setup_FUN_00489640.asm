; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CShell_setup_FUN_00489640(CShell *this_ptr,CVector3f *position,CVector3f *euler_angles,CVector3f *velocity,CKeyFramedModel *model_ptr)
;
; Parameters:
; CShell *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   euler_angles
; CVector3f *      Stack[0x10]:4   velocity
; CKeyFramedModel * Stack[0x14]:4   model_ptr
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createShell_FUN_0048c6b0 at 0048c6e4
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_particle.cpp_CParticle_setup_FUN_004ef040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00489640
        ;   Label: core_fire.cpp_CShell_setup_FUN_00489640
    PUSH ESI                            ; 00489641
    SUB ESP,0x4                         ; 00489642
    MOV EBX,dword ptr [ESP + 0x10]      ; 00489645
    MOV ESI,dword ptr [ESP + 0x18]      ; 00489649
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0048964d
    PUSH EDX                            ; 00489651
    MOV ECX,dword ptr [ESP + 0x18]      ; 00489652
    PUSH ECX                            ; 00489656
    PUSH EBX                            ; 00489657
    CALL core_particle.cpp_CParticle_setup_FUN_004ef040 ; 00489658
        ;   XREF to: 004ef040 (UNCONDITIONAL_CALL)  ; void core_particle.cpp_CParticle_setup_FUN_004ef040(CParticle * this_ptr, CVector3f * position, CVector3f * velocity)
    LEA EAX,[EBX + 0x38]                ; 0048965d
    ADD ESP,0xc                         ; 00489660
    CMP EAX,ESI                         ; 00489663
    JZ 0x00489677                       ; 00489665
        ;   XREF to: 00489677 (CONDITIONAL_JUMP)  ; LAB_00489677
    MOV EDX,dword ptr [ESI]             ; 00489667
    MOV dword ptr [EAX],EDX             ; 00489669
    MOV EDX,dword ptr [ESI + 0x4]       ; 0048966b
    MOV dword ptr [EAX + 0x4],EDX       ; 0048966e
    MOV EDX,dword ptr [ESI + 0x8]       ; 00489671
    MOV dword ptr [EAX + 0x8],EDX       ; 00489674
    PUSH 0x40c90fdb                     ; 00489677
        ;   Label: LAB_00489677
    MOV EAX,dword ptr [ESP + 0x24]      ; 0048967c
    PUSH 0xc0c90fdb                     ; 00489680
    MOV dword ptr [EBX + 0x54],EAX      ; 00489685
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00489688
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 0048968d
    FLD float ptr [ESP + 0x8]           ; 00489691
    ADD ESP,0x8                         ; 00489695
    PUSH 0x40490fdb                     ; 00489698
    PUSH 0xc0490fdb                     ; 0048969d
    FSTP float ptr [EBX + 0x44]         ; 004896a2
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 004896a5
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [EBX + 0x50],0x0      ; 004896aa
    MOV dword ptr [ESP + 0x8],EAX       ; 004896b1
    MOV dword ptr [EBX + 0x18],0x40400000 ; 004896b5
    MOV EAX,dword ptr [ESP + 0x8]       ; 004896bc
    MOV dword ptr [EBX + 0x48],EAX      ; 004896c0
    ADD ESP,0x8                         ; 004896c3
    ADD ESP,0x4                         ; 004896c6
    POP ESI                             ; 004896c9
    POP EBX                             ; 004896ca
    RET                                 ; 004896cb

