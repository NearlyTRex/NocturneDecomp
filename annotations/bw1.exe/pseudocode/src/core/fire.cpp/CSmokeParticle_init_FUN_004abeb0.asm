; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CSmokeParticle_init_FUN_004abeb0(CSmokeParticle *this_ptr,CVector3f *position,float drag_factor,CVector3f *wind_influence,int alpha_value)
;
; Parameters:
; CSmokeParticle * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; float            Stack[0xc]:4   drag_factor
; CVector3f *      Stack[0x10]:4   wind_influence
; int              Stack[0x14]:4   alpha_value
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   core_fire.cpp_CFireEffect_createBulletImpact_FUN_004b56a0 at 004b57ef
;   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004b5b30 at 004b5b7c
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004abeb0
        ;   Label: core_fire.cpp_CSmokeParticle_init_FUN_004abeb0
    SUB ESP,0x4                         ; 004abeb1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004abeb4
    MOV ECX,dword ptr [ESP + 0x10]      ; 004abeb8
    MOV EDX,dword ptr [ESP + 0x18]      ; 004abebc
    LEA EAX,[EBX + 0x4]                 ; 004abec0
    CMP EAX,ECX                         ; 004abec3
    JNZ 0x004abf1f                      ; 004abec5
        ;   XREF to: 004abf1f (CONDITIONAL_JUMP)  ; LAB_004abf1f
    LEA EAX,[EBX + 0x1c]                ; 004abec7
        ;   Label: LAB_004abec7
    TEST EDX,EDX                        ; 004abeca
    JZ 0x004abf33                       ; 004abecc
        ;   XREF to: 004abf33 (CONDITIONAL_JUMP)  ; LAB_004abf33
    CMP EAX,EDX                         ; 004abece
    JZ 0x004abee2                       ; 004abed0
        ;   XREF to: 004abee2 (CONDITIONAL_JUMP)  ; LAB_004abee2
    MOV ECX,dword ptr [EDX]             ; 004abed2
    MOV dword ptr [EAX],ECX             ; 004abed4
    MOV ECX,dword ptr [EDX + 0x4]       ; 004abed6
    MOV dword ptr [EAX + 0x4],ECX       ; 004abed9
    MOV ECX,dword ptr [EDX + 0x8]       ; 004abedc
    MOV dword ptr [EAX + 0x8],ECX       ; 004abedf
    PUSH 0x3f866666                     ; 004abee2
        ;   Label: LAB_004abee2
    MOV EAX,dword ptr [ESP + 0x18]      ; 004abee7
    MOV dword ptr [EBX + 0x18],0x0      ; 004abeeb
    PUSH 0x3f733333                     ; 004abef2
    MOV dword ptr [EBX + 0x14],EAX      ; 004abef7
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004abefa
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 004abeff
    FLD float ptr [ESP + 0x8]           ; 004abf03
    ADD ESP,0x8                         ; 004abf07
    MOV dword ptr [EBX],0x1             ; 004abf0a
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004abf10
    FSTP float ptr [EBX + 0x10]         ; 004abf14
    MOV dword ptr [EBX + 0x28],EAX      ; 004abf17
    ADD ESP,0x4                         ; 004abf1a
    POP EBX                             ; 004abf1d
    RET                                 ; 004abf1e
    PUSH ESI                            ; 004abf1f
        ;   Label: LAB_004abf1f
    MOV ESI,dword ptr [ECX]             ; 004abf20
    MOV dword ptr [EAX],ESI             ; 004abf22
    MOV ESI,dword ptr [ECX + 0x4]       ; 004abf24
    MOV dword ptr [EAX + 0x4],ESI       ; 004abf27
    MOV ESI,dword ptr [ECX + 0x8]       ; 004abf2a
    MOV dword ptr [EAX + 0x8],ESI       ; 004abf2d
    POP ESI                             ; 004abf30
    JMP 0x004abec7                      ; 004abf31
        ;   XREF to: 004abec7 (UNCONDITIONAL_JUMP)  ; LAB_004abec7
    MOV dword ptr [EAX + 0x8],EDX       ; 004abf33
        ;   Label: LAB_004abf33
    MOV EDX,dword ptr [EAX + 0x8]       ; 004abf36
    MOV dword ptr [EAX + 0x4],EDX       ; 004abf39
    MOV EDX,dword ptr [EAX + 0x4]       ; 004abf3c
    MOV dword ptr [EAX],EDX             ; 004abf3f
    JMP 0x004abee2                      ; 004abf41
        ;   XREF to: 004abee2 (UNCONDITIONAL_JUMP)  ; LAB_004abee2

