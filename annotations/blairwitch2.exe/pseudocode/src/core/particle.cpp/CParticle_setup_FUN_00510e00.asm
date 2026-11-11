; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_particle_cpp_CParticle_setup_FUN_00510e00(CParticle *this_ptr,CVector3f *position,CVector3f *velocity)
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
;   core_fire.cpp_CLeaf_init_FUN_00496750 at 00496767
;   core_fire.cpp_CRock_setup_FUN_004965f0 at 00496606
;   core_fire.cpp_CShell_setup_FUN_0049b660 at 0049b678
;   core_fire.cpp_FUN_00496c60 at 00497036
;   core_gore.cpp_CBloodParticle_setup_FUN_004c7460 at 004c7486
;
; Referenced Globals:
;   undefined4 DAT_005e1596
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00510e00
        ;   Label: core_particle.cpp_CParticle_setup_FUN_00510e00
    SUB ESP,0x28                        ; 00510e01
    MOV EBX,dword ptr [ESP + 0x30]      ; 00510e04
    MOV EAX,dword ptr [ESP + 0x34]      ; 00510e08
    MOV EDX,dword ptr [ESP + 0x38]      ; 00510e0c
    MOV dword ptr [EBX + 0x1c],0xc2000000 ; 00510e10
    MOV dword ptr [EBX + 0x20],0x0      ; 00510e17
    MOV dword ptr [EBX + 0x18],0x0      ; 00510e1e
    CMP EBX,EAX                         ; 00510e25
    JNZ 0x00510e47                      ; 00510e27
        ;   XREF to: 00510e47 (CONDITIONAL_JUMP)  ; LAB_00510e47
    TEST EDX,EDX                        ; 00510e29
        ;   Label: LAB_00510e29
    JZ 0x00510e6b                       ; 00510e2b
        ;   XREF to: 00510e6b (CONDITIONAL_JUMP)  ; LAB_00510e6b
    LEA EAX,[EBX + 0xc]                 ; 00510e2d
    CMP EAX,EDX                         ; 00510e30
    JNZ 0x00510e59                      ; 00510e32
        ;   XREF to: 00510e59 (CONDITIONAL_JUMP)  ; LAB_00510e59
    MOV dword ptr [EBX + 0x24],0x40a00000 ; 00510e34
        ;   Label: LAB_00510e34
    MOV dword ptr [EBX + 0x38],0x0      ; 00510e3b
    ADD ESP,0x28                        ; 00510e42
    POP EBX                             ; 00510e45
    RET                                 ; 00510e46
    MOV ECX,dword ptr [EAX]             ; 00510e47
        ;   Label: LAB_00510e47
    MOV dword ptr [EBX],ECX             ; 00510e49
    MOV ECX,dword ptr [EAX + 0x4]       ; 00510e4b
    MOV dword ptr [EBX + 0x4],ECX       ; 00510e4e
    MOV ECX,dword ptr [EAX + 0x8]       ; 00510e51
    MOV dword ptr [EBX + 0x8],ECX       ; 00510e54
    JMP 0x00510e29                      ; 00510e57
        ;   XREF to: 00510e29 (UNCONDITIONAL_JUMP)  ; LAB_00510e29
    MOV ECX,dword ptr [EDX]             ; 00510e59
        ;   Label: LAB_00510e59
    MOV dword ptr [EAX],ECX             ; 00510e5b
    MOV ECX,dword ptr [EDX + 0x4]       ; 00510e5d
    MOV dword ptr [EAX + 0x4],ECX       ; 00510e60
    MOV ECX,dword ptr [EDX + 0x8]       ; 00510e63
    MOV dword ptr [EAX + 0x8],ECX       ; 00510e66
    JMP 0x00510e34                      ; 00510e69
        ;   XREF to: 00510e34 (UNCONDITIONAL_JUMP)  ; LAB_00510e34
    PUSH 0x3fc90fdb                     ; 00510e6b
        ;   Label: LAB_00510e6b
    PUSH 0x3f490fdb                     ; 00510e70
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00510e75
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x2c],EAX      ; 00510e7a
    FLD float ptr [ESP + 0x2c]          ; 00510e7e
    ADD ESP,0x8                         ; 00510e82
    PUSH 0x40c90fdb                     ; 00510e85
    PUSH 0x0                            ; 00510e8a
    FSTP float ptr [ESP + 0x18]         ; 00510e8c
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00510e90
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x2c],EAX      ; 00510e95
    FLD float ptr [ESP + 0x2c]          ; 00510e99
    ADD ESP,0x8                         ; 00510e9d
    FLD ST0                             ; 00510ea0
    FCOS                                ; 00510ea2
    FLD float ptr [ESP + 0x10]          ; 00510ea4
    FLD ST0                             ; 00510ea8
    FCOS                                ; 00510eaa
    FXCH ST3                            ; 00510eac
    FSIN                                ; 00510eae
    FXCH                                ; 00510eb0
    FSIN                                ; 00510eb2
    FXCH ST2                            ; 00510eb4
    FLD float ptr [0x005e1596]          ; 00510eb6 | DAT_005e1596
    FXCH                                ; 00510ebc
    FMUL ST1                            ; 00510ebe
    FXCH ST2                            ; 00510ec0
    FMUL ST1                            ; 00510ec2
    FXCH ST3                            ; 00510ec4
    FMULP                               ; 00510ec6
    FXCH                                ; 00510ec8
    FMUL ST3                            ; 00510eca
    FXCH ST2                            ; 00510ecc
    FMULP ST3                           ; 00510ece
    FSTP float ptr [EBX + 0x10]         ; 00510ed0
    FSTP float ptr [EBX + 0xc]          ; 00510ed3
    FSTP float ptr [EBX + 0x14]         ; 00510ed6
    MOV dword ptr [EBX + 0x24],0x40a00000 ; 00510ed9
    MOV dword ptr [EBX + 0x38],0x0      ; 00510ee0
    ADD ESP,0x28                        ; 00510ee7
    POP EBX                             ; 00510eea
    RET                                 ; 00510eeb

