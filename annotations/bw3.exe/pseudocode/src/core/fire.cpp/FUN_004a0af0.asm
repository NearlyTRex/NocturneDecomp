; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_004a0af0(int param_1)
;
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 g_CGameInstance.field788_0x314
;
; Called Functions:
;   core_particle.cpp_FUN_00509f30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a0af0
        ;   Label: core_fire.cpp_FUN_004a0af0
    SUB ESP,0x1c                        ; 004a0af1
    MOV EBX,dword ptr [ESP + 0x24]      ; 004a0af4
    FLD float ptr [EBX + 0x24]          ; 004a0af8
    FLDZ                                ; 004a0afb
    FCOMPP                              ; 004a0afd
    FNSTSW AX                           ; 004a0aff
    SAHF                                ; 004a0b01
    JC 0x004a0b09                       ; 004a0b02
        ;   XREF to: 004a0b09 (CONDITIONAL_JUMP)  ; LAB_004a0b09
    ADD ESP,0x1c                        ; 004a0b04
    POP EBX                             ; 004a0b07
    RET                                 ; 004a0b08
    PUSH EDI                            ; 004a0b09
        ;   Label: LAB_004a0b09
    PUSH ESI                            ; 004a0b0a
    PUSH EBX                            ; 004a0b0b
    CALL core_particle.cpp_FUN_00509f30 ; 004a0b0c
        ;   XREF to: 00509f30 (UNCONDITIONAL_CALL)  ; undefined core_particle.cpp_FUN_00509f30()
    MOV EAX,[0x005fe9dc]                ; 004a0b11 | g_CGamePtr
    ADD ESP,0x4                         ; 004a0b16
    MOV EAX,dword ptr [EAX + 0x314]     ; 004a0b19 | g_CGameInstance.field788_0x314
    MOV dword ptr [ESP + 0x20],EAX      ; 004a0b1f
    LEA EAX,[EBX + 0x4c]                ; 004a0b23
    FLD float ptr [EAX]                 ; 004a0b26
    FMUL float ptr [ESP + 0x20]         ; 004a0b28
    FLD float ptr [EAX + 0x4]           ; 004a0b2c
    FMUL float ptr [ESP + 0x20]         ; 004a0b2f
    FLD float ptr [EAX + 0x8]           ; 004a0b33
    FMUL float ptr [ESP + 0x20]         ; 004a0b36
    LEA EDI,[ESP + 0x14]                ; 004a0b3a
    LEA ESI,[ESP + 0x8]                 ; 004a0b3e
    LEA EAX,[EBX + 0x40]                ; 004a0b42
    FXCH ST2                            ; 004a0b45
    FSTP float ptr [ESP + 0x8]          ; 004a0b47
    FSTP float ptr [ESP + 0xc]          ; 004a0b4b
    FSTP float ptr [ESP + 0x10]         ; 004a0b4f
    MOVSD ES:EDI,ESI                    ; 004a0b53
    MOVSD ES:EDI,ESI                    ; 004a0b54
    MOVSD ES:EDI,ESI                    ; 004a0b55
    FLD float ptr [EAX]                 ; 004a0b56
    FLD float ptr [EAX + 0x4]           ; 004a0b58
    FLD float ptr [EAX + 0x8]           ; 004a0b5b
    FXCH ST2                            ; 004a0b5e
    FADD float ptr [ESP + 0x14]         ; 004a0b60
    FXCH                                ; 004a0b64
    FADD float ptr [ESP + 0x18]         ; 004a0b66
    FXCH ST2                            ; 004a0b6a
    FADD float ptr [ESP + 0x1c]         ; 004a0b6c
    FXCH                                ; 004a0b70
    FSTP float ptr [EAX]                ; 004a0b72
    FXCH                                ; 004a0b74
    FSTP float ptr [EAX + 0x4]          ; 004a0b76
    FSTP float ptr [EAX + 0x8]          ; 004a0b79
    POP ESI                             ; 004a0b7c
    POP EDI                             ; 004a0b7d
    ADD ESP,0x1c                        ; 004a0b7e
    POP EBX                             ; 004a0b81
    RET                                 ; 004a0b82

