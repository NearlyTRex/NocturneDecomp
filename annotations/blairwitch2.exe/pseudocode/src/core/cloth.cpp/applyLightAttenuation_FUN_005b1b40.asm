; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_cloth_cpp_applyLightAttenuation_FUN_005b1b40(CVector3f *v)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   v
;
; Referenced Globals:
;   undefined4 DAT_01caf5b8
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 005b1b40
        ;   Label: core_cloth.cpp_applyLightAttenuation_FUN_005b1b40
    MOV EAX,dword ptr [ESP + 0xc]       ; 005b1b43
    FLD float ptr [EAX + 0x4]           ; 005b1b47
    FMUL ST0                            ; 005b1b4a
    FLD float ptr [EAX]                 ; 005b1b4c
    FMUL ST0                            ; 005b1b4e
    FADDP                               ; 005b1b50
    FLD float ptr [EAX + 0x8]           ; 005b1b52
    FMUL ST0                            ; 005b1b55
    FADDP                               ; 005b1b57
    FSTP float ptr [ESP]                ; 005b1b59
    MOV EDX,dword ptr [ESP]             ; 005b1b5c
    MOV ECX,dword ptr [0x01caf5b8]      ; 005b1b5f | DAT_01caf5b8
    SAR EDX,0x1                         ; 005b1b65
    SUB ECX,EDX                         ; 005b1b67
    MOV dword ptr [ESP + 0x4],ECX       ; 005b1b69
    FLD float ptr [EAX]                 ; 005b1b6d
    FMUL float ptr [ESP + 0x4]          ; 005b1b6f
    FLD float ptr [EAX + 0x4]           ; 005b1b73
    FMUL float ptr [ESP + 0x4]          ; 005b1b76
    FLD float ptr [EAX + 0x8]           ; 005b1b7a
    FMUL float ptr [ESP + 0x4]          ; 005b1b7d
    FXCH ST2                            ; 005b1b81
    FSTP float ptr [EAX]                ; 005b1b83
    FSTP float ptr [EAX + 0x4]          ; 005b1b85
    FSTP float ptr [EAX + 0x8]          ; 005b1b88
    ADD ESP,0x8                         ; 005b1b8b
    RET                                 ; 005b1b8e

