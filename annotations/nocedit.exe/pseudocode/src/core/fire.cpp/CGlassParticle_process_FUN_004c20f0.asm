; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CGlassParticle_process_FUN_004c20f0(CGlassParticle *this_ptr)
;
; Parameters:
; CGlassParticle * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; Referenced Globals:
;   CGame* g_CGamePtr = 02d81a9c
;   int g_GlobalDeltaTimeInt
;   undefined4 g_CGameInstance.delta_time_float
;
; Called Functions:
;   core_particle.cpp_CParticle_process_FUN_00545760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c20f0
        ;   Label: core_fire.cpp_CGlassParticle_process_FUN_004c20f0
    SUB ESP,0x4                         ; 004c20f1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004c20f4
    MOV EAX,[0x0067b654]                ; 004c20f8 | g_CGamePtr
    FLD float ptr [EBX + 0x54]          ; 004c20fd
    MOV EAX,dword ptr [EAX + 0x264]     ; 004c2100 | g_CGameInstance.delta_time_float
    FLD float ptr [EBX + 0x58]          ; 004c2106
    MOV dword ptr [ESP],EAX             ; 004c2109
    PUSH EBX                            ; 004c210c
    FXCH                                ; 004c210d
    FADD float ptr [ESP + 0x4]          ; 004c210f
    FXCH                                ; 004c2113
    FADD float ptr [ESP + 0x4]          ; 004c2115
    FXCH                                ; 004c2119
    FSTP float ptr [EBX + 0x54]         ; 004c211b
    FSTP float ptr [EBX + 0x58]         ; 004c211e
    CALL core_particle.cpp_CParticle_process_FUN_00545760 ; 004c2121
        ;   XREF to: 00545760 (UNCONDITIONAL_CALL)  ; void core_particle.cpp_CParticle_process_FUN_00545760(CParticle * this_ptr)
    MOV EAX,[0x02cf6a80]                ; 004c2126 | g_GlobalDeltaTimeInt
    MOV EDX,EAX                         ; 004c212b
    MOV ECX,0x6                         ; 004c212d
    SAR EDX,0x1f                        ; 004c2132
    IDIV ECX                            ; 004c2135
    MOV EDX,dword ptr [EBX + 0x38]      ; 004c2137
    SUB EDX,EAX                         ; 004c213a
    ADD ESP,0x4                         ; 004c213c
    MOV dword ptr [EBX + 0x38],EDX      ; 004c213f
    TEST EDX,EDX                        ; 004c2142
    JL 0x004c214b                       ; 004c2144
        ;   XREF to: 004c214b (CONDITIONAL_JUMP)  ; LAB_004c214b
    ADD ESP,0x4                         ; 004c2146
    POP EBX                             ; 004c2149
    RET                                 ; 004c214a
    MOV dword ptr [EBX + 0x38],0x0      ; 004c214b
        ;   Label: LAB_004c214b
    MOV dword ptr [EBX + 0x18],0x0      ; 004c2152
    ADD ESP,0x4                         ; 004c2159
    POP EBX                             ; 004c215c
    RET                                 ; 004c215d

