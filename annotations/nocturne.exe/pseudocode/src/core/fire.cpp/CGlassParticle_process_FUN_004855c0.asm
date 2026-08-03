; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CGlassParticle_process_FUN_004855c0(CGlassParticle *this_ptr)
;
; Parameters:
; CGlassParticle * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; Referenced Globals:
;   CGame* g_CGame_PTR_005b9354 = 01c775ec
;   undefined4 DAT_01bd1d80
;   undefined4 g_CGame_01c775ec.delta_time_float
;
; Called Functions:
;   core_particle.cpp_CParticle_process_FUN_004ef120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004855c0
        ;   Label: core_fire.cpp_CGlassParticle_process_FUN_004855c0
    SUB ESP,0x4                         ; 004855c1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004855c4
    MOV EAX,[0x005b9354]                ; 004855c8 | g_CGame_PTR_005b9354
    FLD float ptr [EBX + 0x54]          ; 004855cd
    MOV EAX,dword ptr [EAX + 0x264]     ; 004855d0 | g_CGame_01c775ec.delta_time_float
    FLD float ptr [EBX + 0x58]          ; 004855d6
    MOV dword ptr [ESP],EAX             ; 004855d9
    PUSH EBX                            ; 004855dc
    FXCH                                ; 004855dd
    FADD float ptr [ESP + 0x4]          ; 004855df
    FXCH                                ; 004855e3
    FADD float ptr [ESP + 0x4]          ; 004855e5
    FXCH                                ; 004855e9
    FSTP float ptr [EBX + 0x54]         ; 004855eb
    FSTP float ptr [EBX + 0x58]         ; 004855ee
    CALL core_particle.cpp_CParticle_process_FUN_004ef120 ; 004855f1
        ;   XREF to: 004ef120 (UNCONDITIONAL_CALL)  ; void core_particle.cpp_CParticle_process_FUN_004ef120(CParticle * this_ptr)
    MOV EAX,[0x01bd1d80]                ; 004855f6 | DAT_01bd1d80
    MOV EDX,EAX                         ; 004855fb
    MOV ECX,0x6                         ; 004855fd
    SAR EDX,0x1f                        ; 00485602
    IDIV ECX                            ; 00485605
    MOV EDX,dword ptr [EBX + 0x38]      ; 00485607
    SUB EDX,EAX                         ; 0048560a
    ADD ESP,0x4                         ; 0048560c
    MOV dword ptr [EBX + 0x38],EDX      ; 0048560f
    TEST EDX,EDX                        ; 00485612
    JL 0x0048561b                       ; 00485614
        ;   XREF to: 0048561b (CONDITIONAL_JUMP)  ; LAB_0048561b
    ADD ESP,0x4                         ; 00485616
    POP EBX                             ; 00485619
    RET                                 ; 0048561a
    MOV dword ptr [EBX + 0x38],0x0      ; 0048561b
        ;   Label: LAB_0048561b
    MOV dword ptr [EBX + 0x18],0x0      ; 00485622
    ADD ESP,0x4                         ; 00485629
    POP EBX                             ; 0048562c
    RET                                 ; 0048562d

