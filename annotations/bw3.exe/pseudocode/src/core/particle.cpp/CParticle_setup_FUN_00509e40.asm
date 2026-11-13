; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_particle_cpp_CParticle_setup_FUN_00509e40(CParticle *this_ptr,CVector3f *position,CVector3f *velocity)
;
; Parameters:
; CParticle *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   velocity
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[5]:
;   core_fire.cpp_CGlassParticle_init_FUN_0049a650 at 0049a9c5
;   core_fire.cpp_CLeaf_init_FUN_0049a140 at 0049a157
;   core_fire.cpp_CRock_setup_FUN_00499fe0 at 00499ff6
;   core_fire.cpp_CShell_setup_FUN_004a0960 at 004a0978
;   core_gore.cpp_CBloodParticle_setup_FUN_004ccac0 at 004ccae6
;
; Referenced Globals:
;   undefined4 DAT_005cb659
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00509e40
        ;   Label: core_particle.cpp_CParticle_setup_FUN_00509e40
    SUB ESP,0x28                        ; 00509e41
    MOV EBX,dword ptr [ESP + 0x30]      ; 00509e44
    MOV EAX,dword ptr [ESP + 0x34]      ; 00509e48
    MOV EDX,dword ptr [ESP + 0x38]      ; 00509e4c
    MOV dword ptr [EBX + 0x1c],0xc2000000 ; 00509e50
    MOV dword ptr [EBX + 0x20],0x0      ; 00509e57
    MOV dword ptr [EBX + 0x18],0x0      ; 00509e5e
    CMP EBX,EAX                         ; 00509e65
    JNZ 0x00509e87                      ; 00509e67
        ;   XREF to: 00509e87 (CONDITIONAL_JUMP)  ; LAB_00509e87
    TEST EDX,EDX                        ; 00509e69
        ;   Label: LAB_00509e69
    JZ 0x00509eab                       ; 00509e6b
        ;   XREF to: 00509eab (CONDITIONAL_JUMP)  ; LAB_00509eab
    LEA EAX,[EBX + 0xc]                 ; 00509e6d
    CMP EAX,EDX                         ; 00509e70
    JNZ 0x00509e99                      ; 00509e72
        ;   XREF to: 00509e99 (CONDITIONAL_JUMP)  ; LAB_00509e99
    MOV dword ptr [EBX + 0x24],0x40a00000 ; 00509e74
        ;   Label: LAB_00509e74
    MOV dword ptr [EBX + 0x38],0x0      ; 00509e7b
    ADD ESP,0x28                        ; 00509e82
    POP EBX                             ; 00509e85
    RET                                 ; 00509e86
    MOV ECX,dword ptr [EAX]             ; 00509e87
        ;   Label: LAB_00509e87
    MOV dword ptr [EBX],ECX             ; 00509e89
    MOV ECX,dword ptr [EAX + 0x4]       ; 00509e8b
    MOV dword ptr [EBX + 0x4],ECX       ; 00509e8e
    MOV ECX,dword ptr [EAX + 0x8]       ; 00509e91
    MOV dword ptr [EBX + 0x8],ECX       ; 00509e94
    JMP 0x00509e69                      ; 00509e97
        ;   XREF to: 00509e69 (UNCONDITIONAL_JUMP)  ; LAB_00509e69
    MOV ECX,dword ptr [EDX]             ; 00509e99
        ;   Label: LAB_00509e99
    MOV dword ptr [EAX],ECX             ; 00509e9b
    MOV ECX,dword ptr [EDX + 0x4]       ; 00509e9d
    MOV dword ptr [EAX + 0x4],ECX       ; 00509ea0
    MOV ECX,dword ptr [EDX + 0x8]       ; 00509ea3
    MOV dword ptr [EAX + 0x8],ECX       ; 00509ea6
    JMP 0x00509e74                      ; 00509ea9
        ;   XREF to: 00509e74 (UNCONDITIONAL_JUMP)  ; LAB_00509e74
    PUSH 0x3fc90fdb                     ; 00509eab
        ;   Label: LAB_00509eab
    PUSH 0x3f490fdb                     ; 00509eb0
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00509eb5
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x2c],EAX      ; 00509eba
    FLD float ptr [ESP + 0x2c]          ; 00509ebe
    ADD ESP,0x8                         ; 00509ec2
    PUSH 0x40c90fdb                     ; 00509ec5
    PUSH 0x0                            ; 00509eca
    FSTP float ptr [ESP + 0x18]         ; 00509ecc
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00509ed0
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x2c],EAX      ; 00509ed5
    FLD float ptr [ESP + 0x2c]          ; 00509ed9
    ADD ESP,0x8                         ; 00509edd
    FLD ST0                             ; 00509ee0
    FCOS                                ; 00509ee2
    FLD float ptr [ESP + 0x10]          ; 00509ee4
    FLD ST0                             ; 00509ee8
    FCOS                                ; 00509eea
    FXCH ST3                            ; 00509eec
    FSIN                                ; 00509eee
    FXCH                                ; 00509ef0
    FSIN                                ; 00509ef2
    FXCH ST2                            ; 00509ef4
    FLD float ptr [0x005cb659]          ; 00509ef6 | DAT_005cb659
    FXCH                                ; 00509efc
    FMUL ST1                            ; 00509efe
    FXCH ST2                            ; 00509f00
    FMUL ST1                            ; 00509f02
    FXCH ST3                            ; 00509f04
    FMULP                               ; 00509f06
    FXCH                                ; 00509f08
    FMUL ST3                            ; 00509f0a
    FXCH ST2                            ; 00509f0c
    FMULP ST3                           ; 00509f0e
    FSTP float ptr [EBX + 0x10]         ; 00509f10
    FSTP float ptr [EBX + 0xc]          ; 00509f13
    FSTP float ptr [EBX + 0x14]         ; 00509f16
    MOV dword ptr [EBX + 0x24],0x40a00000 ; 00509f19
    MOV dword ptr [EBX + 0x38],0x0      ; 00509f20
    ADD ESP,0x28                        ; 00509f27
    POP EBX                             ; 00509f2a
    RET                                 ; 00509f2b

