; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_particle_cpp_CParticle_setup_FUN_00532160(CParticle *this_ptr,CVector3f *position,CVector3f *velocity)
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
;   core_fire.cpp_CLeaf_init_FUN_004af0f0 at 004af107
;   core_fire.cpp_CRock_setup_FUN_004aef90 at 004aefa6
;   core_fire.cpp_CShell_setup_FUN_004b4000 at 004b4018
;   core_fire.cpp_FUN_004af600 at 004af9d6
;   core_gore.cpp_CBloodParticle_setup_FUN_004e3e20 at 004e3e46
;
; Referenced Globals:
;   undefined4 DAT_005ec7f1
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00532160
        ;   Label: core_particle.cpp_CParticle_setup_FUN_00532160
    SUB ESP,0x28                        ; 00532161
    MOV EBX,dword ptr [ESP + 0x30]      ; 00532164
    MOV EAX,dword ptr [ESP + 0x34]      ; 00532168
    MOV EDX,dword ptr [ESP + 0x38]      ; 0053216c
    MOV dword ptr [EBX + 0x1c],0xc2000000 ; 00532170
    MOV dword ptr [EBX + 0x20],0x0      ; 00532177
    MOV dword ptr [EBX + 0x18],0x0      ; 0053217e
    CMP EBX,EAX                         ; 00532185
    JNZ 0x005321a7                      ; 00532187
        ;   XREF to: 005321a7 (CONDITIONAL_JUMP)  ; LAB_005321a7
    TEST EDX,EDX                        ; 00532189
        ;   Label: LAB_00532189
    JZ 0x005321cb                       ; 0053218b
        ;   XREF to: 005321cb (CONDITIONAL_JUMP)  ; LAB_005321cb
    LEA EAX,[EBX + 0xc]                 ; 0053218d
    CMP EAX,EDX                         ; 00532190
    JNZ 0x005321b9                      ; 00532192
        ;   XREF to: 005321b9 (CONDITIONAL_JUMP)  ; LAB_005321b9
    MOV dword ptr [EBX + 0x24],0x40a00000 ; 00532194
        ;   Label: LAB_00532194
    MOV dword ptr [EBX + 0x38],0x0      ; 0053219b
    ADD ESP,0x28                        ; 005321a2
    POP EBX                             ; 005321a5
    RET                                 ; 005321a6
    MOV ECX,dword ptr [EAX]             ; 005321a7
        ;   Label: LAB_005321a7
    MOV dword ptr [EBX],ECX             ; 005321a9
    MOV ECX,dword ptr [EAX + 0x4]       ; 005321ab
    MOV dword ptr [EBX + 0x4],ECX       ; 005321ae
    MOV ECX,dword ptr [EAX + 0x8]       ; 005321b1
    MOV dword ptr [EBX + 0x8],ECX       ; 005321b4
    JMP 0x00532189                      ; 005321b7
        ;   XREF to: 00532189 (UNCONDITIONAL_JUMP)  ; LAB_00532189
    MOV ECX,dword ptr [EDX]             ; 005321b9
        ;   Label: LAB_005321b9
    MOV dword ptr [EAX],ECX             ; 005321bb
    MOV ECX,dword ptr [EDX + 0x4]       ; 005321bd
    MOV dword ptr [EAX + 0x4],ECX       ; 005321c0
    MOV ECX,dword ptr [EDX + 0x8]       ; 005321c3
    MOV dword ptr [EAX + 0x8],ECX       ; 005321c6
    JMP 0x00532194                      ; 005321c9
        ;   XREF to: 00532194 (UNCONDITIONAL_JUMP)  ; LAB_00532194
    PUSH 0x3fc90fdb                     ; 005321cb
        ;   Label: LAB_005321cb
    PUSH 0x3f490fdb                     ; 005321d0
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 005321d5
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x2c],EAX      ; 005321da
    FLD float ptr [ESP + 0x2c]          ; 005321de
    ADD ESP,0x8                         ; 005321e2
    PUSH 0x40c90fdb                     ; 005321e5
    PUSH 0x0                            ; 005321ea
    FSTP float ptr [ESP + 0x18]         ; 005321ec
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 005321f0
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x2c],EAX      ; 005321f5
    FLD float ptr [ESP + 0x2c]          ; 005321f9
    ADD ESP,0x8                         ; 005321fd
    FLD ST0                             ; 00532200
    FCOS                                ; 00532202
    FLD float ptr [ESP + 0x10]          ; 00532204
    FLD ST0                             ; 00532208
    FCOS                                ; 0053220a
    FXCH ST3                            ; 0053220c
    FSIN                                ; 0053220e
    FXCH                                ; 00532210
    FSIN                                ; 00532212
    FXCH ST2                            ; 00532214
    FLD float ptr [0x005ec7f1]          ; 00532216 | DAT_005ec7f1
    FXCH                                ; 0053221c
    FMUL ST1                            ; 0053221e
    FXCH ST2                            ; 00532220
    FMUL ST1                            ; 00532222
    FXCH ST3                            ; 00532224
    FMULP                               ; 00532226
    FXCH                                ; 00532228
    FMUL ST3                            ; 0053222a
    FXCH ST2                            ; 0053222c
    FMULP ST3                           ; 0053222e
    FSTP float ptr [EBX + 0x10]         ; 00532230
    FSTP float ptr [EBX + 0xc]          ; 00532233
    FSTP float ptr [EBX + 0x14]         ; 00532236
    MOV dword ptr [EBX + 0x24],0x40a00000 ; 00532239
    MOV dword ptr [EBX + 0x38],0x0      ; 00532240
    ADD ESP,0x28                        ; 00532247
    POP EBX                             ; 0053224a
    RET                                 ; 0053224b

