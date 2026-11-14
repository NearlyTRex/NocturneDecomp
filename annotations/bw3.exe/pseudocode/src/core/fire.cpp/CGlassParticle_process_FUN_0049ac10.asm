; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CGlassParticle_process_FUN_0049ac10(CGlassParticle *this_ptr)
;
; Parameters:
; CGlassParticle * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 DAT_01c5fad0
;   undefined4 g_CGameInstance.delta_time_float
;
; Called Functions:
;   core_particle.cpp_FUN_00509f30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049ac10
        ;   Label: core_fire.cpp_CGlassParticle_process_FUN_0049ac10
    SUB ESP,0x4                         ; 0049ac11
    MOV EBX,dword ptr [ESP + 0xc]       ; 0049ac14
    MOV EAX,[0x005fe9dc]                ; 0049ac18 | g_CGamePtr
    FLD float ptr [EBX + 0x8c]          ; 0049ac1d
    MOV EAX,dword ptr [EAX + 0x314]     ; 0049ac23 | g_CGameInstance.delta_time_float
    FLD float ptr [EBX + 0x90]          ; 0049ac29
    MOV dword ptr [ESP],EAX             ; 0049ac2f
    PUSH EBX                            ; 0049ac32
    FXCH                                ; 0049ac33
    FADD float ptr [ESP + 0x4]          ; 0049ac35
    FXCH                                ; 0049ac39
    FADD float ptr [ESP + 0x4]          ; 0049ac3b
    FXCH                                ; 0049ac3f
    FSTP float ptr [EBX + 0x8c]         ; 0049ac41
    FSTP float ptr [EBX + 0x90]         ; 0049ac47
    CALL core_particle.cpp_FUN_00509f30 ; 0049ac4d
        ;   XREF to: 00509f30 (UNCONDITIONAL_CALL)  ; undefined core_particle.cpp_FUN_00509f30()
    MOV EAX,[0x01c5fad0]                ; 0049ac52 | DAT_01c5fad0
    MOV EDX,EAX                         ; 0049ac57
    MOV ECX,0x6                         ; 0049ac59
    SAR EDX,0x1f                        ; 0049ac5e
    IDIV ECX                            ; 0049ac61
    MOV EDX,dword ptr [EBX + 0x40]      ; 0049ac63
    SUB EDX,EAX                         ; 0049ac66
    ADD ESP,0x4                         ; 0049ac68
    MOV dword ptr [EBX + 0x40],EDX      ; 0049ac6b
    TEST EDX,EDX                        ; 0049ac6e
    JL 0x0049ac77                       ; 0049ac70
        ;   XREF to: 0049ac77 (CONDITIONAL_JUMP)  ; LAB_0049ac77
    ADD ESP,0x4                         ; 0049ac72
    POP EBX                             ; 0049ac75
    RET                                 ; 0049ac76
    MOV dword ptr [EBX + 0x40],0x0      ; 0049ac77
        ;   Label: LAB_0049ac77
    MOV dword ptr [EBX + 0x24],0x0      ; 0049ac7e
    ADD ESP,0x4                         ; 0049ac85
    POP EBX                             ; 0049ac88
    RET                                 ; 0049ac89

